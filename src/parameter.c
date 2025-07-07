/*
 * parameter.c - parameter support
 *
 *   Copyright (c) 2000-2024  Shiro Kawai  <shiro@acm.org>
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *   1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 *   3. Neither the name of the authors nor the names of its contributors
 *      may be used to endorse or promote products derived from this
 *      software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 *   TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#define LIBGAUCHE_BODY
#include "gauche.h"
#include "gauche/priv/configP.h"
#include "gauche/vm.h"
#include "gauche/priv/vmP.h"
#include "gauche/priv/atomicP.h"
#include "gauche/priv/builtin-syms.h"
#include "gauche/priv/parameterP.h"

/*
 * Note: We're moving towards splitting thread local storage and parameters.
 * The following is a description of old model.  Eventually parameters won't
 * be thread-specific.
 *
 *
 * Parameters keep thread-local states.   When a thread is created,
 * it inherits the set of parameters from its creator (except the
 * primordial thread).
 * Parameters have additional features, such as guard procedure
 * and observer callbacks.  They are implemented in Scheme level
 * (see lib/gauche/parameter.scm).  C level only provides low-level
 * accessor and modifier methods.
 *
 * It is debatable how to implement the inheritance semantics.  MzScheme
 * keeps user-defined parameters in a hash table, and uses
 * copy-on-write mechanism to delay the copy of the table.  It is nice,
 * but difficult to use in preemptive threads, for it requires lock of
 * the table every time even in reading parameters.  Guile uses the
 * vector (Guile calls them fluids, but it's semantically equivalent
 * to parameters), and eagerly copies the vector at the creation of the
 * thread.  Since thread creation in Gauche is already heavy anyway,
 * I take Guile's approach.
 */

/* :name, :initial-value, and :type.  These keywords are set on-demand,
   since at the time of Scm_InitParameter we haven't initialized
   symbol subsystem yet.  */
static ScmObj key_name = SCM_FALSE;
static ScmObj key_initial_value = SCM_FALSE;
static ScmObj key_type = SCM_FALSE;

/* #:parameter, to mark parameter procedure.
   Initialized in Scm__InitParameter
   A parameter needs to be a procedure (R7RS); in Gauche, it is a SUBR
   holding a parameter object as data.  It is recognized as a parameter
   by having (#:parameter <name>) in the procedure info of the subr.
*/
static ScmObj sym_parameter = SCM_FALSE;

/* Class stuff */
static void pparam_print(ScmObj obj, ScmPort *out, ScmWriteContext *ctx);
static ScmObj pparam_allocate(ScmClass *klass, ScmObj initargs SCM_UNUSED);

SCM_DEFINE_BASE_CLASS(Scm_PrimitiveParameterClass, ScmPrimitiveParameter,
                      pparam_print, NULL, NULL, pparam_allocate,
                      SCM_CLASS_OBJECT_CPL);

SCM_DEFINE_BUILTIN_CLASS(Scm_ParameterizationClass,
                         NULL, NULL, NULL, NULL,
                         SCM_CLASS_OBJECT_CPL);

static void pparam_print(ScmObj obj,
                         ScmPort *out,
                         ScmWriteContext *ctx SCM_UNUSED)
{
    ScmPrimitiveParameter *p = SCM_PRIMITIVE_PARAMETER(obj);
    Scm_Printf(out, "#<%A %S%s@%p>",
               Scm_ShortClassName(Scm_ClassOf(obj)),
               p->name,
               (p->flags & SCM_PARAMETER_SHARED
                ? ""
                : (p->flags & SCM_PARAMETER_THREAD
                   ? " (thread)"
                   : " (legacy)")),
               obj);
}

static void ensure_parameter_init_keywords()
{
    /* idempotency is ensured in SCM_MAKE_KEYWORD. */
    if (SCM_FALSEP(key_name)) {
        key_name = SCM_MAKE_KEYWORD("name");
    }
    if (SCM_FALSEP(key_initial_value)) {
        key_initial_value = SCM_MAKE_KEYWORD("initial-value");
    }
    if (SCM_FALSEP(key_type)) {
        key_type = SCM_MAKE_KEYWORD("type");
    }
}

