/* Generated automatically from libalpha.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
#include "gauche/vm.h"
#include "gauche/priv/glocP.h"
#include "gauche/priv/macroP.h"
#include "gauche/priv/procP.h"
#include "gauche/priv/vmP.h"
static ScmObj libalpha_25expression_name_mark_key(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libalpha_25expression_name_mark_key__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libalpha_25expression_name_mark_key, NULL, NULL);

static ScmObj libalpha_25exception_handler_mark_key(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libalpha_25exception_handler_mark_key__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libalpha_25exception_handler_mark_key, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 146u, 6u, 7u, 16u, 249u, 0u, 17u, 0u, 135u, 120u, 0u, 134u,
136u, 0u, 192u, 68u, 145u, 200u, 131u, 2u, 96u, 126u, 71u, 33u, 12u,
9u, 1u, 17u, 199u, 195u, 2u, 96u, 200u, 71u, 30u, 12u, 9u, 130u, 97u,
28u, 116u, 48u, 36u, 0u, 71u, 28u, 12u, 9u, 129u, 57u, 28u, 108u, 48u,
36u, 0u, 71u, 22u, 12u, 13u, 97u, 170u, 0u, 36u, 142u, 42u, 24u, 19u,
30u, 98u, 56u, 136u, 96u, 128u, 195u, 68u, 0u, 73u, 28u, 64u, 48u,
38u, 74u, 164u, 112u, 224u, 192u, 153u, 36u, 17u, 195u, 67u, 4u, 8u,
32u, 88u, 8u, 192u, 4u, 142u, 24u, 24u, 18u, 0u, 35u, 132u, 134u, 4u,
203u, 200u, 142u, 16u, 24u, 18u, 2u, 35u, 131u, 6u, 4u, 203u, 200u,
142u, 8u, 24u, 26u, 224u, 2u, 71u, 3u, 12u, 9u, 0u, 17u, 192u, 3u, 2u,
64u, 4u, 49u, 6u, 6u, 49u, 0u, 16u, 200u, 226u, 4u, 1u, 0u, 17u, 1u,
6u, 21u, 36u, 134u, 80u, 224u, 30u, 66u, 103u, 196u, 66u, 100u, 144u,
30u, 66u, 99u, 182u, 72u, 76u, 7u, 2u, 101u, 202u, 73u, 36u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 3u, 64u, 4u, 50u, 56u, 129u, 0u, 64u, 4u,
64u, 65u, 133u, 73u, 33u, 148u, 56u, 7u, 144u, 215u, 0u, 18u, 32u,
48u, 209u, 0u, 18u, 30u, 67u, 88u, 106u, 128u, 9u, 36u, 56u, 135u,
200u, 0u, 136u, 4u, 59u, 192u, 4u, 52u, 64u, 6u, 2u, 36u, 64u, 130u,
5u, 128u, 140u, 0u, 73u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u,
192u, 248u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u,
224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 148u, 134u, 8u, 30u, 8u, 36u, 114u, 128u, 192u, 144u, 65u,
28u, 148u, 48u, 65u, 32u, 65u, 80u, 0u, 106u, 130u, 137u, 32u, 53u,
193u, 68u, 54u, 193u, 97u, 133u, 76u, 24u, 72u, 109u, 130u, 195u, 68u,
20u, 68u, 27u, 7u, 65u, 4u, 65u, 240u, 92u, 16u, 73u, 35u, 145u, 134u,
4u, 194u, 128u, 142u, 64u, 24u, 19u, 22u, 18u, 56u, 248u, 96u, 72u,
32u, 142u, 60u, 24u, 18u, 11u, 35u, 142u, 6u, 4u, 197u, 132u, 142u,
52u, 24u, 19u, 19u, 210u, 56u, 200u, 96u, 72u, 32u, 142u, 42u, 24u,
19u, 19u, 210u, 56u, 160u, 96u, 100u, 2u, 11u, 9u, 137u, 41u, 33u,
49u, 61u, 9u, 139u, 9u, 35u, 137u, 134u, 4u, 196u, 148u, 142u, 32u,
24u, 19u, 12u, 18u, 56u, 120u, 96u, 72u, 40u, 142u, 28u, 24u, 19u, 7u,
146u, 56u, 104u, 96u, 72u, 0u, 142u, 22u, 24u, 19u, 7u, 146u, 56u,
72u, 96u, 131u, 97u, 8u, 32u, 145u, 194u, 3u, 2u, 65u, 4u, 112u, 112u,
192u, 144u, 129u, 28u, 20u, 48u, 38u, 132u, 136u, 17u, 193u, 3u, 3u,
32u, 16u, 64u, 132u, 73u, 33u, 52u, 36u, 64u, 66u, 66u, 11u, 128u, 8u,
76u, 79u, 66u, 98u, 194u, 66u, 96u, 56u, 72u, 224u, 65u, 129u, 52u,
43u, 64u, 142u, 0u, 24u, 19u, 66u, 180u, 8u, 98u, 12u, 12u, 98u, 16u,
128u, 8u, 109u, 130u, 2u, 104u, 86u, 128u, 77u, 9u, 16u, 9u, 161u,
104u, 33u, 48u, 28u, 36u, 144u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 9u, 194u, 16u, 1u, 13u, 176u, 64u, 132u,
72u, 131u, 97u, 8u, 32u, 136u, 72u, 65u, 112u, 1u, 16u, 108u, 29u, 4u,
17u, 7u, 193u, 112u, 65u, 34u, 7u, 130u, 9u, 36u, 112u, 144u, 192u,
198u, 19u, 3u, 20u, 193u, 32u, 142u, 14u, 24u, 19u, 1u, 194u, 56u,
16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 136u, 134u, 8u, 82u, 21u, 133u, 132u, 39u, 8u, 64u, 6u, 23u,
132u, 33u, 136u, 0u, 145u, 196u, 3u, 2u, 64u, 4u, 112u, 208u, 192u,
144u, 129u, 28u, 32u, 48u, 38u, 7u, 164u, 112u, 112u, 192u, 144u, 1u,
28u, 24u, 48u, 36u, 32u, 71u, 4u, 12u, 9u, 129u, 233u, 28u, 0u, 48u,
36u, 42u, 67u, 16u, 96u, 99u, 16u, 130u, 64u, 1u, 48u, 28u, 36u, 128u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 134u, 6u, 8u, 102u, 26u, 16u, 220u, 32u, 144u, 0u, 133u, 33u,
88u, 88u, 66u, 112u, 132u, 0u, 97u, 120u, 66u, 24u, 128u, 9u, 35u,
132u, 134u, 6u, 48u, 152u, 30u, 166u, 10u, 164u, 112u, 112u, 192u,
152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u,
225u, 32u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 157u, 134u, 8u, 112u, 54u, 1u, 14u, 194u, 16u, 241u, 16u,
248u, 128u, 162u, 2u, 32u, 104u, 0u, 134u, 80u, 215u, 16u, 16u, 235u,
10u, 66u, 16u, 17u, 14u, 176u, 164u, 33u, 11u, 8u, 76u, 52u, 68u, 4u,
53u, 68u, 4u, 194u, 225u, 162u, 32u, 48u, 192u, 106u, 136u, 12u, 4u,
73u, 33u, 164u, 58u, 195u, 112u, 132u, 0u, 73u, 36u, 115u, 160u, 192u,
152u, 220u, 145u, 206u, 67u, 2u, 64u, 4u, 115u, 128u, 192u, 144u,
129u, 28u, 216u, 48u, 36u, 54u, 71u, 52u, 12u, 9u, 141u, 201u, 28u,
192u, 48u, 38u, 29u, 100u, 114u, 240u, 192u, 144u, 17u, 28u, 180u,
48u, 38u, 48u, 4u, 114u, 144u, 192u, 152u, 175u, 17u, 201u, 3u, 2u,
98u, 40u, 71u, 35u, 12u, 9u, 137u, 201u, 28u, 132u, 48u, 38u, 36u,
36u, 113u, 240u, 192u, 152u, 138u, 17u, 199u, 3u, 2u, 66u, 4u, 113u,
160u, 192u, 144u, 161u, 28u, 96u, 48u, 38u, 29u, 100u, 113u, 80u,
192u, 152u, 95u, 145u, 197u, 3u, 2u, 64u, 68u, 113u, 48u, 192u, 144u,
129u, 28u, 68u, 48u, 36u, 40u, 71u, 15u, 12u, 9u, 133u, 249u, 28u,
52u, 48u, 38u, 20u, 228u, 112u, 192u, 192u, 145u, 1u, 28u, 44u, 48u,
38u, 11u, 100u, 112u, 144u, 192u, 152u, 65u, 17u, 194u, 3u, 2u, 64u,
4u, 112u, 96u, 192u, 152u, 65u, 17u, 193u, 3u, 2u, 96u, 104u, 71u, 3u,
12u, 9u, 129u, 185u, 28u, 4u, 48u, 36u, 60u, 71u, 0u, 12u, 9u, 8u,
16u, 196u, 24u, 24u, 196u, 32u, 144u, 0u, 76u, 7u, 9u, 32u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 134u, 6u, 8u, 102u, 26u, 12u, 240u, 130u, 64u, 2u, 28u, 13u,
128u, 67u, 176u, 132u, 60u, 68u, 62u, 32u, 40u, 128u, 136u, 26u, 0u,
33u, 148u, 53u, 196u, 4u, 58u, 194u, 144u, 132u, 4u, 67u, 172u, 41u,
8u, 66u, 194u, 19u, 13u, 17u, 1u, 13u, 81u, 1u, 48u, 184u, 104u, 136u,
12u, 48u, 26u, 162u, 3u, 1u, 18u, 72u, 105u, 14u, 176u, 220u, 33u, 0u,
18u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 29u, 166u, 10u, 100u, 112u,
112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u,
9u, 128u, 225u, 32u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 158u, 6u, 8u, 112u, 54u, 1u, 14u, 196u, 48u, 241u, 16u, 248u,
128u, 162u, 2u, 32u, 104u, 0u, 134u, 80u, 215u, 16u, 16u, 235u, 10u,
68u, 48u, 17u, 14u, 176u, 164u, 67u, 11u, 7u, 88u, 137u, 186u, 32u,
48u, 17u, 36u, 134u, 145u, 10u, 66u, 176u, 176u, 117u, 136u, 155u,
162u, 24u, 0u, 146u, 73u, 28u, 232u, 48u, 38u, 43u, 228u, 115u, 144u,
192u, 152u, 192u, 17u, 206u, 3u, 2u, 64u, 4u, 115u, 112u, 192u, 145u,
9u, 28u, 208u, 48u, 36u, 68u, 71u, 50u, 12u, 9u, 140u, 1u, 28u, 184u,
48u, 36u, 42u, 71u, 44u, 12u, 9u, 138u, 249u, 28u, 160u, 48u, 38u,
29u, 100u, 114u, 112u, 192u, 144u, 17u, 28u, 148u, 48u, 38u, 34u,
132u, 114u, 64u, 192u, 145u, 1u, 28u, 132u, 48u, 36u, 68u, 71u, 31u,
12u, 9u, 136u, 161u, 28u, 112u, 48u, 36u, 66u, 71u, 26u, 12u, 9u, 10u,
17u, 198u, 3u, 2u, 97u, 214u, 71u, 21u, 12u, 9u, 133u, 249u, 28u, 80u,
48u, 36u, 4u, 71u, 19u, 12u, 9u, 16u, 145u, 196u, 67u, 2u, 66u, 132u,
112u, 240u, 192u, 152u, 95u, 145u, 195u, 67u, 2u, 97u, 78u, 71u, 12u,
12u, 9u, 16u, 17u, 194u, 195u, 2u, 96u, 182u, 71u, 9u, 12u, 9u, 132u,
17u, 28u, 32u, 48u, 36u, 0u, 71u, 6u, 12u, 9u, 132u, 17u, 28u, 16u,
48u, 38u, 6u, 132u, 112u, 48u, 192u, 152u, 27u, 145u, 192u, 67u, 2u,
67u, 196u, 112u, 0u, 192u, 145u, 9u, 12u, 65u, 129u, 140u, 68u, 41u,
0u, 4u, 192u, 112u, 146u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 134u, 6u, 8u, 102u, 26u, 17u, 28u, 66u, 144u, 0u, 135u, 3u,
96u, 16u, 236u, 67u, 15u, 17u, 15u, 136u, 10u, 32u, 34u, 6u, 128u, 8u,
101u, 13u, 113u, 1u, 14u, 176u, 164u, 67u, 1u, 16u, 235u, 10u, 68u,
48u, 176u, 117u, 136u, 155u, 162u, 3u, 1u, 18u, 72u, 105u, 16u, 164u,
43u, 11u, 7u, 88u, 137u, 186u, 33u, 128u, 9u, 36u, 146u, 56u, 72u,
96u, 99u, 9u, 129u, 234u, 96u, 170u, 71u, 7u, 12u, 9u, 128u, 225u,
28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static ScmObj libalphamake_vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libalphamake_vector__STUB, 1, 2,SCM_FALSE,libalphamake_vector, NULL, NULL);

static ScmObj libalphagetter_with_setter(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libalphagetter_with_setter__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libalphagetter_with_setter, NULL, NULL);

static ScmObj libalphasetter_SETTER(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libalphasetter_SETTER__STUB, 2, 0,SCM_FALSE,libalphasetter_SETTER, NULL, NULL);

static ScmObj libalphasetter(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libalphasetter__STUB, 1, 0,SCM_FALSE,libalphasetter, SCM_MAKE_INT(SCM_VM_SETTER), NULL);


static ScmObj case_lambda_dispatch(ScmObj* args,int nargs,void* data);
static ScmObj delayed_case_lambda_inliner(ScmObj* args,int nargs,void* data);
static ScmObj libalphamake_case_lambda(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libalphamake_case_lambda__STUB, 4, 2,SCM_FALSE,libalphamake_case_lambda, NULL, NULL);

static ScmObj libalpha_25case_lambda_info(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libalpha_25case_lambda_info__STUB, 1, 0,SCM_FALSE,libalpha_25case_lambda_info, NULL, NULL);

static unsigned char uvector__00011[] = {
 0u, 3u, 169u, 134u, 7u, 24u, 144u, 58u, 68u, 188u, 4u, 146u, 58u,
144u, 96u, 76u, 12u, 72u, 234u, 33u, 129u, 34u, 66u, 58u, 112u, 96u,
113u, 14u, 98u, 38u, 2u, 39u, 14u, 145u, 68u, 74u, 75u, 112u, 137u,
226u, 146u, 76u, 72u, 67u, 164u, 75u, 192u, 73u, 35u, 166u, 134u, 4u,
197u, 84u, 142u, 152u, 24u, 19u, 13u, 50u, 58u, 88u, 96u, 72u, 144u,
142u, 146u, 24u, 19u, 17u, 210u, 58u, 64u, 96u, 72u, 164u, 142u, 138u,
24u, 19u, 15u, 178u, 58u, 32u, 96u, 72u, 160u, 142u, 132u, 24u, 25u,
98u, 144u, 152u, 100u, 4u, 192u, 112u, 145u, 208u, 67u, 2u, 69u, 36u,
116u, 0u, 192u, 200u, 4u, 82u, 34u, 168u, 174u, 37u, 36u, 132u, 203u,
40u, 145u, 207u, 195u, 2u, 102u, 212u, 71u, 62u, 12u, 9u, 18u, 145u,
207u, 67u, 2u, 69u, 100u, 115u, 176u, 193u, 22u, 68u, 132u, 142u,
116u, 24u, 18u, 36u, 35u, 155u, 134u, 8u, 178u, 36u, 17u, 48u, 2u,
39u, 14u, 145u, 68u, 75u, 22u, 146u, 252u, 34u, 120u, 184u, 146u, 73u,
28u, 216u, 48u, 38u, 132u, 196u, 17u, 204u, 195u, 2u, 104u, 80u, 57u,
28u, 200u, 48u, 36u, 92u, 71u, 46u, 12u, 9u, 161u, 51u, 100u, 114u,
208u, 192u, 154u, 19u, 54u, 71u, 44u, 12u, 9u, 20u, 17u, 202u, 195u,
2u, 68u, 132u, 114u, 144u, 192u, 203u, 23u, 4u, 208u, 148u, 64u, 154u,
17u, 14u, 72u, 229u, 1u, 129u, 34u, 226u, 57u, 56u, 96u, 100u, 2u,
46u, 17u, 84u, 87u, 18u, 146u, 66u, 104u, 104u, 249u, 35u, 147u, 6u,
4u, 208u, 232u, 178u, 57u, 40u, 96u, 72u, 148u, 142u, 72u, 24u, 18u,
43u, 35u, 145u, 6u, 8u, 190u, 37u, 17u, 132u, 99u, 192u, 73u, 35u,
144u, 134u, 4u, 209u, 8u, 178u, 56u, 232u, 96u, 100u, 2u, 40u, 17u,
148u, 103u, 26u, 18u, 35u, 17u, 25u, 70u, 177u, 161u, 34u, 43u, 17u,
148u, 109u, 26u, 18u, 67u, 35u, 136u, 17u, 32u, 97u, 82u, 68u, 75u,
192u, 9u, 12u, 161u, 52u, 65u, 80u, 70u, 241u, 112u, 77u, 14u, 139u,
9u, 161u, 40u, 129u, 52u, 34u, 28u, 136u, 222u, 41u, 9u, 155u, 80u,
76u, 50u, 2u, 96u, 56u, 73u, 36u, 113u, 176u, 192u, 154u, 37u, 6u,
71u, 26u, 12u, 9u, 26u, 17u, 197u, 131u, 2u, 104u, 148u, 25u, 28u,
80u, 48u, 38u, 137u, 7u, 145u, 196u, 195u, 2u, 70u, 132u, 112u, 240u,
192u, 154u, 36u, 30u, 71u, 13u, 12u, 9u, 162u, 51u, 100u, 112u, 192u,
192u, 145u, 161u, 28u, 32u, 48u, 38u, 136u, 205u, 145u, 193u, 131u,
2u, 70u, 132u, 112u, 80u, 192u, 200u, 4u, 104u, 35u, 136u, 164u, 146u,
28u, 35u, 64u, 244u, 19u, 68u, 96u, 9u, 36u, 112u, 48u, 192u, 154u,
51u, 20u, 71u, 2u, 12u, 9u, 20u, 145u, 192u, 3u, 2u, 104u, 204u, 81u,
12u, 65u, 129u, 140u, 69u, 36u, 71u, 49u, 160u, 77u, 25u, 138u, 9u,
162u, 48u, 4u, 146u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 134u, 6u, 8u, 102u, 26u, 17u, 212u, 82u, 68u, 115u, 26u, 8u,
226u, 41u, 33u, 144u, 8u, 160u, 70u, 81u, 156u, 104u, 72u, 140u, 68u,
101u, 26u, 198u, 132u, 136u, 172u, 70u, 81u, 180u, 104u, 73u, 12u,
142u, 32u, 68u, 129u, 133u, 73u, 17u, 47u, 0u, 36u, 50u, 136u, 190u,
37u, 17u, 132u, 99u, 192u, 73u, 17u, 188u, 92u, 34u, 168u, 174u, 37u,
34u, 44u, 137u, 4u, 76u, 0u, 137u, 195u, 164u, 81u, 18u, 197u, 164u,
191u, 8u, 158u, 46u, 36u, 146u, 34u, 200u, 144u, 145u, 27u, 197u, 34u,
42u, 138u, 226u, 82u, 28u, 67u, 152u, 137u, 128u, 137u, 195u, 164u,
81u, 18u, 146u, 220u, 34u, 120u, 164u, 147u, 18u, 16u, 233u, 18u,
240u, 18u, 67u, 140u, 72u, 29u, 34u, 94u, 2u, 73u, 36u, 146u, 71u, 9u,
12u, 12u, 97u, 48u, 61u, 76u, 18u, 136u, 224u, 225u, 129u, 48u, 28u,
35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00013[] = {
 0u, 80u,};
static ScmObj libalpha_25transfer_bindings(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libalpha_25transfer_bindings__STUB, 3, 2,SCM_FALSE,libalpha_25transfer_bindings, NULL, NULL);

static ScmObj libalpha_25make_macro_transformer(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libalpha_25make_macro_transformer__STUB, 2, 3,SCM_FALSE,libalpha_25make_macro_transformer, NULL, NULL);

static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[102];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%exception-handler-mark-key", 27, 27),
      SCM_STRING_CONST_INITIALIZER("%error-scan-keys", 16, 16),
      SCM_STRING_CONST_INITIALIZER("reverse!", 8, 8),
      SCM_STRING_CONST_INITIALIZER("keyword\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libalpha.scm", 12, 12),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%make-error-message", 19, 19),
      SCM_STRING_CONST_INITIALIZER("open-output-string", 18, 18),
      SCM_STRING_CONST_INITIALIZER("display", 7, 7),
      SCM_STRING_CONST_INITIALIZER(" ", 1, 1),
      SCM_STRING_CONST_INITIALIZER("write/ss", 8, 8),
      SCM_STRING_CONST_INITIALIZER("get-output-string", 17, 17),
      SCM_STRING_CONST_INITIALIZER("msg", 3, 3),
      SCM_STRING_CONST_INITIALIZER("make-error", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<error>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("message", 7, 7),
      SCM_STRING_CONST_INITIALIZER("message-prefix", 14, 14),
      SCM_STRING_CONST_INITIALIZER("message-args", 12, 12),
      SCM_STRING_CONST_INITIALIZER("make", 4, 4),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<condition-meta>", 16, 16),
      SCM_STRING_CONST_INITIALIZER("raise", 5, 5),
      SCM_STRING_CONST_INITIALIZER("errorf", 6, 6),
      SCM_STRING_CONST_INITIALIZER("format/ss", 9, 9),
      SCM_STRING_CONST_INITIALIZER("fmt", 3, 3),
      SCM_STRING_CONST_INITIALIZER("make-vector", 11, 11),
      SCM_STRING_CONST_INITIALIZER("k", 1, 1),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("fill", 4, 4),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("getter-with-setter", 18, 18),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("set", 3, 3),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<procedure>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("setter", 6, 6),
      SCM_STRING_CONST_INITIALIZER("(setter setter)", 15, 15),
      SCM_STRING_CONST_INITIALIZER("pass1/make-case-lambda-inliner", 30, 30),
      SCM_STRING_CONST_INITIALIZER("make-case-lambda", 16, 16),
      SCM_STRING_CONST_INITIALIZER("case-lambda-dispatcher", 22, 22),
      SCM_STRING_CONST_INITIALIZER("delayed-case-lambda-inliner", 27, 27),
      SCM_STRING_CONST_INITIALIZER("minarg", 6, 6),
      SCM_STRING_CONST_INITIALIZER("maxarg", 6, 6),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("closures", 8, 8),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%case-lambda-info", 17, 17),
      SCM_STRING_CONST_INITIALIZER("min-reqargs", 11, 11),
      SCM_STRING_CONST_INITIALIZER("max-optargs", 11, 11),
      SCM_STRING_CONST_INITIALIZER("dispatch-vector", 15, 15),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("case-lambda-decompose", 21, 21),
      SCM_STRING_CONST_INITIALIZER("get-keyword", 11, 11),
      SCM_STRING_CONST_INITIALIZER("reverse", 7, 7),
      SCM_STRING_CONST_INITIALIZER("%transfer-bindings", 18, 18),
      SCM_STRING_CONST_INITIALIZER("inlinable", 9, 9),
      SCM_STRING_CONST_INITIALIZER("const", 5, 5),
      SCM_STRING_CONST_INITIALIZER("from", 4, 4),
      SCM_STRING_CONST_INITIALIZER("to", 2, 2),
      SCM_STRING_CONST_INITIALIZER("symbols", 7, 7),
      SCM_STRING_CONST_INITIALIZER("flags", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<module>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%make-macro-transformer", 23, 23),
      SCM_STRING_CONST_INITIALIZER("parameterizable", 15, 15),
      SCM_STRING_CONST_INITIALIZER("identifier-macro", 16, 16),
      SCM_STRING_CONST_INITIALIZER("transformer", 11, 11),
      SCM_STRING_CONST_INITIALIZER("info", 4, 4),
      SCM_STRING_CONST_INITIALIZER("list*", 5, 5),
      SCM_STRING_CONST_INITIALIZER("keys", 4, 4),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("do", 2, 2),
      SCM_STRING_CONST_INITIALIZER("p2154", 5, 5),
      SCM_STRING_CONST_INITIALIZER("dolist", 6, 6),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("is-a\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("msgs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("i", 1, 1),
      SCM_STRING_CONST_INITIALIZER("quasiquote", 10, 10),
      SCM_STRING_CONST_INITIALIZER("unquote", 7, 7),
      SCM_STRING_CONST_INITIALIZER("min-args", 8, 8),
      SCM_STRING_CONST_INITIALIZER("vector-ref", 10, 10),
      SCM_STRING_CONST_INITIALIZER("dispatch-vec", 12, 12),
      SCM_STRING_CONST_INITIALIZER("optproc", 7, 7),
      SCM_STRING_CONST_INITIALIZER("=", 1, 1),
      SCM_STRING_CONST_INITIALIZER("-", 1, 1),
      SCM_STRING_CONST_INITIALIZER("len", 3, 3),
      SCM_STRING_CONST_INITIALIZER("if-let1", 7, 7),
      SCM_STRING_CONST_INITIALIZER("and-let1", 8, 8),
  },
};
static struct scm__rcRec {
  ScmUVector d2153[13];
  ScmCompiledCode d2152[14];
  ScmWord d2151[411];
  ScmPair d2150[121] SCM_ALIGN_PAIR;
  ScmObj d2149[278];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2153 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 177, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 88, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 232, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 65, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 68, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 54, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 246, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 98, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 244, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 92, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 458, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 155, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 2, uvector__00013, 0, NULL),
  },
  {   /* ScmCompiledCode d2152 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %error-scan-keys */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[0])), 43,
            23, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[14]),
            SCM_OBJ(&scm__rc.d2152[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[43])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %make-error-message */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[58])), 44,
            31, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[20]),
            SCM_OBJ(&scm__rc.d2152[3]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[102])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-error */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[117])), 20,
            15, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[26]),
            SCM_OBJ(&scm__rc.d2152[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[137])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* error */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[152])), 62,
            28, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[31]),
            SCM_OBJ(&scm__rc.d2152[7]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[214])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* errorf */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[229])), 63,
            26, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[37]),
            SCM_OBJ(&scm__rc.d2152[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[292])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* case-lambda-decompose */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[307])), 87,
            31, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[95]),
            SCM_OBJ(&scm__rc.d2152[11]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[394])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[409])), 1,
            0, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[410])), 1,
            0, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2151 */
    /* %error-scan-keys */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000008    /*   1 (CONSTN-PUSH) */,
    0x00002017    /*   2 (LOCAL-ENV 2) */,
    0x0000003e    /*   3 (LREF1) */,
    0x00000022    /*   4 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 14),
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 11),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* reverse! */,
    0x0000000d    /*  11 (PUSH) */,
    0x0000003e    /*  12 (LREF1) */,
    0x000020a3    /*  13 (VALUES-RET 2) */,
    0x0000100e    /*  14 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 19),
    0x0000006b    /*  16 (LREF1-CAR) */,
    0x00001062    /*  17 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* keyword? */,
    0x0000001e    /*  19 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 6),
    0x00000077    /*  21 (LREF1-CDR) */,
    0x00000022    /*  22 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 27),
    0x00000013    /*  24 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 6),
    0x00000014    /*  26 (RET) */,
    0x0000003e    /*  27 (LREF1) */,
    0x00000087    /*  28 (CDDR-PUSH) */,
    0x0000003e    /*  29 (LREF1) */,
    0x00000083    /*  30 (CADR-PUSH) */,
    0x0000006b    /*  31 (LREF1-CAR) */,
    0x0000000d    /*  32 (PUSH) */,
    0x0000003d    /*  33 (LREF0) */,
    0x00003089    /*  34 (LIST-STAR 3) */,
    0x0000000d    /*  35 (PUSH) */,
    0x0000101b    /*  36 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 3),
    0x00000014    /*  38 (RET) */,
    0x00000013    /*  39 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 6),
    0x00000014    /*  41 (RET) */,
    0x00000014    /*  42 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %error-scan-keys */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[0])) /* #<compiled-code %error-scan-keys@0x760b94661720> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %error-scan-keys */,
    0x00000014    /*  14 (RET) */,
    /* %make-error-message */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-string */,
    0x00001018    /*   4 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   5 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]) + 11),
    0x0000004d    /*   7 (LREF11-PUSH) */,
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000205f    /*   9 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000100e    /*  11 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]) + 40),
    0x0000004c    /*  13 (LREF10-PUSH) */,
    0x00001017    /*  14 (LOCAL-ENV 1) */,
    0x0000003d    /*  15 (LREF0) */,
    0x00000022    /*  16 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]) + 19),
    0x0000000c    /*  18 (CONSTU-RET) */,
    0x0000006a    /*  19 (LREF0-CAR) */,
    0x00001018    /*  20 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]) + 28),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[16])) /* " " */,
    0x0000004f    /*  25 (LREF20-PUSH) */,
    0x0000205f    /*  26 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000200e    /*  28 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]) + 34),
    0x00000048    /*  30 (LREF0-PUSH) */,
    0x0000004f    /*  31 (LREF20-PUSH) */,
    0x0000205f    /*  32 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* write/ss */,
    0x0000001a    /*  34 (POP-LOCAL-ENV) */,
    0x00000076    /*  35 (LREF0-CDR) */,
    0x0000000d    /*  36 (PUSH) */,
    0x0000101b    /*  37 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]) + 15),
    0x00000014    /*  39 (RET) */,
    0x00000048    /*  40 (LREF0-PUSH) */,
    0x00001060    /*  41 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* get-output-string */,
    0x00000014    /*  43 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[102]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %make-error-message */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[102]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[2])) /* #<compiled-code %make-error-message@0x760b9520a2a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %make-error-message */,
    0x00000014    /*  14 (RET) */,
    /* make-error */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <error> */,
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :message */,
    0x0000200e    /*   4 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[117]) + 10),
    0x00000049    /*   6 (LREF1-PUSH) */,
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x0000205f    /*   8 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %make-error-message */,
    0x0000000d    /*  10 (PUSH) */,
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :message-prefix */,
    0x00000049    /*  13 (LREF1-PUSH) */,
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :message-args */,
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x00007060    /*  17 (GREF-TAIL-CALL 7) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*  19 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[4])) /* #<compiled-code make-error@0x760b94f626c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-error */,
    0x00000014    /*  14 (RET) */,
    /* error */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <condition-meta> */,
    0x00000096    /*   3 (IS-A) */,
    0x0000001e    /*   4 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]) + 52),
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]) + 11),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %error-scan-keys */,
    0x00002036    /*  11 (TAIL-RECEIVE 2 0) */,
    0x0000003d    /*  12 (LREF0) */,
    0x00000022    /*  13 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]) + 24),
    0x0000000e    /*  15 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]) + 49),
    0x0000005e    /*  17 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x0000004d    /*  19 (LREF11-PUSH) */,
    0x0000003e    /*  20 (LREF1) */,
    0x00003095    /*  21 (TAIL-APPLY 3) */,
    0x00000013    /*  22 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]) + 49),
    0x0000000e    /*  24 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]) + 49),
    0x0000005e    /*  26 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x0000004d    /*  28 (LREF11-PUSH) */,
    0x00000006    /*  29 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :message */,
    0x0000200e    /*  31 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]) + 38),
    0x0000006a    /*  33 (LREF0-CAR) */,
    0x0000000d    /*  34 (PUSH) */,
    0x00000076    /*  35 (LREF0-CDR) */,
    0x00002062    /*  36 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %make-error-message */,
    0x0000000d    /*  38 (PUSH) */,
    0x00000006    /*  39 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :message-prefix */,
    0x0000006a    /*  41 (LREF0-CAR) */,
    0x0000000d    /*  42 (PUSH) */,
    0x00000006    /*  43 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :message-args */,
    0x00000076    /*  45 (LREF0-CDR) */,
    0x0000000d    /*  46 (PUSH) */,
    0x0000003e    /*  47 (LREF1) */,
    0x00009095    /*  48 (TAIL-APPLY 9) */,
    0x0000001a    /*  49 (POP-LOCAL-ENV) */,
    0x00000013    /*  50 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]) + 59),
    0x0000000e    /*  52 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]) + 59),
    0x0000005e    /*  54 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-error */,
    0x00000049    /*  56 (LREF1-PUSH) */,
    0x0000003d    /*  57 (LREF0) */,
    0x00003095    /*  58 (TAIL-APPLY 3) */,
    0x00001063    /*  59 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* raise */,
    0x00000014    /*  61 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[214]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[214]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[6])) /* #<compiled-code error@0x760b94b14d20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  14 (RET) */,
    /* errorf */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <condition-meta> */,
    0x00000096    /*   3 (IS-A) */,
    0x0000001e    /*   4 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 44),
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 11),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %error-scan-keys */,
    0x00002036    /*  11 (TAIL-RECEIVE 2 0) */,
    0x0000003d    /*  12 (LREF0) */,
    0x00000022    /*  13 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 24),
    0x0000000e    /*  15 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 41),
    0x0000005e    /*  17 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x0000004d    /*  19 (LREF11-PUSH) */,
    0x0000003e    /*  20 (LREF1) */,
    0x00003095    /*  21 (TAIL-APPLY 3) */,
    0x00000013    /*  22 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 41),
    0x0000000e    /*  24 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 41),
    0x0000005e    /*  26 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x0000004d    /*  28 (LREF11-PUSH) */,
    0x00000006    /*  29 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :message */,
    0x0000000e    /*  31 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 38),
    0x0000005e    /*  33 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* format/ss */,
    0x00000009    /*  35 (CONSTF-PUSH) */,
    0x0000003d    /*  36 (LREF0) */,
    0x00003095    /*  37 (TAIL-APPLY 3) */,
    0x0000000d    /*  38 (PUSH) */,
    0x0000003e    /*  39 (LREF1) */,
    0x00005095    /*  40 (TAIL-APPLY 5) */,
    0x0000001a    /*  41 (POP-LOCAL-ENV) */,
    0x00000013    /*  42 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 60),
    0x0000300e    /*  44 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 60),
    0x0000005e    /*  46 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <error> */,
    0x00000006    /*  48 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :message */,
    0x0000000e    /*  50 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]) + 58),
    0x0000005e    /*  52 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* format/ss */,
    0x00000009    /*  54 (CONSTF-PUSH) */,
    0x00000049    /*  55 (LREF1-PUSH) */,
    0x0000003d    /*  56 (LREF0) */,
    0x00004095    /*  57 (TAIL-APPLY 4) */,
    0x00003062    /*  58 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00001063    /*  60 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* raise */,
    0x00000014    /*  62 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[292]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[292]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[8])) /* #<compiled-code errorf@0x760b94585ba0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000014    /*  14 (RET) */,
    /* case-lambda-decompose */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %case-lambda-info */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   6 (LREF0) */,
    0x00000030    /*   7 (RF) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]) + 15),
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :min-reqargs */,
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x0000205f    /*  13 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* get-keyword */,
    0x0000200f    /*  15 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]) + 22),
    0x00000006    /*  17 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :max-optargs */,
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x0000205f    /*  20 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* get-keyword */,
    0x0000200f    /*  22 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]) + 29),
    0x00000006    /*  24 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :dispatch-vector */,
    0x00000048    /*  26 (LREF0-PUSH) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* get-keyword */,
    0x00003018    /*  29 (PUSH-LOCAL-ENV 3) */,
    0x00000008    /*  30 (CONSTN-PUSH) */,
    0x00000007    /*  31 (CONSTI-PUSH 0) */,
    0x00002017    /*  32 (LOCAL-ENV 2) */,
    -0x00000f3e   /*  33 (LREF11-NUMADDI -1) */,
    0x00000028    /*  34 (LREF-VAL0-BNUMNE 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]) + 61),
    0x0000004c    /*  36 (LREF10-PUSH) */,
    0x0000003d    /*  37 (LREF0) */,
    0x000000a8    /*  38 (VEC-REF) */,
    0x00001018    /*  39 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  40 (LREF0) */,
    0x0000001e    /*  41 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]) + 58),
    0x0000004d    /*  43 (LREF11-PUSH) */,
    0x0080203c    /*  44 (LREF 2 2) */,
    0x000010b6    /*  45 (LREF-VAL0-NUMADD2 1 0) */,
    -0x00000f44   /*  46 (NUMADDI -1) */,
    0x0000000d    /*  47 (PUSH) */,
    0x00000006    /*  48 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000003d    /*  50 (LREF0) */,
    0x00002088    /*  51 (LIST 2) */,
    0x00000067    /*  52 (CONS-PUSH) */,
    0x00000003    /*  53 (CONSTN) */,
    0x00000067    /*  54 (CONS-PUSH) */,
    0x00002060    /*  55 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* reverse */,
    0x00000014    /*  57 (RET) */,
    0x00000042    /*  58 (LREF11) */,
    0x00000093    /*  59 (REVERSE) */,
    0x00000014    /*  60 (RET) */,
    0x0000004c    /*  61 (LREF10-PUSH) */,
    0x0000003d    /*  62 (LREF0) */,
    0x000000a8    /*  63 (VEC-REF) */,
    0x00001018    /*  64 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  65 (LREF0) */,
    0x0000001e    /*  66 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]) + 81),
    0x0080203c    /*  68 (LREF 2 2) */,
    0x000010b6    /*  69 (LREF-VAL0-NUMADD2 1 0) */,
    0x0000000d    /*  70 (PUSH) */,
    0x00000009    /*  71 (CONSTF-PUSH) */,
    0x0000003d    /*  72 (LREF0) */,
    0x00002088    /*  73 (LIST 2) */,
    0x00000067    /*  74 (CONS-PUSH) */,
    0x00000042    /*  75 (LREF11) */,
    0x00000067    /*  76 (CONS-PUSH) */,
    0x000010cb    /*  77 (LREF10-NUMADDI-PUSH 1) */,
    0x0000201b    /*  78 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]) + 33),
    0x00000014    /*  80 (RET) */,
    0x0000004d    /*  81 (LREF11-PUSH) */,
    0x000010cb    /*  82 (LREF10-NUMADDI-PUSH 1) */,
    0x0000201b    /*  83 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]) + 33),
    0x00000014    /*  85 (RET) */,
    0x00000014    /*  86 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* case-lambda-decompose */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[10])) /* #<compiled-code case-lambda-decompose@0x760b942dfd20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* case-lambda-decompose */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x00000014    /*   0 (RET) */,
    /* %toplevel */
    0x00000014    /*   0 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_OBJ(&scm__rc.d2150[3]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_OBJ(&scm__rc.d2150[7]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(61U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_OBJ(&scm__rc.d2150[12]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[9])},
       { SCM_MAKE_INT(69U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[16])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[17])},
       { SCM_OBJ(&scm__rc.d2150[18]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(76U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[23])},
       { SCM_OBJ(&scm__rc.d2150[24]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(82U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[27])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[28])},
       { SCM_OBJ(&scm__rc.d2150[29]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(96U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_OBJ(&scm__rc.d2150[35]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[38])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_MAKE_INT(113U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[41])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[42])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[44])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[45])},
       { SCM_OBJ(&scm__rc.d2150[46]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[43]), SCM_OBJ(&scm__rc.d2150[47])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[49])},
       { SCM_MAKE_INT(123U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[54])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[55])},
       { SCM_OBJ(&scm__rc.d2150[56]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[53]), SCM_OBJ(&scm__rc.d2150[57])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(137U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[63])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[64])},
       { SCM_OBJ(&scm__rc.d2150[65]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[62]), SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[70])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_MAKE_INT(246U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[75])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[77])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_OBJ(&scm__rc.d2150[79]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[76]), SCM_OBJ(&scm__rc.d2150[80])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(307U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[84])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[86])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[87])},
       { SCM_OBJ(&scm__rc.d2150[88]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[85]), SCM_OBJ(&scm__rc.d2150[89])},
       { SCM_MAKE_INT(323U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[91])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[92])},
       { SCM_OBJ(&scm__rc.d2150[93]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[96])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[97])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[99])},
       { SCM_MAKE_INT(353U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[101])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[102])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[104])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[105])},
       { SCM_OBJ(&scm__rc.d2150[106]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[103]), SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[96])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[110])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_MAKE_INT(387U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[11]), SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[114])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[116])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[117])},
       { SCM_OBJ(&scm__rc.d2150[118]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[119])},
  },
  {   /* ScmObj d2149 */
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(9, FALSE),
    SCM_MAKE_INT(1U),
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(8, FALSE),
    SCM_MAKE_INT(1U),
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(59, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
  },
};

