/* Generated automatically from libmemo.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/priv/memoP.h"
static ScmObj libmemomake_memo_table(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmemomake_memo_table__STUB, 2, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmemomake_memo_table, NULL, NULL);

static ScmObj libmemomemo_table_getv2(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmemomemo_table_getv2__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmemomemo_table_getv2, NULL, NULL);

static ScmObj libmemomemo_table_get2(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmemomemo_table_get2__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmemomemo_table_get2, NULL, NULL);

static ScmObj libmemomemo_table_putvX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmemomemo_table_putvX__STUB, 3, 0,SCM_FALSE,libmemomemo_table_putvX, NULL, NULL);

static ScmObj libmemomemo_table_putX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmemomemo_table_putX__STUB, 3, 0,SCM_FALSE,libmemomemo_table_putX, NULL, NULL);

static ScmObj libmemomemo_table_dump(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmemomemo_table_dump__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmemomemo_table_dump, NULL, NULL);

#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2149[30];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2149 */
      SCM_STRING_CONST_INITIALIZER("weak", 4, 4),
      SCM_STRING_CONST_INITIALIZER("fixed", 5, 5),
      SCM_STRING_CONST_INITIALIZER("make-memo-table", 15, 15),
      SCM_STRING_CONST_INITIALIZER("capacity", 8, 8),
      SCM_STRING_CONST_INITIALIZER("num-keys", 8, 8),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libmemo.scm", 11, 11),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<ulong>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("memo-table-getv2", 16, 16),
      SCM_STRING_CONST_INITIALIZER("tab", 3, 3),
      SCM_STRING_CONST_INITIALIZER("keys", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<memo-table>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("<vector>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("memo-table-get2", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<list>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("memo-table-putv!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("value", 5, 5),
      SCM_STRING_CONST_INITIALIZER("memo-table-put!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("memo-table-dump", 15, 15),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("port", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
  },
};
static struct scm__rcRec {
  ScmPair d2150[62] SCM_ALIGN_PAIR;
  ScmObj d2148[90];
} scm__rc SCM_UNUSED = {
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[4])},
       { SCM_MAKE_INT(46U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[7]), SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[7])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[9])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_OBJ(&scm__rc.d2150[11]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[8]), SCM_OBJ(&scm__rc.d2150[12])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_MAKE_INT(63U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[7]), SCM_OBJ(&scm__rc.d2150[16])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[17])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[19])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[20])},
       { SCM_OBJ(&scm__rc.d2150[21]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[18]), SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_MAKE_INT(72U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[7]), SCM_OBJ(&scm__rc.d2150[24])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[25])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[27])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[28])},
       { SCM_OBJ(&scm__rc.d2150[29]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[26]), SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[32])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_MAKE_INT(80U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[7]), SCM_OBJ(&scm__rc.d2150[35])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[36])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[38])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_OBJ(&scm__rc.d2150[40]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[37]), SCM_OBJ(&scm__rc.d2150[41])},
       { SCM_MAKE_INT(85U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[7]), SCM_OBJ(&scm__rc.d2150[43])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[44])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[46])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[47])},
       { SCM_OBJ(&scm__rc.d2150[48]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[45]), SCM_OBJ(&scm__rc.d2150[49])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_MAKE_INT(89U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[7]), SCM_OBJ(&scm__rc.d2150[54])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[55])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[57])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_OBJ(&scm__rc.d2150[59]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[60])},
  },
  {   /* ScmObj d2148 */
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

static ScmObj libmemomake_memo_table(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj capacity_scm;
  u_long capacity;
  ScmObj num_keys_scm;
  int num_keys;
  ScmObj weak_scm = SCM_FALSE;
  ScmObj weak;
  ScmObj fixed_scm = SCM_FALSE;
  ScmObj fixed;
  ScmObj SCM_SUBRARGS[2];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("make-memo-table");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  capacity_scm = SCM_SUBRARGS[0];
  if (!SCM_UINTEGERP(capacity_scm)) Scm_Error("u_long required, but got %S", capacity_scm);
  capacity = Scm_GetIntegerU(capacity_scm);
  num_keys_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(num_keys_scm)) Scm_Error("int required, but got %S", num_keys_scm);
  num_keys = Scm_GetInteger(num_keys_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2148[0])) {
      weak_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2148[1])) {
      fixed_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(weak_scm)) Scm_Error("scheme object required, but got %S", weak_scm);
  weak = (weak_scm);
  if (!(fixed_scm)) Scm_Error("scheme object required, but got %S", fixed_scm);
  fixed = (fixed_scm);
  {
{
ScmObj SCM_RESULT;

#line 50 "libmemo.scm"
{u_long flags=0;
if (!(SCM_FALSEP(weak))){{(flags)|=(SCM_MEMO_TABLE_WEAK);}}
if (!(SCM_FALSEP(fixed))){{(flags)|=(SCM_MEMO_TABLE_FIXED);}}
{SCM_RESULT=(Scm_MakeMemoTable(capacity,num_keys,flags));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmemomemo_table_getv2(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tab_scm;
  ScmMemoTable* tab;
  ScmObj keys_scm;
  ScmVector* keys;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("memo-table-getv2");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tab_scm = SCM_SUBRARGS[0];
  if (!SCM_MEMO_TABLE_P(tab_scm)) Scm_Error("<memo-table> required, but got %S", tab_scm);
  tab = SCM_MEMO_TABLE(tab_scm);
  keys_scm = SCM_SUBRARGS[1];
  if (!SCM_VECTORP(keys_scm)) Scm_Error("<vector> required, but got %S", keys_scm);
  keys = SCM_VECTOR(keys_scm);
  {
ScmObj SCM_RESULT0;
int SCM_RESULT1;
{

#line 65 "libmemo.scm"
{ScmObj v=Scm_MemoTableGetv(tab,SCM_VECTOR_ELEMENTS(keys),
SCM_VECTOR_SIZE(keys));
if (SCM_UNBOUNDP(v)){
{SCM_RESULT0=(SCM_UNDEFINED),SCM_RESULT1=(FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT0=(v),SCM_RESULT1=(TRUE);goto SCM_STUB_RETURN;}}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_MAKE_BOOL(SCM_RESULT1)));
  }
}


static ScmObj libmemomemo_table_get2(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tab_scm;
  ScmMemoTable* tab;
  ScmObj keys_scm;
  ScmObj keys;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("memo-table-get2");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tab_scm = SCM_SUBRARGS[0];
  if (!SCM_MEMO_TABLE_P(tab_scm)) Scm_Error("<memo-table> required, but got %S", tab_scm);
  tab = SCM_MEMO_TABLE(tab_scm);
  keys_scm = SCM_SUBRARGS[1];
  if (!SCM_LISTP(keys_scm)) Scm_Error("list required, but got %S", keys_scm);
  keys = (keys_scm);
  {
ScmObj SCM_RESULT0;
int SCM_RESULT1;
{

#line 74 "libmemo.scm"
{ScmObj v=Scm_MemoTableGet(tab,keys);
if (SCM_UNBOUNDP(v)){
{SCM_RESULT0=(SCM_UNDEFINED),SCM_RESULT1=(FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT0=(v),SCM_RESULT1=(TRUE);goto SCM_STUB_RETURN;}}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_MAKE_BOOL(SCM_RESULT1)));
  }
}


static ScmObj libmemomemo_table_putvX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tab_scm;
  ScmMemoTable* tab;
  ScmObj keys_scm;
  ScmVector* keys;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("memo-table-putv!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tab_scm = SCM_SUBRARGS[0];
  if (!SCM_MEMO_TABLE_P(tab_scm)) Scm_Error("<memo-table> required, but got %S", tab_scm);
  tab = SCM_MEMO_TABLE(tab_scm);
  keys_scm = SCM_SUBRARGS[1];
  if (!SCM_VECTORP(keys_scm)) Scm_Error("<vector> required, but got %S", keys_scm);
  keys = SCM_VECTOR(keys_scm);
  value_scm = SCM_SUBRARGS[2];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {
{
ScmObj SCM_RESULT;

#line 81 "libmemo.scm"
{SCM_RESULT=(Scm_MemoTablePutv(tab,SCM_VECTOR_ELEMENTS(keys),
SCM_VECTOR_SIZE(keys),value));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmemomemo_table_putX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tab_scm;
  ScmMemoTable* tab;
  ScmObj keys_scm;
  ScmObj keys;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("memo-table-put!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tab_scm = SCM_SUBRARGS[0];
  if (!SCM_MEMO_TABLE_P(tab_scm)) Scm_Error("<memo-table> required, but got %S", tab_scm);
  tab = SCM_MEMO_TABLE(tab_scm);
  keys_scm = SCM_SUBRARGS[1];
  if (!SCM_LISTP(keys_scm)) Scm_Error("list required, but got %S", keys_scm);
  keys = (keys_scm);
  value_scm = SCM_SUBRARGS[2];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {
{
ScmObj SCM_RESULT;

#line 86 "libmemo.scm"
{SCM_RESULT=(Scm_MemoTablePut(tab,keys,value));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmemomemo_table_dump(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tab_scm;
  ScmMemoTable* tab;
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("memo-table-dump");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tab_scm = SCM_SUBRARGS[0];
  if (!SCM_MEMO_TABLE_P(tab_scm)) Scm_Error("<memo-table> required, but got %S", tab_scm);
  tab = SCM_MEMO_TABLE(tab_scm);
  if (SCM_ARGCNT > 1+1) {
    port_scm = SCM_SUBRARGS[1];
  } else {
    port_scm = SCM_OBJ(SCM_CUROUT);
  }
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {

#line 92 "libmemo.scm"
Scm__MemoTableDump(tab,port);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

static ScmCompiledCode *toplevels[] = {
 NULL /*termination*/
};
void Scm_Init_libmemo() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2148[0] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[0]))); /* :weak */
  scm__rc.d2148[1] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[1]))); /* :fixed */
  scm__rc.d2148[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[2])),TRUE); /* make-memo-table */
  scm__rc.d2148[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[3])),TRUE); /* capacity */
  scm__rc.d2148[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[4])),TRUE); /* num-keys */
  scm__rc.d2148[5] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[5]))); /* :key */
  scm__rc.d2148[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[0])),TRUE); /* weak */
  scm__rc.d2148[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[1])),TRUE); /* fixed */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1]), scm__rc.d2148[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[2]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[3]), scm__rc.d2148[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[4]), scm__rc.d2148[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[5]), scm__rc.d2148[3]);
  scm__rc.d2148[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[6])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[8]), scm__rc.d2148[8]);
  scm__rc.d2148[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[8])),TRUE); /* bind-info */
  scm__rc.d2148[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[9])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[9]), scm__rc.d2148[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[10]), scm__rc.d2148[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[11]), scm__rc.d2148[9]);
  scm__rc.d2148[11] = Scm_MakeExtendedPair(scm__rc.d2148[2], SCM_OBJ(&scm__rc.d2150[5]), SCM_OBJ(&scm__rc.d2150[13]));
  scm__rc.d2148[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[10])),TRUE); /* <ulong> */
  scm__rc.d2148[13] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[11])),TRUE); /* <int> */
  scm__rc.d2148[14] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[12])),TRUE); /* * */
  scm__rc.d2148[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[13])),TRUE); /* -> */
  scm__rc.d2148[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[14])),TRUE); /* <top> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[17]))[3] = scm__rc.d2148[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[17]))[4] = scm__rc.d2148[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[17]))[5] = scm__rc.d2148[13];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[17]))[6] = scm__rc.d2148[14];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[17]))[7] = scm__rc.d2148[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[17]))[8] = scm__rc.d2148[16];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("make-memo-table")), SCM_OBJ(&libmemomake_memo_table__STUB), 0);
  libmemomake_memo_table__STUB.common.info = scm__rc.d2148[11];
  libmemomake_memo_table__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[17]);
  scm__rc.d2148[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[15])),TRUE); /* memo-table-getv2 */
  scm__rc.d2148[27] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[16])),TRUE); /* tab */
  scm__rc.d2148[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[17])),TRUE); /* keys */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2148[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[15]), scm__rc.d2148[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[18]), scm__rc.d2148[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[19]), scm__rc.d2148[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[20]), scm__rc.d2148[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[21]), scm__rc.d2148[9]);
  scm__rc.d2148[29] = Scm_MakeExtendedPair(scm__rc.d2148[26], SCM_OBJ(&scm__rc.d2150[15]), SCM_OBJ(&scm__rc.d2150[23]));
  scm__rc.d2148[30] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[18])),TRUE); /* <memo-table> */
  scm__rc.d2148[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[19])),TRUE); /* <vector> */
  scm__rc.d2148[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[20])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[33]))[3] = scm__rc.d2148[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[33]))[4] = scm__rc.d2148[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[33]))[5] = scm__rc.d2148[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[33]))[6] = scm__rc.d2148[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[33]))[7] = scm__rc.d2148[16];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[33]))[8] = scm__rc.d2148[32];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("memo-table-getv2")), SCM_OBJ(&libmemomemo_table_getv2__STUB), 0);
  libmemomemo_table_getv2__STUB.common.info = scm__rc.d2148[29];
  libmemomemo_table_getv2__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[33]);
  scm__rc.d2148[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[21])),TRUE); /* memo-table-get2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2148[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[27]), scm__rc.d2148[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[28]), scm__rc.d2148[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[29]), scm__rc.d2148[9]);
  scm__rc.d2148[43] = Scm_MakeExtendedPair(scm__rc.d2148[42], SCM_OBJ(&scm__rc.d2150[15]), SCM_OBJ(&scm__rc.d2150[31]));
  scm__rc.d2148[44] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[22])),TRUE); /* <list> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[45]))[3] = scm__rc.d2148[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[45]))[4] = scm__rc.d2148[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[45]))[5] = scm__rc.d2148[44];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[45]))[6] = scm__rc.d2148[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[45]))[7] = scm__rc.d2148[16];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[45]))[8] = scm__rc.d2148[32];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("memo-table-get2")), SCM_OBJ(&libmemomemo_table_get2__STUB), 0);
  libmemomemo_table_get2__STUB.common.info = scm__rc.d2148[43];
  libmemomemo_table_get2__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[45]);
  scm__rc.d2148[54] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[23])),TRUE); /* memo-table-putv! */
  scm__rc.d2148[55] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[24])),TRUE); /* value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[32]), scm__rc.d2148[55]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[33]), scm__rc.d2148[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[34]), scm__rc.d2148[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[37]), scm__rc.d2148[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[38]), scm__rc.d2148[54]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[39]), scm__rc.d2148[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[40]), scm__rc.d2148[9]);
  scm__rc.d2148[56] = Scm_MakeExtendedPair(scm__rc.d2148[54], SCM_OBJ(&scm__rc.d2150[34]), SCM_OBJ(&scm__rc.d2150[42]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[57]))[3] = scm__rc.d2148[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[57]))[4] = scm__rc.d2148[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[57]))[5] = scm__rc.d2148[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[57]))[6] = scm__rc.d2148[16];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[57]))[7] = scm__rc.d2148[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[57]))[8] = scm__rc.d2148[16];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("memo-table-putv!")), SCM_OBJ(&libmemomemo_table_putvX__STUB), 0);
  libmemomemo_table_putvX__STUB.common.info = scm__rc.d2148[56];
  libmemomemo_table_putvX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[57]);
  scm__rc.d2148[66] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[25])),TRUE); /* memo-table-put! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2148[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2148[66]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[47]), scm__rc.d2148[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[48]), scm__rc.d2148[9]);
  scm__rc.d2148[67] = Scm_MakeExtendedPair(scm__rc.d2148[66], SCM_OBJ(&scm__rc.d2150[34]), SCM_OBJ(&scm__rc.d2150[50]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[68]))[3] = scm__rc.d2148[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[68]))[4] = scm__rc.d2148[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[68]))[5] = scm__rc.d2148[44];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[68]))[6] = scm__rc.d2148[16];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[68]))[7] = scm__rc.d2148[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[68]))[8] = scm__rc.d2148[16];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("memo-table-put!")), SCM_OBJ(&libmemomemo_table_putX__STUB), 0);
  libmemomemo_table_putX__STUB.common.info = scm__rc.d2148[67];
  libmemomemo_table_putX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[68]);
  scm__rc.d2148[77] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[26])),TRUE); /* memo-table-dump */
  scm__rc.d2148[78] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[27]))); /* :optional */
  scm__rc.d2148[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[28])),TRUE); /* port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[51]), scm__rc.d2148[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[52]), scm__rc.d2148[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[53]), scm__rc.d2148[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[56]), scm__rc.d2148[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[57]), scm__rc.d2148[77]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[58]), scm__rc.d2148[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2148[9]);
  scm__rc.d2148[80] = Scm_MakeExtendedPair(scm__rc.d2148[77], SCM_OBJ(&scm__rc.d2150[53]), SCM_OBJ(&scm__rc.d2150[61]));
  scm__rc.d2148[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[29])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[82]))[3] = scm__rc.d2148[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[82]))[4] = scm__rc.d2148[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[82]))[5] = scm__rc.d2148[14];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[82]))[6] = scm__rc.d2148[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[82]))[7] = scm__rc.d2148[81];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("memo-table-dump")), SCM_OBJ(&libmemomemo_table_dump__STUB), 0);
  libmemomemo_table_dump__STUB.common.info = scm__rc.d2148[80];
  libmemomemo_table_dump__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[82]);
  Scm_VMExecuteToplevels(toplevels);
}
