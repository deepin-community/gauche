/* Generated automatically from libvec.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
#include "gauche/priv/vectorP.h"
#include "gauche/priv/bytesP.h"
#include "gauche/priv/mmapP.h"
static ScmObj libvecvector(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecvector__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecvector, SCM_MAKE_INT(SCM_VM_VEC), NULL);

static ScmObj libvecvectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecvectorP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecvectorP, SCM_MAKE_INT(SCM_VM_VECTORP), NULL);

static ScmObj libvecvector_length(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecvector_length__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecvector_length, SCM_MAKE_INT(SCM_VM_VEC_LEN), NULL);

static ScmObj libvecvector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecvector_ref__STUB, 2, 2,1, SCM_FALSE,0, libvecvector_ref, NULL, NULL);

static ScmObj libvecvector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecvector_setX__STUB, 3, 0,SCM_FALSE,libvecvector_setX, NULL, NULL);

static ScmObj libvecvector_TOlist(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecvector_TOlist__STUB, 1, 3,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecvector_TOlist, NULL, NULL);

static ScmObj libveclist_TOvector(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libveclist_TOvector__STUB, 1, 3,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libveclist_TOvector, NULL, NULL);

static ScmObj libvecvector_fillX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecvector_fillX__STUB, 2, 3,SCM_FALSE,libvecvector_fillX, NULL, NULL);

static ScmObj libvecvector_copy(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecvector_copy__STUB, 1, 4,SCM_FALSE,libvecvector_copy, NULL, NULL);

static ScmObj libvecvector_copyX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecvector_copyX__STUB, 3, 3,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecvector_copyX, NULL, NULL);

static ScmObj libvecvector_append(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecvector_append__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecvector_append, NULL, NULL);

static ScmObj libvecvector_immutableP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecvector_immutableP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecvector_immutableP, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 133u, 134u, 8u, 0u, 8u, 6u, 2u, 14u, 144u, 15u, 1u, 36u,
129u, 1u, 192u, 48u, 33u, 34u, 5u, 16u, 52u, 15u, 0u, 146u, 72u, 225u,
65u, 129u, 48u, 67u, 35u, 132u, 134u, 4u, 194u, 88u, 142u, 16u, 24u,
19u, 10u, 50u, 56u, 56u, 96u, 72u, 4u, 142u, 12u, 24u, 18u, 7u, 35u,
129u, 134u, 4u, 193u, 188u, 142u, 4u, 24u, 18u, 4u, 35u, 128u, 134u,
4u, 192u, 112u, 142u, 0u, 24u, 18u, 2u, 33u, 136u, 48u, 49u, 168u,
76u, 7u, 9u, 32u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 186u, 134u, 8u, 32u, 57u, 40u, 128u, 0u, 128u, 96u, 32u,
233u, 0u, 240u, 18u, 72u, 16u, 28u, 3u, 2u, 18u, 32u, 81u, 3u, 64u,
240u, 9u, 36u, 146u, 59u, 152u, 96u, 99u, 80u, 152u, 28u, 18u, 59u,
136u, 96u, 103u, 16u, 76u, 20u, 24u, 68u, 23u, 2u, 18u, 73u, 29u,
188u, 48u, 65u, 129u, 132u, 55u, 112u, 8u, 52u, 144u, 251u, 5u, 4u,
197u, 168u, 146u, 59u, 112u, 96u, 76u, 123u, 200u, 236u, 193u, 129u,
49u, 177u, 35u, 178u, 6u, 4u, 197u, 32u, 142u, 188u, 24u, 19u, 23u,
82u, 58u, 232u, 96u, 72u, 16u, 142u, 182u, 24u, 19u, 23u, 82u, 58u,
200u, 96u, 103u, 16u, 76u, 20u, 24u, 68u, 23u, 1u, 18u, 73u, 29u, 92u,
48u, 65u, 129u, 132u, 55u, 112u, 8u, 52u, 144u, 251u, 5u, 4u, 205u,
168u, 146u, 58u, 176u, 96u, 76u, 251u, 200u, 233u, 193u, 129u, 51u,
177u, 35u, 166u, 6u, 4u, 205u, 32u, 142u, 140u, 24u, 19u, 55u, 82u,
58u, 40u, 96u, 72u, 8u, 142u, 134u, 24u, 19u, 55u, 82u, 58u, 8u, 96u,
131u, 131u, 12u, 14u, 96u, 248u, 28u, 145u, 208u, 3u, 2u, 64u, 228u,
115u, 224u, 192u, 144u, 121u, 28u, 232u, 48u, 38u, 133u, 68u, 17u,
205u, 195u, 2u, 64u, 228u, 115u, 80u, 192u, 202u, 33u, 8u, 30u, 15u,
48u, 56u, 77u, 10u, 136u, 36u, 115u, 48u, 192u, 154u, 25u, 52u, 71u,
49u, 12u, 9u, 7u, 145u, 204u, 3u, 2u, 64u, 228u, 114u, 224u, 192u,
154u, 25u, 52u, 71u, 44u, 12u, 12u, 240u, 136u, 97u, 12u, 98u, 7u,
132u, 132u, 5u, 192u, 8u, 129u, 4u, 39u, 3u, 146u, 68u, 41u, 3u, 193u,
228u, 66u, 161u, 51u, 117u, 34u, 21u, 9u, 139u, 169u, 9u, 128u, 225u,
36u, 142u, 76u, 24u, 19u, 67u, 182u, 200u, 228u, 65u, 129u, 174u, 22u,
36u, 114u, 16u, 192u, 144u, 177u, 28u, 128u, 48u, 50u, 1u, 2u, 6u,
80u, 215u, 11u, 144u, 154u, 31u, 138u, 26u, 33u, 114u, 72u, 133u,
131u, 40u, 107u, 133u, 200u, 97u, 82u, 26u, 161u, 114u, 73u, 13u,
225u, 52u, 70u, 120u, 38u, 135u, 109u, 144u, 200u, 169u, 162u, 0u,
68u, 142u, 62u, 24u, 19u, 68u, 244u, 136u, 227u, 65u, 129u, 52u, 78u,
32u, 142u, 50u, 24u, 18u, 23u, 35u, 139u, 134u, 4u, 209u, 49u, 34u,
56u, 160u, 96u, 77u, 15u, 197u, 35u, 137u, 134u, 4u, 129u, 200u, 226u,
33u, 129u, 52u, 74u, 124u, 142u, 32u, 24u, 18u, 23u, 35u, 135u, 134u,
6u, 64u, 32u, 32u, 202u, 26u, 225u, 131u, 192u, 3u, 68u, 48u, 73u,
16u, 184u, 101u, 13u, 112u, 193u, 12u, 42u, 67u, 84u, 48u, 73u, 33u,
52u, 73u, 100u, 145u, 195u, 131u, 2u, 104u, 204u, 41u, 28u, 36u, 48u,
38u, 140u, 141u, 145u, 194u, 3u, 2u, 67u, 36u, 112u, 96u, 192u, 154u,
49u, 138u, 71u, 1u, 12u, 9u, 163u, 16u, 68u, 112u, 0u, 192u, 144u,
201u, 12u, 65u, 129u, 52u, 60u, 108u, 144u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 134u, 6u, 8u, 106u, 27u, 16u, 228u, 15u, 9u, 8u, 11u, 128u,
17u, 2u, 8u, 78u, 7u, 36u, 136u, 82u, 7u, 131u, 200u, 133u, 68u, 23u,
1u, 18u, 33u, 81u, 5u, 192u, 132u, 136u, 32u, 57u, 40u, 128u, 0u,
128u, 96u, 32u, 233u, 0u, 240u, 18u, 72u, 16u, 28u, 3u, 2u, 18u, 32u,
81u, 3u, 64u, 240u, 9u, 36u, 146u, 71u, 9u, 12u, 12u, 97u, 48u, 61u,
76u, 38u, 72u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u,
112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 194u, 40u, 24u, 18u, 7u, 35u, 194u, 34u, 24u, 32u, 0u, 33u,
216u, 116u, 67u, 208u, 252u, 58u, 72u, 128u, 120u, 0u, 116u, 128u,
120u, 9u, 36u, 8u, 130u, 29u, 136u, 73u, 17u, 20u, 15u, 0u, 136u,
142u, 31u, 135u, 73u, 36u, 120u, 68u, 3u, 2u, 97u, 112u, 71u, 132u,
52u, 48u, 38u, 15u, 36u, 120u, 67u, 3u, 2u, 67u, 164u, 120u, 66u,
195u, 2u, 67u, 228u, 120u, 66u, 67u, 2u, 96u, 242u, 71u, 132u, 32u,
48u, 38u, 33u, 100u, 120u, 65u, 131u, 2u, 98u, 88u, 71u, 132u, 20u,
48u, 36u, 58u, 71u, 132u, 16u, 48u, 36u, 62u, 71u, 132u, 8u, 48u, 38u,
37u, 132u, 120u, 64u, 67u, 2u, 64u, 36u, 120u, 64u, 3u, 2u, 64u, 228u,
119u, 208u, 192u, 152u, 114u, 17u, 223u, 3u, 2u, 68u, 36u, 119u, 176u,
192u, 144u, 233u, 29u, 228u, 48u, 38u, 28u, 132u, 119u, 128u, 192u,
152u, 41u, 17u, 221u, 131u, 2u, 67u, 164u, 119u, 64u, 192u, 152u, 41u,
17u, 220u, 195u, 3u, 32u, 16u, 56u, 137u, 34u, 82u, 72u, 76u, 20u,
160u, 114u, 71u, 113u, 12u, 9u, 161u, 67u, 4u, 119u, 0u, 192u, 145u,
41u, 29u, 184u, 48u, 38u, 133u, 12u, 17u, 218u, 131u, 3u, 60u, 76u,
31u, 96u, 40u, 16u, 146u, 59u, 72u, 96u, 77u, 12u, 26u, 35u, 180u, 6u,
4u, 129u, 8u, 236u, 225u, 129u, 32u, 34u, 59u, 24u, 96u, 77u, 12u, 5u,
35u, 176u, 134u, 8u, 158u, 37u, 224u, 4u, 142u, 186u, 24u, 34u, 136u,
126u, 29u, 136u, 73u, 29u, 112u, 48u, 36u, 66u, 71u, 91u, 12u, 9u,
14u, 145u, 214u, 131u, 2u, 67u, 228u, 117u, 128u, 192u, 154u, 29u,
36u, 71u, 85u, 12u, 17u, 76u, 63u, 2u, 18u, 58u, 160u, 96u, 72u, 16u,
142u, 166u, 24u, 18u, 31u, 35u, 168u, 134u, 4u, 209u, 8u, 178u, 58u,
112u, 96u, 138u, 97u, 248u, 8u, 145u, 211u, 67u, 2u, 64u, 68u, 116u,
192u, 192u, 144u, 249u, 29u, 40u, 48u, 38u, 137u, 8u, 17u, 210u, 3u,
4u, 28u, 24u, 97u, 243u, 21u, 64u, 228u, 142u, 142u, 24u, 18u, 31u,
35u, 162u, 134u, 4u, 138u, 136u, 232u, 33u, 129u, 52u, 78u, 84u, 142u,
124u, 24u, 18u, 31u, 35u, 158u, 6u, 6u, 81u, 8u, 64u, 241u, 81u, 129u,
194u, 104u, 156u, 169u, 35u, 157u, 6u, 4u, 209u, 92u, 114u, 57u, 192u,
96u, 72u, 168u, 142u, 110u, 24u, 18u, 31u, 35u, 154u, 134u, 4u, 209u,
92u, 114u, 57u, 152u, 96u, 103u, 132u, 67u, 8u, 99u, 16u, 252u, 36u,
32u, 33u, 21u, 195u, 228u, 136u, 16u, 69u, 144u, 249u, 36u, 66u, 144u,
252u, 84u, 68u, 90u, 4u, 58u, 19u, 68u, 132u, 8u, 136u, 66u, 104u,
132u, 89u, 17u, 40u, 77u, 14u, 146u, 36u, 60u, 4u, 208u, 225u, 64u,
154u, 24u, 10u, 68u, 93u, 3u, 132u, 208u, 161u, 128u, 152u, 41u, 18u,
73u, 35u, 150u, 134u, 4u, 209u, 128u, 130u, 57u, 72u, 96u, 107u, 139u,
201u, 28u, 160u, 48u, 36u, 94u, 71u, 39u, 12u, 12u, 128u, 64u, 129u,
148u, 53u, 198u, 4u, 38u, 140u, 128u, 134u, 136u, 192u, 146u, 34u,
240u, 202u, 26u, 227u, 2u, 24u, 84u, 134u, 168u, 192u, 146u, 67u,
120u, 77u, 28u, 128u, 9u, 163u, 1u, 4u, 50u, 42u, 104u, 200u, 241u,
35u, 147u, 6u, 4u, 209u, 233u, 66u, 57u, 8u, 96u, 77u, 30u, 74u, 35u,
144u, 6u, 4u, 140u, 8u, 227u, 193u, 129u, 52u, 119u, 80u, 142u, 52u,
24u, 19u, 70u, 64u, 72u, 227u, 33u, 129u, 33u, 242u, 56u, 184u, 96u,
77u, 25u, 1u, 35u, 138u, 134u, 4u, 209u, 216u, 18u, 56u, 160u, 96u,
72u, 192u, 142u, 38u, 24u, 25u, 0u, 128u, 131u, 40u, 107u, 140u, 72u,
77u, 24u, 151u, 13u, 17u, 137u, 36u, 70u, 1u, 148u, 53u, 198u, 36u,
48u, 169u, 13u, 81u, 137u, 36u, 132u, 209u, 209u, 178u, 71u, 18u, 12u,
9u, 164u, 153u, 100u, 112u, 208u, 192u, 154u, 73u, 2u, 71u, 12u, 12u,
9u, 25u, 17u, 194u, 131u, 2u, 105u, 32u, 89u, 28u, 24u, 48u, 38u,
140u, 75u, 145u, 193u, 67u, 2u, 67u, 228u, 112u, 48u, 192u, 154u, 49u,
46u, 71u, 1u, 12u, 9u, 164u, 115u, 4u, 112u, 0u, 192u, 145u, 145u,
12u, 65u, 129u, 52u, 97u, 32u, 144u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 134u, 6u, 8u, 106u, 27u, 17u, 156u, 63u, 9u, 8u, 8u, 69u,
112u, 249u, 34u, 4u, 17u, 100u, 62u, 73u, 16u, 164u, 63u, 21u, 17u,
22u, 129u, 14u, 136u, 166u, 31u, 128u, 137u, 17u, 8u, 138u, 97u, 248u,
16u, 145u, 18u, 136u, 162u, 31u, 135u, 98u, 18u, 72u, 120u, 17u, 60u,
75u, 192u, 8u, 103u, 137u, 131u, 236u, 5u, 2u, 18u, 68u, 93u, 3u,
136u, 146u, 37u, 34u, 0u, 2u, 29u, 135u, 68u, 61u, 15u, 195u, 164u,
136u, 7u, 128u, 7u, 72u, 7u, 128u, 146u, 64u, 136u, 33u, 216u, 132u,
145u, 17u, 64u, 240u, 8u, 136u, 225u, 248u, 116u, 146u, 73u, 35u,
132u, 134u, 6u, 48u, 152u, 30u, 166u, 21u, 4u, 112u, 112u, 192u, 152u,
14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static ScmObj libvecmake_weak_vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecmake_weak_vector__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecmake_weak_vector, NULL, NULL);

static ScmObj libvecweak_vector_length(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecweak_vector_length__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecweak_vector_length, NULL, NULL);

static ScmObj libvecweak_vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecweak_vector_ref__STUB, 2, 2,SCM_FALSE,libvecweak_vector_ref, NULL, NULL);

static ScmObj libvecweak_vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecweak_vector_setX__STUB, 3, 0,SCM_FALSE,libvecweak_vector_setX, NULL, NULL);

static ScmObj libvecmake_s8vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_s8vector__STUB, 1, 2,SCM_FALSE,libvecmake_s8vector, NULL, NULL);

static ScmObj libvecmake_u8vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_u8vector__STUB, 1, 2,SCM_FALSE,libvecmake_u8vector, NULL, NULL);

static ScmObj libvecmake_s16vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_s16vector__STUB, 1, 2,SCM_FALSE,libvecmake_s16vector, NULL, NULL);

static ScmObj libvecmake_u16vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_u16vector__STUB, 1, 2,SCM_FALSE,libvecmake_u16vector, NULL, NULL);

static ScmObj libvecmake_s32vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_s32vector__STUB, 1, 2,SCM_FALSE,libvecmake_s32vector, NULL, NULL);

static ScmObj libvecmake_u32vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_u32vector__STUB, 1, 2,SCM_FALSE,libvecmake_u32vector, NULL, NULL);

static ScmObj libvecmake_s64vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_s64vector__STUB, 1, 2,SCM_FALSE,libvecmake_s64vector, NULL, NULL);

static ScmObj libvecmake_u64vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_u64vector__STUB, 1, 2,SCM_FALSE,libvecmake_u64vector, NULL, NULL);

static ScmObj libvecmake_f16vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_f16vector__STUB, 1, 2,SCM_FALSE,libvecmake_f16vector, NULL, NULL);

static ScmObj libvecmake_f32vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_f32vector__STUB, 1, 2,SCM_FALSE,libvecmake_f32vector, NULL, NULL);

static ScmObj libvecmake_f64vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_f64vector__STUB, 1, 2,SCM_FALSE,libvecmake_f64vector, NULL, NULL);

static ScmObj libvecmake_c32vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_c32vector__STUB, 1, 2,SCM_FALSE,libvecmake_c32vector, NULL, NULL);

static ScmObj libvecmake_c64vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_c64vector__STUB, 1, 2,SCM_FALSE,libvecmake_c64vector, NULL, NULL);

static ScmObj libvecmake_c128vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_c128vector__STUB, 1, 2,SCM_FALSE,libvecmake_c128vector, NULL, NULL);

static ScmObj libvecs8vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs8vector_setX__STUB, 3, 2,SCM_FALSE,libvecs8vector_setX, NULL, NULL);

static ScmObj libvecs8vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecs8vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecs8vector_ref, NULL, NULL);

static ScmObj libvecu8vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu8vector_setX__STUB, 3, 2,SCM_FALSE,libvecu8vector_setX, NULL, NULL);

static ScmObj libvecu8vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecu8vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecu8vector_ref, NULL, NULL);

static ScmObj libvecs16vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs16vector_setX__STUB, 3, 2,SCM_FALSE,libvecs16vector_setX, NULL, NULL);

static ScmObj libvecs16vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecs16vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecs16vector_ref, NULL, NULL);

static ScmObj libvecu16vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu16vector_setX__STUB, 3, 2,SCM_FALSE,libvecu16vector_setX, NULL, NULL);

static ScmObj libvecu16vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecu16vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecu16vector_ref, NULL, NULL);

static ScmObj libvecs32vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs32vector_setX__STUB, 3, 2,SCM_FALSE,libvecs32vector_setX, NULL, NULL);

static ScmObj libvecs32vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecs32vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecs32vector_ref, NULL, NULL);

static ScmObj libvecu32vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu32vector_setX__STUB, 3, 2,SCM_FALSE,libvecu32vector_setX, NULL, NULL);

static ScmObj libvecu32vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecu32vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecu32vector_ref, NULL, NULL);

static ScmObj libvecs64vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs64vector_setX__STUB, 3, 2,SCM_FALSE,libvecs64vector_setX, NULL, NULL);

static ScmObj libvecs64vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecs64vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecs64vector_ref, NULL, NULL);

static ScmObj libvecu64vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu64vector_setX__STUB, 3, 2,SCM_FALSE,libvecu64vector_setX, NULL, NULL);

static ScmObj libvecu64vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecu64vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecu64vector_ref, NULL, NULL);

static ScmObj libvecf16vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecf16vector_setX__STUB, 3, 2,SCM_FALSE,libvecf16vector_setX, NULL, NULL);

static ScmObj libvecf16vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecf16vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecf16vector_ref, NULL, NULL);

static ScmObj libvecf32vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecf32vector_setX__STUB, 3, 2,SCM_FALSE,libvecf32vector_setX, NULL, NULL);

static ScmObj libvecf32vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecf32vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecf32vector_ref, NULL, NULL);

static ScmObj libvecf64vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecf64vector_setX__STUB, 3, 2,SCM_FALSE,libvecf64vector_setX, NULL, NULL);

static ScmObj libvecf64vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecf64vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecf64vector_ref, NULL, NULL);

static ScmObj libvecc32vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecc32vector_setX__STUB, 3, 2,SCM_FALSE,libvecc32vector_setX, NULL, NULL);

static ScmObj libvecc32vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecc32vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecc32vector_ref, NULL, NULL);

static ScmObj libvecc64vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecc64vector_setX__STUB, 3, 2,SCM_FALSE,libvecc64vector_setX, NULL, NULL);

static ScmObj libvecc64vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecc64vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecc64vector_ref, NULL, NULL);

static ScmObj libvecc128vector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecc128vector_setX__STUB, 3, 2,SCM_FALSE,libvecc128vector_setX, NULL, NULL);

static ScmObj libvecc128vector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecc128vector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecc128vector_ref, NULL, NULL);

static ScmObj libvecuvector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecuvector_setX__STUB, 3, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecuvector_setX, NULL, NULL);

static ScmObj libvecuvector_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecuvector_ref__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecuvector_ref, NULL, NULL);

static ScmObj libvecuvector_length(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecuvector_length__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecuvector_length, NULL, NULL);

static ScmObj libvecuvector_immutableP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecuvector_immutableP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecuvector_immutableP, NULL, NULL);

static ScmObj libvecuvectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecuvectorP__STUB, 1, 0,1, SCM_FALSE,0, libvecuvectorP, NULL, NULL);

static ScmObj libvecu8vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu8vectorP__STUB, 1, 0,SCM_FALSE,libvecu8vectorP, NULL, NULL);

static ScmObj libvecs8vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs8vectorP__STUB, 1, 0,SCM_FALSE,libvecs8vectorP, NULL, NULL);

static ScmObj libvecu16vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu16vectorP__STUB, 1, 0,SCM_FALSE,libvecu16vectorP, NULL, NULL);

static ScmObj libvecs16vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs16vectorP__STUB, 1, 0,SCM_FALSE,libvecs16vectorP, NULL, NULL);

static ScmObj libvecu32vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu32vectorP__STUB, 1, 0,SCM_FALSE,libvecu32vectorP, NULL, NULL);

static ScmObj libvecs32vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs32vectorP__STUB, 1, 0,SCM_FALSE,libvecs32vectorP, NULL, NULL);

static ScmObj libvecu64vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu64vectorP__STUB, 1, 0,SCM_FALSE,libvecu64vectorP, NULL, NULL);

static ScmObj libvecs64vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs64vectorP__STUB, 1, 0,SCM_FALSE,libvecs64vectorP, NULL, NULL);

static ScmObj libvecf16vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecf16vectorP__STUB, 1, 0,SCM_FALSE,libvecf16vectorP, NULL, NULL);

static ScmObj libvecf32vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecf32vectorP__STUB, 1, 0,SCM_FALSE,libvecf32vectorP, NULL, NULL);

static ScmObj libvecf64vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecf64vectorP__STUB, 1, 0,SCM_FALSE,libvecf64vectorP, NULL, NULL);

static ScmObj libvecc32vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecc32vectorP__STUB, 1, 0,SCM_FALSE,libvecc32vectorP, NULL, NULL);

static ScmObj libvecc64vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecc64vectorP__STUB, 1, 0,SCM_FALSE,libvecc64vectorP, NULL, NULL);

static ScmObj libvecc128vectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecc128vectorP__STUB, 1, 0,SCM_FALSE,libvecc128vectorP, NULL, NULL);

static ScmObj libvecmake_view_uvector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_view_uvector__STUB, 3, 3,SCM_FALSE,libvecmake_view_uvector, NULL, NULL);

static ScmObj string_TObytevector(ScmClass* klass,ScmString* s,ScmSmallInt start,ScmSmallInt end,int immutable);
static ScmObj libvecstring_TOs8vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecstring_TOs8vector__STUB, 1, 4,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecstring_TOs8vector, NULL, NULL);

static ScmObj libvecstring_TOu8vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecstring_TOu8vector__STUB, 1, 4,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecstring_TOu8vector, NULL, NULL);

static ScmObj string_TObytevectorX(ScmUVector* v,ScmSmallInt tstart,ScmString* s,ScmSmallInt start,ScmSmallInt end);
static ScmObj libvecstring_TOs8vectorX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecstring_TOs8vectorX__STUB, 3, 3,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecstring_TOs8vectorX, NULL, NULL);

static ScmObj libvecstring_TOu8vectorX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecstring_TOu8vectorX__STUB, 3, 3,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecstring_TOu8vectorX, NULL, NULL);

static ScmObj bytevector_TOstring(ScmUVector* v,ScmSmallInt start,ScmSmallInt end,ScmObj term);
static ScmObj libvecs8vector_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs8vector_TOstring__STUB, 1, 4,SCM_FALSE,libvecs8vector_TOstring, NULL, NULL);

static ScmObj libvecu8vector_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu8vector_TOstring__STUB, 1, 4,SCM_FALSE,libvecu8vector_TOstring, NULL, NULL);

static ScmObj string_TOwordvector(ScmClass* klass,ScmString* s,ScmSmallInt start,ScmSmallInt end,ScmObj endian);
static ScmObj libvecstring_TOs32vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecstring_TOs32vector__STUB, 1, 4,SCM_FALSE,libvecstring_TOs32vector, NULL, NULL);

static ScmObj libvecstring_TOu32vector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecstring_TOu32vector__STUB, 1, 4,SCM_FALSE,libvecstring_TOu32vector, NULL, NULL);

static ScmObj string_TOwordvectorX(ScmUVector* v,ScmSmallInt tstart,ScmString* s,ScmSmallInt start,ScmSmallInt end,ScmObj endian);
static ScmObj libvecstring_TOs32vectorX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecstring_TOs32vectorX__STUB, 3, 4,SCM_FALSE,libvecstring_TOs32vectorX, NULL, NULL);

static ScmObj libvecstring_TOu32vectorX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecstring_TOu32vectorX__STUB, 3, 4,SCM_FALSE,libvecstring_TOu32vectorX, NULL, NULL);

static ScmObj wordvector_TOstring(ScmUVector* v,ScmSmallInt start,ScmSmallInt end,ScmObj term,ScmObj endian);
static ScmObj libvecs32vector_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecs32vector_TOstring__STUB, 1, 5,SCM_FALSE,libvecs32vector_TOstring, NULL, NULL);

static ScmObj libvecu32vector_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecu32vector_TOstring__STUB, 1, 5,SCM_FALSE,libvecu32vector_TOstring, NULL, NULL);

static ScmObj libvecbitvectorP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecbitvectorP__STUB, 1, 0,SCM_FALSE,libvecbitvectorP, NULL, NULL);

static ScmObj libvecbitvector_length(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecbitvector_length__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecbitvector_length, NULL, NULL);

static ScmObj libvecbitvector_any_valueP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecbitvector_any_valueP__STUB, 2, 3,SCM_FALSE,libvecbitvector_any_valueP, NULL, NULL);

static ScmObj libvecbitvector_every_valueP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecbitvector_every_valueP__STUB, 2, 3,SCM_FALSE,libvecbitvector_every_valueP, NULL, NULL);

static ScmObj libvecmake_bitvector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecmake_bitvector__STUB, 1, 2,SCM_FALSE,libvecmake_bitvector, NULL, NULL);

static ScmObj libvecbitvector(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecbitvector__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecbitvector, NULL, NULL);

static ScmObj libveclist_TObitvector(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libveclist_TObitvector__STUB, 1, 0,SCM_FALSE,libveclist_TObitvector, NULL, NULL);

static ScmObj libvecstring_TObitvector(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecstring_TObitvector__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecstring_TObitvector, NULL, NULL);

static ScmObj libvecbitvector_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecbitvector_TOstring__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecbitvector_TOstring, NULL, NULL);

static ScmObj libvecbit_TOinteger(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecbit_TOinteger__STUB, 1, 0,SCM_FALSE,libvecbit_TOinteger, NULL, NULL);

static ScmObj libvecbit_TOboolean(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecbit_TOboolean__STUB, 1, 0,SCM_FALSE,libvecbit_TOboolean, NULL, NULL);

static ScmObj libvecbitvector_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecbitvector_setX__STUB, 3, 0,SCM_FALSE,libvecbitvector_setX, NULL, NULL);

static ScmObj libvecbitvector_ref_2fint(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecbitvector_ref_2fint__STUB, 2, 2,SCM_FALSE,libvecbitvector_ref_2fint, NULL, NULL);

static ScmObj libvecbitvector_ref_2fbool(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libvecbitvector_ref_2fbool__STUB, 2, 2,SCM_FALSE,libvecbitvector_ref_2fbool, NULL, NULL);

static ScmObj libvecbitvector_copy(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecbitvector_copy__STUB, 1, 3,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecbitvector_copy, NULL, NULL);

static ScmObj libvecbitvector_copyX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libvecbitvector_copyX__STUB, 3, 3,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libvecbitvector_copyX, NULL, NULL);





















static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[240];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("vector", 6, 6),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libvec.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("vector\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("vector-length", 13, 13),
      SCM_STRING_CONST_INITIALIZER("vec", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<vector>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("vector-ref", 10, 10),
      SCM_STRING_CONST_INITIALIZER("k", 1, 1),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("fallback", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<integer>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("vector-set!", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("vector->list", 12, 12),
      SCM_STRING_CONST_INITIALIZER("start", 5, 5),
      SCM_STRING_CONST_INITIALIZER("end", 3, 3),
      SCM_STRING_CONST_INITIALIZER("list->vector", 12, 12),
      SCM_STRING_CONST_INITIALIZER("list", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<list>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("vector-fill!", 12, 12),
      SCM_STRING_CONST_INITIALIZER("fill", 4, 4),
      SCM_STRING_CONST_INITIALIZER("vector-copy", 11, 11),
      SCM_STRING_CONST_INITIALIZER("v", 1, 1),
      SCM_STRING_CONST_INITIALIZER("vector-copy!", 12, 12),
      SCM_STRING_CONST_INITIALIZER("t", 1, 1),
      SCM_STRING_CONST_INITIALIZER("tstart", 6, 6),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("sstart", 6, 6),
      SCM_STRING_CONST_INITIALIZER("send", 4, 4),
      SCM_STRING_CONST_INITIALIZER("vector-append", 13, 13),
      SCM_STRING_CONST_INITIALIZER("vecs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("vector-immutable\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("vector->string", 14, 14),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("assume-type", 11, 11),
      SCM_STRING_CONST_INITIALIZER("assume", 6, 6),
      SCM_STRING_CONST_INITIALIZER("exact-integer\077", 14, 14),
      SCM_STRING_CONST_INITIALIZER("with-output-to-string", 21, 21),
      SCM_STRING_CONST_INITIALIZER("^", 1, 1),
      SCM_STRING_CONST_INITIALIZER("do", 2, 2),
      SCM_STRING_CONST_INITIALIZER("i", 1, 1),
      SCM_STRING_CONST_INITIALIZER("+", 1, 1),
      SCM_STRING_CONST_INITIALIZER(">=", 2, 2),
      SCM_STRING_CONST_INITIALIZER("write-char", 10, 10),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("of-type\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("type-error", 10, 10),
      SCM_STRING_CONST_INITIALIZER("Invalid assumption: ~s", 22, 22),
      SCM_STRING_CONST_INITIALIZER("format-internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("gauche.format", 13, 13),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("string->vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("string-cursor-start", 19, 19),
      SCM_STRING_CONST_INITIALIZER("string-cursor-end", 17, 17),
      SCM_STRING_CONST_INITIALIZER("<string>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("let*", 4, 4),
      SCM_STRING_CONST_INITIALIZER("ss", 2, 2),
      SCM_STRING_CONST_INITIALIZER("string-index->cursor", 20, 20),
      SCM_STRING_CONST_INITIALIZER("ee", 2, 2),
      SCM_STRING_CONST_INITIALIZER("size", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string-cursor-diff", 18, 18),
      SCM_STRING_CONST_INITIALIZER("when", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<", 1, 1),
      SCM_STRING_CONST_INITIALIZER("End point precedes start point", 30, 30),
      SCM_STRING_CONST_INITIALIZER("rlet1", 5, 5),
      SCM_STRING_CONST_INITIALIZER("make-vector", 11, 11),
      SCM_STRING_CONST_INITIALIZER("string-cursor-next", 18, 18),
      SCM_STRING_CONST_INITIALIZER("string-cursor>=\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("string-ref", 10, 10),
      SCM_STRING_CONST_INITIALIZER("make-weak-vector", 16, 16),
      SCM_STRING_CONST_INITIALIZER("weak-vector-length", 18, 18),
      SCM_STRING_CONST_INITIALIZER("wv", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<weak-vector>", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("weak-vector-ref", 15, 15),
      SCM_STRING_CONST_INITIALIZER("index", 5, 5),
      SCM_STRING_CONST_INITIALIZER("weak-vector-set!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("val", 3, 3),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_S8", 14, 14),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_U8", 14, 14),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_S16", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_U16", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_S32", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_U32", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_S64", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_U64", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_F16", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_F32", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_F64", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SCM_UVECTOR_GENERIC", 19, 19),
      SCM_STRING_CONST_INITIALIZER("make-s8vector", 13, 13),
      SCM_STRING_CONST_INITIALIZER("length", 6, 6),
      SCM_STRING_CONST_INITIALIZER("make-u8vector", 13, 13),
      SCM_STRING_CONST_INITIALIZER("make-s16vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-u16vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-s32vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-u32vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-s64vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-u64vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-f16vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-f32vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-f64vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-c32vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-c64vector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-c128vector", 15, 15),
      SCM_STRING_CONST_INITIALIZER("s8vector-set!", 13, 13),
      SCM_STRING_CONST_INITIALIZER("clamp", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<s8vector>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("s8vector-ref", 12, 12),
      SCM_STRING_CONST_INITIALIZER("u8vector-set!", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<u8vector>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("u8vector-ref", 12, 12),
      SCM_STRING_CONST_INITIALIZER("s16vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<s16vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("s16vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("u16vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<u16vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("u16vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("s32vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<s32vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("s32vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("u32vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<u32vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("u32vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("s64vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<s64vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("s64vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("u64vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<u64vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("u64vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("f16vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<f16vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("f16vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("f32vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<f32vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("f32vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("f64vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<f64vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("f64vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("c32vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<c32vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("c32vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("c64vector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<c64vector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("c64vector-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("c128vector-set!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<c128vector>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("c128vector-ref", 14, 14),
      SCM_STRING_CONST_INITIALIZER("uvector-set!", 12, 12),
      SCM_STRING_CONST_INITIALIZER("<uvector>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("uvector-ref", 11, 11),
      SCM_STRING_CONST_INITIALIZER("uvector-length", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<ulong>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("uvector-immutable\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("uvector\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("u8vector\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("s8vector\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("u16vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("s16vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("u32vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("s32vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("u64vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("s64vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("f16vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("f32vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("f64vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("c32vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("c64vector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("c128vector\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("make-view-uvector", 17, 17),
      SCM_STRING_CONST_INITIALIZER("mem", 3, 3),
      SCM_STRING_CONST_INITIALIZER("klass", 5, 5),
      SCM_STRING_CONST_INITIALIZER("offset", 6, 6),
      SCM_STRING_CONST_INITIALIZER("immutable\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<class>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("<integer>\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("string->s8vector", 16, 16),
      SCM_STRING_CONST_INITIALIZER("string->u8vector", 16, 16),
      SCM_STRING_CONST_INITIALIZER("string->s8vector!", 17, 17),
      SCM_STRING_CONST_INITIALIZER("string->u8vector!", 17, 17),
      SCM_STRING_CONST_INITIALIZER("s8vector->string", 16, 16),
      SCM_STRING_CONST_INITIALIZER("terminator", 10, 10),
      SCM_STRING_CONST_INITIALIZER("u8vector->string", 16, 16),
      SCM_STRING_CONST_INITIALIZER("string->s32vector", 17, 17),
      SCM_STRING_CONST_INITIALIZER("endian", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string->u32vector", 17, 17),
      SCM_STRING_CONST_INITIALIZER("string->s32vector!", 18, 18),
      SCM_STRING_CONST_INITIALIZER("string->u32vector!", 18, 18),
      SCM_STRING_CONST_INITIALIZER("s32vector->string", 17, 17),
      SCM_STRING_CONST_INITIALIZER("u32vector->string", 17, 17),
      SCM_STRING_CONST_INITIALIZER("bitvector\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bitvector-length", 16, 16),
      SCM_STRING_CONST_INITIALIZER("<bitvector>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("bitvector-any-value\077", 20, 20),
      SCM_STRING_CONST_INITIALIZER("bit", 3, 3),
      SCM_STRING_CONST_INITIALIZER("bitvector-every-value\077", 22, 22),
      SCM_STRING_CONST_INITIALIZER("make-bitvector", 14, 14),
      SCM_STRING_CONST_INITIALIZER("len", 3, 3),
      SCM_STRING_CONST_INITIALIZER("init", 4, 4),
      SCM_STRING_CONST_INITIALIZER("bitvector", 9, 9),
      SCM_STRING_CONST_INITIALIZER("bits", 4, 4),
      SCM_STRING_CONST_INITIALIZER("list->bitvector", 15, 15),
      SCM_STRING_CONST_INITIALIZER("string->bitvector", 17, 17),
      SCM_STRING_CONST_INITIALIZER("bitvector->string", 17, 17),
      SCM_STRING_CONST_INITIALIZER("bit->integer", 12, 12),
      SCM_STRING_CONST_INITIALIZER("bit->boolean", 12, 12),
      SCM_STRING_CONST_INITIALIZER("bitvector-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("b", 1, 1),
      SCM_STRING_CONST_INITIALIZER("bitvector-ref/int", 17, 17),
      SCM_STRING_CONST_INITIALIZER("bitvector-ref/bool", 18, 18),
      SCM_STRING_CONST_INITIALIZER("bitvector-copy", 14, 14),
      SCM_STRING_CONST_INITIALIZER("bitvector-copy!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("dest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("dstart", 6, 6),
      SCM_STRING_CONST_INITIALIZER("src", 3, 3),
      SCM_STRING_CONST_INITIALIZER("format", 6, 6),
      SCM_STRING_CONST_INITIALIZER("G2154", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2156", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2155", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2153", 8, 8),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("G2161", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2163", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2162", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2160", 8, 8),
  },
};
static struct scm__rcRec {
  ScmUVector d2159[5];
  ScmCompiledCode d2158[5];
  ScmWord d2157[314];
  ScmPair d2150[1088] SCM_ALIGN_PAIR;
  ScmObj d2149[1032];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2159 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 85, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 461, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 90, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 660, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 131, uvector__00005, 0, NULL),
  },
  {   /* ScmCompiledCode d2158 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[0])), 15,
            15, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[189]),
            SCM_OBJ(&scm__rc.d2158[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* vector->string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[15])), 120,
            29, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[194]),
            SCM_OBJ(&scm__rc.d2158[2]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[135])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* string->vector */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[150])), 149,
            52, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[274]),
            SCM_OBJ(&scm__rc.d2158[4]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[299])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2157 */
    /* (vector->string #f) */
    0x0000004d    /*   0 (LREF11-PUSH) */,
    0x00001017    /*   1 (LOCAL-ENV 1) */,
    0x00000042    /*   2 (LREF11) */,
    0x0000002c    /*   3 (LREF-VAL0-BNGE 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 6),
    0x00000014    /*   5 (RET) */,
    0x00403047    /*   6 (LREF-PUSH 3 1) */,
    0x0000003d    /*   7 (LREF0) */,
    0x000000a8    /*   8 (VEC-REF) */,
    0x000010dd    /*   9 (WRITE-CHAR 1) */,
    0x000010c7    /*  10 (LREF0-NUMADDI-PUSH 1) */,
    0x0000101b    /*  11 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 2),
    0x00000014    /*  13 (RET) */,
    0x00000014    /*  14 (RET) */,
    /* vector->string */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 6),
    0x00000002    /*   3 (CONSTI 0) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 23),
    0x00000042    /*  19 (LREF11) */,
    0x000000a7    /*  20 (VEC-LEN) */,
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 24),
    0x0000006a    /*  23 (LREF0-CAR) */,
    0x0000000d    /*  24 (PUSH) */,
    0x0000003d    /*  25 (LREF0) */,
    0x00000022    /*  26 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 31),
    0x00000003    /*  28 (CONSTN) */,
    0x00000013    /*  29 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 32),
    0x00000076    /*  31 (LREF0-CDR) */,
    0x00002018    /*  32 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  33 (LREF0) */,
    0x00000022    /*  34 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 38),
    0x00000013    /*  36 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 46),
    0x0000200e    /*  38 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 46),
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[46])) /* "too many arguments for" */,
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[176])) /* (lambda (v :optional (start 0) (end (vector-length v))) (assume-type v <vector>) (assume (exact-integer? start)) (assume (exact-integer? end)) (with-output-to-string (^ () (do ((i start (+ i 1))) ((>= i end)) (write-char (vector-ref v i)))))) */,
    0x0000205f    /*  44 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000200e    /*  46 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 53),
    0x00000050    /*  48 (LREF21-PUSH) */,
    0x0000005e    /*  49 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <vector> */,
    0x0000205f    /*  51 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*  53 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 58),
    0x00000045    /*  55 (LREF21) */,
    0x00000013    /*  56 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 67),
    0x0000300e    /*  58 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 67),
    0x00000006    /*  60 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* v */,
    0x0000005e    /*  62 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <vector> */,
    0x00000050    /*  64 (LREF21-PUSH) */,
    0x0000305f    /*  65 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  67 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 72),
    0x0000004d    /*  69 (LREF11-PUSH) */,
    0x0000105f    /*  70 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact-integer? */,
    0x0000001e    /*  72 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 76),
    0x00000013    /*  74 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 91),
    0x0000100e    /*  76 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 91),
    0x0000200e    /*  78 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 89),
    0x00000006    /*  80 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[179])) /* (#f 0 #<box #f>) */,
    0x00000006    /*  82 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[61])) /* "Invalid assumption: ~s" */,
    0x00000001    /*  84 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[141])) /* (exact-integer? start) */,
    0x00002088    /*  86 (LIST 2) */,
    0x00002062    /*  87 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* format-internal */,
    0x00001062    /*  89 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000100e    /*  91 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 96),
    0x00000049    /*  93 (LREF1-PUSH) */,
    0x0000105f    /*  94 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact-integer? */,
    0x0000001e    /*  96 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 100),
    0x00000013    /*  98 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 115),
    0x0000100e    /* 100 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 115),
    0x0000200e    /* 102 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]) + 113),
    0x00000006    /* 104 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[182])) /* (#f 0 #<box #f>) */,
    0x00000006    /* 106 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[61])) /* "Invalid assumption: ~s" */,
    0x00000001    /* 108 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[144])) /* (exact-integer? end) */,
    0x00002088    /* 110 (LIST 2) */,
    0x00002062    /* 111 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* format-internal */,
    0x00001062    /* 113 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000016    /* 115 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[0])) /* #<compiled-code (vector->string #f)@0x79bc10f5b540> */,
    0x00001063    /* 117 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-string */,
    0x00000014    /* 119 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[135]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* vector->string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[135]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[1])) /* #<compiled-code vector->string@0x79bc10f5b5a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* vector->string */,
    0x00000014    /*  14 (RET) */,
    /* string->vector */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 10),
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 11),
    0x00000049    /*   5 (LREF1-PUSH) */,
    0x0000105f    /*   6 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-start */,
    0x00000013    /*   8 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 11),
    0x0000006a    /*  10 (LREF0-CAR) */,
    0x0000000d    /*  11 (PUSH) */,
    0x0000003d    /*  12 (LREF0) */,
    0x00000022    /*  13 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 18),
    0x00000003    /*  15 (CONSTN) */,
    0x00000013    /*  16 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 19),
    0x00000076    /*  18 (LREF0-CDR) */,
    0x00002018    /*  19 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  20 (LREF0) */,
    0x00000022    /*  21 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 30),
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 31),
    0x0000004d    /*  25 (LREF11-PUSH) */,
    0x0000105f    /*  26 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-end */,
    0x00000013    /*  28 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 31),
    0x0000006a    /*  30 (LREF0-CAR) */,
    0x0000000d    /*  31 (PUSH) */,
    0x0000003d    /*  32 (LREF0) */,
    0x00000022    /*  33 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 38),
    0x00000003    /*  35 (CONSTN) */,
    0x00000013    /*  36 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 39),
    0x00000076    /*  38 (LREF0-CDR) */,
    0x00002018    /*  39 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  40 (LREF0) */,
    0x00000022    /*  41 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 45),
    0x00000013    /*  43 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 53),
    0x0000200e    /*  45 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 53),
    0x00000006    /*  47 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[46])) /* "too many arguments for" */,
    0x00000006    /*  49 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[269])) /* (lambda (s :optional (start (string-cursor-start s)) (end (string-cursor-end s))) (assume-type s <string>) (let* ((ss (string-index->cursor s start)) (ee (string-index->cursor s end)) (size (string-cursor-diff s ss ee))) (when (< size 0) (error "End point precedes start point" (list start end))) (rlet1 v (make-vector size) (do ((ss ss (string-cursor-next s ss)) (i 0 (+ i 1))) ((string-cursor>=? ss ee)) (vector-set! v i (string-ref s ss)))))) */,
    0x0000205f    /*  51 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000200e    /*  53 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 60),
    0x00000050    /*  55 (LREF21-PUSH) */,
    0x0000005e    /*  56 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <string> */,
    0x0000205f    /*  58 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*  60 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 65),
    0x00000045    /*  62 (LREF21) */,
    0x00000013    /*  63 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 74),
    0x0000300e    /*  65 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 74),
    0x00000006    /*  67 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* s */,
    0x0000005e    /*  69 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <string> */,
    0x00000050    /*  71 (LREF21-PUSH) */,
    0x0000305f    /*  72 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  74 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 80),
    0x00000050    /*  76 (LREF21-PUSH) */,
    0x0000004d    /*  77 (LREF11-PUSH) */,
    0x0000205f    /*  78 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-index->cursor */,
    0x00001018    /*  80 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  81 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 87),
    0x00403047    /*  83 (LREF-PUSH 3 1) */,
    0x0000004d    /*  84 (LREF11-PUSH) */,
    0x0000205f    /*  85 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-index->cursor */,
    0x00001018    /*  87 (PUSH-LOCAL-ENV 1) */,
    0x0000300e    /*  88 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 95),
    0x00404047    /*  90 (LREF-PUSH 4 1) */,
    0x0000004c    /*  91 (LREF10-PUSH) */,
    0x00000048    /*  92 (LREF0-PUSH) */,
    0x0000305f    /*  93 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-diff */,
    0x00001018    /*  95 (PUSH-LOCAL-ENV 1) */,
    0x00000002    /*  96 (CONSTI 0) */,
    0x00000029    /*  97 (LREF-VAL0-BNLT 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 110),
    0x0000200e    /*  99 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 110),
    0x00000006    /* 101 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[77])) /* "End point precedes start point" */,
    0x00404047    /* 103 (LREF-PUSH 4 1) */,
    0x0040303c    /* 104 (LREF 3 1) */,
    0x00002088    /* 105 (LIST 2) */,
    0x00002062    /* 106 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /* 108 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 110),
    0x0000100e    /* 110 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 115),
    0x00000048    /* 112 (LREF0-PUSH) */,
    0x0000105f    /* 113 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-vector */,
    0x00001018    /* 115 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /* 116 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 148),
    0x00000051    /* 118 (LREF30-PUSH) */,
    0x00000007    /* 119 (CONSTI-PUSH 0) */,
    0x00002017    /* 120 (LOCAL-ENV 2) */,
    0x0000200e    /* 121 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 127),
    0x00000049    /* 123 (LREF1-PUSH) */,
    0x00000051    /* 124 (LREF30-PUSH) */,
    0x0000205f    /* 125 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor>=? */,
    0x00000031    /* 127 (RT) */,
    0x0000004c    /* 128 (LREF10-PUSH) */,
    0x00000048    /* 129 (LREF0-PUSH) */,
    0x0000200e    /* 130 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 136),
    0x00407047    /* 132 (LREF-PUSH 7 1) */,
    0x00000049    /* 133 (LREF1-PUSH) */,
    0x0000205f    /* 134 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x000000a9    /* 136 (VEC-SET) */,
    0x0000200e    /* 137 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 143),
    0x00407047    /* 139 (LREF-PUSH 7 1) */,
    0x00000049    /* 140 (LREF1-PUSH) */,
    0x0000205f    /* 141 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-cursor-next */,
    0x0000000d    /* 143 (PUSH) */,
    0x000010c7    /* 144 (LREF0-NUMADDI-PUSH 1) */,
    0x0000101b    /* 145 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]) + 121),
    0x00000014    /* 147 (RET) */,
    0x00000053    /* 148 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[299]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* string->vector */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[299]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[3])) /* #<compiled-code string->vector@0x79bc105b0a80> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* string->vector */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1])},
       { SCM_MAKE_INT(51U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[4])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[7])},
       { SCM_OBJ(&scm__rc.d2150[8]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[5]), SCM_OBJ(&scm__rc.d2150[9])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(54U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[12])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[13])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[15])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[16])},
       { SCM_OBJ(&scm__rc.d2150[17]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[14]), SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(57U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[21])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[24])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[25])},
       { SCM_OBJ(&scm__rc.d2150[26]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[23]), SCM_OBJ(&scm__rc.d2150[27])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[29])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[31])},
       { SCM_MAKE_INT(60U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[36])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_OBJ(&scm__rc.d2150[38]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[35]), SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[41])},
       { SCM_MAKE_INT(71U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[43])},
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
       { SCM_MAKE_INT(81U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[55])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[56])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[59])},
       { SCM_OBJ(&scm__rc.d2150[60]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[57]), SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_MAKE_INT(85U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[64])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[65])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[67])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_OBJ(&scm__rc.d2150[69]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[66]), SCM_OBJ(&scm__rc.d2150[70])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_MAKE_INT(89U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[75])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[77])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_OBJ(&scm__rc.d2150[79]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[76]), SCM_OBJ(&scm__rc.d2150[80])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[84])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[85])},
       { SCM_MAKE_INT(93U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[87])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[88])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[91])},
       { SCM_OBJ(&scm__rc.d2150[92]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[89]), SCM_OBJ(&scm__rc.d2150[93])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[95])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[96])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[97])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[99])},
       { SCM_MAKE_INT(97U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[101])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[102])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[104])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[105])},
       { SCM_OBJ(&scm__rc.d2150[106]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[103]), SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_MAKE_INT(128U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[112])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[114])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[115])},
       { SCM_OBJ(&scm__rc.d2150[116]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[113]), SCM_OBJ(&scm__rc.d2150[117])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(144U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[120])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[121])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[123])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_OBJ(&scm__rc.d2150[125]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[122]), SCM_OBJ(&scm__rc.d2150[126])},
       { SCM_MAKE_INT(0), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[128])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_OBJ(&scm__rc.d2150[130]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[131])},
       { SCM_OBJ(&scm__rc.d2150[132]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[129]), SCM_OBJ(&scm__rc.d2150[133])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[134])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[135])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[137])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[138])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[140])},
       { SCM_OBJ(&scm__rc.d2150[141]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[142])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_OBJ(&scm__rc.d2150[144]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[145])},
       { SCM_MAKE_INT(1U), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[147])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[148])},
       { SCM_OBJ(&scm__rc.d2150[149]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[150])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[151])},
       { SCM_OBJ(&scm__rc.d2150[152]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[154])},
       { SCM_OBJ(&scm__rc.d2150[155]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[158])},
       { SCM_OBJ(&scm__rc.d2150[159]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[160])},
       { SCM_OBJ(&scm__rc.d2150[161]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[156]), SCM_OBJ(&scm__rc.d2150[162])},
       { SCM_OBJ(&scm__rc.d2150[153]), SCM_OBJ(&scm__rc.d2150[163])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[164])},
       { SCM_OBJ(&scm__rc.d2150[165]), SCM_NIL},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[166])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[167])},
       { SCM_OBJ(&scm__rc.d2150[168]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_OBJ(&scm__rc.d2150[170]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[146]), SCM_OBJ(&scm__rc.d2150[171])},
       { SCM_OBJ(&scm__rc.d2150[143]), SCM_OBJ(&scm__rc.d2150[172])},
       { SCM_OBJ(&scm__rc.d2150[139]), SCM_OBJ(&scm__rc.d2150[173])},
       { SCM_OBJ(&scm__rc.d2150[136]), SCM_OBJ(&scm__rc.d2150[174])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[175])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2150[177])},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[178])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2150[180])},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[181])},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[183])},
       { SCM_MAKE_INT(155U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[185])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[186])},
       { SCM_OBJ(&scm__rc.d2150[187]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(149U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[190])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[191])},
       { SCM_OBJ(&scm__rc.d2150[192]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[195])},
       { SCM_OBJ(&scm__rc.d2150[196]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[197])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[195])},
       { SCM_OBJ(&scm__rc.d2150[199]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[200])},
       { SCM_OBJ(&scm__rc.d2150[201]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[198]), SCM_OBJ(&scm__rc.d2150[202])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[203])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[204])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[206])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[207])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[140])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[209])},
       { SCM_OBJ(&scm__rc.d2150[210]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[213])},
       { SCM_OBJ(&scm__rc.d2150[214]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[215])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[217])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[218])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[219])},
       { SCM_OBJ(&scm__rc.d2150[220]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[221])},
       { SCM_OBJ(&scm__rc.d2150[222]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[216]), SCM_OBJ(&scm__rc.d2150[223])},
       { SCM_OBJ(&scm__rc.d2150[212]), SCM_OBJ(&scm__rc.d2150[224])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[128])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[226])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_OBJ(&scm__rc.d2150[228]), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[77]), SCM_OBJ(&scm__rc.d2150[229])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[230])},
       { SCM_OBJ(&scm__rc.d2150[231]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[227]), SCM_OBJ(&scm__rc.d2150[232])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[235])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[237])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[238])},
       { SCM_OBJ(&scm__rc.d2150[239]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[240])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[241])},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2150[150])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[243])},
       { SCM_OBJ(&scm__rc.d2150[244]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[242]), SCM_OBJ(&scm__rc.d2150[245])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[218])},
       { SCM_OBJ(&scm__rc.d2150[247]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[238])},
       { SCM_OBJ(&scm__rc.d2150[249]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[250])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[251])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[252])},
       { SCM_OBJ(&scm__rc.d2150[253]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[248]), SCM_OBJ(&scm__rc.d2150[254])},
       { SCM_OBJ(&scm__rc.d2150[246]), SCM_OBJ(&scm__rc.d2150[255])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[256])},
       { SCM_OBJ(&scm__rc.d2150[257]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[236]), SCM_OBJ(&scm__rc.d2150[258])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[259])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[260])},
       { SCM_OBJ(&scm__rc.d2150[261]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[234]), SCM_OBJ(&scm__rc.d2150[262])},
       { SCM_OBJ(&scm__rc.d2150[225]), SCM_OBJ(&scm__rc.d2150[263])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[264])},
       { SCM_OBJ(&scm__rc.d2150[265]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[208]), SCM_OBJ(&scm__rc.d2150[266])},
       { SCM_OBJ(&scm__rc.d2150[205]), SCM_OBJ(&scm__rc.d2150[267])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[268])},
       { SCM_MAKE_INT(159U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[270])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[271])},
       { SCM_OBJ(&scm__rc.d2150[272]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(180U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[275])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[276])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[278])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[279])},
       { SCM_OBJ(&scm__rc.d2150[280]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[277]), SCM_OBJ(&scm__rc.d2150[281])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(182U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[284])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[285])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[287])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[288])},
       { SCM_OBJ(&scm__rc.d2150[289]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[286]), SCM_OBJ(&scm__rc.d2150[290])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[292])},
       { SCM_MAKE_INT(186U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[294])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[295])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[297])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[298])},
       { SCM_OBJ(&scm__rc.d2150[299]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[296]), SCM_OBJ(&scm__rc.d2150[300])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[302])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[303])},
       { SCM_MAKE_INT(189U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[305])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[306])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[308])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[309])},
       { SCM_OBJ(&scm__rc.d2150[310]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[307]), SCM_OBJ(&scm__rc.d2150[311])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[313])},
       { SCM_MAKE_INT(216U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[315])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[316])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[318])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[319])},
       { SCM_OBJ(&scm__rc.d2150[320]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[317]), SCM_OBJ(&scm__rc.d2150[321])},
       { SCM_MAKE_INT(220U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[323])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[324])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[326])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[327])},
       { SCM_OBJ(&scm__rc.d2150[328]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[325]), SCM_OBJ(&scm__rc.d2150[329])},
       { SCM_MAKE_INT(224U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[331])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[332])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[335])},
       { SCM_OBJ(&scm__rc.d2150[336]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[337])},
       { SCM_MAKE_INT(228U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[339])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[340])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[342])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[343])},
       { SCM_OBJ(&scm__rc.d2150[344]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[341]), SCM_OBJ(&scm__rc.d2150[345])},
       { SCM_MAKE_INT(232U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[347])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[350])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[351])},
       { SCM_OBJ(&scm__rc.d2150[352]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[349]), SCM_OBJ(&scm__rc.d2150[353])},
       { SCM_MAKE_INT(236U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[355])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[356])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[358])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[359])},
       { SCM_OBJ(&scm__rc.d2150[360]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[357]), SCM_OBJ(&scm__rc.d2150[361])},
       { SCM_MAKE_INT(240U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[363])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[364])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[366])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[367])},
       { SCM_OBJ(&scm__rc.d2150[368]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[365]), SCM_OBJ(&scm__rc.d2150[369])},
       { SCM_MAKE_INT(244U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[371])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[372])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[374])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[375])},
       { SCM_OBJ(&scm__rc.d2150[376]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[373]), SCM_OBJ(&scm__rc.d2150[377])},
       { SCM_MAKE_INT(248U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[379])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[380])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[382])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[383])},
       { SCM_OBJ(&scm__rc.d2150[384]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[381]), SCM_OBJ(&scm__rc.d2150[385])},
       { SCM_MAKE_INT(252U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[387])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[388])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[390])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[391])},
       { SCM_OBJ(&scm__rc.d2150[392]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[389]), SCM_OBJ(&scm__rc.d2150[393])},
       { SCM_MAKE_INT(256U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[395])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[396])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[398])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[399])},
       { SCM_OBJ(&scm__rc.d2150[400]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[397]), SCM_OBJ(&scm__rc.d2150[401])},
       { SCM_MAKE_INT(260U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[403])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[404])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[406])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[407])},
       { SCM_OBJ(&scm__rc.d2150[408]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[405]), SCM_OBJ(&scm__rc.d2150[409])},
       { SCM_MAKE_INT(264U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[411])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[412])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[414])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[415])},
       { SCM_OBJ(&scm__rc.d2150[416]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[413]), SCM_OBJ(&scm__rc.d2150[417])},
       { SCM_MAKE_INT(268U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[419])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[420])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[422])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[423])},
       { SCM_OBJ(&scm__rc.d2150[424]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[421]), SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[427])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[428])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[429])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[430])},
       { SCM_MAKE_INT(272U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[432])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[433])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[435])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[436])},
       { SCM_OBJ(&scm__rc.d2150[437]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[434]), SCM_OBJ(&scm__rc.d2150[438])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[440])},
       { SCM_MAKE_INT(274U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[442])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[443])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[445])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[446])},
       { SCM_OBJ(&scm__rc.d2150[447]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[444]), SCM_OBJ(&scm__rc.d2150[448])},
       { SCM_MAKE_INT(279U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[450])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[451])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[453])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[454])},
       { SCM_OBJ(&scm__rc.d2150[455]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[452]), SCM_OBJ(&scm__rc.d2150[456])},
       { SCM_MAKE_INT(281U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[458])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[461])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[462])},
       { SCM_OBJ(&scm__rc.d2150[463]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[460]), SCM_OBJ(&scm__rc.d2150[464])},
       { SCM_MAKE_INT(286U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[466])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[467])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[469])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[470])},
       { SCM_OBJ(&scm__rc.d2150[471]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[468]), SCM_OBJ(&scm__rc.d2150[472])},
       { SCM_MAKE_INT(288U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[474])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[475])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[477])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[478])},
       { SCM_OBJ(&scm__rc.d2150[479]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[476]), SCM_OBJ(&scm__rc.d2150[480])},
       { SCM_MAKE_INT(293U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[482])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[483])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[485])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[486])},
       { SCM_OBJ(&scm__rc.d2150[487]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[484]), SCM_OBJ(&scm__rc.d2150[488])},
       { SCM_MAKE_INT(295U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[490])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[491])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[493])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[494])},
       { SCM_OBJ(&scm__rc.d2150[495]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[492]), SCM_OBJ(&scm__rc.d2150[496])},
       { SCM_MAKE_INT(300U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[498])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[499])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[501])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[502])},
       { SCM_OBJ(&scm__rc.d2150[503]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[500]), SCM_OBJ(&scm__rc.d2150[504])},
       { SCM_MAKE_INT(302U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[506])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[507])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[509])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[510])},
       { SCM_OBJ(&scm__rc.d2150[511]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[508]), SCM_OBJ(&scm__rc.d2150[512])},
       { SCM_MAKE_INT(307U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[514])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[515])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[517])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[518])},
       { SCM_OBJ(&scm__rc.d2150[519]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[516]), SCM_OBJ(&scm__rc.d2150[520])},
       { SCM_MAKE_INT(309U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[522])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[523])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[525])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[526])},
       { SCM_OBJ(&scm__rc.d2150[527]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[524]), SCM_OBJ(&scm__rc.d2150[528])},
       { SCM_MAKE_INT(314U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[530])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[531])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[533])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[534])},
       { SCM_OBJ(&scm__rc.d2150[535]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[532]), SCM_OBJ(&scm__rc.d2150[536])},
       { SCM_MAKE_INT(316U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[538])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[539])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[541])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[542])},
       { SCM_OBJ(&scm__rc.d2150[543]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[540]), SCM_OBJ(&scm__rc.d2150[544])},
       { SCM_MAKE_INT(321U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[546])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[547])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[549])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[550])},
       { SCM_OBJ(&scm__rc.d2150[551]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[548]), SCM_OBJ(&scm__rc.d2150[552])},
       { SCM_MAKE_INT(323U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[554])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[555])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[557])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[558])},
       { SCM_OBJ(&scm__rc.d2150[559]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[556]), SCM_OBJ(&scm__rc.d2150[560])},
       { SCM_MAKE_INT(328U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[562])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[563])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[565])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[566])},
       { SCM_OBJ(&scm__rc.d2150[567]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[564]), SCM_OBJ(&scm__rc.d2150[568])},
       { SCM_MAKE_INT(330U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[570])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[571])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[573])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[574])},
       { SCM_OBJ(&scm__rc.d2150[575]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[572]), SCM_OBJ(&scm__rc.d2150[576])},
       { SCM_MAKE_INT(335U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[578])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[579])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[581])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[582])},
       { SCM_OBJ(&scm__rc.d2150[583]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[580]), SCM_OBJ(&scm__rc.d2150[584])},
       { SCM_MAKE_INT(337U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[586])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[587])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[589])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[590])},
       { SCM_OBJ(&scm__rc.d2150[591]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[588]), SCM_OBJ(&scm__rc.d2150[592])},
       { SCM_MAKE_INT(342U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[594])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[595])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[597])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[598])},
       { SCM_OBJ(&scm__rc.d2150[599]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[596]), SCM_OBJ(&scm__rc.d2150[600])},
       { SCM_MAKE_INT(344U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[602])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[603])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[605])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[606])},
       { SCM_OBJ(&scm__rc.d2150[607]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[604]), SCM_OBJ(&scm__rc.d2150[608])},
       { SCM_MAKE_INT(349U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[610])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[611])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[613])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[614])},
       { SCM_OBJ(&scm__rc.d2150[615]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[612]), SCM_OBJ(&scm__rc.d2150[616])},
       { SCM_MAKE_INT(351U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[618])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[619])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[621])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[622])},
       { SCM_OBJ(&scm__rc.d2150[623]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[620]), SCM_OBJ(&scm__rc.d2150[624])},
       { SCM_MAKE_INT(356U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[626])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[627])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[629])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[630])},
       { SCM_OBJ(&scm__rc.d2150[631]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[628]), SCM_OBJ(&scm__rc.d2150[632])},
       { SCM_MAKE_INT(358U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[634])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[635])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[637])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[638])},
       { SCM_OBJ(&scm__rc.d2150[639]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[636]), SCM_OBJ(&scm__rc.d2150[640])},
       { SCM_MAKE_INT(363U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[642])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[643])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[645])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[646])},
       { SCM_OBJ(&scm__rc.d2150[647]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[644]), SCM_OBJ(&scm__rc.d2150[648])},
       { SCM_MAKE_INT(365U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[650])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[651])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[653])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[654])},
       { SCM_OBJ(&scm__rc.d2150[655]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[652]), SCM_OBJ(&scm__rc.d2150[656])},
       { SCM_MAKE_INT(370U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[658])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[659])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[661])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[662])},
       { SCM_OBJ(&scm__rc.d2150[663]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[660]), SCM_OBJ(&scm__rc.d2150[664])},
       { SCM_MAKE_INT(374U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[666])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[667])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[669])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[670])},
       { SCM_OBJ(&scm__rc.d2150[671]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[668]), SCM_OBJ(&scm__rc.d2150[672])},
       { SCM_MAKE_INT(379U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[674])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[675])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[677])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[678])},
       { SCM_OBJ(&scm__rc.d2150[679]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[676]), SCM_OBJ(&scm__rc.d2150[680])},
       { SCM_MAKE_INT(381U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[682])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[683])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[685])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[686])},
       { SCM_OBJ(&scm__rc.d2150[687]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[684]), SCM_OBJ(&scm__rc.d2150[688])},
       { SCM_MAKE_INT(383U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[690])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[691])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[693])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[694])},
       { SCM_OBJ(&scm__rc.d2150[695]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[692]), SCM_OBJ(&scm__rc.d2150[696])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(386U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[699])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[700])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[702])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[703])},
       { SCM_OBJ(&scm__rc.d2150[704]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[701]), SCM_OBJ(&scm__rc.d2150[705])},
       { SCM_MAKE_INT(387U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[707])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[708])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[710])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[711])},
       { SCM_OBJ(&scm__rc.d2150[712]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[709]), SCM_OBJ(&scm__rc.d2150[713])},
       { SCM_MAKE_INT(388U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[715])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[716])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[718])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[719])},
       { SCM_OBJ(&scm__rc.d2150[720]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[717]), SCM_OBJ(&scm__rc.d2150[721])},
       { SCM_MAKE_INT(389U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[723])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[724])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[726])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[727])},
       { SCM_OBJ(&scm__rc.d2150[728]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[725]), SCM_OBJ(&scm__rc.d2150[729])},
       { SCM_MAKE_INT(390U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[731])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[732])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[734])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[735])},
       { SCM_OBJ(&scm__rc.d2150[736]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[733]), SCM_OBJ(&scm__rc.d2150[737])},
       { SCM_MAKE_INT(391U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[739])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[740])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[742])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[743])},
       { SCM_OBJ(&scm__rc.d2150[744]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[741]), SCM_OBJ(&scm__rc.d2150[745])},
       { SCM_MAKE_INT(392U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[747])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[748])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[750])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[751])},
       { SCM_OBJ(&scm__rc.d2150[752]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[749]), SCM_OBJ(&scm__rc.d2150[753])},
       { SCM_MAKE_INT(393U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[755])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[756])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[758])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[759])},
       { SCM_OBJ(&scm__rc.d2150[760]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[757]), SCM_OBJ(&scm__rc.d2150[761])},
       { SCM_MAKE_INT(394U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[763])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[764])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[766])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[767])},
       { SCM_OBJ(&scm__rc.d2150[768]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[765]), SCM_OBJ(&scm__rc.d2150[769])},
       { SCM_MAKE_INT(395U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[771])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[772])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[774])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[775])},
       { SCM_OBJ(&scm__rc.d2150[776]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[773]), SCM_OBJ(&scm__rc.d2150[777])},
       { SCM_MAKE_INT(396U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[779])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[780])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[782])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[783])},
       { SCM_OBJ(&scm__rc.d2150[784]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[781]), SCM_OBJ(&scm__rc.d2150[785])},
       { SCM_MAKE_INT(397U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[787])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[788])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[790])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[791])},
       { SCM_OBJ(&scm__rc.d2150[792]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[789]), SCM_OBJ(&scm__rc.d2150[793])},
       { SCM_MAKE_INT(398U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[795])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[796])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[798])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[799])},
       { SCM_OBJ(&scm__rc.d2150[800]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[797]), SCM_OBJ(&scm__rc.d2150[801])},
       { SCM_MAKE_INT(399U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[803])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[804])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[806])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[807])},
       { SCM_OBJ(&scm__rc.d2150[808]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[805]), SCM_OBJ(&scm__rc.d2150[809])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[811])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[812])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[813])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[814])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[815])},
       { SCM_MAKE_INT(401U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[817])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[818])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[820])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[821])},
       { SCM_OBJ(&scm__rc.d2150[822]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[819]), SCM_OBJ(&scm__rc.d2150[823])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[811])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[825])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[826])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[827])},
       { SCM_MAKE_INT(454U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[829])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[830])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[832])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[833])},
       { SCM_OBJ(&scm__rc.d2150[834]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[831]), SCM_OBJ(&scm__rc.d2150[835])},
       { SCM_MAKE_INT(459U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[837])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[838])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[840])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[841])},
       { SCM_OBJ(&scm__rc.d2150[842]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[839]), SCM_OBJ(&scm__rc.d2150[843])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[845])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[846])},
       { SCM_MAKE_INT(480U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[848])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[849])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[851])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[852])},
       { SCM_OBJ(&scm__rc.d2150[853]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[850]), SCM_OBJ(&scm__rc.d2150[854])},
       { SCM_MAKE_INT(487U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[856])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[857])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[859])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[860])},
       { SCM_OBJ(&scm__rc.d2150[861]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[858]), SCM_OBJ(&scm__rc.d2150[862])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[864])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[865])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[866])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[867])},
       { SCM_MAKE_INT(532U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[869])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[870])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[872])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[873])},
       { SCM_OBJ(&scm__rc.d2150[874]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[871]), SCM_OBJ(&scm__rc.d2150[875])},
       { SCM_MAKE_INT(538U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[877])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[878])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[880])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[881])},
       { SCM_OBJ(&scm__rc.d2150[882]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[879]), SCM_OBJ(&scm__rc.d2150[883])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[885])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[886])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[887])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[888])},
       { SCM_MAKE_INT(567U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[890])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[891])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[893])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[894])},
       { SCM_OBJ(&scm__rc.d2150[895]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[892]), SCM_OBJ(&scm__rc.d2150[896])},
       { SCM_MAKE_INT(573U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[898])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[899])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[901])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[902])},
       { SCM_OBJ(&scm__rc.d2150[903]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[900]), SCM_OBJ(&scm__rc.d2150[904])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[889])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[906])},
       { SCM_MAKE_INT(607U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[908])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[909])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[911])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[912])},
       { SCM_OBJ(&scm__rc.d2150[913]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[910]), SCM_OBJ(&scm__rc.d2150[914])},
       { SCM_MAKE_INT(615U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[916])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[917])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[919])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[920])},
       { SCM_OBJ(&scm__rc.d2150[921]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[918]), SCM_OBJ(&scm__rc.d2150[922])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[885])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[924])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[925])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[926])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[927])},
       { SCM_MAKE_INT(651U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[929])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[930])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[932])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[933])},
       { SCM_OBJ(&scm__rc.d2150[934]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[931]), SCM_OBJ(&scm__rc.d2150[935])},
       { SCM_MAKE_INT(658U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[937])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[938])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[940])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[941])},
       { SCM_OBJ(&scm__rc.d2150[942]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[939]), SCM_OBJ(&scm__rc.d2150[943])},
       { SCM_MAKE_INT(670U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[945])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[946])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[948])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[949])},
       { SCM_OBJ(&scm__rc.d2150[950]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[947]), SCM_OBJ(&scm__rc.d2150[951])},
       { SCM_MAKE_INT(671U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[953])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[954])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[956])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[957])},
       { SCM_OBJ(&scm__rc.d2150[958]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[955]), SCM_OBJ(&scm__rc.d2150[959])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[961])},
       { SCM_MAKE_INT(674U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[963])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[964])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[966])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[967])},
       { SCM_OBJ(&scm__rc.d2150[968]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[965]), SCM_OBJ(&scm__rc.d2150[969])},
       { SCM_MAKE_INT(684U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[971])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[972])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[974])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[975])},
       { SCM_OBJ(&scm__rc.d2150[976]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[973]), SCM_OBJ(&scm__rc.d2150[977])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[979])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[980])},
       { SCM_MAKE_INT(694U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[982])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[983])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[985])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[986])},
       { SCM_OBJ(&scm__rc.d2150[987]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[984]), SCM_OBJ(&scm__rc.d2150[988])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[990])},
       { SCM_MAKE_INT(696U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[992])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[993])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[995])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[996])},
       { SCM_OBJ(&scm__rc.d2150[997]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[994]), SCM_OBJ(&scm__rc.d2150[998])},
       { SCM_MAKE_INT(697U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1000])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1001])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1003])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1004])},
       { SCM_OBJ(&scm__rc.d2150[1005]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1002]), SCM_OBJ(&scm__rc.d2150[1006])},
       { SCM_MAKE_INT(699U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1008])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1009])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1011])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1012])},
       { SCM_OBJ(&scm__rc.d2150[1013]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1010]), SCM_OBJ(&scm__rc.d2150[1014])},
       { SCM_MAKE_INT(701U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1016])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1017])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1019])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1020])},
       { SCM_OBJ(&scm__rc.d2150[1021]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1018]), SCM_OBJ(&scm__rc.d2150[1022])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(704U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1025])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1026])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1028])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1029])},
       { SCM_OBJ(&scm__rc.d2150[1030]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1027]), SCM_OBJ(&scm__rc.d2150[1031])},
       { SCM_MAKE_INT(705U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1033])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1034])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1036])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1037])},
       { SCM_OBJ(&scm__rc.d2150[1038]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1035]), SCM_OBJ(&scm__rc.d2150[1039])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1041])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1042])},
       { SCM_MAKE_INT(707U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1044])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1045])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1047])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1048])},
       { SCM_OBJ(&scm__rc.d2150[1049]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1046]), SCM_OBJ(&scm__rc.d2150[1050])},
       { SCM_MAKE_INT(715U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1052])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1053])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1055])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1056])},
       { SCM_OBJ(&scm__rc.d2150[1057]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1054]), SCM_OBJ(&scm__rc.d2150[1058])},
       { SCM_MAKE_INT(726U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1060])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1061])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1063])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1064])},
       { SCM_OBJ(&scm__rc.d2150[1065]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1062]), SCM_OBJ(&scm__rc.d2150[1066])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_MAKE_INT(735U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1069])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1070])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1072])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1073])},
       { SCM_OBJ(&scm__rc.d2150[1074]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1071]), SCM_OBJ(&scm__rc.d2150[1075])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1077])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1078])},
       { SCM_MAKE_INT(740U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[4]), SCM_OBJ(&scm__rc.d2150[1080])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1081])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1083])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1084])},
       { SCM_OBJ(&scm__rc.d2150[1085]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1082]), SCM_OBJ(&scm__rc.d2150[1086])},
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(52, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
  },
};

