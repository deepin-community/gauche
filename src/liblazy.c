/* Generated automatically from liblazy.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/priv/promiseP.h"
static ScmObj liblazyforce(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(liblazyforce__STUB, 1, 0,SCM_FALSE,liblazyforce, NULL, NULL);

static ScmObj liblazypromiseP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(liblazypromiseP__STUB, 1, 0,1, SCM_FALSE,0, liblazypromiseP, NULL, NULL);

static ScmObj liblazyeager(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(liblazyeager__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, liblazyeager, NULL, NULL);

static ScmObj liblazypromise_kind_SETTER(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(liblazypromise_kind_SETTER__STUB, 2, 0,SCM_FALSE,liblazypromise_kind_SETTER, NULL, NULL);

static ScmObj liblazypromise_kind(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(liblazypromise_kind__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, liblazypromise_kind, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 134u, 6u, 6u, 104u, 2u, 1u, 36u, 112u, 144u, 192u, 144u, 9u,
28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u,
3u, 2u, 96u, 56u, 72u,};
static ScmObj liblazy_25lcons(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(liblazy_25lcons__STUB, 2, 2,SCM_FALSE,liblazy_25lcons, NULL, NULL);

static ScmObj liblazygenerator_TOlseq(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(liblazygenerator_TOlseq__STUB, 1, 1,SCM_FALSE,liblazygenerator_TOlseq, NULL, NULL);

static unsigned char uvector__00002[] = {
 0u, 3u, 128u, 6u, 4u, 128u, 136u, 98u, 12u, 12u, 107u, 1u, 18u, 64u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 131u, 6u, 4u, 128u, 136u, 224u, 129u, 130u, 3u, 128u, 160u,
66u, 71u, 3u, 12u, 9u, 1u, 17u, 192u, 131u, 2u, 64u, 68u, 112u, 16u,
192u, 233u, 1u, 64u, 164u, 142u, 0u, 24u, 18u, 2u, 33u, 136u, 48u,
49u, 168u, 129u, 160u, 40u, 20u, 134u, 80u, 152u, 35u, 64u, 66u, 7u,
36u, 146u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 131u, 6u, 4u, 128u, 136u, 224u, 129u, 130u, 8u, 128u, 160u,
66u, 71u, 3u, 12u, 9u, 1u, 17u, 192u, 131u, 2u, 64u, 68u, 112u, 16u,
192u, 233u, 1u, 64u, 164u, 142u, 0u, 24u, 18u, 2u, 33u, 136u, 48u,
49u, 168u, 129u, 160u, 40u, 20u, 134u, 80u, 152u, 35u, 64u, 66u, 7u,
36u, 146u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 135u, 6u, 4u, 130u, 72u, 225u, 129u, 130u, 3u, 130u, 96u,
66u, 71u, 11u, 12u, 9u, 2u, 17u, 194u, 131u, 3u, 32u, 16u, 72u, 116u,
128u, 132u, 21u, 5u, 192u, 164u, 146u, 25u, 66u, 96u, 141u, 4u, 136u,
28u, 146u, 71u, 9u, 12u, 9u, 134u, 65u, 28u, 32u, 48u, 38u, 27u, 164u,
112u, 112u, 192u, 144u, 41u, 28u, 20u, 48u, 36u, 22u, 71u, 3u, 12u,
9u, 1u, 17u, 192u, 131u, 2u, 65u, 100u, 112u, 16u, 192u, 233u, 5u,
240u, 18u, 71u, 0u, 12u, 9u, 5u, 144u, 196u, 24u, 24u, 212u, 64u,
208u, 89u, 13u, 176u, 72u, 76u, 50u, 2u, 98u, 20u, 73u, 32u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 135u, 6u, 4u, 130u, 72u, 225u, 129u, 130u, 8u, 130u, 96u,
66u, 71u, 11u, 12u, 9u, 2u, 17u, 194u, 131u, 3u, 32u, 16u, 72u, 116u,
128u, 132u, 21u, 5u, 192u, 164u, 146u, 25u, 66u, 96u, 141u, 4u, 136u,
28u, 146u, 71u, 9u, 12u, 9u, 134u, 65u, 28u, 32u, 48u, 38u, 27u, 164u,
112u, 112u, 192u, 144u, 41u, 28u, 20u, 48u, 36u, 22u, 71u, 3u, 12u,
9u, 1u, 17u, 192u, 131u, 2u, 65u, 100u, 112u, 16u, 192u, 233u, 5u,
240u, 18u, 71u, 0u, 12u, 9u, 5u, 144u, 196u, 24u, 24u, 212u, 64u,
208u, 89u, 13u, 176u, 72u, 76u, 50u, 2u, 98u, 20u, 73u, 32u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 190u, 134u, 8u, 48u, 65u, 176u, 17u, 13u, 176u, 95u, 0u, 12u,
162u, 8u, 129u, 120u, 1u, 14u, 74u, 32u, 104u, 44u, 134u, 216u, 36u,
58u, 64u, 66u, 10u, 130u, 224u, 82u, 67u, 40u, 128u, 224u, 152u, 16u,
193u, 34u, 7u, 36u, 144u, 228u, 162u, 6u, 130u, 200u, 109u, 130u, 67u,
164u, 4u, 32u, 168u, 46u, 5u, 36u, 50u, 136u, 34u, 9u, 129u, 12u, 18u,
32u, 114u, 73u, 36u, 145u, 222u, 131u, 3u, 26u, 132u, 197u, 184u, 38u,
49u, 4u, 142u, 238u, 24u, 24u, 212u, 38u, 20u, 65u, 48u, 188u, 36u,
119u, 80u, 192u, 152u, 55u, 17u, 220u, 195u, 2u, 65u, 100u, 119u, 32u,
192u, 200u, 4u, 23u, 192u, 9u, 9u, 131u, 25u, 35u, 183u, 134u, 4u,
205u, 60u, 142u, 218u, 24u, 19u, 2u, 146u, 59u, 96u, 96u, 72u, 8u,
142u, 212u, 24u, 19u, 2u, 146u, 59u, 56u, 96u, 131u, 32u, 32u, 202u,
32u, 136u, 23u, 128u, 16u, 228u, 162u, 6u, 128u, 160u, 82u, 25u, 68u,
7u, 1u, 64u, 134u, 2u, 16u, 57u, 36u, 57u, 40u, 129u, 160u, 40u, 20u,
134u, 81u, 4u, 64u, 80u, 33u, 128u, 132u, 14u, 73u, 36u, 142u, 202u,
24u, 24u, 212u, 38u, 133u, 44u, 4u, 208u, 169u, 194u, 71u, 97u, 12u,
12u, 106u, 19u, 66u, 85u, 130u, 104u, 76u, 209u, 35u, 175u, 134u, 4u,
208u, 144u, 34u, 58u, 224u, 96u, 72u, 8u, 142u, 176u, 24u, 32u, 232u,
20u, 145u, 213u, 195u, 2u, 64u, 164u, 117u, 80u, 192u, 154u, 27u,
148u, 71u, 83u, 12u, 1u, 192u, 65u, 208u, 17u, 9u, 161u, 185u, 68u,
38u, 132u, 96u, 18u, 58u, 136u, 96u, 77u, 15u, 9u, 35u, 168u, 6u, 4u,
128u, 136u, 233u, 193u, 129u, 52u, 60u, 36u, 142u, 150u, 24u, 32u,
192u, 228u, 176u, 17u, 36u, 116u, 144u, 192u, 198u, 176u, 17u, 35u,
163u, 134u, 8u, 62u, 5u, 224u, 4u, 142u, 140u, 24u, 18u, 5u, 35u,
161u, 6u, 0u, 236u, 28u, 4u, 17u, 2u, 240u, 2u, 33u, 8u, 10u, 4u, 36u,
56u, 8u, 14u, 5u, 224u, 4u, 66u, 48u, 20u, 8u, 73u, 12u, 42u, 73u,
28u, 244u, 48u, 38u, 138u, 0u, 145u, 207u, 3u, 2u, 64u, 132u, 115u,
160u, 192u, 144u, 17u, 28u, 224u, 48u, 38u, 137u, 206u, 17u, 204u,
195u, 2u, 104u, 154u, 81u, 28u, 200u, 48u, 36u, 4u, 71u, 48u, 12u, 9u,
162u, 96u, 164u, 114u, 208u, 192u, 207u, 9u, 6u, 16u, 198u, 32u, 40u,
76u, 64u, 144u, 161u, 16u, 47u, 1u, 36u, 54u, 4u, 209u, 44u, 192u,
19u, 68u, 129u, 2u, 104u, 136u, 81u, 9u, 161u, 219u, 97u, 164u, 38u,
3u, 132u, 146u, 72u, 228u, 225u, 129u, 52u, 93u, 28u, 142u, 70u, 24u,
26u, 225u, 82u, 71u, 34u, 12u, 9u, 10u, 145u, 200u, 67u, 3u, 32u, 16u,
40u, 101u, 13u, 112u, 177u, 224u, 33u, 162u, 22u, 36u, 136u, 84u, 50u,
134u, 184u, 88u, 134u, 21u, 33u, 170u, 22u, 36u, 144u, 222u, 19u, 70u,
134u, 130u, 104u, 186u, 57u, 12u, 138u, 154u, 48u, 60u, 72u, 228u, 1u,
129u, 52u, 112u, 120u, 142u, 54u, 24u, 19u, 70u, 245u, 8u, 227u, 65u,
129u, 33u, 98u, 56u, 192u, 96u, 77u, 27u, 94u, 35u, 137u, 134u, 4u,
209u, 177u, 178u, 56u, 144u, 96u, 72u, 88u, 142u, 34u, 24u, 25u, 0u,
129u, 3u, 40u, 107u, 133u, 204u, 40u, 26u, 33u, 114u, 72u, 133u, 131u,
40u, 107u, 133u, 200u, 97u, 82u, 26u, 161u, 114u, 73u, 9u, 163u, 90u,
164u, 142u, 32u, 24u, 19u, 72u, 68u, 136u, 225u, 97u, 129u, 52u, 131u,
32u, 142u, 20u, 24u, 18u, 24u, 35u, 132u, 6u, 4u, 210u, 5u, 34u, 56u,
16u, 96u, 77u, 32u, 16u, 35u, 128u, 134u, 4u, 134u, 8u, 224u, 1u,
129u, 32u, 34u, 24u, 131u, 2u, 104u, 188u, 57u, 32u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 12u, 192u, 80u, 152u, 129u, 33u, 66u, 32u,
94u, 2u, 72u, 108u, 1u, 216u, 56u, 8u, 34u, 5u, 224u, 4u, 66u, 16u,
20u, 8u, 72u, 112u, 16u, 28u, 11u, 192u, 8u, 132u, 96u, 40u, 16u,
146u, 24u, 84u, 144u, 32u, 248u, 23u, 128u, 17u, 6u, 7u, 37u, 128u,
137u, 32u, 56u, 8u, 58u, 2u, 34u, 14u, 129u, 73u, 16u, 100u, 4u, 25u,
68u, 17u, 2u, 240u, 2u, 28u, 148u, 64u, 208u, 20u, 10u, 67u, 40u,
128u, 224u, 40u, 16u, 192u, 66u, 7u, 36u, 135u, 37u, 16u, 52u, 5u, 2u,
144u, 202u, 32u, 136u, 10u, 4u, 48u, 16u, 129u, 201u, 36u, 144u, 210u,
32u, 193u, 6u, 192u, 68u, 54u, 193u, 124u, 0u, 50u, 136u, 34u, 5u,
224u, 4u, 57u, 40u, 129u, 160u, 178u, 27u, 96u, 144u, 233u, 1u, 8u,
42u, 11u, 129u, 73u, 12u, 162u, 3u, 130u, 96u, 67u, 4u, 136u, 28u,
146u, 67u, 146u, 136u, 26u, 11u, 33u, 182u, 9u, 14u, 144u, 16u, 130u,
160u, 184u, 20u, 144u, 202u, 32u, 136u, 38u, 4u, 48u, 72u, 129u, 201u,
36u, 146u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 24u, 166u, 15u, 164u,
112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u,
12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 130u, 134u, 4u, 134u, 136u, 224u, 129u, 129u, 32u, 34u, 56u,
24u, 96u, 116u, 128u, 160u, 82u, 71u, 2u, 12u, 9u, 1u, 17u, 192u, 67u,
3u, 32u, 16u, 212u, 4u, 72u, 129u, 160u, 40u, 20u, 195u, 68u, 142u,
0u, 24u, 18u, 2u, 33u, 136u, 48u, 49u, 168u, 134u, 225u, 168u, 8u,
38u, 32u, 4u, 146u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 135u, 134u, 4u, 134u, 136u, 225u, 193u, 129u, 33u, 194u, 56u,
104u, 96u, 135u, 97u, 206u, 2u, 72u, 225u, 129u, 129u, 33u, 194u, 56u,
88u, 96u, 72u, 8u, 142u, 20u, 24u, 29u, 32u, 40u, 20u, 145u, 194u,
67u, 2u, 64u, 68u, 112u, 128u, 192u, 200u, 4u, 53u, 1u, 18u, 32u,
104u, 10u, 5u, 34u, 30u, 135u, 12u, 52u, 72u, 224u, 225u, 129u, 32u,
34u, 56u, 24u, 96u, 132u, 97u, 206u, 0u, 72u, 224u, 1u, 129u, 33u,
194u, 24u, 131u, 3u, 26u, 134u, 80u, 153u, 16u, 8u, 28u, 136u, 110u,
26u, 128u, 130u, 99u, 36u, 19u, 27u, 98u, 73u, 32u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 133u, 134u, 4u, 134u, 136u, 225u, 65u, 129u, 33u, 242u, 56u,
72u, 96u, 116u, 135u, 248u, 9u, 35u, 132u, 6u, 4u, 135u, 200u, 224u,
225u, 129u, 144u, 8u, 104u, 58u, 64u, 66u, 10u, 135u, 224u, 82u, 73u,
16u, 52u, 62u, 97u, 162u, 71u, 6u, 12u, 9u, 135u, 137u, 28u, 20u, 48u,
38u, 32u, 196u, 112u, 64u, 192u, 144u, 41u, 28u, 8u, 48u, 36u, 62u,
71u, 0u, 12u, 9u, 1u, 16u, 196u, 24u, 24u, 212u, 67u, 112u, 208u, 76u,
60u, 66u, 98u, 102u, 73u, 32u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 138u, 134u, 4u, 134u, 136u, 226u, 129u, 129u, 33u, 194u, 56u,
152u, 96u, 135u, 97u, 206u, 2u, 72u, 226u, 65u, 129u, 33u, 194u, 56u,
136u, 96u, 72u, 124u, 142u, 32u, 24u, 29u, 33u, 254u, 2u, 72u, 225u,
225u, 129u, 33u, 242u, 56u, 112u, 96u, 100u, 2u, 26u, 14u, 144u, 16u,
130u, 161u, 248u, 20u, 146u, 68u, 13u, 15u, 145u, 15u, 67u, 134u, 26u,
36u, 112u, 208u, 192u, 152u, 193u, 145u, 195u, 3u, 2u, 99u, 48u, 71u,
11u, 12u, 9u, 2u, 145u, 194u, 67u, 2u, 67u, 228u, 112u, 112u, 192u,
144u, 17u, 28u, 12u, 48u, 66u, 48u, 231u, 0u, 36u, 112u, 0u, 192u,
144u, 225u, 12u, 65u, 129u, 141u, 67u, 40u, 76u, 190u, 68u, 14u, 68u,
55u, 13u, 4u, 198u, 12u, 38u, 56u, 161u, 49u, 223u, 36u, 146u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 189u, 134u, 8u, 50u, 32u, 36u, 119u, 64u, 192u, 198u, 161u,
148u, 66u, 48u, 231u, 0u, 34u, 7u, 34u, 27u, 134u, 131u, 164u, 4u,
32u, 168u, 126u, 5u, 36u, 64u, 208u, 249u, 16u, 244u, 56u, 73u, 36u,
119u, 0u, 192u, 198u, 162u, 27u, 134u, 131u, 164u, 4u, 32u, 168u,
126u, 5u, 36u, 64u, 208u, 249u, 36u, 142u, 220u, 24u, 25u, 68u, 67u,
14u, 16u, 228u, 161u, 49u, 86u, 33u, 201u, 66u, 96u, 188u, 73u, 29u,
176u, 48u, 38u, 61u, 164u, 118u, 176u, 192u, 144u, 225u, 29u, 164u,
48u, 38u, 61u, 164u, 118u, 128u, 192u, 144u, 249u, 29u, 156u, 48u,
50u, 1u, 15u, 240u, 2u, 66u, 99u, 196u, 72u, 236u, 65u, 129u, 141u,
67u, 40u, 132u, 97u, 206u, 0u, 68u, 14u, 68u, 55u, 13u, 64u, 66u, 6u,
128u, 160u, 82u, 33u, 232u, 112u, 146u, 72u, 235u, 193u, 129u, 141u,
68u, 55u, 13u, 64u, 66u, 6u, 128u, 160u, 82u, 73u, 29u, 112u, 48u,
50u, 136u, 134u, 28u, 33u, 201u, 66u, 104u, 68u, 233u, 14u, 74u, 19u,
56u, 210u, 72u, 235u, 65u, 129u, 52u, 38u, 48u, 142u, 178u, 24u, 18u,
28u, 35u, 171u, 134u, 4u, 208u, 152u, 194u, 58u, 152u, 96u, 131u,
160u, 82u, 71u, 82u, 12u, 9u, 2u, 145u, 212u, 3u, 2u, 104u, 94u, 65u,
29u, 56u, 48u, 50u, 135u, 1u, 7u, 64u, 68u, 38u, 133u, 228u, 16u,
154u, 19u, 2u, 27u, 97u, 254u, 0u, 19u, 30u, 34u, 72u, 233u, 129u,
129u, 52u, 52u, 60u, 142u, 150u, 24u, 18u, 2u, 35u, 164u, 134u, 4u,
208u, 208u, 242u, 58u, 64u, 96u, 72u, 112u, 142u, 142u, 24u, 25u, 0u,
135u, 3u, 40u, 128u, 225u, 206u, 0u, 97u, 72u, 112u, 146u, 25u, 162u,
0u, 154u, 25u, 178u, 66u, 96u, 56u, 72u, 232u, 193u, 129u, 33u, 194u,
58u, 0u, 96u, 77u, 16u, 24u, 35u, 158u, 134u, 6u, 120u, 72u, 48u,
134u, 49u, 9u, 136u, 114u, 20u, 34u, 2u, 224u, 4u, 64u, 188u, 4u,
144u, 219u, 14u, 4u, 209u, 0u, 208u, 154u, 33u, 52u, 19u, 1u, 194u,
73u, 35u, 155u, 134u, 4u, 209u, 33u, 194u, 57u, 152u, 96u, 107u, 136u,
137u, 28u, 200u, 48u, 36u, 68u, 71u, 49u, 12u, 12u, 128u, 64u, 161u,
148u, 53u, 196u, 103u, 128u, 134u, 136u, 140u, 146u, 34u, 32u, 202u,
26u, 226u, 50u, 24u, 84u, 134u, 168u, 140u, 146u, 67u, 120u, 77u, 20u,
192u, 9u, 162u, 67u, 132u, 50u, 42u, 104u, 154u, 33u, 35u, 152u, 6u,
4u, 209u, 108u, 66u, 57u, 88u, 96u, 77u, 22u, 90u, 35u, 149u, 6u, 4u,
136u, 200u, 229u, 1u, 129u, 52u, 88u, 16u, 142u, 70u, 24u, 19u, 69u,
112u, 72u, 228u, 65u, 129u, 34u, 50u, 57u, 8u, 96u, 72u, 8u, 142u,
64u, 24u, 25u, 0u, 128u, 131u, 40u, 107u, 137u, 15u, 0u, 13u, 17u,
33u, 36u, 68u, 97u, 148u, 53u, 196u, 132u, 48u, 169u, 13u, 81u, 33u,
36u, 132u, 209u, 85u, 178u, 71u, 31u, 12u, 9u, 163u, 128u, 100u, 113u,
160u, 192u, 154u, 55u, 50u, 71u, 25u, 12u, 9u, 18u, 17u, 197u, 195u,
2u, 104u, 218u, 25u, 28u, 72u, 48u, 38u, 141u, 128u, 17u, 196u, 67u,
2u, 68u, 132u, 113u, 0u, 192u, 200u, 4u, 56u, 25u, 67u, 92u, 74u, 97u,
64u, 209u, 18u, 146u, 68u, 72u, 25u, 67u, 92u, 74u, 67u, 10u, 144u,
213u, 18u, 146u, 72u, 77u, 26u, 154u, 36u, 112u, 240u, 192u, 154u,
64u, 142u, 71u, 10u, 12u, 9u, 163u, 251u, 164u, 112u, 144u, 192u,
145u, 49u, 28u, 28u, 48u, 38u, 143u, 195u, 145u, 192u, 67u, 2u, 104u,
250u, 41u, 28u, 0u, 48u, 36u, 76u, 67u, 16u, 96u, 77u, 18u, 92u, 36u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 19u, 194u, 98u, 28u, 133u, 8u, 128u, 184u,
1u, 16u, 47u, 1u, 36u, 54u, 195u, 129u, 148u, 64u, 112u, 231u, 0u,
48u, 164u, 56u, 67u, 52u, 64u, 25u, 67u, 128u, 131u, 160u, 34u, 32u,
232u, 20u, 144u, 202u, 34u, 24u, 112u, 135u, 37u, 16u, 220u, 53u, 1u,
8u, 26u, 2u, 129u, 73u, 33u, 201u, 67u, 40u, 132u, 97u, 206u, 0u, 68u,
14u, 68u, 55u, 13u, 64u, 66u, 6u, 128u, 160u, 82u, 33u, 232u, 112u,
146u, 72u, 109u, 135u, 248u, 0u, 101u, 17u, 12u, 56u, 67u, 146u, 136u,
110u, 26u, 14u, 144u, 16u, 130u, 161u, 248u, 20u, 145u, 3u, 67u, 228u,
144u, 228u, 161u, 148u, 66u, 48u, 231u, 0u, 34u, 7u, 34u, 27u, 134u,
131u, 164u, 4u, 32u, 168u, 126u, 5u, 36u, 64u, 208u, 249u, 16u, 244u,
56u, 73u, 36u, 146u, 32u, 200u, 128u, 146u, 71u, 9u, 12u, 12u, 97u,
48u, 49u, 76u, 35u, 136u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u,
4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 128u, 134u, 8u, 162u, 41u, 36u, 112u, 0u, 192u, 145u, 73u,
12u, 65u, 129u, 141u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 143u, 134u, 8u, 48u, 69u, 81u, 68u, 82u, 73u, 28u, 116u, 48u,
49u, 168u, 138u, 34u, 146u, 72u, 227u, 97u, 129u, 158u, 18u, 12u, 33u,
140u, 66u, 98u, 41u, 17u, 89u, 36u, 38u, 3u, 132u, 146u, 56u, 168u,
96u, 76u, 43u, 136u, 226u, 33u, 129u, 174u, 44u, 36u, 113u, 0u, 192u,
145u, 97u, 28u, 60u, 48u, 50u, 1u, 20u, 134u, 80u, 215u, 22u, 144u,
152u, 121u, 134u, 136u, 180u, 146u, 34u, 192u, 202u, 26u, 226u, 210u,
24u, 84u, 134u, 168u, 180u, 146u, 67u, 120u, 76u, 91u, 130u, 97u, 92u,
67u, 34u, 166u, 32u, 196u, 142u, 28u, 24u, 19u, 39u, 194u, 56u, 72u,
96u, 76u, 148u, 136u, 225u, 1u, 129u, 34u, 226u, 56u, 48u, 96u, 76u,
135u, 8u, 224u, 97u, 129u, 48u, 243u, 35u, 128u, 134u, 4u, 199u, 188u,
142u, 0u, 24u, 18u, 46u, 33u, 136u, 48u, 38u, 25u, 196u, 128u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 23u, 194u, 98u, 41u, 17u, 89u, 36u, 65u,
130u, 42u, 138u, 34u, 146u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 197u,
48u, 94u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u,
194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 128u, 134u, 8u, 194u, 41u, 36u, 112u, 0u, 192u, 145u, 73u,
12u, 65u, 129u, 141u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 143u, 134u, 8u, 48u, 69u, 81u, 132u, 82u, 73u, 28u, 116u,
48u, 49u, 168u, 140u, 34u, 146u, 72u, 227u, 97u, 129u, 158u, 18u, 12u,
33u, 140u, 66u, 98u, 41u, 17u, 89u, 36u, 38u, 3u, 132u, 146u, 56u,
168u, 96u, 76u, 43u, 136u, 226u, 33u, 129u, 174u, 49u, 36u, 113u, 0u,
192u, 145u, 137u, 28u, 60u, 48u, 50u, 1u, 20u, 134u, 80u, 215u, 25u,
16u, 152u, 121u, 134u, 136u, 200u, 146u, 35u, 16u, 202u, 26u, 227u,
34u, 24u, 84u, 134u, 168u, 200u, 146u, 67u, 120u, 76u, 91u, 130u, 97u,
92u, 67u, 34u, 166u, 32u, 196u, 142u, 28u, 24u, 19u, 39u, 194u, 56u,
72u, 96u, 76u, 148u, 136u, 225u, 1u, 129u, 35u, 50u, 56u, 48u, 96u,
76u, 135u, 8u, 224u, 97u, 129u, 48u, 243u, 35u, 128u, 134u, 4u, 199u,
188u, 142u, 0u, 24u, 18u, 51u, 33u, 136u, 48u, 38u, 25u, 196u, 128u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 26u, 66u, 98u, 41u, 17u, 89u, 36u, 65u,
130u, 42u, 140u, 34u, 146u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 197u,
48u, 94u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u,
194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 128u, 134u, 8u, 214u, 41u, 36u, 112u, 0u, 192u, 145u, 73u,
12u, 65u, 129u, 141u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 143u, 134u, 8u, 48u, 69u, 81u, 172u, 82u, 73u, 28u, 116u,
48u, 49u, 168u, 141u, 98u, 146u, 72u, 227u, 97u, 129u, 158u, 18u, 12u,
33u, 140u, 66u, 98u, 41u, 17u, 89u, 36u, 38u, 3u, 132u, 146u, 56u,
168u, 96u, 76u, 43u, 136u, 226u, 33u, 129u, 174u, 54u, 36u, 113u, 0u,
192u, 145u, 177u, 28u, 60u, 48u, 50u, 1u, 20u, 134u, 80u, 215u, 27u,
144u, 152u, 121u, 134u, 136u, 220u, 146u, 35u, 96u, 202u, 26u, 227u,
114u, 24u, 84u, 134u, 168u, 220u, 146u, 67u, 120u, 76u, 91u, 130u,
97u, 92u, 67u, 34u, 166u, 32u, 196u, 142u, 28u, 24u, 19u, 39u, 194u,
56u, 72u, 96u, 76u, 148u, 136u, 225u, 1u, 129u, 35u, 130u, 56u, 48u,
96u, 76u, 135u, 8u, 224u, 97u, 129u, 48u, 243u, 35u, 128u, 134u, 4u,
199u, 188u, 142u, 0u, 24u, 18u, 56u, 33u, 136u, 48u, 38u, 25u, 196u,
128u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 28u, 194u, 98u, 41u, 17u, 89u, 36u, 65u,
130u, 42u, 141u, 98u, 146u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 197u,
48u, 94u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u,
194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 128u, 134u, 8u, 234u, 41u, 36u, 112u, 0u, 192u, 145u, 73u,
12u, 65u, 129u, 141u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 143u, 134u, 8u, 48u, 69u, 81u, 212u, 82u, 73u, 28u, 116u,
48u, 49u, 168u, 142u, 162u, 146u, 72u, 227u, 97u, 129u, 158u, 18u,
12u, 33u, 140u, 66u, 98u, 41u, 17u, 89u, 36u, 38u, 3u, 132u, 146u,
56u, 168u, 96u, 76u, 43u, 136u, 226u, 33u, 129u, 174u, 59u, 36u, 113u,
0u, 192u, 145u, 217u, 28u, 60u, 48u, 50u, 1u, 20u, 134u, 80u, 215u,
30u, 16u, 152u, 121u, 134u, 136u, 240u, 146u, 35u, 176u, 202u, 26u,
227u, 194u, 24u, 84u, 134u, 168u, 240u, 146u, 67u, 120u, 76u, 91u,
130u, 97u, 92u, 67u, 34u, 166u, 32u, 196u, 142u, 28u, 24u, 19u, 39u,
194u, 56u, 72u, 96u, 76u, 148u, 136u, 225u, 1u, 129u, 35u, 210u, 56u,
48u, 96u, 76u, 135u, 8u, 224u, 97u, 129u, 48u, 243u, 35u, 128u, 134u,
4u, 199u, 188u, 142u, 0u, 24u, 18u, 61u, 33u, 136u, 48u, 38u, 25u,
196u, 128u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 31u, 66u, 98u, 41u, 17u, 89u, 36u, 65u,
130u, 42u, 142u, 162u, 146u, 73u, 28u, 36u, 48u, 49u, 132u, 192u,
197u, 48u, 94u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u,
1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[99];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("force", 5, 5),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("liblazy.scm", 11, 11),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("promise\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("eager", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("objs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("promise-kind", 12, 12),
      SCM_STRING_CONST_INITIALIZER("(setter promise-kind)", 21, 21),
      SCM_STRING_CONST_INITIALIZER("<promise>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("make-promise", 12, 12),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%lcons", 6, 6),
      SCM_STRING_CONST_INITIALIZER("item", 4, 4),
      SCM_STRING_CONST_INITIALIZER("thunk", 5, 5),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("attrs", 5, 5),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("generator->lseq", 15, 15),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("lrange", 6, 6),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("start", 5, 5),
      SCM_STRING_CONST_INITIALIZER("end", 3, 3),
      SCM_STRING_CONST_INITIALIZER("step", 4, 4),
      SCM_STRING_CONST_INITIALIZER("cond", 4, 4),
      SCM_STRING_CONST_INITIALIZER("or", 2, 2),
      SCM_STRING_CONST_INITIALIZER("and", 3, 3),
      SCM_STRING_CONST_INITIALIZER(">", 1, 1),
      SCM_STRING_CONST_INITIALIZER(">=", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<=", 2, 2),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("=", 1, 1),
      SCM_STRING_CONST_INITIALIZER("^", 1, 1),
      SCM_STRING_CONST_INITIALIZER("exact\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("if", 2, 2),
      SCM_STRING_CONST_INITIALIZER("inc!", 4, 4),
      SCM_STRING_CONST_INITIALIZER("eof-object", 10, 10),
      SCM_STRING_CONST_INITIALIZER("else", 4, 4),
      SCM_STRING_CONST_INITIALIZER("inexact", 7, 7),
      SCM_STRING_CONST_INITIALIZER("let1", 4, 4),
      SCM_STRING_CONST_INITIALIZER("c", 1, 1),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("+", 1, 1),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("liota", 5, 5),
      SCM_STRING_CONST_INITIALIZER("count", 5, 5),
      SCM_STRING_CONST_INITIALIZER("define", 6, 6),
      SCM_STRING_CONST_INITIALIZER("gen", 3, 3),
      SCM_STRING_CONST_INITIALIZER("infinite\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("rlet1", 5, 5),
      SCM_STRING_CONST_INITIALIZER("v", 1, 1),
      SCM_STRING_CONST_INITIALIZER("dec!", 4, 4),
      SCM_STRING_CONST_INITIALIZER("k", 1, 1),
      SCM_STRING_CONST_INITIALIZER("port->char-lseq", 15, 15),
      SCM_STRING_CONST_INITIALIZER("port", 4, 4),
      SCM_STRING_CONST_INITIALIZER("current-input-port", 18, 18),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("read-char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("port->byte-lseq", 15, 15),
      SCM_STRING_CONST_INITIALIZER("read-byte", 9, 9),
      SCM_STRING_CONST_INITIALIZER("port->string-lseq", 17, 17),
      SCM_STRING_CONST_INITIALIZER("read-line", 9, 9),
      SCM_STRING_CONST_INITIALIZER("port->sexp-lseq", 15, 15),
      SCM_STRING_CONST_INITIALIZER("read", 4, 4),
      SCM_STRING_CONST_INITIALIZER("G2155", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2157", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2156", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2154", 8, 8),
      SCM_STRING_CONST_INITIALIZER("-", 1, 1),
      SCM_STRING_CONST_INITIALIZER("G2159", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2162", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2161", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2160", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2158", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2164", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2165", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2163", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2167", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2168", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2166", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2170", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2171", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2169", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2173", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2174", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2172", 8, 8),
  },
};
static struct scm__rcRec {
  ScmUVector d2153[26];
  ScmCompiledCode d2152[26];
  ScmWord d2151[625];
  ScmPair d2150[407] SCM_ALIGN_PAIR;
  ScmObj d2149[276];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2153 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 14, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 55, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 55, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 105, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 105, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 588, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 204, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 57, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 101, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 86, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 129, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 569, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 168, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 22, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 142, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 22, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 142, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 22, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 142, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 22, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 142, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00026, 0, NULL),
  },
  {   /* ScmCompiledCode d2152 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[0])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[15])), 2,
            0, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[190]),
            SCM_OBJ(&scm__rc.d2152[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[17])), 10,
            0, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[195]),
            SCM_OBJ(&scm__rc.d2152[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[27])), 10,
            0, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[200]),
            SCM_OBJ(&scm__rc.d2152[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[37])), 17,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[205]),
            SCM_OBJ(&scm__rc.d2152[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[54])), 17,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[210]),
            SCM_OBJ(&scm__rc.d2152[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* lrange */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[71])), 131,
            22, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[215]),
            SCM_OBJ(&scm__rc.d2152[7]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[202])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* gen */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[217])), 6,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[308]),
            SCM_OBJ(&scm__rc.d2152[12]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* gen */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[223])), 16,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[313]),
            SCM_OBJ(&scm__rc.d2152[12]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* gen */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[239])), 12,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[318]),
            SCM_OBJ(&scm__rc.d2152[12]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* gen */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[251])), 22,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[323]),
            SCM_OBJ(&scm__rc.d2152[12]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* liota */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[273])), 126,
            34, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[328]),
            SCM_OBJ(&scm__rc.d2152[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[399])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[414])), 3,
            0, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[347]),
            SCM_OBJ(&scm__rc.d2152[15]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port->char-lseq */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[417])), 34,
            17, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[352]),
            SCM_OBJ(&scm__rc.d2152[16]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[451])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[466])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[365]),
            SCM_OBJ(&scm__rc.d2152[18]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port->byte-lseq */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[470])), 34,
            17, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[370]),
            SCM_OBJ(&scm__rc.d2152[19]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[504])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[519])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[383]),
            SCM_OBJ(&scm__rc.d2152[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port->string-lseq */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[523])), 34,
            17, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[388]),
            SCM_OBJ(&scm__rc.d2152[22]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[557])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[572])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[401]),
            SCM_OBJ(&scm__rc.d2152[24]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port->sexp-lseq */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[576])), 34,
            17, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[406]),
            SCM_OBJ(&scm__rc.d2152[25]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[610])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2151 */
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-promise */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* eager */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-promise */,
    0x00000014    /*  14 (RET) */,
    /* (lrange #f) */
    0x004020ea    /*   0 (LREF-UNBOX 2 1) */,
    0x00000014    /*   1 (RET) */,
    /* (lrange #f) */
    0x004020ea    /*   0 (LREF-UNBOX 2 1) */,
    0x004000b6    /*   1 (LREF-VAL0-NUMADD2 0 1) */,
    0x0040203a    /*   2 (LSET 2 1) */,
    0x004020ea    /*   3 (LREF-UNBOX 2 1) */,
    0x0040102b    /*   4 (LREF-VAL0-BNGT 1 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[17]) + 8),
    0x004020ea    /*   6 (LREF-UNBOX 2 1) */,
    0x00000014    /*   7 (RET) */,
    0x0000000a    /*   8 (CONST-RET) */,
    SCM_WORD(SCM_EOF) /* #<eof> */,
    /* (lrange #f) */
    0x004020ea    /*   0 (LREF-UNBOX 2 1) */,
    0x004000b6    /*   1 (LREF-VAL0-NUMADD2 0 1) */,
    0x0040203a    /*   2 (LSET 2 1) */,
    0x004020ea    /*   3 (LREF-UNBOX 2 1) */,
    0x00401029    /*   4 (LREF-VAL0-BNLT 1 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[27]) + 8),
    0x004020ea    /*   6 (LREF-UNBOX 2 1) */,
    0x00000014    /*   7 (RET) */,
    0x0000000a    /*   8 (CONST-RET) */,
    SCM_WORD(SCM_EOF) /* #<eof> */,
    /* (lrange #f) */
    0x000000ea    /*   0 (LREF-UNBOX 0 0) */,
    0x000010bc    /*   1 (NUMADDI 1) */,
    0x0000003a    /*   2 (LSET 0 0) */,
    0x004030ea    /*   3 (LREF-UNBOX 3 1) */,
    0x0000000d    /*   4 (PUSH) */,
    0x000000ea    /*   5 (LREF-UNBOX 0 0) */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000042    /*   7 (LREF11) */,
    0x000000b4    /*   8 (NUMMUL2) */,
    0x000000b2    /*   9 (NUMADD2) */,
    0x00001018    /*  10 (PUSH-LOCAL-ENV 1) */,
    0x0040303c    /*  11 (LREF 3 1) */,
    0x00000029    /*  12 (LREF-VAL0-BNLT 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[37]) + 15),
    0x00000053    /*  14 (LREF0-RET) */,
    0x0000000a    /*  15 (CONST-RET) */,
    SCM_WORD(SCM_EOF) /* #<eof> */,
    /* (lrange #f) */
    0x000000ea    /*   0 (LREF-UNBOX 0 0) */,
    0x000010bc    /*   1 (NUMADDI 1) */,
    0x0000003a    /*   2 (LSET 0 0) */,
    0x004030ea    /*   3 (LREF-UNBOX 3 1) */,
    0x0000000d    /*   4 (PUSH) */,
    0x000000ea    /*   5 (LREF-UNBOX 0 0) */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000042    /*   7 (LREF11) */,
    0x000000b4    /*   8 (NUMMUL2) */,
    0x000000b2    /*   9 (NUMADD2) */,
    0x00001018    /*  10 (PUSH-LOCAL-ENV 1) */,
    0x0040303c    /*  11 (LREF 3 1) */,
    0x0000002b    /*  12 (LREF-VAL0-BNGT 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[54]) + 15),
    0x00000053    /*  14 (LREF0-RET) */,
    0x0000000a    /*  15 (CONST-RET) */,
    SCM_WORD(SCM_EOF) /* #<eof> */,
    /* lrange */
    0x000020e7    /*   0 (BOX 2) */,
    0x0000003d    /*   1 (LREF0) */,
    0x00000022    /*   2 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 8),
    0x00000001    /*   4 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* +inf.0 */,
    0x00000013    /*   6 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 9),
    0x0000006a    /*   8 (LREF0-CAR) */,
    0x0000000d    /*   9 (PUSH) */,
    0x0000003d    /*  10 (LREF0) */,
    0x00000022    /*  11 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 16),
    0x00000003    /*  13 (CONSTN) */,
    0x00000013    /*  14 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 17),
    0x00000076    /*  16 (LREF0-CDR) */,
    0x00002018    /*  17 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  18 (LREF0) */,
    0x00000022    /*  19 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 24),
    0x00001002    /*  21 (CONSTI 1) */,
    0x00000013    /*  22 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 25),
    0x0000006a    /*  24 (LREF0-CAR) */,
    0x0000000d    /*  25 (PUSH) */,
    0x0000003d    /*  26 (LREF0) */,
    0x00000022    /*  27 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 32),
    0x00000003    /*  29 (CONSTN) */,
    0x00000013    /*  30 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 33),
    0x00000076    /*  32 (LREF0-CDR) */,
    0x00002018    /*  33 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  34 (LREF0) */,
    0x00000022    /*  35 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 39),
    0x00000013    /*  37 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 47),
    0x0000200e    /*  39 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 47),
    0x00000006    /*  41 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[31])) /* "too many arguments for" */,
    0x00000006    /*  43 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[183])) /* (lambda (start :optional (end +inf.0) (step 1)) (cond ((or (and (> step 0) (>= start end)) (and (< step 0) (<= start end))) '()) ((= step 0) (generator->lseq (^ () start))) ((and (exact? start) (exact? step)) (generator->lseq start (if (> step 0) (^ () (inc! start step) (if (< start end) start (eof-object))) (^ () (inc! start step) (if (> start end) start (eof-object)))))) (else (generator->lseq (inexact start) (let1 c 0 (if (> step 0) (^ () (inc! c) (let1 r (+ start (* c step)) (if (< r end) r (eof-object)))) (^ () (inc! c) (let1 r (+ start (* c step)) (if (> r end) r (eof-object)))))))))) */,
    0x0000205f    /*  45 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000002    /*  47 (CONSTI 0) */,
    0x0040002b    /*  48 (LREF-VAL0-BNGT 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 55),
    0x004020ea    /*  50 (LREF-UNBOX 2 1) */,
    0x0040102a    /*  51 (LREF-VAL0-BNLE 1 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 55),
    0x00000013    /*  53 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 66),
    0x00000002    /*  55 (CONSTI 0) */,
    0x00400029    /*  56 (LREF-VAL0-BNLT 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 66),
    0x004020ea    /*  58 (LREF-UNBOX 2 1) */,
    0x0000000d    /*  59 (PUSH) */,
    0x00000042    /*  60 (LREF11) */,
    0x000000af    /*  61 (NUMLE2) */,
    0x00000013    /*  62 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 66),
    0x00000013    /*  64 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 55),
    0x0000001e    /*  66 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 70),
    0x00000003    /*  68 (CONSTN) */,
    0x00000014    /*  69 (RET) */,
    0x0000003e    /*  70 (LREF1) */,
    0x0000002d    /*  71 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 78),
    0x00000016    /*  73 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[1])) /* #<compiled-code (lrange #f)@0x715ca3a69a80> */,
    0x00001063    /*  75 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* generator->lseq */,
    0x00000014    /*  77 (RET) */,
    0x0000100e    /*  78 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 83),
    0x004020ea    /*  80 (LREF-UNBOX 2 1) */,
    0x00001062    /*  81 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /*  83 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 106),
    0x0000100e    /*  85 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 90),
    0x00000049    /*  87 (LREF1-PUSH) */,
    0x0000105f    /*  88 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /*  90 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 106),
    0x004020ea    /*  92 (LREF-UNBOX 2 1) */,
    0x0000000d    /*  93 (PUSH) */,
    0x00000002    /*  94 (CONSTI 0) */,
    0x0040002b    /*  95 (LREF-VAL0-BNGT 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 101),
    0x00000016    /*  97 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[2])) /* #<compiled-code (lrange #f)@0x715ca3a69a20> */,
    0x00000013    /*  99 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 103),
    0x00000016    /* 101 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[3])) /* #<compiled-code (lrange #f)@0x715ca3a699c0> */,
    0x00002063    /* 103 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* generator->lseq */,
    0x00000014    /* 105 (RET) */,
    0x0000100e    /* 106 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 111),
    0x004020ea    /* 108 (LREF-UNBOX 2 1) */,
    0x00001062    /* 109 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* inexact */,
    0x0000100f    /* 111 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 125),
    0x00000007    /* 113 (CONSTI-PUSH 0) */,
    0x00001017    /* 114 (LOCAL-ENV 1) */,
    0x000010e7    /* 115 (BOX 1) */,
    0x00000002    /* 116 (CONSTI 0) */,
    0x0040102b    /* 117 (LREF-VAL0-BNGT 1 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 122),
    0x00000016    /* 119 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[4])) /* #<compiled-code (lrange #f)@0x715ca3a69960> */,
    0x00000014    /* 121 (RET) */,
    0x00000016    /* 122 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[5])) /* #<compiled-code (lrange #f)@0x715ca3a69900> */,
    0x00000014    /* 124 (RET) */,
    0x00002063    /* 125 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* generator->lseq */,
    0x00000014    /* 127 (RET) */,
    0x00000013    /* 128 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]) + 106),
    0x00000014    /* 130 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[202]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* lrange */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[202]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[6])) /* #<compiled-code lrange@0x715ca3a69ae0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* lrange */,
    0x00000014    /*  14 (RET) */,
    /* (liota gen) */
    0x004020ea    /*   0 (LREF-UNBOX 2 1) */,
    0x00001018    /*   1 (PUSH-LOCAL-ENV 1) */,
    0x004030ea    /*   2 (LREF-UNBOX 3 1) */,
    0x004020b6    /*   3 (LREF-VAL0-NUMADD2 2 1) */,
    0x0040303a    /*   4 (LSET 3 1) */,
    0x00000053    /*   5 (LREF0-RET) */,
    /* (liota gen) */
    0x000000ea    /*   0 (LREF-UNBOX 0 0) */,
    0x0000000d    /*   1 (PUSH) */,
    0x00000002    /*   2 (CONSTI 0) */,
    0x00000025    /*   3 (BNLE) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[223]) + 7),
    0x0000000a    /*   5 (CONST-RET) */,
    SCM_WORD(SCM_EOF) /* #<eof> */,
    0x004020ea    /*   7 (LREF-UNBOX 2 1) */,
    0x00001018    /*   8 (PUSH-LOCAL-ENV 1) */,
    0x004030ea    /*   9 (LREF-UNBOX 3 1) */,
    0x004020b6    /*  10 (LREF-VAL0-NUMADD2 2 1) */,
    0x0040303a    /*  11 (LSET 3 1) */,
    0x000010ea    /*  12 (LREF-UNBOX 1 0) */,
    -0x00000f44   /*  13 (NUMADDI -1) */,
    0x0000103a    /*  14 (LSET 1 0) */,
    0x00000053    /*  15 (LREF0-RET) */,
    /* (liota gen) */
    0x004030ea    /*   0 (LREF-UNBOX 3 1) */,
    0x0000000d    /*   1 (PUSH) */,
    0x000000ea    /*   2 (LREF-UNBOX 0 0) */,
    0x0000000d    /*   3 (PUSH) */,
    0x00000045    /*   4 (LREF21) */,
    0x000000b4    /*   5 (NUMMUL2) */,
    0x000000b2    /*   6 (NUMADD2) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x000010ea    /*   8 (LREF-UNBOX 1 0) */,
    0x000010bc    /*   9 (NUMADDI 1) */,
    0x0000103a    /*  10 (LSET 1 0) */,
    0x00000053    /*  11 (LREF0-RET) */,
    /* (liota gen) */
    0x000010ea    /*   0 (LREF-UNBOX 1 0) */,
    0x0000000d    /*   1 (PUSH) */,
    0x00000002    /*   2 (CONSTI 0) */,
    0x00000025    /*   3 (BNLE) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[251]) + 7),
    0x0000000a    /*   5 (CONST-RET) */,
    SCM_WORD(SCM_EOF) /* #<eof> */,
    0x004030ea    /*   7 (LREF-UNBOX 3 1) */,
    0x0000000d    /*   8 (PUSH) */,
    0x000000ea    /*   9 (LREF-UNBOX 0 0) */,
    0x0000000d    /*  10 (PUSH) */,
    0x00000045    /*  11 (LREF21) */,
    0x000000b4    /*  12 (NUMMUL2) */,
    0x000000b2    /*  13 (NUMADD2) */,
    0x00001018    /*  14 (PUSH-LOCAL-ENV 1) */,
    0x000010ea    /*  15 (LREF-UNBOX 1 0) */,
    0x000010bc    /*  16 (NUMADDI 1) */,
    0x0000103a    /*  17 (LSET 1 0) */,
    0x000020ea    /*  18 (LREF-UNBOX 2 0) */,
    -0x00000f44   /*  19 (NUMADDI -1) */,
    0x0000203a    /*  20 (LSET 2 0) */,
    0x00000053    /*  21 (LREF0-RET) */,
    /* liota */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 7),
    0x00000001    /*   3 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* +inf.0 */,
    0x00000013    /*   5 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 8),
    0x0000006a    /*   7 (LREF0-CAR) */,
    0x0000000d    /*   8 (PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 15),
    0x00000003    /*  12 (CONSTN) */,
    0x00000013    /*  13 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 16),
    0x00000076    /*  15 (LREF0-CDR) */,
    0x00002018    /*  16 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  17 (LREF0) */,
    0x00000022    /*  18 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 23),
    0x00000002    /*  20 (CONSTI 0) */,
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 24),
    0x0000006a    /*  23 (LREF0-CAR) */,
    0x0000000d    /*  24 (PUSH) */,
    0x0000003d    /*  25 (LREF0) */,
    0x00000022    /*  26 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 31),
    0x00000003    /*  28 (CONSTN) */,
    0x00000013    /*  29 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 32),
    0x00000076    /*  31 (LREF0-CDR) */,
    0x00002018    /*  32 (PUSH-LOCAL-ENV 2) */,
    0x000020e7    /*  33 (BOX 2) */,
    0x0000003d    /*  34 (LREF0) */,
    0x00000022    /*  35 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 40),
    0x00001002    /*  37 (CONSTI 1) */,
    0x00000013    /*  38 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 41),
    0x0000006a    /*  40 (LREF0-CAR) */,
    0x0000000d    /*  41 (PUSH) */,
    0x0000003d    /*  42 (LREF0) */,
    0x00000022    /*  43 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 48),
    0x00000003    /*  45 (CONSTN) */,
    0x00000013    /*  46 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 49),
    0x00000076    /*  48 (LREF0-CDR) */,
    0x00002018    /*  49 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  50 (LREF0) */,
    0x00000022    /*  51 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 55),
    0x00000013    /*  53 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 63),
    0x0000200e    /*  55 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 63),
    0x00000006    /*  57 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[31])) /* "too many arguments for" */,
    0x00000006    /*  59 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[302])) /* (lambda (:optional (count +inf.0) (start 0) (step 1)) (let1 count (if (< count 0) +inf.0 count) (define gen (if (and (exact? start) (exact? step)) (if (infinite? count) (^ () (rlet1 v start (inc! start step))) (^ () (if (<= count 0) (eof-object) (rlet1 v start (inc! start step) (dec! count))))) (let1 k 0 (if (infinite? count) (^ () (rlet1 v (+ start (* k step)) (inc! k))) (^ () (if (<= count 0) (eof-object) (rlet1 v (+ start (* k step)) (inc! k) (dec! count)))))))) (generator->lseq gen))) */,
    0x0000205f    /*  61 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000002    /*  63 (CONSTI 0) */,
    0x00402029    /*  64 (LREF-VAL0-BNLT 2 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 70),
    0x00000001    /*  66 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* +inf.0 */,
    0x00000013    /*  68 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 71),
    0x00000045    /*  70 (LREF21) */,
    0x00001018    /*  71 (PUSH-LOCAL-ENV 1) */,
    0x000010e7    /*  72 (BOX 1) */,
    0x0000100e    /*  73 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 78),
    0x004020ea    /*  75 (LREF-UNBOX 2 1) */,
    0x00001062    /*  76 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /*  78 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 102),
    0x0000100e    /*  80 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 85),
    0x0000004d    /*  82 (LREF11-PUSH) */,
    0x0000105f    /*  83 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /*  85 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 102),
    0x0000100e    /*  87 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 92),
    0x000000ea    /*  89 (LREF-UNBOX 0 0) */,
    0x00001062    /*  90 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* infinite? */,
    0x0000001e    /*  92 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 98),
    0x00000016    /*  94 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[8])) /* #<compiled-code (liota gen)@0x715ca2d34f00> */,
    0x00000013    /*  96 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 123),
    0x00000016    /*  98 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[9])) /* #<compiled-code (liota gen)@0x715ca2d34ea0> */,
    0x00000013    /* 100 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 123),
    0x00000007    /* 102 (CONSTI-PUSH 0) */,
    0x00001017    /* 103 (LOCAL-ENV 1) */,
    0x000010e7    /* 104 (BOX 1) */,
    0x0000100e    /* 105 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 110),
    0x000010ea    /* 107 (LREF-UNBOX 1 0) */,
    0x00001062    /* 108 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* infinite? */,
    0x0000001e    /* 110 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 116),
    0x00000016    /* 112 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[10])) /* #<compiled-code (liota gen)@0x715ca2d34e40> */,
    0x00000013    /* 114 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 118),
    0x00000016    /* 116 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[11])) /* #<compiled-code (liota gen)@0x715ca2d34de0> */,
    0x0000001a    /* 118 (POP-LOCAL-ENV) */,
    0x00000013    /* 119 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 123),
    0x00000013    /* 121 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]) + 102),
    0x00001063    /* 123 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* generator->lseq */,
    0x00000014    /* 125 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[399]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* liota */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[399]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[12])) /* #<compiled-code liota@0x715ca2d34f60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* liota */,
    0x00000014    /*  14 (RET) */,
    /* (port->char-lseq #f) */
    0x0000003e    /*   0 (LREF1) */,
    0x000010db    /*   1 (READ-CHAR 1) */,
    0x00000014    /*   2 (RET) */,
    /* port->char-lseq */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[417]) + 6),
    0x000000de    /*   3 (CURIN) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[417]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[417]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[417]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[417]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[417]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[417]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[31])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[341])) /* (lambda (:optional (port (current-input-port))) (generator->lseq (cut read-char port))) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000016    /*  29 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[14])) /* #<compiled-code (port->char-lseq #f)@0x715ca2bd47e0> */,
    0x00001063    /*  31 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* generator->lseq */,
    0x00000014    /*  33 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[451]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port->char-lseq */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[451]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[15])) /* #<compiled-code port->char-lseq@0x715ca2bd4840> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port->char-lseq */,
    0x00000014    /*  14 (RET) */,
    /* (port->byte-lseq #f) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read-byte */,
    0x00000014    /*   3 (RET) */,
    /* port->byte-lseq */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[470]) + 6),
    0x000000de    /*   3 (CURIN) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[470]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[470]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[470]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[470]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[470]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[470]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[31])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[359])) /* (lambda (:optional (port (current-input-port))) (generator->lseq (cut read-byte port))) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000016    /*  29 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[17])) /* #<compiled-code (port->byte-lseq #f)@0x715ca2945cc0> */,
    0x00001063    /*  31 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* generator->lseq */,
    0x00000014    /*  33 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[504]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port->byte-lseq */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[504]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[18])) /* #<compiled-code port->byte-lseq@0x715ca2945d20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port->byte-lseq */,
    0x00000014    /*  14 (RET) */,
    /* (port->string-lseq #f) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read-line */,
    0x00000014    /*   3 (RET) */,
    /* port->string-lseq */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[523]) + 6),
    0x000000de    /*   3 (CURIN) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[523]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[523]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[523]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[523]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[523]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[523]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[31])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[377])) /* (lambda (:optional (port (current-input-port))) (generator->lseq (cut read-line port))) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000016    /*  29 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[20])) /* #<compiled-code (port->string-lseq #f)@0x715ca5fd9000> */,
    0x00001063    /*  31 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* generator->lseq */,
    0x00000014    /*  33 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[557]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port->string-lseq */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[557]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[21])) /* #<compiled-code port->string-lseq@0x715ca5fd9060> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port->string-lseq */,
    0x00000014    /*  14 (RET) */,
    /* (port->sexp-lseq #f) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read */,
    0x00000014    /*   3 (RET) */,
    /* port->sexp-lseq */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[576]) + 6),
    0x000000de    /*   3 (CURIN) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[576]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[576]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[576]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[576]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[576]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[576]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[31])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[395])) /* (lambda (:optional (port (current-input-port))) (generator->lseq (cut read port))) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000016    /*  29 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[23])) /* #<compiled-code (port->sexp-lseq #f)@0x715ca3cc73c0> */,
    0x00001063    /*  31 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* generator->lseq */,
    0x00000014    /*  33 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[610]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port->sexp-lseq */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[610]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[24])) /* #<compiled-code port->sexp-lseq@0x715ca3cc7540> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port->sexp-lseq */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(50U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_OBJ(&scm__rc.d2150[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[4]), SCM_OBJ(&scm__rc.d2150[8])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(53U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[12])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[15])},
       { SCM_OBJ(&scm__rc.d2150[16]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[17])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[19])},
       { SCM_MAKE_INT(55U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[21])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[24])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[25])},
       { SCM_OBJ(&scm__rc.d2150[26]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[23]), SCM_OBJ(&scm__rc.d2150[27])},
       { SCM_MAKE_INT(57U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[29])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[32])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_OBJ(&scm__rc.d2150[34]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[31]), SCM_OBJ(&scm__rc.d2150[35])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[38])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_MAKE_INT(70U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[41])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[42])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[44])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[45])},
       { SCM_OBJ(&scm__rc.d2150[46]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[43]), SCM_OBJ(&scm__rc.d2150[47])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[49])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[50])},
       { SCM_MAKE_INT(82U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[55])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[56])},
       { SCM_OBJ(&scm__rc.d2150[57]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[54]), SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_MAKE_INT(1U), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[62])},
       { SCM_OBJ(&scm__rc.d2150[63]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[61]), SCM_OBJ(&scm__rc.d2150[64])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[65])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_MAKE_INT(0), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_OBJ(&scm__rc.d2150[73]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[70]), SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[75])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_OBJ(&scm__rc.d2150[78]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[77]), SCM_OBJ(&scm__rc.d2150[79])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[80])},
       { SCM_OBJ(&scm__rc.d2150[81]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[76]), SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_NIL, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[85])},
       { SCM_OBJ(&scm__rc.d2150[86]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[84]), SCM_OBJ(&scm__rc.d2150[87])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[91])},
       { SCM_OBJ(&scm__rc.d2150[92]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[93])},
       { SCM_OBJ(&scm__rc.d2150[94]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[89]), SCM_OBJ(&scm__rc.d2150[95])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_OBJ(&scm__rc.d2150[99]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[97]), SCM_OBJ(&scm__rc.d2150[100])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[101])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[103])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[106]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_OBJ(&scm__rc.d2150[105]), SCM_OBJ(&scm__rc.d2150[108])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_OBJ(&scm__rc.d2150[110]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[104]), SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[112])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[108])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[116])},
       { SCM_OBJ(&scm__rc.d2150[117]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[104]), SCM_OBJ(&scm__rc.d2150[118])},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[120])},
       { SCM_OBJ(&scm__rc.d2150[121]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[114]), SCM_OBJ(&scm__rc.d2150[122])},
       { SCM_OBJ(&scm__rc.d2150[70]), SCM_OBJ(&scm__rc.d2150[123])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_OBJ(&scm__rc.d2150[125]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[126])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_OBJ(&scm__rc.d2150[128]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[102]), SCM_OBJ(&scm__rc.d2150[129])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[132])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[134])},
       { SCM_OBJ(&scm__rc.d2150[135]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[136])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[137])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[139])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_OBJ(&scm__rc.d2150[140]), SCM_OBJ(&scm__rc.d2150[141])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[142])},
       { SCM_OBJ(&scm__rc.d2150[143]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[138]), SCM_OBJ(&scm__rc.d2150[144])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[145])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[146])},
       { SCM_OBJ(&scm__rc.d2150[147]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[133]), SCM_OBJ(&scm__rc.d2150[148])},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[149])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[150])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[139])},
       { SCM_OBJ(&scm__rc.d2150[152]), SCM_OBJ(&scm__rc.d2150[141])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[153])},
       { SCM_OBJ(&scm__rc.d2150[154]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[138]), SCM_OBJ(&scm__rc.d2150[155])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[156])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_OBJ(&scm__rc.d2150[158]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[133]), SCM_OBJ(&scm__rc.d2150[159])},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[160])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[161])},
       { SCM_OBJ(&scm__rc.d2150[162]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[151]), SCM_OBJ(&scm__rc.d2150[163])},
       { SCM_OBJ(&scm__rc.d2150[70]), SCM_OBJ(&scm__rc.d2150[164])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[165])},
       { SCM_OBJ(&scm__rc.d2150[166]), SCM_NIL},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2150[167])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[168])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_OBJ(&scm__rc.d2150[170]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[131]), SCM_OBJ(&scm__rc.d2150[171])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[172])},
       { SCM_OBJ(&scm__rc.d2150[173]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[174])},
       { SCM_OBJ(&scm__rc.d2150[175]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[130]), SCM_OBJ(&scm__rc.d2150[176])},
       { SCM_OBJ(&scm__rc.d2150[96]), SCM_OBJ(&scm__rc.d2150[177])},
       { SCM_OBJ(&scm__rc.d2150[88]), SCM_OBJ(&scm__rc.d2150[178])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[179])},
       { SCM_OBJ(&scm__rc.d2150[180]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[67]), SCM_OBJ(&scm__rc.d2150[181])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[182])},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_MAKE_INT(101U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[186])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[187])},
       { SCM_OBJ(&scm__rc.d2150[188]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(105U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[191])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[192])},
       { SCM_OBJ(&scm__rc.d2150[193]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(107U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[196])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[197])},
       { SCM_OBJ(&scm__rc.d2150[198]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(113U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[201])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[202])},
       { SCM_OBJ(&scm__rc.d2150[203]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(116U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[206])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[207])},
       { SCM_OBJ(&scm__rc.d2150[208]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(98U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[212])},
       { SCM_OBJ(&scm__rc.d2150[213]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_OBJ(&scm__rc.d2150[217]), SCM_OBJ(&scm__rc.d2150[64])},
       { SCM_OBJ(&scm__rc.d2150[216]), SCM_OBJ(&scm__rc.d2150[218])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[219])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[221])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[223])},
       { SCM_OBJ(&scm__rc.d2150[222]), SCM_OBJ(&scm__rc.d2150[224])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[225])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[223])},
       { SCM_OBJ(&scm__rc.d2150[104]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[228])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[229])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[230])},
       { SCM_OBJ(&scm__rc.d2150[231]), SCM_NIL},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[232])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[221])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[223])},
       { SCM_OBJ(&scm__rc.d2150[236]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[104]), SCM_OBJ(&scm__rc.d2150[237])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[238])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[239])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[240])},
       { SCM_OBJ(&scm__rc.d2150[241]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[106]), SCM_OBJ(&scm__rc.d2150[242])},
       { SCM_OBJ(&scm__rc.d2150[235]), SCM_OBJ(&scm__rc.d2150[243])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[244])},
       { SCM_OBJ(&scm__rc.d2150[245]), SCM_NIL},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[246])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[247])},
       { SCM_OBJ(&scm__rc.d2150[248]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[234]), SCM_OBJ(&scm__rc.d2150[249])},
       { SCM_OBJ(&scm__rc.d2150[227]), SCM_OBJ(&scm__rc.d2150[250])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[251])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[253])},
       { SCM_OBJ(&scm__rc.d2150[254]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[255])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[256])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[258])},
       { SCM_OBJ(&scm__rc.d2150[259]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[257]), SCM_OBJ(&scm__rc.d2150[260])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[261])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[262])},
       { SCM_OBJ(&scm__rc.d2150[263]), SCM_NIL},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[264])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[265])},
       { SCM_OBJ(&scm__rc.d2150[259]), SCM_OBJ(&scm__rc.d2150[237])},
       { SCM_OBJ(&scm__rc.d2150[257]), SCM_OBJ(&scm__rc.d2150[267])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[268])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_OBJ(&scm__rc.d2150[270]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[106]), SCM_OBJ(&scm__rc.d2150[271])},
       { SCM_OBJ(&scm__rc.d2150[235]), SCM_OBJ(&scm__rc.d2150[272])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[273])},
       { SCM_OBJ(&scm__rc.d2150[274]), SCM_NIL},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[275])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[276])},
       { SCM_OBJ(&scm__rc.d2150[277]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[266]), SCM_OBJ(&scm__rc.d2150[278])},
       { SCM_OBJ(&scm__rc.d2150[227]), SCM_OBJ(&scm__rc.d2150[279])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[280])},
       { SCM_OBJ(&scm__rc.d2150[281]), SCM_NIL},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2150[282])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[283])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[284])},
       { SCM_OBJ(&scm__rc.d2150[285]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[252]), SCM_OBJ(&scm__rc.d2150[286])},
       { SCM_OBJ(&scm__rc.d2150[102]), SCM_OBJ(&scm__rc.d2150[287])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[288])},
       { SCM_OBJ(&scm__rc.d2150[289]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[290])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[291])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[293])},
       { SCM_OBJ(&scm__rc.d2150[294]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[292]), SCM_OBJ(&scm__rc.d2150[295])},
       { SCM_OBJ(&scm__rc.d2150[226]), SCM_OBJ(&scm__rc.d2150[296])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[297])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[298])},
       { SCM_OBJ(&scm__rc.d2150[299]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[220]), SCM_OBJ(&scm__rc.d2150[300])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[293])},
       { SCM_MAKE_INT(126U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[304])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[305])},
       { SCM_OBJ(&scm__rc.d2150[306]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(127U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[309])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[310])},
       { SCM_OBJ(&scm__rc.d2150[311]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(132U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[314])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[315])},
       { SCM_OBJ(&scm__rc.d2150[316]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(133U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[319])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[320])},
       { SCM_OBJ(&scm__rc.d2150[321]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(121U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[324])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[325])},
       { SCM_OBJ(&scm__rc.d2150[326]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[329]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[330])},
       { SCM_OBJ(&scm__rc.d2150[331]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[332])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[335])},
       { SCM_OBJ(&scm__rc.d2150[336]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[337])},
       { SCM_OBJ(&scm__rc.d2150[338]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[339])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[340])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_MAKE_INT(139U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[343])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[344])},
       { SCM_OBJ(&scm__rc.d2150[345]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(138U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[349])},
       { SCM_OBJ(&scm__rc.d2150[350]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[353])},
       { SCM_OBJ(&scm__rc.d2150[354]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[355])},
       { SCM_OBJ(&scm__rc.d2150[356]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[357])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[358])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_MAKE_INT(141U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[361])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[362])},
       { SCM_OBJ(&scm__rc.d2150[363]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(140U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[366])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[367])},
       { SCM_OBJ(&scm__rc.d2150[368]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[371])},
       { SCM_OBJ(&scm__rc.d2150[372]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[373])},
       { SCM_OBJ(&scm__rc.d2150[374]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[375])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[376])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_MAKE_INT(143U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[379])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[380])},
       { SCM_OBJ(&scm__rc.d2150[381]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(142U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[384])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[385])},
       { SCM_OBJ(&scm__rc.d2150[386]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[389])},
       { SCM_OBJ(&scm__rc.d2150[390]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[391])},
       { SCM_OBJ(&scm__rc.d2150[392]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[393])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[394])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_MAKE_INT(145U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[397])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[398])},
       { SCM_OBJ(&scm__rc.d2150[399]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(144U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[402])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[403])},
       { SCM_OBJ(&scm__rc.d2150[404]), SCM_NIL},
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(63, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
  },
};

