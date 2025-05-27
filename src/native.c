/*
 * native.c - dynamic native code generation
 *
 *   Copyright (c) 2021-2024  Shiro Kawai  <shiro@acm.org>
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

/* EXPERIMENTAL */

/* CAUTION
 *   Be careful not to create a code path to call these APIs directly
 *   from Scheme.  It would open up for casual Scheme code to execute
 *   arbitrary machine code, bypassing our runtime check completely.
 *
 *   Instead, the Scheme API for these functionalities should be placed in
 *   gauche.bootstrap module.  The module is only alive during initialization
 *   process, so the built-in Scheme procedures can call them, but they'll
 *   be unaccessible from the user code.  See libnative.scm.
 */

#define LIBGAUCHE_BODY
#include "gauche.h"
#include "gauche/priv/configP.h"
#include "gauche/priv/vmP.h"
#include "gauche/priv/mmapP.h"
#include "gauche/priv/nativeP.h"

#if defined(HAVE_SYS_MMAN_H)
#include <sys/mman.h>
#endif

static long sys_getpagesize()
{
#if defined(GAUCHE_WINDOWS)
    SYSTEM_INFO sysinfo;
    GetSystemInfo(&sysinfo);
    return (long)sysinfo.dwPageSize;
#else  /* !GAUCHE_WINDOWS */
    return sysconf(_SC_PAGESIZE);
#endif /* !GAUCHE_WINDOWS */
}

/*======================================================================
 * FFI support
 */

/*
 * For the time being, we use a fixed area (mmapped executable page)
 * as the scratch code pad, and simply manage it like a stack.  That is,
 * the region below free is 'used'.  It's enough for simple FFI, since
 * the generated code won't live after the dynamic extent of FFI call.
 */
struct ScmCodeCacheRec {
    ScmMemoryRegion *wpad;      /* writable page */
    ScmMemoryRegion *xpad;      /* executable page */
    void *free;
};

#define CODE_PAD_SIZE 4096

static ScmObj sym_o;
static ScmObj sym_p;
static ScmObj sym_i;
static ScmObj sym_b;
static ScmObj sym_i16;
static ScmObj sym_i32;
static ScmObj sym_i64;
static ScmObj sym_d;
static ScmObj sym_f;
static ScmObj sym_s;
static ScmObj sym_v;

static void init_code_cache(ScmVM *vm) {
    if (vm->codeCache != NULL) return;

    ScmCodeCache *cc = SCM_NEW(ScmCodeCache);
    Scm_SysMmapWX(CODE_PAD_SIZE, &cc->wpad, &cc->xpad);
    cc->free = cc->wpad->ptr;
    vm->codeCache = cc;
}

static inline void *allocate_code_cache(ScmVM *vm, size_t size)
{
    ScmCodeCache *cc = vm->codeCache;
    if (cc->free + size > cc->wpad->ptr + cc->wpad->size) {
        Scm_Error("VM code cache overflow");
    }
    void *region = cc->free;
    cc->free += size;
    return region;
}

static inline void free_code_cache(ScmVM *vm, void *ptr)
{
    ScmCodeCache *cc = vm->codeCache;
    SCM_ASSERT(ptr >= cc->wpad->ptr && ptr < cc->wpad->ptr + cc->wpad->size);
    cc->free = ptr;
}

/* Returns address in xpad that corresponds to the wpad_ptr. */
static inline void *get_entry_address(ScmCodeCache *cc, void *wpad_ptr)
{
    return cc->xpad->ptr + (wpad_ptr - cc->wpad->ptr);
}

/*
 * some utility to 'patch' the code array
 */

typedef union {
    intptr_t n;
    uint8_t bn[SIZEOF_INTPTR_T];

    int16_t i16;
    uint8_t bi16[2];

    int32_t i32;
    uint8_t bi32[4];

    int64_t i64;
    uint8_t bi64[8];

    double d;
    uint8_t bd[SIZEOF_DOUBLE];

    float f;
    uint8_t bf[SIZEOF_FLOAT];
} pun_t;

static inline void patch1(void *dst, ScmSmallInt pos,
                         uint8_t *src, ScmSmallInt size, void *lim)
{
    if (dst + pos + size > lim) {
        Scm_Error("filler position out of range: %ld", pos);
    }
    memcpy(dst+pos, src, size);
}

