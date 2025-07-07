/*
 * vport.c - 'virtual port'
 *
 *   Copyright (c) 2004-2024  Shiro Kawai  <shiro@acm.org>
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

#include <gauche.h>
#include <gauche/extend.h>
#include <gauche/priv/portP.h>

#include "vport.h"

#undef close    /* windows black magic */

static ScmObj key_bufsize = SCM_FALSE; /* :buffer-size */
static ScmObj key_name = SCM_FALSE;    /* :name */

/*================================================================
 * <virtual-port>
 */

static ScmObj vport_allocate(ScmClass *klass, ScmObj initargs);
static void   vport_print(ScmObj obj, ScmPort *port, ScmWriteContext *ctx);

static ScmClass *vport_cpa[] = {
    SCM_CLASS_STATIC_PTR(Scm_PortClass),
    SCM_CLASS_STATIC_PTR(Scm_TopClass),
    NULL
};

SCM_DEFINE_BASE_CLASS(Scm_VirtualInputPortClass, ScmPort,
                      vport_print, NULL, NULL,
                      vport_allocate, vport_cpa);

SCM_DEFINE_BASE_CLASS(Scm_VirtualOutputPortClass, ScmPort,
                      vport_print, NULL, NULL,
                      vport_allocate, vport_cpa);

SCM_DEFINE_BASE_CLASS(Scm_VirtualIOPortClass, ScmPort,
                      vport_print, NULL, NULL,
                      vport_allocate, vport_cpa);

/*
 * Scheme handlers.  They are visible from Scheme as instance slots.
 * Any of these slots can be #f - if possible, the vport tries to fulfill
 * the feature by using alternative methods.  If not possible, it raises
 * 'not supported' error.
 */
typedef struct vport_rec {
    ScmObj getb_proc;           /* () -> Maybe Byte   */
    ScmObj getc_proc;           /* () -> Maybe Char   */
    ScmObj gets_proc;           /* (Size) -> Maybe String */
    ScmObj ready_proc;          /* (Bool) -> Bool */
    ScmObj putb_proc;           /* (Byte) -> () */
    ScmObj putc_proc;           /* (Char) -> () */
    ScmObj puts_proc;           /* (String) -> () */
    ScmObj flush_proc;          /* () -> () */
    ScmObj close_proc;          /* () -> () */
    ScmObj seek_proc;           /* (Offset, Whence) -> Offset */
    ScmObj getpos_proc;         /* () -> Pos */
    ScmObj setpos_proc;         /* (Pos) -> () */
} vport;

#define VPORT(port)   ((vport*)PORT_VT(port)->data)

/*------------------------------------------------------------
 * Vport Getb
 */
static int vport_getb(ScmPort *p)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);

    if (SCM_FALSEP(data->getb_proc)) {
        /* If the port doesn't have get-byte method, use get-char
           if possible. */
        char buf[SCM_CHAR_MAX_BYTES];

        if (SCM_FALSEP(data->getc_proc)) return EOF;
        ScmObj ch = Scm_ApplyRec(data->getc_proc, SCM_NIL);
        if (!SCM_CHARP(ch)) return EOF;

        ScmChar c = SCM_CHAR_VALUE(ch);
        int nb = SCM_CHAR_NBYTES(c);
        SCM_CHAR_PUT(buf, c);

        for (int i=1; i<nb; i++) {
            /* pushback for later use.  this isn't very efficient;
               if efficiency becomes a problem, we need another API
               to pushback multiple bytes. */
            Scm_UngetbUnsafe(buf[i], p);
        }
        return (unsigned char)buf[0];
    } else {
        ScmObj b = Scm_ApplyRec(data->getb_proc, SCM_NIL);
        if (!SCM_INTP(b)) return EOF;
        return (SCM_INT_VALUE(b) & 0xff);
    }
}

/*------------------------------------------------------------
 * Vport Getc
 */