static ScmObj liblazyforce(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmObj p;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("force");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!(p_scm)) Scm_Error("scheme object required, but got %S", p_scm);
  p = (p_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMForce(p));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj liblazypromiseP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("promise?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 54 "liblazy.scm"
{SCM_RESULT=(SCM_XTYPEP(obj,SCM_CLASS_PROMISE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj liblazyeager(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj objs_scm;
  ScmObj objs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("eager");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  objs_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(objs_scm)) Scm_Error("list required, but got %S", objs_scm);
  objs = (objs_scm);
  {
{
ScmObj SCM_RESULT;

#line 56 "liblazy.scm"
{SCM_RESULT=(Scm_MakePromise(SCM_PROMISE_FORCED,objs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj liblazypromise_kind_SETTER(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmPromise* p;
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("(setter promise-kind)");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!SCM_PROMISEP(p_scm)) Scm_Error("<promise> required, but got %S", p_scm);
  p = SCM_PROMISE(p_scm);
  obj_scm = SCM_SUBRARGS[1];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {

#line 58 "liblazy.scm"
(p)->kind=(obj);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj liblazypromise_kind(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmPromise* p;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("promise-kind");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!SCM_PROMISEP(p_scm)) Scm_Error("<promise> required, but got %S", p_scm);
  p = SCM_PROMISE(p_scm);
  {
{
ScmObj SCM_RESULT;

#line 59 "liblazy.scm"
{SCM_RESULT=((p)->kind);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj liblazy_25lcons(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj item_scm;
  ScmObj item;
  ScmObj thunk_scm;
  ScmObj thunk;
  ScmObj attrs_scm;
  ScmObj attrs;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("%lcons");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  item_scm = SCM_SUBRARGS[0];
  if (!(item_scm)) Scm_Error("scheme object required, but got %S", item_scm);
  item = (item_scm);
  thunk_scm = SCM_SUBRARGS[1];
  if (!(thunk_scm)) Scm_Error("scheme object required, but got %S", thunk_scm);
  thunk = (thunk_scm);
  if (SCM_ARGCNT > 2+1) {
    attrs_scm = SCM_SUBRARGS[2];
  } else {
    attrs_scm = SCM_NIL;
  }
  if (!(attrs_scm)) Scm_Error("scheme object required, but got %S", attrs_scm);
  attrs = (attrs_scm);
  {
{
ScmObj SCM_RESULT;

#line 71 "liblazy.scm"
{SCM_RESULT=(Scm_LazyCons(item,thunk,attrs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj liblazygenerator_TOlseq(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj item_scm;
  ScmObj item;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("generator->lseq");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  item_scm = SCM_SUBRARGS[0];
  if (!(item_scm)) Scm_Error("scheme object required, but got %S", item_scm);
  item = (item_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;

#line 83 "liblazy.scm"
if (SCM_NULLP(args)){
{SCM_RESULT=(Scm_GeneratorToLazyPair(item));goto SCM_STUB_RETURN;}} else {
{ScmObj h=SCM_NIL;ScmObj t=SCM_NIL;
for (;;){
if (SCM_NULLP(SCM_CDR(args))){{
if (SCM_NULLP(t)){
{SCM_RESULT=(Scm_MakeLazyPair(item,SCM_CAR(args),SCM_NIL));goto SCM_STUB_RETURN;}} else {
{
SCM_SET_CDR(t,Scm_MakeLazyPair(item,SCM_CAR(args),SCM_NIL));
{SCM_RESULT=(h);goto SCM_STUB_RETURN;}}}}}
SCM_APPEND1(h,t,item);
item=(SCM_CAR(args));
args=(SCM_CDR(args));}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[51];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[27];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[87];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[95];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[88];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[89];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[102];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[103];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[93];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[108];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[31];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[107];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[73];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[105];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[100];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[98];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[94];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[96];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = SCM_OBJ(&scm__sc.d2148[31]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[60];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[85];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[254];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[255];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[256];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[257];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[84];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[135];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[134];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[130];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[258];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[136];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[137];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[132];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[133];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[259];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[260];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[261];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[262];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[263];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[129];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[155];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[152];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[154];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[153];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[264];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[265];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[266];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[151];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[163];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[267];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[268];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[269];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[162];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[172];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[270];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[271];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[272];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[171];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[181];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[273];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[274];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[275];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[189]), i++) = scm__rc.d2149[180];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[189]);
}
void Scm_Init_liblazy() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* force */
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[1])),TRUE); /* p */
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
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[8]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[8]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[8]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[8]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("force")), SCM_OBJ(&liblazyforce__STUB), 0);
  liblazyforce__STUB.common.info = scm__rc.d2149[5];
  liblazyforce__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[8]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[8])),TRUE); /* promise? */
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[10]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[13]), scm__rc.d2149[2]);
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[15]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[16]), scm__rc.d2149[3]);
  scm__rc.d2149[18] = Scm_MakeExtendedPair(scm__rc.d2149[15], SCM_OBJ(&scm__rc.d2150[10]), SCM_OBJ(&scm__rc.d2150[18]));
  scm__rc.d2149[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[20]))[3] = scm__rc.d2149[17];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[20]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[20]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[20]))[6] = scm__rc.d2149[19];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("promise?")), SCM_OBJ(&liblazypromiseP__STUB), SCM_BINDING_INLINABLE);
  liblazypromiseP__STUB.common.info = scm__rc.d2149[18];
  liblazypromiseP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[20]);
  scm__rc.d2149[27] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* eager */
  scm__rc.d2149[28] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13]))); /* :rest */
  scm__rc.d2149[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* objs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[19]), scm__rc.d2149[29]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[20]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[23]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[24]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[25]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[3]);
  scm__rc.d2149[30] = Scm_MakeExtendedPair(scm__rc.d2149[27], SCM_OBJ(&scm__rc.d2150[20]), SCM_OBJ(&scm__rc.d2150[28]));
  scm__rc.d2149[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[32]))[3] = scm__rc.d2149[17];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[32]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[32]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[32]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("eager")), SCM_OBJ(&liblazyeager__STUB), 0);
  liblazyeager__STUB.common.info = scm__rc.d2149[30];
  liblazyeager__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[32]);
  scm__rc.d2149[39] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* promise-kind */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[31]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[32]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[33]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[34]), scm__rc.d2149[3]);
  scm__rc.d2149[40] = Scm_MakeExtendedPair(scm__rc.d2149[39], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[36]));
  scm__rc.d2149[41] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* <promise> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[3] = scm__rc.d2149[17];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[4] = scm__rc.d2149[41];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("promise-kind")), SCM_OBJ(&liblazypromise_kind__STUB), 0);
  liblazypromise_kind__STUB.common.info = scm__rc.d2149[40];
  liblazypromise_kind__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[42]);
  Scm_SetterSet(SCM_PROCEDURE(&liblazypromise_kind__STUB), SCM_PROCEDURE(&liblazypromise_kind_SETTER__STUB), TRUE);
  scm__rc.d2149[50] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[49] = Scm_MakeIdentifier(scm__rc.d2149[50], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[51] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* make-promise */
  scm__rc.d2149[53] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[17]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[52] = Scm_MakeIdentifier(scm__rc.d2149[27], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#eager */
  scm__rc.d2149[54] = Scm_MakeIdentifier(scm__rc.d2149[51], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#make-promise */
  scm__rc.d2149[55] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* %toplevel */
  scm__rc.d2149[56] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->name = scm__rc.d2149[55];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->debugInfo = scm__rc.d2149[56];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[3] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[6] = SCM_WORD(scm__rc.d2149[51]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[10] = SCM_WORD(scm__rc.d2149[52]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[13] = SCM_WORD(scm__rc.d2149[54]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* %lcons */
  scm__rc.d2149[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* item */
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* thunk */
  scm__rc.d2149[60] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25]))); /* :optional */
  scm__rc.d2149[61] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* attrs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[37]), scm__rc.d2149[61]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[38]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[39]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[40]), scm__rc.d2149[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[43]), scm__rc.d2149[2]);
  scm__rc.d2149[62] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[44]), scm__rc.d2149[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2149[62]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[3]);
  scm__rc.d2149[63] = Scm_MakeExtendedPair(scm__rc.d2149[57], SCM_OBJ(&scm__rc.d2150[40]), SCM_OBJ(&scm__rc.d2150[48]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[64]))[3] = scm__rc.d2149[62];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[64]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[64]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[64]))[6] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[64]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[64]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%lcons")), SCM_OBJ(&liblazy_25lcons__STUB), 0);
  liblazy_25lcons__STUB.common.info = scm__rc.d2149[63];
  liblazy_25lcons__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[64]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[73] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* generator->lseq */
  scm__rc.d2149[74] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[49]), scm__rc.d2149[74]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[50]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[51]), scm__rc.d2149[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[55]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[56]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[57]), scm__rc.d2149[3]);
  scm__rc.d2149[75] = Scm_MakeExtendedPair(scm__rc.d2149[73], SCM_OBJ(&scm__rc.d2150[51]), SCM_OBJ(&scm__rc.d2150[59]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[76]))[3] = scm__rc.d2149[17];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[76]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[76]))[5] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[76]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[76]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("generator->lseq")), SCM_OBJ(&liblazygenerator_TOlseq__STUB), 0);
  liblazygenerator_TOlseq__STUB.common.info = scm__rc.d2149[75];
  liblazygenerator_TOlseq__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[76]);
  scm__rc.d2149[84] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* lrange */
  scm__rc.d2149[85] = 
