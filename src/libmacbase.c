/* Generated automatically from libmacbase.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/priv/macroP.h"
static unsigned char uvector__00001[] = {
 0u, 3u, 144u, 6u, 8u, 2u, 1u, 128u, 155u, 137u, 28u, 120u, 48u, 36u,
4u, 71u, 29u, 12u, 9u, 0u, 145u, 198u, 195u, 3u, 60u, 6u, 24u, 67u,
24u, 128u, 96u, 65u, 1u, 55u, 18u, 19u, 1u, 194u, 73u, 28u, 84u, 48u,
38u, 22u, 164u, 113u, 16u, 192u, 215u, 2u, 146u, 56u, 128u, 96u, 72u,
20u, 142u, 30u, 24u, 25u, 0u, 128u, 131u, 40u, 107u, 129u, 139u, 112u,
104u, 129u, 137u, 34u, 5u, 12u, 161u, 174u, 6u, 33u, 133u, 72u, 106u,
129u, 137u, 36u, 55u, 132u, 197u, 220u, 38u, 22u, 164u, 50u, 42u, 98u,
30u, 72u, 225u, 193u, 129u, 50u, 120u, 35u, 132u, 134u, 4u, 201u, 56u,
142u, 16u, 24u, 18u, 7u, 35u, 131u, 6u, 4u, 200u, 96u, 142u, 2u, 24u,
19u, 31u, 130u, 56u, 0u, 96u, 72u, 28u, 134u, 32u, 192u, 152u, 106u,
146u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 6u, 8u, 34u, 9u, 16u, 84u, 3u, 2u, 8u, 9u, 184u, 145u,
0u, 64u, 48u, 19u, 113u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 212u,
193u, 176u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u,
224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 144u, 134u, 8u, 2u, 1u, 128u, 159u, 137u, 28u, 120u, 48u,
36u, 4u, 71u, 29u, 12u, 9u, 0u, 145u, 198u, 195u, 3u, 60u, 6u, 24u,
67u, 24u, 128u, 96u, 65u, 1u, 55u, 18u, 19u, 1u, 194u, 73u, 28u, 84u,
48u, 38u, 22u, 164u, 113u, 16u, 192u, 215u, 5u, 146u, 56u, 128u, 96u,
72u, 44u, 142u, 30u, 24u, 25u, 0u, 128u, 131u, 40u, 107u, 131u, 11u,
112u, 104u, 131u, 9u, 34u, 11u, 12u, 161u, 174u, 12u, 33u, 133u, 72u,
106u, 131u, 9u, 36u, 55u, 132u, 197u, 220u, 38u, 22u, 164u, 50u, 42u,
98u, 30u, 72u, 225u, 193u, 129u, 50u, 120u, 35u, 132u, 134u, 4u, 201u,
56u, 142u, 16u, 24u, 18u, 13u, 35u, 131u, 6u, 4u, 200u, 96u, 142u, 2u,
24u, 19u, 31u, 130u, 56u, 0u, 96u, 72u, 52u, 134u, 32u, 192u, 152u,
106u, 146u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 134u, 6u, 8u, 34u, 9u, 16u, 116u, 3u, 2u, 8u, 9u, 184u, 145u,
0u, 64u, 48u, 19u, 241u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 212u,
193u, 176u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u,
224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 154u, 6u, 4u, 131u, 200u, 230u, 33u, 130u, 16u, 131u, 201u,
28u, 192u, 48u, 36u, 30u, 71u, 45u, 12u, 15u, 112u, 19u, 113u, 35u,
150u, 6u, 4u, 128u, 136u, 229u, 33u, 130u, 17u, 128u, 68u, 37u, 9u,
152u, 80u, 145u, 202u, 3u, 2u, 66u, 132u, 114u, 80u, 192u, 152u, 142u,
145u, 201u, 3u, 2u, 66u, 100u, 114u, 32u, 192u, 152u, 142u, 145u,
200u, 67u, 2u, 64u, 36u, 113u, 240u, 192u, 152u, 131u, 17u, 199u, 3u,
3u, 60u, 43u, 1u, 18u, 56u, 216u, 96u, 72u, 8u, 142u, 46u, 24u, 19u,
38u, 82u, 56u, 160u, 96u, 72u, 8u, 142u, 36u, 24u, 4u, 45u, 1u, 24u,
8u, 145u, 196u, 3u, 2u, 102u, 74u, 71u, 15u, 12u, 9u, 1u, 17u, 195u,
67u, 2u, 102u, 74u, 71u, 9u, 12u, 16u, 185u, 35u, 131u, 134u, 4u,
207u, 172u, 142u, 10u, 24u, 4u, 49u, 1u, 16u, 153u, 245u, 146u, 56u,
24u, 96u, 77u, 8u, 133u, 35u, 129u, 6u, 4u, 128u, 136u, 224u, 1u,
129u, 52u, 34u, 20u, 134u, 32u, 192u, 198u, 32u, 24u, 10u, 20u, 34u,
25u, 2u, 19u, 13u, 129u, 52u, 34u, 8u, 38u, 100u, 65u, 164u, 38u, 76u,
164u, 145u, 7u, 132u, 196u, 24u, 144u, 202u, 19u, 10u, 48u, 152u, 35u,
65u, 228u, 146u, 64u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 0u, 64u, 48u, 20u, 40u, 68u, 50u, 4u, 38u,
27u, 0u, 134u, 32u, 34u, 33u, 114u, 64u, 133u, 160u, 35u, 1u, 16u,
210u, 25u, 225u, 88u, 8u, 146u, 68u, 30u, 33u, 24u, 4u, 66u, 80u,
153u, 133u, 9u, 33u, 148u, 61u, 192u, 77u, 196u, 66u, 16u, 121u, 131u,
201u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u, 193u, 72u, 142u, 14u,
24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u,
28u, 36u,};
static ScmObj libmacbaseunwrap_syntax(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmacbaseunwrap_syntax__STUB, 1, 2,SCM_FALSE,libmacbaseunwrap_syntax, NULL, NULL);

static ScmObj libmacbaseunwrap_syntax_1(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmacbaseunwrap_syntax_1__STUB, 1, 0,SCM_FALSE,libmacbaseunwrap_syntax_1, NULL, NULL);

static unsigned char uvector__00007[] = {
 0u, 3u, 147u, 6u, 4u, 128u, 72u, 228u, 97u, 130u, 26u, 134u, 224u,
18u, 71u, 34u, 12u, 9u, 0u, 145u, 200u, 67u, 2u, 67u, 100u, 113u,
240u, 192u, 33u, 200u, 4u, 132u, 193u, 24u, 145u, 199u, 131u, 2u, 97u,
180u, 71u, 29u, 12u, 9u, 0u, 145u, 198u, 195u, 3u, 152u, 134u, 195u,
68u, 2u, 72u, 134u, 195u, 84u, 2u, 73u, 35u, 141u, 6u, 4u, 198u, 192u,
142u, 50u, 24u, 18u, 27u, 35u, 139u, 134u, 4u, 198u, 244u, 142u, 42u,
24u, 19u, 27u, 2u, 56u, 160u, 96u, 76u, 98u, 8u, 226u, 97u, 129u, 33u,
178u, 56u, 136u, 96u, 76u, 101u, 72u, 225u, 225u, 129u, 49u, 136u,
35u, 134u, 134u, 1u, 14u, 192u, 36u, 38u, 47u, 164u, 142u, 24u, 24u,
19u, 53u, 242u, 56u, 88u, 96u, 72u, 4u, 142u, 18u, 24u, 33u, 232u, 4u,
145u, 194u, 3u, 2u, 67u, 196u, 112u, 112u, 192u, 144u, 9u, 28u, 20u,
48u, 8u, 126u, 1u, 33u, 52u, 32u, 8u, 145u, 192u, 195u, 2u, 104u, 72u,
97u, 28u, 8u, 48u, 36u, 2u, 71u, 0u, 12u, 9u, 161u, 33u, 132u, 49u,
6u, 6u, 49u, 0u, 144u, 216u, 19u, 66u, 66u, 66u, 102u, 184u, 19u, 13u,
112u, 211u, 0u, 146u, 73u, 0u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 133u, 134u, 4u, 136u, 8u, 225u, 33u, 129u, 210u, 32u, 224u,
36u, 142u, 14u, 24u, 30u, 196u, 67u, 17u, 24u, 140u, 145u, 193u, 131u,
2u, 68u, 100u, 112u, 48u, 192u, 152u, 70u, 145u, 192u, 131u, 2u, 68u,
68u, 112u, 0u, 192u, 152u, 70u, 144u, 196u, 24u, 24u, 196u, 69u, 18u,
68u, 4u, 50u, 132u, 194u, 8u, 38u, 8u, 209u, 1u, 36u, 128u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 161u, 6u, 4u, 137u, 72u, 232u, 1u, 130u, 38u, 137u, 226u,
136u, 148u, 145u, 207u, 195u, 2u, 68u, 164u, 115u, 224u, 192u, 145u,
65u, 28u, 244u, 48u, 36u, 78u, 71u, 59u, 12u, 9u, 130u, 49u, 28u,
232u, 48u, 50u, 1u, 18u, 136u, 166u, 35u, 138u, 162u, 178u, 72u, 76u,
17u, 162u, 82u, 71u, 56u, 12u, 9u, 138u, 161u, 28u, 220u, 48u, 36u,
86u, 71u, 52u, 12u, 9u, 17u, 145u, 204u, 131u, 2u, 98u, 168u, 71u,
49u, 12u, 12u, 128u, 69u, 98u, 44u, 139u, 98u, 112u, 228u, 34u, 40u,
146u, 32u, 33u, 148u, 61u, 136u, 134u, 34u, 49u, 25u, 14u, 145u, 7u,
1u, 49u, 1u, 60u, 0u, 146u, 34u, 232u, 148u, 38u, 42u, 129u, 48u, 70u,
36u, 142u, 94u, 24u, 34u, 216u, 156u, 38u, 85u, 252u, 0u, 145u, 202u,
195u, 3u, 24u, 76u, 174u, 130u, 101u, 188u, 72u, 229u, 65u, 129u, 34u,
114u, 57u, 64u, 96u, 76u, 240u, 136u, 228u, 225u, 129u, 34u, 50u, 57u,
40u, 96u, 137u, 162u, 120u, 162u, 35u, 36u, 114u, 64u, 192u, 145u,
25u, 28u, 140u, 48u, 36u, 80u, 71u, 34u, 12u, 9u, 19u, 145u, 200u, 3u,
2u, 104u, 78u, 65u, 28u, 120u, 48u, 50u, 136u, 190u, 40u, 17u, 132u,
70u, 33u, 114u, 24u, 84u, 146u, 30u, 130u, 104u, 78u, 68u, 70u, 67u,
108u, 86u, 19u, 40u, 224u, 153u, 177u, 18u, 71u, 28u, 12u, 9u, 161u,
121u, 132u, 113u, 160u, 192u, 154u, 24u, 6u, 71u, 22u, 12u, 9u, 161u,
131u, 68u, 113u, 64u, 192u, 154u, 24u, 52u, 71u, 19u, 12u, 9u, 17u,
145u, 196u, 67u, 2u, 104u, 96u, 25u, 28u, 64u, 48u, 36u, 80u, 71u,
14u, 12u, 9u, 161u, 121u, 132u, 112u, 208u, 192u, 200u, 4u, 70u, 34u,
24u, 160u, 146u, 19u, 66u, 240u, 73u, 28u, 44u, 48u, 38u, 136u, 109u,
17u, 194u, 131u, 2u, 69u, 4u, 112u, 128u, 192u, 154u, 33u, 180u, 71u,
5u, 12u, 17u, 140u, 79u, 20u, 55u, 18u, 56u, 24u, 96u, 72u, 160u,
142u, 4u, 24u, 18u, 39u, 35u, 128u, 6u, 4u, 209u, 44u, 50u, 24u, 131u,
3u, 24u, 138u, 8u, 118u, 9u, 162u, 88u, 97u, 182u, 35u, 9u, 162u, 27u,
65u, 52u, 47u, 4u, 146u, 72u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 135u, 134u, 8u, 110u, 1u, 36u, 112u, 224u, 192u, 144u, 217u,
28u, 52u, 48u, 36u, 2u, 71u, 9u, 12u, 12u, 98u, 40u, 33u, 216u, 70u,
49u, 60u, 80u, 220u, 67u, 108u, 70u, 34u, 24u, 160u, 134u, 81u, 23u,
197u, 2u, 48u, 136u, 196u, 46u, 67u, 10u, 146u, 67u, 208u, 137u, 162u,
120u, 162u, 35u, 49u, 25u, 13u, 177u, 88u, 139u, 34u, 216u, 156u, 57u,
8u, 138u, 36u, 136u, 8u, 101u, 15u, 98u, 33u, 136u, 140u, 70u, 67u,
164u, 65u, 192u, 76u, 64u, 79u, 0u, 34u, 46u, 137u, 68u, 83u, 17u,
197u, 81u, 89u, 17u, 52u, 79u, 20u, 68u, 164u, 146u, 73u, 35u, 132u,
6u, 6u, 64u, 34u, 113u, 25u, 6u, 23u, 178u, 73u, 14u, 65u, 48u, 174u,
9u, 133u, 241u, 36u, 112u, 96u, 192u, 153u, 179u, 145u, 192u, 131u,
2u, 102u, 206u, 67u, 16u, 96u, 99u, 16u, 9u, 12u, 208u, 240u, 109u,
137u, 194u, 102u, 206u, 19u, 57u, 50u, 67u, 48u, 134u, 224u, 18u, 27u,
0u, 135u, 224u, 18u, 33u, 232u, 4u, 144u, 33u, 216u, 4u, 135u, 49u,
13u, 134u, 136u, 4u, 145u, 13u, 134u, 168u, 4u, 146u, 64u, 135u, 32u,
18u, 33u, 168u, 110u, 1u, 36u, 52u, 192u, 36u, 144u, 152u, 14u, 18u,
64u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 134u, 6u, 8u, 34u, 9u, 16u, 132u, 2u, 67u, 52u, 60u, 27u,
98u, 113u, 25u, 6u, 23u, 178u, 67u, 144u, 138u, 8u, 118u, 17u, 140u,
79u, 20u, 55u, 16u, 219u, 17u, 136u, 134u, 40u, 33u, 148u, 69u, 241u,
64u, 140u, 34u, 49u, 11u, 144u, 194u, 164u, 144u, 244u, 34u, 104u,
158u, 40u, 136u, 204u, 70u, 67u, 108u, 86u, 34u, 200u, 182u, 39u, 14u,
66u, 34u, 137u, 34u, 2u, 25u, 67u, 216u, 136u, 98u, 35u, 17u, 144u,
233u, 16u, 112u, 19u, 16u, 19u, 192u, 8u, 139u, 162u, 81u, 20u, 196u,
113u, 84u, 86u, 68u, 77u, 19u, 197u, 17u, 41u, 36u, 146u, 73u, 12u,
194u, 27u, 128u, 72u, 108u, 2u, 31u, 128u, 72u, 135u, 160u, 18u, 64u,
135u, 96u, 18u, 28u, 196u, 54u, 26u, 32u, 18u, 68u, 54u, 26u, 160u,
18u, 73u, 2u, 28u, 128u, 72u, 134u, 161u, 184u, 4u, 144u, 211u, 0u,
146u, 68u, 55u, 0u, 146u, 71u, 9u, 12u, 12u, 97u, 48u, 61u, 76u, 18u,
136u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u,
0u, 24u, 19u, 1u, 194u, 64u,};
static ScmObj libmacbasemacroP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmacbasemacroP__STUB, 1, 0,SCM_FALSE,libmacbasemacroP, NULL, NULL);

static ScmObj libmacbasesyntaxP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmacbasesyntaxP__STUB, 1, 0,SCM_FALSE,libmacbasesyntaxP, NULL, NULL);

static ScmObj get_macro_flags(ScmObj macro);
static ScmObj libmacbasecompile_syntax_rules(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmacbasecompile_syntax_rules__STUB, 7, 0,SCM_FALSE,libmacbasecompile_syntax_rules, NULL, NULL);

static ScmObj libmacbasemacro_transformer(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmacbasemacro_transformer__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmacbasemacro_transformer, NULL, NULL);

static ScmObj libmacbasemacro_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmacbasemacro_name__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmacbasemacro_name, NULL, NULL);

static ScmObj libmacbaseidentifier_macroP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmacbaseidentifier_macroP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmacbaseidentifier_macroP, NULL, NULL);

static ScmObj libmacbase_25swap_macro_transformerX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmacbase_25swap_macro_transformerX__STUB, 2, 0,SCM_FALSE,libmacbase_25swap_macro_transformerX, NULL, NULL);

static unsigned char uvector__00012[] = {
 0u, 3u, 133u, 6u, 6u, 104u, 205u, 184u, 145u, 193u, 195u, 2u, 96u,
56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 139u, 6u, 8u, 208u, 70u, 177u, 177u, 36u, 113u, 80u, 192u,
145u, 161u, 28u, 72u, 48u, 38u, 5u, 36u, 113u, 16u, 192u, 145u, 177u,
28u, 60u, 48u, 38u, 5u, 36u, 112u, 208u, 192u, 35u, 120u, 208u, 132u,
192u, 112u, 145u, 194u, 195u, 2u, 98u, 36u, 71u, 10u, 12u, 9u, 26u,
17u, 194u, 3u, 2u, 98u, 36u, 71u, 6u, 12u, 15u, 113u, 164u, 108u, 72u,
224u, 161u, 129u, 35u, 98u, 56u, 32u, 96u, 72u, 208u, 142u, 4u, 24u,
4u, 113u, 26u, 16u, 152u, 241u, 146u, 56u, 8u, 96u, 76u, 157u, 72u,
224u, 1u, 129u, 35u, 66u, 24u, 131u, 3u, 24u, 141u, 8u, 108u, 9u,
147u, 144u, 76u, 67u, 195u, 75u, 113u, 36u, 144u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 139u, 6u, 8u, 228u, 71u, 65u, 176u, 8u, 226u, 52u, 33u, 238u,
52u, 141u, 137u, 2u, 55u, 141u, 8u, 141u, 4u, 107u, 27u, 18u, 67u,
75u, 113u, 38u, 51u, 36u, 113u, 64u, 192u, 145u, 153u, 28u, 72u, 48u,
49u, 136u, 208u, 166u, 6u, 100u, 113u, 0u, 192u, 145u, 177u, 28u, 60u,
48u, 50u, 1u, 27u, 8u, 132u, 71u, 113u, 225u, 36u, 135u, 8u, 216u,
61u, 4u, 192u, 112u, 146u, 71u, 13u, 12u, 9u, 142u, 33u, 28u, 44u,
48u, 38u, 58u, 36u, 112u, 160u, 192u, 145u, 225u, 28u, 32u, 48u, 38u,
58u, 36u, 112u, 96u, 192u, 152u, 226u, 17u, 192u, 131u, 3u, 220u,
102u, 252u, 72u, 224u, 1u, 129u, 35u, 50u, 24u, 131u, 3u, 24u, 143u,
8u, 118u, 9u, 153u, 104u, 143u, 99u, 96u, 152u, 226u, 4u, 192u, 112u,
146u, 72u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 31u, 71u, 132u, 59u, 7u, 184u, 205u, 248u,
136u, 246u, 54u, 17u, 8u, 142u, 227u, 194u, 68u, 114u, 35u, 160u,
216u, 4u, 113u, 26u, 16u, 247u, 26u, 70u, 196u, 129u, 27u, 198u, 132u,
70u, 130u, 53u, 141u, 137u, 33u, 165u, 184u, 147u, 25u, 146u, 73u,
28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u, 4u,
192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u,
0u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 173u, 134u, 8u, 252u, 72u, 4u, 145u, 214u, 67u, 2u, 96u, 82u,
71u, 87u, 12u, 9u, 129u, 73u, 29u, 84u, 48u, 72u, 50u, 16u, 144u, 9u,
35u, 169u, 134u, 4u, 195u, 32u, 142u, 162u, 24u, 19u, 12u, 130u, 58u,
104u, 96u, 76u, 44u, 72u, 233u, 97u, 130u, 67u, 13u, 82u, 33u, 145u,
68u, 128u, 100u, 102u, 233u, 29u, 184u, 145u, 208u, 131u, 2u, 99u,
90u, 71u, 64u, 12u, 9u, 141u, 105u, 28u, 240u, 48u, 38u, 49u, 100u,
115u, 160u, 192u, 152u, 191u, 17u, 206u, 3u, 4u, 131u, 36u, 9u, 0u,
146u, 57u, 176u, 96u, 76u, 179u, 8u, 230u, 129u, 129u, 50u, 204u, 35u,
152u, 6u, 4u, 202u, 212u, 142u, 92u, 24u, 36u, 48u, 209u, 34u, 25u,
20u, 72u, 6u, 70u, 110u, 145u, 219u, 137u, 28u, 148u, 48u, 38u, 118u,
36u, 114u, 48u, 192u, 153u, 216u, 145u, 199u, 195u, 2u, 103u, 30u,
71u, 29u, 12u, 9u, 156u, 17u, 28u, 108u, 48u, 72u, 50u, 72u, 144u, 9u,
35u, 140u, 134u, 4u, 208u, 153u, 2u, 56u, 184u, 96u, 77u, 9u, 144u,
35u, 137u, 134u, 4u, 208u, 149u, 146u, 56u, 144u, 96u, 100u, 2u, 68u,
16u, 128u, 115u, 146u, 164u, 178u, 73u, 9u, 161u, 43u, 33u, 51u, 130u,
9u, 149u, 168u, 76u, 95u, 130u, 97u, 98u, 19u, 1u, 194u, 71u, 16u,
12u, 9u, 161u, 106u, 100u, 112u, 240u, 192u, 154u, 23u, 0u, 71u, 14u,
12u, 9u, 37u, 145u, 195u, 67u, 2u, 73u, 68u, 112u, 176u, 192u, 154u,
22u, 166u, 71u, 7u, 12u, 17u, 244u, 120u, 72u, 224u, 193u, 129u, 35u,
194u, 56u, 32u, 96u, 77u, 14u, 219u, 35u, 129u, 6u, 7u, 128u, 225u,
25u, 132u, 208u, 237u, 178u, 27u, 100u, 64u, 154u, 22u, 166u, 19u,
66u, 86u, 66u, 103u, 4u, 19u, 43u, 80u, 152u, 191u, 4u, 194u, 196u,
38u, 3u, 132u, 145u, 192u, 3u, 2u, 70u, 100u, 49u, 6u, 6u, 49u, 30u,
73u, 82u, 89u, 9u, 162u, 1u, 132u, 144u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 194u, 168u, 24u, 18u, 76u, 35u, 194u, 154u, 24u, 35u, 241u,
32u, 18u, 71u, 133u, 44u, 48u, 38u, 11u, 228u, 120u, 82u, 67u, 2u,
96u, 190u, 71u, 133u, 28u, 48u, 38u, 10u, 68u, 120u, 81u, 67u, 4u,
131u, 33u, 9u, 0u, 146u, 60u, 40u, 97u, 129u, 49u, 68u, 35u, 194u,
130u, 24u, 19u, 20u, 66u, 60u, 35u, 161u, 129u, 49u, 45u, 35u, 194u,
54u, 24u, 36u, 48u, 213u, 34u, 25u, 20u, 72u, 6u, 70u, 110u, 145u,
219u, 137u, 30u, 17u, 32u, 192u, 153u, 32u, 145u, 225u, 16u, 12u, 9u,
146u, 9u, 30u, 16u, 192u, 192u, 153u, 15u, 145u, 225u, 10u, 12u, 9u,
144u, 145u, 30u, 16u, 128u, 193u, 32u, 201u, 2u, 64u, 36u, 143u, 8u,
48u, 96u, 76u, 223u, 136u, 240u, 130u, 6u, 4u, 205u, 248u, 143u, 8u,
0u, 96u, 76u, 217u, 200u, 239u, 193u, 130u, 67u, 13u, 18u, 33u, 145u,
68u, 128u, 100u, 102u, 233u, 29u, 184u, 145u, 221u, 67u, 2u, 104u,
70u, 169u, 29u, 204u, 48u, 38u, 132u, 106u, 145u, 219u, 195u, 2u,
104u, 68u, 153u, 29u, 180u, 48u, 38u, 132u, 67u, 17u, 218u, 195u, 4u,
131u, 36u, 137u, 0u, 146u, 59u, 72u, 96u, 77u, 11u, 76u, 35u, 179u,
134u, 4u, 208u, 180u, 194u, 59u, 24u, 96u, 77u, 11u, 21u, 35u, 177u,
6u, 6u, 64u, 36u, 65u, 8u, 7u, 57u, 42u, 75u, 36u, 144u, 154u, 22u,
42u, 19u, 66u, 33u, 130u, 102u, 206u, 19u, 33u, 32u, 152u, 150u, 132u,
193u, 72u, 145u, 216u, 3u, 2u, 104u, 104u, 121u, 29u, 124u, 48u, 38u,
134u, 142u, 17u, 215u, 131u, 2u, 73u, 132u, 117u, 208u, 192u, 146u,
105u, 29u, 108u, 48u, 38u, 134u, 135u, 145u, 213u, 195u, 4u, 125u,
30u, 18u, 58u, 176u, 96u, 72u, 240u, 142u, 168u, 24u, 19u, 68u, 39u,
72u, 234u, 65u, 129u, 224u, 56u, 70u, 97u, 52u, 66u, 116u, 134u, 217u,
16u, 38u, 134u, 135u, 132u, 208u, 177u, 80u, 154u, 17u, 12u, 19u, 54u,
112u, 153u, 9u, 4u, 196u, 180u, 38u, 10u, 68u, 145u, 212u, 3u, 2u,
70u, 100u, 116u, 224u, 192u, 144u, 121u, 29u, 40u, 48u, 36u, 156u,
71u, 72u, 12u, 18u, 124u, 156u, 24u, 101u, 3u, 38u, 146u, 58u, 56u,
96u, 73u, 52u, 142u, 136u, 24u, 18u, 78u, 35u, 161u, 6u, 4u, 209u,
80u, 50u, 58u, 8u, 96u, 100u, 2u, 78u, 12u, 162u, 81u, 131u, 204u,
30u, 37u, 32u, 209u, 7u, 144u, 213u, 7u, 146u, 73u, 9u, 162u, 160u,
114u, 113u, 35u, 159u, 134u, 4u, 209u, 116u, 162u, 57u, 240u, 96u,
77u, 23u, 143u, 35u, 158u, 6u, 4u, 209u, 117u, 114u, 57u, 208u, 96u,
77u, 23u, 74u, 35u, 155u, 134u, 4u, 131u, 200u, 230u, 161u, 129u, 52u,
91u, 108u, 142u, 102u, 24u, 19u, 69u, 193u, 136u, 230u, 65u, 129u,
32u, 242u, 57u, 128u, 96u, 77u, 23u, 6u, 35u, 150u, 134u, 4u, 131u,
200u, 229u, 97u, 129u, 238u, 77u, 131u, 201u, 28u, 168u, 48u, 36u,
30u, 71u, 41u, 12u, 9u, 38u, 145u, 201u, 195u, 3u, 40u, 112u, 16u,
236u, 30u, 67u, 200u, 77u, 28u, 30u, 36u, 69u, 210u, 112u, 77u, 22u,
219u, 9u, 162u, 160u, 102u, 15u, 36u, 114u, 96u, 192u, 154u, 59u, 6u,
71u, 37u, 12u, 9u, 7u, 145u, 200u, 195u, 0u, 148u, 227u, 195u, 38u,
202u, 132u, 142u, 66u, 24u, 19u, 71u, 240u, 8u, 228u, 1u, 129u, 35u,
194u, 56u, 240u, 96u, 77u, 31u, 192u, 35u, 142u, 134u, 4u, 149u, 8u,
227u, 129u, 129u, 36u, 210u, 56u, 208u, 96u, 77u, 31u, 157u, 35u,
139u, 6u, 9u, 72u, 9u, 78u, 60u, 33u, 162u, 77u, 50u, 161u, 13u, 82u,
105u, 36u, 113u, 80u, 192u, 154u, 70u, 38u, 71u, 19u, 12u, 9u, 164u,
82u, 36u, 113u, 16u, 192u, 154u, 69u, 40u, 71u, 16u, 12u, 9u, 30u,
17u, 195u, 131u, 2u, 105u, 20u, 161u, 28u, 52u, 48u, 36u, 168u, 71u,
11u, 12u, 9u, 164u, 89u, 196u, 112u, 144u, 192u, 154u, 69u, 34u, 71u,
7u, 12u, 9u, 164u, 80u, 132u, 112u, 80u, 192u, 202u, 37u, 88u, 240u,
132u, 210u, 40u, 64u, 154u, 63u, 58u, 72u, 224u, 97u, 129u, 52u, 156u,
72u, 142u, 4u, 24u, 18u, 60u, 35u, 128u, 6u, 4u, 210u, 113u, 34u, 24u,
131u, 3u, 24u, 143u, 36u, 217u, 80u, 136u, 100u, 8u, 60u, 38u, 147u,
131u, 145u, 38u, 4u, 209u, 212u, 210u, 68u, 173u, 30u, 73u, 178u, 97u,
147u, 9u, 36u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 43u, 199u, 146u, 108u, 168u, 68u, 50u, 4u,
30u, 25u, 68u, 171u, 30u, 17u, 41u, 1u, 41u, 199u, 132u, 52u, 73u,
166u, 84u, 33u, 170u, 77u, 36u, 9u, 78u, 60u, 50u, 108u, 168u, 73u,
18u, 96u, 101u, 14u, 2u, 29u, 131u, 200u, 121u, 15u, 114u, 108u, 30u,
73u, 17u, 116u, 156u, 25u, 68u, 163u, 7u, 152u, 60u, 74u, 65u, 162u,
15u, 33u, 170u, 15u, 36u, 137u, 62u, 78u, 12u, 50u, 129u, 147u, 73u,
131u, 201u, 34u, 86u, 143u, 36u, 217u, 48u, 201u, 132u, 145u, 194u,
67u, 3u, 24u, 76u, 12u, 83u, 5u, 34u, 56u, 56u, 96u, 76u, 7u, 8u,
224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 187u, 134u, 4u, 143u, 8u, 238u, 193u, 129u, 36u, 194u, 59u,
120u, 96u, 143u, 196u, 128u, 73u, 29u, 180u, 48u, 38u, 15u, 164u,
118u, 176u, 192u, 152u, 62u, 145u, 218u, 67u, 2u, 96u, 224u, 71u,
103u, 12u, 18u, 12u, 132u, 36u, 2u, 72u, 236u, 161u, 129u, 49u, 74u,
35u, 177u, 134u, 4u, 197u, 40u, 142u, 190u, 24u, 19u, 19u, 50u, 58u,
232u, 96u, 144u, 195u, 84u, 136u, 100u, 81u, 32u, 25u, 25u, 186u, 71u,
110u, 36u, 117u, 64u, 192u, 153u, 23u, 145u, 212u, 131u, 2u, 100u,
94u, 71u, 78u, 12u, 9u, 144u, 105u, 29u, 48u, 48u, 38u, 64u, 4u, 116u,
160u, 193u, 32u, 201u, 2u, 64u, 36u, 142u, 144u, 24u, 19u, 52u, 226u,
58u, 48u, 96u, 76u, 211u, 136u, 232u, 65u, 129u, 51u, 55u, 35u, 160u,
6u, 9u, 12u, 52u, 72u, 134u, 69u, 18u, 1u, 145u, 155u, 164u, 118u,
226u, 71u, 55u, 12u, 9u, 161u, 10u, 100u, 115u, 80u, 192u, 154u, 16u,
166u, 71u, 49u, 12u, 9u, 161u, 2u, 36u, 114u, 240u, 192u, 154u, 16u,
8u, 71u, 45u, 12u, 18u, 12u, 146u, 36u, 2u, 72u, 229u, 97u, 129u, 52u,
43u, 40u, 142u, 82u, 24u, 19u, 66u, 178u, 136u, 228u, 161u, 129u, 52u,
42u, 76u, 142u, 72u, 24u, 25u, 0u, 145u, 4u, 32u, 28u, 228u, 169u,
44u, 146u, 66u, 104u, 84u, 152u, 77u, 8u, 4u, 9u, 153u, 184u, 76u,
128u, 2u, 98u, 102u, 19u, 7u, 2u, 71u, 34u, 12u, 9u, 161u, 145u, 164u,
114u, 16u, 192u, 154u, 25u, 52u, 71u, 32u, 12u, 9u, 38u, 17u, 199u,
195u, 2u, 64u, 36u, 113u, 208u, 192u, 154u, 25u, 26u, 71u, 25u, 12u,
17u, 244u, 120u, 72u, 227u, 1u, 129u, 35u, 194u, 56u, 176u, 96u, 77u,
16u, 27u, 35u, 138u, 6u, 7u, 128u, 225u, 25u, 132u, 209u, 1u, 178u,
27u, 100u, 64u, 154u, 25u, 26u, 19u, 66u, 164u, 194u, 104u, 64u, 32u,
76u, 205u, 194u, 100u, 0u, 19u, 19u, 48u, 152u, 56u, 18u, 71u, 18u,
12u, 9u, 25u, 145u, 196u, 67u, 3u, 32u, 18u, 96u, 18u, 156u, 120u,
96u, 25u, 80u, 146u, 37u, 104u, 242u, 1u, 147u, 12u, 152u, 72u, 226u,
1u, 129u, 52u, 80u, 32u, 142u, 28u, 24u, 19u, 69u, 2u, 200u, 225u,
161u, 129u, 35u, 194u, 56u, 88u, 96u, 77u, 20u, 11u, 35u, 133u, 6u,
4u, 149u, 8u, 225u, 33u, 129u, 32u, 18u, 56u, 56u, 96u, 77u, 20u, 8u,
35u, 130u, 134u, 6u, 81u, 42u, 199u, 132u, 69u, 210u, 96u, 77u, 20u,
8u, 9u, 162u, 144u, 70u, 60u, 36u, 112u, 48u, 192u, 154u, 47u, 158u,
71u, 2u, 12u, 9u, 30u, 17u, 192u, 3u, 2u, 104u, 190u, 121u, 12u, 65u,
129u, 140u, 71u, 144u, 12u, 168u, 66u, 104u, 190u, 33u, 36u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 44u, 71u, 144u, 12u, 168u, 67u, 40u, 149u,
99u, 194u, 34u, 233u, 48u, 9u, 78u, 60u, 48u, 12u, 168u, 68u, 173u,
30u, 64u, 50u, 97u, 49u, 225u, 36u, 112u, 144u, 192u, 198u, 19u, 3u,
20u, 193u, 72u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u,
8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static ScmObj libmacbasemake_syntax(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmacbasemake_syntax__STUB, 3, 0,SCM_FALSE,libmacbasemake_syntax, NULL, NULL);

static ScmObj libmacbasecall_syntax_handler(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmacbasecall_syntax_handler__STUB, 3, 0,SCM_FALSE,libmacbasecall_syntax_handler, NULL, NULL);

static ScmObj libmacbasesyntax_handler(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmacbasesyntax_handler__STUB, 1, 0,SCM_FALSE,libmacbasesyntax_handler, NULL, NULL);

static unsigned char uvector__00021[] = {
 0u, 3u, 130u, 6u, 8u, 222u, 89u, 36u, 112u, 48u, 192u, 146u, 201u,
28u, 4u, 48u, 71u, 18u, 201u, 35u, 128u, 6u, 4u, 150u, 72u, 98u, 12u,
12u, 98u, 89u, 33u, 216u, 38u, 15u, 33u, 48u, 28u, 36u, 144u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 151u, 134u, 4u, 140u, 200u, 229u, 161u, 130u, 90u, 18u, 220u,
185u, 46u, 146u, 71u, 44u, 12u, 9u, 130u, 153u, 28u, 172u, 48u, 36u,
186u, 71u, 42u, 12u, 9u, 46u, 17u, 202u, 3u, 2u, 96u, 140u, 71u, 38u,
12u, 9u, 46u, 145u, 201u, 67u, 3u, 32u, 18u, 232u, 108u, 1u, 230u,
51u, 33u, 133u, 73u, 2u, 94u, 140u, 204u, 102u, 67u, 75u, 113u, 36u,
135u, 9u, 116u, 61u, 9u, 126u, 51u, 9u, 130u, 49u, 36u, 145u, 199u,
67u, 2u, 70u, 100u, 113u, 176u, 192u, 152u, 225u, 145u, 198u, 67u, 2u,
99u, 140u, 71u, 23u, 12u, 9u, 25u, 145u, 197u, 67u, 2u, 99u, 140u,
71u, 19u, 12u, 9u, 140u, 153u, 28u, 68u, 48u, 36u, 102u, 71u, 15u,
12u, 12u, 243u, 4u, 194u, 72u, 225u, 193u, 129u, 38u, 18u, 56u, 80u,
96u, 76u, 236u, 200u, 224u, 193u, 129u, 188u, 76u, 66u, 99u, 14u,
194u, 56u, 150u, 72u, 141u, 229u, 146u, 76u, 184u, 66u, 103u, 102u,
72u, 224u, 129u, 129u, 52u, 34u, 68u, 142u, 6u, 24u, 18u, 92u, 35u,
129u, 6u, 4u, 153u, 8u, 224u, 1u, 129u, 52u, 34u, 68u, 134u, 32u,
192u, 198u, 37u, 194u, 19u, 66u, 33u, 132u, 123u, 46u, 132u, 198u,
32u, 38u, 69u, 132u, 146u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 188u, 6u, 4u, 140u, 200u, 238u, 161u, 130u, 101u, 152u, 73u,
29u, 208u, 48u, 36u, 194u, 71u, 114u, 12u, 9u, 130u, 49u, 29u, 188u,
48u, 76u, 211u, 9u, 35u, 183u, 6u, 4u, 153u, 136u, 237u, 161u, 129u,
38u, 18u, 59u, 88u, 96u, 76u, 52u, 72u, 237u, 33u, 129u, 148u, 75u,
211u, 9u, 9u, 134u, 136u, 76u, 17u, 137u, 29u, 156u, 48u, 38u, 50u,
36u, 118u, 96u, 192u, 147u, 9u, 29u, 144u, 48u, 38u, 50u, 36u, 117u,
192u, 193u, 50u, 204u, 36u, 142u, 182u, 24u, 18u, 97u, 35u, 172u,
134u, 4u, 201u, 220u, 142u, 172u, 24u, 38u, 105u, 132u, 145u, 213u,
67u, 2u, 76u, 196u, 117u, 64u, 192u, 147u, 9u, 29u, 72u, 48u, 38u,
96u, 68u, 117u, 0u, 192u, 202u, 37u, 233u, 132u, 132u, 204u, 8u, 38u,
78u, 228u, 142u, 156u, 24u, 19u, 60u, 34u, 58u, 104u, 96u, 73u, 132u,
142u, 150u, 24u, 19u, 60u, 34u, 58u, 56u, 96u, 72u, 204u, 142u, 136u,
24u, 26u, 195u, 84u, 194u, 73u, 29u, 12u, 48u, 38u, 132u, 206u, 145u,
208u, 67u, 3u, 40u, 112u, 19u, 56u, 104u, 152u, 75u, 113u, 9u, 161u,
50u, 68u, 77u, 4u, 38u, 118u, 228u, 142u, 126u, 24u, 19u, 66u, 166u,
200u, 231u, 129u, 129u, 52u, 43u, 32u, 142u, 116u, 24u, 19u, 66u,
166u, 200u, 230u, 193u, 130u, 101u, 152u, 73u, 28u, 212u, 48u, 36u,
194u, 71u, 51u, 12u, 9u, 161u, 160u, 196u, 115u, 0u, 193u, 51u, 76u,
36u, 142u, 94u, 24u, 18u, 102u, 35u, 151u, 6u, 4u, 152u, 72u, 229u,
129u, 129u, 52u, 56u, 92u, 142u, 84u, 24u, 25u, 68u, 189u, 48u, 144u,
154u, 28u, 46u, 19u, 67u, 65u, 137u, 28u, 160u, 48u, 38u, 135u, 206u,
145u, 201u, 195u, 2u, 76u, 36u, 114u, 80u, 192u, 154u, 31u, 58u, 71u,
33u, 12u, 9u, 25u, 145u, 199u, 67u, 3u, 88u, 106u, 152u, 73u, 35u,
142u, 6u, 4u, 209u, 33u, 2u, 56u, 208u, 96u, 101u, 19u, 56u, 104u,
152u, 75u, 241u, 12u, 161u, 52u, 72u, 20u, 77u, 36u, 38u, 135u, 201u,
16u, 154u, 21u, 10u, 72u, 227u, 1u, 129u, 52u, 76u, 12u, 142u, 40u,
24u, 19u, 68u, 196u, 8u, 226u, 65u, 129u, 52u, 76u, 12u, 142u, 32u,
24u, 25u, 68u, 59u, 48u, 144u, 154u, 37u, 176u, 19u, 24u, 98u, 71u,
15u, 12u, 9u, 162u, 184u, 164u, 112u, 224u, 192u, 147u, 9u, 28u, 40u,
48u, 53u, 204u, 36u, 142u, 18u, 24u, 18u, 97u, 35u, 132u, 6u, 6u, 64u,
38u, 96u, 198u, 37u, 194u, 27u, 196u, 196u, 38u, 48u, 236u, 35u, 137u,
100u, 136u, 222u, 89u, 36u, 203u, 132u, 51u, 204u, 19u, 9u, 34u, 61u,
151u, 67u, 96u, 15u, 49u, 153u, 12u, 42u, 72u, 18u, 244u, 102u, 99u,
50u, 26u, 91u, 137u, 18u, 252u, 102u, 37u, 161u, 45u, 203u, 146u,
233u, 36u, 146u, 38u, 128u, 198u, 162u, 95u, 140u, 219u, 137u, 34u,
105u, 12u, 106u, 37u, 248u, 205u, 248u, 146u, 38u, 160u, 198u, 173u,
196u, 144u, 202u, 19u, 69u, 210u, 68u, 212u, 66u, 104u, 172u, 209u,
36u, 112u, 96u, 192u, 198u, 154u, 48u, 142u, 71u, 4u, 12u, 19u, 92u,
134u, 72u, 224u, 65u, 129u, 36u, 50u, 56u, 0u, 96u, 77u, 30u, 67u,
33u, 136u, 48u, 49u, 204u, 33u, 52u, 121u, 12u, 77u, 147u, 8u, 84u,
209u, 204u, 48u, 31u, 138u, 104u, 224u, 248u, 13u, 197u, 52u, 110u,
108u, 9u, 114u, 109u, 41u, 163u, 10u, 230u, 51u, 36u, 128u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 135u, 6u, 8u, 34u, 9u, 19u, 114u, 76u, 34u, 107u, 144u, 200u,
155u, 38u, 16u, 173u, 196u, 7u, 226u, 37u, 248u, 205u, 248u, 144u,
27u, 136u, 151u, 227u, 54u, 226u, 64u, 151u, 38u, 210u, 27u, 196u,
196u, 38u, 48u, 236u, 35u, 137u, 100u, 136u, 222u, 89u, 36u, 203u,
132u, 51u, 204u, 19u, 9u, 34u, 61u, 151u, 67u, 96u, 15u, 49u, 153u,
12u, 42u, 72u, 18u, 244u, 102u, 99u, 50u, 26u, 91u, 137u, 18u, 252u,
102u, 37u, 161u, 45u, 203u, 146u, 233u, 36u, 147u, 25u, 146u, 56u,
88u, 96u, 99u, 152u, 83u, 4u, 178u, 56u, 72u, 96u, 76u, 7u, 8u, 224u,
129u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 129u, 134u, 9u, 190u, 112u, 156u, 73u, 28u, 8u, 48u, 36u,
222u, 71u, 1u, 12u, 9u, 48u, 145u, 192u, 3u, 2u, 78u, 4u, 49u, 6u, 6u,
49u, 56u, 16u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 156u, 134u, 4u, 140u, 200u, 230u, 225u, 130u, 101u, 152u,
73u, 28u, 216u, 48u, 36u, 194u, 71u, 52u, 12u, 9u, 130u, 49u, 28u,
180u, 48u, 36u, 102u, 71u, 44u, 12u, 9u, 46u, 145u, 201u, 195u, 3u,
92u, 186u, 72u, 228u, 193u, 129u, 37u, 210u, 57u, 40u, 96u, 100u, 2u,
93u, 19u, 144u, 156u, 231u, 73u, 214u, 37u, 49u, 153u, 36u, 75u, 241u,
152u, 101u, 9u, 137u, 43u, 116u, 186u, 73u, 35u, 145u, 134u, 4u, 198u,
108u, 142u, 66u, 24u, 18u, 51u, 35u, 143u, 6u, 6u, 49u, 56u, 17u, 55u,
206u, 19u, 137u, 36u, 113u, 176u, 192u, 147u, 161u, 28u, 100u, 48u,
78u, 192u, 77u, 243u, 161u, 19u, 140u, 74u, 72u, 99u, 76u, 173u, 9u,
28u, 92u, 48u, 38u, 51u, 100u, 113u, 80u, 192u, 240u, 37u, 232u, 204u,
134u, 217u, 116u, 38u, 51u, 97u, 49u, 233u, 36u, 142u, 38u, 24u, 19u,
62u, 162u, 56u, 136u, 96u, 72u, 204u, 142u, 30u, 24u, 19u, 62u, 162u,
56u, 104u, 96u, 101u, 18u, 244u, 194u, 68u, 239u, 48u, 144u, 152u,
35u, 18u, 56u, 88u, 96u, 77u, 9u, 211u, 35u, 133u, 6u, 4u, 152u, 72u,
225u, 1u, 129u, 52u, 39u, 76u, 142u, 8u, 24u, 18u, 51u, 35u, 128u,
134u, 6u, 185u, 132u, 145u, 192u, 3u, 2u, 76u, 36u, 49u, 6u, 6u, 57u,
132u, 77u, 147u, 8u, 81u, 47u, 198u, 109u, 196u, 129u, 18u, 205u,
164u, 38u, 123u, 228u, 198u, 100u, 144u,};
static unsigned char uvector__00027[] = {
 0u, 3u, 134u, 6u, 8u, 34u, 9u, 19u, 194u, 76u, 34u, 108u, 152u, 66u,
137u, 126u, 51u, 110u, 36u, 8u, 150u, 109u, 33u, 224u, 75u, 209u,
153u, 13u, 178u, 232u, 156u, 132u, 231u, 58u, 78u, 177u, 41u, 140u,
200u, 151u, 227u, 48u, 202u, 26u, 229u, 210u, 221u, 46u, 146u, 73u,
49u, 153u, 35u, 132u, 134u, 6u, 57u, 133u, 48u, 75u, 35u, 131u, 134u,
4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u,
9u, 0u,};
static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2152[180];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2152 */
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("macroexpand", 11, 11),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("form", 4, 4),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("env/flag", 8, 8),
      SCM_STRING_CONST_INITIALIZER("%do-macroexpand", 15, 15),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libmacbase.scm", 14, 14),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("macroexpand-1", 13, 13),
      SCM_STRING_CONST_INITIALIZER("boolean\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("vm-current-module", 17, 17),
      SCM_STRING_CONST_INITIALIZER("module\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("argument must be a boolean or a module, but got:", 48, 48),
      SCM_STRING_CONST_INITIALIZER("make-cenv", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%internal-macro-expand", 22, 22),
      SCM_STRING_CONST_INITIALIZER("unravel-syntax", 14, 14),
      SCM_STRING_CONST_INITIALIZER("once\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("unwrap-syntax", 13, 13),
      SCM_STRING_CONST_INITIALIZER("to_immutable", 12, 12),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("unwrap-syntax-1", 15, 15),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("wrapped-identifier\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("vector-map", 10, 10),
      SCM_STRING_CONST_INITIALIZER("rec", 3, 3),
      SCM_STRING_CONST_INITIALIZER("eq\077", 3, 3),
      SCM_STRING_CONST_INITIALIZER("make-hash-table", 15, 15),
      SCM_STRING_CONST_INITIALIZER("hash-table-get", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-identifier", 15, 15),
      SCM_STRING_CONST_INITIALIZER("global-identifier=\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("hash-table-put!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("id->sym", 7, 7),
      SCM_STRING_CONST_INITIALIZER("i", 1, 1),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("c", 1, 1),
      SCM_STRING_CONST_INITIALIZER("unused-args", 11, 11),
      SCM_STRING_CONST_INITIALIZER("hash-table-fold", 15, 15),
      SCM_STRING_CONST_INITIALIZER(".", 1, 1),
      SCM_STRING_CONST_INITIALIZER("symbol-append", 13, 13),
      SCM_STRING_CONST_INITIALIZER("id", 2, 2),
      SCM_STRING_CONST_INITIALIZER("macro\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("syntax\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("identifier-macro", 16, 16),
      SCM_STRING_CONST_INITIALIZER("parameterizable", 15, 15),
      SCM_STRING_CONST_INITIALIZER("compile-syntax-rules", 20, 20),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("src", 3, 3),
      SCM_STRING_CONST_INITIALIZER("ellipsis", 8, 8),
      SCM_STRING_CONST_INITIALIZER("literals", 8, 8),
      SCM_STRING_CONST_INITIALIZER("rules", 5, 5),
      SCM_STRING_CONST_INITIALIZER("mod", 3, 3),
      SCM_STRING_CONST_INITIALIZER("env", 3, 3),
      SCM_STRING_CONST_INITIALIZER("macro-transformer", 17, 17),
      SCM_STRING_CONST_INITIALIZER("mac", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<macro>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("macro-name", 10, 10),
      SCM_STRING_CONST_INITIALIZER("identifier-macro\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("%swap-macro-transformer!", 24, 24),
      SCM_STRING_CONST_INITIALIZER("new-transformer&flags", 21, 21),
      SCM_STRING_CONST_INITIALIZER("*trace-macro*", 13, 13),
      SCM_STRING_CONST_INITIALIZER("%macro-traced\077", 14, 14),
      SCM_STRING_CONST_INITIALIZER("regexp\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("symbol->string", 14, 14),
      SCM_STRING_CONST_INITIALIZER("z", 1, 1),
      SCM_STRING_CONST_INITIALIZER("find", 4, 4),
      SCM_STRING_CONST_INITIALIZER("show-macro-trace", 16, 16),
      SCM_STRING_CONST_INITIALIZER("Macro input>>>\012", 15, 15),
      SCM_STRING_CONST_INITIALIZER("current-trace-port", 18, 18),
      SCM_STRING_CONST_INITIALIZER("display", 7, 7),
      SCM_STRING_CONST_INITIALIZER("port", 4, 4),
      SCM_STRING_CONST_INITIALIZER("level", 5, 5),
      SCM_STRING_CONST_INITIALIZER("length", 6, 6),
      SCM_STRING_CONST_INITIALIZER("pprint", 6, 6),
      SCM_STRING_CONST_INITIALIZER("\012Macro output<<<\012", 17, 17),
      SCM_STRING_CONST_INITIALIZER("\012", 1, 1),
      SCM_STRING_CONST_INITIALIZER("flush", 5, 5),
      SCM_STRING_CONST_INITIALIZER("input", 5, 5),
      SCM_STRING_CONST_INITIALIZER("output", 6, 6),
      SCM_STRING_CONST_INITIALIZER("lvar", 4, 4),
      SCM_STRING_CONST_INITIALIZER("$GREF", 5, 5),
      SCM_STRING_CONST_INITIALIZER("$LREF", 5, 5),
      SCM_STRING_CONST_INITIALIZER("$CALL", 5, 5),
      SCM_STRING_CONST_INITIALIZER("$IT", 3, 3),
      SCM_STRING_CONST_INITIALIZER("$IF", 3, 3),
      SCM_STRING_CONST_INITIALIZER("unraveled", 9, 9),
      SCM_STRING_CONST_INITIALIZER("$ASM", 4, 4),
      SCM_STRING_CONST_INITIALIZER("cons", 4, 4),
      SCM_STRING_CONST_INITIALIZER("$CONST", 6, 6),
      SCM_STRING_CONST_INITIALIZER("car", 3, 3),
      SCM_STRING_CONST_INITIALIZER("cdr", 3, 3),
      SCM_STRING_CONST_INITIALIZER("$SEQ", 4, 4),
      SCM_STRING_CONST_INITIALIZER("$LET", 4, 4),
      SCM_STRING_CONST_INITIALIZER("let", 3, 3),
      SCM_STRING_CONST_INITIALIZER("when", 4, 4),
      SCM_STRING_CONST_INITIALIZER("and", 3, 3),
      SCM_STRING_CONST_INITIALIZER("let1", 4, 4),
      SCM_STRING_CONST_INITIALIZER("$LAMBDA", 7, 7),
      SCM_STRING_CONST_INITIALIZER("call-macro-expander", 19, 19),
      SCM_STRING_CONST_INITIALIZER("extended-cons", 13, 13),
      SCM_STRING_CONST_INITIALIZER("extended-pair\077", 14, 14),
      SCM_STRING_CONST_INITIALIZER("original", 8, 8),
      SCM_STRING_CONST_INITIALIZER("pair-attribute-set!", 19, 19),
      SCM_STRING_CONST_INITIALIZER("expr", 4, 4),
      SCM_STRING_CONST_INITIALIZER("cenv", 4, 4),
      SCM_STRING_CONST_INITIALIZER("call-id-macro-expander", 22, 22),
      SCM_STRING_CONST_INITIALIZER("make-syntax", 11, 11),
      SCM_STRING_CONST_INITIALIZER("module", 6, 6),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<symbol>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<module>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("call-syntax-handler", 19, 19),
      SCM_STRING_CONST_INITIALIZER("syn", 3, 3),
      SCM_STRING_CONST_INITIALIZER("program", 7, 7),
      SCM_STRING_CONST_INITIALIZER("syntax-handler", 14, 14),
      SCM_STRING_CONST_INITIALIZER("trace-macro", 11, 11),
      SCM_STRING_CONST_INITIALIZER("G2170", 5, 5),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("procedure\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("every", 5, 5),
      SCM_STRING_CONST_INITIALIZER("Argument(s) of trace-macro should be a boolean, or symbols or regexps, but got:", 79, 79),
      SCM_STRING_CONST_INITIALIZER("list\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("delete-duplicates", 17, 17),
      SCM_STRING_CONST_INITIALIZER("G2168", 5, 5),
      SCM_STRING_CONST_INITIALIZER("objs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("equal\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("match:error", 11, 11),
      SCM_STRING_CONST_INITIALIZER("util.match", 10, 10),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("untrace-macro", 13, 13),
      SCM_STRING_CONST_INITIALIZER("member", 6, 6),
      SCM_STRING_CONST_INITIALIZER("G2178", 5, 5),
      SCM_STRING_CONST_INITIALIZER("remove", 6, 6),
      SCM_STRING_CONST_INITIALIZER("G2149", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2150", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2148", 8, 8),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("G2158", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2159", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2157", 8, 8),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("let*", 4, 4),
      SCM_STRING_CONST_INITIALIZER("vector\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("pair\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("nam", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sym", 3, 3),
      SCM_STRING_CONST_INITIALIZER("tab", 3, 3),
      SCM_STRING_CONST_INITIALIZER("num", 3, 3),
      SCM_STRING_CONST_INITIALIZER("$", 1, 1),
      SCM_STRING_CONST_INITIALIZER("rlet1", 5, 5),
      SCM_STRING_CONST_INITIALIZER("macname", 7, 7),
      SCM_STRING_CONST_INITIALIZER("symbol\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("^z", 2, 2),
      SCM_STRING_CONST_INITIALIZER("and-let1", 8, 8),
      SCM_STRING_CONST_INITIALIZER("out", 3, 3),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("append", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ms", 2, 2),
      SCM_STRING_CONST_INITIALIZER("set!", 4, 4),
      SCM_STRING_CONST_INITIALIZER("^x", 2, 2),
      SCM_STRING_CONST_INITIALIZER("G2164", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2163", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2162", 5, 5),
      SCM_STRING_CONST_INITIALIZER("match", 5, 5),
      SCM_STRING_CONST_INITIALIZER("...", 3, 3),
      SCM_STRING_CONST_INITIALIZER("G2177", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2179", 5, 5),
      SCM_STRING_CONST_INITIALIZER("cute", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("letrec", 6, 6),
      SCM_STRING_CONST_INITIALIZER("G2175", 5, 5),
  },
};
static struct scm__rcRec {
  ScmUVector d2156[27];
  ScmCompiledCode d2155[27];
  ScmWord d2154[1101];
  ScmPair d2153[334] SCM_ALIGN_PAIR;
  ScmObj d2151[671];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2156 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 135, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 135, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 202, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 83, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 193, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 64, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 346, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 197, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 176, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 27, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 114, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 132, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 79, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 308, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 686, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 117, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 429, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 61, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 39, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 198, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 536, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 113, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 35, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 227, uvector__00026, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 79, uvector__00027, 0, NULL),
  },
  {   /* ScmCompiledCode d2155 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* macroexpand */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[0])), 35,
            17, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[15]),
            SCM_OBJ(&scm__rc.d2155[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[35])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* macroexpand-1 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[50])), 36,
            17, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[27]),
            SCM_OBJ(&scm__rc.d2155[3]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[86])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %do-macroexpand */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[101])), 53,
            24, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[35]),
            SCM_OBJ(&scm__rc.d2155[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[154])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* rec */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[169])), 39,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[60]),
            SCM_OBJ(&scm__rc.d2155[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[208])), 12,
            11, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[75]),
            SCM_OBJ(&scm__rc.d2155[8]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* id->sym */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[220])), 67,
            30, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[83]),
            SCM_OBJ(&scm__rc.d2155[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* unravel-syntax */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[287])), 17,
            16, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[88]),
            SCM_OBJ(&scm__rc.d2155[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[304])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[319])), 13,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[332])), 25,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[162]),
            SCM_OBJ(&scm__rc.d2155[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %macro-traced? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[357])), 25,
            18, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[167]),
            SCM_OBJ(&scm__rc.d2155[14]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[382])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* show-macro-trace */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[397])), 96,
            24, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[172]),
            SCM_FALSE, SCM_OBJ(&scm__rc.d2151[225])),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-macro-expander */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[493])), 181,
            32, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[267]),
            SCM_OBJ(&scm__rc.d2155[17]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[674])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-id-macro-expander */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[689])), 120,
            28, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[274]),
            SCM_OBJ(&scm__rc.d2155[19]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[809])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (trace-macro #:G2170) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[824])), 7,
            4, 1, 0, SCM_OBJ(&scm__rc.d2153[306]), SCM_NIL, SCM_OBJ(&scm__rc.d2153[312]),
            SCM_OBJ(&scm__rc.d2155[23]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #:G2168 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[831])), 50,
            15, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[318]),
            SCM_OBJ(&scm__rc.d2155[22]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* trace-macro */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[881])), 123,
            16, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[323]),
            SCM_OBJ(&scm__rc.d2155[23]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[1004])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[1021])), 5,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[328]),
            SCM_OBJ(&scm__rc.d2155[25]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* untrace-macro */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[1026])), 60,
            12, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[333]),
            SCM_OBJ(&scm__rc.d2155[26]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[1086])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2154 */
    /* macroexpand */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 6),
    0x00000004    /*   3 (CONSTF) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[2])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[10])) /* (lambda (form :optional (env/flag #f)) (%do-macroexpand form env/flag #f)) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000004d    /*  29 (LREF11-PUSH) */,
    0x00000049    /*  30 (LREF1-PUSH) */,
    0x00000009    /*  31 (CONSTF-PUSH) */,
    0x00003060    /*  32 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %do-macroexpand */,
    0x00000014    /*  34 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[35]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* macroexpand */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[35]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[0])) /* #<compiled-code macroexpand@0x727e9f635e40> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* macroexpand */,
    0x00000014    /*  14 (RET) */,
    /* macroexpand-1 */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[50]) + 6),
    0x00000004    /*   3 (CONSTF) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[50]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[50]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[50]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[50]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[50]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[50]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[2])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[22])) /* (lambda (form :optional (env/flag #f)) (%do-macroexpand form env/flag #t)) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000004d    /*  29 (LREF11-PUSH) */,
    0x00000049    /*  30 (LREF1-PUSH) */,
    0x00000006    /*  31 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00003060    /*  33 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %do-macroexpand */,
    0x00000014    /*  35 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[86]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* macroexpand-1 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[86]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[2])) /* #<compiled-code macroexpand-1@0x727e9f3c3c60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* macroexpand-1 */,
    0x00000014    /*  14 (RET) */,
    /* %do-macroexpand */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* boolean? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 13),
    0x0000000e    /*   7 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 30),
    0x0000005f    /*   9 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* vm-current-module */,
    0x00000013    /*  11 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 30),
    0x0000100e    /*  13 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 18),
    0x00000049    /*  15 (LREF1-PUSH) */,
    0x0000105f    /*  16 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* module? */,
    0x0000001e    /*  18 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 23),
    0x0000003e    /*  20 (LREF1) */,
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 30),
    0x0000200e    /*  23 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 30),
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[17])) /* "argument must be a boolean or a module, but got:" */,
    0x00000049    /*  27 (LREF1-PUSH) */,
    0x0000205f    /*  28 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00001018    /*  30 (PUSH-LOCAL-ENV 1) */,
    0x0000300e    /*  31 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 43),
    0x0000004e    /*  33 (LREF12-PUSH) */,
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 39),
    0x00000048    /*  36 (LREF0-PUSH) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-cenv */,
    0x0000000d    /*  39 (PUSH) */,
    0x0000004c    /*  40 (LREF10-PUSH) */,
    0x0000305f    /*  41 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %internal-macro-expand */,
    0x00001018    /*  43 (PUSH-LOCAL-ENV 1) */,
    0x00000045    /*  44 (LREF21) */,
    0x0000002e    /*  45 (BNEQC) */,
    SCM_WORD(SCM_FALSE) /* #f */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]) + 52)  /*     52 */,
    0x00000048    /*  48 (LREF0-PUSH) */,
    0x00001060    /*  49 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unravel-syntax */,
    0x00000014    /*  51 (RET) */,
    0x00000053    /*  52 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[154]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %do-macroexpand */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[154]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[4])) /* #<compiled-code %do-macroexpand@0x727e9fff1540> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %do-macroexpand */,
    0x00000014    /*  14 (RET) */,
    /* (unravel-syntax rec) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[169]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* wrapped-identifier? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[169]) + 11),
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x00000042    /*   8 (LREF11) */,
    0x00001012    /*   9 (TAIL-CALL 1) */,
    0x00000014    /*  10 (RET) */,
    0x0000003d    /*  11 (LREF0) */,
    0x00000098    /*  12 (PAIRP) */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[169]) + 29),
    0x0000100e    /*  15 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[169]) + 21),
    0x0000006a    /*  17 (LREF0-CAR) */,
    0x0000000d    /*  18 (PUSH) */,
    0x00000041    /*  19 (LREF10) */,
    0x0000101c    /*  20 (LOCAL-ENV-CALL 1) */,
    0x0000100f    /*  21 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[169]) + 27),
    0x00000076    /*  23 (LREF0-CDR) */,
    0x0000000d    /*  24 (PUSH) */,
    0x00000041    /*  25 (LREF10) */,
    0x0000101c    /*  26 (LOCAL-ENV-CALL 1) */,
    0x00000066    /*  27 (CONS) */,
    0x00000014    /*  28 (RET) */,
    0x0000003d    /*  29 (LREF0) */,
    0x0000009d    /*  30 (VECTORP) */,
    0x0000001e    /*  31 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[169]) + 38),
    0x0000004c    /*  33 (LREF10-PUSH) */,
    0x00000048    /*  34 (LREF0-PUSH) */,
    0x00002060    /*  35 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* vector-map */,
    0x00000014    /*  37 (RET) */,
    0x00000053    /*  38 (LREF0-RET) */,
    /* (unravel-syntax id->sym #f) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[208]) + 5),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000041    /*   6 (LREF10) */,
    0x00000020    /*   7 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[208]) + 11),
    0x000010bd    /*   9 (LREF0-NUMADDI 1) */,
    0x00000014    /*  10 (RET) */,
    0x00000053    /*  11 (LREF0-RET) */,
    /* (unravel-syntax id->sym) */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 7),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x00000009    /*   4 (CONSTF-PUSH) */,
    0x0000305f    /*   5 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-get */,
    0x00000031    /*   7 (RT) */,
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 13),
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x0000105f    /*  11 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax */,
    0x00001018    /*  13 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  14 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 30),
    0x0000004c    /*  16 (LREF10-PUSH) */,
    0x0000300e    /*  17 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 28),
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x0000000e    /*  20 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 24),
    0x0000005f    /*  22 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* vm-current-module */,
    0x0000000d    /*  24 (PUSH) */,
    0x00000008    /*  25 (CONSTN-PUSH) */,
    0x0000305f    /*  26 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make-identifier */,
    0x00002062    /*  28 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* global-identifier=? */,
    0x0000001e    /*  30 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 40),
    0x0000300e    /*  32 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 39),
    0x0000004f    /*  34 (LREF20-PUSH) */,
    0x0000004c    /*  35 (LREF10-PUSH) */,
    0x00000048    /*  36 (LREF0-PUSH) */,
    0x0000305f    /*  37 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000053    /*  39 (LREF0-RET) */,
    0x0000300e    /*  40 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 49),
    0x0000004f    /*  42 (LREF20-PUSH) */,
    0x00000016    /*  43 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[7])) /* #<compiled-code (unravel-syntax id->sym #f)@0x727e9f7e27e0> */,
    0x0000000d    /*  45 (PUSH) */,
    0x00000007    /*  46 (CONSTI-PUSH 0) */,
    0x0000305f    /*  47 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-fold */,
    0x00001018    /*  49 (PUSH-LOCAL-ENV 1) */,
    0x0000300e    /*  50 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 58),
    0x0000004c    /*  52 (LREF10-PUSH) */,
    0x00000006    /*  53 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[46])) /* "." */,
    0x00000048    /*  55 (LREF0-PUSH) */,
    0x0000305f    /*  56 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol-append */,
    0x00001018    /*  58 (PUSH-LOCAL-ENV 1) */,
    0x0000300e    /*  59 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]) + 66),
    0x00004047    /*  61 (LREF-PUSH 4 0) */,
    0x00000051    /*  62 (LREF30-PUSH) */,
    0x00000048    /*  63 (LREF0-PUSH) */,
    0x0000305f    /*  64 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000053    /*  66 (LREF0-RET) */,
    /* unravel-syntax */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[62])) /* (#<undef> #<compiled-code (unravel-syntax rec)@0x727e9f7e28a0>) */,
    0x0000100e    /*   2 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[287]) + 8),
    0x00000006    /*   4 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* eq? */,
    0x0000105f    /*   6 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00001018    /*   8 (PUSH-LOCAL-ENV 1) */,
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[8])) /* #<compiled-code (unravel-syntax id->sym)@0x727e9f7e2840> */,
    0x0000001a    /*  11 (POP-LOCAL-ENV) */,
    0x000010e8    /*  12 (ENV-SET 1) */,
    0x0000004c    /*  13 (LREF10-PUSH) */,
    0x0000003d    /*  14 (LREF0) */,
    0x0000101d    /*  15 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  16 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* unravel-syntax */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[9])) /* #<compiled-code unravel-syntax@0x727e9f7e2900> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* unravel-syntax */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[319]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[319]) + 10),
    0x0000000b    /*   9 (CONSTF-RET) */,
    0x00000015    /*  10 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00000014    /*  12 (RET) */,
    /* (%macro-traced? #f) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009c    /*   1 (SYMBOLP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[332]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00000041    /*   5 (LREF10) */,
    0x0000008f    /*   6 (EQ) */,
    0x00000014    /*   7 (RET) */,
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[332]) + 13),
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x0000105f    /*  11 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp? */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[332]) + 24),
    0x0000100e    /*  15 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[332]) + 20),
    0x0000004c    /*  17 (LREF10-PUSH) */,
    0x0000105f    /*  18 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol->string */,
    0x0000000d    /*  20 (PUSH) */,
    0x0000003d    /*  21 (LREF0) */,
    0x00001012    /*  22 (TAIL-CALL 1) */,
    0x00000014    /*  23 (RET) */,
    0x0000000b    /*  24 (CONSTF-RET) */,
    /* %macro-traced? */
    0x0000005d    /*   0 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x0000002e    /*   2 (BNEQC) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[357]) + 6)  /*      6 */,
    0x00000014    /*   5 (RET) */,
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[357]) + 15),
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[357]) + 13),
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x0000105f    /*  11 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* macro-name */,
    0x00001062    /*  13 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax */,
    0x00001018    /*  15 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000030    /*  17 (RF) */,
    0x00000016    /*  18 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[12])) /* #<compiled-code (%macro-traced? #f)@0x727e9ec460c0> */,
    0x00000061    /*  20 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00002063    /*  22 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* find */,
    0x00000014    /*  24 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[382]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %macro-traced? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[382]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[13])) /* #<compiled-code %macro-traced?@0x727e9ec46120> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %macro-traced? */,
    0x00000014    /*  14 (RET) */,
    /* show-macro-trace */
    0x0000005d    /*   0 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 95),
    0x0000100e    /*   4 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 9),
    0x0000004a    /*   6 (LREF2-PUSH) */,
    0x0000105f    /*   7 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %macro-traced? */,
    0x0000001e    /*   9 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 94),
    0x0000100e    /*  11 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 18),
    0x00000049    /*  13 (LREF1-PUSH) */,
    0x0000003d    /*  14 (LREF0) */,
    0x00000067    /*  15 (CONS-PUSH) */,
    0x0000105f    /*  16 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unravel-syntax */,
    0x00001018    /*  18 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  19 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 29),
    0x00000006    /*  21 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[76])) /* "Macro input>>>\n" */,
    0x0000000e    /*  23 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 27),
    0x0000005f    /*  25 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00002062    /*  27 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000700e    /*  29 (PRE-CALL 7) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 48),
    0x0000006a    /*  31 (LREF0-CAR) */,
    0x0000000d    /*  32 (PUSH) */,
    0x00000006    /*  33 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :port */,
    0x0000000e    /*  35 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 39),
    0x0000005f    /*  37 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x0000000d    /*  39 (PUSH) */,
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    0x00000009    /*  42 (CONSTF-PUSH) */,
    0x00000006    /*  43 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    0x00000009    /*  45 (CONSTF-PUSH) */,
    0x0000705f    /*  46 (GREF-CALL 7) */,
    SCM_WORD(SCM_UNDEFINED) /* pprint */,
    0x0000200e    /*  48 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 58),
    0x00000006    /*  50 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[83])) /* "\nMacro output<<<\n" */,
    0x0000000e    /*  52 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 56),
    0x0000005f    /*  54 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00002062    /*  56 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000700e    /*  58 (PRE-CALL 7) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 77),
    0x00000076    /*  60 (LREF0-CDR) */,
    0x0000000d    /*  61 (PUSH) */,
    0x00000006    /*  62 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :port */,
    0x0000000e    /*  64 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 68),
    0x0000005f    /*  66 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x0000000d    /*  68 (PUSH) */,
    0x00000006    /*  69 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    0x00000009    /*  71 (CONSTF-PUSH) */,
    0x00000006    /*  72 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    0x00000009    /*  74 (CONSTF-PUSH) */,
    0x0000705f    /*  75 (GREF-CALL 7) */,
    SCM_WORD(SCM_UNDEFINED) /* pprint */,
    0x0000200e    /*  77 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 87),
    0x00000006    /*  79 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[84])) /* "\n" */,
    0x0000000e    /*  81 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 85),
    0x0000005f    /*  83 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00002062    /*  85 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000000e    /*  87 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]) + 91),
    0x0000005f    /*  89 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00001063    /*  91 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* flush */,
    0x00000014    /*  93 (RET) */,
    0x0000000c    /*  94 (CONSTU-RET) */,
    0x0000000c    /*  95 (CONSTU-RET) */,
    /* call-macro-expander */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 5),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* identifier-macro? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 26),
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 36),
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 20),
    0x0000006b    /*  11 (LREF1-CAR) */,
    0x0000000d    /*  12 (PUSH) */,
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x0000100e    /*  14 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 19),
    0x0000004a    /*  16 (LREF2-PUSH) */,
    0x0000105f    /*  17 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* macro-transformer */,
    0x00002011    /*  19 (CALL 2) */,
    0x0000000d    /*  20 (PUSH) */,
    0x00000077    /*  21 (LREF1-CDR) */,
    0x00002062    /*  22 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* extended-cons */,
    0x00000013    /*  24 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 36),
    0x0000200e    /*  26 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 36),
    0x00000049    /*  28 (LREF1-PUSH) */,
    0x00000048    /*  29 (LREF0-PUSH) */,
    0x0000100e    /*  30 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 35),
    0x0000004a    /*  32 (LREF2-PUSH) */,
    0x0000105f    /*  33 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* macro-transformer */,
    0x00002011    /*  35 (CALL 2) */,
    0x00001018    /*  36 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  37 (LREF0) */,
    0x00000098    /*  38 (PAIRP) */,
    0x0000001e    /*  39 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 78),
    0x0000004d    /*  41 (LREF11-PUSH) */,
    0x0000003d    /*  42 (LREF0) */,
    0x00000020    /*  43 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 48),
    0x0000003d    /*  45 (LREF0) */,
    0x00000013    /*  46 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 79),
    0x0000100e    /*  48 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 53),
    0x00000048    /*  50 (LREF0-PUSH) */,
    0x0000105f    /*  51 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* extended-pair? */,
    0x0000001e    /*  53 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 58),
    0x0000003d    /*  55 (LREF0) */,
    0x00000013    /*  56 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 65),
    0x0000200e    /*  58 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 65),
    0x0000006a    /*  60 (LREF0-CAR) */,
    0x0000000d    /*  61 (PUSH) */,
    0x00000076    /*  62 (LREF0-CDR) */,
    0x00002062    /*  63 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* extended-cons */,
    0x00001018    /*  65 (PUSH-LOCAL-ENV 1) */,
    0x0000300e    /*  66 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 74),
    0x00000048    /*  68 (LREF0-PUSH) */,
    0x00000006    /*  69 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* original */,
    0x00000050    /*  71 (LREF21-PUSH) */,
    0x0000305f    /*  72 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* pair-attribute-set! */,
    0x0000003d    /*  74 (LREF0) */,
    0x0000001a    /*  75 (POP-LOCAL-ENV) */,
    0x00000013    /*  76 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 79),
    0x0000003d    /*  78 (LREF0) */,
    0x00001018    /*  79 (PUSH-LOCAL-ENV 1) */,
    0x0000005d    /*  80 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x0000001e    /*  82 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 180),
    0x0000100e    /*  84 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 89),
    0x00802047    /*  86 (LREF-PUSH 2 2) */,
    0x0000105f    /*  87 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %macro-traced? */,
    0x0000001e    /*  89 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 180),
    0x0000100e    /*  91 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 98),
    0x00000050    /*  93 (LREF21-PUSH) */,
    0x0000003d    /*  94 (LREF0) */,
    0x00000067    /*  95 (CONS-PUSH) */,
    0x0000105f    /*  96 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unravel-syntax */,
    0x00001018    /*  98 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  99 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 109),
    0x00000006    /* 101 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[76])) /* "Macro input>>>\n" */,
    0x0000000e    /* 103 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 107),
    0x0000005f    /* 105 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00002062    /* 107 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000700e    /* 109 (PRE-CALL 7) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 128),
    0x0000006a    /* 111 (LREF0-CAR) */,
    0x0000000d    /* 112 (PUSH) */,
    0x00000006    /* 113 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :port */,
    0x0000000e    /* 115 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 119),
    0x0000005f    /* 117 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x0000000d    /* 119 (PUSH) */,
    0x00000006    /* 120 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    0x00000009    /* 122 (CONSTF-PUSH) */,
    0x00000006    /* 123 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    0x00000009    /* 125 (CONSTF-PUSH) */,
    0x0000705f    /* 126 (GREF-CALL 7) */,
    SCM_WORD(SCM_UNDEFINED) /* pprint */,
    0x0000200e    /* 128 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 138),
    0x00000006    /* 130 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[83])) /* "\nMacro output<<<\n" */,
    0x0000000e    /* 132 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 136),
    0x0000005f    /* 134 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00002062    /* 136 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000700e    /* 138 (PRE-CALL 7) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 157),
    0x00000076    /* 140 (LREF0-CDR) */,
    0x0000000d    /* 141 (PUSH) */,
    0x00000006    /* 142 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :port */,
    0x0000000e    /* 144 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 148),
    0x0000005f    /* 146 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x0000000d    /* 148 (PUSH) */,
    0x00000006    /* 149 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    0x00000009    /* 151 (CONSTF-PUSH) */,
    0x00000006    /* 152 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    0x00000009    /* 154 (CONSTF-PUSH) */,
    0x0000705f    /* 155 (GREF-CALL 7) */,
    SCM_WORD(SCM_UNDEFINED) /* pprint */,
    0x0000200e    /* 157 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 167),
    0x00000006    /* 159 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[84])) /* "\n" */,
    0x0000000e    /* 161 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 165),
    0x0000005f    /* 163 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00002062    /* 165 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000100e    /* 167 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 175),
    0x0000000e    /* 169 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 173),
    0x0000005f    /* 171 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00001062    /* 173 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* flush */,
    0x0000001a    /* 175 (POP-LOCAL-ENV) */,
    0x00000013    /* 176 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 180),
    0x00000013    /* 178 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]) + 180),
    0x00000053    /* 180 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[674]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-macro-expander */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[674]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[16])) /* #<compiled-code call-macro-expander@0x727ea2a7e960> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-macro-expander */,
    0x00000014    /*  14 (RET) */,
    /* call-id-macro-expander */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 5),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* identifier-macro? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 119),
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 17),
    0x00000049    /*   9 (LREF1-PUSH) */,
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x0000100e    /*  11 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 16),
    0x0000004a    /*  13 (LREF2-PUSH) */,
    0x0000105f    /*  14 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* macro-transformer */,
    0x00002011    /*  16 (CALL 2) */,
    0x00001018    /*  17 (PUSH-LOCAL-ENV 1) */,
    0x0000005d    /*  18 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x0000001e    /*  20 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 118),
    0x0000100e    /*  22 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 27),
    0x0000004e    /*  24 (LREF12-PUSH) */,
    0x0000105f    /*  25 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %macro-traced? */,
    0x0000001e    /*  27 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 118),
    0x0000100e    /*  29 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 36),
    0x0000004d    /*  31 (LREF11-PUSH) */,
    0x0000003d    /*  32 (LREF0) */,
    0x00000067    /*  33 (CONS-PUSH) */,
    0x0000105f    /*  34 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unravel-syntax */,
    0x00001018    /*  36 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  37 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 47),
    0x00000006    /*  39 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[76])) /* "Macro input>>>\n" */,
    0x0000000e    /*  41 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 45),
    0x0000005f    /*  43 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00002062    /*  45 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000700e    /*  47 (PRE-CALL 7) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 66),
    0x0000006a    /*  49 (LREF0-CAR) */,
    0x0000000d    /*  50 (PUSH) */,
    0x00000006    /*  51 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :port */,
    0x0000000e    /*  53 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 57),
    0x0000005f    /*  55 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x0000000d    /*  57 (PUSH) */,
    0x00000006    /*  58 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    0x00000009    /*  60 (CONSTF-PUSH) */,
    0x00000006    /*  61 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    0x00000009    /*  63 (CONSTF-PUSH) */,
    0x0000705f    /*  64 (GREF-CALL 7) */,
    SCM_WORD(SCM_UNDEFINED) /* pprint */,
    0x0000200e    /*  66 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 76),
    0x00000006    /*  68 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[83])) /* "\nMacro output<<<\n" */,
    0x0000000e    /*  70 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 74),
    0x0000005f    /*  72 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00002062    /*  74 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000700e    /*  76 (PRE-CALL 7) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 95),
    0x00000076    /*  78 (LREF0-CDR) */,
    0x0000000d    /*  79 (PUSH) */,
    0x00000006    /*  80 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :port */,
    0x0000000e    /*  82 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 86),
    0x0000005f    /*  84 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x0000000d    /*  86 (PUSH) */,
    0x00000006    /*  87 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    0x00000009    /*  89 (CONSTF-PUSH) */,
    0x00000006    /*  90 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    0x00000009    /*  92 (CONSTF-PUSH) */,
    0x0000705f    /*  93 (GREF-CALL 7) */,
    SCM_WORD(SCM_UNDEFINED) /* pprint */,
    0x0000200e    /*  95 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 105),
    0x00000006    /*  97 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[84])) /* "\n" */,
    0x0000000e    /*  99 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 103),
    0x0000005f    /* 101 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00002062    /* 103 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000100e    /* 105 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 113),
    0x0000000e    /* 107 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 111),
    0x0000005f    /* 109 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-trace-port */,
    0x00001062    /* 111 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* flush */,
    0x0000001a    /* 113 (POP-LOCAL-ENV) */,
    0x00000013    /* 114 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 118),
    0x00000013    /* 116 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]) + 118),
    0x00000053    /* 118 (LREF0-RET) */,
    0x00000055    /* 119 (LREF2-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[809]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-id-macro-expander */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[809]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[18])) /* #<compiled-code call-id-macro-expander@0x727ea072bae0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-id-macro-expander */,
    0x00000014    /*  14 (RET) */,
    /* (trace-macro #:G2170) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009c    /*   1 (SYMBOLP) */,
    0x00000031    /*   2 (RT) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x00001060    /*   4 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp? */,
    0x00000014    /*   6 (RET) */,
    /* (trace-macro #:G2168) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 6),
    0x0000004f    /*   2 (LREF20-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* every */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 10),
    0x00000013    /*   8 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 17),
    0x0000200e    /*  10 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 17),
    0x00000006    /*  12 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2152[129])) /* "Argument(s) of trace-macro should be a boolean, or symbols or regexps, but got:" */,
    0x0000004c    /*  14 (LREF10-PUSH) */,
    0x0000205f    /*  15 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000005d    /*  17 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x0000001e    /*  19 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 36),
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 27),
    0x0000005e    /*  23 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x0000105f    /*  25 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x0000001e    /*  27 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 33),
    0x0000005d    /*  29 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00000013    /*  31 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 37),
    0x00000004    /*  33 (CONSTF) */,
    0x00000013    /*  34 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 37),
    0x00000003    /*  36 (CONSTN) */,
    0x00001018    /*  37 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  38 (LREF0) */,
    0x00000030    /*  39 (RF) */,
    0x0000100e    /*  40 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]) + 47),
    0x0000004c    /*  42 (LREF10-PUSH) */,
    0x0000003d    /*  43 (LREF0) */,
    0x00002091    /*  44 (APPEND 2) */,
    0x00001062    /*  45 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* delete-duplicates */,
    0x0000003b    /*  47 (GSET) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00000014    /*  49 (RET) */,
    /* trace-macro */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 6),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* pprint */,
    0x0000105f    /*   4 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* procedure? */,
    0x00000016    /*   6 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[21])) /* #<compiled-code (trace-macro #:G2168)@0x727e9f5b4a80> */,
    0x00001018    /*   8 (PUSH-LOCAL-ENV 1) */,
    0x00000041    /*   9 (LREF10) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 14),
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x00000041    /*  14 (LREF10) */,
    0x00000098    /*  15 (PAIRP) */,
    0x0000001e    /*  16 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 100),
    0x0000200e    /*  18 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 26),
    0x0000006e    /*  20 (LREF10-CAR) */,
    0x0000000d    /*  21 (PUSH) */,
    0x00000006    /*  22 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000205f    /*  24 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  26 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 58),
    0x0000007a    /*  28 (LREF10-CDR) */,
    0x00000022    /*  29 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 37),
    0x00000001    /*  31 (CONST) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000003b    /*  33 (GSET) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00000013    /*  35 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000100e    /*  37 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 42),
    0x0000004c    /*  39 (LREF10-PUSH) */,
    0x0000105f    /*  40 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x0000001e    /*  42 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 51),
    0x0000100e    /*  44 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000004c    /*  46 (LREF10-PUSH) */,
    0x0000003d    /*  47 (LREF0) */,
    0x0000101c    /*  48 (LOCAL-ENV-CALL 1) */,
    0x00000013    /*  49 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000100e    /*  51 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000004c    /*  53 (LREF10-PUSH) */,
    0x0000105f    /*  54 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* match:error */,
    0x00000013    /*  56 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000200e    /*  58 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 65),
    0x0000006e    /*  60 (LREF10-CAR) */,
    0x0000000d    /*  61 (PUSH) */,
    0x00000009    /*  62 (CONSTF-PUSH) */,
    0x0000205f    /*  63 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  65 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 75),
    0x0000007a    /*  67 (LREF10-CDR) */,
    0x00000022    /*  68 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 75),
    0x00000004    /*  70 (CONSTF) */,
    0x0000003b    /*  71 (GSET) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00000013    /*  73 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000100e    /*  75 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 80),
    0x0000004c    /*  77 (LREF10-PUSH) */,
    0x0000105f    /*  78 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x0000001e    /*  80 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 89),
    0x0000100e    /*  82 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000004c    /*  84 (LREF10-PUSH) */,
    0x0000003d    /*  85 (LREF0) */,
    0x0000101c    /*  86 (LOCAL-ENV-CALL 1) */,
    0x00000013    /*  87 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000100e    /*  89 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000004c    /*  91 (LREF10-PUSH) */,
    0x0000105f    /*  92 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* match:error */,
    0x00000013    /*  94 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x00000013    /*  96 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 75),
    0x00000013    /*  98 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000100e    /* 100 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 105),
    0x0000004c    /* 102 (LREF10-PUSH) */,
    0x0000105f    /* 103 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x0000001e    /* 105 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 114),
    0x0000100e    /* 107 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000004c    /* 109 (LREF10-PUSH) */,
    0x0000003d    /* 110 (LREF0) */,
    0x0000101c    /* 111 (LOCAL-ENV-CALL 1) */,
    0x00000013    /* 112 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000100e    /* 114 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]) + 119),
    0x0000004c    /* 116 (LREF10-PUSH) */,
    0x0000105f    /* 117 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* match:error */,
    0x0000001a    /* 119 (POP-LOCAL-ENV) */,
    0x0000005d    /* 120 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00000014    /* 122 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[313])) /* (#<compiled-code (trace-macro #:G2170)@0x727e9f5b4c00>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1004]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* trace-macro */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1004]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[22])) /* #<compiled-code trace-macro@0x727e9f5b4b40> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* trace-macro */,
    0x00000014    /*  16 (RET) */,
    /* (untrace-macro #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000004f    /*   1 (LREF20-PUSH) */,
    0x00000041    /*   2 (LREF10) */,
    0x00002012    /*   3 (TAIL-CALL 2) */,
    0x00000014    /*   4 (RET) */,
    /* untrace-macro */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 8),
    0x00000004    /*   3 (CONSTF) */,
    0x0000003b    /*   4 (GSET) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00000013    /*   6 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 57),
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 13),
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x0000105f    /*  11 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 52),
    0x0000100e    /*  15 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 21),
    0x0000005e    /*  17 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x0000105f    /*  19 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x0000001e    /*  21 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 57),
    0x0000200e    /*  23 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 37),
    0x00001019    /*  25 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[324])) /* (#<undef>) */,
    0x0000005d    /*  27 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* member */,
    0x000000e8    /*  29 (ENV-SET 0) */,
    0x00000016    /*  30 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[24])) /* #<compiled-code (untrace-macro #f)@0x727e9f7e20c0> */,
    0x0000001a    /*  32 (POP-LOCAL-ENV) */,
    0x00000061    /*  33 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00002062    /*  35 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* remove */,
    0x00001018    /*  37 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  38 (LREF0) */,
    0x00000022    /*  39 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 44),
    0x00000004    /*  41 (CONSTF) */,
    0x00000013    /*  42 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 45),
    0x0000003d    /*  44 (LREF0) */,
    0x0000003b    /*  45 (GSET) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x0000001a    /*  47 (POP-LOCAL-ENV) */,
    0x00000013    /*  48 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 57),
    0x00000013    /*  50 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 57),
    0x0000100e    /*  52 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]) + 57),
    0x00000048    /*  54 (LREF0-PUSH) */,
    0x0000105f    /*  55 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* match:error */,
    0x0000005d    /*  57 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *trace-macro* */,
    0x00000014    /*  59 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1086]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* untrace-macro */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[1086]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[25])) /* #<compiled-code untrace-macro@0x727e9f7e2120> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* untrace-macro */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2153 */
       { SCM_NIL, SCM_NIL },
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[1])},
       { SCM_OBJ(&scm__rc.d2153[2]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[4])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[6])},
       { SCM_OBJ(&scm__rc.d2153[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[5]), SCM_OBJ(&scm__rc.d2153[8])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[9])},
       { SCM_MAKE_INT(55U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[11])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[12])},
       { SCM_OBJ(&scm__rc.d2153[13]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_TRUE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[16])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[18])},
       { SCM_OBJ(&scm__rc.d2153[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[5]), SCM_OBJ(&scm__rc.d2153[20])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[21])},
       { SCM_MAKE_INT(58U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[23])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[24])},
       { SCM_OBJ(&scm__rc.d2153[25]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[28])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[29])},
       { SCM_MAKE_INT(61U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[31])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[32])},
       { SCM_OBJ(&scm__rc.d2153[33]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[36])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[37])},
       { SCM_MAKE_INT(75U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[39])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[40])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[43])},
       { SCM_OBJ(&scm__rc.d2153[44]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[41]), SCM_OBJ(&scm__rc.d2153[45])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(80U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[48])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[49])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[52])},
       { SCM_OBJ(&scm__rc.d2153[53]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[50]), SCM_OBJ(&scm__rc.d2153[54])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[56])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[57]), SCM_OBJ(&scm__rc.d2153[58])},
       { SCM_OBJ(&scm__rc.d2153[59]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[6]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[61])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[63])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[65])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[66])},
       { SCM_MAKE_INT(100U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[68])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[69])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[71])},
       { SCM_OBJ(&scm__rc.d2153[72]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[70]), SCM_OBJ(&scm__rc.d2153[73])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[76])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(92U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[79])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[80])},
       { SCM_OBJ(&scm__rc.d2153[81]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(89U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[84])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[85])},
       { SCM_OBJ(&scm__rc.d2153[86]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(119U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[89])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[90])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[92])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[93])},
       { SCM_OBJ(&scm__rc.d2153[94]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[91]), SCM_OBJ(&scm__rc.d2153[95])},
       { SCM_MAKE_INT(120U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[97])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[98])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[100])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[101])},
       { SCM_OBJ(&scm__rc.d2153[102]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[99]), SCM_OBJ(&scm__rc.d2153[103])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[105])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[106])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[107])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[108])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[109])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[110])},
       { SCM_MAKE_INT(155U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[112])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[113])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[115])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[116])},
       { SCM_OBJ(&scm__rc.d2153[117]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[114]), SCM_OBJ(&scm__rc.d2153[118])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(158U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[121])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[122])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[124])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[125])},
       { SCM_OBJ(&scm__rc.d2153[126]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[123]), SCM_OBJ(&scm__rc.d2153[127])},
       { SCM_MAKE_INT(159U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[129])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[130])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[132])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[133])},
       { SCM_OBJ(&scm__rc.d2153[134]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[131]), SCM_OBJ(&scm__rc.d2153[135])},
       { SCM_MAKE_INT(160U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[137])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[138])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[140])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[141])},
       { SCM_OBJ(&scm__rc.d2153[142]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[139]), SCM_OBJ(&scm__rc.d2153[143])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[146])},
       { SCM_MAKE_INT(166U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[148])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[149])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[151])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[152])},
       { SCM_OBJ(&scm__rc.d2153[153]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[150]), SCM_OBJ(&scm__rc.d2153[154])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[1])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(191U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[158])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[159])},
       { SCM_OBJ(&scm__rc.d2153[160]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(188U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[163])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[164])},
       { SCM_OBJ(&scm__rc.d2153[165]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[168])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[169])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[170])},
       { SCM_OBJ(&scm__rc.d2153[171]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[120])},
       { SCM_MAKE_INT(11U), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[169])},
       { SCM_MAKE_INT(102U), SCM_NIL},
       { SCM_MAKE_INT(30U), SCM_NIL},
       { SCM_MAKE_INT(28U), SCM_OBJ(&scm__rc.d2153[177])},
       { SCM_OBJ(&scm__rc.d2153[175]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[179])},
       { SCM_MAKE_INT(32U), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[182]), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[76]), SCM_OBJ(&scm__rc.d2153[183])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[184])},
       { SCM_MAKE_INT(47U), SCM_NIL},
       { SCM_MAKE_INT(43U), SCM_OBJ(&scm__rc.d2153[186])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[188])},
       { SCM_MAKE_INT(104U), SCM_NIL},
       { SCM_MAKE_INT(59U), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[1])},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2153[192])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[193])},
       { SCM_OBJ(&scm__rc.d2153[182]), SCM_OBJ(&scm__rc.d2153[194])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[195])},
       { SCM_OBJ(&scm__rc.d2153[189]), SCM_OBJ(&scm__rc.d2153[196])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[197])},
       { SCM_MAKE_INT(78U), SCM_OBJ(&scm__rc.d2153[48])},
       { SCM_MAKE_INT(76U), SCM_OBJ(&scm__rc.d2153[199])},
       { SCM_MAKE_INT(74U), SCM_OBJ(&scm__rc.d2153[200])},
       { SCM_MAKE_INT(69U), SCM_OBJ(&scm__rc.d2153[201])},
       { SCM_MAKE_INT(65U), SCM_OBJ(&scm__rc.d2153[202])},
       { SCM_MAKE_INT(61U), SCM_OBJ(&scm__rc.d2153[203])},
       { SCM_OBJ(&scm__sc.d2152[83]), SCM_OBJ(&scm__rc.d2153[183])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[205])},
       { SCM_MAKE_INT(93U), SCM_NIL},
       { SCM_MAKE_INT(89U), SCM_OBJ(&scm__rc.d2153[207])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[188])},
       { SCM_MAKE_INT(116U), SCM_NIL},
       { SCM_MAKE_INT(105U), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[209]), SCM_OBJ(&scm__rc.d2153[196])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[212])},
       { SCM_MAKE_INT(126U), SCM_NIL},
       { SCM_MAKE_INT(124U), SCM_OBJ(&scm__rc.d2153[214])},
       { SCM_MAKE_INT(122U), SCM_OBJ(&scm__rc.d2153[215])},
       { SCM_MAKE_INT(120U), SCM_OBJ(&scm__rc.d2153[216])},
       { SCM_MAKE_INT(115U), SCM_OBJ(&scm__rc.d2153[217])},
       { SCM_MAKE_INT(111U), SCM_OBJ(&scm__rc.d2153[218])},
       { SCM_MAKE_INT(107U), SCM_OBJ(&scm__rc.d2153[219])},
       { SCM_OBJ(&scm__sc.d2152[84]), SCM_OBJ(&scm__rc.d2153[183])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[221])},
       { SCM_MAKE_INT(139U), SCM_NIL},
       { SCM_MAKE_INT(135U), SCM_OBJ(&scm__rc.d2153[223])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[183])},
       { SCM_MAKE_INT(153U), SCM_NIL},
       { SCM_MAKE_INT(144U), SCM_OBJ(&scm__rc.d2153[121])},
       { SCM_MAKE_INT(128U), SCM_OBJ(&scm__rc.d2153[227])},
       { SCM_MAKE_INT(98U), SCM_OBJ(&scm__rc.d2153[228])},
       { SCM_MAKE_INT(82U), SCM_OBJ(&scm__rc.d2153[229])},
       { SCM_MAKE_INT(52U), SCM_OBJ(&scm__rc.d2153[230])},
       { SCM_OBJ(&scm__rc.d2153[180]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[232])},
       { SCM_OBJ(&scm__rc.d2153[233]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[225]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[222]), SCM_OBJ(&scm__rc.d2153[235])},
       { SCM_OBJ(&scm__rc.d2153[213]), SCM_OBJ(&scm__rc.d2153[236])},
       { SCM_OBJ(&scm__rc.d2153[206]), SCM_OBJ(&scm__rc.d2153[237])},
       { SCM_OBJ(&scm__rc.d2153[198]), SCM_OBJ(&scm__rc.d2153[238])},
       { SCM_OBJ(&scm__rc.d2153[185]), SCM_OBJ(&scm__rc.d2153[239])},
       { SCM_OBJ(&scm__rc.d2153[234]), SCM_OBJ(&scm__rc.d2153[240])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[241])},
       { SCM_MAKE_INT(24U), SCM_NIL},
       { SCM_MAKE_INT(36U), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[173]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[245])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[246])},
       { SCM_OBJ(&scm__rc.d2153[180]), SCM_OBJ(&scm__rc.d2153[240])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[248])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[249])},
       { SCM_OBJ(&scm__rc.d2153[250]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[247]), SCM_OBJ(&scm__rc.d2153[251])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[252])},
       { SCM_OBJ(&scm__rc.d2153[253]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[170]), SCM_OBJ(&scm__rc.d2153[254])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[255])},
       { SCM_MAKE_INT(5U), SCM_NIL},
       { SCM_MAKE_INT(3U), SCM_OBJ(&scm__rc.d2153[257])},
       { SCM_MAKE_INT(1U), SCM_OBJ(&scm__rc.d2153[258])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[260])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[261])},
       { SCM_MAKE_INT(214U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[263])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[264])},
       { SCM_OBJ(&scm__rc.d2153[265]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[260])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[268])},
       { SCM_MAKE_INT(232U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[270])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[271])},
       { SCM_OBJ(&scm__rc.d2153[272]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[275])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[276])},
       { SCM_MAKE_INT(238U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[278])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[279])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[281])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[282])},
       { SCM_OBJ(&scm__rc.d2153[283]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[280]), SCM_OBJ(&scm__rc.d2153[284])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[260])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[286])},
       { SCM_MAKE_INT(241U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[288])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[289])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[291])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[292])},
       { SCM_OBJ(&scm__rc.d2153[293]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[290]), SCM_OBJ(&scm__rc.d2153[294])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(245U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[297])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[298])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[300])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[301])},
       { SCM_OBJ(&scm__rc.d2153[302]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[299]), SCM_OBJ(&scm__rc.d2153[303])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[305])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(258U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[308])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[309])},
       { SCM_OBJ(&scm__rc.d2153[310]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[20]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[314])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[315]), SCM_OBJ(&scm__rc.d2153[316])},
       { SCM_OBJ(&scm__rc.d2153[317]), SCM_NIL},
       { SCM_MAKE_INT(249U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[319])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[320])},
       { SCM_OBJ(&scm__rc.d2153[321]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[1])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[325]), SCM_OBJ(&scm__rc.d2153[326])},
       { SCM_OBJ(&scm__rc.d2153[327]), SCM_NIL},
       { SCM_MAKE_INT(268U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2152[11]), SCM_OBJ(&scm__rc.d2153[329])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[330])},
       { SCM_OBJ(&scm__rc.d2153[331]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
  },
  {   /* ScmObj d2151 */
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(11, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(186, FALSE),
    SCM_MAKE_INT(178U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[173]),
    SCM_MAKE_INT(9U),
    SCM_OBJ(&scm__rc.d2153[174]),
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_FALSE,
    SCM_MAKE_INT(7U),
    SCM_MAKE_INT(13U),
    SCM_MAKE_INT(18U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_MAKE_INT(3U),
    SCM_UNDEFINED,
    SCM_MAKE_INT(5U),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[175]),
    SCM_OBJ(&scm__rc.d2153[176]),
    SCM_OBJ(&scm__rc.d2153[178]),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[180]),
    SCM_MAKE_INT(26U),
    SCM_OBJ(&scm__rc.d2153[181]),
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__sc.d2152[76]),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[182]),
    SCM_MAKE_INT(45U),
    SCM_NIL,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[185]),
    SCM_MAKE_INT(41U),
    SCM_OBJ(&scm__rc.d2153[187]),
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_MAKE_INT(24U),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[189]),
    SCM_OBJ(&scm__rc.d2153[190]),
    SCM_OBJ(&scm__rc.d2153[191]),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[182]),
    SCM_MAKE_INT(67U),
    SCM_NIL,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[198]),
    SCM_MAKE_INT(57U),
    SCM_OBJ(&scm__rc.d2153[204]),
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__sc.d2152[83]),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[182]),
    SCM_MAKE_INT(91U),
    SCM_NIL,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[206]),
    SCM_MAKE_INT(87U),
    SCM_OBJ(&scm__rc.d2153[208]),
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_MAKE_INT(24U),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[209]),
    SCM_OBJ(&scm__rc.d2153[210]),
    SCM_OBJ(&scm__rc.d2153[211]),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[182]),
    SCM_MAKE_INT(113U),
    SCM_NIL,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[213]),
    SCM_MAKE_INT(103U),
    SCM_OBJ(&scm__rc.d2153[220]),
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__sc.d2152[84]),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[182]),
    SCM_MAKE_INT(137U),
    SCM_NIL,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[222]),
    SCM_MAKE_INT(133U),
    SCM_OBJ(&scm__rc.d2153[224]),
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[182]),
    SCM_MAKE_INT(151U),
    SCM_NIL,
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[225]),
    SCM_MAKE_INT(149U),
    SCM_OBJ(&scm__rc.d2153[226]),
    SCM_FALSE,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[231]),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[242]),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[243]),
    SCM_OBJ(&scm__rc.d2153[244]),
    SCM_MAKE_INT(163U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[253]),
    SCM_MAKE_INT(19U),
    SCM_MAKE_INT(165U),
    SCM_MAKE_INT(171U),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2153[256]),
    SCM_UNDEFINED,
    SCM_MAKE_INT(3U),
    SCM_MAKE_INT(0),
    SCM_OBJ(&scm__rc.d2153[259]),
    SCM_MAKE_INT(173U),
    SCM_OBJ(&scm__rc.d2153[1]),
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(121, FALSE),
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
    SCM_UNBOUND,
  },
};

