/* Generated automatically from librx.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/priv/regexpP.h"
static ScmObj librxregexpP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librxregexpP__STUB, 1, 0,1, SCM_FALSE,0, librxregexpP, NULL, NULL);

static ScmObj librxregmatchP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxregmatchP__STUB, 1, 0,SCM_FALSE,librxregmatchP, NULL, NULL);

static ScmObj librxstring_TOregexp(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librxstring_TOregexp__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librxstring_TOregexp, NULL, NULL);

static ScmObj librxregexp_ast(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librxregexp_ast__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librxregexp_ast, NULL, NULL);

static ScmObj librxregexp_case_foldP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librxregexp_case_foldP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librxregexp_case_foldP, NULL, NULL);

static ScmObj librxregexp_parse(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librxregexp_parse__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librxregexp_parse, NULL, NULL);

static ScmObj librxregexp_compile(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxregexp_compile__STUB, 1, 1,SCM_FALSE,librxregexp_compile, NULL, NULL);

static ScmObj librxregexp_optimize(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxregexp_optimize__STUB, 1, 0,SCM_FALSE,librxregexp_optimize, NULL, NULL);

static ScmObj librxregexp_num_groups(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librxregexp_num_groups__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librxregexp_num_groups, NULL, NULL);

static ScmObj librxregexp_named_groups(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librxregexp_named_groups__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librxregexp_named_groups, NULL, NULL);

static ScmObj librxrxmatch(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxrxmatch__STUB, 2, 3,SCM_FALSE,librxrxmatch, NULL, NULL);

static ScmObj librxrxmatch_substring(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxrxmatch_substring__STUB, 1, 2,SCM_FALSE,librxrxmatch_substring, NULL, NULL);

static ScmObj librxrxmatch_start(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxrxmatch_start__STUB, 1, 2,SCM_FALSE,librxrxmatch_start, NULL, NULL);

static ScmObj librxrxmatch_end(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxrxmatch_end__STUB, 1, 2,SCM_FALSE,librxrxmatch_end, NULL, NULL);

static ScmObj librxrxmatch_before(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxrxmatch_before__STUB, 1, 2,SCM_FALSE,librxrxmatch_before, NULL, NULL);

static ScmObj librxrxmatch_after(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxrxmatch_after__STUB, 1, 2,SCM_FALSE,librxrxmatch_after, NULL, NULL);

static ScmObj librxrxmatch_num_matches(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxrxmatch_num_matches__STUB, 1, 0,SCM_FALSE,librxrxmatch_num_matches, NULL, NULL);

static ScmObj librxrxmatch_named_groups(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librxrxmatch_named_groups__STUB, 1, 0,SCM_FALSE,librxrxmatch_named_groups, NULL, NULL);

static ScmObj librx_25regexp_dump(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librx_25regexp_dump__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librx_25regexp_dump, NULL, NULL);

static ScmObj librx_25regmatch_dump(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librx_25regmatch_dump__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librx_25regmatch_dump, NULL, NULL);

static ScmObj librx_25regexp_pattern_SETTER(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(librx_25regexp_pattern_SETTER__STUB, 2, 0,SCM_FALSE,librx_25regexp_pattern_SETTER, NULL, NULL);

static ScmObj librx_25regexp_pattern(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librx_25regexp_pattern__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librx_25regexp_pattern, NULL, NULL);

static ScmObj librx_25regexp_laset(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(librx_25regexp_laset__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, librx_25regexp_laset, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 136u, 134u, 7u, 17u, 0u, 64u, 36u, 64u, 80u, 24u, 129u, 32u,
19u, 2u, 146u, 71u, 16u, 12u, 8u, 226u, 71u, 14u, 12u, 9u, 130u, 9u,
28u, 52u, 48u, 36u, 10u, 71u, 10u, 12u, 9u, 130u, 193u, 28u, 36u, 48u,
36u, 12u, 71u, 7u, 12u, 9u, 130u, 193u, 28u, 24u, 48u, 36u, 6u, 71u,
3u, 12u, 9u, 129u, 57u, 28u, 8u, 48u, 36u, 12u, 71u, 0u, 12u, 9u,
129u, 57u, 12u, 65u, 129u, 140u, 64u, 100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 160u, 6u, 8u, 28u, 57u, 193u, 16u, 41u, 36u, 115u, 240u,
192u, 152u, 20u, 145u, 207u, 131u, 2u, 64u, 164u, 115u, 208u, 192u,
144u, 65u, 28u, 236u, 48u, 65u, 34u, 10u, 128u, 120u, 25u, 36u, 115u,
160u, 192u, 144u, 73u, 28u, 220u, 48u, 38u, 30u, 196u, 115u, 80u,
192u, 144u, 49u, 28u, 204u, 48u, 38u, 30u, 196u, 115u, 16u, 193u, 4u,
136u, 46u, 12u, 36u, 142u, 96u, 24u, 18u, 9u, 35u, 150u, 134u, 4u,
199u, 208u, 142u, 88u, 24u, 18u, 6u, 35u, 149u, 6u, 4u, 199u, 208u,
142u, 80u, 24u, 4u, 21u, 0u, 240u, 35u, 6u, 136u, 56u, 38u, 60u, 228u,
145u, 201u, 195u, 2u, 64u, 196u, 114u, 96u, 192u, 153u, 109u, 17u,
201u, 3u, 2u, 101u, 186u, 71u, 34u, 12u, 9u, 3u, 17u, 200u, 3u, 2u,
101u, 186u, 71u, 30u, 12u, 16u, 72u, 131u, 225u, 2u, 72u, 227u, 161u,
129u, 32u, 146u, 56u, 208u, 96u, 77u, 8u, 88u, 35u, 140u, 134u, 4u,
129u, 136u, 226u, 225u, 129u, 52u, 33u, 96u, 142u, 42u, 24u, 4u, 21u,
0u, 240u, 19u, 6u, 136u, 68u, 38u, 132u, 37u, 146u, 71u, 20u, 12u, 9u,
3u, 17u, 196u, 195u, 2u, 104u, 82u, 81u, 28u, 68u, 48u, 38u, 133u,
38u, 145u, 195u, 195u, 2u, 64u, 196u, 112u, 208u, 192u, 154u, 20u,
154u, 71u, 9u, 12u, 2u, 18u, 132u, 224u, 131u, 6u, 136u, 80u, 51u, 8u,
38u, 3u, 33u, 196u, 64u, 16u, 9u, 16u, 20u, 6u, 32u, 72u, 4u, 192u,
164u, 144u, 216u, 19u, 66u, 146u, 130u, 101u, 180u, 26u, 66u, 97u,
210u, 73u, 36u, 112u, 128u, 192u, 144u, 49u, 28u, 28u, 48u, 38u, 134u,
137u, 145u, 193u, 67u, 2u, 104u, 104u, 177u, 28u, 16u, 48u, 36u, 16u,
71u, 0u, 12u, 9u, 161u, 162u, 196u, 49u, 6u, 6u, 71u, 16u, 32u, 136u,
32u, 136u, 20u, 48u, 169u, 36u, 54u, 4u, 208u, 209u, 48u, 210u, 19u,
1u, 194u, 73u, 32u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 139u, 6u, 6u, 120u, 86u, 8u, 36u, 113u, 80u, 192u, 144u, 65u,
28u, 72u, 48u, 36u, 16u, 71u, 16u, 12u, 2u, 22u, 130u, 12u, 16u, 72u,
225u, 193u, 129u, 48u, 174u, 35u, 134u, 134u, 4u, 130u, 8u, 225u, 97u,
129u, 48u, 174u, 35u, 132u, 6u, 4u, 113u, 35u, 131u, 6u, 4u, 130u, 8u,
224u, 129u, 129u, 145u, 196u, 8u, 34u, 8u, 34u, 5u, 12u, 42u, 73u,
13u, 128u, 66u, 80u, 156u, 16u, 96u, 209u, 10u, 6u, 97u, 4u, 192u,
100u, 56u, 136u, 2u, 1u, 34u, 2u, 128u, 196u, 9u, 0u, 152u, 20u, 146u,
27u, 0u, 130u, 160u, 30u, 2u, 96u, 209u, 8u, 136u, 36u, 65u, 240u,
129u, 36u, 129u, 5u, 64u, 60u, 8u, 193u, 162u, 14u, 16u, 72u, 130u,
224u, 194u, 73u, 13u, 34u, 9u, 16u, 84u, 3u, 192u, 201u, 36u, 144u,
210u, 32u, 112u, 231u, 4u, 64u, 164u, 146u, 72u, 224u, 65u, 128u, 66u,
240u, 65u, 9u, 142u, 49u, 35u, 128u, 134u, 4u, 208u, 144u, 146u, 56u,
0u, 96u, 72u, 32u, 134u, 32u, 192u, 198u, 32u, 130u, 27u, 2u, 104u,
72u, 48u, 76u, 42u, 195u, 72u, 76u, 7u, 9u, 36u, 128u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 12u, 65u, 4u, 54u, 1u, 11u, 193u, 4u, 50u,
56u, 129u, 4u, 65u, 4u, 64u, 161u, 133u, 73u, 33u, 176u, 8u, 74u, 19u,
130u, 12u, 26u, 33u, 64u, 204u, 32u, 152u, 12u, 135u, 17u, 0u, 64u,
36u, 64u, 80u, 24u, 129u, 32u, 19u, 2u, 146u, 67u, 96u, 16u, 84u, 3u,
192u, 76u, 26u, 33u, 17u, 4u, 136u, 62u, 16u, 36u, 144u, 32u, 168u,
7u, 129u, 24u, 52u, 65u, 194u, 9u, 16u, 92u, 24u, 73u, 33u, 164u, 65u,
34u, 10u, 128u, 120u, 25u, 36u, 146u, 26u, 68u, 14u, 28u, 224u, 136u,
20u, 146u, 73u, 2u, 22u, 130u, 12u, 16u, 67u, 72u, 103u, 133u, 96u,
130u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 24u, 166u, 7u, 196u, 112u,
112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u,
9u, 128u, 225u, 32u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 150u, 6u, 4u, 134u, 72u, 229u, 33u, 130u, 26u, 134u, 120u,
9u, 35u, 147u, 134u, 4u, 134u, 72u, 228u, 161u, 130u, 27u, 16u, 228u,
51u, 192u, 12u, 58u, 72u, 228u, 129u, 129u, 33u, 210u, 57u, 8u, 96u,
76u, 46u, 200u, 227u, 225u, 129u, 33u, 146u, 56u, 232u, 96u, 76u, 46u,
200u, 227u, 97u, 129u, 48u, 174u, 35u, 140u, 134u, 8u, 120u, 67u,
241u, 1u, 17u, 12u, 64u, 73u, 28u, 92u, 48u, 38u, 65u, 100u, 113u,
96u, 192u, 145u, 1u, 28u, 80u, 48u, 38u, 65u, 100u, 113u, 32u, 192u,
152u, 248u, 145u, 196u, 67u, 2u, 68u, 4u, 112u, 240u, 192u, 152u,
248u, 145u, 195u, 67u, 3u, 200u, 136u, 161u, 152u, 140u, 146u, 56u,
88u, 96u, 76u, 214u, 8u, 225u, 1u, 129u, 33u, 146u, 56u, 48u, 96u,
76u, 214u, 8u, 224u, 161u, 129u, 144u, 8u, 100u, 64u, 17u, 1u, 36u,
56u, 4u, 205u, 52u, 50u, 132u, 199u, 144u, 61u, 4u, 194u, 184u, 38u,
8u, 198u, 25u, 36u, 145u, 192u, 195u, 2u, 104u, 66u, 201u, 28u, 8u,
48u, 36u, 64u, 71u, 0u, 12u, 9u, 161u, 11u, 36u, 49u, 6u, 6u, 49u,
16u, 16u, 219u, 12u, 132u, 208u, 133u, 144u, 154u, 17u, 50u, 73u, 32u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 194u, 182u, 24u, 33u, 184u, 146u, 29u, 36u, 120u, 86u, 131u,
2u, 67u, 164u, 120u, 86u, 67u, 2u, 68u, 132u, 120u, 85u, 131u, 4u,
75u, 19u, 68u, 241u, 68u, 82u, 28u, 34u, 161u, 21u, 197u, 92u, 4u,
152u, 116u, 145u, 225u, 85u, 12u, 9u, 14u, 145u, 225u, 83u, 12u, 9u,
136u, 121u, 30u, 21u, 32u, 192u, 145u, 81u, 30u, 20u, 240u, 192u,
145u, 81u, 30u, 20u, 224u, 192u, 145u, 73u, 30u, 20u, 208u, 192u,
145u, 65u, 30u, 20u, 192u, 192u, 145u, 57u, 30u, 20u, 176u, 192u,
145u, 49u, 30u, 20u, 144u, 192u, 145u, 57u, 30u, 20u, 128u, 192u,
200u, 4u, 78u, 34u, 200u, 128u, 146u, 28u, 34u, 112u, 244u, 19u, 12u,
82u, 73u, 30u, 20u, 112u, 192u, 153u, 153u, 17u, 225u, 70u, 12u, 9u,
22u, 17u, 225u, 69u, 12u, 9u, 16u, 17u, 225u, 67u, 12u, 9u, 153u,
145u, 30u, 20u, 0u, 193u, 22u, 129u, 23u, 69u, 1u, 170u, 46u, 36u,
128u, 215u, 23u, 16u, 219u, 23u, 134u, 21u, 49u, 129u, 33u, 182u, 47u,
13u, 17u, 113u, 16u, 216u, 108u, 1u, 238u, 47u, 12u, 49u, 137u, 34u,
4u, 136u, 9u, 1u, 238u, 47u, 12u, 49u, 145u, 34u, 0u, 136u, 9u, 1u,
216u, 70u, 113u, 121u, 17u, 164u, 94u, 72u, 130u, 162u, 8u, 188u,
144u, 211u, 23u, 147u, 14u, 146u, 72u, 240u, 143u, 6u, 4u, 208u, 145u,
226u, 60u, 35u, 97u, 129u, 52u, 41u, 108u, 143u, 8u, 208u, 96u, 72u,
116u, 143u, 8u, 192u, 96u, 72u, 188u, 143u, 8u, 136u, 96u, 77u, 12u,
27u, 35u, 194u, 32u, 24u, 18u, 47u, 35u, 194u, 24u, 24u, 19u, 67u,
22u, 8u, 240u, 133u, 134u, 4u, 139u, 200u, 240u, 133u, 6u, 4u, 136u,
8u, 240u, 132u, 6u, 4u, 208u, 197u, 130u, 60u, 32u, 193u, 129u, 52u,
47u, 76u, 143u, 8u, 40u, 96u, 77u, 12u, 1u, 35u, 194u, 8u, 24u, 18u,
47u, 35u, 194u, 0u, 24u, 19u, 66u, 229u, 136u, 239u, 225u, 129u, 34u,
2u, 59u, 232u, 96u, 77u, 11u, 150u, 35u, 189u, 6u, 4u, 208u, 180u,
98u, 59u, 200u, 96u, 72u, 188u, 142u, 234u, 24u, 19u, 66u, 193u, 136u,
238u, 129u, 129u, 34u, 2u, 59u, 144u, 96u, 77u, 11u, 6u, 35u, 183u,
134u, 4u, 208u, 169u, 98u, 59u, 112u, 96u, 72u, 188u, 142u, 216u, 24u,
19u, 66u, 150u, 200u, 237u, 97u, 129u, 144u, 8u, 188u, 38u, 133u, 33u,
146u, 19u, 66u, 150u, 201u, 29u, 168u, 48u, 38u, 133u, 33u, 145u,
217u, 195u, 2u, 104u, 74u, 249u, 29u, 152u, 48u, 36u, 92u, 71u, 101u,
12u, 9u, 161u, 26u, 228u, 118u, 64u, 192u, 145u, 65u, 29u, 136u, 48u,
38u, 132u, 107u, 145u, 215u, 131u, 4u, 54u, 34u, 136u, 128u, 195u,
164u, 142u, 186u, 24u, 18u, 29u, 35u, 173u, 134u, 4u, 209u, 161u,
162u, 58u, 208u, 96u, 72u, 160u, 142u, 178u, 24u, 18u, 32u, 35u, 171u,
134u, 4u, 209u, 161u, 162u, 58u, 168u, 96u, 77u, 26u, 13u, 35u, 169u,
134u, 6u, 81u, 11u, 69u, 4u, 38u, 141u, 6u, 136u, 212u, 69u, 241u,
65u, 9u, 161u, 75u, 100u, 145u, 212u, 67u, 2u, 104u, 230u, 249u, 29u,
64u, 48u, 36u, 80u, 71u, 78u, 12u, 9u, 163u, 155u, 228u, 116u, 192u,
193u, 13u, 136u, 18u, 32u, 48u, 233u, 35u, 165u, 134u, 4u, 135u, 72u,
233u, 1u, 129u, 52u, 125u, 80u, 142u, 142u, 24u, 18u, 32u, 35u, 162u,
134u, 4u, 209u, 245u, 66u, 58u, 24u, 96u, 77u, 31u, 71u, 35u, 160u,
6u, 8u, 150u, 38u, 137u, 226u, 129u, 21u, 197u, 60u, 4u, 197u, 80u,
233u, 35u, 159u, 134u, 4u, 135u, 72u, 231u, 193u, 129u, 34u, 162u,
57u, 224u, 96u, 77u, 34u, 15u, 35u, 157u, 134u, 4u, 138u, 72u, 231u,
65u, 129u, 34u, 130u, 57u, 200u, 96u, 72u, 156u, 142u, 112u, 24u, 18u,
38u, 35u, 155u, 6u, 4u, 137u, 200u, 230u, 161u, 129u, 144u, 8u, 156u,
69u, 145u, 1u, 36u, 56u, 68u, 225u, 232u, 38u, 144u, 226u, 18u, 72u,
230u, 129u, 129u, 52u, 150u, 100u, 142u, 102u, 24u, 18u, 44u, 35u,
153u, 6u, 4u, 136u, 8u, 230u, 1u, 129u, 52u, 150u, 100u, 142u, 92u,
24u, 33u, 177u, 5u, 68u, 6u, 29u, 36u, 114u, 208u, 192u, 144u, 233u,
28u, 168u, 48u, 38u, 148u, 15u, 145u, 202u, 67u, 2u, 68u, 4u, 114u,
112u, 192u, 154u, 80u, 62u, 71u, 37u, 12u, 9u, 165u, 2u, 68u, 114u,
48u, 193u, 13u, 136u, 18u, 32u, 48u, 233u, 35u, 145u, 6u, 4u, 135u,
72u, 227u, 225u, 129u, 52u, 170u, 112u, 142u, 60u, 24u, 18u, 32u, 35u,
142u, 6u, 4u, 210u, 169u, 194u, 56u, 208u, 96u, 77u, 42u, 143u, 35u,
140u, 6u, 8u, 218u, 41u, 224u, 4u, 142u, 42u, 24u, 3u, 204u, 64u, 66u,
96u, 68u, 72u, 226u, 129u, 129u, 34u, 2u, 56u, 152u, 96u, 100u, 2u,
32u, 16u, 148u, 77u, 18u, 18u, 67u, 96u, 77u, 45u, 138u, 1u, 52u,
180u, 48u, 38u, 149u, 71u, 132u, 210u, 129u, 33u, 27u, 196u, 225u,
52u, 150u, 100u, 38u, 144u, 226u, 18u, 26u, 66u, 104u, 250u, 56u, 77u,
28u, 212u, 17u, 188u, 78u, 19u, 51u, 32u, 152u, 98u, 146u, 73u, 28u,
68u, 48u, 38u, 151u, 77u, 145u, 196u, 3u, 2u, 68u, 132u, 112u, 240u,
192u, 145u, 49u, 28u, 52u, 48u, 38u, 151u, 77u, 145u, 194u, 131u, 4u,
55u, 18u, 67u, 164u, 142u, 18u, 24u, 18u, 29u, 35u, 132u, 6u, 4u,
137u, 8u, 224u, 193u, 130u, 56u, 138u, 137u, 28u, 20u, 48u, 36u, 84u,
71u, 3u, 12u, 12u, 161u, 194u, 42u, 9u, 166u, 144u, 196u, 38u, 153u,
170u, 134u, 216u, 128u, 38u, 151u, 77u, 132u, 210u, 240u, 82u, 72u,
224u, 65u, 129u, 34u, 162u, 24u, 131u, 3u, 24u, 137u, 162u, 72u, 162u,
41u, 138u, 161u, 210u, 25u, 132u, 89u, 16u, 16u, 219u, 12u, 136u, 2u,
32u, 33u, 192u, 60u, 136u, 138u, 25u, 136u, 201u, 12u, 162u, 30u, 16u,
252u, 64u, 68u, 67u, 16u, 18u, 30u, 132u, 54u, 33u, 200u, 103u, 128u,
24u, 116u, 136u, 106u, 25u, 224u, 36u, 195u, 36u, 146u, 19u, 77u, 80u,
201u, 32u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 18u, 196u, 209u, 36u, 81u, 20u, 197u, 80u,
233u, 12u, 194u, 44u, 136u, 8u, 109u, 134u, 68u, 1u, 16u, 16u, 224u,
30u, 68u, 69u, 12u, 196u, 100u, 134u, 81u, 15u, 8u, 126u, 32u, 34u,
33u, 136u, 9u, 15u, 66u, 27u, 16u, 228u, 51u, 192u, 12u, 58u, 68u,
53u, 12u, 240u, 18u, 97u, 146u, 73u, 12u, 161u, 194u, 42u, 17u, 196u,
84u, 72u, 134u, 226u, 72u, 116u, 134u, 216u, 128u, 66u, 81u, 52u, 72u,
67u, 96u, 15u, 49u, 1u, 16u, 220u, 73u, 14u, 146u, 4u, 109u, 20u,
240u, 2u, 33u, 177u, 2u, 68u, 6u, 29u, 34u, 27u, 16u, 84u, 64u, 97u,
210u, 35u, 120u, 156u, 69u, 145u, 1u, 17u, 44u, 77u, 19u, 197u, 2u,
43u, 138u, 120u, 9u, 138u, 161u, 210u, 72u, 105u, 16u, 216u, 129u,
34u, 3u, 14u, 144u, 202u, 33u, 104u, 160u, 136u, 108u, 69u, 17u, 1u,
135u, 72u, 141u, 68u, 95u, 20u, 17u, 13u, 134u, 192u, 30u, 226u, 240u,
195u, 24u, 146u, 32u, 72u, 128u, 144u, 30u, 226u, 240u, 195u, 25u,
18u, 32u, 8u, 128u, 144u, 29u, 132u, 103u, 23u, 145u, 26u, 69u, 228u,
136u, 42u, 32u, 139u, 201u, 13u, 49u, 121u, 48u, 233u, 36u, 70u, 241u,
56u, 139u, 34u, 2u, 34u, 88u, 154u, 39u, 138u, 34u, 144u, 225u, 21u,
8u, 174u, 42u, 224u, 36u, 195u, 164u, 146u, 73u, 35u, 132u, 134u, 6u,
48u, 152u, 24u, 166u, 14u, 4u, 112u, 112u, 192u, 152u, 14u, 17u, 192u,
131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 131u, 6u, 8u, 150u, 38u, 137u, 34u, 136u, 166u, 42u, 142u,
73u, 28u, 20u, 48u, 36u, 114u, 71u, 4u, 12u, 9u, 21u, 17u, 192u, 195u,
2u, 69u, 36u, 112u, 32u, 192u, 145u, 65u, 28u, 4u, 48u, 36u, 72u, 71u,
0u, 12u, 9u, 19u, 16u, 196u, 24u, 24u, 196u, 114u, 66u, 96u, 56u, 73u,
0u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 129u, 6u, 8u, 232u, 71u, 113u, 44u, 77u, 18u, 69u, 17u, 76u,
85u, 30u, 18u, 71u, 0u, 12u, 12u, 98u, 57u, 34u, 37u, 137u, 162u, 72u,
162u, 41u, 138u, 163u, 146u, 72u, 98u, 12u, 12u, 98u, 38u, 137u, 34u,
136u, 166u, 42u, 33u, 48u, 28u, 36u, 128u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 30u, 196u, 209u, 36u, 81u, 20u, 197u, 68u,
71u, 66u, 59u, 137u, 98u, 104u, 146u, 40u, 138u, 98u, 168u, 240u,
146u, 71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 25u, 136u, 224u, 225u,
129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u,
194u, 64u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 133u, 6u, 8u, 246u, 38u, 137u, 4u, 49u, 4u, 30u, 1u, 192u,
73u, 28u, 20u, 48u, 38u, 7u, 164u, 112u, 64u, 192u, 144u, 65u, 28u,
8u, 48u, 38u, 7u, 164u, 112u, 16u, 192u, 145u, 33u, 28u, 0u, 48u, 36u,
76u, 67u, 16u, 96u, 99u, 17u, 52u, 73u, 4u, 16u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 134u, 6u, 8u, 250u, 63u, 18u, 4u, 77u, 18u, 65u, 4u, 71u,
177u, 52u, 72u, 33u, 136u, 32u, 240u, 14u, 2u, 73u, 28u, 36u, 48u,
49u, 132u, 192u, 245u, 48u, 94u, 35u, 131u, 134u, 4u, 192u, 112u,
142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 133u, 6u, 8u, 246u, 38u, 137u, 4u, 49u, 4u, 30u, 0u, 220u,
72u, 224u, 161u, 129u, 48u, 61u, 35u, 130u, 6u, 4u, 130u, 8u, 224u,
65u, 129u, 48u, 61u, 35u, 128u, 134u, 4u, 137u, 8u, 224u, 1u, 129u,
34u, 98u, 24u, 131u, 3u, 24u, 137u, 162u, 72u, 32u, 132u, 192u, 112u,
146u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 134u, 6u, 8u, 250u, 63u, 18u, 12u, 77u, 18u, 65u, 4u, 71u,
177u, 52u, 72u, 33u, 136u, 32u, 240u, 6u, 226u, 72u, 225u, 33u, 129u,
140u, 38u, 7u, 169u, 130u, 241u, 28u, 28u, 48u, 38u, 3u, 132u, 112u,
32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 154u, 6u, 7u, 17u, 33u, 6u, 137u, 12u, 193u, 129u, 222u, 67u,
36u, 62u, 72u, 100u, 145u, 204u, 195u, 2u, 96u, 226u, 71u, 50u, 12u,
9u, 33u, 145u, 204u, 3u, 2u, 96u, 78u, 71u, 47u, 12u, 9u, 33u, 17u,
203u, 131u, 2u, 96u, 172u, 71u, 45u, 12u, 9u, 33u, 145u, 203u, 3u, 2u,
65u, 132u, 114u, 160u, 192u, 152u, 26u, 17u, 202u, 3u, 2u, 96u, 78u,
71u, 39u, 12u, 9u, 6u, 17u, 201u, 67u, 3u, 92u, 134u, 72u, 228u, 129u,
129u, 36u, 50u, 57u, 16u, 96u, 73u, 16u, 142u, 64u, 24u, 36u, 40u,
154u, 36u, 130u, 9u, 28u, 124u, 48u, 36u, 132u, 71u, 30u, 12u, 9u, 4u,
17u, 199u, 67u, 2u, 68u, 132u, 113u, 192u, 192u, 145u, 49u, 28u, 104u,
48u, 38u, 92u, 68u, 113u, 128u, 193u, 34u, 200u, 210u, 57u, 35u, 139u,
134u, 4u, 145u, 200u, 226u, 97u, 129u, 51u, 255u, 35u, 135u, 134u, 6u,
241u, 36u, 9u, 38u, 68u, 36u, 38u, 127u, 228u, 142u, 26u, 24u, 19u,
66u, 71u, 200u, 225u, 129u, 129u, 52u, 37u, 48u, 142u, 22u, 24u, 18u,
68u, 35u, 132u, 134u, 4u, 208u, 145u, 242u, 56u, 56u, 96u, 144u, 162u,
104u, 146u, 8u, 36u, 112u, 96u, 192u, 146u, 17u, 28u, 20u, 48u, 36u,
16u, 71u, 4u, 12u, 9u, 18u, 17u, 192u, 195u, 2u, 68u, 196u, 112u, 16u,
192u, 215u, 34u, 18u, 56u, 0u, 96u, 73u, 16u, 134u, 32u, 192u, 198u,
34u, 72u, 154u, 8u, 73u, 16u, 54u, 0u, 154u, 26u, 158u, 19u, 66u,
224u, 8u, 105u, 9u, 161u, 34u, 129u, 145u, 196u, 8u, 48u, 38u, 92u,
68u, 72u, 114u, 33u, 33u, 148u, 38u, 75u, 176u, 96u, 76u, 7u, 9u, 36u,
146u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 128u, 6u, 6u, 49u, 18u, 68u, 208u, 66u, 72u, 129u, 176u, 6u,
185u, 16u, 137u, 10u, 38u, 137u, 32u, 130u, 67u, 72u, 111u, 18u, 64u,
146u, 100u, 66u, 68u, 139u, 35u, 72u, 228u, 134u, 71u, 16u, 32u, 193u,
33u, 68u, 209u, 36u, 16u, 72u, 144u, 228u, 66u, 67u, 40u, 107u, 144u,
204u, 24u, 28u, 68u, 132u, 26u, 36u, 51u, 6u, 7u, 121u, 12u, 144u,
249u, 33u, 146u, 73u, 36u, 134u, 32u, 192u, 198u, 36u, 121u, 8u, 135u,
32u, 152u, 19u, 132u, 193u, 88u, 146u, 64u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 37u, 72u, 242u, 17u, 14u, 66u, 36u, 137u,
160u, 132u, 145u, 3u, 96u, 13u, 114u, 33u, 18u, 20u, 77u, 18u, 65u,
4u, 134u, 144u, 222u, 36u, 129u, 36u, 200u, 132u, 137u, 22u, 70u,
145u, 201u, 12u, 142u, 32u, 65u, 130u, 66u, 137u, 162u, 72u, 32u,
145u, 33u, 200u, 132u, 134u, 80u, 215u, 33u, 152u, 48u, 56u, 137u, 8u,
52u, 72u, 102u, 12u, 14u, 242u, 25u, 33u, 242u, 67u, 36u, 146u, 73u,
35u, 132u, 134u, 6u, 48u, 152u, 24u, 166u, 9u, 4u, 112u, 112u, 192u,
152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u,
225u, 32u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 136u, 6u, 8u, 250u, 63u, 146u, 196u, 148u, 24u, 100u, 179u,
32u, 18u, 71u, 13u, 12u, 9u, 129u, 233u, 28u, 44u, 48u, 36u, 128u,
71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u,
192u, 152u, 14u, 18u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 136u, 6u, 8u, 250u, 63u, 147u, 4u, 148u, 24u, 100u, 195u,
32u, 146u, 71u, 13u, 12u, 9u, 129u, 233u, 28u, 44u, 48u, 36u, 130u,
71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u,
192u, 152u, 14u, 18u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 140u, 134u, 7u, 17u, 38u, 146u, 71u, 23u, 12u, 9u, 129u, 57u,
28u, 88u, 48u, 73u, 210u, 121u, 35u, 138u, 134u, 4u, 147u, 200u, 226u,
65u, 130u, 78u, 148u, 9u, 28u, 56u, 48u, 60u, 9u, 70u, 82u, 147u,
200u, 76u, 55u, 137u, 28u, 48u, 48u, 38u, 35u, 132u, 112u, 176u, 192u,
146u, 121u, 28u, 28u, 48u, 38u, 35u, 132u, 112u, 64u, 192u, 222u, 37u,
57u, 60u, 132u, 196u, 68u, 38u, 16u, 33u, 48u, 28u, 36u, 112u, 48u,
192u, 153u, 1u, 17u, 192u, 131u, 2u, 73u, 228u, 112u, 0u, 193u, 38u,
146u, 24u, 131u, 3u, 26u, 134u, 71u, 16u, 36u, 240u, 153u, 103u, 146u,
19u, 31u, 114u, 73u, 0u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 129u, 6u, 9u, 82u, 85u, 14u, 74u, 25u, 28u, 64u, 147u, 196u,
154u, 73u, 13u, 226u, 83u, 147u, 200u, 120u, 18u, 140u, 165u, 39u,
145u, 39u, 74u, 4u, 137u, 58u, 79u, 33u, 196u, 73u, 164u, 146u, 73u,
28u, 4u, 48u, 36u, 172u, 71u, 0u, 12u, 9u, 42u, 144u, 196u, 24u, 24u,
196u, 170u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 135u, 6u, 8u, 250u, 63u, 18u, 188u, 170u, 68u, 169u, 42u,
135u, 37u, 12u, 142u, 32u, 73u, 226u, 77u, 36u, 134u, 241u, 41u, 201u,
228u, 60u, 9u, 70u, 82u, 147u, 200u, 147u, 165u, 2u, 68u, 157u, 39u,
144u, 226u, 36u, 210u, 73u, 36u, 145u, 194u, 195u, 3u, 24u, 76u, 15u,
83u, 4u, 162u, 56u, 72u, 96u, 76u, 7u, 8u, 224u, 129u, 129u, 48u, 28u,
35u, 129u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 140u, 6u, 4u, 131u, 8u, 226u, 225u, 128u, 75u, 18u, 201u,
137u, 160u, 194u, 71u, 22u, 12u, 9u, 130u, 73u, 28u, 80u, 48u, 36u,
178u, 71u, 19u, 12u, 9u, 6u, 17u, 196u, 131u, 2u, 68u, 196u, 113u, 0u,
192u, 152u, 35u, 17u, 195u, 195u, 3u, 32u, 16u, 96u, 150u, 132u, 183u,
19u, 18u, 72u, 151u, 4u, 179u, 19u, 24u, 48u, 193u, 132u, 142u, 26u,
24u, 19u, 24u, 130u, 56u, 88u, 96u, 76u, 101u, 72u, 225u, 65u, 129u,
34u, 98u, 56u, 64u, 96u, 76u, 101u, 72u, 224u, 193u, 129u, 49u, 136u,
35u, 129u, 134u, 9u, 102u, 38u, 36u, 112u, 32u, 192u, 145u, 49u, 28u,
0u, 48u, 38u, 94u, 132u, 49u, 6u, 6u, 49u, 19u, 16u, 236u, 19u, 47u,
65u, 46u, 193u, 129u, 49u, 136u, 9u, 141u, 193u, 36u, 144u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 134u, 6u, 8u, 250u, 63u, 18u, 244u, 76u, 67u, 176u, 150u,
98u, 98u, 37u, 216u, 48u, 75u, 66u, 91u, 137u, 137u, 18u, 224u, 150u,
98u, 99u, 6u, 18u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 245u, 48u,
74u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u,
56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 154u, 6u, 8u, 40u, 66u, 81u, 52u, 170u, 67u, 68u, 190u, 73u,
28u, 204u, 48u, 38u, 9u, 164u, 115u, 0u, 192u, 152u, 20u, 145u, 203u,
195u, 2u, 74u, 164u, 114u, 224u, 192u, 145u, 49u, 28u, 176u, 48u, 38u,
5u, 36u, 114u, 160u, 192u, 235u, 2u, 8u, 74u, 38u, 149u, 72u, 106u,
151u, 201u, 35u, 148u, 134u, 4u, 198u, 96u, 142u, 76u, 24u, 19u, 23u,
66u, 57u, 40u, 96u, 73u, 84u, 142u, 72u, 24u, 18u, 38u, 35u, 145u, 6u,
4u, 197u, 208u, 142u, 64u, 24u, 18u, 4u, 35u, 142u, 134u, 7u, 176u,
209u, 47u, 144u, 195u, 48u, 18u, 71u, 28u, 12u, 9u, 150u, 249u, 28u,
104u, 48u, 58u, 192u, 2u, 18u, 137u, 165u, 82u, 26u, 165u, 242u, 72u,
227u, 33u, 129u, 51u, 146u, 35u, 139u, 6u, 4u, 205u, 184u, 142u, 42u,
24u, 18u, 85u, 35u, 138u, 6u, 4u, 137u, 136u, 226u, 65u, 129u, 51u,
110u, 35u, 136u, 6u, 4u, 128u, 8u, 225u, 161u, 129u, 236u, 52u, 75u,
228u, 48u, 204u, 36u, 145u, 195u, 3u, 2u, 104u, 76u, 201u, 28u, 36u,
48u, 65u, 66u, 18u, 137u, 165u, 82u, 72u, 224u, 225u, 129u, 52u, 43u,
24u, 142u, 12u, 24u, 18u, 85u, 35u, 130u, 134u, 4u, 137u, 136u, 224u,
97u, 129u, 52u, 43u, 24u, 142u, 2u, 24u, 26u, 229u, 242u, 71u, 0u,
12u, 9u, 47u, 144u, 196u, 24u, 24u, 196u, 77u, 42u, 164u, 190u, 27u,
0u, 77u, 12u, 194u, 9u, 161u, 83u, 36u, 4u, 208u, 152u, 224u, 153u,
172u, 144u, 19u, 45u, 64u, 152u, 175u, 144u, 210u, 19u, 1u, 194u, 73u,
32u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 134u, 6u, 8u, 250u, 63u, 19u, 20u, 77u, 42u, 164u, 190u, 27u,
0u, 107u, 151u, 200u, 130u, 132u, 37u, 19u, 74u, 164u, 144u, 30u,
195u, 68u, 190u, 67u, 12u, 194u, 72u, 117u, 128u, 4u, 37u, 19u, 74u,
164u, 53u, 75u, 228u, 144u, 30u, 195u, 68u, 190u, 67u, 12u, 192u, 72u,
117u, 129u, 4u, 37u, 19u, 74u, 164u, 53u, 75u, 228u, 144u, 210u, 32u,
161u, 9u, 68u, 210u, 169u, 13u, 18u, 249u, 36u, 146u, 56u, 72u, 96u,
99u, 9u, 129u, 234u, 96u, 190u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u,
48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[139];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("regexp\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("librx.scm", 9, 9),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("regmatch\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("case-fold", 9, 9),
      SCM_STRING_CONST_INITIALIZER("multi-line", 10, 10),
      SCM_STRING_CONST_INITIALIZER("string->regexp", 14, 14),
      SCM_STRING_CONST_INITIALIZER("str", 3, 3),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<string>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("regexp-ast", 10, 10),
      SCM_STRING_CONST_INITIALIZER("regexp", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<regexp>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("regexp-case-fold\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("regexp-parse", 12, 12),
      SCM_STRING_CONST_INITIALIZER("regexp-compile", 14, 14),
      SCM_STRING_CONST_INITIALIZER("ast", 3, 3),
      SCM_STRING_CONST_INITIALIZER("regexp-optimize", 15, 15),
      SCM_STRING_CONST_INITIALIZER("regexp-num-groups", 17, 17),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("regexp-named-groups", 19, 19),
      SCM_STRING_CONST_INITIALIZER("rxmatch", 7, 7),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("start", 5, 5),
      SCM_STRING_CONST_INITIALIZER("end", 3, 3),
      SCM_STRING_CONST_INITIALIZER("rxmatch-substring", 17, 17),
      SCM_STRING_CONST_INITIALIZER("match", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rxmatch-start", 13, 13),
      SCM_STRING_CONST_INITIALIZER("rxmatch-end", 11, 11),
      SCM_STRING_CONST_INITIALIZER("rxmatch-before", 14, 14),
      SCM_STRING_CONST_INITIALIZER("rxmatch-after", 13, 13),
      SCM_STRING_CONST_INITIALIZER("rxmatch-num-matches", 19, 19),
      SCM_STRING_CONST_INITIALIZER("rxmatch-named-groups", 20, 20),
      SCM_STRING_CONST_INITIALIZER("%regexp-dump", 12, 12),
      SCM_STRING_CONST_INITIALIZER("rx", 2, 2),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%regmatch-dump", 14, 14),
      SCM_STRING_CONST_INITIALIZER("rm", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<regmatch>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("%regexp-pattern", 15, 15),
      SCM_STRING_CONST_INITIALIZER("(setter %regexp-pattern)", 24, 24),
      SCM_STRING_CONST_INITIALIZER("%regexp-laset", 13, 13),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("%regexp-parse-subpattern", 24, 24),
      SCM_STRING_CONST_INITIALIZER("\134\134(\077:([0-9]+)|k<([^>]+)>|(.))", 29, 29),
      SCM_STRING_CONST_INITIALIZER("loop2", 5, 5),
      SCM_STRING_CONST_INITIALIZER("loop", 4, 4),
      SCM_STRING_CONST_INITIALIZER("elem", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string->number", 14, 14),
      SCM_STRING_CONST_INITIALIZER("string->symbol", 14, 14),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("procedure\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("string, procedure or list required, but got", 43, 43),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sub", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%regexp-replace-rec", 19, 19),
      SCM_STRING_CONST_INITIALIZER("", 0, 0),
      SCM_STRING_CONST_INITIALIZER("equal\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string-ref", 10, 10),
      SCM_STRING_CONST_INITIALIZER("display", 7, 7),
      SCM_STRING_CONST_INITIALIZER("string-copy", 11, 11),
      SCM_STRING_CONST_INITIALIZER("next-string", 11, 11),
      SCM_STRING_CONST_INITIALIZER("pre", 3, 3),
      SCM_STRING_CONST_INITIALIZER("post", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string", 6, 6),
      SCM_STRING_CONST_INITIALIZER("subpat", 6, 6),
      SCM_STRING_CONST_INITIALIZER("subskip", 7, 7),
      SCM_STRING_CONST_INITIALIZER("subcount", 8, 8),
      SCM_STRING_CONST_INITIALIZER("out", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%regexp-replace", 15, 15),
      SCM_STRING_CONST_INITIALIZER("G2161", 5, 5),
      SCM_STRING_CONST_INITIALIZER("call-with-output-string", 23, 23),
      SCM_STRING_CONST_INITIALIZER("regexp-replace", 14, 14),
      SCM_STRING_CONST_INITIALIZER("regexp-replace-all", 18, 18),
      SCM_STRING_CONST_INITIALIZER("regexp-replace-driver", 21, 21),
      SCM_STRING_CONST_INITIALIZER("even\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("~a: regexp and substitution don't pair up", 41, 41),
      SCM_STRING_CONST_INITIALIZER("errorf", 6, 6),
      SCM_STRING_CONST_INITIALIZER("more", 4, 4),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("func-1", 6, 6),
      SCM_STRING_CONST_INITIALIZER("regexp-replace*", 15, 15),
      SCM_STRING_CONST_INITIALIZER("regexp-replace-all*", 19, 19),
      SCM_STRING_CONST_INITIALIZER("char-set-contains\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("regexp-quote", 12, 12),
      SCM_STRING_CONST_INITIALIZER("G2162", 5, 5),
      SCM_STRING_CONST_INITIALIZER("with-string-io", 14, 14),
      SCM_STRING_CONST_INITIALIZER("regexp->string", 14, 14),
      SCM_STRING_CONST_INITIALIZER("regexp-unparse", 14, 14),
      SCM_STRING_CONST_INITIALIZER("rxmatch->string", 15, 15),
      SCM_STRING_CONST_INITIALIZER("after", 5, 5),
      SCM_STRING_CONST_INITIALIZER("before", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sel", 3, 3),
      SCM_STRING_CONST_INITIALIZER("m", 1, 1),
      SCM_STRING_CONST_INITIALIZER("list*", 5, 5),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("tmp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("reverse", 7, 7),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("=>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("^s", 2, 2),
      SCM_STRING_CONST_INITIALIZER("d", 1, 1),
      SCM_STRING_CONST_INITIALIZER("^d", 2, 2),
      SCM_STRING_CONST_INITIALIZER("^m", 2, 2),
      SCM_STRING_CONST_INITIALIZER("string\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("=", 1, 1),
      SCM_STRING_CONST_INITIALIZER("next", 4, 4),
      SCM_STRING_CONST_INITIALIZER("-", 1, 1),
      SCM_STRING_CONST_INITIALIZER("do", 2, 2),
      SCM_STRING_CONST_INITIALIZER("p2160", 5, 5),
      SCM_STRING_CONST_INITIALIZER("pat", 3, 3),
      SCM_STRING_CONST_INITIALIZER("number\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("symbol\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("dolist", 6, 6),
      SCM_STRING_CONST_INITIALIZER(">", 1, 1),
      SCM_STRING_CONST_INITIALIZER("and-let1", 8, 8),
      SCM_STRING_CONST_INITIALIZER("zero\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("length", 6, 6),
      SCM_STRING_CONST_INITIALIZER("read-char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("write-char", 10, 10),
      SCM_STRING_CONST_INITIALIZER("c", 1, 1),
      SCM_STRING_CONST_INITIALIZER("eof-object\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("setter", 6, 6),
      SCM_STRING_CONST_INITIALIZER("set!", 4, 4),
      SCM_STRING_CONST_INITIALIZER("rlet1", 5, 5),
  },
};
static struct scm__rcRec {
  ScmUVector d2159[26];
  ScmCompiledCode d2158[26];
  ScmWord d2157[736];
  ScmPair d2150[306] SCM_ALIGN_PAIR;
  ScmObj d2149[417];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2159 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 82, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 304, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 184, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 139, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 193, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 942, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 245, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 56, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 49, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 55, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 55, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 52, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 54, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 268, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 87, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 105, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 44, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 44, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 110, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 60, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 73, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 130, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 59, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 250, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 102, uvector__00026, 0, NULL),
  },
  {   /* ScmCompiledCode d2158 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* loop2 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[0])), 19,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[201]),
            SCM_OBJ(&scm__rc.d2158[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* loop */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[19])), 66,
            28, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[209]),
            SCM_OBJ(&scm__rc.d2158[2]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %regexp-parse-subpattern */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[85])), 25,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[216]),
            SCM_OBJ(&scm__rc.d2158[3]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[110])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* next-string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[125])), 45,
            24, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[220]),
            SCM_OBJ(&scm__rc.d2158[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %regexp-replace-rec */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[170])), 193,
            43, 6, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[232]),
            SCM_OBJ(&scm__rc.d2158[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[363])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[378])), 9,
            9, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[240]),
            SCM_OBJ(&scm__rc.d2158[8]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %regexp-replace */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[387])), 5,
            4, 5, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[250]),
            SCM_OBJ(&scm__rc.d2158[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[392])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* regexp-replace */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[407])), 13,
            14, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[257]),
            SCM_OBJ(&scm__rc.d2158[11]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[420])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* regexp-replace-all */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[435])), 13,
            14, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[262]),
            SCM_OBJ(&scm__rc.d2158[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[448])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* regexp-replace-driver */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[463])), 56,
            26, 3, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[272]),
            SCM_OBJ(&scm__rc.d2158[15]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* regexp-replace-driver */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[519])), 3,
            0, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[279]),
            SCM_OBJ(&scm__rc.d2158[16]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[522])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[537])), 19,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[556])), 19,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (regexp-quote #:G2162) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[575])), 29,
            23, 0, 0, SCM_OBJ(&scm__rc.d2150[281]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[286]),
            SCM_OBJ(&scm__rc.d2158[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* regexp-quote */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[604])), 5,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[293]),
            SCM_OBJ(&scm__rc.d2158[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[609])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* regexp->string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[626])), 25,
            18, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[298]),
            SCM_OBJ(&scm__rc.d2158[23]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[651])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* rxmatch->string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[666])), 55,
            14, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[305]),
            SCM_OBJ(&scm__rc.d2158[25]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[721])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2157 */
    /* (%regexp-parse-subpattern loop loop2) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 5),
    0x0000004f    /*   2 (LREF20-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-after */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000048    /*   6 (LREF0-PUSH) */,
    0x0000100e    /*   7 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 12),
    0x0000004f    /*   9 (LREF20-PUSH) */,
    0x0000105f    /*  10 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-before */,
    0x0000000d    /*  12 (PUSH) */,
    0x00000046    /*  13 (LREF30) */,
    0x00003089    /*  14 (LIST-STAR 3) */,
    0x0000000d    /*  15 (PUSH) */,
    0x0000403c    /*  16 (LREF 4 0) */,
    0x0000201d    /*  17 (LOCAL-ENV-TAIL-CALL 2) */,
    0x00000014    /*  18 (RET) */,
    /* (%regexp-parse-subpattern loop) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]) + 7),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #/\\(?:([0-9]+)|k<([^>]+)>|(.))/ */,
    0x00000049    /*   4 (LREF1-PUSH) */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000001e    /*   9 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]) + 61),
    0x00001019    /*  11 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[202])) /* (#<compiled-code (%regexp-parse-subpattern loop loop2)@0x780cb6d886c0>) */,
    0x0000200e    /*  13 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]) + 19),
    0x0000004c    /*  15 (LREF10-PUSH) */,
    0x00001007    /*  16 (CONSTI-PUSH 1) */,
    0x0000205f    /*  17 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-substring */,
    0x00001018    /*  19 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  20 (LREF0) */,
    0x0000001e    /*  21 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]) + 32),
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]) + 28),
    0x00000048    /*  25 (LREF0-PUSH) */,
    0x0000105f    /*  26 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string->number */,
    0x0000000d    /*  28 (PUSH) */,
    0x00000041    /*  29 (LREF10) */,
    0x0000101d    /*  30 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  31 (RET) */,
    0x0000200e    /*  32 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]) + 38),
    0x0000004f    /*  34 (LREF20-PUSH) */,
    0x00002007    /*  35 (CONSTI-PUSH 2) */,
    0x0000205f    /*  36 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-substring */,
    0x00001018    /*  38 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  39 (LREF0) */,
    0x0000001e    /*  40 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]) + 51),
    0x0000100e    /*  42 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]) + 47),
    0x00000048    /*  44 (LREF0-PUSH) */,
    0x0000105f    /*  45 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string->symbol */,
    0x0000000d    /*  47 (PUSH) */,
    0x00000044    /*  48 (LREF20) */,
    0x0000101d    /*  49 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  50 (RET) */,
    0x0000200e    /*  51 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]) + 57),
    0x00000051    /*  53 (LREF30-PUSH) */,
    0x00003007    /*  54 (CONSTI-PUSH 3) */,
    0x0000205f    /*  55 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-substring */,
    0x0000000d    /*  57 (PUSH) */,
    0x00000044    /*  58 (LREF20) */,
    0x0000101d    /*  59 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  60 (RET) */,
    0x0000004d    /*  61 (LREF11-PUSH) */,
    0x00000041    /*  62 (LREF10) */,
    0x00000066    /*  63 (CONS) */,
    0x00000093    /*  64 (REVERSE) */,
    0x00000014    /*  65 (RET) */,
    /* %regexp-parse-subpattern */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009b    /*   1 (STRINGP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[85]) + 11),
    0x00001019    /*   4 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[210])) /* (#<compiled-code (%regexp-parse-subpattern loop)@0x780cb6d88720>) */,
    0x0000004c    /*   6 (LREF10-PUSH) */,
    0x00000008    /*   7 (CONSTN-PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000201d    /*   9 (LOCAL-ENV-TAIL-CALL 2) */,
    0x00000014    /*  10 (RET) */,
    0x0000100e    /*  11 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[85]) + 16),
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x0000105f    /*  14 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* procedure? */,
    0x0000001e    /*  16 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[85]) + 19),
    0x00000053    /*  18 (LREF0-RET) */,
    0x00000006    /*  19 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[60])) /* "string, procedure or list required, but got" */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x00002060    /*  22 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  24 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[110]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-parse-subpattern */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[110]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[2])) /* #<compiled-code %regexp-parse-subpattern@0x780cb6d88780> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-parse-subpattern */,
    0x00000014    /*  14 (RET) */,
    /* (%regexp-replace-rec next-string) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-after */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   6 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]) + 13),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[65])) /* "" */,
    0x0000205f    /*  11 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x00000092    /*  13 (NOT) */,
    0x00000030    /*  14 (RF) */,
    0x0000100e    /*  15 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]) + 20),
    0x0000004c    /*  17 (LREF10-PUSH) */,
    0x0000105f    /*  18 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-start */,
    0x0000100f    /*  20 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]) + 25),
    0x0000004c    /*  22 (LREF10-PUSH) */,
    0x0000105f    /*  23 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-end */,
    0x00000023    /*  25 (BNUMNE) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]) + 44),
    0x0000200e    /*  27 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]) + 39),
    0x0000200e    /*  29 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]) + 35),
    0x00000048    /*  31 (LREF0-PUSH) */,
    0x00000007    /*  32 (CONSTI-PUSH 0) */,
    0x0000205f    /*  33 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x0000000d    /*  35 (PUSH) */,
    0x00000051    /*  36 (LREF30-PUSH) */,
    0x0000205f    /*  37 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x00001007    /*  40 (CONSTI-PUSH 1) */,
    0x00002060    /*  41 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-copy */,
    0x00000014    /*  43 (RET) */,
    0x00000053    /*  44 (LREF0-RET) */,
    /* %regexp-replace-rec */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[221])) /* (#<compiled-code (%regexp-replace-rec next-string)@0x780cb6a55420>) */,
    0x00000042    /*   2 (LREF11) */,
    0x0000001e    /*   3 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 13),
    0x00000042    /*   5 (LREF11) */,
    0x0000002d    /*   6 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 13),
    0x01001047    /*   8 (LREF-PUSH 1 4) */,
    0x0000004c    /*   9 (LREF10-PUSH) */,
    0x00002060    /*  10 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x00000014    /*  12 (RET) */,
    0x0000200e    /*  13 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 19),
    0x01401047    /*  15 (LREF-PUSH 1 5) */,
    0x01001047    /*  16 (LREF-PUSH 1 4) */,
    0x0000205f    /*  17 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x00001018    /*  19 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  20 (LREF0) */,
    0x0000001e    /*  21 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 185),
    0x00000002    /*  23 (CONSTI 0) */,
    0x0080202b    /*  24 (LREF-VAL0-BNGT 2 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 67),
    0x0000200e    /*  26 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 37),
    0x0000100e    /*  28 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 33),
    0x00000048    /*  30 (LREF0-PUSH) */,
    0x0000105f    /*  31 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-before */,
    0x0000000d    /*  33 (PUSH) */,
    0x0000004f    /*  34 (LREF20-PUSH) */,
    0x0000205f    /*  35 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000200e    /*  37 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 48),
    0x0000100e    /*  39 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 44),
    0x00000048    /*  41 (LREF0-PUSH) */,
    0x0000105f    /*  42 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-substring */,
    0x0000000d    /*  44 (PUSH) */,
    0x0000004f    /*  45 (LREF20-PUSH) */,
    0x0000205f    /*  46 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000100e    /*  48 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 53),
    0x00000048    /*  50 (LREF0-PUSH) */,
    0x00000041    /*  51 (LREF10) */,
    0x0000101c    /*  52 (LOCAL-ENV-CALL 1) */,
    0x00001018    /*  53 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  54 (LREF0) */,
    0x00000030    /*  55 (RF) */,
    0x01403047    /*  56 (LREF-PUSH 3 5) */,
    0x00000048    /*  57 (LREF0-PUSH) */,
    0x00c03047    /*  58 (LREF-PUSH 3 3) */,
    0x0080303c    /*  59 (LREF 3 2) */,
    -0x00000f44   /*  60 (NUMADDI -1) */,
    0x0000000d    /*  61 (PUSH) */,
    0x00403047    /*  62 (LREF-PUSH 3 1) */,
    0x00000051    /*  63 (LREF30-PUSH) */,
    0x00006060    /*  64 (GREF-TAIL-CALL 6) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-replace-rec */,
    0x00000014    /*  66 (RET) */,
    0x0000200e    /*  67 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 78),
    0x0000100e    /*  69 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 74),
    0x00000048    /*  71 (LREF0-PUSH) */,
    0x0000105f    /*  72 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-before */,
    0x0000000d    /*  74 (PUSH) */,
    0x0000004f    /*  75 (LREF20-PUSH) */,
    0x0000205f    /*  76 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000100e    /*  78 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 83),
    0x00c02047    /*  80 (LREF-PUSH 2 3) */,
    0x0000105f    /*  81 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* procedure? */,
    0x0000001e    /*  83 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 98),
    0x0000200e    /*  85 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 163),
    0x0000100e    /*  87 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 92),
    0x00000048    /*  89 (LREF0-PUSH) */,
    0x00c0203c    /*  90 (LREF 2 3) */,
    0x00001011    /*  91 (CALL 1) */,
    0x0000000d    /*  92 (PUSH) */,
    0x0000004f    /*  93 (LREF20-PUSH) */,
    0x0000205f    /*  94 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x00000013    /*  96 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 163),
    0x0000100e    /*  98 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 163),
    0x00c02047    /* 100 (LREF-PUSH 2 3) */,
    0x00001017    /* 101 (LOCAL-ENV 1) */,
    0x0000003d    /* 102 (LREF0) */,
    0x00000022    /* 103 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 106),
    0x0000000c    /* 105 (CONSTU-RET) */,
    0x0000006a    /* 106 (LREF0-CAR) */,
    0x00001018    /* 107 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /* 108 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 157),
    0x0000003d    /* 110 (LREF0) */,
    0x0000002e    /* 111 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* pre */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 121)  /*    121 */,
    0x0000100e    /* 114 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 153),
    0x0000004f    /* 116 (LREF20-PUSH) */,
    0x0000105f    /* 117 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-before */,
    0x00000013    /* 119 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 153),
    0x0000003d    /* 121 (LREF0) */,
    0x0000002e    /* 122 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* post */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 132)  /*    132 */,
    0x0000100e    /* 125 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 153),
    0x0000004f    /* 127 (LREF20-PUSH) */,
    0x0000105f    /* 128 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-after */,
    0x00000013    /* 130 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 153),
    0x0000003d    /* 132 (LREF0) */,
    0x0000009e    /* 133 (NUMBERP) */,
    0x0000001e    /* 134 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 144),
    0x0000200e    /* 136 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 153),
    0x0000004f    /* 138 (LREF20-PUSH) */,
    0x00000048    /* 139 (LREF0-PUSH) */,
    0x0000205f    /* 140 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-substring */,
    0x00000013    /* 142 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 153),
    0x0000003d    /* 144 (LREF0) */,
    0x0000009c    /* 145 (SYMBOLP) */,
    0x0000001e    /* 146 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 152),
    0x00000013    /* 148 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 136),
    0x00000013    /* 150 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 153),
    0x0000003d    /* 152 (LREF0) */,
    0x0000000d    /* 153 (PUSH) */,
    0x00004047    /* 154 (LREF-PUSH 4 0) */,
    0x0000205f    /* 155 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000001a    /* 157 (POP-LOCAL-ENV) */,
    0x00000076    /* 158 (LREF0-CDR) */,
    0x0000000d    /* 159 (PUSH) */,
    0x0000101b    /* 160 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 102),
    0x00000014    /* 162 (RET) */,
    0x0000100e    /* 163 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 168),
    0x00000048    /* 165 (LREF0-PUSH) */,
    0x00000041    /* 166 (LREF10) */,
    0x0000101c    /* 167 (LOCAL-ENV-CALL 1) */,
    0x00001018    /* 168 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 169 (LREF0) */,
    0x00000030    /* 170 (RF) */,
    0x01403047    /* 171 (LREF-PUSH 3 5) */,
    0x00000048    /* 172 (LREF0-PUSH) */,
    0x00c03047    /* 173 (LREF-PUSH 3 3) */,
    0x00803047    /* 174 (LREF-PUSH 3 2) */,
    0x0040303c    /* 175 (LREF 3 1) */,
    0x0000001e    /* 176 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 180),
    0x0040303c    /* 178 (LREF 3 1) */,
    -0x00000f44   /* 179 (NUMADDI -1) */,
    0x0000000d    /* 180 (PUSH) */,
    0x00000051    /* 181 (LREF30-PUSH) */,
    0x00006060    /* 182 (GREF-TAIL-CALL 6) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-replace-rec */,
    0x00000014    /* 184 (RET) */,
    0x01002047    /* 185 (LREF-PUSH 2 4) */,
    0x0000004f    /* 186 (LREF20-PUSH) */,
    0x00002060    /* 187 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x00000014    /* 189 (RET) */,
    0x00000013    /* 190 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]) + 13),
    0x00000014    /* 192 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[363]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-replace-rec */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[363]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[5])) /* #<compiled-code %regexp-replace-rec@0x780cb6a55480> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-replace-rec */,
    0x00000014    /*  14 (RET) */,
    /* (%regexp-replace #f) */
    0x01001047    /*   0 (LREF-PUSH 1 4) */,
    0x00c01047    /*   1 (LREF-PUSH 1 3) */,
    0x0000004e    /*   2 (LREF12-PUSH) */,
    0x0000004d    /*   3 (LREF11-PUSH) */,
    0x0000004c    /*   4 (LREF10-PUSH) */,
    0x00000048    /*   5 (LREF0-PUSH) */,
    0x00006060    /*   6 (GREF-TAIL-CALL 6) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-replace-rec */,
    0x00000014    /*   8 (RET) */,
    /* %regexp-replace */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[7])) /* #<compiled-code (%regexp-replace #f)@0x780cb692d120> */,
    0x00001063    /*   2 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-output-string */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[392]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-replace */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[392]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[8])) /* #<compiled-code %regexp-replace@0x780cb692d180> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-replace */,
    0x00000014    /*  14 (RET) */,
    /* regexp-replace */
    0x0000004a    /*   0 (LREF2-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x0000100e    /*   2 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[407]) + 7),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000105f    /*   5 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-parse-subpattern */,
    0x0000000d    /*   7 (PUSH) */,
    0x00000007    /*   8 (CONSTI-PUSH 0) */,
    0x00001007    /*   9 (CONSTI-PUSH 1) */,
    0x00005060    /*  10 (GREF-TAIL-CALL 5) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-replace */,
    0x00000014    /*  12 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[420]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[420]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[10])) /* #<compiled-code regexp-replace@0x780cb677d540> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace */,
    0x00000014    /*  14 (RET) */,
    /* regexp-replace-all */
    0x0000004a    /*   0 (LREF2-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x0000100e    /*   2 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[435]) + 7),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000105f    /*   5 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-parse-subpattern */,
    0x0000000d    /*   7 (PUSH) */,
    0x00000007    /*   8 (CONSTI-PUSH 0) */,
    0x00000009    /*   9 (CONSTF-PUSH) */,
    0x00005060    /*  10 (GREF-TAIL-CALL 5) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-replace */,
    0x00000014    /*  12 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[448]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-all */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[448]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[12])) /* #<compiled-code regexp-replace-all@0x780cb9dd80c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-all */,
    0x00000014    /*  14 (RET) */,
    /* (regexp-replace-driver regexp-replace-driver) */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]) + 9),
    0x0000004a    /*   3 (LREF2-PUSH) */,
    0x0000004b    /*   4 (LREF3-PUSH) */,
    0x00000049    /*   5 (LREF1-PUSH) */,
    0x00000041    /*   6 (LREF10) */,
    0x00003012    /*   7 (TAIL-CALL 3) */,
    0x00000014    /*   8 (RET) */,
    0x0000100e    /*   9 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]) + 15),
    0x0000003d    /*  11 (LREF0) */,
    0x0000008a    /*  12 (LENGTH) */,
    0x00001062    /*  13 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* even? */,
    0x0000001e    /*  15 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]) + 19),
    0x00000013    /*  17 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]) + 26),
    0x0000200e    /*  19 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]) + 26),
    0x00000006    /*  21 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[85])) /* "~a: regexp and substitution don't pair up" */,
    0x0000004d    /*  23 (LREF11-PUSH) */,
    0x0000205f    /*  24 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0000300e    /*  26 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]) + 33),
    0x0000004a    /*  28 (LREF2-PUSH) */,
    0x0000004b    /*  29 (LREF3-PUSH) */,
    0x00000049    /*  30 (LREF1-PUSH) */,
    0x00000041    /*  31 (LREF10) */,
    0x00003011    /*  32 (CALL 3) */,
    0x0000000d    /*  33 (PUSH) */,
    0x00000048    /*  34 (LREF0-PUSH) */,
    0x00002017    /*  35 (LOCAL-ENV 2) */,
    0x0000003d    /*  36 (LREF0) */,
    0x00000022    /*  37 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]) + 40),
    0x00000054    /*  39 (LREF1-RET) */,
    0x0000300e    /*  40 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]) + 49),
    0x0000006a    /*  42 (LREF0-CAR) */,
    0x0000000d    /*  43 (PUSH) */,
    0x00000049    /*  44 (LREF1-PUSH) */,
    0x0000003d    /*  45 (LREF0) */,
    0x00000083    /*  46 (CADR-PUSH) */,
    0x00000044    /*  47 (LREF20) */,
    0x00003011    /*  48 (CALL 3) */,
    0x0000000d    /*  49 (PUSH) */,
    0x0000003d    /*  50 (LREF0) */,
    0x00000087    /*  51 (CDDR-PUSH) */,
    0x0000101b    /*  52 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]) + 36),
    0x00000014    /*  54 (RET) */,
    0x00000014    /*  55 (RET) */,
    /* regexp-replace-driver */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[14])) /* #<compiled-code (regexp-replace-driver regexp-replace-driver)@0x780cb825df00> */,
    0x00000014    /*   2 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[522]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-driver */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[522]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[15])) /* #<compiled-code regexp-replace-driver@0x780cb82521e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-driver */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[537]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace* */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[537]) + 16),
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace* */,
    0x0000005e    /*  11 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace */,
    0x00002060    /*  13 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-driver */,
    0x00000014    /*  15 (RET) */,
    0x00000015    /*  16 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace* */,
    0x00000014    /*  18 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[556]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-all* */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[556]) + 16),
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-all* */,
    0x0000005e    /*  11 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-all */,
    0x00002060    /*  13 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-driver */,
    0x00000014    /*  15 (RET) */,
    0x00000015    /*  16 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-all* */,
    0x00000014    /*  18 (RET) */,
    /* (regexp-quote #:G2162) */
    0x000000db    /*   0 (READ-CHAR 0) */,
    0x00001018    /*   1 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   2 (LREF0) */,
    0x0000009a    /*   3 (EOFP) */,
    0x0000001e    /*   4 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[575]) + 7),
    0x0000000c    /*   6 (CONSTU-RET) */,
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[575]) + 14),
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #[$(-+.?\[-^{-}] */,
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x0000205f    /*  12 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-contains? */,
    0x0000001e    /*  14 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[575]) + 21),
    0x00000001    /*  16 (CONST) */,
    SCM_WORD(SCM_MAKE_CHAR(92)) /* #\\ */,
    0x000010dd    /*  18 (WRITE-CHAR 1) */,
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[575]) + 21),
    0x0000003d    /*  21 (LREF0) */,
    0x000010dd    /*  22 (WRITE-CHAR 1) */,
    0x000000db    /*  23 (READ-CHAR 0) */,
    0x0000000d    /*  24 (PUSH) */,
    0x0000101b    /*  25 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[575]) + 2),
    0x00000014    /*  27 (RET) */,
    0x00000014    /*  28 (RET) */,
    /* regexp-quote */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000004c    /*   1 (LREF10-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-string-io */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[287])) /* (#<compiled-code (regexp-quote #:G2162)@0x780cb704eae0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[609]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-quote */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[609]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[20])) /* #<compiled-code regexp-quote@0x780cb704ea80> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-quote */,
    0x00000014    /*  16 (RET) */,
    /* regexp->string */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[626]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-pattern */,
    0x00000031    /*   5 (RT) */,
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[626]) + 15),
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[626]) + 13),
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x0000105f    /*  11 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-ast */,
    0x00001062    /*  13 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-unparse */,
    0x00001018    /*  15 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  16 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[626]) + 24),
    0x0000004c    /*  18 (LREF10-PUSH) */,
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x0000005d    /*  20 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* %regexp-pattern */,
    0x000000a1    /*  22 (SETTER) */,
    0x00002011    /*  23 (CALL 2) */,
    0x00000053    /*  24 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[651]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp->string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[651]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[22])) /* #<compiled-code regexp->string@0x780cb718c7e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp->string */,
    0x00000014    /*  14 (RET) */,
    /* rxmatch->string */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]) + 12),
    0x0000200e    /*   3 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]) + 9),
    0x0000004a    /*   5 (LREF2-PUSH) */,
    0x00000049    /*   6 (LREF1-PUSH) */,
    0x0000205f    /*   7 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x00001063    /*   9 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-substring */,
    0x00000014    /*  11 (RET) */,
    0x0000006a    /*  12 (LREF0-CAR) */,
    0x0000002e    /*  13 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* after */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]) + 28)  /*     28 */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-after */,
    0x0000200e    /*  18 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]) + 24),
    0x0000004a    /*  20 (LREF2-PUSH) */,
    0x00000049    /*  21 (LREF1-PUSH) */,
    0x0000205f    /*  22 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x0000000d    /*  24 (PUSH) */,
    0x00000076    /*  25 (LREF0-CDR) */,
    0x00003095    /*  26 (TAIL-APPLY 3) */,
    0x00000014    /*  27 (RET) */,
    0x0000006a    /*  28 (LREF0-CAR) */,
    0x0000002e    /*  29 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* before */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]) + 44)  /*     44 */,
    0x0000005e    /*  32 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-before */,
    0x0000200e    /*  34 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]) + 40),
    0x0000004a    /*  36 (LREF2-PUSH) */,
    0x00000049    /*  37 (LREF1-PUSH) */,
    0x0000205f    /*  38 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x0000000d    /*  40 (PUSH) */,
    0x00000076    /*  41 (LREF0-CDR) */,
    0x00003095    /*  42 (TAIL-APPLY 3) */,
    0x00000014    /*  43 (RET) */,
    0x0000200e    /*  44 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]) + 50),
    0x0000004a    /*  46 (LREF2-PUSH) */,
    0x00000049    /*  47 (LREF1-PUSH) */,
    0x0000205f    /*  48 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x0000000d    /*  50 (PUSH) */,
    0x0000006a    /*  51 (LREF0-CAR) */,
    0x00002063    /*  52 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch-substring */,
    0x00000014    /*  54 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[721]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch->string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[721]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[24])) /* #<compiled-code rxmatch->string@0x780cb71da300> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch->string */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(41U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_OBJ(&scm__rc.d2150[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[4]), SCM_OBJ(&scm__rc.d2150[8])},
       { SCM_MAKE_INT(42U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[13])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_OBJ(&scm__rc.d2150[15]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[12]), SCM_OBJ(&scm__rc.d2150[16])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[19])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[20])},
       { SCM_MAKE_INT(44U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[23])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[26])},
       { SCM_OBJ(&scm__rc.d2150[27]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[24]), SCM_OBJ(&scm__rc.d2150[28])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(49U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[31])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[32])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[35])},
       { SCM_OBJ(&scm__rc.d2150[36]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[33]), SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_MAKE_INT(50U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[40])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[43])},
       { SCM_OBJ(&scm__rc.d2150[44]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[41]), SCM_OBJ(&scm__rc.d2150[45])},
       { SCM_MAKE_INT(53U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[47])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[48])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[50])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_OBJ(&scm__rc.d2150[52]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[49]), SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[55])},
       { SCM_MAKE_INT(59U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[57])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_OBJ(&scm__rc.d2150[62]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[59]), SCM_OBJ(&scm__rc.d2150[63])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(64U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[67])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[70])},
       { SCM_OBJ(&scm__rc.d2150[71]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[68]), SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_MAKE_INT(66U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[75])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[77])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_OBJ(&scm__rc.d2150[79]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[76]), SCM_OBJ(&scm__rc.d2150[80])},
       { SCM_MAKE_INT(68U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[85])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[86])},
       { SCM_OBJ(&scm__rc.d2150[87]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[84]), SCM_OBJ(&scm__rc.d2150[88])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[91])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[92])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[93])},
       { SCM_MAKE_INT(71U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[95])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[96])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[99])},
       { SCM_OBJ(&scm__rc.d2150[100]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[97]), SCM_OBJ(&scm__rc.d2150[101])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[103])},
       { SCM_MAKE_INT(91U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[105])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[106])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[108])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_OBJ(&scm__rc.d2150[110]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[107]), SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_MAKE_INT(93U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[114])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[116])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[117])},
       { SCM_OBJ(&scm__rc.d2150[118]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_MAKE_INT(95U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[121])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[122])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[125])},
       { SCM_OBJ(&scm__rc.d2150[126]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[123]), SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_MAKE_INT(97U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[129])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[130])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[132])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[133])},
       { SCM_OBJ(&scm__rc.d2150[134]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[131]), SCM_OBJ(&scm__rc.d2150[135])},
       { SCM_MAKE_INT(99U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[137])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[138])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[140])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[141])},
       { SCM_OBJ(&scm__rc.d2150[142]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[139]), SCM_OBJ(&scm__rc.d2150[143])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(101U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[146])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[147])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[149])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[150])},
       { SCM_OBJ(&scm__rc.d2150[151]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[148]), SCM_OBJ(&scm__rc.d2150[152])},
       { SCM_MAKE_INT(105U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[154])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[155])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[158])},
       { SCM_OBJ(&scm__rc.d2150[159]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[156]), SCM_OBJ(&scm__rc.d2150[160])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(111U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[163])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[164])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[166])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[167])},
       { SCM_OBJ(&scm__rc.d2150[168]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[165]), SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(112U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[172])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[173])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[175])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[176])},
       { SCM_OBJ(&scm__rc.d2150[177]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[174]), SCM_OBJ(&scm__rc.d2150[178])},
       { SCM_MAKE_INT(114U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[180])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[181])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[183])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_OBJ(&scm__rc.d2150[185]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[182]), SCM_OBJ(&scm__rc.d2150[186])},
       { SCM_MAKE_INT(118U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[188])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[189])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[191])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[192])},
       { SCM_OBJ(&scm__rc.d2150[193]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[190]), SCM_OBJ(&scm__rc.d2150[194])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[196])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[197])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[198]), SCM_OBJ(&scm__rc.d2150[199])},
       { SCM_OBJ(&scm__rc.d2150[200]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[0]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[203])},
       { SCM_MAKE_INT(127U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[205])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[206])},
       { SCM_OBJ(&scm__rc.d2150[207]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[1]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(124U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[212])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[213])},
       { SCM_OBJ(&scm__rc.d2150[214]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[217])},
       { SCM_OBJ(&scm__rc.d2150[218]), SCM_OBJ(&scm__rc.d2150[145])},
       { SCM_OBJ(&scm__rc.d2150[219]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[4]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[222])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[223])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[224])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[225])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[226])},
       { SCM_MAKE_INT(144U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[228])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[229])},
       { SCM_OBJ(&scm__rc.d2150[230]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(182U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[236])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[237])},
       { SCM_OBJ(&scm__rc.d2150[238]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[241])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[242])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[243])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[244])},
       { SCM_MAKE_INT(180U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[246])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[247])},
       { SCM_OBJ(&scm__rc.d2150[248]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[251])},
       { SCM_MAKE_INT(184U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[253])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[254])},
       { SCM_OBJ(&scm__rc.d2150[255]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(188U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[258])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[259])},
       { SCM_OBJ(&scm__rc.d2150[260]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[263])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[265])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[266])},
       { SCM_MAKE_INT(193U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[268])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_OBJ(&scm__rc.d2150[270]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[273])},
       { SCM_MAKE_INT(192U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[275])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[276])},
       { SCM_OBJ(&scm__rc.d2150[277]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[280])},
       { SCM_MAKE_INT(214U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[282])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[283])},
       { SCM_OBJ(&scm__rc.d2150[284]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[19]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(212U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[289])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[290])},
       { SCM_OBJ(&scm__rc.d2150[291]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(220U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[294])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[295])},
       { SCM_OBJ(&scm__rc.d2150[296]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[299])},
       { SCM_MAKE_INT(225U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[302])},
       { SCM_OBJ(&scm__rc.d2150[303]), SCM_NIL},
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(99, FALSE),
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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

