/* Generated automatically from libchar.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
#include "gauche/char_attr.h"
#include "gauche/priv/charP.h"
#include <ctype.h>
static ScmObj libcharcharP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharcharP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharcharP, SCM_MAKE_INT(SCM_VM_CHARP), NULL);

static ScmObj libcharchar_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_3dP, NULL, NULL);

static ScmObj libcharchar_LTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_LTP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_LTP, NULL, NULL);

static ScmObj libcharchar_GTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_GTP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_GTP, NULL, NULL);

static ScmObj libcharchar_LT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_LT_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_LT_3dP, NULL, NULL);

static ScmObj libcharchar_GT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_GT_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_GT_3dP, NULL, NULL);

static ScmObj libcharchar_ci_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_ci_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_ci_3dP, NULL, NULL);

static ScmObj libcharchar_ci_LTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_ci_LTP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_ci_LTP, NULL, NULL);

static ScmObj libcharchar_ci_GTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_ci_GTP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_ci_GTP, NULL, NULL);

static ScmObj libcharchar_ci_LT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_ci_LT_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_ci_LT_3dP, NULL, NULL);

static ScmObj libcharchar_ci_GT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_ci_GT_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_ci_GT_3dP, NULL, NULL);

static ScmObj libcharchar_alphabeticP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_alphabeticP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_alphabeticP, NULL, NULL);

static ScmObj libcharchar_numericP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_numericP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_numericP, NULL, NULL);

static ScmObj libcharchar_whitespaceP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_whitespaceP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_whitespaceP, NULL, NULL);

static ScmObj libcharchar_upper_caseP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_upper_caseP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_upper_caseP, NULL, NULL);

static ScmObj libcharchar_lower_caseP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_lower_caseP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_lower_caseP, NULL, NULL);

static ScmObj libcharchar_TOinteger(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_TOinteger__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_TOinteger, NULL, NULL);

static ScmObj libcharinteger_TOchar(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharinteger_TOchar__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharinteger_TOchar, NULL, NULL);

static ScmObj libcharchar_upcase(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_upcase__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_upcase, NULL, NULL);

static ScmObj libcharchar_downcase(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_downcase__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_downcase, NULL, NULL);

static ScmObj libchardigit_TOinteger(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchardigit_TOinteger__STUB, 1, 3,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchardigit_TOinteger, NULL, NULL);

static ScmObj libcharinteger_TOdigit(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharinteger_TOdigit__STUB, 1, 4,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharinteger_TOdigit, NULL, NULL);

static ScmObj libcharucs_TOchar(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharucs_TOchar__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharucs_TOchar, NULL, NULL);

static ScmObj libcharchar_TOucs(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_TOucs__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_TOucs, NULL, NULL);

static ScmObj libchargauche_character_encoding(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchargauche_character_encoding__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchargauche_character_encoding, NULL, NULL);

static ScmObj libcharsupported_character_encodings(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharsupported_character_encodings__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharsupported_character_encodings, NULL, NULL);

static ScmObj libcharsupported_character_encodingP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharsupported_character_encodingP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharsupported_character_encodingP, NULL, NULL);

static ScmObj libcharchar_title_caseP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_title_caseP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_title_caseP, NULL, NULL);

static ScmObj libcharchar_titlecase(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_titlecase__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_titlecase, NULL, NULL);

static ScmObj libcharchar_foldcase(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_foldcase__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_foldcase, NULL, NULL);

static ScmObj libcharchar_general_category(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_general_category__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_general_category, NULL, NULL);

static void char_set_add(ScmCharSet* cs,ScmObj chars);
static ScmObj libcharchar_setP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_setP__STUB, 1, 0,1, SCM_FALSE,0, libcharchar_setP, NULL, NULL);

static ScmObj libcharchar_set(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_set__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_set, NULL, NULL);

static ScmObj libcharchar_set_copy(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_set_copy__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_set_copy, NULL, NULL);

static ScmObj libcharchar_set_freeze(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_set_freeze__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_set_freeze, NULL, NULL);

static ScmObj libcharchar_set_freezeX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_set_freezeX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_set_freezeX, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 132u, 6u, 4u, 128u, 8u, 224u, 225u, 129u, 210u, 0u, 16u, 8u,
106u, 128u, 136u, 104u, 128u, 140u, 6u, 73u, 28u, 24u, 48u, 38u, 11u,
100u, 112u, 80u, 192u, 152u, 45u, 145u, 193u, 3u, 2u, 97u, 0u, 71u,
2u, 12u, 9u, 131u, 65u, 28u, 0u, 48u, 36u, 0u, 67u, 16u, 96u, 99u,
16u, 17u, 16u, 36u, 0u, 19u, 5u, 178u, 73u, 0u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 135u, 6u, 4u, 128u, 8u, 225u, 129u, 130u, 5u, 14u, 66u, 2u,
34u, 4u, 128u, 4u, 2u, 26u, 160u, 34u, 26u, 32u, 35u, 1u, 146u, 64u,
127u, 129u, 160u, 115u, 4u, 18u, 71u, 10u, 12u, 9u, 134u, 169u, 28u,
36u, 48u, 36u, 16u, 71u, 7u, 12u, 9u, 134u, 169u, 28u, 20u, 48u, 49u,
132u, 193u, 120u, 38u, 13u, 196u, 142u, 6u, 24u, 19u, 4u, 98u, 56u,
16u, 96u, 72u, 0u, 142u, 2u, 24u, 25u, 0u, 128u, 56u, 1u, 33u, 48u,
70u, 128u, 9u, 12u, 65u, 129u, 140u, 65u, 4u, 65u, 48u, 7u, 0u, 9u,
130u, 49u, 36u, 128u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 5u, 65u, 4u, 65u, 48u, 7u, 0u, 16u, 40u,
114u, 16u, 17u, 16u, 36u, 0u, 32u, 16u, 213u, 1u, 16u, 209u, 1u, 24u,
12u, 146u, 3u, 252u, 13u, 3u, 152u, 32u, 146u, 72u, 225u, 33u, 129u,
140u, 38u, 6u, 41u, 129u, 241u, 28u, 28u, 48u, 38u, 3u, 132u, 112u,
32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libcharread_char_set(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharread_char_set__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharread_char_set, NULL, NULL);

static ScmObj libcharchar_set_containsP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_set_containsP__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_set_containsP, NULL, NULL);

static ScmObj libcharchar_set_complementX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_set_complementX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_set_complementX, NULL, NULL);

static unsigned char uvector__00004[] = {
 0u, 3u, 130u, 134u, 8u, 44u, 65u, 144u, 65u, 36u, 112u, 48u, 192u,
152u, 20u, 145u, 192u, 131u, 2u, 65u, 4u, 112u, 0u, 192u, 152u, 20u,
144u, 196u, 24u, 24u, 196u, 16u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 6u, 193u, 4u, 65u, 98u, 12u, 130u, 9u,
36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u, 192u, 248u, 142u, 14u, 24u,
19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u,
36u,};
static ScmObj libcharchar_set_immutableP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcharchar_set_immutableP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcharchar_set_immutableP, NULL, NULL);

static unsigned char uvector__00006[] = {
 0u, 3u, 133u, 134u, 8u, 56u, 65u, 225u, 210u, 16u, 13u, 16u, 17u,
13u, 80u, 17u, 38u, 17u, 36u, 112u, 160u, 192u, 144u, 137u, 28u, 28u,
48u, 38u, 5u, 36u, 112u, 96u, 192u, 152u, 27u, 17u, 193u, 67u, 2u,
96u, 198u, 71u, 3u, 12u, 9u, 129u, 177u, 28u, 8u, 48u, 38u, 9u, 100u,
112u, 0u, 192u, 152u, 20u, 144u, 196u, 24u, 24u, 196u, 5u, 8u, 16u,
152u, 14u, 18u, 64u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 147u, 134u, 8u, 72u, 57u, 8u, 10u, 16u, 34u, 14u, 16u, 120u,
116u, 132u, 3u, 68u, 4u, 67u, 84u, 4u, 73u, 132u, 73u, 224u, 0u, 63u,
192u, 208u, 57u, 130u, 9u, 35u, 146u, 134u, 4u, 195u, 56u, 142u, 72u,
24u, 18u, 8u, 35u, 145u, 6u, 4u, 195u, 56u, 142u, 60u, 24u, 24u, 194u,
96u, 104u, 19u, 4u, 226u, 71u, 28u, 12u, 12u, 240u, 152u, 97u, 12u,
98u, 8u, 133u, 4u, 35u, 227u, 255u, 255u, 255u, 223u, 36u, 38u, 3u,
132u, 146u, 56u, 176u, 96u, 76u, 124u, 200u, 226u, 65u, 129u, 174u,
21u, 36u, 113u, 16u, 192u, 144u, 169u, 28u, 64u, 48u, 50u, 1u, 8u,
134u, 80u, 215u, 11u, 31u, 31u, 255u, 255u, 254u, 248u, 104u, 133u,
137u, 34u, 21u, 12u, 161u, 174u, 22u, 33u, 133u, 72u, 106u, 133u,
137u, 36u, 55u, 132u, 203u, 88u, 38u, 62u, 100u, 50u, 42u, 100u, 220u,
72u, 225u, 225u, 129u, 51u, 248u, 35u, 133u, 6u, 4u, 207u, 56u, 142u,
18u, 24u, 18u, 23u, 35u, 131u, 134u, 4u, 206u, 96u, 142u, 2u, 24u,
19u, 53u, 114u, 56u, 0u, 96u, 72u, 92u, 134u, 32u, 192u, 153u, 9u,
146u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 12u, 65u, 16u, 160u, 132u, 124u, 127u,
255u, 255u, 251u, 228u, 136u, 72u, 57u, 8u, 10u, 16u, 34u, 14u, 16u,
120u, 116u, 132u, 3u, 68u, 4u, 67u, 84u, 4u, 73u, 132u, 73u, 224u, 0u,
63u, 192u, 208u, 57u, 130u, 9u, 36u, 112u, 144u, 192u, 198u, 19u, 3u,
20u, 194u, 4u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u,
8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static ScmObj libchar_25char_set_equalP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchar_25char_set_equalP__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchar_25char_set_equalP, NULL, NULL);

static ScmObj libchar_25char_set_LT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchar_25char_set_LT_3dP__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchar_25char_set_LT_3dP, NULL, NULL);

static ScmObj libchar_25char_set_add_charsX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchar_25char_set_add_charsX__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchar_25char_set_add_charsX, NULL, NULL);

static ScmObj libchar_25char_set_add_rangeX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libchar_25char_set_add_rangeX__STUB, 3, 0,SCM_FALSE,libchar_25char_set_add_rangeX, NULL, NULL);

static ScmObj libchar_25char_set_addX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchar_25char_set_addX__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchar_25char_set_addX, NULL, NULL);

static ScmObj libchar_25char_set_ranges(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchar_25char_set_ranges__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchar_25char_set_ranges, NULL, NULL);

static ScmObj libchar_25char_set_predefined(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchar_25char_set_predefined__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchar_25char_set_predefined, NULL, NULL);

static ScmObj libchar_25char_set_case_foldX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchar_25char_set_case_foldX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchar_25char_set_case_foldX, NULL, NULL);

static ScmObj libchar_25char_set_dump(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libchar_25char_set_dump__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libchar_25char_set_dump, NULL, NULL);

static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[151];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("char\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libchar.scm", 11, 11),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("char=\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("c1", 2, 2),
      SCM_STRING_CONST_INITIALIZER("c2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("chars", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<char>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("char<\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("char>\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("char<=\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("char>=\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("char-ci=\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("char-ci<\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("char-ci>\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("char-ci<=\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("char-ci>=\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("char-alphabetic\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("c", 1, 1),
      SCM_STRING_CONST_INITIALIZER("char-numeric\077", 13, 13),
      SCM_STRING_CONST_INITIALIZER("char-whitespace\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("char-upper-case\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("char-lower-case\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("char->integer", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<long>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("integer->char", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("char-upcase", 11, 11),
      SCM_STRING_CONST_INITIALIZER("char-downcase", 13, 13),
      SCM_STRING_CONST_INITIALIZER("digit->integer", 14, 14),
      SCM_STRING_CONST_INITIALIZER("ch", 2, 2),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("radix", 5, 5),
      SCM_STRING_CONST_INITIALIZER("extended-range\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("integer->digit", 14, 14),
      SCM_STRING_CONST_INITIALIZER("n", 1, 1),
      SCM_STRING_CONST_INITIALIZER("basechar1", 9, 9),
      SCM_STRING_CONST_INITIALIZER("basechar2", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("ucs->char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("char->ucs", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche-character-encoding", 25, 25),
      SCM_STRING_CONST_INITIALIZER("supported-character-encodings", 29, 29),
      SCM_STRING_CONST_INITIALIZER("supported-character-encoding\077", 29, 29),
      SCM_STRING_CONST_INITIALIZER("encoding", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("char-title-case\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("char-titlecase", 14, 14),
      SCM_STRING_CONST_INITIALIZER("char-foldcase", 13, 13),
      SCM_STRING_CONST_INITIALIZER("char-general-category", 21, 21),
      SCM_STRING_CONST_INITIALIZER("Lu", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Ll", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Lt", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Lm", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Lo", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Mn", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Mc", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Me", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Nd", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Nl", 2, 2),
      SCM_STRING_CONST_INITIALIZER("No", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Pc", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Pd", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Ps", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Pe", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Pi", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Pf", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Po", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Sm", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Sc", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Sk", 2, 2),
      SCM_STRING_CONST_INITIALIZER("So", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Zs", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Zl", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Zp", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Cc", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Cf", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Cs", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Co", 2, 2),
      SCM_STRING_CONST_INITIALIZER("Cn", 2, 2),
      SCM_STRING_CONST_INITIALIZER("*char-code-max*", 15, 15),
      SCM_STRING_CONST_INITIALIZER("char-set\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("char-set", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<char-set>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("char-set-copy", 13, 13),
      SCM_STRING_CONST_INITIALIZER("cs", 2, 2),
      SCM_STRING_CONST_INITIALIZER("char-set-freeze", 15, 15),
      SCM_STRING_CONST_INITIALIZER("char-set-freeze!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("char-set-size", 13, 13),
      SCM_STRING_CONST_INITIALIZER("range", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%char-set-ranges", 16, 16),
      SCM_STRING_CONST_INITIALIZER("for-each", 8, 8),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("posix-bracket", 13, 13),
      SCM_STRING_CONST_INITIALIZER("read-char-set", 13, 13),
      SCM_STRING_CONST_INITIALIZER("port", 4, 4),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<input-port>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("char-set-contains\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("char-set-complement!", 20, 20),
      SCM_STRING_CONST_INITIALIZER("char-set-complement", 19, 19),
      SCM_STRING_CONST_INITIALIZER("char-set-immutable\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("char-set-hash", 13, 13),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("bound", 5, 5),
      SCM_STRING_CONST_INITIALIZER("fold", 4, 4),
      SCM_STRING_CONST_INITIALIZER("^", 1, 1),
      SCM_STRING_CONST_INITIALIZER("val", 3, 3),
      SCM_STRING_CONST_INITIALIZER("modulo", 6, 6),
      SCM_STRING_CONST_INITIALIZER("hash", 4, 4),
      SCM_STRING_CONST_INITIALIZER("+", 1, 1),
      SCM_STRING_CONST_INITIALIZER("car", 3, 3),
      SCM_STRING_CONST_INITIALIZER("cdr", 3, 3),
      SCM_STRING_CONST_INITIALIZER("with-module", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("%char-set-equal\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("y", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%char-set<=\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("%char-set-add-chars!", 20, 20),
      SCM_STRING_CONST_INITIALIZER("<list>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%char-set-add-range!", 20, 20),
      SCM_STRING_CONST_INITIALIZER("from", 4, 4),
      SCM_STRING_CONST_INITIALIZER("to", 2, 2),
      SCM_STRING_CONST_INITIALIZER("%char-set-add!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("dst", 3, 3),
      SCM_STRING_CONST_INITIALIZER("src", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%char-set-predefined", 20, 20),
      SCM_STRING_CONST_INITIALIZER("num", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%char-set-case-fold!", 20, 20),
      SCM_STRING_CONST_INITIALIZER("%char-set-dump", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("count", 5, 5),
      SCM_STRING_CONST_INITIALIZER("-", 1, 1),
      SCM_STRING_CONST_INITIALIZER("inc!", 4, 4),
      SCM_STRING_CONST_INITIALIZER("rlet1", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2160", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2161", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2159", 8, 8),
  },
};
static struct scm__rcRec {
  ScmUVector d2158[8];
  ScmCompiledCode d2157[8];
  ScmWord d2156[135];
  ScmPair d2150[477] SCM_ALIGN_PAIR;
  ScmObj d2149[453];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2158 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 64, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 100, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 66, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 37, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 70, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 183, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 74, uvector__00008, 0, NULL),
  },
  {   /* ScmCompiledCode d2157 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2156[0])), 10,
            2, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[306]),
            SCM_OBJ(&scm__rc.d2157[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* char-set-size */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2156[10])), 16,
            22, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[311]),
            SCM_OBJ(&scm__rc.d2157[2]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2156[26])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* char-set-complement */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2156[41])), 8,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[346]),
            SCM_OBJ(&scm__rc.d2157[4]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2156[49])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2156[64])), 14,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[392]),
            SCM_OBJ(&scm__rc.d2157[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* char-set-hash */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2156[78])), 42,
            17, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[397]),
            SCM_OBJ(&scm__rc.d2157[7]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2156[120])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2156 */
    /* (char-set-size #f) */
    0x000010ea    /*   0 (LREF-UNBOX 1 0) */,
    0x0000000d    /*   1 (PUSH) */,
    0x00000076    /*   2 (LREF0-CDR) */,
    0x0000000d    /*   3 (PUSH) */,
    0x0000006a    /*   4 (LREF0-CAR) */,
    0x000000b3    /*   5 (NUMSUB2) */,
    0x000010bc    /*   6 (NUMADDI 1) */,
    0x000000b2    /*   7 (NUMADD2) */,
    0x0000103a    /*   8 (LSET 1 0) */,
    0x00000014    /*   9 (RET) */,
    /* char-set-size */
    0x00000007    /*   0 (CONSTI-PUSH 0) */,
    0x00001017    /*   1 (LOCAL-ENV 1) */,
    0x000010e7    /*   2 (BOX 1) */,
    0x0000200e    /*   3 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[10]) + 14),
    0x00000016    /*   5 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2157[0])) /* #<compiled-code (char-set-size #f)@0x79c99d05b720> */,
    0x0000100f    /*   7 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[10]) + 12),
    0x0000004c    /*   9 (LREF10-PUSH) */,
    0x0000105f    /*  10 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %char-set-ranges */,
    0x00002062    /*  12 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* for-each */,
    0x000000ea    /*  14 (LREF-UNBOX 0 0) */,
    0x00000014    /*  15 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[26]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-size */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[26]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2157[1])) /* #<compiled-code char-set-size@0x79c99d05b780> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-size */,
    0x00000014    /*  14 (RET) */,
    /* char-set-complement */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[41]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-copy */,
    0x00001063    /*   5 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-complement! */,
    0x00000014    /*   7 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[49]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-complement */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[49]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2157[3])) /* #<compiled-code char-set-complement@0x79c99d296480> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-complement */,
    0x00000014    /*  14 (RET) */,
    /* (char-set-hash #f) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[64]) + 9),
    0x0000006b    /*   2 (LREF1-CAR) */,
    0x000000b6    /*   3 (LREF-VAL0-NUMADD2 0 0) */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000077    /*   5 (LREF1-CDR) */,
    0x000000b2    /*   6 (NUMADD2) */,
    0x00001062    /*   7 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash */,
    0x0000000d    /*   9 (PUSH) */,
    0x0000004d    /*  10 (LREF11-PUSH) */,
    0x00002060    /*  11 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* modulo */,
    0x00000014    /*  13 (RET) */,
    /* char-set-hash */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]) + 7),
    0x00000001    /*   3 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* 536870911 */,
    0x00000013    /*   5 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]) + 8),
    0x0000006a    /*   7 (LREF0-CAR) */,
    0x0000000d    /*   8 (PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]) + 15),
    0x00000003    /*  12 (CONSTN) */,
    0x00000013    /*  13 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]) + 16),
    0x00000076    /*  15 (LREF0-CDR) */,
    0x00002018    /*  16 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  17 (LREF0) */,
    0x00000022    /*  18 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]) + 22),
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]) + 30),
    0x0000200e    /*  22 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]) + 30),
    0x00000006    /*  24 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[114])) /* "too many arguments for" */,
    0x00000006    /*  26 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[386])) /* (lambda (cs :optional (bound 536870911)) (fold (^ (range val) (modulo (hash (+ val (car range) (cdr range))) bound)) 0 ((with-module gauche.internal %char-set-ranges) cs))) */,
    0x0000205f    /*  28 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000016    /*  30 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2157[5])) /* #<compiled-code (char-set-hash #f)@0x79c99d1c8600> */,
    0x0000000d    /*  32 (PUSH) */,
    0x00000007    /*  33 (CONSTI-PUSH 0) */,
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]) + 39),
    0x0000004d    /*  36 (LREF11-PUSH) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %char-set-ranges */,
    0x00003063    /*  39 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold */,
    0x00000014    /*  41 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[120]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-hash */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2156[120]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2157[6])) /* #<compiled-code char-set-hash@0x79c99d1c8660> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-hash */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(49U), SCM_NIL},
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
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[12])},
       { SCM_MAKE_INT(66U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_OBJ(&scm__rc.d2150[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[16]), SCM_OBJ(&scm__rc.d2150[20])},
       { SCM_MAKE_INT(68U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[23])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[26])},
       { SCM_OBJ(&scm__rc.d2150[27]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[24]), SCM_OBJ(&scm__rc.d2150[28])},
       { SCM_MAKE_INT(70U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[31])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_OBJ(&scm__rc.d2150[35]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[32]), SCM_OBJ(&scm__rc.d2150[36])},
       { SCM_MAKE_INT(72U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[38])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[41])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[42])},
       { SCM_OBJ(&scm__rc.d2150[43]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[40]), SCM_OBJ(&scm__rc.d2150[44])},
       { SCM_MAKE_INT(74U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[46])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[47])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[49])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[50])},
       { SCM_OBJ(&scm__rc.d2150[51]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[48]), SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_MAKE_INT(95U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[54])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[55])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[57])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_OBJ(&scm__rc.d2150[59]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_MAKE_INT(97U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[62])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[63])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[65])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_OBJ(&scm__rc.d2150[67]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[64]), SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_MAKE_INT(99U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[70])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[71])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[73])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_OBJ(&scm__rc.d2150[75]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[72]), SCM_OBJ(&scm__rc.d2150[76])},
       { SCM_MAKE_INT(101U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[79])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_OBJ(&scm__rc.d2150[83]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[80]), SCM_OBJ(&scm__rc.d2150[84])},
       { SCM_MAKE_INT(103U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[86])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[87])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[89])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_OBJ(&scm__rc.d2150[91]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[88]), SCM_OBJ(&scm__rc.d2150[92])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(106U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[95])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[96])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[99])},
       { SCM_OBJ(&scm__rc.d2150[100]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[97]), SCM_OBJ(&scm__rc.d2150[101])},
       { SCM_MAKE_INT(107U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[103])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[104])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[106])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_OBJ(&scm__rc.d2150[108]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[105]), SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_MAKE_INT(108U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[112])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[114])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[115])},
       { SCM_OBJ(&scm__rc.d2150[116]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[113]), SCM_OBJ(&scm__rc.d2150[117])},
       { SCM_MAKE_INT(111U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[120])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[122])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[123])},
       { SCM_OBJ(&scm__rc.d2150[124]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[121]), SCM_OBJ(&scm__rc.d2150[125])},
       { SCM_MAKE_INT(112U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[128])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[130])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[131])},
       { SCM_OBJ(&scm__rc.d2150[132]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[129]), SCM_OBJ(&scm__rc.d2150[133])},
       { SCM_MAKE_INT(114U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[135])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[136])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[138])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[139])},
       { SCM_OBJ(&scm__rc.d2150[140]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[137]), SCM_OBJ(&scm__rc.d2150[141])},
       { SCM_MAKE_INT(116U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[143])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[144])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[146])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[147])},
       { SCM_OBJ(&scm__rc.d2150[148]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[145]), SCM_OBJ(&scm__rc.d2150[149])},
       { SCM_MAKE_INT(119U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[151])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[152])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[154])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[155])},
       { SCM_OBJ(&scm__rc.d2150[156]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[153]), SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_MAKE_INT(120U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[159])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[160])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[162])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[163])},
       { SCM_OBJ(&scm__rc.d2150[164]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[161]), SCM_OBJ(&scm__rc.d2150[165])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[167])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[168])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_MAKE_INT(123U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[171])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[172])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[174])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[175])},
       { SCM_OBJ(&scm__rc.d2150[176]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[173]), SCM_OBJ(&scm__rc.d2150[177])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[179])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[180])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[181])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[182])},
       { SCM_MAKE_INT(134U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[185])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[187])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[188])},
       { SCM_OBJ(&scm__rc.d2150[189]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[186]), SCM_OBJ(&scm__rc.d2150[190])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(143U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[193])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[194])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[196])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[197])},
       { SCM_OBJ(&scm__rc.d2150[198]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[195]), SCM_OBJ(&scm__rc.d2150[199])},
       { SCM_MAKE_INT(147U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[201])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[202])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[204])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[205])},
       { SCM_OBJ(&scm__rc.d2150[206]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[203]), SCM_OBJ(&scm__rc.d2150[207])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[209])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[210])},
       { SCM_OBJ(&scm__rc.d2150[211]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[213])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[214])},
       { SCM_OBJ(&scm__rc.d2150[215]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(156U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[218])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[219])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[221])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[222])},
       { SCM_OBJ(&scm__rc.d2150[223]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[220]), SCM_OBJ(&scm__rc.d2150[224])},
       { SCM_MAKE_INT(159U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[226])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[227])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[229])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[230])},
       { SCM_OBJ(&scm__rc.d2150[231]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[228]), SCM_OBJ(&scm__rc.d2150[232])},
       { SCM_MAKE_INT(161U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[234])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[235])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[237])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[238])},
       { SCM_OBJ(&scm__rc.d2150[239]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[236]), SCM_OBJ(&scm__rc.d2150[240])},
       { SCM_MAKE_INT(162U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[242])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[243])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[245])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[246])},
       { SCM_OBJ(&scm__rc.d2150[247]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[244]), SCM_OBJ(&scm__rc.d2150[248])},
       { SCM_MAKE_INT(164U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[250])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[251])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[253])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[254])},
       { SCM_OBJ(&scm__rc.d2150[255]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[252]), SCM_OBJ(&scm__rc.d2150[256])},
       { SCM_MAKE_INT(215U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[258])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[259])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[261])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[262])},
       { SCM_OBJ(&scm__rc.d2150[263]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[260]), SCM_OBJ(&scm__rc.d2150[264])},
       { SCM_MAKE_INT(217U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[266])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[267])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[270])},
       { SCM_OBJ(&scm__rc.d2150[271]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[268]), SCM_OBJ(&scm__rc.d2150[272])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(222U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[275])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[276])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[278])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[279])},
       { SCM_OBJ(&scm__rc.d2150[280]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[277]), SCM_OBJ(&scm__rc.d2150[281])},
       { SCM_MAKE_INT(224U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[283])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[284])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[286])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[287])},
       { SCM_OBJ(&scm__rc.d2150[288]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[285]), SCM_OBJ(&scm__rc.d2150[289])},
       { SCM_MAKE_INT(225U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[291])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[292])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[294])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[295])},
       { SCM_OBJ(&scm__rc.d2150[296]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[293]), SCM_OBJ(&scm__rc.d2150[297])},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[299])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(229U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[302])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[303])},
       { SCM_OBJ(&scm__rc.d2150[304]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(227U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[307])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[308])},
       { SCM_OBJ(&scm__rc.d2150[309]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[312])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[313])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[314])},
       { SCM_MAKE_INT(233U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[316])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[317])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[319])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[320])},
       { SCM_OBJ(&scm__rc.d2150[321]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[318]), SCM_OBJ(&scm__rc.d2150[322])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[324])},
       { SCM_MAKE_INT(236U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[326])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[327])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[329])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[330])},
       { SCM_OBJ(&scm__rc.d2150[331]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[328]), SCM_OBJ(&scm__rc.d2150[332])},
       { SCM_MAKE_INT(239U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[335])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[337])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[338])},
       { SCM_OBJ(&scm__rc.d2150[339]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[336]), SCM_OBJ(&scm__rc.d2150[340])},
       { SCM_MAKE_INT(241U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[342])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[343])},
       { SCM_OBJ(&scm__rc.d2150[344]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(243U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[347])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[350])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[351])},
       { SCM_OBJ(&scm__rc.d2150[352]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[349]), SCM_OBJ(&scm__rc.d2150[353])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[355])},
       { SCM_OBJ(&scm__rc.d2150[356]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[357])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[358])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[360])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_OBJ(&scm__rc.d2150[363]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[362]), SCM_OBJ(&scm__rc.d2150[364])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[365])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[366])},
       { SCM_OBJ(&scm__rc.d2150[367]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[368])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[369]), SCM_OBJ(&scm__rc.d2150[370])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[371])},
       { SCM_OBJ(&scm__rc.d2150[372]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[361]), SCM_OBJ(&scm__rc.d2150[373])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[374])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[376])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[377])},
       { SCM_OBJ(&scm__rc.d2150[378]), SCM_OBJ(&scm__rc.d2150[274])},
       { SCM_OBJ(&scm__rc.d2150[379]), SCM_NIL},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2150[380])},
       { SCM_OBJ(&scm__rc.d2150[375]), SCM_OBJ(&scm__rc.d2150[381])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[382])},
       { SCM_OBJ(&scm__rc.d2150[383]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[359]), SCM_OBJ(&scm__rc.d2150[384])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[385])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[299])},
       { SCM_MAKE_INT(247U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[388])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[389])},
       { SCM_OBJ(&scm__rc.d2150[390]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(246U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[393])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[394])},
       { SCM_OBJ(&scm__rc.d2150[395]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[398])},
       { SCM_MAKE_INT(252U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[400])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[401])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[403])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[404])},
       { SCM_OBJ(&scm__rc.d2150[405]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[402]), SCM_OBJ(&scm__rc.d2150[406])},
       { SCM_MAKE_INT(255U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[408])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[409])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[411])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[412])},
       { SCM_OBJ(&scm__rc.d2150[413]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[410]), SCM_OBJ(&scm__rc.d2150[414])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_MAKE_INT(258U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[417])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[418])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[420])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[421])},
       { SCM_OBJ(&scm__rc.d2150[422]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[419]), SCM_OBJ(&scm__rc.d2150[423])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[426])},
       { SCM_MAKE_INT(261U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[428])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[429])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[431])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[432])},
       { SCM_OBJ(&scm__rc.d2150[433]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[430]), SCM_OBJ(&scm__rc.d2150[434])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[436])},
       { SCM_MAKE_INT(275U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[438])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[439])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[441])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[442])},
       { SCM_OBJ(&scm__rc.d2150[443]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[440]), SCM_OBJ(&scm__rc.d2150[444])},
       { SCM_MAKE_INT(276U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[446])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[447])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[377])},
       { SCM_OBJ(&scm__rc.d2150[449]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[448]), SCM_OBJ(&scm__rc.d2150[450])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(277U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[453])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[454])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[456])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[457])},
       { SCM_OBJ(&scm__rc.d2150[458]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[455]), SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_MAKE_INT(279U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[461])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[462])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[464])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[465])},
       { SCM_OBJ(&scm__rc.d2150[466]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[463]), SCM_OBJ(&scm__rc.d2150[467])},
       { SCM_MAKE_INT(281U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[469])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[470])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[472])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[473])},
       { SCM_OBJ(&scm__rc.d2150[474]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[471]), SCM_OBJ(&scm__rc.d2150[475])},
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(6, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(5, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(25, FALSE),
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
    SCM_FALSE,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
  },
};

