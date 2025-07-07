/*
 * macro.c - macro implementation
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
#include "gauche/code.h"
#include "gauche/vminsn.h"
#include "gauche/priv/macroP.h"
#include "gauche/priv/identifierP.h"
#include "gauche/priv/builtin-syms.h"

/* avoid C++ reserved name conflict.
   (I hate languages that take away names from programmers!) */
#define template templat

/* define if you want to debug syntax-rule expander */
/*#define DEBUG_SYNRULE*/

/*===================================================================
 * Syntax object
 */

static void syntax_print(ScmObj obj, ScmPort *port,
                         ScmWriteContext *mode SCM_UNUSED)
{
    ScmSymbol *name = SCM_SYNTAX(obj)->name;
    ScmModule *mod = SCM_SYNTAX(obj)->mod;
    if (mod == NULL) {
        Scm_Printf(port, "#<syntax %A>", (name ? SCM_OBJ(name) : SCM_FALSE));
    } else {
        Scm_Printf(port, "#<syntax %A#%A>",
                   mod->name,
                   (name ? SCM_OBJ(name) : SCM_FALSE));
    }
}

SCM_DEFINE_BUILTIN_CLASS_SIMPLE(Scm_SyntaxClass, syntax_print);

ScmObj Scm_MakeSyntax(ScmSymbol *name, ScmModule *mod, ScmObj handler)
{
    ScmSyntax *s = SCM_NEW(ScmSyntax);
    SCM_SET_CLASS(s, SCM_CLASS_SYNTAX);
    s->name = name;
    s->mod = mod;
    s->handler = handler;
    return SCM_OBJ(s);
}

/*===================================================================
 * Macro object
 */

ScmObj Scm_MakeMacro(ScmObj name, ScmObj transformer,
                     ScmObj info, u_long flags)
{
    ScmMacro *s = SCM_NEW(ScmMacro);
    SCM_SET_CLASS(s, SCM_CLASS_MACRO);
    s->name = name;
    s->transformer = transformer;
    s->info_alist = info;
    s->flags = flags;
    return SCM_OBJ(s);
}

ScmObj Scm_MacroTransformer(ScmMacro *mac)
{
    return mac->transformer;
}

ScmObj Scm_MacroName(ScmMacro *mac)
{
    return (mac->name? SCM_OBJ(mac->name) : SCM_FALSE);
}

/* Called from syntax-parameterize.
   This API is internal and subject to change.
 */
void Scm__SwapMacroTransformer(ScmMacro *mac,
                               ScmObj *pxformer,
                               u_long *pflags)
{
    if (!(mac->flags & SCM_MACRO_PARAMETERIZABLE)) {
        Scm_Error("Macro %S is not parameterizable.", SCM_OBJ(mac));
    }
    ScmObj oxformer = mac->transformer;
    u_long oflags = mac->flags;

    mac->transformer = *pxformer;
    mac->flags = *pflags | SCM_MACRO_PARAMETERIZABLE;

    *pxformer = oxformer;
    *pflags = oflags & (~SCM_MACRO_PARAMETERIZABLE);
}

/*===================================================================
 * SyntaxPattern object
 * Repesents a repeatable subpattern
 * (e.g. x ...), as well as the placeholder of the repeated match
 * in a template.
 */

typedef struct ScmSyntaxPatternRec {
    SCM_HEADER;
    ScmObj pattern;             /* subpattern */
    ScmObj vars;                /* pattern variables in this subpattern */
    short level;                /* level of this subpattern */
    short numFollowingItems;    /* only used in pattern (not template).
                                   this specifies the # of items that follows
                                   the repetition, excluding the last CDR.

                                   E.g. From (x ... y z), `x ...' part becomes
                                   SyntaxPattern with numFollowingItems=2.
                                   From (x ... . y), `x ...' part becomes
                                   SyntaxPattern with numFollowingItems=0. */
} ScmSyntaxPattern;

SCM_CLASS_DECL(Scm_SyntaxPatternClass);
#define SCM_CLASS_SYNTAX_PATTERN  (&Scm_SyntaxPatternClass)

#define SCM_SYNTAX_PATTERN(obj)   ((ScmSyntaxPattern*)(obj))
#define SCM_SYNTAX_PATTERN_P(obj) SCM_XTYPEP(obj, SCM_CLASS_SYNTAX_PATTERN)

static void pattern_print(ScmObj obj, ScmPort *port,
                          ScmWriteContext *ctx SCM_UNUSED)
{
    Scm_Printf(port, "#<pattern:%d%S %S%s>",
               SCM_SYNTAX_PATTERN(obj)->level,
               SCM_SYNTAX_PATTERN(obj)->vars,
               SCM_SYNTAX_PATTERN(obj)->pattern,
               SCM_SYNTAX_PATTERN(obj)->numFollowingItems? " ..." : "");
}

SCM_DEFINE_BUILTIN_CLASS_SIMPLE(Scm_SyntaxPatternClass, pattern_print);

ScmSyntaxPattern *make_syntax_pattern(int level, int numFollowing)
{
    ScmSyntaxPattern *p = SCM_NEW(ScmSyntaxPattern);
    SCM_SET_CLASS(p, SCM_CLASS_SYNTAX_PATTERN);
    p->pattern = SCM_NIL;
    p->vars = SCM_NIL;
    p->level = level;
    p->numFollowingItems = numFollowing;
    return p;
}

/*===================================================================
 * SyntaxRules object
 *   Internal object to construct pattern matcher
 */