/*
 * Copy CODE to the scratch pad, starting from START-th byte up to right before
 * END-th byte, from the pad's TSTART-th position.
 *
 * TEND is, when non-zero, it must be greater than TSTART+(END-START).  The
 * scratch pad area is allocated up to TEND, and filled with zero after the
 * code.
 *
 * Then the pad is patched according to PATCHER, as explained below.
 *
 * Finally, the code is called from the entry offset ENTRY.
 *
 * PATCHER has the following list:
 *   ((<pos> <type> <value>) ...)
 *
 *    <pos>  - specifies the position in the byte array to be filled.
 *
 *    <type> - one of the following symbols:
 *        o : ScmObj.   <value>'s ScmObj is used as is.
 *        p : pointer.  <value> is <dlptr>.
 *        i : integer (intptr_t).  <value> must be an integral type.
 *                      its integer value is used.
 *        b : byte.     <value> must be an integer [0..255].
 *        i16 : 16bit integer.  <value> must be an integral type.
 *        i32 : 32bit integer.  <value> must be an integral type.
 *        i64 : 64bit integer.  <value> must be an integral type.
 *        d : double.   <value> must be a real number.
 *        f : float.    <value> must be a real number.
 *        s : string    <value> must be a string type.  Pointer to the cstring
 *                      is used.
 *
 *    <value> - Scheme value to pass.
 *
 * RETTYPE is also a symbol similar to <type>, plus 'v' as no value.
 */

ScmObj Scm__VMCallNative(ScmVM *vm,
                         ScmSmallInt tstart,
                         ScmSmallInt tend,
                         ScmUVector *code,
                         ScmSmallInt start,
                         ScmSmallInt end,
                         ScmSmallInt entry,
                         ScmObj patcher,
                         ScmObj rettype)
{
    init_code_cache(vm);

    SCM_ASSERT(SCM_U8VECTORP(code));

    ScmSmallInt uvsize = SCM_UVECTOR_SIZE(code);
    SCM_CHECK_START_END(start, end, uvsize);

    size_t codesize = tstart + end - start;
    if (entry < 0 || (size_t)entry >= codesize) {
        Scm_Error("entry out of range: %ld", entry);
    }

    size_t realcodesize = codesize;
    if (tend > (ScmSmallInt)codesize) realcodesize = tend;

    void *codepad = allocate_code_cache(vm, realcodesize);
    if (tstart > 0) memset(codepad, 0, tstart);
    memcpy(codepad + tstart,
           SCM_UVECTOR_ELEMENTS(code)+start,
           end - start);
    if (realcodesize > codesize) {
        memset(codepad + codesize, 0, realcodesize - codesize);
        codesize = realcodesize;
    }

    ScmObj result = SCM_UNDEFINED;

    SCM_UNWIND_PROTECT {
        /*
         * Patch it
         */
        void *limit = codepad + codesize;

        ScmObj cp;
        SCM_FOR_EACH(cp, patcher) {
            ScmObj e = SCM_CAR(cp);
            if (Scm_Length(e) != 3) {
                Scm_Error("malformed filler entry: %S", e);
            }
            ScmObj s_pos = SCM_CAR(e);
            ScmObj type = SCM_CADR(e);
            ScmObj val = SCM_CAR(SCM_CDDR(e));

            if (!SCM_INTP(s_pos) || !SCM_SYMBOLP(type)) {
                Scm_Error("bad filler entry: %S", e);
            }
            ScmSmallInt pos = SCM_INT_VALUE(s_pos);

            pun_t pun;

            if (SCM_EQ(type, sym_o)) {
                pun.n = (intptr_t)val;
                patch1(codepad, pos, pun.bn, SIZEOF_INTPTR_T, limit);
            } else if (SCM_EQ(type, sym_p)) {
                if (!Scm_DLPtrP(val)) SCM_TYPE_ERROR(val, "dlptr");
                pun.n = SCM_FOREIGN_POINTER_REF(intptr_t, val);
                patch1(codepad, pos, pun.bn, SIZEOF_INTPTR_T, limit);
            } else if (SCM_EQ(type, sym_i)) {
                pun.n = Scm_IntegerToIntptr(val);
                patch1(codepad, pos, pun.bn, SIZEOF_INTPTR_T, limit);
            } else if (SCM_EQ(type, sym_b)) {
                if (!SCM_INTP(val)) SCM_TYPE_ERROR(val, "fixnum");
                uint8_t byte = SCM_INT_VALUE(val);
                patch1(codepad, pos, &byte, 1, limit);
            } else if (SCM_EQ(type, sym_i16)) {
                if (!SCM_INTP(val)) SCM_TYPE_ERROR(val, "fixnum");
                pun.i16 = SCM_INT_VALUE(val);
                patch1(codepad, pos, pun.bi16, 2, limit);
            } else if (SCM_EQ(type, sym_i32)) {
                pun.i32 = Scm_GetInteger32(val);
                patch1(codepad, pos, pun.bi32, 4, limit);
            } else if (SCM_EQ(type, sym_i64)) {
                pun.i64 = Scm_GetInteger64(val);
                patch1(codepad, pos, pun.bi64, 8, limit);
            } else if (SCM_EQ(type, sym_d)) {
                pun.d = Scm_GetDouble(val);
                patch1(codepad, pos, pun.bd, SIZEOF_DOUBLE, limit);
            } else if (SCM_EQ(type, sym_f)) {
                pun.f = (float)Scm_GetDouble(val);
                patch1(codepad, pos, pun.bf, SIZEOF_FLOAT, limit);
            } else if (SCM_EQ(type, sym_s)) {
                /* NB: If the callee retains the pointer, we need malloc. */
                if (!SCM_STRINGP(val)) SCM_TYPE_ERROR(val, "string");
                pun.n = (intptr_t)Scm_GetStringConst(SCM_STRING(val));
                patch1(codepad, pos, pun.bn, SIZEOF_INTPTR_T, limit);
            } else {
                Scm_Error("unknown patch type: %S", type);
            }
        }

        /*
         * Call the code
         */
        void *entryPtr = get_entry_address(vm->codeCache, codepad + entry);
        if (SCM_EQ(rettype, sym_d)) {
            double r = ((double (*)())entryPtr)();
            result = Scm_VMReturnFlonum(r);
        } else if (SCM_EQ(rettype, sym_f)) {
            float r = ((float (*)())entryPtr)();
            result = Scm_VMReturnFlonum((double)r);
        } else if (SCM_EQ(rettype, sym_s)) {
            intptr_t r = ((intptr_t (*)())entryPtr)();
            result = SCM_MAKE_STR_COPYING((const char*)r);
        } else if (SCM_EQ(rettype, sym_i)) {
            intptr_t r = ((intptr_t (*)())entryPtr)();
            result = Scm_IntptrToInteger(r);
        } else if (SCM_EQ(rettype, sym_b)) {
            uint8_t r = ((uint8_t (*)())entryPtr)();
            result = SCM_MAKE_INT(r);
        } else if (SCM_EQ(rettype, sym_o)) {
            intptr_t r = ((intptr_t (*)())entryPtr)();
            result = SCM_OBJ(r);      /* trust the caller */
        } else if (SCM_EQ(rettype, sym_v)) {
            ((void (*)())entryPtr)();
        } else {
            Scm_Error("unknown return type: %S", rettype);
        }
    } SCM_WHEN_ERROR {
        free_code_cache(vm, codepad);
        SCM_NEXT_HANDLER;
    } SCM_END_PROTECT;

    free_code_cache(vm, codepad);
    return result;
}