static ScmObj libvecvector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vector");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;

#line 52 "libvec.scm"
{SCM_RESULT=(Scm_ListToVector(args,0,-1));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecvectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_VECTORP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecvector_length(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj vec_scm;
  ScmVector* vec;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vector-length");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  vec_scm = SCM_SUBRARGS[0];
  if (!SCM_VECTORP(vec_scm)) Scm_Error("<vector> required, but got %S", vec_scm);
  vec = SCM_VECTOR(vec_scm);
  {
{
ScmSmallInt SCM_RESULT;
{SCM_RESULT=(SCM_VECTOR_SIZE(vec));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_INT(SCM_RESULT));
}
  }
}


static ScmObj libvecvector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj vec_scm;
  ScmVector* vec;
  ScmObj k_scm;
  ScmObj k;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  vec_scm = SCM_SUBRARGS[0];
  if (!SCM_VECTORP(vec_scm)) Scm_Error("<vector> required, but got %S", vec_scm);
  vec = SCM_VECTOR(vec_scm);
  k_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(k_scm)) Scm_Error("exact integer required, but got %S", k_scm);
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

#line 63 "libvec.scm"
if (((SCM_BIGNUMP(k))||(
(SCM_INT_VALUE(k))<(0)))||(
(SCM_INT_VALUE(k))>=(SCM_VECTOR_SIZE(vec)))){
if (SCM_UNBOUNDP(fallback)){{
Scm_Error("vector-ref index out of range: %S",k);}}
{SCM_RESULT=(fallback);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(SCM_VECTOR_ELEMENT(vec,SCM_INT_VALUE(k)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecvector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj vec_scm;
  ScmVector* vec;
  ScmObj k_scm;
  ScmObj k;
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("vector-set!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  vec_scm = SCM_SUBRARGS[0];
  if (!SCM_VECTORP(vec_scm)) Scm_Error("<vector> required, but got %S", vec_scm);
  vec = SCM_VECTOR(vec_scm);
  k_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(k_scm)) Scm_Error("exact integer required, but got %S", k_scm);
  k = (k_scm);
  obj_scm = SCM_SUBRARGS[2];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {

#line 72 "libvec.scm"
{
SCM_VECTOR_CHECK_MUTABLE(vec);
if (((SCM_BIGNUMP(k))||(
(SCM_INT_VALUE(k))<(0)))||(
(SCM_INT_VALUE(k))>=(SCM_VECTOR_SIZE(vec)))){
Scm_Error("vector-set! index out of range: %S",k);} else {
SCM_VECTOR_ELEMENT(vec,SCM_INT_VALUE(k))=(obj);}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libvecvector_TOlist(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj vec_scm;
  ScmVector* vec;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("vector->list");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  vec_scm = SCM_SUBRARGS[0];
  if (!SCM_VECTORP(vec_scm)) Scm_Error("<vector> required, but got %S", vec_scm);
  vec = SCM_VECTOR(vec_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VectorToList(vec,start,end));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libveclist_TOvector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj list_scm;
  ScmObj list;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("list->vector");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  list_scm = SCM_SUBRARGS[0];
  if (!SCM_LISTP(list_scm)) Scm_Error("list required, but got %S", list_scm);
  list = (list_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ListToVector(list,start,end));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecvector_fillX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj vec_scm;
  ScmVector* vec;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("vector-fill!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  vec_scm = SCM_SUBRARGS[0];
  if (!SCM_VECTORP(vec_scm)) Scm_Error("<vector> required, but got %S", vec_scm);
  vec = SCM_VECTOR(vec_scm);
  fill_scm = SCM_SUBRARGS[1];
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  if (SCM_ARGCNT > 2+1) {
    start_scm = SCM_SUBRARGS[2];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 3+1) {
    end_scm = SCM_SUBRARGS[3];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
Scm_VectorFill(vec,fill,start,end);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libvecvector_copy(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmVector* v;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("vector-copy");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_VECTORP(v_scm)) Scm_Error("<vector> required, but got %S", v_scm);
  v = SCM_VECTOR(v_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 3+1) {
    fill_scm = SCM_SUBRARGS[3];
  } else {
    fill_scm = SCM_UNBOUND;
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VectorCopy(v,start,end,fill));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecvector_copyX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj t_scm;
  ScmVector* t;
  ScmObj tstart_scm;
  ScmSmallInt tstart;
  ScmObj s_scm;
  ScmVector* s;
  ScmObj sstart_scm;
  ScmSmallInt sstart;
  ScmObj send_scm;
  ScmSmallInt send;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("vector-copy!");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  t_scm = SCM_SUBRARGS[0];
  if (!SCM_VECTORP(t_scm)) Scm_Error("<vector> required, but got %S", t_scm);
  t = SCM_VECTOR(t_scm);
  tstart_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(tstart_scm)) Scm_Error("ScmSmallInt required, but got %S", tstart_scm);
  tstart = SCM_INT_VALUE(tstart_scm);
  s_scm = SCM_SUBRARGS[2];
  if (!SCM_VECTORP(s_scm)) Scm_Error("<vector> required, but got %S", s_scm);
  s = SCM_VECTOR(s_scm);
  if (SCM_ARGCNT > 3+1) {
    sstart_scm = SCM_SUBRARGS[3];
  } else {
    sstart_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(sstart_scm)) Scm_Error("ScmSmallInt required, but got %S", sstart_scm);
  sstart = SCM_INT_VALUE(sstart_scm);
  if (SCM_ARGCNT > 4+1) {
    send_scm = SCM_SUBRARGS[4];
  } else {
    send_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(send_scm)) Scm_Error("ScmSmallInt required, but got %S", send_scm);
  send = SCM_INT_VALUE(send_scm);
  {

#line 99 "libvec.scm"
{long tsize=SCM_VECTOR_SIZE(t);
SCM_VECTOR_CHECK_MUTABLE(t);
if ((send)<(0)){{send=(SCM_VECTOR_SIZE(s));}}
if (!(((0)<=(tstart))&&((tstart)<=(tsize)))){{
Scm_Error("tstart out of range: %ld",tstart);}}
if (!(((0)<=(sstart))&&((sstart)<=(SCM_VECTOR_SIZE(s))))){{
Scm_Error("sstart out of range: %ld",sstart);}}
if (!(((0)<=(send))&&((send)<=(SCM_VECTOR_SIZE(s))))){{
Scm_Error("send out of range: %ld",send);}}
if (!(((tstart)+((send)-(sstart)))<=(tsize))){{
Scm_Error("source vector overruns the target vector: %20.0S [%ld,%ld]",s,sstart,send);}}
#line 111 "libvec.scm"
if (!((sstart)<=(send))){{
Scm_Error("send (%ld) must be greater than or equal to sstart (%ld)",send,sstart);}}
#line 114 "libvec.scm"
if ((tstart)<=(sstart)){
{ScmSmallInt i=sstart;ScmSmallInt j=tstart;
for (; ((i)<(send))&&((j)<(tsize)); (i)++,(j)++){
SCM_VECTOR_ELEMENT(t,j)=(SCM_VECTOR_ELEMENT(s,i));}}} else {
{ScmSmallInt i=send;ScmSmallInt j=
(tstart)+((send)-(sstart));
if ((j)>=(tsize)){{
i=((i)-((j)-(tsize)));
j=(tsize);}}
for ((i)--,(j)--; 
((i)>=(sstart))&&((j)>=(tstart)); 
(i)--,(j)--){
SCM_VECTOR_ELEMENT(t,j)=(SCM_VECTOR_ELEMENT(s,i));}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libvecvector_append(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj vecs_scm;
  ScmObj vecs;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vector-append");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  vecs_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(vecs_scm)) Scm_Error("list required, but got %S", vecs_scm);
  vecs = (vecs_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2152;ScmObj cise__2151;
#line 129 "libvec.scm"
{long len=0;
SCM_FOR_EACH(cise__2151,vecs) {{ScmObj v=SCM_CAR(cise__2151);
if (!(SCM_VECTORP(v))){{
Scm_Error("vector required, but got: %S",v);}}
len=((len)+(SCM_VECTOR_SIZE(v)));}};ScmObj dst=
Scm_MakeVector(len,SCM_UNDEFINED);long j=0;
#line 136 "libvec.scm"
SCM_FOR_EACH(cise__2152,vecs) {{ScmObj v=SCM_CAR(cise__2152);
{long k=SCM_VECTOR_SIZE(v);
memcpy((SCM_VECTOR_ELEMENTS(dst))+(j),SCM_VECTOR_ELEMENTS(v),
(k)*(sizeof(ScmWord)));
j=((j)+(k));}}}
{SCM_RESULT=(dst);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecvector_immutableP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmVector* v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vector-immutable?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_VECTORP(v_scm)) Scm_Error("<vector> required, but got %S", v_scm);
  v = SCM_VECTOR(v_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_VECTOR_IMMUTABLE_P(v));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_weak_vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj size_scm;
  ScmSmallInt size;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("make-weak-vector");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  size_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(size_scm)) Scm_Error("ScmSmallInt required, but got %S", size_scm);
  size = SCM_INT_VALUE(size_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeWeakVector(size));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecweak_vector_length(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj wv_scm;
  ScmWeakVector* wv;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("weak-vector-length");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  wv_scm = SCM_SUBRARGS[0];
  if (!SCM_WEAK_VECTOR_P(wv_scm)) Scm_Error("<weak-vector> required, but got %S", wv_scm);
  wv = SCM_WEAK_VECTOR(wv_scm);
  {
{
int SCM_RESULT;

#line 183 "libvec.scm"
{SCM_RESULT=((wv)->size);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libvecweak_vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj wv_scm;
  ScmWeakVector* wv;
  ScmObj index_scm;
  ScmSmallInt index;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("weak-vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  wv_scm = SCM_SUBRARGS[0];
  if (!SCM_WEAK_VECTOR_P(wv_scm)) Scm_Error("<weak-vector> required, but got %S", wv_scm);
  wv = SCM_WEAK_VECTOR(wv_scm);
  index_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(index_scm)) Scm_Error("ScmSmallInt required, but got %S", index_scm);
  index = SCM_INT_VALUE(index_scm);
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
{SCM_RESULT=(Scm_WeakVectorRef(wv,index,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecweak_vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj wv_scm;
  ScmWeakVector* wv;
  ScmObj index_scm;
  ScmSmallInt index;
  ScmObj val_scm;
  ScmObj val;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("weak-vector-set!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  wv_scm = SCM_SUBRARGS[0];
  if (!SCM_WEAK_VECTOR_P(wv_scm)) Scm_Error("<weak-vector> required, but got %S", wv_scm);
  wv = SCM_WEAK_VECTOR(wv_scm);
  index_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(index_scm)) Scm_Error("ScmSmallInt required, but got %S", index_scm);
  index = SCM_INT_VALUE(index_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_WeakVectorSet(wv,index,val));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_s8vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-s8vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 217 "libvec.scm"
{int8_t filler=Scm_GetInteger8Clamp(fill,SCM_CLAMP_ERROR,NULL);
{SCM_RESULT=(Scm_MakeS8Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_u8vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-u8vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 221 "libvec.scm"
{uint8_t filler=Scm_GetIntegerU8Clamp(fill,SCM_CLAMP_ERROR,NULL);
{SCM_RESULT=(Scm_MakeU8Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_s16vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-s16vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 225 "libvec.scm"
{int16_t filler=Scm_GetInteger16Clamp(fill,SCM_CLAMP_ERROR,NULL);
{SCM_RESULT=(Scm_MakeS16Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_u16vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-u16vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 229 "libvec.scm"
{uint16_t filler=Scm_GetIntegerU16Clamp(fill,SCM_CLAMP_ERROR,NULL);
{SCM_RESULT=(Scm_MakeU16Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_s32vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-s32vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 233 "libvec.scm"
{int32_t filler=Scm_GetInteger32Clamp(fill,SCM_CLAMP_ERROR,NULL);
{SCM_RESULT=(Scm_MakeS32Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_u32vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-u32vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 237 "libvec.scm"
{uint32_t filler=Scm_GetIntegerU32Clamp(fill,SCM_CLAMP_ERROR,NULL);
{SCM_RESULT=(Scm_MakeU32Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_s64vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-s64vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 241 "libvec.scm"
{int64_t filler=Scm_GetInteger64Clamp(fill,SCM_CLAMP_ERROR,NULL);
{SCM_RESULT=(Scm_MakeS64Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_u64vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-u64vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 245 "libvec.scm"
{uint64_t filler=Scm_GetIntegerU64Clamp(fill,SCM_CLAMP_ERROR,NULL);
{SCM_RESULT=(Scm_MakeU64Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_f16vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-f16vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 249 "libvec.scm"
{ScmHalfFloat filler=Scm_DoubleToHalf(Scm_GetDouble(fill));
{SCM_RESULT=(Scm_MakeF16Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_f32vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-f32vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 253 "libvec.scm"
{float filler=((float )(Scm_GetDouble(fill)));
{SCM_RESULT=(Scm_MakeF32Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_f64vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-f64vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 257 "libvec.scm"
{double filler=Scm_GetDouble(fill);
{SCM_RESULT=(Scm_MakeF64Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_c32vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-c32vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 261 "libvec.scm"
{ScmHalfComplex filler=Scm_GetHalfComplex(fill);
{SCM_RESULT=(Scm_MakeC32Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_c64vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-c64vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 265 "libvec.scm"
{ScmFloatComplex filler=Scm_GetFloatComplex(fill);
{SCM_RESULT=(Scm_MakeC64Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_c128vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj length_scm;
  ScmSmallInt length;
  ScmObj fill_scm;
  ScmObj fill;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-c128vector");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  length_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(length_scm)) Scm_Error("ScmSmallInt required, but got %S", length_scm);
  length = SCM_INT_VALUE(length_scm);
  if (SCM_ARGCNT > 1+1) {
    fill_scm = SCM_SUBRARGS[1];
  } else {
    fill_scm = SCM_MAKE_INT(0);
  }
  if (!(fill_scm)) Scm_Error("scheme object required, but got %S", fill_scm);
  fill = (fill_scm);
  {
{
ScmObj SCM_RESULT;

#line 269 "libvec.scm"
{ScmDoubleComplex filler=Scm_GetDoubleComplex(fill);
{SCM_RESULT=(Scm_MakeC128Vector(length,filler));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecs8vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("s8vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S8VECTORP(v_scm)) Scm_Error("<s8vector> required, but got %S", v_scm);
  v = SCM_S8VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 273 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_S8,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecs8vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("s8vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S8VECTORP(v_scm)) Scm_Error("<s8vector> required, but got %S", v_scm);
  v = SCM_S8VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 277 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_S8,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu8vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("u8vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U8VECTORP(v_scm)) Scm_Error("<u8vector> required, but got %S", v_scm);
  v = SCM_U8VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 280 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_U8,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu8vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("u8vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U8VECTORP(v_scm)) Scm_Error("<u8vector> required, but got %S", v_scm);
  v = SCM_U8VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 284 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_U8,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecs16vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("s16vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S16VECTORP(v_scm)) Scm_Error("<s16vector> required, but got %S", v_scm);
  v = SCM_S16VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 287 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_S16,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecs16vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("s16vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S16VECTORP(v_scm)) Scm_Error("<s16vector> required, but got %S", v_scm);
  v = SCM_S16VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 291 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_S16,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu16vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("u16vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U16VECTORP(v_scm)) Scm_Error("<u16vector> required, but got %S", v_scm);
  v = SCM_U16VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 294 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_U16,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu16vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("u16vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U16VECTORP(v_scm)) Scm_Error("<u16vector> required, but got %S", v_scm);
  v = SCM_U16VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 298 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_U16,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecs32vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("s32vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S32VECTORP(v_scm)) Scm_Error("<s32vector> required, but got %S", v_scm);
  v = SCM_S32VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 301 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_S32,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecs32vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("s32vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S32VECTORP(v_scm)) Scm_Error("<s32vector> required, but got %S", v_scm);
  v = SCM_S32VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 305 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_S32,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu32vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("u32vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U32VECTORP(v_scm)) Scm_Error("<u32vector> required, but got %S", v_scm);
  v = SCM_U32VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 308 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_U32,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu32vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("u32vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U32VECTORP(v_scm)) Scm_Error("<u32vector> required, but got %S", v_scm);
  v = SCM_U32VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 312 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_U32,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecs64vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("s64vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S64VECTORP(v_scm)) Scm_Error("<s64vector> required, but got %S", v_scm);
  v = SCM_S64VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 315 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_S64,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecs64vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("s64vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S64VECTORP(v_scm)) Scm_Error("<s64vector> required, but got %S", v_scm);
  v = SCM_S64VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 319 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_S64,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu64vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("u64vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U64VECTORP(v_scm)) Scm_Error("<u64vector> required, but got %S", v_scm);
  v = SCM_U64VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 322 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_U64,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu64vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("u64vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U64VECTORP(v_scm)) Scm_Error("<u64vector> required, but got %S", v_scm);
  v = SCM_U64VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 326 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_U64,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecf16vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("f16vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_F16VECTORP(v_scm)) Scm_Error("<f16vector> required, but got %S", v_scm);
  v = SCM_F16VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 329 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_F16,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecf16vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("f16vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_F16VECTORP(v_scm)) Scm_Error("<f16vector> required, but got %S", v_scm);
  v = SCM_F16VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 333 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_F16,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecf32vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("f32vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_F32VECTORP(v_scm)) Scm_Error("<f32vector> required, but got %S", v_scm);
  v = SCM_F32VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 336 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_F32,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecf32vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("f32vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_F32VECTORP(v_scm)) Scm_Error("<f32vector> required, but got %S", v_scm);
  v = SCM_F32VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 340 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_F32,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecf64vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("f64vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_F64VECTORP(v_scm)) Scm_Error("<f64vector> required, but got %S", v_scm);
  v = SCM_F64VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 343 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_F64,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecf64vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("f64vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_F64VECTORP(v_scm)) Scm_Error("<f64vector> required, but got %S", v_scm);
  v = SCM_F64VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 347 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_F64,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecc32vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("c32vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_C32VECTORP(v_scm)) Scm_Error("<c32vector> required, but got %S", v_scm);
  v = SCM_C32VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 350 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_C32,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecc32vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("c32vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_C32VECTORP(v_scm)) Scm_Error("<c32vector> required, but got %S", v_scm);
  v = SCM_C32VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 354 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_C32,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecc64vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("c64vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_C64VECTORP(v_scm)) Scm_Error("<c64vector> required, but got %S", v_scm);
  v = SCM_C64VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 357 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_C64,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecc64vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("c64vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_C64VECTORP(v_scm)) Scm_Error("<c64vector> required, but got %S", v_scm);
  v = SCM_C64VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 361 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_C64,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecc128vector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("c128vector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_C128VECTORP(v_scm)) Scm_Error("<c128vector> required, but got %S", v_scm);
  v = SCM_C128VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {
{
ScmObj SCM_RESULT;

#line 364 "libvec.scm"
{SCM_RESULT=(Scm_UVectorSet(v,SCM_UVECTOR_C128,i,val,Scm_ClampMode(clamp)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecc128vector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("c128vector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_C128VECTORP(v_scm)) Scm_Error("<c128vector> required, but got %S", v_scm);
  v = SCM_C128VECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 368 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,SCM_UVECTOR_C128,i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecuvector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj val_scm;
  ScmObj val;
  ScmObj clamp_scm;
  ScmObj clamp;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("uvector-set!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_UVECTORP(v_scm)) Scm_Error("<uvector> required, but got %S", v_scm);
  v = SCM_UVECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  if (SCM_ARGCNT > 3+1) {
    clamp_scm = SCM_SUBRARGS[3];
  } else {
    clamp_scm = SCM_UNBOUND;
  }
  if (!(clamp_scm)) Scm_Error("scheme object required, but got %S", clamp_scm);
  clamp = (clamp_scm);
  {

#line 372 "libvec.scm"
Scm_UVectorSet(v,Scm_UVectorType(Scm_ClassOf(SCM_OBJ(v))),i,val,
Scm_ClampMode(clamp));
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libvecuvector_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("uvector-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_UVECTORP(v_scm)) Scm_Error("<uvector> required, but got %S", v_scm);
  v = SCM_UVECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 377 "libvec.scm"
{SCM_RESULT=(Scm_VMUVectorRef(v,Scm_UVectorType(Scm_ClassOf(SCM_OBJ(v))),i,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecuvector_length(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("uvector-length");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_UVECTORP(v_scm)) Scm_Error("<uvector> required, but got %S", v_scm);
  v = SCM_UVECTOR(v_scm);
  {
{
u_long SCM_RESULT;
{SCM_RESULT=(SCM_UVECTOR_SIZE(v));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libvecuvector_immutableP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("uvector-immutable?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_UVECTORP(v_scm)) Scm_Error("<uvector> required, but got %S", v_scm);
  v = SCM_UVECTOR(v_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_UVECTOR_IMMUTABLE_P(v));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecuvectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("uvector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_UVECTORP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecu8vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("u8vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_U8VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecs8vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("s8vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_S8VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecu16vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("u16vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_U16VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecs16vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("s16vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_S16VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecu32vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("u32vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_U32VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecs32vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("s32vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_S32VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecu64vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("u64vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_U64VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecs64vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("s64vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_S64VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecf16vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("f16vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_F16VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecf32vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("f32vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_F32VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecf64vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("f64vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_F64VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecc32vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("c32vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_C32VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecc64vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("c64vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_C64VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecc128vectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("c128vector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_C128VECTORP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_view_uvector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mem_scm;
  ScmObj mem;
  ScmObj klass_scm;
  ScmClass* klass;
  ScmObj length_scm;
  ScmObj length;
  ScmObj offset_scm;
  ScmSmallInt offset;
  ScmObj immutableP_scm;
  int immutableP;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("make-view-uvector");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mem_scm = SCM_SUBRARGS[0];
  if (!(mem_scm)) Scm_Error("scheme object required, but got %S", mem_scm);
  mem = (mem_scm);
  klass_scm = SCM_SUBRARGS[1];
  if (!SCM_CLASSP(klass_scm)) Scm_Error("<class> required, but got %S", klass_scm);
  klass = SCM_CLASS(klass_scm);
  length_scm = SCM_SUBRARGS[2];
  if (!SCM_MAYBE_P(SCM_INTEGERP, length_scm)) Scm_Error("exact integer or #f required, but got %S", length_scm);
  length = SCM_MAYBE(, length_scm);
  if (SCM_ARGCNT > 3+1) {
    offset_scm = SCM_SUBRARGS[3];
  } else {
    offset_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(offset_scm)) Scm_Error("ScmSmallInt required, but got %S", offset_scm);
  offset = SCM_INT_VALUE(offset_scm);
  if (SCM_ARGCNT > 4+1) {
    immutableP_scm = SCM_SUBRARGS[4];
  } else {
    immutableP_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(immutableP_scm)) Scm_Error("boolean required, but got %S", immutableP_scm);
  immutableP = SCM_BOOL_VALUE(immutableP_scm);
  {
{
ScmObj SCM_RESULT;

#line 404 "libvec.scm"
if (!(SCM_MEMORY_REGION_P(mem))){{
SCM_TYPE_ERROR(mem,"<memory-region>");}}

#line 406 "libvec.scm"
{ScmSmallInt len=0;
if (SCM_FALSEP(length)){len=(-1);}else if(
SCM_INTP(length)){len=(SCM_INT_VALUE(length));} else {
Scm_Error("length is out of range: %S",length);}
{SCM_RESULT=(Scm_MakeViewUVector(SCM_MEMORY_REGION(mem),klass,len,offset,immutableP));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj string_TObytevector(ScmClass* klass,ScmString* s,ScmSmallInt start,ScmSmallInt end,int immutable){{
#line 444 "libvec.scm"
{const ScmStringBody* G2166=SCM_STRING_BODY(s);ScmSize G2167=SCM_STRING_BODY_SIZE(G2166);ScmSize G2168=SCM_STRING_BODY_LENGTH(G2166);const char* G2169=SCM_STRING_BODY_START(G2166);SCM_CHECK_START_END(start,end,((int )(G2168)));;const char* sp=(((start)==(0))?(G2169):(Scm_StringBodyPosition(G2166,start)));const char* ep=(((end)==(G2168))?((G2169)+(G2167)):(Scm_StringBodyPosition(G2166,end)));
{char* buf=NULL;
if (immutable){
buf=(((char* )(sp)));} else {
{
buf=(SCM_NEW_ATOMIC2(char* ,(ep)-(sp)));
memcpy(buf,sp,(ep)-(sp));}}
return (Scm_MakeUVectorFull(klass,((ScmSmallInt )((ep)-(sp))),buf,immutable,NULL));}}}}

static ScmObj libvecstring_TOs8vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj immutableP_scm;
  int immutableP;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("string->s8vector");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 3+1) {
    immutableP_scm = SCM_SUBRARGS[3];
  } else {
    immutableP_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(immutableP_scm)) Scm_Error("boolean required, but got %S", immutableP_scm);
  immutableP = SCM_BOOL_VALUE(immutableP_scm);
  {
{
ScmObj SCM_RESULT;

#line 457 "libvec.scm"
{SCM_RESULT=(string_TObytevector(SCM_CLASS_S8VECTOR,s,start,end,immutableP));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecstring_TOu8vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj immutableP_scm;
  int immutableP;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("string->u8vector");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 3+1) {
    immutableP_scm = SCM_SUBRARGS[3];
  } else {
    immutableP_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(immutableP_scm)) Scm_Error("boolean required, but got %S", immutableP_scm);
  immutableP = SCM_BOOL_VALUE(immutableP_scm);
  {
{
ScmObj SCM_RESULT;

#line 462 "libvec.scm"
{SCM_RESULT=(string_TObytevector(SCM_CLASS_U8VECTOR,s,start,end,immutableP));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj string_TObytevectorX(ScmUVector* v,ScmSmallInt tstart,ScmString* s,ScmSmallInt start,ScmSmallInt end){{
#line 470 "libvec.scm"
{ScmSmallInt tlen=SCM_UVECTOR_SIZE(v);
if (((tstart)>=(0))&&((tstart)<(tlen))){{
SCM_UVECTOR_CHECK_MUTABLE(v);
{const ScmStringBody* G2170=SCM_STRING_BODY(s);ScmSize G2171=SCM_STRING_BODY_SIZE(G2170);ScmSize G2172=SCM_STRING_BODY_LENGTH(G2170);const char* G2173=SCM_STRING_BODY_START(G2170);SCM_CHECK_START_END(start,end,((int )(G2172)));;const char* sp=(((start)==(0))?(G2173):(Scm_StringBodyPosition(G2170,start)));const char* ep=(((end)==(G2172))?((G2173)+(G2171)):(Scm_StringBodyPosition(G2170,end)));
{char* buf=(((char* )(SCM_UVECTOR_ELEMENTS(v))))+(tstart);
if (((tlen)-(tstart))>((ep)-(sp))){
memcpy(buf,sp,(ep)-(sp));} else {
memcpy(buf,sp,(tlen)-(tstart));}}}}}
return (SCM_OBJ(v));}}}

static ScmObj libvecstring_TOs8vectorX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj tstart_scm;
  ScmSmallInt tstart;
  ScmObj s_scm;
  ScmString* s;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("string->s8vector!");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S8VECTORP(v_scm)) Scm_Error("<s8vector> required, but got %S", v_scm);
  v = SCM_S8VECTOR(v_scm);
  tstart_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(tstart_scm)) Scm_Error("ScmSmallInt required, but got %S", tstart_scm);
  tstart = SCM_INT_VALUE(tstart_scm);
  s_scm = SCM_SUBRARGS[2];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  if (SCM_ARGCNT > 3+1) {
    start_scm = SCM_SUBRARGS[3];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 4+1) {
    end_scm = SCM_SUBRARGS[4];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
{
ScmObj SCM_RESULT;

#line 485 "libvec.scm"
{SCM_RESULT=(string_TObytevectorX(SCM_UVECTOR(v),tstart,s,start,end));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecstring_TOu8vectorX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj tstart_scm;
  ScmSmallInt tstart;
  ScmObj s_scm;
  ScmString* s;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("string->u8vector!");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U8VECTORP(v_scm)) Scm_Error("<u8vector> required, but got %S", v_scm);
  v = SCM_U8VECTOR(v_scm);
  tstart_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(tstart_scm)) Scm_Error("ScmSmallInt required, but got %S", tstart_scm);
  tstart = SCM_INT_VALUE(tstart_scm);
  s_scm = SCM_SUBRARGS[2];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  if (SCM_ARGCNT > 3+1) {
    start_scm = SCM_SUBRARGS[3];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 4+1) {
    end_scm = SCM_SUBRARGS[4];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
{
ScmObj SCM_RESULT;

#line 492 "libvec.scm"
{SCM_RESULT=(string_TObytevectorX(SCM_UVECTOR(v),tstart,s,start,end));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj bytevector_TOstring(ScmUVector* v,ScmSmallInt start,ScmSmallInt end,ScmObj term){{
#line 499 "libvec.scm"
{ScmSmallInt len=SCM_UVECTOR_SIZE(v);
#line 514 "libvec.scm"
SCM_CHECK_START_END(start,end,len);
{int flags=((((SCM_UVECTOR_IMMUTABLE_P(v))&&(
((v)->owner)==(NULL)))&&(
!(((len)>=(256))&&(
((end)-(start))<=((len)/(5))))))?(0):(SCM_STRING_COPYING));
#line 521 "libvec.scm"
if (SCM_INTP(term)){{
{u_char terminator=(255)&(SCM_INT_VALUE(term));ScmSmallInt i;
#line 524 "libvec.scm"
for (i=(start); (i)<(end); (i)++){
if ((terminator)==(
(((u_char* )(SCM_UVECTOR_ELEMENTS(v))))[i])){{
end=(i);
break;}}}}}}
return (Scm_MakeString((((char* )(SCM_UVECTOR_ELEMENTS(v))))+(start),
(end)-(start),-1,flags));}}}}

static ScmObj libvecs8vector_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj terminator_scm;
  ScmObj terminator;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("s8vector->string");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S8VECTORP(v_scm)) Scm_Error("<s8vector> required, but got %S", v_scm);
  v = SCM_S8VECTOR(v_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 3+1) {
    terminator_scm = SCM_SUBRARGS[3];
  } else {
    terminator_scm = SCM_FALSE;
  }
  if (!(terminator_scm)) Scm_Error("scheme object required, but got %S", terminator_scm);
  terminator = (terminator_scm);
  {
{
ScmObj SCM_RESULT;

#line 536 "libvec.scm"
{SCM_RESULT=(bytevector_TOstring(SCM_UVECTOR(v),start,end,terminator));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu8vector_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj terminator_scm;
  ScmObj terminator;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("u8vector->string");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U8VECTORP(v_scm)) Scm_Error("<u8vector> required, but got %S", v_scm);
  v = SCM_U8VECTOR(v_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 3+1) {
    terminator_scm = SCM_SUBRARGS[3];
  } else {
    terminator_scm = SCM_FALSE;
  }
  if (!(terminator_scm)) Scm_Error("scheme object required, but got %S", terminator_scm);
  terminator = (terminator_scm);
  {
{
ScmObj SCM_RESULT;

#line 542 "libvec.scm"
{SCM_RESULT=(bytevector_TOstring(SCM_UVECTOR(v),start,end,terminator));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj string_TOwordvector(ScmClass* klass,ScmString* s,ScmSmallInt start,ScmSmallInt end,ScmObj endian){{
#line 548 "libvec.scm"
if (!(SCM_SYMBOLP(endian))){{
endian=(Scm_DefaultEndian());}}
{const ScmStringBody* G2174=SCM_STRING_BODY(s);ScmSize G2175=SCM_STRING_BODY_SIZE(G2174);ScmSize G2176=SCM_STRING_BODY_LENGTH(G2174);const char* G2177=SCM_STRING_BODY_START(G2174);SCM_CHECK_START_END(start,end,((int )(G2176)));;const char* sp=(((start)==(0))?(G2177):(Scm_StringBodyPosition(G2174,start)));const char* ep=(((end)==(G2176))?((G2177)+(G2175)):(Scm_StringBodyPosition(G2174,end)));
{ScmObj v=Scm_MakeUVector(klass,(end)-(start),NULL);uint32_t* eltp=
((uint32_t* )(SCM_UVECTOR_ELEMENTS(v)));ScmSmallInt i=0;int do_swap=
#line 554 "libvec.scm"
SWAP_REQUIRED(endian);
for (; (sp)<(ep); (i)++){
{ScmChar ch;
SCM_CHAR_GET(sp,ch);
if (do_swap){
{swap_u32_t v;
(v).val=(((uint32_t )(ch)));
SWAP_4(v);
(eltp)[i]=((v).val);}} else {
(eltp)[i]=(((uint32_t )(ch)));}
(sp)+=(SCM_CHAR_NBYTES(ch));}}
return (v);}}}}

static ScmObj libvecstring_TOs32vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj endian_scm;
  ScmObj endian;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("string->s32vector");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 3+1) {
    endian_scm = SCM_SUBRARGS[3];
  } else {
    endian_scm = SCM_UNBOUND;
  }
  if (!(endian_scm)) Scm_Error("scheme object required, but got %S", endian_scm);
  endian = (endian_scm);
  {
{
ScmObj SCM_RESULT;

#line 571 "libvec.scm"
{SCM_RESULT=(string_TOwordvector(SCM_CLASS_S32VECTOR,s,start,end,endian));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecstring_TOu32vector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj endian_scm;
  ScmObj endian;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("string->u32vector");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 3+1) {
    endian_scm = SCM_SUBRARGS[3];
  } else {
    endian_scm = SCM_UNBOUND;
  }
  if (!(endian_scm)) Scm_Error("scheme object required, but got %S", endian_scm);
  endian = (endian_scm);
  {
{
ScmObj SCM_RESULT;

#line 577 "libvec.scm"
{SCM_RESULT=(string_TOwordvector(SCM_CLASS_U32VECTOR,s,start,end,endian));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj string_TOwordvectorX(ScmUVector* v,ScmSmallInt tstart,ScmString* s,ScmSmallInt start,ScmSmallInt end,ScmObj endian){{
#line 586 "libvec.scm"
if (!(SCM_SYMBOLP(endian))){{
endian=(Scm_DefaultEndian());}}
{ScmSmallInt tlen=SCM_UVECTOR_SIZE(v);
if (((tstart)>=(0))&&((tstart)<(tlen))){{
SCM_UVECTOR_CHECK_MUTABLE(v);
{const ScmStringBody* G2178=SCM_STRING_BODY(s);ScmSize G2179=SCM_STRING_BODY_SIZE(G2178);ScmSize G2180=SCM_STRING_BODY_LENGTH(G2178);const char* G2181=SCM_STRING_BODY_START(G2178);SCM_CHECK_START_END(start,end,((int )(G2180)));;const char* sp=(((start)==(0))?(G2181):(Scm_StringBodyPosition(G2178,start)));const char* ep=(((end)==(G2180))?((G2181)+(G2179)):(Scm_StringBodyPosition(G2178,end)));
{uint32_t* buf=((uint32_t* )(SCM_UVECTOR_ELEMENTS(v)));ScmSmallInt i=tstart;int do_swap=
#line 594 "libvec.scm"
SWAP_REQUIRED(endian);
for (; ((sp)<(ep))&&((i)<(tlen)); (i)++){
{ScmChar ch;
SCM_CHAR_GET(sp,ch);
if (do_swap){
{swap_u32_t v;
(v).val=(((uint32_t )(ch)));
SWAP_4(v);
(buf)[i]=((v).val);}} else {
(buf)[i]=(((uint32_t )(ch)));}
(sp)+=(SCM_CHAR_NBYTES(ch));}}}}}}
return (SCM_OBJ(v));}}}

static ScmObj libvecstring_TOs32vectorX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj tstart_scm;
  ScmSmallInt tstart;
  ScmObj s_scm;
  ScmString* s;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj endian_scm;
  ScmObj endian;
  ScmObj SCM_SUBRARGS[6];
  SCM_ENTER_SUBR("string->s32vector!");
  if (SCM_ARGCNT >= 7
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 6 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<6; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S32VECTORP(v_scm)) Scm_Error("<s32vector> required, but got %S", v_scm);
  v = SCM_S32VECTOR(v_scm);
  tstart_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(tstart_scm)) Scm_Error("ScmSmallInt required, but got %S", tstart_scm);
  tstart = SCM_INT_VALUE(tstart_scm);
  s_scm = SCM_SUBRARGS[2];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  if (SCM_ARGCNT > 3+1) {
    start_scm = SCM_SUBRARGS[3];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 4+1) {
    end_scm = SCM_SUBRARGS[4];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 5+1) {
    endian_scm = SCM_SUBRARGS[5];
  } else {
    endian_scm = SCM_UNBOUND;
  }
  if (!(endian_scm)) Scm_Error("scheme object required, but got %S", endian_scm);
  endian = (endian_scm);
  {
{
ScmObj SCM_RESULT;

#line 613 "libvec.scm"
{SCM_RESULT=(string_TOwordvectorX(SCM_UVECTOR(v),tstart,s,start,end,endian));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecstring_TOu32vectorX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj tstart_scm;
  ScmSmallInt tstart;
  ScmObj s_scm;
  ScmString* s;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj endian_scm;
  ScmObj endian;
  ScmObj SCM_SUBRARGS[6];
  SCM_ENTER_SUBR("string->u32vector!");
  if (SCM_ARGCNT >= 7
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 6 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<6; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U32VECTORP(v_scm)) Scm_Error("<u32vector> required, but got %S", v_scm);
  v = SCM_U32VECTOR(v_scm);
  tstart_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(tstart_scm)) Scm_Error("ScmSmallInt required, but got %S", tstart_scm);
  tstart = SCM_INT_VALUE(tstart_scm);
  s_scm = SCM_SUBRARGS[2];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  if (SCM_ARGCNT > 3+1) {
    start_scm = SCM_SUBRARGS[3];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 4+1) {
    end_scm = SCM_SUBRARGS[4];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 5+1) {
    endian_scm = SCM_SUBRARGS[5];
  } else {
    endian_scm = SCM_UNBOUND;
  }
  if (!(endian_scm)) Scm_Error("scheme object required, but got %S", endian_scm);
  endian = (endian_scm);
  {
{
ScmObj SCM_RESULT;

#line 621 "libvec.scm"
{SCM_RESULT=(string_TOwordvectorX(SCM_UVECTOR(v),tstart,s,start,end,endian));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj wordvector_TOstring(ScmUVector* v,ScmSmallInt start,ScmSmallInt end,ScmObj term,ScmObj endian){{
#line 629 "libvec.scm"
if (!(SCM_SYMBOLP(endian))){{
endian=(Scm_DefaultEndian());}}
{ScmSmallInt len=SCM_UVECTOR_SIZE(v);ScmObj s=
Scm_MakeOutputStringPort(FALSE);int do_swap=
SWAP_REQUIRED(endian);
SCM_CHECK_START_END(start,end,len);
{int32_t* eltp=((int32_t* )(SCM_UVECTOR_ELEMENTS(v)));
while((start)<(end)){
{ScmChar ch;uint32_t val=
(eltp)[(start)++];
if (do_swap){
{swap_u32_t v;
(v).val=(val);
SWAP_4(v);
ch=(((ScmChar )((v).val)));}} else {
ch=(((ScmChar )(val)));}
if ((SCM_INTP(term))&&(
(SCM_INT_VALUE(term))==(ch))){{
break;}}
Scm_PutcUnsafe(ch,SCM_PORT(s));}}}
return (Scm_GetOutputStringUnsafe(SCM_PORT(s),0));}}}

static ScmObj libvecs32vector_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj terminator_scm;
  ScmObj terminator;
  ScmObj endian_scm;
  ScmObj endian;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("s32vector->string");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_S32VECTORP(v_scm)) Scm_Error("<s32vector> required, but got %S", v_scm);
  v = SCM_S32VECTOR(v_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 3+1) {
    terminator_scm = SCM_SUBRARGS[3];
  } else {
    terminator_scm = SCM_FALSE;
  }
  if (!(terminator_scm)) Scm_Error("scheme object required, but got %S", terminator_scm);
  terminator = (terminator_scm);
  if (SCM_ARGCNT > 4+1) {
    endian_scm = SCM_SUBRARGS[4];
  } else {
    endian_scm = SCM_UNBOUND;
  }
  if (!(endian_scm)) Scm_Error("scheme object required, but got %S", endian_scm);
  endian = (endian_scm);
  {
{
ScmObj SCM_RESULT;

#line 656 "libvec.scm"
{SCM_RESULT=(wordvector_TOstring(SCM_UVECTOR(v),start,end,terminator,endian));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecu32vector_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmUVector* v;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj terminator_scm;
  ScmObj terminator;
  ScmObj endian_scm;
  ScmObj endian;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("u32vector->string");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_U32VECTORP(v_scm)) Scm_Error("<u32vector> required, but got %S", v_scm);
  v = SCM_U32VECTOR(v_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  if (SCM_ARGCNT > 3+1) {
    terminator_scm = SCM_SUBRARGS[3];
  } else {
    terminator_scm = SCM_FALSE;
  }
  if (!(terminator_scm)) Scm_Error("scheme object required, but got %S", terminator_scm);
  terminator = (terminator_scm);
  if (SCM_ARGCNT > 4+1) {
    endian_scm = SCM_SUBRARGS[4];
  } else {
    endian_scm = SCM_UNBOUND;
  }
  if (!(endian_scm)) Scm_Error("scheme object required, but got %S", endian_scm);
  endian = (endian_scm);
  {
{
ScmObj SCM_RESULT;

#line 663 "libvec.scm"
{SCM_RESULT=(wordvector_TOstring(SCM_UVECTOR(v),start,end,terminator,endian));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvectorP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("bitvector?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_BITVECTORP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvector_length(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmBitvector* v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("bitvector-length");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_BITVECTORP(v_scm)) Scm_Error("<bitvector> required, but got %S", v_scm);
  v = SCM_BITVECTOR(v_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_BITVECTOR_SIZE(v));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvector_any_valueP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmBitvector* v;
  ScmObj bit_scm;
  ScmObj bit;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("bitvector-any-value?");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_BITVECTORP(v_scm)) Scm_Error("<bitvector> required, but got %S", v_scm);
  v = SCM_BITVECTOR(v_scm);
  bit_scm = SCM_SUBRARGS[1];
  if (!(bit_scm)) Scm_Error("scheme object required, but got %S", bit_scm);
  bit = (bit_scm);
  if (SCM_ARGCNT > 2+1) {
    start_scm = SCM_SUBRARGS[2];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 3+1) {
    end_scm = SCM_SUBRARGS[3];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
{
int SCM_RESULT;

#line 678 "libvec.scm"
{int b=Scm_Bit2Int(bit);
SCM_CHECK_START_END(start,end,SCM_BITVECTOR_SIZE(v));
if (b){
{SCM_RESULT=(Scm_BitsAny(SCM_BITVECTOR_BITS(v),start,end));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(!(Scm_BitsEvery(SCM_BITVECTOR_BITS(v),start,end)));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvector_every_valueP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmBitvector* v;
  ScmObj bit_scm;
  ScmObj bit;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("bitvector-every-value?");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_BITVECTORP(v_scm)) Scm_Error("<bitvector> required, but got %S", v_scm);
  v = SCM_BITVECTOR(v_scm);
  bit_scm = SCM_SUBRARGS[1];
  if (!(bit_scm)) Scm_Error("scheme object required, but got %S", bit_scm);
  bit = (bit_scm);
  if (SCM_ARGCNT > 2+1) {
    start_scm = SCM_SUBRARGS[2];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 3+1) {
    end_scm = SCM_SUBRARGS[3];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
{
int SCM_RESULT;

#line 688 "libvec.scm"
{int b=Scm_Bit2Int(bit);
SCM_CHECK_START_END(start,end,SCM_BITVECTOR_SIZE(v));
if (b){
{SCM_RESULT=(Scm_BitsEvery(SCM_BITVECTOR_BITS(v),start,end));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(!(Scm_BitsAny(SCM_BITVECTOR_BITS(v),start,end)));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecmake_bitvector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj len_scm;
  ScmSmallInt len;
  ScmObj init_scm;
  ScmObj init;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-bitvector");
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
    init_scm = SCM_SUBRARGS[1];
  } else {
    init_scm = SCM_FALSE;
  }
  if (!(init_scm)) Scm_Error("scheme object required, but got %S", init_scm);
  init = (init_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeBitvector(len,init));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj bits_scm;
  ScmObj bits;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("bitvector");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  bits_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(bits_scm)) Scm_Error("list required, but got %S", bits_scm);
  bits = (bits_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ListToBitvector(bits));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libveclist_TObitvector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj bits_scm;
  ScmObj bits;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("list->bitvector");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  bits_scm = SCM_SUBRARGS[0];
  if (!(bits_scm)) Scm_Error("scheme object required, but got %S", bits_scm);
  bits = (bits_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ListToBitvector(bits));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecstring_TObitvector(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  ScmString* s;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("string->bitvector");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("<string> required, but got %S", s_scm);
  s = SCM_STRING(s_scm);
  {
{
ScmObj SCM_RESULT;

#line 700 "libvec.scm"
{SCM_RESULT=(Scm_StringToBitvector(s,TRUE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvector_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmBitvector* v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("bitvector->string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_BITVECTORP(v_scm)) Scm_Error("<bitvector> required, but got %S", v_scm);
  v = SCM_BITVECTOR(v_scm);
  {
{
ScmObj SCM_RESULT;

#line 702 "libvec.scm"
{SCM_RESULT=(Scm_BitvectorToString(v,TRUE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecbit_TOinteger(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj bit_scm;
  ScmObj bit;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("bit->integer");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  bit_scm = SCM_SUBRARGS[0];
  if (!(bit_scm)) Scm_Error("scheme object required, but got %S", bit_scm);
  bit = (bit_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_Bit2Int(bit));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libvecbit_TOboolean(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj bit_scm;
  ScmObj bit;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("bit->boolean");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  bit_scm = SCM_SUBRARGS[0];
  if (!(bit_scm)) Scm_Error("scheme object required, but got %S", bit_scm);
  bit = (bit_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_Bit2Int(bit));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvector_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmBitvector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj b_scm;
  ScmObj b;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("bitvector-set!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_BITVECTORP(v_scm)) Scm_Error("<bitvector> required, but got %S", v_scm);
  v = SCM_BITVECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
  b_scm = SCM_SUBRARGS[2];
  if (!(b_scm)) Scm_Error("scheme object required, but got %S", b_scm);
  b = (b_scm);
  {

#line 708 "libvec.scm"
if (((i)<(0))||((i)>=(SCM_BITVECTOR_SIZE(v)))){{
Scm_Error("bitvector index out of range: %ld",i);}}

#line 710 "libvec.scm"
SCM_BITVECTOR_CHECK_MUTABLE(v);

#line 711 "libvec.scm"
if (Scm_Bit2Int(b)){
SCM_BITS_SET(SCM_BITVECTOR_BITS(v),i);} else {
SCM_BITS_RESET(SCM_BITVECTOR_BITS(v),i);}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libvecbitvector_ref_2fint(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmBitvector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("bitvector-ref/int");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_BITVECTORP(v_scm)) Scm_Error("<bitvector> required, but got %S", v_scm);
  v = SCM_BITVECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 718 "libvec.scm"
if (((i)<(0))||((i)>=(SCM_BITVECTOR_SIZE(v)))){{
if (SCM_UNBOUNDP(fallback)){
Scm_Error("bitvector index out of range: %ld",i);} else {
{SCM_RESULT=(fallback);goto SCM_STUB_RETURN;}}}}

#line 722 "libvec.scm"
{SCM_RESULT=(((SCM_BITS_TEST(SCM_BITVECTOR_BITS(v),i))?(
SCM_MAKE_INT(1)):(
SCM_MAKE_INT(0))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvector_ref_2fbool(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmBitvector* v;
  ScmObj i_scm;
  ScmSmallInt i;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("bitvector-ref/bool");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_BITVECTORP(v_scm)) Scm_Error("<bitvector> required, but got %S", v_scm);
  v = SCM_BITVECTOR(v_scm);
  i_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(i_scm)) Scm_Error("ScmSmallInt required, but got %S", i_scm);
  i = SCM_INT_VALUE(i_scm);
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

#line 729 "libvec.scm"
if (((i)<(0))||((i)>=(SCM_BITVECTOR_SIZE(v)))){{
if (SCM_UNBOUNDP(fallback)){
Scm_Error("bitvector index out of range: %ld",i);} else {
{SCM_RESULT=(fallback);goto SCM_STUB_RETURN;}}}}

#line 733 "libvec.scm"
{SCM_RESULT=(((SCM_BITS_TEST(SCM_BITVECTOR_BITS(v),i))?(SCM_TRUE):(SCM_FALSE)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvector_copy(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmBitvector* v;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("bitvector-copy");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!SCM_BITVECTORP(v_scm)) Scm_Error("<bitvector> required, but got %S", v_scm);
  v = SCM_BITVECTOR(v_scm);
  if (SCM_ARGCNT > 1+1) {
    start_scm = SCM_SUBRARGS[1];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 2+1) {
    end_scm = SCM_SUBRARGS[2];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_BitvectorCopy(v,start,end));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libvecbitvector_copyX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj dest_scm;
  ScmBitvector* dest;
  ScmObj dstart_scm;
  ScmSmallInt dstart;
  ScmObj src_scm;
  ScmBitvector* src;
  ScmObj start_scm;
  ScmSmallInt start;
  ScmObj end_scm;
  ScmSmallInt end;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("bitvector-copy!");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  dest_scm = SCM_SUBRARGS[0];
  if (!SCM_BITVECTORP(dest_scm)) Scm_Error("<bitvector> required, but got %S", dest_scm);
  dest = SCM_BITVECTOR(dest_scm);
  dstart_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(dstart_scm)) Scm_Error("ScmSmallInt required, but got %S", dstart_scm);
  dstart = SCM_INT_VALUE(dstart_scm);
  src_scm = SCM_SUBRARGS[2];
  if (!SCM_BITVECTORP(src_scm)) Scm_Error("<bitvector> required, but got %S", src_scm);
  src = SCM_BITVECTOR(src_scm);
  if (SCM_ARGCNT > 3+1) {
    start_scm = SCM_SUBRARGS[3];
  } else {
    start_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(start_scm)) Scm_Error("ScmSmallInt required, but got %S", start_scm);
  start = SCM_INT_VALUE(start_scm);
  if (SCM_ARGCNT > 4+1) {
    end_scm = SCM_SUBRARGS[4];
  } else {
    end_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(end_scm)) Scm_Error("ScmSmallInt required, but got %S", end_scm);
  end = SCM_INT_VALUE(end_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_BitvectorCopyX(dest,dstart,src,start,end));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#define common_eqv(a,b) ((a)==(b))

#define common_lt(a,b) ((a)<(b))

#define hc_eqv(a,b) ((((a).r)==((b).r))&&(((a).i)==((b).i)))

#define hc_lt(a,b) ((((a).r)<((b).r))||((((a).r)==((b).r))&&(((a).i)<((b).i))))

#define fc_lt(a,b) (((crealf(a))<(crealf(b)))||(((crealf(a))==(crealf(b)))&&((cimagf(a))<(cimagf(b)))))

#define dc_lt(a,b) (((creal(a))<(creal(b)))||(((creal(a))==(creal(b)))&&((cimag(a))<(cimag(b)))))

 size_t Scm_BinarySearchS8(const int8_t* vec,size_t len,int8_t key,u_int skip,size_t* floor,size_t* ceil){{
#line 801 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{int8_t v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchU8(const uint8_t* vec,size_t len,uint8_t key,u_int skip,size_t* floor,size_t* ceil){{
#line 809 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{uint8_t v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchS16(const int16_t* vec,size_t len,int16_t key,u_int skip,size_t* floor,size_t* ceil){{
#line 817 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{int16_t v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchU16(const uint16_t* vec,size_t len,uint16_t key,u_int skip,size_t* floor,size_t* ceil){{
#line 825 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{uint16_t v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchS32(const int32_t* vec,size_t len,int32_t key,u_int skip,size_t* floor,size_t* ceil){{
#line 833 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{int32_t v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchU32(const uint32_t* vec,size_t len,uint32_t key,u_int skip,size_t* floor,size_t* ceil){{
#line 841 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{uint32_t v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchS64(const int64_t* vec,size_t len,int64_t key,u_int skip,size_t* floor,size_t* ceil){{
#line 849 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{int64_t v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchU64(const uint64_t* vec,size_t len,uint64_t key,u_int skip,size_t* floor,size_t* ceil){{
#line 857 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{uint64_t v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchF16(const ScmHalfFloat* vec,size_t len,ScmHalfFloat key,u_int skip,size_t* floor,size_t* ceil){{
#line 865 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{ScmHalfFloat v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchF32(const float* vec,size_t len,float key,u_int skip,size_t* floor,size_t* ceil){{
#line 873 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{float v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchF64(const double* vec,size_t len,double key,u_int skip,size_t* floor,size_t* ceil){{
#line 881 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{double v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(common_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchC32(const ScmHalfComplex* vec,size_t len,ScmHalfComplex key,u_int skip,size_t* floor,size_t* ceil){{
#line 889 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{ScmHalfComplex v=(vec)[(k)*(esize)];if (hc_eqv(v,key)){return ((k)*(esize));}else if(hc_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchC64(const ScmFloatComplex* vec,size_t len,ScmFloatComplex key,u_int skip,size_t* floor,size_t* ceil){{
#line 897 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{ScmFloatComplex v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(fc_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
 size_t Scm_BinarySearchC128(const ScmDoubleComplex* vec,size_t len,ScmDoubleComplex key,u_int skip,size_t* floor,size_t* ceil){{
#line 905 "libvec.scm"
{u_int esize=(skip)+(1);size_t nume=(len)/(esize);size_t k=(nume)/(2);size_t hi=nume;size_t lo=0;while((lo)<(hi)){{ScmDoubleComplex v=(vec)[(k)*(esize)];if (common_eqv(v,key)){return ((k)*(esize));}else if(dc_lt(v,key)){lo=(k);k=((lo)+(((hi)-(lo))/(2)));if ((lo)==(k)){{break;}}} else {hi=(k);k=((lo)+(((hi)-(lo))/(2)));}}}if (floor){{if ((lo)==(hi)){*(floor)=(((size_t )(-1)));} else {*(floor)=((lo)*(esize));}}}if (ceil){{if ((hi)==(nume)){*(ceil)=(((size_t )(-1)));} else {*(ceil)=((hi)*(esize));}}}return (((size_t )(-1)));}}}
static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[2])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[4])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[145];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[146];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[68];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[148];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[69];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[149];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[40];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[104];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[143];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1022];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = SCM_OBJ(&scm__sc.d2148[61]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[142];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[161];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[164];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[157];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[31];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[155];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = SCM_OBJ(&scm__sc.d2148[46]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[42];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[28];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[140];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[141];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1023];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1024];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1025];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1026];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1027];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[5];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[138];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[180];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[189];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[109];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[190];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[182];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[55];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[191];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[188];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[183];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = SCM_OBJ(&scm__sc.d2148[77]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[186];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[184];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[181];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[178];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[175];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[177];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[179];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[187];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1028];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1029];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1030];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[1031];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[968]), i++) = scm__rc.d2149[173];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[968]);
}
void Scm_Init_libvec() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* vector */
  scm__rc.d2149[1] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[1]))); /* :rest */
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[2])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[2]), scm__rc.d2149[1]);
  scm__rc.d2149[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[3])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[5]), scm__rc.d2149[3]);
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[5])),TRUE); /* bind-info */
  scm__rc.d2149[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[6])),TRUE); /* scheme */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[6]), scm__rc.d2149[0]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[7]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[8]), scm__rc.d2149[4]);
  scm__rc.d2149[6] = Scm_MakeExtendedPair(scm__rc.d2149[0], SCM_OBJ(&scm__rc.d2150[2]), SCM_OBJ(&scm__rc.d2150[10]));
  scm__rc.d2149[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[7])),TRUE); /* * */
  scm__rc.d2149[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[8])),TRUE); /* -> */
  scm__rc.d2149[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* <top> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[10]))[3] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[10]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[10]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[10]))[6] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector")), SCM_OBJ(&libvecvector__STUB), SCM_BINDING_INLINABLE);
  libvecvector__STUB.common.info = scm__rc.d2149[6];
  libvecvector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[10]);
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* vector? */
  scm__rc.d2149[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[11]), scm__rc.d2149[18]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[15]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[16]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[17]), scm__rc.d2149[4]);
  scm__rc.d2149[19] = Scm_MakeExtendedPair(scm__rc.d2149[17], SCM_OBJ(&scm__rc.d2150[11]), SCM_OBJ(&scm__rc.d2150[19]));
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[21]))[3] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[21]))[4] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[21]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[21]))[6] = scm__rc.d2149[20];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector?")), SCM_OBJ(&libvecvectorP__STUB), SCM_BINDING_INLINABLE);
  libvecvectorP__STUB.common.info = scm__rc.d2149[19];
  libvecvectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[21]);
  scm__rc.d2149[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* vector-length */
  scm__rc.d2149[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* vec */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[20]), scm__rc.d2149[29]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[23]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[24]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[25]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[4]);
  scm__rc.d2149[30] = Scm_MakeExtendedPair(scm__rc.d2149[28], SCM_OBJ(&scm__rc.d2150[20]), SCM_OBJ(&scm__rc.d2150[28]));
  scm__rc.d2149[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* <vector> */
  scm__rc.d2149[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* <fixnum> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[33]))[3] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[33]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[33]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[33]))[6] = scm__rc.d2149[32];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector-length")), SCM_OBJ(&libvecvector_length__STUB), SCM_BINDING_INLINABLE);
  libvecvector_length__STUB.common.info = scm__rc.d2149[30];
  libvecvector_length__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[33]);
  scm__rc.d2149[40] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* vector-ref */
  scm__rc.d2149[41] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* k */
  scm__rc.d2149[42] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19]))); /* :optional */
  scm__rc.d2149[43] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* fallback */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[29]), scm__rc.d2149[43]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[30]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[31]), scm__rc.d2149[41]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[32]), scm__rc.d2149[29]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[35]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[36]), scm__rc.d2149[40]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[37]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[38]), scm__rc.d2149[4]);
  scm__rc.d2149[44] = Scm_MakeExtendedPair(scm__rc.d2149[40], SCM_OBJ(&scm__rc.d2150[32]), SCM_OBJ(&scm__rc.d2150[40]));
  scm__rc.d2149[45] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* <integer> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[46]))[3] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[46]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[46]))[5] = scm__rc.d2149[45];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[46]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[46]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[46]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector-ref")), SCM_OBJ(&libvecvector_ref__STUB), SCM_BINDING_INLINABLE);
  libvecvector_ref__STUB.common.info = scm__rc.d2149[44];
  libvecvector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[46]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecvector_ref__STUB), SCM_PROCEDURE(&libvecvector_setX__STUB), TRUE);
  scm__rc.d2149[55] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[41]), scm__rc.d2149[41]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[42]), scm__rc.d2149[29]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[55]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[47]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[48]), scm__rc.d2149[4]);
  scm__rc.d2149[56] = Scm_MakeExtendedPair(scm__rc.d2149[55], SCM_OBJ(&scm__rc.d2150[42]), SCM_OBJ(&scm__rc.d2150[50]));
  scm__rc.d2149[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[58]))[3] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[58]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[58]))[5] = scm__rc.d2149[45];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[58]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[58]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[58]))[8] = scm__rc.d2149[57];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector-set!")), SCM_OBJ(&libvecvector_setX__STUB), 0);
  libvecvector_setX__STUB.common.info = scm__rc.d2149[56];
  libvecvector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[58]);
  scm__rc.d2149[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* vector->list */
  scm__rc.d2149[68] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* start */
  scm__rc.d2149[69] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* end */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[51]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[52]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[53]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[29]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[57]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[58]), scm__rc.d2149[67]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[4]);
  scm__rc.d2149[70] = Scm_MakeExtendedPair(scm__rc.d2149[67], SCM_OBJ(&scm__rc.d2150[54]), SCM_OBJ(&scm__rc.d2150[62]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[71]))[3] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[71]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[71]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[71]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[71]))[7] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector->list")), SCM_OBJ(&libvecvector_TOlist__STUB), 0);
  libvecvector_TOlist__STUB.common.info = scm__rc.d2149[70];
  libvecvector_TOlist__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[71]);
  scm__rc.d2149[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* list->vector */
  scm__rc.d2149[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* list */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[63]), scm__rc.d2149[80]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[66]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[67]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[68]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[4]);
  scm__rc.d2149[81] = Scm_MakeExtendedPair(scm__rc.d2149[79], SCM_OBJ(&scm__rc.d2150[63]), SCM_OBJ(&scm__rc.d2150[71]));
  scm__rc.d2149[82] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* <list> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[3] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[4] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[7] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("list->vector")), SCM_OBJ(&libveclist_TOvector__STUB), 0);
  libveclist_TOvector__STUB.common.info = scm__rc.d2149[81];
  libveclist_TOvector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[83]);
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* vector-fill! */
  scm__rc.d2149[92] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* fill */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[72]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[73]), scm__rc.d2149[29]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[76]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[79]), scm__rc.d2149[4]);
  scm__rc.d2149[93] = Scm_MakeExtendedPair(scm__rc.d2149[91], SCM_OBJ(&scm__rc.d2150[73]), SCM_OBJ(&scm__rc.d2150[81]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[3] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[5] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[94]))[8] = scm__rc.d2149[57];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector-fill!")), SCM_OBJ(&libvecvector_fillX__STUB), 0);
  libvecvector_fillX__STUB.common.info = scm__rc.d2149[93];
  libvecvector_fillX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[94]);
  scm__rc.d2149[103] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* vector-copy */
  scm__rc.d2149[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* v */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[82]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[83]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[84]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[85]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[86]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[89]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[90]), scm__rc.d2149[103]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[91]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[92]), scm__rc.d2149[4]);
  scm__rc.d2149[105] = Scm_MakeExtendedPair(scm__rc.d2149[103], SCM_OBJ(&scm__rc.d2150[86]), SCM_OBJ(&scm__rc.d2150[94]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector-copy")), SCM_OBJ(&libvecvector_copy__STUB), 0);
  libvecvector_copy__STUB.common.info = scm__rc.d2149[105];
  libvecvector_copy__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[71]);
  scm__rc.d2149[106] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* vector-copy! */
  scm__rc.d2149[107] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* t */
  scm__rc.d2149[108] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* tstart */
  scm__rc.d2149[109] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* s */
  scm__rc.d2149[110] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* sstart */
  scm__rc.d2149[111] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* send */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[95]), scm__rc.d2149[111]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[96]), scm__rc.d2149[110]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[97]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[100]), scm__rc.d2149[107]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[104]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[105]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[106]), scm__rc.d2149[4]);
  scm__rc.d2149[112] = Scm_MakeExtendedPair(scm__rc.d2149[106], SCM_OBJ(&scm__rc.d2150[100]), SCM_OBJ(&scm__rc.d2150[108]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[113]))[3] = scm__rc.d2149[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[113]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[113]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[113]))[6] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[113]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[113]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[113]))[9] = scm__rc.d2149[57];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector-copy!")), SCM_OBJ(&libvecvector_copyX__STUB), 0);
  libvecvector_copyX__STUB.common.info = scm__rc.d2149[112];
  libvecvector_copyX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[113]);
  scm__rc.d2149[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* vector-append */
  scm__rc.d2149[124] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* vecs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[109]), scm__rc.d2149[124]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[113]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[114]), scm__rc.d2149[123]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[116]), scm__rc.d2149[4]);
  scm__rc.d2149[125] = Scm_MakeExtendedPair(scm__rc.d2149[123], SCM_OBJ(&scm__rc.d2150[110]), SCM_OBJ(&scm__rc.d2150[118]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("vector-append")), SCM_OBJ(&libvecvector_append__STUB), 0);
  libvecvector_append__STUB.common.info = scm__rc.d2149[125];
  libvecvector_append__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[10]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[126] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* vector-immutable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[119]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[122]), scm__rc.d2149[3]);
  scm__rc.d2149[127] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[123]), scm__rc.d2149[126]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[124]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[125]), scm__rc.d2149[4]);
  scm__rc.d2149[128] = Scm_MakeExtendedPair(scm__rc.d2149[126], SCM_OBJ(&scm__rc.d2150[119]), SCM_OBJ(&scm__rc.d2150[127]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[129]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[129]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[129]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[129]))[6] = scm__rc.d2149[20];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("vector-immutable?")), SCM_OBJ(&libvecvector_immutableP__STUB), 0);
  libvecvector_immutableP__STUB.common.info = scm__rc.d2149[128];
  libvecvector_immutableP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[129]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[137] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[136] = Scm_MakeIdentifier(scm__rc.d2149[137], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[138] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* vector->string */
  scm__rc.d2149[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* lambda */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[129]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[130]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[132]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[135]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[136]), scm__rc.d2149[104]);
  scm__rc.d2149[140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* assume-type */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[137]), scm__rc.d2149[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[138]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[139]), scm__rc.d2149[140]);
  scm__rc.d2149[141] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* assume */
  scm__rc.d2149[142] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* exact-integer? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[140]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[142]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[143]), scm__rc.d2149[141]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[144]), scm__rc.d2149[142]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[146]), scm__rc.d2149[141]);
  scm__rc.d2149[143] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* with-output-to-string */
  scm__rc.d2149[144] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),TRUE); /* ^ */
  scm__rc.d2149[145] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* do */
  scm__rc.d2149[146] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* i */
  scm__rc.d2149[147] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* + */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[148]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[149]), scm__rc.d2149[147]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[151]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[152]), scm__rc.d2149[146]);
  scm__rc.d2149[148] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* >= */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[154]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[155]), scm__rc.d2149[148]);
  scm__rc.d2149[149] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* write-char */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[157]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[158]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[159]), scm__rc.d2149[40]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[161]), scm__rc.d2149[149]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[165]), scm__rc.d2149[145]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[144]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[170]), scm__rc.d2149[143]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[176]), scm__rc.d2149[139]);
  scm__rc.d2149[151] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58])),TRUE); /* error */
  scm__rc.d2149[150] = Scm_MakeIdentifier(scm__rc.d2149[151], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2149[153] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[127]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[152] = Scm_MakeIdentifier(scm__rc.d2149[31], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#<vector> */
  scm__rc.d2149[155] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* of-type? */
  scm__rc.d2149[154] = Scm_MakeIdentifier(scm__rc.d2149[155], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#of-type? */
  scm__rc.d2149[157] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* type-error */
  scm__rc.d2149[156] = Scm_MakeIdentifier(scm__rc.d2149[157], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#type-error */
  scm__rc.d2149[158] = Scm_MakeIdentifier(scm__rc.d2149[142], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#exact-integer? */
  scm__rc.d2149[159] = SCM_OBJ(Scm_MakeBox(SCM_FALSE));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[177]), scm__rc.d2149[159]);
  scm__rc.d2149[161] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* format-internal */
  scm__rc.d2149[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* gauche.format */
  scm__rc.d2149[162] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[163]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.format */
  scm__rc.d2149[160] = Scm_MakeIdentifier(scm__rc.d2149[161], SCM_MODULE(scm__rc.d2149[162]), SCM_NIL); /* gauche.format#format-internal */
  scm__rc.d2149[164] = SCM_OBJ(Scm_MakeBox(SCM_FALSE));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[180]), scm__rc.d2149[164]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[184]), scm__rc.d2149[138]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[187]), scm__rc.d2149[3]);
  scm__rc.d2149[165] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[184]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[188]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[189]), scm__rc.d2149[165]);
  scm__rc.d2149[166] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[0]))->debugInfo = scm__rc.d2149[166];
  scm__rc.d2149[167] = Scm_MakeIdentifier(scm__rc.d2149[143], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#with-output-to-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[192]), scm__rc.d2149[3]);
  scm__rc.d2149[168] = Scm_MakeExtendedPair(scm__rc.d2149[138], SCM_OBJ(&scm__rc.d2150[136]), SCM_OBJ(&scm__rc.d2150[193]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[194]), scm__rc.d2149[168]);
  scm__rc.d2149[169] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1]))->name = scm__rc.d2149[138];/* vector->string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1]))->debugInfo = scm__rc.d2149[169];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[45] = SCM_WORD(scm__rc.d2149[150]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[50] = SCM_WORD(scm__rc.d2149[152]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[52] = SCM_WORD(scm__rc.d2149[154]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[61] = SCM_WORD(scm__rc.d2149[104]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[63] = SCM_WORD(scm__rc.d2149[152]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[66] = SCM_WORD(scm__rc.d2149[156]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[71] = SCM_WORD(scm__rc.d2149[158]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[88] = SCM_WORD(scm__rc.d2149[160]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[90] = SCM_WORD(scm__rc.d2149[150]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[95] = SCM_WORD(scm__rc.d2149[158]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[112] = SCM_WORD(scm__rc.d2149[160]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[114] = SCM_WORD(scm__rc.d2149[150]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[15]))[118] = SCM_WORD(scm__rc.d2149[167]);
  scm__rc.d2149[170] = Scm_MakeIdentifier(scm__rc.d2149[138], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#vector->string */
  scm__rc.d2149[171] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* %toplevel */
  scm__rc.d2149[172] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[2]))->name = scm__rc.d2149[171];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[2]))->debugInfo = scm__rc.d2149[172];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[135]))[3] = SCM_WORD(scm__rc.d2149[136]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[135]))[6] = SCM_WORD(scm__rc.d2149[138]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[135]))[13] = SCM_WORD(scm__rc.d2149[170]);
  scm__rc.d2149[173] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* string->vector */
  scm__rc.d2149[175] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* string-cursor-start */
  scm__rc.d2149[174] = Scm_MakeIdentifier(scm__rc.d2149[175], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#string-cursor-start */
  scm__rc.d2149[177] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* string-cursor-end */
  scm__rc.d2149[176] = Scm_MakeIdentifier(scm__rc.d2149[177], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#string-cursor-end */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[195]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[196]), scm__rc.d2149[175]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[198]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[199]), scm__rc.d2149[177]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[201]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[204]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[205]), scm__rc.d2149[109]);
  scm__rc.d2149[178] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* <string> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[206]), scm__rc.d2149[178]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[207]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[208]), scm__rc.d2149[140]);
  scm__rc.d2149[179] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* let* */
  scm__rc.d2149[180] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* ss */
  scm__rc.d2149[181] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* string-index->cursor */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[209]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[210]), scm__rc.d2149[181]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[212]), scm__rc.d2149[180]);
  scm__rc.d2149[182] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* ee */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[213]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[214]), scm__rc.d2149[181]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[216]), scm__rc.d2149[182]);
  scm__rc.d2149[183] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* size */
  scm__rc.d2149[184] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* string-cursor-diff */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[217]), scm__rc.d2149[182]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[218]), scm__rc.d2149[180]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[219]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[220]), scm__rc.d2149[184]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[222]), scm__rc.d2149[183]);
  scm__rc.d2149[185] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* when */
  scm__rc.d2149[186] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* < */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[226]), scm__rc.d2149[183]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[227]), scm__rc.d2149[186]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[228]), scm__rc.d2149[80]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[231]), scm__rc.d2149[151]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[234]), scm__rc.d2149[185]);
  scm__rc.d2149[187] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* rlet1 */
  scm__rc.d2149[188] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* make-vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[183]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[236]), scm__rc.d2149[188]);
  scm__rc.d2149[189] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* string-cursor-next */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[237]), scm__rc.d2149[180]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[238]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[239]), scm__rc.d2149[189]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[241]), scm__rc.d2149[180]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[242]), scm__rc.d2149[180]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[244]), scm__rc.d2149[146]);
  scm__rc.d2149[190] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* string-cursor>=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[247]), scm__rc.d2149[190]);
  scm__rc.d2149[191] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* string-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[249]), scm__rc.d2149[191]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[251]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[252]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[253]), scm__rc.d2149[55]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[257]), scm__rc.d2149[145]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[260]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[261]), scm__rc.d2149[187]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[265]), scm__rc.d2149[179]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[269]), scm__rc.d2149[139]);
  scm__rc.d2149[192] = Scm_MakeIdentifier(scm__rc.d2149[178], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#<string> */
  scm__rc.d2149[193] = Scm_MakeIdentifier(scm__rc.d2149[181], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#string-index->cursor */
  scm__rc.d2149[194] = Scm_MakeIdentifier(scm__rc.d2149[184], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#string-cursor-diff */
  scm__rc.d2149[195] = Scm_MakeIdentifier(scm__rc.d2149[151], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#error */
  scm__rc.d2149[196] = Scm_MakeIdentifier(scm__rc.d2149[188], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#make-vector */
  scm__rc.d2149[197] = Scm_MakeIdentifier(scm__rc.d2149[190], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#string-cursor>=? */
  scm__rc.d2149[198] = Scm_MakeIdentifier(scm__rc.d2149[191], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#string-ref */
  scm__rc.d2149[199] = Scm_MakeIdentifier(scm__rc.d2149[189], SCM_MODULE(scm__rc.d2149[153]), SCM_NIL); /* gauche#string-cursor-next */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[272]), scm__rc.d2149[3]);
  scm__rc.d2149[200] = Scm_MakeExtendedPair(scm__rc.d2149[173], SCM_OBJ(&scm__rc.d2150[205]), SCM_OBJ(&scm__rc.d2150[273]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[274]), scm__rc.d2149[200]);
  scm__rc.d2149[201] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3]))->name = scm__rc.d2149[173];/* string->vector */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3]))->debugInfo = scm__rc.d2149[201];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[7] = SCM_WORD(scm__rc.d2149[174]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[27] = SCM_WORD(scm__rc.d2149[176]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[52] = SCM_WORD(scm__rc.d2149[150]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[57] = SCM_WORD(scm__rc.d2149[192]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[59] = SCM_WORD(scm__rc.d2149[154]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[68] = SCM_WORD(scm__rc.d2149[109]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[70] = SCM_WORD(scm__rc.d2149[192]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[73] = SCM_WORD(scm__rc.d2149[156]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[79] = SCM_WORD(scm__rc.d2149[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[86] = SCM_WORD(scm__rc.d2149[193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[94] = SCM_WORD(scm__rc.d2149[194]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[107] = SCM_WORD(scm__rc.d2149[195]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[114] = SCM_WORD(scm__rc.d2149[196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[126] = SCM_WORD(scm__rc.d2149[197]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[135] = SCM_WORD(scm__rc.d2149[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[150]))[142] = SCM_WORD(scm__rc.d2149[199]);
  scm__rc.d2149[202] = Scm_MakeIdentifier(scm__rc.d2149[173], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#string->vector */
  scm__rc.d2149[203] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[4]))->name = scm__rc.d2149[171];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[4]))->debugInfo = scm__rc.d2149[203];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[299]))[3] = SCM_WORD(scm__rc.d2149[136]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[299]))[6] = SCM_WORD(scm__rc.d2149[173]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[299]))[13] = SCM_WORD(scm__rc.d2149[202]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[204] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* make-weak-vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[277]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[278]), scm__rc.d2149[204]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[279]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[280]), scm__rc.d2149[4]);
  scm__rc.d2149[205] = Scm_MakeExtendedPair(scm__rc.d2149[204], SCM_OBJ(&scm__rc.d2150[235]), SCM_OBJ(&scm__rc.d2150[282]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[206]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[206]))[4] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[206]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[206]))[6] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-weak-vector")), SCM_OBJ(&libvecmake_weak_vector__STUB), 0);
  libvecmake_weak_vector__STUB.common.info = scm__rc.d2149[205];
  libvecmake_weak_vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[206]);
  scm__rc.d2149[213] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* weak-vector-length */
  scm__rc.d2149[214] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),TRUE); /* wv */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[283]), scm__rc.d2149[214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[286]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[287]), scm__rc.d2149[213]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[288]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[289]), scm__rc.d2149[4]);
  scm__rc.d2149[215] = Scm_MakeExtendedPair(scm__rc.d2149[213], SCM_OBJ(&scm__rc.d2150[283]), SCM_OBJ(&scm__rc.d2150[291]));
  scm__rc.d2149[216] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* <weak-vector> */
  scm__rc.d2149[217] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[218]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[218]))[4] = scm__rc.d2149[216];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[218]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[218]))[6] = scm__rc.d2149[217];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("weak-vector-length")), SCM_OBJ(&libvecweak_vector_length__STUB), 0);
  libvecweak_vector_length__STUB.common.info = scm__rc.d2149[215];
  libvecweak_vector_length__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[218]);
  scm__rc.d2149[225] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),TRUE); /* weak-vector-ref */
  scm__rc.d2149[226] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* index */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[292]), scm__rc.d2149[226]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[293]), scm__rc.d2149[214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[296]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[297]), scm__rc.d2149[225]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[298]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[299]), scm__rc.d2149[4]);
  scm__rc.d2149[227] = Scm_MakeExtendedPair(scm__rc.d2149[225], SCM_OBJ(&scm__rc.d2150[293]), SCM_OBJ(&scm__rc.d2150[301]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[4] = scm__rc.d2149[216];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("weak-vector-ref")), SCM_OBJ(&libvecweak_vector_ref__STUB), 0);
  libvecweak_vector_ref__STUB.common.info = scm__rc.d2149[227];
  libvecweak_vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[228]);
  scm__rc.d2149[237] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* weak-vector-set! */
  scm__rc.d2149[238] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),TRUE); /* val */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[302]), scm__rc.d2149[238]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[303]), scm__rc.d2149[226]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[304]), scm__rc.d2149[214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[307]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[308]), scm__rc.d2149[237]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[309]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[310]), scm__rc.d2149[4]);
  scm__rc.d2149[239] = Scm_MakeExtendedPair(scm__rc.d2149[237], SCM_OBJ(&scm__rc.d2150[304]), SCM_OBJ(&scm__rc.d2150[312]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[240]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[240]))[4] = scm__rc.d2149[216];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[240]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[240]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[240]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[240]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("weak-vector-set!")), SCM_OBJ(&libvecweak_vector_setX__STUB), 0);
  libvecweak_vector_setX__STUB.common.info = scm__rc.d2149[239];
  libvecweak_vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[240]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[249] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* SCM_UVECTOR_S8 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[249]), Scm_MakeInteger(SCM_UVECTOR_S8), SCM_BINDING_CONST);

  scm__rc.d2149[250] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* SCM_UVECTOR_U8 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[250]), Scm_MakeInteger(SCM_UVECTOR_U8), SCM_BINDING_CONST);

  scm__rc.d2149[251] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),TRUE); /* SCM_UVECTOR_S16 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[251]), Scm_MakeInteger(SCM_UVECTOR_S16), SCM_BINDING_CONST);

  scm__rc.d2149[252] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* SCM_UVECTOR_U16 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[252]), Scm_MakeInteger(SCM_UVECTOR_U16), SCM_BINDING_CONST);

  scm__rc.d2149[253] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* SCM_UVECTOR_S32 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[253]), Scm_MakeInteger(SCM_UVECTOR_S32), SCM_BINDING_CONST);

  scm__rc.d2149[254] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* SCM_UVECTOR_U32 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[254]), Scm_MakeInteger(SCM_UVECTOR_U32), SCM_BINDING_CONST);

  scm__rc.d2149[255] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* SCM_UVECTOR_S64 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[255]), Scm_MakeInteger(SCM_UVECTOR_S64), SCM_BINDING_CONST);

  scm__rc.d2149[256] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* SCM_UVECTOR_U64 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[256]), Scm_MakeInteger(SCM_UVECTOR_U64), SCM_BINDING_CONST);

  scm__rc.d2149[257] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* SCM_UVECTOR_F16 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[257]), Scm_MakeInteger(SCM_UVECTOR_F16), SCM_BINDING_CONST);

  scm__rc.d2149[258] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* SCM_UVECTOR_F32 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[258]), Scm_MakeInteger(SCM_UVECTOR_F32), SCM_BINDING_CONST);

  scm__rc.d2149[259] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* SCM_UVECTOR_F64 */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[259]), Scm_MakeInteger(SCM_UVECTOR_F64), SCM_BINDING_CONST);

  scm__rc.d2149[260] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* SCM_UVECTOR_GENERIC */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[260]), Scm_MakeInteger(SCM_UVECTOR_GENERIC), SCM_BINDING_CONST);

  scm__rc.d2149[261] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104])),TRUE); /* make-s8vector */
  scm__rc.d2149[262] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* length */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[313]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[314]), scm__rc.d2149[262]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[317]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[318]), scm__rc.d2149[261]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[319]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[320]), scm__rc.d2149[4]);
  scm__rc.d2149[263] = Scm_MakeExtendedPair(scm__rc.d2149[261], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[322]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[264]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[264]))[4] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[264]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[264]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[264]))[7] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-s8vector")), SCM_OBJ(&libvecmake_s8vector__STUB), 0);
  libvecmake_s8vector__STUB.common.info = scm__rc.d2149[263];
  libvecmake_s8vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[106])),TRUE); /* make-u8vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[325]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[326]), scm__rc.d2149[272]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[327]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[328]), scm__rc.d2149[4]);
  scm__rc.d2149[273] = Scm_MakeExtendedPair(scm__rc.d2149[272], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[330]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-u8vector")), SCM_OBJ(&libvecmake_u8vector__STUB), 0);
  libvecmake_u8vector__STUB.common.info = scm__rc.d2149[273];
  libvecmake_u8vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[274] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107])),TRUE); /* make-s16vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[333]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[334]), scm__rc.d2149[274]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[335]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[336]), scm__rc.d2149[4]);
  scm__rc.d2149[275] = Scm_MakeExtendedPair(scm__rc.d2149[274], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[338]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-s16vector")), SCM_OBJ(&libvecmake_s16vector__STUB), 0);
  libvecmake_s16vector__STUB.common.info = scm__rc.d2149[275];
  libvecmake_s16vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[276] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[108])),TRUE); /* make-u16vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[341]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[342]), scm__rc.d2149[276]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[343]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[344]), scm__rc.d2149[4]);
  scm__rc.d2149[277] = Scm_MakeExtendedPair(scm__rc.d2149[276], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[346]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-u16vector")), SCM_OBJ(&libvecmake_u16vector__STUB), 0);
  libvecmake_u16vector__STUB.common.info = scm__rc.d2149[277];
  libvecmake_u16vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[278] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[109])),TRUE); /* make-s32vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[349]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[350]), scm__rc.d2149[278]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[351]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[352]), scm__rc.d2149[4]);
  scm__rc.d2149[279] = Scm_MakeExtendedPair(scm__rc.d2149[278], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[354]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-s32vector")), SCM_OBJ(&libvecmake_s32vector__STUB), 0);
  libvecmake_s32vector__STUB.common.info = scm__rc.d2149[279];
  libvecmake_s32vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[280] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[110])),TRUE); /* make-u32vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[357]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[358]), scm__rc.d2149[280]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[359]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[360]), scm__rc.d2149[4]);
  scm__rc.d2149[281] = Scm_MakeExtendedPair(scm__rc.d2149[280], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[362]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-u32vector")), SCM_OBJ(&libvecmake_u32vector__STUB), 0);
  libvecmake_u32vector__STUB.common.info = scm__rc.d2149[281];
  libvecmake_u32vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[282] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[111])),TRUE); /* make-s64vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[365]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[366]), scm__rc.d2149[282]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[367]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[368]), scm__rc.d2149[4]);
  scm__rc.d2149[283] = Scm_MakeExtendedPair(scm__rc.d2149[282], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[370]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-s64vector")), SCM_OBJ(&libvecmake_s64vector__STUB), 0);
  libvecmake_s64vector__STUB.common.info = scm__rc.d2149[283];
  libvecmake_s64vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[284] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[112])),TRUE); /* make-u64vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[373]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[374]), scm__rc.d2149[284]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[375]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[376]), scm__rc.d2149[4]);
  scm__rc.d2149[285] = Scm_MakeExtendedPair(scm__rc.d2149[284], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[378]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-u64vector")), SCM_OBJ(&libvecmake_u64vector__STUB), 0);
  libvecmake_u64vector__STUB.common.info = scm__rc.d2149[285];
  libvecmake_u64vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[286] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[113])),TRUE); /* make-f16vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[381]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[382]), scm__rc.d2149[286]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[383]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[384]), scm__rc.d2149[4]);
  scm__rc.d2149[287] = Scm_MakeExtendedPair(scm__rc.d2149[286], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[386]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-f16vector")), SCM_OBJ(&libvecmake_f16vector__STUB), 0);
  libvecmake_f16vector__STUB.common.info = scm__rc.d2149[287];
  libvecmake_f16vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[288] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[114])),TRUE); /* make-f32vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[389]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[390]), scm__rc.d2149[288]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[391]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[392]), scm__rc.d2149[4]);
  scm__rc.d2149[289] = Scm_MakeExtendedPair(scm__rc.d2149[288], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[394]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-f32vector")), SCM_OBJ(&libvecmake_f32vector__STUB), 0);
  libvecmake_f32vector__STUB.common.info = scm__rc.d2149[289];
  libvecmake_f32vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[290] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[115])),TRUE); /* make-f64vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[397]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[398]), scm__rc.d2149[290]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[399]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[400]), scm__rc.d2149[4]);
  scm__rc.d2149[291] = Scm_MakeExtendedPair(scm__rc.d2149[290], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[402]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-f64vector")), SCM_OBJ(&libvecmake_f64vector__STUB), 0);
  libvecmake_f64vector__STUB.common.info = scm__rc.d2149[291];
  libvecmake_f64vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[292] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[116])),TRUE); /* make-c32vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[405]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[406]), scm__rc.d2149[292]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[407]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[408]), scm__rc.d2149[4]);
  scm__rc.d2149[293] = Scm_MakeExtendedPair(scm__rc.d2149[292], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[410]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-c32vector")), SCM_OBJ(&libvecmake_c32vector__STUB), 0);
  libvecmake_c32vector__STUB.common.info = scm__rc.d2149[293];
  libvecmake_c32vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[294] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[117])),TRUE); /* make-c64vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[413]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[414]), scm__rc.d2149[294]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[415]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[416]), scm__rc.d2149[4]);
  scm__rc.d2149[295] = Scm_MakeExtendedPair(scm__rc.d2149[294], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[418]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-c64vector")), SCM_OBJ(&libvecmake_c64vector__STUB), 0);
  libvecmake_c64vector__STUB.common.info = scm__rc.d2149[295];
  libvecmake_c64vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[296] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[118])),TRUE); /* make-c128vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[421]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[422]), scm__rc.d2149[296]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[423]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[424]), scm__rc.d2149[4]);
  scm__rc.d2149[297] = Scm_MakeExtendedPair(scm__rc.d2149[296], SCM_OBJ(&scm__rc.d2150[314]), SCM_OBJ(&scm__rc.d2150[426]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-c128vector")), SCM_OBJ(&libvecmake_c128vector__STUB), 0);
  libvecmake_c128vector__STUB.common.info = scm__rc.d2149[297];
  libvecmake_c128vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[298] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[119])),TRUE); /* s8vector-set! */
  scm__rc.d2149[299] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[120])),TRUE); /* clamp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[427]), scm__rc.d2149[299]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[428]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[429]), scm__rc.d2149[238]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[430]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[431]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[434]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[435]), scm__rc.d2149[298]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[436]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[437]), scm__rc.d2149[4]);
  scm__rc.d2149[300] = Scm_MakeExtendedPair(scm__rc.d2149[298], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[439]));
  scm__rc.d2149[301] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[121])),TRUE); /* <s8vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[4] = scm__rc.d2149[301];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s8vector-set!")), SCM_OBJ(&libvecs8vector_setX__STUB), 0);
  libvecs8vector_setX__STUB.common.info = scm__rc.d2149[300];
  libvecs8vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[302]);
  scm__rc.d2149[312] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[122])),TRUE); /* s8vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[440]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[441]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[444]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[445]), scm__rc.d2149[312]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[446]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[447]), scm__rc.d2149[4]);
  scm__rc.d2149[313] = Scm_MakeExtendedPair(scm__rc.d2149[312], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[449]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[4] = scm__rc.d2149[301];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s8vector-ref")), SCM_OBJ(&libvecs8vector_ref__STUB), 0);
  libvecs8vector_ref__STUB.common.info = scm__rc.d2149[313];
  libvecs8vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecs8vector_ref__STUB), SCM_PROCEDURE(&libvecs8vector_setX__STUB), TRUE);
  scm__rc.d2149[323] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[123])),TRUE); /* u8vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[452]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[453]), scm__rc.d2149[323]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[454]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[455]), scm__rc.d2149[4]);
  scm__rc.d2149[324] = Scm_MakeExtendedPair(scm__rc.d2149[323], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[457]));
  scm__rc.d2149[325] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[124])),TRUE); /* <u8vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[326]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[326]))[4] = scm__rc.d2149[325];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[326]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[326]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[326]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[326]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[326]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u8vector-set!")), SCM_OBJ(&libvecu8vector_setX__STUB), 0);
  libvecu8vector_setX__STUB.common.info = scm__rc.d2149[324];
  libvecu8vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[326]);
  scm__rc.d2149[336] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[125])),TRUE); /* u8vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[460]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[461]), scm__rc.d2149[336]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[462]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[463]), scm__rc.d2149[4]);
  scm__rc.d2149[337] = Scm_MakeExtendedPair(scm__rc.d2149[336], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[465]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[338]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[338]))[4] = scm__rc.d2149[325];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[338]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[338]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[338]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[338]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u8vector-ref")), SCM_OBJ(&libvecu8vector_ref__STUB), 0);
  libvecu8vector_ref__STUB.common.info = scm__rc.d2149[337];
  libvecu8vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[338]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecu8vector_ref__STUB), SCM_PROCEDURE(&libvecu8vector_setX__STUB), TRUE);
  scm__rc.d2149[347] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[126])),TRUE); /* s16vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[468]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[469]), scm__rc.d2149[347]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[470]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[471]), scm__rc.d2149[4]);
  scm__rc.d2149[348] = Scm_MakeExtendedPair(scm__rc.d2149[347], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[473]));
  scm__rc.d2149[349] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[127])),TRUE); /* <s16vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[350]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[350]))[4] = scm__rc.d2149[349];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[350]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[350]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[350]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[350]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[350]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s16vector-set!")), SCM_OBJ(&libvecs16vector_setX__STUB), 0);
  libvecs16vector_setX__STUB.common.info = scm__rc.d2149[348];
  libvecs16vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[350]);
  scm__rc.d2149[360] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[128])),TRUE); /* s16vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[476]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[477]), scm__rc.d2149[360]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[478]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[479]), scm__rc.d2149[4]);
  scm__rc.d2149[361] = Scm_MakeExtendedPair(scm__rc.d2149[360], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[481]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[362]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[362]))[4] = scm__rc.d2149[349];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[362]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[362]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[362]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[362]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s16vector-ref")), SCM_OBJ(&libvecs16vector_ref__STUB), 0);
  libvecs16vector_ref__STUB.common.info = scm__rc.d2149[361];
  libvecs16vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[362]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecs16vector_ref__STUB), SCM_PROCEDURE(&libvecs16vector_setX__STUB), TRUE);
  scm__rc.d2149[371] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[129])),TRUE); /* u16vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[484]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[485]), scm__rc.d2149[371]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[486]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[487]), scm__rc.d2149[4]);
  scm__rc.d2149[372] = Scm_MakeExtendedPair(scm__rc.d2149[371], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[489]));
  scm__rc.d2149[373] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[130])),TRUE); /* <u16vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[374]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[374]))[4] = scm__rc.d2149[373];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[374]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[374]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[374]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[374]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[374]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u16vector-set!")), SCM_OBJ(&libvecu16vector_setX__STUB), 0);
  libvecu16vector_setX__STUB.common.info = scm__rc.d2149[372];
  libvecu16vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[374]);
  scm__rc.d2149[384] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[131])),TRUE); /* u16vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[492]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[493]), scm__rc.d2149[384]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[494]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[495]), scm__rc.d2149[4]);
  scm__rc.d2149[385] = Scm_MakeExtendedPair(scm__rc.d2149[384], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[497]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[4] = scm__rc.d2149[373];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u16vector-ref")), SCM_OBJ(&libvecu16vector_ref__STUB), 0);
  libvecu16vector_ref__STUB.common.info = scm__rc.d2149[385];
  libvecu16vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[386]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecu16vector_ref__STUB), SCM_PROCEDURE(&libvecu16vector_setX__STUB), TRUE);
  scm__rc.d2149[395] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[132])),TRUE); /* s32vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[500]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[501]), scm__rc.d2149[395]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[502]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[503]), scm__rc.d2149[4]);
  scm__rc.d2149[396] = Scm_MakeExtendedPair(scm__rc.d2149[395], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[505]));
  scm__rc.d2149[397] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[133])),TRUE); /* <s32vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[4] = scm__rc.d2149[397];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s32vector-set!")), SCM_OBJ(&libvecs32vector_setX__STUB), 0);
  libvecs32vector_setX__STUB.common.info = scm__rc.d2149[396];
  libvecs32vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[398]);
  scm__rc.d2149[408] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[134])),TRUE); /* s32vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[508]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[509]), scm__rc.d2149[408]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[510]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[511]), scm__rc.d2149[4]);
  scm__rc.d2149[409] = Scm_MakeExtendedPair(scm__rc.d2149[408], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[513]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[4] = scm__rc.d2149[397];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s32vector-ref")), SCM_OBJ(&libvecs32vector_ref__STUB), 0);
  libvecs32vector_ref__STUB.common.info = scm__rc.d2149[409];
  libvecs32vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[410]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecs32vector_ref__STUB), SCM_PROCEDURE(&libvecs32vector_setX__STUB), TRUE);
  scm__rc.d2149[419] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[135])),TRUE); /* u32vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[516]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[517]), scm__rc.d2149[419]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[518]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[519]), scm__rc.d2149[4]);
  scm__rc.d2149[420] = Scm_MakeExtendedPair(scm__rc.d2149[419], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[521]));
  scm__rc.d2149[421] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[136])),TRUE); /* <u32vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[422]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[422]))[4] = scm__rc.d2149[421];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[422]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[422]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[422]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[422]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[422]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u32vector-set!")), SCM_OBJ(&libvecu32vector_setX__STUB), 0);
  libvecu32vector_setX__STUB.common.info = scm__rc.d2149[420];
  libvecu32vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[422]);
  scm__rc.d2149[432] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[137])),TRUE); /* u32vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[524]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[525]), scm__rc.d2149[432]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[526]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[527]), scm__rc.d2149[4]);
  scm__rc.d2149[433] = Scm_MakeExtendedPair(scm__rc.d2149[432], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[529]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[434]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[434]))[4] = scm__rc.d2149[421];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[434]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[434]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[434]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[434]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u32vector-ref")), SCM_OBJ(&libvecu32vector_ref__STUB), 0);
  libvecu32vector_ref__STUB.common.info = scm__rc.d2149[433];
  libvecu32vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[434]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecu32vector_ref__STUB), SCM_PROCEDURE(&libvecu32vector_setX__STUB), TRUE);
  scm__rc.d2149[443] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[138])),TRUE); /* s64vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[532]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[533]), scm__rc.d2149[443]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[534]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[535]), scm__rc.d2149[4]);
  scm__rc.d2149[444] = Scm_MakeExtendedPair(scm__rc.d2149[443], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[537]));
  scm__rc.d2149[445] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[139])),TRUE); /* <s64vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[446]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[446]))[4] = scm__rc.d2149[445];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[446]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[446]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[446]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[446]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[446]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s64vector-set!")), SCM_OBJ(&libvecs64vector_setX__STUB), 0);
  libvecs64vector_setX__STUB.common.info = scm__rc.d2149[444];
  libvecs64vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[446]);
  scm__rc.d2149[456] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[140])),TRUE); /* s64vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[540]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[541]), scm__rc.d2149[456]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[542]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[543]), scm__rc.d2149[4]);
  scm__rc.d2149[457] = Scm_MakeExtendedPair(scm__rc.d2149[456], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[545]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[458]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[458]))[4] = scm__rc.d2149[445];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[458]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[458]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[458]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[458]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s64vector-ref")), SCM_OBJ(&libvecs64vector_ref__STUB), 0);
  libvecs64vector_ref__STUB.common.info = scm__rc.d2149[457];
  libvecs64vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[458]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecs64vector_ref__STUB), SCM_PROCEDURE(&libvecs64vector_setX__STUB), TRUE);
  scm__rc.d2149[467] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[141])),TRUE); /* u64vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[548]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[549]), scm__rc.d2149[467]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[550]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[551]), scm__rc.d2149[4]);
  scm__rc.d2149[468] = Scm_MakeExtendedPair(scm__rc.d2149[467], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[553]));
  scm__rc.d2149[469] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[142])),TRUE); /* <u64vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[4] = scm__rc.d2149[469];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u64vector-set!")), SCM_OBJ(&libvecu64vector_setX__STUB), 0);
  libvecu64vector_setX__STUB.common.info = scm__rc.d2149[468];
  libvecu64vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[470]);
  scm__rc.d2149[480] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[143])),TRUE); /* u64vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[556]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[557]), scm__rc.d2149[480]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[558]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[559]), scm__rc.d2149[4]);
  scm__rc.d2149[481] = Scm_MakeExtendedPair(scm__rc.d2149[480], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[561]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[482]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[482]))[4] = scm__rc.d2149[469];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[482]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[482]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[482]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[482]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u64vector-ref")), SCM_OBJ(&libvecu64vector_ref__STUB), 0);
  libvecu64vector_ref__STUB.common.info = scm__rc.d2149[481];
  libvecu64vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[482]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecu64vector_ref__STUB), SCM_PROCEDURE(&libvecu64vector_setX__STUB), TRUE);
  scm__rc.d2149[491] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[144])),TRUE); /* f16vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[564]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[565]), scm__rc.d2149[491]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[566]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[567]), scm__rc.d2149[4]);
  scm__rc.d2149[492] = Scm_MakeExtendedPair(scm__rc.d2149[491], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[569]));
  scm__rc.d2149[493] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[145])),TRUE); /* <f16vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[494]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[494]))[4] = scm__rc.d2149[493];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[494]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[494]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[494]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[494]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[494]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("f16vector-set!")), SCM_OBJ(&libvecf16vector_setX__STUB), 0);
  libvecf16vector_setX__STUB.common.info = scm__rc.d2149[492];
  libvecf16vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[494]);
  scm__rc.d2149[504] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[146])),TRUE); /* f16vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[572]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[573]), scm__rc.d2149[504]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[574]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[575]), scm__rc.d2149[4]);
  scm__rc.d2149[505] = Scm_MakeExtendedPair(scm__rc.d2149[504], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[577]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[506]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[506]))[4] = scm__rc.d2149[493];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[506]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[506]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[506]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[506]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("f16vector-ref")), SCM_OBJ(&libvecf16vector_ref__STUB), 0);
  libvecf16vector_ref__STUB.common.info = scm__rc.d2149[505];
  libvecf16vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[506]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecf16vector_ref__STUB), SCM_PROCEDURE(&libvecf16vector_setX__STUB), TRUE);
  scm__rc.d2149[515] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[147])),TRUE); /* f32vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[580]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[581]), scm__rc.d2149[515]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[582]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[583]), scm__rc.d2149[4]);
  scm__rc.d2149[516] = Scm_MakeExtendedPair(scm__rc.d2149[515], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[585]));
  scm__rc.d2149[517] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[148])),TRUE); /* <f32vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[518]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[518]))[4] = scm__rc.d2149[517];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[518]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[518]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[518]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[518]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[518]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("f32vector-set!")), SCM_OBJ(&libvecf32vector_setX__STUB), 0);
  libvecf32vector_setX__STUB.common.info = scm__rc.d2149[516];
  libvecf32vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[518]);
  scm__rc.d2149[528] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[149])),TRUE); /* f32vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[588]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[589]), scm__rc.d2149[528]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[590]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[591]), scm__rc.d2149[4]);
  scm__rc.d2149[529] = Scm_MakeExtendedPair(scm__rc.d2149[528], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[593]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[530]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[530]))[4] = scm__rc.d2149[517];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[530]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[530]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[530]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[530]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("f32vector-ref")), SCM_OBJ(&libvecf32vector_ref__STUB), 0);
  libvecf32vector_ref__STUB.common.info = scm__rc.d2149[529];
  libvecf32vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[530]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecf32vector_ref__STUB), SCM_PROCEDURE(&libvecf32vector_setX__STUB), TRUE);
  scm__rc.d2149[539] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[150])),TRUE); /* f64vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[596]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[597]), scm__rc.d2149[539]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[598]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[599]), scm__rc.d2149[4]);
  scm__rc.d2149[540] = Scm_MakeExtendedPair(scm__rc.d2149[539], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[601]));
  scm__rc.d2149[541] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[151])),TRUE); /* <f64vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[542]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[542]))[4] = scm__rc.d2149[541];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[542]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[542]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[542]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[542]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[542]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("f64vector-set!")), SCM_OBJ(&libvecf64vector_setX__STUB), 0);
  libvecf64vector_setX__STUB.common.info = scm__rc.d2149[540];
  libvecf64vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[542]);
  scm__rc.d2149[552] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[152])),TRUE); /* f64vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[604]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[605]), scm__rc.d2149[552]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[606]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[607]), scm__rc.d2149[4]);
  scm__rc.d2149[553] = Scm_MakeExtendedPair(scm__rc.d2149[552], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[609]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[554]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[554]))[4] = scm__rc.d2149[541];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[554]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[554]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[554]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[554]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("f64vector-ref")), SCM_OBJ(&libvecf64vector_ref__STUB), 0);
  libvecf64vector_ref__STUB.common.info = scm__rc.d2149[553];
  libvecf64vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[554]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecf64vector_ref__STUB), SCM_PROCEDURE(&libvecf64vector_setX__STUB), TRUE);
  scm__rc.d2149[563] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[153])),TRUE); /* c32vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[612]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[613]), scm__rc.d2149[563]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[614]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[615]), scm__rc.d2149[4]);
  scm__rc.d2149[564] = Scm_MakeExtendedPair(scm__rc.d2149[563], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[617]));
  scm__rc.d2149[565] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[154])),TRUE); /* <c32vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[566]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[566]))[4] = scm__rc.d2149[565];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[566]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[566]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[566]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[566]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[566]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("c32vector-set!")), SCM_OBJ(&libvecc32vector_setX__STUB), 0);
  libvecc32vector_setX__STUB.common.info = scm__rc.d2149[564];
  libvecc32vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[566]);
  scm__rc.d2149[576] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[155])),TRUE); /* c32vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[620]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[621]), scm__rc.d2149[576]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[622]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[623]), scm__rc.d2149[4]);
  scm__rc.d2149[577] = Scm_MakeExtendedPair(scm__rc.d2149[576], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[625]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[578]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[578]))[4] = scm__rc.d2149[565];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[578]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[578]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[578]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[578]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("c32vector-ref")), SCM_OBJ(&libvecc32vector_ref__STUB), 0);
  libvecc32vector_ref__STUB.common.info = scm__rc.d2149[577];
  libvecc32vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[578]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecc32vector_ref__STUB), SCM_PROCEDURE(&libvecc32vector_setX__STUB), TRUE);
  scm__rc.d2149[587] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[156])),TRUE); /* c64vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[628]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[629]), scm__rc.d2149[587]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[630]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[631]), scm__rc.d2149[4]);
  scm__rc.d2149[588] = Scm_MakeExtendedPair(scm__rc.d2149[587], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[633]));
  scm__rc.d2149[589] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[157])),TRUE); /* <c64vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[590]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[590]))[4] = scm__rc.d2149[589];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[590]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[590]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[590]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[590]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[590]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("c64vector-set!")), SCM_OBJ(&libvecc64vector_setX__STUB), 0);
  libvecc64vector_setX__STUB.common.info = scm__rc.d2149[588];
  libvecc64vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[590]);
  scm__rc.d2149[600] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[158])),TRUE); /* c64vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[636]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[637]), scm__rc.d2149[600]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[638]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[639]), scm__rc.d2149[4]);
  scm__rc.d2149[601] = Scm_MakeExtendedPair(scm__rc.d2149[600], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[641]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[602]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[602]))[4] = scm__rc.d2149[589];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[602]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[602]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[602]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[602]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("c64vector-ref")), SCM_OBJ(&libvecc64vector_ref__STUB), 0);
  libvecc64vector_ref__STUB.common.info = scm__rc.d2149[601];
  libvecc64vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[602]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecc64vector_ref__STUB), SCM_PROCEDURE(&libvecc64vector_setX__STUB), TRUE);
  scm__rc.d2149[611] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[159])),TRUE); /* c128vector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[644]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[645]), scm__rc.d2149[611]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[646]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[647]), scm__rc.d2149[4]);
  scm__rc.d2149[612] = Scm_MakeExtendedPair(scm__rc.d2149[611], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[649]));
  scm__rc.d2149[613] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[160])),TRUE); /* <c128vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[614]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[614]))[4] = scm__rc.d2149[613];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[614]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[614]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[614]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[614]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[614]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("c128vector-set!")), SCM_OBJ(&libvecc128vector_setX__STUB), 0);
  libvecc128vector_setX__STUB.common.info = scm__rc.d2149[612];
  libvecc128vector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[614]);
  scm__rc.d2149[624] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[161])),TRUE); /* c128vector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[652]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[653]), scm__rc.d2149[624]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[654]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[655]), scm__rc.d2149[4]);
  scm__rc.d2149[625] = Scm_MakeExtendedPair(scm__rc.d2149[624], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[657]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[626]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[626]))[4] = scm__rc.d2149[613];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[626]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[626]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[626]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[626]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("c128vector-ref")), SCM_OBJ(&libvecc128vector_ref__STUB), 0);
  libvecc128vector_ref__STUB.common.info = scm__rc.d2149[625];
  libvecc128vector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[626]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecc128vector_ref__STUB), SCM_PROCEDURE(&libvecc128vector_setX__STUB), TRUE);
  scm__rc.d2149[635] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[162])),TRUE); /* uvector-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[660]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[661]), scm__rc.d2149[635]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[662]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[663]), scm__rc.d2149[4]);
  scm__rc.d2149[636] = Scm_MakeExtendedPair(scm__rc.d2149[635], SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[665]));
  scm__rc.d2149[637] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[163])),TRUE); /* <uvector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[638]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[638]))[4] = scm__rc.d2149[637];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[638]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[638]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[638]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[638]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[638]))[9] = scm__rc.d2149[57];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("uvector-set!")), SCM_OBJ(&libvecuvector_setX__STUB), 0);
  libvecuvector_setX__STUB.common.info = scm__rc.d2149[636];
  libvecuvector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[638]);
  scm__rc.d2149[648] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[164])),TRUE); /* uvector-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[668]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[669]), scm__rc.d2149[648]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[670]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[671]), scm__rc.d2149[4]);
  scm__rc.d2149[649] = Scm_MakeExtendedPair(scm__rc.d2149[648], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[673]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[650]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[650]))[4] = scm__rc.d2149[637];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[650]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[650]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[650]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[650]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("uvector-ref")), SCM_OBJ(&libvecuvector_ref__STUB), 0);
  libvecuvector_ref__STUB.common.info = scm__rc.d2149[649];
  libvecuvector_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[650]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecuvector_ref__STUB), SCM_PROCEDURE(&libvecuvector_setX__STUB), TRUE);
  scm__rc.d2149[659] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[165])),TRUE); /* uvector-length */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[676]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[677]), scm__rc.d2149[659]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[678]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[679]), scm__rc.d2149[4]);
  scm__rc.d2149[660] = Scm_MakeExtendedPair(scm__rc.d2149[659], SCM_OBJ(&scm__rc.d2150[119]), SCM_OBJ(&scm__rc.d2150[681]));
  scm__rc.d2149[661] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[166])),TRUE); /* <ulong> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[662]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[662]))[4] = scm__rc.d2149[637];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[662]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[662]))[6] = scm__rc.d2149[661];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("uvector-length")), SCM_OBJ(&libvecuvector_length__STUB), SCM_BINDING_INLINABLE);
  libvecuvector_length__STUB.common.info = scm__rc.d2149[660];
  libvecuvector_length__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[662]);
  scm__rc.d2149[669] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[167])),TRUE); /* uvector-immutable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[684]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[685]), scm__rc.d2149[669]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[686]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[687]), scm__rc.d2149[4]);
  scm__rc.d2149[670] = Scm_MakeExtendedPair(scm__rc.d2149[669], SCM_OBJ(&scm__rc.d2150[119]), SCM_OBJ(&scm__rc.d2150[689]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[671]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[671]))[4] = scm__rc.d2149[637];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[671]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[671]))[6] = scm__rc.d2149[20];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("uvector-immutable?")), SCM_OBJ(&libvecuvector_immutableP__STUB), 0);
  libvecuvector_immutableP__STUB.common.info = scm__rc.d2149[670];
  libvecuvector_immutableP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[671]);
  scm__rc.d2149[678] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[168])),TRUE); /* uvector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[692]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[693]), scm__rc.d2149[678]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[694]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[695]), scm__rc.d2149[4]);
  scm__rc.d2149[679] = Scm_MakeExtendedPair(scm__rc.d2149[678], SCM_OBJ(&scm__rc.d2150[11]), SCM_OBJ(&scm__rc.d2150[697]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[680]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[680]))[4] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[680]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[680]))[6] = scm__rc.d2149[20];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("uvector?")), SCM_OBJ(&libvecuvectorP__STUB), SCM_BINDING_INLINABLE);
  libvecuvectorP__STUB.common.info = scm__rc.d2149[679];
  libvecuvectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[687] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[169])),TRUE); /* u8vector? */
  scm__rc.d2149[688] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[170])),TRUE); /* x */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[698]), scm__rc.d2149[688]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[701]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[702]), scm__rc.d2149[687]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[703]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[704]), scm__rc.d2149[4]);
  scm__rc.d2149[689] = Scm_MakeExtendedPair(scm__rc.d2149[687], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[706]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u8vector?")), SCM_OBJ(&libvecu8vectorP__STUB), 0);
  libvecu8vectorP__STUB.common.info = scm__rc.d2149[689];
  libvecu8vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[690] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[171])),TRUE); /* s8vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[709]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[710]), scm__rc.d2149[690]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[711]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[712]), scm__rc.d2149[4]);
  scm__rc.d2149[691] = Scm_MakeExtendedPair(scm__rc.d2149[690], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[714]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s8vector?")), SCM_OBJ(&libvecs8vectorP__STUB), 0);
  libvecs8vectorP__STUB.common.info = scm__rc.d2149[691];
  libvecs8vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[692] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[172])),TRUE); /* u16vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[717]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[718]), scm__rc.d2149[692]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[719]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[720]), scm__rc.d2149[4]);
  scm__rc.d2149[693] = Scm_MakeExtendedPair(scm__rc.d2149[692], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[722]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u16vector?")), SCM_OBJ(&libvecu16vectorP__STUB), 0);
  libvecu16vectorP__STUB.common.info = scm__rc.d2149[693];
  libvecu16vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[694] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[173])),TRUE); /* s16vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[725]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[726]), scm__rc.d2149[694]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[727]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[728]), scm__rc.d2149[4]);
  scm__rc.d2149[695] = Scm_MakeExtendedPair(scm__rc.d2149[694], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[730]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s16vector?")), SCM_OBJ(&libvecs16vectorP__STUB), 0);
  libvecs16vectorP__STUB.common.info = scm__rc.d2149[695];
  libvecs16vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[696] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[174])),TRUE); /* u32vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[733]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[734]), scm__rc.d2149[696]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[735]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[736]), scm__rc.d2149[4]);
  scm__rc.d2149[697] = Scm_MakeExtendedPair(scm__rc.d2149[696], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[738]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u32vector?")), SCM_OBJ(&libvecu32vectorP__STUB), 0);
  libvecu32vectorP__STUB.common.info = scm__rc.d2149[697];
  libvecu32vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[698] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[175])),TRUE); /* s32vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[741]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[742]), scm__rc.d2149[698]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[743]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[744]), scm__rc.d2149[4]);
  scm__rc.d2149[699] = Scm_MakeExtendedPair(scm__rc.d2149[698], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[746]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s32vector?")), SCM_OBJ(&libvecs32vectorP__STUB), 0);
  libvecs32vectorP__STUB.common.info = scm__rc.d2149[699];
  libvecs32vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[700] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[176])),TRUE); /* u64vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[749]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[750]), scm__rc.d2149[700]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[751]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[752]), scm__rc.d2149[4]);
  scm__rc.d2149[701] = Scm_MakeExtendedPair(scm__rc.d2149[700], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[754]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u64vector?")), SCM_OBJ(&libvecu64vectorP__STUB), 0);
  libvecu64vectorP__STUB.common.info = scm__rc.d2149[701];
  libvecu64vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[702] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[177])),TRUE); /* s64vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[757]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[758]), scm__rc.d2149[702]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[759]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[760]), scm__rc.d2149[4]);
  scm__rc.d2149[703] = Scm_MakeExtendedPair(scm__rc.d2149[702], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[762]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s64vector?")), SCM_OBJ(&libvecs64vectorP__STUB), 0);
  libvecs64vectorP__STUB.common.info = scm__rc.d2149[703];
  libvecs64vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[704] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[178])),TRUE); /* f16vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[765]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[766]), scm__rc.d2149[704]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[767]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[768]), scm__rc.d2149[4]);
  scm__rc.d2149[705] = Scm_MakeExtendedPair(scm__rc.d2149[704], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[770]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("f16vector?")), SCM_OBJ(&libvecf16vectorP__STUB), 0);
  libvecf16vectorP__STUB.common.info = scm__rc.d2149[705];
  libvecf16vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[706] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[179])),TRUE); /* f32vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[773]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[774]), scm__rc.d2149[706]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[775]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[776]), scm__rc.d2149[4]);
  scm__rc.d2149[707] = Scm_MakeExtendedPair(scm__rc.d2149[706], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[778]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("f32vector?")), SCM_OBJ(&libvecf32vectorP__STUB), 0);
  libvecf32vectorP__STUB.common.info = scm__rc.d2149[707];
  libvecf32vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[708] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[180])),TRUE); /* f64vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[781]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[782]), scm__rc.d2149[708]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[783]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[784]), scm__rc.d2149[4]);
  scm__rc.d2149[709] = Scm_MakeExtendedPair(scm__rc.d2149[708], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[786]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("f64vector?")), SCM_OBJ(&libvecf64vectorP__STUB), 0);
  libvecf64vectorP__STUB.common.info = scm__rc.d2149[709];
  libvecf64vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[710] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[181])),TRUE); /* c32vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[789]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[790]), scm__rc.d2149[710]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[791]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[792]), scm__rc.d2149[4]);
  scm__rc.d2149[711] = Scm_MakeExtendedPair(scm__rc.d2149[710], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[794]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("c32vector?")), SCM_OBJ(&libvecc32vectorP__STUB), 0);
  libvecc32vectorP__STUB.common.info = scm__rc.d2149[711];
  libvecc32vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[712] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[182])),TRUE); /* c64vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[797]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[798]), scm__rc.d2149[712]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[799]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[800]), scm__rc.d2149[4]);
  scm__rc.d2149[713] = Scm_MakeExtendedPair(scm__rc.d2149[712], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[802]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("c64vector?")), SCM_OBJ(&libvecc64vectorP__STUB), 0);
  libvecc64vectorP__STUB.common.info = scm__rc.d2149[713];
  libvecc64vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[714] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[183])),TRUE); /* c128vector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[805]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[806]), scm__rc.d2149[714]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[807]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[808]), scm__rc.d2149[4]);
  scm__rc.d2149[715] = Scm_MakeExtendedPair(scm__rc.d2149[714], SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[810]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("c128vector?")), SCM_OBJ(&libvecc128vectorP__STUB), 0);
  libvecc128vectorP__STUB.common.info = scm__rc.d2149[715];
  libvecc128vectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[716] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[184])),TRUE); /* make-view-uvector */
  scm__rc.d2149[717] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[185])),TRUE); /* mem */
  scm__rc.d2149[718] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[186])),TRUE); /* klass */
  scm__rc.d2149[719] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[187])),TRUE); /* offset */
  scm__rc.d2149[720] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[188])),TRUE); /* immutable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[811]), scm__rc.d2149[720]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[812]), scm__rc.d2149[719]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[813]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[814]), scm__rc.d2149[262]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[815]), scm__rc.d2149[718]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[816]), scm__rc.d2149[717]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[819]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[820]), scm__rc.d2149[716]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[821]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[822]), scm__rc.d2149[4]);
  scm__rc.d2149[721] = Scm_MakeExtendedPair(scm__rc.d2149[716], SCM_OBJ(&scm__rc.d2150[816]), SCM_OBJ(&scm__rc.d2150[824]));
  scm__rc.d2149[722] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[189])),TRUE); /* <class> */
  scm__rc.d2149[723] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[190])),TRUE); /* <integer>? */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[724]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[724]))[4] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[724]))[5] = scm__rc.d2149[722];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[724]))[6] = scm__rc.d2149[723];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[724]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[724]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[724]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-view-uvector")), SCM_OBJ(&libvecmake_view_uvector__STUB), 0);
  libvecmake_view_uvector__STUB.common.info = scm__rc.d2149[721];
  libvecmake_view_uvector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[724]);
  scm__rc.d2149[734] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[191])),TRUE); /* string->s8vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[825]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[826]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[827]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[828]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[831]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[832]), scm__rc.d2149[734]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[833]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[834]), scm__rc.d2149[4]);
  scm__rc.d2149[735] = Scm_MakeExtendedPair(scm__rc.d2149[734], SCM_OBJ(&scm__rc.d2150[828]), SCM_OBJ(&scm__rc.d2150[836]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[736]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[736]))[4] = scm__rc.d2149[178];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[736]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[736]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[736]))[7] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->s8vector")), SCM_OBJ(&libvecstring_TOs8vector__STUB), 0);
  libvecstring_TOs8vector__STUB.common.info = scm__rc.d2149[735];
  libvecstring_TOs8vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[736]);
  scm__rc.d2149[744] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[192])),TRUE); /* string->u8vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[839]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[840]), scm__rc.d2149[744]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[841]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[842]), scm__rc.d2149[4]);
  scm__rc.d2149[745] = Scm_MakeExtendedPair(scm__rc.d2149[744], SCM_OBJ(&scm__rc.d2150[828]), SCM_OBJ(&scm__rc.d2150[844]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->u8vector")), SCM_OBJ(&libvecstring_TOu8vector__STUB), 0);
  libvecstring_TOu8vector__STUB.common.info = scm__rc.d2149[745];
  libvecstring_TOu8vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[736]);
  scm__rc.d2149[746] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[193])),TRUE); /* string->s8vector! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[845]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[846]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[847]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[850]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[851]), scm__rc.d2149[746]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[852]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[853]), scm__rc.d2149[4]);
  scm__rc.d2149[747] = Scm_MakeExtendedPair(scm__rc.d2149[746], SCM_OBJ(&scm__rc.d2150[847]), SCM_OBJ(&scm__rc.d2150[855]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[748]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[748]))[4] = scm__rc.d2149[301];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[748]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[748]))[6] = scm__rc.d2149[178];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[748]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[748]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[748]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->s8vector!")), SCM_OBJ(&libvecstring_TOs8vectorX__STUB), 0);
  libvecstring_TOs8vectorX__STUB.common.info = scm__rc.d2149[747];
  libvecstring_TOs8vectorX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[748]);
  scm__rc.d2149[758] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[194])),TRUE); /* string->u8vector! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[858]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[859]), scm__rc.d2149[758]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[860]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[861]), scm__rc.d2149[4]);
  scm__rc.d2149[759] = Scm_MakeExtendedPair(scm__rc.d2149[758], SCM_OBJ(&scm__rc.d2150[847]), SCM_OBJ(&scm__rc.d2150[863]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[760]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[760]))[4] = scm__rc.d2149[325];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[760]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[760]))[6] = scm__rc.d2149[178];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[760]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[760]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[760]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->u8vector!")), SCM_OBJ(&libvecstring_TOu8vectorX__STUB), 0);
  libvecstring_TOu8vectorX__STUB.common.info = scm__rc.d2149[759];
  libvecstring_TOu8vectorX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[760]);
  scm__rc.d2149[770] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[195])),TRUE); /* s8vector->string */
  scm__rc.d2149[771] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[196])),TRUE); /* terminator */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[864]), scm__rc.d2149[771]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[865]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[866]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[867]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[868]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[871]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[872]), scm__rc.d2149[770]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[873]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[874]), scm__rc.d2149[4]);
  scm__rc.d2149[772] = Scm_MakeExtendedPair(scm__rc.d2149[770], SCM_OBJ(&scm__rc.d2150[868]), SCM_OBJ(&scm__rc.d2150[876]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[773]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[773]))[4] = scm__rc.d2149[301];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[773]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[773]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[773]))[7] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s8vector->string")), SCM_OBJ(&libvecs8vector_TOstring__STUB), 0);
  libvecs8vector_TOstring__STUB.common.info = scm__rc.d2149[772];
  libvecs8vector_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[773]);
  scm__rc.d2149[781] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[197])),TRUE); /* u8vector->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[879]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[880]), scm__rc.d2149[781]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[881]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[882]), scm__rc.d2149[4]);
  scm__rc.d2149[782] = Scm_MakeExtendedPair(scm__rc.d2149[781], SCM_OBJ(&scm__rc.d2150[868]), SCM_OBJ(&scm__rc.d2150[884]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[4] = scm__rc.d2149[325];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[7] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u8vector->string")), SCM_OBJ(&libvecu8vector_TOstring__STUB), 0);
  libvecu8vector_TOstring__STUB.common.info = scm__rc.d2149[782];
  libvecu8vector_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[783]);
  scm__rc.d2149[791] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[198])),TRUE); /* string->s32vector */
  scm__rc.d2149[792] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[199])),TRUE); /* endian */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[885]), scm__rc.d2149[792]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[886]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[887]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[888]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[889]), scm__rc.d2149[109]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[892]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[893]), scm__rc.d2149[791]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[894]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[895]), scm__rc.d2149[4]);
  scm__rc.d2149[793] = Scm_MakeExtendedPair(scm__rc.d2149[791], SCM_OBJ(&scm__rc.d2150[889]), SCM_OBJ(&scm__rc.d2150[897]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->s32vector")), SCM_OBJ(&libvecstring_TOs32vector__STUB), 0);
  libvecstring_TOs32vector__STUB.common.info = scm__rc.d2149[793];
  libvecstring_TOs32vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[736]);
  scm__rc.d2149[794] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[200])),TRUE); /* string->u32vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[900]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[901]), scm__rc.d2149[794]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[902]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[903]), scm__rc.d2149[4]);
  scm__rc.d2149[795] = Scm_MakeExtendedPair(scm__rc.d2149[794], SCM_OBJ(&scm__rc.d2150[889]), SCM_OBJ(&scm__rc.d2150[905]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->u32vector")), SCM_OBJ(&libvecstring_TOu32vector__STUB), 0);
  libvecstring_TOu32vector__STUB.common.info = scm__rc.d2149[795];
  libvecstring_TOu32vector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[736]);
  scm__rc.d2149[796] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[201])),TRUE); /* string->s32vector! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[906]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[907]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[910]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[911]), scm__rc.d2149[796]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[912]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[913]), scm__rc.d2149[4]);
  scm__rc.d2149[797] = Scm_MakeExtendedPair(scm__rc.d2149[796], SCM_OBJ(&scm__rc.d2150[907]), SCM_OBJ(&scm__rc.d2150[915]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[798]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[798]))[4] = scm__rc.d2149[397];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[798]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[798]))[6] = scm__rc.d2149[178];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[798]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[798]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[798]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->s32vector!")), SCM_OBJ(&libvecstring_TOs32vectorX__STUB), 0);
  libvecstring_TOs32vectorX__STUB.common.info = scm__rc.d2149[797];
  libvecstring_TOs32vectorX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[798]);
  scm__rc.d2149[808] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[202])),TRUE); /* string->u32vector! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[918]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[919]), scm__rc.d2149[808]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[920]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[921]), scm__rc.d2149[4]);
  scm__rc.d2149[809] = Scm_MakeExtendedPair(scm__rc.d2149[808], SCM_OBJ(&scm__rc.d2150[907]), SCM_OBJ(&scm__rc.d2150[923]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[4] = scm__rc.d2149[421];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[6] = scm__rc.d2149[178];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->u32vector!")), SCM_OBJ(&libvecstring_TOu32vectorX__STUB), 0);
  libvecstring_TOu32vectorX__STUB.common.info = scm__rc.d2149[809];
  libvecstring_TOu32vectorX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[810]);
  scm__rc.d2149[820] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[203])),TRUE); /* s32vector->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[924]), scm__rc.d2149[771]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[925]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[926]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[927]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[928]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[931]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[932]), scm__rc.d2149[820]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[933]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[934]), scm__rc.d2149[4]);
  scm__rc.d2149[821] = Scm_MakeExtendedPair(scm__rc.d2149[820], SCM_OBJ(&scm__rc.d2150[928]), SCM_OBJ(&scm__rc.d2150[936]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[822]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[822]))[4] = scm__rc.d2149[397];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[822]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[822]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[822]))[7] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("s32vector->string")), SCM_OBJ(&libvecs32vector_TOstring__STUB), 0);
  libvecs32vector_TOstring__STUB.common.info = scm__rc.d2149[821];
  libvecs32vector_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[822]);
  scm__rc.d2149[830] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[204])),TRUE); /* u32vector->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[939]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[940]), scm__rc.d2149[830]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[941]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[942]), scm__rc.d2149[4]);
  scm__rc.d2149[831] = Scm_MakeExtendedPair(scm__rc.d2149[830], SCM_OBJ(&scm__rc.d2150[928]), SCM_OBJ(&scm__rc.d2150[944]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[832]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[832]))[4] = scm__rc.d2149[421];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[832]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[832]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[832]))[7] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("u32vector->string")), SCM_OBJ(&libvecu32vector_TOstring__STUB), 0);
  libvecu32vector_TOstring__STUB.common.info = scm__rc.d2149[831];
  libvecu32vector_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[832]);
  scm__rc.d2149[840] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[205])),TRUE); /* bitvector? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[947]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[948]), scm__rc.d2149[840]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[949]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[950]), scm__rc.d2149[4]);
  scm__rc.d2149[841] = Scm_MakeExtendedPair(scm__rc.d2149[840], SCM_OBJ(&scm__rc.d2150[11]), SCM_OBJ(&scm__rc.d2150[952]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector?")), SCM_OBJ(&libvecbitvectorP__STUB), 0);
  libvecbitvectorP__STUB.common.info = scm__rc.d2149[841];
  libvecbitvectorP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[842] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[206])),TRUE); /* bitvector-length */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[955]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[956]), scm__rc.d2149[842]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[957]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[958]), scm__rc.d2149[4]);
  scm__rc.d2149[843] = Scm_MakeExtendedPair(scm__rc.d2149[842], SCM_OBJ(&scm__rc.d2150[119]), SCM_OBJ(&scm__rc.d2150[960]));
  scm__rc.d2149[844] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[207])),TRUE); /* <bitvector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[845]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[845]))[4] = scm__rc.d2149[844];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[845]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[845]))[6] = scm__rc.d2149[217];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector-length")), SCM_OBJ(&libvecbitvector_length__STUB), 0);
  libvecbitvector_length__STUB.common.info = scm__rc.d2149[843];
  libvecbitvector_length__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[845]);
  scm__rc.d2149[852] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[208])),TRUE); /* bitvector-any-value? */
  scm__rc.d2149[853] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[209])),TRUE); /* bit */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[961]), scm__rc.d2149[853]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[962]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[965]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[966]), scm__rc.d2149[852]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[967]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[968]), scm__rc.d2149[4]);
  scm__rc.d2149[854] = Scm_MakeExtendedPair(scm__rc.d2149[852], SCM_OBJ(&scm__rc.d2150[962]), SCM_OBJ(&scm__rc.d2150[970]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[4] = scm__rc.d2149[844];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[5] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[8] = scm__rc.d2149[20];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector-any-value?")), SCM_OBJ(&libvecbitvector_any_valueP__STUB), 0);
  libvecbitvector_any_valueP__STUB.common.info = scm__rc.d2149[854];
  libvecbitvector_any_valueP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[855]);
  scm__rc.d2149[864] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[210])),TRUE); /* bitvector-every-value? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[973]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[974]), scm__rc.d2149[864]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[975]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[976]), scm__rc.d2149[4]);
  scm__rc.d2149[865] = Scm_MakeExtendedPair(scm__rc.d2149[864], SCM_OBJ(&scm__rc.d2150[962]), SCM_OBJ(&scm__rc.d2150[978]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector-every-value?")), SCM_OBJ(&libvecbitvector_every_valueP__STUB), 0);
  libvecbitvector_every_valueP__STUB.common.info = scm__rc.d2149[865];
  libvecbitvector_every_valueP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[855]);
  scm__rc.d2149[866] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[211])),TRUE); /* make-bitvector */
  scm__rc.d2149[867] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[212])),TRUE); /* len */
  scm__rc.d2149[868] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[213])),TRUE); /* init */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[979]), scm__rc.d2149[868]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[980]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[981]), scm__rc.d2149[867]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[984]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[985]), scm__rc.d2149[866]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[986]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[987]), scm__rc.d2149[4]);
  scm__rc.d2149[869] = Scm_MakeExtendedPair(scm__rc.d2149[866], SCM_OBJ(&scm__rc.d2150[981]), SCM_OBJ(&scm__rc.d2150[989]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-bitvector")), SCM_OBJ(&libvecmake_bitvector__STUB), 0);
  libvecmake_bitvector__STUB.common.info = scm__rc.d2149[869];
  libvecmake_bitvector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[264]);
  scm__rc.d2149[870] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[214])),TRUE); /* bitvector */
  scm__rc.d2149[871] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[215])),TRUE); /* bits */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[990]), scm__rc.d2149[871]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[991]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[994]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[995]), scm__rc.d2149[870]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[996]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[997]), scm__rc.d2149[4]);
  scm__rc.d2149[872] = Scm_MakeExtendedPair(scm__rc.d2149[870], SCM_OBJ(&scm__rc.d2150[991]), SCM_OBJ(&scm__rc.d2150[999]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[873]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[873]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[873]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[873]))[6] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector")), SCM_OBJ(&libvecbitvector__STUB), 0);
  libvecbitvector__STUB.common.info = scm__rc.d2149[872];
  libvecbitvector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[873]);
  scm__rc.d2149[880] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[216])),TRUE); /* list->bitvector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1002]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1003]), scm__rc.d2149[880]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1004]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1005]), scm__rc.d2149[4]);
  scm__rc.d2149[881] = Scm_MakeExtendedPair(scm__rc.d2149[880], SCM_OBJ(&scm__rc.d2150[990]), SCM_OBJ(&scm__rc.d2150[1007]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[882]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[882]))[4] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[882]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[882]))[6] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("list->bitvector")), SCM_OBJ(&libveclist_TObitvector__STUB), 0);
  libveclist_TObitvector__STUB.common.info = scm__rc.d2149[881];
  libveclist_TObitvector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[882]);
  scm__rc.d2149[889] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[217])),TRUE); /* string->bitvector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1010]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1011]), scm__rc.d2149[889]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1012]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1013]), scm__rc.d2149[4]);
  scm__rc.d2149[890] = Scm_MakeExtendedPair(scm__rc.d2149[889], SCM_OBJ(&scm__rc.d2150[195]), SCM_OBJ(&scm__rc.d2150[1015]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[891]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[891]))[4] = scm__rc.d2149[178];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[891]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[891]))[6] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("string->bitvector")), SCM_OBJ(&libvecstring_TObitvector__STUB), 0);
  libvecstring_TObitvector__STUB.common.info = scm__rc.d2149[890];
  libvecstring_TObitvector__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[891]);
  scm__rc.d2149[898] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[218])),TRUE); /* bitvector->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1018]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1019]), scm__rc.d2149[898]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1020]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1021]), scm__rc.d2149[4]);
  scm__rc.d2149[899] = Scm_MakeExtendedPair(scm__rc.d2149[898], SCM_OBJ(&scm__rc.d2150[119]), SCM_OBJ(&scm__rc.d2150[1023]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[900]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[900]))[4] = scm__rc.d2149[844];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[900]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[900]))[6] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector->string")), SCM_OBJ(&libvecbitvector_TOstring__STUB), 0);
  libvecbitvector_TOstring__STUB.common.info = scm__rc.d2149[899];
  libvecbitvector_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[900]);
  scm__rc.d2149[907] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[219])),TRUE); /* bit->integer */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1024]), scm__rc.d2149[853]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1027]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1028]), scm__rc.d2149[907]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1029]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1030]), scm__rc.d2149[4]);
  scm__rc.d2149[908] = Scm_MakeExtendedPair(scm__rc.d2149[907], SCM_OBJ(&scm__rc.d2150[1024]), SCM_OBJ(&scm__rc.d2150[1032]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[909]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[909]))[4] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[909]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[909]))[6] = scm__rc.d2149[217];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bit->integer")), SCM_OBJ(&libvecbit_TOinteger__STUB), 0);
  libvecbit_TOinteger__STUB.common.info = scm__rc.d2149[908];
  libvecbit_TOinteger__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[909]);
  scm__rc.d2149[916] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[220])),TRUE); /* bit->boolean */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1035]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1036]), scm__rc.d2149[916]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1037]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1038]), scm__rc.d2149[4]);
  scm__rc.d2149[917] = Scm_MakeExtendedPair(scm__rc.d2149[916], SCM_OBJ(&scm__rc.d2150[1024]), SCM_OBJ(&scm__rc.d2150[1040]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bit->boolean")), SCM_OBJ(&libvecbit_TOboolean__STUB), 0);
  libvecbit_TOboolean__STUB.common.info = scm__rc.d2149[917];
  libvecbit_TOboolean__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[680]);
  scm__rc.d2149[918] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[221])),TRUE); /* bitvector-set! */
  scm__rc.d2149[919] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[222])),TRUE); /* b */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1041]), scm__rc.d2149[919]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1042]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1043]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1046]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1047]), scm__rc.d2149[918]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1048]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1049]), scm__rc.d2149[4]);
  scm__rc.d2149[920] = Scm_MakeExtendedPair(scm__rc.d2149[918], SCM_OBJ(&scm__rc.d2150[1043]), SCM_OBJ(&scm__rc.d2150[1051]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[921]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[921]))[4] = scm__rc.d2149[844];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[921]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[921]))[6] = scm__rc.d2149[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[921]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[921]))[8] = scm__rc.d2149[57];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector-set!")), SCM_OBJ(&libvecbitvector_setX__STUB), 0);
  libvecbitvector_setX__STUB.common.info = scm__rc.d2149[920];
  libvecbitvector_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[921]);
  scm__rc.d2149[930] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[223])),TRUE); /* bitvector-ref/int */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1054]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1055]), scm__rc.d2149[930]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1056]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1057]), scm__rc.d2149[4]);
  scm__rc.d2149[931] = Scm_MakeExtendedPair(scm__rc.d2149[930], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[1059]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[932]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[932]))[4] = scm__rc.d2149[844];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[932]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[932]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[932]))[7] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[932]))[8] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector-ref/int")), SCM_OBJ(&libvecbitvector_ref_2fint__STUB), 0);
  libvecbitvector_ref_2fint__STUB.common.info = scm__rc.d2149[931];
  libvecbitvector_ref_2fint__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[932]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecbitvector_ref_2fint__STUB), SCM_PROCEDURE(&libvecbitvector_setX__STUB), TRUE);
  scm__rc.d2149[941] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[224])),TRUE); /* bitvector-ref/bool */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1062]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1063]), scm__rc.d2149[941]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1064]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1065]), scm__rc.d2149[4]);
  scm__rc.d2149[942] = Scm_MakeExtendedPair(scm__rc.d2149[941], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[1067]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector-ref/bool")), SCM_OBJ(&libvecbitvector_ref_2fbool__STUB), 0);
  libvecbitvector_ref_2fbool__STUB.common.info = scm__rc.d2149[942];
  libvecbitvector_ref_2fbool__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[932]);
  Scm_SetterSet(SCM_PROCEDURE(&libvecbitvector_ref_2fbool__STUB), SCM_PROCEDURE(&libvecbitvector_setX__STUB), TRUE);
  scm__rc.d2149[943] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[225])),TRUE); /* bitvector-copy */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1068]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1071]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1072]), scm__rc.d2149[943]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1073]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1074]), scm__rc.d2149[4]);
  scm__rc.d2149[944] = Scm_MakeExtendedPair(scm__rc.d2149[943], SCM_OBJ(&scm__rc.d2150[1068]), SCM_OBJ(&scm__rc.d2150[1076]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[945]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[945]))[4] = scm__rc.d2149[844];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[945]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[945]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[945]))[7] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector-copy")), SCM_OBJ(&libvecbitvector_copy__STUB), 0);
  libvecbitvector_copy__STUB.common.info = scm__rc.d2149[944];
  libvecbitvector_copy__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[945]);
  scm__rc.d2149[953] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[226])),TRUE); /* bitvector-copy! */
  scm__rc.d2149[954] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[227])),TRUE); /* dest */
  scm__rc.d2149[955] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[228])),TRUE); /* dstart */
  scm__rc.d2149[956] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[229])),TRUE); /* src */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1077]), scm__rc.d2149[956]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1078]), scm__rc.d2149[955]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1079]), scm__rc.d2149[954]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1082]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1083]), scm__rc.d2149[953]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1084]), scm__rc.d2149[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1085]), scm__rc.d2149[4]);
  scm__rc.d2149[957] = Scm_MakeExtendedPair(scm__rc.d2149[953], SCM_OBJ(&scm__rc.d2150[1079]), SCM_OBJ(&scm__rc.d2150[1087]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[958]))[3] = scm__rc.d2149[127];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[958]))[4] = scm__rc.d2149[844];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[958]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[958]))[6] = scm__rc.d2149[844];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[958]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[958]))[8] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[958]))[9] = scm__rc.d2149[9];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bitvector-copy!")), SCM_OBJ(&libvecbitvector_copyX__STUB), 0);
  libvecbitvector_copyX__STUB.common.info = scm__rc.d2149[957];
  libvecbitvector_copyX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[958]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[1022] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[230])),TRUE); /* format */
  scm__rc.d2149[1023] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[231])),FALSE); /* G2154 */
  scm__rc.d2149[1024] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[232])),FALSE); /* G2156 */
  scm__rc.d2149[1025] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[233])),FALSE); /* G2155 */
  scm__rc.d2149[1026] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[234])),FALSE); /* rest2153 */
  scm__rc.d2149[1027] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[235])),TRUE); /* define-in-module */
  scm__rc.d2149[1028] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[236])),FALSE); /* G2161 */
  scm__rc.d2149[1029] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[237])),FALSE); /* G2163 */
  scm__rc.d2149[1030] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[238])),FALSE); /* G2162 */
  scm__rc.d2149[1031] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[239])),FALSE); /* rest2160 */
}
