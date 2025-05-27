/* Generated from autoloads.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY
#include <gauche.h>
#include <gauche/priv/configP.h>
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d1287[226];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d1287 */
      SCM_STRING_CONST_INITIALIZER("gauche/numutil", 14, 14),
      SCM_STRING_CONST_INITIALIZER("nearly=\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("approx=\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("encode-float", 12, 12),
      SCM_STRING_CONST_INITIALIZER("square", 6, 6),
      SCM_STRING_CONST_INITIALIZER("truncate-remainder", 18, 18),
      SCM_STRING_CONST_INITIALIZER("truncate-quotient", 17, 17),
      SCM_STRING_CONST_INITIALIZER("truncate/", 9, 9),
      SCM_STRING_CONST_INITIALIZER("floor-remainder", 15, 15),
      SCM_STRING_CONST_INITIALIZER("floor-quotient", 14, 14),
      SCM_STRING_CONST_INITIALIZER("floor/", 6, 6),
      SCM_STRING_CONST_INITIALIZER("mod0", 4, 4),
      SCM_STRING_CONST_INITIALIZER("div0", 4, 4),
      SCM_STRING_CONST_INITIALIZER("div0-and-mod0", 13, 13),
      SCM_STRING_CONST_INITIALIZER("mod", 3, 3),
      SCM_STRING_CONST_INITIALIZER("div", 3, 3),
      SCM_STRING_CONST_INITIALIZER("div-and-mod", 11, 11),
      SCM_STRING_CONST_INITIALIZER("integer-valued\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("rational-valued\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("real-valued\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("lgamma", 6, 6),
      SCM_STRING_CONST_INITIALIZER("gamma", 5, 5),
      SCM_STRING_CONST_INITIALIZER("expt-mod", 8, 8),
      SCM_STRING_CONST_INITIALIZER("print-exact-decimal-point-number", 32, 32),
      SCM_STRING_CONST_INITIALIZER("real->rational", 14, 14),
      SCM_STRING_CONST_INITIALIZER("continued-fraction", 18, 18),
      SCM_STRING_CONST_INITIALIZER("exact-integer-sqrt", 18, 18),
      SCM_STRING_CONST_INITIALIZER("gauche/redefutil", 16, 16),
      SCM_STRING_CONST_INITIALIZER("change-object-class", 19, 19),
      SCM_STRING_CONST_INITIALIZER("update-direct-subclass!", 23, 23),
      SCM_STRING_CONST_INITIALIZER("class-redefinition", 18, 18),
      SCM_STRING_CONST_INITIALIZER("redefine-class!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("gauche.charconv", 15, 15),
      SCM_STRING_CONST_INITIALIZER("%open-output-file/conv", 22, 22),
      SCM_STRING_CONST_INITIALIZER("%open-input-file/conv", 21, 21),
      SCM_STRING_CONST_INITIALIZER("gauche/sigutil", 14, 14),
      SCM_STRING_CONST_INITIALIZER("with-signal-handlers", 20, 20),
      SCM_STRING_CONST_INITIALIZER("gauche.modutil", 14, 14),
      SCM_STRING_CONST_INITIALIZER("use-version", 11, 11),
      SCM_STRING_CONST_INITIALIZER("export-if-defined", 17, 17),
      SCM_STRING_CONST_INITIALIZER("gauche.portutil", 15, 15),
      SCM_STRING_CONST_INITIALIZER("copy-port", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche/logutil", 14, 14),
      SCM_STRING_CONST_INITIALIZER("copy-bit-field", 14, 14),
      SCM_STRING_CONST_INITIALIZER("bit-field", 9, 9),
      SCM_STRING_CONST_INITIALIZER("copy-bit", 8, 8),
      SCM_STRING_CONST_INITIALIZER("logbit\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("logtest", 7, 7),
      SCM_STRING_CONST_INITIALIZER("gauche.common-macros", 20, 20),
      SCM_STRING_CONST_INITIALIZER("until", 5, 5),
      SCM_STRING_CONST_INITIALIZER("while", 5, 5),
      SCM_STRING_CONST_INITIALIZER("fluid-let", 9, 9),
      SCM_STRING_CONST_INITIALIZER("get-keyword*", 12, 12),
      SCM_STRING_CONST_INITIALIZER("get-optional", 12, 12),
      SCM_STRING_CONST_INITIALIZER("gauche.regexp", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<regexp-invalid-ast>", 20, 20),
      SCM_STRING_CONST_INITIALIZER("rxmatch-positions", 17, 17),
      SCM_STRING_CONST_INITIALIZER("rxmatch-substrings", 18, 18),
      SCM_STRING_CONST_INITIALIZER("regexp-unparse", 14, 14),
      SCM_STRING_CONST_INITIALIZER("gauche.regexp.sre", 17, 17),
      SCM_STRING_CONST_INITIALIZER("regexp->sre", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sre->regexp", 11, 11),
      SCM_STRING_CONST_INITIALIZER("regexp-parse-sre", 16, 16),
      SCM_STRING_CONST_INITIALIZER("gauche.procutil", 15, 15),
      SCM_STRING_CONST_INITIALIZER("port-map", 8, 8),
      SCM_STRING_CONST_INITIALIZER("port-for-each", 13, 13),
      SCM_STRING_CONST_INITIALIZER("port-fold-right", 15, 15),
      SCM_STRING_CONST_INITIALIZER("port-fold", 9, 9),
      SCM_STRING_CONST_INITIALIZER("disasm", 6, 6),
      SCM_STRING_CONST_INITIALIZER("source-location", 15, 15),
      SCM_STRING_CONST_INITIALIZER("source-code", 11, 11),
      SCM_STRING_CONST_INITIALIZER("arity-at-least-value", 20, 20),
      SCM_STRING_CONST_INITIALIZER("arity-at-least\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<arity-at-least>", 16, 16),
      SCM_STRING_CONST_INITIALIZER("procedure-arity-includes\077", 25, 25),
      SCM_STRING_CONST_INITIALIZER("arity", 5, 5),
      SCM_STRING_CONST_INITIALIZER("every-pred", 10, 10),
      SCM_STRING_CONST_INITIALIZER("any-pred", 8, 8),
      SCM_STRING_CONST_INITIALIZER("assoc$", 6, 6),
      SCM_STRING_CONST_INITIALIZER("member$", 7, 7),
      SCM_STRING_CONST_INITIALIZER("delete$", 7, 7),
      SCM_STRING_CONST_INITIALIZER("every$", 6, 6),
      SCM_STRING_CONST_INITIALIZER("any$", 4, 4),
      SCM_STRING_CONST_INITIALIZER("find-tail$", 10, 10),
      SCM_STRING_CONST_INITIALIZER("find$", 5, 5),
      SCM_STRING_CONST_INITIALIZER("remove$", 7, 7),
      SCM_STRING_CONST_INITIALIZER("partition$", 10, 10),
      SCM_STRING_CONST_INITIALIZER("filter$", 7, 7),
      SCM_STRING_CONST_INITIALIZER("reduce-right$", 13, 13),
      SCM_STRING_CONST_INITIALIZER("reduce$", 7, 7),
      SCM_STRING_CONST_INITIALIZER("fold-right$", 11, 11),
      SCM_STRING_CONST_INITIALIZER("fold$", 5, 5),
      SCM_STRING_CONST_INITIALIZER("count$", 6, 6),
      SCM_STRING_CONST_INITIALIZER("apply$", 6, 6),
      SCM_STRING_CONST_INITIALIZER("for-each$", 9, 9),
      SCM_STRING_CONST_INITIALIZER("map$", 4, 4),
      SCM_STRING_CONST_INITIALIZER("pa$", 3, 3),
      SCM_STRING_CONST_INITIALIZER("swap", 4, 4),
      SCM_STRING_CONST_INITIALIZER("flip", 4, 4),
      SCM_STRING_CONST_INITIALIZER("complement", 10, 10),
      SCM_STRING_CONST_INITIALIZER(".$", 2, 2),
      SCM_STRING_CONST_INITIALIZER("compose", 7, 7),
      SCM_STRING_CONST_INITIALIZER("gauche.time", 11, 11),
      SCM_STRING_CONST_INITIALIZER("time", 4, 4),
      SCM_STRING_CONST_INITIALIZER("gauche.vm.debugger", 18, 18),
      SCM_STRING_CONST_INITIALIZER("debug-thread-post", 17, 17),
      SCM_STRING_CONST_INITIALIZER("debug-thread-pre", 16, 16),
      SCM_STRING_CONST_INITIALIZER("debug-funcall-pre", 17, 17),
      SCM_STRING_CONST_INITIALIZER("debug-print-post", 16, 16),
      SCM_STRING_CONST_INITIALIZER("debug-print-pre", 15, 15),
      SCM_STRING_CONST_INITIALIZER("debug-print-width", 17, 17),
      SCM_STRING_CONST_INITIALIZER("debug-thread-log", 16, 16),
      SCM_STRING_CONST_INITIALIZER("debug-funcall-conditionally", 27, 27),
      SCM_STRING_CONST_INITIALIZER("debug-funcall", 13, 13),
      SCM_STRING_CONST_INITIALIZER("debug-print-conditionally", 25, 25),
      SCM_STRING_CONST_INITIALIZER("debug-print", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gauche.vm.profiler", 18, 18),
      SCM_STRING_CONST_INITIALIZER("with-profiler", 13, 13),
      SCM_STRING_CONST_INITIALIZER("profiler-show-load-stats", 24, 24),
      SCM_STRING_CONST_INITIALIZER("profiler-show", 13, 13),
      SCM_STRING_CONST_INITIALIZER("gauche.vm.debug-info", 20, 20),
      SCM_STRING_CONST_INITIALIZER("decode-debug-info", 17, 17),
      SCM_STRING_CONST_INITIALIZER("srfi.7", 6, 6),
      SCM_STRING_CONST_INITIALIZER("program", 7, 7),
      SCM_STRING_CONST_INITIALIZER("srfi.55", 7, 7),
      SCM_STRING_CONST_INITIALIZER("require-extension", 17, 17),
      SCM_STRING_CONST_INITIALIZER("gauche.interpolate", 18, 18),
      SCM_STRING_CONST_INITIALIZER("string-interpolate*", 19, 19),
      SCM_STRING_CONST_INITIALIZER("string-interpolate", 18, 18),
      SCM_STRING_CONST_INITIALIZER("gauche/sysutil", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sys-find-file", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-fdset->list", 15, 15),
      SCM_STRING_CONST_INITIALIZER("list->sys-fdset", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sys-fdset", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-realpath", 12, 12),
      SCM_STRING_CONST_INITIALIZER("gauche.vecutil", 14, 14),
      SCM_STRING_CONST_INITIALIZER("reverse-list->vector", 20, 20),
      SCM_STRING_CONST_INITIALIZER("vector-for-each-with-index", 26, 26),
      SCM_STRING_CONST_INITIALIZER("vector-map-with-index!", 22, 22),
      SCM_STRING_CONST_INITIALIZER("vector-map-with-index", 21, 21),
      SCM_STRING_CONST_INITIALIZER("vector-for-each", 15, 15),
      SCM_STRING_CONST_INITIALIZER("vector-map!", 11, 11),
      SCM_STRING_CONST_INITIALIZER("vector-map", 10, 10),
      SCM_STRING_CONST_INITIALIZER("vector-tabulate", 15, 15),
      SCM_STRING_CONST_INITIALIZER("gauche.computil", 15, 15),
      SCM_STRING_CONST_INITIALIZER("comparator-if<=>", 16, 16),
      SCM_STRING_CONST_INITIALIZER("make-vector-comparator", 22, 22),
      SCM_STRING_CONST_INITIALIZER("make-list-comparator", 20, 20),
      SCM_STRING_CONST_INITIALIZER("make-pair-comparator", 20, 20),
      SCM_STRING_CONST_INITIALIZER("make-tuple-comparator", 21, 21),
      SCM_STRING_CONST_INITIALIZER("make-key-comparator", 19, 19),
      SCM_STRING_CONST_INITIALIZER("make-reverse-comparator", 23, 23),
      SCM_STRING_CONST_INITIALIZER("make-eqv-comparator", 19, 19),
      SCM_STRING_CONST_INITIALIZER("make-eq-comparator", 18, 18),
      SCM_STRING_CONST_INITIALIZER("uvector-comparator", 18, 18),
      SCM_STRING_CONST_INITIALIZER("bytevector-comparator", 21, 21),
      SCM_STRING_CONST_INITIALIZER("vector-comparator", 17, 17),
      SCM_STRING_CONST_INITIALIZER("list-comparator", 15, 15),
      SCM_STRING_CONST_INITIALIZER("pair-comparator", 15, 15),
      SCM_STRING_CONST_INITIALIZER("number-comparator", 17, 17),
      SCM_STRING_CONST_INITIALIZER("complex-comparator", 18, 18),
      SCM_STRING_CONST_INITIALIZER("real-comparator", 15, 15),
      SCM_STRING_CONST_INITIALIZER("rational-comparator", 19, 19),
      SCM_STRING_CONST_INITIALIZER("integer-comparator", 18, 18),
      SCM_STRING_CONST_INITIALIZER("exact-integer-comparator", 24, 24),
      SCM_STRING_CONST_INITIALIZER("symbol-comparator", 17, 17),
      SCM_STRING_CONST_INITIALIZER("string-ci-comparator", 20, 20),
      SCM_STRING_CONST_INITIALIZER("char-ci-comparator", 18, 18),
      SCM_STRING_CONST_INITIALIZER("char-comparator", 15, 15),
      SCM_STRING_CONST_INITIALIZER("boolean-comparator", 18, 18),
      SCM_STRING_CONST_INITIALIZER("gauche.fileutil", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sys-tm->alist", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-stat->type", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sys-stat->ctime", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sys-stat->mtime", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sys-stat->atime", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sys-stat->gid", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-stat->uid", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-stat->size", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sys-stat->nlink", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sys-stat->rdev", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sys-stat->dev", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-stat->ino", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-stat->mode", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sys-stat->file-type", 19, 19),
      SCM_STRING_CONST_INITIALIZER("gauche.fmtutil", 14, 14),
      SCM_STRING_CONST_INITIALIZER("format-numeral-R", 16, 16),
      SCM_STRING_CONST_INITIALIZER("gauche.hashutil", 15, 15),
      SCM_STRING_CONST_INITIALIZER("string-ci-hash", 14, 14),
      SCM_STRING_CONST_INITIALIZER("gauche.treeutil", 15, 15),
      SCM_STRING_CONST_INITIALIZER("tree-map-compare-as-sequences", 29, 29),
      SCM_STRING_CONST_INITIALIZER("tree-map-compare-as-sets", 24, 24),
      SCM_STRING_CONST_INITIALIZER("tree-map->generator/key-range", 29, 29),
      SCM_STRING_CONST_INITIALIZER("alist->tree-map", 15, 15),
      SCM_STRING_CONST_INITIALIZER("tree-map->alist", 15, 15),
      SCM_STRING_CONST_INITIALIZER("tree-map-values", 15, 15),
      SCM_STRING_CONST_INITIALIZER("tree-map-keys", 13, 13),
      SCM_STRING_CONST_INITIALIZER("tree-map-for-each", 17, 17),
      SCM_STRING_CONST_INITIALIZER("tree-map-map", 12, 12),
      SCM_STRING_CONST_INITIALIZER("tree-map-fold-right", 19, 19),
      SCM_STRING_CONST_INITIALIZER("tree-map-fold", 13, 13),
      SCM_STRING_CONST_INITIALIZER("tree-map-seek", 13, 13),
      SCM_STRING_CONST_INITIALIZER("tree-map-pop-max!", 17, 17),
      SCM_STRING_CONST_INITIALIZER("tree-map-pop-min!", 17, 17),
      SCM_STRING_CONST_INITIALIZER("tree-map-max", 12, 12),
      SCM_STRING_CONST_INITIALIZER("tree-map-min", 12, 12),
      SCM_STRING_CONST_INITIALIZER("tree-map-empty\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("make-tree-map", 13, 13),
      SCM_STRING_CONST_INITIALIZER("gauche.libutil", 14, 14),
      SCM_STRING_CONST_INITIALIZER("library-name->module-name", 25, 25),
      SCM_STRING_CONST_INITIALIZER("library-has-module\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("library-exists\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("library-for-each", 16, 16),
      SCM_STRING_CONST_INITIALIZER("library-map", 11, 11),
      SCM_STRING_CONST_INITIALIZER("library-fold", 12, 12),
      SCM_STRING_CONST_INITIALIZER("gauche.generic-sortutil", 23, 23),
      SCM_STRING_CONST_INITIALIZER("%generic-sort!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("%generic-sort", 13, 13),
      SCM_STRING_CONST_INITIALIZER("%generic-sorted\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("gauche.pputil", 13, 13),
      SCM_STRING_CONST_INITIALIZER("pprint", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%pretty-print", 13, 13),
      SCM_STRING_CONST_INITIALIZER("gauche.version-alist", 20, 20),
      SCM_STRING_CONST_INITIALIZER("version-alist", 13, 13),
      SCM_STRING_CONST_INITIALIZER("r7rs-setup", 10, 10),
      SCM_STRING_CONST_INITIALIZER("define-library", 14, 14),
  },
};
static struct scm__rcRec {
  ScmObj d1288[25];
} scm__rc SCM_UNUSED = {
  {   /* ScmObj d1288 */
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
void Scm__InitAutoloads(void)
{
  ScmModule *gauche = Scm_GaucheModule();
  ScmSymbol *sym, *import_from;
  ScmObj al, path;
  path = SCM_OBJ(&scm__sc.d1287[0]);
  import_from = NULL;
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[1])))); /* nearly=? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[2])))); /* approx=? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[3])))); /* encode-float */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[4])))); /* square */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[5])))); /* truncate-remainder */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[6])))); /* truncate-quotient */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[7])))); /* truncate/ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[8])))); /* floor-remainder */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[9])))); /* floor-quotient */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[10])))); /* floor/ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[11])))); /* mod0 */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[12])))); /* div0 */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[13])))); /* div0-and-mod0 */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[14])))); /* mod */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[15])))); /* div */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[16])))); /* div-and-mod */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[17])))); /* integer-valued? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[18])))); /* rational-valued? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[19])))); /* real-valued? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[20])))); /* lgamma */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[21])))); /* gamma */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[22])))); /* expt-mod */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[23])))); /* print-exact-decimal-point-number */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[24])))); /* real->rational */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[25])))); /* continued-fraction */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[26])))); /* exact-integer-sqrt */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  path = SCM_OBJ(&scm__sc.d1287[27]);
  import_from = NULL;
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[28])))); /* change-object-class */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[29])))); /* update-direct-subclass! */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[30])))); /* class-redefinition */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[31])))); /* redefine-class! */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[32])),TRUE); /* gauche.charconv */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[0]));
  import_from = SCM_SYMBOL(scm__rc.d1288[0]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[33])))); /* %open-output-file/conv */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[34])))); /* %open-input-file/conv */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  path = SCM_OBJ(&scm__sc.d1287[35]);
  import_from = NULL;
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[36])))); /* with-signal-handlers */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  scm__rc.d1288[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[37])),TRUE); /* gauche.modutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[1]));
  import_from = SCM_SYMBOL(scm__rc.d1288[1]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[38])))); /* use-version */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[39])))); /* export-if-defined */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  scm__rc.d1288[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[40])),TRUE); /* gauche.portutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[2]));
  import_from = SCM_SYMBOL(scm__rc.d1288[2]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[41])))); /* copy-port */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  path = SCM_OBJ(&scm__sc.d1287[42]);
  import_from = NULL;
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[43])))); /* copy-bit-field */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[44])))); /* bit-field */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[45])))); /* copy-bit */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[46])))); /* logbit? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[47])))); /* logtest */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[48])),TRUE); /* gauche.common-macros */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[3]));
  import_from = SCM_SYMBOL(scm__rc.d1288[3]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[49])))); /* until */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[50])))); /* while */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[51])))); /* fluid-let */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[52])))); /* get-keyword* */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[53])))); /* get-optional */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  scm__rc.d1288[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[54])),TRUE); /* gauche.regexp */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[4]));
  import_from = SCM_SYMBOL(scm__rc.d1288[4]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[55])))); /* <regexp-invalid-ast> */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[56])))); /* rxmatch-positions */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[57])))); /* rxmatch-substrings */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[58])))); /* regexp-unparse */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[59])),TRUE); /* gauche.regexp.sre */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[5]));
  import_from = SCM_SYMBOL(scm__rc.d1288[5]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[60])))); /* regexp->sre */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[61])))); /* sre->regexp */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[62])))); /* regexp-parse-sre */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[63])),TRUE); /* gauche.procutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[6]));
  import_from = SCM_SYMBOL(scm__rc.d1288[6]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[64])))); /* port-map */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[65])))); /* port-for-each */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[66])))); /* port-fold-right */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[67])))); /* port-fold */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[68])))); /* disasm */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[69])))); /* source-location */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[70])))); /* source-code */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[71])))); /* arity-at-least-value */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[72])))); /* arity-at-least? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[73])))); /* <arity-at-least> */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[74])))); /* procedure-arity-includes? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[75])))); /* arity */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[76])))); /* every-pred */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[77])))); /* any-pred */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[78])))); /* assoc$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[79])))); /* member$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[80])))); /* delete$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[81])))); /* every$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[82])))); /* any$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[83])))); /* find-tail$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[84])))); /* find$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[85])))); /* remove$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[86])))); /* partition$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[87])))); /* filter$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[88])))); /* reduce-right$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[89])))); /* reduce$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[90])))); /* fold-right$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[91])))); /* fold$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[92])))); /* count$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[93])))); /* apply$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[94])))); /* for-each$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[95])))); /* map$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[96])))); /* pa$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[97])))); /* swap */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[98])))); /* flip */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[99])))); /* complement */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[100])))); /* .$ */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[101])))); /* compose */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[102])),TRUE); /* gauche.time */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[7]));
  import_from = SCM_SYMBOL(scm__rc.d1288[7]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[103])))); /* time */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  scm__rc.d1288[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[104])),TRUE); /* gauche.vm.debugger */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[8]));
  import_from = SCM_SYMBOL(scm__rc.d1288[8]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[105])))); /* debug-thread-post */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[106])))); /* debug-thread-pre */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[107])))); /* debug-funcall-pre */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[108])))); /* debug-print-post */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[109])))); /* debug-print-pre */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[110])))); /* debug-print-width */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[111])))); /* debug-thread-log */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[112])))); /* debug-funcall-conditionally */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[113])))); /* debug-funcall */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[114])))); /* debug-print-conditionally */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[115])))); /* debug-print */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  scm__rc.d1288[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[116])),TRUE); /* gauche.vm.profiler */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[9]));
  import_from = SCM_SYMBOL(scm__rc.d1288[9]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[117])))); /* with-profiler */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[118])))); /* profiler-show-load-stats */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[119])))); /* profiler-show */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[120])),TRUE); /* gauche.vm.debug-info */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[10]));
  import_from = SCM_SYMBOL(scm__rc.d1288[10]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[121])))); /* decode-debug-info */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[11] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[122])),TRUE); /* srfi.7 */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[11]));
  import_from = SCM_SYMBOL(scm__rc.d1288[11]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[123])))); /* program */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  scm__rc.d1288[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[124])),TRUE); /* srfi.55 */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[12]));
  import_from = SCM_SYMBOL(scm__rc.d1288[12]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[125])))); /* require-extension */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  scm__rc.d1288[13] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[126])),TRUE); /* gauche.interpolate */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[13]));
  import_from = SCM_SYMBOL(scm__rc.d1288[13]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[127])))); /* string-interpolate* */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[128])))); /* string-interpolate */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  path = SCM_OBJ(&scm__sc.d1287[129]);
  import_from = NULL;
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[130])))); /* sys-find-file */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[131])))); /* sys-fdset->list */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[132])))); /* list->sys-fdset */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[133])))); /* sys-fdset */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[134])))); /* sys-realpath */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[14] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[135])),TRUE); /* gauche.vecutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[14]));
  import_from = SCM_SYMBOL(scm__rc.d1288[14]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[136])))); /* reverse-list->vector */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[137])))); /* vector-for-each-with-index */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[138])))); /* vector-map-with-index! */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[139])))); /* vector-map-with-index */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[140])))); /* vector-for-each */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[141])))); /* vector-map! */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[142])))); /* vector-map */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[143])))); /* vector-tabulate */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[144])),TRUE); /* gauche.computil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[15]));
  import_from = SCM_SYMBOL(scm__rc.d1288[15]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[145])))); /* comparator-if<=> */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[146])))); /* make-vector-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[147])))); /* make-list-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[148])))); /* make-pair-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[149])))); /* make-tuple-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[150])))); /* make-key-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[151])))); /* make-reverse-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[152])))); /* make-eqv-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[153])))); /* make-eq-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[154])))); /* uvector-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[155])))); /* bytevector-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[156])))); /* vector-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[157])))); /* list-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[158])))); /* pair-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[159])))); /* number-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[160])))); /* complex-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[161])))); /* real-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[162])))); /* rational-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[163])))); /* integer-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[164])))); /* exact-integer-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[165])))); /* symbol-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[166])))); /* string-ci-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[167])))); /* char-ci-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[168])))); /* char-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[169])))); /* boolean-comparator */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[170])),TRUE); /* gauche.fileutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[16]));
  import_from = SCM_SYMBOL(scm__rc.d1288[16]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[171])))); /* sys-tm->alist */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[172])))); /* sys-stat->type */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[173])))); /* sys-stat->ctime */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[174])))); /* sys-stat->mtime */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[175])))); /* sys-stat->atime */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[176])))); /* sys-stat->gid */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[177])))); /* sys-stat->uid */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[178])))); /* sys-stat->size */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[179])))); /* sys-stat->nlink */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[180])))); /* sys-stat->rdev */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[181])))); /* sys-stat->dev */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[182])))); /* sys-stat->ino */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[183])))); /* sys-stat->mode */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[184])))); /* sys-stat->file-type */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[185])),TRUE); /* gauche.fmtutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[17]));
  import_from = SCM_SYMBOL(scm__rc.d1288[17]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[186])))); /* format-numeral-R */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[187])),TRUE); /* gauche.hashutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[18]));
  import_from = SCM_SYMBOL(scm__rc.d1288[18]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[188])))); /* string-ci-hash */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[189])),TRUE); /* gauche.treeutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[19]));
  import_from = SCM_SYMBOL(scm__rc.d1288[19]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[190])))); /* tree-map-compare-as-sequences */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[191])))); /* tree-map-compare-as-sets */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[192])))); /* tree-map->generator/key-range */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[193])))); /* alist->tree-map */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[194])))); /* tree-map->alist */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[195])))); /* tree-map-values */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[196])))); /* tree-map-keys */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[197])))); /* tree-map-for-each */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[198])))); /* tree-map-map */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[199])))); /* tree-map-fold-right */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[200])))); /* tree-map-fold */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[201])))); /* tree-map-seek */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[202])))); /* tree-map-pop-max! */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[203])))); /* tree-map-pop-min! */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[204])))); /* tree-map-max */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[205])))); /* tree-map-min */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[206])))); /* tree-map-empty? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[207])))); /* make-tree-map */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[208])),TRUE); /* gauche.libutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[20]));
  import_from = SCM_SYMBOL(scm__rc.d1288[20]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[209])))); /* library-name->module-name */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[210])))); /* library-has-module? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[211])))); /* library-exists? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[212])))); /* library-for-each */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[213])))); /* library-map */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[214])))); /* library-fold */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[215])),TRUE); /* gauche.generic-sortutil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[21]));
  import_from = SCM_SYMBOL(scm__rc.d1288[21]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[216])))); /* %generic-sort! */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[217])))); /* %generic-sort */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[218])))); /* %generic-sorted? */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[219])),TRUE); /* gauche.pputil */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[22]));
  import_from = SCM_SYMBOL(scm__rc.d1288[22]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[220])))); /* pprint */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[221])))); /* %pretty-print */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[23] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[222])),TRUE); /* gauche.version-alist */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[23]));
  import_from = SCM_SYMBOL(scm__rc.d1288[23]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[223])))); /* version-alist */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, al);
  scm__rc.d1288[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d1287[224])),TRUE); /* r7rs-setup */
  path = Scm_ModuleNameToPath(SCM_SYMBOL(scm__rc.d1288[24]));
  import_from = SCM_SYMBOL(scm__rc.d1288[24]);
  sym = SCM_SYMBOL(Scm_Intern(SCM_STRING(SCM_OBJ(&scm__sc.d1287[225])))); /* define-library */
  al = Scm_MakeAutoload(SCM_CURRENT_MODULE(), sym, SCM_STRING(path), import_from);
  Scm_Define(gauche, sym, Scm_MakeMacroAutoload(sym, SCM_AUTOLOAD(al)));
}