/*======================================================================
 * JIT support
 */

/* Allocate executable page and copy the machine code in CODE,
   returns an executable <memory-region>.
 */

ScmObj Scm__AllocateCodePage(ScmU8Vector *code)
{
    ScmMemoryRegion *wpad, *xpad;
    long codesize = SCM_U8VECTOR_SIZE(code);
    long pagesize = sys_getpagesize();
    long padsize = ((codesize+pagesize-1)/pagesize)*pagesize;
    Scm_SysMmapWX(padsize, &wpad, &xpad);
    memcpy(wpad->ptr, SCM_U8VECTOR_ELEMENTS(code), codesize);
    /* TODO: If writable page and executable page are mapped into
       two regions, we can unmap writable page here.  Currently we don't
       have an interface to do so explicitly, leaving GC finalizer to
       do the job.
     */
    return SCM_OBJ(xpad);
}


/*======================================================================
 * Initialization
 */

void Scm__InitNative(void)
{
    /* symbols for type */
    sym_o   = SCM_INTERN("o");
    sym_p   = SCM_INTERN("p");
    sym_b   = SCM_INTERN("b");
    sym_i   = SCM_INTERN("i");
    sym_i16 = SCM_INTERN("i16");
    sym_i32 = SCM_INTERN("i32");
    sym_i64 = SCM_INTERN("i64");
    sym_d   = SCM_INTERN("d");
    sym_f   = SCM_INTERN("f");
    sym_s   = SCM_INTERN("s");
    sym_v   = SCM_INTERN("v");
}