static void synrule_print(ScmObj obj, ScmPort *port,
                          ScmWriteContext *mode SCM_UNUSED)
{
    ScmSyntaxRules *r = SCM_SYNTAX_RULES(obj);

    Scm_Printf(port, "#<syntax-rules(%d)\n", r->numRules);
    for (int i = 0; i < r->numRules; i++) {
        Scm_Printf(port, "%2d: (numPvars=%d, maxLevel=%d)\n",
                   i, r->rules[i].numPvars, r->rules[i].maxLevel);
        Scm_Printf(port, "   pattern  = %S\n", r->rules[i].pattern);
        Scm_Printf(port, "   template = %S\n", r->rules[i].template);
    }
    Scm_Printf(port, ">");
}

SCM_DEFINE_BUILTIN_CLASS_SIMPLE(Scm_SyntaxRulesClass, synrule_print);

ScmSyntaxRules *make_syntax_rules(int nr)
{
    ScmSyntaxRules *r = SCM_NEW2(ScmSyntaxRules *,
                                 sizeof(ScmSyntaxRules)+(nr-1)*sizeof(ScmSyntaxRuleBranch));
    SCM_SET_CLASS(r, SCM_CLASS_SYNTAX_RULES);
    r->numRules = nr;
    return r;
}

/*===================================================================
 * Traditional Macro
 */

static ScmMacro *resolve_macro_autoload(ScmAutoload *adata)
{
    ScmObj mac = Scm_ResolveAutoload(adata, 0);
    if (SCM_UNBOUNDP(mac)) {
        Scm_Error("tried to autoload macro %S, but it caused circular autoload.", adata->name);
    }
    if (!SCM_MACROP(mac)) {
        Scm_Error("tried to autoload macro %S, but it yields non-macro object: %S", adata->name, mac);
    }
    return SCM_MACRO(mac);
}

static ScmObj macro_autoload(ScmObj *argv, int argc, void *data)
{
    SCM_ASSERT(argc == 2);
    ScmObj form = argv[0];
    ScmObj env = argv[1];
    /* Important to save form and env before calling resolve_macro_autoload,
       for it may overwrite stack region pointed by argv. */
    SCM_ASSERT(SCM_AUTOLOADP(data));
    ScmMacro *mac = resolve_macro_autoload(SCM_AUTOLOAD(data));
    return Scm_CallMacroExpander(mac, form, env);
}

#define AUTOLOAD_MACRO_SUFFIX " (autoload)"

ScmObj Scm_MakeMacroAutoload(ScmSymbol *name, ScmAutoload *adata)
{
    ScmObj transformer = Scm_MakeSubr(macro_autoload, adata,
                                      2, 0, SCM_FALSE);
    ScmObj name1 = Scm_StringAppendC(SCM_SYMBOL_NAME(name),
                                     AUTOLOAD_MACRO_SUFFIX,
                                     sizeof(AUTOLOAD_MACRO_SUFFIX)-1,
                                     sizeof(AUTOLOAD_MACRO_SUFFIX)-1);
    return Scm_MakeMacro(Scm_MakeSymbol(SCM_STRING(name1), FALSE),
                         transformer, SCM_NIL, 0);
}

/*===================================================================
 * R5RS Macro
 */

/* Keeping hygienic reference
 *
 *  - symbols which a template inserts into the expanded form are
 *    converted to identifiers at the macro definition time, encapsulating
 *    the defining environment of the macro.   So it doesn't interfere
 *    with the macro call environment.
 *
 *  - literal symbols provided to the syntax-rules are also converted
 *    to identifiers encapsulating the defining environment, and the
 *    environment information is used when comparing with the symbols
 *    in the macro call.
 *
 *  - symbols in the macro call is treated as they are.  Since the result
 *    of macro expansion is immediately compiled in the macro call
 *    environment, those symbols can refer proper bindings.
 */

/*-------------------------------------------------------------------
 * pattern language compiler
 *   - recognize repeatable subpatterns and replace it to SyntaxPattern node.
 *   - convert free symbols in the template into identifiers
 *   - convert pattern variables into LREF object.
 */
/* TODO: avoid unnecessary consing as much as possible */

/* context of pattern traversal */
typedef struct {
    ScmObj name;                /* name of this macro (for error msg)*/
    ScmObj form;                /* form being compiled (for error msg) */
    ScmObj literals;            /* list of literals */
    ScmObj pvars;               /* list of (pvar . pvref) */
    ScmObj renames;             /* list of (var . identifier)  Keep mapping
                                   of input symbol/identifier to fresh
                                   identifier */
    ScmObj ellipsis;            /* symbol/identifier/keyword for ellipsis
                                   SCM_TRUE means default (...)
                                   SCM_FALSE means disabled */
    int pvcnt;                  /* counter of pattern variables */
    int maxlev;                 /* maximum level */
    ScmModule *mod;             /* module where this macro is defined */
    ScmObj env;                 /* compiler env of this macro definition */
} PatternContext;

#define PVREF_P(pvref)         SCM_PVREF_P(pvref)
#define PVREF_LEVEL(pvref)     (int)SCM_PVREF_LEVEL(pvref)
#define PVREF_COUNT(pvref)     (int)SCM_PVREF_COUNT(pvref)

#define PVREF_LEVEL_MAX 0xff
#define PVREF_COUNT_MAX 0xff