static int vport_getc(ScmPort *p)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);

    if (SCM_FALSEP(data->getc_proc)) {
        /* If the port doesn't have get-char method, try get-byte */
        char buf[SCM_CHAR_MAX_BYTES];

        if (SCM_FALSEP(data->getb_proc)) return EOF;
        ScmObj b = Scm_ApplyRec(data->getb_proc, SCM_NIL);
        if (!SCM_INTP(b)) return EOF;
        buf[0] = (char)SCM_INT_VALUE(b);
        int n = SCM_CHAR_NFOLLOWS(P_(p)->scratch[0]);
        for (int i=0; i<n; i++) {
            b = Scm_ApplyRec(data->getb_proc, SCM_NIL);
            if (!SCM_INTP(b)) {
                /* TODO: should raise an exception? */
                return EOF;
            }
            buf[i+1] = (char)SCM_INT_VALUE(b);
        }
        ScmChar ch;
        SCM_CHAR_GET(buf, ch);
        return ch;
    } else {
        ScmObj ch = Scm_ApplyRec(data->getc_proc, SCM_NIL);
        if (!SCM_CHARP(ch)) return EOF;
        return SCM_CHAR_VALUE(ch);
    }
}

/*------------------------------------------------------------
 * Vport Gets
 */
static ScmSize vport_getz(char *buf, ScmSize buflen, ScmPort *p)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);

    if (!SCM_FALSEP(data->gets_proc)) {
        ScmSmallInt size;
        ScmObj s = Scm_ApplyRec(data->gets_proc,
                                SCM_LIST1(SCM_MAKE_INT(buflen)));
        if (!SCM_STRINGP(s)) return EOF;
        const char *start = Scm_GetStringContent(SCM_STRING(s), &size,
                                                 NULL, NULL);
        if (size > buflen) {
            /* NB: should raise an exception? */
            memcpy(buf, start, buflen);
            return buflen;
        } else {
            memcpy(buf, start, size);
            return size;
        }
    } else {
        ScmSize i = 0;
        for (; i<buflen; i++) {
            int byte = vport_getb(p);
            if (byte == EOF) break;
            buf[i] = byte;
        }
        if (i==0) return EOF;
        else return i;
    }
}

/*------------------------------------------------------------
 * Vport Ready
 */
static int vport_ready(ScmPort *p, int charp)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);

    if (!SCM_FALSEP(data->ready_proc)) {
        ScmObj s = Scm_ApplyRec(data->ready_proc,
                                SCM_LIST1(SCM_MAKE_BOOL(charp)));
        return !SCM_FALSEP(s);
    } else {
        /* if no method is given, always return #t */
        return TRUE;
    }
}

/*------------------------------------------------------------
 * Vport putb
 */
static void vport_putb(ScmByte b, ScmPort *p)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);

    if (SCM_FALSEP(data->putb_proc)) {
        if (!SCM_FALSEP(data->putc_proc)
            && SCM_CHAR_NFOLLOWS(b) == 0) {
            /* This byte is a single-byte character, so we can use putc. */
            Scm_ApplyRec(data->putc_proc, SCM_LIST1(SCM_MAKE_CHAR(b)));
        } else {
            /* Given byte is a part of multibyte sequence.  We don't
               handle it for the time being. */
            Scm_PortError(p, SCM_PORT_ERROR_UNIT,
                          "cannot perform binary output to the port %S", p);
        }
    } else {
        Scm_ApplyRec(data->putb_proc, SCM_LIST1(SCM_MAKE_INT(b)));
    }
}

/*------------------------------------------------------------
 * Vport putc
 */
static void vport_putc(ScmChar c, ScmPort *p)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);

    if (SCM_FALSEP(data->putc_proc)) {
        if (SCM_FALSEP(data->putb_proc)) {
            Scm_PortError(p, SCM_PORT_ERROR_OTHER,
                          "cannot perform output to the port %S", p);
        } else {
            unsigned char buf[SCM_CHAR_MAX_BYTES];
            int n = SCM_CHAR_NBYTES(c);
            SCM_CHAR_PUT(buf, c);
            for (int i=0; i<n; i++) {
                Scm_ApplyRec(data->putb_proc, SCM_LIST1(SCM_MAKE_INT(buf[i])));
            }
        }
    } else {
        Scm_ApplyRec(data->putc_proc, SCM_LIST1(SCM_MAKE_CHAR(c)));
    }
}

/*------------------------------------------------------------
 * Vport putz
 */
static void vport_putz(const char *buf, ScmSize size, ScmPort *p)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);

    if (!SCM_FALSEP(data->puts_proc)) {
        Scm_ApplyRec(data->puts_proc,
                     SCM_LIST1(Scm_MakeString(buf, size, -1,
                                              SCM_STRING_COPYING)));
    } else if (!SCM_FALSEP(data->putb_proc)) {
        for (ScmSize i=0; i<size; i++) {
            unsigned char b = buf[i];
            Scm_ApplyRec(data->putb_proc, SCM_LIST1(SCM_MAKE_INT(b)));
        }
    } else {
        Scm_PortError(p, SCM_PORT_ERROR_UNIT,
                      "cannot perform binary output to the port %S", p);
   }
}