static ScmObj libmacbaseunwrap_syntax(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj form_scm;
  ScmObj form;
  ScmObj to_immutable_scm;
  int to_immutable;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("unwrap-syntax");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  form_scm = SCM_SUBRARGS[0];
  if (!(form_scm)) Scm_Error("scheme object required, but got %S", form_scm);
  form = (form_scm);
  if (SCM_ARGCNT > 1+1) {
    to_immutable_scm = SCM_SUBRARGS[1];
  } else {
    to_immutable_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(to_immutable_scm)) Scm_Error("boolean required, but got %S", to_immutable_scm);
  to_immutable = SCM_BOOL_VALUE(to_immutable_scm);
  {
{
ScmObj SCM_RESULT;

#line 76 "libmacbase.scm"
{SCM_RESULT=(Scm_UnwrapSyntax2(form,to_immutable));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmacbaseunwrap_syntax_1(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("unwrap-syntax-1");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 81 "libmacbase.scm"
if (SCM_IDENTIFIERP(obj)){
{SCM_RESULT=(SCM_OBJ(Scm_UnwrapIdentifier(SCM_IDENTIFIER(obj))));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(obj);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmacbasemacroP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("macro?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_MACROP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmacbasesyntaxP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("syntax?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_SYNTAXP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

static ScmObj get_macro_flags(ScmObj macro){{
#line 129 "libmacbase.scm"
SCM_ASSERT(SCM_MACROP(macro));
{u_long flags=(SCM_MACRO(macro))->flags;ScmObj h=SCM_NIL;ScmObj t=SCM_NIL;
#line 132 "libmacbase.scm"
if ((flags)&(SCM_MACRO_IDENTIFIER)){{
SCM_APPEND1(h,t,scm__rc.d2151[115]);}}
if ((flags)&(SCM_MACRO_PARAMETERIZABLE)){{
SCM_APPEND1(h,t,scm__rc.d2151[116]);}}
return (h);}}}
static void Scm_MacroClass_PRINT(ScmObj obj, ScmPort *port, ScmWriteContext *ctx SCM_UNUSED)
{

#line 145 "libmacbase.scm"
Scm_Printf(port,"#<macro %A>",(SCM_MACRO(obj))->name);
}

SCM_DEFINE_BUILTIN_CLASS(Scm_MacroClass, Scm_MacroClass_PRINT, NULL, NULL, NULL, SCM_CLASS_DEFAULT_CPL);

static ScmObj Scm_MacroClass_name_GET(ScmObj OBJARG)
{
  ScmMacro* obj = SCM_MACRO(OBJARG);
  return SCM_OBJ_SAFE(obj->name);
}

static ScmObj Scm_MacroClass_transformer_GET(ScmObj OBJARG)
{
  ScmMacro* obj = SCM_MACRO(OBJARG);
  return SCM_OBJ_SAFE(obj->transformer);
}

static ScmObj Scm_MacroClass_info_alist_GET(ScmObj OBJARG)
{
  ScmMacro* obj = SCM_MACRO(OBJARG);
  return SCM_OBJ_SAFE(obj->info_alist);
}

static ScmClassStaticSlotSpec Scm_MacroClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("name", Scm_MacroClass_name_GET, NULL),
  SCM_CLASS_SLOT_SPEC("transformer", Scm_MacroClass_transformer_GET, NULL),
  SCM_CLASS_SLOT_SPEC("info-alist", Scm_MacroClass_info_alist_GET, NULL),
  SCM_CLASS_SLOT_SPEC("flags", get_macro_flags, NULL),
  SCM_CLASS_SLOT_SPEC_END()
};


static ScmObj libmacbasecompile_syntax_rules(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmObj name;
  ScmObj src_scm;
  ScmObj src;
  ScmObj ellipsis_scm;
  ScmObj ellipsis;
  ScmObj literals_scm;
  ScmObj literals;
  ScmObj rules_scm;
  ScmObj rules;
  ScmObj mod_scm;
  ScmObj mod;
  ScmObj env_scm;
  ScmObj env;
  ScmObj SCM_SUBRARGS[7];
  SCM_ENTER_SUBR("compile-syntax-rules");
  for (int SCM_i=0; SCM_i<7; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  src_scm = SCM_SUBRARGS[1];
  if (!(src_scm)) Scm_Error("scheme object required, but got %S", src_scm);
  src = (src_scm);
  ellipsis_scm = SCM_SUBRARGS[2];
  if (!(ellipsis_scm)) Scm_Error("scheme object required, but got %S", ellipsis_scm);
  ellipsis = (ellipsis_scm);
  literals_scm = SCM_SUBRARGS[3];
  if (!(literals_scm)) Scm_Error("scheme object required, but got %S", literals_scm);
  literals = (literals_scm);
  rules_scm = SCM_SUBRARGS[4];
  if (!(rules_scm)) Scm_Error("scheme object required, but got %S", rules_scm);
  rules = (rules_scm);
  mod_scm = SCM_SUBRARGS[5];
  if (!(mod_scm)) Scm_Error("scheme object required, but got %S", mod_scm);
  mod = (mod_scm);
  env_scm = SCM_SUBRARGS[6];
  if (!(env_scm)) Scm_Error("scheme object required, but got %S", env_scm);
  env = (env_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CompileSyntaxRules(name,src,ellipsis,literals,rules,mod,env));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmacbasemacro_transformer(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mac_scm;
  ScmMacro* mac;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("macro-transformer");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mac_scm = SCM_SUBRARGS[0];
  if (!SCM_MACROP(mac_scm)) Scm_Error("macro required, but got %S", mac_scm);
  mac = SCM_MACRO(mac_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MacroTransformer(mac));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmacbasemacro_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mac_scm;
  ScmMacro* mac;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("macro-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mac_scm = SCM_SUBRARGS[0];
  if (!SCM_MACROP(mac_scm)) Scm_Error("macro required, but got %S", mac_scm);
  mac = SCM_MACRO(mac_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MacroName(mac));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmacbaseidentifier_macroP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mac_scm;
  ScmMacro* mac;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("identifier-macro?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mac_scm = SCM_SUBRARGS[0];
  if (!SCM_MACROP(mac_scm)) Scm_Error("macro required, but got %S", mac_scm);
  mac = SCM_MACRO(mac_scm);
  {
{
int SCM_RESULT;

#line 161 "libmacbase.scm"
{SCM_RESULT=(((mac)->flags)&(SCM_MACRO_IDENTIFIER));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmacbase_25swap_macro_transformerX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mac_scm;
  ScmMacro* mac;
  ScmObj new_transformer_26flags_scm;
  ScmObj new_transformer_26flags;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%swap-macro-transformer!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mac_scm = SCM_SUBRARGS[0];
  if (!SCM_MACROP(mac_scm)) Scm_Error("macro required, but got %S", mac_scm);
  mac = SCM_MACRO(mac_scm);
  new_transformer_26flags_scm = SCM_SUBRARGS[1];
  if (!(new_transformer_26flags_scm)) Scm_Error("scheme object required, but got %S", new_transformer_26flags_scm);
  new_transformer_26flags = (new_transformer_26flags_scm);
  {
{
ScmObj SCM_RESULT;

#line 167 "libmacbase.scm"
SCM_ASSERT(SCM_PAIRP(new_transformer_26flags));

#line 168 "libmacbase.scm"
SCM_ASSERT(SCM_PAIRP(SCM_CDR(new_transformer_26flags)));
ScmObj cise__2160;
#line 169 "libmacbase.scm"
{ScmObj xformer=SCM_CAR(new_transformer_26flags);ScmObj flags=
SCM_CADR(new_transformer_26flags);u_long iflags=0;
#line 172 "libmacbase.scm"
SCM_FOR_EACH(cise__2160,flags) {{ScmObj f=SCM_CAR(cise__2160);
if (SCM_EQ(f,scm__rc.d2151[115])){
(iflags)|=(SCM_MACRO_IDENTIFIER);} else {
Scm_Error("Invalid macro flag: %S",f);}}}
#line 177 "libmacbase.scm"
Scm__SwapMacroTransformer(mac,&(xformer),&(iflags));
if ((iflags)&(SCM_MACRO_IDENTIFIER)){
flags=(SCM_OBJ(&scm__rc.d2153[145]));} else {
flags=(SCM_NIL);}
{SCM_RESULT=(SCM_LIST2(xformer,flags));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmacbasemake_syntax(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj module_scm;
  ScmModule* module;
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("make-syntax");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  module_scm = SCM_SUBRARGS[1];
  if (!SCM_MODULEP(module_scm)) Scm_Error("<module> required, but got %S", module_scm);
  module = SCM_MODULE(module_scm);
  proc_scm = SCM_SUBRARGS[2];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeSyntax(name,module,proc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmacbasecall_syntax_handler(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj syn_scm;
  ScmObj syn;
  ScmObj program_scm;
  ScmObj program;
  ScmObj cenv_scm;
  ScmObj cenv;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("call-syntax-handler");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  syn_scm = SCM_SUBRARGS[0];
  if (!(syn_scm)) Scm_Error("scheme object required, but got %S", syn_scm);
  syn = (syn_scm);
  program_scm = SCM_SUBRARGS[1];
  if (!(program_scm)) Scm_Error("scheme object required, but got %S", program_scm);
  program = (program_scm);
  cenv_scm = SCM_SUBRARGS[2];
  if (!(cenv_scm)) Scm_Error("scheme object required, but got %S", cenv_scm);
  cenv = (cenv_scm);
  {
{
ScmObj SCM_RESULT;

#line 242 "libmacbase.scm"
SCM_ASSERT(SCM_SYNTAXP(syn));

#line 243 "libmacbase.scm"
{SCM_RESULT=(Scm_VMApply2((SCM_SYNTAX(syn))->handler,program,cenv));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmacbasesyntax_handler(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj syn_scm;
  ScmObj syn;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("syntax-handler");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  syn_scm = SCM_SUBRARGS[0];
  if (!(syn_scm)) Scm_Error("scheme object required, but got %S", syn_scm);
  syn = (syn_scm);
  {
{
ScmObj SCM_RESULT;

#line 246 "libmacbase.scm"
SCM_ASSERT(SCM_SYNTAXP(syn));

#line 247 "libmacbase.scm"
{SCM_RESULT=((SCM_SYNTAX(syn))->handler);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[3])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[5])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[10])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[11])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[14])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[17])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[19])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[23])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[26])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[7];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[4];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[6];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = SCM_OBJ(&scm__sc.d2152[2]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[5];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[633];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[634];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[635];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[636];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[44];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[2];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[637];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[638];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[639];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[19];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[640];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[36];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[34];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[32];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[124];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[37];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = SCM_OBJ(&scm__sc.d2152[17]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[29];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[27];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[25];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[641];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[70];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[71];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[642];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[643];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[85];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[68];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[88];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[41];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[86];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[644];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[87];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[645];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[84];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[646];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[96];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[95];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = SCM_OBJ(&scm__sc.d2152[46]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[647];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[648];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[93];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[649];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[82];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[80];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[77];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[75];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[172];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[181];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[180];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[650];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[178];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[651];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[185];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[652];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[150];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[140];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[653];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[175];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[201];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[192];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[194];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = SCM_OBJ(&scm__sc.d2152[84]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[199];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[210];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[195];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[196];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[197];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = SCM_OBJ(&scm__sc.d2152[83]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = SCM_OBJ(&scm__sc.d2152[76]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[202];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[203];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[654];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[424];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[655];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[423];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[421];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[420];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[418];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[139];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[425];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[152];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[190];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[414];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[430];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[474];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[484];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[656];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[486];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[657];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[482];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[658];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = SCM_OBJ(&scm__sc.d2152[129]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[494];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[480];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[659];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[473];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[491];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[485];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[489];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[660];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[661];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[662];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[478];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[663];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[664];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[472];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[665];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[502];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[666];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[505];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[667];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[501];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[668];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[669];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[670];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2151[510]), i++) = scm__rc.d2151[499];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2151[510]);
}
void Scm_Init_libmacbase() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2151[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[0])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2151[0] = Scm_MakeIdentifier(scm__rc.d2151[1], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2151[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[1])),TRUE); /* macroexpand */
  scm__rc.d2151[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[3])),TRUE); /* lambda */
  scm__rc.d2151[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[4])),TRUE); /* form */
  scm__rc.d2151[5] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2152[5]))); /* :optional */
  scm__rc.d2151[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[6])),TRUE); /* env/flag */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[2]), scm__rc.d2151[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[4]), scm__rc.d2151[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[5]), scm__rc.d2151[4]);
  scm__rc.d2151[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[7])),TRUE); /* %do-macroexpand */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[6]), scm__rc.d2151[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[7]), scm__rc.d2151[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[10]), scm__rc.d2151[3]);
  scm__rc.d2151[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[8])),TRUE); /* error */
  scm__rc.d2151[8] = Scm_MakeIdentifier(scm__rc.d2151[9], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2151[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[9])),TRUE); /* gauche.internal */
  scm__rc.d2151[11] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2151[12]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2151[10] = Scm_MakeIdentifier(scm__rc.d2151[7], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#%do-macroexpand */
  scm__rc.d2151[13] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[10])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[13]), scm__rc.d2151[13]);
  scm__rc.d2151[14] = Scm_MakeExtendedPair(scm__rc.d2151[2], SCM_OBJ(&scm__rc.d2153[5]), SCM_OBJ(&scm__rc.d2153[14]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[15]), scm__rc.d2151[14]);
  scm__rc.d2151[15] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[0]))->name = scm__rc.d2151[2];/* macroexpand */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[0]))->debugInfo = scm__rc.d2151[15];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[28] = SCM_WORD(scm__rc.d2151[8]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[33] = SCM_WORD(scm__rc.d2151[10]);
  scm__rc.d2151[16] = Scm_MakeIdentifier(scm__rc.d2151[2], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#macroexpand */
  scm__rc.d2151[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[12])),TRUE); /* %toplevel */
  scm__rc.d2151[18] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[1]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[1]))->debugInfo = scm__rc.d2151[18];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[35]))[3] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[35]))[6] = SCM_WORD(scm__rc.d2151[2]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[35]))[13] = SCM_WORD(scm__rc.d2151[16]);
  scm__rc.d2151[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[13])),TRUE); /* macroexpand-1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[17]), scm__rc.d2151[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[18]), scm__rc.d2151[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[19]), scm__rc.d2151[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[22]), scm__rc.d2151[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[25]), scm__rc.d2151[13]);
  scm__rc.d2151[20] = Scm_MakeExtendedPair(scm__rc.d2151[19], SCM_OBJ(&scm__rc.d2153[5]), SCM_OBJ(&scm__rc.d2153[26]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[27]), scm__rc.d2151[20]);
  scm__rc.d2151[21] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[2]))->name = scm__rc.d2151[19];/* macroexpand-1 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[2]))->debugInfo = scm__rc.d2151[21];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[50]))[28] = SCM_WORD(scm__rc.d2151[8]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[50]))[34] = SCM_WORD(scm__rc.d2151[10]);
  scm__rc.d2151[22] = Scm_MakeIdentifier(scm__rc.d2151[19], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#macroexpand-1 */
  scm__rc.d2151[23] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[3]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[3]))->debugInfo = scm__rc.d2151[23];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[86]))[3] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[86]))[6] = SCM_WORD(scm__rc.d2151[19]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[86]))[13] = SCM_WORD(scm__rc.d2151[22]);
  scm__rc.d2151[25] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[14])),TRUE); /* boolean? */
  scm__rc.d2151[24] = Scm_MakeIdentifier(scm__rc.d2151[25], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#boolean? */
  scm__rc.d2151[27] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[15])),TRUE); /* vm-current-module */
  scm__rc.d2151[26] = Scm_MakeIdentifier(scm__rc.d2151[27], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#vm-current-module */
  scm__rc.d2151[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[16])),TRUE); /* module? */
  scm__rc.d2151[28] = Scm_MakeIdentifier(scm__rc.d2151[29], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#module? */
  scm__rc.d2151[30] = Scm_MakeIdentifier(scm__rc.d2151[9], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#error */
  scm__rc.d2151[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[18])),TRUE); /* make-cenv */
  scm__rc.d2151[31] = Scm_MakeIdentifier(scm__rc.d2151[32], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#make-cenv */
  scm__rc.d2151[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[19])),TRUE); /* %internal-macro-expand */
  scm__rc.d2151[33] = Scm_MakeIdentifier(scm__rc.d2151[34], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#%internal-macro-expand */
  scm__rc.d2151[36] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[20])),TRUE); /* unravel-syntax */
  scm__rc.d2151[35] = Scm_MakeIdentifier(scm__rc.d2151[36], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#unravel-syntax */
  scm__rc.d2151[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[21])),TRUE); /* once? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[28]), scm__rc.d2151[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[29]), scm__rc.d2151[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[30]), scm__rc.d2151[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[33]), scm__rc.d2151[13]);
  scm__rc.d2151[38] = Scm_MakeExtendedPair(scm__rc.d2151[7], SCM_OBJ(&scm__rc.d2153[30]), SCM_OBJ(&scm__rc.d2153[34]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[35]), scm__rc.d2151[38]);
  scm__rc.d2151[39] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[4]))->name = scm__rc.d2151[7];/* %do-macroexpand */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[4]))->debugInfo = scm__rc.d2151[39];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]))[4] = SCM_WORD(scm__rc.d2151[24]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]))[10] = SCM_WORD(scm__rc.d2151[26]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]))[17] = SCM_WORD(scm__rc.d2151[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]))[29] = SCM_WORD(scm__rc.d2151[30]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]))[38] = SCM_WORD(scm__rc.d2151[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]))[42] = SCM_WORD(scm__rc.d2151[33]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[101]))[50] = SCM_WORD(scm__rc.d2151[35]);
  scm__rc.d2151[40] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[5]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[5]))->debugInfo = scm__rc.d2151[40];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[154]))[3] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[154]))[6] = SCM_WORD(scm__rc.d2151[7]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[154]))[13] = SCM_WORD(scm__rc.d2151[10]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2151[41] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[22])),TRUE); /* unwrap-syntax */
  scm__rc.d2151[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[23])),TRUE); /* to_immutable */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[36]), scm__rc.d2151[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[37]), scm__rc.d2151[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[38]), scm__rc.d2151[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[41]), scm__rc.d2151[13]);
  scm__rc.d2151[43] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[24])),TRUE); /* bind-info */
  scm__rc.d2151[44] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[25])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[42]), scm__rc.d2151[41]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[43]), scm__rc.d2151[44]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[44]), scm__rc.d2151[43]);
  scm__rc.d2151[45] = Scm_MakeExtendedPair(scm__rc.d2151[41], SCM_OBJ(&scm__rc.d2153[38]), SCM_OBJ(&scm__rc.d2153[46]));
  scm__rc.d2151[46] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[26])),TRUE); /* <top> */
  scm__rc.d2151[47] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[27])),TRUE); /* * */
  scm__rc.d2151[48] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[28])),TRUE); /* -> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[49]))[3] = scm__rc.d2151[44];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[49]))[4] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[49]))[5] = scm__rc.d2151[47];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[49]))[6] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[49]))[7] = scm__rc.d2151[46];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("unwrap-syntax")), SCM_OBJ(&libmacbaseunwrap_syntax__STUB), 0);
  libmacbaseunwrap_syntax__STUB.common.info = scm__rc.d2151[45];
  libmacbaseunwrap_syntax__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[49]);
  scm__rc.d2151[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[29])),TRUE); /* unwrap-syntax-1 */
  scm__rc.d2151[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[30])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[47]), scm__rc.d2151[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[50]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[51]), scm__rc.d2151[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[52]), scm__rc.d2151[44]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[53]), scm__rc.d2151[43]);
  scm__rc.d2151[59] = Scm_MakeExtendedPair(scm__rc.d2151[57], SCM_OBJ(&scm__rc.d2153[47]), SCM_OBJ(&scm__rc.d2153[55]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[60]))[3] = scm__rc.d2151[44];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[60]))[4] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[60]))[5] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[60]))[6] = scm__rc.d2151[46];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("unwrap-syntax-1")), SCM_OBJ(&libmacbaseunwrap_syntax_1__STUB), 0);
  libmacbaseunwrap_syntax_1__STUB.common.info = scm__rc.d2151[59];
  libmacbaseunwrap_syntax_1__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[60]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2151[68] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[31])),TRUE); /* wrapped-identifier? */
  scm__rc.d2151[67] = Scm_MakeIdentifier(scm__rc.d2151[68], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#wrapped-identifier? */
  scm__rc.d2151[70] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[32])),TRUE); /* vector-map */
  scm__rc.d2151[69] = Scm_MakeIdentifier(scm__rc.d2151[70], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#vector-map */
  scm__rc.d2151[71] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[33])),TRUE); /* rec */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[56]), scm__rc.d2151[71]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[57]), scm__rc.d2151[36]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[58]), scm__rc.d2151[4]);
  scm__rc.d2151[72] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[6]))->name = scm__rc.d2151[71];/* (unravel-syntax rec) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[6]))->debugInfo = scm__rc.d2151[72];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[169]))[4] = SCM_WORD(scm__rc.d2151[67]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[169]))[36] = SCM_WORD(scm__rc.d2151[69]);
  scm__rc.d2151[73] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[34])),TRUE); /* eq? */
  scm__rc.d2151[75] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[35])),TRUE); /* make-hash-table */
  scm__rc.d2151[74] = Scm_MakeIdentifier(scm__rc.d2151[75], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#make-hash-table */
  scm__rc.d2151[77] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[36])),TRUE); /* hash-table-get */
  scm__rc.d2151[76] = Scm_MakeIdentifier(scm__rc.d2151[77], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#hash-table-get */
  scm__rc.d2151[78] = Scm_MakeIdentifier(scm__rc.d2151[41], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#unwrap-syntax */
  scm__rc.d2151[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[37])),TRUE); /* make-identifier */
  scm__rc.d2151[79] = Scm_MakeIdentifier(scm__rc.d2151[80], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#make-identifier */
  scm__rc.d2151[82] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[38])),TRUE); /* global-identifier=? */
  scm__rc.d2151[81] = Scm_MakeIdentifier(scm__rc.d2151[82], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#global-identifier=? */
  scm__rc.d2151[84] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[39])),TRUE); /* hash-table-put! */
  scm__rc.d2151[83] = Scm_MakeIdentifier(scm__rc.d2151[84], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#hash-table-put! */
  scm__rc.d2151[85] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[40])),TRUE); /* id->sym */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[63]), scm__rc.d2151[85]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[64]), scm__rc.d2151[36]);
  scm__rc.d2151[86] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[41])),TRUE); /* i */
  scm__rc.d2151[87] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[42])),TRUE); /* _ */
  scm__rc.d2151[88] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[43])),TRUE); /* c */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[65]), scm__rc.d2151[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[66]), scm__rc.d2151[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[67]), scm__rc.d2151[86]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[70]), scm__rc.d2151[13]);
  scm__rc.d2151[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[44])),TRUE); /* unused-args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[71]), scm__rc.d2151[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[72]), scm__rc.d2151[89]);
  scm__rc.d2151[90] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2153[64]), SCM_OBJ(&scm__rc.d2153[67]), SCM_OBJ(&scm__rc.d2153[74]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[75]), scm__rc.d2151[90]);
  scm__rc.d2151[91] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[7]))->debugInfo = scm__rc.d2151[91];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[208]))[4] = SCM_WORD(scm__rc.d2151[78]);
  scm__rc.d2151[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[45])),TRUE); /* hash-table-fold */
  scm__rc.d2151[92] = Scm_MakeIdentifier(scm__rc.d2151[93], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#hash-table-fold */
  scm__rc.d2151[95] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[47])),TRUE); /* symbol-append */
  scm__rc.d2151[94] = Scm_MakeIdentifier(scm__rc.d2151[95], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#symbol-append */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[76]), scm__rc.d2151[85]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[77]), scm__rc.d2151[36]);
  scm__rc.d2151[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[48])),TRUE); /* id */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[78]), scm__rc.d2151[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[81]), scm__rc.d2151[13]);
  scm__rc.d2151[97] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2153[77]), SCM_OBJ(&scm__rc.d2153[78]), SCM_OBJ(&scm__rc.d2153[82]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[83]), scm__rc.d2151[97]);
  scm__rc.d2151[98] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[8]))->name = scm__rc.d2151[85];/* (unravel-syntax id->sym) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[8]))->debugInfo = scm__rc.d2151[98];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]))[6] = SCM_WORD(scm__rc.d2151[76]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]))[12] = SCM_WORD(scm__rc.d2151[78]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]))[23] = SCM_WORD(scm__rc.d2151[26]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]))[27] = SCM_WORD(scm__rc.d2151[79]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]))[29] = SCM_WORD(scm__rc.d2151[81]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]))[38] = SCM_WORD(scm__rc.d2151[83]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]))[48] = SCM_WORD(scm__rc.d2151[92]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]))[57] = SCM_WORD(scm__rc.d2151[94]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[220]))[65] = SCM_WORD(scm__rc.d2151[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[86]), scm__rc.d2151[13]);
  scm__rc.d2151[99] = Scm_MakeExtendedPair(scm__rc.d2151[36], SCM_OBJ(&scm__rc.d2153[58]), SCM_OBJ(&scm__rc.d2153[87]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[88]), scm__rc.d2151[99]);
  scm__rc.d2151[100] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[9]))->name = scm__rc.d2151[36];/* unravel-syntax */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[9]))->debugInfo = scm__rc.d2151[100];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[287]))[5] = SCM_WORD(scm__rc.d2151[73]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[287]))[7] = SCM_WORD(scm__rc.d2151[74]);
  scm__rc.d2151[101] = Scm_MakeIdentifier(scm__rc.d2151[36], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#unravel-syntax */
  scm__rc.d2151[102] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[10]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[10]))->debugInfo = scm__rc.d2151[102];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]))[3] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]))[6] = SCM_WORD(scm__rc.d2151[36]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]))[13] = SCM_WORD(scm__rc.d2151[101]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2151[103] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[49])),TRUE); /* macro? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[91]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[92]), scm__rc.d2151[103]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[93]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[94]), scm__rc.d2151[43]);
  scm__rc.d2151[104] = Scm_MakeExtendedPair(scm__rc.d2151[103], SCM_OBJ(&scm__rc.d2153[47]), SCM_OBJ(&scm__rc.d2153[96]));
  scm__rc.d2151[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[50])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[106]))[3] = scm__rc.d2151[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[106]))[4] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[106]))[5] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[106]))[6] = scm__rc.d2151[105];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("macro?")), SCM_OBJ(&libmacbasemacroP__STUB), 0);
  libmacbasemacroP__STUB.common.info = scm__rc.d2151[104];
  libmacbasemacroP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[106]);
  scm__rc.d2151[113] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[51])),TRUE); /* syntax? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[99]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[100]), scm__rc.d2151[113]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[101]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[102]), scm__rc.d2151[43]);
  scm__rc.d2151[114] = Scm_MakeExtendedPair(scm__rc.d2151[113], SCM_OBJ(&scm__rc.d2153[47]), SCM_OBJ(&scm__rc.d2153[104]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("syntax?")), SCM_OBJ(&libmacbasesyntaxP__STUB), 0);
  libmacbasesyntaxP__STUB.common.info = scm__rc.d2151[114];
  libmacbasesyntaxP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[106]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2151[115] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[52])),TRUE); /* identifier-macro */
  scm__rc.d2151[116] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[53])),TRUE); /* parameterizable */
  Scm_InitStaticClassWithMeta(&Scm_MacroClass, "<macro>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_MacroClass__SLOTS, 0);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2151[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[54])),TRUE); /* compile-syntax-rules */
  scm__rc.d2151[118] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[55])),TRUE); /* name */
  scm__rc.d2151[119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[56])),TRUE); /* src */
  scm__rc.d2151[120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[57])),TRUE); /* ellipsis */
  scm__rc.d2151[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[58])),TRUE); /* literals */
  scm__rc.d2151[122] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[59])),TRUE); /* rules */
  scm__rc.d2151[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[60])),TRUE); /* mod */
  scm__rc.d2151[124] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[61])),TRUE); /* env */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[105]), scm__rc.d2151[124]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[106]), scm__rc.d2151[123]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[107]), scm__rc.d2151[122]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[108]), scm__rc.d2151[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[109]), scm__rc.d2151[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[110]), scm__rc.d2151[119]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[111]), scm__rc.d2151[118]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[114]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[115]), scm__rc.d2151[117]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[116]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[117]), scm__rc.d2151[43]);
  scm__rc.d2151[125] = Scm_MakeExtendedPair(scm__rc.d2151[117], SCM_OBJ(&scm__rc.d2153[111]), SCM_OBJ(&scm__rc.d2153[119]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[3] = scm__rc.d2151[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[4] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[5] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[6] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[7] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[8] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[9] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[10] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[11] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[126]))[12] = scm__rc.d2151[46];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("compile-syntax-rules")), SCM_OBJ(&libmacbasecompile_syntax_rules__STUB), 0);
  libmacbasecompile_syntax_rules__STUB.common.info = scm__rc.d2151[125];
  libmacbasecompile_syntax_rules__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[126]);
  scm__rc.d2151[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[62])),TRUE); /* macro-transformer */
  scm__rc.d2151[140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[63])),TRUE); /* mac */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[120]), scm__rc.d2151[140]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[123]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[124]), scm__rc.d2151[139]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[125]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[126]), scm__rc.d2151[43]);
  scm__rc.d2151[141] = Scm_MakeExtendedPair(scm__rc.d2151[139], SCM_OBJ(&scm__rc.d2153[120]), SCM_OBJ(&scm__rc.d2153[128]));
  scm__rc.d2151[142] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[64])),TRUE); /* <macro> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[143]))[3] = scm__rc.d2151[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[143]))[4] = scm__rc.d2151[142];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[143]))[5] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[143]))[6] = scm__rc.d2151[46];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("macro-transformer")), SCM_OBJ(&libmacbasemacro_transformer__STUB), 0);
  libmacbasemacro_transformer__STUB.common.info = scm__rc.d2151[141];
  libmacbasemacro_transformer__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[143]);
  scm__rc.d2151[150] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[65])),TRUE); /* macro-name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[131]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[132]), scm__rc.d2151[150]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[133]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[134]), scm__rc.d2151[43]);
  scm__rc.d2151[151] = Scm_MakeExtendedPair(scm__rc.d2151[150], SCM_OBJ(&scm__rc.d2153[120]), SCM_OBJ(&scm__rc.d2153[136]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("macro-name")), SCM_OBJ(&libmacbasemacro_name__STUB), 0);
  libmacbasemacro_name__STUB.common.info = scm__rc.d2151[151];
  libmacbasemacro_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[143]);
  scm__rc.d2151[152] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[66])),TRUE); /* identifier-macro? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[139]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[140]), scm__rc.d2151[152]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[141]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[142]), scm__rc.d2151[43]);
  scm__rc.d2151[153] = Scm_MakeExtendedPair(scm__rc.d2151[152], SCM_OBJ(&scm__rc.d2153[120]), SCM_OBJ(&scm__rc.d2153[144]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[154]))[3] = scm__rc.d2151[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[154]))[4] = scm__rc.d2151[142];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[154]))[5] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[154]))[6] = scm__rc.d2151[105];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("identifier-macro?")), SCM_OBJ(&libmacbaseidentifier_macroP__STUB), 0);
  libmacbaseidentifier_macroP__STUB.common.info = scm__rc.d2151[153];
  libmacbaseidentifier_macroP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[154]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[145]), scm__rc.d2151[115]);
  scm__rc.d2151[161] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[67])),TRUE); /* %swap-macro-transformer! */
  scm__rc.d2151[162] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[68])),TRUE); /* new-transformer&flags */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[146]), scm__rc.d2151[162]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[147]), scm__rc.d2151[140]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[150]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[151]), scm__rc.d2151[161]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[152]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[153]), scm__rc.d2151[43]);
  scm__rc.d2151[163] = Scm_MakeExtendedPair(scm__rc.d2151[161], SCM_OBJ(&scm__rc.d2153[147]), SCM_OBJ(&scm__rc.d2153[155]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[164]))[3] = scm__rc.d2151[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[164]))[4] = scm__rc.d2151[142];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[164]))[5] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[164]))[6] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[164]))[7] = scm__rc.d2151[46];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%swap-macro-transformer!")), SCM_OBJ(&libmacbase_25swap_macro_transformerX__STUB), 0);
  libmacbase_25swap_macro_transformerX__STUB.common.info = scm__rc.d2151[163];
  libmacbase_25swap_macro_transformerX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[164]);
  scm__rc.d2151[172] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[69])),TRUE); /* *trace-macro* */
  scm__rc.d2151[173] = Scm_MakeIdentifier(scm__rc.d2151[172], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#*trace-macro* */
  scm__rc.d2151[174] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[11]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[11]))->debugInfo = scm__rc.d2151[174];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[319]))[3] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[319]))[6] = SCM_WORD(scm__rc.d2151[172]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[319]))[11] = SCM_WORD(scm__rc.d2151[173]);
  scm__rc.d2151[175] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[70])),TRUE); /* %macro-traced? */
  scm__rc.d2151[176] = Scm_MakeIdentifier(scm__rc.d2151[150], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#macro-name */
  scm__rc.d2151[178] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[71])),TRUE); /* regexp? */
  scm__rc.d2151[177] = Scm_MakeIdentifier(scm__rc.d2151[178], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#regexp? */
  scm__rc.d2151[180] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[72])),TRUE); /* symbol->string */
  scm__rc.d2151[179] = Scm_MakeIdentifier(scm__rc.d2151[180], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#symbol->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[156]), scm__rc.d2151[175]);
  scm__rc.d2151[181] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[73])),TRUE); /* z */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[157]), scm__rc.d2151[181]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[160]), scm__rc.d2151[13]);
  scm__rc.d2151[182] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2153[156]), SCM_OBJ(&scm__rc.d2153[157]), SCM_OBJ(&scm__rc.d2153[161]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[162]), scm__rc.d2151[182]);
  scm__rc.d2151[183] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[12]))->debugInfo = scm__rc.d2151[183];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[332]))[12] = SCM_WORD(scm__rc.d2151[177]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[332]))[19] = SCM_WORD(scm__rc.d2151[179]);
  scm__rc.d2151[185] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[74])),TRUE); /* find */
  scm__rc.d2151[184] = Scm_MakeIdentifier(scm__rc.d2151[185], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#find */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[165]), scm__rc.d2151[13]);
  scm__rc.d2151[186] = Scm_MakeExtendedPair(scm__rc.d2151[175], SCM_OBJ(&scm__rc.d2153[120]), SCM_OBJ(&scm__rc.d2153[166]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[167]), scm__rc.d2151[186]);
  scm__rc.d2151[187] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[13]))->name = scm__rc.d2151[175];/* %macro-traced? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[13]))->debugInfo = scm__rc.d2151[187];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[357]))[1] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[357]))[12] = SCM_WORD(scm__rc.d2151[176]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[357]))[14] = SCM_WORD(scm__rc.d2151[78]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[357]))[21] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[357]))[23] = SCM_WORD(scm__rc.d2151[184]);
  scm__rc.d2151[188] = Scm_MakeIdentifier(scm__rc.d2151[175], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#%macro-traced? */
  scm__rc.d2151[189] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[14]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[14]))->debugInfo = scm__rc.d2151[189];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[382]))[3] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[382]))[6] = SCM_WORD(scm__rc.d2151[175]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[382]))[13] = SCM_WORD(scm__rc.d2151[188]);
  scm__rc.d2151[190] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[75])),TRUE); /* show-macro-trace */
  scm__rc.d2151[192] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[77])),TRUE); /* current-trace-port */
  scm__rc.d2151[191] = Scm_MakeIdentifier(scm__rc.d2151[192], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#current-trace-port */
  scm__rc.d2151[194] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[78])),TRUE); /* display */
  scm__rc.d2151[193] = Scm_MakeIdentifier(scm__rc.d2151[194], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#display */
  scm__rc.d2151[195] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2152[79]))); /* :port */
  scm__rc.d2151[196] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2152[80]))); /* :level */
  scm__rc.d2151[197] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2152[81]))); /* :length */
  scm__rc.d2151[199] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[82])),TRUE); /* pprint */
  scm__rc.d2151[198] = Scm_MakeIdentifier(scm__rc.d2151[199], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#pprint */
  scm__rc.d2151[201] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[85])),TRUE); /* flush */
  scm__rc.d2151[200] = Scm_MakeIdentifier(scm__rc.d2151[201], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#flush */
  scm__rc.d2151[202] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[86])),TRUE); /* input */
  scm__rc.d2151[203] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[87])),TRUE); /* output */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[168]), scm__rc.d2151[203]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[169]), scm__rc.d2151[202]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[170]), scm__rc.d2151[140]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[171]), scm__rc.d2151[190]);
  scm__rc.d2151[204] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[88])),TRUE); /* lvar */
  scm__rc.d2151[205] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[89])),TRUE); /* $GREF */
  scm__rc.d2151[206] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[90])),TRUE); /* $LREF */
  scm__rc.d2151[207] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[91])),TRUE); /* $CALL */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[173]), scm__rc.d2151[175]);
  scm__rc.d2151[208] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[92])),TRUE); /* $IT */
  scm__rc.d2151[209] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[93])),TRUE); /* $IF */
  scm__rc.d2151[210] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[94])),TRUE); /* unraveled */
  scm__rc.d2151[211] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[95])),TRUE); /* $ASM */
  scm__rc.d2151[212] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[96])),TRUE); /* cons */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[175]), scm__rc.d2151[212]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[180]), scm__rc.d2151[36]);
  scm__rc.d2151[213] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[97])),TRUE); /* $CONST */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[182]), scm__rc.d2151[192]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[185]), scm__rc.d2151[194]);
  scm__rc.d2151[214] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[98])),TRUE); /* car */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[188]), scm__rc.d2151[210]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[189]), scm__rc.d2151[214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[192]), scm__rc.d2151[197]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[194]), scm__rc.d2151[196]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[196]), scm__rc.d2151[195]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[198]), scm__rc.d2151[199]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[206]), scm__rc.d2151[194]);
  scm__rc.d2151[215] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[99])),TRUE); /* cdr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[209]), scm__rc.d2151[215]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[213]), scm__rc.d2151[199]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[222]), scm__rc.d2151[194]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[225]), scm__rc.d2151[201]);
  scm__rc.d2151[216] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[100])),TRUE); /* $SEQ */
  scm__rc.d2151[217] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[101])),TRUE); /* $LET */
  scm__rc.d2151[219] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[102])),TRUE); /* let */
  scm__rc.d2151[218] = Scm_MakeIdentifier(scm__rc.d2151[219], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#let */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[233]), scm__rc.d2151[210]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[242]), scm__rc.d2151[218]);
  scm__rc.d2151[220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[103])),TRUE); /* when */
  scm__rc.d2151[221] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[104])),TRUE); /* and */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[246]), scm__rc.d2151[172]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[247]), scm__rc.d2151[221]);
  scm__rc.d2151[222] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[105])),TRUE); /* let1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[249]), scm__rc.d2151[210]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[250]), scm__rc.d2151[222]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[253]), scm__rc.d2151[220]);
  scm__rc.d2151[223] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[106])),TRUE); /* $LAMBDA */
  scm__rc.d2151[224] = Scm_MakeIdentifier(scm__rc.d2151[3], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#lambda */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[256]), scm__rc.d2151[224]);
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[3] = scm__rc.d2151[204];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[4] = scm__rc.d2151[140];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[5] = scm__rc.d2151[204];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[6] = scm__rc.d2151[202];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[7] = scm__rc.d2151[204];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[8] = scm__rc.d2151[203];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[9] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[10] = scm__rc.d2151[173];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[11] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[12] = scm__rc.d2151[188];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[13] = scm__rc.d2151[206];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[15] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[20] = scm__rc.d2151[208];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[21] = scm__rc.d2151[209];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[26] = scm__rc.d2151[204];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[27] = scm__rc.d2151[210];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[28] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[29] = scm__rc.d2151[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[30] = scm__rc.d2151[206];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[32] = scm__rc.d2151[206];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[34] = scm__rc.d2151[211];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[38] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[43] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[44] = scm__rc.d2151[193];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[45] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[47] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[48] = scm__rc.d2151[191];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[49] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[54] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[59] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[60] = scm__rc.d2151[198];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[61] = scm__rc.d2151[206];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[63] = scm__rc.d2151[211];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[67] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[68] = scm__rc.d2151[195];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[69] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[70] = scm__rc.d2151[191];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[71] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[76] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[77] = scm__rc.d2151[196];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[78] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[80] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[81] = scm__rc.d2151[197];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[82] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[84] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[89] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[90] = scm__rc.d2151[193];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[91] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[93] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[94] = scm__rc.d2151[191];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[95] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[100] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[105] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[106] = scm__rc.d2151[198];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[107] = scm__rc.d2151[206];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[109] = scm__rc.d2151[211];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[113] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[114] = scm__rc.d2151[195];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[115] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[116] = scm__rc.d2151[191];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[117] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[122] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[123] = scm__rc.d2151[196];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[124] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[126] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[127] = scm__rc.d2151[197];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[128] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[130] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[135] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[136] = scm__rc.d2151[193];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[137] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[139] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[140] = scm__rc.d2151[191];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[141] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[146] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[151] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[152] = scm__rc.d2151[200];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[153] = scm__rc.d2151[205];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[154] = scm__rc.d2151[191];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[155] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[160] = scm__rc.d2151[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[165] = scm__rc.d2151[216];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[167] = scm__rc.d2151[217];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[169] = scm__rc.d2151[219];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[173] = scm__rc.d2151[213];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[175] = scm__rc.d2151[209];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[180] = scm__rc.d2151[223];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[225]))[182] = scm__rc.d2151[190];
  scm__rc.d2151[413] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[15]))->name = scm__rc.d2151[190];/* show-macro-trace */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[15]))->debugInfo = scm__rc.d2151[413];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[1] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[8] = SCM_WORD(scm__rc.d2151[188]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[17] = SCM_WORD(scm__rc.d2151[35]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[26] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[28] = SCM_WORD(scm__rc.d2151[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[34] = SCM_WORD(scm__rc.d2151[195]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[38] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[41] = SCM_WORD(scm__rc.d2151[196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[44] = SCM_WORD(scm__rc.d2151[197]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[47] = SCM_WORD(scm__rc.d2151[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[55] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[57] = SCM_WORD(scm__rc.d2151[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[63] = SCM_WORD(scm__rc.d2151[195]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[67] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[70] = SCM_WORD(scm__rc.d2151[196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[73] = SCM_WORD(scm__rc.d2151[197]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[76] = SCM_WORD(scm__rc.d2151[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[84] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[86] = SCM_WORD(scm__rc.d2151[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[90] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[397]))[92] = SCM_WORD(scm__rc.d2151[200]);
  ScmObj G2161 = Scm_MakeClosure(SCM_OBJ(&scm__rc.d2155[15]), NULL);

  Scm_MakeBinding(SCM_MODULE(Scm_CurrentModule()) /*  */, SCM_SYMBOL(scm__rc.d2151[190]) /* show-macro-trace */, G2161,SCM_BINDING_INLINABLE);

  scm__rc.d2151[414] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[107])),TRUE); /* call-macro-expander */
  scm__rc.d2151[415] = Scm_MakeIdentifier(scm__rc.d2151[152], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#identifier-macro? */
  scm__rc.d2151[416] = Scm_MakeIdentifier(scm__rc.d2151[139], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#macro-transformer */
  scm__rc.d2151[418] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[108])),TRUE); /* extended-cons */
  scm__rc.d2151[417] = Scm_MakeIdentifier(scm__rc.d2151[418], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#extended-cons */
  scm__rc.d2151[420] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[109])),TRUE); /* extended-pair? */
  scm__rc.d2151[419] = Scm_MakeIdentifier(scm__rc.d2151[420], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#extended-pair? */
  scm__rc.d2151[421] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[110])),TRUE); /* original */
  scm__rc.d2151[423] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[111])),TRUE); /* pair-attribute-set! */
  scm__rc.d2151[422] = Scm_MakeIdentifier(scm__rc.d2151[423], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#pair-attribute-set! */
  scm__rc.d2151[424] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[112])),TRUE); /* expr */
  scm__rc.d2151[425] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[113])),TRUE); /* cenv */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[260]), scm__rc.d2151[425]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[261]), scm__rc.d2151[424]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[262]), scm__rc.d2151[140]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[265]), scm__rc.d2151[13]);
  scm__rc.d2151[426] = Scm_MakeExtendedPair(scm__rc.d2151[414], SCM_OBJ(&scm__rc.d2153[262]), SCM_OBJ(&scm__rc.d2153[266]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[267]), scm__rc.d2151[426]);
  scm__rc.d2151[427] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[16]))->name = scm__rc.d2151[414];/* call-macro-expander */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[16]))->debugInfo = scm__rc.d2151[427];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[4] = SCM_WORD(scm__rc.d2151[415]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[18] = SCM_WORD(scm__rc.d2151[416]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[23] = SCM_WORD(scm__rc.d2151[417]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[34] = SCM_WORD(scm__rc.d2151[416]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[52] = SCM_WORD(scm__rc.d2151[419]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[64] = SCM_WORD(scm__rc.d2151[417]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[70] = SCM_WORD(scm__rc.d2151[421]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[73] = SCM_WORD(scm__rc.d2151[422]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[81] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[88] = SCM_WORD(scm__rc.d2151[188]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[97] = SCM_WORD(scm__rc.d2151[35]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[106] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[108] = SCM_WORD(scm__rc.d2151[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[114] = SCM_WORD(scm__rc.d2151[195]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[118] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[121] = SCM_WORD(scm__rc.d2151[196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[124] = SCM_WORD(scm__rc.d2151[197]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[127] = SCM_WORD(scm__rc.d2151[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[135] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[137] = SCM_WORD(scm__rc.d2151[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[143] = SCM_WORD(scm__rc.d2151[195]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[147] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[150] = SCM_WORD(scm__rc.d2151[196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[153] = SCM_WORD(scm__rc.d2151[197]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[156] = SCM_WORD(scm__rc.d2151[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[164] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[166] = SCM_WORD(scm__rc.d2151[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[172] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[493]))[174] = SCM_WORD(scm__rc.d2151[200]);
  scm__rc.d2151[428] = Scm_MakeIdentifier(scm__rc.d2151[414], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#call-macro-expander */
  scm__rc.d2151[429] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[17]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[17]))->debugInfo = scm__rc.d2151[429];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[674]))[3] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[674]))[6] = SCM_WORD(scm__rc.d2151[414]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[674]))[13] = SCM_WORD(scm__rc.d2151[428]);
  scm__rc.d2151[430] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[114])),TRUE); /* call-id-macro-expander */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[268]), scm__rc.d2151[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[269]), scm__rc.d2151[140]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[272]), scm__rc.d2151[13]);
  scm__rc.d2151[431] = Scm_MakeExtendedPair(scm__rc.d2151[430], SCM_OBJ(&scm__rc.d2153[269]), SCM_OBJ(&scm__rc.d2153[273]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[274]), scm__rc.d2151[431]);
  scm__rc.d2151[432] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[18]))->name = scm__rc.d2151[430];/* call-id-macro-expander */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[18]))->debugInfo = scm__rc.d2151[432];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[4] = SCM_WORD(scm__rc.d2151[415]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[15] = SCM_WORD(scm__rc.d2151[416]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[19] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[26] = SCM_WORD(scm__rc.d2151[188]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[35] = SCM_WORD(scm__rc.d2151[35]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[44] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[46] = SCM_WORD(scm__rc.d2151[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[52] = SCM_WORD(scm__rc.d2151[195]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[56] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[59] = SCM_WORD(scm__rc.d2151[196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[62] = SCM_WORD(scm__rc.d2151[197]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[65] = SCM_WORD(scm__rc.d2151[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[73] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[75] = SCM_WORD(scm__rc.d2151[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[81] = SCM_WORD(scm__rc.d2151[195]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[85] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[88] = SCM_WORD(scm__rc.d2151[196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[91] = SCM_WORD(scm__rc.d2151[197]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[94] = SCM_WORD(scm__rc.d2151[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[102] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[104] = SCM_WORD(scm__rc.d2151[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[110] = SCM_WORD(scm__rc.d2151[191]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[689]))[112] = SCM_WORD(scm__rc.d2151[200]);
  scm__rc.d2151[433] = Scm_MakeIdentifier(scm__rc.d2151[430], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#call-id-macro-expander */
  scm__rc.d2151[434] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[19]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[19]))->debugInfo = scm__rc.d2151[434];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[809]))[3] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[809]))[6] = SCM_WORD(scm__rc.d2151[430]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[809]))[13] = SCM_WORD(scm__rc.d2151[433]);
  scm__rc.d2151[435] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[115])),TRUE); /* make-syntax */
  scm__rc.d2151[436] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[116])),TRUE); /* module */
  scm__rc.d2151[437] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[117])),TRUE); /* proc */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[275]), scm__rc.d2151[437]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[276]), scm__rc.d2151[436]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[277]), scm__rc.d2151[118]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[280]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[281]), scm__rc.d2151[435]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[282]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[283]), scm__rc.d2151[43]);
  scm__rc.d2151[438] = Scm_MakeExtendedPair(scm__rc.d2151[435], SCM_OBJ(&scm__rc.d2153[277]), SCM_OBJ(&scm__rc.d2153[285]));
  scm__rc.d2151[439] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[118])),TRUE); /* <symbol> */
  scm__rc.d2151[440] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[119])),TRUE); /* <module> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[441]))[3] = scm__rc.d2151[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[441]))[4] = scm__rc.d2151[439];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[441]))[5] = scm__rc.d2151[440];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[441]))[6] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[441]))[7] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[441]))[8] = scm__rc.d2151[46];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("make-syntax")), SCM_OBJ(&libmacbasemake_syntax__STUB), 0);
  libmacbasemake_syntax__STUB.common.info = scm__rc.d2151[438];
  libmacbasemake_syntax__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[441]);
  scm__rc.d2151[450] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[120])),TRUE); /* call-syntax-handler */
  scm__rc.d2151[451] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[121])),TRUE); /* syn */
  scm__rc.d2151[452] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[122])),TRUE); /* program */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[286]), scm__rc.d2151[452]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[287]), scm__rc.d2151[451]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[290]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[291]), scm__rc.d2151[450]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[292]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[293]), scm__rc.d2151[43]);
  scm__rc.d2151[453] = Scm_MakeExtendedPair(scm__rc.d2151[450], SCM_OBJ(&scm__rc.d2153[287]), SCM_OBJ(&scm__rc.d2153[295]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[454]))[3] = scm__rc.d2151[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[454]))[4] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[454]))[5] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[454]))[6] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[454]))[7] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[454]))[8] = scm__rc.d2151[46];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("call-syntax-handler")), SCM_OBJ(&libmacbasecall_syntax_handler__STUB), 0);
  libmacbasecall_syntax_handler__STUB.common.info = scm__rc.d2151[453];
  libmacbasecall_syntax_handler__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[454]);
  scm__rc.d2151[463] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[123])),TRUE); /* syntax-handler */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[296]), scm__rc.d2151[451]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[299]), scm__rc.d2151[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[300]), scm__rc.d2151[463]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[301]), scm__rc.d2151[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[302]), scm__rc.d2151[43]);
  scm__rc.d2151[464] = Scm_MakeExtendedPair(scm__rc.d2151[463], SCM_OBJ(&scm__rc.d2153[296]), SCM_OBJ(&scm__rc.d2153[304]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[465]))[3] = scm__rc.d2151[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[465]))[4] = scm__rc.d2151[46];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[465]))[5] = scm__rc.d2151[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2151[465]))[6] = scm__rc.d2151[46];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("syntax-handler")), SCM_OBJ(&libmacbasesyntax_handler__STUB), 0);
  libmacbasesyntax_handler__STUB.common.info = scm__rc.d2151[464];
  libmacbasesyntax_handler__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2151[465]);
  scm__rc.d2151[472] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[124])),TRUE); /* trace-macro */
  scm__rc.d2151[473] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[125])),FALSE); /* G2170 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[305]), scm__rc.d2151[473]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[306]), scm__rc.d2151[472]);
  scm__rc.d2151[474] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[126])),TRUE); /* x */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[307]), scm__rc.d2151[474]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[310]), scm__rc.d2151[13]);
  scm__rc.d2151[475] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2153[306]), SCM_OBJ(&scm__rc.d2153[307]), SCM_OBJ(&scm__rc.d2153[311]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[312]), scm__rc.d2151[475]);
  scm__rc.d2151[476] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[20]))->debugInfo = scm__rc.d2151[476];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[824]))[5] = SCM_WORD(scm__rc.d2151[177]);
  scm__rc.d2151[478] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[127])),TRUE); /* procedure? */
  scm__rc.d2151[477] = Scm_MakeIdentifier(scm__rc.d2151[478], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#procedure? */
  scm__rc.d2151[480] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[128])),TRUE); /* every */
  scm__rc.d2151[479] = Scm_MakeIdentifier(scm__rc.d2151[480], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#every */
  scm__rc.d2151[482] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[130])),TRUE); /* list? */
  scm__rc.d2151[481] = Scm_MakeIdentifier(scm__rc.d2151[482], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#list? */
  scm__rc.d2151[484] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[131])),TRUE); /* delete-duplicates */
  scm__rc.d2151[483] = Scm_MakeIdentifier(scm__rc.d2151[484], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#delete-duplicates */
  scm__rc.d2151[485] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[132])),FALSE); /* G2168 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[314]), scm__rc.d2151[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[315]), scm__rc.d2151[472]);
  scm__rc.d2151[486] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[133])),TRUE); /* objs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[316]), scm__rc.d2151[486]);
  scm__rc.d2151[487] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[21]))->name = scm__rc.d2151[485];/* (trace-macro #:G2168) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[21]))->debugInfo = scm__rc.d2151[487];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]))[5] = SCM_WORD(scm__rc.d2151[479]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]))[16] = SCM_WORD(scm__rc.d2151[30]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]))[18] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]))[24] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]))[26] = SCM_WORD(scm__rc.d2151[481]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]))[30] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]))[46] = SCM_WORD(scm__rc.d2151[483]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[831]))[48] = SCM_WORD(scm__rc.d2151[173]);
  scm__rc.d2151[489] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[134])),TRUE); /* equal? */
  scm__rc.d2151[488] = Scm_MakeIdentifier(scm__rc.d2151[489], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#equal? */
  scm__rc.d2151[491] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[135])),TRUE); /* match:error */
  scm__rc.d2151[493] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[136])),TRUE); /* util.match */
  scm__rc.d2151[492] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2151[493]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module util.match */
  scm__rc.d2151[490] = Scm_MakeIdentifier(scm__rc.d2151[491], SCM_MODULE(scm__rc.d2151[492]), SCM_NIL); /* util.match#match:error */
  scm__rc.d2151[494] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[137])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[321]), scm__rc.d2151[13]);
  scm__rc.d2151[495] = Scm_MakeExtendedPair(scm__rc.d2151[472], scm__rc.d2151[494], SCM_OBJ(&scm__rc.d2153[322]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[323]), scm__rc.d2151[495]);
  scm__rc.d2151[496] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[22]))->name = scm__rc.d2151[472];/* trace-macro */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[22]))->debugInfo = scm__rc.d2151[496];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[3] = SCM_WORD(scm__rc.d2151[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[5] = SCM_WORD(scm__rc.d2151[477]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[25] = SCM_WORD(scm__rc.d2151[488]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[34] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[41] = SCM_WORD(scm__rc.d2151[481]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[55] = SCM_WORD(scm__rc.d2151[490]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[64] = SCM_WORD(scm__rc.d2151[488]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[72] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[79] = SCM_WORD(scm__rc.d2151[481]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[93] = SCM_WORD(scm__rc.d2151[490]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[104] = SCM_WORD(scm__rc.d2151[481]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[118] = SCM_WORD(scm__rc.d2151[490]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[881]))[121] = SCM_WORD(scm__rc.d2151[173]);
  scm__rc.d2151[497] = Scm_MakeIdentifier(scm__rc.d2151[472], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#trace-macro */
  scm__rc.d2151[498] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[23]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[23]))->debugInfo = scm__rc.d2151[498];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1004]))[5] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1004]))[8] = SCM_WORD(scm__rc.d2151[472]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1004]))[15] = SCM_WORD(scm__rc.d2151[497]);
  scm__rc.d2151[499] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[138])),TRUE); /* untrace-macro */
  scm__rc.d2151[501] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[139])),TRUE); /* member */
  scm__rc.d2151[500] = Scm_MakeIdentifier(scm__rc.d2151[501], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#member */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[325]), scm__rc.d2151[499]);
  scm__rc.d2151[502] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[140])),FALSE); /* G2178 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[326]), scm__rc.d2151[502]);
  scm__rc.d2151[503] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[24]))->debugInfo = scm__rc.d2151[503];
  scm__rc.d2151[505] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[141])),TRUE); /* remove */
  scm__rc.d2151[504] = Scm_MakeIdentifier(scm__rc.d2151[505], SCM_MODULE(scm__rc.d2151[11]), SCM_NIL); /* gauche.internal#remove */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[331]), scm__rc.d2151[13]);
  scm__rc.d2151[506] = Scm_MakeExtendedPair(scm__rc.d2151[499], scm__rc.d2151[494], SCM_OBJ(&scm__rc.d2153[332]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[333]), scm__rc.d2151[506]);
  scm__rc.d2151[507] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[25]))->name = scm__rc.d2151[499];/* untrace-macro */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[25]))->debugInfo = scm__rc.d2151[507];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[5] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[12] = SCM_WORD(scm__rc.d2151[481]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[18] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[20] = SCM_WORD(scm__rc.d2151[481]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[28] = SCM_WORD(scm__rc.d2151[500]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[34] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[36] = SCM_WORD(scm__rc.d2151[504]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[46] = SCM_WORD(scm__rc.d2151[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[56] = SCM_WORD(scm__rc.d2151[490]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1026]))[58] = SCM_WORD(scm__rc.d2151[173]);
  scm__rc.d2151[508] = Scm_MakeIdentifier(scm__rc.d2151[499], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#untrace-macro */
  scm__rc.d2151[509] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[26])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[26]))->name = scm__rc.d2151[17];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[26]))->debugInfo = scm__rc.d2151[509];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1086]))[3] = SCM_WORD(scm__rc.d2151[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1086]))[6] = SCM_WORD(scm__rc.d2151[499]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[1086]))[13] = SCM_WORD(scm__rc.d2151[508]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2151[633] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[142])),FALSE); /* G2149 */
  scm__rc.d2151[634] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[143])),FALSE); /* G2150 */
  scm__rc.d2151[635] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[144])),FALSE); /* rest2148 */
  scm__rc.d2151[636] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[145])),TRUE); /* define-in-module */
  scm__rc.d2151[637] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[146])),FALSE); /* G2158 */
  scm__rc.d2151[638] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[147])),FALSE); /* G2159 */
  scm__rc.d2151[639] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[148])),FALSE); /* rest2157 */
  scm__rc.d2151[640] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[149])),TRUE); /* r */
  scm__rc.d2151[641] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[150])),TRUE); /* let* */
  scm__rc.d2151[642] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[151])),TRUE); /* vector? */
  scm__rc.d2151[643] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[152])),TRUE); /* pair? */
  scm__rc.d2151[644] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[153])),TRUE); /* nam */
  scm__rc.d2151[645] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[154])),TRUE); /* sym */
  scm__rc.d2151[646] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[155])),TRUE); /* tab */
  scm__rc.d2151[647] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[156])),TRUE); /* num */
  scm__rc.d2151[648] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[157])),TRUE); /* $ */
  scm__rc.d2151[649] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[158])),TRUE); /* rlet1 */
  scm__rc.d2151[650] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[159])),TRUE); /* macname */
  scm__rc.d2151[651] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[160])),TRUE); /* symbol? */
  scm__rc.d2151[652] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[161])),TRUE); /* ^z */
  scm__rc.d2151[653] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[162])),TRUE); /* and-let1 */
  scm__rc.d2151[654] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[163])),TRUE); /* out */
  scm__rc.d2151[655] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[164])),TRUE); /* p */
  scm__rc.d2151[656] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[165])),TRUE); /* append */
  scm__rc.d2151[657] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[166])),TRUE); /* ms */
  scm__rc.d2151[658] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[167])),TRUE); /* set! */
  scm__rc.d2151[659] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[168])),TRUE); /* ^x */
  scm__rc.d2151[660] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[169])),FALSE); /* G2164 */
  scm__rc.d2151[661] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[170])),FALSE); /* G2163 */
  scm__rc.d2151[662] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[171])),FALSE); /* G2162 */
  scm__rc.d2151[663] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[172])),TRUE); /* match */
  scm__rc.d2151[664] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[173])),TRUE); /* ... */
  scm__rc.d2151[665] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[174])),FALSE); /* G2177 */
  scm__rc.d2151[666] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[175])),FALSE); /* G2179 */
  scm__rc.d2151[667] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[176])),TRUE); /* cute */
  scm__rc.d2151[668] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[177])),TRUE); /* <> */
  scm__rc.d2151[669] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[178])),TRUE); /* letrec */
  scm__rc.d2151[670] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2152[179])),FALSE); /* G2175 */
}
