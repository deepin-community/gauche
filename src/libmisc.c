/* Generated automatically from libmisc.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
static ScmObj libmischas_setterP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmischas_setterP__STUB, 1, 0,SCM_FALSE,libmischas_setterP, NULL, NULL);

static ScmObj libmiscundefined(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmiscundefined__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmiscundefined, SCM_MAKE_INT(SCM_VM_CONSTU), NULL);

static ScmObj libmiscundefinedP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmiscundefinedP__STUB, 1, 0,1, SCM_FALSE,0, libmiscundefinedP, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 140u, 134u, 8u, 0u, 64u, 36u, 145u, 198u, 3u, 2u, 96u, 82u,
71u, 23u, 12u, 14u, 176u, 16u, 128u, 72u, 128u, 224u, 72u, 20u, 192u,
196u, 142u, 44u, 24u, 18u, 6u, 35u, 137u, 134u, 4u, 194u, 160u, 142u,
36u, 24u, 18u, 5u, 35u, 135u, 6u, 4u, 194u, 160u, 142u, 26u, 24u, 19u,
9u, 130u, 56u, 88u, 96u, 72u, 8u, 142u, 18u, 24u, 19u, 8u, 50u, 56u,
48u, 96u, 111u, 16u, 60u, 16u, 66u, 97u, 6u, 19u, 1u, 194u, 71u, 4u,
12u, 9u, 145u, 153u, 28u, 0u, 48u, 38u, 70u, 100u, 49u, 6u, 6u, 49u,
2u, 164u, 12u, 19u, 34u, 130u, 72u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 4u, 192u, 169u, 3u, 6u, 241u, 3u, 193u,
4u, 58u, 192u, 66u, 1u, 34u, 3u, 129u, 32u, 83u, 3u, 17u, 0u, 8u, 4u,
146u, 72u, 225u, 33u, 129u, 140u, 38u, 6u, 41u, 130u, 73u, 28u, 28u,
48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u,
96u, 56u, 72u,};
static ScmObj libmisc_25uninitialized(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmisc_25uninitialized__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmisc_25uninitialized, NULL, NULL);

static ScmObj libmiscdebug_label(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmiscdebug_label__STUB, 1, 0,SCM_FALSE,libmiscdebug_label, NULL, NULL);

static ScmObj libmiscforeign_pointer_invalidP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmiscforeign_pointer_invalidP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmiscforeign_pointer_invalidP, NULL, NULL);

static ScmObj libmiscforeign_pointer_invalidateX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmiscforeign_pointer_invalidateX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmiscforeign_pointer_invalidateX, NULL, NULL);

static ScmObj libmiscforeign_pointer_attributes(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmiscforeign_pointer_attributes__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmiscforeign_pointer_attributes, NULL, NULL);

static ScmObj libmiscforeign_pointer_attribute_get(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmiscforeign_pointer_attribute_get__STUB, 2, 2,SCM_FALSE,libmiscforeign_pointer_attribute_get, NULL, NULL);

static ScmObj libmiscforeign_pointer_attribute_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmiscforeign_pointer_attribute_setX__STUB, 3, 0,SCM_FALSE,libmiscforeign_pointer_attribute_setX, NULL, NULL);

static unsigned char uvector__00003[] = {
 0u, 3u, 134u, 6u, 6u, 104u, 42u, 11u, 36u, 112u, 144u, 192u, 144u,
89u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libmisccond_features(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmisccond_features__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmisccond_features, NULL, NULL);

static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[43];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("has-setter\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libmisc.scm", 11, 11),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("undefined", 9, 9),
      SCM_STRING_CONST_INITIALIZER("undefined\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("warn", 4, 4),
      SCM_STRING_CONST_INITIALIZER("GAUCHE_SUPPRESS_WARNING", 23, 23),
      SCM_STRING_CONST_INITIALIZER("sys-getenv", 10, 10),
      SCM_STRING_CONST_INITIALIZER("format", 6, 6),
      SCM_STRING_CONST_INITIALIZER("WARNING: ", 9, 9),
      SCM_STRING_CONST_INITIALIZER("string-append", 13, 13),
      SCM_STRING_CONST_INITIALIZER("flush", 5, 5),
      SCM_STRING_CONST_INITIALIZER("fmt", 3, 3),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%uninitialized", 14, 14),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("debug-label", 11, 11),
      SCM_STRING_CONST_INITIALIZER("foreign-pointer-invalid\077", 24, 24),
      SCM_STRING_CONST_INITIALIZER("fp", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<foreign-pointer>", 17, 17),
      SCM_STRING_CONST_INITIALIZER("foreign-pointer-invalidate!", 27, 27),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("foreign-pointer-attributes", 26, 26),
      SCM_STRING_CONST_INITIALIZER("foreign-pointer-attribute-get", 29, 29),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("fallback", 8, 8),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("foreign-pointer-attribute-set!", 30, 30),
      SCM_STRING_CONST_INITIALIZER("value", 5, 5),
      SCM_STRING_CONST_INITIALIZER("foreign-pointer-attribute-set", 29, 29),
      SCM_STRING_CONST_INITIALIZER("cond-features", 13, 13),
      SCM_STRING_CONST_INITIALIZER("SLIB_DIR", 8, 8),
      SCM_STRING_CONST_INITIALIZER("current-error-port", 18, 18),
  },
};
static struct scm__rcRec {
  ScmUVector d2153[3];
  ScmCompiledCode d2152[3];
  ScmWord d2151[58];
  ScmPair d2150[93] SCM_ALIGN_PAIR;
  ScmObj d2149[143];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2153 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 103, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 58, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00003, 0, NULL),
  },
  {   /* ScmCompiledCode d2152 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* warn */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[0])), 28,
            22, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[28]),
            SCM_OBJ(&scm__rc.d2152[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[28])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[43])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2151 */
    /* warn */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 6),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[14])) /* "GAUCHE_SUPPRESS_WARNING" */,
    0x0000105f    /*   4 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getenv */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 9),
    0x0000000c    /*   8 (CONSTU-RET) */,
    0x0000000e    /*   9 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 24),
    0x0000005e    /*  11 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* format */,
    0x000000e0    /*  13 (CURERR) */,
    0x0000200f    /*  14 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 21),
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[17])) /* "WARNING: " */,
    0x00000049    /*  18 (LREF1-PUSH) */,
    0x0000205f    /*  19 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x0000000d    /*  21 (PUSH) */,
    0x0000003d    /*  22 (LREF0) */,
    0x00004095    /*  23 (TAIL-APPLY 4) */,
    0x000000e0    /*  24 (CURERR) */,
    0x00001063    /*  25 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* flush */,
    0x00000014    /*  27 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[28]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* warn */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[28]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[0])) /* #<compiled-code warn@0x720697d51780> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* warn */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* foreign-pointer-attribute-set */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* foreign-pointer-attribute-set! */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* foreign-pointer-attribute-set */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(45U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_OBJ(&scm__rc.d2150[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[4]), SCM_OBJ(&scm__rc.d2150[8])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_OBJ(&scm__rc.d2150[12]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(48U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[15])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[16])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[19])},
       { SCM_OBJ(&scm__rc.d2150[20]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[17]), SCM_OBJ(&scm__rc.d2150[21])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(50U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[24])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[25])},
       { SCM_OBJ(&scm__rc.d2150[26]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[29])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_OBJ(&scm__rc.d2150[31]), SCM_NIL},
       { SCM_MAKE_INT(62U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[36])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_OBJ(&scm__rc.d2150[38]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[35]), SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(68U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[43])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[45])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[46])},
       { SCM_OBJ(&scm__rc.d2150[47]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[44]), SCM_OBJ(&scm__rc.d2150[48])},
       { SCM_MAKE_INT(71U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[50])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[54])},
       { SCM_OBJ(&scm__rc.d2150[55]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[52]), SCM_OBJ(&scm__rc.d2150[56])},
       { SCM_MAKE_INT(74U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[59])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[62])},
       { SCM_OBJ(&scm__rc.d2150[63]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[64])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[67])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_MAKE_INT(77U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[70])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[71])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[73])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_OBJ(&scm__rc.d2150[75]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[72]), SCM_OBJ(&scm__rc.d2150[76])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[79])},
       { SCM_MAKE_INT(81U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[84])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[85])},
       { SCM_OBJ(&scm__rc.d2150[86]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[83]), SCM_OBJ(&scm__rc.d2150[87])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[89])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_OBJ(&scm__rc.d2150[91]), SCM_NIL},
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(5, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(4, FALSE),
    SCM_MAKE_INT(1U),
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(4, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(5, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(12, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_UNBOUND,
  },
};

static ScmObj libmischas_setterP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("has-setter?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_HasSetter(proc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmiscundefined(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("undefined");
  {
{
ScmObj SCM_RESULT;

#line 47 "libmisc.scm"
{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmiscundefinedP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("undefined?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_UNDEFINEDP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmisc_25uninitialized(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("%uninitialized");
  {
{
ScmObj SCM_RESULT;

#line 58 "libmisc.scm"
{SCM_RESULT=(SCM_UNINITIALIZED);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmiscdebug_label(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("debug-label");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 62 "libmisc.scm"
{SCM_RESULT=(Scm_Sprintf("@%lx",obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmiscforeign_pointer_invalidP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fp_scm;
  ScmForeignPointer* fp;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("foreign-pointer-invalid?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fp_scm = SCM_SUBRARGS[0];
  if (!SCM_FOREIGN_POINTER_P(fp_scm)) Scm_Error("<foreign-pointer> required, but got %S", fp_scm);
  fp = SCM_FOREIGN_POINTER(fp_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_ForeignPointerInvalidP(fp));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmiscforeign_pointer_invalidateX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fp_scm;
  ScmForeignPointer* fp;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("foreign-pointer-invalidate!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fp_scm = SCM_SUBRARGS[0];
  if (!SCM_FOREIGN_POINTER_P(fp_scm)) Scm_Error("<foreign-pointer> required, but got %S", fp_scm);
  fp = SCM_FOREIGN_POINTER(fp_scm);
  {
Scm_ForeignPointerInvalidate(fp);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libmiscforeign_pointer_attributes(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fp_scm;
  ScmForeignPointer* fp;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("foreign-pointer-attributes");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fp_scm = SCM_SUBRARGS[0];
  if (!SCM_FOREIGN_POINTER_P(fp_scm)) Scm_Error("<foreign-pointer> required, but got %S", fp_scm);
  fp = SCM_FOREIGN_POINTER(fp_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ForeignPointerAttr(fp));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmiscforeign_pointer_attribute_get(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fp_scm;
  ScmForeignPointer* fp;
  ScmObj key_scm;
  ScmObj key;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("foreign-pointer-attribute-get");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fp_scm = SCM_SUBRARGS[0];
  if (!SCM_FOREIGN_POINTER_P(fp_scm)) Scm_Error("<foreign-pointer> required, but got %S", fp_scm);
  fp = SCM_FOREIGN_POINTER(fp_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    fallback_scm = SCM_SUBRARGS[2];
  } else {
    fallback_scm = SCM_UNBOUND;
  }
  if (!(fallback_scm)) Scm_Error("scheme object required, but got %S", fallback_scm);
  fallback = (fallback_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ForeignPointerAttrGet(fp,key,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmiscforeign_pointer_attribute_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fp_scm;
  ScmForeignPointer* fp;
  ScmObj key_scm;
  ScmObj key;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("foreign-pointer-attribute-set!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fp_scm = SCM_SUBRARGS[0];
  if (!SCM_FOREIGN_POINTER_P(fp_scm)) Scm_Error("<foreign-pointer> required, but got %S", fp_scm);
  fp = SCM_FOREIGN_POINTER(fp_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  value_scm = SCM_SUBRARGS[2];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ForeignPointerAttrSet(fp,key,value));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmisccond_features(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("cond-features");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetFeatures());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[38];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[142];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[34];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[36];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = SCM_OBJ(&scm__sc.d2148[17]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[39];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[40];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[31];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = SCM_OBJ(&scm__sc.d2148[14]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[29];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[121];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[128]), i++) = scm__rc.d2149[109];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[128]);
}
void Scm_Init_libmisc() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* has-setter? */
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[1])),TRUE); /* proc */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1]), scm__rc.d2149[1]);
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[2])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[4]), scm__rc.d2149[2]);
  scm__rc.d2149[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[4])),TRUE); /* bind-info */
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[5])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[5]), scm__rc.d2149[0]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[6]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[7]), scm__rc.d2149[3]);
  scm__rc.d2149[5] = Scm_MakeExtendedPair(scm__rc.d2149[0], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[9]));
  scm__rc.d2149[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[6])),TRUE); /* <top> */
  scm__rc.d2149[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[7])),TRUE); /* -> */
  scm__rc.d2149[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[8])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[9]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[9]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[9]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[9]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("has-setter?")), SCM_OBJ(&libmischas_setterP__STUB), 0);
  libmischas_setterP__STUB.common.info = scm__rc.d2149[5];
  libmischas_setterP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* undefined */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[10]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[11]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[12]), scm__rc.d2149[3]);
  scm__rc.d2149[17] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_NIL, SCM_OBJ(&scm__rc.d2150[13]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[5] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("undefined")), SCM_OBJ(&libmiscundefined__STUB), SCM_BINDING_INLINABLE);
  libmiscundefined__STUB.common.info = scm__rc.d2149[17];
  libmiscundefined__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* undefined? */
  scm__rc.d2149[25] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2149[25]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[17]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[18]), scm__rc.d2149[24]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[19]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[20]), scm__rc.d2149[3]);
  scm__rc.d2149[26] = Scm_MakeExtendedPair(scm__rc.d2149[24], SCM_OBJ(&scm__rc.d2150[14]), SCM_OBJ(&scm__rc.d2150[22]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("undefined?")), SCM_OBJ(&libmiscundefinedP__STUB), SCM_BINDING_INLINABLE);
  libmiscundefinedP__STUB.common.info = scm__rc.d2149[26];
  libmiscundefinedP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[27] = Scm_MakeIdentifier(scm__rc.d2149[28], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* warn */
  scm__rc.d2149[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* sys-getenv */
  scm__rc.d2149[32] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[4]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[30] = Scm_MakeIdentifier(scm__rc.d2149[31], SCM_MODULE(scm__rc.d2149[32]), SCM_NIL); /* gauche#sys-getenv */
  scm__rc.d2149[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* format */
  scm__rc.d2149[33] = Scm_MakeIdentifier(scm__rc.d2149[34], SCM_MODULE(scm__rc.d2149[32]), SCM_NIL); /* gauche#format */
  scm__rc.d2149[36] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* string-append */
  scm__rc.d2149[35] = Scm_MakeIdentifier(scm__rc.d2149[36], SCM_MODULE(scm__rc.d2149[32]), SCM_NIL); /* gauche#string-append */
  scm__rc.d2149[38] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* flush */
  scm__rc.d2149[37] = Scm_MakeIdentifier(scm__rc.d2149[38], SCM_MODULE(scm__rc.d2149[32]), SCM_NIL); /* gauche#flush */
  scm__rc.d2149[39] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* fmt */
  scm__rc.d2149[40] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[23]), scm__rc.d2149[39]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[23]), scm__rc.d2149[40]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[2]);
  scm__rc.d2149[41] = Scm_MakeExtendedPair(scm__rc.d2149[29], SCM_OBJ(&scm__rc.d2150[23]), SCM_OBJ(&scm__rc.d2150[27]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[28]), scm__rc.d2149[41]);
  scm__rc.d2149[42] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->name = scm__rc.d2149[29];/* warn */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->debugInfo = scm__rc.d2149[42];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[5] = SCM_WORD(scm__rc.d2149[30]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[12] = SCM_WORD(scm__rc.d2149[33]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[20] = SCM_WORD(scm__rc.d2149[35]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[26] = SCM_WORD(scm__rc.d2149[37]);
  scm__rc.d2149[43] = Scm_MakeIdentifier(scm__rc.d2149[29], SCM_MODULE(scm__rc.d2149[32]), SCM_NIL); /* gauche#warn */
  scm__rc.d2149[44] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* %toplevel */
  scm__rc.d2149[45] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->name = scm__rc.d2149[44];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->debugInfo = scm__rc.d2149[45];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[28]))[3] = SCM_WORD(scm__rc.d2149[27]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[28]))[6] = SCM_WORD(scm__rc.d2149[29]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[28]))[13] = SCM_WORD(scm__rc.d2149[43]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[46] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* %uninitialized */
  scm__rc.d2149[47] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[29]), scm__rc.d2149[46]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[30]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[31]), scm__rc.d2149[3]);
  scm__rc.d2149[48] = Scm_MakeExtendedPair(scm__rc.d2149[46], SCM_NIL, SCM_OBJ(&scm__rc.d2150[32]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[49]))[3] = scm__rc.d2149[47];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[49]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[49]))[5] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%uninitialized")), SCM_OBJ(&libmisc_25uninitialized__STUB), 0);
  libmisc_25uninitialized__STUB.common.info = scm__rc.d2149[48];
  libmisc_25uninitialized__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[49]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[55] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* debug-label */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[35]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[36]), scm__rc.d2149[55]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[37]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[38]), scm__rc.d2149[3]);
  scm__rc.d2149[56] = Scm_MakeExtendedPair(scm__rc.d2149[55], SCM_OBJ(&scm__rc.d2150[14]), SCM_OBJ(&scm__rc.d2150[40]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[57]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[57]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[57]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[57]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("debug-label")), SCM_OBJ(&libmiscdebug_label__STUB), 0);
  libmiscdebug_label__STUB.common.info = scm__rc.d2149[56];
  libmiscdebug_label__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[57]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* foreign-pointer-invalid? */
  scm__rc.d2149[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* fp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[41]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[44]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[47]), scm__rc.d2149[3]);
  scm__rc.d2149[66] = Scm_MakeExtendedPair(scm__rc.d2149[64], SCM_OBJ(&scm__rc.d2150[41]), SCM_OBJ(&scm__rc.d2150[49]));
  scm__rc.d2149[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* <foreign-pointer> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[68]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[68]))[4] = scm__rc.d2149[67];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[68]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[68]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("foreign-pointer-invalid?")), SCM_OBJ(&libmiscforeign_pointer_invalidP__STUB), 0);
  libmiscforeign_pointer_invalidP__STUB.common.info = scm__rc.d2149[66];
  libmiscforeign_pointer_invalidP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[68]);
  scm__rc.d2149[75] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* foreign-pointer-invalidate! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[52]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[53]), scm__rc.d2149[75]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[55]), scm__rc.d2149[3]);
  scm__rc.d2149[76] = Scm_MakeExtendedPair(scm__rc.d2149[75], SCM_OBJ(&scm__rc.d2150[41]), SCM_OBJ(&scm__rc.d2150[57]));
  scm__rc.d2149[77] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[78]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[78]))[4] = scm__rc.d2149[67];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[78]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[78]))[6] = scm__rc.d2149[77];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("foreign-pointer-invalidate!")), SCM_OBJ(&libmiscforeign_pointer_invalidateX__STUB), 0);
  libmiscforeign_pointer_invalidateX__STUB.common.info = scm__rc.d2149[76];
  libmiscforeign_pointer_invalidateX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[78]);
  scm__rc.d2149[85] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* foreign-pointer-attributes */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[61]), scm__rc.d2149[85]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[62]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[63]), scm__rc.d2149[3]);
  scm__rc.d2149[86] = Scm_MakeExtendedPair(scm__rc.d2149[85], SCM_OBJ(&scm__rc.d2150[41]), SCM_OBJ(&scm__rc.d2150[65]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[4] = scm__rc.d2149[67];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("foreign-pointer-attributes")), SCM_OBJ(&libmiscforeign_pointer_attributes__STUB), 0);
  libmiscforeign_pointer_attributes__STUB.common.info = scm__rc.d2149[86];
  libmiscforeign_pointer_attributes__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[87]);
  scm__rc.d2149[94] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* foreign-pointer-attribute-get */
  scm__rc.d2149[95] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* key */
  scm__rc.d2149[96] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34]))); /* :optional */
  scm__rc.d2149[97] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* fallback */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[66]), scm__rc.d2149[97]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[67]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[68]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[72]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[73]), scm__rc.d2149[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[74]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[75]), scm__rc.d2149[3]);
  scm__rc.d2149[98] = Scm_MakeExtendedPair(scm__rc.d2149[94], SCM_OBJ(&scm__rc.d2150[69]), SCM_OBJ(&scm__rc.d2150[77]));
  scm__rc.d2149[99] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[4] = scm__rc.d2149[67];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[6] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("foreign-pointer-attribute-get")), SCM_OBJ(&libmiscforeign_pointer_attribute_get__STUB), 0);
  libmiscforeign_pointer_attribute_get__STUB.common.info = scm__rc.d2149[98];
  libmiscforeign_pointer_attribute_get__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[100]);
  scm__rc.d2149[109] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* foreign-pointer-attribute-set! */
  scm__rc.d2149[110] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[110]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[79]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[80]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[83]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[84]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[85]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[86]), scm__rc.d2149[3]);
  scm__rc.d2149[111] = Scm_MakeExtendedPair(scm__rc.d2149[109], SCM_OBJ(&scm__rc.d2150[80]), SCM_OBJ(&scm__rc.d2150[88]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[4] = scm__rc.d2149[67];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[6] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("foreign-pointer-attribute-set!")), SCM_OBJ(&libmiscforeign_pointer_attribute_setX__STUB), 0);
  libmiscforeign_pointer_attribute_setX__STUB.common.info = scm__rc.d2149[111];
  libmiscforeign_pointer_attribute_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[112]);
  scm__rc.d2149[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* foreign-pointer-attribute-set */
  scm__rc.d2149[122] = Scm_MakeIdentifier(scm__rc.d2149[109], SCM_MODULE(scm__rc.d2149[32]), SCM_NIL); /* gauche#foreign-pointer-attribute-set! */
  scm__rc.d2149[123] = Scm_MakeIdentifier(scm__rc.d2149[121], SCM_MODULE(scm__rc.d2149[32]), SCM_NIL); /* gauche#foreign-pointer-attribute-set */
  scm__rc.d2149[124] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->name = scm__rc.d2149[44];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->debugInfo = scm__rc.d2149[124];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]))[3] = SCM_WORD(scm__rc.d2149[27]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]))[6] = SCM_WORD(scm__rc.d2149[121]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]))[10] = SCM_WORD(scm__rc.d2149[122]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]))[13] = SCM_WORD(scm__rc.d2149[123]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[125] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* cond-features */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[89]), scm__rc.d2149[125]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[90]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[91]), scm__rc.d2149[3]);
  scm__rc.d2149[126] = Scm_MakeExtendedPair(scm__rc.d2149[125], SCM_NIL, SCM_OBJ(&scm__rc.d2150[92]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("cond-features")), SCM_OBJ(&libmisccond_features__STUB), 0);
  libmisccond_features__STUB.common.info = scm__rc.d2149[126];
  libmisccond_features__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[49]);
  scm__rc.d2149[127] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* SLIB_DIR */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(scm__rc.d2149[127]), 
#line 95 "libmisc.scm"
SCM_MAKE_STR_IMMUTABLE(SLIB_DIR), SCM_BINDING_CONST);

  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[142] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* current-error-port */
}
