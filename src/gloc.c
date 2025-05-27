/*
 * gloc.c - gloc implementation
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
#include "gauche/priv/glocP.h"

/*---------------------------------------------------------------
 * GLOCs
 */

static void gloc_print(ScmObj obj, ScmPort *port,
                       ScmWriteContext *ctx SCM_UNUSED)
{
    ScmGloc *g = SCM_GLOC(obj);
    Scm_Printf(port, "#<gloc %S#%S%s>", g->module->name,
               g->name,
               (Scm_GlocConstP(g)
                ? " const"
                : (Scm_GlocInlinableP(g)
                   ? " inlinable"
                   : (SCM_GLOC_PHANTOM_BINDING_P(g)
                      ? " phantom"
                      : ""))));
}

SCM_DEFINE_BUILTIN_CLASS_SIMPLE(Scm_GlocClass, gloc_print);

ScmObj Scm_MakeGloc(ScmSymbol *sym, ScmModule *module)
{
    ScmGloc *g = SCM_NEW(ScmGloc);
    SCM_SET_CLASS(g, &Scm_GlocClass);
    g->name = sym;
    g->module = module;
    g->value = SCM_UNBOUND;
    g->hidden = FALSE;
    g->getter = NULL;
    g->setter = NULL;
    return SCM_OBJ(g);
}

/* Public accessor/mutators
   We don't allow Scm_GlocGetValues to return SCM_UNBOUND or SCM_UNINITIALIZED.
   (UNINITIALIZED only occurs temporarily during compilation, but we check
   it just in case.)
*/
ScmObj Scm_GlocGetValue(ScmGloc *gloc)
{
    ScmObj v = SCM_GLOC_GET(gloc);
    if (SCM_UNBOUNDP(v)) {
        Scm_VMThrowException(Scm_VM(),
                             Scm_MakeUnboundVariableError(SCM_OBJ(gloc->name)),
                             0);
    }
    if (SCM_UNINITIALIZEDP(v)) {
        Scm_Error("uninitialized variable: %S", SCM_OBJ(gloc->name));
    }
    return v;
}

void Scm_GlocSetValue(ScmGloc *gloc, ScmObj val)
{
    SCM_GLOC_SET(gloc, val);
}

int Scm_GlocPhantomBindingP(ScmGloc *gloc)
{
    return SCM_GLOC_PHANTOM_BINDING_P(gloc);
}


/* special setters for const and inlinable bindings. */
ScmObj Scm_GlocConstSetter(ScmGloc *gloc, ScmObj val SCM_UNUSED)
{
    Scm_Error("cannot change constant value of %S#%S",
              gloc->module->name, gloc->name);
    return SCM_UNDEFINED;       /* dummy */
}

ScmObj Scm_GlocInlinableSetter(ScmGloc *gloc, ScmObj val)
{
    Scm_Warn("altering inlinable binding: %S#%S",
             gloc->module->name, gloc->name);
    return val;
}

/* Kludge - we need to distinguish 'dummy' inlinable bindings (which are
   only needed during compilation in order to inline expand in the same
   compilation unit), and real inlinable bindings.  The difference is that
   the latter can supersede the former.  We may do it with flags.  For now,
   we keep the strategy of setter pointer comparison.
*/
static ScmObj gloc_dummy_inlinable_setter(ScmGloc *gloc, ScmObj val)
{
    Scm_Warn("altering inlinable binding: %S#%S",
             gloc->module->name, gloc->name);
    return val;
}

int Scm_GlocConstP(ScmGloc *gloc)
{
    return ((gloc)->setter == Scm_GlocConstSetter);
}

int Scm_GlocInlinableP(ScmGloc *gloc)
{
    return (((gloc)->setter == Scm_GlocInlinableSetter)
            || ((gloc)->setter == gloc_dummy_inlinable_setter));
}

static int gloc_dummy_inlinable_p(ScmGloc *gloc)
{
    return ((gloc)->setter == gloc_dummy_inlinable_setter);
}


/* This is to check if the module can supesede the exsiting binding of gloc
 * with the new value.  (It is different from setting the new value, which
 * would be handled by SCM_GLOC_SET.  We're talking the case that a new gloc
 * is created that will replace the current gloc, by Scm_MakeBinding.)
 *
 * If previous gloc is constant or inlinable, it is only replacable with the
 * same kind and value.  Except that if the previous gloc is dummy inlinable,
 * and the new gloc is inlinable; or, the previous value and new value are
 * both classes (which means it is class redefinition).
 */
int Scm_GlocSupersedableP(ScmGloc *gloc, u_long flags, ScmObj newval)
{
    if (Scm_GlocConstP(gloc)) {
        return ((flags & SCM_BINDING_CONST) && Scm_EqualP(gloc->value, newval));
    }
    if (Scm_GlocInlinableP(gloc)) {
        if (gloc_dummy_inlinable_p(gloc)) {
            return (flags & SCM_BINDING_INLINABLE);
        } else if (flags & SCM_BINDING_INLINABLE) {
            return (Scm_EqualP(gloc->value, newval)
                    || (SCM_ISA(gloc->value, SCM_CLASS_CLASS)
                        && SCM_ISA(newval, SCM_CLASS_CLASS)));
        } else {
            return FALSE;
        }
    }
    return TRUE;
}

/* Change binding flags.  Do not use casually. */
void Scm_GlocMark(ScmGloc *gloc, int flags)
{
    if (flags & SCM_BINDING_CONST) {
        gloc->setter = Scm_GlocConstSetter;
    } else if (flags & SCM_BINDING_INLINABLE) {
        if (flags & SCM_BINDING_DUMMY) {
            gloc->setter = gloc_dummy_inlinable_setter;
        } else {
            gloc->setter = Scm_GlocInlinableSetter;
        }
    } else {
        gloc->setter = NULL;
    }
}

/* For the backward ABI compatibility */
ScmObj Scm_GlocMarkConst(ScmGloc *gloc)
{
    Scm_GlocMark(gloc, SCM_BINDING_CONST);
    return SCM_OBJ(gloc);
}

/* For the backward ABI compatibility */
ScmObj Scm_GlocUnmarkConst(ScmGloc *gloc)
{
    Scm_GlocMark(gloc, 0);
    return SCM_OBJ(gloc);
}