/* add pattern variable pvar.  called when compiling a pattern */
static inline ScmObj add_pvar(PatternContext *ctx,
                              ScmSyntaxPattern *pat,
                              ScmObj pvar)
{
    if (pat->level > PVREF_LEVEL_MAX) {
        Scm_Error("Pattern levels too deeply nested in the macro definition of %S", ctx->name);
    }
    if (ctx->pvcnt > PVREF_COUNT_MAX) {
        Scm_Error("Too many pattern variables in the macro definition of %S", ctx->name);
    }
    ScmObj pvref = SCM_MAKE_PVREF(pat->level, ctx->pvcnt);
    if (!SCM_FALSEP(Scm_Assq(pvar, ctx->pvars))) {
        Scm_Error("Pattern variable %S appears more than once in the macro definition of %S: %S",
                  pvar, ctx->name, ctx->form);
    }
    ctx->pvcnt++;
    ctx->pvars = Scm_Acons(pvar, pvref, ctx->pvars);
    pat->vars = Scm_Cons(pvref, pat->vars);
    return pvref;
}

/* Like SCM_APPEND1 and SCM_APPEND, but try to preserve source info
   of the input.  SOURCE is the macro source in its definition, ORIGIN is
   the macro expansion input in its entirety.  ORIGIN is #f while compiling
   a macro; only given when expanding it.
*/
static ScmObj get_source_info_attrs(ScmObj source, ScmObj origin)
{
    ScmObj attrs = SCM_NIL;
    if (SCM_PAIRP(source)) {
        ScmObj info = Scm_PairAttrGet(SCM_PAIR(source),
                                      SCM_SYM_SOURCE_INFO, SCM_FALSE);
        if (SCM_PAIRP(info))
            attrs = Scm_Acons(SCM_SYM_SOURCE_INFO, info, attrs);
    }
    if (SCM_PAIRP(origin)) {
        attrs = Scm_Acons(SCM_SYM_ORIGINAL, origin, attrs);
    }
    return attrs;
}


static void template_append1(ScmObj *head, ScmObj *tail,
                             ScmObj elt, ScmObj source, ScmObj origin)
{
    if (SCM_NULLP(*head)) {
        ScmObj attrs = get_source_info_attrs(source, origin);
        if (SCM_PAIRP(attrs)) {
            ScmObj p = Scm_MakeExtendedPair(elt, SCM_NIL, attrs);
            *head = *tail = p;
            return;
        }
        *head = *tail = Scm_Cons(elt, SCM_NIL);
        return;
    }
    ScmObj p = Scm_Cons(elt, SCM_NIL);
    SCM_SET_CDR(*tail, p);
    *tail = p;
}

static void template_append(ScmObj *head, ScmObj *tail,
                            ScmObj rest, ScmObj source, ScmObj origin)
{
    if (SCM_NULLP(*head)) {
        if (SCM_PAIRP(rest)) {
            ScmObj attrs = get_source_info_attrs(source, origin);
            if (SCM_PAIRP(attrs)) {
                ScmObj p = Scm_MakeExtendedPair(SCM_CAR(rest), SCM_CDR(rest),
                                                attrs);
                *head = p;
                *tail = Scm_LastPair(p);
                return;
            }
        }
        *head = rest;
        *tail = SCM_PAIRP(rest)? Scm_LastPair(rest) : rest;
        return;
    }
    SCM_SET_CDR(*tail, rest);
    /* rest can be () */
    if (SCM_PAIRP(rest)) *tail = Scm_LastPair(rest);
}


/* returns pvref corresponds to the given pvar in template compilation.
   if pvar is not a valid pvar, returns pvar itself. */
static inline ScmObj pvar_to_pvref(PatternContext *ctx,
                                   ScmSyntaxPattern *pat,
                                   ScmObj pvar)
{
    ScmObj q = Scm_Assq(pvar, ctx->pvars);
    if (!SCM_PAIRP(q)) return pvar;
    ScmObj pvref = SCM_CDR(q);
    if (PVREF_LEVEL(pvref) > pat->level) {
        Scm_Error("%S: Pattern variable %S is used in wrong level: %S",
                  ctx->name, pvar, ctx->form);
    }
    return pvref;
}

static int isEllipsis(PatternContext *ctx, ScmObj obj)
{
    if (SCM_FALSEP(ctx->ellipsis)) return FALSE; /* inside (... TEMPLATE) */
    if (SCM_TRUEP(ctx->ellipsis)) {
        /* default ellipsis (...) */
        return Scm__ERCompare(SCM_SYM_ELLIPSIS, obj, ctx->mod, ctx->env);
    } else {
        /* specified ellipsis */
        return SCM_EQ(ctx->ellipsis, obj);
    }
}

#define ELLIPSIS_FOLLOWING(Pat, Ctx)                                    \
    (SCM_PAIRP(SCM_CDR(Pat)) && isEllipsis(Ctx, SCM_CADR(Pat)))

#define BAD_ELLIPSIS(Ctx)                                               \
    Scm_Error("Bad ellipsis usage in macro definition of %S: %S",       \
               Ctx->name, Ctx->form)

static ScmObj check_literals(ScmObj literals)
{
    ScmObj lp, h = SCM_NIL, t = SCM_NIL;
    SCM_FOR_EACH(lp, literals) {
        ScmObj lit = SCM_CAR(lp);
        if (SCM_SYMBOLP(lit) || SCM_IDENTIFIERP(lit))
            SCM_APPEND1(h, t, lit);
        else if (SCM_KEYWORDP(lit))
            /* This branch is to allow r7rs-compliant code to go through
               with legacy mode.  If keyword-symbol integration is turned on,
               we never reach here. */;
        else Scm_Error("literal list contains non-symbol: %S", literals);
    }
    if (!SCM_NULLP(lp))
        Scm_Error("bad literal list in syntax-rules: %S", literals);
    return h;
}