static ScmObj pparam_allocate(ScmClass *klass, ScmObj initargs)
{
    ensure_parameter_init_keywords();
    ScmObj name = Scm_GetKeyword(key_name, initargs, SCM_FALSE);
    ScmObj initval = Scm_GetKeyword(key_initial_value, initargs, SCM_FALSE);
    ScmObj type = Scm_GetKeyword(key_type, initargs, SCM_FALSE);
    u_long flags = 0;

    if (SCM_EQ(type, SCM_SYM_SHARED)) {
        flags |= SCM_PARAMETER_SHARED;
    } else if (SCM_EQ(type, SCM_SYM_THREAD)) {
        flags |= SCM_PARAMETER_THREAD;
    } else if (!SCM_EQ(type, SCM_SYM_LEGACY)) {
        Scm_Error("Invalid value for :type argument: Must be one of "
                  "shared, thread, or legacy, but got: %S", type);
    }
    ScmPrimitiveParameter *p =
        Scm_MakePrimitiveParameter(klass, name, initval, flags);
    return SCM_OBJ(p);
}

/*
 * Create a primitive parameter
 * For now, it is just the same as thread local, but we'll gradually
 * modify it for the new parameter semantics.
 */
ScmPrimitiveParameter *Scm_MakePrimitiveParameter(ScmClass *klass,
                                                  ScmObj name,
                                                  ScmObj initval,
                                                  u_long flags)
{
    /* This is called _before_ class stuff is initialized, in which case
       we can't call SCM_NEW_INSTANCE.  We know such cases only happens
       with klass == SCM_CLASS_PRIMIVITE_PARAMETER, so we hard-wire the
       case. */
    ScmPrimitiveParameter *p;
    if (SCM_EQ(klass, SCM_CLASS_PRIMITIVE_PARAMETER)) {
        p = SCM_NEW(ScmPrimitiveParameter);
        SCM_SET_CLASS(p, klass);
        SCM_INSTANCE(p)->slots = NULL;        /* no extra slots */
    } else {
        p = SCM_NEW_INSTANCE(ScmPrimitiveParameter, klass);
    }
    p->flags = flags;
    p->name = name;
    if (flags & SCM_PARAMETER_SHARED) {
        p->g.v = Scm_MakeBox(initval);
    } else {
        p->g.tl = Scm_MakeThreadLocal(name, initval,
                                      SCM_THREAD_LOCAL_INHERITABLE);
    }
    return p;
}

/*
 * External accessor
 */
int Scm_PrimitiveParameterSharedP(const ScmPrimitiveParameter *p)
{
    return (p->flags & SCM_PARAMETER_SHARED)? TRUE : FALSE;
}

/*
 * Create a SUBR that embeds a primitive parameter.
 */
static ScmObj prim_param_proc(ScmObj *argv, int argc, void *data)
{
    ScmPrimitiveParameter *p = SCM_PRIMITIVE_PARAMETER(data);
    SCM_ASSERT(SCM_PRIMITIVE_PARAMETER_P(p));
    SCM_ASSERT(argc == 1);
    if (SCM_PAIRP(argv[0])) {
        if (SCM_PAIRP(SCM_CDR(argv[0]))) {
            Scm_Error("Wrong number of arguments for a parameter:"
                      " 0 or 1 argument(s) expected, but got %S", argv[0]);
        }
        return Scm_PrimitiveParameterSet(Scm_VM(), p, SCM_CAR(argv[0]));
    } else {
        return Scm_PrimitiveParameterRef(Scm_VM(), p);
    }
}

