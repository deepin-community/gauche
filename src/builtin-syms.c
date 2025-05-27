/* Generated from builtin-syms.scm.  DO NOT EDIT
This file may be changed by minor version up, and
binaries including builtin-syms.h must be recompiled.
That is, binary compatibility isn't guaranteed if you
use SCM_SYM_*. */
#define LIBGAUCHE_BODY
#include <gauche.h>
#include <gauche/priv/configP.h>
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d1280[161];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d1280 */
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("quasiquote", 10, 10),
      SCM_STRING_CONST_INITIALIZER("unquote", 7, 7),
      SCM_STRING_CONST_INITIALIZER("unquote-splicing", 16, 16),
      SCM_STRING_CONST_INITIALIZER("define", 6, 6),
      SCM_STRING_CONST_INITIALIZER("define-constant", 15, 15),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("if", 2, 2),
      SCM_STRING_CONST_INITIALIZER("set!", 4, 4),
      SCM_STRING_CONST_INITIALIZER("let", 3, 3),
      SCM_STRING_CONST_INITIALIZER("let*", 4, 4),
      SCM_STRING_CONST_INITIALIZER("letrec", 6, 6),
      SCM_STRING_CONST_INITIALIZER("begin", 5, 5),
      SCM_STRING_CONST_INITIALIZER("when", 4, 4),
      SCM_STRING_CONST_INITIALIZER("unless", 6, 6),
      SCM_STRING_CONST_INITIALIZER("and", 3, 3),
      SCM_STRING_CONST_INITIALIZER("or", 2, 2),
      SCM_STRING_CONST_INITIALIZER("cond", 4, 4),
      SCM_STRING_CONST_INITIALIZER("case", 4, 4),
      SCM_STRING_CONST_INITIALIZER("else", 4, 4),
      SCM_STRING_CONST_INITIALIZER("=>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("do", 2, 2),
      SCM_STRING_CONST_INITIALIZER("delay", 5, 5),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("define-module", 13, 13),
      SCM_STRING_CONST_INITIALIZER("with-module", 11, 11),
      SCM_STRING_CONST_INITIALIZER("select-module", 13, 13),
      SCM_STRING_CONST_INITIALIZER("current-module", 14, 14),
      SCM_STRING_CONST_INITIALIZER("import", 6, 6),
      SCM_STRING_CONST_INITIALIZER("export", 6, 6),
      SCM_STRING_CONST_INITIALIZER("rename", 6, 6),
      SCM_STRING_CONST_INITIALIZER("define-macro", 12, 12),
      SCM_STRING_CONST_INITIALIZER("define-syntax", 13, 13),
      SCM_STRING_CONST_INITIALIZER("let-syntax", 10, 10),
      SCM_STRING_CONST_INITIALIZER("letrec-syntax", 13, 13),
      SCM_STRING_CONST_INITIALIZER("%syntax-rules", 13, 13),
      SCM_STRING_CONST_INITIALIZER("syntax-rules", 12, 12),
      SCM_STRING_CONST_INITIALIZER("...", 3, 3),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%macroexpand", 12, 12),
      SCM_STRING_CONST_INITIALIZER("%macroexpand-1", 14, 14),
      SCM_STRING_CONST_INITIALIZER("%asm", 4, 4),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("builtin", 7, 7),
      SCM_STRING_CONST_INITIALIZER("abstract", 8, 8),
      SCM_STRING_CONST_INITIALIZER("base", 4, 4),
      SCM_STRING_CONST_INITIALIZER("curried", 7, 7),
      SCM_STRING_CONST_INITIALIZER("*cond-features*", 15, 15),
      SCM_STRING_CONST_INITIALIZER("null", 4, 4),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("gauche.gf", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("keyword", 7, 7),
      SCM_STRING_CONST_INITIALIZER("user", 4, 4),
      SCM_STRING_CONST_INITIALIZER("#", 1, 1),
      SCM_STRING_CONST_INITIALIZER("*load-path*", 11, 11),
      SCM_STRING_CONST_INITIALIZER("*load-next*", 11, 11),
      SCM_STRING_CONST_INITIALIZER("*load-history*", 14, 14),
      SCM_STRING_CONST_INITIALIZER("*load-port*", 11, 11),
      SCM_STRING_CONST_INITIALIZER("*load-suffixes*", 15, 15),
      SCM_STRING_CONST_INITIALIZER("*load-path-hooks*", 17, 17),
      SCM_STRING_CONST_INITIALIZER("*dynamic-load-path*", 19, 19),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("arg-info", 8, 8),
      SCM_STRING_CONST_INITIALIZER("debug-print", 11, 11),
      SCM_STRING_CONST_INITIALIZER("debug-funcall", 13, 13),
      SCM_STRING_CONST_INITIALIZER("debug-thread-log", 16, 16),
      SCM_STRING_CONST_INITIALIZER("debug-print-conditionally", 25, 25),
      SCM_STRING_CONST_INITIALIZER("debug-funcall-conditionally", 27, 27),
      SCM_STRING_CONST_INITIALIZER("define-reader-ctor", 18, 18),
      SCM_STRING_CONST_INITIALIZER("string-interpolate", 18, 18),
      SCM_STRING_CONST_INITIALIZER("big-endian", 10, 10),
      SCM_STRING_CONST_INITIALIZER("little-endian", 13, 13),
      SCM_STRING_CONST_INITIALIZER("big", 3, 3),
      SCM_STRING_CONST_INITIALIZER("little", 6, 6),
      SCM_STRING_CONST_INITIALIZER("arm-little-endian", 17, 17),
      SCM_STRING_CONST_INITIALIZER("%internal-eval", 14, 14),
      SCM_STRING_CONST_INITIALIZER("%internal-apply", 15, 15),
      SCM_STRING_CONST_INITIALIZER("%eval-before", 12, 12),
      SCM_STRING_CONST_INITIALIZER("%eval-after", 11, 11),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("syntax", 6, 6),
      SCM_STRING_CONST_INITIALIZER("macro", 5, 5),
      SCM_STRING_CONST_INITIALIZER("inline", 6, 6),
      SCM_STRING_CONST_INITIALIZER("legacy", 6, 6),
      SCM_STRING_CONST_INITIALIZER("permissive", 10, 10),
      SCM_STRING_CONST_INITIALIZER("warn-legacy", 11, 11),
      SCM_STRING_CONST_INITIALIZER("strict-r7", 9, 9),
      SCM_STRING_CONST_INITIALIZER("reader-lexical-mode", 19, 19),
      SCM_STRING_CONST_INITIALIZER("unused-args", 11, 11),
      SCM_STRING_CONST_INITIALIZER("next-method", 11, 11),
      SCM_STRING_CONST_INITIALIZER("source", 6, 6),
      SCM_STRING_CONST_INITIALIZER("definition", 10, 10),
      SCM_STRING_CONST_INITIALIZER("seq", 3, 3),
      SCM_STRING_CONST_INITIALIZER("seq-case", 8, 8),
      SCM_STRING_CONST_INITIALIZER("seq-uncase", 10, 10),
      SCM_STRING_CONST_INITIALIZER("alt", 3, 3),
      SCM_STRING_CONST_INITIALIZER("rep", 3, 3),
      SCM_STRING_CONST_INITIALIZER("rep-min", 7, 7),
      SCM_STRING_CONST_INITIALIZER("rep-while", 9, 9),
      SCM_STRING_CONST_INITIALIZER("any", 3, 3),
      SCM_STRING_CONST_INITIALIZER("bos", 3, 3),
      SCM_STRING_CONST_INITIALIZER("eos", 3, 3),
      SCM_STRING_CONST_INITIALIZER("bol", 3, 3),
      SCM_STRING_CONST_INITIALIZER("eol", 3, 3),
      SCM_STRING_CONST_INITIALIZER("wb", 2, 2),
      SCM_STRING_CONST_INITIALIZER("bow", 3, 3),
      SCM_STRING_CONST_INITIALIZER("eow", 3, 3),
      SCM_STRING_CONST_INITIALIZER("nwb", 3, 3),
      SCM_STRING_CONST_INITIALIZER("bog", 3, 3),
      SCM_STRING_CONST_INITIALIZER("eog", 3, 3),
      SCM_STRING_CONST_INITIALIZER("comp", 4, 4),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("*\077", 2, 2),
      SCM_STRING_CONST_INITIALIZER("*+", 2, 2),
      SCM_STRING_CONST_INITIALIZER("+", 1, 1),
      SCM_STRING_CONST_INITIALIZER("+\077", 2, 2),
      SCM_STRING_CONST_INITIALIZER("++", 2, 2),
      SCM_STRING_CONST_INITIALIZER("\077", 1, 1),
      SCM_STRING_CONST_INITIALIZER("\077\077", 2, 2),
      SCM_STRING_CONST_INITIALIZER("\077+", 2, 2),
      SCM_STRING_CONST_INITIALIZER("backref", 7, 7),
      SCM_STRING_CONST_INITIALIZER("once", 4, 4),
      SCM_STRING_CONST_INITIALIZER("reg", 3, 3),
      SCM_STRING_CONST_INITIALIZER("assert", 6, 6),
      SCM_STRING_CONST_INITIALIZER("nassert", 7, 7),
      SCM_STRING_CONST_INITIALIZER("lookbehind", 10, 10),
      SCM_STRING_CONST_INITIALIZER("nlookbehind", 11, 11),
      SCM_STRING_CONST_INITIALIZER("cpat", 4, 4),
      SCM_STRING_CONST_INITIALIZER("open-paren", 10, 10),
      SCM_STRING_CONST_INITIALIZER("close-paren", 11, 11),
      SCM_STRING_CONST_INITIALIZER("directory", 9, 9),
      SCM_STRING_CONST_INITIALIZER("regular", 7, 7),
      SCM_STRING_CONST_INITIALIZER("character", 9, 9),
      SCM_STRING_CONST_INITIALIZER("block", 5, 5),
      SCM_STRING_CONST_INITIALIZER("fifo", 4, 4),
      SCM_STRING_CONST_INITIALIZER("symlink", 7, 7),
      SCM_STRING_CONST_INITIALIZER("socket", 6, 6),
      SCM_STRING_CONST_INITIALIZER("time-utc", 8, 8),
      SCM_STRING_CONST_INITIALIZER("time-duration", 13, 13),
      SCM_STRING_CONST_INITIALIZER("called", 6, 6),
      SCM_STRING_CONST_INITIALIZER("original", 8, 8),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("car", 3, 3),
      SCM_STRING_CONST_INITIALIZER("cdr", 3, 3),
      SCM_STRING_CONST_INITIALIZER("cadr", 4, 4),
      SCM_STRING_CONST_INITIALIZER("cddr", 4, 4),
      SCM_STRING_CONST_INITIALIZER("cons", 4, 4),
      SCM_STRING_CONST_INITIALIZER("list", 4, 4),
      SCM_STRING_CONST_INITIALIZER("null\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("let1", 4, 4),
      SCM_STRING_CONST_INITIALIZER("loop", 4, 4),
      SCM_STRING_CONST_INITIALIZER("^", 1, 1),
      SCM_STRING_CONST_INITIALIZER("apply", 5, 5),
      SCM_STRING_CONST_INITIALIZER("not", 3, 3),
      SCM_STRING_CONST_INITIALIZER("eq\077", 3, 3),
      SCM_STRING_CONST_INITIALIZER("thread", 6, 6),
      SCM_STRING_CONST_INITIALIZER("shared", 6, 6),
  },
};
ScmSymbol Scm_BuiltinSymbols[] = {
#define ENTRY(s) {{ SCM_CLASS_STATIC_TAG(Scm_SymbolClass) }, SCM_STRING(s), SCM_SYMBOL_FLAG_INTERNED }
ENTRY(SCM_OBJ(&scm__sc.d1280[0])),
ENTRY(SCM_OBJ(&scm__sc.d1280[1])),
ENTRY(SCM_OBJ(&scm__sc.d1280[2])),
ENTRY(SCM_OBJ(&scm__sc.d1280[3])),
ENTRY(SCM_OBJ(&scm__sc.d1280[4])),
ENTRY(SCM_OBJ(&scm__sc.d1280[5])),
ENTRY(SCM_OBJ(&scm__sc.d1280[6])),
ENTRY(SCM_OBJ(&scm__sc.d1280[7])),
ENTRY(SCM_OBJ(&scm__sc.d1280[8])),
ENTRY(SCM_OBJ(&scm__sc.d1280[9])),
ENTRY(SCM_OBJ(&scm__sc.d1280[10])),
ENTRY(SCM_OBJ(&scm__sc.d1280[11])),
ENTRY(SCM_OBJ(&scm__sc.d1280[12])),
ENTRY(SCM_OBJ(&scm__sc.d1280[13])),
ENTRY(SCM_OBJ(&scm__sc.d1280[14])),
ENTRY(SCM_OBJ(&scm__sc.d1280[15])),
ENTRY(SCM_OBJ(&scm__sc.d1280[16])),
ENTRY(SCM_OBJ(&scm__sc.d1280[17])),
ENTRY(SCM_OBJ(&scm__sc.d1280[18])),
ENTRY(SCM_OBJ(&scm__sc.d1280[19])),
ENTRY(SCM_OBJ(&scm__sc.d1280[20])),
ENTRY(SCM_OBJ(&scm__sc.d1280[21])),
ENTRY(SCM_OBJ(&scm__sc.d1280[22])),
ENTRY(SCM_OBJ(&scm__sc.d1280[23])),
ENTRY(SCM_OBJ(&scm__sc.d1280[24])),
ENTRY(SCM_OBJ(&scm__sc.d1280[25])),
ENTRY(SCM_OBJ(&scm__sc.d1280[26])),
ENTRY(SCM_OBJ(&scm__sc.d1280[27])),
ENTRY(SCM_OBJ(&scm__sc.d1280[28])),
ENTRY(SCM_OBJ(&scm__sc.d1280[29])),
ENTRY(SCM_OBJ(&scm__sc.d1280[30])),
ENTRY(SCM_OBJ(&scm__sc.d1280[31])),
ENTRY(SCM_OBJ(&scm__sc.d1280[32])),
ENTRY(SCM_OBJ(&scm__sc.d1280[33])),
ENTRY(SCM_OBJ(&scm__sc.d1280[34])),
ENTRY(SCM_OBJ(&scm__sc.d1280[35])),
ENTRY(SCM_OBJ(&scm__sc.d1280[36])),
ENTRY(SCM_OBJ(&scm__sc.d1280[37])),
ENTRY(SCM_OBJ(&scm__sc.d1280[38])),
ENTRY(SCM_OBJ(&scm__sc.d1280[39])),
ENTRY(SCM_OBJ(&scm__sc.d1280[40])),
ENTRY(SCM_OBJ(&scm__sc.d1280[41])),
ENTRY(SCM_OBJ(&scm__sc.d1280[42])),
ENTRY(SCM_OBJ(&scm__sc.d1280[43])),
ENTRY(SCM_OBJ(&scm__sc.d1280[44])),
ENTRY(SCM_OBJ(&scm__sc.d1280[45])),
ENTRY(SCM_OBJ(&scm__sc.d1280[46])),
ENTRY(SCM_OBJ(&scm__sc.d1280[47])),
ENTRY(SCM_OBJ(&scm__sc.d1280[48])),
ENTRY(SCM_OBJ(&scm__sc.d1280[49])),
ENTRY(SCM_OBJ(&scm__sc.d1280[50])),
ENTRY(SCM_OBJ(&scm__sc.d1280[51])),
ENTRY(SCM_OBJ(&scm__sc.d1280[52])),
ENTRY(SCM_OBJ(&scm__sc.d1280[53])),
ENTRY(SCM_OBJ(&scm__sc.d1280[54])),
ENTRY(SCM_OBJ(&scm__sc.d1280[55])),
ENTRY(SCM_OBJ(&scm__sc.d1280[56])),
ENTRY(SCM_OBJ(&scm__sc.d1280[57])),
ENTRY(SCM_OBJ(&scm__sc.d1280[58])),
ENTRY(SCM_OBJ(&scm__sc.d1280[59])),
ENTRY(SCM_OBJ(&scm__sc.d1280[60])),
ENTRY(SCM_OBJ(&scm__sc.d1280[61])),
ENTRY(SCM_OBJ(&scm__sc.d1280[62])),
ENTRY(SCM_OBJ(&scm__sc.d1280[63])),
ENTRY(SCM_OBJ(&scm__sc.d1280[64])),
ENTRY(SCM_OBJ(&scm__sc.d1280[65])),
ENTRY(SCM_OBJ(&scm__sc.d1280[66])),
ENTRY(SCM_OBJ(&scm__sc.d1280[67])),
ENTRY(SCM_OBJ(&scm__sc.d1280[68])),
ENTRY(SCM_OBJ(&scm__sc.d1280[69])),
ENTRY(SCM_OBJ(&scm__sc.d1280[70])),
ENTRY(SCM_OBJ(&scm__sc.d1280[71])),
ENTRY(SCM_OBJ(&scm__sc.d1280[72])),
ENTRY(SCM_OBJ(&scm__sc.d1280[73])),
ENTRY(SCM_OBJ(&scm__sc.d1280[74])),
ENTRY(SCM_OBJ(&scm__sc.d1280[75])),
ENTRY(SCM_OBJ(&scm__sc.d1280[76])),
ENTRY(SCM_OBJ(&scm__sc.d1280[77])),
ENTRY(SCM_OBJ(&scm__sc.d1280[78])),
ENTRY(SCM_OBJ(&scm__sc.d1280[79])),
ENTRY(SCM_OBJ(&scm__sc.d1280[80])),
ENTRY(SCM_OBJ(&scm__sc.d1280[81])),
ENTRY(SCM_OBJ(&scm__sc.d1280[82])),
ENTRY(SCM_OBJ(&scm__sc.d1280[83])),
ENTRY(SCM_OBJ(&scm__sc.d1280[84])),
ENTRY(SCM_OBJ(&scm__sc.d1280[85])),
ENTRY(SCM_OBJ(&scm__sc.d1280[86])),
ENTRY(SCM_OBJ(&scm__sc.d1280[87])),
ENTRY(SCM_OBJ(&scm__sc.d1280[88])),
ENTRY(SCM_OBJ(&scm__sc.d1280[89])),
ENTRY(SCM_OBJ(&scm__sc.d1280[90])),
ENTRY(SCM_OBJ(&scm__sc.d1280[91])),
ENTRY(SCM_OBJ(&scm__sc.d1280[92])),
ENTRY(SCM_OBJ(&scm__sc.d1280[93])),
ENTRY(SCM_OBJ(&scm__sc.d1280[94])),
ENTRY(SCM_OBJ(&scm__sc.d1280[95])),
ENTRY(SCM_OBJ(&scm__sc.d1280[96])),
ENTRY(SCM_OBJ(&scm__sc.d1280[97])),
ENTRY(SCM_OBJ(&scm__sc.d1280[98])),
ENTRY(SCM_OBJ(&scm__sc.d1280[99])),
ENTRY(SCM_OBJ(&scm__sc.d1280[100])),
ENTRY(SCM_OBJ(&scm__sc.d1280[101])),
ENTRY(SCM_OBJ(&scm__sc.d1280[102])),
ENTRY(SCM_OBJ(&scm__sc.d1280[103])),
ENTRY(SCM_OBJ(&scm__sc.d1280[104])),
ENTRY(SCM_OBJ(&scm__sc.d1280[105])),
ENTRY(SCM_OBJ(&scm__sc.d1280[106])),
ENTRY(SCM_OBJ(&scm__sc.d1280[107])),
ENTRY(SCM_OBJ(&scm__sc.d1280[108])),
ENTRY(SCM_OBJ(&scm__sc.d1280[109])),
ENTRY(SCM_OBJ(&scm__sc.d1280[110])),
ENTRY(SCM_OBJ(&scm__sc.d1280[111])),
ENTRY(SCM_OBJ(&scm__sc.d1280[112])),
ENTRY(SCM_OBJ(&scm__sc.d1280[113])),
ENTRY(SCM_OBJ(&scm__sc.d1280[114])),
ENTRY(SCM_OBJ(&scm__sc.d1280[115])),
ENTRY(SCM_OBJ(&scm__sc.d1280[116])),
ENTRY(SCM_OBJ(&scm__sc.d1280[117])),
ENTRY(SCM_OBJ(&scm__sc.d1280[118])),
ENTRY(SCM_OBJ(&scm__sc.d1280[119])),
ENTRY(SCM_OBJ(&scm__sc.d1280[120])),
ENTRY(SCM_OBJ(&scm__sc.d1280[121])),
ENTRY(SCM_OBJ(&scm__sc.d1280[122])),
ENTRY(SCM_OBJ(&scm__sc.d1280[123])),
ENTRY(SCM_OBJ(&scm__sc.d1280[124])),
ENTRY(SCM_OBJ(&scm__sc.d1280[125])),
ENTRY(SCM_OBJ(&scm__sc.d1280[126])),
ENTRY(SCM_OBJ(&scm__sc.d1280[127])),
ENTRY(SCM_OBJ(&scm__sc.d1280[128])),
ENTRY(SCM_OBJ(&scm__sc.d1280[129])),
ENTRY(SCM_OBJ(&scm__sc.d1280[130])),
ENTRY(SCM_OBJ(&scm__sc.d1280[131])),
ENTRY(SCM_OBJ(&scm__sc.d1280[132])),
ENTRY(SCM_OBJ(&scm__sc.d1280[133])),
ENTRY(SCM_OBJ(&scm__sc.d1280[134])),
ENTRY(SCM_OBJ(&scm__sc.d1280[135])),
ENTRY(SCM_OBJ(&scm__sc.d1280[136])),
ENTRY(SCM_OBJ(&scm__sc.d1280[137])),
ENTRY(SCM_OBJ(&scm__sc.d1280[138])),
ENTRY(SCM_OBJ(&scm__sc.d1280[139])),
ENTRY(SCM_OBJ(&scm__sc.d1280[140])),
ENTRY(SCM_OBJ(&scm__sc.d1280[141])),
ENTRY(SCM_OBJ(&scm__sc.d1280[142])),
ENTRY(SCM_OBJ(&scm__sc.d1280[143])),
ENTRY(SCM_OBJ(&scm__sc.d1280[144])),
ENTRY(SCM_OBJ(&scm__sc.d1280[145])),
ENTRY(SCM_OBJ(&scm__sc.d1280[146])),
ENTRY(SCM_OBJ(&scm__sc.d1280[147])),
ENTRY(SCM_OBJ(&scm__sc.d1280[148])),
ENTRY(SCM_OBJ(&scm__sc.d1280[149])),
ENTRY(SCM_OBJ(&scm__sc.d1280[150])),
ENTRY(SCM_OBJ(&scm__sc.d1280[151])),
ENTRY(SCM_OBJ(&scm__sc.d1280[152])),
ENTRY(SCM_OBJ(&scm__sc.d1280[153])),
ENTRY(SCM_OBJ(&scm__sc.d1280[154])),
ENTRY(SCM_OBJ(&scm__sc.d1280[155])),
ENTRY(SCM_OBJ(&scm__sc.d1280[156])),
ENTRY(SCM_OBJ(&scm__sc.d1280[157])),
ENTRY(SCM_OBJ(&scm__sc.d1280[158])),
ENTRY(SCM_OBJ(&scm__sc.d1280[159])),
ENTRY(SCM_OBJ(&scm__sc.d1280[160])),
#undef ENTRY
};
static void init_builtin_syms(void)
{
#define INTERN(s, i) Scm_HashTableSet(obtable, s, SCM_OBJ(&Scm_BuiltinSymbols[i]), 0)
INTERN(SCM_OBJ(&scm__sc.d1280[0]), 0);
INTERN(SCM_OBJ(&scm__sc.d1280[1]), 1);
INTERN(SCM_OBJ(&scm__sc.d1280[2]), 2);
INTERN(SCM_OBJ(&scm__sc.d1280[3]), 3);
INTERN(SCM_OBJ(&scm__sc.d1280[4]), 4);
INTERN(SCM_OBJ(&scm__sc.d1280[5]), 5);
INTERN(SCM_OBJ(&scm__sc.d1280[6]), 6);
INTERN(SCM_OBJ(&scm__sc.d1280[7]), 7);
INTERN(SCM_OBJ(&scm__sc.d1280[8]), 8);
INTERN(SCM_OBJ(&scm__sc.d1280[9]), 9);
INTERN(SCM_OBJ(&scm__sc.d1280[10]), 10);
INTERN(SCM_OBJ(&scm__sc.d1280[11]), 11);
INTERN(SCM_OBJ(&scm__sc.d1280[12]), 12);
INTERN(SCM_OBJ(&scm__sc.d1280[13]), 13);
INTERN(SCM_OBJ(&scm__sc.d1280[14]), 14);
INTERN(SCM_OBJ(&scm__sc.d1280[15]), 15);
INTERN(SCM_OBJ(&scm__sc.d1280[16]), 16);
INTERN(SCM_OBJ(&scm__sc.d1280[17]), 17);
INTERN(SCM_OBJ(&scm__sc.d1280[18]), 18);
INTERN(SCM_OBJ(&scm__sc.d1280[19]), 19);
INTERN(SCM_OBJ(&scm__sc.d1280[20]), 20);
INTERN(SCM_OBJ(&scm__sc.d1280[21]), 21);
INTERN(SCM_OBJ(&scm__sc.d1280[22]), 22);
INTERN(SCM_OBJ(&scm__sc.d1280[23]), 23);
INTERN(SCM_OBJ(&scm__sc.d1280[24]), 24);
INTERN(SCM_OBJ(&scm__sc.d1280[25]), 25);
INTERN(SCM_OBJ(&scm__sc.d1280[26]), 26);
INTERN(SCM_OBJ(&scm__sc.d1280[27]), 27);
INTERN(SCM_OBJ(&scm__sc.d1280[28]), 28);
INTERN(SCM_OBJ(&scm__sc.d1280[29]), 29);
INTERN(SCM_OBJ(&scm__sc.d1280[30]), 30);
INTERN(SCM_OBJ(&scm__sc.d1280[31]), 31);
INTERN(SCM_OBJ(&scm__sc.d1280[32]), 32);
INTERN(SCM_OBJ(&scm__sc.d1280[33]), 33);
INTERN(SCM_OBJ(&scm__sc.d1280[34]), 34);
INTERN(SCM_OBJ(&scm__sc.d1280[35]), 35);
INTERN(SCM_OBJ(&scm__sc.d1280[36]), 36);
INTERN(SCM_OBJ(&scm__sc.d1280[37]), 37);
INTERN(SCM_OBJ(&scm__sc.d1280[38]), 38);
INTERN(SCM_OBJ(&scm__sc.d1280[39]), 39);
INTERN(SCM_OBJ(&scm__sc.d1280[40]), 40);
INTERN(SCM_OBJ(&scm__sc.d1280[41]), 41);
INTERN(SCM_OBJ(&scm__sc.d1280[42]), 42);
INTERN(SCM_OBJ(&scm__sc.d1280[43]), 43);
INTERN(SCM_OBJ(&scm__sc.d1280[44]), 44);
INTERN(SCM_OBJ(&scm__sc.d1280[45]), 45);
INTERN(SCM_OBJ(&scm__sc.d1280[46]), 46);
INTERN(SCM_OBJ(&scm__sc.d1280[47]), 47);
INTERN(SCM_OBJ(&scm__sc.d1280[48]), 48);
INTERN(SCM_OBJ(&scm__sc.d1280[49]), 49);
INTERN(SCM_OBJ(&scm__sc.d1280[50]), 50);
INTERN(SCM_OBJ(&scm__sc.d1280[51]), 51);
INTERN(SCM_OBJ(&scm__sc.d1280[52]), 52);
INTERN(SCM_OBJ(&scm__sc.d1280[53]), 53);
INTERN(SCM_OBJ(&scm__sc.d1280[54]), 54);
INTERN(SCM_OBJ(&scm__sc.d1280[55]), 55);
INTERN(SCM_OBJ(&scm__sc.d1280[56]), 56);
INTERN(SCM_OBJ(&scm__sc.d1280[57]), 57);
INTERN(SCM_OBJ(&scm__sc.d1280[58]), 58);
INTERN(SCM_OBJ(&scm__sc.d1280[59]), 59);
INTERN(SCM_OBJ(&scm__sc.d1280[60]), 60);
INTERN(SCM_OBJ(&scm__sc.d1280[61]), 61);
INTERN(SCM_OBJ(&scm__sc.d1280[62]), 62);
INTERN(SCM_OBJ(&scm__sc.d1280[63]), 63);
INTERN(SCM_OBJ(&scm__sc.d1280[64]), 64);
INTERN(SCM_OBJ(&scm__sc.d1280[65]), 65);
INTERN(SCM_OBJ(&scm__sc.d1280[66]), 66);
INTERN(SCM_OBJ(&scm__sc.d1280[67]), 67);
INTERN(SCM_OBJ(&scm__sc.d1280[68]), 68);
INTERN(SCM_OBJ(&scm__sc.d1280[69]), 69);
INTERN(SCM_OBJ(&scm__sc.d1280[70]), 70);
INTERN(SCM_OBJ(&scm__sc.d1280[71]), 71);
INTERN(SCM_OBJ(&scm__sc.d1280[72]), 72);
INTERN(SCM_OBJ(&scm__sc.d1280[73]), 73);
INTERN(SCM_OBJ(&scm__sc.d1280[74]), 74);
INTERN(SCM_OBJ(&scm__sc.d1280[75]), 75);
INTERN(SCM_OBJ(&scm__sc.d1280[76]), 76);
INTERN(SCM_OBJ(&scm__sc.d1280[77]), 77);
INTERN(SCM_OBJ(&scm__sc.d1280[78]), 78);
INTERN(SCM_OBJ(&scm__sc.d1280[79]), 79);
INTERN(SCM_OBJ(&scm__sc.d1280[80]), 80);
INTERN(SCM_OBJ(&scm__sc.d1280[81]), 81);
INTERN(SCM_OBJ(&scm__sc.d1280[82]), 82);
INTERN(SCM_OBJ(&scm__sc.d1280[83]), 83);
INTERN(SCM_OBJ(&scm__sc.d1280[84]), 84);
INTERN(SCM_OBJ(&scm__sc.d1280[85]), 85);
INTERN(SCM_OBJ(&scm__sc.d1280[86]), 86);
INTERN(SCM_OBJ(&scm__sc.d1280[87]), 87);
INTERN(SCM_OBJ(&scm__sc.d1280[88]), 88);
INTERN(SCM_OBJ(&scm__sc.d1280[89]), 89);
INTERN(SCM_OBJ(&scm__sc.d1280[90]), 90);
INTERN(SCM_OBJ(&scm__sc.d1280[91]), 91);
INTERN(SCM_OBJ(&scm__sc.d1280[92]), 92);
INTERN(SCM_OBJ(&scm__sc.d1280[93]), 93);
INTERN(SCM_OBJ(&scm__sc.d1280[94]), 94);
INTERN(SCM_OBJ(&scm__sc.d1280[95]), 95);
INTERN(SCM_OBJ(&scm__sc.d1280[96]), 96);
INTERN(SCM_OBJ(&scm__sc.d1280[97]), 97);
INTERN(SCM_OBJ(&scm__sc.d1280[98]), 98);
INTERN(SCM_OBJ(&scm__sc.d1280[99]), 99);
INTERN(SCM_OBJ(&scm__sc.d1280[100]), 100);
INTERN(SCM_OBJ(&scm__sc.d1280[101]), 101);
INTERN(SCM_OBJ(&scm__sc.d1280[102]), 102);
INTERN(SCM_OBJ(&scm__sc.d1280[103]), 103);
INTERN(SCM_OBJ(&scm__sc.d1280[104]), 104);
INTERN(SCM_OBJ(&scm__sc.d1280[105]), 105);
INTERN(SCM_OBJ(&scm__sc.d1280[106]), 106);
INTERN(SCM_OBJ(&scm__sc.d1280[107]), 107);
INTERN(SCM_OBJ(&scm__sc.d1280[108]), 108);
INTERN(SCM_OBJ(&scm__sc.d1280[109]), 109);
INTERN(SCM_OBJ(&scm__sc.d1280[110]), 110);
INTERN(SCM_OBJ(&scm__sc.d1280[111]), 111);
INTERN(SCM_OBJ(&scm__sc.d1280[112]), 112);
INTERN(SCM_OBJ(&scm__sc.d1280[113]), 113);
INTERN(SCM_OBJ(&scm__sc.d1280[114]), 114);
INTERN(SCM_OBJ(&scm__sc.d1280[115]), 115);
INTERN(SCM_OBJ(&scm__sc.d1280[116]), 116);
INTERN(SCM_OBJ(&scm__sc.d1280[117]), 117);
INTERN(SCM_OBJ(&scm__sc.d1280[118]), 118);
INTERN(SCM_OBJ(&scm__sc.d1280[119]), 119);
INTERN(SCM_OBJ(&scm__sc.d1280[120]), 120);
INTERN(SCM_OBJ(&scm__sc.d1280[121]), 121);
INTERN(SCM_OBJ(&scm__sc.d1280[122]), 122);
INTERN(SCM_OBJ(&scm__sc.d1280[123]), 123);
INTERN(SCM_OBJ(&scm__sc.d1280[124]), 124);
INTERN(SCM_OBJ(&scm__sc.d1280[125]), 125);
INTERN(SCM_OBJ(&scm__sc.d1280[126]), 126);
INTERN(SCM_OBJ(&scm__sc.d1280[127]), 127);
INTERN(SCM_OBJ(&scm__sc.d1280[128]), 128);
INTERN(SCM_OBJ(&scm__sc.d1280[129]), 129);
INTERN(SCM_OBJ(&scm__sc.d1280[130]), 130);
INTERN(SCM_OBJ(&scm__sc.d1280[131]), 131);
INTERN(SCM_OBJ(&scm__sc.d1280[132]), 132);
INTERN(SCM_OBJ(&scm__sc.d1280[133]), 133);
INTERN(SCM_OBJ(&scm__sc.d1280[134]), 134);
INTERN(SCM_OBJ(&scm__sc.d1280[135]), 135);
INTERN(SCM_OBJ(&scm__sc.d1280[136]), 136);
INTERN(SCM_OBJ(&scm__sc.d1280[137]), 137);
INTERN(SCM_OBJ(&scm__sc.d1280[138]), 138);
INTERN(SCM_OBJ(&scm__sc.d1280[139]), 139);
INTERN(SCM_OBJ(&scm__sc.d1280[140]), 140);
INTERN(SCM_OBJ(&scm__sc.d1280[141]), 141);
INTERN(SCM_OBJ(&scm__sc.d1280[142]), 142);
INTERN(SCM_OBJ(&scm__sc.d1280[143]), 143);
INTERN(SCM_OBJ(&scm__sc.d1280[144]), 144);
INTERN(SCM_OBJ(&scm__sc.d1280[145]), 145);
INTERN(SCM_OBJ(&scm__sc.d1280[146]), 146);
INTERN(SCM_OBJ(&scm__sc.d1280[147]), 147);
INTERN(SCM_OBJ(&scm__sc.d1280[148]), 148);
INTERN(SCM_OBJ(&scm__sc.d1280[149]), 149);
INTERN(SCM_OBJ(&scm__sc.d1280[150]), 150);
INTERN(SCM_OBJ(&scm__sc.d1280[151]), 151);
INTERN(SCM_OBJ(&scm__sc.d1280[152]), 152);
INTERN(SCM_OBJ(&scm__sc.d1280[153]), 153);
INTERN(SCM_OBJ(&scm__sc.d1280[154]), 154);
INTERN(SCM_OBJ(&scm__sc.d1280[155]), 155);
INTERN(SCM_OBJ(&scm__sc.d1280[156]), 156);
INTERN(SCM_OBJ(&scm__sc.d1280[157]), 157);
INTERN(SCM_OBJ(&scm__sc.d1280[158]), 158);
INTERN(SCM_OBJ(&scm__sc.d1280[159]), 159);
INTERN(SCM_OBJ(&scm__sc.d1280[160]), 160);
#undef INTERN
}