/* Renaming: Map input variable (symbol or identifier) to fresh identifier.
   The same (eq?) variable must map to the same identifier. */
static ScmObj rename_variable(ScmObj var,
                              ScmObj *id_alist, /* ((var . id) ...) */
                              ScmModule *mod,
                              ScmObj env)
{
    ScmObj id, p = Scm_Assq(var, *id_alist);
    if (SCM_PAIRP(p)) return SCM_CDR(p);
    if (SCM_SYMBOLP(var)) {
        id = Scm_MakeIdentifier(var, mod, env);
    } else {
        SCM_ASSERT(SCM_IDENTIFIERP(var));
        id = Scm_WrapIdentifier(SCM_IDENTIFIER(var));
    }
    *id_alist = Scm_Acons(var, id, *id_alist);
    return id;
}


/* Compile a pattern or a template.
   In the pattern, we replace variables to identifiers.
   We also recognize pattern variables, and replace them for PVARs in
   the pattern, and for PVREFs in the template.
   When encounters a repeatable subpattern, replace it with
   SyntaxPattern node.
*/
static ScmObj compile_rule1(ScmObj form,
                            ScmSyntaxPattern *spat,
                            PatternContext *ctx,
                            int patternp)
{
    if (SCM_PAIRP(form)) {
        ScmObj h = SCM_NIL, t = SCM_NIL;
        int ellipsis_seen = FALSE;

        if (SCM_PAIRP(SCM_CDR(form)) && isEllipsis(ctx, SCM_CAR(form))) {
            /* (... <template>) */
            if (patternp) {
                Scm_Error("in definition of macro %S: "
                          "<ellipsis> can't appear at the beginning of "
                          "list/vector: %S", ctx->name, form);
            }
            ScmObj save_elli = ctx->ellipsis, r;
            ctx->ellipsis = SCM_FALSE;
            r = compile_rule1(SCM_CADR(form), spat, ctx, FALSE);
            ctx->ellipsis = save_elli;
            return r;
        }

        ScmObj pp;
        SCM_FOR_EACH(pp, form) {
            if (ELLIPSIS_FOLLOWING(pp, ctx)) {
                if (patternp && ellipsis_seen) {
                    Scm_Error("in definition of macro %S: "
                              "Ellipses are not allowed to appear "
                              "within the same list/vector more than once "
                              "in a pattern: %S", ctx->name, form);
                }
                ellipsis_seen = TRUE;

                ScmObj base = SCM_CAR(pp);
                pp = SCM_CDR(pp);

                int num_trailing = 0;
                int ellipsis_nesting = 1;
                if (patternp) {
                    /* Count trailing items to set ScmSyntaxPattern->repeat. */
                    ScmObj trailing = SCM_CDR(pp);
                    while (SCM_PAIRP(trailing)) {
                        num_trailing++;
                        trailing = SCM_CDR(trailing);
                    }
                } else {
                    /* srfi-149 allows more than one ellipsis to follow a
                       template. */
                    while (ELLIPSIS_FOLLOWING(pp, ctx)) {
                        ellipsis_nesting++;
                        if (!SCM_PAIRP(SCM_CDR(pp))) break;
                        pp = SCM_CDR(pp);
                    }
                }
                /* at this point, pp points the last ellipsis */

                if (ctx->maxlev < spat->level + ellipsis_nesting)
                    ctx->maxlev = spat->level + ellipsis_nesting + 1;

                ScmSyntaxPattern *outermost =
                    make_syntax_pattern(spat->level+1, num_trailing);
                ScmSyntaxPattern *outer = outermost;
                for (int i=1; i<ellipsis_nesting; i++) {
                    ScmSyntaxPattern *inner =
                        make_syntax_pattern(spat->level+i+1, 0);
                    outer->pattern = SCM_OBJ(inner);
                    outer = inner;
                }
                outer->pattern = compile_rule1(base, outer, ctx, patternp);
                outermost->vars = outer->vars;
                template_append1(&h, &t, SCM_OBJ(outermost), form, SCM_FALSE);
                if (!patternp) {
                    ScmObj vp;
                    if (SCM_NULLP(outermost->vars)) {
                        Scm_Error("in definition of macro %S: "
                                  "a template contains repetition "
                                  "of constant form: %S",
                                  ctx->name, form);
                    }
                    SCM_FOR_EACH(vp, outermost->vars) {
                        if (PVREF_LEVEL(SCM_CAR(vp)) >= outermost->level) break;
                    }
                    if (SCM_NULLP(vp)) {
                        Scm_Error("in definition of macro %S: "
                                  "template's ellipsis nesting"
                                  " is deeper than pattern's: %S",
                                  ctx->name, form);
                    }
                }
                spat->vars = Scm_Append2(spat->vars, outermost->vars);
            } else {
                template_append1(&h, &t,
                                 compile_rule1(SCM_CAR(pp), spat, ctx, patternp),
                                 form, SCM_FALSE);
            }
        }
        if (!SCM_NULLP(pp))
            template_append(&h, &t, compile_rule1(pp, spat, ctx, patternp),
                            form, SCM_FALSE);
        return h;
    }
    else if (SCM_VECTORP(form)) {
        /* TODO: this is a sloppy implementation.
           Eliminate intermediate list structure! */
        ScmObj l = Scm_VectorToList(SCM_VECTOR(form), 0, -1);
        return Scm_ListToVector(compile_rule1(l, spat, ctx, patternp), 0, -1);
    }
    if (SCM_SYMBOLP(form)||SCM_IDENTIFIERP(form)) {
        if (isEllipsis(ctx, form)) BAD_ELLIPSIS(ctx);
        if (!SCM_FALSEP(Scm_Memq(form, ctx->literals))) {
            if (patternp)
                return rename_variable(form, &ctx->renames, ctx->mod, ctx->env);
            else
                return form;  /* template renaming is done in expansion time */
        }
        if (patternp && Scm__ERCompare(form, SCM_SYM_UNDERBAR,
                                       ctx->mod, ctx->env)) {
            return SCM_SYM_UNDERBAR;
        }
        if (patternp) {
            return add_pvar(ctx, spat, form);
        } else {
            ScmObj pvref = pvar_to_pvref(ctx, spat, form);
            if (pvref == form) {
                return form;
            } else {
                spat->vars = Scm_Cons(pvref, spat->vars);
                return pvref;
            }
        }
    }
    return form;
}