static ScmObj general_param_proc(ScmObj *argv, int argc, void *data)
{
    ScmPrimitiveParameter *p = SCM_PRIMITIVE_PARAMETER(data);
    SCM_ASSERT(SCM_PRIMITIVE_PARAMETER_P(p));
    SCM_ASSERT(argc == 1);

    if (SCM_PAIRP(argv[0])) {
        if (SCM_PAIRP(SCM_CDR(argv[0]))) {
            Scm_Error("Wrong number of arguments for a parameter:"
                      " 0 or 1 argument(s) expected, but got %S", argv[0]);
        }

        static ScmObj parameter_set_proc = SCM_UNDEFINED;
        SCM_BIND_PROC(parameter_set_proc, "%parameter-set!",
                      Scm_GaucheInternalModule());
        return Scm_VMApply2(parameter_set_proc, SCM_OBJ(p), SCM_CAR(argv[0]));
    } else {
        return Scm_PrimitiveParameterRef(Scm_VM(), p);
    }
}

ScmObj Scm_MakePrimitiveParameterSubr(ScmPrimitiveParameter *p)
{
    ScmObj info = SCM_LIST2(sym_parameter, p->name);
    if (SCM_EQ(Scm_ClassOf(SCM_OBJ(p)), SCM_CLASS_PRIMITIVE_PARAMETER)) {
        return Scm_MakeSubr(prim_param_proc, p, 0, 1, info);
    } else {
        return Scm_MakeSubr(general_param_proc, p, 0, 1, info);
    }
}

/*
 * Parameterization
 *
 *  A parameterization is kept in DENV.
 *  (#:parameterization (<parameter> . <value>) ...)
 *  Note that the tail of parameter alist is shared with the
 *  outer parameterization.
 *
 *  If <parameter> is shared, the pair (<parameter> . <value>) is shared.
 *  Otherwise, the pair is copied when a new thread is created.
 *  (See get_denv() in vm.c)
 */

ScmObj Scm_CurrentParameterization()
{
    ScmObj k = Scm__GetDenvKey(SCM_DENV_KEY_PARAMETERIZATION);
    ScmObj parameterization = Scm_VMFindDynamicEnv(k, SCM_NIL);

    ScmParameterization *pz = SCM_NEW(ScmParameterization);
    SCM_SET_CLASS(pz, SCM_CLASS_PARAMETERIZATION);
    pz->parameterization = parameterization;
    return SCM_OBJ(pz);
}

void Scm_PushParameterization(ScmObj params, ScmObj vals)
{
    if (Scm_Length(params) != Scm_Length(vals)) {
        Scm_Error("[internal] parameterize: parameters and values don't match.");
    }

    ScmObj k = Scm__GetDenvKey(SCM_DENV_KEY_PARAMETERIZATION);
    ScmObj prev = Scm_VMFindDynamicEnv(k, SCM_NIL);
    ScmObj h = SCM_NIL, t = SCM_NIL;

    while (SCM_PAIRP(params)) {
        ScmObj p = SCM_CAR(params);
        SCM_ASSERT(SCM_PRIMITIVE_PARAMETER_P(p));
        if (SCM_PRIMITIVE_PARAMETER(p)->flags & SCM_PARAMETER_THREAD) {
            ScmThreadLocal *tl =
                Scm_MakeThreadLocal(SCM_PRIMITIVE_PARAMETER(p)->name,
                                    SCM_CAR(vals),
                                    SCM_THREAD_LOCAL_INHERITABLE);
            SCM_APPEND1(h, t, Scm_Cons(p, SCM_OBJ(tl)));
        } else {
            SCM_APPEND1(h, t, Scm_Cons(p, SCM_CAR(vals)));
        }
        params = SCM_CDR(params);
        vals = SCM_CDR(vals);
    }
    SCM_APPEND(h, t, prev);
    Scm_VMPushDynamicEnv(k, h);
}

/* Replace VM's current parameterization with PZ.
   Note that the PZ is effective until the current continuation frame
   is popped. So typically you have to call Scm_VMApply etc.
 */