/*------------------------------------------------------------
 * Vport puts
 */
static void vport_puts(ScmString *s, ScmPort *p)
{
    vport *data = VPORT(p);
    const ScmStringBody *b = SCM_STRING_BODY(s);
    SCM_ASSERT(data != NULL);

    if (!SCM_FALSEP(data->puts_proc)) {
        Scm_ApplyRec(data->puts_proc, SCM_LIST1(SCM_OBJ(s)));
    } else if (SCM_STRING_BODY_INCOMPLETE_P(b)
               || (SCM_FALSEP(data->putc_proc)
                   && !SCM_FALSEP(data->putb_proc))) {
        /* we perform binary output */
        vport_putz(SCM_STRING_BODY_START(b), SCM_STRING_BODY_SIZE(b), p);
    } else if (!SCM_FALSEP(data->putc_proc)) {
        const char *cp = SCM_STRING_BODY_START(b);
        for (int i=0; i < (int)SCM_STRING_BODY_LENGTH(b); i++) {
            ScmChar c;
            SCM_CHAR_GET(cp, c);
            cp += SCM_CHAR_NFOLLOWS(*cp)+1;
            Scm_ApplyRec(data->putc_proc, SCM_LIST1(SCM_MAKE_CHAR(c)));
        }
    } else {
        Scm_PortError(p, SCM_PORT_ERROR_OTHER,
                      "cannot perform output to the port %S", p);
    }
}

/*------------------------------------------------------------
 * Vport flush
 */
static void vport_flush(ScmPort *p)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);
    if (!SCM_FALSEP(data->flush_proc)) {
        Scm_ApplyRec(data->flush_proc, SCM_NIL);
    }
}

/*------------------------------------------------------------
 * Vport close
 */
static void vport_close(ScmPort *p)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);
    if (!SCM_FALSEP(data->close_proc)) {
        Scm_ApplyRec(data->close_proc, SCM_NIL);
    }
}

/*------------------------------------------------------------
 * Vport seek
 */
static off_t vport_seek(ScmPort *p, off_t off, int whence)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);
    if (!SCM_FALSEP(data->seek_proc)) {
        ScmObj r = Scm_ApplyRec(data->seek_proc,
                                SCM_LIST2(Scm_OffsetToInteger(off),
                                          Scm_MakeInteger(whence)));
        if (SCM_INTEGERP(r)) {
            return Scm_IntegerToOffset(r);
        }
    }
    return (off_t)-1;
}

static ScmObj vport_getpos(ScmPort *p)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);
    if (!SCM_FALSEP(data->getpos_proc)) {
        return Scm_ApplyRec(data->getpos_proc, SCM_NIL);
    } else if (!SCM_FALSEP(data->seek_proc)) {
        return Scm_ApplyRec(data->seek_proc,
                            SCM_LIST2(SCM_MAKE_INT(0),
                                      SCM_MAKE_INT(SEEK_CUR)));
    }
    return SCM_UNDEFINED;
}

static void vport_setpos(ScmPort *p, ScmObj pos)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);
    if (!SCM_FALSEP(data->setpos_proc)) {
        Scm_ApplyRec(data->setpos_proc, SCM_LIST1(pos));
    } else if (!SCM_FALSEP(data->seek_proc)) {
        Scm_ApplyRec(data->seek_proc,
                     SCM_LIST2(pos, SCM_MAKE_INT(SEEK_SET)));
    }
}


/*------------------------------------------------------------
 * Allocation & wiring
 */