/* compile rules into ScmSyntaxRules structure
   NB: We use ScmSyntaxPattern for the toplevel node of pattern and template;
   they are just a placeholders and they don't represent repetition. */
static ScmSyntaxRules *compile_rules(ScmObj name,
                                     ScmObj ellipsis,
                                     ScmObj literals,
                                     ScmObj rules,
                                     ScmModule *mod,
                                     ScmObj env) /* compiler env */
{
    PatternContext ctx;
    int numRules = Scm_Length(rules);

    if (numRules < 0) goto badform;
    if (Scm_Length(literals) < 0) goto badform;

    ctx.name = name;
    ctx.ellipsis = ellipsis;
    ctx.literals = check_literals(literals);
    ctx.mod = mod;
    ctx.env = env;
    ctx.renames = SCM_NIL;

    /* Corner case when literal contains the same (free-identifer=?) symbol
       as ellipsis.  R7RS specifies the literal has precedence.
       https://srfi-email.schemers.org/srfi-148/msg/6115633 */
    if (!SCM_FALSEP(ellipsis)) {
        ScmObj cp;
        SCM_FOR_EACH(cp, ctx.literals) {
            if (isEllipsis(&ctx, SCM_CAR(cp))) {
                ctx.ellipsis = SCM_FALSE;
                break;
            }
        }
    }

    ScmSyntaxRules *sr = make_syntax_rules(numRules);
    sr->name = name;
    sr->numRules = numRules;
    sr->maxNumPvars = 0;
    sr->mod = mod;
    sr->env = env;
    ScmObj rp = rules;
    for (int i=0; i < numRules; i++, rp = SCM_CDR(rp)) {
        ScmObj rule = SCM_CAR(rp);
        if (Scm_Length(rule) != 2) goto badform;

        ScmSyntaxPattern *pat  = make_syntax_pattern(0, 0);
        ScmSyntaxPattern *tmpl = make_syntax_pattern(0, 0);
        ctx.pvars = SCM_NIL;
        ctx.pvcnt = 0;
        ctx.maxlev = 0;

        ctx.form = SCM_CAR(rule);
        if (SCM_PAIRP(ctx.form)) {
            pat->pattern = compile_rule1(SCM_CDR(ctx.form), pat, &ctx, TRUE);
        } else {
            if (!SCM_SYMBOLP(ctx.form) && !SCM_IDENTIFIERP(ctx.form)) goto badform;
            /* This happens for identifier macro. we allow the entire input.
               The entire input always match.  The identifier in the pattern
               doesn't matter; we use underscore for placeholder.*/
            pat->pattern = SCM_SYM_UNDERBAR;
        }

        ctx.form = SCM_CADR(rule);
        tmpl->pattern = compile_rule1(ctx.form, tmpl, &ctx, FALSE);

        sr->rules[i].pattern  = SCM_OBJ(pat->pattern);
        sr->rules[i].template = SCM_OBJ(tmpl->pattern);
        sr->rules[i].numPvars = ctx.pvcnt;
        sr->rules[i].maxLevel = ctx.maxlev;
        if (ctx.pvcnt > sr->maxNumPvars) sr->maxNumPvars = ctx.pvcnt;
    }
    return sr;

  badform:
    Scm_Error("malformed macro %S: %S", name,
              Scm_Cons(SCM_SYM_SYNTAX_RULES, Scm_Cons(literals, rules)));
    return NULL;       /* dummy */
}

/*-------------------------------------------------------------------
 * pattern language matcher
 */

/* Matchvec
 *   A sort of shallow binding technique is used to bind pattern
 *   variables with matched patterns.
 *
 *   Matchlist itself is an assoc list whose key is a pattern variable.
 *   It's value is a tree of the same depth of the pattern variable.
 *
 *   Suppose you have a pattern
 *      (?a (?b (?c ?d ...) ...) ...)
 *   In it, pattern variable ?a is level 0, ?b is 1, ?c is 2 and ?d is 3.
 *   When the pattern matches the following form:
 *      (1 (2 (3 4 5) (6)) (7 (8 9) (10 11 12)))
 *   trees bound to each pattern variables are like this:
 *
 *      ?a => 1
 *      ?b => (2 7)
 *      ?c => ((3 6) (8 10))
 *      ?d => (((4 5) ()) ((9) (11 12)))
 */

typedef struct {
    ScmObj branch;              /* current level match */
    ScmObj sprout;              /* current sprout */
    ScmObj root;                /* root of the tree */
} MatchVar;

static MatchVar *alloc_matchvec(int numPvars)
{
    return SCM_NEW_ARRAY(MatchVar, numPvars);
}

