/* Generated automatically from libsrfis.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2150[108];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2150 */
      SCM_STRING_CONST_INITIALIZER("srfi.0", 6, 6),
      SCM_STRING_CONST_INITIALIZER("cond-expand", 11, 11),
      SCM_STRING_CONST_INITIALIZER("srfi.2", 6, 6),
      SCM_STRING_CONST_INITIALIZER("and-let*", 8, 8),
      SCM_STRING_CONST_INITIALIZER("srfi.6", 6, 6),
      SCM_STRING_CONST_INITIALIZER("open-input-string", 17, 17),
      SCM_STRING_CONST_INITIALIZER("open-output-string", 18, 18),
      SCM_STRING_CONST_INITIALIZER("get-output-string", 17, 17),
      SCM_STRING_CONST_INITIALIZER("srfi.8", 6, 6),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("srfi.10", 7, 7),
      SCM_STRING_CONST_INITIALIZER("define-reader-ctor", 18, 18),
      SCM_STRING_CONST_INITIALIZER("srfi.11", 7, 7),
      SCM_STRING_CONST_INITIALIZER("let-values", 10, 10),
      SCM_STRING_CONST_INITIALIZER("let*-values", 11, 11),
      SCM_STRING_CONST_INITIALIZER("srfi.16", 7, 7),
      SCM_STRING_CONST_INITIALIZER("case-lambda", 11, 11),
      SCM_STRING_CONST_INITIALIZER("srfi.17", 7, 7),
      SCM_STRING_CONST_INITIALIZER("setter", 6, 6),
      SCM_STRING_CONST_INITIALIZER("getter-with-setter", 18, 18),
      SCM_STRING_CONST_INITIALIZER("srfi.23", 7, 7),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("srfi.26", 7, 7),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("cute", 4, 4),
      SCM_STRING_CONST_INITIALIZER("srfi.28", 7, 7),
      SCM_STRING_CONST_INITIALIZER("format", 6, 6),
      SCM_STRING_CONST_INITIALIZER("srfi.31", 7, 7),
      SCM_STRING_CONST_INITIALIZER("rec", 3, 3),
      SCM_STRING_CONST_INITIALIZER("srfi.34", 7, 7),
      SCM_STRING_CONST_INITIALIZER("with-exception-handler", 22, 22),
      SCM_STRING_CONST_INITIALIZER("guard", 5, 5),
      SCM_STRING_CONST_INITIALIZER("raise", 5, 5),
      SCM_STRING_CONST_INITIALIZER("srfi.35", 7, 7),
      SCM_STRING_CONST_INITIALIZER("make-condition-type", 19, 19),
      SCM_STRING_CONST_INITIALIZER("condition-type\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("make-condition", 14, 14),
      SCM_STRING_CONST_INITIALIZER("condition\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("condition-has-type\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("condition-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("make-compound-condition", 23, 23),
      SCM_STRING_CONST_INITIALIZER("extract-condition", 17, 17),
      SCM_STRING_CONST_INITIALIZER("define-condition-type", 21, 21),
      SCM_STRING_CONST_INITIALIZER("condition", 9, 9),
      SCM_STRING_CONST_INITIALIZER("&condition", 10, 10),
      SCM_STRING_CONST_INITIALIZER("&message", 8, 8),
      SCM_STRING_CONST_INITIALIZER("message-condition\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("condition-message", 17, 17),
      SCM_STRING_CONST_INITIALIZER("&serious", 8, 8),
      SCM_STRING_CONST_INITIALIZER("serious-condition\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("&error", 6, 6),
      SCM_STRING_CONST_INITIALIZER("error\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("srfi.36", 7, 7),
      SCM_STRING_CONST_INITIALIZER("&i/o-error", 10, 10),
      SCM_STRING_CONST_INITIALIZER("&i/o-port-error", 15, 15),
      SCM_STRING_CONST_INITIALIZER("&i/o-read-error", 15, 15),
      SCM_STRING_CONST_INITIALIZER("&i/o-write-error", 16, 16),
      SCM_STRING_CONST_INITIALIZER("&i/o-closed-error", 17, 17),
      SCM_STRING_CONST_INITIALIZER("&read-error", 11, 11),
      SCM_STRING_CONST_INITIALIZER("srfi.38", 7, 7),
      SCM_STRING_CONST_INITIALIZER("write-with-shared-structure", 27, 27),
      SCM_STRING_CONST_INITIALIZER("write/ss", 8, 8),
      SCM_STRING_CONST_INITIALIZER("read-with-shared-structure", 26, 26),
      SCM_STRING_CONST_INITIALIZER("read/ss", 7, 7),
      SCM_STRING_CONST_INITIALIZER("srfi.39", 7, 7),
      SCM_STRING_CONST_INITIALIZER("make-parameter", 14, 14),
      SCM_STRING_CONST_INITIALIZER("parameterize", 12, 12),
      SCM_STRING_CONST_INITIALIZER("srfi.45", 7, 7),
      SCM_STRING_CONST_INITIALIZER("delay", 5, 5),
      SCM_STRING_CONST_INITIALIZER("force", 5, 5),
      SCM_STRING_CONST_INITIALIZER("lazy", 4, 4),
      SCM_STRING_CONST_INITIALIZER("eager", 5, 5),
      SCM_STRING_CONST_INITIALIZER("srfi.46", 7, 7),
      SCM_STRING_CONST_INITIALIZER("syntax-rules", 12, 12),
      SCM_STRING_CONST_INITIALIZER("...", 3, 3),
      SCM_STRING_CONST_INITIALIZER("srfi.61", 7, 7),
      SCM_STRING_CONST_INITIALIZER("cond", 4, 4),
      SCM_STRING_CONST_INITIALIZER("else", 4, 4),
      SCM_STRING_CONST_INITIALIZER("srfi.87", 7, 7),
      SCM_STRING_CONST_INITIALIZER("case", 4, 4),
      SCM_STRING_CONST_INITIALIZER("=>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("srfi.95", 7, 7),
      SCM_STRING_CONST_INITIALIZER("sorted\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("merge", 5, 5),
      SCM_STRING_CONST_INITIALIZER("merge!", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sort", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sort!", 5, 5),
      SCM_STRING_CONST_INITIALIZER("srfi.111", 8, 8),
      SCM_STRING_CONST_INITIALIZER("box", 3, 3),
      SCM_STRING_CONST_INITIALIZER("box\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("unbox", 5, 5),
      SCM_STRING_CONST_INITIALIZER("set-box!", 8, 8),
      SCM_STRING_CONST_INITIALIZER("srfi.139", 8, 8),
      SCM_STRING_CONST_INITIALIZER("define-syntax-parameter", 23, 23),
      SCM_STRING_CONST_INITIALIZER("syntax-parameterize", 19, 19),
      SCM_STRING_CONST_INITIALIZER("srfi.145", 8, 8),
      SCM_STRING_CONST_INITIALIZER("assume", 6, 6),
      SCM_STRING_CONST_INITIALIZER("srfi.149", 8, 8),
      SCM_STRING_CONST_INITIALIZER("srfi.195", 8, 8),
      SCM_STRING_CONST_INITIALIZER("box-arity", 9, 9),
      SCM_STRING_CONST_INITIALIZER("unbox-value", 11, 11),
      SCM_STRING_CONST_INITIALIZER("set-box-value!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("srfi.219", 8, 8),
      SCM_STRING_CONST_INITIALIZER("define", 6, 6),
      SCM_STRING_CONST_INITIALIZER("srfi.236", 8, 8),
      SCM_STRING_CONST_INITIALIZER("independently", 13, 13),
      SCM_STRING_CONST_INITIALIZER("srfi.244", 8, 8),
      SCM_STRING_CONST_INITIALIZER("define-values", 13, 13),
  },
};
static struct scm__rcRec {
  ScmPair d2151[84] SCM_ALIGN_PAIR;
  ScmObj d2149[138];
} scm__rc SCM_UNUSED = {
  {   /* ScmPair d2151 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[4])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[8])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[11])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[14])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[19])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[21])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[23])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[24])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[26])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[27])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[28])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[29])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[31])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[32])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[34])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[35])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[36])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[37])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[39])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[40])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[41])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[43])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[45])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[46])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[47])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[49])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[52])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[53])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[55])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[57])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[57])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[59])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[61])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[62])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[63])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[64])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[66])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[67])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[68])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[70])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[75])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[76])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[77])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[78])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[79])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
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
  },
};
static ScmCompiledCode *toplevels[] = {
 NULL /*termination*/
};
void Scm_Init_libsrfis() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));

#line 2 "libsrfis.scm"
Scm_AddFeature("srfi-0",NULL);

#line 3 "libsrfis.scm"
Scm_AddFeature("srfi-1","srfi.1");

#line 4 "libsrfis.scm"
Scm_AddFeature("srfi-2",NULL);

#line 5 "libsrfis.scm"
Scm_AddFeature("srfi-4","gauche.uvector");

#line 6 "libsrfis.scm"
Scm_AddFeature("srfi-5","srfi.5");

#line 7 "libsrfis.scm"
Scm_AddFeature("srfi-6",NULL);

#line 8 "libsrfis.scm"
Scm_AddFeature("srfi-7",NULL);

#line 9 "libsrfis.scm"
Scm_AddFeature("srfi-8",NULL);

#line 10 "libsrfis.scm"
Scm_AddFeature("srfi-9","gauche.record");

#line 11 "libsrfis.scm"
Scm_AddFeature("srfi-10",NULL);

#line 12 "libsrfis.scm"
Scm_AddFeature("srfi-11",NULL);

#line 13 "libsrfis.scm"
Scm_AddFeature("srfi-13","srfi.13");

#line 14 "libsrfis.scm"
Scm_AddFeature("srfi-14","srfi.14");

#line 15 "libsrfis.scm"
Scm_AddFeature("srfi-16",NULL);

#line 16 "libsrfis.scm"
Scm_AddFeature("srfi-17",NULL);

#line 17 "libsrfis.scm"
Scm_AddFeature("srfi-18","gauche.threads");

#line 18 "libsrfis.scm"
Scm_AddFeature("srfi-19","srfi.19");

#line 19 "libsrfis.scm"
Scm_AddFeature("srfi-22",NULL);

#line 20 "libsrfis.scm"
Scm_AddFeature("srfi-23",NULL);

#line 21 "libsrfis.scm"
Scm_AddFeature("srfi-25","gauche.array");

#line 22 "libsrfis.scm"
Scm_AddFeature("srfi-26",NULL);

#line 23 "libsrfis.scm"
Scm_AddFeature("srfi-27","srfi.27");

#line 24 "libsrfis.scm"
Scm_AddFeature("srfi-28",NULL);

#line 25 "libsrfis.scm"
Scm_AddFeature("srfi-29","srfi.29");

#line 26 "libsrfis.scm"
Scm_AddFeature("srfi-30",NULL);

#line 27 "libsrfis.scm"
Scm_AddFeature("srfi-31",NULL);

#line 28 "libsrfis.scm"
Scm_AddFeature("srfi-34",NULL);

#line 29 "libsrfis.scm"
Scm_AddFeature("srfi-35",NULL);

#line 30 "libsrfis.scm"
Scm_AddFeature("srfi-36",NULL);

#line 31 "libsrfis.scm"
Scm_AddFeature("srfi-37","srfi.37");

#line 32 "libsrfis.scm"
Scm_AddFeature("srfi-38",NULL);

#line 33 "libsrfis.scm"
Scm_AddFeature("srfi-39",NULL);

#line 34 "libsrfis.scm"
Scm_AddFeature("srfi-40","util.stream");

#line 35 "libsrfis.scm"
Scm_AddFeature("srfi-41","srfi.41");

#line 36 "libsrfis.scm"
Scm_AddFeature("srfi-42","srfi.42");

#line 37 "libsrfis.scm"
Scm_AddFeature("srfi-43","srfi.43");

#line 38 "libsrfis.scm"
Scm_AddFeature("srfi-45",NULL);

#line 39 "libsrfis.scm"
Scm_AddFeature("srfi-46",NULL);

#line 40 "libsrfis.scm"
Scm_AddFeature("srfi-55","srfi.55");

#line 41 "libsrfis.scm"
Scm_AddFeature("srfi-60","srfi.60");

#line 42 "libsrfis.scm"
Scm_AddFeature("srfi-61",NULL);

#line 43 "libsrfis.scm"
Scm_AddFeature("srfi-62",NULL);

#line 44 "libsrfis.scm"
Scm_AddFeature("srfi-64","srfi.64");

#line 45 "libsrfis.scm"
Scm_AddFeature("srfi-66","srfi.66");

#line 46 "libsrfis.scm"
Scm_AddFeature("srfi-69","srfi.69");

#line 47 "libsrfis.scm"
Scm_AddFeature("srfi-74","srfi.74");

#line 48 "libsrfis.scm"
Scm_AddFeature("srfi-78","srfi.78");

#line 49 "libsrfis.scm"
Scm_AddFeature("srfi-87",NULL);

#line 50 "libsrfis.scm"
Scm_AddFeature("srfi-95",NULL);

#line 51 "libsrfis.scm"
Scm_AddFeature("srfi-96","srfi.96");

#line 52 "libsrfis.scm"
Scm_AddFeature("srfi-98","srfi.98");

#line 53 "libsrfis.scm"
Scm_AddFeature("srfi-99","gauche.record");

#line 54 "libsrfis.scm"
Scm_AddFeature("srfi-101",NULL);

#line 55 "libsrfis.scm"
Scm_AddFeature("srfi-106","srfi.106");

#line 56 "libsrfis.scm"
Scm_AddFeature("srfi-111",NULL);

#line 57 "libsrfis.scm"
Scm_AddFeature("srfi-112","srfi.112");

#line 58 "libsrfis.scm"
Scm_AddFeature("srfi-113","srfi.113");

#line 59 "libsrfis.scm"
Scm_AddFeature("srfi-114","srfi.114");

#line 60 "libsrfis.scm"
Scm_AddFeature("srfi-115","srfi.115");

#line 61 "libsrfis.scm"
Scm_AddFeature("srfi-116","srfi.116");

#line 62 "libsrfis.scm"
Scm_AddFeature("srfi-117","srfi.117");

#line 63 "libsrfis.scm"
Scm_AddFeature("srfi-118","srfi.118");

#line 64 "libsrfis.scm"
Scm_AddFeature("srfi-120","srfi.120");

#line 65 "libsrfis.scm"
Scm_AddFeature("srfi-121","gauche.generator");

#line 66 "libsrfis.scm"
Scm_AddFeature("srfi-124","srfi.124");

#line 67 "libsrfis.scm"
Scm_AddFeature("srfi-125","srfi.125");

#line 68 "libsrfis.scm"
Scm_AddFeature("srfi-127","srfi.127");

#line 69 "libsrfis.scm"
Scm_AddFeature("srfi-128","srfi.128");

#line 70 "libsrfis.scm"
Scm_AddFeature("srfi-129","srfi.129");

#line 71 "libsrfis.scm"
Scm_AddFeature("srfi-130","srfi.130");

#line 72 "libsrfis.scm"
Scm_AddFeature("srfi-131","gauche.record");

#line 73 "libsrfis.scm"
Scm_AddFeature("srfi-132","srfi.132");

#line 74 "libsrfis.scm"
Scm_AddFeature("srfi-133","srfi.133");

#line 75 "libsrfis.scm"
Scm_AddFeature("srfi-134","data.ideque");

#line 76 "libsrfis.scm"
Scm_AddFeature("srfi-135","srfi.135");

#line 77 "libsrfis.scm"
Scm_AddFeature("srfi-138",NULL);

#line 78 "libsrfis.scm"
Scm_AddFeature("srfi-139",NULL);

#line 79 "libsrfis.scm"
Scm_AddFeature("srfi-141","srfi.141");

#line 80 "libsrfis.scm"
Scm_AddFeature("srfi-143","srfi.143");

#line 81 "libsrfis.scm"
Scm_AddFeature("srfi-144","srfi.144");

#line 82 "libsrfis.scm"
Scm_AddFeature("srfi-145",NULL);

#line 83 "libsrfis.scm"
Scm_AddFeature("srfi-146","srfi.146");

#line 84 "libsrfis.scm"
Scm_AddFeature("srfi-149",NULL);

#line 85 "libsrfis.scm"
Scm_AddFeature("srfi-151","srfi.151");

#line 86 "libsrfis.scm"
Scm_AddFeature("srfi-152","srfi.152");

#line 87 "libsrfis.scm"
Scm_AddFeature("srfi-154","srfi.154");

#line 88 "libsrfis.scm"
Scm_AddFeature("srfi-158","srfi.158");

#line 89 "libsrfis.scm"
Scm_AddFeature("srfi-159","srfi.159");

#line 90 "libsrfis.scm"
Scm_AddFeature("srfi-160","srfi.160");

#line 91 "libsrfis.scm"
Scm_AddFeature("srfi-162","srfi.162");

#line 92 "libsrfis.scm"
Scm_AddFeature("srfi-169",NULL);

#line 93 "libsrfis.scm"
Scm_AddFeature("srfi-170","srfi.170");

#line 94 "libsrfis.scm"
Scm_AddFeature("srfi-172","srfi.172");

#line 95 "libsrfis.scm"
Scm_AddFeature("srfi-173","srfi.173");

#line 96 "libsrfis.scm"
Scm_AddFeature("srfi-174","srfi.174");

#line 97 "libsrfis.scm"
Scm_AddFeature("srfi-175","srfi.175");

#line 98 "libsrfis.scm"
Scm_AddFeature("srfi-176","srfi.176");

#line 99 "libsrfis.scm"
Scm_AddFeature("srfi-178","srfi.178");

#line 100 "libsrfis.scm"
Scm_AddFeature("srfi-180","srfi.180");

#line 101 "libsrfis.scm"
Scm_AddFeature("srfi-181","srfi.181");

#line 102 "libsrfis.scm"
Scm_AddFeature("srfi-185","srfi.185");

#line 103 "libsrfis.scm"
Scm_AddFeature("srfi-189","srfi.189");

#line 104 "libsrfis.scm"
Scm_AddFeature("srfi-190","srfi.190");

#line 105 "libsrfis.scm"
Scm_AddFeature("srfi-192","srfi.192");

#line 106 "libsrfis.scm"
Scm_AddFeature("srfi-193","srfi.193");

#line 107 "libsrfis.scm"
Scm_AddFeature("srfi-194","srfi.194");

#line 108 "libsrfis.scm"
Scm_AddFeature("srfi-195",NULL);

#line 109 "libsrfis.scm"
Scm_AddFeature("srfi-196","srfi.196");

#line 110 "libsrfis.scm"
Scm_AddFeature("srfi-197","srfi.197");

#line 111 "libsrfis.scm"
Scm_AddFeature("srfi-207","srfi.207");

#line 112 "libsrfis.scm"
Scm_AddFeature("srfi-209","srfi.209");

#line 113 "libsrfis.scm"
Scm_AddFeature("srfi-210","srfi.210");

#line 114 "libsrfis.scm"
Scm_AddFeature("srfi-215","srfi.215");

#line 115 "libsrfis.scm"
Scm_AddFeature("srfi-216","srfi.216");

#line 116 "libsrfis.scm"
Scm_AddFeature("srfi-217","srfi.217");

#line 117 "libsrfis.scm"
Scm_AddFeature("srfi-219",NULL);

#line 118 "libsrfis.scm"
Scm_AddFeature("srfi-221","srfi.221");

#line 119 "libsrfis.scm"
Scm_AddFeature("srfi-222","srfi.222");

#line 120 "libsrfis.scm"
Scm_AddFeature("srfi-226","srfi.226");

#line 121 "libsrfis.scm"
Scm_AddFeature("srfi-227","srfi.227");

#line 122 "libsrfis.scm"
Scm_AddFeature("srfi-228","srfi.228");

#line 123 "libsrfis.scm"
Scm_AddFeature("srfi-229","srfi.229");

#line 124 "libsrfis.scm"
Scm_AddFeature("srfi-230","srfi.230");

#line 125 "libsrfis.scm"
Scm_AddFeature("srfi-232","srfi.232");

#line 126 "libsrfis.scm"
Scm_AddFeature("srfi-234","srfi.234");

#line 127 "libsrfis.scm"
Scm_AddFeature("srfi-235","srfi.235");

#line 128 "libsrfis.scm"
Scm_AddFeature("srfi-236",NULL);

#line 129 "libsrfis.scm"
Scm_AddFeature("srfi-238","srfi.238");

#line 130 "libsrfis.scm"
Scm_AddFeature("srfi-239","srfi.239");

#line 131 "libsrfis.scm"
Scm_AddFeature("srfi-244",NULL);

#line 132 "libsrfis.scm"
Scm_AddFeature("srfi-247","srfi.247");

#line 133 "libsrfis.scm"
Scm_AddFeature("srfi-252","srfi.252");
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[0])),TRUE); /* srfi.0 */
  scm__rc.d2149[0] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[1]), SCM_FIND_MODULE_CREATE)); /* module srfi.0 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[0]));
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[1])),TRUE); /* cond-expand */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[1]), scm__rc.d2149[2]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[1]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[2])),TRUE); /* srfi.2 */
  scm__rc.d2149[3] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[4]), SCM_FIND_MODULE_CREATE)); /* module srfi.2 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[3]));
  scm__rc.d2149[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[3])),TRUE); /* and-let* */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[2]), scm__rc.d2149[5]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[2]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[4])),TRUE); /* srfi.6 */
  scm__rc.d2149[6] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[7]), SCM_FIND_MODULE_CREATE)); /* module srfi.6 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[6]));
  scm__rc.d2149[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[5])),TRUE); /* open-input-string */
  scm__rc.d2149[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[6])),TRUE); /* open-output-string */
  scm__rc.d2149[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[7])),TRUE); /* get-output-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[3]), scm__rc.d2149[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[4]), scm__rc.d2149[9]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[5]), scm__rc.d2149[8]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[5]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[8])),TRUE); /* srfi.8 */
  scm__rc.d2149[11] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[12]), SCM_FIND_MODULE_CREATE)); /* module srfi.8 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[11]));
  scm__rc.d2149[13] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[9])),TRUE); /* receive */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[6]), scm__rc.d2149[13]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[6]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[10])),TRUE); /* srfi.10 */
  scm__rc.d2149[14] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[15]), SCM_FIND_MODULE_CREATE)); /* module srfi.10 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[14]));
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[11])),TRUE); /* define-reader-ctor */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[7]), scm__rc.d2149[16]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[7]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[12])),TRUE); /* srfi.11 */
  scm__rc.d2149[17] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[18]), SCM_FIND_MODULE_CREATE)); /* module srfi.11 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[17]));
  scm__rc.d2149[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[13])),TRUE); /* let-values */
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[14])),TRUE); /* let*-values */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[8]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[9]), scm__rc.d2149[19]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[9]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[15])),TRUE); /* srfi.16 */
  scm__rc.d2149[21] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[22]), SCM_FIND_MODULE_CREATE)); /* module srfi.16 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[21]));
  scm__rc.d2149[23] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[16])),TRUE); /* case-lambda */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[10]), scm__rc.d2149[23]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[10]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[25] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[17])),TRUE); /* srfi.17 */
  scm__rc.d2149[24] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[25]), SCM_FIND_MODULE_CREATE)); /* module srfi.17 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[24]));
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[18])),TRUE); /* setter */
  scm__rc.d2149[27] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[19])),TRUE); /* getter-with-setter */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[11]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[12]), scm__rc.d2149[26]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[12]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[20])),TRUE); /* srfi.23 */
  scm__rc.d2149[28] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[29]), SCM_FIND_MODULE_CREATE)); /* module srfi.23 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[28]));
  scm__rc.d2149[30] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[21])),TRUE); /* error */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[13]), scm__rc.d2149[30]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[13]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[22])),TRUE); /* srfi.26 */
  scm__rc.d2149[31] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[32]), SCM_FIND_MODULE_CREATE)); /* module srfi.26 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[31]));
  scm__rc.d2149[33] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[23])),TRUE); /* cut */
  scm__rc.d2149[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[24])),TRUE); /* cute */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[14]), scm__rc.d2149[34]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[15]), scm__rc.d2149[33]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[15]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[36] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[25])),TRUE); /* srfi.28 */
  scm__rc.d2149[35] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[36]), SCM_FIND_MODULE_CREATE)); /* module srfi.28 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[35]));
  scm__rc.d2149[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[26])),TRUE); /* format */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[16]), scm__rc.d2149[37]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[16]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[39] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[27])),TRUE); /* srfi.31 */
  scm__rc.d2149[38] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[39]), SCM_FIND_MODULE_CREATE)); /* module srfi.31 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[38]));
  scm__rc.d2149[40] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[28])),TRUE); /* rec */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[17]), scm__rc.d2149[40]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[17]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[29])),TRUE); /* srfi.34 */
  scm__rc.d2149[41] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[42]), SCM_FIND_MODULE_CREATE)); /* module srfi.34 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[41]));
  scm__rc.d2149[43] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[30])),TRUE); /* with-exception-handler */
  scm__rc.d2149[44] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[31])),TRUE); /* guard */
  scm__rc.d2149[45] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[32])),TRUE); /* raise */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[18]), scm__rc.d2149[45]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[19]), scm__rc.d2149[44]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[20]), scm__rc.d2149[43]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[20]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[47] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[33])),TRUE); /* srfi.35 */
  scm__rc.d2149[46] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[47]), SCM_FIND_MODULE_CREATE)); /* module srfi.35 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[46]));
  scm__rc.d2149[48] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[34])),TRUE); /* make-condition-type */
  scm__rc.d2149[49] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[35])),TRUE); /* condition-type? */
  scm__rc.d2149[50] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[36])),TRUE); /* make-condition */
  scm__rc.d2149[51] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[37])),TRUE); /* condition? */
  scm__rc.d2149[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[38])),TRUE); /* condition-has-type? */
  scm__rc.d2149[53] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[39])),TRUE); /* condition-ref */
  scm__rc.d2149[54] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[40])),TRUE); /* make-compound-condition */
  scm__rc.d2149[55] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[41])),TRUE); /* extract-condition */
  scm__rc.d2149[56] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[42])),TRUE); /* define-condition-type */
  scm__rc.d2149[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[43])),TRUE); /* condition */
  scm__rc.d2149[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[44])),TRUE); /* &condition */
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[45])),TRUE); /* &message */
  scm__rc.d2149[60] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[46])),TRUE); /* message-condition? */
  scm__rc.d2149[61] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[47])),TRUE); /* condition-message */
  scm__rc.d2149[62] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[48])),TRUE); /* &serious */
  scm__rc.d2149[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[49])),TRUE); /* serious-condition? */
  scm__rc.d2149[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[50])),TRUE); /* &error */
  scm__rc.d2149[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[51])),TRUE); /* error? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[21]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[22]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[23]), scm__rc.d2149[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[24]), scm__rc.d2149[62]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[25]), scm__rc.d2149[61]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[26]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[27]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[28]), scm__rc.d2149[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[29]), scm__rc.d2149[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[30]), scm__rc.d2149[56]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[31]), scm__rc.d2149[55]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[32]), scm__rc.d2149[54]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[33]), scm__rc.d2149[53]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[34]), scm__rc.d2149[52]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[35]), scm__rc.d2149[51]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[36]), scm__rc.d2149[50]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[37]), scm__rc.d2149[49]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[38]), scm__rc.d2149[48]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[38]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[52])),TRUE); /* srfi.36 */
  scm__rc.d2149[66] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[67]), SCM_FIND_MODULE_CREATE)); /* module srfi.36 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[66]));
  scm__rc.d2149[68] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[53])),TRUE); /* &i/o-error */
  scm__rc.d2149[69] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[54])),TRUE); /* &i/o-port-error */
  scm__rc.d2149[70] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[55])),TRUE); /* &i/o-read-error */
  scm__rc.d2149[71] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[56])),TRUE); /* &i/o-write-error */
  scm__rc.d2149[72] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[57])),TRUE); /* &i/o-closed-error */
  scm__rc.d2149[73] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[58])),TRUE); /* &read-error */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[39]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[40]), scm__rc.d2149[72]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[41]), scm__rc.d2149[71]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[42]), scm__rc.d2149[70]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[43]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[44]), scm__rc.d2149[68]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[44]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[75] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[59])),TRUE); /* srfi.38 */
  scm__rc.d2149[74] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[75]), SCM_FIND_MODULE_CREATE)); /* module srfi.38 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[74]));
  scm__rc.d2149[76] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[60])),TRUE); /* write-with-shared-structure */
  scm__rc.d2149[77] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[61])),TRUE); /* write/ss */
  scm__rc.d2149[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[62])),TRUE); /* read-with-shared-structure */
  scm__rc.d2149[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[63])),TRUE); /* read/ss */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[45]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[46]), scm__rc.d2149[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[47]), scm__rc.d2149[77]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[48]), scm__rc.d2149[76]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[48]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[64])),TRUE); /* srfi.39 */
  scm__rc.d2149[80] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[81]), SCM_FIND_MODULE_CREATE)); /* module srfi.39 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[80]));
  scm__rc.d2149[82] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[65])),TRUE); /* make-parameter */
  scm__rc.d2149[83] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[66])),TRUE); /* parameterize */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[49]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[50]), scm__rc.d2149[82]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[50]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[85] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[67])),TRUE); /* srfi.45 */
  scm__rc.d2149[84] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[85]), SCM_FIND_MODULE_CREATE)); /* module srfi.45 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[84]));
  scm__rc.d2149[86] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[68])),TRUE); /* delay */
  scm__rc.d2149[87] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[69])),TRUE); /* force */
  scm__rc.d2149[88] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[70])),TRUE); /* lazy */
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[71])),TRUE); /* eager */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[51]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[52]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[53]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[54]), scm__rc.d2149[86]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[54]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[72])),TRUE); /* srfi.46 */
  scm__rc.d2149[90] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[91]), SCM_FIND_MODULE_CREATE)); /* module srfi.46 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[90]));
  scm__rc.d2149[92] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[73])),TRUE); /* syntax-rules */
  scm__rc.d2149[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[74])),TRUE); /* ... */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[55]), scm__rc.d2149[93]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[56]), scm__rc.d2149[92]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[56]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[95] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[75])),TRUE); /* srfi.61 */
  scm__rc.d2149[94] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[95]), SCM_FIND_MODULE_CREATE)); /* module srfi.61 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[94]));
  scm__rc.d2149[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[76])),TRUE); /* cond */
  scm__rc.d2149[97] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[77])),TRUE); /* else */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[57]), scm__rc.d2149[97]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[58]), scm__rc.d2149[96]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[58]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[99] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[78])),TRUE); /* srfi.87 */
  scm__rc.d2149[98] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[99]), SCM_FIND_MODULE_CREATE)); /* module srfi.87 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[98]));
  scm__rc.d2149[100] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[79])),TRUE); /* case */
  scm__rc.d2149[101] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[80])),TRUE); /* => */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[59]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[60]), scm__rc.d2149[100]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[60]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[103] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[81])),TRUE); /* srfi.95 */
  scm__rc.d2149[102] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[103]), SCM_FIND_MODULE_CREATE)); /* module srfi.95 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[102]));
  scm__rc.d2149[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[82])),TRUE); /* sorted? */
  scm__rc.d2149[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[83])),TRUE); /* merge */
  scm__rc.d2149[106] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[84])),TRUE); /* merge! */
  scm__rc.d2149[107] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[85])),TRUE); /* sort */
  scm__rc.d2149[108] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[86])),TRUE); /* sort! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[61]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[62]), scm__rc.d2149[107]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[63]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[64]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[65]), scm__rc.d2149[104]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[65]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[110] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[87])),TRUE); /* srfi.111 */
  scm__rc.d2149[109] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[110]), SCM_FIND_MODULE_CREATE)); /* module srfi.111 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[109]));
  scm__rc.d2149[111] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[88])),TRUE); /* box */
  scm__rc.d2149[112] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[89])),TRUE); /* box? */
  scm__rc.d2149[113] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[90])),TRUE); /* unbox */
  scm__rc.d2149[114] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[91])),TRUE); /* set-box! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[66]), scm__rc.d2149[114]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[67]), scm__rc.d2149[113]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[68]), scm__rc.d2149[112]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[69]), scm__rc.d2149[111]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[69]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[116] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[92])),TRUE); /* srfi.139 */
  scm__rc.d2149[115] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[116]), SCM_FIND_MODULE_CREATE)); /* module srfi.139 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[115]));
  scm__rc.d2149[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[93])),TRUE); /* define-syntax-parameter */
  scm__rc.d2149[118] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[94])),TRUE); /* syntax-parameterize */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[70]), scm__rc.d2149[118]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[71]), scm__rc.d2149[117]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[71]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[95])),TRUE); /* srfi.145 */
  scm__rc.d2149[119] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[120]), SCM_FIND_MODULE_CREATE)); /* module srfi.145 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[119]));
  scm__rc.d2149[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[96])),TRUE); /* assume */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[72]), scm__rc.d2149[121]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[72]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[97])),TRUE); /* srfi.149 */
  scm__rc.d2149[122] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[123]), SCM_FIND_MODULE_CREATE)); /* module srfi.149 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[122]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[73]), scm__rc.d2149[92]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[73]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[125] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[98])),TRUE); /* srfi.195 */
  scm__rc.d2149[124] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[125]), SCM_FIND_MODULE_CREATE)); /* module srfi.195 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[124]));
  scm__rc.d2149[126] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[99])),TRUE); /* box-arity */
  scm__rc.d2149[127] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[100])),TRUE); /* unbox-value */
  scm__rc.d2149[128] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[101])),TRUE); /* set-box-value! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[74]), scm__rc.d2149[128]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[75]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[76]), scm__rc.d2149[126]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[77]), scm__rc.d2149[114]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[78]), scm__rc.d2149[113]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[79]), scm__rc.d2149[112]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[80]), scm__rc.d2149[111]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[80]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[130] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[102])),TRUE); /* srfi.219 */
  scm__rc.d2149[129] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[130]), SCM_FIND_MODULE_CREATE)); /* module srfi.219 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[129]));
  scm__rc.d2149[131] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[103])),TRUE); /* define */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[81]), scm__rc.d2149[131]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[81]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[133] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[104])),TRUE); /* srfi.236 */
  scm__rc.d2149[132] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[133]), SCM_FIND_MODULE_CREATE)); /* module srfi.236 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[132]));
  scm__rc.d2149[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[105])),TRUE); /* independently */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[82]), scm__rc.d2149[134]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[82]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[136] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[106])),TRUE); /* srfi.244 */
  scm__rc.d2149[135] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[136]), SCM_FIND_MODULE_CREATE)); /* module srfi.244 */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[135]));
  scm__rc.d2149[137] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[107])),TRUE); /* define-values */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[83]), scm__rc.d2149[137]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[83]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  Scm_VMExecuteToplevels(toplevels);
}