static ScmObj libalpha_25expression_name_mark_key(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("%expression-name-mark-key");
  {
{
ScmObj SCM_RESULT;

#line 52 "libalpha.scm"
{SCM_RESULT=(Scm__GetDenvKey(SCM_DENV_KEY_EXPRESSION_NAME));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libalpha_25exception_handler_mark_key(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("%exception-handler-mark-key");
  {
{
ScmObj SCM_RESULT;

#line 54 "libalpha.scm"
{SCM_RESULT=(Scm__GetDenvKey(SCM_DENV_KEY_EXCEPTION_HANDLER));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libalphamake_vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj k_scm;
  ScmSmallInt k;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  k_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(k_scm)) Scm_Error("ScmSmallInt required, but got %S", k_scm);
  k = SCM_INT_VALUE(k_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_UNBOUND;
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeVector(k,fill));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libalphagetter_with_setter(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmProcedure* proc;
  ScmObj set_scm;
  ScmProcedure* set;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("getter-with-setter");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(proc_scm)) Scm_Error("<procedure> required, but got %S", proc_scm);
  proc = SCM_PROCEDURE(proc_scm);
  set_scm = SCM_SUBRARGS[1];
  if (!SCM_PROCEDUREP(set_scm)) Scm_Error("<procedure> required, but got %S", set_scm);
  set = SCM_PROCEDURE(set_scm);
  {
{
ScmObj SCM_RESULT;

#line 124 "libalpha.scm"
switch (SCM_PROCEDURE_TYPE(proc)) {
case SCM_PROC_SUBR : case SCM_PROC_CLOSURE : {
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 126 "libalpha.scm"
case SCM_PROC_GENERIC : case SCM_PROC_METHOD : {
Scm_Error("You can't attach a setter to a generic function or a method using getter-with-setter.  Instead, you can define a setter method using the name (setter %S).",
#line 130 "libalpha.scm"
SCM_PROCEDURE_INFO(proc));
#line 853 "../lib/gauche/cgen/cise.scm"
break;}default: {
#line 131 "libalpha.scm"
Scm_Error("You can't attach a setter to %S.",SCM_OBJ(proc));
#line 853 "../lib/gauche/cgen/cise.scm"
break;}}

#line 132 "libalpha.scm"
{ScmObj p=Scm__CopyProcedure(proc,SCM_FALSE);
#line 134 "libalpha.scm"
SCM_PROCEDURE_SETTER_LOCKED(p)=(FALSE);
{SCM_RESULT=(Scm_SetterSet(SCM_PROCEDURE(p),set,TRUE));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libalphasetter_SETTER(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmProcedure* proc;
  ScmObj setter_scm;
  ScmProcedure* setter;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("(setter setter)");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(proc_scm)) Scm_Error("<procedure> required, but got %S", proc_scm);
  proc = SCM_PROCEDURE(proc_scm);
  setter_scm = SCM_SUBRARGS[1];
  if (!SCM_PROCEDUREP(setter_scm)) Scm_Error("<procedure> required, but got %S", setter_scm);
  setter = SCM_PROCEDURE(setter_scm);
  {

#line 140 "libalpha.scm"
Scm_SetterSet(proc,setter,FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libalphasetter(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("setter");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Setter(proc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

typedef struct case_lambda_packet_rec { ScmVector* dispatch_vector; int max_optargs; int min_reqargs; } case_lambda_packet;
static ScmObj case_lambda_dispatch(ScmObj* args,int nargs,void* data){{
#line 190 "libalpha.scm"
{case_lambda_packet* d=((case_lambda_packet* )(data));ScmObj rarg=
(args)[(nargs)-(1)];
SCM_ASSERT((nargs)>((d)->min_reqargs));;
SCM_ASSERT((nargs)<=((((d)->min_reqargs)+((d)->max_optargs))+(1)));;ScmObj p=
#line 197 "libalpha.scm"
SCM_VECTOR_ELEMENT((d)->dispatch_vector,
((nargs)-((d)->min_reqargs))-(1));
if (SCM_FALSEP(p)){{
Scm_Error("wrong number of arguments to case lambda: %S",
Scm_ArrayToListWithTail(args,(nargs)-(1),
(args)[(nargs)-(1)]));}}
if (SCM_NULLP(rarg)){
switch ((nargs)-(1)) {
case 0 : {return (Scm_VMApply0(p));
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 206 "libalpha.scm"
case 1 : {return (Scm_VMApply1(p,(args)[0]));
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 207 "libalpha.scm"
case 2 : {return (Scm_VMApply2(p,(args)[0],(args)[1]));
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 208 "libalpha.scm"
case 3 : {return (Scm_VMApply3(p,(args)[0],(args)[1],
(args)[2]));
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 210 "libalpha.scm"
case 4 : {return (Scm_VMApply4(p,(args)[0],(args)[1],
(args)[2],(args)[3]));
#line 853 "../lib/gauche/cgen/cise.scm"
break;}default: {
#line 212 "libalpha.scm"
return (Scm_VMApply(p,Scm_ArrayToList(args,(nargs)-(1))));
#line 853 "../lib/gauche/cgen/cise.scm"
break;}}} else {
#line 213 "libalpha.scm"
return (
Scm_VMApply(p,Scm_ArrayToListWithTail(args,(nargs)-(1),rarg)));}}}}
static ScmObj delayed_case_lambda_inliner(ScmObj* args,int nargs,void* data){{
#line 226 "libalpha.scm"
{ScmObj clambda_proc=SCM_OBJ(data);ScmObj make_inliner=
#line 228 "libalpha.scm"
Scm_GlobalVariableRef(Scm_GaucheInternalModule(),
SCM_SYMBOL(scm__rc.d2149[111]),0);
#line 231 "libalpha.scm"
if (SCM_UNBOUNDP(make_inliner)){{
return (SCM_UNDEFINED);}}
SCM_ASSERT((nargs)==(2));
{ScmObj src=(args)[0];ScmObj arg_iforms=
(args)[1];ScmObj inliner=
Scm_ApplyRec1(make_inliner,clambda_proc);
SCM_ASSERT(SCM_PROCEDUREP(inliner));
SCM_PROCEDURE_INLINER(clambda_proc)=(inliner);
return (Scm_VMApply2(inliner,src,arg_iforms));}}}}

static ScmObj libalphamake_case_lambda(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj minarg_scm;
  int minarg;
  ScmObj maxarg_scm;
  int maxarg;
  ScmObj closures_scm;
  ScmObj closures;
  ScmObj name_scm;
  ScmObj name;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("make-case-lambda");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  minarg_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(minarg_scm)) Scm_Error("int required, but got %S", minarg_scm);
  minarg = Scm_GetInteger(minarg_scm);
  maxarg_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(maxarg_scm)) Scm_Error("int required, but got %S", maxarg_scm);
  maxarg = Scm_GetInteger(maxarg_scm);
  closures_scm = SCM_SUBRARGS[3];
  if (!(closures_scm)) Scm_Error("scheme object required, but got %S", closures_scm);
  closures = (closures_scm);
  if (SCM_ARGCNT > 4+1) {
    name_scm = SCM_SUBRARGS[4];
  } else {
    name_scm = SCM_FALSE;
  }
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2155;
#line 251 "libalpha.scm"
{int max_optargs=((maxarg)-(minarg))+(2);ScmObj v_closures=
Scm_MakeVector(max_optargs,SCM_FALSE);int num_closures=0;ScmObj v_formals;case_lambda_packet* packet=
#line 255 "libalpha.scm"
SCM_NEW(case_lambda_packet);
SCM_FOR_EACH(cise__2155,closures) {{ScmObj c=SCM_CAR(cise__2155);
#line 258 "libalpha.scm"
{int req=SCM_PROCEDURE_REQUIRED(c);int opt=
SCM_PROCEDURE_OPTIONAL(c);int n=minarg;
#line 261 "libalpha.scm"
for (; (n)<=((maxarg)+(1)); (n)++){
if ((((n)==(req))||(
((n)>(req))&&((opt)>(0))))&&(
SCM_FALSEP(SCM_VECTOR_ELEMENT(v_closures,(n)-(minarg))))){{
SCM_VECTOR_ELEMENT(v_closures,(n)-(minarg))=(c);
++(num_closures);}}}}}}
#line 274 "libalpha.scm"
v_formals=(Scm_MakeVector(num_closures,SCM_FALSE));
{int i=0;
{int n=0;int cise__2156=max_optargs;for (; (n)<(cise__2156); (n)++){
{ScmObj c=SCM_VECTOR_ELEMENT(v_closures,n);
if ((SCM_PROCEDUREP(c))&&(
SCM_PAIRP(SCM_PROCEDURE_INFO(c)))){{
SCM_VECTOR_ELEMENT(v_formals,i)=(
SCM_CDR(SCM_PROCEDURE_INFO(c)));
(i)++;}}}}}}
(packet)->min_reqargs=(minarg),
(packet)->max_optargs=(max_optargs),
(packet)->dispatch_vector=(SCM_VECTOR(v_closures));
{ScmObj r=Scm_MakeSubr(case_lambda_dispatch,packet,minarg,max_optargs,
#line 288 "libalpha.scm"
SCM_LIST2(((SCM_FALSEP(name))?(
scm__rc.d2149[112]):(name)),v_formals));ScmObj make_inliner=
#line 293 "libalpha.scm"
Scm_GlobalVariableRef(Scm_GaucheInternalModule(),
SCM_SYMBOL(scm__rc.d2149[111]),0);
#line 296 "libalpha.scm"
if (SCM_UNBOUNDP(make_inliner)){
SCM_PROCEDURE_INLINER(r)=(
Scm_MakeSubr(delayed_case_lambda_inliner,
((void* )(r)),2,0,
scm__rc.d2149[113]));} else {
SCM_PROCEDURE_INLINER(r)=(
Scm_ApplyRec1(make_inliner,r));}
{SCM_RESULT=(r);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libalpha_25case_lambda_info(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%case-lambda-info");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 308 "libalpha.scm"
if ((SCM_SUBRP(obj))&&(
(SCM_SUBR_FUNC(obj))==(case_lambda_dispatch))){
{case_lambda_packet* packet=((case_lambda_packet* )(
SCM_SUBR_DATA(obj)));
{SCM_RESULT=(Scm_Cons(scm__rc.d2149[133],Scm_Cons(
SCM_MAKE_INT((packet)->min_reqargs),Scm_Cons(
scm__rc.d2149[134],Scm_Cons(
SCM_MAKE_INT((packet)->max_optargs),Scm_Cons(
scm__rc.d2149[135],Scm_Cons(
SCM_OBJ((packet)->dispatch_vector),SCM_NIL)))))));goto SCM_STUB_RETURN;}}} else {
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libalpha_25transfer_bindings(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj from_scm;
  ScmModule* from;
  ScmObj to_scm;
  ScmModule* to;
  ScmObj symbols_scm;
  ScmObj symbols;
  ScmObj flags_scm;
  ScmObj flags;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("%transfer-bindings");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  from_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(from_scm)) Scm_Error("<module> required, but got %S", from_scm);
  from = SCM_MODULE(from_scm);
  to_scm = SCM_SUBRARGS[1];
  if (!SCM_MODULEP(to_scm)) Scm_Error("<module> required, but got %S", to_scm);
  to = SCM_MODULE(to_scm);
  symbols_scm = SCM_SUBRARGS[2];
  if (!(symbols_scm)) Scm_Error("scheme object required, but got %S", symbols_scm);
  symbols = (symbols_scm);
  if (SCM_ARGCNT > 3+1) {
    flags_scm = SCM_SUBRARGS[3];
  } else {
    flags_scm = SCM_FALSE;
  }
  if (!(flags_scm)) Scm_Error("scheme object required, but got %S", flags_scm);
  flags = (flags_scm);
  {
ScmObj cise__2158;ScmObj cise__2157;
#line 356 "libalpha.scm"
SCM_FOR_EACH(cise__2157,symbols) {{ScmObj sym=SCM_CAR(cise__2157);
SCM_ASSERT(SCM_SYMBOLP(sym));
{ScmGloc* g=Scm_FindBinding(from,SCM_SYMBOL(sym),0);u_long lflags=0;
#line 360 "libalpha.scm"
SCM_ASSERT((g)!=(NULL));
if (SCM_PAIRP(flags)){
SCM_FOR_EACH(cise__2158,flags) {{ScmObj fl=SCM_CAR(cise__2158);
if (SCM_EQ(fl,scm__rc.d2149[158])){
(lflags)|=(SCM_BINDING_CONST);}else if(
SCM_EQ(fl,scm__rc.d2149[157])){
(lflags)|=(SCM_BINDING_INLINABLE);} else {
#line 368 "libalpha.scm"
Scm_Error("unknown flag: %S",fl);}}}} else {
#line 371 "libalpha.scm"
if (Scm_GlocInlinableP(g)){{
(lflags)|=(SCM_BINDING_INLINABLE);}}
if (Scm_GlocConstP(g)){{
(lflags)|=(SCM_BINDING_CONST);}}}
Scm_MakeBinding(to,SCM_SYMBOL(sym),SCM_GLOC_GET(g),lflags);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libalpha_25make_macro_transformer(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmObj name;
  ScmObj transformer_scm;
  ScmObj transformer;
  ScmObj info_scm;
  ScmObj info;
  ScmObj flags_scm;
  ScmObj flags;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("%make-macro-transformer");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  transformer_scm = SCM_SUBRARGS[1];
  if (!(transformer_scm)) Scm_Error("scheme object required, but got %S", transformer_scm);
  transformer = (transformer_scm);
  if (SCM_ARGCNT > 2+1) {
    info_scm = SCM_SUBRARGS[2];
  } else {
    info_scm = SCM_NIL;
  }
  if (!(info_scm)) Scm_Error("scheme object required, but got %S", info_scm);
  info = (info_scm);
  if (SCM_ARGCNT > 3+1) {
    flags_scm = SCM_SUBRARGS[3];
  } else {
    flags_scm = SCM_NIL;
  }
  if (!(flags_scm)) Scm_Error("scheme object required, but got %S", flags_scm);
  flags = (flags_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2159;
#line 390 "libalpha.scm"
{u_long flag_bits=0;
SCM_FOR_EACH(cise__2159,flags) {{ScmObj flag=SCM_CAR(cise__2159);
if (
SCM_EQ(flag,scm__rc.d2149[179])){
(flag_bits)|=(SCM_MACRO_IDENTIFIER);}else if(
SCM_EQ(flag,scm__rc.d2149[178])){
(flag_bits)|=(SCM_MACRO_PARAMETERIZABLE);} else {
#line 398 "libalpha.scm"
Scm_Error("Unknown flag symbol: %S",flag);}}}
#line 400 "libalpha.scm"
{SCM_RESULT=(Scm_MakeMacro(name,transformer,info,flag_bits));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[21];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[254];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[255];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[20];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[256];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[17];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[15];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[36];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[257];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[258];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[259];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[137];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = SCM_UNDEFINED;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[32];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = SCM_OBJ(&scm__sc.d2148[16]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[34];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[37];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[30];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[260];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[28];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[49];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[44];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[45];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[46];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[47];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[261];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[91];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[42];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[59];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[262];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[56];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[263];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[264];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[67];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[66];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[64];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[265];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[266];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[267];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[268];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[269];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[89];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[270];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[271];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[151];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = SCM_MAKE_INT(-1);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[272];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[273];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[274];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[275];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[149];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[133];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[182];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[134];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[135];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[276];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[136];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[277];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[193]), i++) = scm__rc.d2149[146];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[193]);
}
void Scm_Init_libalpha() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[1])),TRUE); /* bind-info */
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[2])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1]), scm__rc.d2149[0]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[2]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[3]), scm__rc.d2149[1]);
  scm__rc.d2149[3] = Scm_MakeExtendedPair(scm__rc.d2149[0], SCM_NIL, SCM_OBJ(&scm__rc.d2150[4]));
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[3])),TRUE); /* -> */
  scm__rc.d2149[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[4])),TRUE); /* <top> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[6]))[3] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[6]))[4] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[6]))[5] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%expression-name-mark-key")), SCM_OBJ(&libalpha_25expression_name_mark_key__STUB), 0);
  libalpha_25expression_name_mark_key__STUB.common.info = scm__rc.d2149[3];
  libalpha_25expression_name_mark_key__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[6]);
  scm__rc.d2149[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[5])),TRUE); /* %exception-handler-mark-key */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[5]), scm__rc.d2149[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[6]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[7]), scm__rc.d2149[1]);
  scm__rc.d2149[13] = Scm_MakeExtendedPair(scm__rc.d2149[12], SCM_NIL, SCM_OBJ(&scm__rc.d2150[8]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%exception-handler-mark-key")), SCM_OBJ(&libalpha_25exception_handler_mark_key__STUB), 0);
  libalpha_25exception_handler_mark_key__STUB.common.info = scm__rc.d2149[13];
  libalpha_25exception_handler_mark_key__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[6]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[14] = Scm_MakeIdentifier(scm__rc.d2149[0], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[6])),TRUE); /* %error-scan-keys */
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[7])),TRUE); /* reverse! */
  scm__rc.d2149[18] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[2]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[16] = Scm_MakeIdentifier(scm__rc.d2149[17], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#reverse! */
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[8])),TRUE); /* keyword? */
  scm__rc.d2149[19] = Scm_MakeIdentifier(scm__rc.d2149[20], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#keyword? */
  scm__rc.d2149[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[9]), scm__rc.d2149[21]);
  scm__rc.d2149[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[12]), scm__rc.d2149[22]);
  scm__rc.d2149[23] = Scm_MakeExtendedPair(scm__rc.d2149[15], SCM_OBJ(&scm__rc.d2150[9]), SCM_OBJ(&scm__rc.d2150[13]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2149[23]);
  scm__rc.d2149[24] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->name = scm__rc.d2149[15];/* %error-scan-keys */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->debugInfo = scm__rc.d2149[24];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[10] = SCM_WORD(scm__rc.d2149[16]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[18] = SCM_WORD(scm__rc.d2149[19]);
  scm__rc.d2149[25] = Scm_MakeIdentifier(scm__rc.d2149[15], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#%error-scan-keys */
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* %toplevel */
  scm__rc.d2149[27] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->name = scm__rc.d2149[26];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->debugInfo = scm__rc.d2149[27];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]))[3] = SCM_WORD(scm__rc.d2149[14]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]))[6] = SCM_WORD(scm__rc.d2149[15]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[43]))[13] = SCM_WORD(scm__rc.d2149[25]);
  scm__rc.d2149[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* %make-error-message */
  scm__rc.d2149[30] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* open-output-string */
  scm__rc.d2149[29] = Scm_MakeIdentifier(scm__rc.d2149[30], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#open-output-string */
  scm__rc.d2149[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* display */
  scm__rc.d2149[31] = Scm_MakeIdentifier(scm__rc.d2149[32], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#display */
  scm__rc.d2149[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* write/ss */
  scm__rc.d2149[33] = Scm_MakeIdentifier(scm__rc.d2149[34], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#write/ss */
  scm__rc.d2149[36] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* get-output-string */
  scm__rc.d2149[35] = Scm_MakeIdentifier(scm__rc.d2149[36], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#get-output-string */
  scm__rc.d2149[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* msg */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[15]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[18]), scm__rc.d2149[22]);
  scm__rc.d2149[38] = Scm_MakeExtendedPair(scm__rc.d2149[28], SCM_OBJ(&scm__rc.d2150[15]), SCM_OBJ(&scm__rc.d2150[19]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[20]), scm__rc.d2149[38]);
  scm__rc.d2149[39] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->name = scm__rc.d2149[28];/* %make-error-message */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->debugInfo = scm__rc.d2149[39];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]))[3] = SCM_WORD(scm__rc.d2149[29]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]))[10] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]))[27] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]))[33] = SCM_WORD(scm__rc.d2149[33]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[58]))[42] = SCM_WORD(scm__rc.d2149[35]);
  scm__rc.d2149[40] = Scm_MakeIdentifier(scm__rc.d2149[28], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#%make-error-message */
  scm__rc.d2149[41] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3]))->name = scm__rc.d2149[26];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3]))->debugInfo = scm__rc.d2149[41];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[102]))[3] = SCM_WORD(scm__rc.d2149[14]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[102]))[6] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[102]))[13] = SCM_WORD(scm__rc.d2149[40]);
  scm__rc.d2149[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* make-error */
  scm__rc.d2149[44] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* <error> */
  scm__rc.d2149[43] = Scm_MakeIdentifier(scm__rc.d2149[44], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#<error> */
  scm__rc.d2149[45] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22]))); /* :message */
  scm__rc.d2149[46] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23]))); /* :message-prefix */
  scm__rc.d2149[47] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24]))); /* :message-args */
  scm__rc.d2149[49] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* make */
  scm__rc.d2149[48] = Scm_MakeIdentifier(scm__rc.d2149[49], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#make */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[21]), scm__rc.d2149[37]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[21]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[24]), scm__rc.d2149[22]);
  scm__rc.d2149[50] = Scm_MakeExtendedPair(scm__rc.d2149[42], SCM_OBJ(&scm__rc.d2150[21]), SCM_OBJ(&scm__rc.d2150[25]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[50]);
  scm__rc.d2149[51] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4]))->name = scm__rc.d2149[42];/* make-error */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4]))->debugInfo = scm__rc.d2149[51];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[117]))[1] = SCM_WORD(scm__rc.d2149[43]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[117]))[3] = SCM_WORD(scm__rc.d2149[45]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[117]))[9] = SCM_WORD(scm__rc.d2149[40]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[117]))[12] = SCM_WORD(scm__rc.d2149[46]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[117]))[15] = SCM_WORD(scm__rc.d2149[47]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[117]))[18] = SCM_WORD(scm__rc.d2149[48]);
  scm__rc.d2149[52] = Scm_MakeIdentifier(scm__rc.d2149[42], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#make-error */
  scm__rc.d2149[53] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5]))->name = scm__rc.d2149[26];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5]))->debugInfo = scm__rc.d2149[53];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[3] = SCM_WORD(scm__rc.d2149[14]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[6] = SCM_WORD(scm__rc.d2149[42]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[13] = SCM_WORD(scm__rc.d2149[52]);
  scm__rc.d2149[54] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* error */
  scm__rc.d2149[56] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* <condition-meta> */
  scm__rc.d2149[55] = Scm_MakeIdentifier(scm__rc.d2149[56], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#<condition-meta> */
  scm__rc.d2149[57] = Scm_MakeIdentifier(scm__rc.d2149[42], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#make-error */
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* raise */
  scm__rc.d2149[58] = Scm_MakeIdentifier(scm__rc.d2149[59], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#raise */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[29]), scm__rc.d2149[22]);
  scm__rc.d2149[60] = Scm_MakeExtendedPair(scm__rc.d2149[54], SCM_OBJ(&scm__rc.d2150[21]), SCM_OBJ(&scm__rc.d2150[30]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[31]), scm__rc.d2149[60]);
  scm__rc.d2149[61] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6]))->name = scm__rc.d2149[54];/* error */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6]))->debugInfo = scm__rc.d2149[61];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[2] = SCM_WORD(scm__rc.d2149[55]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[10] = SCM_WORD(scm__rc.d2149[25]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[18] = SCM_WORD(scm__rc.d2149[48]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[27] = SCM_WORD(scm__rc.d2149[48]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[30] = SCM_WORD(scm__rc.d2149[45]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[37] = SCM_WORD(scm__rc.d2149[40]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[40] = SCM_WORD(scm__rc.d2149[46]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[44] = SCM_WORD(scm__rc.d2149[47]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[55] = SCM_WORD(scm__rc.d2149[57]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[152]))[60] = SCM_WORD(scm__rc.d2149[58]);
  scm__rc.d2149[62] = Scm_MakeIdentifier(scm__rc.d2149[54], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2149[63] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->name = scm__rc.d2149[26];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->debugInfo = scm__rc.d2149[63];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[214]))[3] = SCM_WORD(scm__rc.d2149[14]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[214]))[6] = SCM_WORD(scm__rc.d2149[54]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[214]))[13] = SCM_WORD(scm__rc.d2149[62]);
  scm__rc.d2149[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* errorf */
  scm__rc.d2149[66] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* format/ss */
  scm__rc.d2149[65] = Scm_MakeIdentifier(scm__rc.d2149[66], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#format/ss */
  scm__rc.d2149[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* fmt */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[32]), scm__rc.d2149[67]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[32]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[35]), scm__rc.d2149[22]);
  scm__rc.d2149[68] = Scm_MakeExtendedPair(scm__rc.d2149[64], SCM_OBJ(&scm__rc.d2150[32]), SCM_OBJ(&scm__rc.d2150[36]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[37]), scm__rc.d2149[68]);
  scm__rc.d2149[69] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[8]))->name = scm__rc.d2149[64];/* errorf */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[8]))->debugInfo = scm__rc.d2149[69];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[2] = SCM_WORD(scm__rc.d2149[55]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[10] = SCM_WORD(scm__rc.d2149[25]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[18] = SCM_WORD(scm__rc.d2149[48]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[27] = SCM_WORD(scm__rc.d2149[48]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[30] = SCM_WORD(scm__rc.d2149[45]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[34] = SCM_WORD(scm__rc.d2149[65]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[47] = SCM_WORD(scm__rc.d2149[43]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[49] = SCM_WORD(scm__rc.d2149[45]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[53] = SCM_WORD(scm__rc.d2149[65]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[59] = SCM_WORD(scm__rc.d2149[48]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[229]))[61] = SCM_WORD(scm__rc.d2149[58]);
  scm__rc.d2149[70] = Scm_MakeIdentifier(scm__rc.d2149[64], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#errorf */
  scm__rc.d2149[71] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->name = scm__rc.d2149[26];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->debugInfo = scm__rc.d2149[71];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[292]))[3] = SCM_WORD(scm__rc.d2149[14]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[292]))[6] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[292]))[13] = SCM_WORD(scm__rc.d2149[70]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[72] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* make-vector */
  scm__rc.d2149[73] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* k */
  scm__rc.d2149[74] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34]))); /* :optional */
  scm__rc.d2149[75] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* fill */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[38]), scm__rc.d2149[75]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[39]), scm__rc.d2149[74]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[40]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[43]), scm__rc.d2149[22]);
  scm__rc.d2149[76] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* scheme */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[44]), scm__rc.d2149[72]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2149[76]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[1]);
  scm__rc.d2149[77] = Scm_MakeExtendedPair(scm__rc.d2149[72], SCM_OBJ(&scm__rc.d2150[40]), SCM_OBJ(&scm__rc.d2150[48]));
  scm__rc.d2149[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* <fixnum> */
  scm__rc.d2149[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[80]))[3] = scm__rc.d2149[76];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[80]))[4] = scm__rc.d2149[78];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[80]))[5] = scm__rc.d2149[79];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[80]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[80]))[7] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("make-vector")), SCM_OBJ(&libalphamake_vector__STUB), 0);
  libalphamake_vector__STUB.common.info = scm__rc.d2149[77];
  libalphamake_vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[80]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[88] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* getter-with-setter */
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* proc */
  scm__rc.d2149[90] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* set */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[49]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[50]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[53]), scm__rc.d2149[22]);
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[55]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[56]), scm__rc.d2149[1]);
  scm__rc.d2149[92] = Scm_MakeExtendedPair(scm__rc.d2149[88], SCM_OBJ(&scm__rc.d2150[50]), SCM_OBJ(&scm__rc.d2150[58]));
  scm__rc.d2149[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* <procedure> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[3] = scm__rc.d2149[91];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[4] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[5] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[7] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("getter-with-setter")), SCM_OBJ(&libalphagetter_with_setter__STUB), 0);
  libalphagetter_with_setter__STUB.common.info = scm__rc.d2149[92];
  libalphagetter_with_setter__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[94]);
  scm__rc.d2149[102] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* setter */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[62]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[63]), scm__rc.d2149[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[64]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[65]), scm__rc.d2149[1]);
  scm__rc.d2149[103] = Scm_MakeExtendedPair(scm__rc.d2149[102], SCM_OBJ(&scm__rc.d2150[59]), SCM_OBJ(&scm__rc.d2150[67]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[104]))[3] = scm__rc.d2149[91];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[104]))[4] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[104]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[104]))[6] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("setter")), SCM_OBJ(&libalphasetter__STUB), SCM_BINDING_INLINABLE);
  libalphasetter__STUB.common.info = scm__rc.d2149[103];
  libalphasetter__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[104]);
  Scm_SetterSet(SCM_PROCEDURE(&libalphasetter__STUB), SCM_PROCEDURE(&libalphasetter_SETTER__STUB), TRUE);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[111] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* pass1/make-case-lambda-inliner */
  scm__rc.d2149[112] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* case-lambda-dispatcher */
  scm__rc.d2149[113] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* delayed-case-lambda-inliner */
  scm__rc.d2149[114] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* make-case-lambda */
  scm__rc.d2149[115] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* minarg */
  scm__rc.d2149[116] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* maxarg */
  scm__rc.d2149[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),TRUE); /* _ */
  scm__rc.d2149[118] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* closures */
  scm__rc.d2149[119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[68]), scm__rc.d2149[119]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[74]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[70]), scm__rc.d2149[118]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[71]), scm__rc.d2149[117]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[72]), scm__rc.d2149[116]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[73]), scm__rc.d2149[115]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[76]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[114]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[79]), scm__rc.d2149[1]);
  scm__rc.d2149[120] = Scm_MakeExtendedPair(scm__rc.d2149[114], SCM_OBJ(&scm__rc.d2150[73]), SCM_OBJ(&scm__rc.d2150[81]));
  scm__rc.d2149[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[3] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[4] = scm__rc.d2149[121];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[5] = scm__rc.d2149[121];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[6] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[7] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[8] = scm__rc.d2149[79];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[9] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[10] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("make-case-lambda")), SCM_OBJ(&libalphamake_case_lambda__STUB), 0);
  libalphamake_case_lambda__STUB.common.info = scm__rc.d2149[120];
  libalphamake_case_lambda__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[122]);
  scm__rc.d2149[133] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57]))); /* :min-reqargs */
  scm__rc.d2149[134] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58]))); /* :max-optargs */
  scm__rc.d2149[135] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59]))); /* :dispatch-vector */
  scm__rc.d2149[136] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* %case-lambda-info */
  scm__rc.d2149[137] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[82]), scm__rc.d2149[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[85]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[86]), scm__rc.d2149[136]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[87]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[88]), scm__rc.d2149[1]);
  scm__rc.d2149[138] = Scm_MakeExtendedPair(scm__rc.d2149[136], SCM_OBJ(&scm__rc.d2150[82]), SCM_OBJ(&scm__rc.d2150[90]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[139]))[3] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[139]))[4] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[139]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[139]))[6] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%case-lambda-info")), SCM_OBJ(&libalpha_25case_lambda_info__STUB), 0);
  libalpha_25case_lambda_info__STUB.common.info = scm__rc.d2149[138];
  libalpha_25case_lambda_info__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[139]);
  scm__rc.d2149[146] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61])),TRUE); /* case-lambda-decompose */
  scm__rc.d2149[147] = Scm_MakeIdentifier(scm__rc.d2149[136], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#%case-lambda-info */
  scm__rc.d2149[149] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* get-keyword */
  scm__rc.d2149[148] = Scm_MakeIdentifier(scm__rc.d2149[149], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#get-keyword */
  scm__rc.d2149[151] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* reverse */
  scm__rc.d2149[150] = Scm_MakeIdentifier(scm__rc.d2149[151], SCM_MODULE(scm__rc.d2149[18]), SCM_NIL); /* gauche.internal#reverse */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[93]), scm__rc.d2149[22]);
  scm__rc.d2149[152] = Scm_MakeExtendedPair(scm__rc.d2149[146], SCM_OBJ(&scm__rc.d2150[59]), SCM_OBJ(&scm__rc.d2150[94]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[95]), scm__rc.d2149[152]);
  scm__rc.d2149[153] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[10]))->name = scm__rc.d2149[146];/* case-lambda-decompose */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[10]))->debugInfo = scm__rc.d2149[153];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]))[4] = SCM_WORD(scm__rc.d2149[147]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]))[11] = SCM_WORD(scm__rc.d2149[133]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]))[14] = SCM_WORD(scm__rc.d2149[148]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]))[18] = SCM_WORD(scm__rc.d2149[134]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]))[21] = SCM_WORD(scm__rc.d2149[148]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]))[25] = SCM_WORD(scm__rc.d2149[135]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]))[28] = SCM_WORD(scm__rc.d2149[148]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[307]))[56] = SCM_WORD(scm__rc.d2149[150]);
  scm__rc.d2149[154] = Scm_MakeIdentifier(scm__rc.d2149[146], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#case-lambda-decompose */
  scm__rc.d2149[155] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->name = scm__rc.d2149[26];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->debugInfo = scm__rc.d2149[155];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]))[3] = SCM_WORD(scm__rc.d2149[14]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]))[6] = SCM_WORD(scm__rc.d2149[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]))[13] = SCM_WORD(scm__rc.d2149[154]);
  scm__rc.d2149[156] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->name = scm__rc.d2149[26];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->debugInfo = scm__rc.d2149[156];
  scm__rc.d2149[157] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* inlinable */
  scm__rc.d2149[158] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* const */
  scm__rc.d2149[159] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* %transfer-bindings */
  scm__rc.d2149[160] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* from */
  scm__rc.d2149[161] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* to */
  scm__rc.d2149[162] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* symbols */
  scm__rc.d2149[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* flags */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[96]), scm__rc.d2149[163]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[97]), scm__rc.d2149[74]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[162]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[161]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[100]), scm__rc.d2149[160]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[104]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[105]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[106]), scm__rc.d2149[1]);
  scm__rc.d2149[164] = Scm_MakeExtendedPair(scm__rc.d2149[159], SCM_OBJ(&scm__rc.d2150[100]), SCM_OBJ(&scm__rc.d2150[108]));
  scm__rc.d2149[165] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* <module> */
  scm__rc.d2149[166] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[3] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[4] = scm__rc.d2149[165];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[5] = scm__rc.d2149[165];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[6] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[7] = scm__rc.d2149[79];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[8] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[9] = scm__rc.d2149[166];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%transfer-bindings")), SCM_OBJ(&libalpha_25transfer_bindings__STUB), 0);
  libalpha_25transfer_bindings__STUB.common.info = scm__rc.d2149[164];
  libalpha_25transfer_bindings__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[167]);
  scm__rc.d2149[177] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13]))->name = scm__rc.d2149[26];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13]))->debugInfo = scm__rc.d2149[177];
  scm__rc.d2149[178] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* parameterizable */
  scm__rc.d2149[179] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* identifier-macro */
  scm__rc.d2149[180] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* %make-macro-transformer */
  scm__rc.d2149[181] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* transformer */
  scm__rc.d2149[182] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),TRUE); /* info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[109]), scm__rc.d2149[182]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[74]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[111]), scm__rc.d2149[181]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[112]), scm__rc.d2149[119]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[116]), scm__rc.d2149[180]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[117]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[118]), scm__rc.d2149[1]);
  scm__rc.d2149[183] = Scm_MakeExtendedPair(scm__rc.d2149[180], SCM_OBJ(&scm__rc.d2150[112]), SCM_OBJ(&scm__rc.d2150[120]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[184]))[3] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[184]))[4] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[184]))[5] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[184]))[6] = scm__rc.d2149[79];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[184]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[184]))[8] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%make-macro-transformer")), SCM_OBJ(&libalpha_25make_macro_transformer__STUB), 0);
  libalpha_25make_macro_transformer__STUB.common.info = scm__rc.d2149[183];
  libalpha_25make_macro_transformer__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[184]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[254] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* list* */
  scm__rc.d2149[255] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* keys */
  scm__rc.d2149[256] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* values */
  scm__rc.d2149[257] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* p */
  scm__rc.d2149[258] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* do */
  scm__rc.d2149[259] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),FALSE); /* p2154 */
  scm__rc.d2149[260] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* dolist */
  scm__rc.d2149[261] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),TRUE); /* define-in-module */
  scm__rc.d2149[262] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* is-a? */
  scm__rc.d2149[263] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),TRUE); /* receive */
  scm__rc.d2149[264] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),TRUE); /* msgs */
  scm__rc.d2149[265] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* r */
  scm__rc.d2149[266] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* i */
  scm__rc.d2149[267] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),TRUE); /* quasiquote */
  scm__rc.d2149[268] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* unquote */
  scm__rc.d2149[269] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* min-args */
  scm__rc.d2149[270] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),TRUE); /* vector-ref */
  scm__rc.d2149[271] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* dispatch-vec */
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* optproc */
  scm__rc.d2149[273] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* = */
  scm__rc.d2149[274] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* - */
  scm__rc.d2149[275] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* len */
  scm__rc.d2149[276] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* if-let1 */
  scm__rc.d2149[277] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* and-let1 */
}