static void init_matchvec(MatchVar *mvec, int numPvars)
{
    int i;
    for (i=0; i<numPvars; i++) {
        mvec[i].branch = mvec[i].sprout = mvec[i].root = SCM_NIL;
    }
}

/* get value associated to the pvref.  if exhausted, return SCM_UNBOUND
   and set exhaust level in *exlev. */
static ScmObj get_pvref_value(ScmObj pvref, MatchVar *mvec,
                              int *indices, int *exlev)
{
    int level = PVREF_LEVEL(pvref), count = PVREF_COUNT(pvref);
    ScmObj tree = mvec[count].root;
    for (int i=1; i<=level; i++) {
        for (int j=0; j<indices[i]; j++) {
            if (!SCM_PAIRP(tree)) {
                *exlev = i;
                return SCM_UNBOUND;
            }
            tree = SCM_CDR(tree);
        }
        if (!SCM_PAIRP(tree)) {
            *exlev = i;
            return SCM_UNBOUND;
        }
        tree = SCM_CAR(tree);
    }
    return tree;
}

/* for debug */
#ifdef DEBUG_SYNRULE
static void print_matchvec(MatchVar *mvec, int numPvars, ScmPort *port)
{
    for (int i=0; i<numPvars; i++) {
        Scm_Printf(port, "[%S %S %S]\n",
                   mvec[i].branch, mvec[i].sprout, mvec[i].root);
    }
}
#endif

static int match_synrule(ScmObj form, ScmObj pattern, ScmObj mod, ScmObj env,
                         MatchVar *mvec);

#define SPROUT  Scm_Cons(SCM_NIL, SCM_NIL)

/* add a new "sprout" to the given tree at the given level. */
static void grow_branch(MatchVar *rec, int level)
{
    if (level <= 1) return;
    if (rec->root == SCM_NIL) {
        rec->sprout = rec->root = SPROUT;
        if (level == 2) return;
    }

    ScmObj trunc = rec->root;
    for (int i=1; i<level-1; i++, trunc = SCM_CAR(trunc)) {
        SCM_FOR_EACH(trunc, trunc) {
            if (SCM_NULLP(SCM_CDR(trunc))) break;
        }
        if (SCM_NULLP(SCM_CAR(trunc))) {
            for (i++; i<level-1; i++, trunc = SCM_CAR(trunc)) {
                SCM_SET_CAR_UNCHECKED(trunc, SPROUT);
            }
            rec->sprout = SPROUT;
            SCM_SET_CAR_UNCHECKED(trunc, rec->sprout);
            return;
        }
    }
    SCM_FOR_EACH(trunc, trunc) {
        if (SCM_NULLP(SCM_CDR(trunc))) {
            rec->sprout = SPROUT;
            SCM_SET_CDR_UNCHECKED(trunc, rec->sprout);
            break;
        }
    }
}

static void enter_subpattern(ScmSyntaxPattern *subpat, MatchVar *mvec)
{
    ScmObj pp;
    SCM_FOR_EACH(pp, subpat->vars) {
        ScmObj pvref = SCM_CAR(pp);
        int count = PVREF_COUNT(pvref);
        grow_branch(mvec+count, subpat->level);
    }
}

static void exit_subpattern(ScmSyntaxPattern *subpat, MatchVar *mvec)
{
    ScmObj pp;
    SCM_FOR_EACH(pp, subpat->vars) {
        ScmObj pvref = SCM_CAR(pp);
        int count = PVREF_COUNT(pvref);
        if (PVREF_LEVEL(pvref) == subpat->level) {
            if (subpat->level == 1) {
                mvec[count].root = Scm_ReverseX(mvec[count].branch);
            } else {
                SCM_SET_CAR_UNCHECKED(mvec[count].sprout,
                                      Scm_ReverseX(mvec[count].branch));
                mvec[count].branch = SCM_NIL;
            }
        }
    }
}

/* add pattern variable PVREF and its matched object MATCHED into MVEC */
static inline void match_insert(ScmObj pvref, ScmObj matched, MatchVar *mvec)
{
    int count = PVREF_COUNT(pvref);
    if (PVREF_LEVEL(pvref) == 0) {
        mvec[count].root = matched;
    } else {
        mvec[count].branch = Scm_Cons(matched, mvec[count].branch);
    }
}

static inline int match_subpattern(ScmObj form, ScmSyntaxPattern *pat,
                                   ScmObj rest, ScmObj mod, ScmObj env,
                                   MatchVar *mvec)
{
    /* TODO: If pat->numFollowingItems == 0, we don't need to calculate
       length beforehand.  Some optimization opportunity. */
    int limit = 0;
    for (ScmObj p = form; SCM_PAIRP(p); p = SCM_CDR(p)) {
        limit++;
    }
    limit -= pat->numFollowingItems;

    enter_subpattern(pat, mvec);
    while (limit > 0) {
        if (!match_synrule(SCM_CAR(form), pat->pattern, mod, env, mvec))
            return FALSE;
        form = SCM_CDR(form);
        limit--;
    }
    exit_subpattern(pat, mvec);
    return match_synrule(form, rest, mod, env, mvec);
}