void Scm_InstallParameterization(ScmParameterization *pz)
{
    ScmObj k = Scm__GetDenvKey(SCM_DENV_KEY_PARAMETERIZATION);
    Scm_VMPushDynamicEnv(k, pz->parameterization);
}

/*
 * Accessor & modifier
 */
ScmObj Scm_PrimitiveParameterRef(ScmVM *vm, const ScmPrimitiveParameter *p)
{
    ScmObj k = Scm__GetDenvKey(SCM_DENV_KEY_PARAMETERIZATION);
    ScmObj parameterization = Scm_VMFindDynamicEnv(k, SCM_NIL);
    ScmObj r = Scm_Assq(SCM_OBJ(p), parameterization);

    if (SCM_PAIRP(r)) {
        /* dynamically bound */
        if (p->flags & SCM_PARAMETER_THREAD) {
            ScmObj tl = SCM_CDR(r);
            SCM_ASSERT(SCM_THREAD_LOCAL_P(tl));
            return Scm_ThreadLocalRef(vm, SCM_THREAD_LOCAL(tl));
        } else {
            return SCM_CDR(r);
        }
    }

    /* global value */
    ScmObj v;
    if (p->flags & SCM_PARAMETER_SHARED) {
        v = SCM_BOX_VALUE(p->g.v);
    } else {
        v = Scm_ThreadLocalRef(vm, p->g.tl);
    }
    if (p->flags & SCM_PARAMETER_LAZY) return Scm_Force(v);
    else return v;
}

ScmObj Scm_PrimitiveParameterSet(ScmVM *vm, const ScmPrimitiveParameter *p,
                                 ScmObj val)
{
    ScmObj k = Scm__GetDenvKey(SCM_DENV_KEY_PARAMETERIZATION);
    ScmObj parameterization = Scm_VMFindDynamicEnv(k, SCM_NIL);
    ScmObj r = Scm_Assq(SCM_OBJ(p), parameterization);
    ScmObj old;

    if (SCM_PAIRP(r)) {
        if (p->flags & SCM_PARAMETER_THREAD) {
            ScmObj tl = SCM_CDR(r);
            SCM_ASSERT(SCM_THREAD_LOCAL_P(tl));
            old = Scm_ThreadLocalSet(vm, SCM_THREAD_LOCAL(tl), val);
        } else {
            old = SCM_CDR(r);
            SCM_SET_CDR(r, val);
        }
        return old;
    }

    if (p->flags & SCM_PARAMETER_SHARED) {
        /* TODO: need atomic operation */
        old = SCM_BOX_VALUE(p->g.v);
        SCM_BOX_SET(p->g.v, val);
    } else {
        old = Scm_ThreadLocalSet(vm, p->g.tl, val);
    }

    if (p->flags & SCM_PARAMETER_LAZY) return Scm_Force(old);
    else return old;
}

/* Convenience function.  Create a primitive parameter subr and bind
   it to NAME in MOD. */
ScmPrimitiveParameter *Scm_BindPrimitiveParameter(ScmModule *mod,
                                                  const char *name,
                                                  ScmObj initval,
                                                  u_long flags)
{
    ScmPrimitiveParameter *p =
        Scm_MakePrimitiveParameter(SCM_CLASS_PRIMITIVE_PARAMETER,
                                   SCM_INTERN(name), initval, flags);
    ScmObj subr = Scm_MakePrimitiveParameterSubr(p);
    Scm_Define(mod, SCM_SYMBOL(p->name), subr);
    return p;
}

ScmObj Scm__GetParameterSymbol()
{
    return sym_parameter;
}

void Scm__InitParameter(void)
{
    /* We don't initialize Scm_PrimitiveParameterClass yet, since class
       stuff is not initialized yet.  The class is initialized in
       class.c. */

    /* NB: At this moment, symbols are not initialized, but making uninterned
       symbol is ok. */
    sym_parameter =
        Scm_MakeSymbol(SCM_STRING(SCM_MAKE_STR("parameter")), FALSE);
}
