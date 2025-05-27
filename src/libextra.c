/* Generated automatically from libextra.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"




static ScmObj libextramake_fptr_simple(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libextramake_fptr_simple__STUB, 1, 2,SCM_FALSE,libextramake_fptr_simple, NULL, NULL);

static ScmObj libextramake_fptr_unique(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libextramake_fptr_unique__STUB, 1, 2,SCM_FALSE,libextramake_fptr_unique, NULL, NULL);

static ScmObj libextramake_fptr_maybe(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libextramake_fptr_maybe__STUB, 1, 2,SCM_FALSE,libextramake_fptr_maybe, NULL, NULL);

static ScmObj libextrafptr_value(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libextrafptr_value__STUB, 1, 0,SCM_FALSE,libextrafptr_value, NULL, NULL);


#line 54 "libextra.scm"
#define PATH_ALLOC(n) (SCM_MALLOC_ATOMIC(n))


#line 55 "libextra.scm"
#define PATH_ERROR(...) (Scm_Error(__VA_ARGS__))


#line 56 "libextra.scm"
#include "paths.c"

static ScmObj libextrasubstitute_all(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libextrasubstitute_all__STUB, 3, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libextrasubstitute_all, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 136u, 134u, 8u, 0u, 59u, 192u, 36u, 145u, 196u, 3u, 2u, 96u,
82u, 71u, 15u, 12u, 9u, 0u, 145u, 195u, 67u, 2u, 96u, 56u, 71u, 11u,
12u, 16u, 23u, 1u, 128u, 201u, 28u, 24u, 48u, 38u, 28u, 100u, 112u,
32u, 192u, 222u, 32u, 64u, 213u, 0u, 146u, 19u, 14u, 50u, 71u, 1u,
12u, 9u, 138u, 209u, 28u, 0u, 48u, 38u, 44u, 228u, 49u, 6u, 6u, 49u,
0u, 144u, 152u, 167u, 132u, 192u, 115u, 128u, 18u, 64u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 2u, 192u, 36u, 55u, 136u, 16u, 53u, 64u,
36u, 136u, 11u, 128u, 192u, 100u, 136u, 0u, 59u, 192u, 36u, 240u, 2u,
71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 15u, 136u, 224u, 225u, 129u,
48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u,
64u,};
static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2150[29];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2150 */
      SCM_STRING_CONST_INITIALIZER("user", 4, 4),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("make-fptr-simple", 16, 16),
      SCM_STRING_CONST_INITIALIZER("value", 5, 5),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("attr", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libextra.scm", 12, 12),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("make-fptr-unique", 16, 16),
      SCM_STRING_CONST_INITIALIZER("make-fptr-maybe", 15, 15),
      SCM_STRING_CONST_INITIALIZER("fptr-value", 10, 10),
      SCM_STRING_CONST_INITIALIZER("fptr", 4, 4),
      SCM_STRING_CONST_INITIALIZER("substitute-all", 14, 14),
      SCM_STRING_CONST_INITIALIZER("input", 5, 5),
      SCM_STRING_CONST_INITIALIZER("mark", 4, 4),
      SCM_STRING_CONST_INITIALIZER("subst", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("main", 4, 4),
      SCM_STRING_CONST_INITIALIZER("usage: testgosh <test-script>", 29, 29),
      SCM_STRING_CONST_INITIALIZER("exit", 4, 4),
      SCM_STRING_CONST_INITIALIZER("load", 4, 4),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("pair\077", 5, 5),
  },
};
static struct scm__rcRec {
  ScmUVector d2155[2];
  ScmCompiledCode d2154[2];
  ScmWord d2153[36];
  ScmPair d2152[56] SCM_ALIGN_PAIR;
  ScmObj d2149[73];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2155 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 78, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 55, uvector__00002, 0, NULL),
  },
  {   /* ScmCompiledCode d2154 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* main */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2153[0])), 21,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2152[55]),
            SCM_OBJ(&scm__rc.d2154[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2153[21])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2153 */
    /* main */
    0x00000076    /*   0 (LREF0-CDR) */,
    0x00000098    /*   1 (PAIRP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2153[0]) + 6),
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2153[0]) + 13),
    0x0000200e    /*   6 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2153[0]) + 13),
    0x00001007    /*   8 (CONSTI-PUSH 1) */,
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[23])) /* "usage: testgosh <test-script>" */,
    0x0000205f    /*  11 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* exit */,
    0x0000100e    /*  13 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2153[0]) + 19),
    0x0000003d    /*  15 (LREF0) */,
    0x00000083    /*  16 (CADR-PUSH) */,
    0x0000105f    /*  17 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* load */,
    0x00000002    /*  19 (CONSTI 0) */,
    0x00000014    /*  20 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2153[21]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* main */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2153[21]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2154[0])) /* #<compiled-code main@0x748a9cc42060> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* main */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2152 */
       { SCM_NIL, SCM_NIL },
       { SCM_NIL, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[1])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[4])},
       { SCM_MAKE_INT(24U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[7]), SCM_OBJ(&scm__rc.d2152[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[7])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[9])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[10])},
       { SCM_OBJ(&scm__rc.d2152[11]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[8]), SCM_OBJ(&scm__rc.d2152[12])},
       { SCM_MAKE_INT(26U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[7]), SCM_OBJ(&scm__rc.d2152[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[18])},
       { SCM_OBJ(&scm__rc.d2152[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[16]), SCM_OBJ(&scm__rc.d2152[20])},
       { SCM_MAKE_INT(28U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[7]), SCM_OBJ(&scm__rc.d2152[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[23])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[26])},
       { SCM_OBJ(&scm__rc.d2152[27]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[24]), SCM_OBJ(&scm__rc.d2152[28])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(32U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[7]), SCM_OBJ(&scm__rc.d2152[31])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[32])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[34])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[35])},
       { SCM_OBJ(&scm__rc.d2152[36]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[33]), SCM_OBJ(&scm__rc.d2152[37])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[39])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[40])},
       { SCM_MAKE_INT(58U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[7]), SCM_OBJ(&scm__rc.d2152[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[43])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[45])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[46])},
       { SCM_OBJ(&scm__rc.d2152[47]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[44]), SCM_OBJ(&scm__rc.d2152[48])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(68U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[7]), SCM_OBJ(&scm__rc.d2152[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2152[52])},
       { SCM_OBJ(&scm__rc.d2152[53]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
  },
  {   /* ScmObj d2149 */
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(6, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(5, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(7, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(6, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_UNBOUND,
  },
};
static ScmClass* fptr_simple;
static ScmClass* fptr_unique;
static ScmClass* fptr_maybe;
 void print_fptr(ScmObj obj,ScmPort* sink,ScmWriteContext* G2151 SCM_UNUSED){{
#line 18 "libextra.scm"
{ScmClass* k=Scm_ClassOf(obj);
Scm_Printf(sink,"#<fptr-%s %p>",
(((k)==(fptr_simple))?("simple"):(
(((k)==(fptr_unique))?("unique"):("maybe")))),
SCM_FOREIGN_POINTER_REF(void* ,obj));}}}

static ScmObj libextramake_fptr_simple(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj value_scm;
  ScmObj value;
  ScmObj attr_scm;
  ScmObj attr;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-fptr-simple");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  value_scm = SCM_SUBRARGS[0];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  if (SCM_ARGCNT > 1+1) {
    attr_scm = SCM_SUBRARGS[1];
  } else {
    attr_scm = SCM_OBJ(&scm__rc.d2152[2]);
  }
  if (!(attr_scm)) Scm_Error("scheme object required, but got %S", attr_scm);
  attr = (attr_scm);
  {
{
ScmObj SCM_RESULT;

#line 25 "libextra.scm"
{SCM_RESULT=(Scm_MakeForeignPointerWithAttr(fptr_simple,value,attr));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libextramake_fptr_unique(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj value_scm;
  ScmObj value;
  ScmObj attr_scm;
  ScmObj attr;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-fptr-unique");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  value_scm = SCM_SUBRARGS[0];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  if (SCM_ARGCNT > 1+1) {
    attr_scm = SCM_SUBRARGS[1];
  } else {
    attr_scm = SCM_OBJ(&scm__rc.d2152[2]);
  }
  if (!(attr_scm)) Scm_Error("scheme object required, but got %S", attr_scm);
  attr = (attr_scm);
  {
{
ScmObj SCM_RESULT;

#line 27 "libextra.scm"
{SCM_RESULT=(Scm_MakeForeignPointerWithAttr(fptr_unique,value,attr));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libextramake_fptr_maybe(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj value_scm;
  ScmObj value;
  ScmObj attr_scm;
  ScmObj attr;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-fptr-maybe");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  value_scm = SCM_SUBRARGS[0];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  if (SCM_ARGCNT > 1+1) {
    attr_scm = SCM_SUBRARGS[1];
  } else {
    attr_scm = SCM_OBJ(&scm__rc.d2152[2]);
  }
  if (!(attr_scm)) Scm_Error("scheme object required, but got %S", attr_scm);
  attr = (attr_scm);
  {
{
ScmObj SCM_RESULT;

#line 29 "libextra.scm"
{SCM_RESULT=(Scm_MakeForeignPointerWithAttr(fptr_maybe,
((SCM_FALSEP(value))?(0):(value)),attr));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libextrafptr_value(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fptr_scm;
  ScmObj fptr;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("fptr-value");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fptr_scm = SCM_SUBRARGS[0];
  if (!(fptr_scm)) Scm_Error("scheme object required, but got %S", fptr_scm);
  fptr = (fptr_scm);
  {
{
ScmObj SCM_RESULT;

#line 33 "libextra.scm"
{ScmClass* k=Scm_ClassOf(fptr);
if (!((((k)==(fptr_simple))||(
(k)==(fptr_unique)))||(
(k)==(fptr_maybe)))){{
Scm_Error("fptr required, but got: %S",fptr);}}
{SCM_RESULT=(SCM_OBJ_SAFE(SCM_FOREIGN_POINTER_REF(ScmObj,fptr)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libextrasubstitute_all(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj input_scm;
  const char* input;
  ScmObj mark_scm;
  const char* mark;
  ScmObj subst_scm;
  const char* subst;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("substitute-all");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  input_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(input_scm)) Scm_Error("const char* required, but got %S", input_scm);
  input = SCM_STRING_CONST_CSTRING(input_scm);
  mark_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(mark_scm)) Scm_Error("const char* required, but got %S", mark_scm);
  mark = SCM_STRING_CONST_CSTRING(mark_scm);
  subst_scm = SCM_SUBRARGS[2];
  if (!SCM_STRINGP(subst_scm)) Scm_Error("const char* required, but got %S", subst_scm);
  subst = SCM_STRING_CONST_CSTRING(subst_scm);
  {
{
const char* SCM_RESULT;

#line 62 "libextra.scm"
((void )(replace_install_dir));

#line 63 "libextra.scm"
((void )(get_libgauche_path));

#line 64 "libextra.scm"
{SCM_RESULT=(substitute_all(input,mark,subst));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_STR_COPYING(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2154[1])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[64]), i++) = scm__rc.d2149[57];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[64]), i++) = scm__rc.d2149[58];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[64]), i++) = scm__rc.d2149[54];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[64]), i++) = SCM_OBJ(&scm__sc.d2150[23]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[64]), i++) = scm__rc.d2149[72];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[64]), i++) = scm__rc.d2149[52];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[64]);
}
void Scm_Init_libextra() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[0])),TRUE); /* user */
  scm__rc.d2149[0] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[1]), SCM_FIND_MODULE_CREATE)); /* module user */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[0]));
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[1])),TRUE); /* quote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[2]), scm__rc.d2149[2]);
  scm__rc.d2149[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[2])),TRUE); /* make-fptr-simple */
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[3])),TRUE); /* value */
  scm__rc.d2149[5] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[4]))); /* :optional */
  scm__rc.d2149[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[5])),TRUE); /* attr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[3]), scm__rc.d2149[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[4]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[5]), scm__rc.d2149[4]);
  scm__rc.d2149[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[6])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[8]), scm__rc.d2149[7]);
  scm__rc.d2149[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[8])),TRUE); /* bind-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[9]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[10]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[11]), scm__rc.d2149[8]);
  scm__rc.d2149[9] = Scm_MakeExtendedPair(scm__rc.d2149[3], SCM_OBJ(&scm__rc.d2152[5]), SCM_OBJ(&scm__rc.d2152[13]));
  scm__rc.d2149[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[9])),TRUE); /* <top> */
  scm__rc.d2149[11] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[10])),TRUE); /* * */
  scm__rc.d2149[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[11])),TRUE); /* -> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[13]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[13]))[4] = scm__rc.d2149[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[13]))[5] = scm__rc.d2149[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[13]))[6] = scm__rc.d2149[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[13]))[7] = scm__rc.d2149[10];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("make-fptr-simple")), SCM_OBJ(&libextramake_fptr_simple__STUB), 0);
  libextramake_fptr_simple__STUB.common.info = scm__rc.d2149[9];
  libextramake_fptr_simple__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[13]);
  scm__rc.d2149[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[12])),TRUE); /* make-fptr-unique */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[16]), scm__rc.d2149[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[17]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[18]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[19]), scm__rc.d2149[8]);
  scm__rc.d2149[22] = Scm_MakeExtendedPair(scm__rc.d2149[21], SCM_OBJ(&scm__rc.d2152[5]), SCM_OBJ(&scm__rc.d2152[21]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("make-fptr-unique")), SCM_OBJ(&libextramake_fptr_unique__STUB), 0);
  libextramake_fptr_unique__STUB.common.info = scm__rc.d2149[22];
  libextramake_fptr_unique__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[13]);
  scm__rc.d2149[23] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[13])),TRUE); /* make-fptr-maybe */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[24]), scm__rc.d2149[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[25]), scm__rc.d2149[23]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[26]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[27]), scm__rc.d2149[8]);
  scm__rc.d2149[24] = Scm_MakeExtendedPair(scm__rc.d2149[23], SCM_OBJ(&scm__rc.d2152[5]), SCM_OBJ(&scm__rc.d2152[29]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("make-fptr-maybe")), SCM_OBJ(&libextramake_fptr_maybe__STUB), 0);
  libextramake_fptr_maybe__STUB.common.info = scm__rc.d2149[24];
  libextramake_fptr_maybe__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[13]);
  scm__rc.d2149[25] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[14])),TRUE); /* fptr-value */
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[15])),TRUE); /* fptr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[30]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[33]), scm__rc.d2149[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[34]), scm__rc.d2149[25]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[35]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[36]), scm__rc.d2149[8]);
  scm__rc.d2149[27] = Scm_MakeExtendedPair(scm__rc.d2149[25], SCM_OBJ(&scm__rc.d2152[30]), SCM_OBJ(&scm__rc.d2152[38]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[4] = scm__rc.d2149[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[5] = scm__rc.d2149[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[6] = scm__rc.d2149[10];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("fptr-value")), SCM_OBJ(&libextrafptr_value__STUB), 0);
  libextrafptr_value__STUB.common.info = scm__rc.d2149[27];
  libextrafptr_value__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[28]);

#line 41 "libextra.scm"
fptr_simple=(Scm_MakeForeignPointerClass(
Scm_UserModule(),"<fptr-simple>",print_fptr,NULL,0));

#line 43 "libextra.scm"
fptr_unique=(Scm_MakeForeignPointerClass(
Scm_UserModule(),"<fptr-simple>",print_fptr,NULL,SCM_FOREIGN_POINTER_KEEP_IDENTITY));

#line 46 "libextra.scm"
fptr_maybe=(Scm_MakeForeignPointerClass(
Scm_UserModule(),"<fptr-simple>",print_fptr,NULL,SCM_FOREIGN_POINTER_MAP_NULL));
  scm__rc.d2149[35] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[16])),TRUE); /* substitute-all */
  scm__rc.d2149[36] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[17])),TRUE); /* input */
  scm__rc.d2149[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[18])),TRUE); /* mark */
  scm__rc.d2149[38] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[19])),TRUE); /* subst */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[39]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[40]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[41]), scm__rc.d2149[36]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[44]), scm__rc.d2149[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[45]), scm__rc.d2149[35]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[46]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[47]), scm__rc.d2149[8]);
  scm__rc.d2149[39] = Scm_MakeExtendedPair(scm__rc.d2149[35], SCM_OBJ(&scm__rc.d2152[41]), SCM_OBJ(&scm__rc.d2152[49]));
  scm__rc.d2149[40] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[20])),TRUE); /* <const-cstring> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[41]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[41]))[4] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[41]))[5] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[41]))[6] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[41]))[7] = scm__rc.d2149[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[41]))[8] = scm__rc.d2149[40];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("substitute-all")), SCM_OBJ(&libextrasubstitute_all__STUB), 0);
  libextrasubstitute_all__STUB.common.info = scm__rc.d2149[39];
  libextrasubstitute_all__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[41]);
  scm__rc.d2149[51] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[21])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[50] = Scm_MakeIdentifier(scm__rc.d2149[51], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[22])),TRUE); /* main */
  scm__rc.d2149[54] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[24])),TRUE); /* exit */
  scm__rc.d2149[55] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[1]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module user */
  scm__rc.d2149[53] = Scm_MakeIdentifier(scm__rc.d2149[54], SCM_MODULE(scm__rc.d2149[55]), SCM_NIL); /* user#exit */
  scm__rc.d2149[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[25])),TRUE); /* load */
  scm__rc.d2149[56] = Scm_MakeIdentifier(scm__rc.d2149[57], SCM_MODULE(scm__rc.d2149[55]), SCM_NIL); /* user#load */
  scm__rc.d2149[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[26])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[50]), scm__rc.d2149[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[53]), scm__rc.d2149[7]);
  scm__rc.d2149[59] = Scm_MakeExtendedPair(scm__rc.d2149[52], SCM_OBJ(&scm__rc.d2152[50]), SCM_OBJ(&scm__rc.d2152[54]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2152[55]), scm__rc.d2149[59]);
  scm__rc.d2149[60] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2155[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2154[0]))->name = scm__rc.d2149[52];/* main */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2154[0]))->debugInfo = scm__rc.d2149[60];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2153[0]))[12] = SCM_WORD(scm__rc.d2149[53]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2153[0]))[18] = SCM_WORD(scm__rc.d2149[56]);
  scm__rc.d2149[61] = Scm_MakeIdentifier(scm__rc.d2149[52], SCM_MODULE(scm__rc.d2149[55]), SCM_NIL); /* user#main */
  scm__rc.d2149[62] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[27])),TRUE); /* %toplevel */
  scm__rc.d2149[63] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2155[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2154[1]))->name = scm__rc.d2149[62];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2154[1]))->debugInfo = scm__rc.d2149[63];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2153[21]))[3] = SCM_WORD(scm__rc.d2149[50]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2153[21]))[6] = SCM_WORD(scm__rc.d2149[52]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2153[21]))[13] = SCM_WORD(scm__rc.d2149[61]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[72] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[28])),TRUE); /* pair? */
}