SCM_POSITIVE_INFINITY;
  scm__rc.d2149[86] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* lambda */
  scm__rc.d2149[87] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* start */
  scm__rc.d2149[88] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* end */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[85]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[61]), scm__rc.d2149[88]);
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* step */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[63]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[66]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[67]), scm__rc.d2149[87]);
  scm__rc.d2149[90] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* cond */
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* or */
  scm__rc.d2149[92] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* and */
  scm__rc.d2149[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* > */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[70]), scm__rc.d2149[93]);
  scm__rc.d2149[94] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* >= */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[71]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[72]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[73]), scm__rc.d2149[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[76]), scm__rc.d2149[92]);
  scm__rc.d2149[95] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* < */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[95]);
  scm__rc.d2149[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* <= */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[81]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[84]), scm__rc.d2149[91]);
  scm__rc.d2149[97] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* quote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[86]), scm__rc.d2149[97]);
  scm__rc.d2149[98] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* = */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[89]), scm__rc.d2149[98]);
  scm__rc.d2149[99] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* ^ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[90]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[92]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[94]), scm__rc.d2149[73]);
  scm__rc.d2149[100] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* exact? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[97]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[102]), scm__rc.d2149[92]);
  scm__rc.d2149[101] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* if */
  scm__rc.d2149[102] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* inc! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[104]), scm__rc.d2149[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[105]), scm__rc.d2149[95]);
  scm__rc.d2149[103] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* eof-object */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[106]), scm__rc.d2149[103]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[108]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[114]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[93]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[117]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[121]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[125]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[127]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[128]), scm__rc.d2149[73]);
  scm__rc.d2149[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* else */
  scm__rc.d2149[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* inexact */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[131]), scm__rc.d2149[105]);
  scm__rc.d2149[106] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),TRUE); /* let1 */
  scm__rc.d2149[107] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* c */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[132]), scm__rc.d2149[107]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[133]), scm__rc.d2149[102]);
  scm__rc.d2149[108] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* r */
  scm__rc.d2149[109] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* + */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[134]), scm__rc.d2149[107]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[135]), scm__rc.d2149[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[137]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[138]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[139]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[140]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[143]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[146]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[147]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[151]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[152]), scm__rc.d2149[93]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[154]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[157]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[158]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[162]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[166]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[169]), scm__rc.d2149[107]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[170]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[173]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[175]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[180]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[183]), scm__rc.d2149[86]);
  scm__rc.d2149[111] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* error */
  scm__rc.d2149[110] = Scm_MakeIdentifier(scm__rc.d2149[111], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[185]), scm__rc.d2149[84]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[188]), scm__rc.d2149[2]);
  scm__rc.d2149[112] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[185]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[189]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[190]), scm__rc.d2149[112]);
  scm__rc.d2149[113] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->debugInfo = scm__rc.d2149[113];
  scm__rc.d2149[114] = Scm_MakeIdentifier(scm__rc.d2149[73], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#generator->lseq */
  scm__rc.d2149[115] = Scm_MakeIdentifier(scm__rc.d2149[100], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#exact? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[193]), scm__rc.d2149[2]);
  scm__rc.d2149[116] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[185]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[194]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[195]), scm__rc.d2149[116]);
  scm__rc.d2149[117] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->debugInfo = scm__rc.d2149[117];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[198]), scm__rc.d2149[2]);
  scm__rc.d2149[118] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[185]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[199]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[200]), scm__rc.d2149[118]);
  scm__rc.d2149[119] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3]))->debugInfo = scm__rc.d2149[119];
  scm__rc.d2149[120] = Scm_MakeIdentifier(scm__rc.d2149[105], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#inexact */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[203]), scm__rc.d2149[2]);
  scm__rc.d2149[121] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[185]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[204]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[205]), scm__rc.d2149[121]);
  scm__rc.d2149[122] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4]))->debugInfo = scm__rc.d2149[122];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[208]), scm__rc.d2149[2]);
  scm__rc.d2149[123] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[185]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[209]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[210]), scm__rc.d2149[123]);
  scm__rc.d2149[124] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5]))->debugInfo = scm__rc.d2149[124];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[213]), scm__rc.d2149[2]);
  scm__rc.d2149[125] = Scm_MakeExtendedPair(scm__rc.d2149[84], SCM_OBJ(&scm__rc.d2150[67]), SCM_OBJ(&scm__rc.d2150[214]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[215]), scm__rc.d2149[125]);
  scm__rc.d2149[126] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6]))->name = scm__rc.d2149[84];/* lrange */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6]))->debugInfo = scm__rc.d2149[126];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]))[5] = SCM_WORD(scm__rc.d2149[85]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]))[46] = SCM_WORD(scm__rc.d2149[110]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]))[76] = SCM_WORD(scm__rc.d2149[114]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]))[82] = SCM_WORD(scm__rc.d2149[115]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]))[89] = SCM_WORD(scm__rc.d2149[115]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]))[104] = SCM_WORD(scm__rc.d2149[114]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]))[110] = SCM_WORD(scm__rc.d2149[120]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[71]))[126] = SCM_WORD(scm__rc.d2149[114]);
  scm__rc.d2149[127] = Scm_MakeIdentifier(scm__rc.d2149[84], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#lrange */
  scm__rc.d2149[128] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->name = scm__rc.d2149[55];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->debugInfo = scm__rc.d2149[128];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[202]))[3] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[202]))[6] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[202]))[13] = SCM_WORD(scm__rc.d2149[127]);
  scm__rc.d2149[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* liota */
  scm__rc.d2149[130] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58])),TRUE); /* count */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[216]), scm__rc.d2149[130]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[217]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[220]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[221]), scm__rc.d2149[130]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[222]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[223]), scm__rc.d2149[130]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[224]), scm__rc.d2149[85]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[226]), scm__rc.d2149[101]);
  scm__rc.d2149[131] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* define */
  scm__rc.d2149[132] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* gen */
  scm__rc.d2149[133] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61])),TRUE); /* infinite? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[227]), scm__rc.d2149[133]);
  scm__rc.d2149[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* rlet1 */
  scm__rc.d2149[135] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* v */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[229]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[230]), scm__rc.d2149[135]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[231]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[234]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[96]);
  scm__rc.d2149[136] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* dec! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[236]), scm__rc.d2149[136]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[239]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[240]), scm__rc.d2149[135]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[241]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[245]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[248]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[252]), scm__rc.d2149[101]);
  scm__rc.d2149[137] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* k */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[253]), scm__rc.d2149[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[254]), scm__rc.d2149[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[256]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[257]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[258]), scm__rc.d2149[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[259]), scm__rc.d2149[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[262]), scm__rc.d2149[135]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[263]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[266]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[269]), scm__rc.d2149[135]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[270]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[274]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[277]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[281]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[284]), scm__rc.d2149[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[285]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[289]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[291]), scm__rc.d2149[132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[292]), scm__rc.d2149[131]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[293]), scm__rc.d2149[132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[294]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[298]), scm__rc.d2149[130]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[299]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[302]), scm__rc.d2149[86]);
  scm__rc.d2149[138] = Scm_MakeIdentifier(scm__rc.d2149[133], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#infinite? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[303]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[306]), scm__rc.d2149[2]);
  scm__rc.d2149[139] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[303]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[307]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[308]), scm__rc.d2149[139]);
  scm__rc.d2149[140] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[8]))->name = scm__rc.d2149[132];/* (liota gen) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[8]))->debugInfo = scm__rc.d2149[140];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[311]), scm__rc.d2149[2]);
  scm__rc.d2149[141] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[303]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[312]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[313]), scm__rc.d2149[141]);
  scm__rc.d2149[142] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->name = scm__rc.d2149[132];/* (liota gen) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->debugInfo = scm__rc.d2149[142];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[316]), scm__rc.d2149[2]);
  scm__rc.d2149[143] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[303]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[317]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[318]), scm__rc.d2149[143]);
  scm__rc.d2149[144] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[10]))->name = scm__rc.d2149[132];/* (liota gen) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[10]))->debugInfo = scm__rc.d2149[144];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[321]), scm__rc.d2149[2]);
  scm__rc.d2149[145] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[303]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[322]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[323]), scm__rc.d2149[145]);
  scm__rc.d2149[146] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->name = scm__rc.d2149[132];/* (liota gen) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->debugInfo = scm__rc.d2149[146];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[326]), scm__rc.d2149[2]);
  scm__rc.d2149[147] = Scm_MakeExtendedPair(scm__rc.d2149[129], SCM_OBJ(&scm__rc.d2150[220]), SCM_OBJ(&scm__rc.d2150[327]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[328]), scm__rc.d2149[147]);
  scm__rc.d2149[148] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->name = scm__rc.d2149[129];/* liota */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->debugInfo = scm__rc.d2149[148];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]))[4] = SCM_WORD(scm__rc.d2149[85]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]))[62] = SCM_WORD(scm__rc.d2149[110]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]))[67] = SCM_WORD(scm__rc.d2149[85]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]))[77] = SCM_WORD(scm__rc.d2149[115]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]))[84] = SCM_WORD(scm__rc.d2149[115]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]))[91] = SCM_WORD(scm__rc.d2149[138]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]))[109] = SCM_WORD(scm__rc.d2149[138]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[273]))[124] = SCM_WORD(scm__rc.d2149[114]);
  scm__rc.d2149[149] = Scm_MakeIdentifier(scm__rc.d2149[129], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#liota */
  scm__rc.d2149[150] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13]))->name = scm__rc.d2149[55];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13]))->debugInfo = scm__rc.d2149[150];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[399]))[3] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[399]))[6] = SCM_WORD(scm__rc.d2149[129]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[399]))[13] = SCM_WORD(scm__rc.d2149[149]);
  scm__rc.d2149[151] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* port->char-lseq */
  scm__rc.d2149[152] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* port */
  scm__rc.d2149[153] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* current-input-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[329]), scm__rc.d2149[153]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[331]), scm__rc.d2149[152]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[333]), scm__rc.d2149[60]);
  scm__rc.d2149[154] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* cut */
  scm__rc.d2149[155] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* read-char */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[334]), scm__rc.d2149[152]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[335]), scm__rc.d2149[155]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[336]), scm__rc.d2149[154]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[338]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[341]), scm__rc.d2149[86]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[342]), scm__rc.d2149[151]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[345]), scm__rc.d2149[2]);
  scm__rc.d2149[156] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[342]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[346]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[347]), scm__rc.d2149[156]);
  scm__rc.d2149[157] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[14]))->debugInfo = scm__rc.d2149[157];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[350]), scm__rc.d2149[2]);
  scm__rc.d2149[158] = Scm_MakeExtendedPair(scm__rc.d2149[151], SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[351]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[352]), scm__rc.d2149[158]);
  scm__rc.d2149[159] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15]))->name = scm__rc.d2149[151];/* port->char-lseq */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15]))->debugInfo = scm__rc.d2149[159];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[417]))[28] = SCM_WORD(scm__rc.d2149[110]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[417]))[32] = SCM_WORD(scm__rc.d2149[114]);
  scm__rc.d2149[160] = Scm_MakeIdentifier(scm__rc.d2149[151], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#port->char-lseq */
  scm__rc.d2149[161] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16]))->name = scm__rc.d2149[55];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16]))->debugInfo = scm__rc.d2149[161];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[451]))[3] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[451]))[6] = SCM_WORD(scm__rc.d2149[151]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[451]))[13] = SCM_WORD(scm__rc.d2149[160]);
  scm__rc.d2149[162] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* port->byte-lseq */
  scm__rc.d2149[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* read-byte */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[353]), scm__rc.d2149[163]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[354]), scm__rc.d2149[154]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[356]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[359]), scm__rc.d2149[86]);
  scm__rc.d2149[164] = Scm_MakeIdentifier(scm__rc.d2149[163], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#read-byte */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[360]), scm__rc.d2149[162]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[363]), scm__rc.d2149[2]);
  scm__rc.d2149[165] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[360]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[364]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[365]), scm__rc.d2149[165]);
  scm__rc.d2149[166] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[17]))->debugInfo = scm__rc.d2149[166];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[466]))[2] = SCM_WORD(scm__rc.d2149[164]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[368]), scm__rc.d2149[2]);
  scm__rc.d2149[167] = Scm_MakeExtendedPair(scm__rc.d2149[162], SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[369]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[370]), scm__rc.d2149[167]);
  scm__rc.d2149[168] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[18]))->name = scm__rc.d2149[162];/* port->byte-lseq */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[18]))->debugInfo = scm__rc.d2149[168];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[470]))[28] = SCM_WORD(scm__rc.d2149[110]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[470]))[32] = SCM_WORD(scm__rc.d2149[114]);
  scm__rc.d2149[169] = Scm_MakeIdentifier(scm__rc.d2149[162], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#port->byte-lseq */
  scm__rc.d2149[170] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19]))->name = scm__rc.d2149[55];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19]))->debugInfo = scm__rc.d2149[170];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[504]))[3] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[504]))[6] = SCM_WORD(scm__rc.d2149[162]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[504]))[13] = SCM_WORD(scm__rc.d2149[169]);
  scm__rc.d2149[171] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* port->string-lseq */
  scm__rc.d2149[172] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* read-line */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[371]), scm__rc.d2149[172]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[372]), scm__rc.d2149[154]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[374]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[377]), scm__rc.d2149[86]);
  scm__rc.d2149[173] = Scm_MakeIdentifier(scm__rc.d2149[172], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#read-line */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[378]), scm__rc.d2149[171]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[381]), scm__rc.d2149[2]);
  scm__rc.d2149[174] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[378]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[382]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[383]), scm__rc.d2149[174]);
  scm__rc.d2149[175] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[20]))->debugInfo = scm__rc.d2149[175];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[519]))[2] = SCM_WORD(scm__rc.d2149[173]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[386]), scm__rc.d2149[2]);
  scm__rc.d2149[176] = Scm_MakeExtendedPair(scm__rc.d2149[171], SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[387]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[388]), scm__rc.d2149[176]);
  scm__rc.d2149[177] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21]))->name = scm__rc.d2149[171];/* port->string-lseq */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21]))->debugInfo = scm__rc.d2149[177];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[523]))[28] = SCM_WORD(scm__rc.d2149[110]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[523]))[32] = SCM_WORD(scm__rc.d2149[114]);
  scm__rc.d2149[178] = Scm_MakeIdentifier(scm__rc.d2149[171], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#port->string-lseq */
  scm__rc.d2149[179] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22]))->name = scm__rc.d2149[55];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22]))->debugInfo = scm__rc.d2149[179];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[557]))[3] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[557]))[6] = SCM_WORD(scm__rc.d2149[171]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[557]))[13] = SCM_WORD(scm__rc.d2149[178]);
  scm__rc.d2149[180] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* port->sexp-lseq */
  scm__rc.d2149[181] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* read */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[389]), scm__rc.d2149[181]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[390]), scm__rc.d2149[154]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[392]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[395]), scm__rc.d2149[86]);
  scm__rc.d2149[182] = Scm_MakeIdentifier(scm__rc.d2149[181], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#read */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[396]), scm__rc.d2149[180]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[399]), scm__rc.d2149[2]);
  scm__rc.d2149[183] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[396]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[400]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[401]), scm__rc.d2149[183]);
  scm__rc.d2149[184] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[23]))->debugInfo = scm__rc.d2149[184];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[572]))[2] = SCM_WORD(scm__rc.d2149[182]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[404]), scm__rc.d2149[2]);
  scm__rc.d2149[185] = Scm_MakeExtendedPair(scm__rc.d2149[180], SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[405]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[406]), scm__rc.d2149[185]);
  scm__rc.d2149[186] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[24]))->name = scm__rc.d2149[180];/* port->sexp-lseq */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[24]))->debugInfo = scm__rc.d2149[186];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[576]))[28] = SCM_WORD(scm__rc.d2149[110]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[576]))[32] = SCM_WORD(scm__rc.d2149[114]);
  scm__rc.d2149[187] = Scm_MakeIdentifier(scm__rc.d2149[180], SCM_MODULE(scm__rc.d2149[53]), SCM_NIL); /* gauche#port->sexp-lseq */
  scm__rc.d2149[188] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25]))->name = scm__rc.d2149[55];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25]))->debugInfo = scm__rc.d2149[188];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[610]))[3] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[610]))[6] = SCM_WORD(scm__rc.d2149[180]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[610]))[13] = SCM_WORD(scm__rc.d2149[187]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[254] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),FALSE); /* G2155 */
  scm__rc.d2149[255] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),FALSE); /* G2157 */
  scm__rc.d2149[256] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),FALSE); /* G2156 */
  scm__rc.d2149[257] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),FALSE); /* rest2154 */
  scm__rc.d2149[258] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* - */
  scm__rc.d2149[259] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),FALSE); /* G2159 */
  scm__rc.d2149[260] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),FALSE); /* G2162 */
  scm__rc.d2149[261] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),FALSE); /* G2161 */
  scm__rc.d2149[262] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),FALSE); /* G2160 */
  scm__rc.d2149[263] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),FALSE); /* rest2158 */
  scm__rc.d2149[264] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),FALSE); /* G2164 */
  scm__rc.d2149[265] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),FALSE); /* G2165 */
  scm__rc.d2149[266] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),FALSE); /* rest2163 */
  scm__rc.d2149[267] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),FALSE); /* G2167 */
  scm__rc.d2149[268] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),FALSE); /* G2168 */
  scm__rc.d2149[269] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),FALSE); /* rest2166 */
  scm__rc.d2149[270] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),FALSE); /* G2170 */
  scm__rc.d2149[271] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),FALSE); /* G2171 */
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),FALSE); /* rest2169 */
  scm__rc.d2149[273] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),FALSE); /* G2173 */
  scm__rc.d2149[274] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),FALSE); /* G2174 */
  scm__rc.d2149[275] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),FALSE); /* rest2172 */
}