static ScmObj vport_allocate(ScmClass *klass, ScmObj initargs)
{
    vport *data = SCM_NEW(vport);

    data->getb_proc = SCM_FALSE;
    data->getc_proc = SCM_FALSE;
    data->gets_proc = SCM_FALSE;
    data->ready_proc = SCM_FALSE;
    data->putb_proc = SCM_FALSE;
    data->putc_proc = SCM_FALSE;
    data->puts_proc = SCM_FALSE;
    data->flush_proc = SCM_FALSE;
    data->close_proc = SCM_FALSE;
    data->seek_proc = SCM_FALSE;
    data->getpos_proc = SCM_FALSE;
    data->setpos_proc = SCM_FALSE;

    ScmPortVTable vtab;
    vtab.Getb = vport_getb;
    vtab.Getc = vport_getc;
    vtab.Getz = vport_getz;
    vtab.Ready = vport_ready;
    vtab.Putb = vport_putb;
    vtab.Putc = vport_putc;
    vtab.Putz = vport_putz;
    vtab.Puts = vport_puts;
    vtab.Flush = vport_flush;
    vtab.Close = vport_close;
    /* these procedures will be set according to the slot values */
    vtab.Seek  = NULL;
    vtab.GetPos = NULL;
    vtab.SetPos = NULL;
    vtab.flags = 0;

    int dir = 0;
    if (Scm_SubtypeP(klass, SCM_CLASS_VIRTUAL_INPUT_PORT)) {
        dir = SCM_PORT_INPUT;
    } else if (Scm_SubtypeP(klass, SCM_CLASS_VIRTUAL_OUTPUT_PORT)) {
        dir = SCM_PORT_OUTPUT;
    } else if (Scm_SubtypeP(klass, SCM_CLASS_VIRTUAL_IO_PORT)) {
        dir = SCM_PORT_INPUT | SCM_PORT_OUTPUT;
    } else {
        Scm_Panic("vport_allocate: implementation error (class wiring screwed?)");
    }
    ScmObj name = Scm_GetKeyword(key_name, initargs, SCM_FALSE);
    ScmObj port = Scm_MakeVirtualPortFull(klass, name, dir, &vtab,
                                          SCM_PORT_WITH_POSITION);
    PORT_VT(port)->data = data;
    return port;
}

static void vport_print(ScmObj obj, ScmPort *port,
                        ScmWriteContext *ctx SCM_UNUSED)
{
    Scm_Printf(port, "#<%A%s %A %p>",
               Scm_ShortClassName(Scm_ClassOf(obj)),
               SCM_PORT_CLOSED_P(obj)? "(closed)" : "",
               Scm_PortName(SCM_PORT(obj)),
               obj);
}

/* Accessors */
#define VPORT_GET(name)                                         \
    static ScmObj SCM_CPP_CAT3(vport_,name,_get) (ScmObj p)     \
    {                                                           \
        vport *data = VPORT(p);                                 \
        SCM_ASSERT(data != NULL);                               \
        return data->SCM_CPP_CAT(name,_proc);                   \
    }

#define VPORT_SET(name)                                                 \
    static void SCM_CPP_CAT3(vport_,name,_set) (ScmObj p, ScmObj v)     \
    {                                                                   \
        vport *data = VPORT(p);                                         \
        SCM_ASSERT(data != NULL);                                       \
        data->SCM_CPP_CAT(name,_proc) = v;                              \
    }

#define VPORT_ACC(name)   VPORT_GET(name) VPORT_SET(name)

VPORT_ACC(getb)
VPORT_ACC(getc)
VPORT_ACC(gets)
VPORT_ACC(ready)
VPORT_ACC(putb)
VPORT_ACC(putc)
VPORT_ACC(puts)
VPORT_ACC(flush)
VPORT_ACC(close)

VPORT_GET(seek)
VPORT_GET(getpos)
VPORT_GET(setpos)

static void vport_seek_set(ScmObj p, ScmObj v)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);
    data->seek_proc = v;
    ScmPortVTable *vt = Scm_PortVTableStruct(SCM_PORT(p));
    if (SCM_FALSEP(v)) {
        vt->Seek = NULL;
    } else {
        vt->Seek = vport_seek;
    }
}

static void vport_getpos_set(ScmObj p, ScmObj v)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);
    data->getpos_proc = v;
    ScmPortVTable *vt = Scm_PortVTableStruct(SCM_PORT(p));
    if (SCM_FALSEP(v)) {
        vt->GetPos = NULL;
    } else {
        vt->GetPos = vport_getpos;
    }
}

static void vport_setpos_set(ScmObj p, ScmObj v)
{
    vport *data = VPORT(p);
    SCM_ASSERT(data != NULL);
    data->setpos_proc = v;
    ScmPortVTable *vt = Scm_PortVTableStruct(SCM_PORT(p));
    if (SCM_FALSEP(v)) {
        vt->SetPos = NULL;
    } else {
        vt->SetPos = vport_setpos;
    }
}