/* See if form matches pattern.  If match, add matched syntax variable
   bindings to match vector and return TRUE; otherwise, return FALSE
*/
static int match_synrule(ScmObj form, ScmObj pattern, ScmObj mod, ScmObj env,
                         MatchVar *mvec)
{
    if (PVREF_P(pattern)) {
        match_insert(pattern, form, mvec);
        return TRUE;
    }
    if (SCM_EQ(pattern, SCM_SYM_UNDERBAR)) {
        return TRUE;            /* unconditional match */
    }
    if (SCM_IDENTIFIERP(pattern)) {
        return Scm__ERCompare(pattern, form, SCM_MODULE(mod), env);
    }
    if (SCM_SYNTAX_PATTERN_P(pattern)) {
        return match_subpattern(form, SCM_SYNTAX_PATTERN(pattern),
                                SCM_NIL, mod, env, mvec);
    }
    if (SCM_PAIRP(pattern)) {
        while (SCM_PAIRP(pattern)) {
            ScmObj elt = SCM_CAR(pattern);
            if (SCM_SYNTAX_PATTERN_P(elt)) {
                return match_subpattern(form, SCM_SYNTAX_PATTERN(elt),
                                        SCM_CDR(pattern),
                                        mod, env, mvec);
            } else if (!SCM_PAIRP(form)) {
                return FALSE;
            } else {
                if (!match_synrule(SCM_CAR(form), elt, mod, env, mvec))
                    return FALSE;
                pattern = SCM_CDR(pattern);
                form = SCM_CDR(form);
            }
        }
        if (!SCM_NULLP(pattern))
            return match_synrule(form, pattern, mod, env, mvec);
        else
            return SCM_NULLP(form);
    }
    if (SCM_VECTORP(pattern)) {
        if (!SCM_VECTORP(form)) return FALSE;
        int plen = SCM_VECTOR_SIZE(pattern);
        int elli = SCM_VECTOR_SIZE(form);
        int flen = elli;
        int has_elli = FALSE;
        if (plen == 0) return (flen == 0);
        for (int i=0; i < plen; i++) {
            if (SCM_SYNTAX_PATTERN_P(SCM_VECTOR_ELEMENT(pattern, i))) {
                has_elli = TRUE;
                elli = i;
                break;
            }
        }
        if ((!has_elli && plen!=flen) || (has_elli && plen-1>flen)) return FALSE;

        for (int i=0; i < elli; i++) {
            if (!match_synrule(SCM_VECTOR_ELEMENT(form, i),
                               SCM_VECTOR_ELEMENT(pattern, i),
                               mod, env, mvec))
                return FALSE;
        }
        if (elli < flen) {
            ScmObj pat = SCM_VECTOR_ELEMENT(pattern, elli);
            ScmObj prest = Scm_VectorToList(SCM_VECTOR(pattern), elli+1, plen);
            ScmObj frest = Scm_VectorToList(SCM_VECTOR(form), elli, flen);
            return match_subpattern(frest, SCM_SYNTAX_PATTERN(pat),
                                    prest, mod, env, mvec);
        } else {
            return TRUE;
        }
    }

    /* literal */
    return Scm_EqualP(pattern, form);
}

/*-------------------------------------------------------------------
 * pattern language transformer
 */

/* If a pattern variable is exhausted, SCM_UNBOUND is returned. */
static ScmObj realize_template_rec(ScmObj src,
                                   ScmSyntaxRules *sr,
                                   ScmObj template,
                                   MatchVar *mvec,
                                   int level,
                                   int *indices,
                                   ScmObj *idlist,
                                   int *exlev)
{
    if (SCM_PAIRP(template)) {
        ScmObj h = SCM_NIL, t = SCM_NIL;
        while (SCM_PAIRP(template)) {
            ScmObj e = SCM_CAR(template);
            if (SCM_SYNTAX_PATTERN_P(e)) {
                ScmObj r = realize_template_rec(src, sr, e, mvec, level,
                                                indices, idlist, exlev);
                if (SCM_UNBOUNDP(r)) return r;
                template_append(&h, &t, r, template, src);
            } else {
                ScmObj r = realize_template_rec(src, sr, e, mvec, level,
                                                indices, idlist, exlev);
                if (SCM_UNBOUNDP(r)) return r;
                template_append1(&h, &t, r, template, src);
            }
            template = SCM_CDR(template);
        }
        if (!SCM_NULLP(template)) {
            ScmObj r = realize_template_rec(src, sr, template, mvec, level,
                                            indices, idlist, exlev);
            if (SCM_UNBOUNDP(r)) return r;
            if (SCM_NULLP(h)) return r; /* (a ... . b) and a ... is empty */
            template_append(&h, &t, r, template, src);
        }
        return h;
    }
    if (PVREF_P(template)) {
        return get_pvref_value(template, mvec, indices, exlev);
    }
    if (SCM_SYNTAX_PATTERN_P(template)) {
        ScmSyntaxPattern *pat = SCM_SYNTAX_PATTERN(template);
        ScmObj h = SCM_NIL, t = SCM_NIL;
        indices[level+1] = 0;
        for (;;) {
            ScmObj r = realize_template_rec(src, sr, pat->pattern, mvec,
                                            level+1, indices, idlist, exlev);
            if (SCM_UNBOUNDP(r)) return (*exlev < pat->level)? r : h;
            if (SCM_SYNTAX_PATTERN_P(pat->pattern)) {
                SCM_APPEND(h, t, r);
            } else {
                SCM_APPEND1(h, t, r);
            }
            indices[level+1]++;
        }
    }
    if (SCM_VECTORP(template)) {
        ScmObj h = SCM_NIL, t = SCM_NIL;
        int len = SCM_VECTOR_SIZE(template);
        ScmObj *pe = SCM_VECTOR_ELEMENTS(template);

        for (int i=0; i<len; i++, pe++) {
            if (SCM_SYNTAX_PATTERN_P(*pe)) {
                ScmObj r = realize_template_rec(src, sr, *pe, mvec, level,
                                                indices, idlist, exlev);
                if (SCM_UNBOUNDP(r)) return r;
                SCM_APPEND(h, t, r);
            } else {
                ScmObj r = realize_template_rec(src, sr, *pe, mvec, level,
                                                indices, idlist, exlev);
                if (SCM_UNBOUNDP(r)) return r;
                SCM_APPEND1(h, t, r);
            }
        }
        return Scm_ListToVector(h, 0, -1);
    }
    if (SCM_SYMBOLP(template) || SCM_IDENTIFIERP(template)) {
        return rename_variable(template, idlist, sr->mod, sr->env);
    }
    return template;
}