static ScmObj libcharcharP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_CHARP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 67 "libchar.scm"
while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)==(c2));goto SCM_STUB_RETURN;}break;}else if((c1)==(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(SCM_CHAR_VALUE(SCM_CAR(chars)));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_LTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char<?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 69 "libchar.scm"
while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)<(c2));goto SCM_STUB_RETURN;}break;}else if((c1)<(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(SCM_CHAR_VALUE(SCM_CAR(chars)));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_GTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char>?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 71 "libchar.scm"
while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)>(c2));goto SCM_STUB_RETURN;}break;}else if((c1)>(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(SCM_CHAR_VALUE(SCM_CAR(chars)));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_LT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char<=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 73 "libchar.scm"
while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)<=(c2));goto SCM_STUB_RETURN;}break;}else if((c1)<=(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(SCM_CHAR_VALUE(SCM_CAR(chars)));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_GT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char>=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 75 "libchar.scm"
while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)>=(c2));goto SCM_STUB_RETURN;}break;}else if((c1)>=(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(SCM_CHAR_VALUE(SCM_CAR(chars)));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_ci_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char-ci=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 96 "libchar.scm"
{c1=(Scm_CharFoldcase(c1));c2=(Scm_CharFoldcase(c2));while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)==(c2));goto SCM_STUB_RETURN;}break;}else if((c1)==(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(Scm_CharFoldcase(SCM_CHAR_VALUE(SCM_CAR(chars))));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_ci_LTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char-ci<?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 98 "libchar.scm"
{c1=(Scm_CharFoldcase(c1));c2=(Scm_CharFoldcase(c2));while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)<(c2));goto SCM_STUB_RETURN;}break;}else if((c1)<(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(Scm_CharFoldcase(SCM_CHAR_VALUE(SCM_CAR(chars))));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_ci_GTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char-ci>?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 100 "libchar.scm"
{c1=(Scm_CharFoldcase(c1));c2=(Scm_CharFoldcase(c2));while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)>(c2));goto SCM_STUB_RETURN;}break;}else if((c1)>(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(Scm_CharFoldcase(SCM_CHAR_VALUE(SCM_CAR(chars))));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_ci_LT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char-ci<=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 102 "libchar.scm"
{c1=(Scm_CharFoldcase(c1));c2=(Scm_CharFoldcase(c2));while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)<=(c2));goto SCM_STUB_RETURN;}break;}else if((c1)<=(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(Scm_CharFoldcase(SCM_CHAR_VALUE(SCM_CAR(chars))));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_ci_GT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c1_scm;
  ScmChar c1;
  ScmObj c2_scm;
  ScmChar c2;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("char-ci>=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c1_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c1_scm)) Scm_Error("character required, but got %S", c1_scm);
  c1 = SCM_CHAR_VALUE(c1_scm);
  c2_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(c2_scm)) Scm_Error("character required, but got %S", c2_scm);
  c2 = SCM_CHAR_VALUE(c2_scm);
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
int SCM_RESULT;

#line 104 "libchar.scm"
{c1=(Scm_CharFoldcase(c1));c2=(Scm_CharFoldcase(c2));while(1){if (!(SCM_PAIRP(chars))){{SCM_RESULT=((c1)>=(c2));goto SCM_STUB_RETURN;}break;}else if((c1)>=(c2)){if (!(SCM_CHARP(SCM_CAR(chars)))){{Scm_TypeError("char","character",SCM_CAR(chars));}}c1=(c2);c2=(Scm_CharFoldcase(SCM_CHAR_VALUE(SCM_CAR(chars))));chars=(SCM_CDR(chars));} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_alphabeticP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-alphabetic?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_CharAlphabeticP(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_numericP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-numeric?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_CharNumericP(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_whitespaceP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-whitespace?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
int SCM_RESULT;

#line 109 "libchar.scm"
{SCM_RESULT=(((SCM_CHAR_ASCII_P(c))&&(isspace(c)))||(
SCM_CHAR_EXTRA_WHITESPACE(c)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_upper_caseP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-upper-case?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_CharUppercaseP(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_lower_caseP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-lower-case?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_CharLowercaseP(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_TOinteger(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char->integer");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
long SCM_RESULT;

#line 115 "libchar.scm"
{SCM_RESULT=(((signed long )(c)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libcharinteger_TOchar(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  int c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("integer->char");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(c_scm)) Scm_Error("int required, but got %S", c_scm);
  c = Scm_GetInteger(c_scm);
  {
{
ScmChar SCM_RESULT;

#line 117 "libchar.scm"
{SCM_RESULT=(((ScmChar )(c)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_CHAR(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_upcase(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-upcase");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
ScmChar SCM_RESULT;
{SCM_RESULT=(Scm_CharUpcase(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_CHAR(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_downcase(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-downcase");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
ScmChar SCM_RESULT;
{SCM_RESULT=(Scm_CharDowncase(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_CHAR(SCM_RESULT));
}
  }
}


static ScmObj libchardigit_TOinteger(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ch_scm;
  ScmChar ch;
  ScmObj radix_scm;
  ScmSmallInt radix;
  ScmObj extended_rangeP_scm;
  int extended_rangeP;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("digit->integer");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ch_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(ch_scm)) Scm_Error("character required, but got %S", ch_scm);
  ch = SCM_CHAR_VALUE(ch_scm);
  if (SCM_ARGCNT > 1+1) {
    radix_scm = SCM_SUBRARGS[1];
  } else {
    radix_scm = SCM_MAKE_INT(10U);
  }
  if (!SCM_INTP(radix_scm)) Scm_Error("ScmSmallInt required, but got %S", radix_scm);
  radix = SCM_INT_VALUE(radix_scm);
  if (SCM_ARGCNT > 2+1) {
    extended_rangeP_scm = SCM_SUBRARGS[2];
  } else {
    extended_rangeP_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(extended_rangeP_scm)) Scm_Error("boolean required, but got %S", extended_rangeP_scm);
  extended_rangeP = SCM_BOOL_VALUE(extended_rangeP_scm);
  {
{
ScmObj SCM_RESULT;

#line 125 "libchar.scm"
{int r;
if (((radix)<(SCM_RADIX_MIN))||((radix)>(SCM_RADIX_MAX))){{
Scm_Error("radix must be an integer between %d and %d, but got %d",SCM_RADIX_MIN,SCM_RADIX_MAX,radix);}}
#line 129 "libchar.scm"
if ((extended_rangeP)&&((radix)>(10))){{
Scm_Error("for extended range, radix can't exceed 10",radix);}}
r=(Scm_DigitToInt(ch,radix,extended_rangeP));
{SCM_RESULT=((((r)>=(0))?(SCM_MAKE_INT(r)):(SCM_FALSE)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharinteger_TOdigit(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n_scm;
  ScmSmallInt n;
  ScmObj radix_scm;
  ScmSmallInt radix;
  ScmObj basechar1_scm;
  ScmChar basechar1;
  ScmObj basechar2_scm;
  ScmChar basechar2;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("integer->digit");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(n_scm)) Scm_Error("ScmSmallInt required, but got %S", n_scm);
  n = SCM_INT_VALUE(n_scm);
  if (SCM_ARGCNT > 1+1) {
    radix_scm = SCM_SUBRARGS[1];
  } else {
    radix_scm = SCM_MAKE_INT(10U);
  }
  if (!SCM_INTP(radix_scm)) Scm_Error("ScmSmallInt required, but got %S", radix_scm);
  radix = SCM_INT_VALUE(radix_scm);
  if (SCM_ARGCNT > 2+1) {
    basechar1_scm = SCM_SUBRARGS[2];
  } else {
    basechar1_scm = SCM_MAKE_CHAR(48);
  }
  if (!SCM_CHARP(basechar1_scm)) Scm_Error("character required, but got %S", basechar1_scm);
  basechar1 = SCM_CHAR_VALUE(basechar1_scm);
  if (SCM_ARGCNT > 3+1) {
    basechar2_scm = SCM_SUBRARGS[3];
  } else {
    basechar2_scm = SCM_MAKE_CHAR(97);
  }
  if (!SCM_CHARP(basechar2_scm)) Scm_Error("character required, but got %S", basechar2_scm);
  basechar2 = SCM_CHAR_VALUE(basechar2_scm);
  {
{
ScmObj SCM_RESULT;

#line 136 "libchar.scm"
{ScmChar r;
if (((radix)<(SCM_RADIX_MIN))||((radix)>(SCM_RADIX_MAX))){{
Scm_Error("radix must be an integer between %d and %d, but got %d",SCM_RADIX_MIN,SCM_RADIX_MAX,radix);}}
#line 140 "libchar.scm"
r=(Scm_IntToDigit(n,radix,basechar1,basechar2));
{SCM_RESULT=((((r)==(SCM_CHAR_INVALID))?(SCM_FALSE):(SCM_MAKE_CHAR(r))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharucs_TOchar(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n_scm;
  int n;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("ucs->char");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(n_scm)) Scm_Error("int required, but got %S", n_scm);
  n = Scm_GetInteger(n_scm);
  {
{
ScmObj SCM_RESULT;

#line 144 "libchar.scm"
{ScmChar ch=Scm_UcsToChar(n);
{SCM_RESULT=((((ch)==(SCM_CHAR_INVALID))?(SCM_FALSE):(SCM_MAKE_CHAR(ch))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_TOucs(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char->ucs");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
ScmObj SCM_RESULT;

#line 148 "libchar.scm"
{int ucs=Scm_CharToUcs(c);
{SCM_RESULT=((((ucs)<(0))?(SCM_FALSE):(Scm_MakeInteger(ucs))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libchargauche_character_encoding(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("gauche-character-encoding");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CharEncodingName());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharsupported_character_encodings(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("supported-character-encodings");
  {
{
ScmObj SCM_RESULT;

#line 154 "libchar.scm"
{SCM_RESULT=(Scm_CStringArrayToList(Scm_SupportedCharacterEncodings(),-1,0));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharsupported_character_encodingP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj encoding_scm;
  const char* encoding;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("supported-character-encoding?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  encoding_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(encoding_scm)) Scm_Error("const char* required, but got %S", encoding_scm);
  encoding = SCM_STRING_CONST_CSTRING(encoding_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_SupportedCharacterEncodingP(encoding));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_title_caseP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-title-case?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_CharTitlecaseP(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_titlecase(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-titlecase");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
ScmChar SCM_RESULT;
{SCM_RESULT=(Scm_CharTitlecase(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_CHAR(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_foldcase(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-foldcase");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
ScmChar SCM_RESULT;
{SCM_RESULT=(Scm_CharFoldcase(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_CHAR(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_general_category(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-general-category");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
ScmObj SCM_RESULT;

#line 165 "libchar.scm"
switch (Scm_CharGeneralCategory(c)) {
case SCM_CHAR_CATEGORY_Lu : {{SCM_RESULT=(scm__rc.d2149[188]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 167 "libchar.scm"
case SCM_CHAR_CATEGORY_Ll : {{SCM_RESULT=(scm__rc.d2149[189]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 168 "libchar.scm"
case SCM_CHAR_CATEGORY_Lt : {{SCM_RESULT=(scm__rc.d2149[190]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 169 "libchar.scm"
case SCM_CHAR_CATEGORY_Lm : {{SCM_RESULT=(scm__rc.d2149[191]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 170 "libchar.scm"
case SCM_CHAR_CATEGORY_Lo : {{SCM_RESULT=(scm__rc.d2149[192]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 171 "libchar.scm"
case SCM_CHAR_CATEGORY_Mn : {{SCM_RESULT=(scm__rc.d2149[193]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 172 "libchar.scm"
case SCM_CHAR_CATEGORY_Mc : {{SCM_RESULT=(scm__rc.d2149[194]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 173 "libchar.scm"
case SCM_CHAR_CATEGORY_Me : {{SCM_RESULT=(scm__rc.d2149[195]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 174 "libchar.scm"
case SCM_CHAR_CATEGORY_Nd : {{SCM_RESULT=(scm__rc.d2149[196]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 175 "libchar.scm"
case SCM_CHAR_CATEGORY_Nl : {{SCM_RESULT=(scm__rc.d2149[197]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 176 "libchar.scm"
case SCM_CHAR_CATEGORY_No : {{SCM_RESULT=(scm__rc.d2149[198]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 177 "libchar.scm"
case SCM_CHAR_CATEGORY_Pc : {{SCM_RESULT=(scm__rc.d2149[199]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 178 "libchar.scm"
case SCM_CHAR_CATEGORY_Pd : {{SCM_RESULT=(scm__rc.d2149[200]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 179 "libchar.scm"
case SCM_CHAR_CATEGORY_Ps : {{SCM_RESULT=(scm__rc.d2149[201]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 180 "libchar.scm"
case SCM_CHAR_CATEGORY_Pe : {{SCM_RESULT=(scm__rc.d2149[202]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 181 "libchar.scm"
case SCM_CHAR_CATEGORY_Pi : {{SCM_RESULT=(scm__rc.d2149[203]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 182 "libchar.scm"
case SCM_CHAR_CATEGORY_Pf : {{SCM_RESULT=(scm__rc.d2149[204]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 183 "libchar.scm"
case SCM_CHAR_CATEGORY_Po : {{SCM_RESULT=(scm__rc.d2149[205]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 184 "libchar.scm"
case SCM_CHAR_CATEGORY_Sm : {{SCM_RESULT=(scm__rc.d2149[206]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 185 "libchar.scm"
case SCM_CHAR_CATEGORY_Sc : {{SCM_RESULT=(scm__rc.d2149[207]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 186 "libchar.scm"
case SCM_CHAR_CATEGORY_Sk : {{SCM_RESULT=(scm__rc.d2149[208]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 187 "libchar.scm"
case SCM_CHAR_CATEGORY_So : {{SCM_RESULT=(scm__rc.d2149[209]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 188 "libchar.scm"
case SCM_CHAR_CATEGORY_Zs : {{SCM_RESULT=(scm__rc.d2149[210]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 189 "libchar.scm"
case SCM_CHAR_CATEGORY_Zl : {{SCM_RESULT=(scm__rc.d2149[211]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 190 "libchar.scm"
case SCM_CHAR_CATEGORY_Zp : {{SCM_RESULT=(scm__rc.d2149[212]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 191 "libchar.scm"
case SCM_CHAR_CATEGORY_Cc : {{SCM_RESULT=(scm__rc.d2149[213]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 192 "libchar.scm"
case SCM_CHAR_CATEGORY_Cf : {{SCM_RESULT=(scm__rc.d2149[214]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 193 "libchar.scm"
case SCM_CHAR_CATEGORY_Cs : {{SCM_RESULT=(scm__rc.d2149[215]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 194 "libchar.scm"
case SCM_CHAR_CATEGORY_Co : {{SCM_RESULT=(scm__rc.d2149[216]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 195 "libchar.scm"
case SCM_CHAR_CATEGORY_Cn : {{SCM_RESULT=(scm__rc.d2149[217]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}default: {
#line 196 "libchar.scm"
Scm_Panic("Scm_CharGeneralCategory returns unknown value for character %d",c);
#line 198 "libchar.scm"
{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static void char_set_add(ScmCharSet* cs,ScmObj chars){ScmObj cise__2155;{
#line 210 "libchar.scm"
SCM_FOR_EACH(cise__2155,chars) {{ScmObj ch=SCM_CAR(cise__2155);
if (!(SCM_CHARP(ch))){{Scm_Error("character required, but got %S",ch);}}
Scm_CharSetAddRange(cs,SCM_CHAR_VALUE(ch),SCM_CHAR_VALUE(ch));}}}}

static ScmObj libcharchar_setP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-set?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_CHARSETP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_set(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-set");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
ScmCharSet* SCM_RESULT;

#line 218 "libchar.scm"
{ScmCharSet* cs=SCM_CHARSET(Scm_MakeEmptyCharSet());
char_set_add(cs,chars);
{SCM_RESULT=(cs);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_set_copy(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-set-copy");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CharSetCopy(cs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_set_freeze(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-set-freeze");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CharSetFreeze(cs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_set_freezeX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-set-freeze!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CharSetFreezeX(cs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharread_char_set(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj error_scm = SCM_TRUE;
  int error;
  ScmObj posix_bracket_scm = SCM_TRUE;
  int posix_bracket;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("read-char-set");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[270])) {
      error_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[271])) {
      posix_bracket_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!SCM_BOOLP(error_scm)) Scm_Error("boolean required, but got %S", error_scm);
  error = SCM_BOOL_VALUE(error_scm);
  if (!SCM_BOOLP(posix_bracket_scm)) Scm_Error("boolean required, but got %S", posix_bracket_scm);
  posix_bracket = SCM_BOOL_VALUE(posix_bracket_scm);
  {
{
ScmObj SCM_RESULT;

#line 234 "libchar.scm"
{SCM_RESULT=(Scm_CharSetRead(port,NULL,error,posix_bracket));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_set_containsP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj ch_scm;
  ScmChar ch;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("char-set-contains?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  ch_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(ch_scm)) Scm_Error("character required, but got %S", ch_scm);
  ch = SCM_CHAR_VALUE(ch_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_CharSetContains(cs,ch));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_set_complementX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-set-complement!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CharSetComplement(cs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcharchar_set_immutableP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-set-immutable?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  {
{
int SCM_RESULT;

#line 244 "libchar.scm"
{SCM_RESULT=(SCM_CHAR_SET_IMMUTABLE_P(cs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libchar_25char_set_equalP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmCharSet* x;
  ScmObj y_scm;
  ScmCharSet* y;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%char-set-equal?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(x_scm)) Scm_Error("<char-set> required, but got %S", x_scm);
  x = SCM_CHAR_SET(x_scm);
  y_scm = SCM_SUBRARGS[1];
  if (!SCM_CHAR_SET_P(y_scm)) Scm_Error("<char-set> required, but got %S", y_scm);
  y = SCM_CHAR_SET(y_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_CharSetEq(x,y));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libchar_25char_set_LT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmCharSet* x;
  ScmObj y_scm;
  ScmCharSet* y;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%char-set<=?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(x_scm)) Scm_Error("<char-set> required, but got %S", x_scm);
  x = SCM_CHAR_SET(x_scm);
  y_scm = SCM_SUBRARGS[1];
  if (!SCM_CHAR_SET_P(y_scm)) Scm_Error("<char-set> required, but got %S", y_scm);
  y = SCM_CHAR_SET(y_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_CharSetLE(x,y));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libchar_25char_set_add_charsX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%char-set-add-chars!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  chars_scm = SCM_SUBRARGS[1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
ScmCharSet* SCM_RESULT;

#line 259 "libchar.scm"
char_set_add(cs,chars);

#line 259 "libchar.scm"
{SCM_RESULT=(cs);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libchar_25char_set_add_rangeX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj from_scm;
  ScmObj from;
  ScmObj to_scm;
  ScmObj to;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("%char-set-add-range!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  from_scm = SCM_SUBRARGS[1];
  if (!(from_scm)) Scm_Error("scheme object required, but got %S", from_scm);
  from = (from_scm);
  to_scm = SCM_SUBRARGS[2];
  if (!(to_scm)) Scm_Error("scheme object required, but got %S", to_scm);
  to = (to_scm);
  {
{
ScmObj SCM_RESULT;

#line 262 "libchar.scm"
{long f=-1;long t=-1;
if (SCM_INTP(from)){f=(SCM_INT_VALUE(from));}else if(
SCM_CHARP(from)){f=(SCM_CHAR_VALUE(from));}
if ((f)<(0)){{SCM_TYPE_ERROR(from,"character or positive exact integer");}}
if ((f)>(SCM_CHAR_MAX)){{
Scm_Error("'from' argument out of range: %S",from);}}
if (SCM_INTP(to)){t=(SCM_INT_VALUE(to));}else if(
SCM_CHARP(to)){t=(SCM_CHAR_VALUE(to));}
if ((t)<(0)){{SCM_TYPE_ERROR(to,"character or positive exact integer");}}
if ((t)>(SCM_CHAR_MAX)){{
Scm_Error("'to' argument out of range: %S",to);}}
{SCM_RESULT=(Scm_CharSetAddRange(cs,((ScmChar )(f)),((ScmChar )(t))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libchar_25char_set_addX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj dst_scm;
  ScmCharSet* dst;
  ScmObj src_scm;
  ScmCharSet* src;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%char-set-add!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  dst_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(dst_scm)) Scm_Error("<char-set> required, but got %S", dst_scm);
  dst = SCM_CHAR_SET(dst_scm);
  src_scm = SCM_SUBRARGS[1];
  if (!SCM_CHAR_SET_P(src_scm)) Scm_Error("<char-set> required, but got %S", src_scm);
  src = SCM_CHAR_SET(src_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CharSetAdd(dst,src));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libchar_25char_set_ranges(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%char-set-ranges");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CharSetRanges(cs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libchar_25char_set_predefined(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj num_scm;
  ScmSmallInt num;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%char-set-predefined");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  num_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(num_scm)) Scm_Error("ScmSmallInt required, but got %S", num_scm);
  num = SCM_INT_VALUE(num_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetStandardCharSet(num));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libchar_25char_set_case_foldX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%char-set-case-fold!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CharSetCaseFold(cs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libchar_25char_set_dump(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cs_scm;
  ScmCharSet* cs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%char-set-dump");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cs_scm = SCM_SUBRARGS[0];
  if (!SCM_CHAR_SET_P(cs_scm)) Scm_Error("<char-set> required, but got %S", cs_scm);
  cs = SCM_CHAR_SET(cs_scm);
  {

#line 282 "libchar.scm"
Scm_CharSetDump(cs,SCM_CUROUT);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[2])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[4])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[7])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[446];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[447];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[257];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = SCM_MAKE_INT(-1);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[448];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[263];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[328];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[261];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[241];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[449];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[256];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[297];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[240];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[299];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[322];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[323];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[321];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[318];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[319];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = SCM_OBJ(&scm__sc.d2148[114]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[102];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[450];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[451];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[452];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[419]), i++) = scm__rc.d2149[315];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[419]);
}
void Scm_Init_libchar() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* char? */
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[1])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1]), scm__rc.d2149[1]);
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[2])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[4]), scm__rc.d2149[2]);
  scm__rc.d2149[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[4])),TRUE); /* bind-info */
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[5])),TRUE); /* scheme */
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
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char?")), SCM_OBJ(&libcharcharP__STUB), SCM_BINDING_INLINABLE);
  libcharcharP__STUB.common.info = scm__rc.d2149[5];
  libcharcharP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* char=? */
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* c1 */
  scm__rc.d2149[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* c2 */
  scm__rc.d2149[19] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12]))); /* :rest */
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* chars */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[10]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[11]), scm__rc.d2149[19]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[12]), scm__rc.d2149[18]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[13]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[16]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[17]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[18]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[19]), scm__rc.d2149[3]);
  scm__rc.d2149[21] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[21]));
  scm__rc.d2149[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* <char> */
  scm__rc.d2149[23] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[5] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[6] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[8] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char=?")), SCM_OBJ(&libcharchar_3dP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_3dP__STUB.common.info = scm__rc.d2149[21];
  libcharchar_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[33] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* char<? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[24]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[25]), scm__rc.d2149[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[27]), scm__rc.d2149[3]);
  scm__rc.d2149[34] = Scm_MakeExtendedPair(scm__rc.d2149[33], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[29]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char<?")), SCM_OBJ(&libcharchar_LTP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_LTP__STUB.common.info = scm__rc.d2149[34];
  libcharchar_LTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[35] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* char>? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[32]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[33]), scm__rc.d2149[35]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[34]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[35]), scm__rc.d2149[3]);
  scm__rc.d2149[36] = Scm_MakeExtendedPair(scm__rc.d2149[35], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[37]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char>?")), SCM_OBJ(&libcharchar_GTP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_GTP__STUB.common.info = scm__rc.d2149[36];
  libcharchar_GTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* char<=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[40]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[41]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[42]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[43]), scm__rc.d2149[3]);
  scm__rc.d2149[38] = Scm_MakeExtendedPair(scm__rc.d2149[37], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[45]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char<=?")), SCM_OBJ(&libcharchar_LT_3dP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_LT_3dP__STUB.common.info = scm__rc.d2149[38];
  libcharchar_LT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[39] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* char>=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[48]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[49]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[50]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[51]), scm__rc.d2149[3]);
  scm__rc.d2149[40] = Scm_MakeExtendedPair(scm__rc.d2149[39], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[53]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char>=?")), SCM_OBJ(&libcharchar_GT_3dP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_GT_3dP__STUB.common.info = scm__rc.d2149[40];
  libcharchar_GT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[41] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* char-ci=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[56]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[57]), scm__rc.d2149[41]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[58]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2149[3]);
  scm__rc.d2149[42] = Scm_MakeExtendedPair(scm__rc.d2149[41], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[61]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-ci=?")), SCM_OBJ(&libcharchar_ci_3dP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_ci_3dP__STUB.common.info = scm__rc.d2149[42];
  libcharchar_ci_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[43] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* char-ci<? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[64]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[65]), scm__rc.d2149[43]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[66]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[67]), scm__rc.d2149[3]);
  scm__rc.d2149[44] = Scm_MakeExtendedPair(scm__rc.d2149[43], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[69]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-ci<?")), SCM_OBJ(&libcharchar_ci_LTP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_ci_LTP__STUB.common.info = scm__rc.d2149[44];
  libcharchar_ci_LTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[45] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* char-ci>? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[72]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[73]), scm__rc.d2149[45]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[74]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[75]), scm__rc.d2149[3]);
  scm__rc.d2149[46] = Scm_MakeExtendedPair(scm__rc.d2149[45], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[77]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-ci>?")), SCM_OBJ(&libcharchar_ci_GTP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_ci_GTP__STUB.common.info = scm__rc.d2149[46];
  libcharchar_ci_GTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[47] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* char-ci<=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[80]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[81]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[82]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[83]), scm__rc.d2149[3]);
  scm__rc.d2149[48] = Scm_MakeExtendedPair(scm__rc.d2149[47], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[85]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-ci<=?")), SCM_OBJ(&libcharchar_ci_LT_3dP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_ci_LT_3dP__STUB.common.info = scm__rc.d2149[48];
  libcharchar_ci_LT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[49] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* char-ci>=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[88]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[89]), scm__rc.d2149[49]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[90]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[91]), scm__rc.d2149[3]);
  scm__rc.d2149[50] = Scm_MakeExtendedPair(scm__rc.d2149[49], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[93]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-ci>=?")), SCM_OBJ(&libcharchar_ci_GT_3dP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_ci_GT_3dP__STUB.common.info = scm__rc.d2149[50];
  libcharchar_ci_GT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[51] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* char-alphabetic? */
  scm__rc.d2149[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* c */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[94]), scm__rc.d2149[52]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[97]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[51]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[100]), scm__rc.d2149[3]);
  scm__rc.d2149[53] = Scm_MakeExtendedPair(scm__rc.d2149[51], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[102]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[54]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[54]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[54]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[54]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-alphabetic?")), SCM_OBJ(&libcharchar_alphabeticP__STUB), 0);
  libcharchar_alphabeticP__STUB.common.info = scm__rc.d2149[53];
  libcharchar_alphabeticP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[54]);
  scm__rc.d2149[61] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* char-numeric? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[105]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[106]), scm__rc.d2149[61]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[107]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[108]), scm__rc.d2149[3]);
  scm__rc.d2149[62] = Scm_MakeExtendedPair(scm__rc.d2149[61], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[110]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-numeric?")), SCM_OBJ(&libcharchar_numericP__STUB), 0);
  libcharchar_numericP__STUB.common.info = scm__rc.d2149[62];
  libcharchar_numericP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[54]);
  scm__rc.d2149[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* char-whitespace? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[113]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[114]), scm__rc.d2149[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[116]), scm__rc.d2149[3]);
  scm__rc.d2149[64] = Scm_MakeExtendedPair(scm__rc.d2149[63], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[118]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-whitespace?")), SCM_OBJ(&libcharchar_whitespaceP__STUB), 0);
  libcharchar_whitespaceP__STUB.common.info = scm__rc.d2149[64];
  libcharchar_whitespaceP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[54]);
  scm__rc.d2149[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* char-upper-case? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[121]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[122]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[123]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[124]), scm__rc.d2149[3]);
  scm__rc.d2149[66] = Scm_MakeExtendedPair(scm__rc.d2149[65], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[126]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-upper-case?")), SCM_OBJ(&libcharchar_upper_caseP__STUB), 0);
  libcharchar_upper_caseP__STUB.common.info = scm__rc.d2149[66];
  libcharchar_upper_caseP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[54]);
  scm__rc.d2149[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* char-lower-case? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[129]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[130]), scm__rc.d2149[67]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[131]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[132]), scm__rc.d2149[3]);
  scm__rc.d2149[68] = Scm_MakeExtendedPair(scm__rc.d2149[67], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[134]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-lower-case?")), SCM_OBJ(&libcharchar_lower_caseP__STUB), 0);
  libcharchar_lower_caseP__STUB.common.info = scm__rc.d2149[68];
  libcharchar_lower_caseP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[54]);
  scm__rc.d2149[69] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* char->integer */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[137]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[138]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[139]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[140]), scm__rc.d2149[3]);
  scm__rc.d2149[70] = Scm_MakeExtendedPair(scm__rc.d2149[69], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[142]));
  scm__rc.d2149[71] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* <long> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[72]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[72]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[72]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[72]))[6] = scm__rc.d2149[71];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char->integer")), SCM_OBJ(&libcharchar_TOinteger__STUB), SCM_BINDING_INLINABLE);
  libcharchar_TOinteger__STUB.common.info = scm__rc.d2149[70];
  libcharchar_TOinteger__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[72]);
  scm__rc.d2149[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* integer->char */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[145]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[146]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[147]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[148]), scm__rc.d2149[3]);
  scm__rc.d2149[80] = Scm_MakeExtendedPair(scm__rc.d2149[79], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[150]));
  scm__rc.d2149[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[82]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[82]))[4] = scm__rc.d2149[81];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[82]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[82]))[6] = scm__rc.d2149[22];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("integer->char")), SCM_OBJ(&libcharinteger_TOchar__STUB), SCM_BINDING_INLINABLE);
  libcharinteger_TOchar__STUB.common.info = scm__rc.d2149[80];
  libcharinteger_TOchar__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[82]);
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* char-upcase */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[153]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[154]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[155]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[156]), scm__rc.d2149[3]);
  scm__rc.d2149[90] = Scm_MakeExtendedPair(scm__rc.d2149[89], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[158]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[91]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[91]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[91]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[91]))[6] = scm__rc.d2149[22];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-upcase")), SCM_OBJ(&libcharchar_upcase__STUB), 0);
  libcharchar_upcase__STUB.common.info = scm__rc.d2149[90];
  libcharchar_upcase__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[91]);
  scm__rc.d2149[98] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* char-downcase */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[161]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[162]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[163]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[164]), scm__rc.d2149[3]);
  scm__rc.d2149[99] = Scm_MakeExtendedPair(scm__rc.d2149[98], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[166]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-downcase")), SCM_OBJ(&libcharchar_downcase__STUB), 0);
  libcharchar_downcase__STUB.common.info = scm__rc.d2149[99];
  libcharchar_downcase__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[91]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[100] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* digit->integer */
  scm__rc.d2149[101] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* ch */
  scm__rc.d2149[102] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39]))); /* :optional */
  scm__rc.d2149[103] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* radix */
  scm__rc.d2149[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* extended-range? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[167]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[103]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[169]), scm__rc.d2149[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[170]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[173]), scm__rc.d2149[2]);
  scm__rc.d2149[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[174]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[175]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[176]), scm__rc.d2149[3]);
  scm__rc.d2149[106] = Scm_MakeExtendedPair(scm__rc.d2149[100], SCM_OBJ(&scm__rc.d2150[170]), SCM_OBJ(&scm__rc.d2150[178]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[5] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("digit->integer")), SCM_OBJ(&libchardigit_TOinteger__STUB), SCM_BINDING_INLINABLE);
  libchardigit_TOinteger__STUB.common.info = scm__rc.d2149[106];
  libchardigit_TOinteger__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[107]);
  scm__rc.d2149[115] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* integer->digit */
  scm__rc.d2149[116] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* n */
  scm__rc.d2149[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* basechar1 */
  scm__rc.d2149[118] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* basechar2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[179]), scm__rc.d2149[118]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[180]), scm__rc.d2149[117]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[181]), scm__rc.d2149[103]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[182]), scm__rc.d2149[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[183]), scm__rc.d2149[116]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[186]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[187]), scm__rc.d2149[115]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[188]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[189]), scm__rc.d2149[3]);
  scm__rc.d2149[119] = Scm_MakeExtendedPair(scm__rc.d2149[115], SCM_OBJ(&scm__rc.d2150[183]), SCM_OBJ(&scm__rc.d2150[191]));
  scm__rc.d2149[120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* <fixnum> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[121]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[121]))[4] = scm__rc.d2149[120];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[121]))[5] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[121]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[121]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("integer->digit")), SCM_OBJ(&libcharinteger_TOdigit__STUB), SCM_BINDING_INLINABLE);
  libcharinteger_TOdigit__STUB.common.info = scm__rc.d2149[119];
  libcharinteger_TOdigit__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[121]);
  scm__rc.d2149[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* ucs->char */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[192]), scm__rc.d2149[116]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[195]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[196]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[197]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[198]), scm__rc.d2149[3]);
  scm__rc.d2149[130] = Scm_MakeExtendedPair(scm__rc.d2149[129], SCM_OBJ(&scm__rc.d2150[192]), SCM_OBJ(&scm__rc.d2150[200]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[131]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[131]))[4] = scm__rc.d2149[81];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[131]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[131]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("ucs->char")), SCM_OBJ(&libcharucs_TOchar__STUB), 0);
  libcharucs_TOchar__STUB.common.info = scm__rc.d2149[130];
  libcharucs_TOchar__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[131]);
  scm__rc.d2149[138] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* char->ucs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[203]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[204]), scm__rc.d2149[138]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[205]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[206]), scm__rc.d2149[3]);
  scm__rc.d2149[139] = Scm_MakeExtendedPair(scm__rc.d2149[138], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[208]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[140]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[140]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[140]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[140]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char->ucs")), SCM_OBJ(&libcharchar_TOucs__STUB), 0);
  libcharchar_TOucs__STUB.common.info = scm__rc.d2149[139];
  libcharchar_TOucs__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[140]);
  scm__rc.d2149[147] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* gauche-character-encoding */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[209]), scm__rc.d2149[147]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[210]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[211]), scm__rc.d2149[3]);
  scm__rc.d2149[148] = Scm_MakeExtendedPair(scm__rc.d2149[147], SCM_NIL, SCM_OBJ(&scm__rc.d2150[212]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[149]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[149]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[149]))[5] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("gauche-character-encoding")), SCM_OBJ(&libchargauche_character_encoding__STUB), 0);
  libchargauche_character_encoding__STUB.common.info = scm__rc.d2149[148];
  libchargauche_character_encoding__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[149]);
  scm__rc.d2149[155] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* supported-character-encodings */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[213]), scm__rc.d2149[155]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[214]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[215]), scm__rc.d2149[3]);
  scm__rc.d2149[156] = Scm_MakeExtendedPair(scm__rc.d2149[155], SCM_NIL, SCM_OBJ(&scm__rc.d2150[216]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("supported-character-encodings")), SCM_OBJ(&libcharsupported_character_encodings__STUB), 0);
  libcharsupported_character_encodings__STUB.common.info = scm__rc.d2149[156];
  libcharsupported_character_encodings__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[149]);
  scm__rc.d2149[157] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),TRUE); /* supported-character-encoding? */
  scm__rc.d2149[158] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* encoding */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[217]), scm__rc.d2149[158]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[220]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[221]), scm__rc.d2149[157]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[222]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[223]), scm__rc.d2149[3]);
  scm__rc.d2149[159] = Scm_MakeExtendedPair(scm__rc.d2149[157], SCM_OBJ(&scm__rc.d2150[217]), SCM_OBJ(&scm__rc.d2150[225]));
  scm__rc.d2149[160] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* <const-cstring> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[161]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[161]))[4] = scm__rc.d2149[160];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[161]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[161]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("supported-character-encoding?")), SCM_OBJ(&libcharsupported_character_encodingP__STUB), 0);
  libcharsupported_character_encodingP__STUB.common.info = scm__rc.d2149[159];
  libcharsupported_character_encodingP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[161]);
  scm__rc.d2149[168] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* char-title-case? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[228]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[229]), scm__rc.d2149[168]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[230]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[231]), scm__rc.d2149[3]);
  scm__rc.d2149[169] = Scm_MakeExtendedPair(scm__rc.d2149[168], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[233]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[170]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[170]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[170]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[170]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-title-case?")), SCM_OBJ(&libcharchar_title_caseP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_title_caseP__STUB.common.info = scm__rc.d2149[169];
  libcharchar_title_caseP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[170]);
  scm__rc.d2149[177] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* char-titlecase */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[236]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[237]), scm__rc.d2149[177]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[238]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[239]), scm__rc.d2149[3]);
  scm__rc.d2149[178] = Scm_MakeExtendedPair(scm__rc.d2149[177], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[241]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[6] = scm__rc.d2149[22];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-titlecase")), SCM_OBJ(&libcharchar_titlecase__STUB), 0);
  libcharchar_titlecase__STUB.common.info = scm__rc.d2149[178];
  libcharchar_titlecase__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[179]);
  scm__rc.d2149[186] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* char-foldcase */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[244]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[245]), scm__rc.d2149[186]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[246]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[247]), scm__rc.d2149[3]);
  scm__rc.d2149[187] = Scm_MakeExtendedPair(scm__rc.d2149[186], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[249]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-foldcase")), SCM_OBJ(&libcharchar_foldcase__STUB), 0);
  libcharchar_foldcase__STUB.common.info = scm__rc.d2149[187];
  libcharchar_foldcase__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[179]);
  scm__rc.d2149[188] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* Lu */
  scm__rc.d2149[189] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* Ll */
  scm__rc.d2149[190] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61])),TRUE); /* Lt */
  scm__rc.d2149[191] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* Lm */
  scm__rc.d2149[192] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* Lo */
  scm__rc.d2149[193] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* Mn */
  scm__rc.d2149[194] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* Mc */
  scm__rc.d2149[195] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* Me */
  scm__rc.d2149[196] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* Nd */
  scm__rc.d2149[197] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* Nl */
  scm__rc.d2149[198] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* No */
  scm__rc.d2149[199] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* Pc */
  scm__rc.d2149[200] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* Pd */
  scm__rc.d2149[201] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* Ps */
  scm__rc.d2149[202] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* Pe */
  scm__rc.d2149[203] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* Pi */
  scm__rc.d2149[204] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* Pf */
  scm__rc.d2149[205] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* Po */
  scm__rc.d2149[206] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),TRUE); /* Sm */
  scm__rc.d2149[207] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* Sc */
  scm__rc.d2149[208] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* Sk */
  scm__rc.d2149[209] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* So */
  scm__rc.d2149[210] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* Zs */
  scm__rc.d2149[211] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* Zl */
  scm__rc.d2149[212] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* Zp */
  scm__rc.d2149[213] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* Cc */
  scm__rc.d2149[214] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),TRUE); /* Cf */
  scm__rc.d2149[215] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* Cs */
  scm__rc.d2149[216] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),TRUE); /* Co */
  scm__rc.d2149[217] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),TRUE); /* Cn */
  scm__rc.d2149[218] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58])),TRUE); /* char-general-category */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[252]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[253]), scm__rc.d2149[218]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[254]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[255]), scm__rc.d2149[3]);
  scm__rc.d2149[219] = Scm_MakeExtendedPair(scm__rc.d2149[218], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[257]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-general-category")), SCM_OBJ(&libcharchar_general_category__STUB), SCM_BINDING_INLINABLE);
  libcharchar_general_category__STUB.common.info = scm__rc.d2149[219];
  libcharchar_general_category__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[140]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* *char-code-max* */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[220]), Scm_MakeInteger(SCM_CHAR_MAX), SCM_BINDING_CONST);

  scm__rc.d2149[221] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* char-set? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[260]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[261]), scm__rc.d2149[221]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[262]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[263]), scm__rc.d2149[3]);
  scm__rc.d2149[222] = Scm_MakeExtendedPair(scm__rc.d2149[221], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[265]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-set?")), SCM_OBJ(&libcharchar_setP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_setP__STUB.common.info = scm__rc.d2149[222];
  libcharchar_setP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[223]);
  scm__rc.d2149[230] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),TRUE); /* char-set */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[268]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[269]), scm__rc.d2149[230]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[270]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[271]), scm__rc.d2149[3]);
  scm__rc.d2149[231] = Scm_MakeExtendedPair(scm__rc.d2149[230], SCM_OBJ(&scm__rc.d2150[11]), SCM_OBJ(&scm__rc.d2150[273]));
  scm__rc.d2149[232] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* <char-set> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[6] = scm__rc.d2149[232];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-set")), SCM_OBJ(&libcharchar_set__STUB), 0);
  libcharchar_set__STUB.common.info = scm__rc.d2149[231];
  libcharchar_set__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[233]);
  scm__rc.d2149[240] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* char-set-copy */
  scm__rc.d2149[241] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),TRUE); /* cs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[274]), scm__rc.d2149[241]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[277]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[278]), scm__rc.d2149[240]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[279]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[280]), scm__rc.d2149[3]);
  scm__rc.d2149[242] = Scm_MakeExtendedPair(scm__rc.d2149[240], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[282]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[4] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-set-copy")), SCM_OBJ(&libcharchar_set_copy__STUB), 0);
  libcharchar_set_copy__STUB.common.info = scm__rc.d2149[242];
  libcharchar_set_copy__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
  scm__rc.d2149[250] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* char-set-freeze */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[285]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[286]), scm__rc.d2149[250]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[287]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[288]), scm__rc.d2149[3]);
  scm__rc.d2149[251] = Scm_MakeExtendedPair(scm__rc.d2149[250], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[290]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-set-freeze")), SCM_OBJ(&libcharchar_set_freeze__STUB), 0);
  libcharchar_set_freeze__STUB.common.info = scm__rc.d2149[251];
  libcharchar_set_freeze__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
  scm__rc.d2149[252] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* char-set-freeze! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[293]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[294]), scm__rc.d2149[252]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[295]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[296]), scm__rc.d2149[3]);
  scm__rc.d2149[253] = Scm_MakeExtendedPair(scm__rc.d2149[252], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[298]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-set-freeze!")), SCM_OBJ(&libcharchar_set_freezeX__STUB), 0);
  libcharchar_set_freezeX__STUB.common.info = scm__rc.d2149[253];
  libcharchar_set_freezeX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
  scm__rc.d2149[255] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[254] = Scm_MakeIdentifier(scm__rc.d2149[255], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[256] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* char-set-size */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[300]), scm__rc.d2149[256]);
  scm__rc.d2149[257] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* range */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[301]), scm__rc.d2149[257]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[304]), scm__rc.d2149[2]);
  scm__rc.d2149[258] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[300]), SCM_OBJ(&scm__rc.d2150[301]), SCM_OBJ(&scm__rc.d2150[305]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[306]), scm__rc.d2149[258]);
  scm__rc.d2149[259] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2158[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[0]))->debugInfo = scm__rc.d2149[259];
  scm__rc.d2149[261] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* %char-set-ranges */
  scm__rc.d2149[260] = Scm_MakeIdentifier(scm__rc.d2149[261], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%char-set-ranges */
  scm__rc.d2149[263] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* for-each */
  scm__rc.d2149[264] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[105]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[262] = Scm_MakeIdentifier(scm__rc.d2149[263], SCM_MODULE(scm__rc.d2149[264]), SCM_NIL); /* gauche#for-each */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[309]), scm__rc.d2149[2]);
  scm__rc.d2149[265] = Scm_MakeExtendedPair(scm__rc.d2149[256], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[310]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[311]), scm__rc.d2149[265]);
  scm__rc.d2149[266] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2158[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[1]))->name = scm__rc.d2149[256];/* char-set-size */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[1]))->debugInfo = scm__rc.d2149[266];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[10]))[11] = SCM_WORD(scm__rc.d2149[260]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[10]))[13] = SCM_WORD(scm__rc.d2149[262]);
  scm__rc.d2149[267] = Scm_MakeIdentifier(scm__rc.d2149[256], SCM_MODULE(scm__rc.d2149[264]), SCM_NIL); /* gauche#char-set-size */
  scm__rc.d2149[268] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* %toplevel */
  scm__rc.d2149[269] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2158[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[2]))->name = scm__rc.d2149[268];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[2]))->debugInfo = scm__rc.d2149[269];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[26]))[3] = SCM_WORD(scm__rc.d2149[254]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[26]))[6] = SCM_WORD(scm__rc.d2149[256]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[26]))[13] = SCM_WORD(scm__rc.d2149[267]);
  scm__rc.d2149[270] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103]))); /* :error */
  scm__rc.d2149[271] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104]))); /* :posix-bracket */
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* read-char-set */
  scm__rc.d2149[273] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[106])),TRUE); /* port */
  scm__rc.d2149[274] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107]))); /* :key */
  scm__rc.d2149[275] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* error */
  scm__rc.d2149[276] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104])),TRUE); /* posix-bracket */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[312]), scm__rc.d2149[276]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[313]), scm__rc.d2149[275]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[314]), scm__rc.d2149[274]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[315]), scm__rc.d2149[273]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[318]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[319]), scm__rc.d2149[272]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[320]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[321]), scm__rc.d2149[3]);
  scm__rc.d2149[277] = Scm_MakeExtendedPair(scm__rc.d2149[272], SCM_OBJ(&scm__rc.d2150[315]), SCM_OBJ(&scm__rc.d2150[323]));
  scm__rc.d2149[278] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[108])),TRUE); /* <input-port> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[279]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[279]))[4] = scm__rc.d2149[278];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[279]))[5] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[279]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[279]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("read-char-set")), SCM_OBJ(&libcharread_char_set__STUB), 0);
  libcharread_char_set__STUB.common.info = scm__rc.d2149[277];
  libcharread_char_set__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[279]);
  scm__rc.d2149[287] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[109])),TRUE); /* char-set-contains? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[324]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[325]), scm__rc.d2149[241]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[328]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[329]), scm__rc.d2149[287]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[330]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[331]), scm__rc.d2149[3]);
  scm__rc.d2149[288] = Scm_MakeExtendedPair(scm__rc.d2149[287], SCM_OBJ(&scm__rc.d2150[325]), SCM_OBJ(&scm__rc.d2150[333]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[4] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[5] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[7] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-set-contains?")), SCM_OBJ(&libcharchar_set_containsP__STUB), SCM_BINDING_INLINABLE);
  libcharchar_set_containsP__STUB.common.info = scm__rc.d2149[288];
  libcharchar_set_containsP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[289]);
  scm__rc.d2149[297] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[110])),TRUE); /* char-set-complement! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[336]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[337]), scm__rc.d2149[297]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[338]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[339]), scm__rc.d2149[3]);
  scm__rc.d2149[298] = Scm_MakeExtendedPair(scm__rc.d2149[297], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[341]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-set-complement!")), SCM_OBJ(&libcharchar_set_complementX__STUB), 0);
  libcharchar_set_complementX__STUB.common.info = scm__rc.d2149[298];
  libcharchar_set_complementX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
  scm__rc.d2149[299] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[111])),TRUE); /* char-set-complement */
  scm__rc.d2149[300] = Scm_MakeIdentifier(scm__rc.d2149[240], SCM_MODULE(scm__rc.d2149[264]), SCM_NIL); /* gauche#char-set-copy */
  scm__rc.d2149[301] = Scm_MakeIdentifier(scm__rc.d2149[297], SCM_MODULE(scm__rc.d2149[264]), SCM_NIL); /* gauche#char-set-complement! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[344]), scm__rc.d2149[2]);
  scm__rc.d2149[302] = Scm_MakeExtendedPair(scm__rc.d2149[299], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[345]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[346]), scm__rc.d2149[302]);
  scm__rc.d2149[303] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2158[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[3]))->name = scm__rc.d2149[299];/* char-set-complement */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[3]))->debugInfo = scm__rc.d2149[303];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[41]))[4] = SCM_WORD(scm__rc.d2149[300]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[41]))[6] = SCM_WORD(scm__rc.d2149[301]);
  scm__rc.d2149[304] = Scm_MakeIdentifier(scm__rc.d2149[299], SCM_MODULE(scm__rc.d2149[264]), SCM_NIL); /* gauche#char-set-complement */
  scm__rc.d2149[305] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2158[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[4]))->name = scm__rc.d2149[268];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[4]))->debugInfo = scm__rc.d2149[305];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[49]))[3] = SCM_WORD(scm__rc.d2149[254]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[49]))[6] = SCM_WORD(scm__rc.d2149[299]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[49]))[13] = SCM_WORD(scm__rc.d2149[304]);
  scm__rc.d2149[306] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[112])),TRUE); /* char-set-immutable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[349]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[350]), scm__rc.d2149[306]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[351]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[352]), scm__rc.d2149[3]);
  scm__rc.d2149[307] = Scm_MakeExtendedPair(scm__rc.d2149[306], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[354]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[308]))[3] = scm__rc.d2149[105];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[308]))[4] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[308]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[308]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-set-immutable?")), SCM_OBJ(&libcharchar_set_immutableP__STUB), 0);
  libcharchar_set_immutableP__STUB.common.info = scm__rc.d2149[307];
  libcharchar_set_immutableP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[308]);
  scm__rc.d2149[315] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[113])),TRUE); /* char-set-hash */
  scm__rc.d2149[316] = Scm_MakeIntegerU(536870911U);
  scm__rc.d2149[317] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[115])),TRUE); /* lambda */
  scm__rc.d2149[318] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[116])),TRUE); /* bound */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[355]), scm__rc.d2149[316]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[356]), scm__rc.d2149[318]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[358]), scm__rc.d2149[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[359]), scm__rc.d2149[241]);
  scm__rc.d2149[319] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[117])),TRUE); /* fold */
  scm__rc.d2149[320] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[118])),TRUE); /* ^ */
  scm__rc.d2149[321] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[119])),TRUE); /* val */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[360]), scm__rc.d2149[321]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[361]), scm__rc.d2149[257]);
  scm__rc.d2149[322] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[120])),TRUE); /* modulo */
  scm__rc.d2149[323] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[121])),TRUE); /* hash */
  scm__rc.d2149[324] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[122])),TRUE); /* + */
  scm__rc.d2149[325] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[123])),TRUE); /* car */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[362]), scm__rc.d2149[325]);
  scm__rc.d2149[326] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[124])),TRUE); /* cdr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[363]), scm__rc.d2149[326]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[366]), scm__rc.d2149[321]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[367]), scm__rc.d2149[324]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[369]), scm__rc.d2149[323]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[370]), scm__rc.d2149[318]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[372]), scm__rc.d2149[322]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[375]), scm__rc.d2149[320]);
  scm__rc.d2149[327] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[125])),TRUE); /* with-module */
  scm__rc.d2149[328] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[126])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[376]), scm__rc.d2149[261]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[377]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[378]), scm__rc.d2149[327]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[383]), scm__rc.d2149[319]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[386]), scm__rc.d2149[317]);
  scm__rc.d2149[329] = Scm_MakeIdentifier(scm__rc.d2149[275], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2149[330] = Scm_MakeIdentifier(scm__rc.d2149[323], SCM_MODULE(scm__rc.d2149[264]), SCM_NIL); /* gauche#hash */
  scm__rc.d2149[331] = Scm_MakeIdentifier(scm__rc.d2149[322], SCM_MODULE(scm__rc.d2149[264]), SCM_NIL); /* gauche#modulo */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[387]), scm__rc.d2149[315]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[390]), scm__rc.d2149[2]);
  scm__rc.d2149[332] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[387]), SCM_OBJ(&scm__rc.d2150[361]), SCM_OBJ(&scm__rc.d2150[391]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[392]), scm__rc.d2149[332]);
  scm__rc.d2149[333] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2158[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[5]))->debugInfo = scm__rc.d2149[333];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[64]))[8] = SCM_WORD(scm__rc.d2149[330]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[64]))[12] = SCM_WORD(scm__rc.d2149[331]);
  scm__rc.d2149[334] = Scm_MakeIdentifier(scm__rc.d2149[319], SCM_MODULE(scm__rc.d2149[264]), SCM_NIL); /* gauche#fold */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[395]), scm__rc.d2149[2]);
  scm__rc.d2149[335] = Scm_MakeExtendedPair(scm__rc.d2149[315], SCM_OBJ(&scm__rc.d2150[359]), SCM_OBJ(&scm__rc.d2150[396]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[397]), scm__rc.d2149[335]);
  scm__rc.d2149[336] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2158[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[6]))->name = scm__rc.d2149[315];/* char-set-hash */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[6]))->debugInfo = scm__rc.d2149[336];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]))[4] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]))[29] = SCM_WORD(scm__rc.d2149[329]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]))[38] = SCM_WORD(scm__rc.d2149[260]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[78]))[40] = SCM_WORD(scm__rc.d2149[334]);
  scm__rc.d2149[337] = Scm_MakeIdentifier(scm__rc.d2149[315], SCM_MODULE(scm__rc.d2149[264]), SCM_NIL); /* gauche#char-set-hash */
  scm__rc.d2149[338] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2158[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[7]))->name = scm__rc.d2149[268];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2157[7]))->debugInfo = scm__rc.d2149[338];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[120]))[3] = SCM_WORD(scm__rc.d2149[254]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[120]))[6] = SCM_WORD(scm__rc.d2149[315]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2156[120]))[13] = SCM_WORD(scm__rc.d2149[337]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[339] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[127])),TRUE); /* %char-set-equal? */
  scm__rc.d2149[340] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[128])),TRUE); /* x */
  scm__rc.d2149[341] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[129])),TRUE); /* y */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[398]), scm__rc.d2149[341]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[399]), scm__rc.d2149[340]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[402]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[403]), scm__rc.d2149[339]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[404]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[405]), scm__rc.d2149[3]);
  scm__rc.d2149[342] = Scm_MakeExtendedPair(scm__rc.d2149[339], SCM_OBJ(&scm__rc.d2150[399]), SCM_OBJ(&scm__rc.d2150[407]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[343]))[3] = scm__rc.d2149[328];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[343]))[4] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[343]))[5] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[343]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[343]))[7] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%char-set-equal?")), SCM_OBJ(&libchar_25char_set_equalP__STUB), 0);
  libchar_25char_set_equalP__STUB.common.info = scm__rc.d2149[342];
  libchar_25char_set_equalP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[343]);
  scm__rc.d2149[351] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[130])),TRUE); /* %char-set<=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[410]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[411]), scm__rc.d2149[351]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[412]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[413]), scm__rc.d2149[3]);
  scm__rc.d2149[352] = Scm_MakeExtendedPair(scm__rc.d2149[351], SCM_OBJ(&scm__rc.d2150[399]), SCM_OBJ(&scm__rc.d2150[415]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%char-set<=?")), SCM_OBJ(&libchar_25char_set_LT_3dP__STUB), 0);
  libchar_25char_set_LT_3dP__STUB.common.info = scm__rc.d2149[352];
  libchar_25char_set_LT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[343]);
  scm__rc.d2149[353] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[131])),TRUE); /* %char-set-add-chars! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[416]), scm__rc.d2149[241]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[419]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[420]), scm__rc.d2149[353]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[421]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[422]), scm__rc.d2149[3]);
  scm__rc.d2149[354] = Scm_MakeExtendedPair(scm__rc.d2149[353], SCM_OBJ(&scm__rc.d2150[416]), SCM_OBJ(&scm__rc.d2150[424]));
  scm__rc.d2149[355] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[132])),TRUE); /* <list> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[356]))[3] = scm__rc.d2149[328];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[356]))[4] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[356]))[5] = scm__rc.d2149[355];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[356]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[356]))[7] = scm__rc.d2149[232];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%char-set-add-chars!")), SCM_OBJ(&libchar_25char_set_add_charsX__STUB), 0);
  libchar_25char_set_add_charsX__STUB.common.info = scm__rc.d2149[354];
  libchar_25char_set_add_charsX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[356]);
  scm__rc.d2149[364] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[133])),TRUE); /* %char-set-add-range! */
  scm__rc.d2149[365] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[134])),TRUE); /* from */
  scm__rc.d2149[366] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[135])),TRUE); /* to */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[425]), scm__rc.d2149[366]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[426]), scm__rc.d2149[365]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[427]), scm__rc.d2149[241]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[430]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[431]), scm__rc.d2149[364]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[432]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[433]), scm__rc.d2149[3]);
  scm__rc.d2149[367] = Scm_MakeExtendedPair(scm__rc.d2149[364], SCM_OBJ(&scm__rc.d2150[427]), SCM_OBJ(&scm__rc.d2150[435]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[368]))[3] = scm__rc.d2149[328];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[368]))[4] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[368]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[368]))[6] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[368]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[368]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%char-set-add-range!")), SCM_OBJ(&libchar_25char_set_add_rangeX__STUB), 0);
  libchar_25char_set_add_rangeX__STUB.common.info = scm__rc.d2149[367];
  libchar_25char_set_add_rangeX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[368]);
  scm__rc.d2149[377] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[136])),TRUE); /* %char-set-add! */
  scm__rc.d2149[378] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[137])),TRUE); /* dst */
  scm__rc.d2149[379] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[138])),TRUE); /* src */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[436]), scm__rc.d2149[379]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[437]), scm__rc.d2149[378]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[440]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[441]), scm__rc.d2149[377]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[442]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[443]), scm__rc.d2149[3]);
  scm__rc.d2149[380] = Scm_MakeExtendedPair(scm__rc.d2149[377], SCM_OBJ(&scm__rc.d2150[437]), SCM_OBJ(&scm__rc.d2150[445]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[381]))[3] = scm__rc.d2149[328];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[381]))[4] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[381]))[5] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[381]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[381]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%char-set-add!")), SCM_OBJ(&libchar_25char_set_addX__STUB), 0);
  libchar_25char_set_addX__STUB.common.info = scm__rc.d2149[380];
  libchar_25char_set_addX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[381]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[448]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[449]), scm__rc.d2149[3]);
  scm__rc.d2149[389] = Scm_MakeExtendedPair(scm__rc.d2149[261], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[451]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[390]))[3] = scm__rc.d2149[328];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[390]))[4] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[390]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[390]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%char-set-ranges")), SCM_OBJ(&libchar_25char_set_ranges__STUB), 0);
  libchar_25char_set_ranges__STUB.common.info = scm__rc.d2149[389];
  libchar_25char_set_ranges__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[390]);
  scm__rc.d2149[397] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[139])),TRUE); /* %char-set-predefined */
  scm__rc.d2149[398] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[140])),TRUE); /* num */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[452]), scm__rc.d2149[398]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[455]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[456]), scm__rc.d2149[397]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[457]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[458]), scm__rc.d2149[3]);
  scm__rc.d2149[399] = Scm_MakeExtendedPair(scm__rc.d2149[397], SCM_OBJ(&scm__rc.d2150[452]), SCM_OBJ(&scm__rc.d2150[460]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[400]))[3] = scm__rc.d2149[328];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[400]))[4] = scm__rc.d2149[120];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[400]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[400]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%char-set-predefined")), SCM_OBJ(&libchar_25char_set_predefined__STUB), 0);
  libchar_25char_set_predefined__STUB.common.info = scm__rc.d2149[399];
  libchar_25char_set_predefined__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[400]);
  scm__rc.d2149[407] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[141])),TRUE); /* %char-set-case-fold! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[463]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[464]), scm__rc.d2149[407]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[465]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[466]), scm__rc.d2149[3]);
  scm__rc.d2149[408] = Scm_MakeExtendedPair(scm__rc.d2149[407], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[468]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%char-set-case-fold!")), SCM_OBJ(&libchar_25char_set_case_foldX__STUB), 0);
  libchar_25char_set_case_foldX__STUB.common.info = scm__rc.d2149[408];
  libchar_25char_set_case_foldX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[390]);
  scm__rc.d2149[409] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[142])),TRUE); /* %char-set-dump */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[471]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[472]), scm__rc.d2149[409]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[473]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[474]), scm__rc.d2149[3]);
  scm__rc.d2149[410] = Scm_MakeExtendedPair(scm__rc.d2149[409], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[476]));
  scm__rc.d2149[411] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[143])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[412]))[3] = scm__rc.d2149[328];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[412]))[4] = scm__rc.d2149[232];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[412]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[412]))[6] = scm__rc.d2149[411];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%char-set-dump")), SCM_OBJ(&libchar_25char_set_dump__STUB), 0);
  libchar_25char_set_dump__STUB.common.info = scm__rc.d2149[410];
  libchar_25char_set_dump__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[412]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[446] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[144])),TRUE); /* count */
  scm__rc.d2149[447] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[145])),TRUE); /* - */
  scm__rc.d2149[448] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[146])),TRUE); /* inc! */
  scm__rc.d2149[449] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[147])),TRUE); /* rlet1 */
  scm__rc.d2149[450] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[148])),FALSE); /* G2160 */
  scm__rc.d2149[451] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[149])),FALSE); /* G2161 */
  scm__rc.d2149[452] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[150])),FALSE); /* rest2159 */
}
