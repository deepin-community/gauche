/* Generated automatically from libbox.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/priv/atomicP.h"



static ScmObj libboxbox(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libboxbox__STUB, 0, 2,SCM_FALSE,libboxbox, NULL, NULL);

static ScmObj libboxboxP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libboxboxP__STUB, 1, 0,SCM_FALSE,libboxboxP, NULL, NULL);

static ScmObj libboxset_boxX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libboxset_boxX__STUB, 1, 1,SCM_FALSE,libboxset_boxX, NULL, NULL);

static ScmObj libboxunbox(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libboxunbox__STUB, 1, 0,SCM_FALSE,libboxunbox, NULL, NULL);

static ScmObj libboxbox_arity(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libboxbox_arity__STUB, 1, 0,SCM_FALSE,libboxbox_arity, NULL, NULL);

static ScmObj libboxset_box_valueX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libboxset_box_valueX__STUB, 3, 0,SCM_FALSE,libboxset_box_valueX, NULL, NULL);

static ScmObj libboxunbox_value(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libboxunbox_value__STUB, 2, 0,SCM_FALSE,libboxunbox_value, NULL, NULL);

static ScmObj libboxshared_box(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libboxshared_box__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libboxshared_box, NULL, NULL);

static ScmObj libboxshared_box_count(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libboxshared_box_count__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libboxshared_box_count, NULL, NULL);

static ScmObj libboxshared_box_incX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libboxshared_box_incX__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libboxshared_box_incX, NULL, NULL);

#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2149[36];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2149 */
      SCM_STRING_CONST_INITIALIZER("box", 3, 3),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("optarray", 8, 8),
      SCM_STRING_CONST_INITIALIZER("argv", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libbox.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("box\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("v", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("set-box!", 8, 8),
      SCM_STRING_CONST_INITIALIZER("b", 1, 1),
      SCM_STRING_CONST_INITIALIZER("vs", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("unbox", 5, 5),
      SCM_STRING_CONST_INITIALIZER("box-arity", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("set-box-value!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("i", 1, 1),
      SCM_STRING_CONST_INITIALIZER("val", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("unbox-value", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gauche.experimental.shared-box", 30, 30),
      SCM_STRING_CONST_INITIALIZER("shared-box", 10, 10),
      SCM_STRING_CONST_INITIALIZER("shared-box-count", 16, 16),
      SCM_STRING_CONST_INITIALIZER("shared-box-inc!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("initial-count", 13, 13),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("cb", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<shared-box>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("delta", 5, 5),
  },
};
static struct scm__rcRec {
  ScmPair d2151[104] SCM_ALIGN_PAIR;
  ScmObj d2150[123];
} scm__rc SCM_UNUSED = {
  {   /* ScmPair d2151 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[3])},
       { SCM_MAKE_INT(92U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[6])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[8])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[9])},
       { SCM_OBJ(&scm__rc.d2151[10]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[7]), SCM_OBJ(&scm__rc.d2151[11])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(98U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[18])},
       { SCM_OBJ(&scm__rc.d2151[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[16]), SCM_OBJ(&scm__rc.d2151[20])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[23])},
       { SCM_MAKE_INT(101U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[26])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[28])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[29])},
       { SCM_OBJ(&scm__rc.d2151[30]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[27]), SCM_OBJ(&scm__rc.d2151[31])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(126U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[34])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[35])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[37])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[38])},
       { SCM_OBJ(&scm__rc.d2151[39]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[36]), SCM_OBJ(&scm__rc.d2151[40])},
       { SCM_MAKE_INT(137U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[43])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[45])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[46])},
       { SCM_OBJ(&scm__rc.d2151[47]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[44]), SCM_OBJ(&scm__rc.d2151[48])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[50])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[51])},
       { SCM_MAKE_INT(144U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[54])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[56])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[57])},
       { SCM_OBJ(&scm__rc.d2151[58]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[55]), SCM_OBJ(&scm__rc.d2151[59])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[61])},
       { SCM_MAKE_INT(161U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[63])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[64])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[66])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[67])},
       { SCM_OBJ(&scm__rc.d2151[68]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[65]), SCM_OBJ(&scm__rc.d2151[69])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[72])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[75])},
       { SCM_MAKE_INT(190U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[77])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[78])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[80])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[81])},
       { SCM_OBJ(&scm__rc.d2151[82]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[79]), SCM_OBJ(&scm__rc.d2151[83])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(205U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[86])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[87])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[89])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[90])},
       { SCM_OBJ(&scm__rc.d2151[91]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[88]), SCM_OBJ(&scm__rc.d2151[92])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[94])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[95])},
       { SCM_MAKE_INT(211U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[5]), SCM_OBJ(&scm__rc.d2151[97])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[100])},
       { SCM_OBJ(&scm__rc.d2151[101]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[99]), SCM_OBJ(&scm__rc.d2151[102])},
  },
  {   /* ScmObj d2150 */
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(6, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
  },
};
typedef struct ScmSharedBoxRec {  SCM_HEADER; ScmAtomicVar counter; ScmSmallInt numValues; ScmObj values[1]; } ScmSharedBox;
SCM_CLASS_DECL(Scm_SharedBoxClass);
#define SCM_SHARED_BOX(obj) ((ScmSharedBox*)obj)
#define SCM_SHARED_BOX_P(obj) SCM_ISA(obj, (&Scm_SharedBoxClass))
static void Scm_SharedBoxClass_PRINT(ScmObj obj, ScmPort *port, ScmWriteContext *ctx SCM_UNUSED)
{

#line 74 "libbox.scm"
{ScmSharedBox* b=SCM_SHARED_BOX(obj);ScmAtomicWord cnt=
Scm_AtomicLoad(&((b)->counter));
Scm_Printf(port,"#<shared-box[%d]<%d>",
(b)->numValues,cnt);
{int i=0;int cise__2148=(b)->numValues;for (; (i)<(cise__2148); (i)++){
Scm_Printf(port," %S",((b)->values)[i]);}}
Scm_Printf(port,">");}
}

SCM_DEFINE_BASE_CLASS(Scm_SharedBoxClass, ScmSharedBox, Scm_SharedBoxClass_PRINT, NULL, NULL, NULL, SCM_CLASS_DEFAULT_CPL);

#define SCM_SHARED_BOX_SIZE(x) ((SCM_SHARED_BOX(x))->numValues)

#define SCM_SHARED_BOX_VALUES(x) ((SCM_SHARED_BOX(x))->values)


static ScmObj libboxbox(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj* argv;
  int argc;
  ScmObj rest_scm;
  ScmObj rest;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("box");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  argv = &SCM_SUBRARGS[0];
  argc = SCM_ARGCNT-1-0;
  rest_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(rest_scm)) Scm_Error("list required, but got %S", rest_scm);
  rest = (rest_scm);
  {
{
ScmObj SCM_RESULT;

#line 93 "libbox.scm"
if (
(argc)==(0)){{SCM_RESULT=(SCM_OBJ(Scm_MakeMVBox(0,SCM_FALSE)));goto SCM_STUB_RETURN;}}else if(
SCM_NULLP(rest)){{SCM_RESULT=(SCM_OBJ(Scm_MakeBox((argv)[0])));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(SCM_OBJ(Scm_ListToMVBox(Scm_Cons((argv)[0],rest))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libboxboxP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmObj v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("box?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!(v_scm)) Scm_Error("scheme object required, but got %S", v_scm);
  v = (v_scm);
  {
{
int SCM_RESULT;

#line 99 "libbox.scm"
{SCM_RESULT=(((SCM_BOXP(v))||(SCM_MVBOXP(v)))||(SCM_SHARED_BOX_P(v)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libboxset_boxX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj b_scm;
  ScmObj b;
  ScmObj vs_scm;
  ScmObj vs;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("set-box!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  b_scm = SCM_SUBRARGS[0];
  if (!(b_scm)) Scm_Error("scheme object required, but got %S", b_scm);
  b = (b_scm);
  vs_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(vs_scm)) Scm_Error("list required, but got %S", vs_scm);
  vs = (vs_scm);
  {

#line 102 "libbox.scm"
if (
SCM_BOXP(b)){
if (!((SCM_PAIRP(vs))&&(SCM_NULLP(SCM_CDR(vs))))){{
Scm_Error("Wrong number of values to set to a single-value box %S: %S",b,vs);}}
#line 107 "libbox.scm"
SCM_BOX_SET(b,SCM_CAR(vs));}else if(
SCM_MVBOXP(b)){
{ScmSmallInt argc=Scm_Length(vs);ScmSmallInt i=0;
#line 111 "libbox.scm"
if (!((argc)==(SCM_MVBOX_SIZE(b)))){{
Scm_Error("Wrong number of values to set to a multi-value box %S: %S",b,vs);}}
#line 114 "libbox.scm"
for (; (i)<(argc); (i)++,vs=(SCM_CDR(vs))){
(SCM_MVBOX_VALUES(b))[i]=(SCM_CAR(vs));}}}else if(
SCM_SHARED_BOX_P(b)){
{ScmSmallInt argc=Scm_Length(vs);ScmSmallInt i=0;
#line 119 "libbox.scm"
if (!((argc)==(SCM_SHARED_BOX_SIZE(b)))){{
Scm_Error("Wrong number of values to set to a shared box %S: %S",b,vs);}}
#line 122 "libbox.scm"
for (; (i)<(argc); (i)++,vs=(SCM_CDR(vs))){
(SCM_SHARED_BOX_VALUES(b))[i]=(SCM_CAR(vs));}}} else {
SCM_TYPE_ERROR(b,"<box>, <mv-box>, or <shared-box>");}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libboxunbox(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj b_scm;
  ScmObj b;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("unbox");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  b_scm = SCM_SUBRARGS[0];
  if (!(b_scm)) Scm_Error("scheme object required, but got %S", b_scm);
  b = (b_scm);
  {
{
ScmObj SCM_RESULT;

#line 128 "libbox.scm"
if (
SCM_BOXP(b)){{SCM_RESULT=(SCM_BOX_VALUE(b));goto SCM_STUB_RETURN;}}else if(
SCM_MVBOXP(b)){{SCM_RESULT=(Scm_ValuesFromArray(SCM_MVBOX_VALUES(b),
SCM_MVBOX_SIZE(b)));goto SCM_STUB_RETURN;}}else if(
SCM_SHARED_BOX_P(b)){{SCM_RESULT=(Scm_ValuesFromArray(
SCM_SHARED_BOX_VALUES(b),
SCM_SHARED_BOX_SIZE(b)));goto SCM_STUB_RETURN;}} else {
SCM_TYPE_ERROR(b,"<box> or <mv-box>");{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libboxbox_arity(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj b_scm;
  ScmObj b;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("box-arity");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  b_scm = SCM_SUBRARGS[0];
  if (!(b_scm)) Scm_Error("scheme object required, but got %S", b_scm);
  b = (b_scm);
  {
{
int SCM_RESULT;

#line 138 "libbox.scm"
if (
SCM_BOXP(b)){{SCM_RESULT=(1);goto SCM_STUB_RETURN;}}else if(
SCM_MVBOXP(b)){{SCM_RESULT=(SCM_MVBOX_SIZE(b));goto SCM_STUB_RETURN;}}else if(
SCM_SHARED_BOX_P(b)){{SCM_RESULT=(SCM_SHARED_BOX_SIZE(b));goto SCM_STUB_RETURN;}} else {
SCM_TYPE_ERROR(b,"<box>, <mv-box>, or <shared-box>");}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libboxset_box_valueX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj b_scm;
  ScmObj b;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("set-box-value!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  b_scm = SCM_SUBRARGS[0];
  if (!(b_scm)) Scm_Error("scheme object required, but got %S", b_scm);
  b = (b_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  {

#line 145 "libbox.scm"
if (
SCM_BOXP(b)){
if (!((i)==(0))){{Scm_Error("index out of range for %S: %d",b,i);}}
SCM_BOX_SET(b,val);}else if(
SCM_MVBOXP(b)){
if (!(((0)<=(i))&&(
(i)<(SCM_MVBOX_SIZE(b))))){{
Scm_Error("index out of range for %S: %d",b,i);}}
(SCM_MVBOX_VALUES(b))[i]=(val);}else if(
SCM_SHARED_BOX_P(b)){
if (!(((0)<=(i))&&(
(i)<(SCM_SHARED_BOX_SIZE(b))))){{
Scm_Error("index out of range for %S: %d",b,i);}}
(SCM_SHARED_BOX_VALUES(b))[i]=(val);} else {
SCM_TYPE_ERROR(b,"<box>, <mv-box>, or <shared-box>");}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libboxunbox_value(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj b_scm;
  ScmObj b;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("unbox-value");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  b_scm = SCM_SUBRARGS[0];
  if (!(b_scm)) Scm_Error("scheme object required, but got %S", b_scm);
  b = (b_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  {
{
ScmObj SCM_RESULT;

#line 163 "libbox.scm"
if (
SCM_BOXP(b)){
if (!((i)==(0))){{Scm_Error("index out of range for %S: %d",b,i);}}
{SCM_RESULT=(SCM_BOX_VALUE(b));goto SCM_STUB_RETURN;}}else if(
SCM_MVBOXP(b)){
if (!(((0)<=(i))&&(
(i)<(SCM_MVBOX_SIZE(b))))){{
Scm_Error("index out of range for %S: %d",b,i);}}
{SCM_RESULT=((SCM_MVBOX_VALUES(b))[i]);goto SCM_STUB_RETURN;}}else if(
SCM_SHARED_BOX_P(b)){
if (!(((0)<=(i))&&(
(i)<(SCM_SHARED_BOX_SIZE(b))))){{
Scm_Error("index out of range for %S: %d",b,i);}}
{SCM_RESULT=((SCM_SHARED_BOX_VALUES(b))[i]);goto SCM_STUB_RETURN;}} else {
SCM_TYPE_ERROR(b,"<box>, <mv-box>, or <shard-box>");}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libboxshared_box(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj initial_count_scm;
  ScmSmallInt initial_count;
  ScmObj values_scm;
  ScmObj values;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("shared-box");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  initial_count_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(initial_count_scm)) Scm_Error("ScmSmallInt required, but got %S", initial_count_scm);
  initial_count = SCM_INT_VALUE(initial_count_scm);
  values_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(values_scm)) Scm_Error("list required, but got %S", values_scm);
  values = (values_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2153;
#line 191 "libbox.scm"
{ScmSmallInt numVals=Scm_Length(values);ScmSharedBox* z=
SCM_NEW2(ScmSharedBox* ,
(sizeof(ScmSharedBox ))+(
(sizeof(ScmObj ))*(
(numVals)-(1))));int i=0;
#line 197 "libbox.scm"
SCM_SET_CLASS(z,&(Scm_SharedBoxClass));
Scm_AtomicStore(&((z)->counter),((ScmAtomicWord )(initial_count)));
(z)->numValues=(numVals);
SCM_FOR_EACH(cise__2153,values) {{ScmObj v=SCM_CAR(cise__2153);
((z)->values)[(i)++]=(v);}}
{SCM_RESULT=(SCM_OBJ(z));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libboxshared_box_count(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cb_scm;
  ScmSharedBox* cb;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("shared-box-count");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cb_scm = SCM_SUBRARGS[0];
  if (!SCM_SHARED_BOX_P(cb_scm)) Scm_Error("<shared-box> required, but got %S", cb_scm);
  cb = SCM_SHARED_BOX(cb_scm);
  {
{
ScmObj SCM_RESULT;

#line 206 "libbox.scm"
{ScmAtomicWord v=Scm_AtomicLoad(&((cb)->counter));
#line 208 "libbox.scm"
{SCM_RESULT=(Scm_MakeInteger(((long )(v))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libboxshared_box_incX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cb_scm;
  ScmSharedBox* cb;
  ScmObj delta_scm;
  ScmSmallInt delta;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("shared-box-inc!");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cb_scm = SCM_SUBRARGS[0];
  if (!SCM_SHARED_BOX_P(cb_scm)) Scm_Error("<shared-box> required, but got %S", cb_scm);
  cb = SCM_SHARED_BOX(cb_scm);
  if (SCM_ARGCNT > 1+1) {
    delta_scm = SCM_SUBRARGS[1];
  } else {
    delta_scm = SCM_MAKE_INT(1U);
  }
  if (!SCM_INTP(delta_scm)) Scm_Error("ScmSmallInt required, but got %S", delta_scm);
  delta = SCM_INT_VALUE(delta_scm);
  {
{
ScmObj SCM_RESULT;

#line 213 "libbox.scm"
for (;;){
{ScmAtomicWord v=Scm_AtomicLoad(&((cb)->counter));ScmAtomicWord vv=
(v)+(delta);
if (Scm_AtomicCompareExchange(&((cb)->counter),&(v),vv)){{
{SCM_RESULT=(Scm_MakeInteger(((long )(v))));goto SCM_STUB_RETURN;}}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
 NULL /*termination*/
};
void Scm_Init_libbox() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  Scm_InitStaticClass(&Scm_SharedBoxClass, "<shared-box>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, 0);
  scm__rc.d2150[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[0])),TRUE); /* box */
  scm__rc.d2150[1] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[1]))); /* :rest */
  scm__rc.d2150[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[1])),TRUE); /* rest */
  scm__rc.d2150[3] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[2]))); /* :optarray */
  scm__rc.d2150[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[3])),TRUE); /* argv */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[1]), scm__rc.d2150[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[2]), scm__rc.d2150[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[3]), scm__rc.d2150[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[4]), scm__rc.d2150[1]);
  scm__rc.d2150[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[4])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[7]), scm__rc.d2150[5]);
  scm__rc.d2150[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[6])),TRUE); /* bind-info */
  scm__rc.d2150[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[7])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[8]), scm__rc.d2150[0]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[9]), scm__rc.d2150[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[10]), scm__rc.d2150[6]);
  scm__rc.d2150[8] = Scm_MakeExtendedPair(scm__rc.d2150[0], SCM_OBJ(&scm__rc.d2151[4]), SCM_OBJ(&scm__rc.d2151[12]));
  scm__rc.d2150[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[8])),TRUE); /* * */
  scm__rc.d2150[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[9])),TRUE); /* -> */
  scm__rc.d2150[11] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[10])),TRUE); /* <top> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[12]))[3] = scm__rc.d2150[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[12]))[4] = scm__rc.d2150[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[12]))[5] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[12]))[6] = scm__rc.d2150[11];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("box")), SCM_OBJ(&libboxbox__STUB), 0);
  libboxbox__STUB.common.info = scm__rc.d2150[8];
  libboxbox__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[12]);
  scm__rc.d2150[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[11])),TRUE); /* box? */
  scm__rc.d2150[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[12])),TRUE); /* v */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[13]), scm__rc.d2150[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[16]), scm__rc.d2150[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[17]), scm__rc.d2150[19]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[18]), scm__rc.d2150[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[19]), scm__rc.d2150[6]);
  scm__rc.d2150[21] = Scm_MakeExtendedPair(scm__rc.d2150[19], SCM_OBJ(&scm__rc.d2151[13]), SCM_OBJ(&scm__rc.d2151[21]));
  scm__rc.d2150[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[13])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[23]))[3] = scm__rc.d2150[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[23]))[4] = scm__rc.d2150[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[23]))[5] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[23]))[6] = scm__rc.d2150[22];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("box?")), SCM_OBJ(&libboxboxP__STUB), 0);
  libboxboxP__STUB.common.info = scm__rc.d2150[21];
  libboxboxP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[23]);
  scm__rc.d2150[30] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[14])),TRUE); /* set-box! */
  scm__rc.d2150[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[15])),TRUE); /* b */
  scm__rc.d2150[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[16])),TRUE); /* vs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[22]), scm__rc.d2150[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[23]), scm__rc.d2150[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[24]), scm__rc.d2150[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[27]), scm__rc.d2150[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[28]), scm__rc.d2150[30]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[29]), scm__rc.d2150[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[30]), scm__rc.d2150[6]);
  scm__rc.d2150[33] = Scm_MakeExtendedPair(scm__rc.d2150[30], SCM_OBJ(&scm__rc.d2151[24]), SCM_OBJ(&scm__rc.d2151[32]));
  scm__rc.d2150[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[17])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[35]))[3] = scm__rc.d2150[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[35]))[4] = scm__rc.d2150[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[35]))[5] = scm__rc.d2150[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[35]))[6] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[35]))[7] = scm__rc.d2150[34];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("set-box!")), SCM_OBJ(&libboxset_boxX__STUB), 0);
  libboxset_boxX__STUB.common.info = scm__rc.d2150[33];
  libboxset_boxX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[35]);
  scm__rc.d2150[43] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[18])),TRUE); /* unbox */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[33]), scm__rc.d2150[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[36]), scm__rc.d2150[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[37]), scm__rc.d2150[43]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[38]), scm__rc.d2150[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[39]), scm__rc.d2150[6]);
  scm__rc.d2150[44] = Scm_MakeExtendedPair(scm__rc.d2150[43], SCM_OBJ(&scm__rc.d2151[33]), SCM_OBJ(&scm__rc.d2151[41]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[45]))[3] = scm__rc.d2150[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[45]))[4] = scm__rc.d2150[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[45]))[5] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[45]))[6] = scm__rc.d2150[11];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("unbox")), SCM_OBJ(&libboxunbox__STUB), 0);
  libboxunbox__STUB.common.info = scm__rc.d2150[44];
  libboxunbox__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[45]);
  Scm_SetterSet(SCM_PROCEDURE(&libboxunbox__STUB), SCM_PROCEDURE(&libboxset_boxX__STUB), TRUE);
  scm__rc.d2150[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[19])),TRUE); /* box-arity */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[44]), scm__rc.d2150[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[45]), scm__rc.d2150[52]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[46]), scm__rc.d2150[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[47]), scm__rc.d2150[6]);
  scm__rc.d2150[53] = Scm_MakeExtendedPair(scm__rc.d2150[52], SCM_OBJ(&scm__rc.d2151[33]), SCM_OBJ(&scm__rc.d2151[49]));
  scm__rc.d2150[54] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[20])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[55]))[3] = scm__rc.d2150[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[55]))[4] = scm__rc.d2150[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[55]))[5] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[55]))[6] = scm__rc.d2150[54];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("box-arity")), SCM_OBJ(&libboxbox_arity__STUB), 0);
  libboxbox_arity__STUB.common.info = scm__rc.d2150[53];
  libboxbox_arity__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[55]);
  scm__rc.d2150[62] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[21])),TRUE); /* set-box-value! */
  scm__rc.d2150[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[22])),TRUE); /* i */
  scm__rc.d2150[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[23])),TRUE); /* val */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[50]), scm__rc.d2150[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[51]), scm__rc.d2150[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[52]), scm__rc.d2150[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[55]), scm__rc.d2150[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[56]), scm__rc.d2150[62]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[57]), scm__rc.d2150[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[58]), scm__rc.d2150[6]);
  scm__rc.d2150[65] = Scm_MakeExtendedPair(scm__rc.d2150[62], SCM_OBJ(&scm__rc.d2151[52]), SCM_OBJ(&scm__rc.d2151[60]));
  scm__rc.d2150[66] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[24])),TRUE); /* <fixnum> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[67]))[3] = scm__rc.d2150[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[67]))[4] = scm__rc.d2150[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[67]))[5] = scm__rc.d2150[66];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[67]))[6] = scm__rc.d2150[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[67]))[7] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[67]))[8] = scm__rc.d2150[34];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("set-box-value!")), SCM_OBJ(&libboxset_box_valueX__STUB), 0);
  libboxset_box_valueX__STUB.common.info = scm__rc.d2150[65];
  libboxset_box_valueX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[67]);
  scm__rc.d2150[76] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[25])),TRUE); /* unbox-value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[61]), scm__rc.d2150[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[62]), scm__rc.d2150[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[65]), scm__rc.d2150[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[66]), scm__rc.d2150[76]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[67]), scm__rc.d2150[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[68]), scm__rc.d2150[6]);
  scm__rc.d2150[77] = Scm_MakeExtendedPair(scm__rc.d2150[76], SCM_OBJ(&scm__rc.d2151[62]), SCM_OBJ(&scm__rc.d2151[70]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[78]))[3] = scm__rc.d2150[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[78]))[4] = scm__rc.d2150[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[78]))[5] = scm__rc.d2150[66];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[78]))[6] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[78]))[7] = scm__rc.d2150[11];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("unbox-value")), SCM_OBJ(&libboxunbox_value__STUB), 0);
  libboxunbox_value__STUB.common.info = scm__rc.d2150[77];
  libboxunbox_value__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[78]);
  Scm_SetterSet(SCM_PROCEDURE(&libboxunbox_value__STUB), SCM_PROCEDURE(&libboxset_box_valueX__STUB), TRUE);
  scm__rc.d2150[87] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[26])),TRUE); /* gauche.experimental.shared-box */
  scm__rc.d2150[86] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2150[87]), SCM_FIND_MODULE_CREATE)); /* module gauche.experimental.shared-box */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2150[86]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(scm__rc.d2150[86]));
  scm__rc.d2150[88] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[27])),TRUE); /* shared-box */
  scm__rc.d2150[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[28])),TRUE); /* shared-box-count */
  scm__rc.d2150[90] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[29])),TRUE); /* shared-box-inc! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[71]), scm__rc.d2150[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[72]), scm__rc.d2150[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[73]), scm__rc.d2150[88]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[73]));
  scm__rc.d2150[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[30])),TRUE); /* initial-count */
  scm__rc.d2150[92] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[31])),TRUE); /* values */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[74]), scm__rc.d2150[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[75]), scm__rc.d2150[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[76]), scm__rc.d2150[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[79]), scm__rc.d2150[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[80]), scm__rc.d2150[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[81]), scm__rc.d2150[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[82]), scm__rc.d2150[6]);
  scm__rc.d2150[93] = Scm_MakeExtendedPair(scm__rc.d2150[88], SCM_OBJ(&scm__rc.d2151[76]), SCM_OBJ(&scm__rc.d2151[84]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[94]))[3] = scm__rc.d2150[87];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[94]))[4] = scm__rc.d2150[66];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[94]))[5] = scm__rc.d2150[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[94]))[6] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[94]))[7] = scm__rc.d2150[11];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2150[86]), SCM_SYMBOL(SCM_INTERN("shared-box")), SCM_OBJ(&libboxshared_box__STUB), 0);
  libboxshared_box__STUB.common.info = scm__rc.d2150[93];
  libboxshared_box__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[94]);
  scm__rc.d2150[102] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[32])),TRUE); /* cb */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[85]), scm__rc.d2150[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[88]), scm__rc.d2150[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[89]), scm__rc.d2150[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[90]), scm__rc.d2150[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[91]), scm__rc.d2150[6]);
  scm__rc.d2150[103] = Scm_MakeExtendedPair(scm__rc.d2150[89], SCM_OBJ(&scm__rc.d2151[85]), SCM_OBJ(&scm__rc.d2151[93]));
  scm__rc.d2150[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[33])),TRUE); /* <shared-box> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[105]))[3] = scm__rc.d2150[87];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[105]))[4] = scm__rc.d2150[104];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[105]))[5] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[105]))[6] = scm__rc.d2150[11];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2150[86]), SCM_SYMBOL(SCM_INTERN("shared-box-count")), SCM_OBJ(&libboxshared_box_count__STUB), 0);
  libboxshared_box_count__STUB.common.info = scm__rc.d2150[103];
  libboxshared_box_count__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[105]);
  scm__rc.d2150[112] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[34]))); /* :optional */
  scm__rc.d2150[113] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[35])),TRUE); /* delta */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[94]), scm__rc.d2150[113]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[95]), scm__rc.d2150[112]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[96]), scm__rc.d2150[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[99]), scm__rc.d2150[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[100]), scm__rc.d2150[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[101]), scm__rc.d2150[6]);
  scm__rc.d2150[114] = Scm_MakeExtendedPair(scm__rc.d2150[90], SCM_OBJ(&scm__rc.d2151[96]), SCM_OBJ(&scm__rc.d2151[103]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[115]))[3] = scm__rc.d2150[87];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[115]))[4] = scm__rc.d2150[104];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[115]))[5] = scm__rc.d2150[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[115]))[6] = scm__rc.d2150[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2150[115]))[7] = scm__rc.d2150[11];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2150[86]), SCM_SYMBOL(SCM_INTERN("shared-box-inc!")), SCM_OBJ(&libboxshared_box_incX__STUB), 0);
  libboxshared_box_incX__STUB.common.info = scm__rc.d2150[114];
  libboxshared_box_incX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2150[115]);
  Scm_VMExecuteToplevels(toplevels);
}