#define DEFAULT_MAX_LEVEL  10

static ScmObj realize_template(ScmObj src,
                               ScmSyntaxRules *sr,
                               ScmSyntaxRuleBranch *branch,
                               MatchVar *mvec)
{
    int index[DEFAULT_MAX_LEVEL], *indices = index;
    int exlev = 0;
    ScmObj idlist = SCM_NIL;

    if (branch->maxLevel > DEFAULT_MAX_LEVEL)
        indices = SCM_NEW_ATOMIC2(int*, (branch->maxLevel+1) * sizeof(int));
    for (int i=0; i<=branch->maxLevel; i++) indices[i] = 0;
    return realize_template_rec(src, sr, branch->template, mvec, 0,
                                indices, &idlist, &exlev);
}

static ScmObj synrule_expand(ScmObj form, ScmObj mod, ScmObj env, ScmSyntaxRules *sr)
{
    MatchVar *mvec = alloc_matchvec(sr->maxNumPvars);

#ifdef DEBUG_SYNRULE
    Scm_Printf(SCM_CUROUT, "**** synrule_transform: %S\n", form);
#endif
    for (int i=0; i<sr->numRules; i++) {
#ifdef DEBUG_SYNRULE
        Scm_Printf(SCM_CUROUT, "pattern #%d: %S\n", i, sr->rules[i].pattern);
#endif
        init_matchvec(mvec, sr->rules[i].numPvars);

        int matched = FALSE;
        if (sr->rules[i].pattern == SCM_SYM_UNDERBAR) {
            matched = TRUE;     /* unconditionally match */
        } else {
            matched = match_synrule(SCM_CDR(form), sr->rules[i].pattern, mod, env, mvec);
        }
        if (matched) {
#ifdef DEBUG_SYNRULE
            Scm_Printf(SCM_CUROUT, "success #%d:\n", i);
            print_matchvec(mvec, sr->rules[i].numPvars, SCM_CUROUT);
#endif
            ScmObj expanded = realize_template(form, sr, &sr->rules[i], mvec);
#ifdef DEBUG_SYNRULE
            Scm_Printf(SCM_CUROUT, "result: %S\n", expanded);
#endif
            return expanded;
        }
    }
    Scm_Error("malformed %S: %S", SCM_CAR(form), form);
    return SCM_NIL;
}

static ScmObj synrule_transform(ScmObj *argv, int argc, void *data)
{
    SCM_ASSERT(argc == 2);
    ScmObj form = argv[0];
    ScmObj cenv = argv[1];
    SCM_ASSERT(SCM_VECTORP(cenv));
    ScmObj module = SCM_VECTOR_ELEMENT(cenv, 0); /* macro use env */
    ScmObj frames = SCM_VECTOR_ELEMENT(cenv, 1); /* macro use env */
    ScmSyntaxRules *sr = (ScmSyntaxRules *)data;
    return synrule_expand(form, module, frames, sr);
}

/* NB: a stub for the new compiler (TEMPORARY) */
ScmObj Scm_CompileSyntaxRules(ScmObj name, ScmObj src, ScmObj ellipsis,
                              ScmObj literals, ScmObj rules,
                              ScmObj mod, ScmObj env)
{
    if (SCM_IDENTIFIERP(name)) name = SCM_OBJ(SCM_IDENTIFIER(name)->name);
    if (!SCM_MODULEP(mod)) Scm_Error("module required, but got %S", mod);
    ScmSyntaxRules *sr = compile_rules(name, ellipsis, literals, rules,
                                       SCM_MODULE(mod), env);
    ScmObj sr_xform = Scm_MakeSubr(synrule_transform, sr,
                                   2, 0, SCM_FALSE);

    ScmObj info = SCM_NIL, info_tail = SCM_NIL;
    if (SCM_PAIRP(src)) {
        SCM_APPEND1(info, info_tail, Scm_Cons(SCM_SYM_SOURCE, src));
        ScmObj source_info = Scm_PairAttrGet(SCM_PAIR(src),
                                             SCM_SYM_SOURCE_INFO,
                                             SCM_FALSE);
        if (SCM_PAIRP(source_info)) {
            SCM_APPEND1(info, info_tail,
                        Scm_Cons(SCM_SYM_SOURCE_INFO, source_info));
        }
    }

    return Scm_MakeMacro(name, sr_xform, info, 0);
}

/*===================================================================
 * macro-expand
 */

ScmObj Scm_CallMacroExpander(ScmMacro *mac, ScmObj expr, ScmObj cenv)
{
    SCM_ASSERT(SCM_VECTORP(cenv));
    return Scm_ApplyRec2(mac->transformer, expr, cenv);
}

/*===================================================================
 * Initializer
 */

void Scm__InitMacro(void)
{
    Scm_InitStaticClass(&Scm_SyntaxPatternClass, "<syntax-pattern>",
                        Scm_GaucheInternalModule(), NULL, 0);
}