#define VPORT_SLOT(name)                                \
    SCM_CLASS_SLOT_SPEC(#name,                          \
                        SCM_CPP_CAT3(vport_,name,_get), \
                        SCM_CPP_CAT3(vport_,name,_set))

static ScmClassStaticSlotSpec viport_slots[] = {
    VPORT_SLOT(getb),
    VPORT_SLOT(getc),
    VPORT_SLOT(gets),
    VPORT_SLOT(ready),
    VPORT_SLOT(close),
    VPORT_SLOT(seek),
    VPORT_SLOT(getpos),
    VPORT_SLOT(setpos),
    SCM_CLASS_SLOT_SPEC_END()
};

static ScmClassStaticSlotSpec voport_slots[] = {
    VPORT_SLOT(putb),
    VPORT_SLOT(putc),
    VPORT_SLOT(puts),
    VPORT_SLOT(flush),
    VPORT_SLOT(close),
    VPORT_SLOT(seek),
    VPORT_SLOT(getpos),
    VPORT_SLOT(setpos),
    SCM_CLASS_SLOT_SPEC_END()
};

static ScmClassStaticSlotSpec vioport_slots[] = {
    VPORT_SLOT(getb),
    VPORT_SLOT(getc),
    VPORT_SLOT(gets),
    VPORT_SLOT(ready),
    VPORT_SLOT(putb),
    VPORT_SLOT(putc),
    VPORT_SLOT(puts),
    VPORT_SLOT(flush),
    VPORT_SLOT(close),
    VPORT_SLOT(seek),
    VPORT_SLOT(getpos),
    VPORT_SLOT(setpos),
    SCM_CLASS_SLOT_SPEC_END()
};

/*================================================================
 * <buffered-port>
 */

static ScmObj bport_allocate(ScmClass *klass, ScmObj initargs);

SCM_DEFINE_BASE_CLASS(Scm_BufferedInputPortClass, ScmPort,
                      vport_print, NULL, NULL,
                      bport_allocate, vport_cpa);

SCM_DEFINE_BASE_CLASS(Scm_BufferedOutputPortClass, ScmPort,
                      vport_print, NULL, NULL,
                      bport_allocate, vport_cpa);


/*
 * Scheme handlers.  They are visible from Scheme as instance slots.
 */

typedef struct bport_rec {
    ScmObj fill_proc;           /* (U8vector) -> Maybe Int*/
    ScmObj flush_proc;          /* (U8vector, Bool) -> Maybe Int */
    ScmObj close_proc;          /* () -> () */
    ScmObj ready_proc;          /* () -> Bool */
    ScmObj filenum_proc;        /* () -> Maybe Int */
    ScmObj getpos_proc;         /* () -> Maybe Int */
    ScmObj setpos_proc;         /* (Int) ->  () */
    ScmObj seek_proc;           /* (Offset, Whence) -> Offset */
} bport;

#define BPORT(port)   ((bport*)PORT_BUF(port)->data)

/*------------------------------------------------------------
 * Bport fill
 */
static ScmSize bport_fill(ScmPort *p, ScmSize cnt)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);
    if (SCM_FALSEP(data->fill_proc)) {
        return 0;               /* indicates EOF */
    }
    ScmObj vec =
        Scm_MakeU8VectorFromArrayShared(cnt, (u_char*)PORT_BUF(p)->buffer);
    ScmObj r = Scm_ApplyRec(data->fill_proc, SCM_LIST1(vec));
    if (SCM_INTP(r)) return SCM_INT_VALUE(r);
    else if (SCM_EOFP(r)) return 0;
    else return -1;
}

/*------------------------------------------------------------
 * Bport flush
 */
static ScmSize bport_flush(ScmPort *p, ScmSize cnt, int forcep)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);
    if (SCM_FALSEP(data->flush_proc)) {
        return cnt;             /* blackhole */
    }
    ScmObj vec =
        Scm_MakeU8VectorFromArrayShared(cnt, (u_char*)PORT_BUF(p)->buffer);
    ScmObj r = Scm_ApplyRec(data->flush_proc,
                            SCM_LIST2(vec, SCM_MAKE_BOOL(forcep)));
    if (SCM_INTP(r)) return SCM_INT_VALUE(r);
    else if (SCM_EOFP(r)) return 0;
    else return -1;
}

