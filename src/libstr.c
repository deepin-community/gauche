/* Generated automatically from libstr.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
#include "gauche/priv/bignumP.h"
#include "gauche/priv/stringP.h"
#include "gauche/priv/writerP.h"
static ScmObj libstrstring_ellipsis(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_ellipsis__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_ellipsis, NULL, NULL);

static ScmObj libstrstringP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstringP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstringP, SCM_MAKE_INT(SCM_VM_STRINGP), NULL);

static ScmObj libstrstring_incompleteP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_incompleteP__STUB, 1, 0,SCM_FALSE,libstrstring_incompleteP, NULL, NULL);

static ScmObj libstrstring_immutableP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_immutableP__STUB, 1, 0,SCM_FALSE,libstrstring_immutableP, NULL, NULL);

static ScmObj libstrmake_string(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrmake_string__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrmake_string, NULL, NULL);

static ScmObj libstrstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring, NULL, NULL);

static ScmObj libstrstring_copy(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_copy__STUB, 1, 3,SCM_FALSE,libstrstring_copy, NULL, NULL);

static ScmObj libstrstring_append(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_append__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_append, NULL, NULL);

static ScmObj libstrstring_copy_immutable(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_copy_immutable__STUB, 1, 3,SCM_FALSE,libstrstring_copy_immutable, NULL, NULL);

static ScmObj libstrstring_join(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_join__STUB, 1, 3,SCM_FALSE,libstrstring_join, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 129u, 134u, 7u, 88u, 2u, 1u, 36u, 112u, 32u, 192u, 144u, 9u,
28u, 0u, 48u, 36u, 0u, 67u, 16u, 96u, 99u, 128u, 66u, 96u, 56u, 73u,
0u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 130u, 6u, 8u, 8u, 48u, 192u, 4u, 57u, 64u, 33u, 214u, 0u,
128u, 73u, 36u, 112u, 32u, 192u, 199u, 0u, 132u, 193u, 88u, 146u,};
static ScmObj libstrstring_TOlist(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_TOlist__STUB, 1, 3,SCM_FALSE,libstrstring_TOlist, NULL, NULL);

static ScmObj libstrlist_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrlist_TOstring__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrlist_TOstring, NULL, NULL);

static ScmObj libstrstring_length(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_length__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_length, NULL, NULL);

static ScmObj libstrstring_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_ref__STUB, 2, 2,1, SCM_FALSE,0, libstrstring_ref, NULL, NULL);

static ScmObj libstrsubstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrsubstring__STUB, 3, 0,SCM_FALSE,libstrsubstring, NULL, NULL);

static ScmObj libstrstring_size(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_size__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_size, NULL, NULL);

static ScmObj libstropt_substring(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstropt_substring__STUB, 1, 3,SCM_FALSE,libstropt_substring, NULL, NULL);

static ScmObj libstr_25hash_string(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstr_25hash_string__STUB, 1, 2,SCM_FALSE,libstr_25hash_string, NULL, NULL);


static ScmObj libstrstring_scan(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_scan__STUB, 2, 2,SCM_FALSE,libstrstring_scan, NULL, NULL);

static ScmObj libstrstring_scan_right(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_scan_right__STUB, 2, 2,SCM_FALSE,libstrstring_scan_right, NULL, NULL);

static unsigned char uvector__00003[] = {
 0u, 3u, 180u, 6u, 0u, 255u, 1u, 192u, 134u, 5u, 129u, 160u, 120u,
34u, 9u, 130u, 137u, 29u, 156u, 48u, 36u, 20u, 71u, 102u, 12u, 9u, 4u,
145u, 217u, 67u, 2u, 65u, 4u, 118u, 64u, 192u, 144u, 57u, 29u, 140u,
48u, 36u, 12u, 71u, 98u, 12u, 9u, 2u, 145u, 215u, 195u, 0u, 127u,
128u, 224u, 67u, 2u, 192u, 193u, 134u, 11u, 48u, 60u, 17u, 4u, 146u,
58u, 240u, 96u, 72u, 36u, 142u, 186u, 24u, 18u, 8u, 35u, 174u, 6u, 4u,
129u, 200u, 235u, 33u, 129u, 32u, 98u, 58u, 192u, 96u, 72u, 20u, 142u,
168u, 24u, 32u, 200u, 28u, 145u, 212u, 195u, 2u, 64u, 228u, 117u, 16u,
192u, 153u, 121u, 17u, 211u, 195u, 3u, 40u, 118u, 15u, 48u, 57u, 9u,
151u, 145u, 9u, 140u, 168u, 76u, 7u, 9u, 29u, 56u, 48u, 36u, 14u, 71u,
76u, 12u, 12u, 240u, 104u, 97u, 12u, 98u, 5u, 129u, 160u, 225u, 3u,
134u, 24u, 44u, 145u, 4u, 55u, 24u, 38u, 10u, 33u, 51u, 125u, 36u,
145u, 209u, 131u, 2u, 104u, 66u, 153u, 29u, 8u, 48u, 53u, 193u, 228u,
142u, 130u, 24u, 18u, 15u, 35u, 160u, 6u, 6u, 64u, 32u, 160u, 202u,
26u, 225u, 2u, 33u, 18u, 26u, 33u, 2u, 72u, 131u, 195u, 40u, 107u,
132u, 8u, 97u, 82u, 26u, 161u, 2u, 73u, 13u, 225u, 52u, 42u, 4u, 38u,
132u, 41u, 144u, 200u, 169u, 161u, 50u, 100u, 142u, 126u, 24u, 19u,
67u, 34u, 136u, 231u, 65u, 129u, 52u, 49u, 0u, 142u, 114u, 24u, 18u,
16u, 35u, 155u, 134u, 4u, 208u, 188u, 162u, 57u, 160u, 96u, 77u, 11u,
154u, 35u, 153u, 6u, 4u, 208u, 184u, 34u, 57u, 136u, 96u, 72u, 64u,
142u, 96u, 24u, 25u, 0u, 130u, 67u, 40u, 107u, 132u, 136u, 132u, 72u,
104u, 132u, 137u, 34u, 16u, 12u, 161u, 174u, 18u, 33u, 133u, 72u,
106u, 132u, 137u, 36u, 38u, 133u, 142u, 18u, 57u, 120u, 96u, 77u, 17u,
216u, 35u, 149u, 6u, 4u, 209u, 24u, 226u, 57u, 72u, 96u, 72u, 72u,
142u, 78u, 24u, 19u, 68u, 70u, 8u, 228u, 129u, 129u, 52u, 68u, 32u,
142u, 68u, 24u, 19u, 68u, 52u, 8u, 228u, 33u, 129u, 33u, 34u, 57u, 0u,
96u, 100u, 2u, 8u, 12u, 161u, 174u, 19u, 45u, 193u, 162u, 19u, 36u,
136u, 72u, 50u, 134u, 184u, 76u, 134u, 21u, 33u, 170u, 19u, 36u, 144u,
154u, 33u, 20u, 72u, 227u, 225u, 129u, 52u, 90u, 56u, 142u, 52u, 24u,
19u, 69u, 145u, 8u, 227u, 33u, 129u, 33u, 50u, 56u, 184u, 96u, 77u,
21u, 206u, 35u, 137u, 6u, 4u, 209u, 88u, 226u, 56u, 136u, 96u, 72u,
76u, 142u, 32u, 24u, 25u, 0u, 129u, 195u, 40u, 107u, 133u, 8u, 77u,
9u, 12u, 13u, 16u, 161u, 36u, 66u, 97u, 148u, 53u, 194u, 132u, 48u,
169u, 13u, 80u, 161u, 36u, 132u, 209u, 84u, 130u, 71u, 15u, 12u, 9u,
163u, 96u, 100u, 112u, 160u, 192u, 154u, 53u, 50u, 71u, 9u, 12u, 9u,
10u, 145u, 193u, 195u, 2u, 104u, 210u, 25u, 28u, 4u, 48u, 38u, 140u,
232u, 17u, 192u, 3u, 2u, 66u, 164u, 49u, 6u, 4u, 208u, 137u, 50u, 64u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 11u, 64u, 176u, 52u, 28u, 32u, 112u, 195u,
5u, 146u, 32u, 134u, 227u, 4u, 193u, 68u, 50u, 135u, 96u, 243u, 3u,
145u, 6u, 64u, 228u, 128u, 255u, 1u, 192u, 134u, 5u, 129u, 131u, 12u,
22u, 96u, 120u, 34u, 9u, 32u, 63u, 192u, 112u, 33u, 129u, 96u, 104u,
30u, 8u, 130u, 96u, 162u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 197u,
48u, 166u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u,
194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static ScmObj libstr_25string_split_by_char(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstr_25string_split_by_char__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstr_25string_split_by_char, NULL, NULL);

static unsigned char uvector__00005[] = {
 0u, 3u, 194u, 60u, 24u, 18u, 23u, 35u, 194u, 58u, 24u, 18u, 23u, 35u,
194u, 56u, 24u, 18u, 23u, 35u, 194u, 50u, 24u, 33u, 136u, 95u, 128u,
146u, 60u, 34u, 225u, 129u, 33u, 114u, 60u, 34u, 97u, 130u, 25u, 13u,
2u, 26u, 133u, 201u, 134u, 201u, 30u, 17u, 0u, 192u, 152u, 153u, 145u,
225u, 14u, 12u, 9u, 137u, 241u, 30u, 16u, 208u, 192u, 144u, 185u, 30u,
16u, 176u, 192u, 152u, 159u, 17u, 225u, 9u, 12u, 9u, 137u, 49u, 30u,
16u, 112u, 192u, 202u, 28u, 4u, 57u, 11u, 144u, 152u, 147u, 16u, 152u,
89u, 66u, 228u, 143u, 8u, 48u, 96u, 76u, 167u, 72u, 240u, 130u, 134u,
4u, 133u, 200u, 240u, 129u, 6u, 1u, 14u, 144u, 153u, 67u, 146u, 60u,
32u, 33u, 129u, 32u, 114u, 60u, 32u, 1u, 129u, 33u, 114u, 59u, 248u,
96u, 72u, 92u, 142u, 250u, 24u, 26u, 161u, 114u, 71u, 121u, 12u, 16u,
200u, 104u, 133u, 204u, 54u, 72u, 238u, 161u, 129u, 52u, 36u, 0u,
142u, 230u, 24u, 19u, 66u, 52u, 200u, 238u, 33u, 129u, 148u, 56u, 8u,
114u, 23u, 33u, 52u, 35u, 76u, 132u, 208u, 136u, 40u, 92u, 145u, 220u,
3u, 2u, 104u, 82u, 225u, 29u, 188u, 48u, 36u, 46u, 71u, 108u, 12u, 2u,
30u, 33u, 52u, 41u, 24u, 145u, 218u, 195u, 2u, 64u, 228u, 118u, 160u,
192u, 200u, 4u, 46u, 25u, 68u, 63u, 3u, 17u, 16u, 68u, 48u, 48u, 118u,
130u, 34u, 34u, 68u, 71u, 16u, 136u, 146u, 6u, 33u, 218u, 8u, 136u,
137u, 36u, 136u, 150u, 7u, 9u, 161u, 130u, 97u, 51u, 116u, 13u, 48u,
185u, 36u, 142u, 208u, 24u, 19u, 67u, 131u, 72u, 236u, 65u, 129u, 32u,
130u, 58u, 248u, 96u, 77u, 14u, 68u, 35u, 175u, 6u, 4u, 129u, 136u,
235u, 129u, 129u, 52u, 57u, 16u, 142u, 182u, 24u, 18u, 33u, 35u, 172u,
134u, 4u, 208u, 224u, 210u, 58u, 168u, 96u, 77u, 13u, 135u, 35u, 167u,
134u, 4u, 130u, 8u, 233u, 193u, 129u, 32u, 98u, 58u, 104u, 96u, 72u,
132u, 142u, 150u, 24u, 19u, 67u, 97u, 200u, 233u, 33u, 129u, 52u, 53u,
8u, 142u, 144u, 24u, 19u, 67u, 83u, 72u, 232u, 225u, 129u, 32u, 98u,
58u, 16u, 96u, 103u, 137u, 137u, 28u, 244u, 48u, 61u, 192u, 225u,
134u, 39u, 36u, 142u, 120u, 24u, 18u, 7u, 35u, 157u, 6u, 6u, 81u, 12u,
196u, 48u, 217u, 12u, 161u, 52u, 87u, 4u, 38u, 138u, 168u, 6u, 21u,
36u, 54u, 194u, 225u, 52u, 53u, 8u, 38u, 135u, 102u, 18u, 71u, 56u,
12u, 9u, 162u, 211u, 228u, 115u, 80u, 192u, 145u, 9u, 28u, 204u, 48u,
38u, 139u, 79u, 145u, 204u, 131u, 3u, 32u, 17u, 8u, 138u, 32u, 88u,
38u, 10u, 36u, 132u, 209u, 105u, 66u, 71u, 48u, 12u, 9u, 163u, 58u,
4u, 114u, 240u, 192u, 144u, 81u, 28u, 184u, 48u, 36u, 18u, 71u, 45u,
12u, 9u, 2u, 145u, 202u, 195u, 2u, 104u, 206u, 129u, 28u, 140u, 48u,
51u, 197u, 48u, 65u, 35u, 145u, 6u, 4u, 130u, 8u, 227u, 193u, 129u,
52u, 114u, 4u, 142u, 52u, 24u, 34u, 168u, 35u, 128u, 18u, 56u, 168u,
96u, 131u, 32u, 130u, 71u, 20u, 12u, 9u, 4u, 17u, 196u, 131u, 2u,
104u, 240u, 193u, 28u, 64u, 48u, 55u, 135u, 96u, 243u, 4u, 16u, 224u,
19u, 71u, 134u, 2u, 104u, 236u, 209u, 33u, 52u, 114u, 4u, 145u, 195u,
195u, 2u, 65u, 4u, 112u, 208u, 192u, 207u, 21u, 192u, 228u, 142u, 24u,
24u, 18u, 7u, 35u, 132u, 6u, 4u, 210u, 13u, 242u, 56u, 32u, 96u, 111u,
17u, 100u, 14u, 24u, 68u, 23u, 19u, 195u, 208u, 233u, 36u, 38u, 144u,
111u, 146u, 56u, 24u, 96u, 77u, 34u, 67u, 35u, 128u, 6u, 4u, 129u,
200u, 98u, 12u, 12u, 98u, 5u, 129u, 160u, 120u, 34u, 9u, 130u, 136u,
77u, 34u, 24u, 9u, 163u, 233u, 33u, 182u, 33u, 9u, 163u, 58u, 1u, 52u,
90u, 80u, 146u, 64u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 2u, 64u, 176u, 52u, 15u, 4u, 65u, 48u,
81u, 13u, 226u, 44u, 129u, 195u, 8u, 130u, 226u, 120u, 122u, 29u, 36u,
134u, 120u, 174u, 7u, 36u, 55u, 135u, 96u, 243u, 4u, 16u, 224u, 32u,
200u, 32u, 136u, 170u, 8u, 224u, 4u, 144u, 207u, 20u, 193u, 4u, 134u,
216u, 132u, 69u, 16u, 44u, 19u, 5u, 16u, 202u, 33u, 152u, 134u, 27u,
33u, 148u, 61u, 192u, 225u, 134u, 39u, 36u, 51u, 196u, 196u, 48u,
169u, 33u, 182u, 23u, 12u, 162u, 31u, 129u, 136u, 136u, 34u, 24u, 24u,
59u, 65u, 17u, 17u, 34u, 35u, 136u, 68u, 73u, 3u, 16u, 237u, 4u, 68u,
68u, 145u, 18u, 192u, 224u, 67u, 196u, 50u, 135u, 1u, 14u, 66u, 228u,
67u, 33u, 162u, 23u, 48u, 217u, 33u, 170u, 23u, 48u, 185u, 32u, 67u,
164u, 50u, 135u, 1u, 14u, 66u, 228u, 67u, 33u, 160u, 67u, 80u, 185u,
48u, 217u, 34u, 24u, 133u, 248u, 9u, 133u, 201u, 13u, 48u, 185u, 36u,
146u, 71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 28u, 8u, 224u, 225u,
129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u,
194u, 64u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 140u, 134u, 8u, 180u, 69u, 209u, 15u, 0u, 224u, 36u, 69u,
209u, 15u, 1u, 36u, 142u, 46u, 24u, 19u, 5u, 146u, 56u, 168u, 96u,
72u, 132u, 142u, 38u, 24u, 19u, 5u, 146u, 56u, 136u, 96u, 76u, 10u,
72u, 225u, 193u, 129u, 34u, 18u, 56u, 96u, 96u, 76u, 10u, 72u, 225u,
97u, 130u, 45u, 136u, 91u, 137u, 28u, 36u, 48u, 36u, 66u, 71u, 7u,
12u, 17u, 120u, 140u, 34u, 19u, 192u, 73u, 28u, 12u, 48u, 38u, 67u,
4u, 112u, 32u, 192u, 145u, 9u, 28u, 0u, 48u, 38u, 67u, 4u, 49u, 6u,
6u, 49u, 16u, 144u, 202u, 19u, 32u, 176u, 152u, 211u, 4u, 192u, 112u,
146u, 64u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 136u, 134u, 8u, 182u, 33u, 110u, 36u, 112u, 240u, 192u, 145u,
9u, 28u, 56u, 48u, 69u, 177u, 140u, 100u, 72u, 225u, 161u, 129u, 35u,
34u, 56u, 96u, 96u, 72u, 196u, 142u, 20u, 24u, 25u, 99u, 16u, 152u,
64u, 132u, 192u, 112u, 145u, 194u, 67u, 2u, 70u, 36u, 112u, 128u,
193u, 25u, 136u, 198u, 50u, 34u, 52u, 136u, 96u, 96u, 195u, 26u, 146u,
19u, 17u, 34u, 71u, 6u, 12u, 9u, 141u, 241u, 28u, 12u, 48u, 36u, 12u,
71u, 2u, 12u, 9u, 16u, 145u, 192u, 3u, 2u, 99u, 124u, 67u, 16u, 96u,
99u, 17u, 9u, 9u, 140u, 185u, 36u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 129u, 6u, 8u, 218u, 6u, 141u, 201u, 28u, 4u, 48u, 36u, 110u,
71u, 0u, 12u, 9u, 3u, 16u, 196u, 24u, 24u, 196u, 110u, 66u, 96u, 56u,
73u, 0u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 159u, 6u, 8u, 182u, 33u, 110u, 36u, 115u, 192u, 192u, 145u,
9u, 28u, 236u, 48u, 69u, 177u, 140u, 100u, 72u, 231u, 65u, 129u, 35u,
34u, 57u, 200u, 96u, 72u, 196u, 142u, 112u, 24u, 34u, 209u, 23u, 68u,
60u, 3u, 128u, 145u, 23u, 68u, 60u, 4u, 146u, 57u, 176u, 96u, 76u,
83u, 200u, 230u, 129u, 129u, 34u, 18u, 57u, 144u, 96u, 76u, 83u, 200u,
230u, 1u, 129u, 49u, 31u, 35u, 150u, 134u, 4u, 136u, 72u, 229u, 97u,
129u, 49u, 31u, 35u, 149u, 6u, 8u, 182u, 33u, 110u, 36u, 114u, 128u,
192u, 145u, 9u, 28u, 152u, 48u, 69u, 226u, 48u, 136u, 79u, 1u, 36u,
114u, 32u, 192u, 153u, 135u, 17u, 200u, 67u, 2u, 68u, 36u, 113u, 240u,
192u, 153u, 135u, 17u, 199u, 67u, 3u, 40u, 142u, 34u, 24u, 200u, 134u,
80u, 153u, 128u, 132u, 202u, 112u, 38u, 34u, 68u, 38u, 16u, 36u, 142u,
54u, 24u, 19u, 62u, 2u, 56u, 208u, 96u, 72u, 200u, 142u, 50u, 24u,
18u, 33u, 35u, 139u, 134u, 4u, 207u, 128u, 142u, 44u, 24u, 25u, 0u,
140u, 68u, 114u, 24u, 99u, 18u, 72u, 140u, 132u, 114u, 24u, 99u, 34u,
73u, 9u, 158u, 169u, 35u, 138u, 134u, 4u, 208u, 176u, 82u, 56u, 160u,
96u, 72u, 232u, 142u, 32u, 24u, 19u, 66u, 193u, 72u, 225u, 225u, 129u,
52u, 42u, 52u, 142u, 28u, 24u, 18u, 58u, 35u, 133u, 6u, 4u, 208u,
168u, 210u, 56u, 64u, 96u, 17u, 220u, 13u, 16u, 152u, 240u, 71u, 161u,
52u, 41u, 72u, 146u, 56u, 56u, 96u, 72u, 232u, 142u, 12u, 24u, 19u,
67u, 130u, 8u, 224u, 129u, 129u, 52u, 56u, 44u, 142u, 6u, 24u, 18u,
33u, 35u, 129u, 6u, 4u, 129u, 136u, 224u, 1u, 129u, 52u, 56u, 44u,
134u, 32u, 192u, 198u, 34u, 18u, 27u, 2u, 104u, 112u, 64u, 105u, 9u,
128u, 225u, 36u, 144u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 148u, 6u, 8u, 250u, 6u, 36u, 114u, 112u, 192u, 144u, 49u,
28u, 144u, 48u, 49u, 136u, 132u, 134u, 192u, 35u, 184u, 26u, 33u, 49u,
224u, 143u, 67u, 32u, 17u, 136u, 142u, 67u, 12u, 98u, 73u, 17u, 144u,
142u, 67u, 12u, 100u, 73u, 33u, 148u, 71u, 17u, 12u, 100u, 67u, 40u,
139u, 196u, 97u, 16u, 158u, 2u, 68u, 91u, 16u, 183u, 17u, 22u, 136u,
186u, 33u, 224u, 28u, 4u, 136u, 186u, 33u, 224u, 36u, 145u, 22u, 198u,
49u, 145u, 36u, 144u, 210u, 34u, 216u, 133u, 184u, 146u, 72u, 228u,
65u, 128u, 71u, 240u, 49u, 18u, 2u, 97u, 34u, 72u, 228u, 1u, 129u,
50u, 217u, 35u, 143u, 134u, 4u, 129u, 136u, 227u, 161u, 129u, 50u,
217u, 35u, 141u, 6u, 8u, 248u, 72u, 49u, 180u, 13u, 33u, 18u, 71u,
24u, 12u, 12u, 98u, 55u, 34u, 54u, 129u, 163u, 114u, 72u, 226u, 193u,
128u, 72u, 112u, 49u, 9u, 157u, 161u, 35u, 138u, 6u, 4u, 208u, 140u,
146u, 56u, 152u, 96u, 72u, 24u, 142u, 34u, 24u, 19u, 66u, 50u, 72u,
225u, 193u, 129u, 140u, 38u, 16u, 130u, 51u, 17u, 140u, 100u, 68u,
105u, 16u, 192u, 193u, 134u, 53u, 36u, 50u, 198u, 34u, 45u, 140u, 99u,
34u, 34u, 216u, 133u, 184u, 146u, 72u, 225u, 161u, 129u, 36u, 66u,
56u, 88u, 96u, 101u, 17u, 196u, 13u, 13u, 145u, 32u, 6u, 81u, 23u,
136u, 194u, 33u, 60u, 4u, 136u, 182u, 33u, 110u, 34u, 45u, 17u, 116u,
67u, 192u, 56u, 9u, 17u, 116u, 67u, 192u, 73u, 36u, 72u, 9u, 161u,
88u, 100u, 142u, 18u, 24u, 19u, 67u, 54u, 200u, 224u, 193u, 129u, 32u,
98u, 56u, 32u, 96u, 77u, 12u, 219u, 35u, 129u, 6u, 1u, 34u, 192u,
196u, 38u, 134u, 104u, 18u, 56u, 8u, 96u, 77u, 16u, 143u, 35u, 128u,
6u, 4u, 129u, 136u, 98u, 12u, 12u, 98u, 6u, 33u, 176u, 38u, 136u, 70u,
4u, 208u, 140u, 96u, 153u, 107u, 6u, 144u, 152u, 14u, 18u, 73u, 0u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 18u, 64u, 196u, 54u, 1u, 34u, 192u, 196u,
50u, 136u, 226u, 6u, 134u, 200u, 144u, 3u, 40u, 139u, 196u, 97u, 16u,
158u, 2u, 68u, 91u, 16u, 183u, 17u, 22u, 136u, 186u, 33u, 224u, 28u,
4u, 136u, 186u, 33u, 224u, 36u, 146u, 36u, 1u, 25u, 136u, 198u, 50u,
34u, 52u, 136u, 96u, 96u, 195u, 26u, 146u, 25u, 99u, 17u, 22u, 198u,
49u, 145u, 17u, 108u, 66u, 220u, 73u, 36u, 129u, 33u, 192u, 196u, 71u,
194u, 65u, 141u, 160u, 105u, 8u, 146u, 4u, 127u, 3u, 17u, 32u, 6u,
192u, 35u, 184u, 26u, 33u, 49u, 224u, 143u, 67u, 32u, 17u, 136u, 142u,
67u, 12u, 98u, 73u, 17u, 144u, 142u, 67u, 12u, 100u, 73u, 33u, 148u,
71u, 17u, 12u, 100u, 67u, 40u, 139u, 196u, 97u, 16u, 158u, 2u, 68u,
91u, 16u, 183u, 17u, 22u, 136u, 186u, 33u, 224u, 28u, 4u, 136u, 186u,
33u, 224u, 36u, 145u, 22u, 198u, 49u, 145u, 36u, 144u, 210u, 34u,
216u, 133u, 184u, 146u, 72u, 105u, 17u, 244u, 12u, 73u, 36u, 112u,
176u, 192u, 198u, 19u, 3u, 20u, 192u, 248u, 142u, 18u, 24u, 19u, 1u,
194u, 56u, 32u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 191u, 134u, 9u, 26u, 33u, 18u, 60u, 67u, 36u, 24u, 40u, 145u,
223u, 131u, 2u, 65u, 68u, 119u, 176u, 192u, 152u, 25u, 145u, 222u,
131u, 2u, 73u, 4u, 119u, 144u, 192u, 145u, 9u, 29u, 220u, 48u, 38u,
6u, 100u, 119u, 96u, 192u, 145u, 9u, 29u, 208u, 48u, 69u, 177u, 136u,
146u, 98u, 25u, 34u, 10u, 36u, 142u, 228u, 24u, 19u, 25u, 130u, 59u,
136u, 96u, 72u, 40u, 142u, 224u, 24u, 18u, 72u, 35u, 183u, 134u, 4u,
136u, 72u, 237u, 161u, 129u, 49u, 152u, 35u, 182u, 6u, 4u, 140u, 72u,
237u, 33u, 130u, 74u, 136u, 68u, 143u, 16u, 201u, 6u, 10u, 140u, 73u,
29u, 160u, 48u, 36u, 98u, 71u, 103u, 12u, 9u, 5u, 17u, 217u, 3u, 2u,
101u, 250u, 71u, 99u, 12u, 9u, 36u, 17u, 216u, 131u, 2u, 68u, 36u,
118u, 0u, 192u, 153u, 126u, 145u, 215u, 195u, 2u, 68u, 36u, 117u,
208u, 192u, 36u, 177u, 38u, 68u, 50u, 65u, 33u, 50u, 230u, 36u, 117u,
192u, 192u, 154u, 18u, 4u, 71u, 91u, 12u, 9u, 37u, 145u, 214u, 3u, 2u,
104u, 72u, 121u, 29u, 92u, 48u, 36u, 144u, 71u, 86u, 12u, 9u, 16u,
145u, 213u, 3u, 2u, 104u, 72u, 121u, 29u, 72u, 48u, 38u, 132u, 129u,
17u, 212u, 67u, 4u, 91u, 24u, 195u, 100u, 142u, 156u, 24u, 18u, 49u,
35u, 166u, 6u, 1u, 38u, 201u, 16u, 81u, 9u, 161u, 138u, 164u, 142u,
148u, 24u, 19u, 67u, 71u, 200u, 233u, 33u, 129u, 32u, 162u, 58u, 64u,
96u, 73u, 32u, 142u, 140u, 24u, 19u, 67u, 71u, 200u, 232u, 161u, 130u,
74u, 136u, 68u, 143u, 16u, 201u, 6u, 10u, 18u, 116u, 67u, 36u, 18u,
71u, 67u, 12u, 18u, 76u, 66u, 36u, 248u, 132u, 201u, 4u, 142u, 132u,
24u, 18u, 72u, 35u, 159u, 134u, 4u, 209u, 9u, 34u, 57u, 240u, 96u,
72u, 132u, 142u, 120u, 24u, 19u, 68u, 36u, 136u, 231u, 97u, 129u, 34u,
18u, 57u, 200u, 96u, 77u, 16u, 91u, 35u, 156u, 6u, 4u, 130u, 136u,
230u, 161u, 129u, 52u, 62u, 52u, 142u, 104u, 24u, 18u, 72u, 35u, 153u,
134u, 4u, 136u, 72u, 230u, 33u, 129u, 52u, 62u, 52u, 142u, 96u, 24u,
18u, 33u, 35u, 151u, 6u, 1u, 37u, 137u, 50u, 33u, 146u, 9u, 9u, 161u,
234u, 196u, 142u, 90u, 24u, 19u, 69u, 87u, 200u, 229u, 129u, 129u,
36u, 178u, 57u, 72u, 96u, 77u, 21u, 140u, 35u, 148u, 6u, 4u, 146u, 8u,
228u, 225u, 129u, 34u, 18u, 57u, 40u, 96u, 77u, 21u, 140u, 35u, 145u,
134u, 4u, 209u, 85u, 242u, 57u, 16u, 96u, 139u, 68u, 157u, 16u, 201u,
5u, 184u, 145u, 199u, 131u, 2u, 104u, 130u, 217u, 28u, 116u, 48u, 36u,
144u, 71u, 26u, 12u, 9u, 162u, 18u, 68u, 113u, 144u, 192u, 145u, 9u,
28u, 92u, 48u, 38u, 136u, 73u, 17u, 197u, 131u, 2u, 68u, 36u, 113u,
64u, 192u, 154u, 32u, 182u, 71u, 18u, 12u, 2u, 77u, 146u, 32u, 162u,
19u, 70u, 54u, 9u, 28u, 64u, 48u, 38u, 142u, 15u, 17u, 195u, 195u, 2u,
65u, 68u, 112u, 224u, 192u, 146u, 65u, 28u, 48u, 48u, 38u, 142u, 15u,
17u, 194u, 195u, 4u, 141u, 16u, 137u, 62u, 33u, 34u, 80u, 136u, 73u,
35u, 132u, 134u, 4u, 209u, 236u, 98u, 56u, 64u, 96u, 72u, 132u, 142u,
12u, 24u, 19u, 71u, 177u, 136u, 224u, 129u, 129u, 52u, 122u, 48u,
142u, 6u, 24u, 18u, 33u, 35u, 128u, 134u, 4u, 209u, 232u, 194u, 56u,
0u, 96u, 72u, 132u, 134u, 32u, 192u, 198u, 34u, 18u, 19u, 71u, 149u,
73u, 32u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 128u, 6u, 6u, 49u, 16u, 145u, 35u, 68u, 34u, 79u, 136u, 72u,
148u, 34u, 18u, 73u, 12u, 65u, 129u, 140u, 73u, 100u, 51u, 9u, 58u,
33u, 146u, 8u, 146u, 98u, 17u, 39u, 196u, 38u, 72u, 36u, 51u, 9u, 26u,
33u, 146u, 32u, 162u, 27u, 0u, 147u, 100u, 136u, 40u, 136u, 180u, 73u,
209u, 12u, 144u, 91u, 137u, 2u, 75u, 18u, 100u, 67u, 36u, 18u, 36u,
168u, 132u, 72u, 241u, 12u, 144u, 96u, 161u, 39u, 68u, 50u, 65u, 36u,
52u, 137u, 26u, 33u, 18u, 60u, 67u, 36u, 24u, 40u, 146u, 67u, 48u,
146u, 162u, 25u, 34u, 10u, 140u, 72u, 108u, 2u, 77u, 146u, 32u, 162u,
34u, 216u, 198u, 27u, 36u, 9u, 44u, 73u, 145u, 12u, 144u, 72u, 146u,
162u, 17u, 35u, 196u, 50u, 65u, 130u, 163u, 18u, 67u, 72u, 139u, 99u,
17u, 36u, 196u, 50u, 68u, 20u, 73u, 36u, 72u, 9u, 129u, 161u, 36u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 31u, 73u, 100u, 51u, 9u, 58u, 33u, 146u,
8u, 146u, 98u, 17u, 39u, 196u, 38u, 72u, 36u, 51u, 9u, 26u, 33u, 146u,
32u, 162u, 27u, 0u, 147u, 100u, 136u, 40u, 136u, 180u, 73u, 209u, 12u,
144u, 91u, 137u, 2u, 75u, 18u, 100u, 67u, 36u, 18u, 36u, 168u, 132u,
72u, 241u, 12u, 144u, 96u, 161u, 39u, 68u, 50u, 65u, 36u, 52u, 137u,
26u, 33u, 18u, 60u, 67u, 36u, 24u, 40u, 146u, 67u, 48u, 146u, 162u,
25u, 34u, 10u, 140u, 72u, 108u, 2u, 77u, 146u, 32u, 162u, 34u, 216u,
198u, 27u, 36u, 9u, 44u, 73u, 145u, 12u, 144u, 72u, 146u, 162u, 17u,
35u, 196u, 50u, 65u, 130u, 163u, 18u, 67u, 72u, 139u, 99u, 17u, 36u,
196u, 50u, 68u, 20u, 73u, 36u, 72u, 2u, 70u, 136u, 68u, 159u, 16u,
145u, 40u, 68u, 36u, 146u, 71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 15u,
136u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u,
0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 144u, 134u, 9u, 68u, 57u, 198u, 48u, 185u, 36u, 114u, 0u,
192u, 152u, 20u, 145u, 199u, 195u, 2u, 66u, 228u, 113u, 224u, 192u,
145u, 137u, 28u, 108u, 48u, 56u, 198u, 65u, 206u, 49u, 133u, 200u,
148u, 160u, 142u, 2u, 73u, 28u, 104u, 48u, 38u, 36u, 4u, 113u, 144u,
192u, 152u, 127u, 17u, 198u, 3u, 2u, 66u, 228u, 113u, 112u, 192u,
145u, 137u, 28u, 88u, 48u, 36u, 100u, 71u, 20u, 12u, 12u, 177u, 144u,
76u, 58u, 66u, 96u, 56u, 72u, 226u, 97u, 129u, 35u, 34u, 56u, 144u,
96u, 140u, 196u, 99u, 25u, 17u, 41u, 196u, 36u, 38u, 71u, 100u, 142u,
34u, 24u, 19u, 46u, 114u, 56u, 128u, 96u, 73u, 76u, 142u, 30u, 24u,
18u, 33u, 35u, 134u, 134u, 4u, 203u, 156u, 142u, 20u, 24u, 37u, 16u,
231u, 16u, 194u, 228u, 145u, 194u, 67u, 2u, 103u, 222u, 71u, 8u, 12u,
9u, 11u, 145u, 193u, 195u, 2u, 68u, 36u, 112u, 80u, 193u, 42u, 65u,
4u, 142u, 8u, 24u, 18u, 8u, 35u, 129u, 6u, 4u, 130u, 8u, 224u, 1u,
129u, 32u, 82u, 24u, 131u, 3u, 24u, 129u, 101u, 56u, 32u, 134u, 71u,
16u, 34u, 24u, 20u, 136u, 92u, 48u, 169u, 34u, 8u, 130u, 9u, 12u,
161u, 52u, 37u, 60u, 38u, 124u, 65u, 50u, 192u, 36u, 146u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 17u, 192u, 178u, 156u, 16u, 67u, 35u,
136u, 17u, 12u, 10u, 68u, 46u, 24u, 84u, 145u, 4u, 65u, 4u, 134u, 81u,
42u, 65u, 4u, 74u, 33u, 206u, 33u, 133u, 201u, 17u, 152u, 140u, 99u,
34u, 37u, 56u, 132u, 134u, 88u, 200u, 56u, 198u, 65u, 206u, 49u, 133u,
200u, 148u, 160u, 142u, 2u, 72u, 148u, 67u, 156u, 99u, 11u, 146u, 73u,
36u, 142u, 18u, 24u, 24u, 194u, 96u, 98u, 152u, 41u, 17u, 193u, 195u,
2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u,
132u, 128u,};
static ScmObj libstr_25string_replace_bodyX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstr_25string_replace_bodyX__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstr_25string_replace_bodyX, NULL, NULL);

static unsigned char uvector__00018[] = {
 0u, 3u, 160u, 134u, 9u, 86u, 86u, 18u, 184u, 146u, 101u, 110u, 1u,
36u, 17u, 2u, 203u, 4u, 69u, 210u, 176u, 145u, 229u, 105u, 100u, 146u,
72u, 231u, 225u, 129u, 48u, 51u, 35u, 158u, 134u, 4u, 194u, 36u, 142u,
118u, 24u, 19u, 10u, 2u, 57u, 208u, 96u, 73u, 100u, 142u, 114u, 24u,
18u, 86u, 35u, 155u, 134u, 4u, 194u, 128u, 142u, 108u, 24u, 18u, 86u,
35u, 154u, 6u, 4u, 194u, 36u, 142u, 100u, 24u, 19u, 6u, 242u, 57u,
136u, 96u, 73u, 96u, 142u, 94u, 24u, 19u, 6u, 242u, 57u, 104u, 96u,
76u, 16u, 8u, 229u, 129u, 129u, 36u, 130u, 57u, 80u, 96u, 73u, 88u,
142u, 80u, 24u, 19u, 4u, 2u, 57u, 48u, 96u, 76u, 12u, 200u, 228u,
161u, 129u, 37u, 98u, 57u, 32u, 96u, 100u, 2u, 72u, 18u, 212u, 173u,
44u, 146u, 66u, 96u, 56u, 72u, 228u, 65u, 129u, 51u, 243u, 35u, 144u,
134u, 4u, 150u, 72u, 228u, 1u, 129u, 37u, 98u, 56u, 240u, 96u, 76u,
252u, 200u, 227u, 129u, 130u, 91u, 151u, 3u, 12u, 186u, 99u, 162u,
71u, 27u, 12u, 9u, 44u, 17u, 197u, 67u, 2u, 104u, 78u, 241u, 28u, 68u,
48u, 55u, 136u, 126u, 58u, 33u, 52u, 39u, 120u, 145u, 196u, 3u, 2u,
104u, 90u, 225u, 28u, 60u, 48u, 36u, 176u, 71u, 13u, 12u, 18u, 220u,
184u, 24u, 101u, 211u, 29u, 18u, 56u, 96u, 96u, 73u, 88u, 142u, 12u,
24u, 19u, 67u, 50u, 200u, 224u, 65u, 129u, 188u, 72u, 177u, 209u, 9u,
161u, 153u, 100u, 142u, 2u, 24u, 19u, 67u, 146u, 72u, 224u, 1u, 129u,
37u, 98u, 24u, 131u, 3u, 24u, 149u, 165u, 153u, 96u, 137u, 122u, 69u,
149u, 136u, 151u, 161u, 249u, 96u, 134u, 217u, 32u, 38u, 126u, 97u,
48u, 28u, 36u, 144u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 134u, 6u, 9u, 126u, 96u, 19u, 12u, 173u, 44u, 203u, 4u, 75u,
210u, 44u, 172u, 68u, 189u, 15u, 203u, 4u, 54u, 201u, 2u, 90u, 149u,
165u, 146u, 37u, 89u, 88u, 74u, 226u, 73u, 149u, 184u, 4u, 144u, 68u,
11u, 44u, 17u, 23u, 74u, 194u, 71u, 149u, 165u, 146u, 73u, 36u, 142u,
18u, 24u, 24u, 194u, 96u, 122u, 152u, 47u, 17u, 193u, 195u, 2u, 96u,
56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 131u, 134u, 1u, 49u, 76u, 70u, 76u, 152u, 73u, 28u, 24u, 48u,
38u, 3u, 228u, 112u, 64u, 192u, 147u, 17u, 28u, 8u, 48u, 36u, 194u,
71u, 0u, 12u, 9u, 38u, 18u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 194u, 24u, 24u, 37u, 89u, 88u, 76u, 115u, 33u, 36u, 120u,
66u, 131u, 2u, 96u, 114u, 71u, 132u, 36u, 48u, 36u, 200u, 71u, 132u,
28u, 48u, 38u, 7u, 36u, 120u, 65u, 131u, 2u, 74u, 196u, 120u, 65u, 3u,
4u, 202u, 38u, 105u, 88u, 58u, 75u, 60u, 4u, 204u, 230u, 100u, 36u,
120u, 64u, 195u, 2u, 76u, 132u, 120u, 64u, 3u, 2u, 98u, 148u, 71u,
127u, 12u, 9u, 51u, 145u, 223u, 131u, 2u, 98u, 194u, 71u, 125u, 12u,
9u, 43u, 17u, 222u, 195u, 2u, 98u, 148u, 71u, 121u, 12u, 9u, 137u,
233u, 29u, 220u, 48u, 77u, 19u, 76u, 200u, 72u, 238u, 193u, 129u, 38u,
66u, 59u, 168u, 96u, 73u, 164u, 142u, 230u, 24u, 19u, 47u, 146u, 59u,
136u, 96u, 153u, 68u, 205u, 43u, 112u, 9u, 100u, 204u, 132u, 142u,
224u, 24u, 18u, 100u, 35u, 182u, 134u, 4u, 207u, 20u, 142u, 216u, 24u,
18u, 89u, 35u, 181u, 6u, 4u, 149u, 136u, 237u, 1u, 129u, 51u, 197u,
35u, 179u, 6u, 4u, 206u, 224u, 142u, 192u, 24u, 34u, 249u, 158u, 89u,
36u, 117u, 240u, 192u, 146u, 201u, 29u, 108u, 48u, 51u, 205u, 82u,
201u, 35u, 173u, 6u, 4u, 150u, 72u, 234u, 193u, 129u, 52u, 44u, 36u,
142u, 168u, 24u, 38u, 185u, 103u, 128u, 18u, 58u, 144u, 96u, 100u, 2u,
103u, 19u, 100u, 172u, 72u, 153u, 4u, 219u, 55u, 63u, 18u, 67u, 192u,
118u, 9u, 161u, 136u, 65u, 52u, 41u, 8u, 132u, 208u, 176u, 146u, 19u,
59u, 128u, 153u, 124u, 132u, 196u, 244u, 38u, 4u, 68u, 142u, 160u,
24u, 19u, 67u, 81u, 72u, 233u, 65u, 129u, 52u, 53u, 20u, 142u, 144u,
24u, 19u, 67u, 54u, 200u, 232u, 225u, 129u, 37u, 98u, 58u, 40u, 96u,
77u, 12u, 219u, 35u, 161u, 134u, 9u, 110u, 92u, 12u, 50u, 233u, 142u,
137u, 29u, 8u, 48u, 36u, 210u, 71u, 60u, 12u, 9u, 162u, 40u, 132u,
115u, 128u, 192u, 222u, 32u, 200u, 232u, 132u, 209u, 20u, 66u, 71u,
54u, 12u, 9u, 162u, 88u, 68u, 115u, 80u, 192u, 147u, 73u, 28u, 204u,
48u, 38u, 137u, 97u, 17u, 204u, 67u, 4u, 183u, 46u, 6u, 25u, 116u,
199u, 68u, 142u, 96u, 24u, 18u, 89u, 35u, 149u, 6u, 4u, 209u, 72u,
82u, 57u, 48u, 96u, 111u, 19u, 124u, 116u, 66u, 104u, 164u, 41u, 35u,
146u, 6u, 4u, 209u, 96u, 50u, 57u, 24u, 96u, 73u, 100u, 142u, 66u,
24u, 19u, 69u, 128u, 200u, 227u, 225u, 130u, 91u, 151u, 3u, 12u, 186u,
99u, 162u, 71u, 30u, 12u, 9u, 44u, 145u, 198u, 3u, 2u, 104u, 190u,
49u, 28u, 80u, 48u, 55u, 136u, 50u, 58u, 33u, 52u, 95u, 24u, 145u,
196u, 131u, 2u, 104u, 202u, 33u, 28u, 68u, 48u, 36u, 178u, 71u, 15u,
12u, 9u, 163u, 40u, 132u, 112u, 208u, 193u, 45u, 203u, 129u, 134u,
93u, 49u, 209u, 35u, 134u, 6u, 4u, 149u, 136u, 224u, 193u, 129u, 52u,
108u, 28u, 142u, 4u, 24u, 27u, 196u, 139u, 29u, 16u, 154u, 54u, 14u,
72u, 224u, 33u, 129u, 52u, 114u, 20u, 142u, 0u, 24u, 18u, 86u, 33u,
136u, 48u, 49u, 137u, 90u, 89u, 154u, 72u, 151u, 164u, 89u, 88u, 137u,
122u, 12u, 150u, 72u, 151u, 166u, 249u, 100u, 137u, 122u, 12u, 154u,
72u, 77u, 12u, 192u, 36u, 128u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 134u, 6u, 9u, 126u, 112u, 19u, 140u, 173u, 44u, 205u, 36u,
75u, 210u, 44u, 172u, 68u, 189u, 6u, 75u, 36u, 75u, 211u, 124u, 178u,
68u, 189u, 6u, 77u, 36u, 50u, 1u, 51u, 137u, 178u, 86u, 36u, 76u,
130u, 109u, 155u, 159u, 137u, 33u, 224u, 59u, 9u, 174u, 89u, 224u, 4u,
69u, 243u, 60u, 178u, 72u, 103u, 154u, 165u, 146u, 68u, 202u, 38u,
105u, 91u, 128u, 75u, 38u, 100u, 34u, 104u, 154u, 102u, 66u, 38u, 81u,
51u, 74u, 193u, 210u, 89u, 224u, 38u, 103u, 51u, 33u, 18u, 172u, 172u,
38u, 57u, 144u, 146u, 72u, 225u, 33u, 129u, 140u, 38u, 7u, 169u, 130u,
241u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 131u, 134u, 1u, 49u, 76u, 70u, 114u, 156u, 73u, 28u, 24u,
48u, 38u, 3u, 228u, 112u, 64u, 192u, 147u, 17u, 28u, 8u, 48u, 36u,
226u, 71u, 0u, 12u, 9u, 57u, 18u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 194u, 14u, 24u, 37u, 89u, 88u, 74u, 226u, 73u, 149u, 184u,
4u, 18u, 68u, 230u, 37u, 41u, 210u, 117u, 51u, 177u, 17u, 116u, 173u,
5u, 18u, 72u, 240u, 130u, 134u, 4u, 192u, 228u, 143u, 8u, 24u, 96u,
76u, 44u, 200u, 240u, 129u, 6u, 4u, 130u, 136u, 240u, 128u, 134u, 4u,
149u, 136u, 239u, 225u, 129u, 48u, 179u, 35u, 190u, 134u, 4u, 193u,
212u, 142u, 248u, 24u, 18u, 118u, 35u, 189u, 6u, 4u, 194u, 8u, 142u,
242u, 24u, 18u, 117u, 35u, 188u, 6u, 4u, 157u, 8u, 238u, 193u, 129u,
48u, 117u, 35u, 186u, 6u, 4u, 193u, 24u, 142u, 230u, 24u, 18u, 9u,
35u, 184u, 134u, 4u, 149u, 136u, 237u, 225u, 129u, 48u, 70u, 35u,
182u, 134u, 4u, 192u, 228u, 142u, 216u, 24u, 18u, 86u, 35u, 180u,
134u, 9u, 86u, 86u, 19u, 156u, 239u, 59u, 18u, 71u, 103u, 12u, 9u,
161u, 2u, 100u, 118u, 96u, 192u, 147u, 177u, 29u, 148u, 48u, 36u,
238u, 71u, 99u, 12u, 9u, 161u, 2u, 100u, 118u, 32u, 192u, 146u, 177u,
29u, 128u, 48u, 79u, 19u, 164u, 238u, 72u, 235u, 225u, 129u, 39u,
114u, 58u, 232u, 96u, 158u, 39u, 94u, 0u, 72u, 235u, 129u, 129u, 39u,
82u, 58u, 192u, 96u, 150u, 231u, 153u, 210u, 117u, 36u, 117u, 112u,
192u, 147u, 169u, 29u, 88u, 48u, 36u, 232u, 71u, 82u, 12u, 9u, 161u,
129u, 4u, 117u, 0u, 193u, 53u, 206u, 147u, 169u, 35u, 167u, 134u, 4u,
157u, 72u, 233u, 193u, 129u, 144u, 8u, 36u, 75u, 82u, 180u, 18u, 72u,
130u, 132u, 181u, 43u, 65u, 68u, 137u, 212u, 79u, 82u, 180u, 18u, 72u,
157u, 4u, 245u, 43u, 65u, 68u, 137u, 220u, 70u, 18u, 177u, 36u, 60u,
4u, 208u, 217u, 112u, 154u, 24u, 16u, 67u, 40u, 112u, 9u, 161u, 104u,
1u, 52u, 41u, 100u, 132u, 207u, 240u, 38u, 4u, 68u, 145u, 211u, 3u,
2u, 104u, 130u, 73u, 29u, 44u, 48u, 36u, 172u, 71u, 73u, 12u, 9u,
162u, 9u, 36u, 116u, 112u, 192u, 154u, 31u, 170u, 71u, 70u, 12u, 9u,
5u, 17u, 209u, 67u, 2u, 74u, 196u, 116u, 48u, 192u, 154u, 31u, 170u,
71u, 65u, 12u, 9u, 161u, 240u, 36u, 116u, 0u, 192u, 144u, 73u, 28u,
252u, 48u, 36u, 172u, 71u, 61u, 12u, 9u, 161u, 240u, 36u, 115u, 176u,
192u, 154u, 30u, 26u, 71u, 58u, 12u, 9u, 5u, 17u, 206u, 67u, 2u, 74u,
196u, 115u, 112u, 192u, 154u, 30u, 26u, 71u, 53u, 12u, 9u, 161u, 211u,
36u, 115u, 64u, 192u, 144u, 73u, 28u, 204u, 48u, 36u, 172u, 71u, 49u,
12u, 9u, 161u, 211u, 36u, 114u, 240u, 192u, 207u, 6u, 134u, 16u, 198u,
37u, 105u, 218u, 14u, 16u, 79u, 0u, 34u, 10u, 17u, 132u, 172u, 73u,
9u, 161u, 203u, 196u, 146u, 57u, 72u, 96u, 77u, 25u, 71u, 35u, 146u,
134u, 6u, 185u, 236u, 145u, 201u, 3u, 2u, 79u, 100u, 114u, 48u, 192u,
200u, 4u, 20u, 25u, 67u, 92u, 248u, 66u, 104u, 208u, 216u, 104u, 159u,
9u, 34u, 123u, 12u, 161u, 174u, 124u, 33u, 133u, 72u, 106u, 159u, 9u,
36u, 55u, 132u, 209u, 180u, 192u, 154u, 50u, 142u, 67u, 34u, 166u,
141u, 44u, 18u, 57u, 16u, 96u, 77u, 29u, 128u, 35u, 142u, 134u, 4u,
209u, 209u, 98u, 56u, 224u, 96u, 73u, 240u, 142u, 52u, 24u, 19u, 71u,
48u, 8u, 226u, 193u, 129u, 52u, 104u, 108u, 142u, 42u, 24u, 18u, 86u,
35u, 137u, 134u, 4u, 209u, 161u, 178u, 56u, 136u, 96u, 77u, 28u, 77u,
35u, 136u, 6u, 4u, 159u, 8u, 225u, 225u, 129u, 144u, 8u, 36u, 50u,
134u, 185u, 244u, 240u, 0u, 209u, 62u, 146u, 68u, 248u, 25u, 67u, 92u,
250u, 67u, 10u, 144u, 213u, 62u, 146u, 72u, 77u, 28u, 7u, 36u, 112u,
224u, 192u, 154u, 71u, 14u, 71u, 9u, 12u, 9u, 164u, 99u, 164u, 112u,
128u, 192u, 147u, 241u, 28u, 24u, 48u, 38u, 145u, 99u, 145u, 192u,
67u, 2u, 105u, 20u, 33u, 28u, 0u, 48u, 36u, 252u, 67u, 16u, 96u, 77u,
25u, 135u, 36u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 134u, 6u, 9u, 126u, 96u, 19u, 252u, 173u, 59u, 65u, 194u, 9u,
224u, 4u, 65u, 66u, 48u, 149u, 137u, 33u, 144u, 8u, 36u, 75u, 82u,
180u, 18u, 72u, 130u, 132u, 181u, 43u, 65u, 68u, 137u, 212u, 79u, 82u,
180u, 18u, 72u, 157u, 4u, 245u, 43u, 65u, 68u, 137u, 220u, 70u, 18u,
177u, 36u, 60u, 9u, 174u, 116u, 157u, 72u, 150u, 231u, 153u, 210u,
117u, 36u, 50u, 135u, 1u, 60u, 78u, 188u, 0u, 137u, 226u, 116u, 157u,
201u, 18u, 172u, 172u, 39u, 57u, 222u, 118u, 36u, 74u, 178u, 176u,
149u, 196u, 147u, 43u, 112u, 8u, 36u, 137u, 204u, 74u, 83u, 164u,
234u, 103u, 98u, 34u, 233u, 90u, 10u, 36u, 146u, 72u, 225u, 33u, 129u,
140u, 38u, 7u, 169u, 133u, 25u, 28u, 28u, 48u, 38u, 3u, 132u, 112u,
32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libstrstring_build_indexX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_build_indexX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_build_indexX, NULL, NULL);

static ScmObj libstrstring_fast_indexableP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_fast_indexableP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_fast_indexableP, NULL, NULL);

static ScmObj libstr_25string_index_dump(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstr_25string_index_dump__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstr_25string_index_dump, NULL, NULL);

static ScmObj libstrstring_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_3dP, NULL, NULL);

static ScmObj libstrstring_LTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_LTP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_LTP, NULL, NULL);

static ScmObj libstrstring_GTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_GTP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_GTP, NULL, NULL);

static ScmObj libstrstring_LT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_LT_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_LT_3dP, NULL, NULL);

static ScmObj libstrstring_GT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_GT_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_GT_3dP, NULL, NULL);

static ScmObj libstrstring_ci_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_ci_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_ci_3dP, NULL, NULL);

static ScmObj libstrstring_ci_LTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_ci_LTP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_ci_LTP, NULL, NULL);

static ScmObj libstrstring_ci_GTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_ci_GTP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_ci_GTP, NULL, NULL);

static ScmObj libstrstring_ci_LT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_ci_LT_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_ci_LT_3dP, NULL, NULL);

static ScmObj libstrstring_ci_GT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_ci_GT_3dP__STUB, 2, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_ci_GT_3dP, NULL, NULL);

static unsigned char uvector__00026[] = {
 0u, 3u, 129u, 6u, 7u, 145u, 34u, 196u, 36u, 145u, 192u, 67u, 2u, 96u,
78u, 71u, 0u, 12u, 9u, 16u, 144u, 196u, 24u, 24u, 196u, 66u, 66u, 96u,
56u, 73u, 0u,};
static unsigned char uvector__00027[] = {
 0u, 3u, 185u, 6u, 6u, 122u, 16u, 0u, 209u, 66u, 2u, 73u, 29u, 196u,
48u, 38u, 6u, 228u, 118u, 208u, 192u, 235u, 66u, 5u, 66u, 7u, 43u,
80u, 128u, 146u, 59u, 96u, 96u, 74u, 16u, 18u, 59u, 88u, 96u, 73u,
88u, 142u, 212u, 24u, 18u, 132u, 12u, 142u, 210u, 24u, 18u, 132u, 8u,
142u, 204u, 24u, 25u, 232u, 64u, 40u, 65u, 9u, 29u, 148u, 48u, 37u,
8u, 33u, 29u, 132u, 48u, 50u, 208u, 130u, 4u, 198u, 232u, 38u, 19u,
228u, 142u, 192u, 24u, 18u, 132u, 16u, 142u, 190u, 24u, 25u, 0u, 161u,
4u, 20u, 32u, 162u, 64u, 15u, 34u, 69u, 136u, 73u, 33u, 170u, 132u,
4u, 146u, 66u, 100u, 98u, 72u, 235u, 161u, 129u, 50u, 227u, 35u, 174u,
6u, 4u, 204u, 184u, 142u, 182u, 24u, 18u, 132u, 24u, 142u, 178u, 24u,
19u, 46u, 50u, 58u, 184u, 96u, 18u, 40u, 104u, 161u, 1u, 36u, 80u,
131u, 208u, 130u, 4u, 203u, 140u, 38u, 55u, 65u, 48u, 159u, 36u, 142u,
172u, 24u, 19u, 66u, 32u, 200u, 234u, 161u, 129u, 52u, 34u, 64u, 142u,
162u, 24u, 40u, 66u, 3u, 69u, 8u, 9u, 36u, 117u, 0u, 192u, 154u, 21u,
154u, 71u, 78u, 12u, 9u, 161u, 83u, 68u, 116u, 176u, 192u, 207u, 66u,
18u, 29u, 232u, 64u, 73u, 35u, 165u, 6u, 4u, 208u, 196u, 162u, 58u,
72u, 96u, 74u, 16u, 18u, 58u, 24u, 96u, 161u, 8u, 14u, 244u, 32u, 36u,
145u, 208u, 131u, 2u, 104u, 108u, 217u, 29u, 4u, 48u, 37u, 8u, 9u,
28u, 252u, 48u, 38u, 134u, 196u, 17u, 207u, 3u, 4u, 183u, 66u, 21u,
66u, 22u, 72u, 231u, 97u, 129u, 40u, 66u, 200u, 230u, 225u, 130u,
132u, 50u, 132u, 12u, 69u, 18u, 176u, 104u, 161u, 1u, 33u, 222u, 132u,
4u, 146u, 71u, 54u, 12u, 9u, 66u, 24u, 71u, 51u, 12u, 9u, 162u, 17u,
36u, 115u, 32u, 192u, 154u, 33u, 188u, 71u, 49u, 12u, 9u, 66u, 2u,
71u, 47u, 12u, 9u, 162u, 24u, 4u, 114u, 224u, 192u, 146u, 177u, 28u,
176u, 48u, 38u, 136u, 68u, 145u, 202u, 195u, 2u, 80u, 129u, 145u,
202u, 67u, 3u, 88u, 124u, 161u, 1u, 36u, 142u, 80u, 24u, 19u, 69u,
36u, 8u, 228u, 225u, 129u, 40u, 64u, 72u, 228u, 161u, 129u, 148u, 59u,
8u, 48u, 59u, 208u, 128u, 146u, 19u, 67u, 98u, 8u, 101u, 9u, 162u,
144u, 161u, 52u, 65u, 24u, 38u, 135u, 166u, 144u, 154u, 24u, 30u, 72u,
228u, 97u, 129u, 52u, 88u, 16u, 142u, 68u, 24u, 19u, 69u, 132u, 72u,
228u, 33u, 129u, 40u, 64u, 72u, 227u, 225u, 129u, 52u, 88u, 16u, 142u,
58u, 24u, 40u, 67u, 40u, 64u, 196u, 81u, 43u, 6u, 138u, 16u, 18u, 33u,
18u, 73u, 28u, 112u, 48u, 37u, 8u, 97u, 28u, 100u, 48u, 38u, 140u,
202u, 145u, 198u, 3u, 2u, 104u, 208u, 81u, 28u, 88u, 48u, 38u, 140u,
230u, 17u, 197u, 67u, 2u, 74u, 196u, 113u, 48u, 192u, 154u, 51u, 42u,
71u, 18u, 12u, 9u, 66u, 6u, 71u, 16u, 12u, 13u, 97u, 170u, 132u, 4u,
146u, 56u, 120u, 96u, 77u, 29u, 30u, 35u, 134u, 134u, 0u, 236u, 32u,
192u, 209u, 66u, 2u, 72u, 77u, 10u, 154u, 33u, 148u, 38u, 142u, 137u,
132u, 209u, 149u, 32u, 154u, 43u, 156u, 73u, 28u, 44u, 48u, 38u, 143u,
13u, 17u, 194u, 131u, 2u, 104u, 242u, 57u, 28u, 32u, 48u, 38u, 143u,
13u, 17u, 193u, 131u, 5u, 8u, 101u, 8u, 28u, 172u, 72u, 224u, 161u,
129u, 40u, 67u, 8u, 224u, 129u, 129u, 37u, 98u, 56u, 24u, 96u, 74u,
16u, 50u, 56u, 8u, 96u, 107u, 161u, 1u, 36u, 112u, 0u, 192u, 148u,
32u, 36u, 49u, 6u, 6u, 49u, 66u, 23u, 66u, 7u, 43u, 80u, 128u, 208u,
134u, 80u, 129u, 16u, 216u, 2u, 105u, 20u, 128u, 77u, 32u, 221u, 33u,
52u, 120u, 48u, 38u, 132u, 64u, 6u, 144u, 152u, 14u, 18u, 73u, 0u,};
static unsigned char uvector__00028[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 66u, 27u, 66u, 23u, 66u, 7u, 43u, 80u,
128u, 208u, 134u, 80u, 129u, 16u, 216u, 3u, 93u, 8u, 9u, 20u, 33u,
148u, 32u, 114u, 177u, 32u, 59u, 8u, 48u, 52u, 80u, 128u, 146u, 40u,
66u, 3u, 69u, 8u, 9u, 36u, 50u, 134u, 176u, 213u, 66u, 2u, 72u, 161u,
12u, 161u, 3u, 17u, 68u, 172u, 26u, 40u, 64u, 72u, 132u, 73u, 33u,
148u, 59u, 8u, 48u, 59u, 208u, 128u, 146u, 40u, 66u, 3u, 189u, 8u, 9u,
36u, 50u, 134u, 176u, 249u, 66u, 2u, 72u, 161u, 12u, 161u, 3u, 17u,
68u, 172u, 26u, 40u, 64u, 72u, 119u, 161u, 1u, 36u, 137u, 110u, 132u,
42u, 132u, 44u, 144u, 207u, 66u, 18u, 29u, 232u, 64u, 73u, 36u, 129u,
34u, 134u, 138u, 16u, 18u, 69u, 8u, 61u, 8u, 32u, 161u, 5u, 18u, 0u,
121u, 18u, 44u, 66u, 73u, 13u, 84u, 32u, 36u, 134u, 122u, 16u, 10u,
16u, 66u, 29u, 104u, 64u, 168u, 64u, 229u, 106u, 16u, 18u, 72u, 105u,
12u, 244u, 32u, 1u, 162u, 132u, 4u, 146u, 73u, 28u, 44u, 48u, 49u,
132u, 192u, 221u, 48u, 148u, 35u, 132u, 134u, 4u, 192u, 112u, 142u,
8u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00029[] = {
 0u, 3u, 152u, 6u, 7u, 25u, 32u, 57u, 138u, 16u, 49u, 38u, 74u, 210u,
65u, 52u, 33u, 196u, 145u, 203u, 195u, 2u, 96u, 98u, 71u, 46u, 12u,
9u, 66u, 28u, 71u, 44u, 12u, 9u, 129u, 225u, 28u, 172u, 48u, 37u, 8u,
25u, 28u, 160u, 48u, 38u, 9u, 228u, 114u, 112u, 192u, 146u, 65u, 28u,
152u, 48u, 36u, 172u, 71u, 36u, 12u, 9u, 130u, 121u, 28u, 136u, 48u,
38u, 7u, 132u, 114u, 16u, 192u, 146u, 65u, 28u, 128u, 48u, 50u, 1u,
36u, 10u, 16u, 249u, 90u, 72u, 36u, 132u, 192u, 112u, 145u, 199u,
131u, 2u, 101u, 8u, 71u, 29u, 12u, 9u, 36u, 17u, 199u, 3u, 2u, 74u,
196u, 113u, 160u, 192u, 153u, 66u, 17u, 197u, 195u, 5u, 8u, 133u, 8u,
113u, 35u, 139u, 6u, 4u, 161u, 14u, 35u, 138u, 6u, 6u, 81u, 38u, 201u,
16u, 73u, 9u, 156u, 168u, 109u, 146u, 2u, 101u, 8u, 19u, 1u, 194u,
72u, 226u, 65u, 129u, 52u, 32u, 60u, 142u, 34u, 24u, 18u, 9u, 35u,
136u, 6u, 4u, 146u, 8u, 225u, 193u, 129u, 52u, 32u, 60u, 142u, 18u,
24u, 37u, 9u, 88u, 145u, 194u, 3u, 2u, 74u, 196u, 112u, 96u, 192u,
154u, 21u, 132u, 71u, 5u, 12u, 12u, 128u, 65u, 34u, 79u, 149u, 137u,
33u, 145u, 196u, 9u, 32u, 38u, 133u, 97u, 17u, 66u, 28u, 24u, 84u,
146u, 19u, 66u, 1u, 9u, 35u, 129u, 134u, 4u, 208u, 192u, 226u, 56u,
16u, 96u, 73u, 88u, 142u, 0u, 24u, 19u, 67u, 3u, 136u, 98u, 12u, 12u,
98u, 132u, 14u, 86u, 33u, 52u, 47u, 76u, 146u,};
static unsigned char uvector__00030[] = {
 0u, 3u, 156u, 6u, 7u, 17u, 66u, 35u, 35u, 208u, 137u, 80u, 137u,
144u, 230u, 29u, 104u, 64u, 197u, 8u, 140u, 153u, 66u, 37u, 66u, 38u,
77u, 8u, 113u, 36u, 115u, 112u, 192u, 152u, 51u, 145u, 205u, 131u, 2u,
80u, 135u, 17u, 205u, 3u, 2u, 96u, 228u, 71u, 50u, 12u, 9u, 132u,
105u, 28u, 196u, 48u, 37u, 8u, 153u, 28u, 192u, 48u, 37u, 8u, 145u,
28u, 184u, 48u, 36u, 152u, 71u, 44u, 12u, 9u, 132u, 105u, 28u, 172u,
48u, 37u, 8u, 25u, 28u, 164u, 48u, 38u, 14u, 68u, 114u, 112u, 192u,
152u, 19u, 145u, 201u, 131u, 2u, 80u, 137u, 145u, 201u, 67u, 2u, 80u,
137u, 17u, 200u, 195u, 2u, 72u, 228u, 114u, 16u, 192u, 152u, 19u,
145u, 199u, 131u, 5u, 8u, 128u, 161u, 20u, 161u, 14u, 36u, 142u, 58u,
24u, 19u, 60u, 130u, 56u, 224u, 96u, 74u, 16u, 226u, 56u, 208u, 96u,
101u, 20u, 34u, 178u, 109u, 8u, 157u, 8u, 177u, 9u, 157u, 168u, 76u,
7u, 9u, 28u, 96u, 48u, 38u, 132u, 105u, 145u, 197u, 195u, 2u, 80u,
139u, 17u, 197u, 131u, 2u, 80u, 137u, 145u, 197u, 3u, 2u, 73u, 164u,
113u, 32u, 192u, 154u, 17u, 166u, 71u, 13u, 12u, 20u, 34u, 50u, 125u,
8u, 145u, 35u, 134u, 6u, 4u, 161u, 18u, 35u, 133u, 6u, 4u, 147u, 200u,
225u, 1u, 129u, 52u, 47u, 44u, 142u, 14u, 24u, 25u, 0u, 161u, 22u,
20u, 34u, 50u, 133u, 8u, 145u, 36u, 50u, 56u, 129u, 66u, 38u, 19u,
66u, 242u, 200u, 161u, 14u, 12u, 42u, 73u, 9u, 161u, 25u, 4u, 145u,
193u, 67u, 2u, 104u, 110u, 25u, 28u, 16u, 48u, 37u, 8u, 145u, 28u, 8u,
48u, 36u, 160u, 71u, 0u, 12u, 9u, 161u, 184u, 100u, 49u, 6u, 6u, 49u,
66u, 6u, 148u, 34u, 65u, 182u, 132u, 88u, 38u, 134u, 225u, 132u, 208u,
225u, 146u, 73u, 0u,};
static unsigned char uvector__00031[] = {
 0u, 3u, 131u, 134u, 0u, 255u, 1u, 208u, 134u, 144u, 195u, 66u, 46u,
104u, 64u, 229u, 106u, 16u, 26u, 17u, 138u, 17u, 146u, 71u, 6u, 12u,
9u, 66u, 52u, 71u, 5u, 12u, 9u, 66u, 54u, 71u, 4u, 12u, 9u, 66u, 2u,
71u, 3u, 12u, 9u, 43u, 17u, 192u, 131u, 2u, 80u, 129u, 144u, 196u,
24u, 24u, 197u, 8u, 28u, 172u, 148u, 32u, 33u, 152u, 80u, 140u, 80u,
129u, 202u, 196u, 50u, 1u, 4u, 137u, 62u, 86u, 36u, 134u, 71u, 16u,
36u, 129u, 40u, 74u, 196u, 138u, 16u, 224u, 194u, 164u, 144u, 202u,
36u, 217u, 34u, 9u, 34u, 132u, 66u, 132u, 56u, 134u, 217u, 32u, 80u,
135u, 202u, 210u, 65u, 14u, 50u, 64u, 115u, 20u, 32u, 98u, 76u, 149u,
164u, 130u, 104u, 67u, 137u, 36u, 146u, 25u, 133u, 8u, 205u, 8u, 26u,
80u, 137u, 6u, 218u, 17u, 97u, 66u, 35u, 40u, 80u, 137u, 16u, 200u,
226u, 5u, 8u, 152u, 161u, 17u, 147u, 232u, 68u, 137u, 20u, 33u, 193u,
133u, 73u, 33u, 148u, 80u, 138u, 201u, 180u, 34u, 116u, 34u, 196u,
80u, 136u, 10u, 17u, 74u, 16u, 226u, 67u, 136u, 161u, 17u, 145u, 232u,
68u, 168u, 68u, 200u, 115u, 14u, 180u, 32u, 98u, 132u, 70u, 76u, 161u,
18u, 161u, 19u, 38u, 132u, 56u, 146u, 73u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00032[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 66u, 47u, 66u, 7u, 43u, 37u, 8u, 8u, 102u,
20u, 35u, 20u, 32u, 114u, 177u, 12u, 128u, 65u, 34u, 79u, 149u, 137u,
33u, 145u, 196u, 9u, 32u, 74u, 18u, 177u, 34u, 132u, 56u, 48u, 169u,
36u, 50u, 137u, 54u, 72u, 130u, 72u, 161u, 16u, 161u, 14u, 33u, 182u,
72u, 20u, 33u, 242u, 180u, 144u, 67u, 140u, 144u, 28u, 197u, 8u, 24u,
147u, 37u, 105u, 32u, 154u, 16u, 226u, 73u, 36u, 134u, 97u, 66u, 51u,
66u, 6u, 148u, 34u, 65u, 182u, 132u, 88u, 80u, 136u, 202u, 20u, 34u,
68u, 50u, 56u, 129u, 66u, 38u, 40u, 68u, 100u, 250u, 17u, 34u, 69u,
8u, 112u, 97u, 82u, 72u, 101u, 20u, 34u, 178u, 109u, 8u, 157u, 8u,
177u, 20u, 34u, 2u, 132u, 82u, 132u, 56u, 144u, 226u, 40u, 68u, 100u,
122u, 17u, 42u, 17u, 50u, 28u, 195u, 173u, 8u, 24u, 161u, 17u, 147u,
40u, 68u, 168u, 68u, 201u, 161u, 14u, 36u, 146u, 64u, 127u, 128u,
232u, 67u, 72u, 97u, 161u, 23u, 52u, 32u, 114u, 181u, 8u, 13u, 8u,
197u, 8u, 201u, 36u, 112u, 176u, 192u, 198u, 19u, 3u, 116u, 193u,
148u, 142u, 18u, 24u, 19u, 1u, 194u, 56u, 32u, 96u, 76u, 7u, 8u, 224u,
65u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00033[] = {
 0u, 3u, 147u, 134u, 7u, 17u, 35u, 202u, 210u, 65u, 36u, 114u, 64u,
192u, 152u, 19u, 145u, 200u, 195u, 2u, 73u, 4u, 114u, 32u, 192u, 146u,
177u, 28u, 128u, 48u, 38u, 4u, 228u, 113u, 240u, 193u, 66u, 6u, 36u,
201u, 90u, 72u, 36u, 142u, 60u, 24u, 18u, 132u, 12u, 142u, 54u, 24u,
19u, 18u, 162u, 56u, 208u, 96u, 73u, 32u, 142u, 50u, 24u, 18u, 86u,
35u, 139u, 134u, 4u, 196u, 168u, 142u, 42u, 24u, 19u, 17u, 114u, 56u,
160u, 96u, 132u, 73u, 28u, 72u, 48u, 50u, 137u, 54u, 72u, 130u, 136u,
76u, 158u, 3u, 208u, 76u, 69u, 194u, 96u, 56u, 73u, 28u, 64u, 48u,
38u, 85u, 132u, 112u, 240u, 192u, 144u, 81u, 28u, 56u, 48u, 36u, 144u,
71u, 12u, 12u, 9u, 149u, 97u, 28u, 36u, 48u, 73u, 242u, 177u, 35u,
132u, 6u, 4u, 149u, 136u, 224u, 193u, 129u, 51u, 233u, 35u, 130u,
134u, 6u, 64u, 32u, 161u, 40u, 74u, 196u, 144u, 200u, 226u, 4u, 144u,
19u, 62u, 146u, 66u, 101u, 66u, 73u, 28u, 12u, 48u, 38u, 132u, 135u,
145u, 192u, 131u, 2u, 74u, 196u, 112u, 0u, 192u, 154u, 18u, 30u, 67u,
16u, 96u, 99u, 20u, 32u, 114u, 177u, 9u, 161u, 26u, 132u, 144u,};
static unsigned char uvector__00034[] = {
 0u, 3u, 152u, 6u, 7u, 17u, 66u, 35u, 35u, 208u, 137u, 80u, 137u,
146u, 71u, 45u, 12u, 9u, 129u, 57u, 28u, 176u, 48u, 37u, 8u, 153u,
28u, 172u, 48u, 37u, 8u, 145u, 28u, 164u, 48u, 36u, 142u, 71u, 39u,
12u, 9u, 129u, 57u, 28u, 152u, 48u, 58u, 208u, 129u, 138u, 17u, 25u,
50u, 132u, 74u, 132u, 76u, 146u, 57u, 32u, 96u, 76u, 97u, 8u, 228u,
97u, 129u, 40u, 68u, 200u, 228u, 65u, 129u, 40u, 68u, 136u, 228u, 1u,
129u, 36u, 194u, 56u, 240u, 96u, 76u, 97u, 8u, 227u, 161u, 129u, 40u,
64u, 200u, 227u, 97u, 129u, 49u, 105u, 35u, 141u, 6u, 8u, 68u, 145u,
198u, 3u, 3u, 40u, 161u, 21u, 147u, 104u, 68u, 232u, 69u, 136u, 76u,
201u, 3u, 208u, 76u, 90u, 66u, 96u, 56u, 73u, 28u, 88u, 48u, 38u,
107u, 4u, 113u, 80u, 192u, 148u, 34u, 196u, 113u, 64u, 192u, 148u,
34u, 100u, 113u, 32u, 192u, 146u, 105u, 28u, 64u, 48u, 38u, 107u, 4u,
112u, 208u, 193u, 66u, 35u, 39u, 208u, 137u, 18u, 56u, 96u, 96u, 74u,
17u, 34u, 56u, 80u, 96u, 73u, 60u, 142u, 16u, 24u, 19u, 66u, 113u,
200u, 224u, 225u, 129u, 144u, 10u, 17u, 97u, 66u, 35u, 40u, 80u, 137u,
18u, 67u, 35u, 136u, 20u, 34u, 97u, 52u, 39u, 28u, 144u, 153u, 166u,
146u, 71u, 5u, 12u, 9u, 161u, 115u, 228u, 112u, 64u, 192u, 148u, 34u,
68u, 112u, 32u, 192u, 146u, 129u, 28u, 0u, 48u, 38u, 133u, 207u, 144u,
196u, 24u, 24u, 197u, 8u, 26u, 80u, 137u, 6u, 218u, 17u, 96u, 154u,
23u, 62u, 19u, 67u, 5u, 73u, 36u,};
static unsigned char uvector__00035[] = {
 0u, 3u, 131u, 134u, 0u, 255u, 1u, 208u, 134u, 144u, 195u, 66u, 56u,
104u, 64u, 229u, 106u, 16u, 26u, 17u, 218u, 17u, 226u, 71u, 6u, 12u,
9u, 66u, 62u, 71u, 5u, 12u, 9u, 66u, 128u, 71u, 4u, 12u, 9u, 66u, 2u,
71u, 3u, 12u, 9u, 43u, 17u, 192u, 131u, 2u, 80u, 129u, 144u, 196u,
24u, 24u, 197u, 8u, 28u, 172u, 148u, 32u, 33u, 152u, 80u, 142u, 208u,
129u, 202u, 196u, 50u, 1u, 5u, 9u, 66u, 86u, 36u, 134u, 71u, 16u, 36u,
129u, 39u, 202u, 196u, 144u, 202u, 36u, 217u, 34u, 10u, 34u, 17u, 33u,
232u, 80u, 129u, 137u, 50u, 86u, 146u, 9u, 14u, 34u, 71u, 149u, 164u,
130u, 73u, 36u, 134u, 97u, 66u, 61u, 66u, 6u, 148u, 34u, 65u, 182u,
132u, 88u, 80u, 136u, 202u, 20u, 34u, 68u, 50u, 56u, 129u, 66u, 38u,
40u, 68u, 100u, 250u, 17u, 34u, 72u, 101u, 20u, 34u, 178u, 109u, 8u,
157u, 8u, 177u, 16u, 137u, 15u, 65u, 214u, 132u, 12u, 80u, 136u, 201u,
148u, 34u, 84u, 34u, 100u, 135u, 17u, 66u, 35u, 35u, 208u, 137u, 80u,
137u, 146u, 73u, 36u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00036[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 66u, 57u, 66u, 7u, 43u, 37u, 8u, 8u, 102u,
20u, 35u, 180u, 32u, 114u, 177u, 12u, 128u, 65u, 66u, 80u, 149u, 137u,
33u, 145u, 196u, 9u, 32u, 73u, 242u, 177u, 36u, 50u, 137u, 54u, 72u,
130u, 136u, 132u, 72u, 122u, 20u, 32u, 98u, 76u, 149u, 164u, 130u,
67u, 136u, 145u, 229u, 105u, 32u, 146u, 73u, 33u, 152u, 80u, 143u,
80u, 129u, 165u, 8u, 144u, 109u, 161u, 22u, 20u, 34u, 50u, 133u, 8u,
145u, 12u, 142u, 32u, 80u, 137u, 138u, 17u, 25u, 62u, 132u, 72u, 146u,
25u, 69u, 8u, 172u, 155u, 66u, 39u, 66u, 44u, 68u, 34u, 67u, 208u,
117u, 161u, 3u, 20u, 34u, 50u, 101u, 8u, 149u, 8u, 153u, 33u, 196u,
80u, 136u, 200u, 244u, 34u, 84u, 34u, 100u, 146u, 73u, 1u, 254u, 3u,
161u, 13u, 33u, 134u, 132u, 112u, 208u, 129u, 202u, 212u, 32u, 52u,
35u, 180u, 35u, 196u, 145u, 194u, 195u, 3u, 24u, 76u, 13u, 211u, 6u,
82u, 56u, 72u, 96u, 76u, 7u, 8u, 224u, 129u, 129u, 48u, 28u, 35u,
129u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00037[] = {
 0u, 3u, 135u, 6u, 4u, 136u, 72u, 225u, 129u, 128u, 63u, 192u, 114u,
169u, 149u, 162u, 18u, 71u, 11u, 12u, 9u, 16u, 145u, 194u, 131u, 2u,
74u, 196u, 112u, 128u, 192u, 152u, 35u, 17u, 193u, 131u, 2u, 68u, 36u,
112u, 80u, 192u, 200u, 4u, 66u, 40u, 80u, 101u, 98u, 72u, 112u, 136u,
67u, 208u, 76u, 17u, 162u, 18u, 73u, 28u, 12u, 48u, 38u, 44u, 68u,
112u, 32u, 192u, 146u, 177u, 28u, 0u, 48u, 38u, 44u, 68u, 49u, 6u, 6u,
49u, 43u, 17u, 66u, 133u, 16u, 132u, 197u, 136u, 38u, 8u, 209u, 9u,
36u, 128u,};
static unsigned char uvector__00038[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 135u, 43u, 17u, 66u, 133u, 16u, 138u,
20u, 25u, 88u, 128u, 255u, 1u, 202u, 166u, 86u, 136u, 76u, 66u, 73u,
28u, 36u, 48u, 49u, 132u, 192u, 221u, 48u, 68u, 35u, 131u, 134u, 4u,
192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u,
0u,};
static ScmObj libstrstring_complete_TOincomplete(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_complete_TOincomplete__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_complete_TOincomplete, NULL, NULL);

static ScmObj libstrstring_incomplete_TOcomplete(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_incomplete_TOcomplete__STUB, 1, 3,SCM_FALSE,libstrstring_incomplete_TOcomplete, NULL, NULL);

static ScmObj libstrmake_byte_string(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrmake_byte_string__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrmake_byte_string, NULL, NULL);

static ScmObj libstrstring_byte_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_byte_ref__STUB, 2, 2,SCM_FALSE,libstrstring_byte_ref, NULL, NULL);

static ScmObj libstrbyte_substring(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrbyte_substring__STUB, 3, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrbyte_substring, NULL, NULL);

static unsigned char uvector__00039[] = {
 0u, 3u, 138u, 6u, 7u, 17u, 66u, 136u, 73u, 28u, 72u, 48u, 38u, 4u,
228u, 113u, 16u, 193u, 66u, 138u, 72u, 225u, 129u, 130u, 54u, 161u,
70u, 150u, 9u, 28u, 44u, 48u, 36u, 176u, 71u, 7u, 12u, 9u, 133u, 177u,
28u, 16u, 48u, 55u, 135u, 97u, 66u, 143u, 44u, 16u, 152u, 91u, 16u,
152u, 67u, 132u, 192u, 112u, 145u, 192u, 195u, 2u, 98u, 206u, 71u, 2u,
12u, 9u, 44u, 17u, 192u, 3u, 5u, 10u, 33u, 33u, 136u, 48u, 49u, 168u,
100u, 113u, 2u, 88u, 9u, 145u, 233u, 33u, 49u, 81u, 36u, 144u,};
static unsigned char uvector__00040[] = {
 0u, 3u, 197u, 0u, 24u, 40u, 82u, 40u, 82u, 73u, 30u, 37u, 240u, 192u,
148u, 41u, 4u, 120u, 151u, 131u, 2u, 80u, 164u, 145u, 226u, 92u, 12u,
20u, 41u, 20u, 41u, 36u, 143u, 18u, 216u, 96u, 74u, 20u, 130u, 60u,
75u, 65u, 129u, 40u, 82u, 72u, 241u, 43u, 6u, 10u, 20u, 170u, 20u,
186u, 20u, 146u, 71u, 137u, 84u, 48u, 37u, 10u, 73u, 30u, 37u, 64u,
192u, 148u, 41u, 100u, 120u, 148u, 67u, 4u, 183u, 66u, 152u, 40u, 83u,
120u, 81u, 36u, 120u, 147u, 195u, 2u, 100u, 196u, 71u, 137u, 48u, 48u,
38u, 76u, 68u, 120u, 145u, 195u, 5u, 10u, 85u, 10u, 93u, 10u, 113u,
35u, 196u, 140u, 24u, 18u, 133u, 44u, 143u, 18u, 32u, 96u, 161u, 72u,
161u, 73u, 36u, 120u, 144u, 195u, 2u, 80u, 164u, 17u, 226u, 66u, 12u,
9u, 66u, 146u, 71u, 137u, 0u, 48u, 80u, 164u, 80u, 167u, 146u, 60u,
67u, 225u, 129u, 40u, 82u, 8u, 241u, 13u, 134u, 4u, 208u, 136u, 146u,
60u, 67u, 1u, 130u, 133u, 42u, 133u, 46u, 133u, 64u, 145u, 226u, 23u,
12u, 9u, 66u, 150u, 71u, 136u, 84u, 48u, 80u, 164u, 80u, 164u, 146u,
60u, 66u, 129u, 129u, 40u, 82u, 8u, 241u, 9u, 134u, 4u, 161u, 73u,
35u, 196u, 36u, 24u, 40u, 84u, 73u, 30u, 33u, 16u, 192u, 148u, 42u,
68u, 120u, 131u, 195u, 2u, 104u, 98u, 209u, 30u, 32u, 208u, 193u, 66u,
145u, 66u, 146u, 72u, 241u, 6u, 6u, 4u, 161u, 72u, 35u, 196u, 22u,
24u, 18u, 133u, 36u, 143u, 16u, 72u, 96u, 161u, 72u, 161u, 83u, 36u,
120u, 130u, 3u, 2u, 80u, 164u, 17u, 226u, 4u, 12u, 9u, 161u, 226u, 4u,
120u, 128u, 67u, 5u, 10u, 85u, 10u, 165u, 10u, 169u, 35u, 196u, 0u,
24u, 18u, 133u, 84u, 143u, 14u, 240u, 96u, 161u, 72u, 161u, 73u, 36u,
120u, 119u, 67u, 2u, 80u, 164u, 17u, 225u, 220u, 12u, 9u, 66u, 146u,
71u, 135u, 104u, 48u, 80u, 164u, 80u, 171u, 18u, 60u, 59u, 33u, 129u,
40u, 82u, 8u, 240u, 234u, 134u, 4u, 209u, 48u, 18u, 60u, 58u, 65u,
130u, 133u, 42u, 133u, 94u, 133u, 84u, 145u, 225u, 209u, 12u, 9u, 66u,
170u, 71u, 135u, 60u, 48u, 80u, 164u, 80u, 164u, 146u, 60u, 57u, 193u,
129u, 40u, 82u, 8u, 240u, 230u, 134u, 4u, 161u, 73u, 35u, 195u, 150u,
24u, 40u, 82u, 40u, 83u, 201u, 30u, 28u, 160u, 192u, 148u, 41u, 4u,
120u, 113u, 131u, 2u, 104u, 182u, 145u, 30u, 28u, 48u, 193u, 66u,
149u, 66u, 161u, 66u, 170u, 72u, 240u, 225u, 6u, 4u, 161u, 85u, 35u,
195u, 62u, 24u, 5u, 10u, 61u, 10u, 169u, 110u, 36u, 120u, 103u, 131u,
2u, 104u, 202u, 169u, 30u, 25u, 208u, 192u, 148u, 42u, 164u, 120u,
103u, 3u, 3u, 32u, 20u, 42u, 162u, 133u, 96u, 146u, 27u, 2u, 104u,
202u, 144u, 9u, 163u, 8u, 225u, 192u, 38u, 139u, 105u, 4u, 209u, 88u,
18u, 64u, 77u, 20u, 86u, 14u, 1u, 52u, 76u, 4u, 38u, 136u, 200u, 18u,
2u, 104u, 132u, 40u, 112u, 9u, 161u, 226u, 1u, 52u, 54u, 124u, 144u,
210u, 19u, 67u, 22u, 130u, 104u, 88u, 73u, 36u, 143u, 12u, 200u, 96u,
113u, 20u, 40u, 164u, 145u, 225u, 151u, 12u, 9u, 163u, 219u, 100u,
120u, 101u, 131u, 2u, 75u, 4u, 120u, 100u, 131u, 4u, 109u, 66u, 179u,
44u, 18u, 60u, 50u, 33u, 129u, 37u, 130u, 60u, 49u, 161u, 129u, 52u,
128u, 116u, 143u, 12u, 96u, 96u, 73u, 96u, 143u, 12u, 80u, 96u, 101u,
14u, 194u, 133u, 30u, 88u, 33u, 52u, 128u, 116u, 203u, 1u, 52u, 123u,
64u, 145u, 225u, 137u, 12u, 9u, 164u, 66u, 196u, 120u, 98u, 3u, 2u,
75u, 4u, 120u, 97u, 131u, 5u, 10u, 41u, 35u, 195u, 2u, 24u, 40u, 82u,
168u, 82u, 232u, 86u, 137u, 30u, 24u, 0u, 192u, 148u, 41u, 100u, 120u,
87u, 131u, 5u, 10u, 69u, 10u, 73u, 35u, 194u, 186u, 24u, 18u, 133u,
32u, 143u, 10u, 224u, 96u, 74u, 20u, 146u, 60u, 43u, 65u, 130u, 133u,
110u, 133u, 88u, 145u, 225u, 89u, 12u, 9u, 66u, 182u, 71u, 133u, 84u,
48u, 38u, 147u, 107u, 17u, 225u, 82u, 12u, 20u, 41u, 84u, 41u, 116u,
42u, 228u, 143u, 10u, 136u, 96u, 74u, 20u, 178u, 60u, 41u, 225u, 130u,
133u, 34u, 133u, 36u, 145u, 225u, 78u, 12u, 9u, 66u, 144u, 71u, 133u,
52u, 48u, 37u, 10u, 73u, 30u, 20u, 176u, 193u, 66u, 183u, 66u, 184u,
72u, 240u, 165u, 6u, 4u, 161u, 91u, 35u, 194u, 140u, 24u, 19u, 74u,
177u, 200u, 240u, 161u, 134u, 10u, 20u, 170u, 20u, 186u, 21u, 194u,
71u, 133u, 8u, 48u, 37u, 10u, 89u, 30u, 20u, 0u, 193u, 66u, 145u, 66u,
146u, 72u, 240u, 143u, 134u, 4u, 161u, 72u, 35u, 194u, 60u, 24u, 18u,
133u, 36u, 143u, 8u, 224u, 96u, 161u, 91u, 161u, 93u, 36u, 120u, 70u,
195u, 2u, 80u, 173u, 145u, 225u, 23u, 12u, 9u, 165u, 211u, 4u, 120u,
69u, 3u, 5u, 10u, 85u, 10u, 93u, 10u, 233u, 35u, 194u, 38u, 24u, 18u,
133u, 44u, 143u, 8u, 136u, 96u, 161u, 72u, 161u, 73u, 36u, 120u, 68u,
3u, 2u, 80u, 164u, 17u, 225u, 15u, 12u, 9u, 66u, 146u, 71u, 132u, 56u,
48u, 80u, 168u, 146u, 60u, 33u, 161u, 129u, 40u, 84u, 136u, 240u,
133u, 134u, 4u, 211u, 40u, 146u, 60u, 33u, 33u, 129u, 228u, 80u, 163u,
138u, 20u, 82u, 73u, 30u, 16u, 128u, 192u, 154u, 103u, 178u, 71u,
132u, 28u, 48u, 38u, 154u, 6u, 17u, 225u, 4u, 12u, 20u, 41u, 84u, 41u,
116u, 43u, 196u, 143u, 8u, 24u, 96u, 74u, 20u, 178u, 60u, 32u, 1u,
128u, 80u, 163u, 208u, 165u, 150u, 226u, 71u, 127u, 12u, 9u, 166u,
209u, 36u, 119u, 224u, 192u, 148u, 41u, 100u, 119u, 208u, 192u, 200u,
5u, 10u, 88u, 161u, 69u, 36u, 134u, 192u, 154u, 109u, 12u, 2u, 105u,
170u, 216u, 112u, 9u, 166u, 121u, 193u, 232u, 38u, 153u, 68u, 132u,
211u, 17u, 130u, 72u, 9u, 166u, 1u, 161u, 192u, 38u, 151u, 76u, 4u,
210u, 212u, 114u, 64u, 77u, 44u, 28u, 14u, 1u, 52u, 171u, 28u, 38u,
148u, 171u, 18u, 2u, 105u, 66u, 88u, 112u, 9u, 164u, 218u, 193u, 52u,
150u, 20u, 144u, 19u, 73u, 22u, 131u, 109u, 10u, 168u, 77u, 27u, 22u,
9u, 163u, 106u, 68u, 128u, 154u, 19u, 188u, 28u, 2u, 104u, 68u, 72u,
76u, 230u, 9u, 1u, 51u, 13u, 9u, 146u, 41u, 1u, 49u, 132u, 126u, 33u,
164u, 38u, 26u, 100u, 146u, 59u, 224u, 96u, 77u, 56u, 24u, 35u, 188u,
134u, 10u, 20u, 170u, 21u, 249u, 96u, 145u, 222u, 3u, 2u, 75u, 4u,
119u, 96u, 193u, 66u, 145u, 66u, 146u, 72u, 238u, 161u, 129u, 40u,
82u, 8u, 238u, 129u, 129u, 40u, 82u, 72u, 238u, 33u, 129u, 196u, 80u,
162u, 146u, 71u, 111u, 12u, 9u, 168u, 50u, 36u, 118u, 176u, 193u, 66u,
149u, 44u, 80u, 192u, 18u, 59u, 80u, 96u, 73u, 96u, 142u, 206u, 24u,
27u, 195u, 176u, 161u, 71u, 150u, 8u, 77u, 66u, 87u, 33u, 53u, 6u,
24u, 145u, 217u, 131u, 2u, 106u, 28u, 1u, 29u, 148u, 48u, 36u, 176u,
71u, 99u, 12u, 20u, 40u, 164u, 142u, 188u, 24u, 40u, 82u, 168u, 96u,
101u, 130u, 71u, 93u, 12u, 9u, 44u, 17u, 214u, 195u, 5u, 10u, 69u,
10u, 73u, 35u, 173u, 6u, 4u, 161u, 72u, 35u, 172u, 134u, 4u, 161u,
73u, 35u, 171u, 134u, 10u, 21u, 186u, 24u, 34u, 71u, 86u, 12u, 9u,
66u, 182u, 71u, 82u, 12u, 9u, 168u, 242u, 132u, 116u, 240u, 193u, 66u,
149u, 67u, 5u, 44u, 18u, 58u, 112u, 96u, 73u, 96u, 142u, 152u, 24u,
40u, 82u, 40u, 82u, 73u, 29u, 44u, 48u, 37u, 10u, 65u, 29u, 40u, 48u,
37u, 10u, 73u, 29u, 32u, 48u, 80u, 173u, 208u, 174u, 146u, 58u, 56u,
96u, 74u, 21u, 178u, 58u, 24u, 96u, 77u, 75u, 9u, 35u, 160u, 6u, 10u,
20u, 170u, 21u, 217u, 96u, 145u, 207u, 195u, 2u, 75u, 4u, 115u, 208u,
193u, 66u, 145u, 66u, 146u, 72u, 231u, 129u, 129u, 40u, 82u, 8u, 231u,
97u, 129u, 40u, 82u, 72u, 231u, 33u, 130u, 133u, 34u, 133u, 76u, 145u,
206u, 3u, 2u, 80u, 164u, 17u, 205u, 3u, 2u, 106u, 114u, 241u, 28u,
196u, 48u, 80u, 165u, 80u, 170u, 75u, 4u, 142u, 96u, 24u, 18u, 88u,
35u, 151u, 6u, 10u, 20u, 138u, 20u, 146u, 71u, 45u, 12u, 9u, 66u,
144u, 71u, 44u, 12u, 9u, 66u, 146u, 71u, 42u, 12u, 20u, 41u, 20u, 42u,
196u, 142u, 82u, 24u, 18u, 133u, 32u, 142u, 74u, 24u, 19u, 84u, 116u,
200u, 228u, 65u, 130u, 133u, 42u, 133u, 94u, 88u, 36u, 114u, 16u,
192u, 146u, 193u, 28u, 124u, 48u, 80u, 164u, 80u, 164u, 146u, 56u,
240u, 96u, 74u, 20u, 130u, 56u, 232u, 96u, 74u, 20u, 146u, 56u, 216u,
96u, 161u, 72u, 161u, 79u, 36u, 113u, 160u, 192u, 148u, 41u, 4u, 113u,
96u, 192u, 154u, 170u, 144u, 71u, 19u, 12u, 20u, 41u, 84u, 42u, 18u,
193u, 35u, 137u, 6u, 4u, 150u, 8u, 225u, 193u, 130u, 133u, 42u, 133u,
38u, 88u, 36u, 112u, 208u, 192u, 146u, 193u, 28u, 48u, 48u, 37u, 10u,
73u, 28u, 28u, 48u, 50u, 208u, 164u, 183u, 63u, 18u, 56u, 48u, 96u,
74u, 20u, 146u, 56u, 32u, 96u, 20u, 40u, 242u, 193u, 9u, 171u, 24u,
36u, 142u, 6u, 24u, 19u, 86u, 102u, 200u, 224u, 65u, 129u, 37u, 130u,
56u, 8u, 96u, 100u, 2u, 88u, 20u, 40u, 164u, 144u, 216u, 19u, 86u,
102u, 0u, 77u, 87u, 94u, 126u, 32u, 38u, 171u, 69u, 135u, 0u, 154u,
170u, 144u, 19u, 85u, 2u, 73u, 1u, 53u, 76u, 88u, 56u, 4u, 213u, 29u,
48u, 154u, 161u, 40u, 72u, 9u, 169u, 248u, 33u, 192u, 38u, 167u, 47u,
4u, 212u, 209u, 242u, 64u, 77u, 76u, 76u, 14u, 1u, 53u, 44u, 36u, 38u,
164u, 229u, 18u, 2u, 106u, 70u, 184u, 112u, 9u, 168u, 242u, 129u, 53u,
25u, 84u, 144u, 19u, 81u, 96u, 133u, 12u, 25u, 9u, 168u, 8u, 228u, 4u,
211u, 245u, 64u, 219u, 66u, 150u, 19u, 78u, 6u, 2u, 105u, 194u, 161u,
33u, 164u, 38u, 4u, 68u, 146u, 56u, 0u, 96u, 77u, 91u, 75u, 33u, 136u,
48u, 49u, 138u, 20u, 146u, 27u, 101u, 128u, 154u, 182u, 150u, 19u,
86u, 225u, 201u, 36u,};
static unsigned char uvector__00041[] = {
 0u, 3u, 140u, 6u, 10u, 21u, 186u, 20u, 146u, 71u, 23u, 12u, 9u, 66u,
182u, 71u, 22u, 12u, 9u, 66u, 146u, 71u, 20u, 12u, 20u, 43u, 116u,
41u, 36u, 142u, 38u, 24u, 18u, 133u, 108u, 142u, 36u, 24u, 18u, 133u,
36u, 142u, 34u, 24u, 40u, 81u, 73u, 28u, 56u, 48u, 80u, 165u, 80u,
175u, 75u, 4u, 142u, 26u, 24u, 18u, 88u, 35u, 132u, 134u, 10u, 20u,
170u, 20u, 153u, 96u, 145u, 194u, 3u, 2u, 75u, 4u, 112u, 112u, 192u,
148u, 41u, 36u, 112u, 64u, 192u, 40u, 81u, 229u, 130u, 220u, 72u,
224u, 97u, 129u, 50u, 162u, 35u, 129u, 6u, 4u, 150u, 8u, 224u, 33u,
129u, 144u, 9u, 96u, 80u, 162u, 146u, 67u, 96u, 76u, 167u, 192u, 76u,
127u, 31u, 136u, 9u, 140u, 72u, 76u, 86u, 130u, 97u, 118u, 67u, 72u,
76u, 7u, 9u, 36u, 112u, 0u, 192u, 153u, 172u, 144u, 196u, 24u, 24u,
197u, 10u, 73u, 13u, 178u, 192u, 76u, 214u, 66u, 102u, 234u, 73u, 32u,};
static unsigned char uvector__00042[] = {
 0u, 3u, 131u, 6u, 10u, 20u, 134u, 226u, 71u, 5u, 12u, 9u, 66u, 144u,
71u, 2u, 12u, 9u, 66u, 164u, 67u, 16u, 96u, 99u, 80u, 205u, 66u, 141u,
67u, 8u, 67u, 48u, 161u, 72u, 161u, 73u, 33u, 182u, 88u, 20u, 40u,
164u, 54u, 1u, 66u, 143u, 44u, 16u, 203u, 66u, 146u, 220u, 252u, 72u,
20u, 41u, 84u, 41u, 50u, 193u, 126u, 32u, 80u, 165u, 80u, 168u, 75u,
4u, 56u, 10u, 20u, 138u, 20u, 242u, 40u, 82u, 40u, 82u, 73u, 32u, 80u,
165u, 80u, 171u, 203u, 4u, 56u, 10u, 20u, 138u, 21u, 98u, 40u, 82u,
40u, 82u, 73u, 32u, 80u, 165u, 80u, 170u, 75u, 4u, 56u, 10u, 20u,
138u, 21u, 50u, 40u, 82u, 40u, 82u, 73u, 32u, 80u, 165u, 80u, 174u,
203u, 4u, 56u, 10u, 21u, 186u, 21u, 210u, 40u, 82u, 40u, 82u, 73u,
32u, 80u, 165u, 80u, 193u, 75u, 4u, 56u, 10u, 21u, 186u, 24u, 34u,
40u, 82u, 40u, 82u, 73u, 32u, 80u, 165u, 80u, 192u, 203u, 4u, 80u,
193u, 145u, 66u, 145u, 66u, 146u, 72u, 20u, 41u, 84u, 43u, 242u, 193u,
13u, 180u, 41u, 98u, 133u, 20u, 134u, 192u, 40u, 81u, 232u, 82u, 203u,
113u, 2u, 133u, 42u, 133u, 46u, 133u, 120u, 135u, 0u, 242u, 40u, 81u,
197u, 10u, 41u, 36u, 61u, 10u, 21u, 18u, 40u, 82u, 40u, 82u, 73u, 36u,
10u, 20u, 170u, 20u, 186u, 21u, 210u, 28u, 5u, 10u, 221u, 10u, 233u,
20u, 41u, 20u, 41u, 36u, 144u, 40u, 82u, 168u, 82u, 232u, 87u, 8u,
112u, 20u, 43u, 116u, 43u, 132u, 80u, 164u, 80u, 164u, 146u, 64u,
161u, 74u, 161u, 75u, 161u, 87u, 33u, 192u, 80u, 173u, 208u, 171u,
17u, 66u, 145u, 66u, 146u, 73u, 2u, 133u, 42u, 133u, 46u, 133u, 104u,
134u, 218u, 21u, 81u, 66u, 176u, 67u, 96u, 20u, 40u, 244u, 42u, 165u,
184u, 129u, 66u, 149u, 66u, 161u, 66u, 170u, 67u, 128u, 161u, 72u,
161u, 79u, 34u, 133u, 34u, 133u, 36u, 146u, 5u, 10u, 85u, 10u, 189u,
10u, 169u, 14u, 2u, 133u, 34u, 133u, 88u, 138u, 20u, 138u, 20u, 146u,
72u, 20u, 41u, 84u, 42u, 148u, 42u, 164u, 56u, 10u, 20u, 138u, 21u,
50u, 40u, 82u, 40u, 82u, 73u, 33u, 164u, 80u, 168u, 145u, 66u, 145u,
66u, 146u, 73u, 36u, 10u, 20u, 170u, 20u, 186u, 21u, 2u, 28u, 5u, 10u,
69u, 10u, 121u, 20u, 41u, 20u, 41u, 36u, 144u, 40u, 82u, 168u, 82u,
232u, 83u, 136u, 150u, 232u, 83u, 5u, 10u, 111u, 10u, 36u, 129u, 66u,
149u, 66u, 151u, 66u, 146u, 95u, 136u, 105u, 20u, 41u, 20u, 41u, 36u,
146u, 67u, 72u, 161u, 72u, 161u, 73u, 36u, 146u, 25u, 133u, 10u, 221u,
10u, 73u, 13u, 178u, 192u, 161u, 69u, 33u, 176u, 10u, 20u, 121u, 96u,
183u, 16u, 40u, 82u, 168u, 82u, 101u, 130u, 252u, 64u, 161u, 74u,
161u, 94u, 150u, 8u, 161u, 69u, 34u, 133u, 110u, 133u, 36u, 144u,
210u, 40u, 86u, 232u, 82u, 73u, 36u, 134u, 97u, 66u, 162u, 67u, 35u,
136u, 18u, 192u, 161u, 68u, 36u, 134u, 240u, 236u, 40u, 81u, 229u,
130u, 35u, 106u, 20u, 105u, 96u, 145u, 66u, 138u, 67u, 136u, 161u,
68u, 36u, 146u, 25u, 133u, 10u, 193u, 12u, 142u, 32u, 75u, 2u, 133u,
20u, 146u, 25u, 67u, 176u, 161u, 71u, 150u, 8u, 141u, 168u, 86u, 101u,
130u, 101u, 128u, 226u, 40u, 81u, 73u, 36u, 134u, 97u, 67u, 6u, 67u,
35u, 136u, 18u, 192u, 161u, 69u, 36u, 134u, 240u, 236u, 40u, 81u,
229u, 130u, 40u, 82u, 165u, 138u, 24u, 2u, 67u, 136u, 161u, 69u, 36u,
146u, 19u, 1u, 194u, 72u,};
static unsigned char uvector__00043[] = {
 0u, 3u, 129u, 6u, 10u, 24u, 89u, 88u, 57u, 40u, 102u, 161u, 70u,
161u, 132u, 33u, 152u, 80u, 164u, 80u, 164u, 144u, 219u, 44u, 10u,
20u, 82u, 27u, 0u, 161u, 71u, 150u, 8u, 101u, 161u, 73u, 110u, 126u,
36u, 10u, 20u, 170u, 20u, 153u, 96u, 191u, 16u, 40u, 82u, 168u, 84u,
37u, 130u, 28u, 5u, 10u, 69u, 10u, 121u, 20u, 41u, 20u, 41u, 36u,
144u, 40u, 82u, 168u, 85u, 229u, 130u, 28u, 5u, 10u, 69u, 10u, 177u,
20u, 41u, 20u, 41u, 36u, 144u, 40u, 82u, 168u, 85u, 37u, 130u, 28u,
5u, 10u, 69u, 10u, 153u, 20u, 41u, 20u, 41u, 36u, 144u, 40u, 82u,
168u, 87u, 101u, 130u, 28u, 5u, 10u, 221u, 10u, 233u, 20u, 41u, 20u,
41u, 36u, 144u, 40u, 82u, 168u, 96u, 165u, 130u, 28u, 5u, 10u, 221u,
12u, 17u, 20u, 41u, 20u, 41u, 36u, 144u, 40u, 82u, 168u, 96u, 101u,
130u, 40u, 96u, 200u, 161u, 72u, 161u, 73u, 36u, 10u, 20u, 170u, 21u,
249u, 96u, 134u, 218u, 20u, 177u, 66u, 138u, 67u, 96u, 20u, 40u, 244u,
41u, 101u, 184u, 129u, 66u, 149u, 66u, 151u, 66u, 188u, 67u, 128u,
121u, 20u, 40u, 226u, 133u, 20u, 146u, 30u, 133u, 10u, 137u, 20u, 41u,
20u, 41u, 36u, 146u, 5u, 10u, 85u, 10u, 93u, 10u, 233u, 14u, 2u, 133u,
110u, 133u, 116u, 138u, 20u, 138u, 20u, 146u, 72u, 20u, 41u, 84u, 41u,
116u, 43u, 132u, 56u, 10u, 21u, 186u, 21u, 194u, 40u, 82u, 40u, 82u,
73u, 32u, 80u, 165u, 80u, 165u, 208u, 171u, 144u, 224u, 40u, 86u,
232u, 85u, 136u, 161u, 72u, 161u, 73u, 36u, 129u, 66u, 149u, 66u,
151u, 66u, 180u, 67u, 109u, 10u, 168u, 161u, 88u, 33u, 176u, 10u, 20u,
122u, 21u, 82u, 220u, 64u, 161u, 74u, 161u, 80u, 161u, 85u, 33u, 192u,
80u, 164u, 80u, 167u, 145u, 66u, 145u, 66u, 146u, 73u, 2u, 133u, 42u,
133u, 94u, 133u, 84u, 135u, 1u, 66u, 145u, 66u, 172u, 69u, 10u, 69u,
10u, 73u, 36u, 10u, 20u, 170u, 21u, 74u, 21u, 82u, 28u, 5u, 10u, 69u,
10u, 153u, 20u, 41u, 20u, 41u, 36u, 144u, 210u, 40u, 84u, 72u, 161u,
72u, 161u, 73u, 36u, 146u, 5u, 10u, 85u, 10u, 93u, 10u, 129u, 14u, 2u,
133u, 34u, 133u, 60u, 138u, 20u, 138u, 20u, 146u, 72u, 20u, 41u, 84u,
41u, 116u, 41u, 196u, 75u, 116u, 41u, 130u, 133u, 55u, 133u, 18u, 64u,
161u, 74u, 161u, 75u, 161u, 73u, 47u, 196u, 52u, 138u, 20u, 138u, 20u,
146u, 73u, 33u, 164u, 80u, 164u, 80u, 164u, 146u, 73u, 12u, 194u,
133u, 110u, 133u, 36u, 134u, 217u, 96u, 80u, 162u, 144u, 216u, 5u,
10u, 60u, 176u, 91u, 136u, 20u, 41u, 84u, 41u, 50u, 193u, 126u, 32u,
80u, 165u, 80u, 175u, 75u, 4u, 80u, 162u, 145u, 66u, 183u, 66u, 146u,
72u, 105u, 20u, 43u, 116u, 41u, 36u, 146u, 67u, 48u, 161u, 81u, 33u,
145u, 196u, 9u, 96u, 80u, 162u, 18u, 67u, 120u, 118u, 20u, 40u, 242u,
193u, 17u, 181u, 10u, 52u, 176u, 72u, 161u, 69u, 33u, 196u, 80u, 162u,
18u, 73u, 12u, 194u, 133u, 96u, 134u, 71u, 16u, 37u, 129u, 66u, 138u,
73u, 12u, 161u, 216u, 80u, 163u, 203u, 4u, 70u, 212u, 43u, 50u, 193u,
50u, 192u, 113u, 20u, 40u, 164u, 146u, 67u, 48u, 161u, 131u, 33u,
145u, 196u, 9u, 96u, 80u, 162u, 146u, 67u, 120u, 118u, 20u, 40u, 242u,
193u, 20u, 41u, 82u, 197u, 12u, 1u, 33u, 196u, 80u, 162u, 146u, 73u,
20u, 41u, 13u, 196u, 146u, 56u, 8u, 96u, 74u, 24u, 98u, 56u, 0u, 96u,
73u, 88u, 134u, 32u, 192u, 198u, 37u, 98u, 19u, 1u, 194u, 72u,};
static unsigned char uvector__00044[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 67u, 15u, 43u, 17u, 67u, 11u, 43u, 7u,
37u, 12u, 212u, 40u, 212u, 48u, 132u, 51u, 10u, 20u, 138u, 20u, 146u,
27u, 101u, 129u, 66u, 138u, 67u, 96u, 20u, 40u, 242u, 193u, 12u, 180u,
41u, 45u, 207u, 196u, 129u, 66u, 149u, 66u, 147u, 44u, 23u, 226u, 5u,
10u, 85u, 10u, 132u, 176u, 67u, 128u, 161u, 72u, 161u, 79u, 34u, 133u,
34u, 133u, 36u, 146u, 5u, 10u, 85u, 10u, 188u, 176u, 67u, 128u, 161u,
72u, 161u, 86u, 34u, 133u, 34u, 133u, 36u, 146u, 5u, 10u, 85u, 10u,
164u, 176u, 67u, 128u, 161u, 72u, 161u, 83u, 34u, 133u, 34u, 133u,
36u, 146u, 5u, 10u, 85u, 10u, 236u, 176u, 67u, 128u, 161u, 91u, 161u,
93u, 34u, 133u, 34u, 133u, 36u, 146u, 5u, 10u, 85u, 12u, 20u, 176u,
67u, 128u, 161u, 91u, 161u, 130u, 34u, 133u, 34u, 133u, 36u, 146u, 5u,
10u, 85u, 12u, 12u, 176u, 69u, 12u, 25u, 20u, 41u, 20u, 41u, 36u,
129u, 66u, 149u, 66u, 191u, 44u, 16u, 219u, 66u, 150u, 40u, 81u, 72u,
108u, 2u, 133u, 30u, 133u, 44u, 183u, 16u, 40u, 82u, 168u, 82u, 232u,
87u, 136u, 112u, 15u, 34u, 133u, 28u, 80u, 162u, 146u, 67u, 208u,
161u, 81u, 34u, 133u, 34u, 133u, 36u, 146u, 64u, 161u, 74u, 161u, 75u,
161u, 93u, 33u, 192u, 80u, 173u, 208u, 174u, 145u, 66u, 145u, 66u,
146u, 73u, 2u, 133u, 42u, 133u, 46u, 133u, 112u, 135u, 1u, 66u, 183u,
66u, 184u, 69u, 10u, 69u, 10u, 73u, 36u, 10u, 20u, 170u, 20u, 186u,
21u, 114u, 28u, 5u, 10u, 221u, 10u, 177u, 20u, 41u, 20u, 41u, 36u,
144u, 40u, 82u, 168u, 82u, 232u, 86u, 136u, 109u, 161u, 85u, 20u, 43u,
4u, 54u, 1u, 66u, 143u, 66u, 170u, 91u, 136u, 20u, 41u, 84u, 42u, 20u,
42u, 164u, 56u, 10u, 20u, 138u, 20u, 242u, 40u, 82u, 40u, 82u, 73u,
32u, 80u, 165u, 80u, 171u, 208u, 170u, 144u, 224u, 40u, 82u, 40u, 85u,
136u, 161u, 72u, 161u, 73u, 36u, 129u, 66u, 149u, 66u, 169u, 66u,
170u, 67u, 128u, 161u, 72u, 161u, 83u, 34u, 133u, 34u, 133u, 36u,
146u, 26u, 69u, 10u, 137u, 20u, 41u, 20u, 41u, 36u, 146u, 64u, 161u,
74u, 161u, 75u, 161u, 80u, 33u, 192u, 80u, 164u, 80u, 167u, 145u, 66u,
145u, 66u, 146u, 73u, 2u, 133u, 42u, 133u, 46u, 133u, 56u, 137u, 110u,
133u, 48u, 80u, 166u, 240u, 162u, 72u, 20u, 41u, 84u, 41u, 116u, 41u,
37u, 248u, 134u, 145u, 66u, 145u, 66u, 146u, 73u, 36u, 52u, 138u, 20u,
138u, 20u, 146u, 73u, 33u, 152u, 80u, 173u, 208u, 164u, 144u, 219u,
44u, 10u, 20u, 82u, 27u, 0u, 161u, 71u, 150u, 11u, 113u, 2u, 133u,
42u, 133u, 38u, 88u, 47u, 196u, 10u, 20u, 170u, 21u, 233u, 96u, 138u,
20u, 82u, 40u, 86u, 232u, 82u, 73u, 13u, 34u, 133u, 110u, 133u, 36u,
146u, 72u, 102u, 20u, 42u, 36u, 50u, 56u, 129u, 44u, 10u, 20u, 66u,
72u, 111u, 14u, 194u, 133u, 30u, 88u, 34u, 54u, 161u, 70u, 150u, 9u,
20u, 40u, 164u, 56u, 138u, 20u, 66u, 73u, 33u, 152u, 80u, 172u, 16u,
200u, 226u, 4u, 176u, 40u, 81u, 73u, 33u, 148u, 59u, 10u, 20u, 121u,
96u, 136u, 218u, 133u, 102u, 88u, 38u, 88u, 14u, 34u, 133u, 20u, 146u,
72u, 102u, 20u, 48u, 100u, 50u, 56u, 129u, 44u, 10u, 20u, 82u, 72u,
111u, 14u, 194u, 133u, 30u, 88u, 34u, 133u, 42u, 88u, 161u, 128u, 36u,
56u, 138u, 20u, 82u, 73u, 34u, 133u, 33u, 184u, 146u, 72u, 225u, 97u,
129u, 140u, 38u, 6u, 233u, 130u, 33u, 28u, 36u, 48u, 38u, 3u, 132u,
112u, 64u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 72u,};
static ScmObj libstrstring_cursorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursorP__STUB, 1, 0,SCM_FALSE,libstrstring_cursorP, NULL, NULL);

static ScmObj libstrstring_cursor_start(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_cursor_start__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_cursor_start, NULL, NULL);

static ScmObj libstrstring_cursor_end(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libstrstring_cursor_end__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libstrstring_cursor_end, NULL, NULL);

static ScmObj libstrstring_cursor_next(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_next__STUB, 2, 0,SCM_FALSE,libstrstring_cursor_next, NULL, NULL);

static ScmObj libstrstring_cursor_prev(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_prev__STUB, 2, 0,SCM_FALSE,libstrstring_cursor_prev, NULL, NULL);

static ScmObj libstrstring_cursor_forward(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_forward__STUB, 3, 0,SCM_FALSE,libstrstring_cursor_forward, NULL, NULL);

static ScmObj libstrstring_cursor_back(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_back__STUB, 3, 0,SCM_FALSE,libstrstring_cursor_back, NULL, NULL);

static ScmObj libstrstring_index_TOcursor(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_index_TOcursor__STUB, 2, 0,SCM_FALSE,libstrstring_index_TOcursor, NULL, NULL);

static ScmObj libstrstring_cursor_TOindex(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_TOindex__STUB, 2, 0,SCM_FALSE,libstrstring_cursor_TOindex, NULL, NULL);

static ScmObj libstrstring_cursor_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_3dP__STUB, 2, 0,SCM_FALSE,libstrstring_cursor_3dP, NULL, NULL);

static ScmObj libstrstring_cursor_LTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_LTP__STUB, 2, 0,SCM_FALSE,libstrstring_cursor_LTP, NULL, NULL);

static ScmObj libstrstring_cursor_GTP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_GTP__STUB, 2, 0,SCM_FALSE,libstrstring_cursor_GTP, NULL, NULL);

static ScmObj libstrstring_cursor_LT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_LT_3dP__STUB, 2, 0,SCM_FALSE,libstrstring_cursor_LT_3dP, NULL, NULL);

static ScmObj libstrstring_cursor_GT_3dP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_GT_3dP__STUB, 2, 0,SCM_FALSE,libstrstring_cursor_GT_3dP, NULL, NULL);

static ScmObj libstrstring_cursor_diff(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libstrstring_cursor_diff__STUB, 3, 0,SCM_FALSE,libstrstring_cursor_diff, NULL, NULL);

static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[265];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("string-ellipsis", 15, 15),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libstr.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("string-incomplete\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string-immutable\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("make-string", 11, 11),
      SCM_STRING_CONST_INITIALIZER("len", 3, 3),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("c", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("string", 6, 6),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("chars", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string-copy", 11, 11),
      SCM_STRING_CONST_INITIALIZER("str", 3, 3),
      SCM_STRING_CONST_INITIALIZER("start", 5, 5),
      SCM_STRING_CONST_INITIALIZER("end", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<string>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("string-append", 13, 13),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string-copy-immutable", 21, 21),
      SCM_STRING_CONST_INITIALIZER(" ", 1, 1),
      SCM_STRING_CONST_INITIALIZER("infix", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string-join", 11, 11),
      SCM_STRING_CONST_INITIALIZER("prefix", 6, 6),
      SCM_STRING_CONST_INITIALIZER("suffix", 6, 6),
      SCM_STRING_CONST_INITIALIZER("strict-infix", 12, 12),
      SCM_STRING_CONST_INITIALIZER("strs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("delim", 5, 5),
      SCM_STRING_CONST_INITIALIZER("grammar", 7, 7),
      SCM_STRING_CONST_INITIALIZER("<list>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string-interpolate", 18, 18),
      SCM_STRING_CONST_INITIALIZER("define-reader-ctor", 18, 18),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("string->list", 12, 12),
      SCM_STRING_CONST_INITIALIZER("list->string", 12, 12),
      SCM_STRING_CONST_INITIALIZER("list", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string-length", 13, 13),
      SCM_STRING_CONST_INITIALIZER("string-ref", 10, 10),
      SCM_STRING_CONST_INITIALIZER("k", 1, 1),
      SCM_STRING_CONST_INITIALIZER("fallback", 8, 8),
      SCM_STRING_CONST_INITIALIZER("substring", 9, 9),
      SCM_STRING_CONST_INITIALIZER("string-size", 11, 11),
      SCM_STRING_CONST_INITIALIZER("opt-substring", 13, 13),
      SCM_STRING_CONST_INITIALIZER("%hash-string", 12, 12),
      SCM_STRING_CONST_INITIALIZER("bound", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<ulong>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("both", 4, 4),
      SCM_STRING_CONST_INITIALIZER("after*", 6, 6),
      SCM_STRING_CONST_INITIALIZER("before*", 7, 7),
      SCM_STRING_CONST_INITIALIZER("after", 5, 5),
      SCM_STRING_CONST_INITIALIZER("before", 6, 6),
      SCM_STRING_CONST_INITIALIZER("cursor", 6, 6),
      SCM_STRING_CONST_INITIALIZER("index", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string-scan", 11, 11),
      SCM_STRING_CONST_INITIALIZER("s1", 2, 2),
      SCM_STRING_CONST_INITIALIZER("s2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("mode", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string-scan-right", 17, 17),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("string-split", 12, 12),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("splitter", 8, 8),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("limit", 5, 5),
      SCM_STRING_CONST_INITIALIZER("if", 2, 2),
      SCM_STRING_CONST_INITIALIZER("or", 2, 2),
      SCM_STRING_CONST_INITIALIZER("not", 3, 3),
      SCM_STRING_CONST_INITIALIZER("integer\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("with-module", 11, 11),
      SCM_STRING_CONST_INITIALIZER("%string-split", 13, 13),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%string-split-by-char", 21, 21),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("ch", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<char>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("grammar argument must be one of (infix strict-infix prefix suffix), but got", 75, 75),
      SCM_STRING_CONST_INITIALIZER("limit argument must be a nonnegative integer or #f, but got", 59, 59),
      SCM_STRING_CONST_INITIALIZER("", 0, 0),
      SCM_STRING_CONST_INITIALIZER("equal\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string must not be empty with strict-infix grammar", 50, 50),
      SCM_STRING_CONST_INITIALIZER("%string-split-scanner", 21, 21),
      SCM_STRING_CONST_INITIALIZER("%string-split-by-scanner", 24, 24),
      SCM_STRING_CONST_INITIALIZER("last-pair", 9, 9),
      SCM_STRING_CONST_INITIALIZER("drop-right", 10, 10),
      SCM_STRING_CONST_INITIALIZER("string=\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("char-set\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("char-set-contains\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("G2160", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%string-split-scanner-each-char", 31, 31),
      SCM_STRING_CONST_INITIALIZER("regexp\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("rxmatch", 7, 7),
      SCM_STRING_CONST_INITIALIZER("string-cursor-start", 19, 19),
      SCM_STRING_CONST_INITIALIZER("string-cursor-end", 17, 17),
      SCM_STRING_CONST_INITIALIZER("string-cursor=\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("string-cursor-next", 18, 18),
      SCM_STRING_CONST_INITIALIZER("pred", 4, 4),
      SCM_STRING_CONST_INITIALIZER("reverse!", 8, 8),
      SCM_STRING_CONST_INITIALIZER("scanner", 7, 7),
      SCM_STRING_CONST_INITIALIZER("%string-replace-body!", 21, 21),
      SCM_STRING_CONST_INITIALIZER("target", 6, 6),
      SCM_STRING_CONST_INITIALIZER("source", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string-set!", 11, 11),
      SCM_STRING_CONST_INITIALIZER("bad type of argument for ~s: ~s", 31, 31),
      SCM_STRING_CONST_INITIALIZER("arg", 3, 3),
      SCM_STRING_CONST_INITIALIZER("errorf", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string-index->cursor", 20, 20),
      SCM_STRING_CONST_INITIALIZER("setter", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string-byte-set!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("exact\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("private\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("open-output-string", 18, 18),
      SCM_STRING_CONST_INITIALIZER("string index out of range:", 26, 26),
      SCM_STRING_CONST_INITIALIZER("byte-substring", 14, 14),
      SCM_STRING_CONST_INITIALIZER("display", 7, 7),
      SCM_STRING_CONST_INITIALIZER("write-byte", 10, 10),
      SCM_STRING_CONST_INITIALIZER("get-output-byte-string", 22, 22),
      SCM_STRING_CONST_INITIALIZER("b", 1, 1),
      SCM_STRING_CONST_INITIALIZER("string-byte-ref", 15, 15),
      SCM_STRING_CONST_INITIALIZER("string-fill!", 12, 12),
      SCM_STRING_CONST_INITIALIZER("let", 3, 3),
      SCM_STRING_CONST_INITIALIZER("istart", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string-cursor->index", 20, 20),
      SCM_STRING_CONST_INITIALIZER("iend", 4, 4),
      SCM_STRING_CONST_INITIALIZER("when", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<", 1, 1),
      SCM_STRING_CONST_INITIALIZER("end index ~s is smaller than start index ~s", 43, 43),
      SCM_STRING_CONST_INITIALIZER("and", 3, 3),
      SCM_STRING_CONST_INITIALIZER("=", 1, 1),
      SCM_STRING_CONST_INITIALIZER("-", 1, 1),
      SCM_STRING_CONST_INITIALIZER("string-build-index!", 19, 19),
      SCM_STRING_CONST_INITIALIZER("string-fast-indexable\077", 22, 22),
      SCM_STRING_CONST_INITIALIZER("%string-index-dump", 18, 18),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ss", 2, 2),
      SCM_STRING_CONST_INITIALIZER("string<\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("string>\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("string<=\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("string>=\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("string-ci=\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("string-ci<\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("string-ci>\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("string-ci<=\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("string-ci>=\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("%string-map-dispatch", 20, 20),
      SCM_STRING_CONST_INITIALIZER("G2172", 5, 5),
      SCM_STRING_CONST_INITIALIZER("Too many arguments for SRFI-13 style ~a", 39, 39),
      SCM_STRING_CONST_INITIALIZER("string-cursor\077", 14, 14),
      SCM_STRING_CONST_INITIALIZER("Integer or string-cursor expected, but got:", 43, 43),
      SCM_STRING_CONST_INITIALIZER("find", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string expected, but got:", 25, 25),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("proc-single", 11, 11),
      SCM_STRING_CONST_INITIALIZER("proc-multi", 10, 10),
      SCM_STRING_CONST_INITIALIZER("string-cursor-prev", 18, 18),
      SCM_STRING_CONST_INITIALIZER("string-map", 10, 10),
      SCM_STRING_CONST_INITIALIZER("string-map-1", 12, 12),
      SCM_STRING_CONST_INITIALIZER("map", 3, 3),
      SCM_STRING_CONST_INITIALIZER("any", 3, 3),
      SCM_STRING_CONST_INITIALIZER("string-map-n", 12, 12),
      SCM_STRING_CONST_INITIALIZER("string-for-each", 15, 15),
      SCM_STRING_CONST_INITIALIZER("string-for-each-1", 17, 17),
      SCM_STRING_CONST_INITIALIZER("string-for-each-n", 17, 17),
      SCM_STRING_CONST_INITIALIZER("string-incomplete->complete!", 28, 28),
      SCM_STRING_CONST_INITIALIZER("string-incomplete->complete", 27, 27),
      SCM_STRING_CONST_INITIALIZER("string-complete->incomplete", 27, 27),
      SCM_STRING_CONST_INITIALIZER("replace", 7, 7),
      SCM_STRING_CONST_INITIALIZER("omit", 4, 4),
      SCM_STRING_CONST_INITIALIZER("escape", 6, 6),
      SCM_STRING_CONST_INITIALIZER("handling", 8, 8),
      SCM_STRING_CONST_INITIALIZER("filler", 6, 6),
      SCM_STRING_CONST_INITIALIZER("make-byte-string", 16, 16),
      SCM_STRING_CONST_INITIALIZER("size", 4, 4),
      SCM_STRING_CONST_INITIALIZER("byte", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<int32>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("complete-sexp\077", 14, 14),
      SCM_STRING_CONST_INITIALIZER("skip-token", 10, 10),
      SCM_STRING_CONST_INITIALIZER("unreadable sequence #<~a...", 27, 27),
      SCM_STRING_CONST_INITIALIZER("read-block", 10, 10),
      SCM_STRING_CONST_INITIALIZER("rec", 3, 3),
      SCM_STRING_CONST_INITIALIZER("G2177", 5, 5),
      SCM_STRING_CONST_INITIALIZER("closer", 6, 6),
      SCM_STRING_CONST_INITIALIZER("rec-escaped", 11, 11),
      SCM_STRING_CONST_INITIALIZER("with-input-from-string", 22, 22),
      SCM_STRING_CONST_INITIALIZER("string-cursor-forward", 21, 21),
      SCM_STRING_CONST_INITIALIZER("nchars", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string-cursor-back", 18, 18),
      SCM_STRING_CONST_INITIALIZER("cursor1", 7, 7),
      SCM_STRING_CONST_INITIALIZER("cursor2", 7, 7),
      SCM_STRING_CONST_INITIALIZER("string-cursor<\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("string-cursor>\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("string-cursor<=\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("string-cursor>=\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("string-cursor-diff", 18, 18),
      SCM_STRING_CONST_INITIALIZER("G2155", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2159", 5, 5),
      SCM_STRING_CONST_INITIALIZER("undefined", 9, 9),
      SCM_STRING_CONST_INITIALIZER("G2158", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2157", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2156", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2154", 8, 8),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("pair\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("char\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("case", 4, 4),
      SCM_STRING_CONST_INITIALIZER(">=", 2, 2),
      SCM_STRING_CONST_INITIALIZER("memq", 4, 4),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<=", 2, 2),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("m", 1, 1),
      SCM_STRING_CONST_INITIALIZER("tmp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("=>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("^m", 2, 2),
      SCM_STRING_CONST_INITIALIZER("^s", 2, 2),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("G2161", 5, 5),
      SCM_STRING_CONST_INITIALIZER("scan-in", 7, 7),
      SCM_STRING_CONST_INITIALIZER("cur", 3, 3),
      SCM_STRING_CONST_INITIALIZER("scan-out", 8, 8),
      SCM_STRING_CONST_INITIALIZER("cursor-substr", 13, 13),
      SCM_STRING_CONST_INITIALIZER("zero\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("check-arg", 9, 9),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("out", 3, 3),
      SCM_STRING_CONST_INITIALIZER("siz", 3, 3),
      SCM_STRING_CONST_INITIALIZER("G2163", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2165", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2164", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2162", 8, 8),
      SCM_STRING_CONST_INITIALIZER("bad", 3, 3),
      SCM_STRING_CONST_INITIALIZER("if-let1", 7, 7),
      SCM_STRING_CONST_INITIALIZER("lst", 3, 3),
      SCM_STRING_CONST_INITIALIZER("curs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("reverse", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ends", 4, 4),
      SCM_STRING_CONST_INITIALIZER("G2173", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2174", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2175", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2176", 5, 5),
      SCM_STRING_CONST_INITIALIZER("and-let1", 8, 8),
      SCM_STRING_CONST_INITIALIZER("peek-char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("read-char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("special-chars", 13, 13),
      SCM_STRING_CONST_INITIALIZER("eof-object\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("eqv\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("c2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("G2178", 5, 5),
      SCM_STRING_CONST_INITIALIZER("c3", 2, 2),
      SCM_STRING_CONST_INITIALIZER("skip-ws", 7, 7),
      SCM_STRING_CONST_INITIALIZER("skip-to-nl", 10, 10),
  },
};
static struct scm__rcRec {
  ScmUVector d2153[44];
  ScmCompiledCode d2152[44];
  ScmWord d2151[1930];
  ScmPair d2150[794] SCM_ALIGN_PAIR;
  ScmObj d2149[886];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2153 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 29, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 26, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 485, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 87, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 606, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 186, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 107, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 99, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 290, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 309, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 194, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 550, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 145, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 165, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 204, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 95, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 276, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 80, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 33, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 508, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 122, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 33, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 621, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 139, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00026, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 603, uvector__00027, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 197, uvector__00028, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 247, uvector__00029, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 292, uvector__00030, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 207, uvector__00031, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 201, uvector__00032, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 193, uvector__00033, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 253, uvector__00034, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 180, uvector__00035, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 174, uvector__00036, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 94, uvector__00037, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 55, uvector__00038, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 92, uvector__00039, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 1593, uvector__00040, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 156, uvector__00041, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 561, uvector__00042, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 568, uvector__00043, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 580, uvector__00044, 0, NULL),
  },
  {   /* ScmCompiledCode d2152 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[0])), 5,
            2, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[97]),
            SCM_OBJ(&scm__rc.d2152[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[5])), 7,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* string-split */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[12])), 110,
            32, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[234]),
            SCM_OBJ(&scm__rc.d2152[3]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[122])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %string-split */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[137])), 159,
            27, 6, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[255]),
            SCM_OBJ(&scm__rc.d2152[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[296])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (%string-split-scanner %string-split-scanner) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[311])), 26,
            13, 1, 0, SCM_OBJ(&scm__rc.d2150[257]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[263]),
            SCM_OBJ(&scm__rc.d2152[11]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %string-split-scanner */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[337])), 18,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[269]),
            SCM_OBJ(&scm__rc.d2152[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[355])), 5,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[276]),
            SCM_OBJ(&scm__rc.d2152[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %string-split-scanner */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[360])), 63,
            22, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[281]),
            SCM_OBJ(&scm__rc.d2152[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %string-split-scanner */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[423])), 43,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[287]),
            SCM_OBJ(&scm__rc.d2152[11]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[466])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %string-split-scanner-each-char */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[483])), 131,
            46, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[294]),
            SCM_OBJ(&scm__rc.d2152[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %string-split-scanner-each-char */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[614])), 3,
            0, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[300]),
            SCM_OBJ(&scm__rc.d2152[14]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[617])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %string-split-by-scanner */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[632])), 37,
            24, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[307]),
            SCM_OBJ(&scm__rc.d2152[16]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[669])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* string-set! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[684])), 68,
            30, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[325]),
            SCM_OBJ(&scm__rc.d2152[18]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[752])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[767])), 9,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* string-byte-set! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[776])), 143,
            26, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[333]),
            SCM_OBJ(&scm__rc.d2152[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[919])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[934])), 9,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* string-fill! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[943])), 141,
            39, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[414]),
            SCM_OBJ(&scm__rc.d2152[24]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1084])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (%string-map-dispatch #:G2172) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1099])), 4,
            0, 1, 0, SCM_OBJ(&scm__rc.d2150[527]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[532]),
            SCM_OBJ(&scm__rc.d2152[27]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %string-map-dispatch */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1103])), 117,
            13, 6, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[544]),
            SCM_OBJ(&scm__rc.d2152[27]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1220])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (string-map string-map-1) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1237])), 52,
            39, 2, 0, SCM_OBJ(&scm__rc.d2150[546]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[549]),
            SCM_OBJ(&scm__rc.d2152[31]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (string-map string-map-n) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1289])), 60,
            38, 1, 1, SCM_OBJ(&scm__rc.d2150[551]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[554]),
            SCM_OBJ(&scm__rc.d2152[31]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* string-map */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1349])), 10,
            9, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[563]),
            SCM_OBJ(&scm__rc.d2152[31]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1359])), 17,
            15, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (string-for-each string-for-each-1) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1376])), 43,
            34, 2, 0, SCM_OBJ(&scm__rc.d2150[565]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[567]),
            SCM_OBJ(&scm__rc.d2152[35]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (string-for-each string-for-each-n) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1419])), 52,
            37, 1, 1, SCM_OBJ(&scm__rc.d2150[569]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[571]),
            SCM_OBJ(&scm__rc.d2152[35]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* string-for-each */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1471])), 10,
            9, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[578]),
            SCM_OBJ(&scm__rc.d2152[35]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1481])), 17,
            15, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* string-incomplete->complete! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1498])), 15,
            16, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[583]),
            SCM_OBJ(&scm__rc.d2152[37]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1513])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (complete-sexp? skip-token) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1528])), 24,
            23, 0, 0, SCM_OBJ(&scm__rc.d2150[635]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[637]),
            SCM_OBJ(&scm__rc.d2152[43]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* rec */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1552])), 322,
            31, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[644]),
            SCM_OBJ(&scm__rc.d2152[41]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* rec-escaped */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1874])), 26,
            8, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[648]),
            SCM_OBJ(&scm__rc.d2152[41]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (complete-sexp? #:G2177) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1900])), 8,
            10, 0, 0, SCM_OBJ(&scm__rc.d2150[639]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[656]),
            SCM_OBJ(&scm__rc.d2152[43]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* complete-sexp? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1908])), 5,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[663]),
            SCM_OBJ(&scm__rc.d2152[43]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1913])), 17,
            15, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2151 */
    /* #f */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-interpolate */,
    0x0000003d    /*   2 (LREF0) */,
    0x00002095    /*   3 (TAIL-APPLY 2) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-interpolate */,
    0x00000016    /*   2 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[0])) /* #<compiled-code #f@0x7cf64c00af00> */,
    0x00002063    /*   4 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* define-reader-ctor */,
    0x00000014    /*   6 (RET) */,
    /* string-split */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 7),
    0x00000001    /*   3 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* infix */,
    0x00000013    /*   5 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 8),
    0x0000006a    /*   7 (LREF0-CAR) */,
    0x0000000d    /*   8 (PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 15),
    0x00000003    /*  12 (CONSTN) */,
    0x00000013    /*  13 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 16),
    0x00000076    /*  15 (LREF0-CDR) */,
    0x00002018    /*  16 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  17 (LREF0) */,
    0x00000022    /*  18 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 23),
    0x00000004    /*  20 (CONSTF) */,
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 24),
    0x0000006a    /*  23 (LREF0-CAR) */,
    0x0000000d    /*  24 (PUSH) */,
    0x0000003d    /*  25 (LREF0) */,
    0x00000022    /*  26 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 31),
    0x00000003    /*  28 (CONSTN) */,
    0x00000013    /*  29 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 32),
    0x00000076    /*  31 (LREF0-CDR) */,
    0x00002018    /*  32 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  33 (LREF0) */,
    0x00000022    /*  34 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 39),
    0x00000005    /*  36 (CONSTU) */,
    0x00000013    /*  37 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 40),
    0x0000006a    /*  39 (LREF0-CAR) */,
    0x0000000d    /*  40 (PUSH) */,
    0x0000003d    /*  41 (LREF0) */,
    0x00000022    /*  42 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 47),
    0x00000003    /*  44 (CONSTN) */,
    0x00000013    /*  45 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 48),
    0x00000076    /*  47 (LREF0-CDR) */,
    0x00002018    /*  48 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  49 (LREF0) */,
    0x00000022    /*  50 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 55),
    0x00000005    /*  52 (CONSTU) */,
    0x00000013    /*  53 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 56),
    0x0000006a    /*  55 (LREF0-CAR) */,
    0x0000000d    /*  56 (PUSH) */,
    0x0000003d    /*  57 (LREF0) */,
    0x00000022    /*  58 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 63),
    0x00000003    /*  60 (CONSTN) */,
    0x00000013    /*  61 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 64),
    0x00000076    /*  63 (LREF0-CDR) */,
    0x00002018    /*  64 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  65 (LREF0) */,
    0x00000022    /*  66 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 70),
    0x00000013    /*  68 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 78),
    0x0000200e    /*  70 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 78),
    0x00000006    /*  72 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[71])) /* "too many arguments for" */,
    0x00000006    /*  74 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[229])) /* (lambda (string splitter :optional (grammar 'infix) (limit #f) start end) (if (or (not grammar) (integer? grammar)) ((with-module gauche.internal %string-split) string splitter 'infix grammar limit start) ((with-module gauche.internal %string-split) string splitter grammar limit start end))) */,
    0x0000205f    /*  76 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0040303c    /*  78 (LREF 3 1) */,
    0x0000001e    /*  79 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 88),
    0x0000100e    /*  81 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 86),
    0x00403047    /*  83 (LREF-PUSH 3 1) */,
    0x0000105f    /*  84 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  86 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 98),
    0x00804047    /*  88 (LREF-PUSH 4 2) */,
    0x00404047    /*  89 (LREF-PUSH 4 1) */,
    0x00000006    /*  90 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* infix */,
    0x00403047    /*  92 (LREF-PUSH 3 1) */,
    0x00000050    /*  93 (LREF21-PUSH) */,
    0x0000004d    /*  94 (LREF11-PUSH) */,
    0x00006060    /*  95 (GREF-TAIL-CALL 6) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split */,
    0x00000014    /*  97 (RET) */,
    0x00804047    /*  98 (LREF-PUSH 4 2) */,
    0x00404047    /*  99 (LREF-PUSH 4 1) */,
    0x00403047    /* 100 (LREF-PUSH 3 1) */,
    0x00000050    /* 101 (LREF21-PUSH) */,
    0x0000004d    /* 102 (LREF11-PUSH) */,
    0x00000049    /* 103 (LREF1-PUSH) */,
    0x00006060    /* 104 (GREF-TAIL-CALL 6) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split */,
    0x00000014    /* 106 (RET) */,
    0x00000013    /* 107 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]) + 88),
    0x00000014    /* 109 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[122]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* string-split */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[122]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[2])) /* #<compiled-code string-split@0x7cf64c16f600> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* string-split */,
    0x00000014    /*  14 (RET) */,
    /* %string-split */
    0x0000004b    /*   0 (LREF3-PUSH) */,
    0x00000001    /*   1 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[250])) /* (infix strict-infix prefix suffix) */,
    0x0000008b    /*   3 (MEMQ) */,
    0x0000001e    /*   4 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 8),
    0x00000013    /*   6 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 15),
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 15),
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[87])) /* "grammar argument must be one of (infix strict-infix prefix suffix), but got" */,
    0x0000004b    /*  12 (LREF3-PUSH) */,
    0x0000205f    /*  13 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000003f    /*  15 (LREF2) */,
    0x0000001e    /*  16 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 43),
    0x0000100e    /*  18 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 23),
    0x0000004a    /*  20 (LREF2-PUSH) */,
    0x0000105f    /*  21 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  23 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 30),
    0x00000002    /*  25 (CONSTI 0) */,
    0x0080002c    /*  26 (LREF-VAL0-BNGE 0 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 30),
    0x00000013    /*  28 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 43),
    0x0000200e    /*  30 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 43),
    0x00000006    /*  32 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[88])) /* "limit argument must be a nonnegative integer or #f, but got" */,
    0x0000004a    /*  34 (LREF2-PUSH) */,
    0x0000205f    /*  35 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /*  37 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 43),
    0x00000013    /*  39 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 30),
    0x00000013    /*  41 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 43),
    0x0000300e    /*  43 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 50),
    0x01400047    /*  45 (LREF-PUSH 0 5) */,
    0x00000049    /*  46 (LREF1-PUSH) */,
    0x00000048    /*  47 (LREF0-PUSH) */,
    0x0000305f    /*  48 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* opt-substring */,
    0x00001018    /*  50 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  51 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 58),
    0x00000048    /*  53 (LREF0-PUSH) */,
    0x00000006    /*  54 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[89])) /* "" */,
    0x0000205f    /*  56 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  58 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 71),
    0x00c0103c    /*  60 (LREF 1 3) */,
    0x0000002e    /*  61 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* strict-infix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 69)  /*     69 */,
    0x00000006    /*  64 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[91])) /* "string must not be empty with strict-infix grammar" */,
    0x00001060    /*  66 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  68 (RET) */,
    0x00000003    /*  69 (CONSTN) */,
    0x00000014    /*  70 (RET) */,
    0x0100103c    /*  71 (LREF 1 4) */,
    0x00000099    /*  72 (CHARP) */,
    0x0000001e    /*  73 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 89),
    0x0000300e    /*  75 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 106),
    0x00000048    /*  77 (LREF0-PUSH) */,
    0x01001047    /*  78 (LREF-PUSH 1 4) */,
    0x00000043    /*  79 (LREF12) */,
    0x0000001e    /*  80 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 84),
    0x00000013    /*  82 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 85),
    -0x00000ffe   /*  84 (CONSTI -1) */,
    0x00003062    /*  85 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-by-char */,
    0x00000013    /*  87 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 106),
    0x0000300e    /*  89 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 106),
    0x00000048    /*  91 (LREF0-PUSH) */,
    0x0000100e    /*  92 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 97),
    0x01001047    /*  94 (LREF-PUSH 1 4) */,
    0x0000105f    /*  95 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-scanner */,
    0x0000000d    /*  97 (PUSH) */,
    0x00000043    /*  98 (LREF12) */,
    0x0000001e    /*  99 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 103),
    0x00000013    /* 101 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 104),
    -0x00000ffe   /* 103 (CONSTI -1) */,
    0x00003062    /* 104 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-by-scanner */,
    0x00001018    /* 106 (PUSH-LOCAL-ENV 1) */,
    0x00c0203c    /* 107 (LREF 2 3) */,
    0x0000002e    /* 108 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* prefix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 129)  /*    129 */,
    0x0000003d    /* 111 (LREF0) */,
    0x00000098    /* 112 (PAIRP) */,
    0x0000001e    /* 113 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 128),
    0x0000200e    /* 115 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 123),
    0x0000006a    /* 117 (LREF0-CAR) */,
    0x0000000d    /* 118 (PUSH) */,
    0x00000006    /* 119 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[89])) /* "" */,
    0x0000205f    /* 121 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /* 123 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 127),
    0x00000076    /* 125 (LREF0-CDR) */,
    0x00000014    /* 126 (RET) */,
    0x00000053    /* 127 (LREF0-RET) */,
    0x00000053    /* 128 (LREF0-RET) */,
    0x00c0203c    /* 129 (LREF 2 3) */,
    0x0000002e    /* 130 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* suffix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 158)  /*    158 */,
    0x0000003d    /* 133 (LREF0) */,
    0x00000098    /* 134 (PAIRP) */,
    0x0000001e    /* 135 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 157),
    0x0000200e    /* 137 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 149),
    0x0000100e    /* 139 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 144),
    0x00000048    /* 141 (LREF0-PUSH) */,
    0x0000105f    /* 142 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* last-pair */,
    0x00000069    /* 144 (CAR-PUSH) */,
    0x00000006    /* 145 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[89])) /* "" */,
    0x0000205f    /* 147 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /* 149 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]) + 156),
    0x00000048    /* 151 (LREF0-PUSH) */,
    0x00001007    /* 152 (CONSTI-PUSH 1) */,
    0x00002060    /* 153 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* drop-right */,
    0x00000014    /* 155 (RET) */,
    0x00000053    /* 156 (LREF0-RET) */,
    0x00000053    /* 157 (LREF0-RET) */,
    0x00000053    /* 158 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[4])) /* #<compiled-code %string-split@0x7cf64b97a000> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split */,
    0x00000014    /*  14 (RET) */,
    /* (%string-split-scanner %string-split-scanner) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[311]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-length */,
    0x0000000d    /*   5 (PUSH) */,
    0x00001002    /*   6 (CONSTI 1) */,
    0x00000025    /*   7 (BNLE) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[311]) + 12),
    0x00000048    /*   9 (LREF0-PUSH) */,
    0x00000004    /*  10 (CONSTF) */,
    0x000020a3    /*  11 (VALUES-RET 2) */,
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[311]) + 19),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x00000007    /*  15 (CONSTI-PUSH 0) */,
    0x00001007    /*  16 (CONSTI-PUSH 1) */,
    0x0000305f    /*  17 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-copy */,
    0x0000200f    /*  19 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[311]) + 25),
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x00001007    /*  22 (CONSTI-PUSH 1) */,
    0x0000205f    /*  23 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-copy */,
    0x000020a3    /*  25 (VALUES-RET 2) */,
    /* (%string-split-scanner %string-split-scanner) */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[337]) + 8),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000004c    /*   3 (LREF10-PUSH) */,
    0x00000006    /*   4 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* both */,
    0x0000305f    /*   6 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-scan */,
    0x00002036    /*   8 (TAIL-RECEIVE 2 0) */,
    0x0000003e    /*   9 (LREF1) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[337]) + 15),
    0x00000049    /*  12 (LREF1-PUSH) */,
    0x0000003d    /*  13 (LREF0) */,
    0x000020a3    /*  14 (VALUES-RET 2) */,
    0x0000004c    /*  15 (LREF10-PUSH) */,
    0x00000004    /*  16 (CONSTF) */,
    0x000020a3    /*  17 (VALUES-RET 2) */,
    /* (%string-split-scanner #f) */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x00000048    /*   1 (LREF0-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-contains? */,
    0x00000014    /*   4 (RET) */,
    /* (%string-split-scanner %string-split-scanner) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 6),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x00001018    /*   6 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   7 (LREF0) */,
    0x0000001e    /*   8 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 60),
    0x0000100e    /*  10 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 16),
    0x00000006    /*  12 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* before */,
    0x0000003d    /*  14 (LREF0) */,
    0x00001011    /*  15 (CALL 1) */,
    0x0000100f    /*  16 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 22),
    0x00000006    /*  18 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* after */,
    0x0000003d    /*  20 (LREF0) */,
    0x00001011    /*  21 (CALL 1) */,
    0x00002018    /*  22 (PUSH-LOCAL-ENV 2) */,
    0x0000200e    /*  23 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 29),
    0x0000004f    /*  25 (LREF20-PUSH) */,
    0x00000048    /*  26 (LREF0-PUSH) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string=? */,
    0x0000001e    /*  29 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 57),
    0x0000100e    /*  31 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 36),
    0x0000004f    /*  33 (LREF20-PUSH) */,
    0x0000105f    /*  34 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-length */,
    0x0000000d    /*  36 (PUSH) */,
    0x00001002    /*  37 (CONSTI 1) */,
    0x00000025    /*  38 (BNLE) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 43),
    0x0000004f    /*  40 (LREF20-PUSH) */,
    0x00000004    /*  41 (CONSTF) */,
    0x000020a3    /*  42 (VALUES-RET 2) */,
    0x0000300e    /*  43 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 50),
    0x0000004f    /*  45 (LREF20-PUSH) */,
    0x00000007    /*  46 (CONSTI-PUSH 0) */,
    0x00001007    /*  47 (CONSTI-PUSH 1) */,
    0x0000305f    /*  48 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-copy */,
    0x0000200f    /*  50 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]) + 56),
    0x0000004f    /*  52 (LREF20-PUSH) */,
    0x00001007    /*  53 (CONSTI-PUSH 1) */,
    0x0000205f    /*  54 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-copy */,
    0x000020a3    /*  56 (VALUES-RET 2) */,
    0x00000049    /*  57 (LREF1-PUSH) */,
    0x0000003d    /*  58 (LREF0) */,
    0x000020a3    /*  59 (VALUES-RET 2) */,
    0x0000004c    /*  60 (LREF10-PUSH) */,
    0x00000004    /*  61 (CONSTF) */,
    0x000020a3    /*  62 (VALUES-RET 2) */,
    /* %string-split-scanner */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009b    /*   1 (STRINGP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]) + 17),
    0x0000200e    /*   4 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]) + 11),
    0x00000048    /*   6 (LREF0-PUSH) */,
    0x00000006    /*   7 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[89])) /* "" */,
    0x0000205f    /*   9 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string=? */,
    0x0000001e    /*  11 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]) + 14),
    0x00000057    /*  13 (LREF10-RET) */,
    0x00000016    /*  14 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[7])) /* #<compiled-code (%string-split-scanner %string-split-scanner)@0x7cf64b8fe600> */,
    0x00000014    /*  16 (RET) */,
    0x0000100e    /*  17 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]) + 22),
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x0000105f    /*  20 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set? */,
    0x0000001e    /*  22 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]) + 29),
    0x00000016    /*  24 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[8])) /* #<compiled-code (%string-split-scanner #f)@0x7cf64b8fe5a0> */,
    0x00001063    /*  26 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-scanner-each-char */,
    0x00000014    /*  28 (RET) */,
    0x0000100e    /*  29 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]) + 34),
    0x00000048    /*  31 (LREF0-PUSH) */,
    0x0000105f    /*  32 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp? */,
    0x0000001e    /*  34 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]) + 39),
    0x00000016    /*  36 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[9])) /* #<compiled-code (%string-split-scanner %string-split-scanner)@0x7cf64b8fe540> */,
    0x00000014    /*  38 (RET) */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x00001060    /*  40 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-scanner-each-char */,
    0x00000014    /*  42 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[264])) /* (#<compiled-code (%string-split-scanner %string-split-scanner)@0x7cf64b8fe6c0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[466]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-scanner */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[466]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[10])) /* #<compiled-code %string-split-scanner@0x7cf64b8fe660> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-scanner */,
    0x00000014    /*  16 (RET) */,
    /* (%string-split-scanner-each-char %string-split-scanner-each-char) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000100e    /*   1 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 6),
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000105f    /*   4 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-start */,
    0x0000100f    /*   6 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 11),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-end */,
    0x00003018    /*  11 (PUSH-LOCAL-ENV 3) */,
    0x0000200e    /*  12 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 18),
    0x00000049    /*  14 (LREF1-PUSH) */,
    0x00000048    /*  15 (LREF0-PUSH) */,
    0x0000205f    /*  16 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor=? */,
    0x0000001e    /*  18 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 35),
    0x0000300e    /*  20 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 32),
    0x0000004a    /*  22 (LREF2-PUSH) */,
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 28),
    0x0000004a    /*  25 (LREF2-PUSH) */,
    0x0000105f    /*  26 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-start */,
    0x0000000d    /*  28 (PUSH) */,
    0x00000049    /*  29 (LREF1-PUSH) */,
    0x0000305f    /*  30 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* substring */,
    0x0000000d    /*  32 (PUSH) */,
    0x00000004    /*  33 (CONSTF) */,
    0x000020a3    /*  34 (VALUES-RET 2) */,
    0x0000100e    /*  35 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 46),
    0x0000200e    /*  37 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 43),
    0x0000004a    /*  39 (LREF2-PUSH) */,
    0x00000049    /*  40 (LREF1-PUSH) */,
    0x0000205f    /*  41 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x0000000d    /*  43 (PUSH) */,
    0x00000044    /*  44 (LREF20) */,
    0x00001011    /*  45 (CALL 1) */,
    0x0000001e    /*  46 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 118),
    0x0000004a    /*  48 (LREF2-PUSH) */,
    0x0000200e    /*  49 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 55),
    0x0000004a    /*  51 (LREF2-PUSH) */,
    0x00000049    /*  52 (LREF1-PUSH) */,
    0x0000205f    /*  53 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-next */,
    0x0000000d    /*  55 (PUSH) */,
    0x00000048    /*  56 (LREF0-PUSH) */,
    0x0000300e    /*  57 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 69),
    0x0000004a    /*  59 (LREF2-PUSH) */,
    0x0000100e    /*  60 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 65),
    0x0000004a    /*  62 (LREF2-PUSH) */,
    0x0000105f    /*  63 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-start */,
    0x0000000d    /*  65 (PUSH) */,
    0x00000049    /*  66 (LREF1-PUSH) */,
    0x0000305f    /*  67 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* substring */,
    0x00004018    /*  69 (PUSH-LOCAL-ENV 4) */,
    0x0000200e    /*  70 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 76),
    0x0000004a    /*  72 (LREF2-PUSH) */,
    0x00000049    /*  73 (LREF1-PUSH) */,
    0x0000205f    /*  74 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor=? */,
    0x0000001e    /*  76 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 82),
    0x00000048    /*  78 (LREF0-PUSH) */,
    0x00000001    /*  79 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[89])) /* "" */,
    0x000020a3    /*  81 (VALUES-RET 2) */,
    0x0000100e    /*  82 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 93),
    0x0000200e    /*  84 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 90),
    0x0000004b    /*  86 (LREF3-PUSH) */,
    0x0000004a    /*  87 (LREF2-PUSH) */,
    0x0000205f    /*  88 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x0000000d    /*  90 (PUSH) */,
    0x00000046    /*  91 (LREF30) */,
    0x00001011    /*  92 (CALL 1) */,
    0x0000001e    /*  93 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 108),
    0x0000004b    /*  95 (LREF3-PUSH) */,
    0x0000200e    /*  96 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 102),
    0x0000004b    /*  98 (LREF3-PUSH) */,
    0x0000004a    /*  99 (LREF2-PUSH) */,
    0x0000205f    /* 100 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-next */,
    0x0000000d    /* 102 (PUSH) */,
    0x00000049    /* 103 (LREF1-PUSH) */,
    0x00000048    /* 104 (LREF0-PUSH) */,
    0x0000101b    /* 105 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 70),
    0x00000014    /* 107 (RET) */,
    0x00000048    /* 108 (LREF0-PUSH) */,
    0x0000300e    /* 109 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 116),
    0x0000004b    /* 111 (LREF3-PUSH) */,
    0x0000004a    /* 112 (LREF2-PUSH) */,
    0x00000049    /* 113 (LREF1-PUSH) */,
    0x0000305f    /* 114 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* substring */,
    0x000020a3    /* 116 (VALUES-RET 2) */,
    0x00000014    /* 117 (RET) */,
    0x0000004a    /* 118 (LREF2-PUSH) */,
    0x0000200e    /* 119 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 125),
    0x0000004a    /* 121 (LREF2-PUSH) */,
    0x00000049    /* 122 (LREF1-PUSH) */,
    0x0000205f    /* 123 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-next */,
    0x0000000d    /* 125 (PUSH) */,
    0x00000048    /* 126 (LREF0-PUSH) */,
    0x0000101b    /* 127 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]) + 12),
    0x00000014    /* 129 (RET) */,
    0x00000014    /* 130 (RET) */,
    /* %string-split-scanner-each-char */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[12])) /* #<compiled-code (%string-split-scanner-each-char %string-split-scanner-each-char)@0x7cf64da79ba0> */,
    0x00000014    /*   2 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[617]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-scanner-each-char */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[617]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[13])) /* #<compiled-code %string-split-scanner-each-char@0x7cf64da79e40> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-scanner-each-char */,
    0x00000014    /*  14 (RET) */,
    /* %string-split-by-scanner */
    0x0000004a    /*   0 (LREF2-PUSH) */,
    0x00000008    /*   1 (CONSTN-PUSH) */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00003017    /*   3 (LOCAL-ENV 3) */,
    0x0000003d    /*   4 (LREF0) */,
    0x0000002d    /*   5 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[632]) + 13),
    0x0000004a    /*   7 (LREF2-PUSH) */,
    0x0000003e    /*   8 (LREF1) */,
    0x00000067    /*   9 (CONS-PUSH) */,
    0x00001060    /*  10 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* reverse! */,
    0x00000014    /*  12 (RET) */,
    0x0000100e    /*  13 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[632]) + 18),
    0x0000004a    /*  15 (LREF2-PUSH) */,
    0x00000042    /*  16 (LREF11) */,
    0x00001011    /*  17 (CALL 1) */,
    0x00002036    /*  18 (TAIL-RECEIVE 2 0) */,
    0x0000003d    /*  19 (LREF0) */,
    0x0000001e    /*  20 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[632]) + 30),
    0x00000048    /*  22 (LREF0-PUSH) */,
    0x00000049    /*  23 (LREF1-PUSH) */,
    0x00000042    /*  24 (LREF11) */,
    0x00000067    /*  25 (CONS-PUSH) */,
    -0x00000f35   /*  26 (LREF10-NUMADDI-PUSH -1) */,
    0x0000201b    /*  27 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[632]) + 4),
    0x00000014    /*  29 (RET) */,
    0x00000049    /*  30 (LREF1-PUSH) */,
    0x00000042    /*  31 (LREF11) */,
    0x00000067    /*  32 (CONS-PUSH) */,
    0x00001060    /*  33 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* reverse! */,
    0x00000014    /*  35 (RET) */,
    0x00000014    /*  36 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[669]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-by-scanner */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[669]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[15])) /* #<compiled-code %string-split-by-scanner@0x7cf64c6e55a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-split-by-scanner */,
    0x00000014    /*  14 (RET) */,
    /* string-set! */
    0x0000003f    /*   0 (LREF2) */,
    0x0000009b    /*   1 (STRINGP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 6),
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 15),
    0x0000300e    /*   6 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 15),
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[114])) /* "bad type of argument for ~s: ~s" */,
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* arg */,
    0x0000004a    /*  12 (LREF2-PUSH) */,
    0x0000305f    /*  13 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0000003d    /*  15 (LREF0) */,
    0x00000099    /*  16 (CHARP) */,
    0x0000001e    /*  17 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 30),
    0x0000300e    /*  21 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 30),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[114])) /* "bad type of argument for ~s: ~s" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* arg */,
    0x00000048    /*  27 (LREF0-PUSH) */,
    0x0000305f    /*  28 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0000200e    /*  30 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 36),
    0x0000004a    /*  32 (LREF2-PUSH) */,
    0x00000049    /*  33 (LREF1-PUSH) */,
    0x0000205f    /*  34 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-index->cursor */,
    0x00001018    /*  36 (PUSH-LOCAL-ENV 1) */,
    0x0000004e    /*  37 (LREF12-PUSH) */,
    0x0000300e    /*  38 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 65),
    0x0000300e    /*  40 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 47),
    0x0000004e    /*  42 (LREF12-PUSH) */,
    0x00000007    /*  43 (CONSTI-PUSH 0) */,
    0x00000048    /*  44 (LREF0-PUSH) */,
    0x0000305f    /*  45 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* substring */,
    0x0000100f    /*  47 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 52),
    0x0000004c    /*  49 (LREF10-PUSH) */,
    0x0000105f    /*  50 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string */,
    0x0000200f    /*  52 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 63),
    0x0000004e    /*  54 (LREF12-PUSH) */,
    0x0000200e    /*  55 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]) + 61),
    0x0000004e    /*  57 (LREF12-PUSH) */,
    0x0000004d    /*  58 (LREF11-PUSH) */,
    0x0000205f    /*  59 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-next */,
    0x00002062    /*  61 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-copy */,
    0x00003062    /*  63 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00002063    /*  65 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-replace-body! */,
    0x00000014    /*  67 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[752]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* string-set! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[752]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[17])) /* #<compiled-code string-set!@0x7cf64c0de360> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* string-set! */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-set! */,
    0x0000005d    /*   4 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* setter */,
    0x000000a1    /*   6 (SETTER) */,
    0x00002012    /*   7 (TAIL-CALL 2) */,
    0x00000014    /*   8 (RET) */,
    /* string-byte-set! */
    0x0000003f    /*   0 (LREF2) */,
    0x0000009b    /*   1 (STRINGP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 6),
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 15),
    0x0000300e    /*   6 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 15),
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[114])) /* "bad type of argument for ~s: ~s" */,
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* arg */,
    0x0000004a    /*  12 (LREF2-PUSH) */,
    0x0000305f    /*  13 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0000100e    /*  15 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 20),
    0x00000049    /*  17 (LREF1-PUSH) */,
    0x0000105f    /*  18 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  20 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 24),
    0x00000013    /*  22 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 33),
    0x0000300e    /*  24 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 33),
    0x00000006    /*  26 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[114])) /* "bad type of argument for ~s: ~s" */,
    0x00000006    /*  28 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* arg */,
    0x00000049    /*  30 (LREF1-PUSH) */,
    0x0000305f    /*  31 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0000100e    /*  33 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 38),
    0x00000049    /*  35 (LREF1-PUSH) */,
    0x0000105f    /*  36 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /*  38 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 42),
    0x00000013    /*  40 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 51),
    0x0000300e    /*  42 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 51),
    0x00000006    /*  44 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[114])) /* "bad type of argument for ~s: ~s" */,
    0x00000006    /*  46 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* arg */,
    0x00000049    /*  48 (LREF1-PUSH) */,
    0x0000305f    /*  49 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0000100e    /*  51 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 56),
    0x00000048    /*  53 (LREF0-PUSH) */,
    0x0000105f    /*  54 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  56 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 60),
    0x00000013    /*  58 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 69),
    0x0000300e    /*  60 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 69),
    0x00000006    /*  62 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[114])) /* "bad type of argument for ~s: ~s" */,
    0x00000006    /*  64 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* arg */,
    0x00000048    /*  66 (LREF0-PUSH) */,
    0x0000305f    /*  67 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0000100e    /*  69 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 74),
    0x0000004a    /*  71 (LREF2-PUSH) */,
    0x0000105f    /*  72 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-size */,
    0x0000200f    /*  74 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 82),
    0x00000006    /*  76 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :private? */,
    0x00000006    /*  78 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000205f    /*  80 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-string */,
    0x00002018    /*  82 (PUSH-LOCAL-ENV 2) */,
    0x00000002    /*  83 (CONSTI 0) */,
    0x00401029    /*  84 (LREF-VAL0-BNLT 1 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 95),
    0x0000200e    /*  86 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 102),
    0x00000006    /*  88 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[123])) /* "string index out of range:" */,
    0x0000004d    /*  90 (LREF11-PUSH) */,
    0x0000205f    /*  91 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /*  93 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 102),
    0x00000042    /*  95 (LREF11) */,
    0x0040002a    /*  96 (LREF-VAL0-BNLE 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 102),
    0x00000013    /*  98 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 86),
    0x00000013    /* 100 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 102),
    0x0000200e    /* 102 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 115),
    0x0000300e    /* 104 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 111),
    0x0000004e    /* 106 (LREF12-PUSH) */,
    0x00000007    /* 107 (CONSTI-PUSH 0) */,
    0x0000004d    /* 108 (LREF11-PUSH) */,
    0x0000305f    /* 109 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* byte-substring */,
    0x0000000d    /* 111 (PUSH) */,
    0x00000048    /* 112 (LREF0-PUSH) */,
    0x0000205f    /* 113 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000200e    /* 115 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 121),
    0x0000004c    /* 117 (LREF10-PUSH) */,
    0x00000048    /* 118 (LREF0-PUSH) */,
    0x0000205f    /* 119 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* write-byte */,
    0x0000200e    /* 121 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 134),
    0x0000300e    /* 123 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 130),
    0x0000004e    /* 125 (LREF12-PUSH) */,
    0x000010cc    /* 126 (LREF11-NUMADDI-PUSH 1) */,
    0x00000049    /* 127 (LREF1-PUSH) */,
    0x0000305f    /* 128 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* byte-substring */,
    0x0000000d    /* 130 (PUSH) */,
    0x00000048    /* 131 (LREF0-PUSH) */,
    0x0000205f    /* 132 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x0000004e    /* 134 (LREF12-PUSH) */,
    0x0000100e    /* 135 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]) + 140),
    0x00000048    /* 137 (LREF0-PUSH) */,
    0x0000105f    /* 138 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* get-output-byte-string */,
    0x00002063    /* 140 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-replace-body! */,
    0x00000014    /* 142 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[919]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* string-byte-set! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[919]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[20])) /* #<compiled-code string-byte-set!@0x7cf64c1aa780> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* string-byte-set! */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-byte-ref */,
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-byte-set! */,
    0x0000005d    /*   4 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* setter */,
    0x000000a1    /*   6 (SETTER) */,
    0x00002012    /*   7 (TAIL-CALL 2) */,
    0x00000014    /*   8 (RET) */,
    /* string-fill! */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 6),
    0x00000002    /*   3 (CONSTI 0) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 26),
    0x0000100e    /*  19 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 27),
    0x0000004e    /*  21 (LREF12-PUSH) */,
    0x0000105f    /*  22 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-length */,
    0x00000013    /*  24 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 27),
    0x0000006a    /*  26 (LREF0-CAR) */,
    0x0000000d    /*  27 (PUSH) */,
    0x0000003d    /*  28 (LREF0) */,
    0x00000022    /*  29 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 34),
    0x00000003    /*  31 (CONSTN) */,
    0x00000013    /*  32 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 35),
    0x00000076    /*  34 (LREF0-CDR) */,
    0x00002018    /*  35 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  36 (LREF0) */,
    0x00000022    /*  37 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 41),
    0x00000013    /*  39 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 49),
    0x0000200e    /*  41 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 49),
    0x00000006    /*  43 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[71])) /* "too many arguments for" */,
    0x00000006    /*  45 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[409])) /* (lambda (str c :optional (start 0) (end (string-length str))) (let ((start (string-index->cursor str start)) (end (string-index->cursor str end)) (istart (string-cursor->index str start)) (iend (string-cursor->index str end)) (len (string-length str))) (when (< iend istart) (errorf "end index ~s is smaller than start index ~s" iend istart)) (if (and (= istart 0) (= iend len)) (%string-replace-body! str (make-string len c)) (%string-replace-body! str (string-append (substring str 0 start) (make-string (- iend istart) c) (string-copy str end)))))) */,
    0x0000205f    /*  47 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000200e    /*  49 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 55),
    0x00802047    /*  51 (LREF-PUSH 2 2) */,
    0x0000004d    /*  52 (LREF11-PUSH) */,
    0x0000205f    /*  53 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-index->cursor */,
    0x0000200f    /*  55 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 61),
    0x00802047    /*  57 (LREF-PUSH 2 2) */,
    0x00000049    /*  58 (LREF1-PUSH) */,
    0x0000205f    /*  59 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-index->cursor */,
    0x0000200f    /*  61 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 67),
    0x00802047    /*  63 (LREF-PUSH 2 2) */,
    0x0000004d    /*  64 (LREF11-PUSH) */,
    0x0000205f    /*  65 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor->index */,
    0x0000200f    /*  67 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 73),
    0x00802047    /*  69 (LREF-PUSH 2 2) */,
    0x00000049    /*  70 (LREF1-PUSH) */,
    0x0000205f    /*  71 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor->index */,
    0x0000100f    /*  73 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 78),
    0x00802047    /*  75 (LREF-PUSH 2 2) */,
    0x0000105f    /*  76 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-length */,
    0x00005018    /*  78 (PUSH-LOCAL-ENV 5) */,
    0x0000003f    /*  79 (LREF2) */,
    0x00400029    /*  80 (LREF-VAL0-BNLT 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 92),
    0x0000300e    /*  82 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 92),
    0x00000006    /*  84 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[137])) /* "end index ~s is smaller than start index ~s" */,
    0x00000049    /*  86 (LREF1-PUSH) */,
    0x0000004a    /*  87 (LREF2-PUSH) */,
    0x0000305f    /*  88 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000013    /*  90 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 92),
    0x0000003f    /*  92 (LREF2) */,
    0x0000002d    /*  93 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 108),
    0x0000003d    /*  95 (LREF0) */,
    0x00400028    /*  96 (LREF-VAL0-BNUMNE 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 108),
    0x00803047    /*  98 (LREF-PUSH 3 2) */,
    0x0000200e    /*  99 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 105),
    0x00000048    /* 101 (LREF0-PUSH) */,
    0x00403047    /* 102 (LREF-PUSH 3 1) */,
    0x0000205f    /* 103 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-string */,
    0x00002063    /* 105 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-replace-body! */,
    0x00000014    /* 107 (RET) */,
    0x00803047    /* 108 (LREF-PUSH 3 2) */,
    0x0000300e    /* 109 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 135),
    0x0000300e    /* 111 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 118),
    0x00803047    /* 113 (LREF-PUSH 3 2) */,
    0x00000007    /* 114 (CONSTI-PUSH 0) */,
    0x01000047    /* 115 (LREF-PUSH 0 4) */,
    0x0000305f    /* 116 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* substring */,
    0x0000200f    /* 118 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 127),
    0x00000049    /* 120 (LREF1-PUSH) */,
    0x0000003f    /* 121 (LREF2) */,
    0x000000b3    /* 122 (NUMSUB2) */,
    0x0000000d    /* 123 (PUSH) */,
    0x00403047    /* 124 (LREF-PUSH 3 1) */,
    0x0000205f    /* 125 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-string */,
    0x0000200f    /* 127 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 133),
    0x00803047    /* 129 (LREF-PUSH 3 2) */,
    0x0000004b    /* 130 (LREF3-PUSH) */,
    0x0000205f    /* 131 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-copy */,
    0x00003062    /* 133 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00002063    /* 135 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-replace-body! */,
    0x00000014    /* 137 (RET) */,
    0x00000013    /* 138 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]) + 108),
    0x00000014    /* 140 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1084]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* string-fill! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1084]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[23])) /* #<compiled-code string-fill!@0x7cf64c2a2180> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* string-fill! */,
    0x00000014    /*  14 (RET) */,
    /* (%string-map-dispatch #:G2172) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009b    /*   1 (STRINGP) */,
    0x00000092    /*   2 (NOT) */,
    0x00000014    /*   3 (RET) */,
    /* %string-map-dispatch */
    0x0000003f    /*   0 (LREF2) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 8),
    0x01000047    /*   3 (LREF-PUSH 0 4) */,
    0x0000004b    /*   4 (LREF3-PUSH) */,
    0x0000003e    /*   5 (LREF1) */,
    0x00002012    /*   6 (TAIL-CALL 2) */,
    0x00000014    /*   7 (RET) */,
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 13),
    0x0000006c    /*  10 (LREF2-CAR) */,
    0x00001062    /*  11 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 78),
    0x00000078    /*  15 (LREF2-CDR) */,
    0x00000022    /*  16 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 31),
    0x01000047    /*  18 (LREF-PUSH 0 4) */,
    0x0000300e    /*  19 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 27),
    0x0000004b    /*  21 (LREF3-PUSH) */,
    0x0000006c    /*  22 (LREF2-CAR) */,
    0x0000000d    /*  23 (PUSH) */,
    0x00000005    /*  24 (CONSTU) */,
    0x00003062    /*  25 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* opt-substring */,
    0x0000000d    /*  27 (PUSH) */,
    0x0000003e    /*  28 (LREF1) */,
    0x00002012    /*  29 (TAIL-CALL 2) */,
    0x00000014    /*  30 (RET) */,
    0x0000100e    /*  31 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 37),
    0x0000003f    /*  33 (LREF2) */,
    0x00000083    /*  34 (CADR-PUSH) */,
    0x0000105f    /*  35 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  37 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 63),
    0x0000003f    /*  39 (LREF2) */,
    0x00000086    /*  40 (CDDR) */,
    0x00000022    /*  41 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 57),
    0x01000047    /*  43 (LREF-PUSH 0 4) */,
    0x0000300e    /*  44 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 53),
    0x0000004b    /*  46 (LREF3-PUSH) */,
    0x0000006c    /*  47 (LREF2-CAR) */,
    0x0000000d    /*  48 (PUSH) */,
    0x0000003f    /*  49 (LREF2) */,
    0x00000083    /*  50 (CADR-PUSH) */,
    0x0000305f    /*  51 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* opt-substring */,
    0x0000000d    /*  53 (PUSH) */,
    0x0000003e    /*  54 (LREF1) */,
    0x00002012    /*  55 (TAIL-CALL 2) */,
    0x00000014    /*  56 (RET) */,
    0x00000006    /*  57 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[158])) /* "Too many arguments for SRFI-13 style ~a" */,
    0x01400047    /*  59 (LREF-PUSH 0 5) */,
    0x00002060    /*  60 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000014    /*  62 (RET) */,
    0x0000100e    /*  63 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 69),
    0x0000003f    /*  65 (LREF2) */,
    0x00000083    /*  66 (CADR-PUSH) */,
    0x0000105f    /*  67 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor? */,
    0x0000001f    /*  69 (BT) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 39),
    0x00000006    /*  71 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[160])) /* "Integer or string-cursor expected, but got:" */,
    0x0000003f    /*  73 (LREF2) */,
    0x00000083    /*  74 (CADR-PUSH) */,
    0x00002060    /*  75 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  77 (RET) */,
    0x0000100e    /*  78 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 83),
    0x0000006c    /*  80 (LREF2-CAR) */,
    0x00001062    /*  81 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor? */,
    0x0000001f    /*  83 (BT) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 15),
    0x0000006c    /*  85 (LREF2-CAR) */,
    0x0000009b    /*  86 (STRINGP) */,
    0x0000001e    /*  87 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 111),
    0x0000200e    /*  89 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 95),
    0x0000004c    /*  91 (LREF10-PUSH) */,
    0x00000078    /*  92 (LREF2-CDR) */,
    0x00002062    /*  93 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* find */,
    0x00001018    /*  95 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  96 (LREF0) */,
    0x0000001e    /*  97 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]) + 105),
    0x00000006    /*  99 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[162])) /* "string expected, but got:" */,
    0x00000048    /* 101 (LREF0-PUSH) */,
    0x00002060    /* 102 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 104 (RET) */,
    0x0000004c    /* 105 (LREF10-PUSH) */,
    0x01001047    /* 106 (LREF-PUSH 1 4) */,
    0x00c01047    /* 107 (LREF-PUSH 1 3) */,
    0x00000043    /* 108 (LREF12) */,
    0x00004095    /* 109 (TAIL-APPLY 4) */,
    0x00000014    /* 110 (RET) */,
    0x00000006    /* 111 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[162])) /* "string expected, but got:" */,
    0x0000006c    /* 113 (LREF2-CAR) */,
    0x00002063    /* 114 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 116 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[533])) /* (#<compiled-code (%string-map-dispatch #:G2172)@0x7cf64c755180>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1220]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-map-dispatch */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1220]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[26])) /* #<compiled-code %string-map-dispatch@0x7cf64c755120> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-map-dispatch */,
    0x00000014    /*  16 (RET) */,
    /* (string-map string-map-1) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-start */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]) + 11),
    0x0000004c    /*   8 (LREF10-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-end */,
    0x0000000d    /*  11 (PUSH) */,
    0x00000008    /*  12 (CONSTN-PUSH) */,
    0x00002017    /*  13 (LOCAL-ENV 2) */,
    0x0000200e    /*  14 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]) + 20),
    0x00000049    /*  16 (LREF1-PUSH) */,
    0x0000004c    /*  17 (LREF10-PUSH) */,
    0x0000205f    /*  18 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor=? */,
    0x0000001e    /*  20 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]) + 26),
    0x00000048    /*  22 (LREF0-PUSH) */,
    0x00001060    /*  23 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list->string */,
    0x00000014    /*  25 (RET) */,
    0x0000200e    /*  26 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]) + 32),
    0x0000004f    /*  28 (LREF20-PUSH) */,
    0x00000049    /*  29 (LREF1-PUSH) */,
    0x0000205f    /*  30 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-prev */,
    0x00001018    /*  32 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*  33 (LREF0-PUSH) */,
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]) + 45),
    0x0000200e    /*  36 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]) + 42),
    0x00000051    /*  38 (LREF30-PUSH) */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x0000205f    /*  40 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x0000000d    /*  42 (PUSH) */,
    0x0040303c    /*  43 (LREF 3 1) */,
    0x00001011    /*  44 (CALL 1) */,
    0x0000000d    /*  45 (PUSH) */,
    0x00000041    /*  46 (LREF10) */,
    0x00000067    /*  47 (CONS-PUSH) */,
    0x0000201b    /*  48 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]) + 14),
    0x00000014    /*  50 (RET) */,
    0x00000014    /*  51 (RET) */,
    /* (string-map string-map-n) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]) + 7),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-end */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]) + 15),
    0x0000005e    /*  10 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-start */,
    0x0000004c    /*  12 (LREF10-PUSH) */,
    0x0000205f    /*  13 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x0000000d    /*  15 (PUSH) */,
    0x00000008    /*  16 (CONSTN-PUSH) */,
    0x00002017    /*  17 (LOCAL-ENV 2) */,
    0x0000300e    /*  18 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]) + 26),
    0x0000005e    /*  20 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor=? */,
    0x00000049    /*  22 (LREF1-PUSH) */,
    0x0000004c    /*  23 (LREF10-PUSH) */,
    0x0000305f    /*  24 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* any */,
    0x0000001e    /*  26 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]) + 33),
    0x0000003d    /*  28 (LREF0) */,
    0x00000093    /*  29 (REVERSE) */,
    0x00001063    /*  30 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list->string */,
    0x00000014    /*  32 (RET) */,
    0x0000300e    /*  33 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]) + 41),
    0x0000005e    /*  35 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-next */,
    0x0000004f    /*  37 (LREF20-PUSH) */,
    0x00000049    /*  38 (LREF1-PUSH) */,
    0x0000305f    /*  39 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x0000000f    /*  41 (PUSH-PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]) + 53),
    0x00000050    /*  43 (LREF21-PUSH) */,
    0x0000300e    /*  44 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]) + 52),
    0x0000005e    /*  46 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x0000004f    /*  48 (LREF20-PUSH) */,
    0x00000049    /*  49 (LREF1-PUSH) */,
    0x0000305f    /*  50 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00002095    /*  52 (TAIL-APPLY 2) */,
    0x0000000d    /*  53 (PUSH) */,
    0x0000003d    /*  54 (LREF0) */,
    0x00000067    /*  55 (CONS-PUSH) */,
    0x0000101b    /*  56 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]) + 18),
    0x00000014    /*  58 (RET) */,
    0x00000014    /*  59 (RET) */,
    /* string-map */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-map */,
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000004d    /*   5 (LREF11-PUSH) */,
    0x0000004c    /*   6 (LREF10-PUSH) */,
    0x00006060    /*   7 (GREF-TAIL-CALL 6) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-map-dispatch */,
    0x00000014    /*   9 (RET) */,
    /* %toplevel */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[556])) /* (#<compiled-code (string-map string-map-1)@0x7cf64bd3a0c0> #<compiled-code (string-map string-map-n)@0x7cf64bd3a060>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1359]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* string-map */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1359]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[30])) /* #<compiled-code string-map@0x7cf64bd6af60> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* string-map */,
    0x00000014    /*  16 (RET) */,
    /* (string-for-each string-for-each-1) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-end */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]) + 11),
    0x0000004c    /*   8 (LREF10-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-start */,
    0x00001018    /*  11 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  12 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]) + 18),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000004c    /*  15 (LREF10-PUSH) */,
    0x0000205f    /*  16 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor=? */,
    0x0000001e    /*  18 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]) + 21),
    0x0000000c    /*  20 (CONSTU-RET) */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]) + 32),
    0x0000200e    /*  23 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]) + 29),
    0x0000004f    /*  25 (LREF20-PUSH) */,
    0x00000048    /*  26 (LREF0-PUSH) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x0000000d    /*  29 (PUSH) */,
    0x00000045    /*  30 (LREF21) */,
    0x00001011    /*  31 (CALL 1) */,
    0x0000200e    /*  32 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]) + 38),
    0x0000004f    /*  34 (LREF20-PUSH) */,
    0x00000048    /*  35 (LREF0-PUSH) */,
    0x0000205f    /*  36 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-next */,
    0x0000000d    /*  38 (PUSH) */,
    0x0000101b    /*  39 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]) + 12),
    0x00000014    /*  41 (RET) */,
    0x00000014    /*  42 (RET) */,
    /* (string-for-each string-for-each-n) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]) + 7),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-end */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]) + 15),
    0x0000005e    /*  10 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-start */,
    0x0000004c    /*  12 (LREF10-PUSH) */,
    0x0000205f    /*  13 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00001018    /*  15 (PUSH-LOCAL-ENV 1) */,
    0x0000300e    /*  16 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]) + 24),
    0x0000005e    /*  18 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor=? */,
    0x00000048    /*  20 (LREF0-PUSH) */,
    0x0000004c    /*  21 (LREF10-PUSH) */,
    0x0000305f    /*  22 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* any */,
    0x0000001e    /*  24 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]) + 27),
    0x0000000c    /*  26 (CONSTU-RET) */,
    0x0000000e    /*  27 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]) + 39),
    0x00000050    /*  29 (LREF21-PUSH) */,
    0x0000300e    /*  30 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]) + 38),
    0x0000005e    /*  32 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x0000004f    /*  34 (LREF20-PUSH) */,
    0x00000048    /*  35 (LREF0-PUSH) */,
    0x0000305f    /*  36 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00002095    /*  38 (TAIL-APPLY 2) */,
    0x0000300e    /*  39 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]) + 47),
    0x0000005e    /*  41 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-next */,
    0x0000004f    /*  43 (LREF20-PUSH) */,
    0x00000048    /*  44 (LREF0-PUSH) */,
    0x0000305f    /*  45 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x0000000d    /*  47 (PUSH) */,
    0x0000101b    /*  48 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]) + 16),
    0x00000014    /*  50 (RET) */,
    0x00000014    /*  51 (RET) */,
    /* string-for-each */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string-for-each */,
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000004d    /*   5 (LREF11-PUSH) */,
    0x0000004c    /*   6 (LREF10-PUSH) */,
    0x00006060    /*   7 (GREF-TAIL-CALL 6) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-map-dispatch */,
    0x00000014    /*   9 (RET) */,
    /* %toplevel */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[573])) /* (#<compiled-code (string-for-each string-for-each-1)@0x7cf64b76c1e0> #<compiled-code (string-for-each string-for-each-n)@0x7cf64b76c180>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1481]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* string-for-each */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1481]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[34])) /* #<compiled-code string-for-each@0x7cf64b76c120> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* string-for-each */,
    0x00000014    /*  16 (RET) */,
    /* string-incomplete->complete! */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1498]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-incomplete->complete */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   6 (LREF0) */,
    0x00000030    /*   7 (RF) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1498]) + 14),
    0x0000004c    /*  10 (LREF10-PUSH) */,
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x0000205f    /*  12 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %string-replace-body! */,
    0x00000053    /*  14 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1513]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* string-incomplete->complete! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1513]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[36])) /* #<compiled-code string-incomplete->complete!@0x7cf64ef4a1e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* string-incomplete->complete! */,
    0x00000014    /*  14 (RET) */,
    /* (complete-sexp? skip-token) */
    0x000000dc    /*   0 (PEEK-CHAR 0) */,
    0x00001018    /*   1 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   2 (LREF0) */,
    0x0000009a    /*   3 (EOFP) */,
    0x0000001e    /*   4 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1528]) + 7),
    0x0000000c    /*   6 (CONSTU-RET) */,
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1528]) + 14),
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #[\u0000- "'-),;\[-\]`{-}\u007f] */,
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x0000205f    /*  12 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-contains? */,
    0x0000001e    /*  14 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1528]) + 17),
    0x0000000c    /*  16 (CONSTU-RET) */,
    0x000000db    /*  17 (READ-CHAR 0) */,
    0x000000dc    /*  18 (PEEK-CHAR 0) */,
    0x0000000d    /*  19 (PUSH) */,
    0x0000101b    /*  20 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1528]) + 2),
    0x00000014    /*  22 (RET) */,
    0x00000014    /*  23 (RET) */,
    /* ((complete-sexp? #:G2177) rec) */
    0x000000db    /*   0 (READ-CHAR 0) */,
    0x00001018    /*   1 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   2 (LREF0) */,
    0x0000009a    /*   3 (EOFP) */,
    0x0000001e    /*   4 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 12),
    0x00000041    /*   6 (LREF10) */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 10),
    0x0000000b    /*   9 (CONSTF-RET) */,
    0x0000000a    /*  10 (CONST-RET) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000004c    /*  12 (LREF10-PUSH) */,
    0x0000003d    /*  13 (LREF0) */,
    0x00000021    /*  14 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 18),
    0x0000000a    /*  16 (CONST-RET) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000003d    /*  18 (LREF0) */,
    0x0000002f    /*  19 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(40)) /* #\( */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 33)  /*     33 */,
    0x0000100e    /*  22 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 28),
    0x00000006    /*  24 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(41)) /* #\) */,
    0x0080203c    /*  26 (LREF 2 2) */,
    0x0000101c    /*  27 (LOCAL-ENV-CALL 1) */,
    0x00000030    /*  28 (RF) */,
    0x0000004c    /*  29 (LREF10-PUSH) */,
    0x0080203c    /*  30 (LREF 2 2) */,
    0x0000101d    /*  31 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  32 (RET) */,
    0x0000003d    /*  33 (LREF0) */,
    0x0000002f    /*  34 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(91)) /* #\[ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 48)  /*     48 */,
    0x0000100e    /*  37 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 43),
    0x00000006    /*  39 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(93)) /* #\] */,
    0x0080203c    /*  41 (LREF 2 2) */,
    0x0000101c    /*  42 (LOCAL-ENV-CALL 1) */,
    0x00000030    /*  43 (RF) */,
    0x0000004c    /*  44 (LREF10-PUSH) */,
    0x0080203c    /*  45 (LREF 2 2) */,
    0x0000101d    /*  46 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  47 (RET) */,
    0x0000003d    /*  48 (LREF0) */,
    0x0000002f    /*  49 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(123)) /* #\{ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 63)  /*     63 */,
    0x0000100e    /*  52 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 58),
    0x00000006    /*  54 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(125)) /* #\} */,
    0x0080203c    /*  56 (LREF 2 2) */,
    0x0000101c    /*  57 (LOCAL-ENV-CALL 1) */,
    0x00000030    /*  58 (RF) */,
    0x0000004c    /*  59 (LREF10-PUSH) */,
    0x0080203c    /*  60 (LREF 2 2) */,
    0x0000101d    /*  61 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  62 (RET) */,
    0x0000003d    /*  63 (LREF0) */,
    0x0000002f    /*  64 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(34)) /* #\" */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 78)  /*     78 */,
    0x0000100e    /*  67 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 73),
    0x00000006    /*  69 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(34)) /* #\" */,
    0x00000045    /*  71 (LREF21) */,
    0x0000101c    /*  72 (LOCAL-ENV-CALL 1) */,
    0x00000030    /*  73 (RF) */,
    0x0000004c    /*  74 (LREF10-PUSH) */,
    0x0080203c    /*  75 (LREF 2 2) */,
    0x0000101d    /*  76 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  77 (RET) */,
    0x0000003d    /*  78 (LREF0) */,
    0x0000002f    /*  79 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(124)) /* #\| */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 93)  /*     93 */,
    0x0000100e    /*  82 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 88),
    0x00000006    /*  84 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(124)) /* #\| */,
    0x00000045    /*  86 (LREF21) */,
    0x0000101c    /*  87 (LOCAL-ENV-CALL 1) */,
    0x00000030    /*  88 (RF) */,
    0x0000004c    /*  89 (LREF10-PUSH) */,
    0x0080203c    /*  90 (LREF 2 2) */,
    0x0000101d    /*  91 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  92 (RET) */,
    0x0000003d    /*  93 (LREF0) */,
    0x0000002f    /*  94 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(59)) /* #\; */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 120)  /*    120 */,
    0x0000100e    /*  97 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 116),
    0x000000db    /*  99 (READ-CHAR 0) */,
    0x00001018    /* 100 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 101 (LREF0) */,
    0x0000009a    /* 102 (EOFP) */,
    0x0000001e    /* 103 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 106),
    0x0000000c    /* 105 (CONSTU-RET) */,
    0x0000003d    /* 106 (LREF0) */,
    0x0000002f    /* 107 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(10)) /* #\newline */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 111)  /*    111 */,
    0x0000000c    /* 110 (CONSTU-RET) */,
    0x000000db    /* 111 (READ-CHAR 0) */,
    0x0000000d    /* 112 (PUSH) */,
    0x0000101b    /* 113 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 101),
    0x00000014    /* 115 (RET) */,
    0x0000004c    /* 116 (LREF10-PUSH) */,
    0x0080203c    /* 117 (LREF 2 2) */,
    0x0000101d    /* 118 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 119 (RET) */,
    0x0000003d    /* 120 (LREF0) */,
    0x0000002f    /* 121 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(35)) /* #\# */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 318)  /*    318 */,
    0x000000db    /* 124 (READ-CHAR 0) */,
    0x00001018    /* 125 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 126 (LREF0) */,
    0x0000009a    /* 127 (EOFP) */,
    0x0000001e    /* 128 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 131),
    0x0000000b    /* 130 (CONSTF-RET) */,
    0x0000003d    /* 131 (LREF0) */,
    0x0000002f    /* 132 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(92)) /* #\\ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 147)  /*    147 */,
    0x000000db    /* 135 (READ-CHAR 0) */,
    0x0000009a    /* 136 (EOFP) */,
    0x00000092    /* 137 (NOT) */,
    0x00000030    /* 138 (RF) */,
    0x0000000e    /* 139 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 143),
    0x0040403c    /* 141 (LREF 4 1) */,
    0x0000001c    /* 142 (LOCAL-ENV-CALL 0) */,
    0x0000004f    /* 143 (LREF20-PUSH) */,
    0x0080303c    /* 144 (LREF 3 2) */,
    0x0000101d    /* 145 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 146 (RET) */,
    0x0000003d    /* 147 (LREF0) */,
    0x0000002f    /* 148 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(34)) /* #\" */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 162)  /*    162 */,
    0x0000100e    /* 151 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 157),
    0x00000006    /* 153 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(34)) /* #\" */,
    0x0040303c    /* 155 (LREF 3 1) */,
    0x0000101c    /* 156 (LOCAL-ENV-CALL 1) */,
    0x00000030    /* 157 (RF) */,
    0x0000004f    /* 158 (LREF20-PUSH) */,
    0x0080303c    /* 159 (LREF 3 2) */,
    0x0000101d    /* 160 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 161 (RET) */,
    0x0000003d    /* 162 (LREF0) */,
    0x0000002f    /* 163 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(47)) /* #\/ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 177)  /*    177 */,
    0x0000100e    /* 166 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 172),
    0x00000006    /* 168 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(47)) /* #\/ */,
    0x0040303c    /* 170 (LREF 3 1) */,
    0x0000101c    /* 171 (LOCAL-ENV-CALL 1) */,
    0x00000030    /* 172 (RF) */,
    0x0000004f    /* 173 (LREF20-PUSH) */,
    0x0080303c    /* 174 (LREF 3 2) */,
    0x0000101d    /* 175 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 176 (RET) */,
    0x0000003d    /* 177 (LREF0) */,
    0x0000002f    /* 178 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(91)) /* #\[ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 192)  /*    192 */,
    0x0000100e    /* 181 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 187),
    0x00000006    /* 183 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(93)) /* #\] */,
    0x0040303c    /* 185 (LREF 3 1) */,
    0x0000101c    /* 186 (LOCAL-ENV-CALL 1) */,
    0x00000030    /* 187 (RF) */,
    0x0000004f    /* 188 (LREF20-PUSH) */,
    0x0080303c    /* 189 (LREF 3 2) */,
    0x0000101d    /* 190 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 191 (RET) */,
    0x0000003d    /* 192 (LREF0) */,
    0x0000002f    /* 193 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(44)) /* #\, */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 279)  /*    279 */,
    0x0000100e    /* 196 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 220),
    0x000000db    /* 198 (READ-CHAR 0) */,
    0x00001018    /* 199 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 200 (LREF0) */,
    0x0000009a    /* 201 (EOFP) */,
    0x0000001e    /* 202 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 205),
    0x00000053    /* 204 (LREF0-RET) */,
    0x0000200e    /* 205 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 212),
    0x00000006    /* 207 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #[\u0000-\u0008\u000e-\u001f!-\u007f\u0080-\U0010ffff] */,
    0x00000048    /* 209 (LREF0-PUSH) */,
    0x0000205f    /* 210 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-contains? */,
    0x0000001e    /* 212 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 215),
    0x00000053    /* 214 (LREF0-RET) */,
    0x000000db    /* 215 (READ-CHAR 0) */,
    0x0000000d    /* 216 (PUSH) */,
    0x0000101b    /* 217 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 200),
    0x00000014    /* 219 (RET) */,
    0x00001018    /* 220 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 221 (LREF0) */,
    0x0000009a    /* 222 (EOFP) */,
    0x0000001e    /* 223 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 226),
    0x0000000b    /* 225 (CONSTF-RET) */,
    0x0000003d    /* 226 (LREF0) */,
    0x0000002f    /* 227 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(40)) /* #\( */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 241)  /*    241 */,
    0x0000100e    /* 230 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 236),
    0x00000006    /* 232 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(41)) /* #\) */,
    0x0080403c    /* 234 (LREF 4 2) */,
    0x0000101c    /* 235 (LOCAL-ENV-CALL 1) */,
    0x00000030    /* 236 (RF) */,
    0x00000051    /* 237 (LREF30-PUSH) */,
    0x0080403c    /* 238 (LREF 4 2) */,
    0x0000101d    /* 239 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 240 (RET) */,
    0x0000003d    /* 241 (LREF0) */,
    0x0000002f    /* 242 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(91)) /* #\[ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 256)  /*    256 */,
    0x0000100e    /* 245 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 251),
    0x00000006    /* 247 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(93)) /* #\] */,
    0x0080403c    /* 249 (LREF 4 2) */,
    0x0000101c    /* 250 (LOCAL-ENV-CALL 1) */,
    0x00000030    /* 251 (RF) */,
    0x00000051    /* 252 (LREF30-PUSH) */,
    0x0080403c    /* 253 (LREF 4 2) */,
    0x0000101d    /* 254 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 255 (RET) */,
    0x0000003d    /* 256 (LREF0) */,
    0x0000002f    /* 257 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(123)) /* #\{ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 271)  /*    271 */,
    0x0000100e    /* 260 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 266),
    0x00000006    /* 262 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(125)) /* #\} */,
    0x0080403c    /* 264 (LREF 4 2) */,
    0x0000101c    /* 265 (LOCAL-ENV-CALL 1) */,
    0x00000030    /* 266 (RF) */,
    0x00000051    /* 267 (LREF30-PUSH) */,
    0x0080403c    /* 268 (LREF 4 2) */,
    0x0000101d    /* 269 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 270 (RET) */,
    0x0000000e    /* 271 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 275),
    0x0040503c    /* 273 (LREF 5 1) */,
    0x0000001c    /* 274 (LOCAL-ENV-CALL 0) */,
    0x00000051    /* 275 (LREF30-PUSH) */,
    0x0080403c    /* 276 (LREF 4 2) */,
    0x0000101d    /* 277 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 278 (RET) */,
    0x0000003d    /* 279 (LREF0) */,
    0x0000002f    /* 280 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(40)) /* #\( */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 294)  /*    294 */,
    0x0000100e    /* 283 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 289),
    0x00000006    /* 285 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(41)) /* #\) */,
    0x0080303c    /* 287 (LREF 3 2) */,
    0x0000101c    /* 288 (LOCAL-ENV-CALL 1) */,
    0x00000030    /* 289 (RF) */,
    0x0000004f    /* 290 (LREF20-PUSH) */,
    0x0080303c    /* 291 (LREF 3 2) */,
    0x0000101d    /* 292 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 293 (RET) */,
    0x0000003d    /* 294 (LREF0) */,
    0x0000002f    /* 295 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(60)) /* #\< */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 308)  /*    308 */,
    0x00000006    /* 298 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[190])) /* "unreadable sequence #<~a..." */,
    0x0000100e    /* 300 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 305),
    0x0000a007    /* 302 (CONSTI-PUSH 10) */,
    0x0000105f    /* 303 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read-block */,
    0x00002063    /* 305 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000014    /* 307 (RET) */,
    0x00000048    /* 308 (LREF0-PUSH) */,
    0x00000044    /* 309 (LREF20) */,
    0x00000021    /* 310 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]) + 314),
    0x0000000a    /* 312 (CONST-RET) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000004f    /* 314 (LREF20-PUSH) */,
    0x0080303c    /* 315 (LREF 3 2) */,
    0x0000101d    /* 316 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 317 (RET) */,
    0x0000004c    /* 318 (LREF10-PUSH) */,
    0x0080203c    /* 319 (LREF 2 2) */,
    0x0000101d    /* 320 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /* 321 (RET) */,
    /* ((complete-sexp? #:G2177) rec-escaped) */
    0x000000db    /*   0 (READ-CHAR 0) */,
    0x00001018    /*   1 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   2 (LREF0) */,
    0x0000009a    /*   3 (EOFP) */,
    0x0000001e    /*   4 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1874]) + 7),
    0x0000000b    /*   6 (CONSTF-RET) */,
    0x0000004c    /*   7 (LREF10-PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000021    /*   9 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1874]) + 13),
    0x0000000a    /*  11 (CONST-RET) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000003d    /*  13 (LREF0) */,
    0x0000002f    /*  14 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(92)) /* #\\ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1874]) + 22)  /*     22 */,
    0x000000db    /*  17 (READ-CHAR 0) */,
    0x0000004c    /*  18 (LREF10-PUSH) */,
    0x00000045    /*  19 (LREF21) */,
    0x0000101d    /*  20 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  21 (RET) */,
    0x0000004c    /*  22 (LREF10-PUSH) */,
    0x00000045    /*  23 (LREF21) */,
    0x0000101d    /*  24 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  25 (RET) */,
    /* (complete-sexp? #:G2177) */
    0x00003019    /*   0 (LOCAL-ENV-CLOSURES 3) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[651])) /* (#<compiled-code ((complete-sexp? #:G2177) rec)@0x7cf64b8feb40> #<compiled-code ((complete-sexp? #:G2177) rec-escaped)@0x7cf64b8feae0> #<undef>) */,
    0x00000042    /*   2 (LREF11) */,
    0x000000e8    /*   3 (ENV-SET 0) */,
    0x00000009    /*   4 (CONSTF-PUSH) */,
    0x0000003f    /*   5 (LREF2) */,
    0x0000101d    /*   6 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*   7 (RET) */,
    /* complete-sexp? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000004c    /*   1 (LREF10-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-string */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[658])) /* (#<compiled-code (complete-sexp? skip-token)@0x7cf64b8fec00> #<compiled-code (complete-sexp? #:G2177)@0x7cf64b8feba0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1913]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* complete-sexp? */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1913]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[42])) /* #<compiled-code complete-sexp?@0x7cf64b8fea80> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* complete-sexp? */,
    0x00000014    /*  16 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_OBJ(&scm__rc.d2150[3]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(56U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[7])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[9])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_OBJ(&scm__rc.d2150[11]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[8]), SCM_OBJ(&scm__rc.d2150[12])},
       { SCM_MAKE_INT(60U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_OBJ(&scm__rc.d2150[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[16]), SCM_OBJ(&scm__rc.d2150[20])},
       { SCM_MAKE_INT(62U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[23])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[26])},
       { SCM_OBJ(&scm__rc.d2150[27]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[24]), SCM_OBJ(&scm__rc.d2150[28])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[31])},
       { SCM_MAKE_INT(70U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[36])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_OBJ(&scm__rc.d2150[38]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[35]), SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[41])},
       { SCM_MAKE_INT(72U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[43])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[44])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[46])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[47])},
       { SCM_OBJ(&scm__rc.d2150[48]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[45]), SCM_OBJ(&scm__rc.d2150[49])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_MAKE_INT(73U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[55])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[56])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[59])},
       { SCM_OBJ(&scm__rc.d2150[60]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[57]), SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[63])},
       { SCM_MAKE_INT(76U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[65])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_OBJ(&scm__rc.d2150[70]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[67]), SCM_OBJ(&scm__rc.d2150[71])},
       { SCM_MAKE_INT(79U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[73])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[76])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[77])},
       { SCM_OBJ(&scm__rc.d2150[78]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[75]), SCM_OBJ(&scm__rc.d2150[79])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_MAKE_INT(87U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[85])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[86])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[88])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[89])},
       { SCM_OBJ(&scm__rc.d2150[90]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[87]), SCM_OBJ(&scm__rc.d2150[91])},
       { SCM_MAKE_INT(100U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[93])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[94])},
       { SCM_OBJ(&scm__rc.d2150[95]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(108U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[99])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[101])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[102])},
       { SCM_OBJ(&scm__rc.d2150[103]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[100]), SCM_OBJ(&scm__rc.d2150[104])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(110U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[108])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[110])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_OBJ(&scm__rc.d2150[112]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[109]), SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(117U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[116])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[117])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[120])},
       { SCM_OBJ(&scm__rc.d2150[121]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[118]), SCM_OBJ(&scm__rc.d2150[122])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[125])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[126])},
       { SCM_MAKE_INT(119U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[128])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[129])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[131])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[132])},
       { SCM_OBJ(&scm__rc.d2150[133]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[130]), SCM_OBJ(&scm__rc.d2150[134])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_MAKE_INT(123U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[137])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[138])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[140])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[141])},
       { SCM_OBJ(&scm__rc.d2150[142]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[139]), SCM_OBJ(&scm__rc.d2150[143])},
       { SCM_MAKE_INT(127U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[145])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[146])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[148])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[149])},
       { SCM_OBJ(&scm__rc.d2150[150]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[147]), SCM_OBJ(&scm__rc.d2150[151])},
       { SCM_MAKE_INT(130U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[153])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[154])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[156])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_OBJ(&scm__rc.d2150[158]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[155]), SCM_OBJ(&scm__rc.d2150[159])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[161])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[162])},
       { SCM_MAKE_INT(134U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[164])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[165])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[167])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[168])},
       { SCM_OBJ(&scm__rc.d2150[169]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[166]), SCM_OBJ(&scm__rc.d2150[170])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[172])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[173])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[174])},
       { SCM_MAKE_INT(162U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[176])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[177])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[179])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[180])},
       { SCM_OBJ(&scm__rc.d2150[181]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[178]), SCM_OBJ(&scm__rc.d2150[182])},
       { SCM_MAKE_INT(172U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[185])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[187])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[188])},
       { SCM_OBJ(&scm__rc.d2150[189]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[186]), SCM_OBJ(&scm__rc.d2150[190])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[192])},
       { SCM_OBJ(&scm__rc.d2150[193]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[194])},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[196])},
       { SCM_OBJ(&scm__rc.d2150[197]), SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_OBJ(&scm__rc.d2150[195]), SCM_OBJ(&scm__rc.d2150[198])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[199])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[200])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[201])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_OBJ(&scm__rc.d2150[204]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[203]), SCM_OBJ(&scm__rc.d2150[205])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[206])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[208])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[209])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[212])},
       { SCM_OBJ(&scm__rc.d2150[193]), SCM_OBJ(&scm__rc.d2150[213])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[214])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[215])},
       { SCM_OBJ(&scm__rc.d2150[210]), SCM_OBJ(&scm__rc.d2150[216])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[218])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[219])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[220])},
       { SCM_OBJ(&scm__rc.d2150[210]), SCM_OBJ(&scm__rc.d2150[221])},
       { SCM_OBJ(&scm__rc.d2150[222]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[217]), SCM_OBJ(&scm__rc.d2150[223])},
       { SCM_OBJ(&scm__rc.d2150[207]), SCM_OBJ(&scm__rc.d2150[224])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[225])},
       { SCM_OBJ(&scm__rc.d2150[226]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[202]), SCM_OBJ(&scm__rc.d2150[227])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[228])},
       { SCM_MAKE_INT(188U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[230])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[231])},
       { SCM_OBJ(&scm__rc.d2150[232]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[235])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[236])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[237])},
       { SCM_MAKE_INT(197U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[239])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[240])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[242])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[243])},
       { SCM_OBJ(&scm__rc.d2150[244]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[241]), SCM_OBJ(&scm__rc.d2150[245])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[247])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[248])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[249])},
       { SCM_MAKE_INT(201U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[251])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[252])},
       { SCM_OBJ(&scm__rc.d2150[253]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[256])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(228U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[259])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[260])},
       { SCM_OBJ(&scm__rc.d2150[261]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[6]), SCM_NIL},
       { SCM_MAKE_INT(231U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[265])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[266])},
       { SCM_OBJ(&scm__rc.d2150[267]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[196])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(235U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[272])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[273])},
       { SCM_OBJ(&scm__rc.d2150[274]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(237U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[277])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[278])},
       { SCM_OBJ(&scm__rc.d2150[279]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(225U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[283])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[284])},
       { SCM_OBJ(&scm__rc.d2150[285]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[288])},
       { SCM_MAKE_INT(270U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[290])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[291])},
       { SCM_OBJ(&scm__rc.d2150[292]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(250U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[296])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[297])},
       { SCM_OBJ(&scm__rc.d2150[298]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[235])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_MAKE_INT(272U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[303])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[304])},
       { SCM_OBJ(&scm__rc.d2150[305]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[308])},
       { SCM_MAKE_INT(288U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[310])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[311])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[313])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[314])},
       { SCM_OBJ(&scm__rc.d2150[315]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[312]), SCM_OBJ(&scm__rc.d2150[316])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[318])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[319])},
       { SCM_MAKE_INT(291U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[321])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[322])},
       { SCM_OBJ(&scm__rc.d2150[323]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[326])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[327])},
       { SCM_MAKE_INT(302U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[329])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[330])},
       { SCM_OBJ(&scm__rc.d2150[331]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(0), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[115])},
       { SCM_OBJ(&scm__rc.d2150[336]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[337])},
       { SCM_OBJ(&scm__rc.d2150[338]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[335]), SCM_OBJ(&scm__rc.d2150[339])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[340])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[341])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[342])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[344])},
       { SCM_OBJ(&scm__rc.d2150[345]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[346])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_OBJ(&scm__rc.d2150[349]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[350])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[344])},
       { SCM_OBJ(&scm__rc.d2150[352]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[353])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_OBJ(&scm__rc.d2150[355]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[356])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[337])},
       { SCM_OBJ(&scm__rc.d2150[358]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[357]), SCM_OBJ(&scm__rc.d2150[359])},
       { SCM_OBJ(&scm__rc.d2150[354]), SCM_OBJ(&scm__rc.d2150[360])},
       { SCM_OBJ(&scm__rc.d2150[351]), SCM_OBJ(&scm__rc.d2150[361])},
       { SCM_OBJ(&scm__rc.d2150[347]), SCM_OBJ(&scm__rc.d2150[362])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[364])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[365])},
       { SCM_OBJ(&scm__sc.d2148[137]), SCM_OBJ(&scm__rc.d2150[365])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[367])},
       { SCM_OBJ(&scm__rc.d2150[368]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[366]), SCM_OBJ(&scm__rc.d2150[369])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[370])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[372])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[374])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[375])},
       { SCM_OBJ(&scm__rc.d2150[376]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[373]), SCM_OBJ(&scm__rc.d2150[377])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[378])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[380])},
       { SCM_OBJ(&scm__rc.d2150[381]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[382])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[383])},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[385])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[386])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[365])},
       { SCM_OBJ(&scm__rc.d2150[388]), SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[389])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_OBJ(&scm__rc.d2150[391]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[390]), SCM_OBJ(&scm__rc.d2150[392])},
       { SCM_OBJ(&scm__rc.d2150[387]), SCM_OBJ(&scm__rc.d2150[393])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[394])},
       { SCM_OBJ(&scm__rc.d2150[395]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[396])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[397])},
       { SCM_OBJ(&scm__rc.d2150[398]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[384]), SCM_OBJ(&scm__rc.d2150[399])},
       { SCM_OBJ(&scm__rc.d2150[379]), SCM_OBJ(&scm__rc.d2150[400])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[401])},
       { SCM_OBJ(&scm__rc.d2150[402]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[371]), SCM_OBJ(&scm__rc.d2150[403])},
       { SCM_OBJ(&scm__rc.d2150[363]), SCM_OBJ(&scm__rc.d2150[404])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[405])},
       { SCM_OBJ(&scm__rc.d2150[406]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[343]), SCM_OBJ(&scm__rc.d2150[407])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[408])},
       { SCM_MAKE_INT(318U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[410])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[411])},
       { SCM_OBJ(&scm__rc.d2150[412]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(339U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[415])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[416])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[418])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[419])},
       { SCM_OBJ(&scm__rc.d2150[420]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[417]), SCM_OBJ(&scm__rc.d2150[421])},
       { SCM_MAKE_INT(343U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[423])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[424])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[426])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[427])},
       { SCM_OBJ(&scm__rc.d2150[428]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[425]), SCM_OBJ(&scm__rc.d2150[429])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[431])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[432])},
       { SCM_MAKE_INT(347U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[434])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[435])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[437])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[438])},
       { SCM_OBJ(&scm__rc.d2150[439]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[436]), SCM_OBJ(&scm__rc.d2150[440])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[442])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[443])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[444])},
       { SCM_MAKE_INT(371U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[446])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[447])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[449])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[450])},
       { SCM_OBJ(&scm__rc.d2150[451]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[448]), SCM_OBJ(&scm__rc.d2150[452])},
       { SCM_MAKE_INT(374U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[454])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[455])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[457])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[458])},
       { SCM_OBJ(&scm__rc.d2150[459]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[456]), SCM_OBJ(&scm__rc.d2150[460])},
       { SCM_MAKE_INT(377U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[462])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[463])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[465])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[466])},
       { SCM_OBJ(&scm__rc.d2150[467]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[464]), SCM_OBJ(&scm__rc.d2150[468])},
       { SCM_MAKE_INT(380U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[470])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[471])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[473])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[474])},
       { SCM_OBJ(&scm__rc.d2150[475]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[472]), SCM_OBJ(&scm__rc.d2150[476])},
       { SCM_MAKE_INT(383U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[478])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[479])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[481])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[482])},
       { SCM_OBJ(&scm__rc.d2150[483]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[480]), SCM_OBJ(&scm__rc.d2150[484])},
       { SCM_MAKE_INT(387U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[486])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[487])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[489])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[490])},
       { SCM_OBJ(&scm__rc.d2150[491]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[488]), SCM_OBJ(&scm__rc.d2150[492])},
       { SCM_MAKE_INT(390U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[494])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[495])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[497])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[498])},
       { SCM_OBJ(&scm__rc.d2150[499]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[496]), SCM_OBJ(&scm__rc.d2150[500])},
       { SCM_MAKE_INT(393U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[502])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[503])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[505])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[506])},
       { SCM_OBJ(&scm__rc.d2150[507]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[504]), SCM_OBJ(&scm__rc.d2150[508])},
       { SCM_MAKE_INT(396U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[510])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[511])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[513])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[514])},
       { SCM_OBJ(&scm__rc.d2150[515]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[512]), SCM_OBJ(&scm__rc.d2150[516])},
       { SCM_MAKE_INT(399U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[518])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[519])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[521])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[522])},
       { SCM_OBJ(&scm__rc.d2150[523]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[520]), SCM_OBJ(&scm__rc.d2150[524])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[526])},
       { SCM_MAKE_INT(427U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[528])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[529])},
       { SCM_OBJ(&scm__rc.d2150[530]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[25]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[534])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[535])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[536])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[537])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[538])},
       { SCM_MAKE_INT(414U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[540])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[541])},
       { SCM_OBJ(&scm__rc.d2150[542]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[545])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[115])},
       { SCM_OBJ(&scm__rc.d2150[546]), SCM_OBJ(&scm__rc.d2150[547])},
       { SCM_OBJ(&scm__rc.d2150[548]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[550])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_OBJ(&scm__rc.d2150[551]), SCM_OBJ(&scm__rc.d2150[552])},
       { SCM_OBJ(&scm__rc.d2150[553]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[29]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[28]), SCM_OBJ(&scm__rc.d2150[555])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[557])},
       { SCM_MAKE_INT(433U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[559])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[560])},
       { SCM_OBJ(&scm__rc.d2150[561]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[564])},
       { SCM_OBJ(&scm__rc.d2150[565]), SCM_OBJ(&scm__rc.d2150[547])},
       { SCM_OBJ(&scm__rc.d2150[566]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[568])},
       { SCM_OBJ(&scm__rc.d2150[569]), SCM_OBJ(&scm__rc.d2150[552])},
       { SCM_OBJ(&scm__rc.d2150[570]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[33]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[32]), SCM_OBJ(&scm__rc.d2150[572])},
       { SCM_MAKE_INT(458U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[574])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[575])},
       { SCM_OBJ(&scm__rc.d2150[576]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(485U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[579])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[580])},
       { SCM_OBJ(&scm__rc.d2150[581]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(490U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[584])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[585])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[587])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[588])},
       { SCM_OBJ(&scm__rc.d2150[589]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[586]), SCM_OBJ(&scm__rc.d2150[590])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[592])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[593])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[595])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[596])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[597])},
       { SCM_MAKE_INT(497U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[599])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[600])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[602])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[603])},
       { SCM_OBJ(&scm__rc.d2150[604]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[601]), SCM_OBJ(&scm__rc.d2150[605])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[607])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[608])},
       { SCM_MAKE_INT(556U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[610])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[611])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[613])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[614])},
       { SCM_OBJ(&scm__rc.d2150[615]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[612]), SCM_OBJ(&scm__rc.d2150[616])},
       { SCM_MAKE_INT(563U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[618])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[619])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[621])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[622])},
       { SCM_OBJ(&scm__rc.d2150[623]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[620]), SCM_OBJ(&scm__rc.d2150[624])},
       { SCM_MAKE_INT(567U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[626])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[627])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[629])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[630])},
       { SCM_OBJ(&scm__rc.d2150[631]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[628]), SCM_OBJ(&scm__rc.d2150[632])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[634])},
       { SCM_OBJ(&scm__rc.d2150[635]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[636]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[638])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[639]), SCM_OBJ(&scm__rc.d2150[640])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[641]), SCM_OBJ(&scm__rc.d2150[642])},
       { SCM_OBJ(&scm__rc.d2150[643]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[639]), SCM_OBJ(&scm__rc.d2150[645])},
       { SCM_OBJ(&scm__rc.d2150[646]), SCM_OBJ(&scm__rc.d2150[642])},
       { SCM_OBJ(&scm__rc.d2150[647]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[40]), SCM_OBJ(&scm__rc.d2150[649])},
       { SCM_OBJ(&scm__rc.d2152[39]), SCM_OBJ(&scm__rc.d2150[650])},
       { SCM_MAKE_INT(586U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[652])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[653])},
       { SCM_OBJ(&scm__rc.d2150[654]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[41]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[38]), SCM_OBJ(&scm__rc.d2150[657])},
       { SCM_MAKE_INT(584U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[659])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[660])},
       { SCM_OBJ(&scm__rc.d2150[661]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(662U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[664])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[665])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[667])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[668])},
       { SCM_OBJ(&scm__rc.d2150[669]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[666]), SCM_OBJ(&scm__rc.d2150[670])},
       { SCM_MAKE_INT(664U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[672])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[673])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[675])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[676])},
       { SCM_OBJ(&scm__rc.d2150[677]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[674]), SCM_OBJ(&scm__rc.d2150[678])},
       { SCM_MAKE_INT(666U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[680])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[681])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[683])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[684])},
       { SCM_OBJ(&scm__rc.d2150[685]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[682]), SCM_OBJ(&scm__rc.d2150[686])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[688])},
       { SCM_MAKE_INT(668U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[690])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[691])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[693])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[694])},
       { SCM_OBJ(&scm__rc.d2150[695]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[692]), SCM_OBJ(&scm__rc.d2150[696])},
       { SCM_MAKE_INT(670U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[698])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[699])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[701])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[702])},
       { SCM_OBJ(&scm__rc.d2150[703]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[700]), SCM_OBJ(&scm__rc.d2150[704])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[706])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[707])},
       { SCM_MAKE_INT(672U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[709])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[710])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[712])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[713])},
       { SCM_OBJ(&scm__rc.d2150[714]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[711]), SCM_OBJ(&scm__rc.d2150[715])},
       { SCM_MAKE_INT(674U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[717])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[718])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[720])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[721])},
       { SCM_OBJ(&scm__rc.d2150[722]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[719]), SCM_OBJ(&scm__rc.d2150[723])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[725])},
       { SCM_MAKE_INT(676U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[727])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[728])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[730])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[731])},
       { SCM_OBJ(&scm__rc.d2150[732]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[729]), SCM_OBJ(&scm__rc.d2150[733])},
       { SCM_MAKE_INT(680U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[735])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[736])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[738])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[739])},
       { SCM_OBJ(&scm__rc.d2150[740]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[737]), SCM_OBJ(&scm__rc.d2150[741])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[743])},
       { SCM_MAKE_INT(683U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[745])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[746])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[748])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[749])},
       { SCM_OBJ(&scm__rc.d2150[750]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[747]), SCM_OBJ(&scm__rc.d2150[751])},
       { SCM_MAKE_INT(686U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[753])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[754])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[756])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[757])},
       { SCM_OBJ(&scm__rc.d2150[758]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[755]), SCM_OBJ(&scm__rc.d2150[759])},
       { SCM_MAKE_INT(689U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[761])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[762])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[764])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[765])},
       { SCM_OBJ(&scm__rc.d2150[766]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[763]), SCM_OBJ(&scm__rc.d2150[767])},
       { SCM_MAKE_INT(692U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[769])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[770])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[772])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[773])},
       { SCM_OBJ(&scm__rc.d2150[774]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[771]), SCM_OBJ(&scm__rc.d2150[775])},
       { SCM_MAKE_INT(695U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[777])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[778])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[780])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[781])},
       { SCM_OBJ(&scm__rc.d2150[782]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[779]), SCM_OBJ(&scm__rc.d2150[783])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_MAKE_INT(698U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[8]), SCM_OBJ(&scm__rc.d2150[786])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[787])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[789])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[790])},
       { SCM_OBJ(&scm__rc.d2150[791]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[788]), SCM_OBJ(&scm__rc.d2150[792])},
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(6, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(200, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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

static ScmObj libstrstring_ellipsis(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("string-ellipsis");
  {
{
ScmObj SCM_RESULT;

#line 46 "libstr.scm"
{static ScmObj elli=SCM_UNDEFINED;
if (SCM_UNDEFINEDP(elli)){{
elli=(SCM_MAKE_STR_IMMUTABLE(SCM_WRITTEN_ELLIPSIS));}}
{SCM_RESULT=(elli);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstringP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_STRINGP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_incompleteP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-incomplete?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 61 "libstr.scm"
{SCM_RESULT=((SCM_STRINGP(obj))&&(SCM_STRING_INCOMPLETE_P(obj)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_immutableP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-immutable?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 63 "libstr.scm"
{SCM_RESULT=((SCM_STRINGP(obj))&&(SCM_STRING_IMMUTABLE_P(obj)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrmake_string(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj len_scm;
  ScmSmallInt len;
  ScmObj c_scm;
  ScmChar c;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-string");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  len_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(len_scm)) Scm_Error("ScmSmallInt required, but got %S", len_scm);
  len = SCM_INT_VALUE(len_scm);
  if (SCM_ARGCNT > 1+1) {
    c_scm = SCM_SUBRARGS[1];
  } else {
    c_scm = SCM_MAKE_CHAR(32);
  }
  if (!SCM_CHARP(c_scm)) Scm_Error("character required, but got %S", c_scm);
  c = SCM_CHAR_VALUE(c_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeFillString(len,c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj chars_scm;
  ScmObj chars;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  chars_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(chars_scm)) Scm_Error("list required, but got %S", chars_scm);
  chars = (chars_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ListToString(chars));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_copy(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj start_scm;
  ScmObj start;
  ScmObj end_scm;
  ScmObj end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-copy");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_UNBOUND;
  }
  if (!(start_scm)) Scm_Error("scheme object required, but got %S", start_scm);
  start = (start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_UNBOUND;
  }
  if (!(end_scm)) Scm_Error("scheme object required, but got %S", end_scm);
  end = (end_scm);
  {
{
ScmObj SCM_RESULT;

#line 74 "libstr.scm"
{SCM_RESULT=(Scm_CopyString(SCM_STRING(Scm_MaybeSubstring(str,start,end))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_append(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-append");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_StringAppend(args));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_copy_immutable(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj start_scm;
  ScmObj start;
  ScmObj end_scm;
  ScmObj end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-copy-immutable");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_UNBOUND;
  }
  if (!(start_scm)) Scm_Error("scheme object required, but got %S", start_scm);
  start = (start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_UNBOUND;
  }
  if (!(end_scm)) Scm_Error("scheme object required, but got %S", end_scm);
  end = (end_scm);
  {
{
ScmObj SCM_RESULT;

#line 80 "libstr.scm"
{ScmObj s=Scm_MaybeSubstring(str,start,end);
if (SCM_STRING_IMMUTABLE_P(s)){
{SCM_RESULT=(s);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_CopyStringWithFlags(SCM_STRING(s),SCM_STRING_IMMUTABLE,SCM_STRING_IMMUTABLE));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_join(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj strs_scm;
  ScmObj strs;
  ScmObj delim_scm;
  ScmString* delim;
  ScmObj grammar_scm;
  ScmObj grammar;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-join");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  strs_scm = SCM_SUBRARGS[0];
  if (!SCM_LISTP(strs_scm)) Scm_Error("list required, but got %S", strs_scm);
  strs = (strs_scm);
  if (SCM_ARGCNT > 1+1) {
    delim_scm = SCM_SUBRARGS[1];
  } else {
    delim_scm = SCM_OBJ(&scm__sc.d2148[31]);
  }
  if (!SCM_STRINGP(delim_scm)) Scm_Error("<string> required, but got %S", delim_scm);
  delim = SCM_STRING(delim_scm);
  if (SCM_ARGCNT > 2+1) {
    grammar_scm = SCM_SUBRARGS[2];
  } else {
    grammar_scm = scm__rc.d2149[90];
  }
  if (!(grammar_scm)) Scm_Error("scheme object required, but got %S", grammar_scm);
  grammar = (grammar_scm);
  {
{
ScmObj SCM_RESULT;

#line 89 "libstr.scm"
{int gm=0;
if (
SCM_EQ(grammar,scm__rc.d2149[90])){gm=(SCM_STRING_JOIN_INFIX);}else if(
SCM_EQ(grammar,scm__rc.d2149[93])){gm=(SCM_STRING_JOIN_STRICT_INFIX);}else if(
SCM_EQ(grammar,scm__rc.d2149[92])){gm=(SCM_STRING_JOIN_SUFFIX);}else if(
SCM_EQ(grammar,scm__rc.d2149[91])){gm=(SCM_STRING_JOIN_PREFIX);} else {
SCM_TYPE_ERROR(grammar,"one of the symbols infix, strict-infix, suffix, or prefix");}
#line 97 "libstr.scm"
{SCM_RESULT=(Scm_StringJoin(strs,delim,gm));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_TOlist(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj start_scm;
  ScmObj start;
  ScmObj end_scm;
  ScmObj end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string->list");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_UNBOUND;
  }
  if (!(start_scm)) Scm_Error("scheme object required, but got %S", start_scm);
  start = (start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_UNBOUND;
  }
  if (!(end_scm)) Scm_Error("scheme object required, but got %S", end_scm);
  end = (end_scm);
  {
{
ScmObj SCM_RESULT;

#line 109 "libstr.scm"
{SCM_RESULT=(Scm_StringToList(SCM_STRING(Scm_MaybeSubstring(str,start,end))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrlist_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj list_scm;
  ScmObj list;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("list->string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  list_scm = SCM_SUBRARGS[0];
  if (!SCM_LISTP(list_scm)) Scm_Error("list required, but got %S", list_scm);
  list = (list_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ListToString(list));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_length(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-length");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  {
{
ScmSmallInt SCM_RESULT;

#line 118 "libstr.scm"
{SCM_RESULT=(SCM_STRING_BODY_LENGTH(SCM_STRING_BODY(str)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_INT(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj k_scm;
  ScmObj k;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  k_scm = SCM_SUBRARGS[1];
  if (!(k_scm)) Scm_Error("scheme object required, but got %S", k_scm);
  k = (k_scm);
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

#line 121 "libstr.scm"
{ScmChar r=Scm_StringRefCursor(str,k,SCM_UNBOUNDP(fallback));
{SCM_RESULT=((((r)==(SCM_CHAR_INVALID))?(fallback):(SCM_MAKE_CHAR(r))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrsubstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj start_scm;
  ScmObj start;
  ScmObj end_scm;
  ScmObj end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("substring");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  start_scm = SCM_SUBRARGS[1];
  if (!(start_scm)) Scm_Error("scheme object required, but got %S", start_scm);
  start = (start_scm);
  end_scm = SCM_SUBRARGS[2];
  if (!(end_scm)) Scm_Error("scheme object required, but got %S", end_scm);
  end = (end_scm);
  {
{
ScmObj SCM_RESULT;

#line 124 "libstr.scm"
{SCM_RESULT=(Scm_SubstringCursor(str,start,end));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_size(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-size");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  {
{
ScmSmallInt SCM_RESULT;

#line 128 "libstr.scm"
{SCM_RESULT=(SCM_STRING_BODY_SIZE(SCM_STRING_BODY(str)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_INT(SCM_RESULT));
}
  }
}


static ScmObj libstropt_substring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj start_scm;
  ScmObj start;
  ScmObj end_scm;
  ScmObj end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("opt-substring");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_UNBOUND;
  }
  if (!(start_scm)) Scm_Error("scheme object required, but got %S", start_scm);
  start = (start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_UNBOUND;
  }
  if (!(end_scm)) Scm_Error("scheme object required, but got %S", end_scm);
  end = (end_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MaybeSubstring(str,start,end));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstr_25hash_string(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj bound_scm;
  ScmObj bound;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%hash-string");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  if (SCM_ARGCNT > 1+1) {
    bound_scm = SCM_SUBRARGS[1];
  } else {
    bound_scm = SCM_UNBOUND;
  }
  if (!(bound_scm)) Scm_Error("scheme object required, but got %S", bound_scm);
  bound = (bound_scm);
  {
{
u_long SCM_RESULT;

#line 135 "libstr.scm"
{u_long modulo=0;
if ((SCM_UNBOUNDP(bound))||(SCM_UNDEFINEDP(bound))){
modulo=(0);}else if(
SCM_INTP(bound)){modulo=(SCM_INT_VALUE(bound));}else if(
SCM_BIGNUMP(bound)){
modulo=(
Scm_BignumToUI(SCM_BIGNUM(bound),SCM_CLAMP_BOTH,NULL));} else {
Scm_Error("argument out of domain: %S",bound);}
{SCM_RESULT=(Scm_HashString(str,modulo));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}

 int string_scan_mode(ScmObj mode){{
#line 148 "libstr.scm"
{int rmode=0;
if (
SCM_EQ(mode,scm__rc.d2149[191])){rmode=(SCM_STRING_SCAN_INDEX);}else if(
SCM_EQ(mode,scm__rc.d2149[190])){rmode=(SCM_STRING_SCAN_CURSOR);}else if(
SCM_EQ(mode,scm__rc.d2149[189])){rmode=(SCM_STRING_SCAN_BEFORE);}else if(
SCM_EQ(mode,scm__rc.d2149[188])){rmode=(SCM_STRING_SCAN_AFTER);}else if(
SCM_EQ(mode,scm__rc.d2149[187])){rmode=(SCM_STRING_SCAN_BEFORE2);}else if(
SCM_EQ(mode,scm__rc.d2149[186])){rmode=(SCM_STRING_SCAN_AFTER2);}else if(
SCM_EQ(mode,scm__rc.d2149[185])){rmode=(SCM_STRING_SCAN_BOTH);} else {
Scm_Error("bad value in mode argumet: %S, must be one of 'index, 'before, 'after, 'before*, 'after* or 'both.",mode);}
#line 159 "libstr.scm"
return (rmode);}}}

static ScmObj libstrstring_scan(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmObj s2;
  ScmObj mode_scm;
  ScmObj mode;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-scan");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!(s2_scm)) Scm_Error("scheme object required, but got %S", s2_scm);
  s2 = (s2_scm);
  if (SCM_ARGCNT > 2+1) {
    mode_scm = SCM_SUBRARGS[2];
  } else {
    mode_scm = scm__rc.d2149[191];
  }
  if (!(mode_scm)) Scm_Error("scheme object required, but got %S", mode_scm);
  mode = (mode_scm);
  {
{
ScmObj SCM_RESULT;

#line 163 "libstr.scm"
{int rmode=string_scan_mode(mode);
if (
SCM_STRINGP(s2)){{SCM_RESULT=(Scm_StringScan(s1,SCM_STRING(s2),rmode));goto SCM_STUB_RETURN;}}else if(
SCM_CHARP(s2)){
{SCM_RESULT=(Scm_StringScanChar(s1,SCM_CHAR_VALUE(s2),rmode));goto SCM_STUB_RETURN;}} else {
Scm_Error("bad type of argument for s2: %S, must be either string or character",s2);
#line 170 "libstr.scm"
{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_scan_right(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmObj s2;
  ScmObj mode_scm;
  ScmObj mode;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-scan-right");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!(s2_scm)) Scm_Error("scheme object required, but got %S", s2_scm);
  s2 = (s2_scm);
  if (SCM_ARGCNT > 2+1) {
    mode_scm = SCM_SUBRARGS[2];
  } else {
    mode_scm = scm__rc.d2149[191];
  }
  if (!(mode_scm)) Scm_Error("scheme object required, but got %S", mode_scm);
  mode = (mode_scm);
  {
{
ScmObj SCM_RESULT;

#line 173 "libstr.scm"
{int rmode=string_scan_mode(mode);
if (
SCM_STRINGP(s2)){{SCM_RESULT=(Scm_StringScanRight(s1,SCM_STRING(s2),rmode));goto SCM_STUB_RETURN;}}else if(
SCM_CHARP(s2)){
{SCM_RESULT=(Scm_StringScanCharRight(s1,SCM_CHAR_VALUE(s2),rmode));goto SCM_STUB_RETURN;}} else {
Scm_Error("bad type of argument for s2: %S, must be either string or character",s2);
#line 180 "libstr.scm"
{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstr_25string_split_by_char(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj ch_scm;
  ScmChar ch;
  ScmObj limit_scm;
  int limit;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("%string-split-by-char");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  ch_scm = SCM_SUBRARGS[1];
  if (!SCM_CHARP(ch_scm)) Scm_Error("character required, but got %S", ch_scm);
  ch = SCM_CHAR_VALUE(ch_scm);
  if (SCM_ARGCNT > 2+1) {
    limit_scm = SCM_SUBRARGS[2];
  } else {
    limit_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTEGERP(limit_scm)) Scm_Error("int required, but got %S", limit_scm);
  limit = Scm_GetInteger(limit_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_StringSplitByCharWithLimit(s,ch,limit));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstr_25string_replace_bodyX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj target_scm;
  ScmString* target;
  ScmObj source_scm;
  ScmString* source;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%string-replace-body!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  target_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(target_scm)) Scm_Error("<string> required, but got %S", target_scm);
  target = SCM_STRING(target_scm);
  source_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(source_scm)) Scm_Error("<string> required, but got %S", source_scm);
  source = SCM_STRING(source_scm);
  {
{
ScmObj SCM_RESULT;

#line 289 "libstr.scm"
{SCM_RESULT=(Scm_StringReplaceBody(target,SCM_STRING_BODY(source)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_build_indexX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-build-index!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  {
{
ScmString* SCM_RESULT;

#line 340 "libstr.scm"
Scm_StringBodyBuildIndex(((ScmStringBody* )(SCM_STRING_BODY(s))));

#line 341 "libstr.scm"
{SCM_RESULT=(s);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_fast_indexableP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-fast-indexable?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  {
{
int SCM_RESULT;

#line 344 "libstr.scm"
{SCM_RESULT=(Scm_StringBodyFastIndexableP(SCM_STRING_BODY(s)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstr_25string_index_dump(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj p_scm;
  ScmPort* p;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%string-index-dump");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  if (SCM_ARGCNT > 1+1) {
    p_scm = SCM_SUBRARGS[1];
  } else {
    p_scm = SCM_OBJ(SCM_CUROUT);
  }
  if (!SCM_PORTP(p_scm)) Scm_Error("<port> required, but got %S", p_scm);
  p = SCM_PORT(p_scm);
  {

#line 348 "libstr.scm"
Scm_StringBodyIndexDump(SCM_STRING_BODY(s),p);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libstrstring_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 373 "libstr.scm"
while(TRUE){if (Scm_StringEqual(s1,s2)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_LTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string<?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 376 "libstr.scm"
while(TRUE){if ((Scm_StringCmp(s1,s2))<(0)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_GTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string>?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 379 "libstr.scm"
while(TRUE){if ((Scm_StringCmp(s1,s2))>(0)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_LT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string<=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 382 "libstr.scm"
while(TRUE){if ((Scm_StringCmp(s1,s2))<=(0)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_GT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string>=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 385 "libstr.scm"
while(TRUE){if ((Scm_StringCmp(s1,s2))>=(0)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_ci_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-ci=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 389 "libstr.scm"
while(TRUE){if ((Scm_StringCiCmp(s1,s2))==(0)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_ci_LTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-ci<?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 392 "libstr.scm"
while(TRUE){if ((Scm_StringCiCmp(s1,s2))<(0)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_ci_GTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-ci>?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 395 "libstr.scm"
while(TRUE){if ((Scm_StringCiCmp(s1,s2))>(0)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_ci_LT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-ci<=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 398 "libstr.scm"
while(TRUE){if ((Scm_StringCiCmp(s1,s2))<=(0)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_ci_GT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s1_scm;
  ScmString* s1;
  ScmObj s2_scm;
  ScmString* s2;
  ScmObj ss_scm;
  ScmObj ss;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-ci>=?");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s1_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s1_scm)) Scm_Error("<string> required, but got %S", s1_scm);
  s1 = SCM_STRING(s1_scm);
  s2_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(s2_scm)) Scm_Error("<string> required, but got %S", s2_scm);
  s2 = SCM_STRING(s2_scm);
  ss_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(ss_scm)) Scm_Error("list required, but got %S", ss_scm);
  ss = (ss_scm);
  {
{
int SCM_RESULT;

#line 401 "libstr.scm"
while(TRUE){if ((Scm_StringCiCmp(s1,s2))>=(0)){if (SCM_NULLP(ss)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}break;}else if(!(SCM_STRINGP(SCM_CAR(ss)))){SCM_TYPE_ERROR(SCM_CAR(ss),"string");} else {s1=(s2);s2=(SCM_STRING(SCM_CAR(ss)));ss=(SCM_CDR(ss));}} else {{{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}break;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_complete_TOincomplete(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-complete->incomplete");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  {
{
ScmObj SCM_RESULT;

#line 491 "libstr.scm"
{SCM_RESULT=(Scm_CopyStringWithFlags(str,SCM_STRING_INCOMPLETE,SCM_STRING_INCOMPLETE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_incomplete_TOcomplete(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj handling_scm;
  ScmObj handling;
  ScmObj filler_scm;
  ScmObj filler;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-incomplete->complete");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  if (SCM_ARGCNT > 1+1) {
    handling_scm = SCM_SUBRARGS[1];
  } else {
    handling_scm = SCM_FALSE;
  }
  if (!(handling_scm)) Scm_Error("scheme object required, but got %S", handling_scm);
  handling = (handling_scm);
  if (SCM_ARGCNT > 2+1) {
    filler_scm = SCM_SUBRARGS[2];
  } else {
    filler_scm = SCM_FALSE;
  }
  if (!(filler_scm)) Scm_Error("scheme object required, but got %S", filler_scm);
  filler = (filler_scm);
  {
{
ScmObj SCM_RESULT;

#line 501 "libstr.scm"
if (SCM_CHARP(handling)){{
filler=(handling),handling=(
scm__rc.d2149[505]);}}

#line 505 "libstr.scm"
if (!((SCM_FALSEP(handling))||(
Scm_Memq(handling,SCM_OBJ(&scm__rc.d2150[594]))))){{
Scm_Error("Either #f, :omit, :replace or :escape required, but got:",handling);}}

#line 509 "libstr.scm"
if (!((SCM_FALSEP(filler))||(SCM_CHARP(filler)))){{
Scm_Error("Either a character or #f required, but got:",filler);}}

#line 511 "libstr.scm"
{const ScmStringBody* b=SCM_STRING_BODY(str);
if (!(SCM_STRING_BODY_INCOMPLETE_P(b))){{
#line 514 "libstr.scm"
{SCM_RESULT=(Scm_CopyString(str));goto SCM_STUB_RETURN;}}}
{const char* s=SCM_STRING_BODY_START(b);ScmSmallInt siz=
SCM_STRING_BODY_SIZE(b);ScmSmallInt len=
Scm_MBLen(s,(s)+(siz));
if ((len)>=(0)){{
#line 520 "libstr.scm"
{SCM_RESULT=(Scm_MakeString(s,siz,len,0));goto SCM_STUB_RETURN;}}}
if (SCM_FALSEP(handling)){{
#line 523 "libstr.scm"
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}}
{const char* p=s;ScmDString ds;ScmChar echar=
#line 526 "libstr.scm"
((SCM_CHARP(filler))?(
SCM_CHAR_VALUE(filler)):('\x3f'));
#line 529 "libstr.scm"
Scm_DStringInit(&(ds));
while((p)<((s)+(siz))){
{ScmChar ch;
if (((p)+(SCM_CHAR_NFOLLOWS(*(p))))>=((s)+(siz))){
ch=(SCM_CHAR_INVALID);} else {
SCM_CHAR_GET(p,ch);}
if (
(SCM_EQ(handling,scm__rc.d2149[507]))&&(
(ch)==(echar))){
Scm_DStringPutc(&(ds),ch);
Scm_DStringPutc(&(ds),ch);
(p)+=(SCM_CHAR_NBYTES(ch));}else if(
(ch)!=(SCM_CHAR_INVALID)){
Scm_DStringPutc(&(ds),ch);
(p)+=(SCM_CHAR_NBYTES(ch));}else if(
SCM_EQ(handling,scm__rc.d2149[506])){++(p);}else if(
SCM_EQ(handling,scm__rc.d2149[505])){
Scm_DStringPutc(&(ds),echar);
++(p);}else if(
SCM_EQ(handling,scm__rc.d2149[507])){
{u_char octet=*(p);
Scm_DStringPutc(&(ds),echar);
Scm_DStringPutc(&(ds),Scm_IntToDigit((octet)>>(4),16,0,0));
Scm_DStringPutc(&(ds),Scm_IntToDigit((octet)&(15),16,0,0));
++(p);}}}}
{SCM_RESULT=(Scm_DStringGet(&(ds),0));goto SCM_STUB_RETURN;}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrmake_byte_string(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj size_scm;
  int32_t size;
  ScmObj byte_scm;
  uint8_t byte;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-byte-string");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  size_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(size_scm)) Scm_Error("int32_t required, but got %S", size_scm);
  size = Scm_GetInteger32(size_scm);
  if (SCM_ARGCNT > 1+1) {
    byte_scm = SCM_SUBRARGS[1];
  } else {
    byte_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_UINTP(byte_scm)) Scm_Error("uint8_t required, but got %S", byte_scm);
  byte = Scm_GetIntegerU8(byte_scm);
  {
{
ScmObj SCM_RESULT;

#line 557 "libstr.scm"
{char* s;
if ((size)<(0)){{Scm_Error("size out of bound: %d",size);}}
s=(SCM_NEW_ATOMIC2(char*,size));
memset(s,byte,size);
{SCM_RESULT=(Scm_MakeString(s,size,size,SCM_STRING_INCOMPLETE));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_byte_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj k_scm;
  ScmSmallInt k;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-byte-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  k_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(k_scm)) Scm_Error("ScmSmallInt required, but got %S", k_scm);
  k = SCM_INT_VALUE(k_scm);
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

#line 564 "libstr.scm"
{int r=Scm_StringByteRef(str,k,SCM_UNBOUNDP(fallback));
{SCM_RESULT=((((r)<(0))?(fallback):(SCM_MAKE_INT(r))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrbyte_substring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj str_scm;
  ScmString* str;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("byte-substring");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  str_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(str_scm)) Scm_Error("<string> required, but got %S", str_scm);
  str = SCM_STRING(str_scm);
  start_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  end_scm = SCM_SUBRARGS[2];
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
{
ScmObj SCM_RESULT;

#line 568 "libstr.scm"
{SCM_RESULT=(Scm_Substring(str,start,end,TRUE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-cursor?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_STRING_CURSOR_P(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_start(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-cursor-start");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  {
{
ScmObj SCM_RESULT;

#line 665 "libstr.scm"
{SCM_RESULT=(Scm_MakeStringCursorFromIndex(s,0));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_end(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string-cursor-end");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeStringCursorEnd(s));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_next(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj cursor_scm;
  ScmObj cursor;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("string-cursor-next");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  cursor_scm = SCM_SUBRARGS[1];
  if (!(cursor_scm)) Scm_Error("scheme object required, but got %S", cursor_scm);
  cursor = (cursor_scm);
  {
{
ScmObj SCM_RESULT;

#line 669 "libstr.scm"
{SCM_RESULT=(Scm_StringCursorForward(s,cursor,1));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_prev(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj cursor_scm;
  ScmObj cursor;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("string-cursor-prev");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  cursor_scm = SCM_SUBRARGS[1];
  if (!(cursor_scm)) Scm_Error("scheme object required, but got %S", cursor_scm);
  cursor = (cursor_scm);
  {
{
ScmObj SCM_RESULT;

#line 671 "libstr.scm"
{SCM_RESULT=(Scm_StringCursorBack(s,cursor,1));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_forward(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj cursor_scm;
  ScmObj cursor;
  ScmObj nchars_scm;
  ScmSmallInt nchars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-cursor-forward");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  cursor_scm = SCM_SUBRARGS[1];
  if (!(cursor_scm)) Scm_Error("scheme object required, but got %S", cursor_scm);
  cursor = (cursor_scm);
  nchars_scm = SCM_SUBRARGS[2];
  if (!SCM_INTP(nchars_scm)) Scm_Error("ScmSmallInt required, but got %S", nchars_scm);
  nchars = SCM_INT_VALUE(nchars_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_StringCursorForward(s,cursor,nchars));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_back(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj cursor_scm;
  ScmObj cursor;
  ScmObj nchars_scm;
  ScmSmallInt nchars;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-cursor-back");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  cursor_scm = SCM_SUBRARGS[1];
  if (!(cursor_scm)) Scm_Error("scheme object required, but got %S", cursor_scm);
  cursor = (cursor_scm);
  nchars_scm = SCM_SUBRARGS[2];
  if (!SCM_INTP(nchars_scm)) Scm_Error("ScmSmallInt required, but got %S", nchars_scm);
  nchars = SCM_INT_VALUE(nchars_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_StringCursorBack(s,cursor,nchars));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_index_TOcursor(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj index_scm;
  ScmObj index;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("string-index->cursor");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  index_scm = SCM_SUBRARGS[1];
  if (!(index_scm)) Scm_Error("scheme object required, but got %S", index_scm);
  index = (index_scm);
  {
{
ScmObj SCM_RESULT;

#line 677 "libstr.scm"
if (SCM_STRING_CURSOR_P(index)){
{SCM_RESULT=(index);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_MakeStringCursorFromIndex(s,Scm_GetInteger(index)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_TOindex(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj cursor_scm;
  ScmObj cursor;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("string-cursor->index");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  cursor_scm = SCM_SUBRARGS[1];
  if (!(cursor_scm)) Scm_Error("scheme object required, but got %S", cursor_scm);
  cursor = (cursor_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_StringCursorIndex(s,cursor));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cursor1_scm;
  ScmObj cursor1;
  ScmObj cursor2_scm;
  ScmObj cursor2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("string-cursor=?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cursor1_scm = SCM_SUBRARGS[0];
  if (!(cursor1_scm)) Scm_Error("scheme object required, but got %S", cursor1_scm);
  cursor1 = (cursor1_scm);
  cursor2_scm = SCM_SUBRARGS[1];
  if (!(cursor2_scm)) Scm_Error("scheme object required, but got %S", cursor2_scm);
  cursor2 = (cursor2_scm);
  {
{
int SCM_RESULT;

#line 684 "libstr.scm"
{SCM_RESULT=(Scm_StringCursorCompare(cursor1,cursor2,Scm_NumEq));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_LTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cursor1_scm;
  ScmObj cursor1;
  ScmObj cursor2_scm;
  ScmObj cursor2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("string-cursor<?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cursor1_scm = SCM_SUBRARGS[0];
  if (!(cursor1_scm)) Scm_Error("scheme object required, but got %S", cursor1_scm);
  cursor1 = (cursor1_scm);
  cursor2_scm = SCM_SUBRARGS[1];
  if (!(cursor2_scm)) Scm_Error("scheme object required, but got %S", cursor2_scm);
  cursor2 = (cursor2_scm);
  {
{
int SCM_RESULT;

#line 687 "libstr.scm"
{SCM_RESULT=(Scm_StringCursorCompare(cursor1,cursor2,Scm_NumLT));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_GTP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cursor1_scm;
  ScmObj cursor1;
  ScmObj cursor2_scm;
  ScmObj cursor2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("string-cursor>?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cursor1_scm = SCM_SUBRARGS[0];
  if (!(cursor1_scm)) Scm_Error("scheme object required, but got %S", cursor1_scm);
  cursor1 = (cursor1_scm);
  cursor2_scm = SCM_SUBRARGS[1];
  if (!(cursor2_scm)) Scm_Error("scheme object required, but got %S", cursor2_scm);
  cursor2 = (cursor2_scm);
  {
{
int SCM_RESULT;

#line 690 "libstr.scm"
{SCM_RESULT=(Scm_StringCursorCompare(cursor1,cursor2,Scm_NumGT));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_LT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cursor1_scm;
  ScmObj cursor1;
  ScmObj cursor2_scm;
  ScmObj cursor2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("string-cursor<=?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cursor1_scm = SCM_SUBRARGS[0];
  if (!(cursor1_scm)) Scm_Error("scheme object required, but got %S", cursor1_scm);
  cursor1 = (cursor1_scm);
  cursor2_scm = SCM_SUBRARGS[1];
  if (!(cursor2_scm)) Scm_Error("scheme object required, but got %S", cursor2_scm);
  cursor2 = (cursor2_scm);
  {
{
int SCM_RESULT;

#line 693 "libstr.scm"
{SCM_RESULT=(Scm_StringCursorCompare(cursor1,cursor2,Scm_NumLE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_GT_3dP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cursor1_scm;
  ScmObj cursor1;
  ScmObj cursor2_scm;
  ScmObj cursor2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("string-cursor>=?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cursor1_scm = SCM_SUBRARGS[0];
  if (!(cursor1_scm)) Scm_Error("scheme object required, but got %S", cursor1_scm);
  cursor1 = (cursor1_scm);
  cursor2_scm = SCM_SUBRARGS[1];
  if (!(cursor2_scm)) Scm_Error("scheme object required, but got %S", cursor2_scm);
  cursor2 = (cursor2_scm);
  {
{
int SCM_RESULT;

#line 696 "libstr.scm"
{SCM_RESULT=(Scm_StringCursorCompare(cursor1,cursor2,Scm_NumGE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libstrstring_cursor_diff(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj start_scm;
  ScmObj start;
  ScmObj end_scm;
  ScmObj end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string-cursor-diff");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  start_scm = SCM_SUBRARGS[1];
  if (!(start_scm)) Scm_Error("scheme object required, but got %S", start_scm);
  start = (start_scm);
  end_scm = SCM_SUBRARGS[2];
  if (!(end_scm)) Scm_Error("scheme object required, but got %S", end_scm);
  end = (end_scm);
  {
{
ScmObj SCM_RESULT;

#line 699 "libstr.scm"
{SCM_RESULT=(Scm_Sub(Scm_StringCursorIndex(s,end),
Scm_StringCursorIndex(s,start)));goto SCM_STUB_RETURN;}
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
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[14])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[18])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[24])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[27])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[31])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[35])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[37])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[43])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[108];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[78];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[114];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[2];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[220];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[52];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[212];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[97];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[214];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[65];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[66];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[90];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[218];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[71]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[39];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[828];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[829];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[830];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[831];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[832];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[833];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[834];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[210];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[835];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[257];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[248];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[255];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[89]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[836];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[92];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[91];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[837];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[229];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[230];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_INT(-1);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[253];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[251];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[838];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[91]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[93];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[171];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[88]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[839];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[87]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[840];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[841];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[63];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[842];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[129];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[189];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[188];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[843];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[192];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[185];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[274];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[275];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[267];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[844];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[845];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[283];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[846];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[847];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[279];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[281];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[848];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[849];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[850];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[272];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[851];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[12];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[852];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[298];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[853];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[151];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[854];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[301];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[138];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[294];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[855];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[290];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[292];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[306];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[373];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[307];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[856];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[311];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[64];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[77];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[231];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[139];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[328];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[326];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[114]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[324];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[857];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[858];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[15];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[323];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[338];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[354];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[859];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[350];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[348];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[860];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[352];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[355];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[123]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[370];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[162];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[346];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[344];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[342];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[26];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[340];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[361];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[37];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[368];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[366];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[40];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[38];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[372];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[137]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[367];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[861];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[862];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[863];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[864];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[364];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[162]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[450];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[452];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[449];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[865];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[447];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[441];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[866];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[445];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[160]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[158]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[448];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[451];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[440];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[867];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[462];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[119];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[468];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[95];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[868];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[869];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[470];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[870];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[464];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[465];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[472];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[871];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[872];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[479];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[480];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[482];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[873];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[874];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[490];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[875];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[488];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[876];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[877];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[878];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[879];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[553];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[555];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[880];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[881];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_OBJ(&scm__sc.d2148[190]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[551];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(60);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(41);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(40);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[547];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[882];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(125);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(123);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[883];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(93);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(91);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[884];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[549];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(44);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[557];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(47);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(34);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(92);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(35);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(10);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(59);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = SCM_MAKE_CHAR(124);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[885];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[544];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[562];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[554];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[626]), i++) = scm__rc.d2149[546];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[626]);
}
void Scm_Init_libstr() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* string-ellipsis */
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
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("string-ellipsis")), SCM_OBJ(&libstrstring_ellipsis__STUB), 0);
  libstrstring_ellipsis__STUB.common.info = scm__rc.d2149[3];
  libstrstring_ellipsis__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[6]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[5])),TRUE); /* string? */
  scm__rc.d2149[13] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[6])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[5]), scm__rc.d2149[13]);
  scm__rc.d2149[14] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[7])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[8]), scm__rc.d2149[14]);
  scm__rc.d2149[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* scheme */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[9]), scm__rc.d2149[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[10]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[11]), scm__rc.d2149[1]);
  scm__rc.d2149[16] = Scm_MakeExtendedPair(scm__rc.d2149[12], SCM_OBJ(&scm__rc.d2150[5]), SCM_OBJ(&scm__rc.d2150[13]));
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[3] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[4] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[6] = scm__rc.d2149[17];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string?")), SCM_OBJ(&libstrstringP__STUB), SCM_BINDING_INLINABLE);
  libstrstringP__STUB.common.info = scm__rc.d2149[16];
  libstrstringP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[25] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* string-incomplete? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[16]), scm__rc.d2149[14]);
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[17]), scm__rc.d2149[25]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[18]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[19]), scm__rc.d2149[1]);
  scm__rc.d2149[27] = Scm_MakeExtendedPair(scm__rc.d2149[25], SCM_OBJ(&scm__rc.d2150[5]), SCM_OBJ(&scm__rc.d2150[21]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[4] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[28]))[6] = scm__rc.d2149[17];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-incomplete?")), SCM_OBJ(&libstrstring_incompleteP__STUB), 0);
  libstrstring_incompleteP__STUB.common.info = scm__rc.d2149[27];
  libstrstring_incompleteP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[28]);
  scm__rc.d2149[35] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* string-immutable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[24]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[25]), scm__rc.d2149[35]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[27]), scm__rc.d2149[1]);
  scm__rc.d2149[36] = Scm_MakeExtendedPair(scm__rc.d2149[35], SCM_OBJ(&scm__rc.d2150[5]), SCM_OBJ(&scm__rc.d2150[29]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-immutable?")), SCM_OBJ(&libstrstring_immutableP__STUB), 0);
  libstrstring_immutableP__STUB.common.info = scm__rc.d2149[36];
  libstrstring_immutableP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[28]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* make-string */
  scm__rc.d2149[38] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* len */
  scm__rc.d2149[39] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16]))); /* :optional */
  scm__rc.d2149[40] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* c */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[30]), scm__rc.d2149[40]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[31]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[32]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[35]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[36]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[37]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[38]), scm__rc.d2149[1]);
  scm__rc.d2149[41] = Scm_MakeExtendedPair(scm__rc.d2149[37], SCM_OBJ(&scm__rc.d2150[32]), SCM_OBJ(&scm__rc.d2150[40]));
  scm__rc.d2149[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* <fixnum> */
  scm__rc.d2149[43] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[44]))[3] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[44]))[4] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[44]))[5] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[44]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[44]))[7] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("make-string")), SCM_OBJ(&libstrmake_string__STUB), 0);
  libstrmake_string__STUB.common.info = scm__rc.d2149[41];
  libstrmake_string__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[44]);
  scm__rc.d2149[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* string */
  scm__rc.d2149[53] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21]))); /* :rest */
  scm__rc.d2149[54] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* chars */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[41]), scm__rc.d2149[54]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[42]), scm__rc.d2149[53]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[52]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[47]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[48]), scm__rc.d2149[1]);
  scm__rc.d2149[55] = Scm_MakeExtendedPair(scm__rc.d2149[52], SCM_OBJ(&scm__rc.d2150[42]), SCM_OBJ(&scm__rc.d2150[50]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[56]))[3] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[56]))[4] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[56]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[56]))[6] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string")), SCM_OBJ(&libstrstring__STUB), 0);
  libstrstring__STUB.common.info = scm__rc.d2149[55];
  libstrstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[56]);
  scm__rc.d2149[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* string-copy */
  scm__rc.d2149[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* str */
  scm__rc.d2149[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* start */
  scm__rc.d2149[66] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* end */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[51]), scm__rc.d2149[66]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[52]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[53]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[57]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[58]), scm__rc.d2149[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[1]);
  scm__rc.d2149[67] = Scm_MakeExtendedPair(scm__rc.d2149[63], SCM_OBJ(&scm__rc.d2150[54]), SCM_OBJ(&scm__rc.d2150[62]));
  scm__rc.d2149[68] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* <string> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[69]))[3] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[69]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[69]))[5] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[69]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[69]))[7] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string-copy")), SCM_OBJ(&libstrstring_copy__STUB), 0);
  libstrstring_copy__STUB.common.info = scm__rc.d2149[67];
  libstrstring_copy__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[69]);
  scm__rc.d2149[77] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* string-append */
  scm__rc.d2149[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[63]), scm__rc.d2149[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[64]), scm__rc.d2149[53]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[67]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[68]), scm__rc.d2149[77]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[70]), scm__rc.d2149[1]);
  scm__rc.d2149[79] = Scm_MakeExtendedPair(scm__rc.d2149[77], SCM_OBJ(&scm__rc.d2150[64]), SCM_OBJ(&scm__rc.d2150[72]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string-append")), SCM_OBJ(&libstrstring_append__STUB), 0);
  libstrstring_append__STUB.common.info = scm__rc.d2149[79];
  libstrstring_append__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[56]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* string-copy-immutable */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[75]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[76]), scm__rc.d2149[80]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[1]);
  scm__rc.d2149[81] = Scm_MakeExtendedPair(scm__rc.d2149[80], SCM_OBJ(&scm__rc.d2150[54]), SCM_OBJ(&scm__rc.d2150[80]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[82]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[82]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[82]))[5] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[82]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[82]))[7] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-copy-immutable")), SCM_OBJ(&libstrstring_copy_immutable__STUB), 0);
  libstrstring_copy_immutable__STUB.common.info = scm__rc.d2149[81];
  libstrstring_copy_immutable__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[82]);
  scm__rc.d2149[90] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* infix */
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* prefix */
  scm__rc.d2149[92] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* suffix */
  scm__rc.d2149[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* strict-infix */
  scm__rc.d2149[94] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* string-join */
  scm__rc.d2149[95] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* strs */
  scm__rc.d2149[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* delim */
  scm__rc.d2149[97] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* grammar */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[81]), scm__rc.d2149[97]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[82]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[83]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[84]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[87]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[88]), scm__rc.d2149[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[89]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[90]), scm__rc.d2149[1]);
  scm__rc.d2149[98] = Scm_MakeExtendedPair(scm__rc.d2149[94], SCM_OBJ(&scm__rc.d2150[84]), SCM_OBJ(&scm__rc.d2150[92]));
  scm__rc.d2149[99] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* <list> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[4] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[5] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[7] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-join")), SCM_OBJ(&libstrstring_join__STUB), 0);
  libstrstring_join__STUB.common.info = scm__rc.d2149[98];
  libstrstring_join__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[100]);
  scm__rc.d2149[108] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* string-interpolate */
  scm__rc.d2149[110] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[26]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[109] = Scm_MakeIdentifier(scm__rc.d2149[108], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-interpolate */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[95]), scm__rc.d2149[14]);
  scm__rc.d2149[111] = Scm_MakeExtendedPair(SCM_FALSE, scm__rc.d2149[78], SCM_OBJ(&scm__rc.d2150[96]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[97]), scm__rc.d2149[111]);
  scm__rc.d2149[112] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->debugInfo = scm__rc.d2149[112];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[1] = SCM_WORD(scm__rc.d2149[109]);
  scm__rc.d2149[114] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* define-reader-ctor */
  scm__rc.d2149[113] = Scm_MakeIdentifier(scm__rc.d2149[114], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#define-reader-ctor */
  scm__rc.d2149[115] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* %toplevel */
  scm__rc.d2149[116] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->debugInfo = scm__rc.d2149[116];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[5]))[1] = SCM_WORD(scm__rc.d2149[108]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[5]))[5] = SCM_WORD(scm__rc.d2149[113]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* string->list */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[100]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[101]), scm__rc.d2149[117]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[102]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[1]);
  scm__rc.d2149[118] = Scm_MakeExtendedPair(scm__rc.d2149[117], SCM_OBJ(&scm__rc.d2150[54]), SCM_OBJ(&scm__rc.d2150[105]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string->list")), SCM_OBJ(&libstrstring_TOlist__STUB), 0);
  libstrstring_TOlist__STUB.common.info = scm__rc.d2149[118];
  libstrstring_TOlist__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[69]);
  scm__rc.d2149[119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* list->string */
  scm__rc.d2149[120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* list */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[106]), scm__rc.d2149[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[109]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[119]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[111]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[112]), scm__rc.d2149[1]);
  scm__rc.d2149[121] = Scm_MakeExtendedPair(scm__rc.d2149[119], SCM_OBJ(&scm__rc.d2150[106]), SCM_OBJ(&scm__rc.d2150[114]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[3] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[4] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[122]))[6] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("list->string")), SCM_OBJ(&libstrlist_TOstring__STUB), 0);
  libstrlist_TOstring__STUB.common.info = scm__rc.d2149[121];
  libstrlist_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[122]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* string-length */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[118]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[119]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[120]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[121]), scm__rc.d2149[1]);
  scm__rc.d2149[130] = Scm_MakeExtendedPair(scm__rc.d2149[129], SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[123]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[131]))[3] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[131]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[131]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[131]))[6] = scm__rc.d2149[42];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string-length")), SCM_OBJ(&libstrstring_length__STUB), SCM_BINDING_INLINABLE);
  libstrstring_length__STUB.common.info = scm__rc.d2149[130];
  libstrstring_length__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[131]);
  scm__rc.d2149[138] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* string-ref */
  scm__rc.d2149[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* k */
  scm__rc.d2149[140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* fallback */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[124]), scm__rc.d2149[140]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[125]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[126]), scm__rc.d2149[139]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[127]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[130]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[131]), scm__rc.d2149[138]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[132]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[133]), scm__rc.d2149[1]);
  scm__rc.d2149[141] = Scm_MakeExtendedPair(scm__rc.d2149[138], SCM_OBJ(&scm__rc.d2150[127]), SCM_OBJ(&scm__rc.d2150[135]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[142]))[3] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[142]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[142]))[5] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[142]))[6] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[142]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[142]))[8] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string-ref")), SCM_OBJ(&libstrstring_ref__STUB), SCM_BINDING_INLINABLE);
  libstrstring_ref__STUB.common.info = scm__rc.d2149[141];
  libstrstring_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[142]);
  scm__rc.d2149[151] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* substring */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[136]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[139]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[140]), scm__rc.d2149[151]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[142]), scm__rc.d2149[1]);
  scm__rc.d2149[152] = Scm_MakeExtendedPair(scm__rc.d2149[151], SCM_OBJ(&scm__rc.d2150[136]), SCM_OBJ(&scm__rc.d2150[144]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[153]))[3] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[153]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[153]))[5] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[153]))[6] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[153]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[153]))[8] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("substring")), SCM_OBJ(&libstrsubstring__STUB), 0);
  libstrsubstring__STUB.common.info = scm__rc.d2149[152];
  libstrsubstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[153]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[162] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),TRUE); /* string-size */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[147]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[148]), scm__rc.d2149[162]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[149]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[150]), scm__rc.d2149[1]);
  scm__rc.d2149[163] = Scm_MakeExtendedPair(scm__rc.d2149[162], SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[152]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[164]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[164]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[164]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[164]))[6] = scm__rc.d2149[42];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-size")), SCM_OBJ(&libstrstring_size__STUB), SCM_BINDING_INLINABLE);
  libstrstring_size__STUB.common.info = scm__rc.d2149[163];
  libstrstring_size__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[164]);
  scm__rc.d2149[171] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* opt-substring */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[155]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[156]), scm__rc.d2149[171]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[157]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[158]), scm__rc.d2149[1]);
  scm__rc.d2149[172] = Scm_MakeExtendedPair(scm__rc.d2149[171], SCM_OBJ(&scm__rc.d2150[54]), SCM_OBJ(&scm__rc.d2150[160]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("opt-substring")), SCM_OBJ(&libstropt_substring__STUB), 0);
  libstropt_substring__STUB.common.info = scm__rc.d2149[172];
  libstropt_substring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[82]);
  scm__rc.d2149[173] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* %hash-string */
  scm__rc.d2149[174] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* bound */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[161]), scm__rc.d2149[174]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[162]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[163]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[166]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[167]), scm__rc.d2149[173]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[169]), scm__rc.d2149[1]);
  scm__rc.d2149[175] = Scm_MakeExtendedPair(scm__rc.d2149[173], SCM_OBJ(&scm__rc.d2150[163]), SCM_OBJ(&scm__rc.d2150[171]));
  scm__rc.d2149[176] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* <ulong> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[5] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[7] = scm__rc.d2149[176];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("%hash-string")), SCM_OBJ(&libstr_25hash_string__STUB), 0);
  libstr_25hash_string__STUB.common.info = scm__rc.d2149[175];
  libstr_25hash_string__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[177]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[185] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* both */
  scm__rc.d2149[186] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58])),TRUE); /* after* */
  scm__rc.d2149[187] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* before* */
  scm__rc.d2149[188] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* after */
  scm__rc.d2149[189] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61])),TRUE); /* before */
  scm__rc.d2149[190] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* cursor */
  scm__rc.d2149[191] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* index */
  scm__rc.d2149[192] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* string-scan */
  scm__rc.d2149[193] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* s1 */
  scm__rc.d2149[194] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* s2 */
  scm__rc.d2149[195] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* mode */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[172]), scm__rc.d2149[195]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[173]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[174]), scm__rc.d2149[194]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[175]), scm__rc.d2149[193]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[178]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[179]), scm__rc.d2149[192]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[180]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[181]), scm__rc.d2149[1]);
  scm__rc.d2149[196] = Scm_MakeExtendedPair(scm__rc.d2149[192], SCM_OBJ(&scm__rc.d2150[175]), SCM_OBJ(&scm__rc.d2150[183]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[197]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[197]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[197]))[5] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[197]))[6] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[197]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[197]))[8] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-scan")), SCM_OBJ(&libstrstring_scan__STUB), 0);
  libstrstring_scan__STUB.common.info = scm__rc.d2149[196];
  libstrstring_scan__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[197]);
  scm__rc.d2149[206] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* string-scan-right */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[186]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[187]), scm__rc.d2149[206]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[188]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[189]), scm__rc.d2149[1]);
  scm__rc.d2149[207] = Scm_MakeExtendedPair(scm__rc.d2149[206], SCM_OBJ(&scm__rc.d2150[175]), SCM_OBJ(&scm__rc.d2150[191]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-scan-right")), SCM_OBJ(&libstrstring_scan_right__STUB), 0);
  libstrstring_scan_right__STUB.common.info = scm__rc.d2149[207];
  libstrstring_scan_right__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[197]);
  scm__rc.d2149[209] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[208] = Scm_MakeIdentifier(scm__rc.d2149[209], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[210] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* string-split */
  scm__rc.d2149[211] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* lambda */
  scm__rc.d2149[212] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* splitter */
  scm__rc.d2149[213] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* quote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[192]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[193]), scm__rc.d2149[213]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[195]), scm__rc.d2149[97]);
  scm__rc.d2149[214] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* limit */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[197]), scm__rc.d2149[214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[200]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[201]), scm__rc.d2149[212]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[202]), scm__rc.d2149[52]);
  scm__rc.d2149[215] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* if */
  scm__rc.d2149[216] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),TRUE); /* or */
  scm__rc.d2149[217] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* not */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[203]), scm__rc.d2149[217]);
  scm__rc.d2149[218] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* integer? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[204]), scm__rc.d2149[218]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[207]), scm__rc.d2149[216]);
  scm__rc.d2149[219] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* with-module */
  scm__rc.d2149[220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* %string-split */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[208]), scm__rc.d2149[220]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[209]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[210]), scm__rc.d2149[219]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[211]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[212]), scm__rc.d2149[214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[213]), scm__rc.d2149[97]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[215]), scm__rc.d2149[212]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[216]), scm__rc.d2149[52]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[218]), scm__rc.d2149[214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[219]), scm__rc.d2149[97]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[220]), scm__rc.d2149[212]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[221]), scm__rc.d2149[52]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[226]), scm__rc.d2149[215]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[229]), scm__rc.d2149[211]);
  scm__rc.d2149[222] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* error */
  scm__rc.d2149[221] = Scm_MakeIdentifier(scm__rc.d2149[222], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2149[223] = Scm_MakeIdentifier(scm__rc.d2149[218], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#integer? */
  scm__rc.d2149[224] = Scm_MakeIdentifier(scm__rc.d2149[220], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%string-split */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[232]), scm__rc.d2149[14]);
  scm__rc.d2149[225] = Scm_MakeExtendedPair(scm__rc.d2149[210], SCM_OBJ(&scm__rc.d2150[202]), SCM_OBJ(&scm__rc.d2150[233]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[234]), scm__rc.d2149[225]);
  scm__rc.d2149[226] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->name = scm__rc.d2149[210];/* string-split */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->debugInfo = scm__rc.d2149[226];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]))[4] = SCM_WORD(scm__rc.d2149[90]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]))[77] = SCM_WORD(scm__rc.d2149[221]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]))[85] = SCM_WORD(scm__rc.d2149[223]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]))[91] = SCM_WORD(scm__rc.d2149[90]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]))[96] = SCM_WORD(scm__rc.d2149[224]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[12]))[105] = SCM_WORD(scm__rc.d2149[224]);
  scm__rc.d2149[227] = Scm_MakeIdentifier(scm__rc.d2149[210], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-split */
  scm__rc.d2149[228] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3]))->debugInfo = scm__rc.d2149[228];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[122]))[3] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[122]))[6] = SCM_WORD(scm__rc.d2149[210]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[122]))[13] = SCM_WORD(scm__rc.d2149[227]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[229] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* %string-split-by-char */
  scm__rc.d2149[230] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* s */
  scm__rc.d2149[231] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),TRUE); /* ch */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[236]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[237]), scm__rc.d2149[231]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[238]), scm__rc.d2149[230]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[241]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[242]), scm__rc.d2149[229]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[243]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[244]), scm__rc.d2149[1]);
  scm__rc.d2149[232] = Scm_MakeExtendedPair(scm__rc.d2149[229], SCM_OBJ(&scm__rc.d2150[238]), SCM_OBJ(&scm__rc.d2150[246]));
  scm__rc.d2149[233] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* <char> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[234]))[3] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[234]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[234]))[5] = scm__rc.d2149[233];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[234]))[6] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[234]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[234]))[8] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%string-split-by-char")), SCM_OBJ(&libstr_25string_split_by_char__STUB), 0);
  libstr_25string_split_by_char__STUB.common.info = scm__rc.d2149[232];
  libstr_25string_split_by_char__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[234]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[247]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[248]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[249]), scm__rc.d2149[93]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[250]), scm__rc.d2149[90]);
  scm__rc.d2149[244] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[2]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[243] = Scm_MakeIdentifier(scm__rc.d2149[222], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#error */
  scm__rc.d2149[245] = Scm_MakeIdentifier(scm__rc.d2149[218], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#integer? */
  scm__rc.d2149[246] = Scm_MakeIdentifier(scm__rc.d2149[171], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#opt-substring */
  scm__rc.d2149[248] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* equal? */
  scm__rc.d2149[247] = Scm_MakeIdentifier(scm__rc.d2149[248], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#equal? */
  scm__rc.d2149[249] = Scm_MakeIdentifier(scm__rc.d2149[229], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#%string-split-by-char */
  scm__rc.d2149[251] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* %string-split-scanner */
  scm__rc.d2149[250] = Scm_MakeIdentifier(scm__rc.d2149[251], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#%string-split-scanner */
  scm__rc.d2149[253] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* %string-split-by-scanner */
  scm__rc.d2149[252] = Scm_MakeIdentifier(scm__rc.d2149[253], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#%string-split-by-scanner */
  scm__rc.d2149[255] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),TRUE); /* last-pair */
  scm__rc.d2149[254] = Scm_MakeIdentifier(scm__rc.d2149[255], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#last-pair */
  scm__rc.d2149[257] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* drop-right */
  scm__rc.d2149[256] = Scm_MakeIdentifier(scm__rc.d2149[257], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#drop-right */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[253]), scm__rc.d2149[14]);
  scm__rc.d2149[258] = Scm_MakeExtendedPair(scm__rc.d2149[220], SCM_OBJ(&scm__rc.d2150[221]), SCM_OBJ(&scm__rc.d2150[254]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[255]), scm__rc.d2149[258]);
  scm__rc.d2149[259] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4]))->name = scm__rc.d2149[220];/* %string-split */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4]))->debugInfo = scm__rc.d2149[259];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[14] = SCM_WORD(scm__rc.d2149[243]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[22] = SCM_WORD(scm__rc.d2149[245]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[36] = SCM_WORD(scm__rc.d2149[243]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[49] = SCM_WORD(scm__rc.d2149[246]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[57] = SCM_WORD(scm__rc.d2149[247]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[62] = SCM_WORD(scm__rc.d2149[93]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[67] = SCM_WORD(scm__rc.d2149[243]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[86] = SCM_WORD(scm__rc.d2149[249]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[96] = SCM_WORD(scm__rc.d2149[250]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[105] = SCM_WORD(scm__rc.d2149[252]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[109] = SCM_WORD(scm__rc.d2149[91]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[122] = SCM_WORD(scm__rc.d2149[247]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[131] = SCM_WORD(scm__rc.d2149[92]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[143] = SCM_WORD(scm__rc.d2149[254]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[148] = SCM_WORD(scm__rc.d2149[247]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[137]))[154] = SCM_WORD(scm__rc.d2149[256]);
  scm__rc.d2149[260] = Scm_MakeIdentifier(scm__rc.d2149[220], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#%string-split */
  scm__rc.d2149[261] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5]))->debugInfo = scm__rc.d2149[261];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[3] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[6] = SCM_WORD(scm__rc.d2149[220]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[13] = SCM_WORD(scm__rc.d2149[260]);
  scm__rc.d2149[262] = Scm_MakeIdentifier(scm__rc.d2149[129], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-length */
  scm__rc.d2149[263] = Scm_MakeIdentifier(scm__rc.d2149[63], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-copy */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[256]), scm__rc.d2149[251]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[257]), scm__rc.d2149[251]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[258]), scm__rc.d2149[230]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[261]), scm__rc.d2149[14]);
  scm__rc.d2149[264] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[257]), SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[262]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[263]), scm__rc.d2149[264]);
  scm__rc.d2149[265] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6]))->debugInfo = scm__rc.d2149[265];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[311]))[4] = SCM_WORD(scm__rc.d2149[262]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[311]))[18] = SCM_WORD(scm__rc.d2149[263]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[311]))[24] = SCM_WORD(scm__rc.d2149[263]);
  scm__rc.d2149[267] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* string=? */
  scm__rc.d2149[266] = Scm_MakeIdentifier(scm__rc.d2149[267], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string=? */
  scm__rc.d2149[268] = Scm_MakeIdentifier(scm__rc.d2149[192], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-scan */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[267]), scm__rc.d2149[14]);
  scm__rc.d2149[269] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[257]), SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[268]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[269]), scm__rc.d2149[269]);
  scm__rc.d2149[270] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->name = scm__rc.d2149[251];/* (%string-split-scanner %string-split-scanner) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->debugInfo = scm__rc.d2149[270];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[337]))[5] = SCM_WORD(scm__rc.d2149[185]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[337]))[7] = SCM_WORD(scm__rc.d2149[268]);
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* char-set? */
  scm__rc.d2149[271] = Scm_MakeIdentifier(scm__rc.d2149[272], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#char-set? */
  scm__rc.d2149[274] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* char-set-contains? */
  scm__rc.d2149[273] = Scm_MakeIdentifier(scm__rc.d2149[274], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#char-set-contains? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[270]), scm__rc.d2149[251]);
  scm__rc.d2149[275] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),FALSE); /* G2160 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[271]), scm__rc.d2149[275]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[274]), scm__rc.d2149[14]);
  scm__rc.d2149[276] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[270]), SCM_OBJ(&scm__rc.d2150[271]), SCM_OBJ(&scm__rc.d2150[275]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[276]), scm__rc.d2149[276]);
  scm__rc.d2149[277] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[8]))->debugInfo = scm__rc.d2149[277];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[355]))[3] = SCM_WORD(scm__rc.d2149[273]);
  scm__rc.d2149[279] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* %string-split-scanner-each-char */
  scm__rc.d2149[278] = Scm_MakeIdentifier(scm__rc.d2149[279], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#%string-split-scanner-each-char */
  scm__rc.d2149[281] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* regexp? */
  scm__rc.d2149[280] = Scm_MakeIdentifier(scm__rc.d2149[281], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#regexp? */
  scm__rc.d2149[283] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* rxmatch */
  scm__rc.d2149[282] = Scm_MakeIdentifier(scm__rc.d2149[283], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#rxmatch */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[279]), scm__rc.d2149[14]);
  scm__rc.d2149[284] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[257]), SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[280]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[281]), scm__rc.d2149[284]);
  scm__rc.d2149[285] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->name = scm__rc.d2149[251];/* (%string-split-scanner %string-split-scanner) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->debugInfo = scm__rc.d2149[285];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]))[5] = SCM_WORD(scm__rc.d2149[282]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]))[13] = SCM_WORD(scm__rc.d2149[189]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]))[19] = SCM_WORD(scm__rc.d2149[188]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]))[28] = SCM_WORD(scm__rc.d2149[266]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]))[35] = SCM_WORD(scm__rc.d2149[262]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]))[49] = SCM_WORD(scm__rc.d2149[263]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[360]))[55] = SCM_WORD(scm__rc.d2149[263]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[282]), scm__rc.d2149[212]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[285]), scm__rc.d2149[14]);
  scm__rc.d2149[286] = Scm_MakeExtendedPair(scm__rc.d2149[251], SCM_OBJ(&scm__rc.d2150[282]), SCM_OBJ(&scm__rc.d2150[286]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[287]), scm__rc.d2149[286]);
  scm__rc.d2149[287] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[10]))->name = scm__rc.d2149[251];/* %string-split-scanner */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[10]))->debugInfo = scm__rc.d2149[287];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]))[10] = SCM_WORD(scm__rc.d2149[266]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]))[21] = SCM_WORD(scm__rc.d2149[271]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]))[27] = SCM_WORD(scm__rc.d2149[278]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]))[33] = SCM_WORD(scm__rc.d2149[280]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[423]))[41] = SCM_WORD(scm__rc.d2149[278]);
  scm__rc.d2149[288] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->debugInfo = scm__rc.d2149[288];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[466]))[5] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[466]))[8] = SCM_WORD(scm__rc.d2149[251]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[466]))[15] = SCM_WORD(scm__rc.d2149[250]);
  scm__rc.d2149[290] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* string-cursor-start */
  scm__rc.d2149[289] = Scm_MakeIdentifier(scm__rc.d2149[290], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-cursor-start */
  scm__rc.d2149[292] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104])),TRUE); /* string-cursor-end */
  scm__rc.d2149[291] = Scm_MakeIdentifier(scm__rc.d2149[292], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-cursor-end */
  scm__rc.d2149[294] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* string-cursor=? */
  scm__rc.d2149[293] = Scm_MakeIdentifier(scm__rc.d2149[294], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-cursor=? */
  scm__rc.d2149[295] = Scm_MakeIdentifier(scm__rc.d2149[151], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#substring */
  scm__rc.d2149[296] = Scm_MakeIdentifier(scm__rc.d2149[138], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-ref */
  scm__rc.d2149[298] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[106])),TRUE); /* string-cursor-next */
  scm__rc.d2149[297] = Scm_MakeIdentifier(scm__rc.d2149[298], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-cursor-next */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[288]), scm__rc.d2149[279]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[289]), scm__rc.d2149[279]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[292]), scm__rc.d2149[14]);
  scm__rc.d2149[299] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[289]), SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[293]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[294]), scm__rc.d2149[299]);
  scm__rc.d2149[300] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->name = scm__rc.d2149[279];/* (%string-split-scanner-each-char %string-split-scanner-each-char) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->debugInfo = scm__rc.d2149[300];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[5] = SCM_WORD(scm__rc.d2149[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[10] = SCM_WORD(scm__rc.d2149[291]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[17] = SCM_WORD(scm__rc.d2149[293]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[27] = SCM_WORD(scm__rc.d2149[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[31] = SCM_WORD(scm__rc.d2149[295]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[42] = SCM_WORD(scm__rc.d2149[296]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[54] = SCM_WORD(scm__rc.d2149[297]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[64] = SCM_WORD(scm__rc.d2149[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[68] = SCM_WORD(scm__rc.d2149[295]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[75] = SCM_WORD(scm__rc.d2149[293]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[89] = SCM_WORD(scm__rc.d2149[296]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[101] = SCM_WORD(scm__rc.d2149[297]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[115] = SCM_WORD(scm__rc.d2149[295]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[483]))[124] = SCM_WORD(scm__rc.d2149[297]);
  scm__rc.d2149[301] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107])),TRUE); /* pred */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[295]), scm__rc.d2149[301]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[298]), scm__rc.d2149[14]);
  scm__rc.d2149[302] = Scm_MakeExtendedPair(scm__rc.d2149[279], SCM_OBJ(&scm__rc.d2150[295]), SCM_OBJ(&scm__rc.d2150[299]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[300]), scm__rc.d2149[302]);
  scm__rc.d2149[303] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13]))->name = scm__rc.d2149[279];/* %string-split-scanner-each-char */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13]))->debugInfo = scm__rc.d2149[303];
  scm__rc.d2149[304] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[14]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[14]))->debugInfo = scm__rc.d2149[304];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[617]))[3] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[617]))[6] = SCM_WORD(scm__rc.d2149[279]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[617]))[13] = SCM_WORD(scm__rc.d2149[278]);
  scm__rc.d2149[306] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[108])),TRUE); /* reverse! */
  scm__rc.d2149[305] = Scm_MakeIdentifier(scm__rc.d2149[306], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#reverse! */
  scm__rc.d2149[307] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[109])),TRUE); /* scanner */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[301]), scm__rc.d2149[307]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[302]), scm__rc.d2149[52]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[305]), scm__rc.d2149[14]);
  scm__rc.d2149[308] = Scm_MakeExtendedPair(scm__rc.d2149[253], SCM_OBJ(&scm__rc.d2150[302]), SCM_OBJ(&scm__rc.d2150[306]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[307]), scm__rc.d2149[308]);
  scm__rc.d2149[309] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15]))->name = scm__rc.d2149[253];/* %string-split-by-scanner */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15]))->debugInfo = scm__rc.d2149[309];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[632]))[11] = SCM_WORD(scm__rc.d2149[305]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[632]))[34] = SCM_WORD(scm__rc.d2149[305]);
  scm__rc.d2149[310] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16]))->debugInfo = scm__rc.d2149[310];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[669]))[3] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[669]))[6] = SCM_WORD(scm__rc.d2149[253]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[669]))[13] = SCM_WORD(scm__rc.d2149[252]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[311] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[110])),TRUE); /* %string-replace-body! */
  scm__rc.d2149[312] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[111])),TRUE); /* target */
  scm__rc.d2149[313] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[112])),TRUE); /* source */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[308]), scm__rc.d2149[313]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[309]), scm__rc.d2149[312]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[312]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[313]), scm__rc.d2149[311]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[314]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[315]), scm__rc.d2149[1]);
  scm__rc.d2149[314] = Scm_MakeExtendedPair(scm__rc.d2149[311], SCM_OBJ(&scm__rc.d2150[309]), SCM_OBJ(&scm__rc.d2150[317]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[315]))[3] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[315]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[315]))[5] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[315]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[315]))[7] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%string-replace-body!")), SCM_OBJ(&libstr_25string_replace_bodyX__STUB), 0);
  libstr_25string_replace_bodyX__STUB.common.info = scm__rc.d2149[314];
  libstr_25string_replace_bodyX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[315]);
  scm__rc.d2149[323] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[113])),TRUE); /* string-set! */
  scm__rc.d2149[324] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[115])),TRUE); /* arg */
  scm__rc.d2149[326] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[116])),TRUE); /* errorf */
  scm__rc.d2149[325] = Scm_MakeIdentifier(scm__rc.d2149[326], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#errorf */
  scm__rc.d2149[328] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[117])),TRUE); /* string-index->cursor */
  scm__rc.d2149[327] = Scm_MakeIdentifier(scm__rc.d2149[328], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-index->cursor */
  scm__rc.d2149[329] = Scm_MakeIdentifier(scm__rc.d2149[52], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string */
  scm__rc.d2149[330] = Scm_MakeIdentifier(scm__rc.d2149[77], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-append */
  scm__rc.d2149[331] = Scm_MakeIdentifier(scm__rc.d2149[311], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#%string-replace-body! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[318]), scm__rc.d2149[231]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[319]), scm__rc.d2149[139]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[320]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[323]), scm__rc.d2149[14]);
  scm__rc.d2149[332] = Scm_MakeExtendedPair(scm__rc.d2149[323], SCM_OBJ(&scm__rc.d2150[320]), SCM_OBJ(&scm__rc.d2150[324]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[325]), scm__rc.d2149[332]);
  scm__rc.d2149[333] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[17]))->name = scm__rc.d2149[323];/* string-set! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[17]))->debugInfo = scm__rc.d2149[333];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[11] = SCM_WORD(scm__rc.d2149[324]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[14] = SCM_WORD(scm__rc.d2149[325]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[26] = SCM_WORD(scm__rc.d2149[324]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[29] = SCM_WORD(scm__rc.d2149[325]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[35] = SCM_WORD(scm__rc.d2149[327]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[46] = SCM_WORD(scm__rc.d2149[295]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[51] = SCM_WORD(scm__rc.d2149[329]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[60] = SCM_WORD(scm__rc.d2149[297]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[62] = SCM_WORD(scm__rc.d2149[263]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[64] = SCM_WORD(scm__rc.d2149[330]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[684]))[66] = SCM_WORD(scm__rc.d2149[331]);
  scm__rc.d2149[334] = Scm_MakeIdentifier(scm__rc.d2149[323], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#string-set! */
  scm__rc.d2149[335] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[18]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[18]))->debugInfo = scm__rc.d2149[335];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[752]))[3] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[752]))[6] = SCM_WORD(scm__rc.d2149[323]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[752]))[13] = SCM_WORD(scm__rc.d2149[334]);
  scm__rc.d2149[336] = Scm_MakeIdentifier(scm__rc.d2149[323], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-set! */
  scm__rc.d2149[338] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[118])),TRUE); /* setter */
  scm__rc.d2149[337] = Scm_MakeIdentifier(scm__rc.d2149[338], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#setter */
  scm__rc.d2149[339] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19]))->debugInfo = scm__rc.d2149[339];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[767]))[1] = SCM_WORD(scm__rc.d2149[296]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[767]))[3] = SCM_WORD(scm__rc.d2149[336]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[767]))[5] = SCM_WORD(scm__rc.d2149[337]);
  scm__rc.d2149[340] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[119])),TRUE); /* string-byte-set! */
  scm__rc.d2149[342] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[120])),TRUE); /* exact? */
  scm__rc.d2149[341] = Scm_MakeIdentifier(scm__rc.d2149[342], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#exact? */
  scm__rc.d2149[343] = Scm_MakeIdentifier(scm__rc.d2149[162], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-size */
  scm__rc.d2149[344] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[121]))); /* :private? */
  scm__rc.d2149[346] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[122])),TRUE); /* open-output-string */
  scm__rc.d2149[345] = Scm_MakeIdentifier(scm__rc.d2149[346], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#open-output-string */
  scm__rc.d2149[348] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[124])),TRUE); /* byte-substring */
  scm__rc.d2149[347] = Scm_MakeIdentifier(scm__rc.d2149[348], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#byte-substring */
  scm__rc.d2149[350] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[125])),TRUE); /* display */
  scm__rc.d2149[349] = Scm_MakeIdentifier(scm__rc.d2149[350], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#display */
  scm__rc.d2149[352] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[126])),TRUE); /* write-byte */
  scm__rc.d2149[351] = Scm_MakeIdentifier(scm__rc.d2149[352], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#write-byte */
  scm__rc.d2149[354] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[127])),TRUE); /* get-output-byte-string */
  scm__rc.d2149[353] = Scm_MakeIdentifier(scm__rc.d2149[354], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#get-output-byte-string */
  scm__rc.d2149[355] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[128])),TRUE); /* b */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[326]), scm__rc.d2149[355]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[327]), scm__rc.d2149[139]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[328]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[331]), scm__rc.d2149[14]);
  scm__rc.d2149[356] = Scm_MakeExtendedPair(scm__rc.d2149[340], SCM_OBJ(&scm__rc.d2150[328]), SCM_OBJ(&scm__rc.d2150[332]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[333]), scm__rc.d2149[356]);
  scm__rc.d2149[357] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[20]))->name = scm__rc.d2149[340];/* string-byte-set! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[20]))->debugInfo = scm__rc.d2149[357];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[11] = SCM_WORD(scm__rc.d2149[324]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[14] = SCM_WORD(scm__rc.d2149[325]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[19] = SCM_WORD(scm__rc.d2149[245]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[29] = SCM_WORD(scm__rc.d2149[324]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[32] = SCM_WORD(scm__rc.d2149[325]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[37] = SCM_WORD(scm__rc.d2149[341]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[47] = SCM_WORD(scm__rc.d2149[324]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[50] = SCM_WORD(scm__rc.d2149[325]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[55] = SCM_WORD(scm__rc.d2149[245]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[65] = SCM_WORD(scm__rc.d2149[324]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[68] = SCM_WORD(scm__rc.d2149[325]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[73] = SCM_WORD(scm__rc.d2149[343]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[77] = SCM_WORD(scm__rc.d2149[344]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[81] = SCM_WORD(scm__rc.d2149[345]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[92] = SCM_WORD(scm__rc.d2149[243]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[110] = SCM_WORD(scm__rc.d2149[347]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[114] = SCM_WORD(scm__rc.d2149[349]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[120] = SCM_WORD(scm__rc.d2149[351]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[129] = SCM_WORD(scm__rc.d2149[347]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[133] = SCM_WORD(scm__rc.d2149[349]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[139] = SCM_WORD(scm__rc.d2149[353]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[776]))[141] = SCM_WORD(scm__rc.d2149[331]);
  scm__rc.d2149[358] = Scm_MakeIdentifier(scm__rc.d2149[340], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#string-byte-set! */
  scm__rc.d2149[359] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21]))->debugInfo = scm__rc.d2149[359];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[919]))[3] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[919]))[6] = SCM_WORD(scm__rc.d2149[340]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[919]))[13] = SCM_WORD(scm__rc.d2149[358]);
  scm__rc.d2149[361] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[129])),TRUE); /* string-byte-ref */
  scm__rc.d2149[360] = Scm_MakeIdentifier(scm__rc.d2149[361], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-byte-ref */
  scm__rc.d2149[362] = Scm_MakeIdentifier(scm__rc.d2149[340], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-byte-set! */
  scm__rc.d2149[363] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22]))->debugInfo = scm__rc.d2149[363];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[934]))[1] = SCM_WORD(scm__rc.d2149[360]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[934]))[3] = SCM_WORD(scm__rc.d2149[362]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[934]))[5] = SCM_WORD(scm__rc.d2149[337]);
  scm__rc.d2149[364] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[130])),TRUE); /* string-fill! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[335]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[336]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[338]), scm__rc.d2149[66]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[341]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[342]), scm__rc.d2149[40]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[343]), scm__rc.d2149[64]);
  scm__rc.d2149[365] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[131])),TRUE); /* let */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[344]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[345]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[347]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[348]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[349]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[351]), scm__rc.d2149[66]);
  scm__rc.d2149[366] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[132])),TRUE); /* istart */
  scm__rc.d2149[367] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[133])),TRUE); /* string-cursor->index */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[352]), scm__rc.d2149[367]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[354]), scm__rc.d2149[366]);
  scm__rc.d2149[368] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[134])),TRUE); /* iend */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[355]), scm__rc.d2149[367]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[357]), scm__rc.d2149[368]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[358]), scm__rc.d2149[38]);
  scm__rc.d2149[369] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[135])),TRUE); /* when */
  scm__rc.d2149[370] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[136])),TRUE); /* < */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[364]), scm__rc.d2149[366]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[365]), scm__rc.d2149[368]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[366]), scm__rc.d2149[370]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[368]), scm__rc.d2149[326]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[371]), scm__rc.d2149[369]);
  scm__rc.d2149[371] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[138])),TRUE); /* and */
  scm__rc.d2149[372] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[139])),TRUE); /* = */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[372]), scm__rc.d2149[366]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[373]), scm__rc.d2149[372]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[374]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[375]), scm__rc.d2149[368]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[376]), scm__rc.d2149[372]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[379]), scm__rc.d2149[371]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[380]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[381]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[383]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[384]), scm__rc.d2149[311]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[386]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[387]), scm__rc.d2149[151]);
  scm__rc.d2149[373] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[140])),TRUE); /* - */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[388]), scm__rc.d2149[373]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[390]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[391]), scm__rc.d2149[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[395]), scm__rc.d2149[77]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[397]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[398]), scm__rc.d2149[311]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[402]), scm__rc.d2149[215]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[406]), scm__rc.d2149[365]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[409]), scm__rc.d2149[211]);
  scm__rc.d2149[374] = Scm_MakeIdentifier(scm__rc.d2149[367], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-cursor->index */
  scm__rc.d2149[375] = Scm_MakeIdentifier(scm__rc.d2149[326], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#errorf */
  scm__rc.d2149[376] = Scm_MakeIdentifier(scm__rc.d2149[37], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#make-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[412]), scm__rc.d2149[14]);
  scm__rc.d2149[377] = Scm_MakeExtendedPair(scm__rc.d2149[364], SCM_OBJ(&scm__rc.d2150[343]), SCM_OBJ(&scm__rc.d2150[413]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[414]), scm__rc.d2149[377]);
  scm__rc.d2149[378] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[23]))->name = scm__rc.d2149[364];/* string-fill! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[23]))->debugInfo = scm__rc.d2149[378];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[23] = SCM_WORD(scm__rc.d2149[262]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[48] = SCM_WORD(scm__rc.d2149[221]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[54] = SCM_WORD(scm__rc.d2149[327]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[60] = SCM_WORD(scm__rc.d2149[327]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[66] = SCM_WORD(scm__rc.d2149[374]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[72] = SCM_WORD(scm__rc.d2149[374]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[77] = SCM_WORD(scm__rc.d2149[262]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[89] = SCM_WORD(scm__rc.d2149[375]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[104] = SCM_WORD(scm__rc.d2149[376]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[106] = SCM_WORD(scm__rc.d2149[331]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[117] = SCM_WORD(scm__rc.d2149[295]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[126] = SCM_WORD(scm__rc.d2149[376]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[132] = SCM_WORD(scm__rc.d2149[263]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[134] = SCM_WORD(scm__rc.d2149[330]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[943]))[136] = SCM_WORD(scm__rc.d2149[331]);
  scm__rc.d2149[379] = Scm_MakeIdentifier(scm__rc.d2149[364], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#string-fill! */
  scm__rc.d2149[380] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[24]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[24]))->debugInfo = scm__rc.d2149[380];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1084]))[3] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1084]))[6] = SCM_WORD(scm__rc.d2149[364]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1084]))[13] = SCM_WORD(scm__rc.d2149[379]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[381] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[141])),TRUE); /* string-build-index! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[417]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[418]), scm__rc.d2149[381]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[419]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[420]), scm__rc.d2149[1]);
  scm__rc.d2149[382] = Scm_MakeExtendedPair(scm__rc.d2149[381], SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[422]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[383]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[383]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[383]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[383]))[6] = scm__rc.d2149[68];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-build-index!")), SCM_OBJ(&libstrstring_build_indexX__STUB), 0);
  libstrstring_build_indexX__STUB.common.info = scm__rc.d2149[382];
  libstrstring_build_indexX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[383]);
  scm__rc.d2149[390] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[142])),TRUE); /* string-fast-indexable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[425]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[426]), scm__rc.d2149[390]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[427]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[428]), scm__rc.d2149[1]);
  scm__rc.d2149[391] = Scm_MakeExtendedPair(scm__rc.d2149[390], SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[430]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[392]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[392]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[392]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[392]))[6] = scm__rc.d2149[17];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-fast-indexable?")), SCM_OBJ(&libstrstring_fast_indexableP__STUB), 0);
  libstrstring_fast_indexableP__STUB.common.info = scm__rc.d2149[391];
  libstrstring_fast_indexableP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[392]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[399] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[143])),TRUE); /* %string-index-dump */
  scm__rc.d2149[400] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[144])),TRUE); /* p */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[431]), scm__rc.d2149[400]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[432]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[433]), scm__rc.d2149[230]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[436]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[437]), scm__rc.d2149[399]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[438]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[439]), scm__rc.d2149[1]);
  scm__rc.d2149[401] = Scm_MakeExtendedPair(scm__rc.d2149[399], SCM_OBJ(&scm__rc.d2150[433]), SCM_OBJ(&scm__rc.d2150[441]));
  scm__rc.d2149[402] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[145])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[403]))[3] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[403]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[403]))[5] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[403]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[403]))[7] = scm__rc.d2149[402];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%string-index-dump")), SCM_OBJ(&libstr_25string_index_dump__STUB), 0);
  libstr_25string_index_dump__STUB.common.info = scm__rc.d2149[401];
  libstr_25string_index_dump__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[403]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[411] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[146])),TRUE); /* ss */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[442]), scm__rc.d2149[411]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[443]), scm__rc.d2149[53]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[444]), scm__rc.d2149[194]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[445]), scm__rc.d2149[193]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[448]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[449]), scm__rc.d2149[267]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[450]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[451]), scm__rc.d2149[1]);
  scm__rc.d2149[412] = Scm_MakeExtendedPair(scm__rc.d2149[267], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[453]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[413]))[3] = scm__rc.d2149[15];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[413]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[413]))[5] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[413]))[6] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[413]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[413]))[8] = scm__rc.d2149[17];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string=?")), SCM_OBJ(&libstrstring_3dP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_3dP__STUB.common.info = scm__rc.d2149[412];
  libstrstring_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
  scm__rc.d2149[422] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[147])),TRUE); /* string<? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[456]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[457]), scm__rc.d2149[422]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[458]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[459]), scm__rc.d2149[1]);
  scm__rc.d2149[423] = Scm_MakeExtendedPair(scm__rc.d2149[422], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[461]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string<?")), SCM_OBJ(&libstrstring_LTP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_LTP__STUB.common.info = scm__rc.d2149[423];
  libstrstring_LTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
  scm__rc.d2149[424] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[148])),TRUE); /* string>? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[464]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[465]), scm__rc.d2149[424]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[466]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[467]), scm__rc.d2149[1]);
  scm__rc.d2149[425] = Scm_MakeExtendedPair(scm__rc.d2149[424], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[469]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string>?")), SCM_OBJ(&libstrstring_GTP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_GTP__STUB.common.info = scm__rc.d2149[425];
  libstrstring_GTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
  scm__rc.d2149[426] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[149])),TRUE); /* string<=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[472]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[473]), scm__rc.d2149[426]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[474]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[475]), scm__rc.d2149[1]);
  scm__rc.d2149[427] = Scm_MakeExtendedPair(scm__rc.d2149[426], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[477]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string<=?")), SCM_OBJ(&libstrstring_LT_3dP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_LT_3dP__STUB.common.info = scm__rc.d2149[427];
  libstrstring_LT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
  scm__rc.d2149[428] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[150])),TRUE); /* string>=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[480]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[481]), scm__rc.d2149[428]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[482]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[483]), scm__rc.d2149[1]);
  scm__rc.d2149[429] = Scm_MakeExtendedPair(scm__rc.d2149[428], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[485]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string>=?")), SCM_OBJ(&libstrstring_GT_3dP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_GT_3dP__STUB.common.info = scm__rc.d2149[429];
  libstrstring_GT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
  scm__rc.d2149[430] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[151])),TRUE); /* string-ci=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[488]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[489]), scm__rc.d2149[430]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[490]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[491]), scm__rc.d2149[1]);
  scm__rc.d2149[431] = Scm_MakeExtendedPair(scm__rc.d2149[430], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[493]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string-ci=?")), SCM_OBJ(&libstrstring_ci_3dP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_ci_3dP__STUB.common.info = scm__rc.d2149[431];
  libstrstring_ci_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
  scm__rc.d2149[432] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[152])),TRUE); /* string-ci<? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[496]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[497]), scm__rc.d2149[432]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[498]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[499]), scm__rc.d2149[1]);
  scm__rc.d2149[433] = Scm_MakeExtendedPair(scm__rc.d2149[432], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[501]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string-ci<?")), SCM_OBJ(&libstrstring_ci_LTP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_ci_LTP__STUB.common.info = scm__rc.d2149[433];
  libstrstring_ci_LTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
  scm__rc.d2149[434] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[153])),TRUE); /* string-ci>? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[504]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[505]), scm__rc.d2149[434]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[506]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[507]), scm__rc.d2149[1]);
  scm__rc.d2149[435] = Scm_MakeExtendedPair(scm__rc.d2149[434], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[509]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string-ci>?")), SCM_OBJ(&libstrstring_ci_GTP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_ci_GTP__STUB.common.info = scm__rc.d2149[435];
  libstrstring_ci_GTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
  scm__rc.d2149[436] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[154])),TRUE); /* string-ci<=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[512]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[513]), scm__rc.d2149[436]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[514]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[515]), scm__rc.d2149[1]);
  scm__rc.d2149[437] = Scm_MakeExtendedPair(scm__rc.d2149[436], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[517]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string-ci<=?")), SCM_OBJ(&libstrstring_ci_LT_3dP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_ci_LT_3dP__STUB.common.info = scm__rc.d2149[437];
  libstrstring_ci_LT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
  scm__rc.d2149[438] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[155])),TRUE); /* string-ci>=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[520]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[521]), scm__rc.d2149[438]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[522]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[523]), scm__rc.d2149[1]);
  scm__rc.d2149[439] = Scm_MakeExtendedPair(scm__rc.d2149[438], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[525]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string-ci>=?")), SCM_OBJ(&libstrstring_ci_GT_3dP__STUB), SCM_BINDING_INLINABLE);
  libstrstring_ci_GT_3dP__STUB.common.info = scm__rc.d2149[439];
  libstrstring_ci_GT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[413]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[440] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[156])),TRUE); /* %string-map-dispatch */
  scm__rc.d2149[441] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[157])),FALSE); /* G2172 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[526]), scm__rc.d2149[441]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[527]), scm__rc.d2149[440]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[530]), scm__rc.d2149[14]);
  scm__rc.d2149[442] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[527]), SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[531]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[532]), scm__rc.d2149[442]);
  scm__rc.d2149[443] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25]))->debugInfo = scm__rc.d2149[443];
  scm__rc.d2149[445] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[159])),TRUE); /* string-cursor? */
  scm__rc.d2149[444] = Scm_MakeIdentifier(scm__rc.d2149[445], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#string-cursor? */
  scm__rc.d2149[447] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[161])),TRUE); /* find */
  scm__rc.d2149[446] = Scm_MakeIdentifier(scm__rc.d2149[447], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#find */
  scm__rc.d2149[448] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[163])),TRUE); /* name */
  scm__rc.d2149[449] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[164])),TRUE); /* proc */
  scm__rc.d2149[450] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* rest */
  scm__rc.d2149[451] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[165])),TRUE); /* proc-single */
  scm__rc.d2149[452] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[166])),TRUE); /* proc-multi */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[534]), scm__rc.d2149[452]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[535]), scm__rc.d2149[451]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[536]), scm__rc.d2149[450]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[537]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[538]), scm__rc.d2149[449]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[539]), scm__rc.d2149[448]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[542]), scm__rc.d2149[14]);
  scm__rc.d2149[453] = Scm_MakeExtendedPair(scm__rc.d2149[440], SCM_OBJ(&scm__rc.d2150[539]), SCM_OBJ(&scm__rc.d2150[543]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[544]), scm__rc.d2149[453]);
  scm__rc.d2149[454] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[26])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[26]))->name = scm__rc.d2149[440];/* %string-map-dispatch */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[26]))->debugInfo = scm__rc.d2149[454];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[12] = SCM_WORD(scm__rc.d2149[245]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[26] = SCM_WORD(scm__rc.d2149[246]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[36] = SCM_WORD(scm__rc.d2149[245]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[52] = SCM_WORD(scm__rc.d2149[246]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[61] = SCM_WORD(scm__rc.d2149[375]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[68] = SCM_WORD(scm__rc.d2149[444]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[76] = SCM_WORD(scm__rc.d2149[243]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[82] = SCM_WORD(scm__rc.d2149[444]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[94] = SCM_WORD(scm__rc.d2149[446]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[103] = SCM_WORD(scm__rc.d2149[243]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1103]))[115] = SCM_WORD(scm__rc.d2149[243]);
  scm__rc.d2149[455] = Scm_MakeIdentifier(scm__rc.d2149[440], SCM_MODULE(scm__rc.d2149[244]), SCM_NIL); /* gauche.internal#%string-map-dispatch */
  scm__rc.d2149[456] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[27])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[27]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[27]))->debugInfo = scm__rc.d2149[456];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1220]))[5] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1220]))[8] = SCM_WORD(scm__rc.d2149[440]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1220]))[15] = SCM_WORD(scm__rc.d2149[455]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[457] = Scm_MakeIdentifier(scm__rc.d2149[290], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-cursor-start */
  scm__rc.d2149[458] = Scm_MakeIdentifier(scm__rc.d2149[292], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-cursor-end */
  scm__rc.d2149[459] = Scm_MakeIdentifier(scm__rc.d2149[294], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-cursor=? */
  scm__rc.d2149[460] = Scm_MakeIdentifier(scm__rc.d2149[119], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#list->string */
  scm__rc.d2149[462] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[167])),TRUE); /* string-cursor-prev */
  scm__rc.d2149[461] = Scm_MakeIdentifier(scm__rc.d2149[462], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-cursor-prev */
  scm__rc.d2149[463] = Scm_MakeIdentifier(scm__rc.d2149[138], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-ref */
  scm__rc.d2149[464] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[168])),TRUE); /* string-map */
  scm__rc.d2149[465] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[169])),TRUE); /* string-map-1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[545]), scm__rc.d2149[465]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[546]), scm__rc.d2149[464]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[547]), scm__rc.d2149[449]);
  scm__rc.d2149[466] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[28])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[28]))->debugInfo = scm__rc.d2149[466];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]))[4] = SCM_WORD(scm__rc.d2149[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]))[10] = SCM_WORD(scm__rc.d2149[458]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]))[19] = SCM_WORD(scm__rc.d2149[459]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]))[24] = SCM_WORD(scm__rc.d2149[460]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]))[31] = SCM_WORD(scm__rc.d2149[461]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1237]))[41] = SCM_WORD(scm__rc.d2149[463]);
  scm__rc.d2149[468] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[170])),TRUE); /* map */
  scm__rc.d2149[467] = Scm_MakeIdentifier(scm__rc.d2149[468], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#map */
  scm__rc.d2149[470] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[171])),TRUE); /* any */
  scm__rc.d2149[469] = Scm_MakeIdentifier(scm__rc.d2149[470], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#any */
  scm__rc.d2149[471] = Scm_MakeIdentifier(scm__rc.d2149[298], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-cursor-next */
  scm__rc.d2149[472] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[172])),TRUE); /* string-map-n */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[550]), scm__rc.d2149[472]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[551]), scm__rc.d2149[464]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[552]), scm__rc.d2149[449]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[552]), scm__rc.d2149[95]);
  scm__rc.d2149[473] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[29])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[29]))->debugInfo = scm__rc.d2149[473];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[3] = SCM_WORD(scm__rc.d2149[458]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[6] = SCM_WORD(scm__rc.d2149[467]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[11] = SCM_WORD(scm__rc.d2149[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[14] = SCM_WORD(scm__rc.d2149[467]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[21] = SCM_WORD(scm__rc.d2149[459]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[25] = SCM_WORD(scm__rc.d2149[469]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[31] = SCM_WORD(scm__rc.d2149[460]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[36] = SCM_WORD(scm__rc.d2149[471]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[40] = SCM_WORD(scm__rc.d2149[467]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[47] = SCM_WORD(scm__rc.d2149[463]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1289]))[51] = SCM_WORD(scm__rc.d2149[467]);
  scm__rc.d2149[474] = Scm_MakeIdentifier(scm__rc.d2149[440], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%string-map-dispatch */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[557]), scm__rc.d2149[64]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[557]), scm__rc.d2149[450]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[558]), scm__rc.d2149[449]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[561]), scm__rc.d2149[14]);
  scm__rc.d2149[475] = Scm_MakeExtendedPair(scm__rc.d2149[464], SCM_OBJ(&scm__rc.d2150[558]), SCM_OBJ(&scm__rc.d2150[562]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[563]), scm__rc.d2149[475]);
  scm__rc.d2149[476] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[30])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[30]))->name = scm__rc.d2149[464];/* string-map */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[30]))->debugInfo = scm__rc.d2149[476];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1349]))[1] = SCM_WORD(scm__rc.d2149[464]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1349]))[8] = SCM_WORD(scm__rc.d2149[474]);
  scm__rc.d2149[477] = Scm_MakeIdentifier(scm__rc.d2149[464], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-map */
  scm__rc.d2149[478] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[31])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[31]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[31]))->debugInfo = scm__rc.d2149[478];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1359]))[5] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1359]))[8] = SCM_WORD(scm__rc.d2149[464]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1359]))[15] = SCM_WORD(scm__rc.d2149[477]);
  scm__rc.d2149[479] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[173])),TRUE); /* string-for-each */
  scm__rc.d2149[480] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[174])),TRUE); /* string-for-each-1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[564]), scm__rc.d2149[480]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[565]), scm__rc.d2149[479]);
  scm__rc.d2149[481] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[32])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[32]))->debugInfo = scm__rc.d2149[481];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]))[4] = SCM_WORD(scm__rc.d2149[458]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]))[10] = SCM_WORD(scm__rc.d2149[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]))[17] = SCM_WORD(scm__rc.d2149[459]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]))[28] = SCM_WORD(scm__rc.d2149[463]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1376]))[37] = SCM_WORD(scm__rc.d2149[471]);
  scm__rc.d2149[482] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[175])),TRUE); /* string-for-each-n */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[568]), scm__rc.d2149[482]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[569]), scm__rc.d2149[479]);
  scm__rc.d2149[483] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[33]))->debugInfo = scm__rc.d2149[483];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[3] = SCM_WORD(scm__rc.d2149[458]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[6] = SCM_WORD(scm__rc.d2149[467]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[11] = SCM_WORD(scm__rc.d2149[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[14] = SCM_WORD(scm__rc.d2149[467]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[19] = SCM_WORD(scm__rc.d2149[459]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[23] = SCM_WORD(scm__rc.d2149[469]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[33] = SCM_WORD(scm__rc.d2149[463]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[37] = SCM_WORD(scm__rc.d2149[467]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[42] = SCM_WORD(scm__rc.d2149[471]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1419]))[46] = SCM_WORD(scm__rc.d2149[467]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[576]), scm__rc.d2149[14]);
  scm__rc.d2149[484] = Scm_MakeExtendedPair(scm__rc.d2149[479], SCM_OBJ(&scm__rc.d2150[558]), SCM_OBJ(&scm__rc.d2150[577]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[578]), scm__rc.d2149[484]);
  scm__rc.d2149[485] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[34])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[34]))->name = scm__rc.d2149[479];/* string-for-each */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[34]))->debugInfo = scm__rc.d2149[485];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1471]))[1] = SCM_WORD(scm__rc.d2149[479]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1471]))[8] = SCM_WORD(scm__rc.d2149[474]);
  scm__rc.d2149[486] = Scm_MakeIdentifier(scm__rc.d2149[479], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-for-each */
  scm__rc.d2149[487] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[35])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[35]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[35]))->debugInfo = scm__rc.d2149[487];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1481]))[5] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1481]))[8] = SCM_WORD(scm__rc.d2149[479]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1481]))[15] = SCM_WORD(scm__rc.d2149[486]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[488] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[176])),TRUE); /* string-incomplete->complete! */
  scm__rc.d2149[490] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[177])),TRUE); /* string-incomplete->complete */
  scm__rc.d2149[489] = Scm_MakeIdentifier(scm__rc.d2149[490], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-incomplete->complete */
  scm__rc.d2149[491] = Scm_MakeIdentifier(scm__rc.d2149[311], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%string-replace-body! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[581]), scm__rc.d2149[14]);
  scm__rc.d2149[492] = Scm_MakeExtendedPair(scm__rc.d2149[488], SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[582]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[583]), scm__rc.d2149[492]);
  scm__rc.d2149[493] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[36])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[36]))->name = scm__rc.d2149[488];/* string-incomplete->complete! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[36]))->debugInfo = scm__rc.d2149[493];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1498]))[4] = SCM_WORD(scm__rc.d2149[489]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1498]))[13] = SCM_WORD(scm__rc.d2149[491]);
  scm__rc.d2149[494] = Scm_MakeIdentifier(scm__rc.d2149[488], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#string-incomplete->complete! */
  scm__rc.d2149[495] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[37])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[37]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[37]))->debugInfo = scm__rc.d2149[495];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1513]))[3] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1513]))[6] = SCM_WORD(scm__rc.d2149[488]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1513]))[13] = SCM_WORD(scm__rc.d2149[494]);
  scm__rc.d2149[496] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[178])),TRUE); /* string-complete->incomplete */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[586]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[587]), scm__rc.d2149[496]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[588]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[589]), scm__rc.d2149[1]);
  scm__rc.d2149[497] = Scm_MakeExtendedPair(scm__rc.d2149[496], SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[591]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[498]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[498]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[498]))[5] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[498]))[6] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-complete->incomplete")), SCM_OBJ(&libstrstring_complete_TOincomplete__STUB), 0);
  libstrstring_complete_TOincomplete__STUB.common.info = scm__rc.d2149[497];
  libstrstring_complete_TOincomplete__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[498]);
  scm__rc.d2149[505] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[179]))); /* :replace */
  scm__rc.d2149[506] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[180]))); /* :omit */
  scm__rc.d2149[507] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[181]))); /* :escape */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[592]), scm__rc.d2149[507]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[593]), scm__rc.d2149[505]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[594]), scm__rc.d2149[506]);
  scm__rc.d2149[508] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[182])),TRUE); /* handling */
  scm__rc.d2149[509] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[183])),TRUE); /* filler */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[595]), scm__rc.d2149[509]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[596]), scm__rc.d2149[508]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[597]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[598]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[601]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[602]), scm__rc.d2149[490]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[603]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[604]), scm__rc.d2149[1]);
  scm__rc.d2149[510] = Scm_MakeExtendedPair(scm__rc.d2149[490], SCM_OBJ(&scm__rc.d2150[598]), SCM_OBJ(&scm__rc.d2150[606]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-incomplete->complete")), SCM_OBJ(&libstrstring_incomplete_TOcomplete__STUB), 0);
  libstrstring_incomplete_TOcomplete__STUB.common.info = scm__rc.d2149[510];
  libstrstring_incomplete_TOcomplete__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[82]);
  scm__rc.d2149[511] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[184])),TRUE); /* make-byte-string */
  scm__rc.d2149[512] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[185])),TRUE); /* size */
  scm__rc.d2149[513] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[186])),TRUE); /* byte */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[607]), scm__rc.d2149[513]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[608]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[609]), scm__rc.d2149[512]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[612]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[613]), scm__rc.d2149[511]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[614]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[615]), scm__rc.d2149[1]);
  scm__rc.d2149[514] = Scm_MakeExtendedPair(scm__rc.d2149[511], SCM_OBJ(&scm__rc.d2150[609]), SCM_OBJ(&scm__rc.d2150[617]));
  scm__rc.d2149[515] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[187])),TRUE); /* <int32> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[516]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[516]))[4] = scm__rc.d2149[515];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[516]))[5] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[516]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[516]))[7] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-byte-string")), SCM_OBJ(&libstrmake_byte_string__STUB), 0);
  libstrmake_byte_string__STUB.common.info = scm__rc.d2149[514];
  libstrmake_byte_string__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[516]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[620]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[621]), scm__rc.d2149[361]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[622]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[623]), scm__rc.d2149[1]);
  scm__rc.d2149[524] = Scm_MakeExtendedPair(scm__rc.d2149[361], SCM_OBJ(&scm__rc.d2150[127]), SCM_OBJ(&scm__rc.d2150[625]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[525]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[525]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[525]))[5] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[525]))[6] = scm__rc.d2149[43];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[525]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[525]))[8] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-byte-ref")), SCM_OBJ(&libstrstring_byte_ref__STUB), 0);
  libstrstring_byte_ref__STUB.common.info = scm__rc.d2149[524];
  libstrstring_byte_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[525]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[628]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[629]), scm__rc.d2149[348]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[630]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[631]), scm__rc.d2149[1]);
  scm__rc.d2149[534] = Scm_MakeExtendedPair(scm__rc.d2149[348], SCM_OBJ(&scm__rc.d2150[136]), SCM_OBJ(&scm__rc.d2150[633]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[5] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[6] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[8] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("byte-substring")), SCM_OBJ(&libstrbyte_substring__STUB), 0);
  libstrbyte_substring__STUB.common.info = scm__rc.d2149[534];
  libstrbyte_substring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[535]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  {
     ScmCharSet *cs = SCM_CHARSET(Scm_MakeEmptyCharSet());
     Scm_CharSetAddRange(cs, SCM_CHAR(0), SCM_CHAR(32));
     Scm_CharSetAddRange(cs, SCM_CHAR(34), SCM_CHAR(34));
     Scm_CharSetAddRange(cs, SCM_CHAR(39), SCM_CHAR(41));
     Scm_CharSetAddRange(cs, SCM_CHAR(44), SCM_CHAR(44));
     Scm_CharSetAddRange(cs, SCM_CHAR(59), SCM_CHAR(59));
     Scm_CharSetAddRange(cs, SCM_CHAR(91), SCM_CHAR(93));
     Scm_CharSetAddRange(cs, SCM_CHAR(96), SCM_CHAR(96));
     Scm_CharSetAddRange(cs, SCM_CHAR(123), SCM_CHAR(125));
     Scm_CharSetAddRange(cs, SCM_CHAR(127), SCM_CHAR(127));
     scm__rc.d2149[544] = SCM_OBJ(cs);
  }
  scm__rc.d2149[545] = Scm_MakeIdentifier(scm__rc.d2149[274], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#char-set-contains? */
  scm__rc.d2149[546] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[188])),TRUE); /* complete-sexp? */
  scm__rc.d2149[547] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[189])),TRUE); /* skip-token */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[634]), scm__rc.d2149[547]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[635]), scm__rc.d2149[546]);
  scm__rc.d2149[548] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[38])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[38]))->debugInfo = scm__rc.d2149[548];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1528]))[10] = SCM_WORD(scm__rc.d2149[544]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1528]))[13] = SCM_WORD(scm__rc.d2149[545]);
  {
     ScmCharSet *cs = SCM_CHARSET(Scm_MakeEmptyCharSet());
     Scm_CharSetAddRange(cs, SCM_CHAR(0), SCM_CHAR(8));
     Scm_CharSetAddRange(cs, SCM_CHAR(14), SCM_CHAR(31));
     Scm_CharSetAddRange(cs, SCM_CHAR(33), SCM_CHAR(127));
     Scm_CharSetAddRange(cs, SCM_CHAR(128), SCM_CHAR(1114111));
     scm__rc.d2149[549] = SCM_OBJ(cs);
  }
  scm__rc.d2149[551] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[191])),TRUE); /* read-block */
  scm__rc.d2149[550] = Scm_MakeIdentifier(scm__rc.d2149[551], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#read-block */
  scm__rc.d2149[552] = Scm_MakeIdentifier(scm__rc.d2149[326], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#errorf */
  scm__rc.d2149[553] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[192])),TRUE); /* rec */
  scm__rc.d2149[554] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[193])),FALSE); /* G2177 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[638]), scm__rc.d2149[554]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[639]), scm__rc.d2149[546]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[640]), scm__rc.d2149[553]);
  scm__rc.d2149[555] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[194])),TRUE); /* closer */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[642]), scm__rc.d2149[555]);
  scm__rc.d2149[556] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[39])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[39]))->name = scm__rc.d2149[553];/* ((complete-sexp? #:G2177) rec) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[39]))->debugInfo = scm__rc.d2149[556];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]))[208] = SCM_WORD(scm__rc.d2149[549]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]))[211] = SCM_WORD(scm__rc.d2149[545]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]))[304] = SCM_WORD(scm__rc.d2149[550]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1552]))[306] = SCM_WORD(scm__rc.d2149[552]);
  scm__rc.d2149[557] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[195])),TRUE); /* rec-escaped */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[645]), scm__rc.d2149[557]);
  scm__rc.d2149[558] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[40])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[40]))->name = scm__rc.d2149[557];/* ((complete-sexp? #:G2177) rec-escaped) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[40]))->debugInfo = scm__rc.d2149[558];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[654]), scm__rc.d2149[14]);
  scm__rc.d2149[559] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[639]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[655]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[656]), scm__rc.d2149[559]);
  scm__rc.d2149[560] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[41])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[41]))->debugInfo = scm__rc.d2149[560];
  scm__rc.d2149[562] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[196])),TRUE); /* with-input-from-string */
  scm__rc.d2149[561] = Scm_MakeIdentifier(scm__rc.d2149[562], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#with-input-from-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[661]), scm__rc.d2149[14]);
  scm__rc.d2149[563] = Scm_MakeExtendedPair(scm__rc.d2149[546], SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[662]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[663]), scm__rc.d2149[563]);
  scm__rc.d2149[564] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[42])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[42]))->name = scm__rc.d2149[546];/* complete-sexp? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[42]))->debugInfo = scm__rc.d2149[564];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1908]))[3] = SCM_WORD(scm__rc.d2149[561]);
  scm__rc.d2149[565] = Scm_MakeIdentifier(scm__rc.d2149[546], SCM_MODULE(scm__rc.d2149[110]), SCM_NIL); /* gauche#complete-sexp? */
  scm__rc.d2149[566] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[43])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[43]))->name = scm__rc.d2149[115];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[43]))->debugInfo = scm__rc.d2149[566];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1913]))[5] = SCM_WORD(scm__rc.d2149[208]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1913]))[8] = SCM_WORD(scm__rc.d2149[546]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1913]))[15] = SCM_WORD(scm__rc.d2149[565]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[666]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[667]), scm__rc.d2149[445]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[668]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[669]), scm__rc.d2149[1]);
  scm__rc.d2149[567] = Scm_MakeExtendedPair(scm__rc.d2149[445], SCM_OBJ(&scm__rc.d2150[5]), SCM_OBJ(&scm__rc.d2150[671]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor?")), SCM_OBJ(&libstrstring_cursorP__STUB), 0);
  libstrstring_cursorP__STUB.common.info = scm__rc.d2149[567];
  libstrstring_cursorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[674]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[675]), scm__rc.d2149[290]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[676]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[677]), scm__rc.d2149[1]);
  scm__rc.d2149[568] = Scm_MakeExtendedPair(scm__rc.d2149[290], SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[679]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor-start")), SCM_OBJ(&libstrstring_cursor_start__STUB), 0);
  libstrstring_cursor_start__STUB.common.info = scm__rc.d2149[568];
  libstrstring_cursor_start__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[498]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[682]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[683]), scm__rc.d2149[292]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[684]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[685]), scm__rc.d2149[1]);
  scm__rc.d2149[569] = Scm_MakeExtendedPair(scm__rc.d2149[292], SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[687]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor-end")), SCM_OBJ(&libstrstring_cursor_end__STUB), 0);
  libstrstring_cursor_end__STUB.common.info = scm__rc.d2149[569];
  libstrstring_cursor_end__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[498]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[688]), scm__rc.d2149[190]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[689]), scm__rc.d2149[230]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[692]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[693]), scm__rc.d2149[298]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[694]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[695]), scm__rc.d2149[1]);
  scm__rc.d2149[570] = Scm_MakeExtendedPair(scm__rc.d2149[298], SCM_OBJ(&scm__rc.d2150[689]), SCM_OBJ(&scm__rc.d2150[697]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[571]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[571]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[571]))[5] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[571]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[571]))[7] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor-next")), SCM_OBJ(&libstrstring_cursor_next__STUB), 0);
  libstrstring_cursor_next__STUB.common.info = scm__rc.d2149[570];
  libstrstring_cursor_next__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[571]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[700]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[701]), scm__rc.d2149[462]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[702]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[703]), scm__rc.d2149[1]);
  scm__rc.d2149[579] = Scm_MakeExtendedPair(scm__rc.d2149[462], SCM_OBJ(&scm__rc.d2150[689]), SCM_OBJ(&scm__rc.d2150[705]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor-prev")), SCM_OBJ(&libstrstring_cursor_prev__STUB), 0);
  libstrstring_cursor_prev__STUB.common.info = scm__rc.d2149[579];
  libstrstring_cursor_prev__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[571]);
  scm__rc.d2149[580] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[197])),TRUE); /* string-cursor-forward */
  scm__rc.d2149[581] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[198])),TRUE); /* nchars */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[706]), scm__rc.d2149[581]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[707]), scm__rc.d2149[190]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[708]), scm__rc.d2149[230]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[711]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[712]), scm__rc.d2149[580]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[713]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[714]), scm__rc.d2149[1]);
  scm__rc.d2149[582] = Scm_MakeExtendedPair(scm__rc.d2149[580], SCM_OBJ(&scm__rc.d2150[708]), SCM_OBJ(&scm__rc.d2150[716]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[583]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[583]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[583]))[5] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[583]))[6] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[583]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[583]))[8] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor-forward")), SCM_OBJ(&libstrstring_cursor_forward__STUB), 0);
  libstrstring_cursor_forward__STUB.common.info = scm__rc.d2149[582];
  libstrstring_cursor_forward__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[583]);
  scm__rc.d2149[592] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[199])),TRUE); /* string-cursor-back */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[719]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[720]), scm__rc.d2149[592]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[721]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[722]), scm__rc.d2149[1]);
  scm__rc.d2149[593] = Scm_MakeExtendedPair(scm__rc.d2149[592], SCM_OBJ(&scm__rc.d2150[708]), SCM_OBJ(&scm__rc.d2150[724]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor-back")), SCM_OBJ(&libstrstring_cursor_back__STUB), 0);
  libstrstring_cursor_back__STUB.common.info = scm__rc.d2149[593];
  libstrstring_cursor_back__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[583]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[725]), scm__rc.d2149[191]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[726]), scm__rc.d2149[230]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[729]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[730]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[731]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[732]), scm__rc.d2149[1]);
  scm__rc.d2149[594] = Scm_MakeExtendedPair(scm__rc.d2149[328], SCM_OBJ(&scm__rc.d2150[726]), SCM_OBJ(&scm__rc.d2150[734]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-index->cursor")), SCM_OBJ(&libstrstring_index_TOcursor__STUB), 0);
  libstrstring_index_TOcursor__STUB.common.info = scm__rc.d2149[594];
  libstrstring_index_TOcursor__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[571]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[737]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[738]), scm__rc.d2149[367]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[739]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[740]), scm__rc.d2149[1]);
  scm__rc.d2149[595] = Scm_MakeExtendedPair(scm__rc.d2149[367], SCM_OBJ(&scm__rc.d2150[689]), SCM_OBJ(&scm__rc.d2150[742]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor->index")), SCM_OBJ(&libstrstring_cursor_TOindex__STUB), 0);
  libstrstring_cursor_TOindex__STUB.common.info = scm__rc.d2149[595];
  libstrstring_cursor_TOindex__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[571]);
  scm__rc.d2149[596] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[200])),TRUE); /* cursor1 */
  scm__rc.d2149[597] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[201])),TRUE); /* cursor2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[743]), scm__rc.d2149[597]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[744]), scm__rc.d2149[596]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[747]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[748]), scm__rc.d2149[294]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[749]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[750]), scm__rc.d2149[1]);
  scm__rc.d2149[598] = Scm_MakeExtendedPair(scm__rc.d2149[294], SCM_OBJ(&scm__rc.d2150[744]), SCM_OBJ(&scm__rc.d2150[752]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[4] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[5] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[6] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[7] = scm__rc.d2149[17];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor=?")), SCM_OBJ(&libstrstring_cursor_3dP__STUB), 0);
  libstrstring_cursor_3dP__STUB.common.info = scm__rc.d2149[598];
  libstrstring_cursor_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[599]);
  scm__rc.d2149[607] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[202])),TRUE); /* string-cursor<? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[755]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[756]), scm__rc.d2149[607]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[757]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[758]), scm__rc.d2149[1]);
  scm__rc.d2149[608] = Scm_MakeExtendedPair(scm__rc.d2149[607], SCM_OBJ(&scm__rc.d2150[744]), SCM_OBJ(&scm__rc.d2150[760]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor<?")), SCM_OBJ(&libstrstring_cursor_LTP__STUB), 0);
  libstrstring_cursor_LTP__STUB.common.info = scm__rc.d2149[608];
  libstrstring_cursor_LTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[599]);
  scm__rc.d2149[609] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[203])),TRUE); /* string-cursor>? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[763]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[764]), scm__rc.d2149[609]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[765]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[766]), scm__rc.d2149[1]);
  scm__rc.d2149[610] = Scm_MakeExtendedPair(scm__rc.d2149[609], SCM_OBJ(&scm__rc.d2150[744]), SCM_OBJ(&scm__rc.d2150[768]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor>?")), SCM_OBJ(&libstrstring_cursor_GTP__STUB), 0);
  libstrstring_cursor_GTP__STUB.common.info = scm__rc.d2149[610];
  libstrstring_cursor_GTP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[599]);
  scm__rc.d2149[611] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[204])),TRUE); /* string-cursor<=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[771]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[772]), scm__rc.d2149[611]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[773]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[774]), scm__rc.d2149[1]);
  scm__rc.d2149[612] = Scm_MakeExtendedPair(scm__rc.d2149[611], SCM_OBJ(&scm__rc.d2150[744]), SCM_OBJ(&scm__rc.d2150[776]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor<=?")), SCM_OBJ(&libstrstring_cursor_LT_3dP__STUB), 0);
  libstrstring_cursor_LT_3dP__STUB.common.info = scm__rc.d2149[612];
  libstrstring_cursor_LT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[599]);
  scm__rc.d2149[613] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[205])),TRUE); /* string-cursor>=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[779]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[780]), scm__rc.d2149[613]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[781]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[782]), scm__rc.d2149[1]);
  scm__rc.d2149[614] = Scm_MakeExtendedPair(scm__rc.d2149[613], SCM_OBJ(&scm__rc.d2150[744]), SCM_OBJ(&scm__rc.d2150[784]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor>=?")), SCM_OBJ(&libstrstring_cursor_GT_3dP__STUB), 0);
  libstrstring_cursor_GT_3dP__STUB.common.info = scm__rc.d2149[614];
  libstrstring_cursor_GT_3dP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[599]);
  scm__rc.d2149[615] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[206])),TRUE); /* string-cursor-diff */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[785]), scm__rc.d2149[230]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[788]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[789]), scm__rc.d2149[615]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[790]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[791]), scm__rc.d2149[1]);
  scm__rc.d2149[616] = Scm_MakeExtendedPair(scm__rc.d2149[615], SCM_OBJ(&scm__rc.d2150[785]), SCM_OBJ(&scm__rc.d2150[793]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[617]))[3] = scm__rc.d2149[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[617]))[4] = scm__rc.d2149[68];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[617]))[5] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[617]))[6] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[617]))[7] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[617]))[8] = scm__rc.d2149[5];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string-cursor-diff")), SCM_OBJ(&libstrstring_cursor_diff__STUB), 0);
  libstrstring_cursor_diff__STUB.common.info = scm__rc.d2149[616];
  libstrstring_cursor_diff__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[617]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[828] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[207])),FALSE); /* G2155 */
  scm__rc.d2149[829] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[208])),FALSE); /* G2159 */
  scm__rc.d2149[830] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[209])),TRUE); /* undefined */
  scm__rc.d2149[831] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[210])),FALSE); /* G2158 */
  scm__rc.d2149[832] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[211])),FALSE); /* G2157 */
  scm__rc.d2149[833] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[212])),FALSE); /* G2156 */
  scm__rc.d2149[834] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[213])),FALSE); /* rest2154 */
  scm__rc.d2149[835] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[214])),TRUE); /* r */
  scm__rc.d2149[836] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[215])),TRUE); /* pair? */
  scm__rc.d2149[837] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[216])),TRUE); /* char? */
  scm__rc.d2149[838] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[217])),TRUE); /* case */
  scm__rc.d2149[839] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[218])),TRUE); /* >= */
  scm__rc.d2149[840] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[219])),TRUE); /* memq */
  scm__rc.d2149[841] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[220])),TRUE); /* values */
  scm__rc.d2149[842] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[221])),TRUE); /* <= */
  scm__rc.d2149[843] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[222])),TRUE); /* receive */
  scm__rc.d2149[844] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[223])),TRUE); /* m */
  scm__rc.d2149[845] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[224])),TRUE); /* tmp */
  scm__rc.d2149[846] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[225])),TRUE); /* => */
  scm__rc.d2149[847] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[226])),TRUE); /* ^m */
  scm__rc.d2149[848] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[227])),TRUE); /* ^s */
  scm__rc.d2149[849] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[228])),TRUE); /* cut */
  scm__rc.d2149[850] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[229])),TRUE); /* <> */
  scm__rc.d2149[851] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[230])),FALSE); /* G2161 */
  scm__rc.d2149[852] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[231])),TRUE); /* scan-in */
  scm__rc.d2149[853] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[232])),TRUE); /* cur */
  scm__rc.d2149[854] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[233])),TRUE); /* scan-out */
  scm__rc.d2149[855] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[234])),TRUE); /* cursor-substr */
  scm__rc.d2149[856] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[235])),TRUE); /* zero? */
  scm__rc.d2149[857] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[236])),TRUE); /* check-arg */
  scm__rc.d2149[858] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[237])),TRUE); /* define-in-module */
  scm__rc.d2149[859] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[238])),TRUE); /* out */
  scm__rc.d2149[860] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[239])),TRUE); /* siz */
  scm__rc.d2149[861] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[240])),FALSE); /* G2163 */
  scm__rc.d2149[862] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[241])),FALSE); /* G2165 */
  scm__rc.d2149[863] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[242])),FALSE); /* G2164 */
  scm__rc.d2149[864] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[243])),FALSE); /* rest2162 */
  scm__rc.d2149[865] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[244])),TRUE); /* bad */
  scm__rc.d2149[866] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[245])),TRUE); /* if-let1 */
  scm__rc.d2149[867] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[246])),TRUE); /* lst */
  scm__rc.d2149[868] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[247])),TRUE); /* curs */
  scm__rc.d2149[869] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[248])),TRUE); /* reverse */
  scm__rc.d2149[870] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[249])),TRUE); /* ends */
  scm__rc.d2149[871] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[250])),FALSE); /* G2173 */
  scm__rc.d2149[872] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[251])),FALSE); /* G2174 */
  scm__rc.d2149[873] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[252])),FALSE); /* G2175 */
  scm__rc.d2149[874] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[253])),FALSE); /* G2176 */
  scm__rc.d2149[875] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[254])),TRUE); /* and-let1 */
  scm__rc.d2149[876] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[255])),TRUE); /* peek-char */
  scm__rc.d2149[877] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[256])),TRUE); /* read-char */
  scm__rc.d2149[878] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[257])),TRUE); /* special-chars */
  scm__rc.d2149[879] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[258])),TRUE); /* eof-object? */
  scm__rc.d2149[880] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[259])),TRUE); /* eqv? */
  scm__rc.d2149[881] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[260])),TRUE); /* c2 */
  scm__rc.d2149[882] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[261])),FALSE); /* G2178 */
  scm__rc.d2149[883] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[262])),TRUE); /* c3 */
  scm__rc.d2149[884] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[263])),TRUE); /* skip-ws */
  scm__rc.d2149[885] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[264])),TRUE); /* skip-to-nl */
}
