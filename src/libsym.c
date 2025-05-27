/* Generated automatically from libsym.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
#include "gauche/priv/identifierP.h"
static ScmObj libsymsymbolP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymsymbolP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymsymbolP, SCM_MAKE_INT(SCM_VM_SYMBOLP), NULL);

static ScmObj libsymsymbol_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymsymbol_TOstring__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymsymbol_TOstring, NULL, NULL);

static ScmObj libsymstring_TOsymbol(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymstring_TOsymbol__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymstring_TOsymbol, NULL, NULL);

static ScmObj libsymgensym(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymgensym__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymgensym, NULL, NULL);

static ScmObj libsymsymbol_internedP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymsymbol_internedP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymsymbol_internedP, NULL, NULL);

static ScmObj libsymstring_TOuninterned_symbol(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymstring_TOuninterned_symbol__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymstring_TOuninterned_symbol, NULL, NULL);

static ScmObj libsymsymbol_sans_prefix(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymsymbol_sans_prefix__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymsymbol_sans_prefix, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 137u, 6u, 8u, 0u, 57u, 192u, 48u, 17u, 126u, 36u, 113u, 16u,
192u, 144u, 25u, 28u, 56u, 48u, 38u, 5u, 36u, 112u, 208u, 192u, 144u,
17u, 28u, 48u, 48u, 36u, 2u, 71u, 10u, 12u, 16u, 4u, 5u, 0u, 146u,
56u, 72u, 96u, 72u, 12u, 142u, 16u, 24u, 18u, 1u, 35u, 131u, 134u, 4u,
128u, 136u, 224u, 161u, 129u, 148u, 64u, 144u, 9u, 9u, 136u, 216u,
76u, 7u, 9u, 28u, 12u, 48u, 38u, 60u, 36u, 112u, 32u, 192u, 144u, 9u,
28u, 0u, 48u, 38u, 60u, 36u, 49u, 6u, 6u, 49u, 0u, 164u, 4u, 19u, 29u,
98u, 72u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 138u, 134u, 0u, 203u, 2u, 192u, 208u, 57u, 14u, 176u, 64u,
130u, 96u, 168u, 44u, 146u, 71u, 19u, 12u, 9u, 3u, 145u, 195u, 195u,
2u, 64u, 196u, 112u, 208u, 192u, 152u, 15u, 145u, 195u, 3u, 2u, 64u,
164u, 112u, 160u, 192u, 152u, 37u, 145u, 194u, 3u, 2u, 96u, 192u, 71u,
7u, 12u, 9u, 5u, 145u, 193u, 131u, 2u, 65u, 132u, 112u, 64u, 192u,
152u, 48u, 17u, 192u, 131u, 2u, 65u, 4u, 112u, 0u, 192u, 152u, 37u,
144u, 196u, 24u, 24u, 196u, 23u, 2u, 144u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 145u, 6u, 8u, 54u, 14u, 36u, 114u, 16u, 192u, 144u, 113u,
28u, 120u, 48u, 65u, 226u, 16u, 131u, 137u, 35u, 142u, 6u, 4u, 194u,
24u, 142u, 54u, 24u, 18u, 14u, 35u, 140u, 134u, 4u, 194u, 24u, 142u,
46u, 24u, 4u, 35u, 7u, 16u, 152u, 60u, 146u, 56u, 176u, 96u, 76u, 81u,
72u, 226u, 161u, 129u, 32u, 226u, 56u, 144u, 96u, 130u, 33u, 33u, 6u,
136u, 78u, 14u, 36u, 145u, 196u, 3u, 2u, 99u, 254u, 71u, 14u, 12u, 9u,
144u, 97u, 28u, 52u, 48u, 36u, 28u, 71u, 11u, 12u, 9u, 144u, 97u, 28u,
36u, 48u, 38u, 63u, 228u, 112u, 80u, 192u, 33u, 72u, 56u, 136u, 84u,
66u, 65u, 50u, 12u, 36u, 145u, 192u, 195u, 2u, 102u, 84u, 71u, 2u,
12u, 9u, 7u, 17u, 192u, 3u, 2u, 102u, 84u, 67u, 16u, 96u, 99u, 16u,
113u, 13u, 129u, 51u, 39u, 9u, 138u, 16u, 105u, 9u, 128u, 225u, 36u,
144u,};
static unsigned char uvector__00004[] = {
 0u, 1u, 136u, 48u, 49u, 168u, 97u, 133u, 137u, 36u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 143u, 134u, 8u, 94u, 24u, 134u, 68u, 52u, 4u, 20u, 33u, 176u,
216u, 4u, 41u, 7u, 17u, 10u, 136u, 72u, 66u, 112u, 113u, 36u, 129u,
8u, 193u, 196u, 65u, 226u, 16u, 131u, 137u, 33u, 164u, 65u, 176u,
113u, 36u, 145u, 0u, 7u, 33u, 5u, 192u, 164u, 6u, 88u, 22u, 6u, 129u,
200u, 117u, 130u, 4u, 19u, 5u, 65u, 100u, 146u, 72u, 135u, 2u, 134u,
24u, 88u, 144u, 32u, 20u, 128u, 131u, 40u, 129u, 32u, 18u, 32u, 8u,
10u, 1u, 34u, 0u, 14u, 112u, 12u, 4u, 95u, 137u, 36u, 146u, 56u, 224u,
96u, 76u, 124u, 8u, 226u, 225u, 129u, 33u, 210u, 56u, 176u, 96u, 72u,
120u, 142u, 34u, 24u, 19u, 31u, 2u, 56u, 120u, 96u, 72u, 12u, 142u,
26u, 24u, 18u, 12u, 35u, 133u, 134u, 4u, 192u, 244u, 142u, 18u, 24u,
19u, 1u, 194u, 56u, 32u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u,
36u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 129u, 6u, 7u, 145u, 15u, 196u, 4u, 145u, 192u, 67u, 2u, 96u,
78u, 71u, 0u, 12u, 9u, 16u, 16u, 196u, 24u, 24u, 196u, 64u, 66u, 96u,
56u, 73u, 0u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 129u, 6u, 7u, 184u, 58u, 33u, 36u, 112u, 16u, 192u, 145u, 9u,
28u, 0u, 48u, 36u, 28u, 67u, 16u, 96u, 99u, 17u, 9u, 9u, 128u, 225u,
36u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 145u, 134u, 8u, 136u, 68u, 111u, 112u, 116u, 72u, 98u, 82u,
71u, 34u, 12u, 9u, 18u, 145u, 199u, 195u, 3u, 24u, 136u, 72u, 123u,
131u, 162u, 18u, 72u, 227u, 129u, 129u, 174u, 37u, 36u, 113u, 176u,
192u, 145u, 41u, 28u, 100u, 48u, 61u, 193u, 209u, 49u, 35u, 140u, 6u,
4u, 137u, 136u, 226u, 225u, 129u, 32u, 226u, 56u, 144u, 96u, 103u,
137u, 226u, 130u, 71u, 17u, 12u, 9u, 20u, 17u, 195u, 67u, 2u, 99u,
208u, 71u, 11u, 12u, 12u, 177u, 64u, 76u, 122u, 9u, 28u, 40u, 48u,
36u, 80u, 71u, 9u, 12u, 12u, 128u, 69u, 2u, 41u, 17u, 83u, 204u, 85u,
15u, 197u, 68u, 69u, 112u, 116u, 77u, 18u, 146u, 72u, 76u, 158u, 201u,
28u, 28u, 48u, 38u, 96u, 196u, 112u, 96u, 192u, 153u, 164u, 145u,
193u, 67u, 2u, 68u, 164u, 112u, 64u, 192u, 145u, 49u, 28u, 12u, 48u,
36u, 28u, 71u, 2u, 12u, 9u, 22u, 17u, 192u, 3u, 2u, 102u, 12u, 67u,
16u, 96u, 99u, 16u, 116u, 76u, 145u, 40u, 139u, 98u, 128u, 153u, 131u,
4u, 199u, 160u, 135u, 0u, 152u, 172u, 135u, 96u, 152u, 127u, 4u, 192u,
112u, 146u, 72u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 23u, 65u, 209u, 50u, 68u, 162u, 45u, 138u,
4u, 82u, 34u, 167u, 152u, 170u, 31u, 138u, 136u, 138u, 224u, 232u,
154u, 37u, 36u, 51u, 196u, 241u, 65u, 33u, 192u, 61u, 193u, 209u, 49u,
14u, 193u, 174u, 37u, 34u, 34u, 17u, 27u, 220u, 29u, 18u, 24u, 148u,
146u, 72u, 225u, 97u, 129u, 140u, 38u, 6u, 41u, 130u, 153u, 28u, 36u,
48u, 38u, 3u, 132u, 112u, 64u, 192u, 152u, 14u, 17u, 192u, 131u, 2u,
96u, 56u, 72u,};
static ScmObj libsymkeywordP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymkeywordP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymkeywordP, NULL, NULL);

static ScmObj libsymmake_keyword(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsymmake_keyword__STUB, 1, 0,SCM_FALSE,libsymmake_keyword, NULL, NULL);

static ScmObj libsymget_keyword(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymget_keyword__STUB, 2, 2,1, SCM_FALSE,0, libsymget_keyword, NULL, NULL);

static ScmObj libsymdelete_keyword(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsymdelete_keyword__STUB, 2, 0,SCM_FALSE,libsymdelete_keyword, NULL, NULL);

static ScmObj libsymdelete_keywordX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsymdelete_keywordX__STUB, 2, 0,SCM_FALSE,libsymdelete_keywordX, NULL, NULL);

static ScmObj libsymkeyword_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymkeyword_TOstring__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymkeyword_TOstring, NULL, NULL);

static unsigned char uvector__00010[] = {
 0u, 3u, 145u, 134u, 8u, 172u, 52u, 69u, 228u, 59u, 197u, 228u, 70u,
1u, 242u, 47u, 36u, 145u, 200u, 131u, 2u, 96u, 178u, 71u, 33u, 12u,
9u, 24u, 17u, 200u, 3u, 2u, 96u, 204u, 71u, 31u, 12u, 9u, 23u, 145u,
199u, 67u, 2u, 96u, 178u, 71u, 28u, 12u, 9u, 130u, 9u, 28u, 108u, 48u,
36u, 94u, 71u, 25u, 12u, 9u, 129u, 73u, 28u, 92u, 48u, 70u, 1u, 242u,
47u, 36u, 142u, 44u, 24u, 18u, 48u, 35u, 138u, 134u, 4u, 200u, 56u,
142u, 40u, 24u, 18u, 47u, 35u, 137u, 6u, 1u, 24u, 134u, 136u, 188u,
198u, 68u, 38u, 64u, 36u, 142u, 34u, 24u, 19u, 44u, 114u, 56u, 128u,
96u, 72u, 200u, 142u, 28u, 24u, 19u, 45u, 66u, 56u, 88u, 96u, 103u,
140u, 227u, 66u, 71u, 10u, 12u, 9u, 26u, 17u, 193u, 131u, 3u, 88u,
106u, 139u, 201u, 35u, 130u, 134u, 4u, 208u, 132u, 2u, 56u, 8u, 96u,
107u, 139u, 201u, 28u, 0u, 48u, 36u, 94u, 67u, 16u, 96u, 99u, 17u,
121u, 13u, 128u, 38u, 132u, 132u, 6u, 21u, 36u, 4u, 208u, 129u, 80u,
153u, 216u, 16u, 153u, 98u, 6u, 144u, 152u, 14u, 18u, 73u, 0u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 130u, 6u, 8u, 194u, 52u, 36u, 112u, 48u, 192u, 145u, 129u,
28u, 8u, 48u, 36u, 104u, 67u, 16u, 96u, 99u, 17u, 148u, 104u, 67u,
48u, 140u, 34u, 242u, 27u, 0u, 107u, 139u, 200u, 97u, 82u, 64u, 107u,
13u, 81u, 121u, 33u, 158u, 51u, 141u, 9u, 2u, 49u, 13u, 17u, 121u,
140u, 136u, 140u, 3u, 228u, 94u, 73u, 13u, 34u, 43u, 13u, 17u, 121u,
14u, 241u, 121u, 17u, 128u, 124u, 139u, 201u, 36u, 144u, 152u, 14u,
18u, 64u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 134u, 6u, 8u, 94u, 24u, 17u, 172u, 101u, 26u, 16u, 204u, 35u,
8u, 188u, 134u, 192u, 26u, 226u, 242u, 24u, 84u, 144u, 26u, 195u, 84u,
94u, 72u, 103u, 140u, 227u, 66u, 64u, 140u, 67u, 68u, 94u, 99u, 34u,
35u, 0u, 249u, 23u, 146u, 67u, 72u, 138u, 195u, 68u, 94u, 67u, 188u,
94u, 68u, 96u, 31u, 34u, 242u, 73u, 36u, 70u, 17u, 161u, 36u, 112u,
144u, 192u, 198u, 19u, 3u, 212u, 193u, 80u, 142u, 14u, 24u, 19u, 1u,
194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 164u, 6u, 4u, 139u, 200u, 232u, 161u, 130u, 54u, 15u, 145u,
121u, 139u, 201u, 29u, 16u, 48u, 36u, 94u, 71u, 67u, 12u, 9u, 130u,
153u, 29u, 8u, 48u, 36u, 94u, 71u, 63u, 12u, 17u, 176u, 124u, 139u,
204u, 110u, 72u, 231u, 193u, 129u, 35u, 114u, 57u, 232u, 96u, 76u,
72u, 8u, 231u, 129u, 129u, 34u, 242u, 57u, 208u, 96u, 142u, 3u, 84u,
110u, 67u, 228u, 94u, 73u, 28u, 228u, 48u, 38u, 64u, 164u, 115u, 128u,
192u, 145u, 121u, 28u, 216u, 48u, 38u, 61u, 164u, 115u, 64u, 192u,
152u, 240u, 17u, 204u, 131u, 0u, 140u, 67u, 68u, 94u, 99u, 34u, 19u,
30u, 0u, 152u, 137u, 146u, 57u, 136u, 96u, 76u, 188u, 8u, 230u, 1u,
129u, 35u, 34u, 57u, 112u, 96u, 76u, 191u, 72u, 229u, 97u, 129u, 158u,
51u, 141u, 9u, 28u, 168u, 48u, 36u, 104u, 71u, 38u, 12u, 13u, 97u,
170u, 47u, 36u, 142u, 74u, 24u, 19u, 66u, 39u, 136u, 228u, 65u, 129u,
174u, 47u, 36u, 114u, 16u, 192u, 145u, 121u, 28u, 128u, 48u, 70u,
193u, 242u, 47u, 49u, 121u, 35u, 143u, 134u, 4u, 139u, 200u, 227u,
193u, 129u, 52u, 41u, 56u, 142u, 58u, 24u, 18u, 47u, 35u, 141u, 134u,
4u, 208u, 164u, 18u, 56u, 192u, 96u, 142u, 67u, 228u, 94u, 73u, 28u,
92u, 48u, 38u, 134u, 42u, 145u, 197u, 131u, 2u, 69u, 228u, 113u, 64u,
192u, 35u, 16u, 209u, 23u, 152u, 200u, 132u, 208u, 196u, 130u, 71u,
19u, 12u, 9u, 161u, 177u, 68u, 113u, 32u, 192u, 145u, 145u, 28u, 64u,
48u, 38u, 134u, 203u, 145u, 195u, 67u, 3u, 60u, 103u, 26u, 18u, 56u,
96u, 96u, 72u, 208u, 142u, 16u, 24u, 26u, 195u, 84u, 94u, 73u, 28u,
28u, 48u, 38u, 136u, 42u, 145u, 192u, 195u, 3u, 92u, 94u, 72u, 224u,
65u, 129u, 34u, 242u, 56u, 8u, 96u, 142u, 99u, 66u, 71u, 0u, 12u, 9u,
26u, 16u, 196u, 24u, 24u, 196u, 101u, 26u, 16u, 204u, 35u, 152u, 188u,
134u, 192u, 19u, 68u, 71u, 67u, 10u, 146u, 2u, 104u, 130u, 80u, 77u,
15u, 133u, 33u, 52u, 54u, 28u, 52u, 132u, 208u, 164u, 24u, 188u, 146u,
25u, 132u, 109u, 23u, 198u, 228u, 54u, 0u, 154u, 19u, 12u, 64u, 77u,
8u, 147u, 9u, 159u, 113u, 9u, 151u, 104u, 105u, 9u, 130u, 49u, 36u,
38u, 136u, 236u, 18u, 64u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 134u, 6u, 8u, 94u, 24u, 17u, 212u, 101u, 26u, 16u, 204u, 35u,
152u, 188u, 134u, 192u, 26u, 226u, 242u, 24u, 84u, 144u, 26u, 195u,
84u, 94u, 72u, 103u, 140u, 227u, 66u, 64u, 140u, 67u, 68u, 94u, 99u,
34u, 35u, 144u, 249u, 23u, 146u, 67u, 72u, 141u, 131u, 228u, 94u, 98u,
243u, 23u, 146u, 67u, 48u, 141u, 162u, 248u, 220u, 134u, 192u, 26u,
226u, 242u, 64u, 107u, 13u, 81u, 121u, 33u, 158u, 51u, 141u, 9u, 2u,
49u, 13u, 17u, 121u, 140u, 136u, 142u, 3u, 84u, 110u, 67u, 228u, 94u,
72u, 141u, 131u, 228u, 94u, 99u, 114u, 67u, 72u, 141u, 131u, 228u,
94u, 98u, 242u, 73u, 17u, 204u, 104u, 73u, 28u, 36u, 48u, 49u, 132u,
192u, 245u, 48u, 84u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u,
19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static ScmObj libsymwrapped_identifierP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymwrapped_identifierP__STUB, 1, 0,1, SCM_FALSE,0, libsymwrapped_identifierP, NULL, NULL);

static ScmObj libsymidentifierP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymidentifierP__STUB, 1, 0,1, SCM_FALSE,0, libsymidentifierP, SCM_MAKE_INT(SCM_VM_IDENTIFIERP), NULL);

static ScmObj libsymidentifier_TOsymbol(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymidentifier_TOsymbol__STUB, 1, 0,1, SCM_FALSE,0, libsymidentifier_TOsymbol, NULL, NULL);

static ScmObj libsymmake_identifier(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsymmake_identifier__STUB, 3, 0,SCM_FALSE,libsymmake_identifier, NULL, NULL);

static ScmObj libsymidentifier_module(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymidentifier_module__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymidentifier_module, NULL, NULL);

static ScmObj libsymidentifier_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymidentifier_name__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymidentifier_name, NULL, NULL);

static ScmObj libsymidentifier_env(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymidentifier_env__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymidentifier_env, NULL, NULL);

static unsigned char uvector__00015[] = {
 0u, 3u, 145u, 6u, 4u, 142u, 200u, 227u, 225u, 130u, 60u, 142u, 196u,
123u, 31u, 17u, 31u, 199u, 196u, 145u, 199u, 67u, 2u, 96u, 238u, 71u,
28u, 12u, 9u, 31u, 17u, 198u, 131u, 2u, 96u, 238u, 71u, 24u, 12u, 9u,
130u, 233u, 28u, 92u, 48u, 36u, 124u, 71u, 21u, 12u, 9u, 130u, 233u,
28u, 80u, 48u, 36u, 118u, 71u, 18u, 12u, 12u, 177u, 240u, 76u, 17u,
163u, 178u, 71u, 17u, 12u, 9u, 31u, 17u, 196u, 3u, 3u, 32u, 17u, 240u,
138u, 100u, 9u, 4u, 146u, 19u, 30u, 50u, 71u, 14u, 12u, 9u, 147u,
193u, 28u, 52u, 48u, 36u, 130u, 71u, 11u, 12u, 9u, 32u, 17u, 194u,
67u, 2u, 100u, 240u, 71u, 8u, 12u, 12u, 128u, 71u, 97u, 214u, 25u,
126u, 144u, 73u, 34u, 45u, 143u, 130u, 100u, 240u, 19u, 4u, 104u,
236u, 146u, 56u, 56u, 96u, 76u, 231u, 136u, 224u, 193u, 129u, 36u,
18u, 56u, 16u, 96u, 72u, 100u, 142u, 0u, 24u, 19u, 57u, 226u, 24u,
131u, 3u, 28u, 130u, 27u, 99u, 176u, 153u, 207u, 4u, 207u, 56u, 146u,
64u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 33u, 36u, 130u, 27u, 99u, 176u, 235u, 12u,
191u, 72u, 36u, 69u, 177u, 240u, 138u, 100u, 9u, 4u, 136u, 242u, 59u,
17u, 236u, 124u, 68u, 127u, 31u, 19u, 29u, 146u, 72u, 225u, 33u, 129u,
142u, 65u, 76u, 15u, 200u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u,
4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static ScmObj libsymidentifier_toplevelP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsymidentifier_toplevelP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsymidentifier_toplevelP, NULL, NULL);

static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[108];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("symbol\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsym.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("symbol->string", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<symbol>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("string->symbol", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<string>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("gensym", 6, 6),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("prefix", 6, 6),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("symbol-interned\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("string->uninterned-symbol", 25, 25),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("symbol-sans-prefix", 18, 18),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("boolean\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("symbol-append", 13, 13),
      SCM_STRING_CONST_INITIALIZER("maybe-flag", 10, 10),
      SCM_STRING_CONST_INITIALIZER("syms", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string-append", 13, 13),
      SCM_STRING_CONST_INITIALIZER("map", 3, 3),
      SCM_STRING_CONST_INITIALIZER("do-append", 9, 9),
      SCM_STRING_CONST_INITIALIZER("objs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("interned\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("keyword\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER(":", 1, 1),
      SCM_STRING_CONST_INITIALIZER("keyword->string", 15, 15),
      SCM_STRING_CONST_INITIALIZER("x->string", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche.interpolate", 18, 18),
      SCM_STRING_CONST_INITIALIZER("identifier->symbol", 18, 18),
      SCM_STRING_CONST_INITIALIZER("->string", 8, 8),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("", 0, 0),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("make-case-lambda", 16, 16),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("symbol=\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2160", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2158", 5, 5),
      SCM_STRING_CONST_INITIALIZER("find", 4, 4),
      SCM_STRING_CONST_INITIALIZER("symbol required, but got:", 25, 25),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2159", 5, 5),
      SCM_STRING_CONST_INITIALIZER("every", 5, 5),
      SCM_STRING_CONST_INITIALIZER("y", 1, 1),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("make-keyword", 12, 12),
      SCM_STRING_CONST_INITIALIZER("get-keyword", 11, 11),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("list", 4, 4),
      SCM_STRING_CONST_INITIALIZER("fallback", 8, 8),
      SCM_STRING_CONST_INITIALIZER("delete-keyword", 14, 14),
      SCM_STRING_CONST_INITIALIZER("delete-keyword!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<keyword>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("delete-keywords", 15, 15),
      SCM_STRING_CONST_INITIALIZER("incomplete key list", 19, 19),
      SCM_STRING_CONST_INITIALIZER("rec", 3, 3),
      SCM_STRING_CONST_INITIALIZER("kvs", 3, 3),
      SCM_STRING_CONST_INITIALIZER("ks", 2, 2),
      SCM_STRING_CONST_INITIALIZER("kvlist", 6, 6),
      SCM_STRING_CONST_INITIALIZER("delete-keywords!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("set-cdr!", 8, 8),
      SCM_STRING_CONST_INITIALIZER("wrapped-identifier\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("identifier\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("make-identifier", 15, 15),
      SCM_STRING_CONST_INITIALIZER("mod", 3, 3),
      SCM_STRING_CONST_INITIALIZER("env", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<module>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<list>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("identifier-module", 17, 17),
      SCM_STRING_CONST_INITIALIZER("id", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<identifier>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("identifier-name", 15, 15),
      SCM_STRING_CONST_INITIALIZER("identifier-env", 14, 14),
      SCM_STRING_CONST_INITIALIZER("identifier-append", 17, 17),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("identifier-toplevel\077", 20, 20),
      SCM_STRING_CONST_INITIALIZER("G2153", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2152", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string-interpolate*", 19, 19),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("letrec", 6, 6),
      SCM_STRING_CONST_INITIALIZER("^x", 2, 2),
      SCM_STRING_CONST_INITIALIZER("case-lambda", 11, 11),
      SCM_STRING_CONST_INITIALIZER("G2154", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2151", 5, 5),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("z", 1, 1),
      SCM_STRING_CONST_INITIALIZER("$", 1, 1),
      SCM_STRING_CONST_INITIALIZER("list*", 5, 5),
      SCM_STRING_CONST_INITIALIZER("if-let1", 7, 7),
      SCM_STRING_CONST_INITIALIZER("memv", 4, 4),
      SCM_STRING_CONST_INITIALIZER("cut-tail!", 9, 9),
      SCM_STRING_CONST_INITIALIZER("prev", 4, 4),
      SCM_STRING_CONST_INITIALIZER("head", 4, 4),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("first-id", 8, 8),
  },
};
static struct scm__rcRec {
  ScmUVector d2157[16];
  ScmCompiledCode d2156[16];
  ScmWord d2155[377];
  ScmPair d2150[264] SCM_ALIGN_PAIR;
  ScmObj d2149[361];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2157 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 98, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 90, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 148, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 10, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 147, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 29, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 184, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 81, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 184, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 79, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 92, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 365, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 138, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 170, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 63, uvector__00016, 0, NULL),
  },
  {   /* ScmCompiledCode d2156 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (#f symbol-append) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[0])), 20,
            11, 1, 1, SCM_OBJ(&scm__rc.d2150[65]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[68]),
            SCM_OBJ(&scm__rc.d2156[4]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (#f do-append) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[20])), 23,
            21, 2, 0, SCM_OBJ(&scm__rc.d2150[70]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[77]),
            SCM_OBJ(&scm__rc.d2156[4]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (#f ->string) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[43])), 37,
            18, 1, 0, SCM_OBJ(&scm__rc.d2150[79]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[85]),
            SCM_OBJ(&scm__rc.d2156[4]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (#f symbol-append) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[80])), 2,
            0, 0, 0, SCM_OBJ(&scm__rc.d2150[65]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[87]),
            SCM_OBJ(&scm__rc.d2156[4]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[82])), 34,
            17, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (symbol=? #:G2160) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[116])), 4,
            0, 1, 0, SCM_OBJ(&scm__rc.d2150[95]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[101]),
            SCM_OBJ(&scm__rc.d2156[8]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[120])), 4,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[110]),
            SCM_OBJ(&scm__rc.d2156[7]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* symbol=? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[124])), 39,
            16, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[117]),
            SCM_OBJ(&scm__rc.d2156[8]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[163])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* rec */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[180])), 37,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[177]),
            SCM_OBJ(&scm__rc.d2156[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* delete-keywords */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[217])), 6,
            8, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[185]),
            SCM_OBJ(&scm__rc.d2156[11]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[223])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* delete-keywords! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[238])), 74,
            35, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[190]),
            SCM_OBJ(&scm__rc.d2156[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[312])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* identifier-append */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[327])), 35,
            21, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[255]),
            SCM_OBJ(&scm__rc.d2156[15]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2155[362])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2155 */
    /* (#f symbol-append) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[0]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* boolean? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[0]) + 12),
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x00000049    /*   8 (LREF1-PUSH) */,
    0x00000043    /*   9 (LREF12) */,
    0x0000201d    /*  10 (LOCAL-ENV-TAIL-CALL 2) */,
    0x00000014    /*  11 (RET) */,
    0x00000049    /*  12 (LREF1-PUSH) */,
    0x0000003d    /*  13 (LREF0) */,
    0x00000067    /*  14 (CONS-PUSH) */,
    0x00000006    /*  15 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00000043    /*  17 (LREF12) */,
    0x0000201d    /*  18 (LOCAL-ENV-TAIL-CALL 2) */,
    0x00000014    /*  19 (RET) */,
    /* (#f do-append) */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[20]) + 11),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x0000200e    /*   4 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[20]) + 10),
    0x0000004d    /*   6 (LREF11-PUSH) */,
    0x00000049    /*   7 (LREF1-PUSH) */,
    0x0000205f    /*   8 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00002095    /*  10 (TAIL-APPLY 2) */,
    0x0000000d    /*  11 (PUSH) */,
    0x0000003d    /*  12 (LREF0) */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[20]) + 19),
    0x0000005d    /*  15 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* string->symbol */,
    0x00000013    /*  17 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[20]) + 21),
    0x0000005d    /*  19 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* string->uninterned-symbol */,
    0x00001012    /*  21 (TAIL-CALL 1) */,
    0x00000014    /*  22 (RET) */,
    /* (#f ->string) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* keyword? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]) + 21),
    0x00000006    /*   7 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[35])) /* ":" */,
    0x0000100e    /*   9 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]) + 18),
    0x0000100e    /*  11 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]) + 16),
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x0000105f    /*  14 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* keyword->string */,
    0x00001062    /*  16 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* x->string */,
    0x00002063    /*  18 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00000014    /*  20 (RET) */,
    0x0000003d    /*  21 (LREF0) */,
    0x000000a0    /*  22 (IDENTIFIERP) */,
    0x0000001e    /*  23 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]) + 33),
    0x0000100e    /*  25 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]) + 30),
    0x00000048    /*  27 (LREF0-PUSH) */,
    0x0000105f    /*  28 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* identifier->symbol */,
    0x00001063    /*  30 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol->string */,
    0x00000014    /*  32 (RET) */,
    0x00000048    /*  33 (LREF0-PUSH) */,
    0x00001060    /*  34 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* x->string */,
    0x00000014    /*  36 (RET) */,
    /* (#f symbol-append) */
    0x0000000a    /*   0 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* || */,
    /* %toplevel */
    0x00004019    /*   0 (LOCAL-ENV-CLOSURES 4) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[91])) /* (#<compiled-code (#f symbol-append)@0x7c8767f5cf60> #<compiled-code (#f do-append)@0x7c8767f5cf00> #<compiled-code (#f ->string)@0x7c8767f5cea0> #<compiled-code (#f symbol-append)@0x7c8767f5ce40>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[82]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol-append */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[82]) + 31),
    0x00002019    /*  11 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[93])) /* (#<undef> #<undef>) */,
    0x00000042    /*  13 (LREF11) */,
    0x000010e8    /*  14 (ENV-SET 1) */,
    0x00000043    /*  15 (LREF12) */,
    0x000000e8    /*  16 (ENV-SET 0) */,
    0x0000400e    /*  17 (PRE-CALL 4) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[82]) + 30),
    0x00000007    /*  19 (CONSTI-PUSH 0) */,
    0x00001007    /*  20 (CONSTI-PUSH 1) */,
    0x00000009    /*  21 (CONSTF-PUSH) */,
    0x0000004c    /*  22 (LREF10-PUSH) */,
    0x00c0103c    /*  23 (LREF 1 3) */,
    0x00002088    /*  24 (LIST 2) */,
    0x0000000d    /*  25 (PUSH) */,
    0x00000006    /*  26 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol-append */,
    0x0000405f    /*  28 (GREF-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* make-case-lambda */,
    0x00000014    /*  30 (RET) */,
    0x00000015    /*  31 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol-append */,
    0x00000014    /*  33 (RET) */,
    /* (symbol=? #:G2160) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009c    /*   1 (SYMBOLP) */,
    0x00000092    /*   2 (NOT) */,
    0x00000014    /*   3 (RET) */,
    /* (symbol=? #f) */
    0x0000004e    /*   0 (LREF12-PUSH) */,
    0x0000003d    /*   1 (LREF0) */,
    0x0000008f    /*   2 (EQ) */,
    0x00000014    /*   3 (RET) */,
    /* symbol=? */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[124]) + 9),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x0000004a    /*   3 (LREF2-PUSH) */,
    0x00000049    /*   4 (LREF1-PUSH) */,
    0x0000003d    /*   5 (LREF0) */,
    0x00003089    /*   6 (LIST-STAR 3) */,
    0x00002062    /*   7 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* find */,
    0x00001018    /*   9 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  10 (LREF0) */,
    0x0000001e    /*  11 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[124]) + 22),
    0x0000200e    /*  13 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[124]) + 22),
    0x00000006    /*  15 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[50])) /* "symbol required, but got:" */,
    0x00000048    /*  17 (LREF0-PUSH) */,
    0x0000205f    /*  18 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[124]) + 22),
    0x0000001a    /*  22 (POP-LOCAL-ENV) */,
    0x0000004a    /*  23 (LREF2-PUSH) */,
    0x0000003e    /*  24 (LREF1) */,
    0x00000020    /*  25 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[124]) + 38),
    0x0000003d    /*  27 (LREF0) */,
    0x00000022    /*  28 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[124]) + 31),
    0x00000014    /*  30 (RET) */,
    0x00000016    /*  31 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2156[6])) /* #<compiled-code (symbol=? #f)@0x7c876708fd20> */,
    0x0000000d    /*  33 (PUSH) */,
    0x00000048    /*  34 (LREF0-PUSH) */,
    0x00002060    /*  35 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* every */,
    0x00000014    /*  37 (RET) */,
    0x00000014    /*  38 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[102])) /* (#<compiled-code (symbol=? #:G2160)@0x7c876708fde0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[163]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol=? */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[163]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2156[7])) /* #<compiled-code symbol=?@0x7c876708fd80> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol=? */,
    0x00000014    /*  16 (RET) */,
    /* (delete-keywords rec) */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[180]) + 5),
    0x00000003    /*   3 (CONSTN) */,
    0x00000014    /*   4 (RET) */,
    0x00000076    /*   5 (LREF0-CDR) */,
    0x00000022    /*   6 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[180]) + 14),
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[65])) /* "incomplete key list" */,
    0x0000004f    /*  10 (LREF20-PUSH) */,
    0x00002060    /*  11 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  13 (RET) */,
    0x0000006a    /*  14 (LREF0-CAR) */,
    0x0000000d    /*  15 (PUSH) */,
    0x00000045    /*  16 (LREF21) */,
    0x0000008c    /*  17 (MEMV) */,
    0x0000001e    /*  18 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[180]) + 25),
    0x0000003d    /*  20 (LREF0) */,
    0x00000087    /*  21 (CDDR-PUSH) */,
    0x00000041    /*  22 (LREF10) */,
    0x0000101d    /*  23 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  24 (RET) */,
    0x0000006a    /*  25 (LREF0-CAR) */,
    0x0000000d    /*  26 (PUSH) */,
    0x0000003d    /*  27 (LREF0) */,
    0x00000083    /*  28 (CADR-PUSH) */,
    0x0000100e    /*  29 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[180]) + 35),
    0x0000003d    /*  31 (LREF0) */,
    0x00000087    /*  32 (CDDR-PUSH) */,
    0x00000041    /*  33 (LREF10) */,
    0x0000101c    /*  34 (LOCAL-ENV-CALL 1) */,
    0x00003089    /*  35 (LIST-STAR 3) */,
    0x00000014    /*  36 (RET) */,
    /* delete-keywords */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[178])) /* (#<compiled-code (delete-keywords rec)@0x7c876700dd80>) */,
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x0000003d    /*   3 (LREF0) */,
    0x0000101d    /*   4 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*   5 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[223]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* delete-keywords */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[223]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2156[10])) /* #<compiled-code delete-keywords@0x7c876700dde0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* delete-keywords */,
    0x00000014    /*  14 (RET) */,
    /* delete-keywords! */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00001017    /*   1 (LOCAL-ENV 1) */,
    0x0000003d    /*   2 (LREF0) */,
    0x00000022    /*   3 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 7),
    0x00000003    /*   5 (CONSTN) */,
    0x00000014    /*   6 (RET) */,
    0x00000076    /*   7 (LREF0-CDR) */,
    0x00000022    /*   8 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 16),
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[65])) /* "incomplete key list" */,
    0x0000004c    /*  12 (LREF10-PUSH) */,
    0x00002060    /*  13 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  15 (RET) */,
    0x0000006a    /*  16 (LREF0-CAR) */,
    0x0000000d    /*  17 (PUSH) */,
    0x00000042    /*  18 (LREF11) */,
    0x0000008c    /*  19 (MEMV) */,
    0x0000001e    /*  20 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 27),
    0x0000003d    /*  22 (LREF0) */,
    0x00000087    /*  23 (CDDR-PUSH) */,
    0x0000101b    /*  24 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 2),
    0x00000014    /*  26 (RET) */,
    0x0000200e    /*  27 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 72),
    0x0000003d    /*  29 (LREF0) */,
    0x00000087    /*  30 (CDDR-PUSH) */,
    0x00000048    /*  31 (LREF0-PUSH) */,
    0x00002017    /*  32 (LOCAL-ENV 2) */,
    0x0000003e    /*  33 (LREF1) */,
    0x00000022    /*  34 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 37),
    0x00000014    /*  36 (RET) */,
    0x00000077    /*  37 (LREF1-CDR) */,
    0x00000022    /*  38 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 46),
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[65])) /* "incomplete key list" */,
    0x0000004f    /*  42 (LREF20-PUSH) */,
    0x00002060    /*  43 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  45 (RET) */,
    0x0000006b    /*  46 (LREF1-CAR) */,
    0x0000000d    /*  47 (PUSH) */,
    0x00000045    /*  48 (LREF21) */,
    0x0000008c    /*  49 (MEMV) */,
    0x0000001e    /*  50 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 66),
    0x0000200e    /*  52 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 60),
    0x00000076    /*  54 (LREF0-CDR) */,
    0x0000000d    /*  55 (PUSH) */,
    0x0000003e    /*  56 (LREF1) */,
    0x00000087    /*  57 (CDDR-PUSH) */,
    0x0000205f    /*  58 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* set-cdr! */,
    0x0000003e    /*  60 (LREF1) */,
    0x00000087    /*  61 (CDDR-PUSH) */,
    0x00000048    /*  62 (LREF0-PUSH) */,
    0x0000101b    /*  63 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 33),
    0x00000014    /*  65 (RET) */,
    0x0000003e    /*  66 (LREF1) */,
    0x00000087    /*  67 (CDDR-PUSH) */,
    0x00000049    /*  68 (LREF1-PUSH) */,
    0x0000101b    /*  69 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]) + 33),
    0x00000014    /*  71 (RET) */,
    0x00000053    /*  72 (LREF0-RET) */,
    0x00000014    /*  73 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[312]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* delete-keywords! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[312]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2156[12])) /* #<compiled-code delete-keywords!@0x7c8766c87720> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* delete-keywords! */,
    0x00000014    /*  14 (RET) */,
    /* identifier-append */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]) + 8),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol-append */,
    0x00000006    /*   4 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000003d    /*   6 (LREF0) */,
    0x00003095    /*   7 (TAIL-APPLY 3) */,
    0x00001018    /*   8 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]) + 16),
    0x0000005e    /*  11 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* wrapped-identifier? */,
    0x0000004c    /*  13 (LREF10-PUSH) */,
    0x0000205f    /*  14 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* find */,
    0x00001018    /*  16 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  17 (LREF0) */,
    0x0000001e    /*  18 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]) + 34),
    0x0000004c    /*  20 (LREF10-PUSH) */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]) + 26),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000105f    /*  24 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* identifier-module */,
    0x0000100f    /*  26 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]) + 31),
    0x00000048    /*  28 (LREF0-PUSH) */,
    0x0000105f    /*  29 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* identifier-env */,
    0x00003063    /*  31 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make-identifier */,
    0x00000014    /*  33 (RET) */,
    0x00000057    /*  34 (LREF10-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[362]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* identifier-append */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2155[362]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2156[14])) /* #<compiled-code identifier-append@0x7c8766df5360> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* identifier-append */,
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
       { SCM_MAKE_INT(47U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[13])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_OBJ(&scm__rc.d2150[15]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[12]), SCM_OBJ(&scm__rc.d2150[16])},
       { SCM_MAKE_INT(49U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[19])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[21])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_OBJ(&scm__rc.d2150[23]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[20]), SCM_OBJ(&scm__rc.d2150[24])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[26])},
       { SCM_MAKE_INT(52U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[28])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[29])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[31])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[32])},
       { SCM_OBJ(&scm__rc.d2150[33]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[30]), SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(53U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[38])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[40])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[41])},
       { SCM_OBJ(&scm__rc.d2150[42]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[39]), SCM_OBJ(&scm__rc.d2150[43])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(54U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[46])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[47])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[49])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[50])},
       { SCM_OBJ(&scm__rc.d2150[51]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[48]), SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[54])},
       { SCM_MAKE_INT(56U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[56])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[57])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[59])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_OBJ(&scm__rc.d2150[61]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[58]), SCM_OBJ(&scm__rc.d2150[62])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[64])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_OBJ(&scm__rc.d2150[65]), SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_OBJ(&scm__rc.d2150[67]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[71])},
       { SCM_MAKE_INT(69U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[73])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_OBJ(&scm__rc.d2150[75]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(65U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_OBJ(&scm__rc.d2150[83]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[65]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[86]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2156[3]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2156[2]), SCM_OBJ(&scm__rc.d2150[88])},
       { SCM_OBJ(&scm__rc.d2156[1]), SCM_OBJ(&scm__rc.d2150[89])},
       { SCM_OBJ(&scm__rc.d2156[0]), SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[92])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[94])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(82U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[97])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_OBJ(&scm__rc.d2150[99]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2156[5]), SCM_NIL},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[103])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(84U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[106])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_OBJ(&scm__rc.d2150[108]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_MAKE_INT(81U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[114])},
       { SCM_OBJ(&scm__rc.d2150[115]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(92U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[118])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[121])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[122])},
       { SCM_OBJ(&scm__rc.d2150[123]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[120]), SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_MAKE_INT(94U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[126])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[129])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[130])},
       { SCM_OBJ(&scm__rc.d2150[131]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[128]), SCM_OBJ(&scm__rc.d2150[132])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[134])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[135])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[136])},
       { SCM_MAKE_INT(101U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[138])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[139])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[141])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[142])},
       { SCM_OBJ(&scm__rc.d2150[143]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[140]), SCM_OBJ(&scm__rc.d2150[144])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[146])},
       { SCM_MAKE_INT(104U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[148])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[149])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[151])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[152])},
       { SCM_OBJ(&scm__rc.d2150[153]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[150]), SCM_OBJ(&scm__rc.d2150[154])},
       { SCM_MAKE_INT(105U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[156])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[159])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[160])},
       { SCM_OBJ(&scm__rc.d2150[161]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[158]), SCM_OBJ(&scm__rc.d2150[162])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(107U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[165])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[166])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[168])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_OBJ(&scm__rc.d2150[170]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[167]), SCM_OBJ(&scm__rc.d2150[171])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[173])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[174]), SCM_OBJ(&scm__rc.d2150[175])},
       { SCM_OBJ(&scm__rc.d2150[176]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2156[9]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[179])},
       { SCM_MAKE_INT(109U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[181])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[182])},
       { SCM_OBJ(&scm__rc.d2150[183]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(117U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[186])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[187])},
       { SCM_OBJ(&scm__rc.d2150[188]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(144U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[191])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[192])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[194])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[195])},
       { SCM_OBJ(&scm__rc.d2150[196]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[193]), SCM_OBJ(&scm__rc.d2150[197])},
       { SCM_MAKE_INT(146U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[199])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[200])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[202])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[203])},
       { SCM_OBJ(&scm__rc.d2150[204]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[201]), SCM_OBJ(&scm__rc.d2150[205])},
       { SCM_MAKE_INT(149U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[207])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[208])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[210])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_OBJ(&scm__rc.d2150[212]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[209]), SCM_OBJ(&scm__rc.d2150[213])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[215])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[216])},
       { SCM_MAKE_INT(156U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[218])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[219])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[221])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[222])},
       { SCM_OBJ(&scm__rc.d2150[223]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[220]), SCM_OBJ(&scm__rc.d2150[224])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(158U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[227])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[228])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[230])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[231])},
       { SCM_OBJ(&scm__rc.d2150[232]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[229]), SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_MAKE_INT(160U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[235])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[236])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[238])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[239])},
       { SCM_OBJ(&scm__rc.d2150[240]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[237]), SCM_OBJ(&scm__rc.d2150[241])},
       { SCM_MAKE_INT(162U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[243])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[244])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[246])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[247])},
       { SCM_OBJ(&scm__rc.d2150[248]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[245]), SCM_OBJ(&scm__rc.d2150[249])},
       { SCM_MAKE_INT(174U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[251])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[252])},
       { SCM_OBJ(&scm__rc.d2150[253]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(180U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[256])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[257])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[259])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[260])},
       { SCM_OBJ(&scm__rc.d2150[261]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[262])},
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(5, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(67, FALSE),
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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

static ScmObj libsymsymbolP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("symbol?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_SYMBOLP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsymsymbol_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmSymbol* obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("symbol->string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!SCM_SYMBOLP(obj_scm)) Scm_Error("<symbol> required, but got %S", obj_scm);
  obj = SCM_SYMBOL(obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 48 "libsym.scm"
{SCM_RESULT=(SCM_OBJ(SCM_SYMBOL_NAME(obj)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymstring_TOsymbol(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmString* obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string->symbol");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(obj_scm)) Scm_Error("<string> required, but got %S", obj_scm);
  obj = SCM_STRING(obj_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Intern(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymgensym(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj prefix_scm;
  ScmString* prefix;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("gensym");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    prefix_scm = SCM_SUBRARGS[0];
  } else {
    prefix_scm = SCM_FALSE;
  }
  if (!SCM_MAYBE_P(SCM_STRINGP, prefix_scm)) Scm_Error("<string> or #f required, but got %S", prefix_scm);
  prefix = SCM_MAYBE(SCM_STRING, prefix_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Gensym(prefix));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymsymbol_internedP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmSymbol* s;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("symbol-interned?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_SYMBOLP(s_scm)) Scm_Error("<symbol> required, but got %S", s_scm);
  s = SCM_SYMBOL(s_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_SYMBOL_INTERNED(s));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsymstring_TOuninterned_symbol(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmString* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string->uninterned-symbol");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("<string> required, but got %S", name_scm);
  name = SCM_STRING(name_scm);
  {
{
ScmObj SCM_RESULT;

#line 55 "libsym.scm"
{SCM_RESULT=(Scm_MakeSymbol(name,FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymsymbol_sans_prefix(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmSymbol* s;
  ScmObj p_scm;
  ScmSymbol* p;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("symbol-sans-prefix");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_SYMBOLP(s_scm)) Scm_Error("<symbol> required, but got %S", s_scm);
  s = SCM_SYMBOL(s_scm);
  p_scm = SCM_SUBRARGS[1];
  if (!SCM_SYMBOLP(p_scm)) Scm_Error("<symbol> required, but got %S", p_scm);
  p = SCM_SYMBOL(p_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SymbolSansPrefix(s,p));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymkeywordP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("keyword?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_KEYWORDP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsymmake_keyword(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmObj name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("make-keyword");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  {
{
ScmObj SCM_RESULT;

#line 95 "libsym.scm"
{ScmString* sname=NULL;
if (SCM_STRINGP(name)){sname=(SCM_STRING(name));}else if(
SCM_SYMBOLP(name)){sname=(SCM_SYMBOL_NAME(name));} else {
SCM_TYPE_ERROR(name,"string or symbol");}
{SCM_RESULT=(Scm_MakeKeyword(sname));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymget_keyword(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj key_scm;
  ScmObj key;
  ScmObj list_scm;
  ScmObj list;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("get-keyword");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  key_scm = SCM_SUBRARGS[0];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  list_scm = SCM_SUBRARGS[1];
  if (!(list_scm)) Scm_Error("scheme object required, but got %S", list_scm);
  list = (list_scm);
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
{SCM_RESULT=(Scm_GetKeyword(key,list,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymdelete_keyword(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj key_scm;
  ScmObj key;
  ScmObj list_scm;
  ScmObj list;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("delete-keyword");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  key_scm = SCM_SUBRARGS[0];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  list_scm = SCM_SUBRARGS[1];
  if (!(list_scm)) Scm_Error("scheme object required, but got %S", list_scm);
  list = (list_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_DeleteKeyword(key,list));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymdelete_keywordX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj key_scm;
  ScmObj key;
  ScmObj list_scm;
  ScmObj list;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("delete-keyword!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  key_scm = SCM_SUBRARGS[0];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  list_scm = SCM_SUBRARGS[1];
  if (!(list_scm)) Scm_Error("scheme object required, but got %S", list_scm);
  list = (list_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_DeleteKeywordX(key,list));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymkeyword_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj key_scm;
  ScmKeyword* key;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("keyword->string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  key_scm = SCM_SUBRARGS[0];
  if (!SCM_KEYWORDP(key_scm)) Scm_Error("<keyword> required, but got %S", key_scm);
  key = SCM_KEYWORD(key_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_KeywordToString(key));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymwrapped_identifierP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("wrapped-identifier?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_IDENTIFIERP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsymidentifierP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("identifier?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 148 "libsym.scm"
{SCM_RESULT=((SCM_SYMBOLP(obj))||(SCM_IDENTIFIERP(obj)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsymidentifier_TOsymbol(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("identifier->symbol");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 150 "libsym.scm"
if (SCM_SYMBOLP(obj)){{SCM_RESULT=(obj);goto SCM_STUB_RETURN;}}else if(
SCM_IDENTIFIERP(obj)){
{SCM_RESULT=(SCM_OBJ(Scm_UnwrapIdentifier(SCM_IDENTIFIER(obj))));goto SCM_STUB_RETURN;}} else {
Scm_Error("identifier required, but got %S",obj);}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymmake_identifier(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmObj name;
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj env_scm;
  ScmObj env;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("make-identifier");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  mod_scm = SCM_SUBRARGS[1];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  env_scm = SCM_SUBRARGS[2];
  if (!SCM_LISTP(env_scm)) Scm_Error("list required, but got %S", env_scm);
  env = (env_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeIdentifier(name,mod,env));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymidentifier_module(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj id_scm;
  ScmIdentifier* id;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("identifier-module");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  id_scm = SCM_SUBRARGS[0];
  if (!SCM_IDENTIFIERP(id_scm)) Scm_Error("<identifier> required, but got %S", id_scm);
  id = SCM_IDENTIFIER(id_scm);
  {
{
ScmObj SCM_RESULT;

#line 159 "libsym.scm"
{SCM_RESULT=(SCM_OBJ((id)->module));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymidentifier_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj id_scm;
  ScmIdentifier* id;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("identifier-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  id_scm = SCM_SUBRARGS[0];
  if (!SCM_IDENTIFIERP(id_scm)) Scm_Error("<identifier> required, but got %S", id_scm);
  id = SCM_IDENTIFIER(id_scm);
  {
{
ScmObj SCM_RESULT;

#line 161 "libsym.scm"
{SCM_RESULT=(SCM_OBJ((id)->name));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymidentifier_env(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj id_scm;
  ScmIdentifier* id;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("identifier-env");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  id_scm = SCM_SUBRARGS[0];
  if (!SCM_IDENTIFIERP(id_scm)) Scm_Error("<identifier> required, but got %S", id_scm);
  id = SCM_IDENTIFIER(id_scm);
  {
{
ScmObj SCM_RESULT;

#line 163 "libsym.scm"
{SCM_RESULT=(Scm_IdentifierEnv(id));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsymidentifier_toplevelP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj id_scm;
  ScmIdentifier* id;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("identifier-toplevel?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  id_scm = SCM_SUBRARGS[0];
  if (!SCM_IDENTIFIERP(id_scm)) Scm_Error("<identifier> required, but got %S", id_scm);
  id = SCM_IDENTIFIER(id_scm);
  {
{
int SCM_RESULT;

#line 181 "libsym.scm"
{SCM_RESULT=(SCM_NULLP(Scm_IdentifierEnv(id)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[4])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[8])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[11])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[13])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[15])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[94];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[85];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[86];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[340];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[81];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[96];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[26];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[59];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[89];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[91];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[112];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[95];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[341];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[104];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[113];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[16];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[109];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[217];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = SCM_OBJ(&scm__sc.d2148[35]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[102];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[100];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[342];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[116];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[343];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[39];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[84];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[344];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[345];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[346];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[347];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[348];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[0];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[127];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[135];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[139];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[349];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[350];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[141];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[140];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = SCM_OBJ(&scm__sc.d2148[50]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[351];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[131];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[352];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[353];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[126];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[354];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[125];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[200];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[199];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[355];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[202];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = SCM_OBJ(&scm__sc.d2148[65]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[203];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[198];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[356];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[357];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[210];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[358];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[208];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[359];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[220];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[235];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[360];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[248];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[215];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[257];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[271]), i++) = scm__rc.d2149[250];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[271]);
}
void Scm_Init_libsym() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* symbol? */
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
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("symbol?")), SCM_OBJ(&libsymsymbolP__STUB), SCM_BINDING_INLINABLE);
  libsymsymbolP__STUB.common.info = scm__rc.d2149[5];
  libsymsymbolP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* symbol->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[12]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[13]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[15]), scm__rc.d2149[3]);
  scm__rc.d2149[17] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[17]));
  scm__rc.d2149[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* <symbol> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[19]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[19]))[4] = scm__rc.d2149[18];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[19]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[19]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("symbol->string")), SCM_OBJ(&libsymsymbol_TOstring__STUB), SCM_BINDING_INLINABLE);
  libsymsymbol_TOstring__STUB.common.info = scm__rc.d2149[17];
  libsymsymbol_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[19]);
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* string->symbol */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[20]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[21]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[22]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[23]), scm__rc.d2149[3]);
  scm__rc.d2149[27] = Scm_MakeExtendedPair(scm__rc.d2149[26], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[25]));
  scm__rc.d2149[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* <string> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[29]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[29]))[4] = scm__rc.d2149[28];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[29]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[29]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string->symbol")), SCM_OBJ(&libsymstring_TOsymbol__STUB), SCM_BINDING_INLINABLE);
  libsymstring_TOsymbol__STUB.common.info = scm__rc.d2149[27];
  libsymstring_TOsymbol__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[29]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[36] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* gensym */
  scm__rc.d2149[37] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14]))); /* :optional */
  scm__rc.d2149[38] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* prefix */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[27]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[30]), scm__rc.d2149[2]);
  scm__rc.d2149[39] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[31]), scm__rc.d2149[36]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[32]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[33]), scm__rc.d2149[3]);
  scm__rc.d2149[40] = Scm_MakeExtendedPair(scm__rc.d2149[36], SCM_OBJ(&scm__rc.d2150[27]), SCM_OBJ(&scm__rc.d2150[35]));
  scm__rc.d2149[41] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[3] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[4] = scm__rc.d2149[41];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("gensym")), SCM_OBJ(&libsymgensym__STUB), 0);
  libsymgensym__STUB.common.info = scm__rc.d2149[40];
  libsymgensym__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[42]);
  scm__rc.d2149[49] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* symbol-interned? */
  scm__rc.d2149[50] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* s */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[36]), scm__rc.d2149[50]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[39]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[40]), scm__rc.d2149[49]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[41]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[42]), scm__rc.d2149[3]);
  scm__rc.d2149[51] = Scm_MakeExtendedPair(scm__rc.d2149[49], SCM_OBJ(&scm__rc.d2150[36]), SCM_OBJ(&scm__rc.d2150[44]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[52]))[3] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[52]))[4] = scm__rc.d2149[18];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[52]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[52]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("symbol-interned?")), SCM_OBJ(&libsymsymbol_internedP__STUB), 0);
  libsymsymbol_internedP__STUB.common.info = scm__rc.d2149[51];
  libsymsymbol_internedP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[52]);
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* string->uninterned-symbol */
  scm__rc.d2149[60] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[48]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[49]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[50]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[51]), scm__rc.d2149[3]);
  scm__rc.d2149[61] = Scm_MakeExtendedPair(scm__rc.d2149[59], SCM_OBJ(&scm__rc.d2150[45]), SCM_OBJ(&scm__rc.d2150[53]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[62]))[3] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[62]))[4] = scm__rc.d2149[28];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[62]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[62]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->uninterned-symbol")), SCM_OBJ(&libsymstring_TOuninterned_symbol__STUB), 0);
  libsymstring_TOuninterned_symbol__STUB.common.info = scm__rc.d2149[61];
  libsymstring_TOuninterned_symbol__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[62]);
  scm__rc.d2149[69] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* symbol-sans-prefix */
  scm__rc.d2149[70] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* p */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[70]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[55]), scm__rc.d2149[50]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[58]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[61]), scm__rc.d2149[3]);
  scm__rc.d2149[71] = Scm_MakeExtendedPair(scm__rc.d2149[69], SCM_OBJ(&scm__rc.d2150[55]), SCM_OBJ(&scm__rc.d2150[63]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[72]))[3] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[72]))[4] = scm__rc.d2149[18];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[72]))[5] = scm__rc.d2149[18];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[72]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[72]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("symbol-sans-prefix")), SCM_OBJ(&libsymsymbol_sans_prefix__STUB), 0);
  libsymsymbol_sans_prefix__STUB.common.info = scm__rc.d2149[71];
  libsymsymbol_sans_prefix__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[72]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* boolean? */
  scm__rc.d2149[83] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* gauche.internal */
  scm__rc.d2149[82] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[83]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[80] = Scm_MakeIdentifier(scm__rc.d2149[81], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#boolean? */
  scm__rc.d2149[84] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* symbol-append */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[64]), scm__rc.d2149[84]);
  scm__rc.d2149[85] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* maybe-flag */
  scm__rc.d2149[86] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* syms */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[66]), scm__rc.d2149[85]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[66]), scm__rc.d2149[86]);
  scm__rc.d2149[87] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[0]))->debugInfo = scm__rc.d2149[87];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[0]))[4] = SCM_WORD(scm__rc.d2149[80]);
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* string-append */
  scm__rc.d2149[88] = Scm_MakeIdentifier(scm__rc.d2149[89], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#string-append */
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* map */
  scm__rc.d2149[90] = Scm_MakeIdentifier(scm__rc.d2149[91], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#map */
  scm__rc.d2149[92] = Scm_MakeIdentifier(scm__rc.d2149[26], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#string->symbol */
  scm__rc.d2149[93] = Scm_MakeIdentifier(scm__rc.d2149[59], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#string->uninterned-symbol */
  scm__rc.d2149[94] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* do-append */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[94]);
  scm__rc.d2149[95] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* objs */
  scm__rc.d2149[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* interned? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[71]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[72]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[75]), scm__rc.d2149[2]);
  scm__rc.d2149[97] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[70]), SCM_OBJ(&scm__rc.d2150[72]), SCM_OBJ(&scm__rc.d2150[76]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[97]);
  scm__rc.d2149[98] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[1]))->debugInfo = scm__rc.d2149[98];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[20]))[3] = SCM_WORD(scm__rc.d2149[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[20]))[9] = SCM_WORD(scm__rc.d2149[90]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[20]))[16] = SCM_WORD(scm__rc.d2149[92]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[20]))[20] = SCM_WORD(scm__rc.d2149[93]);
  scm__rc.d2149[100] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* keyword? */
  scm__rc.d2149[99] = Scm_MakeIdentifier(scm__rc.d2149[100], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#keyword? */
  scm__rc.d2149[102] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* keyword->string */
  scm__rc.d2149[101] = Scm_MakeIdentifier(scm__rc.d2149[102], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#keyword->string */
  scm__rc.d2149[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* x->string */
  scm__rc.d2149[106] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* gauche.interpolate */
  scm__rc.d2149[105] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[106]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.interpolate */
  scm__rc.d2149[103] = Scm_MakeIdentifier(scm__rc.d2149[104], SCM_MODULE(scm__rc.d2149[105]), SCM_NIL); /* gauche.interpolate#x->string */
  scm__rc.d2149[107] = Scm_MakeIdentifier(scm__rc.d2149[89], SCM_MODULE(scm__rc.d2149[105]), SCM_NIL); /* gauche.interpolate#string-append */
  scm__rc.d2149[109] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* identifier->symbol */
  scm__rc.d2149[108] = Scm_MakeIdentifier(scm__rc.d2149[109], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#identifier->symbol */
  scm__rc.d2149[110] = Scm_MakeIdentifier(scm__rc.d2149[16], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#symbol->string */
  scm__rc.d2149[111] = Scm_MakeIdentifier(scm__rc.d2149[104], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#x->string */
  scm__rc.d2149[112] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* ->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[112]);
  scm__rc.d2149[113] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* x */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[80]), scm__rc.d2149[113]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[83]), scm__rc.d2149[2]);
  scm__rc.d2149[114] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[79]), SCM_OBJ(&scm__rc.d2150[80]), SCM_OBJ(&scm__rc.d2150[84]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[85]), scm__rc.d2149[114]);
  scm__rc.d2149[115] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[2]))->debugInfo = scm__rc.d2149[115];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]))[4] = SCM_WORD(scm__rc.d2149[99]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]))[15] = SCM_WORD(scm__rc.d2149[101]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]))[17] = SCM_WORD(scm__rc.d2149[103]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]))[19] = SCM_WORD(scm__rc.d2149[107]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]))[29] = SCM_WORD(scm__rc.d2149[108]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]))[31] = SCM_WORD(scm__rc.d2149[110]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[43]))[35] = SCM_WORD(scm__rc.d2149[111]);
  scm__rc.d2149[116] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /*  */
  scm__rc.d2149[117] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[3]))->debugInfo = scm__rc.d2149[117];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[80]))[1] = SCM_WORD(scm__rc.d2149[116]);
  scm__rc.d2149[119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[118] = Scm_MakeIdentifier(scm__rc.d2149[119], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* make-case-lambda */
  scm__rc.d2149[120] = Scm_MakeIdentifier(scm__rc.d2149[121], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#make-case-lambda */
  scm__rc.d2149[122] = Scm_MakeIdentifier(scm__rc.d2149[84], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#symbol-append */
  scm__rc.d2149[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* %toplevel */
  scm__rc.d2149[124] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[4]))->name = scm__rc.d2149[123];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[4]))->debugInfo = scm__rc.d2149[124];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[82]))[5] = SCM_WORD(scm__rc.d2149[118]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[82]))[8] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[82]))[27] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[82]))[29] = SCM_WORD(scm__rc.d2149[120]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[82]))[32] = SCM_WORD(scm__rc.d2149[122]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[125] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* symbol=? */
  scm__rc.d2149[126] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),FALSE); /* G2160 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[94]), scm__rc.d2149[126]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[95]), scm__rc.d2149[125]);
  scm__rc.d2149[127] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),FALSE); /* G2158 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[96]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[2]);
  scm__rc.d2149[128] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[95]), SCM_OBJ(&scm__rc.d2150[96]), SCM_OBJ(&scm__rc.d2150[100]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[101]), scm__rc.d2149[128]);
  scm__rc.d2149[129] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[5]))->debugInfo = scm__rc.d2149[129];
  scm__rc.d2149[131] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* find */
  scm__rc.d2149[132] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[39]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[130] = Scm_MakeIdentifier(scm__rc.d2149[131], SCM_MODULE(scm__rc.d2149[132]), SCM_NIL); /* gauche#find */
  scm__rc.d2149[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* error */
  scm__rc.d2149[133] = Scm_MakeIdentifier(scm__rc.d2149[134], SCM_MODULE(scm__rc.d2149[132]), SCM_NIL); /* gauche#error */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[104]), scm__rc.d2149[125]);
  scm__rc.d2149[135] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),FALSE); /* G2159 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[105]), scm__rc.d2149[135]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[108]), scm__rc.d2149[2]);
  scm__rc.d2149[136] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[104]), SCM_OBJ(&scm__rc.d2150[105]), SCM_OBJ(&scm__rc.d2150[109]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[136]);
  scm__rc.d2149[137] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[6]))->debugInfo = scm__rc.d2149[137];
  scm__rc.d2149[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* every */
  scm__rc.d2149[138] = Scm_MakeIdentifier(scm__rc.d2149[139], SCM_MODULE(scm__rc.d2149[132]), SCM_NIL); /* gauche#every */
  scm__rc.d2149[140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* y */
  scm__rc.d2149[141] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* rest */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[111]), scm__rc.d2149[140]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[111]), scm__rc.d2149[141]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[112]), scm__rc.d2149[113]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[2]);
  scm__rc.d2149[142] = Scm_MakeExtendedPair(scm__rc.d2149[125], SCM_OBJ(&scm__rc.d2150[112]), SCM_OBJ(&scm__rc.d2150[116]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[117]), scm__rc.d2149[142]);
  scm__rc.d2149[143] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[7]))->name = scm__rc.d2149[125];/* symbol=? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[7]))->debugInfo = scm__rc.d2149[143];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[124]))[8] = SCM_WORD(scm__rc.d2149[130]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[124]))[19] = SCM_WORD(scm__rc.d2149[133]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[124]))[36] = SCM_WORD(scm__rc.d2149[138]);
  scm__rc.d2149[144] = Scm_MakeIdentifier(scm__rc.d2149[125], SCM_MODULE(scm__rc.d2149[132]), SCM_NIL); /* gauche#symbol=? */
  scm__rc.d2149[145] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[8]))->name = scm__rc.d2149[123];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[8]))->debugInfo = scm__rc.d2149[145];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[163]))[5] = SCM_WORD(scm__rc.d2149[118]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[163]))[8] = SCM_WORD(scm__rc.d2149[125]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[163]))[15] = SCM_WORD(scm__rc.d2149[144]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[120]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[121]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[122]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[123]), scm__rc.d2149[3]);
  scm__rc.d2149[146] = Scm_MakeExtendedPair(scm__rc.d2149[100], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[125]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[147]))[3] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[147]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[147]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[147]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("keyword?")), SCM_OBJ(&libsymkeywordP__STUB), SCM_BINDING_INLINABLE);
  libsymkeywordP__STUB.common.info = scm__rc.d2149[146];
  libsymkeywordP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[147]);
  scm__rc.d2149[154] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* make-keyword */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[128]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[129]), scm__rc.d2149[154]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[130]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[131]), scm__rc.d2149[3]);
  scm__rc.d2149[155] = Scm_MakeExtendedPair(scm__rc.d2149[154], SCM_OBJ(&scm__rc.d2150[45]), SCM_OBJ(&scm__rc.d2150[133]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[156]))[3] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[156]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[156]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[156]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-keyword")), SCM_OBJ(&libsymmake_keyword__STUB), 0);
  libsymmake_keyword__STUB.common.info = scm__rc.d2149[155];
  libsymmake_keyword__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[156]);
  scm__rc.d2149[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* get-keyword */
  scm__rc.d2149[164] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58])),TRUE); /* key */
  scm__rc.d2149[165] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* list */
  scm__rc.d2149[166] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* fallback */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[134]), scm__rc.d2149[166]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[135]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[136]), scm__rc.d2149[165]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[137]), scm__rc.d2149[164]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[140]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[163]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[142]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[143]), scm__rc.d2149[3]);
  scm__rc.d2149[167] = Scm_MakeExtendedPair(scm__rc.d2149[163], SCM_OBJ(&scm__rc.d2150[137]), SCM_OBJ(&scm__rc.d2150[145]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[168]))[3] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[168]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[168]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[168]))[6] = scm__rc.d2149[41];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[168]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[168]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("get-keyword")), SCM_OBJ(&libsymget_keyword__STUB), SCM_BINDING_INLINABLE);
  libsymget_keyword__STUB.common.info = scm__rc.d2149[167];
  libsymget_keyword__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[168]);
  scm__rc.d2149[177] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61])),TRUE); /* delete-keyword */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[146]), scm__rc.d2149[165]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[147]), scm__rc.d2149[164]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[150]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[151]), scm__rc.d2149[177]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[152]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[153]), scm__rc.d2149[3]);
  scm__rc.d2149[178] = Scm_MakeExtendedPair(scm__rc.d2149[177], SCM_OBJ(&scm__rc.d2150[147]), SCM_OBJ(&scm__rc.d2150[155]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[3] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("delete-keyword")), SCM_OBJ(&libsymdelete_keyword__STUB), 0);
  libsymdelete_keyword__STUB.common.info = scm__rc.d2149[178];
  libsymdelete_keyword__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[179]);
  scm__rc.d2149[187] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* delete-keyword! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[158]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[159]), scm__rc.d2149[187]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[160]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[161]), scm__rc.d2149[3]);
  scm__rc.d2149[188] = Scm_MakeExtendedPair(scm__rc.d2149[187], SCM_OBJ(&scm__rc.d2150[147]), SCM_OBJ(&scm__rc.d2150[163]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("delete-keyword!")), SCM_OBJ(&libsymdelete_keywordX__STUB), 0);
  libsymdelete_keywordX__STUB.common.info = scm__rc.d2149[188];
  libsymdelete_keywordX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[179]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[164]), scm__rc.d2149[164]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[167]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[169]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[170]), scm__rc.d2149[3]);
  scm__rc.d2149[189] = Scm_MakeExtendedPair(scm__rc.d2149[102], SCM_OBJ(&scm__rc.d2150[164]), SCM_OBJ(&scm__rc.d2150[172]));
  scm__rc.d2149[190] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* <keyword> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[191]))[3] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[191]))[4] = scm__rc.d2149[190];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[191]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[191]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("keyword->string")), SCM_OBJ(&libsymkeyword_TOstring__STUB), 0);
  libsymkeyword_TOstring__STUB.common.info = scm__rc.d2149[189];
  libsymkeyword_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[191]);
  scm__rc.d2149[198] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* delete-keywords */
  scm__rc.d2149[199] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* rec */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[173]), scm__rc.d2149[199]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[174]), scm__rc.d2149[198]);
  scm__rc.d2149[200] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* kvs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[175]), scm__rc.d2149[200]);
  scm__rc.d2149[201] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[9]))->name = scm__rc.d2149[199];/* (delete-keywords rec) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[9]))->debugInfo = scm__rc.d2149[201];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[180]))[12] = SCM_WORD(scm__rc.d2149[133]);
  scm__rc.d2149[202] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* ks */
  scm__rc.d2149[203] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* kvlist */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[179]), scm__rc.d2149[203]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[180]), scm__rc.d2149[202]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[183]), scm__rc.d2149[2]);
  scm__rc.d2149[204] = Scm_MakeExtendedPair(scm__rc.d2149[198], SCM_OBJ(&scm__rc.d2150[180]), SCM_OBJ(&scm__rc.d2150[184]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[185]), scm__rc.d2149[204]);
  scm__rc.d2149[205] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[10]))->name = scm__rc.d2149[198];/* delete-keywords */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[10]))->debugInfo = scm__rc.d2149[205];
  scm__rc.d2149[206] = Scm_MakeIdentifier(scm__rc.d2149[198], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#delete-keywords */
  scm__rc.d2149[207] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[11]))->name = scm__rc.d2149[123];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[11]))->debugInfo = scm__rc.d2149[207];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[223]))[3] = SCM_WORD(scm__rc.d2149[118]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[223]))[6] = SCM_WORD(scm__rc.d2149[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[223]))[13] = SCM_WORD(scm__rc.d2149[206]);
  scm__rc.d2149[208] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* delete-keywords! */
  scm__rc.d2149[210] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* set-cdr! */
  scm__rc.d2149[209] = Scm_MakeIdentifier(scm__rc.d2149[210], SCM_MODULE(scm__rc.d2149[132]), SCM_NIL); /* gauche#set-cdr! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[188]), scm__rc.d2149[2]);
  scm__rc.d2149[211] = Scm_MakeExtendedPair(scm__rc.d2149[208], SCM_OBJ(&scm__rc.d2150[180]), SCM_OBJ(&scm__rc.d2150[189]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[190]), scm__rc.d2149[211]);
  scm__rc.d2149[212] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[12]))->name = scm__rc.d2149[208];/* delete-keywords! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[12]))->debugInfo = scm__rc.d2149[212];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]))[14] = SCM_WORD(scm__rc.d2149[133]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]))[44] = SCM_WORD(scm__rc.d2149[133]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[238]))[59] = SCM_WORD(scm__rc.d2149[209]);
  scm__rc.d2149[213] = Scm_MakeIdentifier(scm__rc.d2149[208], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#delete-keywords! */
  scm__rc.d2149[214] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[13]))->name = scm__rc.d2149[123];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[13]))->debugInfo = scm__rc.d2149[214];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[312]))[3] = SCM_WORD(scm__rc.d2149[118]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[312]))[6] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[312]))[13] = SCM_WORD(scm__rc.d2149[213]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[215] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* wrapped-identifier? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[193]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[194]), scm__rc.d2149[215]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[195]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[196]), scm__rc.d2149[3]);
  scm__rc.d2149[216] = Scm_MakeExtendedPair(scm__rc.d2149[215], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[198]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("wrapped-identifier?")), SCM_OBJ(&libsymwrapped_identifierP__STUB), SCM_BINDING_INLINABLE);
  libsymwrapped_identifierP__STUB.common.info = scm__rc.d2149[216];
  libsymwrapped_identifierP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[147]);
  scm__rc.d2149[217] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* identifier? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[201]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[202]), scm__rc.d2149[217]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[203]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[204]), scm__rc.d2149[3]);
  scm__rc.d2149[218] = Scm_MakeExtendedPair(scm__rc.d2149[217], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[206]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("identifier?")), SCM_OBJ(&libsymidentifierP__STUB), SCM_BINDING_INLINABLE);
  libsymidentifierP__STUB.common.info = scm__rc.d2149[218];
  libsymidentifierP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[147]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[209]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[210]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[211]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[212]), scm__rc.d2149[3]);
  scm__rc.d2149[219] = Scm_MakeExtendedPair(scm__rc.d2149[109], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[214]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("identifier->symbol")), SCM_OBJ(&libsymidentifier_TOsymbol__STUB), SCM_BINDING_INLINABLE);
  libsymidentifier_TOsymbol__STUB.common.info = scm__rc.d2149[219];
  libsymidentifier_TOsymbol__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[156]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* make-identifier */
  scm__rc.d2149[221] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* mod */
  scm__rc.d2149[222] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* env */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[215]), scm__rc.d2149[222]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[216]), scm__rc.d2149[221]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[217]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[220]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[221]), scm__rc.d2149[220]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[222]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[223]), scm__rc.d2149[3]);
  scm__rc.d2149[223] = Scm_MakeExtendedPair(scm__rc.d2149[220], SCM_OBJ(&scm__rc.d2150[217]), SCM_OBJ(&scm__rc.d2150[225]));
  scm__rc.d2149[224] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),TRUE); /* <module> */
  scm__rc.d2149[225] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* <list> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[226]))[3] = scm__rc.d2149[83];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[226]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[226]))[5] = scm__rc.d2149[224];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[226]))[6] = scm__rc.d2149[225];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[226]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[226]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("make-identifier")), SCM_OBJ(&libsymmake_identifier__STUB), 0);
  libsymmake_identifier__STUB.common.info = scm__rc.d2149[223];
  libsymmake_identifier__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[226]);
  scm__rc.d2149[235] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* identifier-module */
  scm__rc.d2149[236] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* id */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[226]), scm__rc.d2149[236]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[229]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[230]), scm__rc.d2149[235]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[231]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[232]), scm__rc.d2149[3]);
  scm__rc.d2149[237] = Scm_MakeExtendedPair(scm__rc.d2149[235], SCM_OBJ(&scm__rc.d2150[226]), SCM_OBJ(&scm__rc.d2150[234]));
  scm__rc.d2149[238] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* <identifier> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[239]))[3] = scm__rc.d2149[83];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[239]))[4] = scm__rc.d2149[238];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[239]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[239]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("identifier-module")), SCM_OBJ(&libsymidentifier_module__STUB), 0);
  libsymidentifier_module__STUB.common.info = scm__rc.d2149[237];
  libsymidentifier_module__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[239]);
  scm__rc.d2149[246] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* identifier-name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[237]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[238]), scm__rc.d2149[246]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[239]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[240]), scm__rc.d2149[3]);
  scm__rc.d2149[247] = Scm_MakeExtendedPair(scm__rc.d2149[246], SCM_OBJ(&scm__rc.d2150[226]), SCM_OBJ(&scm__rc.d2150[242]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("identifier-name")), SCM_OBJ(&libsymidentifier_name__STUB), 0);
  libsymidentifier_name__STUB.common.info = scm__rc.d2149[247];
  libsymidentifier_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[239]);
  scm__rc.d2149[248] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* identifier-env */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[245]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[246]), scm__rc.d2149[248]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[247]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[248]), scm__rc.d2149[3]);
  scm__rc.d2149[249] = Scm_MakeExtendedPair(scm__rc.d2149[248], SCM_OBJ(&scm__rc.d2150[226]), SCM_OBJ(&scm__rc.d2150[250]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("identifier-env")), SCM_OBJ(&libsymidentifier_env__STUB), 0);
  libsymidentifier_env__STUB.common.info = scm__rc.d2149[249];
  libsymidentifier_env__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[239]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[250] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* identifier-append */
  scm__rc.d2149[251] = Scm_MakeIdentifier(scm__rc.d2149[84], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#symbol-append */
  scm__rc.d2149[252] = Scm_MakeIdentifier(scm__rc.d2149[215], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#wrapped-identifier? */
  scm__rc.d2149[253] = Scm_MakeIdentifier(scm__rc.d2149[131], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#find */
  scm__rc.d2149[254] = Scm_MakeIdentifier(scm__rc.d2149[235], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#identifier-module */
  scm__rc.d2149[255] = Scm_MakeIdentifier(scm__rc.d2149[248], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#identifier-env */
  scm__rc.d2149[256] = Scm_MakeIdentifier(scm__rc.d2149[220], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#make-identifier */
  scm__rc.d2149[257] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[253]), scm__rc.d2149[2]);
  scm__rc.d2149[258] = Scm_MakeExtendedPair(scm__rc.d2149[250], scm__rc.d2149[257], SCM_OBJ(&scm__rc.d2150[254]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[255]), scm__rc.d2149[258]);
  scm__rc.d2149[259] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[14]))->name = scm__rc.d2149[250];/* identifier-append */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[14]))->debugInfo = scm__rc.d2149[259];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]))[3] = SCM_WORD(scm__rc.d2149[251]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]))[12] = SCM_WORD(scm__rc.d2149[252]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]))[15] = SCM_WORD(scm__rc.d2149[253]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]))[25] = SCM_WORD(scm__rc.d2149[254]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]))[30] = SCM_WORD(scm__rc.d2149[255]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[327]))[32] = SCM_WORD(scm__rc.d2149[256]);
  scm__rc.d2149[260] = Scm_MakeIdentifier(scm__rc.d2149[250], SCM_MODULE(scm__rc.d2149[82]), SCM_NIL); /* gauche.internal#identifier-append */
  scm__rc.d2149[261] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2157[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[15]))->name = scm__rc.d2149[123];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2156[15]))->debugInfo = scm__rc.d2149[261];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[362]))[3] = SCM_WORD(scm__rc.d2149[118]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[362]))[6] = SCM_WORD(scm__rc.d2149[250]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2155[362]))[13] = SCM_WORD(scm__rc.d2149[260]);
  scm__rc.d2149[262] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* identifier-toplevel? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[258]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[259]), scm__rc.d2149[262]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[260]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[261]), scm__rc.d2149[3]);
  scm__rc.d2149[263] = Scm_MakeExtendedPair(scm__rc.d2149[262], SCM_OBJ(&scm__rc.d2150[226]), SCM_OBJ(&scm__rc.d2150[263]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[264]))[3] = scm__rc.d2149[83];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[264]))[4] = scm__rc.d2149[238];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[264]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[264]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("identifier-toplevel?")), SCM_OBJ(&libsymidentifier_toplevelP__STUB), 0);
  libsymidentifier_toplevelP__STUB.common.info = scm__rc.d2149[263];
  libsymidentifier_toplevelP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[340] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),FALSE); /* G2153 */
  scm__rc.d2149[341] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),FALSE); /* G2152 */
  scm__rc.d2149[342] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* string-interpolate* */
  scm__rc.d2149[343] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* define-in-module */
  scm__rc.d2149[344] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),TRUE); /* letrec */
  scm__rc.d2149[345] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* ^x */
  scm__rc.d2149[346] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* case-lambda */
  scm__rc.d2149[347] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),FALSE); /* G2154 */
  scm__rc.d2149[348] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),FALSE); /* G2151 */
  scm__rc.d2149[349] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* cut */
  scm__rc.d2149[350] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* <> */
  scm__rc.d2149[351] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* z */
  scm__rc.d2149[352] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* $ */
  scm__rc.d2149[353] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* list* */
  scm__rc.d2149[354] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* if-let1 */
  scm__rc.d2149[355] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* memv */
  scm__rc.d2149[356] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* cut-tail! */
  scm__rc.d2149[357] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104])),TRUE); /* prev */
  scm__rc.d2149[358] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* head */
  scm__rc.d2149[359] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[106])),TRUE); /* r */
  scm__rc.d2149[360] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107])),TRUE); /* first-id */
}