/*------------------------------------------------------------
 * Bport close
 */
static void bport_close(ScmPort *p)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);
    if (!SCM_FALSEP(data->close_proc)) {
        Scm_ApplyRec(data->close_proc, SCM_NIL);
    }
}

/*------------------------------------------------------------
 * Bport Ready
 */
static int bport_ready(ScmPort *p)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);

    if (!SCM_FALSEP(data->ready_proc)) {
        ScmObj s = Scm_ApplyRec(data->ready_proc, SCM_NIL);
        return SCM_FALSEP(s)? SCM_FD_WOULDBLOCK:SCM_FD_READY;
    } else {
        /* if no method is given, always return #t */
        return SCM_FD_READY;
    }
}

/*------------------------------------------------------------
 * Bport filenum
 */
static int bport_filenum(ScmPort *p)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);

    if (SCM_FALSEP(data->filenum_proc)) {
        return -1;
    } else {
        ScmObj s = Scm_ApplyRec(data->filenum_proc, SCM_NIL);
        if (SCM_INTP(s)) return SCM_INT_VALUE(s);
        else return -1;
    }
}

/*------------------------------------------------------------
 * Bport positioning
 */
static ScmObj bport_getpos(ScmPort *p)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);
    if (!SCM_FALSEP(data->getpos_proc)) {
        return Scm_ApplyRec(data->getpos_proc, SCM_NIL);
    } else {
        return SCM_FALSE;
    }
}

static void bport_setpos(ScmPort *p, ScmObj pos)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);
    if (!SCM_FALSEP(data->setpos_proc)) {
        Scm_ApplyRec(data->setpos_proc, SCM_LIST1(pos));
    }
}

static off_t bport_seek(ScmPort *p, off_t off, int whence)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);
    if (!SCM_FALSEP(data->seek_proc)) {
        ScmObj r = Scm_ApplyRec(data->seek_proc,
                                SCM_LIST2(Scm_OffsetToInteger(off),
                                          Scm_MakeInteger(whence)));
        if (SCM_INTEGERP(r)) {
            return Scm_IntegerToOffset(r);
        }
    }
    return (off_t)-1;
}

/*------------------------------------------------------------
 * Allocation & wiring
 */

static ScmObj bport_allocate(ScmClass *klass, ScmObj initargs)
{
    bport *data = SCM_NEW(bport);
    int bufsize = Scm_GetInteger(Scm_GetKeyword(key_bufsize, initargs,
                                                SCM_MAKE_INT(0)));

    data->fill_proc  = SCM_FALSE;
    data->flush_proc = SCM_FALSE;
    data->close_proc = SCM_FALSE;
    data->ready_proc = SCM_FALSE;
    data->filenum_proc = SCM_FALSE;
    data->getpos_proc = SCM_FALSE;
    data->setpos_proc = SCM_FALSE;
    data->seek_proc  = SCM_FALSE;

    ScmPortBuffer buf;
    if (bufsize > 0) {
        buf.buffer = SCM_NEW_ATOMIC2(char*, bufsize);
        buf.size = bufsize;
    } else {
        buf.buffer = NULL;
        buf.size = 0;
    }

    buf.current = NULL;
    buf.end     = NULL;
    buf.mode    = SCM_PORT_BUFFER_FULL;
    buf.filler  = bport_fill;
    buf.flusher = bport_flush;
    buf.closer  = bport_close;
    buf.ready   = bport_ready;
    buf.filenum = bport_filenum;
    buf.data    = data;
    /* these procedures will be set according to the slot values */
    buf.seeker  = NULL;
    buf.getpos  = NULL;
    buf.setpos  = NULL;
    buf.flags = 0;

    int dir = 0;
    if (Scm_SubtypeP(klass, SCM_CLASS_BUFFERED_INPUT_PORT)) {
        dir = SCM_PORT_INPUT;
    } else if (Scm_SubtypeP(klass, SCM_CLASS_BUFFERED_OUTPUT_PORT)) {
        dir = SCM_PORT_OUTPUT;
    } else {
        Scm_Panic("bport_allocate: implementation error (class wiring screwed?)");
    }
    ScmObj name = Scm_GetKeyword(key_name, initargs, SCM_FALSE);
    ScmObj port = Scm_MakeBufferedPortFull(klass, name, dir, &buf,
                                           (SCM_PORT_OWNER|SCM_PORT_WITH_POSITION));
    return port;
}

