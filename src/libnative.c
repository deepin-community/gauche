/* Generated automatically from libnative.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/priv/mmapP.h"
#include "gauche/priv/nativeP.h"
#include "gauche/priv/codeP.h"
#include "gauche/vminsn.h"
static ScmObj libnative_25_25call_native(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnative_25_25call_native__STUB, 8, 0,SCM_FALSE,libnative_25_25call_native, NULL, NULL);

static ScmObj libnative_25_25jit_compile_procedure(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnative_25_25jit_compile_procedure__STUB, 2, 0,SCM_FALSE,libnative_25_25jit_compile_procedure, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 242u, 15u, 16u, 61u, 240u, 255u, 255u, 255u, 242u,
15u, 16u, 53u, 224u, 255u, 255u, 255u, 242u, 15u, 16u, 45u, 208u,
255u, 255u, 255u, 242u, 15u, 16u, 37u, 192u, 255u, 255u, 255u, 242u,
15u, 16u, 29u, 176u, 255u, 255u, 255u, 242u, 15u, 16u, 21u, 160u,
255u, 255u, 255u, 242u, 15u, 16u, 13u, 144u, 255u, 255u, 255u, 242u,
15u, 16u, 5u, 128u, 255u, 255u, 255u, 73u, 185u, 137u, 103u, 69u, 35u,
1u, 0u, 0u, 0u, 73u, 184u, 137u, 103u, 69u, 35u, 1u, 0u, 0u, 0u, 72u,
185u, 137u, 103u, 69u, 35u, 1u, 0u, 0u, 0u, 72u, 186u, 137u, 103u,
69u, 35u, 1u, 0u, 0u, 0u, 72u, 190u, 137u, 103u, 69u, 35u, 1u, 0u, 0u,
0u, 72u, 191u, 137u, 103u, 69u, 35u, 1u, 0u, 0u, 0u, 176u, 0u, 255u,
37u, 52u, 255u, 255u, 255u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 133u, 134u, 6u, 104u, 0u, 48u, 192u, 36u, 145u, 193u, 195u,
2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u,
132u, 128u,};
static unsigned char uvector__00003[] = {
 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 242u, 15u, 16u, 61u, 240u, 255u, 255u, 255u, 242u,
15u, 16u, 53u, 224u, 255u, 255u, 255u, 242u, 15u, 16u, 45u, 208u,
255u, 255u, 255u, 242u, 15u, 16u, 37u, 192u, 255u, 255u, 255u, 242u,
15u, 16u, 29u, 176u, 255u, 255u, 255u, 242u, 15u, 16u, 21u, 160u,
255u, 255u, 255u, 242u, 15u, 16u, 13u, 144u, 255u, 255u, 255u, 242u,
15u, 16u, 5u, 128u, 255u, 255u, 255u, 73u, 185u, 137u, 103u, 69u, 35u,
1u, 0u, 0u, 0u, 73u, 184u, 137u, 103u, 69u, 35u, 1u, 0u, 0u, 0u, 72u,
185u, 137u, 103u, 69u, 35u, 1u, 0u, 0u, 0u, 72u, 186u, 137u, 103u,
69u, 35u, 1u, 0u, 0u, 0u, 72u, 199u, 192u, 103u, 69u, 35u, 1u, 72u,
141u, 53u, 50u, 0u, 0u, 0u, 72u, 139u, 62u, 87u, 72u, 131u, 198u, 8u,
72u, 131u, 232u, 8u, 117u, 242u, 72u, 190u, 137u, 103u, 69u, 35u, 1u,
0u, 0u, 0u, 72u, 191u, 137u, 103u, 69u, 35u, 1u, 0u, 0u, 0u, 176u, 0u,
255u, 21u, 24u, 255u, 255u, 255u, 72u, 129u, 196u, 103u, 69u, 35u, 1u,
195u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 133u, 134u, 6u, 104u, 8u, 48u, 192u, 100u, 145u, 193u, 195u,
2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u,
132u, 128u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 130u, 6u, 8u, 16u, 52u, 64u, 164u, 48u, 136u, 26u, 5u, 129u,
224u, 130u, 73u, 28u, 0u, 48u, 38u, 5u, 36u, 49u, 6u, 6u, 49u, 2u,
144u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 130u, 6u, 8u, 16u, 52u, 64u, 164u, 48u, 136u, 38u, 10u, 36u,
145u, 192u, 3u, 2u, 96u, 82u, 67u, 16u, 96u, 99u, 16u, 41u, 9u, 128u,
225u, 36u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 156u, 6u, 8u, 46u, 12u, 131u, 68u, 29u, 7u, 240u, 98u, 32u,
232u, 67u, 132u, 24u, 70u, 18u, 36u, 115u, 112u, 192u, 144u, 145u,
28u, 216u, 48u, 36u, 34u, 71u, 51u, 12u, 9u, 131u, 17u, 28u, 196u,
48u, 36u, 32u, 71u, 47u, 12u, 9u, 131u, 17u, 28u, 180u, 48u, 38u, 7u,
164u, 114u, 176u, 192u, 144u, 121u, 28u, 164u, 48u, 38u, 7u, 164u,
114u, 128u, 192u, 144u, 105u, 28u, 156u, 48u, 36u, 24u, 71u, 36u, 12u,
16u, 156u, 25u, 6u, 193u, 240u, 132u, 36u, 72u, 228u, 97u, 129u, 33u,
34u, 57u, 16u, 96u, 72u, 64u, 142u, 66u, 24u, 18u, 15u, 35u, 144u, 6u,
4u, 131u, 72u, 227u, 225u, 129u, 32u, 194u, 56u, 232u, 96u, 133u, 33u,
18u, 71u, 28u, 12u, 9u, 8u, 145u, 198u, 131u, 3u, 160u, 133u, 120u,
0u, 133u, 160u, 254u, 12u, 72u, 133u, 120u, 0u, 133u, 161u, 14u, 16u,
73u, 35u, 140u, 6u, 4u, 208u, 136u, 2u, 56u, 184u, 96u, 77u, 8u, 152u,
35u, 138u, 6u, 4u, 208u, 136u, 2u, 56u, 144u, 96u, 77u, 8u, 0u, 35u,
136u, 134u, 4u, 208u, 129u, 130u, 56u, 112u, 96u, 77u, 8u, 0u, 35u,
133u, 134u, 8u, 92u, 67u, 2u, 4u, 13u, 16u, 41u, 12u, 34u, 9u, 130u,
137u, 38u, 13u, 36u, 112u, 160u, 192u, 144u, 105u, 28u, 36u, 48u, 36u,
50u, 71u, 7u, 12u, 9u, 161u, 114u, 132u, 112u, 64u, 193u, 11u, 136u,
96u, 64u, 129u, 162u, 5u, 33u, 132u, 64u, 208u, 44u, 15u, 4u, 18u,
76u, 26u, 72u, 224u, 97u, 129u, 32u, 210u, 56u, 16u, 96u, 72u, 104u,
142u, 0u, 24u, 19u, 67u, 115u, 200u, 98u, 12u, 12u, 98u, 12u, 131u,
97u, 34u, 33u, 176u, 32u, 240u, 154u, 27u, 158u, 68u, 32u, 19u, 66u,
229u, 8u, 132u, 66u, 103u, 234u, 72u, 101u, 9u, 156u, 192u, 76u, 154u,
194u, 96u, 56u, 73u, 36u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 135u, 6u, 6u, 104u, 112u, 57u, 8u, 50u, 13u, 132u, 136u,
134u, 192u, 131u, 196u, 46u, 33u, 129u, 2u, 6u, 136u, 20u, 134u, 17u,
3u, 64u, 176u, 60u, 16u, 73u, 48u, 105u, 34u, 16u, 16u, 184u, 134u,
4u, 8u, 26u, 32u, 82u, 24u, 68u, 19u, 5u, 18u, 76u, 26u, 72u, 132u,
67u, 160u, 133u, 120u, 0u, 133u, 160u, 254u, 12u, 72u, 133u, 120u, 0u,
133u, 161u, 14u, 16u, 73u, 36u, 50u, 136u, 82u, 17u, 34u, 19u, 131u,
32u, 216u, 62u, 16u, 132u, 136u, 130u, 224u, 200u, 52u, 65u, 208u,
127u, 6u, 34u, 14u, 132u, 56u, 65u, 132u, 97u, 34u, 73u, 36u, 112u,
176u, 192u, 198u, 19u, 3u, 192u, 152u, 48u, 18u, 56u, 72u, 96u, 76u,
7u, 8u, 224u, 129u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u,
144u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 187u, 134u, 8u, 118u, 30u, 224u, 16u, 4u, 61u, 225u, 140u,
135u, 132u, 62u, 34u, 1u, 192u, 32u, 81u, 16u, 193u, 132u, 145u, 16u,
1u, 16u, 135u, 65u, 17u, 68u, 124u, 0u, 240u, 18u, 98u, 65u, 16u,
194u, 4u, 152u, 148u, 194u, 68u, 142u, 236u, 24u, 18u, 29u, 35u, 186u,
134u, 4u, 132u, 136u, 238u, 97u, 129u, 48u, 109u, 35u, 185u, 6u, 4u,
137u, 72u, 238u, 1u, 129u, 49u, 26u, 35u, 183u, 134u, 4u, 132u, 8u,
237u, 97u, 129u, 48u, 220u, 35u, 180u, 134u, 4u, 195u, 156u, 142u,
200u, 24u, 19u, 14u, 114u, 59u, 24u, 96u, 76u, 33u, 200u, 236u, 65u,
129u, 48u, 146u, 35u, 176u, 134u, 4u, 131u, 8u, 235u, 161u, 129u, 33u,
226u, 58u, 216u, 96u, 72u, 120u, 142u, 178u, 24u, 18u, 0u, 35u, 171u,
134u, 4u, 135u, 136u, 234u, 97u, 129u, 158u, 38u, 13u, 16u, 105u, 36u,
117u, 32u, 192u, 154u, 17u, 22u, 71u, 77u, 12u, 14u, 33u, 170u, 13u,
49u, 56u, 116u, 138u, 56u, 9u, 14u, 98u, 32u, 2u, 33u, 17u, 20u, 83u,
20u, 18u, 34u, 160u, 209u, 6u, 146u, 76u, 86u, 73u, 29u, 48u, 48u,
38u, 133u, 1u, 145u, 210u, 195u, 2u, 69u, 100u, 116u, 144u, 192u,
154u, 21u, 62u, 71u, 70u, 12u, 9u, 161u, 73u, 100u, 116u, 80u, 192u,
145u, 65u, 29u, 4u, 48u, 38u, 133u, 37u, 145u, 208u, 3u, 2u, 104u,
78u, 1u, 28u, 252u, 48u, 36u, 78u, 71u, 61u, 12u, 9u, 161u, 43u, 196u,
115u, 176u, 192u, 32u, 65u, 22u, 65u, 164u, 48u, 136u, 38u, 10u, 36u,
132u, 208u, 149u, 50u, 71u, 58u, 12u, 9u, 161u, 216u, 68u, 115u, 112u,
192u, 154u, 29u, 158u, 71u, 54u, 12u, 9u, 6u, 145u, 204u, 195u, 3u,
136u, 106u, 131u, 72u, 116u, 137u, 248u, 9u, 138u, 3u, 152u, 136u, 0u,
136u, 67u, 160u, 136u, 162u, 48u, 233u, 192u, 98u, 114u, 120u, 17u,
34u, 42u, 13u, 16u, 105u, 36u, 197u, 100u, 145u, 204u, 131u, 2u, 104u,
140u, 105u, 28u, 196u, 48u, 36u, 86u, 71u, 47u, 12u, 9u, 162u, 83u,
100u, 114u, 208u, 192u, 154u, 35u, 170u, 71u, 43u, 12u, 9u, 162u, 64u,
4u, 114u, 160u, 192u, 154u, 36u, 46u, 71u, 38u, 12u, 9u, 162u, 64u,
4u, 114u, 80u, 192u, 145u, 65u, 28u, 144u, 48u, 38u, 136u, 160u, 17u,
200u, 131u, 2u, 104u, 136u, 65u, 28u, 128u, 48u, 8u, 16u, 69u, 144u,
105u, 12u, 34u, 6u, 129u, 96u, 120u, 32u, 146u, 19u, 68u, 55u, 73u,
28u, 124u, 48u, 38u, 139u, 142u, 17u, 199u, 3u, 2u, 104u, 186u, 73u,
28u, 108u, 48u, 36u, 26u, 71u, 26u, 12u, 9u, 21u, 145u, 198u, 3u, 3u,
92u, 26u, 72u, 226u, 225u, 129u, 32u, 210u, 56u, 144u, 96u, 72u, 52u,
142u, 26u, 24u, 34u, 40u, 142u, 45u, 36u, 112u, 192u, 192u, 145u,
105u, 28u, 32u, 48u, 38u, 141u, 109u, 17u, 193u, 131u, 3u, 167u, 6u,
132u, 9u, 28u, 12u, 48u, 36u, 30u, 71u, 1u, 12u, 16u, 164u, 32u, 72u,
224u, 1u, 129u, 33u, 2u, 24u, 131u, 3u, 24u, 131u, 32u, 216u, 62u,
16u, 132u, 136u, 134u, 192u, 139u, 67u, 40u, 77u, 28u, 219u, 131u,
194u, 104u, 224u, 169u, 34u, 30u, 9u, 163u, 91u, 68u, 68u, 161u, 145u,
196u, 8u, 54u, 13u, 34u, 39u, 224u, 4u, 69u, 28u, 0u, 136u, 172u, 48u,
169u, 36u, 54u, 0u, 154u, 51u, 171u, 21u, 144u, 154u, 46u, 50u, 19u,
67u, 167u, 195u, 72u, 77u, 8u, 86u, 36u, 146u, 19u, 1u, 194u, 73u, 0u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 138u, 134u, 6u, 104u, 76u, 50u, 1u, 14u, 136u, 184u, 48u,
197u, 228u, 48u, 195u, 164u, 145u, 17u, 134u, 17u, 225u, 132u, 240u,
173u, 120u, 84u, 60u, 40u, 222u, 17u, 207u, 8u, 151u, 132u, 35u, 194u,
1u, 222u, 59u, 135u, 104u, 236u, 29u, 99u, 168u, 116u, 130u, 72u,
138u, 67u, 8u, 225u, 28u, 67u, 140u, 114u, 14u, 81u, 204u, 57u, 199u,
64u, 36u, 144u, 228u, 32u, 200u, 54u, 15u, 132u, 33u, 34u, 33u, 176u,
34u, 208u, 202u, 33u, 72u, 64u, 193u, 225u, 211u, 131u, 66u, 4u, 145u,
15u, 8u, 138u, 35u, 139u, 73u, 17u, 40u, 100u, 113u, 2u, 13u, 131u,
72u, 137u, 248u, 1u, 17u, 71u, 0u, 34u, 43u, 12u, 42u, 73u, 13u, 128u,
53u, 193u, 166u, 43u, 32u, 64u, 130u, 44u, 131u, 72u, 97u, 16u, 52u,
11u, 3u, 193u, 4u, 144u, 226u, 26u, 160u, 210u, 29u, 34u, 126u, 2u,
98u, 128u, 230u, 34u, 0u, 34u, 16u, 232u, 34u, 40u, 140u, 58u, 112u,
24u, 156u, 158u, 4u, 72u, 138u, 131u, 68u, 26u, 73u, 49u, 89u, 36u,
8u, 16u, 69u, 144u, 105u, 12u, 34u, 9u, 130u, 137u, 33u, 196u, 53u,
65u, 166u, 39u, 14u, 145u, 71u, 1u, 33u, 204u, 68u, 0u, 68u, 34u, 34u,
138u, 98u, 130u, 68u, 84u, 26u, 32u, 210u, 73u, 138u, 201u, 33u, 164u,
51u, 196u, 193u, 162u, 13u, 36u, 146u, 72u, 135u, 97u, 238u, 1u, 0u,
67u, 222u, 24u, 200u, 120u, 67u, 226u, 32u, 28u, 2u, 5u, 17u, 12u,
24u, 73u, 17u, 0u, 17u, 8u, 116u, 17u, 20u, 71u, 192u, 15u, 1u, 38u,
36u, 17u, 12u, 32u, 73u, 137u, 76u, 36u, 73u, 36u, 142u, 36u, 24u,
24u, 194u, 100u, 36u, 19u, 36u, 162u, 71u, 17u, 12u, 9u, 129u, 137u,
28u, 60u, 48u, 38u, 9u, 132u, 112u, 144u, 192u, 152u, 38u, 17u, 193u,
195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u,
3u, 132u, 128u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 195u, 22u, 24u, 33u, 216u, 120u, 58u, 120u, 116u, 4u, 97u,
8u, 240u, 130u, 96u, 40u, 123u, 195u, 161u, 15u, 8u, 124u, 68u, 3u,
128u, 64u, 162u, 33u, 131u, 9u, 34u, 32u, 2u, 33u, 14u, 130u, 34u,
136u, 248u, 1u, 224u, 36u, 196u, 130u, 33u, 132u, 9u, 34u, 32u, 2u,
33u, 12u, 62u, 21u, 50u, 99u, 17u, 16u, 136u, 195u, 132u, 66u, 36u,
146u, 34u, 0u, 34u, 16u, 195u, 225u, 203u, 38u, 49u, 17u, 8u, 140u,
56u, 68u, 34u, 73u, 49u, 41u, 132u, 137u, 30u, 24u, 160u, 192u, 144u,
233u, 30u, 24u, 144u, 192u, 144u, 145u, 30u, 24u, 112u, 192u, 152u,
86u, 17u, 225u, 134u, 12u, 9u, 18u, 145u, 225u, 132u, 12u, 9u, 146u,
49u, 30u, 24u, 48u, 192u, 153u, 48u, 17u, 225u, 130u, 12u, 9u, 8u,
145u, 225u, 92u, 12u, 9u, 142u, 17u, 30u, 21u, 176u, 192u, 152u, 238u,
17u, 225u, 90u, 12u, 9u, 8u, 145u, 225u, 84u, 12u, 9u, 138u, 201u,
30u, 21u, 48u, 192u, 144u, 129u, 30u, 20u, 240u, 192u, 152u, 141u,
145u, 225u, 77u, 12u, 9u, 137u, 49u, 30u, 20u, 128u, 192u, 152u, 147u,
17u, 225u, 71u, 12u, 9u, 134u, 49u, 30u, 20u, 96u, 192u, 152u, 104u,
145u, 225u, 69u, 12u, 9u, 6u, 17u, 225u, 65u, 12u, 9u, 15u, 17u, 225u,
31u, 12u, 9u, 15u, 17u, 225u, 28u, 12u, 9u, 1u, 17u, 225u, 27u, 12u,
9u, 129u, 201u, 30u, 17u, 160u, 192u, 152u, 42u, 145u, 225u, 24u, 12u,
9u, 8u, 145u, 225u, 23u, 12u, 9u, 15u, 17u, 225u, 19u, 12u, 12u, 241u,
48u, 104u, 131u, 73u, 35u, 194u, 36u, 24u, 19u, 67u, 224u, 8u, 240u,
136u, 134u, 4u, 131u, 72u, 240u, 134u, 6u, 7u, 16u, 213u, 6u, 152u,
156u, 58u, 69u, 28u, 4u, 135u, 72u, 203u, 128u, 144u, 230u, 34u, 0u,
34u, 17u, 25u, 136u, 90u, 17u, 140u, 184u, 9u, 36u, 69u, 65u, 162u,
13u, 36u, 152u, 172u, 146u, 60u, 33u, 97u, 129u, 52u, 70u, 92u, 143u,
8u, 80u, 96u, 72u, 172u, 143u, 8u, 64u, 96u, 77u, 18u, 142u, 35u,
194u, 14u, 24u, 18u, 13u, 35u, 194u, 8u, 24u, 29u, 60u, 58u, 2u, 48u,
141u, 56u, 65u, 36u, 120u, 64u, 195u, 2u, 104u, 168u, 113u, 30u, 16u,
16u, 192u, 145u, 161u, 30u, 16u, 0u, 192u, 198u, 35u, 66u, 19u, 69u,
52u, 137u, 29u, 252u, 48u, 38u, 137u, 6u, 17u, 223u, 131u, 2u, 104u,
144u, 97u, 29u, 244u, 48u, 36u, 100u, 71u, 124u, 12u, 9u, 8u, 145u,
222u, 131u, 2u, 104u, 178u, 249u, 29u, 228u, 48u, 38u, 136u, 170u,
17u, 222u, 3u, 2u, 104u, 136u, 137u, 29u, 220u, 48u, 36u, 78u, 71u,
118u, 12u, 9u, 162u, 25u, 228u, 119u, 80u, 192u, 144u, 105u, 29u,
200u, 48u, 56u, 134u, 168u, 52u, 196u, 225u, 210u, 40u, 224u, 38u,
50u, 14u, 98u, 32u, 2u, 33u, 17u, 20u, 83u, 20u, 18u, 34u, 160u, 209u,
6u, 146u, 76u, 86u, 73u, 29u, 196u, 48u, 38u, 141u, 197u, 145u, 220u,
3u, 2u, 69u, 100u, 118u, 224u, 192u, 154u, 56u, 142u, 71u, 109u, 12u,
9u, 6u, 145u, 218u, 131u, 2u, 104u, 222u, 153u, 29u, 164u, 48u, 36u,
80u, 71u, 101u, 12u, 9u, 163u, 122u, 100u, 118u, 64u, 192u, 145u,
145u, 29u, 140u, 48u, 38u, 141u, 143u, 17u, 216u, 131u, 2u, 68u, 228u,
118u, 16u, 192u, 154u, 53u, 184u, 71u, 96u, 12u, 9u, 6u, 145u, 215u,
131u, 4u, 107u, 20u, 112u, 130u, 71u, 91u, 12u, 2u, 4u, 17u, 100u,
26u, 67u, 8u, 130u, 137u, 33u, 148u, 38u, 144u, 162u, 132u, 209u,
173u, 16u, 154u, 33u, 136u, 73u, 29u, 104u, 48u, 38u, 144u, 227u, 17u,
213u, 195u, 2u, 105u, 14u, 153u, 29u, 88u, 48u, 36u, 26u, 71u, 83u,
12u, 14u, 33u, 170u, 13u, 33u, 210u, 39u, 224u, 38u, 40u, 14u, 145u,
151u, 1u, 33u, 204u, 68u, 0u, 68u, 34u, 51u, 16u, 180u, 35u, 25u,
112u, 18u, 72u, 138u, 131u, 68u, 26u, 73u, 49u, 89u, 36u, 117u, 32u,
192u, 154u, 74u, 156u, 71u, 81u, 12u, 9u, 21u, 145u, 211u, 195u, 2u,
105u, 50u, 41u, 29u, 56u, 48u, 36u, 26u, 71u, 75u, 12u, 9u, 162u,
154u, 68u, 116u, 160u, 192u, 154u, 42u, 28u, 71u, 72u, 12u, 9u, 26u,
17u, 209u, 195u, 2u, 104u, 178u, 249u, 29u, 24u, 48u, 38u, 146u, 225u,
145u, 209u, 67u, 2u, 105u, 46u, 25u, 29u, 16u, 48u, 36u, 100u, 71u,
67u, 12u, 9u, 8u, 145u, 208u, 67u, 2u, 104u, 178u, 249u, 29u, 0u, 48u,
38u, 146u, 133u, 145u, 207u, 195u, 2u, 69u, 4u, 115u, 224u, 192u,
154u, 73u, 60u, 71u, 61u, 12u, 9u, 164u, 144u, 196u, 115u, 192u, 192u,
144u, 105u, 28u, 228u, 48u, 56u, 134u, 168u, 52u, 135u, 72u, 159u,
128u, 152u, 162u, 50u, 14u, 98u, 32u, 2u, 33u, 14u, 130u, 34u, 136u,
195u, 164u, 79u, 192u, 73u, 224u, 68u, 136u, 168u, 52u, 65u, 164u,
147u, 21u, 146u, 71u, 56u, 12u, 9u, 165u, 201u, 100u, 115u, 112u,
192u, 145u, 89u, 28u, 212u, 48u, 38u, 151u, 172u, 145u, 205u, 3u, 2u,
65u, 164u, 115u, 32u, 192u, 154u, 93u, 38u, 71u, 48u, 12u, 9u, 165u,
211u, 196u, 114u, 240u, 192u, 154u, 93u, 170u, 71u, 43u, 12u, 9u,
165u, 211u, 196u, 114u, 160u, 192u, 145u, 145u, 28u, 164u, 48u, 36u,
80u, 71u, 40u, 12u, 9u, 165u, 186u, 132u, 114u, 112u, 192u, 154u, 91u,
56u, 71u, 38u, 12u, 9u, 6u, 145u, 201u, 3u, 4u, 107u, 19u, 240u, 98u,
71u, 33u, 12u, 2u, 4u, 17u, 100u, 26u, 67u, 8u, 129u, 160u, 88u, 30u,
8u, 36u, 134u, 80u, 154u, 105u, 170u, 19u, 75u, 100u, 66u, 105u, 34u,
217u, 36u, 114u, 0u, 192u, 154u, 106u, 172u, 71u, 29u, 12u, 9u, 166u,
176u, 100u, 113u, 192u, 192u, 144u, 105u, 28u, 108u, 48u, 36u, 86u,
71u, 25u, 12u, 13u, 112u, 105u, 35u, 140u, 6u, 4u, 131u, 72u, 226u,
65u, 129u, 32u, 210u, 56u, 104u, 96u, 136u, 162u, 56u, 180u, 145u,
195u, 3u, 2u, 69u, 164u, 112u, 128u, 192u, 154u, 115u, 48u, 71u, 6u,
12u, 14u, 156u, 26u, 16u, 36u, 112u, 48u, 192u, 144u, 121u, 28u, 4u,
48u, 66u, 144u, 129u, 35u, 128u, 6u, 4u, 132u, 8u, 98u, 12u, 12u, 98u,
12u, 131u, 96u, 248u, 66u, 17u, 132u, 136u, 134u, 192u, 139u, 67u,
40u, 77u, 59u, 153u, 131u, 194u, 105u, 214u, 153u, 34u, 30u, 9u, 167u,
51u, 4u, 68u, 161u, 145u, 196u, 8u, 54u, 13u, 34u, 39u, 224u, 4u, 69u,
28u, 0u, 136u, 203u, 128u, 17u, 21u, 134u, 21u, 36u, 134u, 192u, 19u,
78u, 36u, 226u, 178u, 19u, 77u, 84u, 194u, 105u, 14u, 24u, 105u, 9u,
161u, 233u, 100u, 146u, 66u, 96u, 68u, 73u, 32u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 138u, 134u, 6u, 104u, 44u, 50u, 1u, 14u, 136u, 184u, 48u,
197u, 228u, 48u, 195u, 164u, 145u, 17u, 134u, 17u, 225u, 192u, 240u,
203u, 120u, 99u, 60u, 40u, 222u, 17u, 207u, 8u, 151u, 132u, 35u, 194u,
1u, 222u, 59u, 135u, 104u, 236u, 29u, 99u, 168u, 116u, 130u, 72u,
138u, 67u, 8u, 225u, 28u, 67u, 140u, 114u, 14u, 81u, 204u, 57u, 199u,
64u, 36u, 136u, 204u, 70u, 193u, 211u, 195u, 160u, 35u, 8u, 211u,
132u, 18u, 73u, 14u, 66u, 12u, 131u, 96u, 248u, 66u, 17u, 132u, 136u,
134u, 192u, 139u, 67u, 40u, 133u, 33u, 3u, 7u, 135u, 78u, 13u, 8u,
18u, 68u, 60u, 34u, 40u, 142u, 45u, 36u, 68u, 161u, 145u, 196u, 8u,
54u, 13u, 34u, 39u, 224u, 4u, 69u, 28u, 0u, 136u, 203u, 128u, 17u,
21u, 134u, 21u, 36u, 134u, 192u, 26u, 224u, 211u, 21u, 144u, 32u, 65u,
22u, 65u, 164u, 48u, 136u, 26u, 5u, 129u, 224u, 130u, 72u, 101u, 17u,
172u, 79u, 193u, 136u, 113u, 13u, 80u, 105u, 14u, 145u, 63u, 1u, 49u,
68u, 100u, 28u, 196u, 64u, 4u, 66u, 29u, 4u, 69u, 17u, 135u, 72u,
159u, 128u, 147u, 192u, 137u, 17u, 80u, 104u, 131u, 73u, 38u, 43u,
36u, 56u, 134u, 168u, 52u, 135u, 72u, 159u, 128u, 152u, 160u, 58u,
70u, 92u, 4u, 135u, 49u, 16u, 1u, 16u, 136u, 204u, 66u, 208u, 140u,
101u, 192u, 73u, 34u, 42u, 13u, 16u, 105u, 36u, 197u, 100u, 146u, 4u,
8u, 34u, 200u, 52u, 134u, 17u, 5u, 18u, 67u, 40u, 141u, 98u, 142u,
16u, 67u, 136u, 106u, 131u, 76u, 78u, 29u, 34u, 142u, 2u, 99u, 32u,
230u, 34u, 0u, 34u, 17u, 17u, 69u, 49u, 65u, 34u, 42u, 13u, 16u, 105u,
36u, 197u, 100u, 135u, 16u, 213u, 6u, 152u, 156u, 58u, 69u, 28u, 4u,
135u, 72u, 203u, 128u, 144u, 230u, 34u, 0u, 34u, 17u, 25u, 136u, 90u,
17u, 140u, 184u, 9u, 36u, 69u, 65u, 162u, 13u, 36u, 152u, 172u, 146u,
67u, 72u, 103u, 137u, 131u, 68u, 26u, 73u, 36u, 145u, 14u, 195u, 193u,
211u, 195u, 160u, 35u, 8u, 71u, 132u, 19u, 1u, 67u, 222u, 29u, 8u,
120u, 67u, 226u, 32u, 28u, 2u, 5u, 17u, 12u, 24u, 73u, 17u, 0u, 17u,
8u, 116u, 17u, 20u, 71u, 192u, 15u, 1u, 38u, 36u, 17u, 12u, 32u, 73u,
17u, 0u, 17u, 8u, 97u, 240u, 169u, 147u, 24u, 136u, 132u, 70u, 28u,
34u, 17u, 36u, 145u, 16u, 1u, 16u, 134u, 31u, 14u, 89u, 49u, 136u,
136u, 68u, 97u, 194u, 33u, 18u, 73u, 137u, 76u, 36u, 73u, 36u, 142u,
36u, 24u, 24u, 194u, 100u, 236u, 19u, 43u, 130u, 71u, 17u, 12u, 9u,
129u, 137u, 28u, 60u, 48u, 38u, 9u, 132u, 112u, 144u, 192u, 152u, 38u,
17u, 193u, 195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u,
48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00013[] = {
 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
0u, 0u, 0u, 0u, 0u, 0u, 242u, 15u, 16u, 29u, 240u, 255u, 255u, 255u,
242u, 15u, 16u, 21u, 224u, 255u, 255u, 255u, 242u, 15u, 16u, 13u,
208u, 255u, 255u, 255u, 242u, 15u, 16u, 5u, 192u, 255u, 255u, 255u,
73u, 185u, 137u, 103u, 69u, 35u, 1u, 0u, 0u, 0u, 73u, 184u, 137u,
103u, 69u, 35u, 1u, 0u, 0u, 0u, 72u, 186u, 137u, 103u, 69u, 35u, 1u,
0u, 0u, 0u, 72u, 185u, 137u, 103u, 69u, 35u, 1u, 0u, 0u, 0u, 72u,
131u, 196u, 32u, 255u, 21u, 134u, 255u, 255u, 255u, 72u, 131u, 196u,
224u, 195u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 133u, 134u, 6u, 104u, 220u, 48u, 199u, 4u, 145u, 193u, 195u,
2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u,
132u, 128u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 148u, 134u, 6u, 120u, 228u, 145u, 201u, 3u, 4u, 39u, 6u, 65u,
176u, 124u, 33u, 9u, 18u, 57u, 24u, 96u, 72u, 72u, 142u, 68u, 24u,
18u, 16u, 35u, 144u, 134u, 4u, 131u, 200u, 228u, 1u, 129u, 32u, 210u,
56u, 248u, 96u, 72u, 48u, 142u, 58u, 24u, 33u, 72u, 68u, 145u, 199u,
3u, 2u, 66u, 36u, 113u, 160u, 192u, 232u, 33u, 94u, 0u, 33u, 104u,
63u, 130u, 18u, 33u, 94u, 0u, 33u, 104u, 67u, 130u, 18u, 72u, 227u,
1u, 129u, 50u, 34u, 35u, 139u, 134u, 4u, 200u, 232u, 142u, 40u, 24u,
19u, 34u, 34u, 56u, 144u, 96u, 76u, 120u, 136u, 226u, 33u, 129u, 49u,
250u, 35u, 135u, 6u, 4u, 199u, 136u, 142u, 22u, 24u, 33u, 113u, 12u,
8u, 16u, 52u, 64u, 164u, 48u, 136u, 38u, 10u, 36u, 152u, 52u, 145u,
194u, 131u, 2u, 65u, 164u, 112u, 144u, 192u, 145u, 209u, 28u, 28u,
48u, 38u, 114u, 68u, 112u, 64u, 193u, 11u, 136u, 96u, 64u, 129u, 162u,
5u, 33u, 132u, 64u, 208u, 44u, 15u, 4u, 18u, 76u, 26u, 72u, 224u, 97u,
129u, 32u, 210u, 56u, 16u, 96u, 72u, 236u, 142u, 0u, 24u, 19u, 66u,
81u, 200u, 98u, 12u, 12u, 98u, 12u, 131u, 97u, 34u, 33u, 176u, 32u,
240u, 154u, 18u, 142u, 68u, 32u, 19u, 57u, 34u, 33u, 16u, 152u, 235u,
146u, 25u, 66u, 98u, 244u, 19u, 4u, 208u, 152u, 14u, 18u, 73u, 0u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 135u, 6u, 6u, 104u, 240u, 57u, 8u, 50u, 13u, 132u, 136u,
134u, 192u, 131u, 196u, 46u, 33u, 129u, 2u, 6u, 136u, 20u, 134u, 17u,
3u, 64u, 176u, 60u, 16u, 73u, 48u, 105u, 34u, 16u, 16u, 184u, 134u,
4u, 8u, 26u, 32u, 82u, 24u, 68u, 19u, 5u, 18u, 76u, 26u, 72u, 132u,
67u, 160u, 133u, 120u, 0u, 133u, 160u, 254u, 8u, 72u, 133u, 120u, 0u,
133u, 161u, 14u, 8u, 73u, 36u, 50u, 136u, 82u, 17u, 34u, 19u, 131u,
32u, 216u, 62u, 16u, 132u, 136u, 103u, 142u, 73u, 36u, 145u, 194u,
195u, 3u, 24u, 76u, 15u, 2u, 96u, 192u, 72u, 225u, 33u, 129u, 48u,
28u, 35u, 130u, 6u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 187u, 134u, 8u, 118u, 30u, 224u, 17u, 188u, 61u, 223u, 225u,
225u, 15u, 136u, 128u, 112u, 8u, 20u, 68u, 48u, 97u, 36u, 68u, 0u,
68u, 33u, 208u, 68u, 81u, 31u, 0u, 60u, 4u, 152u, 144u, 68u, 48u,
129u, 38u, 37u, 48u, 145u, 35u, 187u, 6u, 4u, 135u, 72u, 238u, 161u,
129u, 33u, 34u, 59u, 152u, 96u, 76u, 25u, 200u, 238u, 65u, 129u, 34u,
82u, 59u, 128u, 96u, 76u, 69u, 8u, 237u, 225u, 129u, 33u, 2u, 59u,
88u, 96u, 76u, 53u, 136u, 237u, 33u, 129u, 48u, 225u, 35u, 178u, 6u,
4u, 195u, 132u, 142u, 198u, 24u, 19u, 8u, 18u, 59u, 16u, 96u, 76u,
35u, 8u, 236u, 33u, 129u, 32u, 194u, 58u, 232u, 96u, 72u, 120u, 142u,
182u, 24u, 18u, 30u, 35u, 172u, 134u, 4u, 141u, 200u, 234u, 225u,
129u, 33u, 226u, 58u, 152u, 96u, 103u, 137u, 131u, 68u, 26u, 73u, 29u,
72u, 48u, 38u, 132u, 66u, 145u, 211u, 67u, 3u, 136u, 106u, 131u, 76u,
78u, 29u, 34u, 142u, 2u, 67u, 152u, 136u, 0u, 136u, 68u, 69u, 20u,
197u, 4u, 136u, 168u, 52u, 65u, 164u, 147u, 21u, 146u, 71u, 76u, 12u,
9u, 161u, 59u, 164u, 116u, 176u, 192u, 145u, 89u, 29u, 36u, 48u, 38u,
133u, 76u, 145u, 209u, 131u, 2u, 104u, 82u, 41u, 29u, 20u, 48u, 36u,
80u, 71u, 65u, 12u, 9u, 161u, 72u, 164u, 116u, 0u, 192u, 154u, 19u,
52u, 71u, 63u, 12u, 9u, 19u, 145u, 207u, 67u, 2u, 104u, 74u, 193u,
28u, 236u, 48u, 8u, 16u, 69u, 144u, 105u, 12u, 34u, 9u, 130u, 137u,
33u, 52u, 37u, 52u, 145u, 206u, 131u, 2u, 104u, 116u, 225u, 28u, 220u,
48u, 38u, 135u, 100u, 145u, 205u, 131u, 2u, 65u, 164u, 115u, 48u,
192u, 226u, 26u, 160u, 210u, 29u, 34u, 126u, 2u, 98u, 128u, 230u, 34u,
0u, 34u, 16u, 232u, 34u, 40u, 140u, 58u, 112u, 24u, 156u, 158u, 4u,
72u, 138u, 131u, 68u, 26u, 73u, 49u, 89u, 36u, 115u, 32u, 192u, 154u,
35u, 14u, 71u, 49u, 12u, 9u, 21u, 145u, 203u, 195u, 2u, 104u, 148u,
169u, 28u, 180u, 48u, 38u, 136u, 231u, 145u, 202u, 195u, 2u, 104u,
142u, 209u, 28u, 168u, 48u, 38u, 137u, 8u, 145u, 201u, 131u, 2u, 104u,
142u, 209u, 28u, 148u, 48u, 36u, 80u, 71u, 36u, 12u, 9u, 162u, 35u,
68u, 114u, 32u, 192u, 154u, 34u, 4u, 71u, 32u, 12u, 2u, 4u, 17u, 100u,
26u, 67u, 8u, 129u, 160u, 88u, 30u, 8u, 36u, 132u, 209u, 13u, 114u,
71u, 31u, 12u, 9u, 162u, 226u, 196u, 113u, 192u, 192u, 154u, 46u,
134u, 71u, 27u, 12u, 9u, 6u, 145u, 198u, 131u, 2u, 69u, 100u, 113u,
128u, 192u, 215u, 6u, 146u, 56u, 184u, 96u, 72u, 52u, 142u, 36u, 24u,
18u, 13u, 35u, 134u, 134u, 8u, 138u, 35u, 139u, 73u, 28u, 48u, 48u,
36u, 90u, 71u, 8u, 12u, 9u, 163u, 90u, 132u, 112u, 96u, 192u, 233u,
193u, 33u, 2u, 71u, 3u, 12u, 9u, 7u, 145u, 192u, 67u, 4u, 41u, 8u,
18u, 56u, 0u, 96u, 72u, 64u, 134u, 32u, 192u, 198u, 32u, 200u, 54u,
15u, 132u, 33u, 34u, 33u, 176u, 34u, 208u, 202u, 19u, 71u, 53u, 96u,
240u, 154u, 56u, 30u, 72u, 135u, 130u, 104u, 214u, 161u, 17u, 40u,
100u, 113u, 2u, 13u, 131u, 72u, 137u, 248u, 1u, 17u, 71u, 0u, 34u,
43u, 12u, 42u, 73u, 13u, 128u, 38u, 140u, 231u, 197u, 100u, 38u, 139u,
137u, 132u, 208u, 233u, 144u, 210u, 19u, 66u, 20u, 9u, 36u, 132u,
192u, 112u, 146u, 64u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 138u, 134u, 6u, 104u, 244u, 50u, 1u, 14u, 136u, 184u, 48u,
197u, 228u, 48u, 195u, 164u, 145u, 17u, 134u, 17u, 220u, 59u, 55u,
92u, 234u, 93u, 35u, 160u, 115u, 142u, 97u, 202u, 9u, 34u, 41u, 12u,
35u, 132u, 113u, 14u, 49u, 200u, 9u, 36u, 57u, 8u, 50u, 13u, 131u,
225u, 8u, 72u, 136u, 108u, 8u, 180u, 50u, 136u, 82u, 16u, 48u, 120u,
116u, 224u, 144u, 129u, 36u, 67u, 194u, 34u, 136u, 226u, 210u, 68u,
74u, 25u, 28u, 64u, 131u, 96u, 210u, 34u, 126u, 0u, 68u, 81u, 192u,
8u, 138u, 195u, 10u, 146u, 67u, 96u, 13u, 112u, 105u, 138u, 200u, 16u,
32u, 139u, 32u, 210u, 24u, 68u, 13u, 2u, 192u, 240u, 65u, 36u, 56u,
134u, 168u, 52u, 135u, 72u, 159u, 128u, 152u, 160u, 57u, 136u, 128u,
8u, 132u, 58u, 8u, 138u, 35u, 14u, 156u, 6u, 39u, 39u, 129u, 18u, 34u,
160u, 209u, 6u, 146u, 76u, 86u, 73u, 2u, 4u, 17u, 100u, 26u, 67u, 8u,
130u, 96u, 162u, 72u, 113u, 13u, 80u, 105u, 137u, 195u, 164u, 81u,
192u, 72u, 115u, 17u, 0u, 17u, 8u, 136u, 162u, 152u, 160u, 145u, 21u,
6u, 136u, 52u, 146u, 98u, 178u, 72u, 105u, 12u, 241u, 48u, 104u, 131u,
73u, 36u, 146u, 33u, 216u, 123u, 128u, 70u, 240u, 247u, 127u, 135u,
132u, 62u, 34u, 1u, 192u, 32u, 81u, 16u, 193u, 132u, 145u, 16u, 1u,
16u, 135u, 65u, 17u, 68u, 124u, 0u, 240u, 18u, 98u, 65u, 16u, 194u,
4u, 152u, 148u, 194u, 68u, 146u, 72u, 226u, 65u, 129u, 140u, 38u, 46u,
129u, 49u, 172u, 36u, 113u, 16u, 192u, 152u, 24u, 145u, 195u, 195u,
2u, 96u, 152u, 71u, 9u, 12u, 9u, 130u, 97u, 28u, 28u, 48u, 38u, 3u,
132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libnative_25unsafe_jit_enabledP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnative_25unsafe_jit_enabledP__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnative_25unsafe_jit_enabledP, NULL, NULL);

static unsigned char uvector__00019[] = {
 0u, 3u, 129u, 134u, 8u, 250u, 63u, 144u, 9u, 28u, 8u, 48u, 36u, 124u,
71u, 1u, 12u, 9u, 32u, 17u, 192u, 3u, 2u, 71u, 228u, 49u, 6u, 6u, 49u,
31u, 200u, 4u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 129u, 6u, 6u, 121u, 4u, 144u, 196u, 24u, 24u, 228u, 32u,
152u, 14u, 18u, 64u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 143u, 6u, 6u, 105u, 12u, 50u, 137u, 16u, 134u, 64u, 35u,
225u, 23u, 6u, 24u, 188u, 134u, 25u, 20u, 146u, 67u, 144u, 143u, 228u,
2u, 35u, 232u, 254u, 64u, 36u, 135u, 41u, 8u, 51u, 200u, 36u, 146u,
71u, 27u, 12u, 12u, 114u, 16u, 76u, 68u, 73u, 28u, 96u, 48u, 49u,
132u, 194u, 224u, 38u, 26u, 68u, 142u, 46u, 24u, 19u, 4u, 194u, 56u,
168u, 96u, 76u, 25u, 200u, 225u, 225u, 129u, 48u, 103u, 35u, 134u,
134u, 4u, 192u, 196u, 142u, 22u, 24u, 19u, 3u, 194u, 56u, 72u, 96u,
76u, 15u, 8u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u,
112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static ScmObj libnativevm_field_offset(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnativevm_field_offset__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnativevm_field_offset, NULL, NULL);

static ScmObj libnativevm_function_address(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnativevm_function_address__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnativevm_function_address, NULL, NULL);

static ScmObj libnativeraw_value(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnativeraw_value__STUB, 1, 0,SCM_FALSE,libnativeraw_value, NULL, NULL);

static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2150[111];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2150 */
      SCM_STRING_CONST_INITIALIZER("gauche.bootstrap", 16, 16),
      SCM_STRING_CONST_INITIALIZER("%%call-native", 13, 13),
      SCM_STRING_CONST_INITIALIZER("tstart", 6, 6),
      SCM_STRING_CONST_INITIALIZER("tend", 4, 4),
      SCM_STRING_CONST_INITIALIZER("code", 4, 4),
      SCM_STRING_CONST_INITIALIZER("start", 5, 5),
      SCM_STRING_CONST_INITIALIZER("end", 3, 3),
      SCM_STRING_CONST_INITIALIZER("entry", 5, 5),
      SCM_STRING_CONST_INITIALIZER("patcher", 7, 7),
      SCM_STRING_CONST_INITIALIZER("rettype", 7, 7),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libnative.scm", 13, 13),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<uvector>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("%%jit-compile-procedure", 23, 23),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("compiler", 8, 8),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("*amd64-call-reg-code*", 21, 21),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("*amd64-call-spill-code*", 23, 23),
      SCM_STRING_CONST_INITIALIZER("o", 1, 1),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("i", 1, 1),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("call-amd64", 10, 10),
      SCM_STRING_CONST_INITIALIZER("G2157", 5, 5),
      SCM_STRING_CONST_INITIALIZER("./native-supp.scm", 17, 17),
      SCM_STRING_CONST_INITIALIZER("f", 1, 1),
      SCM_STRING_CONST_INITIALIZER("d", 1, 1),
      SCM_STRING_CONST_INITIALIZER("G2156", 5, 5),
      SCM_STRING_CONST_INITIALIZER("count", 5, 5),
      SCM_STRING_CONST_INITIALIZER("max", 3, 3),
      SCM_STRING_CONST_INITIALIZER("call-amd64-regs", 15, 15),
      SCM_STRING_CONST_INITIALIZER("min", 3, 3),
      SCM_STRING_CONST_INITIALIZER("call-amd64-spill", 16, 16),
      SCM_STRING_CONST_INITIALIZER("ptr", 3, 3),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("module-binding-ref", 18, 18),
      SCM_STRING_CONST_INITIALIZER("~", 1, 1),
      SCM_STRING_CONST_INITIALIZER("bad arg entry:", 14, 14),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("b", 1, 1),
      SCM_STRING_CONST_INITIALIZER("num-iargs", 9, 9),
      SCM_STRING_CONST_INITIALIZER("num-fargs", 9, 9),
      SCM_STRING_CONST_INITIALIZER("i32", 3, 3),
      SCM_STRING_CONST_INITIALIZER("num-spills", 10, 10),
      SCM_STRING_CONST_INITIALIZER("*winx64-call-reg-code*", 22, 22),
      SCM_STRING_CONST_INITIALIZER("call-winx64", 11, 11),
      SCM_STRING_CONST_INITIALIZER("G2159", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2158", 5, 5),
      SCM_STRING_CONST_INITIALIZER("too many arguments (for now)", 28, 28),
      SCM_STRING_CONST_INITIALIZER("call-winx64-regs", 16, 16),
      SCM_STRING_CONST_INITIALIZER("%unsafe-jit-enabled\077", 20, 20),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%jit-compile", 12, 12),
      SCM_STRING_CONST_INITIALIZER("Operation not allowed", 21, 21),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("unused-args", 11, 11),
      SCM_STRING_CONST_INITIALIZER("vm-field-offset", 15, 15),
      SCM_STRING_CONST_INITIALIZER("env", 3, 3),
      SCM_STRING_CONST_INITIALIZER("denv", 4, 4),
      SCM_STRING_CONST_INITIALIZER("cont", 4, 4),
      SCM_STRING_CONST_INITIALIZER("argp", 4, 4),
      SCM_STRING_CONST_INITIALIZER("val0", 4, 4),
      SCM_STRING_CONST_INITIALIZER("vals", 4, 4),
      SCM_STRING_CONST_INITIALIZER("numVals", 7, 7),
      SCM_STRING_CONST_INITIALIZER("sp", 2, 2),
      SCM_STRING_CONST_INITIALIZER("stackEnd", 8, 8),
      SCM_STRING_CONST_INITIALIZER("field-name", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<symbol>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("vm-function-address", 19, 19),
      SCM_STRING_CONST_INITIALIZER("Cons", 4, 4),
      SCM_STRING_CONST_INITIALIZER("NumEq", 5, 5),
      SCM_STRING_CONST_INITIALIZER("NumLT", 5, 5),
      SCM_STRING_CONST_INITIALIZER("NumGT", 5, 5),
      SCM_STRING_CONST_INITIALIZER("Add", 3, 3),
      SCM_STRING_CONST_INITIALIZER("Sub", 3, 3),
      SCM_STRING_CONST_INITIALIZER("Mul", 3, 3),
      SCM_STRING_CONST_INITIALIZER("Div", 3, 3),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("raw-value", 9, 9),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<integer>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("memq", 4, 4),
      SCM_STRING_CONST_INITIALIZER("zero\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("-", 1, 1),
      SCM_STRING_CONST_INITIALIZER("^p", 2, 2),
      SCM_STRING_CONST_INITIALIZER("let*", 4, 4),
      SCM_STRING_CONST_INITIALIZER("list*", 5, 5),
      SCM_STRING_CONST_INITIALIZER("quasiquote", 10, 10),
      SCM_STRING_CONST_INITIALIZER("unquote", 7, 7),
      SCM_STRING_CONST_INITIALIZER("entry-offsets", 13, 13),
      SCM_STRING_CONST_INITIALIZER("icount", 6, 6),
      SCM_STRING_CONST_INITIALIZER("fcount", 6, 6),
      SCM_STRING_CONST_INITIALIZER("farg-offsets", 12, 12),
      SCM_STRING_CONST_INITIALIZER("unquote-splicing", 16, 16),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("caar", 4, 4),
      SCM_STRING_CONST_INITIALIZER("effective-nargs", 15, 15),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("scount", 6, 6),
      SCM_STRING_CONST_INITIALIZER("spill-offset", 12, 12),
      SCM_STRING_CONST_INITIALIZER("n", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<", 1, 1),
      SCM_STRING_CONST_INITIALIZER("^n", 2, 2),
      SCM_STRING_CONST_INITIALIZER("jcp", 3, 3),
  },
};
static struct scm__rcRec {
  ScmCompiledCode d2155[20];
  ScmWord d2154[765];
  ScmUVector d2153[21];
  ScmPair d2151[185] SCM_ALIGN_PAIR;
  ScmObj d2149[276];
} scm__rc SCM_UNUSED = {
  {   /* ScmCompiledCode d2155 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[0])), 14,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[14])), 14,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (call-amd64 #:G2157) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[28])), 6,
            1, 1, 0, SCM_OBJ(&scm__rc.d2151[32]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[38]),
            SCM_OBJ(&scm__rc.d2155[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (call-amd64 #:G2156) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[34])), 6,
            1, 1, 0, SCM_OBJ(&scm__rc.d2151[42]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[47]),
            SCM_OBJ(&scm__rc.d2155[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-amd64 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[40])), 59,
            28, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[56]),
            SCM_OBJ(&scm__rc.d2155[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[99])), 17,
            15, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-amd64-regs */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[116])), 121,
            34, 5, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[88]),
            SCM_OBJ(&scm__rc.d2155[7]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[237])), 24,
            12, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-amd64-spill */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[261])), 205,
            35, 6, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[101]),
            SCM_OBJ(&scm__rc.d2155[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[466])), 24,
            12, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[490])), 14,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (call-winx64 #:G2159) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[504])), 6,
            1, 1, 0, SCM_OBJ(&scm__rc.d2151[103]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[108]),
            SCM_OBJ(&scm__rc.d2155[14]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (call-winx64 #:G2158) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[510])), 6,
            1, 1, 0, SCM_OBJ(&scm__rc.d2151[110]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[115]),
            SCM_OBJ(&scm__rc.d2155[14]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-winx64 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[516])), 44,
            21, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[122]),
            SCM_OBJ(&scm__rc.d2155[14]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[560])), 17,
            15, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-winx64-regs */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[577])), 121,
            34, 5, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[140]),
            SCM_OBJ(&scm__rc.d2155[16]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[698])), 24,
            12, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %jit-compile */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[722])), 5,
            5, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[149]),
            SCM_OBJ(&scm__rc.d2155[19]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %jit-compile */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[727])), 5,
            4, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[157]),
            SCM_OBJ(&scm__rc.d2155[19]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[732])), 33,
            12, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2154 */
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* *amd64-call-reg-code* */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 11),
    0x0000000a    /*   9 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* #u8(0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 242 15 16 61 240 255 255 255 242 15 16 53 224 255 255 255 242 15 16 45 208 255 255 255 242 15 16 37 192 255 255 255 242 15 16 29 176 255 255 255 242 15 16 21 160 255 255 255 242 15 16 13 144 255 255 255 242 15 16 5 128 255 255 255 73 185 137 103 69 35 1 0 0 0 73 184 137 103 69 35 1 0 0 0 72 185 137 103 69 35 1 0 0 0 72 186 137 103 69 35 1 0 0 0 72 190 137 103 69 35 1 0 0 0 72 191 137 103 69 35 1 0 0 0 176 0 255 37 52 255 255 255) */,
    0x00000015    /*  11 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* *amd64-call-reg-code* */,
    0x00000014    /*  13 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[14]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* *amd64-call-spill-code* */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[14]) + 11),
    0x0000000a    /*   9 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* #u8(0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 242 15 16 61 240 255 255 255 242 15 16 53 224 255 255 255 242 15 16 45 208 255 255 255 242 15 16 37 192 255 255 255 242 15 16 29 176 255 255 255 242 15 16 21 160 255 255 255 242 15 16 13 144 255 255 255 242 15 16 5 128 255 255 255 73 185 137 103 69 35 1 0 0 0 73 184 137 103 69 35 1 0 0 0 72 185 137 103 69 35 1 0 0 0 72 186 137 103 69 35 1 0 0 0 72 199 192 103 69 35 1 72 141 53 50 0 0 0 72 139 62 87 72 131 198 8 72 131 232 8 117 242 72 190 137 103 69 35 1 0 0 0 72 191 137 103 69 35 1 0 0 0 176 0 255 21 24 255 255 255 72 129 196 103 69 35 1 195) */,
    0x00000015    /*  11 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* *amd64-call-spill-code* */,
    0x00000014    /*  13 (RET) */,
    /* (call-amd64 #:G2157) */
    0x0000006a    /*   0 (LREF0-CAR) */,
    0x0000000d    /*   1 (PUSH) */,
    0x00000001    /*   2 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[30])) /* (o p i s) */,
    0x0000008b    /*   4 (MEMQ) */,
    0x00000014    /*   5 (RET) */,
    /* (call-amd64 #:G2156) */
    0x0000006a    /*   0 (LREF0-CAR) */,
    0x0000000d    /*   1 (PUSH) */,
    0x00000001    /*   2 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[40])) /* (f d) */,
    0x0000008b    /*   4 (MEMQ) */,
    0x00000014    /*   5 (RET) */,
    /* call-amd64 */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]) + 6),
    0x0000004d    /*   2 (LREF11-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* count */,
    0x00001018    /*   6 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]) + 13),
    0x0000004f    /*   9 (LREF20-PUSH) */,
    0x0000004d    /*  10 (LREF11-PUSH) */,
    0x0000205f    /*  11 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* count */,
    0x00001018    /*  13 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  14 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]) + 20),
    0x00000007    /*  16 (CONSTI-PUSH 0) */,
    -0x00005f35   /*  17 (LREF10-NUMADDI-PUSH -6) */,
    0x0000205f    /*  18 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* max */,
    0x0000200f    /*  20 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]) + 26),
    0x00000007    /*  22 (CONSTI-PUSH 0) */,
    -0x00007f39   /*  23 (LREF0-NUMADDI-PUSH -8) */,
    0x0000205f    /*  24 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* max */,
    0x000000b2    /*  26 (NUMADD2) */,
    0x00001018    /*  27 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  28 (LREF0) */,
    0x0000002d    /*  29 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]) + 39),
    0x00803047    /*  31 (LREF-PUSH 3 2) */,
    0x00403047    /*  32 (LREF-PUSH 3 1) */,
    0x0000004f    /*  33 (LREF20-PUSH) */,
    0x0000004c    /*  34 (LREF10-PUSH) */,
    0x00000051    /*  35 (LREF30-PUSH) */,
    0x00005060    /*  36 (GREF-TAIL-CALL 5) */,
    SCM_WORD(SCM_UNDEFINED) /* call-amd64-regs */,
    0x00000014    /*  38 (RET) */,
    0x00803047    /*  39 (LREF-PUSH 3 2) */,
    0x00403047    /*  40 (LREF-PUSH 3 1) */,
    0x0000200e    /*  41 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]) + 47),
    0x0000004f    /*  43 (LREF20-PUSH) */,
    0x00006007    /*  44 (CONSTI-PUSH 6) */,
    0x0000205f    /*  45 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* min */,
    0x0000200f    /*  47 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]) + 53),
    0x0000004c    /*  49 (LREF10-PUSH) */,
    0x00008007    /*  50 (CONSTI-PUSH 8) */,
    0x0000205f    /*  51 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* min */,
    0x0000000d    /*  53 (PUSH) */,
    0x00000048    /*  54 (LREF0-PUSH) */,
    0x00000051    /*  55 (LREF30-PUSH) */,
    0x00006060    /*  56 (GREF-TAIL-CALL 6) */,
    SCM_WORD(SCM_UNDEFINED) /* call-amd64-spill */,
    0x00000014    /*  58 (RET) */,
    /* %toplevel */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[49])) /* (#<compiled-code (call-amd64 #:G2157)@0x78ebd9279f00> #<compiled-code (call-amd64 #:G2156)@0x78ebd9279ea0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[99]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-amd64 */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[99]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[4])) /* #<compiled-code call-amd64@0x78ebd9279e40> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-amd64 */,
    0x00000014    /*  16 (RET) */,
    /* call-amd64-regs */
    0x0000003e    /*   0 (LREF1) */,
    0x0000002d    /*   1 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 6),
    0x0000003f    /*   3 (LREF2) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 7),
    0x000060be    /*   6 (LREF1-NUMADDI 6) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 15),
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[71])) /* (196 186 176 166 156 146 136 128 120 112 104 96 88 80 72) */,
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x0000205f    /*  13 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00001018    /*  15 (PUSH-LOCAL-ENV 1) */,
    0x0000400e    /*  16 (PRE-CALL 4) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 86),
    0x00c02047    /*  18 (LREF-PUSH 2 3) */,
    0x00000007    /*  19 (CONSTI-PUSH 0) */,
    0x00000007    /*  20 (CONSTI-PUSH 0) */,
    0x00000008    /*  21 (CONSTN-PUSH) */,
    0x00004017    /*  22 (LOCAL-ENV 4) */,
    0x00000040    /*  23 (LREF3) */,
    0x00000022    /*  24 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 27),
    0x00000053    /*  26 (LREF0-RET) */,
    0x00000040    /*  27 (LREF3) */,
    0x00000081    /*  28 (CAAR-PUSH) */,
    0x00000001    /*  29 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[30])) /* (o p i s) */,
    0x0000008b    /*  31 (MEMQ) */,
    0x0000001e    /*  32 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 54),
    0x00000079    /*  34 (LREF3-CDR) */,
    0x0000000d    /*  35 (PUSH) */,
    0x000010c9    /*  36 (LREF2-NUMADDI-PUSH 1) */,
    0x00000049    /*  37 (LREF1-PUSH) */,
    0x0000200e    /*  38 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 45),
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[71])) /* (196 186 176 166 156 146 136 128 120 112 104 96 88 80 72) */,
    0x000010c9    /*  42 (LREF2-NUMADDI-PUSH 1) */,
    0x0000205f    /*  43 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x000020bc    /*  45 (NUMADDI 2) */,
    0x0000000d    /*  46 (PUSH) */,
    0x0000006d    /*  47 (LREF3-CAR) */,
    0x00000067    /*  48 (CONS-PUSH) */,
    0x0000003d    /*  49 (LREF0) */,
    0x00000067    /*  50 (CONS-PUSH) */,
    0x0000101b    /*  51 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 23),
    0x00000014    /*  53 (RET) */,
    0x00000040    /*  54 (LREF3) */,
    0x00000081    /*  55 (CAAR-PUSH) */,
    0x00000001    /*  56 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[40])) /* (f d) */,
    0x0000008b    /*  58 (MEMQ) */,
    0x0000001e    /*  59 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 80),
    0x00000079    /*  61 (LREF3-CDR) */,
    0x0000000d    /*  62 (PUSH) */,
    0x0000004a    /*  63 (LREF2-PUSH) */,
    0x000010c8    /*  64 (LREF1-NUMADDI-PUSH 1) */,
    0x0000200e    /*  65 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 72),
    0x00000006    /*  67 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[79])) /* (8 16 24 32 40 48 56 64) */,
    0x00000049    /*  69 (LREF1-PUSH) */,
    0x0000205f    /*  70 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x0000000d    /*  72 (PUSH) */,
    0x0000006d    /*  73 (LREF3-CAR) */,
    0x00000067    /*  74 (CONS-PUSH) */,
    0x0000003d    /*  75 (LREF0) */,
    0x00000067    /*  76 (CONS-PUSH) */,
    0x0000101b    /*  77 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 23),
    0x00000014    /*  79 (RET) */,
    0x00000006    /*  80 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[44])) /* "bad arg entry:" */,
    0x0000006d    /*  82 (LREF3-CAR) */,
    0x00002063    /*  83 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  85 (RET) */,
    0x00001018    /*  86 (PUSH-LOCAL-ENV 1) */,
    0x0000004c    /*  87 (LREF10-PUSH) */,
    0x00000007    /*  88 (CONSTI-PUSH 0) */,
    0x0000005e    /*  89 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* *amd64-call-reg-code* */,
    0x0000004c    /*  91 (LREF10-PUSH) */,
    0x000cc007    /*  92 (CONSTI-PUSH 204) */,
    0x0000004c    /*  93 (LREF10-PUSH) */,
    0x00000007    /*  94 (CONSTI-PUSH 0) */,
    0x00000006    /*  95 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* p */,
    0x0100303c    /*  97 (LREF 3 4) */,
    0x00002088    /*  98 (LIST 2) */,
    0x00000067    /*  99 (CONS-PUSH) */,
    0x0000200e    /* 100 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]) + 107),
    0x00000006    /* 102 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[71])) /* (196 186 176 166 156 146 136 128 120 112 104 96 88 80 72) */,
    0x00000007    /* 104 (CONSTI-PUSH 0) */,
    0x0000205f    /* 105 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x000010bc    /* 107 (NUMADDI 1) */,
    0x0000000d    /* 108 (PUSH) */,
    0x00000006    /* 109 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* b */,
    0x0040303c    /* 111 (LREF 3 1) */,
    0x00002088    /* 112 (LIST 2) */,
    0x00000067    /* 113 (CONS-PUSH) */,
    0x0000003d    /* 114 (LREF0) */,
    0x00003089    /* 115 (LIST-STAR 3) */,
    0x0000000d    /* 116 (PUSH) */,
    0x00000051    /* 117 (LREF30-PUSH) */,
    0x0000403c    /* 118 (LREF 4 0) */,
    0x00008012    /* 119 (TAIL-CALL 8) */,
    0x00000014    /* 120 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[237]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-amd64-regs */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[237]) + 21),
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[237]) + 17),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.bootstrap */,
    0x00000006    /*  13 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %%call-native */,
    0x0000205f    /*  15 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x00001018    /*  17 (PUSH-LOCAL-ENV 1) */,
    0x00000016    /*  18 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[6])) /* #<compiled-code call-amd64-regs@0x78ebd88a73c0> */,
    0x00000014    /*  20 (RET) */,
    0x00000015    /*  21 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-amd64-regs */,
    0x00000014    /*  23 (RET) */,
    /* call-amd64-spill */
    0x0000003f    /*   0 (LREF2) */,
    0x0000002d    /*   1 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 6),
    0x00000040    /*   3 (LREF3) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 7),
    0x000060bf    /*   6 (LREF2-NUMADDI 6) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 15),
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[91])) /* (224 214 204 166 156 146 136 128 120 112 104 96 88 80 72) */,
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x0000205f    /*  13 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00001018    /*  15 (PUSH-LOCAL-ENV 1) */,
    0x0000500e    /*  16 (PRE-CALL 5) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 150),
    0x01002047    /*  18 (LREF-PUSH 2 4) */,
    0x00000007    /*  19 (CONSTI-PUSH 0) */,
    0x00000007    /*  20 (CONSTI-PUSH 0) */,
    0x00000007    /*  21 (CONSTI-PUSH 0) */,
    0x00000008    /*  22 (CONSTN-PUSH) */,
    0x00005017    /*  23 (LOCAL-ENV 5) */,
    0x0100003c    /*  24 (LREF 0 4) */,
    0x00000022    /*  25 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 28),
    0x00000053    /*  27 (LREF0-RET) */,
    0x0100003c    /*  28 (LREF 0 4) */,
    0x00000081    /*  29 (CAAR-PUSH) */,
    0x00000001    /*  30 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[30])) /* (o p i s) */,
    0x0000008b    /*  32 (MEMQ) */,
    0x0000001e    /*  33 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 86),
    0x00006002    /*  35 (CONSTI 6) */,
    0x00c00029    /*  36 (LREF-VAL0-BNLT 0 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 60),
    0x0100003c    /*  38 (LREF 0 4) */,
    0x00000075    /*  39 (CDR-PUSH) */,
    0x000010ca    /*  40 (LREF3-NUMADDI-PUSH 1) */,
    0x0000004a    /*  41 (LREF2-PUSH) */,
    0x00000049    /*  42 (LREF1-PUSH) */,
    0x0000200e    /*  43 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 50),
    0x00000006    /*  45 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[91])) /* (224 214 204 166 156 146 136 128 120 112 104 96 88 80 72) */,
    0x000010ca    /*  47 (LREF3-NUMADDI-PUSH 1) */,
    0x0000205f    /*  48 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x000020bc    /*  50 (NUMADDI 2) */,
    0x0000000d    /*  51 (PUSH) */,
    0x0100003c    /*  52 (LREF 0 4) */,
    0x00000068    /*  53 (CAR) */,
    0x00000067    /*  54 (CONS-PUSH) */,
    0x0000003d    /*  55 (LREF0) */,
    0x00000067    /*  56 (CONS-PUSH) */,
    0x0000101b    /*  57 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 24),
    0x00000014    /*  59 (RET) */,
    0x0100003c    /*  60 (LREF 0 4) */,
    0x00000075    /*  61 (CDR-PUSH) */,
    0x000010ca    /*  62 (LREF3-NUMADDI-PUSH 1) */,
    0x0000004a    /*  63 (LREF2-PUSH) */,
    0x000010c8    /*  64 (LREF1-NUMADDI-PUSH 1) */,
    0x0000100e    /*  65 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 77),
    0x00403047    /*  67 (LREF-PUSH 3 1) */,
    0x0000003e    /*  68 (LREF1) */,
    0x000000b3    /*  69 (NUMSUB2) */,
    -0x00000f44   /*  70 (NUMADDI -1) */,
    0x00001018    /*  71 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*  72 (LREF0-PUSH) */,
    0x00008002    /*  73 (CONSTI 8) */,
    0x000000b4    /*  74 (NUMMUL2) */,
    0x000f00bc    /*  75 (NUMADDI 240) */,
    0x00000014    /*  76 (RET) */,
    0x0000000d    /*  77 (PUSH) */,
    0x0100003c    /*  78 (LREF 0 4) */,
    0x00000068    /*  79 (CAR) */,
    0x00000067    /*  80 (CONS-PUSH) */,
    0x0000003d    /*  81 (LREF0) */,
    0x00000067    /*  82 (CONS-PUSH) */,
    0x0000101b    /*  83 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 24),
    0x00000014    /*  85 (RET) */,
    0x0100003c    /*  86 (LREF 0 4) */,
    0x00000081    /*  87 (CAAR-PUSH) */,
    0x00000001    /*  88 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[39])) /* (d) */,
    0x0000008b    /*  90 (MEMQ) */,
    0x0000001e    /*  91 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 143),
    0x00008002    /*  93 (CONSTI 8) */,
    0x00800029    /*  94 (LREF-VAL0-BNLT 0 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 117),
    0x0100003c    /*  96 (LREF 0 4) */,
    0x00000075    /*  97 (CDR-PUSH) */,
    0x0000004b    /*  98 (LREF3-PUSH) */,
    0x000010c9    /*  99 (LREF2-NUMADDI-PUSH 1) */,
    0x00000049    /* 100 (LREF1-PUSH) */,
    0x0000200e    /* 101 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 108),
    0x00000006    /* 103 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[79])) /* (8 16 24 32 40 48 56 64) */,
    0x0000004a    /* 105 (LREF2-PUSH) */,
    0x0000205f    /* 106 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x0000000d    /* 108 (PUSH) */,
    0x0100003c    /* 109 (LREF 0 4) */,
    0x00000068    /* 110 (CAR) */,
    0x00000067    /* 111 (CONS-PUSH) */,
    0x0000003d    /* 112 (LREF0) */,
    0x00000067    /* 113 (CONS-PUSH) */,
    0x0000101b    /* 114 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 24),
    0x00000014    /* 116 (RET) */,
    0x0100003c    /* 117 (LREF 0 4) */,
    0x00000075    /* 118 (CDR-PUSH) */,
    0x0000004b    /* 119 (LREF3-PUSH) */,
    0x000010c9    /* 120 (LREF2-NUMADDI-PUSH 1) */,
    0x000010c8    /* 121 (LREF1-NUMADDI-PUSH 1) */,
    0x0000100e    /* 122 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 134),
    0x00403047    /* 124 (LREF-PUSH 3 1) */,
    0x0000003e    /* 125 (LREF1) */,
    0x000000b3    /* 126 (NUMSUB2) */,
    -0x00000f44   /* 127 (NUMADDI -1) */,
    0x00001018    /* 128 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /* 129 (LREF0-PUSH) */,
    0x00008002    /* 130 (CONSTI 8) */,
    0x000000b4    /* 131 (NUMMUL2) */,
    0x000f00bc    /* 132 (NUMADDI 240) */,
    0x00000014    /* 133 (RET) */,
    0x0000000d    /* 134 (PUSH) */,
    0x0100003c    /* 135 (LREF 0 4) */,
    0x00000068    /* 136 (CAR) */,
    0x00000067    /* 137 (CONS-PUSH) */,
    0x0000003d    /* 138 (LREF0) */,
    0x00000067    /* 139 (CONS-PUSH) */,
    0x0000101b    /* 140 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 24),
    0x00000014    /* 142 (RET) */,
    0x00000006    /* 143 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[44])) /* "bad arg entry:" */,
    0x0100003c    /* 145 (LREF 0 4) */,
    0x00000069    /* 146 (CAR-PUSH) */,
    0x00002060    /* 147 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 149 (RET) */,
    0x00001018    /* 150 (PUSH-LOCAL-ENV 1) */,
    0x0000004c    /* 151 (LREF10-PUSH) */,
    0x00403047    /* 152 (LREF-PUSH 3 1) */,
    0x00008002    /* 153 (CONSTI 8) */,
    0x000000b4    /* 154 (NUMMUL2) */,
    0x000f00bc    /* 155 (NUMADDI 240) */,
    0x00000061    /* 156 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *amd64-call-spill-code* */,
    0x0000000d    /* 158 (PUSH) */,
    0x0000004c    /* 159 (LREF10-PUSH) */,
    0x000f0007    /* 160 (CONSTI-PUSH 240) */,
    0x0000004c    /* 161 (LREF10-PUSH) */,
    0x00000007    /* 162 (CONSTI-PUSH 0) */,
    0x00000006    /* 163 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* p */,
    0x0140303c    /* 165 (LREF 3 5) */,
    0x00002088    /* 166 (LIST 2) */,
    0x00000067    /* 167 (CONS-PUSH) */,
    0x0000200e    /* 168 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]) + 175),
    0x00000006    /* 170 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[91])) /* (224 214 204 166 156 146 136 128 120 112 104 96 88 80 72) */,
    0x00000007    /* 172 (CONSTI-PUSH 0) */,
    0x0000205f    /* 173 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x000010bc    /* 175 (NUMADDI 1) */,
    0x0000000d    /* 176 (PUSH) */,
    0x00000006    /* 177 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* b */,
    0x0080303c    /* 179 (LREF 3 2) */,
    0x00002088    /* 180 (LIST 2) */,
    0x00000067    /* 181 (CONS-PUSH) */,
    0x000b3007    /* 182 (CONSTI-PUSH 179) */,
    0x00000006    /* 183 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* i32 */,
    0x00008007    /* 185 (CONSTI-PUSH 8) */,
    0x0040303c    /* 186 (LREF 3 1) */,
    0x000000b4    /* 187 (NUMMUL2) */,
    0x00002088    /* 188 (LIST 2) */,
    0x00000067    /* 189 (CONS-PUSH) */,
    0x000eb007    /* 190 (CONSTI-PUSH 235) */,
    0x00000006    /* 191 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* i32 */,
    0x00008007    /* 193 (CONSTI-PUSH 8) */,
    0x0040303c    /* 194 (LREF 3 1) */,
    0x000000b4    /* 195 (NUMMUL2) */,
    0x00002088    /* 196 (LIST 2) */,
    0x00000067    /* 197 (CONS-PUSH) */,
    0x0000003d    /* 198 (LREF0) */,
    0x00005089    /* 199 (LIST-STAR 5) */,
    0x0000000d    /* 200 (PUSH) */,
    0x00000051    /* 201 (LREF30-PUSH) */,
    0x0000403c    /* 202 (LREF 4 0) */,
    0x00008012    /* 203 (TAIL-CALL 8) */,
    0x00000014    /* 204 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[466]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-amd64-spill */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[466]) + 21),
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[466]) + 17),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.bootstrap */,
    0x00000006    /*  13 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %%call-native */,
    0x0000205f    /*  15 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x00001018    /*  17 (PUSH-LOCAL-ENV 1) */,
    0x00000016    /*  18 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[8])) /* #<compiled-code call-amd64-spill@0x78ebd8727000> */,
    0x00000014    /*  20 (RET) */,
    0x00000015    /*  21 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-amd64-spill */,
    0x00000014    /*  23 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[490]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* *winx64-call-reg-code* */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[490]) + 11),
    0x0000000a    /*   9 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* #u8(0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 242 15 16 29 240 255 255 255 242 15 16 21 224 255 255 255 242 15 16 13 208 255 255 255 242 15 16 5 192 255 255 255 73 185 137 103 69 35 1 0 0 0 73 184 137 103 69 35 1 0 0 0 72 186 137 103 69 35 1 0 0 0 72 185 137 103 69 35 1 0 0 0 72 131 196 32 255 21 134 255 255 255 72 131 196 224 195) */,
    0x00000015    /*  11 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* *winx64-call-reg-code* */,
    0x00000014    /*  13 (RET) */,
    /* (call-winx64 #:G2159) */
    0x0000006a    /*   0 (LREF0-CAR) */,
    0x0000000d    /*   1 (PUSH) */,
    0x00000001    /*   2 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[30])) /* (o p i s) */,
    0x0000008b    /*   4 (MEMQ) */,
    0x00000014    /*   5 (RET) */,
    /* (call-winx64 #:G2158) */
    0x0000006a    /*   0 (LREF0-CAR) */,
    0x0000000d    /*   1 (PUSH) */,
    0x00000001    /*   2 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[40])) /* (f d) */,
    0x0000008b    /*   4 (MEMQ) */,
    0x00000014    /*   5 (RET) */,
    /* call-winx64 */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]) + 6),
    0x0000004d    /*   2 (LREF11-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* count */,
    0x00001018    /*   6 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]) + 13),
    0x0000004f    /*   9 (LREF20-PUSH) */,
    0x0000004d    /*  10 (LREF11-PUSH) */,
    0x0000205f    /*  11 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* count */,
    0x00001018    /*  13 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  14 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]) + 20),
    0x00000007    /*  16 (CONSTI-PUSH 0) */,
    -0x00003f35   /*  17 (LREF10-NUMADDI-PUSH -4) */,
    0x0000205f    /*  18 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* max */,
    0x0000200f    /*  20 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]) + 26),
    0x00000007    /*  22 (CONSTI-PUSH 0) */,
    -0x00003f39   /*  23 (LREF0-NUMADDI-PUSH -4) */,
    0x0000205f    /*  24 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* max */,
    0x000000b2    /*  26 (NUMADD2) */,
    0x00001018    /*  27 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  28 (LREF0) */,
    0x0000002d    /*  29 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]) + 39),
    0x00803047    /*  31 (LREF-PUSH 3 2) */,
    0x00403047    /*  32 (LREF-PUSH 3 1) */,
    0x0000004f    /*  33 (LREF20-PUSH) */,
    0x0000004c    /*  34 (LREF10-PUSH) */,
    0x00000051    /*  35 (LREF30-PUSH) */,
    0x00005060    /*  36 (GREF-TAIL-CALL 5) */,
    SCM_WORD(SCM_UNDEFINED) /* call-amd64-regs */,
    0x00000014    /*  38 (RET) */,
    0x00000006    /*  39 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[55])) /* "too many arguments (for now)" */,
    0x00001060    /*  41 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  43 (RET) */,
    /* %toplevel */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[117])) /* (#<compiled-code (call-winx64 #:G2159)@0x78ebd8130e40> #<compiled-code (call-winx64 #:G2158)@0x78ebd8130de0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[560]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-winx64 */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[560]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[13])) /* #<compiled-code call-winx64@0x78ebd8130d80> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-winx64 */,
    0x00000014    /*  16 (RET) */,
    /* call-winx64-regs */
    0x0000003e    /*   0 (LREF1) */,
    0x0000002d    /*   1 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 6),
    0x0000003f    /*   3 (LREF2) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 7),
    0x000040be    /*   6 (LREF1-NUMADDI 4) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 15),
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[131])) /* (112 102 92 82 72 64 56 48 40) */,
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x0000205f    /*  13 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00001018    /*  15 (PUSH-LOCAL-ENV 1) */,
    0x0000400e    /*  16 (PRE-CALL 4) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 86),
    0x00c02047    /*  18 (LREF-PUSH 2 3) */,
    0x00000007    /*  19 (CONSTI-PUSH 0) */,
    0x00000007    /*  20 (CONSTI-PUSH 0) */,
    0x00000008    /*  21 (CONSTN-PUSH) */,
    0x00004017    /*  22 (LOCAL-ENV 4) */,
    0x00000040    /*  23 (LREF3) */,
    0x00000022    /*  24 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 27),
    0x00000053    /*  26 (LREF0-RET) */,
    0x00000040    /*  27 (LREF3) */,
    0x00000081    /*  28 (CAAR-PUSH) */,
    0x00000001    /*  29 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[30])) /* (o p i s) */,
    0x0000008b    /*  31 (MEMQ) */,
    0x0000001e    /*  32 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 54),
    0x00000079    /*  34 (LREF3-CDR) */,
    0x0000000d    /*  35 (PUSH) */,
    0x000010c9    /*  36 (LREF2-NUMADDI-PUSH 1) */,
    0x00000049    /*  37 (LREF1-PUSH) */,
    0x0000200e    /*  38 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 45),
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[131])) /* (112 102 92 82 72 64 56 48 40) */,
    0x000010c9    /*  42 (LREF2-NUMADDI-PUSH 1) */,
    0x0000205f    /*  43 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x000020bc    /*  45 (NUMADDI 2) */,
    0x0000000d    /*  46 (PUSH) */,
    0x0000006d    /*  47 (LREF3-CAR) */,
    0x00000067    /*  48 (CONS-PUSH) */,
    0x0000003d    /*  49 (LREF0) */,
    0x00000067    /*  50 (CONS-PUSH) */,
    0x0000101b    /*  51 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 23),
    0x00000014    /*  53 (RET) */,
    0x00000040    /*  54 (LREF3) */,
    0x00000081    /*  55 (CAAR-PUSH) */,
    0x00000001    /*  56 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[40])) /* (f d) */,
    0x0000008b    /*  58 (MEMQ) */,
    0x0000001e    /*  59 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 80),
    0x00000079    /*  61 (LREF3-CDR) */,
    0x0000000d    /*  62 (PUSH) */,
    0x0000004a    /*  63 (LREF2-PUSH) */,
    0x000010c8    /*  64 (LREF1-NUMADDI-PUSH 1) */,
    0x0000200e    /*  65 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 72),
    0x00000006    /*  67 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[135])) /* (8 16 24 32) */,
    0x00000049    /*  69 (LREF1-PUSH) */,
    0x0000205f    /*  70 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x0000000d    /*  72 (PUSH) */,
    0x0000006d    /*  73 (LREF3-CAR) */,
    0x00000067    /*  74 (CONS-PUSH) */,
    0x0000003d    /*  75 (LREF0) */,
    0x00000067    /*  76 (CONS-PUSH) */,
    0x0000101b    /*  77 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 23),
    0x00000014    /*  79 (RET) */,
    0x00000006    /*  80 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[44])) /* "bad arg entry:" */,
    0x0000006d    /*  82 (LREF3-CAR) */,
    0x00002063    /*  83 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  85 (RET) */,
    0x00001018    /*  86 (PUSH-LOCAL-ENV 1) */,
    0x0000004c    /*  87 (LREF10-PUSH) */,
    0x00000007    /*  88 (CONSTI-PUSH 0) */,
    0x0000005e    /*  89 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* *winx64-call-reg-code* */,
    0x0000004c    /*  91 (LREF10-PUSH) */,
    0x0007f007    /*  92 (CONSTI-PUSH 127) */,
    0x0000004c    /*  93 (LREF10-PUSH) */,
    0x00000007    /*  94 (CONSTI-PUSH 0) */,
    0x00000006    /*  95 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* p */,
    0x0100303c    /*  97 (LREF 3 4) */,
    0x00002088    /*  98 (LIST 2) */,
    0x00000067    /*  99 (CONS-PUSH) */,
    0x0000200e    /* 100 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]) + 107),
    0x00000006    /* 102 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[131])) /* (112 102 92 82 72 64 56 48 40) */,
    0x00000007    /* 104 (CONSTI-PUSH 0) */,
    0x0000205f    /* 105 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x000010bc    /* 107 (NUMADDI 1) */,
    0x0000000d    /* 108 (PUSH) */,
    0x00000006    /* 109 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* b */,
    0x0040303c    /* 111 (LREF 3 1) */,
    0x00002088    /* 112 (LIST 2) */,
    0x00000067    /* 113 (CONS-PUSH) */,
    0x0000003d    /* 114 (LREF0) */,
    0x00003089    /* 115 (LIST-STAR 3) */,
    0x0000000d    /* 116 (PUSH) */,
    0x00000051    /* 117 (LREF30-PUSH) */,
    0x0000403c    /* 118 (LREF 4 0) */,
    0x00008012    /* 119 (TAIL-CALL 8) */,
    0x00000014    /* 120 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[698]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-winx64-regs */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[698]) + 21),
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[698]) + 17),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.bootstrap */,
    0x00000006    /*  13 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %%call-native */,
    0x0000205f    /*  15 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x00001018    /*  17 (PUSH-LOCAL-ENV 1) */,
    0x00000016    /*  18 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[15])) /* #<compiled-code call-winx64-regs@0x78ebda54b5a0> */,
    0x00000014    /*  20 (RET) */,
    0x00000015    /*  21 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-winx64-regs */,
    0x00000014    /*  23 (RET) */,
    /* %jit-compile */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x00000048    /*   1 (LREF0-PUSH) */,
    0x00000041    /*   2 (LREF10) */,
    0x00002012    /*   3 (TAIL-CALL 2) */,
    0x00000014    /*   4 (RET) */,
    /* %jit-compile */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[60])) /* "Operation not allowed" */,
    0x00001060    /*   2 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %jit-compile */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]) + 30),
    0x0000000e    /*   9 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]) + 13),
    0x0000005f    /*  11 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %unsafe-jit-enabled? */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]) + 27),
    0x0000200e    /*  15 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]) + 23),
    0x00000006    /*  17 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.bootstrap */,
    0x00000006    /*  19 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %%jit-compile-procedure */,
    0x0000205f    /*  21 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x00001018    /*  23 (PUSH-LOCAL-ENV 1) */,
    0x00000016    /*  24 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[17])) /* #<compiled-code %jit-compile@0x78ebd92078a0> */,
    0x00000014    /*  26 (RET) */,
    0x00000016    /*  27 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[18])) /* #<compiled-code %jit-compile@0x78ebd92074e0> */,
    0x00000014    /*  29 (RET) */,
    0x00000015    /*  30 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %jit-compile */,
    0x00000014    /*  32 (RET) */,
  },
  {   /* ScmUVector d2153 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 204, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 29, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 240, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 29, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 33, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 295, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 131, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 547, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 304, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 1043, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 446, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 127, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 29, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 222, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 118, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 546, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 283, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 36, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 17, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 111, uvector__00021, 0, NULL),
  },
  {   /* ScmPair d2151 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[4])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[7])},
       { SCM_MAKE_INT(52U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[11]), SCM_OBJ(&scm__rc.d2151[9])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[10])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[12])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[13])},
       { SCM_OBJ(&scm__rc.d2151[14]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[11]), SCM_OBJ(&scm__rc.d2151[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[17])},
       { SCM_MAKE_INT(63U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[11]), SCM_OBJ(&scm__rc.d2151[19])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[20])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[23])},
       { SCM_OBJ(&scm__rc.d2151[24]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[21]), SCM_OBJ(&scm__rc.d2151[25])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[27])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[28])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[29])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[31])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(98U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[31]), SCM_OBJ(&scm__rc.d2151[34])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[35])},
       { SCM_OBJ(&scm__rc.d2151[36]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[39])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[41])},
       { SCM_MAKE_INT(99U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[31]), SCM_OBJ(&scm__rc.d2151[43])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[44])},
       { SCM_OBJ(&scm__rc.d2151[45]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[3]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[2]), SCM_OBJ(&scm__rc.d2151[48])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[50])},
       { SCM_MAKE_INT(95U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[31]), SCM_OBJ(&scm__rc.d2151[52])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[53])},
       { SCM_OBJ(&scm__rc.d2151[54]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(72U), SCM_NIL},
       { SCM_MAKE_INT(80U), SCM_OBJ(&scm__rc.d2151[57])},
       { SCM_MAKE_INT(88U), SCM_OBJ(&scm__rc.d2151[58])},
       { SCM_MAKE_INT(96U), SCM_OBJ(&scm__rc.d2151[59])},
       { SCM_MAKE_INT(104U), SCM_OBJ(&scm__rc.d2151[60])},
       { SCM_MAKE_INT(112U), SCM_OBJ(&scm__rc.d2151[61])},
       { SCM_MAKE_INT(120U), SCM_OBJ(&scm__rc.d2151[62])},
       { SCM_MAKE_INT(128U), SCM_OBJ(&scm__rc.d2151[63])},
       { SCM_MAKE_INT(136U), SCM_OBJ(&scm__rc.d2151[64])},
       { SCM_MAKE_INT(146U), SCM_OBJ(&scm__rc.d2151[65])},
       { SCM_MAKE_INT(156U), SCM_OBJ(&scm__rc.d2151[66])},
       { SCM_MAKE_INT(166U), SCM_OBJ(&scm__rc.d2151[67])},
       { SCM_MAKE_INT(176U), SCM_OBJ(&scm__rc.d2151[68])},
       { SCM_MAKE_INT(186U), SCM_OBJ(&scm__rc.d2151[69])},
       { SCM_MAKE_INT(196U), SCM_OBJ(&scm__rc.d2151[70])},
       { SCM_MAKE_INT(64U), SCM_NIL},
       { SCM_MAKE_INT(56U), SCM_OBJ(&scm__rc.d2151[72])},
       { SCM_MAKE_INT(48U), SCM_OBJ(&scm__rc.d2151[73])},
       { SCM_MAKE_INT(40U), SCM_OBJ(&scm__rc.d2151[74])},
       { SCM_MAKE_INT(32U), SCM_OBJ(&scm__rc.d2151[75])},
       { SCM_MAKE_INT(24U), SCM_OBJ(&scm__rc.d2151[76])},
       { SCM_MAKE_INT(16U), SCM_OBJ(&scm__rc.d2151[77])},
       { SCM_MAKE_INT(8U), SCM_OBJ(&scm__rc.d2151[78])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[80])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[81])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[82])},
       { SCM_MAKE_INT(112U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[31]), SCM_OBJ(&scm__rc.d2151[84])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[85])},
       { SCM_OBJ(&scm__rc.d2151[86]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(204U), SCM_OBJ(&scm__rc.d2151[68])},
       { SCM_MAKE_INT(214U), SCM_OBJ(&scm__rc.d2151[89])},
       { SCM_MAKE_INT(224U), SCM_OBJ(&scm__rc.d2151[90])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[92])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[93])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[94])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[95])},
       { SCM_MAKE_INT(140U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[31]), SCM_OBJ(&scm__rc.d2151[97])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[98])},
       { SCM_OBJ(&scm__rc.d2151[99]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[102])},
       { SCM_MAKE_INT(208U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[31]), SCM_OBJ(&scm__rc.d2151[104])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[105])},
       { SCM_OBJ(&scm__rc.d2151[106]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[109])},
       { SCM_MAKE_INT(209U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[31]), SCM_OBJ(&scm__rc.d2151[111])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[112])},
       { SCM_OBJ(&scm__rc.d2151[113]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[12]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[11]), SCM_OBJ(&scm__rc.d2151[116])},
       { SCM_MAKE_INT(205U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[31]), SCM_OBJ(&scm__rc.d2151[118])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[119])},
       { SCM_OBJ(&scm__rc.d2151[120]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(40U), SCM_NIL},
       { SCM_MAKE_INT(48U), SCM_OBJ(&scm__rc.d2151[123])},
       { SCM_MAKE_INT(56U), SCM_OBJ(&scm__rc.d2151[124])},
       { SCM_MAKE_INT(64U), SCM_OBJ(&scm__rc.d2151[125])},
       { SCM_MAKE_INT(72U), SCM_OBJ(&scm__rc.d2151[126])},
       { SCM_MAKE_INT(82U), SCM_OBJ(&scm__rc.d2151[127])},
       { SCM_MAKE_INT(92U), SCM_OBJ(&scm__rc.d2151[128])},
       { SCM_MAKE_INT(102U), SCM_OBJ(&scm__rc.d2151[129])},
       { SCM_MAKE_INT(112U), SCM_OBJ(&scm__rc.d2151[130])},
       { SCM_MAKE_INT(32U), SCM_NIL},
       { SCM_MAKE_INT(24U), SCM_OBJ(&scm__rc.d2151[132])},
       { SCM_MAKE_INT(16U), SCM_OBJ(&scm__rc.d2151[133])},
       { SCM_MAKE_INT(8U), SCM_OBJ(&scm__rc.d2151[134])},
       { SCM_MAKE_INT(219U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[31]), SCM_OBJ(&scm__rc.d2151[136])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[137])},
       { SCM_OBJ(&scm__rc.d2151[138]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[141])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[142])},
       { SCM_OBJ(&scm__rc.d2151[143]), SCM_NIL},
       { SCM_MAKE_INT(109U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[11]), SCM_OBJ(&scm__rc.d2151[145])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[146])},
       { SCM_OBJ(&scm__rc.d2151[147]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(110U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[11]), SCM_OBJ(&scm__rc.d2151[150])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[151])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[153])},
       { SCM_OBJ(&scm__rc.d2151[154]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[152]), SCM_OBJ(&scm__rc.d2151[155])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(130U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[11]), SCM_OBJ(&scm__rc.d2151[159])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[160])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[162])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[163])},
       { SCM_OBJ(&scm__rc.d2151[164]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[161]), SCM_OBJ(&scm__rc.d2151[165])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(149U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[11]), SCM_OBJ(&scm__rc.d2151[168])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[169])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[171])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[172])},
       { SCM_OBJ(&scm__rc.d2151[173]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[170]), SCM_OBJ(&scm__rc.d2151[174])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(165U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[11]), SCM_OBJ(&scm__rc.d2151[177])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[178])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[180])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[181])},
       { SCM_OBJ(&scm__rc.d2151[182]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[179]), SCM_OBJ(&scm__rc.d2151[183])},
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(12, FALSE),
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(5, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(70, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
  },
};

static ScmObj libnative_25_25call_native(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tstart_scm;
  ScmSmallInt tstart;
  ScmObj tend_scm;
  ScmSmallInt tend;
  ScmObj code_scm;
  ScmUVector* code;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj entry_scm;
  ScmSmallInt entry;
  ScmObj patcher_scm;
  ScmObj patcher;
  ScmObj rettype_scm;
  ScmObj rettype;
  ScmObj SCM_SUBRARGS[8];
  SCM_ENTER_SUBR("%%call-native");
  for (int SCM_i=0; SCM_i<8; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tstart_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(tstart_scm)) Scm_Error("ScmSmallInt required, but got %S", tstart_scm);
  tstart = SCM_INT_VALUE(tstart_scm);
  tend_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(tend_scm)) Scm_Error("ScmSmallInt required, but got %S", tend_scm);
  tend = SCM_INT_VALUE(tend_scm);
  code_scm = SCM_SUBRARGS[2];
  if (!SCM_UVECTORP(code_scm)) Scm_Error("<uvector> required, but got %S", code_scm);
  code = SCM_UVECTOR(code_scm);
  start_scm = SCM_SUBRARGS[3];
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  end_scm = SCM_SUBRARGS[4];
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  entry_scm = SCM_SUBRARGS[5];
  if (!SCM_INTP(entry_scm)) Scm_Error("ScmSmallInt required, but got %S", entry_scm);
  entry = SCM_INT_VALUE(entry_scm);
  patcher_scm = SCM_SUBRARGS[6];
  if (!(patcher_scm)) Scm_Error("scheme object required, but got %S", patcher_scm);
  patcher = (patcher_scm);
  rettype_scm = SCM_SUBRARGS[7];
  if (!(rettype_scm)) Scm_Error("scheme object required, but got %S", rettype_scm);
  rettype = (rettype_scm);
  {
{
ScmObj SCM_RESULT;

#line 59 "libnative.scm"
{SCM_RESULT=(Scm__VMCallNative(Scm_VM(),tstart,tend,code,start,end,entry,patcher,rettype));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnative_25_25jit_compile_procedure(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj compiler_scm;
  ScmObj compiler;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%%jit-compile-procedure");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  compiler_scm = SCM_SUBRARGS[1];
  if (!(compiler_scm)) Scm_Error("scheme object required, but got %S", compiler_scm);
  compiler = (compiler_scm);
  {
{
ScmObj SCM_RESULT;

#line 64 "libnative.scm"
if (!(SCM_CLOSUREP(proc))){{
Scm_Error("Closure required, but got: %S",proc);}}
ScmObj cise__2152;
#line 66 "libnative.scm"
{ScmObj orig_code=SCM_CLOSURE_CODE(proc);ScmEnvFrame* orig_env=
SCM_CLOSURE_ENV(proc);ScmCompiledCode* builder=
#line 69 "libnative.scm"
SCM_COMPILED_CODE(
Scm_MakeCompiledCodeBuilder(SCM_PROCEDURE_REQUIRED(proc),
SCM_PROCEDURE_OPTIONAL(proc),
SCM_PROCEDURE_INFO(proc),proc,SCM_FALSE));ScmObj r=
#line 75 "libnative.scm"
Scm_ApplyRec1(compiler,orig_code);
SCM_ASSERT(SCM_PAIRP(r));;ScmObj maxdepth=
SCM_CAR(r);
SCM_ASSERT(SCM_PAIRP(SCM_CDR(r)));;ScmObj codevec=
SCM_CADR(r);ScmObj offsets=
SCM_CDDR(r);
SCM_ASSERT(SCM_INTP(maxdepth));
SCM_ASSERT(SCM_U8VECTORP(codevec));
{ScmObj codepage=Scm__AllocateCodePage(SCM_U8VECTOR(codevec));
SCM_FOR_EACH(cise__2152,offsets) {{ScmObj offset=SCM_CAR(cise__2152);
Scm_CompiledCodeEmit(builder,SCM_VM_XINSN,0,0,
#line 87 "libnative.scm"
SCM_LIST2(codepage,offset),SCM_FALSE);}}}
#line 90 "libnative.scm"
Scm_CompiledCodeEmit(builder,SCM_VM_RET,0,0,SCM_FALSE,SCM_FALSE);
Scm_CompiledCodeFinishBuilder(builder,SCM_INT_VALUE(maxdepth));
{SCM_RESULT=(Scm_MakeClosure(SCM_OBJ(builder),orig_env));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnative_25unsafe_jit_enabledP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("%unsafe-jit-enabled?");
  {
{
int SCM_RESULT;

#line 102 "libnative.scm"

#if GAUCHE_ENABLE_UNSAFE_JIT_API

#line 103 "libnative.scm"
{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}
#else /* !GAUCHE_ENABLE_UNSAFE_JIT_API */

#line 104 "libnative.scm"
{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}
#endif /* GAUCHE_ENABLE_UNSAFE_JIT_API */

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnativevm_field_offset(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj field_name_scm;
  ScmSymbol* field_name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vm-field-offset");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  field_name_scm = SCM_SUBRARGS[0];
  if (!SCM_SYMBOLP(field_name_scm)) Scm_Error("<symbol> required, but got %S", field_name_scm);
  field_name = SCM_SYMBOL(field_name_scm);
  {
{
ScmObj SCM_RESULT;

#line 131 "libnative.scm"
{static ScmHashTable* tab=NULL;if ((tab)==(NULL)){{{ScmHashTable* G2169=SCM_HASH_TABLE(Scm_MakeHashTableSimple(SCM_HASH_EQ,9));Scm_HashTableSet(G2169,scm__rc.d2149[139],Scm_IntptrToInteger(((intptr_t )(
offsetof(ScmVM,env)))),0);Scm_HashTableSet(G2169,scm__rc.d2149[140],Scm_IntptrToInteger(((intptr_t )(
offsetof(ScmVM,denv)))),0);Scm_HashTableSet(G2169,scm__rc.d2149[141],Scm_IntptrToInteger(((intptr_t )(
offsetof(ScmVM,cont)))),0);Scm_HashTableSet(G2169,scm__rc.d2149[142],Scm_IntptrToInteger(((intptr_t )(
offsetof(ScmVM,argp)))),0);Scm_HashTableSet(G2169,scm__rc.d2149[143],Scm_IntptrToInteger(((intptr_t )(
offsetof(ScmVM,val0)))),0);Scm_HashTableSet(G2169,scm__rc.d2149[144],Scm_IntptrToInteger(((intptr_t )(
offsetof(ScmVM,vals)))),0);Scm_HashTableSet(G2169,scm__rc.d2149[145],Scm_IntptrToInteger(((intptr_t )(
offsetof(ScmVM,numVals)))),0);Scm_HashTableSet(G2169,scm__rc.d2149[146],Scm_IntptrToInteger(((intptr_t )(
offsetof(ScmVM,sp)))),0);Scm_HashTableSet(G2169,scm__rc.d2149[147],Scm_IntptrToInteger(((intptr_t )(
offsetof(ScmVM,stackEnd)))),0);tab=(G2169);}}}
{ScmObj off=Scm_HashTableRef(tab,SCM_OBJ(field_name),SCM_FALSE);
if (!(SCM_INTP(off))){{
Scm_Error("Unknown VM field: %S",field_name);}}
{SCM_RESULT=(off);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnativevm_function_address(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vm-function-address");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  {
{
ScmObj SCM_RESULT;

#line 150 "libnative.scm"
{static ScmHashTable* tab=NULL;if ((tab)==(NULL)){{{ScmHashTable* G2170=SCM_HASH_TABLE(Scm_MakeHashTableSimple(SCM_HASH_EQ,8));Scm_HashTableSet(G2170,scm__rc.d2149[159],Scm_IntptrToInteger(((intptr_t )(Scm_Cons))),0);Scm_HashTableSet(G2170,scm__rc.d2149[160],Scm_IntptrToInteger(((intptr_t )(Scm_NumEq))),0);Scm_HashTableSet(G2170,scm__rc.d2149[161],Scm_IntptrToInteger(((intptr_t )(Scm_NumLT))),0);Scm_HashTableSet(G2170,scm__rc.d2149[162],Scm_IntptrToInteger(((intptr_t )(Scm_NumGT))),0);Scm_HashTableSet(G2170,scm__rc.d2149[163],Scm_IntptrToInteger(((intptr_t )(Scm_Add))),0);Scm_HashTableSet(G2170,scm__rc.d2149[164],Scm_IntptrToInteger(((intptr_t )(Scm_Sub))),0);Scm_HashTableSet(G2170,scm__rc.d2149[165],Scm_IntptrToInteger(((intptr_t )(Scm_Mul))),0);Scm_HashTableSet(G2170,scm__rc.d2149[166],Scm_IntptrToInteger(((intptr_t )(Scm_Div))),0);tab=(G2170);}}}
#line 159 "libnative.scm"
{ScmObj addr=Scm_HashTableRef(tab,SCM_OBJ(name),SCM_FALSE);
if (!(SCM_INTEGERP(addr))){{
Scm_Error("Unknown function address: %S",name);}}
{SCM_RESULT=(addr);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnativeraw_value(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("raw-value");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;

#line 166 "libnative.scm"

#if !(GAUCHE_ENABLE_UNSAFE_JIT_API)

#line 167 "libnative.scm"
Scm_Error("Operation not allowed");
#endif /* ! GAUCHE_ENABLE_UNSAFE_JIT_API */


#line 168 "libnative.scm"
{SCM_RESULT=(Scm_IntptrToInteger(((intptr_t )(obj))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[0])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[5])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[7])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[9])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[10])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[14])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[16])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[19])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[46];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = SCM_OBJ(&scm__rc.d2153[0]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[52];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = SCM_OBJ(&scm__rc.d2153[2]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[253];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[56];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[55];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[57];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[58];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[63];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[64];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[77];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[78];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[79];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[75];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[91];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[92];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[97];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[10];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[73];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[254];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[71];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[255];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[69];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[256];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[65];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[60];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[257];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[59];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[2];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[8];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[258];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[259];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[260];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[87];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[261];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[90];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[9];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = SCM_OBJ(&scm__sc.d2150[44]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[262];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[263];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[264];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[265];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[266];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[267];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[268];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[85];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[1];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[269];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[96];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[270];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[271];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[272];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[273];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[274];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[101];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = SCM_OBJ(&scm__rc.d2153[12]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = SCM_OBJ(&scm__sc.d2150[55]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[108];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[105];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[104];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[115];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[275];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[33];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[34];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = SCM_OBJ(&scm__sc.d2150[60]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[133];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[129];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[120];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[181]), i++) = scm__rc.d2149[32];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[181]);
}
void Scm_Init_libnative() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[0])),TRUE); /* gauche.bootstrap */
  scm__rc.d2149[0] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[1]), SCM_FIND_MODULE_CREATE)); /* module gauche.bootstrap */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[0]));
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[1])),TRUE); /* %%call-native */
  scm__rc.d2149[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[2])),TRUE); /* tstart */
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[3])),TRUE); /* tend */
  scm__rc.d2149[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[4])),TRUE); /* code */
  scm__rc.d2149[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[5])),TRUE); /* start */
  scm__rc.d2149[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[6])),TRUE); /* end */
  scm__rc.d2149[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[7])),TRUE); /* entry */
  scm__rc.d2149[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[8])),TRUE); /* patcher */
  scm__rc.d2149[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[9])),TRUE); /* rettype */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[1]), scm__rc.d2149[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[2]), scm__rc.d2149[9]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[3]), scm__rc.d2149[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[4]), scm__rc.d2149[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[5]), scm__rc.d2149[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[6]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[7]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[8]), scm__rc.d2149[3]);
  scm__rc.d2149[11] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[10])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[11]), scm__rc.d2149[11]);
  scm__rc.d2149[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[12])),TRUE); /* bind-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[12]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[13]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[14]), scm__rc.d2149[12]);
  scm__rc.d2149[13] = Scm_MakeExtendedPair(scm__rc.d2149[2], SCM_OBJ(&scm__rc.d2151[8]), SCM_OBJ(&scm__rc.d2151[16]));
  scm__rc.d2149[14] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[13])),TRUE); /* <fixnum> */
  scm__rc.d2149[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[14])),TRUE); /* <uvector> */
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[15])),TRUE); /* <top> */
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[16])),TRUE); /* -> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[4] = scm__rc.d2149[14];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[5] = scm__rc.d2149[14];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[6] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[7] = scm__rc.d2149[14];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[8] = scm__rc.d2149[14];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[9] = scm__rc.d2149[14];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[10] = scm__rc.d2149[16];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[11] = scm__rc.d2149[16];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[12] = scm__rc.d2149[17];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[13] = scm__rc.d2149[16];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("%%call-native")), SCM_OBJ(&libnative_25_25call_native__STUB), 0);
  libnative_25_25call_native__STUB.common.info = scm__rc.d2149[13];
  libnative_25_25call_native__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[17])),TRUE); /* %%jit-compile-procedure */
  scm__rc.d2149[33] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[18])),TRUE); /* proc */
  scm__rc.d2149[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[19])),TRUE); /* compiler */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[17]), scm__rc.d2149[34]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[18]), scm__rc.d2149[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[21]), scm__rc.d2149[11]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[22]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[23]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[24]), scm__rc.d2149[12]);
  scm__rc.d2149[35] = Scm_MakeExtendedPair(scm__rc.d2149[32], SCM_OBJ(&scm__rc.d2151[18]), SCM_OBJ(&scm__rc.d2151[26]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[36]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[36]))[4] = scm__rc.d2149[16];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[36]))[5] = scm__rc.d2149[16];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[36]))[6] = scm__rc.d2149[17];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[36]))[7] = scm__rc.d2149[16];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("%%jit-compile-procedure")), SCM_OBJ(&libnative_25_25jit_compile_procedure__STUB), 0);
  libnative_25_25jit_compile_procedure__STUB.common.info = scm__rc.d2149[35];
  libnative_25_25jit_compile_procedure__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[45] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[20])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[44] = Scm_MakeIdentifier(scm__rc.d2149[45], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[46] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[21])),TRUE); /* *amd64-call-reg-code* */
  scm__rc.d2149[49] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[22])),TRUE); /* gauche.internal */
  scm__rc.d2149[48] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[49]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[47] = Scm_MakeIdentifier(scm__rc.d2149[46], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#*amd64-call-reg-code* */
  scm__rc.d2149[50] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[23])),TRUE); /* %toplevel */
  scm__rc.d2149[51] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[0]))->name = scm__rc.d2149[50];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[0]))->debugInfo = scm__rc.d2149[51];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[3] = SCM_WORD(scm__rc.d2149[44]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[6] = SCM_WORD(scm__rc.d2149[46]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[10] = SCM_WORD(SCM_OBJ(&scm__rc.d2153[0]));
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[12] = SCM_WORD(scm__rc.d2149[47]);
  scm__rc.d2149[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[24])),TRUE); /* *amd64-call-spill-code* */
  scm__rc.d2149[53] = Scm_MakeIdentifier(scm__rc.d2149[52], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#*amd64-call-spill-code* */
  scm__rc.d2149[54] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[1]))->name = scm__rc.d2149[50];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[1]))->debugInfo = scm__rc.d2149[54];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[14]))[3] = SCM_WORD(scm__rc.d2149[44]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[14]))[6] = SCM_WORD(scm__rc.d2149[52]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[14]))[10] = SCM_WORD(SCM_OBJ(&scm__rc.d2153[2]));
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[14]))[12] = SCM_WORD(scm__rc.d2149[53]);
  scm__rc.d2149[55] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[25])),TRUE); /* o */
  scm__rc.d2149[56] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[26])),TRUE); /* p */
  scm__rc.d2149[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[27])),TRUE); /* i */
  scm__rc.d2149[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[28])),TRUE); /* s */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[27]), scm__rc.d2149[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[28]), scm__rc.d2149[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[29]), scm__rc.d2149[56]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[30]), scm__rc.d2149[55]);
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[29])),TRUE); /* call-amd64 */
  scm__rc.d2149[60] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[30])),FALSE); /* G2157 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[31]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[32]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[33]), scm__rc.d2149[56]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[36]), scm__rc.d2149[11]);
  scm__rc.d2149[61] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[32]), SCM_OBJ(&scm__rc.d2151[33]), SCM_OBJ(&scm__rc.d2151[37]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[38]), scm__rc.d2149[61]);
  scm__rc.d2149[62] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[2]))->debugInfo = scm__rc.d2149[62];
  scm__rc.d2149[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[32])),TRUE); /* f */
  scm__rc.d2149[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[33])),TRUE); /* d */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[39]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[40]), scm__rc.d2149[63]);
  scm__rc.d2149[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[34])),FALSE); /* G2156 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[41]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[42]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[45]), scm__rc.d2149[11]);
  scm__rc.d2149[66] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[42]), SCM_OBJ(&scm__rc.d2151[33]), SCM_OBJ(&scm__rc.d2151[46]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[47]), scm__rc.d2149[66]);
  scm__rc.d2149[67] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[3]))->debugInfo = scm__rc.d2149[67];
  scm__rc.d2149[69] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[35])),TRUE); /* count */
  scm__rc.d2149[68] = Scm_MakeIdentifier(scm__rc.d2149[69], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#count */
  scm__rc.d2149[71] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[36])),TRUE); /* max */
  scm__rc.d2149[70] = Scm_MakeIdentifier(scm__rc.d2149[71], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#max */
  scm__rc.d2149[73] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[37])),TRUE); /* call-amd64-regs */
  scm__rc.d2149[72] = Scm_MakeIdentifier(scm__rc.d2149[73], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#call-amd64-regs */
  scm__rc.d2149[75] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[38])),TRUE); /* min */
  scm__rc.d2149[74] = Scm_MakeIdentifier(scm__rc.d2149[75], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#min */
  scm__rc.d2149[77] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[39])),TRUE); /* call-amd64-spill */
  scm__rc.d2149[76] = Scm_MakeIdentifier(scm__rc.d2149[77], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#call-amd64-spill */
  scm__rc.d2149[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[40])),TRUE); /* ptr */
  scm__rc.d2149[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[41])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[50]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[51]), scm__rc.d2149[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[54]), scm__rc.d2149[11]);
  scm__rc.d2149[80] = Scm_MakeExtendedPair(scm__rc.d2149[59], SCM_OBJ(&scm__rc.d2151[51]), SCM_OBJ(&scm__rc.d2151[55]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[56]), scm__rc.d2149[80]);
  scm__rc.d2149[81] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[4]))->name = scm__rc.d2149[59];/* call-amd64 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[4]))->debugInfo = scm__rc.d2149[81];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]))[5] = SCM_WORD(scm__rc.d2149[68]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]))[12] = SCM_WORD(scm__rc.d2149[68]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]))[19] = SCM_WORD(scm__rc.d2149[70]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]))[25] = SCM_WORD(scm__rc.d2149[70]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]))[37] = SCM_WORD(scm__rc.d2149[72]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]))[46] = SCM_WORD(scm__rc.d2149[74]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]))[52] = SCM_WORD(scm__rc.d2149[74]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[40]))[57] = SCM_WORD(scm__rc.d2149[76]);
  scm__rc.d2149[82] = Scm_MakeIdentifier(scm__rc.d2149[59], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#call-amd64 */
  scm__rc.d2149[83] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[5]))->name = scm__rc.d2149[50];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[5]))->debugInfo = scm__rc.d2149[83];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[99]))[5] = SCM_WORD(scm__rc.d2149[44]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[99]))[8] = SCM_WORD(scm__rc.d2149[59]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[99]))[15] = SCM_WORD(scm__rc.d2149[82]);
  scm__rc.d2149[85] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[42])),TRUE); /* module-binding-ref */
  scm__rc.d2149[84] = Scm_MakeIdentifier(scm__rc.d2149[85], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#module-binding-ref */
  scm__rc.d2149[87] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[43])),TRUE); /* ~ */
  scm__rc.d2149[86] = Scm_MakeIdentifier(scm__rc.d2149[87], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#~ */
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[45])),TRUE); /* error */
  scm__rc.d2149[88] = Scm_MakeIdentifier(scm__rc.d2149[89], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#error */
  scm__rc.d2149[90] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[46])),TRUE); /* b */
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[47])),TRUE); /* num-iargs */
  scm__rc.d2149[92] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[48])),TRUE); /* num-fargs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[80]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[81]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[82]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[83]), scm__rc.d2149[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[86]), scm__rc.d2149[11]);
  scm__rc.d2149[93] = Scm_MakeExtendedPair(scm__rc.d2149[73], SCM_OBJ(&scm__rc.d2151[83]), SCM_OBJ(&scm__rc.d2151[87]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[88]), scm__rc.d2149[93]);
  scm__rc.d2149[94] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[6]))->name = scm__rc.d2149[73];/* call-amd64-regs */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[6]))->debugInfo = scm__rc.d2149[94];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]))[14] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]))[44] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]))[71] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]))[84] = SCM_WORD(scm__rc.d2149[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]))[90] = SCM_WORD(scm__rc.d2149[47]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]))[96] = SCM_WORD(scm__rc.d2149[56]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]))[106] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[116]))[110] = SCM_WORD(scm__rc.d2149[90]);
  scm__rc.d2149[95] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[7]))->name = scm__rc.d2149[50];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[7]))->debugInfo = scm__rc.d2149[95];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[237]))[3] = SCM_WORD(scm__rc.d2149[44]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[237]))[6] = SCM_WORD(scm__rc.d2149[73]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[237]))[12] = SCM_WORD(scm__rc.d2149[1]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[237]))[14] = SCM_WORD(scm__rc.d2149[2]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[237]))[16] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[237]))[22] = SCM_WORD(scm__rc.d2149[72]);
  scm__rc.d2149[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[49])),TRUE); /* i32 */
  scm__rc.d2149[97] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[50])),TRUE); /* num-spills */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[92]), scm__rc.d2149[97]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[93]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[94]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[95]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[96]), scm__rc.d2149[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[99]), scm__rc.d2149[11]);
  scm__rc.d2149[98] = Scm_MakeExtendedPair(scm__rc.d2149[77], SCM_OBJ(&scm__rc.d2151[96]), SCM_OBJ(&scm__rc.d2151[100]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[101]), scm__rc.d2149[98]);
  scm__rc.d2149[99] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[8]))->name = scm__rc.d2149[77];/* call-amd64-spill */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[8]))->debugInfo = scm__rc.d2149[99];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[14] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[49] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[107] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[148] = SCM_WORD(scm__rc.d2149[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[157] = SCM_WORD(scm__rc.d2149[53]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[164] = SCM_WORD(scm__rc.d2149[56]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[174] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[178] = SCM_WORD(scm__rc.d2149[90]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[184] = SCM_WORD(scm__rc.d2149[96]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[192] = SCM_WORD(scm__rc.d2149[96]);
  scm__rc.d2149[100] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[9]))->name = scm__rc.d2149[50];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[9]))->debugInfo = scm__rc.d2149[100];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[466]))[3] = SCM_WORD(scm__rc.d2149[44]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[466]))[6] = SCM_WORD(scm__rc.d2149[77]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[466]))[12] = SCM_WORD(scm__rc.d2149[1]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[466]))[14] = SCM_WORD(scm__rc.d2149[2]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[466]))[16] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[466]))[22] = SCM_WORD(scm__rc.d2149[76]);
  scm__rc.d2149[101] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[51])),TRUE); /* *winx64-call-reg-code* */
  scm__rc.d2149[102] = Scm_MakeIdentifier(scm__rc.d2149[101], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#*winx64-call-reg-code* */
  scm__rc.d2149[103] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[10]))->name = scm__rc.d2149[50];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[10]))->debugInfo = scm__rc.d2149[103];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[490]))[3] = SCM_WORD(scm__rc.d2149[44]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[490]))[6] = SCM_WORD(scm__rc.d2149[101]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[490]))[10] = SCM_WORD(SCM_OBJ(&scm__rc.d2153[12]));
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[490]))[12] = SCM_WORD(scm__rc.d2149[102]);
  scm__rc.d2149[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[52])),TRUE); /* call-winx64 */
  scm__rc.d2149[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[53])),FALSE); /* G2159 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[102]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[103]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[106]), scm__rc.d2149[11]);
  scm__rc.d2149[106] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[103]), SCM_OBJ(&scm__rc.d2151[33]), SCM_OBJ(&scm__rc.d2151[107]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[108]), scm__rc.d2149[106]);
  scm__rc.d2149[107] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[11]))->debugInfo = scm__rc.d2149[107];
  scm__rc.d2149[108] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[54])),FALSE); /* G2158 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[109]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[110]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[113]), scm__rc.d2149[11]);
  scm__rc.d2149[109] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[110]), SCM_OBJ(&scm__rc.d2151[33]), SCM_OBJ(&scm__rc.d2151[114]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[115]), scm__rc.d2149[109]);
  scm__rc.d2149[110] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[12]))->debugInfo = scm__rc.d2149[110];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[120]), scm__rc.d2149[11]);
  scm__rc.d2149[111] = Scm_MakeExtendedPair(scm__rc.d2149[104], SCM_OBJ(&scm__rc.d2151[51]), SCM_OBJ(&scm__rc.d2151[121]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[122]), scm__rc.d2149[111]);
  scm__rc.d2149[112] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[13]))->name = scm__rc.d2149[104];/* call-winx64 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[13]))->debugInfo = scm__rc.d2149[112];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]))[5] = SCM_WORD(scm__rc.d2149[68]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]))[12] = SCM_WORD(scm__rc.d2149[68]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]))[19] = SCM_WORD(scm__rc.d2149[70]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]))[25] = SCM_WORD(scm__rc.d2149[70]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]))[37] = SCM_WORD(scm__rc.d2149[72]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[516]))[42] = SCM_WORD(scm__rc.d2149[88]);
  scm__rc.d2149[113] = Scm_MakeIdentifier(scm__rc.d2149[104], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#call-winx64 */
  scm__rc.d2149[114] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[14]))->name = scm__rc.d2149[50];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[14]))->debugInfo = scm__rc.d2149[114];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[560]))[5] = SCM_WORD(scm__rc.d2149[44]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[560]))[8] = SCM_WORD(scm__rc.d2149[104]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[560]))[15] = SCM_WORD(scm__rc.d2149[113]);
  scm__rc.d2149[115] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[56])),TRUE); /* call-winx64-regs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[138]), scm__rc.d2149[11]);
  scm__rc.d2149[116] = Scm_MakeExtendedPair(scm__rc.d2149[115], SCM_OBJ(&scm__rc.d2151[83]), SCM_OBJ(&scm__rc.d2151[139]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[140]), scm__rc.d2149[116]);
  scm__rc.d2149[117] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[15]))->name = scm__rc.d2149[115];/* call-winx64-regs */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[15]))->debugInfo = scm__rc.d2149[117];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]))[14] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]))[44] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]))[71] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]))[84] = SCM_WORD(scm__rc.d2149[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]))[90] = SCM_WORD(scm__rc.d2149[102]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]))[96] = SCM_WORD(scm__rc.d2149[56]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]))[106] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[577]))[110] = SCM_WORD(scm__rc.d2149[90]);
  scm__rc.d2149[118] = Scm_MakeIdentifier(scm__rc.d2149[115], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#call-winx64-regs */
  scm__rc.d2149[119] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[16]))->name = scm__rc.d2149[50];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[16]))->debugInfo = scm__rc.d2149[119];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[698]))[3] = SCM_WORD(scm__rc.d2149[44]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[698]))[6] = SCM_WORD(scm__rc.d2149[115]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[698]))[12] = SCM_WORD(scm__rc.d2149[1]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[698]))[14] = SCM_WORD(scm__rc.d2149[2]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[698]))[16] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[698]))[22] = SCM_WORD(scm__rc.d2149[118]);
  scm__rc.d2149[120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[57])),TRUE); /* %unsafe-jit-enabled? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[141]), scm__rc.d2149[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[142]), scm__rc.d2149[49]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[143]), scm__rc.d2149[12]);
  scm__rc.d2149[121] = Scm_MakeExtendedPair(scm__rc.d2149[120], SCM_NIL, SCM_OBJ(&scm__rc.d2151[144]));
  scm__rc.d2149[122] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[58])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[123]))[3] = scm__rc.d2149[49];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[123]))[4] = scm__rc.d2149[17];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[123]))[5] = scm__rc.d2149[122];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%unsafe-jit-enabled?")), SCM_OBJ(&libnative_25unsafe_jit_enabledP__STUB), 0);
  libnative_25unsafe_jit_enabledP__STUB.common.info = scm__rc.d2149[121];
  libnative_25unsafe_jit_enabledP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[123]);
  scm__rc.d2149[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[59])),TRUE); /* %jit-compile */
  scm__rc.d2149[130] = Scm_MakeIdentifier(scm__rc.d2149[120], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#%unsafe-jit-enabled? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[147]), scm__rc.d2149[11]);
  scm__rc.d2149[131] = Scm_MakeExtendedPair(scm__rc.d2149[129], SCM_OBJ(&scm__rc.d2151[18]), SCM_OBJ(&scm__rc.d2151[148]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[149]), scm__rc.d2149[131]);
  scm__rc.d2149[132] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[17]))->name = scm__rc.d2149[129];/* %jit-compile */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[17]))->debugInfo = scm__rc.d2149[132];
  scm__rc.d2149[133] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[61])),TRUE); /* _ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[152]), scm__rc.d2149[11]);
  scm__rc.d2149[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[62])),TRUE); /* unused-args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[153]), scm__rc.d2149[133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[154]), scm__rc.d2149[134]);
  scm__rc.d2149[135] = Scm_MakeExtendedPair(scm__rc.d2149[129], scm__rc.d2149[133], SCM_OBJ(&scm__rc.d2151[156]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[157]), scm__rc.d2149[135]);
  scm__rc.d2149[136] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[18]))->name = scm__rc.d2149[129];/* %jit-compile */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[18]))->debugInfo = scm__rc.d2149[136];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[727]))[3] = SCM_WORD(scm__rc.d2149[88]);
  scm__rc.d2149[137] = Scm_MakeIdentifier(scm__rc.d2149[129], SCM_MODULE(scm__rc.d2149[48]), SCM_NIL); /* gauche.internal#%jit-compile */
  scm__rc.d2149[138] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[19]))->name = scm__rc.d2149[50];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[19]))->debugInfo = scm__rc.d2149[138];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]))[3] = SCM_WORD(scm__rc.d2149[44]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]))[6] = SCM_WORD(scm__rc.d2149[129]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]))[12] = SCM_WORD(scm__rc.d2149[130]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]))[18] = SCM_WORD(scm__rc.d2149[1]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]))[20] = SCM_WORD(scm__rc.d2149[32]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]))[22] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[732]))[31] = SCM_WORD(scm__rc.d2149[137]);
  scm__rc.d2149[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[64])),TRUE); /* env */
  scm__rc.d2149[140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[65])),TRUE); /* denv */
  scm__rc.d2149[141] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[66])),TRUE); /* cont */
  scm__rc.d2149[142] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[67])),TRUE); /* argp */
  scm__rc.d2149[143] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[68])),TRUE); /* val0 */
  scm__rc.d2149[144] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[69])),TRUE); /* vals */
  scm__rc.d2149[145] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[70])),TRUE); /* numVals */
  scm__rc.d2149[146] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[71])),TRUE); /* sp */
  scm__rc.d2149[147] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[72])),TRUE); /* stackEnd */
  scm__rc.d2149[148] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[63])),TRUE); /* vm-field-offset */
  scm__rc.d2149[149] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[73])),TRUE); /* field-name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[158]), scm__rc.d2149[149]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[161]), scm__rc.d2149[11]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[162]), scm__rc.d2149[148]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[163]), scm__rc.d2149[49]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[164]), scm__rc.d2149[12]);
  scm__rc.d2149[150] = Scm_MakeExtendedPair(scm__rc.d2149[148], SCM_OBJ(&scm__rc.d2151[158]), SCM_OBJ(&scm__rc.d2151[166]));
  scm__rc.d2149[151] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[74])),TRUE); /* <symbol> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[152]))[3] = scm__rc.d2149[49];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[152]))[4] = scm__rc.d2149[151];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[152]))[5] = scm__rc.d2149[17];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[152]))[6] = scm__rc.d2149[16];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("vm-field-offset")), SCM_OBJ(&libnativevm_field_offset__STUB), 0);
  libnativevm_field_offset__STUB.common.info = scm__rc.d2149[150];
  libnativevm_field_offset__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[152]);
  scm__rc.d2149[159] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[76])),TRUE); /* Cons */
  scm__rc.d2149[160] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[77])),TRUE); /* NumEq */
  scm__rc.d2149[161] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[78])),TRUE); /* NumLT */
  scm__rc.d2149[162] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[79])),TRUE); /* NumGT */
  scm__rc.d2149[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[80])),TRUE); /* Add */
  scm__rc.d2149[164] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[81])),TRUE); /* Sub */
  scm__rc.d2149[165] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[82])),TRUE); /* Mul */
  scm__rc.d2149[166] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[83])),TRUE); /* Div */
  scm__rc.d2149[167] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[75])),TRUE); /* vm-function-address */
  scm__rc.d2149[168] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[84])),TRUE); /* name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[167]), scm__rc.d2149[168]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[170]), scm__rc.d2149[11]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[171]), scm__rc.d2149[167]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[172]), scm__rc.d2149[49]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[173]), scm__rc.d2149[12]);
  scm__rc.d2149[169] = Scm_MakeExtendedPair(scm__rc.d2149[167], SCM_OBJ(&scm__rc.d2151[167]), SCM_OBJ(&scm__rc.d2151[175]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("vm-function-address")), SCM_OBJ(&libnativevm_function_address__STUB), 0);
  libnativevm_function_address__STUB.common.info = scm__rc.d2149[169];
  libnativevm_function_address__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[152]);
  scm__rc.d2149[170] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[85])),TRUE); /* raw-value */
  scm__rc.d2149[171] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[86])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[176]), scm__rc.d2149[171]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[179]), scm__rc.d2149[11]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[180]), scm__rc.d2149[170]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[181]), scm__rc.d2149[49]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[182]), scm__rc.d2149[12]);
  scm__rc.d2149[172] = Scm_MakeExtendedPair(scm__rc.d2149[170], SCM_OBJ(&scm__rc.d2151[176]), SCM_OBJ(&scm__rc.d2151[184]));
  scm__rc.d2149[173] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[87])),TRUE); /* <integer> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[174]))[3] = scm__rc.d2149[49];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[174]))[4] = scm__rc.d2149[16];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[174]))[5] = scm__rc.d2149[17];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[174]))[6] = scm__rc.d2149[173];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("raw-value")), SCM_OBJ(&libnativeraw_value__STUB), 0);
  libnativeraw_value__STUB.common.info = scm__rc.d2149[172];
  libnativeraw_value__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[174]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[253] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[88])),TRUE); /* memq */
  scm__rc.d2149[254] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[89])),TRUE); /* zero? */
  scm__rc.d2149[255] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[90])),TRUE); /* - */
  scm__rc.d2149[256] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[91])),TRUE); /* ^p */
  scm__rc.d2149[257] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[92])),TRUE); /* let* */
  scm__rc.d2149[258] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[93])),TRUE); /* list* */
  scm__rc.d2149[259] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[94])),TRUE); /* quasiquote */
  scm__rc.d2149[260] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[95])),TRUE); /* unquote */
  scm__rc.d2149[261] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[96])),TRUE); /* entry-offsets */
  scm__rc.d2149[262] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[97])),TRUE); /* icount */
  scm__rc.d2149[263] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[98])),TRUE); /* fcount */
  scm__rc.d2149[264] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[99])),TRUE); /* farg-offsets */
  scm__rc.d2149[265] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[100])),TRUE); /* unquote-splicing */
  scm__rc.d2149[266] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[101])),TRUE); /* r */
  scm__rc.d2149[267] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[102])),TRUE); /* caar */
  scm__rc.d2149[268] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[103])),TRUE); /* effective-nargs */
  scm__rc.d2149[269] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[104])),TRUE); /* * */
  scm__rc.d2149[270] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[105])),TRUE); /* scount */
  scm__rc.d2149[271] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[106])),TRUE); /* spill-offset */
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[107])),TRUE); /* n */
  scm__rc.d2149[273] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[108])),TRUE); /* < */
  scm__rc.d2149[274] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[109])),TRUE); /* ^n */
  scm__rc.d2149[275] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[110])),TRUE); /* jcp */
}