static ScmObj librxregexpP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("regexp?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_REGEXPP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj librxregmatchP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("regmatch?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_REGMATCHP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj librxstring_TOregexp(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj case_fold_scm = SCM_FALSE;
  ScmObj case_fold;
  ScmObj multi_line_scm = SCM_FALSE;
  ScmObj multi_line;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("string->regexp");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[18])) {
      case_fold_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[19])) {
      multi_line_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(case_fold_scm)) Scm_Error("scheme object required, but got %S", case_fold_scm);
  case_fold = (case_fold_scm);
  if (!(multi_line_scm)) Scm_Error("scheme object required, but got %S", multi_line_scm);
  multi_line = (multi_line_scm);
  {
{
ScmObj SCM_RESULT;

#line 45 "librx.scm"
{SCM_RESULT=(
Scm_RegComp(str,
(((SCM_BOOL_VALUE(case_fold))?(SCM_REGEXP_CASE_FOLD):(0)))|(
((SCM_BOOL_VALUE(multi_line))?(SCM_REGEXP_MULTI_LINE):(0)))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxregexp_ast(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj regexp_scm;
  ScmRegexp* regexp;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("regexp-ast");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  regexp_scm = SCM_SUBRARGS[0];
  if (!SCM_REGEXPP(regexp_scm)) Scm_Error("<regexp> required, but got %S", regexp_scm);
  regexp = SCM_REGEXP(regexp_scm);
  {
{
ScmObj SCM_RESULT;

#line 49 "librx.scm"
{SCM_RESULT=((regexp)->ast);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxregexp_case_foldP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj regexp_scm;
  ScmRegexp* regexp;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("regexp-case-fold?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  regexp_scm = SCM_SUBRARGS[0];
  if (!SCM_REGEXPP(regexp_scm)) Scm_Error("<regexp> required, but got %S", regexp_scm);
  regexp = SCM_REGEXP(regexp_scm);
  {
{
int SCM_RESULT;

#line 51 "librx.scm"
{SCM_RESULT=(((regexp)->flags)&(SCM_REGEXP_CASE_FOLD));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj librxregexp_parse(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj case_fold_scm = SCM_FALSE;
  ScmObj case_fold;
  ScmObj multi_line_scm = SCM_FALSE;
  ScmObj multi_line;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("regexp-parse");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[18])) {
      case_fold_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[19])) {
      multi_line_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(case_fold_scm)) Scm_Error("scheme object required, but got %S", case_fold_scm);
  case_fold = (case_fold_scm);
  if (!(multi_line_scm)) Scm_Error("scheme object required, but got %S", multi_line_scm);
  multi_line = (multi_line_scm);
  {
{
ScmObj SCM_RESULT;

#line 54 "librx.scm"
{SCM_RESULT=(
Scm_RegComp(str,
((((SCM_BOOL_VALUE(case_fold))?(SCM_REGEXP_CASE_FOLD):(0)))|(
((SCM_BOOL_VALUE(multi_line))?(SCM_REGEXP_MULTI_LINE):(0))))|(SCM_REGEXP_PARSE_ONLY)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxregexp_compile(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ast_scm;
  ScmObj ast;
  ScmObj multi_line_scm = SCM_FALSE;
  ScmObj multi_line;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("regexp-compile");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ast_scm = SCM_SUBRARGS[0];
  if (!(ast_scm)) Scm_Error("scheme object required, but got %S", ast_scm);
  ast = (ast_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[19])) {
      multi_line_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(multi_line_scm)) Scm_Error("scheme object required, but got %S", multi_line_scm);
  multi_line = (multi_line_scm);
  {
{
ScmObj SCM_RESULT;

#line 60 "librx.scm"
{SCM_RESULT=(Scm_RegCompFromAST2(ast,
((SCM_BOOL_VALUE(multi_line))?(SCM_REGEXP_MULTI_LINE):(0))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxregexp_optimize(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ast_scm;
  ScmObj ast;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("regexp-optimize");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ast_scm = SCM_SUBRARGS[0];
  if (!(ast_scm)) Scm_Error("scheme object required, but got %S", ast_scm);
  ast = (ast_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_RegOptimizeAST(ast));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxregexp_num_groups(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj regexp_scm;
  ScmRegexp* regexp;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("regexp-num-groups");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  regexp_scm = SCM_SUBRARGS[0];
  if (!SCM_REGEXPP(regexp_scm)) Scm_Error("<regexp> required, but got %S", regexp_scm);
  regexp = SCM_REGEXP(regexp_scm);
  {
{
int SCM_RESULT;

#line 67 "librx.scm"
{SCM_RESULT=((regexp)->numGroups);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj librxregexp_named_groups(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj regexp_scm;
  ScmRegexp* regexp;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("regexp-named-groups");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  regexp_scm = SCM_SUBRARGS[0];
  if (!SCM_REGEXPP(regexp_scm)) Scm_Error("<regexp> required, but got %S", regexp_scm);
  regexp = SCM_REGEXP(regexp_scm);
  {
{
ScmObj SCM_RESULT;

#line 69 "librx.scm"
{SCM_RESULT=((regexp)->grpNames);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxrxmatch(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj regexp_scm;
  ScmObj regexp;
  ScmObj str_scm;
  ScmString* str;
  ScmObj start_scm;
  ScmObj start;
  ScmObj end_scm;
  ScmObj end;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("rxmatch");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  regexp_scm = SCM_SUBRARGS[0];
  if (!(regexp_scm)) Scm_Error("scheme object required, but got %S", regexp_scm);
  regexp = (regexp_scm);
  str_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  if (SCM_ARGCNT > 2+1) {
    start_scm = SCM_SUBRARGS[2];
  } else {
    start_scm = SCM_UNBOUND;
  }
  if (!(start_scm)) Scm_Error("scheme object required, but got %S", start_scm);
  start = (start_scm);
  if (SCM_ARGCNT > 3+1) {
    end_scm = SCM_SUBRARGS[3];
  } else {
    end_scm = SCM_UNBOUND;
  }
  if (!(end_scm)) Scm_Error("scheme object required, but got %S", end_scm);
  end = (end_scm);
  {
{
ScmObj SCM_RESULT;

#line 72 "librx.scm"
{ScmRegexp* rx=NULL;
if (SCM_STRINGP(regexp)){rx=(SCM_REGEXP(Scm_RegComp(
SCM_STRING(regexp),0)));}else if(
SCM_REGEXPP(regexp)){rx=(SCM_REGEXP(regexp));} else {
SCM_TYPE_ERROR(regexp,"regexp");}
{SCM_RESULT=(Scm_RegExec(rx,str,start,end));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxrxmatch_substring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj match_scm;
  ScmObj match;
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("rxmatch-substring");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  match_scm = SCM_SUBRARGS[0];
  if (!(match_scm)) Scm_Error("scheme object required, but got %S", match_scm);
  match = (match_scm);
  if (SCM_ARGCNT > 1+1) {
    obj_scm = SCM_SUBRARGS[1];
  } else {
    obj_scm = SCM_MAKE_INT(0);
  }
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 92 "librx.scm"
if (SCM_FALSEP(match)){{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}else if(SCM_REGMATCHP(match)){{SCM_RESULT=(Scm_RegMatchSubstr(SCM_REGMATCH(match),obj));goto SCM_STUB_RETURN;}} else {SCM_TYPE_ERROR(match,"regmatch object or #f");{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxrxmatch_start(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj match_scm;
  ScmObj match;
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("rxmatch-start");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  match_scm = SCM_SUBRARGS[0];
  if (!(match_scm)) Scm_Error("scheme object required, but got %S", match_scm);
  match = (match_scm);
  if (SCM_ARGCNT > 1+1) {
    obj_scm = SCM_SUBRARGS[1];
  } else {
    obj_scm = SCM_MAKE_INT(0);
  }
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 94 "librx.scm"
if (SCM_FALSEP(match)){{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}else if(SCM_REGMATCHP(match)){{SCM_RESULT=(Scm_RegMatchStart(SCM_REGMATCH(match),obj));goto SCM_STUB_RETURN;}} else {SCM_TYPE_ERROR(match,"regmatch object or #f");{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxrxmatch_end(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj match_scm;
  ScmObj match;
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("rxmatch-end");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  match_scm = SCM_SUBRARGS[0];
  if (!(match_scm)) Scm_Error("scheme object required, but got %S", match_scm);
  match = (match_scm);
  if (SCM_ARGCNT > 1+1) {
    obj_scm = SCM_SUBRARGS[1];
  } else {
    obj_scm = SCM_MAKE_INT(0);
  }
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 96 "librx.scm"
if (SCM_FALSEP(match)){{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}else if(SCM_REGMATCHP(match)){{SCM_RESULT=(Scm_RegMatchEnd(SCM_REGMATCH(match),obj));goto SCM_STUB_RETURN;}} else {SCM_TYPE_ERROR(match,"regmatch object or #f");{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxrxmatch_before(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj match_scm;
  ScmObj match;
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("rxmatch-before");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  match_scm = SCM_SUBRARGS[0];
  if (!(match_scm)) Scm_Error("scheme object required, but got %S", match_scm);
  match = (match_scm);
  if (SCM_ARGCNT > 1+1) {
    obj_scm = SCM_SUBRARGS[1];
  } else {
    obj_scm = SCM_MAKE_INT(0);
  }
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 98 "librx.scm"
if (SCM_FALSEP(match)){{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}else if(SCM_REGMATCHP(match)){{SCM_RESULT=(Scm_RegMatchBefore(SCM_REGMATCH(match),obj));goto SCM_STUB_RETURN;}} else {SCM_TYPE_ERROR(match,"regmatch object or #f");{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxrxmatch_after(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj match_scm;
  ScmObj match;
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("rxmatch-after");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  match_scm = SCM_SUBRARGS[0];
  if (!(match_scm)) Scm_Error("scheme object required, but got %S", match_scm);
  match = (match_scm);
  if (SCM_ARGCNT > 1+1) {
    obj_scm = SCM_SUBRARGS[1];
  } else {
    obj_scm = SCM_MAKE_INT(0);
  }
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 100 "librx.scm"
if (SCM_FALSEP(match)){{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}else if(SCM_REGMATCHP(match)){{SCM_RESULT=(Scm_RegMatchAfter(SCM_REGMATCH(match),obj));goto SCM_STUB_RETURN;}} else {SCM_TYPE_ERROR(match,"regmatch object or #f");{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxrxmatch_num_matches(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj match_scm;
  ScmObj match;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("rxmatch-num-matches");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  match_scm = SCM_SUBRARGS[0];
  if (!(match_scm)) Scm_Error("scheme object required, but got %S", match_scm);
  match = (match_scm);
  {
{
ScmObj SCM_RESULT;

#line 102 "librx.scm"
if (SCM_FALSEP(match)){
{SCM_RESULT=(SCM_MAKE_INT(0));goto SCM_STUB_RETURN;}} else {
if (SCM_FALSEP(match)){{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}else if(SCM_REGMATCHP(match)){{SCM_RESULT=(SCM_MAKE_INT((SCM_REGMATCH(match))->numMatches));goto SCM_STUB_RETURN;}} else {SCM_TYPE_ERROR(match,"regmatch object or #f");{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librxrxmatch_named_groups(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj match_scm;
  ScmObj match;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("rxmatch-named-groups");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  match_scm = SCM_SUBRARGS[0];
  if (!(match_scm)) Scm_Error("scheme object required, but got %S", match_scm);
  match = (match_scm);
  {
{
ScmObj SCM_RESULT;

#line 106 "librx.scm"
if (SCM_FALSEP(match)){
{SCM_RESULT=(SCM_NIL);goto SCM_STUB_RETURN;}} else {
if (SCM_FALSEP(match)){{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}else if(SCM_REGMATCHP(match)){{SCM_RESULT=((SCM_REGMATCH(match))->grpNames);goto SCM_STUB_RETURN;}} else {SCM_TYPE_ERROR(match,"regmatch object or #f");{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librx_25regexp_dump(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj rx_scm;
  ScmRegexp* rx;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%regexp-dump");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  rx_scm = SCM_SUBRARGS[0];
  if (!SCM_REGEXPP(rx_scm)) Scm_Error("<regexp> required, but got %S", rx_scm);
  rx = SCM_REGEXP(rx_scm);
  {
Scm_RegDump(rx);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj librx_25regmatch_dump(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj rm_scm;
  ScmRegMatch* rm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%regmatch-dump");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  rm_scm = SCM_SUBRARGS[0];
  if (!SCM_REGMATCHP(rm_scm)) Scm_Error("<regmatch> required, but got %S", rm_scm);
  rm = SCM_REGMATCH(rm_scm);
  {
Scm_RegMatchDump(rm);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj librx_25regexp_pattern_SETTER(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj regexp_scm;
  ScmRegexp* regexp;
  ScmObj pat_scm;
  ScmString* pat;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("(setter %regexp-pattern)");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  regexp_scm = SCM_SUBRARGS[0];
  if (!SCM_REGEXPP(regexp_scm)) Scm_Error("<regexp> required, but got %S", regexp_scm);
  regexp = SCM_REGEXP(regexp_scm);
  pat_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(pat_scm)) Scm_Error("<string> required, but got %S", pat_scm);
  pat = SCM_STRING(pat_scm);
  {

#line 116 "librx.scm"
(regexp)->pattern=(SCM_OBJ(pat));
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj librx_25regexp_pattern(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj regexp_scm;
  ScmRegexp* regexp;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%regexp-pattern");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  regexp_scm = SCM_SUBRARGS[0];
  if (!SCM_REGEXPP(regexp_scm)) Scm_Error("<regexp> required, but got %S", regexp_scm);
  regexp = SCM_REGEXP(regexp_scm);
  {
{
ScmObj SCM_RESULT;

#line 117 "librx.scm"
{SCM_RESULT=((regexp)->pattern);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj librx_25regexp_laset(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj regexp_scm;
  ScmRegexp* regexp;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%regexp-laset");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  regexp_scm = SCM_SUBRARGS[0];
  if (!SCM_REGEXPP(regexp_scm)) Scm_Error("<regexp> required, but got %S", regexp_scm);
  regexp = SCM_REGEXP(regexp_scm);
  {
{
ScmObj SCM_RESULT;

#line 119 "librx.scm"
{SCM_RESULT=((regexp)->laset);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[6])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[9])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[11])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[13])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[16])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[17])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[18])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[21])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[23])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[25])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[113];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[380];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[381];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[163];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[111];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[382];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[383];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[384];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[177];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[161];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[104];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[169];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[385];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[386];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[387];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[167];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[388];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[389];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[90];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[156];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[390];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = SCM_OBJ(&scm__sc.d2148[60]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[174];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[391];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[155];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[392];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[193];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[191];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[189];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[203];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[393];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[107];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[105];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[109];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[185];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = SCM_OBJ(&scm__sc.d2148[65]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[199];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[183];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[120];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[394];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[200];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[201];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[202];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[395];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[194];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[396];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[397];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[398];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = SCM_UNDEFINED;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[197];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[198];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[399];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[400];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[401];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[402];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[403];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[404];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[208];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[212];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[405];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[406];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[207];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[407];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[4];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[217];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[222];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[236];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[408];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[232];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[231];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = SCM_OBJ(&scm__sc.d2148[85]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[235];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[229];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[409];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[227];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[241];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[245];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[410];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[411];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[412];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = SCM_MAKE_CHAR(92);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[251];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[249];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[413];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[257];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[21];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[253];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[252];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[414];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[142];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[266];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[36];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[415];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[416];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[262];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[274];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[273];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[272];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[279]), i++) = scm__rc.d2149[271];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[279]);
}
void Scm_Init_librx() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* regexp? */
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[1])),TRUE); /* obj */
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
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("regexp?")), SCM_OBJ(&librxregexpP__STUB), SCM_BINDING_INLINABLE);
  librxregexpP__STUB.common.info = scm__rc.d2149[5];
  librxregexpP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* regmatch? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[12]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[13]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[15]), scm__rc.d2149[3]);
  scm__rc.d2149[17] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[17]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("regmatch?")), SCM_OBJ(&librxregmatchP__STUB), 0);
  librxregmatchP__STUB.common.info = scm__rc.d2149[17];
  librxregmatchP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[18] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10]))); /* :case-fold */
  scm__rc.d2149[19] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11]))); /* :multi-line */
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* string->regexp */
  scm__rc.d2149[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* str */
  scm__rc.d2149[22] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14]))); /* :key */
  scm__rc.d2149[23] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* case-fold */
  scm__rc.d2149[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* multi-line */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[18]), scm__rc.d2149[24]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[19]), scm__rc.d2149[23]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[20]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[21]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[24]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[25]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[27]), scm__rc.d2149[3]);
  scm__rc.d2149[25] = Scm_MakeExtendedPair(scm__rc.d2149[20], SCM_OBJ(&scm__rc.d2150[21]), SCM_OBJ(&scm__rc.d2150[29]));
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* <string> */
  scm__rc.d2149[27] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[4] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[5] = scm__rc.d2149[27];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->regexp")), SCM_OBJ(&librxstring_TOregexp__STUB), 0);
  librxstring_TOregexp__STUB.common.info = scm__rc.d2149[25];
  librxstring_TOregexp__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[28]);
  scm__rc.d2149[36] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* regexp-ast */
  scm__rc.d2149[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* regexp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[30]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[33]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[34]), scm__rc.d2149[36]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[35]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[36]), scm__rc.d2149[3]);
  scm__rc.d2149[38] = Scm_MakeExtendedPair(scm__rc.d2149[36], SCM_OBJ(&scm__rc.d2150[30]), SCM_OBJ(&scm__rc.d2150[38]));
  scm__rc.d2149[39] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* <regexp> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[40]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[40]))[4] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[40]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[40]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("regexp-ast")), SCM_OBJ(&librxregexp_ast__STUB), 0);
  librxregexp_ast__STUB.common.info = scm__rc.d2149[38];
  librxregexp_ast__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[40]);
  scm__rc.d2149[47] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* regexp-case-fold? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[41]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[42]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[43]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[44]), scm__rc.d2149[3]);
  scm__rc.d2149[48] = Scm_MakeExtendedPair(scm__rc.d2149[47], SCM_OBJ(&scm__rc.d2150[30]), SCM_OBJ(&scm__rc.d2150[46]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[49]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[49]))[4] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[49]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[49]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("regexp-case-fold?")), SCM_OBJ(&librxregexp_case_foldP__STUB), 0);
  librxregexp_case_foldP__STUB.common.info = scm__rc.d2149[48];
  librxregexp_case_foldP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[49]);
  scm__rc.d2149[56] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* regexp-parse */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[49]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[50]), scm__rc.d2149[56]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[51]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[52]), scm__rc.d2149[3]);
  scm__rc.d2149[57] = Scm_MakeExtendedPair(scm__rc.d2149[56], SCM_OBJ(&scm__rc.d2150[21]), SCM_OBJ(&scm__rc.d2150[54]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("regexp-parse")), SCM_OBJ(&librxregexp_parse__STUB), 0);
  librxregexp_parse__STUB.common.info = scm__rc.d2149[57];
  librxregexp_parse__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[28]);
  scm__rc.d2149[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* regexp-compile */
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* ast */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[55]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[56]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[61]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[62]), scm__rc.d2149[3]);
  scm__rc.d2149[60] = Scm_MakeExtendedPair(scm__rc.d2149[58], SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[64]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[61]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[61]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[61]))[5] = scm__rc.d2149[27];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[61]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[61]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("regexp-compile")), SCM_OBJ(&librxregexp_compile__STUB), 0);
  librxregexp_compile__STUB.common.info = scm__rc.d2149[60];
  librxregexp_compile__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[61]);
  scm__rc.d2149[69] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* regexp-optimize */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[65]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[68]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[70]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[71]), scm__rc.d2149[3]);
  scm__rc.d2149[70] = Scm_MakeExtendedPair(scm__rc.d2149[69], SCM_OBJ(&scm__rc.d2150[65]), SCM_OBJ(&scm__rc.d2150[73]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[71]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[71]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[71]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[71]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("regexp-optimize")), SCM_OBJ(&librxregexp_optimize__STUB), 0);
  librxregexp_optimize__STUB.common.info = scm__rc.d2149[70];
  librxregexp_optimize__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[71]);
  scm__rc.d2149[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* regexp-num-groups */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[76]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[79]), scm__rc.d2149[3]);
  scm__rc.d2149[79] = Scm_MakeExtendedPair(scm__rc.d2149[78], SCM_OBJ(&scm__rc.d2150[30]), SCM_OBJ(&scm__rc.d2150[81]));
  scm__rc.d2149[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[81]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[81]))[4] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[81]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[81]))[6] = scm__rc.d2149[80];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("regexp-num-groups")), SCM_OBJ(&librxregexp_num_groups__STUB), 0);
  librxregexp_num_groups__STUB.common.info = scm__rc.d2149[79];
  librxregexp_num_groups__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[81]);
  scm__rc.d2149[88] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* regexp-named-groups */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[84]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[85]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[86]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[87]), scm__rc.d2149[3]);
  scm__rc.d2149[89] = Scm_MakeExtendedPair(scm__rc.d2149[88], SCM_OBJ(&scm__rc.d2150[30]), SCM_OBJ(&scm__rc.d2150[89]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("regexp-named-groups")), SCM_OBJ(&librxregexp_named_groups__STUB), 0);
  librxregexp_named_groups__STUB.common.info = scm__rc.d2149[89];
  librxregexp_named_groups__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[40]);
  scm__rc.d2149[90] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* rxmatch */
  scm__rc.d2149[91] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29]))); /* :optional */
  scm__rc.d2149[92] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* start */
  scm__rc.d2149[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* end */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[90]), scm__rc.d2149[93]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[91]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[92]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[93]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[94]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[97]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[100]), scm__rc.d2149[3]);
  scm__rc.d2149[94] = Scm_MakeExtendedPair(scm__rc.d2149[90], SCM_OBJ(&scm__rc.d2150[94]), SCM_OBJ(&scm__rc.d2150[102]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[5] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[6] = scm__rc.d2149[27];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("rxmatch")), SCM_OBJ(&librxrxmatch__STUB), 0);
  librxrxmatch__STUB.common.info = scm__rc.d2149[94];
  librxrxmatch__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[95]);
  scm__rc.d2149[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* rxmatch-substring */
  scm__rc.d2149[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* match */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[104]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[107]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[108]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[109]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[3]);
  scm__rc.d2149[106] = Scm_MakeExtendedPair(scm__rc.d2149[104], SCM_OBJ(&scm__rc.d2150[104]), SCM_OBJ(&scm__rc.d2150[112]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("rxmatch-substring")), SCM_OBJ(&librxrxmatch_substring__STUB), 0);
  librxrxmatch_substring__STUB.common.info = scm__rc.d2149[106];
  librxrxmatch_substring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[61]);
  scm__rc.d2149[107] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* rxmatch-start */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[116]), scm__rc.d2149[107]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[117]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[118]), scm__rc.d2149[3]);
  scm__rc.d2149[108] = Scm_MakeExtendedPair(scm__rc.d2149[107], SCM_OBJ(&scm__rc.d2150[104]), SCM_OBJ(&scm__rc.d2150[120]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("rxmatch-start")), SCM_OBJ(&librxrxmatch_start__STUB), 0);
  librxrxmatch_start__STUB.common.info = scm__rc.d2149[108];
  librxrxmatch_start__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[61]);
  scm__rc.d2149[109] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* rxmatch-end */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[123]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[124]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[125]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[126]), scm__rc.d2149[3]);
  scm__rc.d2149[110] = Scm_MakeExtendedPair(scm__rc.d2149[109], SCM_OBJ(&scm__rc.d2150[104]), SCM_OBJ(&scm__rc.d2150[128]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("rxmatch-end")), SCM_OBJ(&librxrxmatch_end__STUB), 0);
  librxrxmatch_end__STUB.common.info = scm__rc.d2149[110];
  librxrxmatch_end__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[61]);
  scm__rc.d2149[111] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* rxmatch-before */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[131]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[132]), scm__rc.d2149[111]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[133]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[134]), scm__rc.d2149[3]);
  scm__rc.d2149[112] = Scm_MakeExtendedPair(scm__rc.d2149[111], SCM_OBJ(&scm__rc.d2150[104]), SCM_OBJ(&scm__rc.d2150[136]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("rxmatch-before")), SCM_OBJ(&librxrxmatch_before__STUB), 0);
  librxrxmatch_before__STUB.common.info = scm__rc.d2149[112];
  librxrxmatch_before__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[61]);
  scm__rc.d2149[113] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* rxmatch-after */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[139]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[140]), scm__rc.d2149[113]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[142]), scm__rc.d2149[3]);
  scm__rc.d2149[114] = Scm_MakeExtendedPair(scm__rc.d2149[113], SCM_OBJ(&scm__rc.d2150[104]), SCM_OBJ(&scm__rc.d2150[144]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("rxmatch-after")), SCM_OBJ(&librxrxmatch_after__STUB), 0);
  librxrxmatch_after__STUB.common.info = scm__rc.d2149[114];
  librxrxmatch_after__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[61]);
  scm__rc.d2149[115] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* rxmatch-num-matches */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[145]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[148]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[149]), scm__rc.d2149[115]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[150]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[151]), scm__rc.d2149[3]);
  scm__rc.d2149[116] = Scm_MakeExtendedPair(scm__rc.d2149[115], SCM_OBJ(&scm__rc.d2150[145]), SCM_OBJ(&scm__rc.d2150[153]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("rxmatch-num-matches")), SCM_OBJ(&librxrxmatch_num_matches__STUB), 0);
  librxrxmatch_num_matches__STUB.common.info = scm__rc.d2149[116];
  librxrxmatch_num_matches__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[71]);
  scm__rc.d2149[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* rxmatch-named-groups */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[156]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[157]), scm__rc.d2149[117]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[158]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[159]), scm__rc.d2149[3]);
  scm__rc.d2149[118] = Scm_MakeExtendedPair(scm__rc.d2149[117], SCM_OBJ(&scm__rc.d2150[145]), SCM_OBJ(&scm__rc.d2150[161]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("rxmatch-named-groups")), SCM_OBJ(&librxrxmatch_named_groups__STUB), 0);
  librxrxmatch_named_groups__STUB.common.info = scm__rc.d2149[118];
  librxrxmatch_named_groups__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[71]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* %regexp-dump */
  scm__rc.d2149[120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* rx */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[162]), scm__rc.d2149[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[165]), scm__rc.d2149[2]);
  scm__rc.d2149[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[166]), scm__rc.d2149[119]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[167]), scm__rc.d2149[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[3]);
  scm__rc.d2149[122] = Scm_MakeExtendedPair(scm__rc.d2149[119], SCM_OBJ(&scm__rc.d2150[162]), SCM_OBJ(&scm__rc.d2150[170]));
  scm__rc.d2149[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[3] = scm__rc.d2149[121];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[4] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[6] = scm__rc.d2149[123];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%regexp-dump")), SCM_OBJ(&librx_25regexp_dump__STUB), 0);
  librx_25regexp_dump__STUB.common.info = scm__rc.d2149[122];
  librx_25regexp_dump__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[124]);
  scm__rc.d2149[131] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* %regmatch-dump */
  scm__rc.d2149[132] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* rm */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[171]), scm__rc.d2149[132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[174]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[175]), scm__rc.d2149[131]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[176]), scm__rc.d2149[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[177]), scm__rc.d2149[3]);
  scm__rc.d2149[133] = Scm_MakeExtendedPair(scm__rc.d2149[131], SCM_OBJ(&scm__rc.d2150[171]), SCM_OBJ(&scm__rc.d2150[179]));
  scm__rc.d2149[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* <regmatch> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[135]))[3] = scm__rc.d2149[121];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[135]))[4] = scm__rc.d2149[134];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[135]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[135]))[6] = scm__rc.d2149[123];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%regmatch-dump")), SCM_OBJ(&librx_25regmatch_dump__STUB), 0);
  librx_25regmatch_dump__STUB.common.info = scm__rc.d2149[133];
  librx_25regmatch_dump__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[135]);
  scm__rc.d2149[142] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* %regexp-pattern */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[182]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[183]), scm__rc.d2149[142]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[184]), scm__rc.d2149[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[185]), scm__rc.d2149[3]);
  scm__rc.d2149[143] = Scm_MakeExtendedPair(scm__rc.d2149[142], SCM_OBJ(&scm__rc.d2150[30]), SCM_OBJ(&scm__rc.d2150[187]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[144]))[3] = scm__rc.d2149[121];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[144]))[4] = scm__rc.d2149[39];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[144]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[144]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%regexp-pattern")), SCM_OBJ(&librx_25regexp_pattern__STUB), 0);
  librx_25regexp_pattern__STUB.common.info = scm__rc.d2149[143];
  librx_25regexp_pattern__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[144]);
  Scm_SetterSet(SCM_PROCEDURE(&librx_25regexp_pattern__STUB), SCM_PROCEDURE(&librx_25regexp_pattern_SETTER__STUB), TRUE);
  scm__rc.d2149[151] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* %regexp-laset */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[190]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[191]), scm__rc.d2149[151]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[192]), scm__rc.d2149[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[193]), scm__rc.d2149[3]);
  scm__rc.d2149[152] = Scm_MakeExtendedPair(scm__rc.d2149[151], SCM_OBJ(&scm__rc.d2150[30]), SCM_OBJ(&scm__rc.d2150[195]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%regexp-laset")), SCM_OBJ(&librx_25regexp_laset__STUB), 0);
  librx_25regexp_laset__STUB.common.info = scm__rc.d2149[152];
  librx_25regexp_laset__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[144]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[154] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[153] = Scm_MakeIdentifier(scm__rc.d2149[154], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[155] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* %regexp-parse-subpattern */
  scm__rc.d2149[156] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])), 0);
  scm__rc.d2149[158] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[121]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[157] = Scm_MakeIdentifier(scm__rc.d2149[90], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#rxmatch */
  scm__rc.d2149[159] = Scm_MakeIdentifier(scm__rc.d2149[113], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#rxmatch-after */
  scm__rc.d2149[160] = Scm_MakeIdentifier(scm__rc.d2149[111], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#rxmatch-before */
  scm__rc.d2149[161] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* loop2 */
  scm__rc.d2149[162] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* loop */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[196]), scm__rc.d2149[161]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[197]), scm__rc.d2149[162]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[198]), scm__rc.d2149[155]);
  scm__rc.d2149[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* elem */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[199]), scm__rc.d2149[163]);
  scm__rc.d2149[164] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[0]))->name = scm__rc.d2149[161];/* (%regexp-parse-subpattern loop loop2) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[0]))->debugInfo = scm__rc.d2149[164];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[4] = SCM_WORD(scm__rc.d2149[159]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[11] = SCM_WORD(scm__rc.d2149[160]);
  scm__rc.d2149[165] = Scm_MakeIdentifier(scm__rc.d2149[104], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#rxmatch-substring */
  scm__rc.d2149[167] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* string->number */
  scm__rc.d2149[166] = Scm_MakeIdentifier(scm__rc.d2149[167], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#string->number */
  scm__rc.d2149[169] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* string->symbol */
  scm__rc.d2149[168] = Scm_MakeIdentifier(scm__rc.d2149[169], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#string->symbol */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[203]), scm__rc.d2149[162]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[204]), scm__rc.d2149[155]);
  scm__rc.d2149[170] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58])),TRUE); /* _ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[207]), scm__rc.d2149[2]);
  scm__rc.d2149[171] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[204]), scm__rc.d2149[170], SCM_OBJ(&scm__rc.d2150[208]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[209]), scm__rc.d2149[171]);
  scm__rc.d2149[172] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1]))->name = scm__rc.d2149[162];/* (%regexp-parse-subpattern loop) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1]))->debugInfo = scm__rc.d2149[172];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]))[3] = SCM_WORD(scm__rc.d2149[156]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]))[6] = SCM_WORD(scm__rc.d2149[157]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]))[18] = SCM_WORD(scm__rc.d2149[165]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]))[27] = SCM_WORD(scm__rc.d2149[166]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]))[37] = SCM_WORD(scm__rc.d2149[165]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]))[46] = SCM_WORD(scm__rc.d2149[168]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[19]))[56] = SCM_WORD(scm__rc.d2149[165]);
  scm__rc.d2149[174] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* procedure? */
  scm__rc.d2149[173] = Scm_MakeIdentifier(scm__rc.d2149[174], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#procedure? */
  scm__rc.d2149[176] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61])),TRUE); /* error */
  scm__rc.d2149[175] = Scm_MakeIdentifier(scm__rc.d2149[176], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#error */
  scm__rc.d2149[177] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* sub */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[211]), scm__rc.d2149[177]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[214]), scm__rc.d2149[2]);
  scm__rc.d2149[178] = Scm_MakeExtendedPair(scm__rc.d2149[155], SCM_OBJ(&scm__rc.d2150[211]), SCM_OBJ(&scm__rc.d2150[215]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[216]), scm__rc.d2149[178]);
  scm__rc.d2149[179] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[2]))->name = scm__rc.d2149[155];/* %regexp-parse-subpattern */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[2]))->debugInfo = scm__rc.d2149[179];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[85]))[15] = SCM_WORD(scm__rc.d2149[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[85]))[23] = SCM_WORD(scm__rc.d2149[175]);
  scm__rc.d2149[180] = Scm_MakeIdentifier(scm__rc.d2149[155], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#%regexp-parse-subpattern */
  scm__rc.d2149[181] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* %toplevel */
  scm__rc.d2149[182] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3]))->debugInfo = scm__rc.d2149[182];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[110]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[110]))[6] = SCM_WORD(scm__rc.d2149[155]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[110]))[13] = SCM_WORD(scm__rc.d2149[180]);
  scm__rc.d2149[183] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* %regexp-replace-rec */
  scm__rc.d2149[185] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* equal? */
  scm__rc.d2149[184] = Scm_MakeIdentifier(scm__rc.d2149[185], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#equal? */
  scm__rc.d2149[186] = Scm_MakeIdentifier(scm__rc.d2149[107], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#rxmatch-start */
  scm__rc.d2149[187] = Scm_MakeIdentifier(scm__rc.d2149[109], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#rxmatch-end */
  scm__rc.d2149[189] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* string-ref */
  scm__rc.d2149[188] = Scm_MakeIdentifier(scm__rc.d2149[189], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#string-ref */
  scm__rc.d2149[191] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* display */
  scm__rc.d2149[190] = Scm_MakeIdentifier(scm__rc.d2149[191], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#display */
  scm__rc.d2149[193] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* string-copy */
  scm__rc.d2149[192] = Scm_MakeIdentifier(scm__rc.d2149[193], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#string-copy */
  scm__rc.d2149[194] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* next-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[217]), scm__rc.d2149[194]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[218]), scm__rc.d2149[183]);
  scm__rc.d2149[195] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[4]))->name = scm__rc.d2149[194];/* (%regexp-replace-rec next-string) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[4]))->debugInfo = scm__rc.d2149[195];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]))[4] = SCM_WORD(scm__rc.d2149[159]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]))[12] = SCM_WORD(scm__rc.d2149[184]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]))[19] = SCM_WORD(scm__rc.d2149[186]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]))[24] = SCM_WORD(scm__rc.d2149[187]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]))[34] = SCM_WORD(scm__rc.d2149[188]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]))[38] = SCM_WORD(scm__rc.d2149[190]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[125]))[42] = SCM_WORD(scm__rc.d2149[192]);
  scm__rc.d2149[196] = Scm_MakeIdentifier(scm__rc.d2149[183], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#%regexp-replace-rec */
  scm__rc.d2149[197] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* pre */
  scm__rc.d2149[198] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* post */
  scm__rc.d2149[199] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* string */
  scm__rc.d2149[200] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* subpat */
  scm__rc.d2149[201] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* subskip */
  scm__rc.d2149[202] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* subcount */
  scm__rc.d2149[203] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),TRUE); /* out */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[222]), scm__rc.d2149[203]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[223]), scm__rc.d2149[202]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[224]), scm__rc.d2149[201]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[225]), scm__rc.d2149[200]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[226]), scm__rc.d2149[199]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[227]), scm__rc.d2149[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[230]), scm__rc.d2149[2]);
  scm__rc.d2149[204] = Scm_MakeExtendedPair(scm__rc.d2149[183], SCM_OBJ(&scm__rc.d2150[227]), SCM_OBJ(&scm__rc.d2150[231]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[232]), scm__rc.d2149[204]);
  scm__rc.d2149[205] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[5]))->name = scm__rc.d2149[183];/* %regexp-replace-rec */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[5]))->debugInfo = scm__rc.d2149[205];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[11] = SCM_WORD(scm__rc.d2149[190]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[18] = SCM_WORD(scm__rc.d2149[157]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[32] = SCM_WORD(scm__rc.d2149[160]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[36] = SCM_WORD(scm__rc.d2149[190]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[43] = SCM_WORD(scm__rc.d2149[165]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[47] = SCM_WORD(scm__rc.d2149[190]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[65] = SCM_WORD(scm__rc.d2149[196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[73] = SCM_WORD(scm__rc.d2149[160]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[77] = SCM_WORD(scm__rc.d2149[190]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[82] = SCM_WORD(scm__rc.d2149[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[95] = SCM_WORD(scm__rc.d2149[190]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[112] = SCM_WORD(scm__rc.d2149[197]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[118] = SCM_WORD(scm__rc.d2149[160]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[123] = SCM_WORD(scm__rc.d2149[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[129] = SCM_WORD(scm__rc.d2149[159]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[141] = SCM_WORD(scm__rc.d2149[165]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[156] = SCM_WORD(scm__rc.d2149[190]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[183] = SCM_WORD(scm__rc.d2149[196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[170]))[188] = SCM_WORD(scm__rc.d2149[190]);
  scm__rc.d2149[206] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[6]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[6]))->debugInfo = scm__rc.d2149[206];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[363]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[363]))[6] = SCM_WORD(scm__rc.d2149[183]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[363]))[13] = SCM_WORD(scm__rc.d2149[196]);
  scm__rc.d2149[207] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* %regexp-replace */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[234]), scm__rc.d2149[207]);
  scm__rc.d2149[208] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),FALSE); /* G2161 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[208]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[238]), scm__rc.d2149[2]);
  scm__rc.d2149[209] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[234]), SCM_OBJ(&scm__rc.d2150[235]), SCM_OBJ(&scm__rc.d2150[239]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[240]), scm__rc.d2149[209]);
  scm__rc.d2149[210] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[7]))->debugInfo = scm__rc.d2149[210];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[378]))[7] = SCM_WORD(scm__rc.d2149[196]);
  scm__rc.d2149[212] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* call-with-output-string */
  scm__rc.d2149[211] = Scm_MakeIdentifier(scm__rc.d2149[212], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#call-with-output-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[241]), scm__rc.d2149[202]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[242]), scm__rc.d2149[201]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[243]), scm__rc.d2149[200]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[244]), scm__rc.d2149[199]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[245]), scm__rc.d2149[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[248]), scm__rc.d2149[2]);
  scm__rc.d2149[213] = Scm_MakeExtendedPair(scm__rc.d2149[207], SCM_OBJ(&scm__rc.d2150[245]), SCM_OBJ(&scm__rc.d2150[249]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[250]), scm__rc.d2149[213]);
  scm__rc.d2149[214] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[8]))->name = scm__rc.d2149[207];/* %regexp-replace */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[8]))->debugInfo = scm__rc.d2149[214];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[387]))[3] = SCM_WORD(scm__rc.d2149[211]);
  scm__rc.d2149[215] = Scm_MakeIdentifier(scm__rc.d2149[207], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#%regexp-replace */
  scm__rc.d2149[216] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[9]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[9]))->debugInfo = scm__rc.d2149[216];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[392]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[392]))[6] = SCM_WORD(scm__rc.d2149[207]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[392]))[13] = SCM_WORD(scm__rc.d2149[215]);
  scm__rc.d2149[217] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* regexp-replace */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[251]), scm__rc.d2149[199]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[252]), scm__rc.d2149[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[255]), scm__rc.d2149[2]);
  scm__rc.d2149[218] = Scm_MakeExtendedPair(scm__rc.d2149[217], SCM_OBJ(&scm__rc.d2150[252]), SCM_OBJ(&scm__rc.d2150[256]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[257]), scm__rc.d2149[218]);
  scm__rc.d2149[219] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[10]))->name = scm__rc.d2149[217];/* regexp-replace */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[10]))->debugInfo = scm__rc.d2149[219];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[407]))[6] = SCM_WORD(scm__rc.d2149[180]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[407]))[11] = SCM_WORD(scm__rc.d2149[215]);
  scm__rc.d2149[220] = Scm_MakeIdentifier(scm__rc.d2149[217], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#regexp-replace */
  scm__rc.d2149[221] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[11]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[11]))->debugInfo = scm__rc.d2149[221];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[420]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[420]))[6] = SCM_WORD(scm__rc.d2149[217]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[420]))[13] = SCM_WORD(scm__rc.d2149[220]);
  scm__rc.d2149[222] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* regexp-replace-all */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[260]), scm__rc.d2149[2]);
  scm__rc.d2149[223] = Scm_MakeExtendedPair(scm__rc.d2149[222], SCM_OBJ(&scm__rc.d2150[252]), SCM_OBJ(&scm__rc.d2150[261]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[262]), scm__rc.d2149[223]);
  scm__rc.d2149[224] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[12]))->name = scm__rc.d2149[222];/* regexp-replace-all */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[12]))->debugInfo = scm__rc.d2149[224];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[435]))[6] = SCM_WORD(scm__rc.d2149[180]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[435]))[11] = SCM_WORD(scm__rc.d2149[215]);
  scm__rc.d2149[225] = Scm_MakeIdentifier(scm__rc.d2149[222], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#regexp-replace-all */
  scm__rc.d2149[226] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[13]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[13]))->debugInfo = scm__rc.d2149[226];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[448]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[448]))[6] = SCM_WORD(scm__rc.d2149[222]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[448]))[13] = SCM_WORD(scm__rc.d2149[225]);
  scm__rc.d2149[227] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* regexp-replace-driver */
  scm__rc.d2149[229] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* even? */
  scm__rc.d2149[228] = Scm_MakeIdentifier(scm__rc.d2149[229], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#even? */
  scm__rc.d2149[231] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* errorf */
  scm__rc.d2149[230] = Scm_MakeIdentifier(scm__rc.d2149[231], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#errorf */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[263]), scm__rc.d2149[227]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[264]), scm__rc.d2149[227]);
  scm__rc.d2149[232] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),TRUE); /* more */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[265]), scm__rc.d2149[177]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[265]), scm__rc.d2149[232]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[266]), scm__rc.d2149[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[267]), scm__rc.d2149[199]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[270]), scm__rc.d2149[2]);
  scm__rc.d2149[233] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[264]), SCM_OBJ(&scm__rc.d2150[267]), SCM_OBJ(&scm__rc.d2150[271]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[272]), scm__rc.d2149[233]);
  scm__rc.d2149[234] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[14]))->name = scm__rc.d2149[227];/* (regexp-replace-driver regexp-replace-driver) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[14]))->debugInfo = scm__rc.d2149[234];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]))[14] = SCM_WORD(scm__rc.d2149[228]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[463]))[25] = SCM_WORD(scm__rc.d2149[230]);
  scm__rc.d2149[235] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),TRUE); /* name */
  scm__rc.d2149[236] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* func-1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[273]), scm__rc.d2149[236]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[274]), scm__rc.d2149[235]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[277]), scm__rc.d2149[2]);
  scm__rc.d2149[237] = Scm_MakeExtendedPair(scm__rc.d2149[227], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[278]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[279]), scm__rc.d2149[237]);
  scm__rc.d2149[238] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[15]))->name = scm__rc.d2149[227];/* regexp-replace-driver */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[15]))->debugInfo = scm__rc.d2149[238];
  scm__rc.d2149[239] = Scm_MakeIdentifier(scm__rc.d2149[227], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#regexp-replace-driver */
  scm__rc.d2149[240] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[16]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[16]))->debugInfo = scm__rc.d2149[240];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[522]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[522]))[6] = SCM_WORD(scm__rc.d2149[227]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[522]))[13] = SCM_WORD(scm__rc.d2149[239]);
  scm__rc.d2149[241] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* regexp-replace* */
  scm__rc.d2149[242] = Scm_MakeIdentifier(scm__rc.d2149[217], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#regexp-replace */
  scm__rc.d2149[243] = Scm_MakeIdentifier(scm__rc.d2149[241], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#regexp-replace* */
  scm__rc.d2149[244] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[17]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[17]))->debugInfo = scm__rc.d2149[244];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[537]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[537]))[6] = SCM_WORD(scm__rc.d2149[241]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[537]))[10] = SCM_WORD(scm__rc.d2149[241]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[537]))[12] = SCM_WORD(scm__rc.d2149[242]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[537]))[14] = SCM_WORD(scm__rc.d2149[239]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[537]))[17] = SCM_WORD(scm__rc.d2149[243]);
  scm__rc.d2149[245] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),TRUE); /* regexp-replace-all* */
  scm__rc.d2149[246] = Scm_MakeIdentifier(scm__rc.d2149[222], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#regexp-replace-all */
  scm__rc.d2149[247] = Scm_MakeIdentifier(scm__rc.d2149[245], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#regexp-replace-all* */
  scm__rc.d2149[248] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[18]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[18]))->debugInfo = scm__rc.d2149[248];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[556]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[556]))[6] = SCM_WORD(scm__rc.d2149[245]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[556]))[10] = SCM_WORD(scm__rc.d2149[245]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[556]))[12] = SCM_WORD(scm__rc.d2149[246]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[556]))[14] = SCM_WORD(scm__rc.d2149[239]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[556]))[17] = SCM_WORD(scm__rc.d2149[247]);
  {
     ScmCharSet *cs = SCM_CHARSET(Scm_MakeEmptyCharSet());
     Scm_CharSetAddRange(cs, SCM_CHAR(36), SCM_CHAR(36));
     Scm_CharSetAddRange(cs, SCM_CHAR(40), SCM_CHAR(43));
     Scm_CharSetAddRange(cs, SCM_CHAR(46), SCM_CHAR(46));
     Scm_CharSetAddRange(cs, SCM_CHAR(63), SCM_CHAR(63));
     Scm_CharSetAddRange(cs, SCM_CHAR(91), SCM_CHAR(94));
     Scm_CharSetAddRange(cs, SCM_CHAR(123), SCM_CHAR(125));
     scm__rc.d2149[249] = SCM_OBJ(cs);
  }
  scm__rc.d2149[251] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* char-set-contains? */
  scm__rc.d2149[250] = Scm_MakeIdentifier(scm__rc.d2149[251], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#char-set-contains? */
  scm__rc.d2149[252] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* regexp-quote */
  scm__rc.d2149[253] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),FALSE); /* G2162 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[280]), scm__rc.d2149[253]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[281]), scm__rc.d2149[252]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[284]), scm__rc.d2149[2]);
  scm__rc.d2149[254] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[281]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[285]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[286]), scm__rc.d2149[254]);
  scm__rc.d2149[255] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[19]))->debugInfo = scm__rc.d2149[255];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[575]))[10] = SCM_WORD(scm__rc.d2149[249]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[575]))[13] = SCM_WORD(scm__rc.d2149[250]);
  scm__rc.d2149[257] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* with-string-io */
  scm__rc.d2149[256] = Scm_MakeIdentifier(scm__rc.d2149[257], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#with-string-io */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[288]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[291]), scm__rc.d2149[2]);
  scm__rc.d2149[258] = Scm_MakeExtendedPair(scm__rc.d2149[252], SCM_OBJ(&scm__rc.d2150[288]), SCM_OBJ(&scm__rc.d2150[292]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[293]), scm__rc.d2149[258]);
  scm__rc.d2149[259] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[20]))->name = scm__rc.d2149[252];/* regexp-quote */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[20]))->debugInfo = scm__rc.d2149[259];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[604]))[3] = SCM_WORD(scm__rc.d2149[256]);
  scm__rc.d2149[260] = Scm_MakeIdentifier(scm__rc.d2149[252], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#regexp-quote */
  scm__rc.d2149[261] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[21]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[21]))->debugInfo = scm__rc.d2149[261];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[609]))[5] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[609]))[8] = SCM_WORD(scm__rc.d2149[252]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[609]))[15] = SCM_WORD(scm__rc.d2149[260]);
  scm__rc.d2149[262] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* regexp->string */
  scm__rc.d2149[263] = Scm_MakeIdentifier(scm__rc.d2149[142], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#%regexp-pattern */
  scm__rc.d2149[264] = Scm_MakeIdentifier(scm__rc.d2149[36], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#regexp-ast */
  scm__rc.d2149[266] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* regexp-unparse */
  scm__rc.d2149[265] = Scm_MakeIdentifier(scm__rc.d2149[266], SCM_MODULE(scm__rc.d2149[158]), SCM_NIL); /* gauche.internal#regexp-unparse */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[296]), scm__rc.d2149[2]);
  scm__rc.d2149[267] = Scm_MakeExtendedPair(scm__rc.d2149[262], SCM_OBJ(&scm__rc.d2150[162]), SCM_OBJ(&scm__rc.d2150[297]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[298]), scm__rc.d2149[267]);
  scm__rc.d2149[268] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[22]))->name = scm__rc.d2149[262];/* regexp->string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[22]))->debugInfo = scm__rc.d2149[268];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[626]))[4] = SCM_WORD(scm__rc.d2149[263]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[626]))[12] = SCM_WORD(scm__rc.d2149[264]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[626]))[14] = SCM_WORD(scm__rc.d2149[265]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[626]))[21] = SCM_WORD(scm__rc.d2149[263]);
  scm__rc.d2149[269] = Scm_MakeIdentifier(scm__rc.d2149[262], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#regexp->string */
  scm__rc.d2149[270] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[23]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[23]))->debugInfo = scm__rc.d2149[270];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[651]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[651]))[6] = SCM_WORD(scm__rc.d2149[262]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[651]))[13] = SCM_WORD(scm__rc.d2149[269]);
  scm__rc.d2149[271] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* rxmatch->string */
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* after */
  scm__rc.d2149[273] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* before */
  scm__rc.d2149[274] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* sel */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[299]), scm__rc.d2149[21]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[299]), scm__rc.d2149[274]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[300]), scm__rc.d2149[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[303]), scm__rc.d2149[2]);
  scm__rc.d2149[275] = Scm_MakeExtendedPair(scm__rc.d2149[271], SCM_OBJ(&scm__rc.d2150[300]), SCM_OBJ(&scm__rc.d2150[304]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[305]), scm__rc.d2149[275]);
  scm__rc.d2149[276] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[24]))->name = scm__rc.d2149[271];/* rxmatch->string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[24]))->debugInfo = scm__rc.d2149[276];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[8] = SCM_WORD(scm__rc.d2149[157]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[10] = SCM_WORD(scm__rc.d2149[165]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[14] = SCM_WORD(scm__rc.d2149[272]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[17] = SCM_WORD(scm__rc.d2149[159]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[23] = SCM_WORD(scm__rc.d2149[157]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[30] = SCM_WORD(scm__rc.d2149[273]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[33] = SCM_WORD(scm__rc.d2149[160]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[39] = SCM_WORD(scm__rc.d2149[157]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[49] = SCM_WORD(scm__rc.d2149[157]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[666]))[53] = SCM_WORD(scm__rc.d2149[165]);
  scm__rc.d2149[277] = Scm_MakeIdentifier(scm__rc.d2149[271], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#rxmatch->string */
  scm__rc.d2149[278] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[25]))->name = scm__rc.d2149[181];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[25]))->debugInfo = scm__rc.d2149[278];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[721]))[3] = SCM_WORD(scm__rc.d2149[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[721]))[6] = SCM_WORD(scm__rc.d2149[271]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[721]))[13] = SCM_WORD(scm__rc.d2149[277]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[380] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* m */
  scm__rc.d2149[381] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* list* */
  scm__rc.d2149[382] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104])),TRUE); /* r */
  scm__rc.d2149[383] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* tmp */
  scm__rc.d2149[384] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[106])),TRUE); /* reverse */
  scm__rc.d2149[385] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107])),TRUE); /* s */
  scm__rc.d2149[386] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[108])),TRUE); /* => */
  scm__rc.d2149[387] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[109])),TRUE); /* ^s */
  scm__rc.d2149[388] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[110])),TRUE); /* d */
  scm__rc.d2149[389] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[111])),TRUE); /* ^d */
  scm__rc.d2149[390] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[112])),TRUE); /* ^m */
  scm__rc.d2149[391] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[113])),TRUE); /* string? */
  scm__rc.d2149[392] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[114])),TRUE); /* rest */
  scm__rc.d2149[393] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[115])),TRUE); /* = */
  scm__rc.d2149[394] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[116])),TRUE); /* next */
  scm__rc.d2149[395] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[117])),TRUE); /* - */
  scm__rc.d2149[396] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[118])),TRUE); /* do */
  scm__rc.d2149[397] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[119])),FALSE); /* p2160 */
  scm__rc.d2149[398] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[120])),TRUE); /* pat */
  scm__rc.d2149[399] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[121])),TRUE); /* number? */
  scm__rc.d2149[400] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[122])),TRUE); /* symbol? */
  scm__rc.d2149[401] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[123])),TRUE); /* dolist */
  scm__rc.d2149[402] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[124])),TRUE); /* > */
  scm__rc.d2149[403] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[125])),TRUE); /* and-let1 */
  scm__rc.d2149[404] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[126])),TRUE); /* zero? */
  scm__rc.d2149[405] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[127])),TRUE); /* cut */
  scm__rc.d2149[406] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[128])),TRUE); /* <> */
  scm__rc.d2149[407] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[129])),TRUE); /* define-in-module */
  scm__rc.d2149[408] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[130])),TRUE); /* args */
  scm__rc.d2149[409] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[131])),TRUE); /* length */
  scm__rc.d2149[410] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[132])),TRUE); /* read-char */
  scm__rc.d2149[411] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[133])),TRUE); /* write-char */
  scm__rc.d2149[412] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[134])),TRUE); /* c */
  scm__rc.d2149[413] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[135])),TRUE); /* eof-object? */
  scm__rc.d2149[414] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[136])),TRUE); /* setter */
  scm__rc.d2149[415] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[137])),TRUE); /* set! */
  scm__rc.d2149[416] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[138])),TRUE); /* rlet1 */
}