/* Accessors */
#define BPORT_GET(name)                                                 \
    static ScmObj SCM_CPP_CAT3(bport_,name,_get) (ScmObj p)             \
    {                                                                   \
        bport *data = BPORT(p);                                         \
        SCM_ASSERT(data != NULL);                                       \
        return data->SCM_CPP_CAT(name,_proc);                           \
    }

#define BPORT_SET(name)                                                 \
    static void SCM_CPP_CAT3(bport_,name,_set) (ScmObj p, ScmObj v)     \
    {                                                                   \
        bport *data = BPORT(p);                                         \
        SCM_ASSERT(data != NULL);                                       \
        data->SCM_CPP_CAT(name,_proc) = v;                              \
    }

#define BPORT_ACC(name)   BPORT_GET(name) BPORT_SET(name)

BPORT_ACC(fill)
BPORT_ACC(ready)
BPORT_ACC(flush)
BPORT_ACC(close)
BPORT_ACC(filenum)

BPORT_GET(seek)
BPORT_GET(getpos)
BPORT_GET(setpos)

static void bport_seek_set(ScmObj p, ScmObj v)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);
    data->seek_proc = v;
    ScmPortBuffer *b = Scm_PortBufferStruct(SCM_PORT(p));
    if (SCM_FALSEP(v)) {
        b->seeker = NULL;
    } else {
        b->seeker = bport_seek;
    }
}

static void bport_getpos_set(ScmObj p, ScmObj v)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);
    data->getpos_proc = v;
    ScmPortBuffer *b = Scm_PortBufferStruct(SCM_PORT(p));
    if (SCM_FALSEP(v)) {
        b->getpos = NULL;
    } else {
        b->getpos = bport_getpos;
    }
}

static void bport_setpos_set(ScmObj p, ScmObj v)
{
    bport *data = BPORT(p);
    SCM_ASSERT(data != NULL);
    data->setpos_proc = v;
    ScmPortBuffer *b = Scm_PortBufferStruct(SCM_PORT(p));
    if (SCM_FALSEP(v)) {
        b->setpos = NULL;
    } else {
        b->setpos = bport_setpos;
    }
}

#define BPORT_SLOT(name)                                \
    SCM_CLASS_SLOT_SPEC(#name,                          \
                        SCM_CPP_CAT3(bport_,name,_get), \
                        SCM_CPP_CAT3(bport_,name,_set))

static ScmClassStaticSlotSpec biport_slots[] = {
    BPORT_SLOT(fill),
    BPORT_SLOT(ready),
    BPORT_SLOT(close),
    BPORT_SLOT(filenum),
    BPORT_SLOT(seek),
    BPORT_SLOT(getpos),
    BPORT_SLOT(setpos),
    SCM_CLASS_SLOT_SPEC_END()
};

static ScmClassStaticSlotSpec boport_slots[] = {
    BPORT_SLOT(flush),
    BPORT_SLOT(close),
    BPORT_SLOT(filenum),
    BPORT_SLOT(seek),
    BPORT_SLOT(getpos),
    BPORT_SLOT(setpos),
    SCM_CLASS_SLOT_SPEC_END()
};

/*================================================================
 * Initialization
 */

SCM_EXTENSION_ENTRY void Scm_Init_gauche__vport(void)
{
    SCM_INIT_EXTENSION(gauche__vport);
    ScmModule *mod = SCM_FIND_MODULE("gauche.vport", SCM_FIND_MODULE_CREATE);

    Scm_InitStaticClass(&Scm_VirtualInputPortClass,
                        "<virtual-input-port>", mod, viport_slots, 0);
    Scm_InitStaticClass(&Scm_VirtualOutputPortClass,
                        "<virtual-output-port>", mod, voport_slots, 0);
    Scm_InitStaticClass(&Scm_VirtualIOPortClass,
                        "<virtual-io-port>", mod, vioport_slots, 0);
    Scm_InitStaticClass(&Scm_BufferedInputPortClass,
                        "<buffered-input-port>", mod, biport_slots, 0);
    Scm_InitStaticClass(&Scm_BufferedOutputPortClass,
                        "<buffered-output-port>", mod, boport_slots, 0);

    key_bufsize = SCM_MAKE_KEYWORD("buffer-size");
    key_name = SCM_MAKE_KEYWORD("name");
}
