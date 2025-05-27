/*
 * priv/parameterP.h - private parameter C-level implementation
 *
 *   Copyright (c) 2018-2024  Shiro Kawai  <shiro@acm.org>
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

#include <gauche/priv/atomicP.h>

#ifndef GAUCHE_PRIV_PARAMETERP_H
#define GAUCHE_PRIV_PARAMETERP_H

/* In Gauche, parameters have been taking two roles: Dynamic binding and
 * thread-local storage.  In the discussions of srfi-226, it turned out
 * conflating those two isn't right.  A continuation that captures dynamic
 * enrivonment may be invoked in a different thread, and the code must work
 * the same way as it is invoked in the same thread; it is wrong if the former
 * sees a different dynamic bindings than another.
 *
 * We gradually move to separate those two.  For the time being, though,
 * we implement parameters on top of thread locals.
 */

struct ScmPrimitiveParameterRec {
    SCM_INSTANCE_HEADER;
    u_long flags;
    ScmObj name;

    /* 'global' value of the parameter. */
    union {
        ScmThreadLocal *tl;     /* thread-local parameter */
        ScmBox *v;              /* 'shared' parameter
                                   Should be replaced for AtomicBox later. */
    } g;
};

SCM_EXTERN void Scm_PushParameterization(ScmObj params, ScmObj vals);
SCM_EXTERN void Scm_InstallParameterization(ScmParameterization *pz);

struct ScmParameterizationRec {
    SCM_HEADER;
    ScmObj parameterization;
};

/* Obtain uninterned symbol saved in the info slot of parameter subr. */
SCM_EXTERN ScmObj Scm__GetParameterSymbol();

#endif /*GAUCHE_PRIV_PARAMETERP_H*/
