/* Generated automatically from libhash.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
static unsigned char uvector__00001[] = {
 0u, 3u, 134u, 134u, 6u, 104u, 0u, 57u, 183u, 55u, 18u, 71u, 11u, 12u,
9u, 129u, 137u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u,
14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libhashhash_salt(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashhash_salt__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashhash_salt, NULL, NULL);

static ScmObj libhasheq_hash(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhasheq_hash__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhasheq_hash, NULL, NULL);

static ScmObj libhasheqv_hash(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhasheqv_hash__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhasheqv_hash, NULL, NULL);

static ScmObj libhashlegacy_hash(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashlegacy_hash__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashlegacy_hash, NULL, NULL);

static ScmObj libhashportable_hash(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashportable_hash__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashportable_hash, NULL, NULL);

static ScmObj libhashdefault_hash(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashdefault_hash__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashdefault_hash, NULL, NULL);

static ScmObj libhashcombine_hash_value(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashcombine_hash_value__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashcombine_hash_value, NULL, NULL);

static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 134u, 8u, 6u, 2u, 36u, 112u, 192u, 192u, 144u, 17u,
28u, 40u, 48u, 64u, 112u, 17u, 35u, 132u, 134u, 4u, 128u, 200u, 225u,
1u, 129u, 32u, 34u, 56u, 48u, 96u, 101u, 128u, 194u, 96u, 242u, 19u,
1u, 194u, 71u, 5u, 12u, 9u, 1u, 145u, 193u, 3u, 3u, 32u, 16u, 24u,
15u, 240u, 36u, 10u, 73u, 33u, 49u, 0u, 36u, 112u, 32u, 192u, 152u,
208u, 17u, 192u, 3u, 2u, 99u, 64u, 67u, 16u, 96u, 99u, 16u, 17u, 13u,
176u, 24u, 76u, 104u, 2u, 98u, 0u, 73u, 32u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 3u, 64u, 68u, 54u, 192u, 96u, 63u, 192u,
144u, 41u, 33u, 150u, 3u, 16u, 28u, 4u, 68u, 3u, 1u, 18u, 73u, 28u,
36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u, 4u, 192u,
112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static ScmObj libhashhash_tableP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashhash_tableP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashhash_tableP, NULL, NULL);

static ScmObj libhash_25make_hash_table_simple(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhash_25make_hash_table_simple__STUB, 2, 0,SCM_FALSE,libhash_25make_hash_table_simple, NULL, NULL);

static u_long generic_hashtable_hash(const ScmHashCore* h,intptr_t key);
static u_long generic_hashtable_hash_typecheck(const ScmHashCore* h,intptr_t key);
static int generic_hashtable_eq(const ScmHashCore* h,intptr_t a,intptr_t b);
static int generic_hashtable_eq_typecheck(const ScmHashCore* h,intptr_t a,intptr_t b);
static ScmObj libhash_25make_hash_table_from_comparator(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhash_25make_hash_table_from_comparator__STUB, 3, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhash_25make_hash_table_from_comparator, NULL, NULL);

static unsigned char uvector__00004[] = {
 0u, 3u, 194u, 144u, 24u, 32u, 120u, 34u, 9u, 15u, 33u, 236u, 65u,
80u, 65u, 15u, 240u, 36u, 22u, 73u, 36u, 120u, 81u, 195u, 2u, 96u,
134u, 71u, 133u, 24u, 48u, 38u, 9u, 196u, 120u, 81u, 3u, 2u, 65u,
100u, 120u, 80u, 131u, 2u, 96u, 178u, 71u, 133u, 4u, 48u, 36u, 16u,
71u, 132u, 124u, 48u, 38u, 11u, 36u, 120u, 71u, 131u, 2u, 65u, 36u,
120u, 71u, 67u, 2u, 65u, 4u, 120u, 70u, 195u, 3u, 60u, 25u, 4u, 18u,
60u, 35u, 65u, 129u, 32u, 130u, 60u, 34u, 193u, 129u, 50u, 77u, 35u,
194u, 36u, 24u, 27u, 196u, 27u, 4u, 16u, 153u, 38u, 146u, 60u, 34u,
1u, 129u, 50u, 253u, 35u, 194u, 30u, 24u, 18u, 8u, 35u, 194u, 26u,
24u, 19u, 47u, 210u, 60u, 33u, 65u, 130u, 14u, 12u, 48u, 121u, 130u,
73u, 30u, 16u, 144u, 192u, 144u, 73u, 30u, 16u, 80u, 192u, 247u, 4u,
66u, 4u, 143u, 8u, 24u, 96u, 72u, 64u, 143u, 8u, 16u, 96u, 72u, 32u,
142u, 254u, 24u, 32u, 224u, 195u, 8u, 152u, 36u, 145u, 223u, 131u, 2u,
65u, 36u, 119u, 160u, 192u, 247u, 4u, 66u, 68u, 142u, 240u, 24u, 18u,
18u, 35u, 187u, 134u, 4u, 130u, 8u, 238u, 65u, 129u, 236u, 66u, 112u,
65u, 133u, 9u, 29u, 192u, 48u, 36u, 40u, 71u, 110u, 12u, 9u, 161u,
130u, 36u, 118u, 208u, 192u, 144u, 65u, 29u, 172u, 48u, 38u, 134u, 8u,
145u, 218u, 3u, 4u, 28u, 24u, 97u, 67u, 4u, 146u, 59u, 56u, 96u, 72u,
36u, 142u, 198u, 24u, 30u, 224u, 136u, 84u, 145u, 216u, 67u, 2u, 66u,
164u, 118u, 0u, 192u, 144u, 65u, 29u, 108u, 48u, 61u, 136u, 78u, 8u,
47u, 100u, 142u, 178u, 24u, 17u, 236u, 142u, 174u, 24u, 19u, 68u, 7u,
8u, 234u, 193u, 129u, 32u, 130u, 58u, 160u, 96u, 77u, 16u, 28u, 35u,
168u, 134u, 8u, 56u, 48u, 189u, 152u, 36u, 145u, 212u, 3u, 2u, 65u,
36u, 116u, 192u, 192u, 247u, 4u, 66u, 196u, 142u, 148u, 24u, 18u, 22u,
35u, 164u, 134u, 4u, 130u, 8u, 232u, 225u, 129u, 158u, 23u, 130u, 9u,
29u, 24u, 48u, 36u, 16u, 71u, 66u, 12u, 9u, 162u, 130u, 196u, 115u,
224u, 192u, 222u, 33u, 136u, 32u, 132u, 209u, 65u, 98u, 71u, 60u, 12u,
9u, 162u, 171u, 68u, 115u, 176u, 192u, 144u, 65u, 28u, 228u, 48u, 38u,
138u, 173u, 17u, 205u, 131u, 4u, 51u, 4u, 65u, 36u, 142u, 106u, 24u,
18u, 9u, 35u, 154u, 6u, 4u, 130u, 8u, 230u, 65u, 128u, 61u, 194u,
144u, 140u, 30u, 66u, 104u, 184u, 233u, 35u, 151u, 6u, 4u, 130u, 8u,
229u, 129u, 129u, 158u, 26u, 12u, 33u, 140u, 67u, 98u, 8u, 12u, 47u,
100u, 136u, 39u, 128u, 18u, 33u, 200u, 32u, 38u, 140u, 39u, 6u, 144u,
154u, 42u, 158u, 27u, 0u, 118u, 9u, 162u, 96u, 225u, 52u, 64u, 68u,
132u, 209u, 33u, 66u, 3u, 176u, 77u, 15u, 2u, 9u, 161u, 128u, 196u,
38u, 135u, 6u, 144u, 19u, 66u, 181u, 194u, 104u, 80u, 17u, 1u, 52u,
35u, 28u, 38u, 124u, 196u, 52u, 132u, 203u, 200u, 67u, 176u, 60u, 17u,
4u, 132u, 193u, 12u, 146u, 73u, 36u, 142u, 76u, 24u, 19u, 70u, 87u,
136u, 228u, 65u, 129u, 174u, 30u, 36u, 114u, 16u, 192u, 144u, 241u,
28u, 128u, 48u, 50u, 1u, 4u, 134u, 80u, 215u, 15u, 158u, 0u, 26u, 33u,
242u, 72u, 135u, 131u, 40u, 107u, 135u, 200u, 97u, 82u, 26u, 161u,
242u, 73u, 13u, 225u, 52u, 124u, 120u, 38u, 140u, 175u, 16u, 200u,
169u, 163u, 74u, 228u, 142u, 62u, 24u, 19u, 72u, 80u, 136u, 227u, 65u,
129u, 52u, 131u, 96u, 142u, 50u, 24u, 18u, 31u, 35u, 139u, 134u, 4u,
210u, 8u, 34u, 56u, 144u, 96u, 77u, 32u, 31u, 35u, 136u, 134u, 4u,
135u, 200u, 226u, 1u, 129u, 144u, 8u, 32u, 50u, 134u, 184u, 128u,
132u, 209u, 160u, 48u, 209u, 16u, 18u, 68u, 62u, 25u, 67u, 92u, 64u,
67u, 10u, 144u, 213u, 16u, 18u, 72u, 77u, 31u, 217u, 36u, 112u, 240u,
192u, 154u, 76u, 142u, 71u, 10u, 12u, 9u, 164u, 187u, 164u, 112u,
144u, 192u, 145u, 9u, 28u, 28u, 48u, 38u, 146u, 195u, 145u, 192u, 67u,
2u, 105u, 40u, 161u, 28u, 0u, 48u, 36u, 66u, 67u, 16u, 96u, 77u, 25u,
158u, 36u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 7u, 67u, 98u, 8u, 12u, 47u, 100u, 136u,
39u, 128u, 18u, 33u, 200u, 32u, 7u, 184u, 82u, 17u, 131u, 200u, 134u,
96u, 136u, 36u, 144u, 210u, 27u, 196u, 49u, 4u, 16u, 207u, 11u, 193u,
4u, 134u, 192u, 29u, 131u, 220u, 17u, 11u, 16u, 246u, 33u, 56u, 32u,
189u, 146u, 32u, 224u, 194u, 246u, 96u, 146u, 64u, 118u, 15u, 112u,
68u, 42u, 67u, 216u, 132u, 224u, 131u, 10u, 18u, 32u, 224u, 195u, 10u,
24u, 36u, 144u, 30u, 224u, 136u, 72u, 136u, 56u, 48u, 194u, 38u, 9u,
36u, 7u, 184u, 34u, 16u, 34u, 14u, 12u, 48u, 121u, 130u, 73u, 13u,
33u, 188u, 65u, 176u, 65u, 12u, 240u, 100u, 16u, 72u, 135u, 96u, 120u,
34u, 9u, 15u, 33u, 236u, 65u, 80u, 65u, 15u, 240u, 36u, 22u, 73u, 36u,
146u, 72u, 225u, 33u, 129u, 140u, 38u, 6u, 41u, 131u, 249u, 28u, 28u,
48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u,
96u, 56u, 72u,};
static ScmObj libhashhash_table_type(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashhash_table_type__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashhash_table_type, NULL, NULL);

static ScmObj libhash_25hash_table_comparator_int(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhash_25hash_table_comparator_int__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhash_25hash_table_comparator_int, NULL, NULL);

static unsigned char uvector__00006[] = {
 0u, 3u, 150u, 134u, 6u, 120u, 138u, 6u, 36u, 114u, 192u, 192u, 144u,
49u, 28u, 156u, 48u, 7u, 248u, 18u, 35u, 48u, 49u, 35u, 147u, 6u, 4u,
129u, 136u, 228u, 97u, 128u, 68u, 132u, 38u, 16u, 36u, 142u, 68u, 24u,
18u, 37u, 35u, 143u, 134u, 4u, 132u, 8u, 227u, 129u, 128u, 65u, 230u,
16u, 36u, 113u, 176u, 192u, 145u, 41u, 28u, 96u, 48u, 36u, 36u, 71u,
21u, 12u, 2u, 17u, 48u, 145u, 35u, 138u, 6u, 4u, 137u, 72u, 226u, 33u,
129u, 33u, 82u, 56u, 112u, 96u, 16u, 161u, 133u, 73u, 28u, 52u, 48u,
36u, 74u, 71u, 10u, 12u, 9u, 11u, 17u, 193u, 195u, 0u, 123u, 48u,
177u, 35u, 131u, 6u, 4u, 137u, 72u, 224u, 161u, 130u, 28u, 17u, 52u,
12u, 66u, 102u, 106u, 19u, 42u, 128u, 153u, 13u, 132u, 198u, 56u, 38u,
30u, 193u, 164u, 38u, 3u, 132u, 145u, 192u, 195u, 2u, 103u, 70u, 71u,
2u, 12u, 9u, 3u, 17u, 192u, 3u, 2u, 103u, 70u, 67u, 16u, 96u, 99u,
16u, 49u, 9u, 156u, 177u, 36u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 19u, 192u, 196u, 67u, 130u, 38u, 129u,
136u, 15u, 102u, 22u, 32u, 66u, 134u, 21u, 32u, 66u, 38u, 18u, 32u,
65u, 230u, 16u, 32u, 68u, 132u, 7u, 248u, 18u, 35u, 48u, 49u, 33u,
164u, 51u, 196u, 80u, 49u, 36u, 145u, 194u, 67u, 3u, 24u, 76u, 12u,
83u, 3u, 226u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u,
35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static ScmObj libhashhash_table_num_entries(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashhash_table_num_entries__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashhash_table_num_entries, NULL, NULL);

static ScmObj libhashhash_table_clearX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashhash_table_clearX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashhash_table_clearX, NULL, NULL);

static ScmObj libhashhash_table_get(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_get__STUB, 2, 2,SCM_FALSE,libhashhash_table_get, NULL, NULL);

static ScmObj libhashhash_table_putX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_putX__STUB, 3, 0,SCM_FALSE,libhashhash_table_putX, NULL, NULL);

static ScmObj libhashhash_table_adjoinX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_adjoinX__STUB, 3, 0,SCM_FALSE,libhashhash_table_adjoinX, NULL, NULL);

static ScmObj libhashhash_table_replaceX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_replaceX__STUB, 3, 0,SCM_FALSE,libhashhash_table_replaceX, NULL, NULL);

static ScmObj libhashhash_table_deleteX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_deleteX__STUB, 2, 0,SCM_FALSE,libhashhash_table_deleteX, NULL, NULL);

static ScmObj libhashhash_table_existsP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_existsP__STUB, 2, 0,SCM_FALSE,libhashhash_table_existsP, NULL, NULL);

static ScmObj hash_table_update_cc(ScmObj result,void** data);
static ScmObj libhashhash_table_updateX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_updateX__STUB, 3, 2,SCM_FALSE,libhashhash_table_updateX, NULL, NULL);

static ScmObj libhashhash_table_pushX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_pushX__STUB, 3, 0,SCM_FALSE,libhashhash_table_pushX, NULL, NULL);

static ScmObj libhashhash_table_popX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_popX__STUB, 2, 2,SCM_FALSE,libhashhash_table_popX, NULL, NULL);

static ScmObj hash_table_iter(ScmObj* args,int G2174 SCM_UNUSED,void* data);
static ScmObj libhash_25hash_table_iter(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhash_25hash_table_iter__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhash_25hash_table_iter, NULL, NULL);

static ScmObj libhashhash_table_copy(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashhash_table_copy__STUB, 1, 2,SCM_FALSE,libhashhash_table_copy, NULL, NULL);

static ScmObj libhashhash_table_keys(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashhash_table_keys__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashhash_table_keys, NULL, NULL);

static ScmObj libhashhash_table_values(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashhash_table_values__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashhash_table_values, NULL, NULL);

static ScmObj libhashhash_table_stat(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashhash_table_stat__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashhash_table_stat, NULL, NULL);

static unsigned char uvector__00008[] = {
 0u, 3u, 153u, 6u, 7u, 17u, 20u, 69u, 49u, 84u, 86u, 73u, 28u, 192u,
48u, 38u, 4u, 228u, 114u, 240u, 192u, 145u, 65u, 28u, 184u, 48u, 36u,
86u, 71u, 45u, 12u, 9u, 21u, 17u, 203u, 3u, 2u, 69u, 36u, 114u, 160u,
192u, 152u, 19u, 145u, 202u, 67u, 2u, 69u, 100u, 114u, 112u, 192u,
247u, 20u, 135u, 248u, 18u, 0u, 36u, 142u, 74u, 24u, 18u, 0u, 35u,
146u, 6u, 4u, 138u, 72u, 228u, 97u, 130u, 44u, 17u, 76u, 84u, 68u,
90u, 31u, 224u, 72u, 0u, 144u, 202u, 19u, 25u, 248u, 172u, 38u, 3u,
132u, 145u, 200u, 131u, 2u, 100u, 218u, 71u, 33u, 12u, 9u, 22u, 145u,
199u, 195u, 2u, 64u, 4u, 113u, 208u, 192u, 153u, 54u, 145u, 198u,
195u, 2u, 69u, 196u, 113u, 160u, 192u, 200u, 4u, 90u, 3u, 252u, 9u,
23u, 152u, 192u, 146u, 25u, 28u, 64u, 138u, 226u, 226u, 66u, 100u,
140u, 73u, 28u, 96u, 48u, 38u, 126u, 68u, 113u, 112u, 192u, 145u,
129u, 28u, 84u, 48u, 38u, 126u, 68u, 113u, 48u, 193u, 24u, 134u, 24u,
192u, 198u, 81u, 81u, 35u, 137u, 6u, 4u, 140u, 8u, 226u, 1u, 129u,
35u, 34u, 56u, 96u, 96u, 77u, 10u, 23u, 35u, 132u, 134u, 4u, 140u, 8u,
224u, 225u, 129u, 148u, 70u, 113u, 84u, 100u, 98u, 160u, 154u, 20u,
46u, 72u, 224u, 161u, 129u, 52u, 49u, 36u, 142u, 6u, 24u, 18u, 50u,
35u, 129u, 6u, 4u, 140u, 8u, 224u, 1u, 129u, 52u, 49u, 36u, 134u, 32u,
192u, 198u, 35u, 8u, 162u, 46u, 34u, 52u, 140u, 35u, 34u, 27u, 98u,
208u, 153u, 249u, 4u, 208u, 132u, 162u, 73u, 0u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 26u, 198u, 17u, 68u, 92u, 68u, 105u, 24u,
70u, 68u, 54u, 197u, 160u, 63u, 192u, 145u, 121u, 140u, 8u, 100u,
113u, 2u, 43u, 139u, 137u, 17u, 96u, 138u, 98u, 162u, 34u, 208u, 255u,
2u, 64u, 4u, 134u, 80u, 247u, 20u, 135u, 248u, 18u, 0u, 38u, 43u, 14u,
34u, 40u, 138u, 98u, 168u, 172u, 146u, 73u, 36u, 112u, 144u, 192u,
198u, 19u, 3u, 20u, 193u, 72u, 142u, 14u, 24u, 19u, 1u, 194u, 56u,
16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 130u, 6u, 8u, 218u, 55u, 13u, 17u, 193u, 13u, 81u, 193u, 36u,
112u, 48u, 192u, 152u, 37u, 145u, 192u, 67u, 2u, 96u, 102u, 71u, 0u,
12u, 9u, 27u, 144u, 196u, 24u, 24u, 196u, 112u, 66u, 96u, 56u, 73u,
0u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 135u, 134u, 4u, 141u, 200u, 225u, 161u, 130u, 57u, 17u, 208u,
141u, 163u, 112u, 209u, 28u, 16u, 213u, 28u, 18u, 99u, 178u, 71u, 12u,
12u, 9u, 29u, 145u, 194u, 67u, 3u, 24u, 142u, 10u, 96u, 186u, 71u, 7u,
12u, 9u, 130u, 49u, 28u, 24u, 48u, 50u, 1u, 27u, 135u, 88u, 58u, 60u,
36u, 132u, 193u, 26u, 55u, 36u, 112u, 80u, 192u, 152u, 198u, 17u,
193u, 3u, 2u, 71u, 132u, 112u, 32u, 192u, 144u, 113u, 28u, 0u, 48u,
38u, 49u, 132u, 49u, 6u, 6u, 49u, 29u, 164u, 120u, 35u, 216u, 220u,
38u, 49u, 129u, 48u, 70u, 36u, 144u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 31u, 71u, 105u, 30u, 8u, 246u, 55u, 14u,
176u, 116u, 120u, 68u, 114u, 35u, 161u, 27u, 70u, 225u, 162u, 56u,
33u, 170u, 56u, 36u, 199u, 100u, 146u, 56u, 72u, 96u, 99u, 9u, 129u,
138u, 96u, 146u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u,
132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 129u, 134u, 8u, 254u, 3u, 115u, 36u, 112u, 16u, 192u, 142u,
100u, 112u, 0u, 192u, 144u, 25u, 12u, 65u, 129u, 140u, 64u, 100u, 38u,
3u, 132u, 144u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 32u, 64u, 100u, 71u, 240u, 27u, 153u, 36u,
112u, 144u, 192u, 198u, 19u, 3u, 20u, 192u, 248u, 142u, 14u, 24u, 19u,
1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 134u, 134u, 6u, 105u, 4u, 57u, 183u, 55u, 18u, 71u, 11u, 12u,
9u, 129u, 137u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u,
14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 130u, 6u, 8u, 218u, 3u, 13u, 18u, 17u, 13u, 82u, 17u, 36u,
112u, 48u, 192u, 152u, 37u, 145u, 192u, 67u, 2u, 96u, 102u, 71u, 0u,
12u, 9u, 1u, 144u, 196u, 24u, 24u, 196u, 132u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 135u, 6u, 4u, 128u, 200u, 225u, 129u, 130u, 57u, 14u, 66u,
66u, 34u, 54u, 128u, 195u, 68u, 132u, 67u, 84u, 132u, 73u, 144u, 201u,
28u, 44u, 48u, 36u, 134u, 71u, 8u, 12u, 12u, 97u, 48u, 94u, 9u, 131u,
113u, 35u, 131u, 6u, 4u, 193u, 24u, 142u, 10u, 24u, 25u, 0u, 128u,
196u, 29u, 34u, 18u, 66u, 96u, 141u, 1u, 146u, 56u, 24u, 96u, 76u,
105u, 72u, 224u, 65u, 129u, 36u, 66u, 56u, 0u, 96u, 76u, 105u, 72u,
98u, 12u, 12u, 98u, 68u, 73u, 12u, 71u, 176u, 24u, 76u, 105u, 66u,
96u, 140u, 73u, 32u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 34u, 200u, 137u, 33u, 136u, 246u, 3u, 16u,
116u, 136u, 68u, 114u, 28u, 132u, 132u, 68u, 109u, 1u, 134u, 137u, 8u,
134u, 169u, 8u, 147u, 33u, 146u, 72u, 225u, 33u, 129u, 140u, 38u, 6u,
41u, 130u, 73u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u,
14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 26u, 69u, 36u, 112u, 144u, 192u, 146u,
41u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 129u, 134u, 8u, 218u, 3u, 138u, 98u, 162u, 71u, 2u, 12u, 9u,
21u, 17u, 192u, 67u, 2u, 69u, 36u, 112u, 0u, 192u, 144u, 25u, 12u,
65u, 129u, 140u, 69u, 49u, 81u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 155u, 6u, 4u, 128u, 200u, 230u, 97u, 130u, 71u, 2u, 72u, 14u,
66u, 41u, 138u, 136u, 141u, 160u, 56u, 166u, 42u, 36u, 137u, 38u, 67u,
15u, 146u, 73u, 36u, 6u, 192u, 26u, 228u, 146u, 252u, 64u, 107u, 13u,
82u, 73u, 34u, 72u, 13u, 18u, 73u, 12u, 242u, 84u, 134u, 73u, 13u,
45u, 196u, 145u, 36u, 6u, 137u, 36u, 135u, 121u, 36u, 146u, 71u, 50u,
12u, 9u, 134u, 153u, 28u, 196u, 48u, 36u, 146u, 71u, 48u, 12u, 9u,
36u, 17u, 203u, 195u, 2u, 99u, 110u, 71u, 46u, 12u, 9u, 36u, 17u,
203u, 67u, 2u, 99u, 184u, 71u, 44u, 12u, 9u, 36u, 145u, 202u, 131u,
2u, 99u, 136u, 71u, 40u, 12u, 9u, 141u, 185u, 28u, 140u, 48u, 38u,
41u, 196u, 114u, 32u, 192u, 146u, 65u, 28u, 124u, 48u, 38u, 46u, 100u,
113u, 224u, 192u, 146u, 25u, 28u, 104u, 48u, 38u, 46u, 100u, 113u,
144u, 192u, 152u, 173u, 145u, 197u, 195u, 2u, 98u, 156u, 71u, 21u,
12u, 9u, 137u, 65u, 28u, 80u, 48u, 38u, 38u, 100u, 112u, 224u, 192u,
152u, 129u, 17u, 195u, 67u, 2u, 73u, 36u, 112u, 192u, 192u, 152u, 35u,
17u, 194u, 195u, 2u, 72u, 100u, 112u, 128u, 192u, 198u, 19u, 6u, 224u,
152u, 68u, 18u, 56u, 48u, 96u, 76u, 17u, 136u, 224u, 161u, 129u, 144u,
8u, 12u, 65u, 210u, 33u, 36u, 73u, 96u, 69u, 49u, 81u, 144u, 200u,
76u, 34u, 12u, 6u, 72u, 224u, 97u, 129u, 52u, 52u, 4u, 142u, 4u, 24u,
18u, 68u, 35u, 128u, 6u, 4u, 208u, 208u, 18u, 24u, 131u, 3u, 24u,
145u, 18u, 67u, 17u, 236u, 6u, 19u, 67u, 64u, 66u, 104u, 106u, 9u,
36u, 128u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 38u, 72u, 137u, 33u, 136u, 246u, 3u, 16u,
116u, 136u, 68u, 150u, 4u, 83u, 21u, 25u, 12u, 136u, 218u, 3u, 138u,
98u, 162u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 24u, 166u, 9u, 36u,
112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u,
12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 131u, 134u, 9u, 52u, 73u, 208u, 25u, 36u, 112u, 48u, 192u,
152u, 20u, 145u, 192u, 131u, 2u, 64u, 100u, 112u, 0u, 192u, 152u, 20u,
144u, 196u, 24u, 24u, 196u, 6u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 39u, 192u, 100u, 73u, 162u, 78u, 128u,
201u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u, 192u, 248u, 142u,
14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u,
48u, 28u, 36u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 66u, 81u, 36u, 112u, 144u, 192u, 146u,
137u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 74u, 78u, 36u, 112u, 144u, 192u, 146u,
113u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00027[] = {
 0u, 3u, 137u, 134u, 8u, 196u, 48u, 198u, 6u, 50u, 138u, 137u, 28u,
72u, 48u, 36u, 96u, 71u, 16u, 12u, 9u, 25u, 17u, 195u, 3u, 2u, 96u,
56u, 71u, 9u, 12u, 9u, 24u, 17u, 193u, 195u, 3u, 40u, 140u, 226u,
168u, 200u, 197u, 65u, 48u, 28u, 36u, 112u, 80u, 192u, 152u, 148u,
17u, 192u, 195u, 2u, 70u, 68u, 112u, 32u, 192u, 145u, 129u, 28u, 0u,
48u, 38u, 37u, 4u, 49u, 6u, 6u, 49u, 24u, 17u, 26u, 70u, 17u, 145u,
126u, 36u, 128u,};
static unsigned char uvector__00028[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 41u, 198u, 4u, 70u, 145u, 132u, 100u, 95u,
137u, 28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u,
4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u,
9u, 0u,};
static unsigned char uvector__00029[] = {
 0u, 3u, 130u, 134u, 8u, 56u, 68u, 241u, 129u, 36u, 112u, 48u, 192u,
152u, 20u, 145u, 192u, 131u, 2u, 70u, 4u, 112u, 0u, 192u, 152u, 20u,
144u, 196u, 24u, 24u, 196u, 96u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00030[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 42u, 70u, 4u, 65u, 194u, 39u, 140u, 9u,
36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u, 192u, 248u, 142u, 14u, 24u,
19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u,
36u,};
static unsigned char uvector__00031[] = {
 0u, 3u, 133u, 6u, 9u, 84u, 74u, 209u, 129u, 18u, 188u, 96u, 73u, 28u,
32u, 48u, 38u, 8u, 100u, 112u, 112u, 192u, 145u, 129u, 28u, 20u, 48u,
38u, 8u, 100u, 112u, 48u, 192u, 152u, 20u, 145u, 192u, 131u, 2u, 70u,
4u, 112u, 0u, 192u, 152u, 20u, 144u, 196u, 24u, 24u, 196u, 96u, 66u,
96u, 56u, 73u, 0u,};
static unsigned char uvector__00032[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 44u, 70u, 4u, 74u, 162u, 86u, 140u, 8u,
149u, 227u, 2u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u,
35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u,
0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00033[] = {
 0u, 3u, 148u, 134u, 4u, 140u, 8u, 228u, 193u, 130u, 71u, 2u, 89u,
150u, 68u, 181u, 44u, 146u, 64u, 146u, 101u, 146u, 68u, 88u, 34u,
152u, 168u, 137u, 110u, 89u, 34u, 54u, 140u, 34u, 152u, 168u, 146u,
71u, 36u, 12u, 9u, 131u, 105u, 28u, 140u, 48u, 36u, 180u, 71u, 34u,
12u, 9u, 44u, 145u, 200u, 3u, 2u, 96u, 218u, 71u, 29u, 12u, 9u, 135u,
113u, 28u, 112u, 48u, 36u, 84u, 71u, 27u, 12u, 9u, 20u, 145u, 198u,
131u, 2u, 70u, 4u, 113u, 128u, 192u, 152u, 119u, 17u, 197u, 195u, 2u,
97u, 90u, 71u, 22u, 12u, 9u, 134u, 161u, 28u, 84u, 48u, 36u, 182u,
71u, 20u, 12u, 9u, 44u, 145u, 196u, 131u, 2u, 97u, 168u, 71u, 16u,
12u, 9u, 132u, 129u, 28u, 60u, 48u, 36u, 146u, 71u, 14u, 12u, 9u, 44u,
145u, 195u, 3u, 2u, 97u, 32u, 71u, 11u, 12u, 9u, 130u, 49u, 28u, 40u,
48u, 36u, 178u, 71u, 8u, 12u, 9u, 130u, 49u, 28u, 28u, 48u, 50u, 1u,
24u, 7u, 88u, 58u, 68u, 151u, 9u, 33u, 48u, 70u, 140u, 9u, 28u, 24u,
48u, 38u, 132u, 234u, 17u, 193u, 67u, 2u, 75u, 132u, 112u, 64u, 192u,
146u, 33u, 28u, 8u, 48u, 36u, 28u, 71u, 0u, 12u, 9u, 161u, 58u, 132u,
49u, 6u, 6u, 49u, 36u, 203u, 114u, 212u, 179u, 34u, 36u, 184u, 35u,
216u, 192u, 38u, 132u, 234u, 4u, 193u, 24u, 146u, 64u,};
static unsigned char uvector__00034[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 46u, 201u, 50u, 220u, 181u, 44u, 200u,
137u, 46u, 8u, 246u, 48u, 14u, 176u, 116u, 137u, 46u, 17u, 35u, 129u,
44u, 203u, 34u, 90u, 150u, 73u, 32u, 73u, 50u, 201u, 34u, 44u, 17u,
76u, 84u, 68u, 183u, 44u, 145u, 27u, 70u, 17u, 76u, 84u, 73u, 36u,
142u, 18u, 24u, 24u, 194u, 96u, 98u, 152u, 56u, 145u, 193u, 195u, 2u,
96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u, 132u,
128u,};
static unsigned char uvector__00035[] = {
 0u, 3u, 167u, 6u, 9u, 122u, 42u, 36u, 116u, 208u, 192u, 146u, 241u,
29u, 48u, 48u, 36u, 84u, 71u, 74u, 12u, 18u, 249u, 35u, 164u, 134u,
4u, 151u, 200u, 232u, 193u, 129u, 158u, 96u, 152u, 73u, 29u, 20u, 48u,
36u, 194u, 71u, 65u, 12u, 12u, 162u, 98u, 151u, 200u, 76u, 61u, 130u,
97u, 70u, 72u, 231u, 225u, 129u, 49u, 102u, 35u, 159u, 6u, 4u, 151u,
200u, 231u, 129u, 129u, 49u, 102u, 35u, 157u, 6u, 7u, 184u, 170u, 65u,
36u, 115u, 128u, 192u, 146u, 9u, 28u, 220u, 48u, 36u, 84u, 71u, 54u,
12u, 12u, 128u, 69u, 66u, 99u, 140u, 38u, 25u, 4u, 146u, 25u, 66u,
100u, 152u, 19u, 21u, 176u, 152u, 14u, 18u, 71u, 52u, 12u, 9u, 151u,
177u, 28u, 200u, 48u, 36u, 130u, 71u, 49u, 12u, 9u, 48u, 145u, 204u,
3u, 2u, 70u, 4u, 114u, 224u, 192u, 153u, 123u, 17u, 203u, 3u, 3u, 60u,
52u, 24u, 67u, 24u, 140u, 38u, 24u, 110u, 95u, 18u, 244u, 200u, 72u,
109u, 138u, 130u, 101u, 236u, 19u, 50u, 162u, 73u, 35u, 147u, 6u, 4u,
208u, 140u, 210u, 57u, 16u, 96u, 107u, 153u, 73u, 28u, 132u, 48u, 36u,
202u, 71u, 32u, 12u, 12u, 128u, 75u, 193u, 148u, 53u, 204u, 198u,
100u, 13u, 19u, 49u, 36u, 76u, 161u, 148u, 53u, 204u, 196u, 48u, 169u,
13u, 83u, 49u, 36u, 134u, 240u, 154u, 21u, 176u, 19u, 66u, 51u, 72u,
100u, 84u, 208u, 153u, 210u, 71u, 31u, 12u, 9u, 161u, 155u, 100u,
113u, 160u, 192u, 154u, 25u, 34u, 71u, 25u, 12u, 9u, 51u, 17u, 197u,
195u, 2u, 104u, 96u, 217u, 28u, 76u, 48u, 36u, 200u, 71u, 17u, 12u,
9u, 161u, 123u, 36u, 113u, 0u, 192u, 147u, 49u, 28u, 60u, 48u, 50u,
1u, 47u, 134u, 80u, 215u, 51u, 145u, 52u, 16u, 209u, 51u, 146u, 68u,
204u, 25u, 67u, 92u, 206u, 67u, 10u, 144u, 213u, 51u, 146u, 72u, 77u,
11u, 147u, 36u, 112u, 224u, 192u, 154u, 36u, 62u, 71u, 9u, 12u, 9u,
162u, 58u, 164u, 112u, 128u, 192u, 147u, 73u, 28u, 24u, 48u, 38u,
136u, 175u, 145u, 192u, 195u, 2u, 104u, 138u, 121u, 28u, 4u, 48u, 38u,
136u, 139u, 145u, 192u, 3u, 2u, 77u, 36u, 49u, 6u, 4u, 208u, 144u,
210u, 64u,};
static unsigned char uvector__00036[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 53u, 70u, 19u, 12u, 55u, 47u, 137u, 122u,
100u, 36u, 54u, 197u, 66u, 99u, 140u, 38u, 25u, 4u, 134u, 80u, 247u,
21u, 72u, 36u, 50u, 137u, 138u, 95u, 33u, 158u, 96u, 152u, 72u, 151u,
201u, 18u, 244u, 84u, 73u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u,
193u, 216u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u,
224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00037[] = {
 0u, 3u, 129u, 134u, 9u, 142u, 48u, 152u, 102u, 178u, 71u, 2u, 12u,
9u, 53u, 145u, 192u, 67u, 2u, 76u, 36u, 112u, 0u, 192u, 145u, 129u,
12u, 65u, 129u, 140u, 70u, 19u, 12u, 214u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00038[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 54u, 70u, 19u, 12u, 214u, 68u, 199u, 24u,
76u, 51u, 89u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u, 193u, 72u,
142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u,
129u, 48u, 28u, 36u,};
static unsigned char uvector__00039[] = {
 0u, 3u, 129u, 134u, 8u, 218u, 48u, 138u, 98u, 162u, 71u, 2u, 12u, 9u,
21u, 17u, 192u, 67u, 2u, 69u, 36u, 112u, 0u, 192u, 145u, 129u, 12u,
65u, 129u, 140u, 69u, 49u, 81u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00040[] = {
 0u, 3u, 149u, 134u, 9u, 28u, 9u, 32u, 57u, 8u, 166u, 42u, 34u, 54u,
140u, 34u, 152u, 168u, 146u, 36u, 153u, 12u, 62u, 73u, 36u, 144u, 27u,
0u, 107u, 146u, 75u, 241u, 1u, 172u, 53u, 73u, 36u, 137u, 32u, 52u,
73u, 36u, 51u, 201u, 82u, 25u, 36u, 52u, 183u, 18u, 68u, 144u, 26u,
36u, 146u, 29u, 228u, 146u, 73u, 28u, 168u, 48u, 38u, 21u, 36u, 114u,
144u, 192u, 146u, 73u, 28u, 160u, 48u, 36u, 144u, 71u, 39u, 12u, 9u,
140u, 105u, 28u, 152u, 48u, 36u, 144u, 71u, 37u, 12u, 9u, 141u, 145u,
28u, 144u, 48u, 36u, 146u, 71u, 34u, 12u, 9u, 140u, 209u, 28u, 128u,
48u, 38u, 49u, 164u, 113u, 176u, 192u, 152u, 146u, 17u, 198u, 131u,
2u, 73u, 4u, 113u, 112u, 192u, 152u, 164u, 145u, 197u, 131u, 2u, 72u,
100u, 113u, 32u, 192u, 152u, 164u, 145u, 196u, 67u, 2u, 98u, 98u, 71u,
15u, 12u, 9u, 137u, 33u, 28u, 52u, 48u, 38u, 31u, 196u, 112u, 192u,
192u, 152u, 132u, 145u, 193u, 131u, 2u, 97u, 176u, 71u, 5u, 12u, 9u,
36u, 145u, 193u, 3u, 2u, 96u, 56u, 71u, 3u, 12u, 9u, 33u, 145u, 192u,
3u, 3u, 24u, 76u, 17u, 2u, 96u, 188u, 72u, 98u, 12u, 12u, 98u, 48u,
73u, 12u, 73u, 96u, 69u, 49u, 81u, 144u, 200u, 76u, 23u, 137u, 36u,};
static unsigned char uvector__00041[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 54u, 198u, 9u, 33u, 137u, 44u, 8u, 166u,
42u, 50u, 25u, 17u, 180u, 97u, 20u, 197u, 68u, 146u, 56u, 72u, 96u,
99u, 9u, 129u, 138u, 96u, 146u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u,
48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00042[] = {
 0u, 3u, 141u, 134u, 4u, 138u, 136u, 227u, 65u, 129u, 34u, 162u, 56u,
192u, 96u, 141u, 163u, 9u, 134u, 42u, 36u, 113u, 112u, 192u, 145u,
81u, 28u, 88u, 48u, 36u, 194u, 71u, 21u, 12u, 9u, 24u, 17u, 196u,
195u, 2u, 96u, 224u, 71u, 18u, 12u, 12u, 128u, 69u, 66u, 95u, 36u,
132u, 193u, 194u, 42u, 36u, 113u, 16u, 192u, 152u, 191u, 17u, 196u,
3u, 2u, 75u, 228u, 112u, 224u, 192u, 152u, 191u, 17u, 195u, 3u, 3u,
220u, 85u, 32u, 146u, 56u, 80u, 96u, 73u, 4u, 142u, 18u, 24u, 18u,
42u, 35u, 132u, 6u, 6u, 64u, 34u, 161u, 49u, 198u, 19u, 12u, 130u,
73u, 12u, 161u, 50u, 85u, 17u, 236u, 84u, 19u, 23u, 224u, 152u, 56u,
24u, 168u, 146u, 56u, 48u, 96u, 76u, 191u, 200u, 224u, 129u, 129u,
36u, 18u, 56u, 24u, 96u, 73u, 132u, 142u, 4u, 24u, 18u, 48u, 35u,
128u, 6u, 4u, 203u, 252u, 134u, 32u, 192u, 198u, 35u, 9u, 134u, 95u,
33u, 182u, 42u, 9u, 151u, 248u, 76u, 204u, 201u, 36u,};
static unsigned char uvector__00043[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 55u, 70u, 19u, 12u, 190u, 67u, 108u, 84u,
38u, 56u, 194u, 97u, 144u, 72u, 101u, 15u, 113u, 84u, 130u, 68u, 123u,
21u, 9u, 124u, 136u, 218u, 48u, 152u, 98u, 162u, 98u, 162u, 73u, 28u,
36u, 48u, 49u, 132u, 192u, 197u, 48u, 82u, 35u, 131u, 134u, 4u, 192u,
112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00044[] = {
 0u, 3u, 133u, 6u, 4u, 155u, 200u, 225u, 1u, 129u, 210u, 111u, 224u,
36u, 142u, 12u, 24u, 25u, 68u, 225u, 24u, 76u, 36u, 38u, 8u, 211u,
121u, 35u, 130u, 6u, 4u, 194u, 52u, 142u, 6u, 24u, 18u, 97u, 35u,
129u, 6u, 4u, 140u, 8u, 224u, 1u, 129u, 48u, 141u, 33u, 136u, 48u,
49u, 137u, 134u, 111u, 33u, 48u, 130u, 36u, 128u,};
static unsigned char uvector__00045[] = {
 0u, 3u, 130u, 134u, 9u, 196u, 57u, 9u, 134u, 111u, 33u, 148u, 78u,
17u, 132u, 194u, 67u, 164u, 223u, 192u, 76u, 222u, 79u, 0u, 156u,
137u, 28u, 16u, 48u, 36u, 228u, 71u, 0u, 12u, 12u, 97u, 48u, 52u, 9u,
130u, 113u, 33u, 136u, 48u, 49u, 136u, 193u, 39u, 32u, 152u, 14u, 18u,
64u,};
static unsigned char uvector__00046[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 57u, 198u, 9u, 57u, 9u, 196u, 57u, 9u,
134u, 111u, 33u, 148u, 78u, 17u, 132u, 194u, 67u, 164u, 223u, 192u,
76u, 222u, 79u, 0u, 156u, 137u, 35u, 132u, 134u, 6u, 48u, 152u, 24u,
166u, 9u, 36u, 112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u,
56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00047[] = {
 0u, 3u, 130u, 6u, 9u, 210u, 48u, 152u, 103u, 89u, 172u, 145u, 192u,
195u, 2u, 77u, 100u, 112u, 32u, 192u, 147u, 169u, 28u, 4u, 48u, 36u,
194u, 71u, 0u, 12u, 9u, 24u, 16u, 196u, 24u, 24u, 196u, 97u, 48u,
206u, 179u, 89u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00048[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 59u, 70u, 19u, 12u, 235u, 53u, 145u, 58u,
70u, 19u, 12u, 235u, 53u, 146u, 71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u,
23u, 8u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u,
142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00049[] = {
 0u, 3u, 177u, 134u, 8u, 218u, 48u, 152u, 68u, 234u, 37u, 232u, 168u,
146u, 71u, 98u, 12u, 9u, 129u, 233u, 29u, 132u, 48u, 36u, 234u, 71u,
95u, 12u, 9u, 130u, 81u, 29u, 120u, 48u, 36u, 188u, 71u, 93u, 12u, 9u,
21u, 17u, 214u, 195u, 2u, 96u, 148u, 71u, 89u, 12u, 9u, 129u, 233u,
29u, 96u, 48u, 36u, 194u, 71u, 87u, 12u, 9u, 24u, 17u, 213u, 3u, 4u,
109u, 24u, 76u, 34u, 117u, 18u, 249u, 36u, 142u, 166u, 24u, 19u, 34u,
226u, 58u, 144u, 96u, 73u, 212u, 142u, 160u, 24u, 19u, 35u, 178u, 58u,
120u, 96u, 73u, 124u, 142u, 154u, 24u, 19u, 35u, 178u, 58u, 88u, 96u,
76u, 139u, 136u, 233u, 65u, 129u, 38u, 18u, 58u, 72u, 96u, 72u, 192u,
142u, 140u, 24u, 25u, 230u, 9u, 132u, 145u, 209u, 67u, 2u, 76u, 36u,
116u, 16u, 192u, 202u, 38u, 41u, 124u, 132u, 207u, 40u, 38u, 65u,
164u, 142u, 126u, 24u, 19u, 66u, 22u, 136u, 231u, 193u, 129u, 37u,
242u, 57u, 224u, 96u, 77u, 8u, 90u, 35u, 157u, 6u, 7u, 184u, 170u,
65u, 36u, 115u, 128u, 192u, 146u, 9u, 28u, 220u, 48u, 36u, 84u, 71u,
54u, 12u, 12u, 128u, 69u, 66u, 99u, 140u, 38u, 25u, 4u, 146u, 25u,
66u, 104u, 82u, 96u, 77u, 8u, 79u, 9u, 128u, 225u, 36u, 115u, 64u,
192u, 154u, 23u, 44u, 71u, 50u, 12u, 9u, 32u, 145u, 204u, 67u, 2u,
76u, 36u, 115u, 0u, 192u, 145u, 129u, 28u, 184u, 48u, 38u, 133u, 203u,
17u, 203u, 3u, 3u, 60u, 52u, 24u, 67u, 24u, 140u, 38u, 25u, 214u, 27u,
151u, 196u, 189u, 50u, 18u, 27u, 98u, 160u, 154u, 23u, 44u, 19u, 67u,
2u, 137u, 36u, 142u, 76u, 24u, 19u, 67u, 177u, 72u, 228u, 65u, 129u,
174u, 119u, 36u, 114u, 16u, 192u, 147u, 185u, 28u, 128u, 48u, 50u, 1u,
47u, 6u, 80u, 215u, 60u, 25u, 144u, 52u, 79u, 4u, 145u, 59u, 134u,
80u, 215u, 60u, 16u, 194u, 164u, 53u, 79u, 4u, 146u, 27u, 194u, 104u,
136u, 48u, 77u, 14u, 197u, 33u, 145u, 83u, 67u, 231u, 201u, 28u, 124u,
48u, 38u, 137u, 132u, 145u, 198u, 131u, 2u, 104u, 148u, 249u, 28u,
100u, 48u, 36u, 240u, 71u, 23u, 12u, 9u, 162u, 73u, 36u, 113u, 48u,
192u, 147u, 33u, 28u, 68u, 48u, 38u, 137u, 3u, 145u, 196u, 3u, 2u,
79u, 4u, 112u, 240u, 192u, 200u, 4u, 190u, 25u, 67u, 92u, 242u, 68u,
208u, 67u, 68u, 242u, 73u, 19u, 192u, 101u, 13u, 115u, 201u, 12u, 42u,
67u, 84u, 242u, 73u, 33u, 52u, 71u, 4u, 145u, 195u, 131u, 2u, 104u,
194u, 105u, 28u, 36u, 48u, 38u, 140u, 1u, 145u, 194u, 3u, 2u, 79u,
68u, 112u, 96u, 192u, 154u, 47u, 26u, 71u, 3u, 12u, 9u, 162u, 235u,
164u, 112u, 16u, 192u, 154u, 46u, 138u, 71u, 0u, 12u, 9u, 61u, 16u,
196u, 24u, 19u, 67u, 193u, 73u, 0u,};
static unsigned char uvector__00050[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 61u, 198u, 19u, 12u, 235u, 13u, 203u,
226u, 94u, 153u, 9u, 13u, 177u, 80u, 152u, 227u, 9u, 134u, 65u, 33u,
148u, 61u, 197u, 82u, 9u, 12u, 162u, 98u, 151u, 200u, 103u, 152u, 38u,
18u, 35u, 104u, 194u, 97u, 19u, 168u, 151u, 201u, 36u, 70u, 209u,
132u, 194u, 39u, 81u, 47u, 69u, 68u, 146u, 73u, 28u, 36u, 48u, 49u,
132u, 192u, 197u, 48u, 128u, 35u, 131u, 134u, 4u, 192u, 112u, 142u,
4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00051[] = {
 0u, 3u, 156u, 6u, 9u, 86u, 41u, 138u, 137u, 28u, 220u, 48u, 36u, 84u,
71u, 54u, 12u, 9u, 20u, 145u, 205u, 3u, 4u, 225u, 24u, 69u, 36u, 142u,
102u, 24u, 18u, 41u, 35u, 153u, 6u, 4u, 140u, 8u, 230u, 1u, 129u, 48u,
173u, 35u, 150u, 6u, 6u, 121u, 242u, 48u, 36u, 114u, 176u, 192u, 145u,
129u, 28u, 156u, 48u, 38u, 45u, 132u, 114u, 80u, 192u, 247u, 20u,
200u, 36u, 142u, 70u, 24u, 18u, 65u, 35u, 145u, 6u, 4u, 138u, 72u,
228u, 33u, 130u, 44u, 17u, 76u, 84u, 68u, 91u, 32u, 144u, 240u, 19u,
31u, 240u, 152u, 182u, 16u, 152u, 86u, 132u, 192u, 112u, 145u, 200u,
3u, 2u, 101u, 106u, 71u, 31u, 12u, 9u, 22u, 145u, 199u, 67u, 2u, 72u,
36u, 113u, 176u, 192u, 153u, 90u, 145u, 198u, 131u, 3u, 32u, 17u,
104u, 15u, 240u, 36u, 94u, 99u, 2u, 72u, 76u, 163u, 137u, 28u, 96u,
48u, 38u, 132u, 12u, 17u, 197u, 195u, 2u, 70u, 4u, 113u, 80u, 192u,
154u, 16u, 48u, 71u, 19u, 12u, 17u, 136u, 97u, 140u, 12u, 101u, 21u,
18u, 56u, 144u, 96u, 72u, 192u, 142u, 32u, 24u, 18u, 50u, 35u, 134u,
6u, 4u, 208u, 161u, 50u, 56u, 72u, 96u, 72u, 192u, 142u, 14u, 24u,
25u, 68u, 103u, 21u, 70u, 70u, 42u, 9u, 161u, 66u, 100u, 142u, 10u,
24u, 19u, 67u, 17u, 72u, 224u, 97u, 129u, 35u, 34u, 56u, 16u, 96u,
72u, 192u, 142u, 0u, 24u, 19u, 67u, 17u, 72u, 98u, 12u, 12u, 98u, 48u,
34u, 52u, 140u, 35u, 34u, 27u, 98u, 208u, 154u, 16u, 48u, 19u, 40u,
226u, 73u, 0u,};
static unsigned char uvector__00052[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 62u, 198u, 4u, 70u, 145u, 132u, 100u, 67u,
108u, 90u, 3u, 252u, 9u, 23u, 152u, 192u, 136u, 176u, 69u, 49u, 81u,
17u, 108u, 130u, 67u, 192u, 123u, 138u, 100u, 18u, 25u, 231u, 200u,
192u, 145u, 56u, 70u, 17u, 73u, 18u, 172u, 83u, 21u, 18u, 73u, 28u,
36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u, 4u, 192u,
112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00053[] = {
 0u, 3u, 175u, 134u, 7u, 16u, 230u, 39u, 232u, 166u, 42u, 49u, 89u,
36u, 117u, 224u, 192u, 152u, 19u, 145u, 215u, 67u, 2u, 69u, 100u,
117u, 176u, 192u, 152u, 25u, 17u, 214u, 131u, 2u, 79u, 196u, 117u,
144u, 192u, 145u, 81u, 29u, 96u, 48u, 36u, 82u, 71u, 86u, 12u, 9u,
129u, 145u, 29u, 84u, 48u, 36u, 86u, 71u, 83u, 12u, 15u, 113u, 76u,
130u, 72u, 234u, 33u, 129u, 36u, 18u, 58u, 128u, 96u, 72u, 164u, 142u,
158u, 24u, 34u, 193u, 20u, 197u, 68u, 69u, 178u, 9u, 12u, 161u, 49u,
219u, 138u, 194u, 96u, 56u, 73u, 29u, 56u, 48u, 38u, 82u, 36u, 116u,
208u, 192u, 145u, 105u, 29u, 44u, 48u, 36u, 130u, 71u, 73u, 12u, 9u,
148u, 137u, 29u, 24u, 48u, 50u, 1u, 22u, 128u, 255u, 2u, 69u, 230u,
48u, 36u, 134u, 71u, 16u, 34u, 176u, 194u, 164u, 144u, 153u, 53u, 18u,
71u, 68u, 12u, 9u, 158u, 161u, 29u, 12u, 48u, 36u, 96u, 71u, 65u, 12u,
9u, 158u, 161u, 28u, 252u, 48u, 70u, 33u, 134u, 48u, 49u, 148u, 84u,
72u, 231u, 193u, 129u, 35u, 2u, 57u, 224u, 96u, 72u, 200u, 142u, 112u,
24u, 19u, 66u, 128u, 72u, 230u, 161u, 129u, 35u, 2u, 57u, 152u, 96u,
101u, 17u, 156u, 85u, 25u, 24u, 168u, 38u, 133u, 0u, 146u, 57u, 136u,
96u, 77u, 12u, 19u, 35u, 151u, 134u, 4u, 140u, 136u, 229u, 193u, 129u,
35u, 2u, 57u, 96u, 96u, 77u, 12u, 19u, 35u, 149u, 6u, 6u, 121u, 252u,
145u, 201u, 131u, 2u, 104u, 114u, 161u, 28u, 136u, 48u, 60u, 7u, 145u,
49u, 80u, 128u, 18u, 19u, 67u, 149u, 9u, 28u, 128u, 48u, 38u, 135u,
167u, 145u, 199u, 195u, 2u, 80u, 128u, 17u, 199u, 67u, 2u, 104u, 122u,
121u, 28u, 108u, 48u, 51u, 195u, 65u, 132u, 49u, 136u, 194u, 126u,
134u, 232u, 64u, 8u, 77u, 15u, 25u, 17u, 164u, 97u, 25u, 16u, 219u,
22u, 132u, 207u, 80u, 38u, 132u, 6u, 18u, 73u, 28u, 84u, 48u, 38u,
136u, 160u, 145u, 196u, 67u, 3u, 93u, 8u, 9u, 35u, 136u, 6u, 4u, 161u,
1u, 35u, 135u, 134u, 6u, 64u, 40u, 64u, 3u, 40u, 107u, 161u, 2u, 34u,
104u, 33u, 162u, 132u, 8u, 146u, 40u, 64u, 67u, 40u, 107u, 161u, 2u,
33u, 133u, 72u, 106u, 161u, 2u, 36u, 144u, 222u, 19u, 68u, 231u, 66u,
104u, 138u, 9u, 12u, 138u, 154u, 35u, 186u, 72u, 225u, 193u, 129u,
52u, 88u, 64u, 142u, 18u, 24u, 19u, 69u, 112u, 8u, 225u, 1u, 129u,
40u, 64u, 200u, 224u, 193u, 129u, 52u, 84u, 120u, 142u, 6u, 24u, 19u,
69u, 67u, 136u, 224u, 33u, 129u, 52u, 83u, 64u, 142u, 0u, 24u, 18u,
132u, 12u, 134u, 32u, 192u, 154u, 35u, 2u, 72u,};
static unsigned char uvector__00054[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 31u, 198u, 19u, 244u, 55u, 66u, 0u, 67u,
192u, 121u, 19u, 21u, 8u, 1u, 33u, 158u, 127u, 36u, 70u, 145u, 132u,
100u, 67u, 108u, 90u, 3u, 252u, 9u, 23u, 152u, 192u, 134u, 71u, 16u,
34u, 176u, 194u, 164u, 145u, 22u, 8u, 166u, 42u, 34u, 45u, 144u, 72u,
101u, 15u, 113u, 76u, 130u, 98u, 176u, 226u, 28u, 196u, 253u, 20u,
197u, 70u, 43u, 36u, 146u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 197u,
48u, 98u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u,
194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00055[] = {
 0u, 3u, 131u, 134u, 8u, 218u, 43u, 138u, 68u, 253u, 21u, 18u, 71u,
6u, 12u, 9u, 129u, 233u, 28u, 20u, 48u, 36u, 252u, 71u, 4u, 12u, 9u,
21u, 17u, 192u, 131u, 2u, 96u, 122u, 71u, 1u, 12u, 9u, 20u, 145u,
192u, 3u, 2u, 69u, 100u, 49u, 6u, 6u, 49u, 20u, 197u, 68u, 38u, 3u,
132u, 144u,};
static unsigned char uvector__00056[] = {
 0u, 3u, 155u, 134u, 4u, 138u, 200u, 230u, 161u, 130u, 132u, 18u, 48u,
14u, 66u, 41u, 138u, 136u, 141u, 162u, 184u, 164u, 79u, 209u, 81u,
36u, 145u, 204u, 195u, 3u, 24u, 76u, 27u, 130u, 97u, 16u, 72u, 230u,
65u, 129u, 35u, 2u, 57u, 128u, 96u, 76u, 17u, 136u, 229u, 225u, 129u,
144u, 8u, 172u, 65u, 210u, 33u, 36u, 38u, 8u, 209u, 89u, 35u, 150u,
134u, 4u, 198u, 164u, 142u, 88u, 24u, 18u, 68u, 35u, 149u, 6u, 4u,
198u, 164u, 142u, 80u, 24u, 35u, 16u, 195u, 24u, 24u, 202u, 42u, 36u,
114u, 112u, 192u, 145u, 129u, 28u, 148u, 48u, 36u, 100u, 71u, 33u,
12u, 9u, 148u, 81u, 28u, 120u, 48u, 36u, 96u, 71u, 28u, 12u, 12u,
162u, 51u, 138u, 163u, 35u, 21u, 4u, 202u, 40u, 145u, 198u, 131u, 2u,
103u, 44u, 71u, 24u, 12u, 9u, 25u, 17u, 197u, 195u, 2u, 70u, 4u, 113u,
80u, 192u, 153u, 203u, 17u, 196u, 195u, 4u, 98u, 24u, 100u, 67u, 66u,
11u, 21u, 18u, 56u, 144u, 96u, 73u, 16u, 142u, 32u, 24u, 18u, 132u,
20u, 142u, 24u, 24u, 19u, 66u, 81u, 72u, 225u, 33u, 129u, 36u, 66u,
56u, 56u, 96u, 101u, 17u, 156u, 85u, 66u, 10u, 98u, 160u, 154u, 18u,
138u, 72u, 224u, 161u, 129u, 52u, 46u, 12u, 142u, 6u, 24u, 18u, 132u,
20u, 142u, 4u, 24u, 18u, 68u, 35u, 128u, 6u, 4u, 208u, 184u, 50u, 24u,
131u, 3u, 24u, 159u, 164u, 72u, 192u, 136u, 210u, 68u, 161u, 5u, 34u,
52u, 140u, 35u, 34u, 35u, 216u, 172u, 38u, 53u, 33u, 48u, 70u, 36u,
144u,};
static unsigned char uvector__00057[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 13u, 63u, 72u, 145u, 129u, 17u, 164u,
137u, 66u, 10u, 68u, 105u, 24u, 70u, 68u, 71u, 177u, 88u, 131u, 164u,
66u, 40u, 65u, 35u, 0u, 228u, 34u, 152u, 168u, 136u, 218u, 43u, 138u,
68u, 253u, 21u, 18u, 73u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 116u,
193u, 96u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u,
224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00058[] = {
 0u, 3u, 132u, 6u, 8u, 218u, 48u, 138u, 68u, 253u, 20u, 197u, 68u,
145u, 193u, 195u, 2u, 96u, 122u, 71u, 6u, 12u, 9u, 63u, 17u, 193u,
67u, 2u, 69u, 68u, 112u, 64u, 192u, 145u, 73u, 28u, 8u, 48u, 38u, 7u,
164u, 112u, 16u, 192u, 145u, 73u, 28u, 0u, 48u, 36u, 96u, 67u, 16u,
96u, 99u, 17u, 76u, 84u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00059[] = {
 0u, 3u, 140u, 6u, 10u, 16u, 72u, 192u, 57u, 8u, 166u, 42u, 34u, 54u,
140u, 34u, 145u, 63u, 69u, 49u, 81u, 36u, 145u, 197u, 131u, 3u, 24u,
76u, 17u, 2u, 96u, 188u, 72u, 226u, 161u, 129u, 35u, 2u, 56u, 152u,
96u, 140u, 67u, 12u, 96u, 99u, 40u, 168u, 145u, 196u, 131u, 2u, 70u,
4u, 113u, 0u, 192u, 145u, 145u, 28u, 48u, 48u, 38u, 40u, 4u, 112u,
144u, 192u, 145u, 129u, 28u, 28u, 48u, 50u, 136u, 206u, 42u, 140u,
140u, 84u, 19u, 20u, 2u, 71u, 5u, 12u, 9u, 146u, 97u, 28u, 12u, 48u,
36u, 100u, 71u, 2u, 12u, 9u, 24u, 17u, 192u, 3u, 2u, 100u, 152u, 67u,
16u, 96u, 99u, 19u, 244u, 96u, 68u, 105u, 24u, 70u, 68u, 38u, 3u,
132u, 144u,};
static unsigned char uvector__00060[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 15u, 63u, 70u, 4u, 70u, 145u, 132u,
100u, 69u, 8u, 36u, 96u, 28u, 132u, 83u, 21u, 17u, 27u, 70u, 17u, 72u,
159u, 162u, 152u, 168u, 146u, 73u, 28u, 36u, 48u, 49u, 132u, 192u,
221u, 48u, 78u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u,
1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00061[] = {
 0u, 3u, 129u, 6u, 8u, 254u, 48u, 159u, 137u, 28u, 4u, 48u, 36u, 252u,
71u, 0u, 12u, 9u, 24u, 16u, 196u, 24u, 24u, 196u, 253u, 24u, 16u,
152u, 14u, 18u, 64u,};
static unsigned char uvector__00062[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 17u, 63u, 70u, 4u, 71u, 241u, 132u,
252u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 221u, 48u, 78u, 35u, 131u,
134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u,
7u, 9u, 0u,};
static unsigned char uvector__00063[] = {
 0u, 3u, 151u, 6u, 7u, 18u, 71u, 45u, 12u, 19u, 244u, 83u, 21u, 18u,
57u, 96u, 96u, 73u, 248u, 142u, 86u, 24u, 18u, 42u, 35u, 149u, 6u, 4u,
138u, 72u, 229u, 1u, 129u, 48u, 67u, 35u, 146u, 134u, 7u, 184u, 166u,
65u, 36u, 114u, 48u, 192u, 146u, 9u, 28u, 136u, 48u, 36u, 82u, 71u,
33u, 12u, 17u, 96u, 138u, 98u, 162u, 34u, 217u, 4u, 134u, 240u, 152u,
150u, 4u, 193u, 12u, 38u, 3u, 132u, 145u, 200u, 3u, 2u, 99u, 196u,
71u, 31u, 12u, 9u, 22u, 145u, 199u, 67u, 2u, 72u, 36u, 113u, 176u,
192u, 152u, 241u, 17u, 198u, 131u, 3u, 32u, 17u, 104u, 15u, 240u, 36u,
94u, 99u, 2u, 72u, 100u, 113u, 80u, 152u, 221u, 146u, 71u, 24u, 12u,
9u, 153u, 129u, 28u, 92u, 48u, 36u, 96u, 71u, 21u, 12u, 9u, 153u,
129u, 28u, 76u, 48u, 70u, 33u, 134u, 48u, 49u, 148u, 84u, 72u, 226u,
65u, 129u, 35u, 2u, 56u, 128u, 96u, 72u, 200u, 142u, 24u, 24u, 19u,
66u, 22u, 72u, 225u, 33u, 129u, 35u, 2u, 56u, 56u, 96u, 101u, 17u,
156u, 85u, 25u, 24u, 168u, 38u, 132u, 44u, 146u, 56u, 40u, 96u, 77u,
10u, 139u, 35u, 129u, 134u, 4u, 140u, 136u, 224u, 65u, 129u, 35u, 2u,
56u, 0u, 96u, 77u, 10u, 139u, 33u, 136u, 48u, 49u, 136u, 194u, 126u,
34u, 52u, 140u, 35u, 34u, 27u, 98u, 208u, 153u, 152u, 4u, 205u, 160u,
146u, 64u,};
static unsigned char uvector__00064[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 9u, 24u, 79u, 196u, 70u, 145u, 132u,
100u, 67u, 108u, 90u, 3u, 252u, 9u, 23u, 152u, 192u, 134u, 71u, 21u,
17u, 96u, 138u, 98u, 162u, 34u, 217u, 4u, 134u, 240u, 247u, 20u, 200u,
36u, 79u, 209u, 76u, 84u, 67u, 137u, 36u, 146u, 71u, 9u, 12u, 12u,
97u, 48u, 55u, 76u, 19u, 136u, 224u, 225u, 129u, 48u, 28u, 35u, 129u,
6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00065[] = {
 0u, 3u, 129u, 6u, 10u, 16u, 72u, 194u, 126u, 36u, 112u, 16u, 192u,
147u, 241u, 28u, 0u, 48u, 36u, 96u, 67u, 16u, 96u, 99u, 19u, 244u,
96u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00066[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 19u, 63u, 70u, 4u, 80u, 130u, 70u,
19u, 241u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 116u, 193u, 56u,
142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u,
129u, 48u, 28u, 36u,};
static unsigned char uvector__00067[] = {
 0u, 3u, 129u, 134u, 8u, 214u, 48u, 138u, 34u, 226u, 71u, 2u, 12u, 9u,
23u, 17u, 192u, 67u, 2u, 69u, 4u, 112u, 0u, 192u, 145u, 129u, 12u,
65u, 129u, 140u, 69u, 17u, 116u, 96u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00068[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 21u, 20u, 69u, 209u, 129u, 17u, 172u,
97u, 20u, 69u, 196u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u, 5u,
130u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u,
128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00069[] = {
 0u, 3u, 133u, 6u, 9u, 194u, 48u, 138u, 73u, 28u, 36u, 48u, 36u, 82u,
71u, 8u, 12u, 9u, 24u, 17u, 193u, 131u, 3u, 192u, 159u, 162u, 152u,
168u, 132u, 192u, 112u, 145u, 193u, 67u, 2u, 97u, 112u, 71u, 4u, 12u,
9u, 63u, 17u, 192u, 195u, 2u, 69u, 68u, 112u, 32u, 192u, 145u, 73u,
28u, 0u, 48u, 38u, 23u, 4u, 49u, 6u, 6u, 49u, 20u, 197u, 68u, 38u,
21u, 164u, 144u,};
static unsigned char uvector__00070[] = {
 0u, 3u, 129u, 134u, 10u, 16u, 72u, 192u, 57u, 8u, 166u, 42u, 33u,
224u, 79u, 209u, 76u, 84u, 68u, 225u, 24u, 69u, 36u, 146u, 71u, 1u,
12u, 12u, 97u, 48u, 68u, 9u, 130u, 241u, 35u, 128u, 6u, 4u, 140u, 8u,
98u, 12u, 12u, 98u, 126u, 140u, 8u, 76u, 7u, 9u, 32u,};
static unsigned char uvector__00071[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 23u, 63u, 70u, 4u, 80u, 130u, 70u,
1u, 200u, 69u, 49u, 81u, 15u, 2u, 126u, 138u, 98u, 162u, 39u, 8u,
194u, 41u, 36u, 146u, 71u, 9u, 12u, 12u, 97u, 48u, 55u, 76u, 19u,
136u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u,
0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00072[] = {
 0u, 3u, 157u, 6u, 7u, 18u, 71u, 56u, 12u, 20u, 33u, 145u, 92u, 83u,
21u, 18u, 57u, 184u, 96u, 74u, 16u, 194u, 57u, 176u, 96u, 72u, 168u,
142u, 106u, 24u, 18u, 41u, 35u, 154u, 6u, 4u, 137u, 72u, 230u, 65u,
128u, 80u, 134u, 197u, 49u, 81u, 161u, 14u, 20u, 33u, 225u, 48u, 67u,
36u, 142u, 98u, 24u, 18u, 37u, 35u, 152u, 6u, 4u, 196u, 248u, 142u,
94u, 24u, 19u, 20u, 18u, 57u, 112u, 96u, 74u, 16u, 210u, 57u, 104u,
96u, 72u, 168u, 142u, 88u, 24u, 18u, 41u, 35u, 149u, 6u, 4u, 197u, 4u,
142u, 80u, 24u, 40u, 68u, 9u, 28u, 156u, 48u, 37u, 8u, 129u, 28u,
148u, 48u, 61u, 197u, 50u, 9u, 35u, 145u, 134u, 4u, 144u, 72u, 228u,
65u, 129u, 34u, 146u, 57u, 8u, 96u, 139u, 4u, 83u, 21u, 17u, 22u,
200u, 36u, 54u, 0u, 153u, 172u, 132u, 203u, 232u, 132u, 196u, 248u,
52u, 132u, 192u, 112u, 146u, 71u, 32u, 12u, 9u, 161u, 1u, 228u, 113u,
240u, 192u, 145u, 105u, 28u, 116u, 48u, 36u, 130u, 71u, 27u, 12u, 9u,
161u, 1u, 228u, 113u, 160u, 192u, 200u, 4u, 90u, 3u, 252u, 9u, 23u,
152u, 192u, 146u, 25u, 28u, 84u, 38u, 125u, 4u, 145u, 198u, 3u, 2u,
104u, 88u, 145u, 28u, 92u, 48u, 36u, 96u, 71u, 21u, 12u, 9u, 161u,
98u, 68u, 113u, 48u, 193u, 24u, 134u, 24u, 192u, 198u, 81u, 81u, 35u,
137u, 6u, 4u, 140u, 8u, 226u, 1u, 129u, 35u, 34u, 56u, 96u, 96u, 77u,
13u, 71u, 35u, 132u, 134u, 4u, 140u, 8u, 224u, 225u, 129u, 148u, 70u,
113u, 84u, 100u, 98u, 160u, 154u, 26u, 142u, 72u, 224u, 161u, 129u,
52u, 61u, 100u, 142u, 6u, 24u, 18u, 50u, 35u, 129u, 6u, 4u, 140u, 8u,
224u, 1u, 129u, 52u, 61u, 100u, 134u, 32u, 192u, 198u, 35u, 10u, 16u,
218u, 17u, 10u, 16u, 194u, 35u, 72u, 194u, 50u, 33u, 182u, 45u, 9u,
161u, 98u, 65u, 52u, 46u, 40u, 146u, 64u,};
static unsigned char uvector__00073[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 35u, 24u, 80u, 134u, 208u, 136u, 80u,
134u, 17u, 26u, 70u, 17u, 145u, 13u, 177u, 104u, 15u, 240u, 36u, 94u,
99u, 2u, 25u, 28u, 84u, 69u, 130u, 41u, 138u, 136u, 139u, 100u, 18u,
27u, 0u, 123u, 138u, 100u, 18u, 40u, 68u, 9u, 2u, 132u, 54u, 41u,
138u, 141u, 8u, 112u, 161u, 15u, 20u, 33u, 145u, 92u, 83u, 21u, 18u,
67u, 72u, 113u, 36u, 146u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 221u,
48u, 116u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u,
194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00074[] = {
 0u, 1u, 136u, 48u, 49u, 171u, 113u, 36u,};
static unsigned char uvector__00075[] = {
 0u, 3u, 128u, 6u, 4u, 138u, 200u, 98u, 12u, 12u, 98u, 43u, 138u, 98u,
163u, 21u, 146u, 64u,};
static unsigned char uvector__00076[] = {
 0u, 3u, 144u, 134u, 10u, 17u, 24u, 194u, 132u, 54u, 95u, 14u, 66u,
43u, 138u, 98u, 163u, 21u, 146u, 71u, 32u, 12u, 9u, 66u, 36u, 71u,
31u, 12u, 9u, 47u, 145u, 199u, 131u, 2u, 80u, 134u, 145u, 199u, 67u,
2u, 70u, 4u, 113u, 176u, 192u, 207u, 13u, 6u, 16u, 198u, 35u, 10u,
16u, 216u, 108u, 75u, 225u, 201u, 91u, 137u, 33u, 48u, 28u, 36u, 145u,
197u, 67u, 2u, 98u, 190u, 71u, 17u, 12u, 13u, 116u, 34u, 100u, 142u,
32u, 24u, 18u, 132u, 76u, 142u, 30u, 24u, 25u, 0u, 151u, 195u, 40u,
107u, 161u, 20u, 33u, 49u, 190u, 13u, 20u, 34u, 132u, 145u, 66u, 38u,
25u, 67u, 93u, 8u, 161u, 12u, 42u, 67u, 85u, 8u, 161u, 36u, 134u,
240u, 153u, 33u, 132u, 197u, 124u, 134u, 69u, 76u, 118u, 201u, 28u,
56u, 48u, 38u, 110u, 164u, 112u, 144u, 192u, 153u, 162u, 145u, 194u,
3u, 2u, 80u, 138u, 145u, 193u, 131u, 2u, 102u, 6u, 71u, 3u, 12u, 9u,
66u, 44u, 71u, 1u, 12u, 9u, 150u, 129u, 28u, 0u, 48u, 37u, 8u, 169u,
12u, 65u, 129u, 49u, 127u, 36u,};
static unsigned char uvector__00077[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 66u, 47u, 24u, 80u, 134u, 195u, 98u, 95u,
14u, 74u, 220u, 73u, 20u, 34u, 49u, 133u, 8u, 108u, 190u, 28u, 132u,
87u, 20u, 197u, 70u, 43u, 36u, 145u, 194u, 195u, 3u, 24u, 76u, 13u,
211u, 8u, 130u, 56u, 72u, 96u, 76u, 7u, 8u, 224u, 129u, 129u, 48u,
28u, 35u, 129u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00078[] = {
 0u, 3u, 130u, 6u, 10u, 17u, 24u, 194u, 132u, 54u, 95u, 14u, 66u, 43u,
138u, 98u, 163u, 21u, 146u, 71u, 3u, 12u, 9u, 66u, 48u, 71u, 2u, 12u,
9u, 47u, 145u, 192u, 67u, 2u, 80u, 134u, 145u, 192u, 3u, 2u, 70u, 4u,
49u, 6u, 6u, 49u, 66u, 27u, 24u, 75u, 228u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00079[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 66u, 51u, 66u, 27u, 24u, 75u, 228u, 80u,
136u, 198u, 20u, 33u, 178u, 248u, 114u, 17u, 92u, 83u, 21u, 24u, 172u,
146u, 71u, 11u, 12u, 12u, 97u, 48u, 55u, 76u, 23u, 136u, 225u, 33u,
129u, 48u, 28u, 35u, 130u, 6u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u,
194u, 64u,};
static unsigned char uvector__00080[] = {
 0u, 3u, 133u, 6u, 4u, 155u, 200u, 225u, 1u, 129u, 210u, 111u, 224u,
36u, 142u, 12u, 24u, 25u, 69u, 8u, 108u, 83u, 21u, 16u, 152u, 35u,
77u, 228u, 142u, 10u, 24u, 19u, 8u, 210u, 56u, 32u, 96u, 74u, 16u,
210u, 56u, 24u, 96u, 72u, 168u, 142u, 4u, 24u, 18u, 41u, 35u, 128u,
6u, 4u, 194u, 52u, 134u, 32u, 192u, 198u, 34u, 152u, 170u, 111u, 33u,
48u, 130u, 36u, 128u,};
static unsigned char uvector__00081[] = {
 0u, 3u, 130u, 134u, 8u, 214u, 48u, 14u, 66u, 41u, 138u, 166u, 242u,
25u, 69u, 8u, 108u, 83u, 21u, 16u, 233u, 55u, 240u, 19u, 55u, 147u,
192u, 9u, 28u, 4u, 48u, 49u, 132u, 192u, 248u, 38u, 12u, 68u, 142u,
0u, 24u, 18u, 48u, 33u, 136u, 48u, 49u, 138u, 16u, 216u, 192u, 136u,
118u, 53u, 140u, 2u, 96u, 103u, 192u, 9u, 36u,};
static unsigned char uvector__00082[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 53u, 66u, 27u, 24u, 17u, 14u, 198u,
177u, 128u, 114u, 17u, 76u, 85u, 55u, 144u, 202u, 40u, 67u, 98u, 152u,
168u, 135u, 73u, 191u, 128u, 153u, 188u, 158u, 0u, 73u, 28u, 36u, 48u,
49u, 132u, 192u, 221u, 48u, 84u, 35u, 131u, 134u, 4u, 192u, 112u,
142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00083[] = {
 0u, 3u, 134u, 6u, 8u, 218u, 132u, 110u, 41u, 138u, 137u, 28u, 44u,
48u, 36u, 84u, 71u, 10u, 12u, 9u, 20u, 145u, 194u, 67u, 2u, 80u, 141u,
145u, 193u, 131u, 3u, 120u, 148u, 104u, 70u, 226u, 146u, 19u, 1u,
194u, 71u, 4u, 12u, 9u, 135u, 193u, 28u, 12u, 48u, 36u, 82u, 71u, 2u,
12u, 9u, 66u, 54u, 71u, 0u, 12u, 9u, 135u, 193u, 12u, 65u, 129u, 140u,
69u, 49u, 81u, 9u, 135u, 105u, 36u,};
static unsigned char uvector__00084[] = {
 0u, 3u, 152u, 134u, 4u, 161u, 27u, 35u, 151u, 134u, 10u, 16u, 74u,
17u, 192u, 228u, 34u, 152u, 168u, 134u, 241u, 40u, 208u, 141u, 197u,
36u, 70u, 212u, 35u, 113u, 76u, 84u, 73u, 36u, 114u, 208u, 192u, 198u,
19u, 7u, 160u, 152u, 74u, 18u, 57u, 96u, 96u, 74u, 17u, 194u, 57u,
80u, 96u, 76u, 19u, 8u, 229u, 1u, 130u, 49u, 12u, 52u, 35u, 134u, 50u,
138u, 137u, 28u, 156u, 48u, 37u, 8u, 225u, 28u, 148u, 48u, 36u, 100u,
71u, 33u, 12u, 9u, 142u, 113u, 28u, 120u, 48u, 37u, 8u, 225u, 28u,
112u, 48u, 50u, 136u, 206u, 42u, 140u, 140u, 84u, 19u, 28u, 226u, 71u,
26u, 12u, 9u, 151u, 97u, 28u, 96u, 48u, 36u, 100u, 71u, 23u, 12u, 9u,
66u, 56u, 71u, 21u, 12u, 9u, 151u, 97u, 28u, 76u, 48u, 70u, 33u, 134u,
132u, 108u, 198u, 81u, 81u, 35u, 137u, 6u, 4u, 161u, 27u, 35u, 136u,
6u, 4u, 140u, 136u, 225u, 129u, 129u, 52u, 32u, 4u, 142u, 18u, 24u,
18u, 132u, 108u, 142u, 14u, 24u, 25u, 68u, 103u, 21u, 70u, 70u, 42u,
9u, 161u, 0u, 36u, 142u, 10u, 24u, 19u, 66u, 145u, 72u, 224u, 97u,
129u, 35u, 34u, 56u, 16u, 96u, 74u, 17u, 178u, 56u, 0u, 96u, 77u, 10u,
69u, 33u, 136u, 48u, 49u, 138u, 17u, 186u, 17u, 194u, 35u, 74u, 17u,
184u, 200u, 136u, 210u, 132u, 114u, 50u, 34u, 29u, 161u, 4u, 161u,
28u, 9u, 131u, 121u, 161u, 27u, 36u, 128u,};
static unsigned char uvector__00085[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 59u, 66u, 55u, 66u, 56u, 68u, 105u,
66u, 55u, 25u, 17u, 26u, 80u, 142u, 70u, 68u, 67u, 180u, 32u, 148u,
35u, 129u, 200u, 69u, 49u, 81u, 13u, 226u, 81u, 161u, 27u, 138u, 72u,
141u, 168u, 70u, 226u, 152u, 168u, 146u, 104u, 70u, 201u, 28u, 36u,
48u, 49u, 132u, 192u, 221u, 48u, 90u, 35u, 131u, 134u, 4u, 192u, 112u,
142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00086[] = {
 0u, 3u, 133u, 134u, 9u, 194u, 132u, 110u, 41u, 36u, 112u, 160u, 192u,
145u, 73u, 28u, 36u, 48u, 37u, 8u, 217u, 28u, 24u, 48u, 55u, 137u,
70u, 132u, 114u, 41u, 33u, 48u, 28u, 36u, 112u, 64u, 192u, 152u, 98u,
17u, 192u, 195u, 2u, 69u, 36u, 112u, 32u, 192u, 148u, 35u, 132u, 112u,
0u, 192u, 152u, 98u, 16u, 196u, 24u, 24u, 196u, 83u, 21u, 16u, 152u,
92u, 146u, 64u,};
static unsigned char uvector__00087[] = {
 0u, 3u, 152u, 134u, 4u, 161u, 27u, 35u, 151u, 134u, 10u, 16u, 74u,
17u, 176u, 228u, 34u, 152u, 168u, 134u, 241u, 40u, 208u, 142u, 69u,
36u, 78u, 20u, 35u, 113u, 73u, 36u, 145u, 203u, 67u, 3u, 24u, 76u,
30u, 130u, 97u, 40u, 72u, 229u, 129u, 129u, 40u, 70u, 200u, 229u, 65u,
129u, 48u, 76u, 35u, 148u, 6u, 8u, 196u, 48u, 208u, 142u, 24u, 202u,
42u, 36u, 114u, 112u, 192u, 148u, 35u, 132u, 114u, 80u, 192u, 145u,
145u, 28u, 132u, 48u, 38u, 56u, 132u, 113u, 224u, 192u, 148u, 35u,
132u, 113u, 192u, 192u, 202u, 35u, 56u, 170u, 50u, 49u, 80u, 76u,
113u, 9u, 28u, 104u, 48u, 38u, 92u, 68u, 113u, 128u, 192u, 145u, 145u,
28u, 92u, 48u, 37u, 8u, 225u, 28u, 84u, 48u, 38u, 92u, 68u, 113u, 48u,
193u, 24u, 134u, 26u, 17u, 179u, 25u, 69u, 68u, 142u, 36u, 24u, 18u,
132u, 108u, 142u, 32u, 24u, 18u, 50u, 35u, 134u, 6u, 4u, 207u, 220u,
142u, 18u, 24u, 18u, 132u, 108u, 142u, 14u, 24u, 25u, 68u, 103u, 21u,
70u, 70u, 42u, 9u, 159u, 185u, 35u, 130u, 134u, 4u, 208u, 161u, 82u,
56u, 24u, 96u, 72u, 200u, 142u, 4u, 24u, 18u, 132u, 108u, 142u, 0u,
24u, 19u, 66u, 133u, 72u, 98u, 12u, 12u, 98u, 132u, 110u, 132u, 112u,
136u, 210u, 132u, 110u, 50u, 34u, 52u, 161u, 28u, 140u, 136u, 135u,
104u, 65u, 40u, 70u, 194u, 96u, 222u, 104u, 70u, 201u, 32u,};
static unsigned char uvector__00088[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 61u, 66u, 55u, 66u, 56u, 68u, 105u,
66u, 55u, 25u, 17u, 26u, 80u, 142u, 70u, 68u, 67u, 180u, 32u, 148u,
35u, 97u, 200u, 69u, 49u, 81u, 13u, 226u, 81u, 161u, 28u, 138u, 72u,
156u, 40u, 70u, 226u, 146u, 73u, 161u, 27u, 36u, 112u, 144u, 192u,
198u, 19u, 3u, 116u, 193u, 104u, 142u, 14u, 24u, 19u, 1u, 194u, 56u,
16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00089[] = {
 0u, 3u, 133u, 6u, 9u, 194u, 132u, 110u, 41u, 36u, 112u, 144u, 192u,
145u, 73u, 28u, 32u, 48u, 37u, 8u, 217u, 28u, 24u, 48u, 60u, 9u, 70u,
132u, 114u, 41u, 33u, 48u, 28u, 36u, 112u, 64u, 192u, 152u, 98u, 17u,
192u, 195u, 2u, 69u, 36u, 112u, 32u, 192u, 148u, 35u, 132u, 112u, 0u,
192u, 152u, 98u, 16u, 196u, 24u, 24u, 196u, 83u, 21u, 16u, 152u, 92u,
146u, 64u,};
static unsigned char uvector__00090[] = {
 0u, 3u, 152u, 134u, 4u, 161u, 27u, 35u, 151u, 134u, 10u, 16u, 74u,
17u, 176u, 228u, 34u, 152u, 168u, 135u, 129u, 40u, 208u, 142u, 69u,
36u, 78u, 20u, 35u, 113u, 73u, 36u, 145u, 203u, 67u, 3u, 24u, 76u,
30u, 130u, 97u, 40u, 72u, 229u, 129u, 129u, 40u, 70u, 200u, 229u, 65u,
129u, 48u, 76u, 35u, 148u, 6u, 8u, 196u, 48u, 208u, 142u, 24u, 202u,
42u, 36u, 114u, 112u, 192u, 148u, 35u, 132u, 114u, 80u, 192u, 145u,
145u, 28u, 132u, 48u, 38u, 56u, 132u, 113u, 224u, 192u, 148u, 35u,
132u, 113u, 192u, 192u, 202u, 35u, 56u, 170u, 50u, 49u, 80u, 76u,
113u, 9u, 28u, 104u, 48u, 38u, 92u, 68u, 113u, 128u, 192u, 145u, 145u,
28u, 92u, 48u, 37u, 8u, 225u, 28u, 84u, 48u, 38u, 92u, 68u, 113u, 48u,
193u, 24u, 134u, 26u, 17u, 179u, 25u, 69u, 68u, 142u, 36u, 24u, 18u,
132u, 108u, 142u, 32u, 24u, 18u, 50u, 35u, 134u, 6u, 4u, 207u, 220u,
142u, 18u, 24u, 18u, 132u, 108u, 142u, 14u, 24u, 25u, 68u, 103u, 21u,
70u, 70u, 42u, 9u, 159u, 185u, 35u, 130u, 134u, 4u, 208u, 161u, 82u,
56u, 24u, 96u, 72u, 200u, 142u, 4u, 24u, 18u, 132u, 108u, 142u, 0u,
24u, 19u, 66u, 133u, 72u, 98u, 12u, 12u, 98u, 132u, 110u, 132u, 112u,
136u, 210u, 132u, 110u, 50u, 34u, 52u, 161u, 28u, 140u, 136u, 135u,
104u, 65u, 40u, 70u, 194u, 96u, 222u, 104u, 70u, 201u, 32u,};
static unsigned char uvector__00091[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 63u, 66u, 55u, 66u, 56u, 68u, 105u,
66u, 55u, 25u, 17u, 26u, 80u, 142u, 70u, 68u, 67u, 180u, 32u, 148u,
35u, 97u, 200u, 69u, 49u, 81u, 15u, 2u, 81u, 161u, 28u, 138u, 72u,
156u, 40u, 70u, 226u, 146u, 73u, 161u, 27u, 36u, 112u, 144u, 192u,
198u, 19u, 3u, 116u, 193u, 104u, 142u, 14u, 24u, 19u, 1u, 194u, 56u,
16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00092[] = {
 0u, 3u, 136u, 6u, 8u, 218u, 132u, 110u, 41u, 138u, 137u, 28u, 60u,
48u, 36u, 84u, 71u, 14u, 12u, 9u, 20u, 145u, 195u, 67u, 2u, 80u, 141u,
145u, 194u, 131u, 4u, 225u, 66u, 55u, 20u, 146u, 56u, 72u, 96u, 72u,
164u, 142u, 16u, 24u, 18u, 132u, 108u, 142u, 12u, 24u, 25u, 68u, 163u,
66u, 55u, 20u, 144u, 152u, 118u, 132u, 192u, 112u, 145u, 193u, 3u, 2u,
99u, 42u, 71u, 3u, 12u, 9u, 20u, 145u, 192u, 131u, 2u, 80u, 141u,
145u, 192u, 3u, 2u, 99u, 42u, 67u, 16u, 96u, 99u, 17u, 76u, 84u, 66u,
99u, 20u, 73u, 0u,};
static unsigned char uvector__00093[] = {
 0u, 3u, 152u, 134u, 4u, 161u, 27u, 35u, 151u, 134u, 10u, 16u, 74u,
17u, 192u, 228u, 34u, 152u, 168u, 134u, 81u, 40u, 208u, 141u, 197u,
36u, 78u, 20u, 35u, 113u, 73u, 17u, 181u, 8u, 220u, 83u, 21u, 18u,
73u, 28u, 180u, 48u, 49u, 132u, 193u, 232u, 38u, 18u, 132u, 142u, 88u,
24u, 18u, 132u, 112u, 142u, 84u, 24u, 19u, 4u, 194u, 57u, 64u, 96u,
140u, 67u, 13u, 8u, 225u, 140u, 162u, 162u, 71u, 39u, 12u, 9u, 66u,
56u, 71u, 37u, 12u, 9u, 25u, 17u, 200u, 67u, 2u, 99u, 240u, 71u, 30u,
12u, 9u, 66u, 56u, 71u, 28u, 12u, 12u, 162u, 51u, 138u, 163u, 35u,
21u, 4u, 199u, 224u, 145u, 198u, 131u, 2u, 102u, 44u, 71u, 24u, 12u,
9u, 25u, 17u, 197u, 195u, 2u, 80u, 142u, 17u, 197u, 67u, 2u, 102u,
44u, 71u, 19u, 12u, 17u, 136u, 97u, 161u, 27u, 49u, 148u, 84u, 72u,
226u, 65u, 129u, 40u, 70u, 200u, 226u, 1u, 129u, 35u, 34u, 56u, 96u,
96u, 77u, 8u, 75u, 35u, 132u, 134u, 4u, 161u, 27u, 35u, 131u, 134u,
6u, 81u, 25u, 197u, 81u, 145u, 138u, 130u, 104u, 66u, 89u, 35u, 130u,
134u, 4u, 208u, 168u, 242u, 56u, 24u, 96u, 72u, 200u, 142u, 4u, 24u,
18u, 132u, 108u, 142u, 0u, 24u, 19u, 66u, 163u, 200u, 98u, 12u, 12u,
98u, 132u, 110u, 132u, 112u, 136u, 210u, 132u, 110u, 50u, 34u, 52u,
161u, 28u, 140u, 136u, 135u, 104u, 65u, 40u, 71u, 2u, 96u, 222u, 104u,
70u, 201u, 32u,};
static unsigned char uvector__00094[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 129u, 66u, 55u, 66u, 56u, 68u, 105u,
66u, 55u, 25u, 17u, 26u, 80u, 142u, 70u, 68u, 67u, 180u, 32u, 148u,
35u, 129u, 200u, 69u, 49u, 81u, 12u, 162u, 81u, 161u, 27u, 138u, 72u,
156u, 40u, 70u, 226u, 146u, 35u, 106u, 17u, 184u, 166u, 42u, 36u,
154u, 17u, 178u, 71u, 9u, 12u, 12u, 97u, 48u, 55u, 76u, 22u, 136u,
224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u,
24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00095[] = {
 0u, 3u, 139u, 6u, 10u, 20u, 24u, 8u, 145u, 197u, 67u, 2u, 64u, 68u,
113u, 48u, 193u, 24u, 134u, 24u, 8u, 208u, 161u, 69u, 68u, 142u, 36u,
24u, 18u, 2u, 35u, 136u, 6u, 4u, 161u, 66u, 35u, 134u, 6u, 4u, 193u,
252u, 142u, 18u, 24u, 18u, 2u, 35u, 131u, 134u, 6u, 81u, 25u, 197u,
84u, 40u, 70u, 42u, 9u, 131u, 249u, 35u, 130u, 134u, 4u, 198u, 92u,
142u, 6u, 24u, 18u, 133u, 8u, 142u, 4u, 24u, 18u, 2u, 35u, 128u, 6u,
4u, 198u, 92u, 134u, 32u, 192u, 198u, 32u, 34u, 35u, 72u, 10u, 133u,
8u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00096[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 135u, 1u, 17u, 26u, 64u, 84u, 40u,
68u, 80u, 160u, 192u, 68u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u,
4u, 66u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u,
128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00097[] = {
 0u, 3u, 139u, 6u, 10u, 20u, 24u, 8u, 145u, 197u, 67u, 2u, 64u, 68u,
113u, 48u, 193u, 24u, 134u, 24u, 8u, 208u, 162u, 69u, 68u, 142u, 36u,
24u, 18u, 2u, 35u, 136u, 6u, 4u, 161u, 68u, 35u, 134u, 6u, 4u, 193u,
252u, 142u, 18u, 24u, 18u, 2u, 35u, 131u, 134u, 6u, 81u, 25u, 197u,
84u, 40u, 134u, 42u, 9u, 131u, 249u, 35u, 130u, 134u, 4u, 198u, 92u,
142u, 6u, 24u, 18u, 133u, 16u, 142u, 4u, 24u, 18u, 2u, 35u, 128u, 6u,
4u, 198u, 92u, 134u, 32u, 192u, 198u, 32u, 34u, 35u, 72u, 10u, 133u,
16u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00098[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 139u, 1u, 17u, 26u, 64u, 84u, 40u,
132u, 80u, 160u, 192u, 68u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u,
4u, 66u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u,
128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00099[] = {
 0u, 3u, 141u, 6u, 10u, 20u, 17u, 66u, 141u, 1u, 18u, 71u, 24u, 12u,
9u, 129u, 121u, 28u, 92u, 48u, 36u, 4u, 71u, 21u, 12u, 9u, 129u, 121u,
28u, 76u, 48u, 70u, 33u, 134u, 2u, 52u, 40u, 145u, 81u, 35u, 137u, 6u,
4u, 128u, 136u, 226u, 1u, 129u, 40u, 81u, 8u, 225u, 129u, 129u, 48u,
241u, 35u, 132u, 134u, 4u, 128u, 136u, 224u, 225u, 129u, 148u, 70u,
113u, 85u, 10u, 33u, 138u, 130u, 97u, 226u, 72u, 224u, 161u, 129u,
50u, 9u, 35u, 129u, 134u, 4u, 161u, 68u, 35u, 129u, 6u, 4u, 128u,
136u, 224u, 1u, 129u, 50u, 9u, 33u, 136u, 48u, 49u, 136u, 8u, 136u,
210u, 2u, 161u, 68u, 33u, 48u, 28u, 36u, 128u,};
static unsigned char uvector__00100[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 143u, 1u, 17u, 26u, 64u, 84u, 40u,
132u, 80u, 160u, 138u, 20u, 104u, 8u, 146u, 71u, 9u, 12u, 12u, 97u,
48u, 55u, 76u, 17u, 8u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u,
192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00101[] = {
 0u, 3u, 139u, 6u, 10u, 20u, 24u, 8u, 145u, 197u, 67u, 2u, 64u, 68u,
113u, 48u, 193u, 24u, 134u, 24u, 8u, 208u, 164u, 69u, 68u, 142u, 36u,
24u, 18u, 2u, 35u, 136u, 6u, 4u, 161u, 72u, 35u, 134u, 6u, 4u, 193u,
252u, 142u, 18u, 24u, 18u, 2u, 35u, 131u, 134u, 6u, 81u, 25u, 197u,
84u, 41u, 6u, 42u, 9u, 131u, 249u, 35u, 130u, 134u, 4u, 198u, 92u,
142u, 6u, 24u, 18u, 133u, 32u, 142u, 4u, 24u, 18u, 2u, 35u, 128u, 6u,
4u, 198u, 92u, 134u, 32u, 192u, 198u, 32u, 34u, 35u, 72u, 10u, 133u,
32u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00102[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 147u, 1u, 17u, 26u, 64u, 84u, 41u,
4u, 80u, 160u, 192u, 68u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u,
4u, 66u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u,
128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00103[] = {
 0u, 3u, 139u, 6u, 10u, 20u, 24u, 8u, 145u, 197u, 67u, 2u, 64u, 68u,
113u, 48u, 193u, 24u, 134u, 24u, 8u, 208u, 165u, 69u, 68u, 142u, 36u,
24u, 18u, 2u, 35u, 136u, 6u, 4u, 161u, 74u, 35u, 134u, 6u, 4u, 193u,
252u, 142u, 18u, 24u, 18u, 2u, 35u, 131u, 134u, 6u, 81u, 25u, 197u,
84u, 41u, 70u, 42u, 9u, 131u, 249u, 35u, 130u, 134u, 4u, 198u, 92u,
142u, 6u, 24u, 18u, 133u, 40u, 142u, 4u, 24u, 18u, 2u, 35u, 128u, 6u,
4u, 198u, 92u, 134u, 32u, 192u, 198u, 32u, 34u, 35u, 72u, 10u, 133u,
40u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00104[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 151u, 1u, 17u, 26u, 64u, 84u, 41u,
68u, 80u, 160u, 192u, 68u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u,
4u, 66u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u,
128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00105[] = {
 0u, 3u, 139u, 6u, 10u, 20u, 24u, 8u, 145u, 197u, 67u, 2u, 64u, 68u,
113u, 48u, 193u, 24u, 134u, 24u, 8u, 208u, 166u, 69u, 68u, 142u, 36u,
24u, 18u, 2u, 35u, 136u, 6u, 4u, 161u, 76u, 35u, 134u, 6u, 4u, 193u,
252u, 142u, 18u, 24u, 18u, 2u, 35u, 131u, 134u, 6u, 81u, 25u, 197u,
84u, 41u, 134u, 42u, 9u, 131u, 249u, 35u, 130u, 134u, 4u, 198u, 92u,
142u, 6u, 24u, 18u, 133u, 48u, 142u, 4u, 24u, 18u, 2u, 35u, 128u, 6u,
4u, 198u, 92u, 134u, 32u, 192u, 198u, 32u, 34u, 35u, 72u, 10u, 133u,
48u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00106[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 155u, 1u, 17u, 26u, 64u, 84u, 41u,
132u, 80u, 160u, 192u, 68u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u,
4u, 66u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u,
128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00107[] = {
 0u, 3u, 128u, 6u, 10u, 20u, 226u, 67u, 16u, 96u, 99u, 80u, 152u, 14u,
18u, 64u,};
static unsigned char uvector__00108[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 158u, 69u, 10u, 113u, 36u, 112u,
144u, 192u, 198u, 169u, 129u, 209u, 28u, 28u, 48u, 38u, 3u, 132u,
112u, 32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00109[] = {
 0u, 1u, 136u, 48u, 49u, 171u, 241u, 36u,};
static unsigned char uvector__00110[] = {
 0u, 1u, 136u, 48u, 49u, 136u, 174u, 41u, 138u, 139u, 113u, 36u,};
static unsigned char uvector__00111[] = {
 0u, 3u, 137u, 134u, 7u, 145u, 66u, 161u, 21u, 80u, 168u, 146u, 71u,
18u, 12u, 9u, 129u, 57u, 28u, 68u, 48u, 37u, 10u, 129u, 28u, 64u, 48u,
37u, 10u, 137u, 28u, 60u, 48u, 36u, 84u, 71u, 13u, 12u, 9u, 129u, 57u,
28u, 40u, 48u, 61u, 200u, 52u, 42u, 36u, 142u, 18u, 24u, 18u, 133u,
68u, 142u, 16u, 24u, 18u, 65u, 35u, 131u, 134u, 6u, 64u, 40u, 84u,
68u, 199u, 66u, 165u, 20u, 200u, 36u, 144u, 236u, 19u, 21u, 144u,
152u, 14u, 18u, 71u, 5u, 12u, 9u, 144u, 169u, 28u, 16u, 48u, 36u,
130u, 71u, 3u, 12u, 9u, 20u, 145u, 192u, 131u, 2u, 80u, 169u, 17u,
192u, 3u, 2u, 100u, 42u, 67u, 16u, 96u, 99u, 17u, 76u, 84u, 67u, 109u,
10u, 136u, 76u, 133u, 66u, 100u, 158u, 73u, 32u,};
static unsigned char uvector__00112[] = {
 0u, 3u, 131u, 6u, 10u, 17u, 26u, 21u, 48u, 228u, 34u, 152u, 168u,
134u, 218u, 21u, 17u, 49u, 208u, 169u, 69u, 50u, 9u, 14u, 193u, 238u,
65u, 161u, 81u, 33u, 228u, 80u, 168u, 69u, 84u, 42u, 36u, 146u, 67u,
146u, 191u, 16u, 228u, 34u, 184u, 166u, 42u, 45u, 196u, 145u, 193u,
67u, 2u, 80u, 170u, 17u, 193u, 3u, 2u, 80u, 170u, 145u, 192u, 67u, 3u,
24u, 76u, 18u, 130u, 96u, 200u, 72u, 224u, 1u, 129u, 40u, 84u, 200u,
98u, 12u, 12u, 98u, 133u, 78u, 133u, 72u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00113[] = {
 0u, 3u, 195u, 44u, 24u, 18u, 133u, 88u, 143u, 12u, 152u, 96u, 103u,
161u, 87u, 161u, 88u, 161u, 89u, 36u, 120u, 100u, 131u, 2u, 80u, 172u,
145u, 225u, 145u, 12u, 9u, 66u, 176u, 71u, 134u, 52u, 48u, 50u, 137u,
138u, 133u, 88u, 132u, 193u, 98u, 133u, 88u, 145u, 225u, 139u, 12u,
9u, 137u, 97u, 30u, 24u, 160u, 192u, 148u, 42u, 196u, 120u, 98u, 3u,
2u, 98u, 88u, 71u, 134u, 16u, 48u, 50u, 138u, 21u, 170u, 21u, 154u,
21u, 131u, 192u, 69u, 8u, 129u, 36u, 120u, 96u, 195u, 2u, 100u, 120u,
71u, 134u, 8u, 48u, 37u, 10u, 209u, 30u, 24u, 16u, 192u, 148u, 43u,
4u, 120u, 96u, 3u, 2u, 80u, 172u, 145u, 225u, 94u, 12u, 9u, 145u,
225u, 30u, 21u, 208u, 192u, 148u, 42u, 196u, 120u, 86u, 131u, 2u, 96u,
176u, 71u, 133u, 100u, 48u, 37u, 10u, 201u, 30u, 21u, 128u, 192u,
148u, 43u, 4u, 120u, 85u, 3u, 2u, 98u, 66u, 71u, 133u, 72u, 48u, 38u,
37u, 132u, 120u, 84u, 67u, 2u, 80u, 171u, 17u, 225u, 79u, 12u, 9u,
137u, 97u, 30u, 20u, 176u, 192u, 202u, 40u, 86u, 168u, 86u, 40u, 86u,
77u, 10u, 216u, 161u, 16u, 36u, 143u, 10u, 80u, 96u, 77u, 10u, 210u,
35u, 194u, 146u, 24u, 18u, 133u, 104u, 143u, 10u, 64u, 96u, 74u, 21u,
146u, 60u, 40u, 225u, 129u, 40u, 86u, 8u, 240u, 162u, 134u, 4u, 208u,
173u, 34u, 60u, 40u, 97u, 130u, 133u, 114u, 133u, 118u, 133u, 120u,
145u, 225u, 66u, 12u, 9u, 66u, 188u, 71u, 133u, 4u, 48u, 37u, 10u,
177u, 30u, 17u, 224u, 192u, 152u, 44u, 17u, 225u, 29u, 12u, 9u, 66u,
178u, 71u, 132u, 112u, 48u, 37u, 10u, 193u, 30u, 17u, 128u, 192u,
152u, 144u, 145u, 225u, 22u, 12u, 9u, 137u, 97u, 30u, 17u, 80u, 192u,
148u, 42u, 196u, 120u, 68u, 195u, 2u, 98u, 88u, 71u, 132u, 60u, 48u,
50u, 138u, 21u, 170u, 21u, 138u, 21u, 147u, 192u, 5u, 8u, 129u, 36u,
120u, 67u, 131u, 2u, 104u, 148u, 33u, 30u, 16u, 208u, 192u, 148u, 43u,
68u, 120u, 67u, 3u, 2u, 80u, 172u, 145u, 225u, 11u, 12u, 9u, 66u,
176u, 71u, 132u, 36u, 48u, 38u, 137u, 66u, 17u, 225u, 7u, 12u, 20u,
43u, 244u, 43u, 180u, 43u, 196u, 143u, 8u, 48u, 96u, 74u, 21u, 226u,
60u, 32u, 161u, 129u, 144u, 10u, 21u, 209u, 39u, 80u, 172u, 18u, 40u,
87u, 132u, 157u, 66u, 178u, 73u, 13u, 128u, 38u, 138u, 201u, 132u,
209u, 37u, 146u, 2u, 104u, 112u, 48u, 77u, 10u, 199u, 33u, 164u, 38u,
70u, 36u, 146u, 60u, 32u, 97u, 129u, 52u, 93u, 84u, 143u, 8u, 16u,
96u, 74u, 21u, 146u, 60u, 32u, 1u, 129u, 52u, 93u, 84u, 142u, 252u,
24u, 19u, 69u, 183u, 200u, 239u, 161u, 129u, 40u, 86u, 8u, 239u, 97u,
129u, 52u, 91u, 124u, 142u, 238u, 24u, 30u, 232u, 86u, 40u, 86u, 73u,
29u, 216u, 48u, 37u, 10u, 201u, 29u, 212u, 48u, 37u, 10u, 193u, 29u,
168u, 48u, 51u, 208u, 192u, 80u, 172u, 80u, 172u, 146u, 59u, 72u, 96u,
74u, 21u, 146u, 59u, 64u, 96u, 74u, 21u, 130u, 59u, 32u, 96u, 77u,
29u, 9u, 35u, 174u, 134u, 4u, 161u, 129u, 35u, 172u, 134u, 6u, 122u,
24u, 42u, 21u, 138u, 21u, 146u, 71u, 88u, 12u, 9u, 66u, 178u, 71u,
87u, 12u, 9u, 66u, 176u, 71u, 83u, 12u, 9u, 163u, 232u, 132u, 117u,
16u, 192u, 29u, 168u, 96u, 232u, 96u, 72u, 77u, 31u, 68u, 36u, 117u,
0u, 192u, 148u, 48u, 100u, 116u, 208u, 192u, 148u, 48u, 100u, 116u,
144u, 193u, 8u, 208u, 193u, 208u, 192u, 146u, 58u, 64u, 96u, 74u, 24u,
18u, 58u, 56u, 96u, 74u, 24u, 50u, 58u, 40u, 96u, 77u, 34u, 151u, 35u,
161u, 6u, 4u, 161u, 129u, 35u, 160u, 6u, 0u, 225u, 67u, 7u, 67u, 2u,
19u, 72u, 165u, 205u, 12u, 25u, 35u, 159u, 134u, 4u, 161u, 131u, 35u,
159u, 6u, 6u, 64u, 40u, 96u, 196u, 79u, 66u, 176u, 72u, 161u, 129u,
17u, 61u, 10u, 201u, 36u, 54u, 4u, 210u, 76u, 64u, 154u, 66u, 30u,
26u, 66u, 104u, 232u, 73u, 36u, 142u, 120u, 24u, 19u, 73u, 176u, 200u,
231u, 97u, 129u, 40u, 86u, 72u, 231u, 33u, 129u, 52u, 155u, 12u, 142u,
110u, 24u, 19u, 73u, 147u, 72u, 230u, 193u, 129u, 40u, 86u, 8u, 230u,
129u, 129u, 52u, 153u, 52u, 142u, 100u, 24u, 28u, 219u, 155u, 137u,
28u, 176u, 48u, 51u, 195u, 65u, 132u, 49u, 138u, 21u, 138u, 21u, 152u,
108u, 80u, 168u, 66u, 36u, 80u, 171u, 9u, 160u, 146u, 25u, 164u, 16u,
154u, 85u, 4u, 67u, 48u, 161u, 16u, 33u, 49u, 33u, 33u, 152u, 80u,
173u, 80u, 169u, 208u, 169u, 17u, 66u, 35u, 66u, 166u, 28u, 132u, 83u,
21u, 16u, 219u, 66u, 162u, 38u, 58u, 21u, 40u, 166u, 65u, 33u, 216u,
61u, 200u, 52u, 42u, 36u, 60u, 138u, 21u, 8u, 170u, 133u, 68u, 146u,
72u, 114u, 87u, 226u, 28u, 132u, 87u, 20u, 197u, 69u, 184u, 146u, 19u,
73u, 131u, 3u, 40u, 77u, 27u, 194u, 224u, 1u, 52u, 90u, 120u, 146u,
72u, 228u, 193u, 129u, 52u, 171u, 100u, 142u, 68u, 24u, 26u, 232u,
97u, 9u, 28u, 132u, 48u, 37u, 12u, 33u, 28u, 128u, 48u, 50u, 1u, 66u,
172u, 25u, 67u, 93u, 12u, 41u, 9u, 165u, 128u, 129u, 162u, 134u, 20u,
146u, 40u, 97u, 3u, 40u, 107u, 161u, 133u, 33u, 133u, 72u, 106u, 161u,
133u, 36u, 144u, 222u, 19u, 76u, 116u, 130u, 105u, 86u, 201u, 12u,
138u, 154u, 88u, 46u, 72u, 227u, 225u, 129u, 52u, 209u, 64u, 142u,
52u, 24u, 19u, 77u, 0u, 8u, 227u, 33u, 129u, 40u, 97u, 72u, 226u,
225u, 129u, 52u, 205u, 120u, 142u, 40u, 24u, 19u, 75u, 1u, 8u, 226u,
65u, 129u, 52u, 204u, 20u, 142u, 34u, 24u, 18u, 134u, 20u, 142u, 32u,
24u, 25u, 0u, 161u, 80u, 12u, 161u, 174u, 134u, 24u, 194u, 33u, 162u,
134u, 24u, 146u, 40u, 97u, 67u, 40u, 107u, 161u, 134u, 33u, 133u, 72u,
106u, 161u, 134u, 36u, 144u, 154u, 101u, 50u, 72u, 225u, 225u, 129u,
52u, 232u, 32u, 142u, 20u, 24u, 19u, 78u, 102u, 8u, 225u, 33u, 129u,
40u, 97u, 200u, 224u, 225u, 129u, 52u, 228u, 88u, 142u, 6u, 24u, 18u,
17u, 35u, 128u, 134u, 4u, 211u, 140u, 226u, 56u, 0u, 96u, 74u, 24u,
114u, 24u, 131u, 2u, 105u, 88u, 201u, 32u,};
static unsigned char uvector__00114[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 67u, 17u, 66u, 177u, 66u, 179u, 13u, 138u,
21u, 8u, 68u, 138u, 21u, 97u, 52u, 18u, 67u, 52u, 130u, 28u, 219u,
155u, 137u, 12u, 194u, 132u, 64u, 134u, 81u, 49u, 80u, 171u, 16u,
207u, 66u, 175u, 66u, 177u, 66u, 178u, 104u, 85u, 137u, 12u, 194u,
133u, 106u, 133u, 78u, 133u, 72u, 138u, 17u, 26u, 21u, 48u, 228u, 34u,
152u, 168u, 134u, 218u, 21u, 17u, 49u, 208u, 169u, 69u, 50u, 9u, 14u,
193u, 238u, 65u, 161u, 81u, 33u, 228u, 80u, 168u, 69u, 84u, 42u, 36u,
146u, 67u, 146u, 191u, 16u, 228u, 34u, 184u, 166u, 42u, 45u, 196u,
144u, 200u, 5u, 12u, 24u, 137u, 232u, 86u, 9u, 20u, 48u, 34u, 39u,
161u, 89u, 36u, 134u, 192u, 28u, 40u, 96u, 232u, 96u, 68u, 35u, 67u,
7u, 67u, 2u, 77u, 12u, 25u, 1u, 218u, 134u, 14u, 134u, 4u, 134u, 122u,
24u, 42u, 21u, 138u, 21u, 146u, 67u, 72u, 103u, 161u, 128u, 161u, 88u,
161u, 89u, 36u, 144u, 202u, 30u, 232u, 86u, 40u, 86u, 79u, 0u, 12u,
128u, 80u, 174u, 137u, 58u, 133u, 96u, 145u, 66u, 188u, 36u, 234u,
21u, 146u, 72u, 108u, 2u, 133u, 126u, 133u, 118u, 133u, 120u, 134u,
81u, 66u, 181u, 66u, 177u, 66u, 178u, 120u, 0u, 161u, 16u, 36u, 129u,
66u, 185u, 66u, 187u, 66u, 188u, 67u, 40u, 161u, 90u, 161u, 88u, 161u,
89u, 52u, 43u, 98u, 132u, 64u, 146u, 26u, 67u, 40u, 161u, 90u, 161u,
89u, 161u, 88u, 60u, 4u, 80u, 136u, 18u, 73u, 36u, 142u, 22u, 24u,
24u, 194u, 96u, 110u, 152u, 85u, 17u, 194u, 67u, 2u, 96u, 56u, 71u,
4u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00115[] = {
 0u, 3u, 129u, 134u, 10u, 24u, 154u, 24u, 170u, 24u, 186u, 24u, 194u,
71u, 2u, 12u, 9u, 67u, 24u, 71u, 1u, 12u, 9u, 67u, 22u, 71u, 0u, 12u,
9u, 67u, 20u, 67u, 16u, 96u, 99u, 20u, 49u, 116u, 49u, 132u, 38u, 3u,
132u, 144u,};
static unsigned char uvector__00116[] = {
 0u, 3u, 150u, 6u, 9u, 52u, 80u, 196u, 80u, 172u, 80u, 172u, 138u,
24u, 218u, 24u, 154u, 24u, 170u, 24u, 234u, 24u, 227u, 217u, 9u, 35u,
148u, 6u, 4u, 192u, 164u, 142u, 72u, 24u, 24u, 197u, 12u, 93u, 12u,
97u, 20u, 49u, 52u, 49u, 84u, 49u, 116u, 49u, 132u, 145u, 200u, 195u,
2u, 80u, 172u, 145u, 200u, 131u, 2u, 80u, 172u, 17u, 200u, 3u, 2u,
96u, 82u, 71u, 29u, 12u, 16u, 136u, 137u, 232u, 86u, 8u, 137u, 232u,
86u, 73u, 35u, 141u, 134u, 4u, 201u, 96u, 142u, 52u, 24u, 18u, 133u,
100u, 142u, 48u, 24u, 19u, 37u, 130u, 56u, 176u, 96u, 76u, 142u, 8u,
226u, 161u, 129u, 40u, 86u, 8u, 226u, 97u, 129u, 50u, 56u, 35u, 136u,
134u, 4u, 200u, 172u, 142u, 30u, 24u, 40u, 87u, 196u, 157u, 66u, 176u,
68u, 157u, 66u, 178u, 73u, 28u, 52u, 48u, 38u, 132u, 6u, 145u, 195u,
3u, 2u, 80u, 172u, 145u, 194u, 131u, 2u, 104u, 64u, 105u, 28u, 32u,
48u, 38u, 125u, 164u, 112u, 112u, 192u, 148u, 43u, 4u, 112u, 80u,
192u, 153u, 246u, 145u, 192u, 131u, 3u, 221u, 10u, 197u, 10u, 201u,
35u, 128u, 134u, 4u, 161u, 89u, 35u, 128u, 6u, 4u, 161u, 88u, 33u,
136u, 48u, 49u, 138u, 24u, 170u, 21u, 138u, 21u, 146u, 29u, 130u,
104u, 86u, 104u, 112u, 9u, 158u, 208u, 76u, 138u, 194u, 96u, 56u, 73u,
36u,};
static unsigned char uvector__00117[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 67u, 31u, 67u, 21u, 66u, 177u, 66u, 178u,
67u, 176u, 123u, 161u, 88u, 161u, 89u, 33u, 192u, 80u, 175u, 137u,
58u, 133u, 96u, 137u, 58u, 133u, 100u, 145u, 8u, 136u, 158u, 133u,
96u, 136u, 158u, 133u, 100u, 145u, 38u, 138u, 24u, 138u, 21u, 138u,
21u, 145u, 67u, 27u, 67u, 19u, 67u, 21u, 67u, 29u, 67u, 28u, 123u,
33u, 36u, 146u, 56u, 72u, 96u, 99u, 9u, 129u, 186u, 96u, 212u, 71u,
7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u,
152u, 14u, 18u,};
static int tree_map_cmp(ScmTreeCore* core,intptr_t x,intptr_t y);
static ScmObj libhash_25make_tree_map(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhash_25make_tree_map__STUB, 1, 0,SCM_FALSE,libhash_25make_tree_map, NULL, NULL);

static ScmObj libhashtree_map_comparator(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashtree_map_comparator__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashtree_map_comparator, NULL, NULL);

static ScmObj libhashtree_map_copy(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashtree_map_copy__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashtree_map_copy, NULL, NULL);

static ScmObj libhashtree_mapP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_mapP__STUB, 1, 0,SCM_FALSE,libhashtree_mapP, NULL, NULL);

static ScmObj libhashtree_map_get(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_get__STUB, 2, 2,SCM_FALSE,libhashtree_map_get, NULL, NULL);

static ScmObj libhashtree_map_putX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_putX__STUB, 3, 0,SCM_FALSE,libhashtree_map_putX, NULL, NULL);

static ScmObj libhashtree_map_adjoinX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_adjoinX__STUB, 3, 0,SCM_FALSE,libhashtree_map_adjoinX, NULL, NULL);

static ScmObj libhashtree_map_replaceX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_replaceX__STUB, 3, 0,SCM_FALSE,libhashtree_map_replaceX, NULL, NULL);

static ScmObj libhashtree_map_deleteX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_deleteX__STUB, 2, 0,SCM_FALSE,libhashtree_map_deleteX, NULL, NULL);

static ScmObj tree_map_update_cc(ScmObj result,void** data);
static ScmObj libhashtree_map_updateX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_updateX__STUB, 3, 2,SCM_FALSE,libhashtree_map_updateX, NULL, NULL);

static ScmObj libhashtree_map_pushX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_pushX__STUB, 3, 0,SCM_FALSE,libhashtree_map_pushX, NULL, NULL);

static ScmObj libhashtree_map_popX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_popX__STUB, 2, 2,SCM_FALSE,libhashtree_map_popX, NULL, NULL);

static ScmObj libhashtree_map_existsP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_existsP__STUB, 2, 0,SCM_FALSE,libhashtree_map_existsP, NULL, NULL);

static ScmObj libhashtree_map_num_entries(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashtree_map_num_entries__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashtree_map_num_entries, NULL, NULL);

static ScmObj libhash_25tree_map_bound(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhash_25tree_map_bound__STUB, 3, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhash_25tree_map_bound, NULL, NULL);

static ScmObj tree_map_iter(ScmObj* args,int G2201 SCM_UNUSED,void* data);
static ScmObj libhash_25tree_map_iter(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhash_25tree_map_iter__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhash_25tree_map_iter, NULL, NULL);

static ScmObj libhash_25tree_map_check_consistency(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhash_25tree_map_check_consistency__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhash_25tree_map_check_consistency, NULL, NULL);

static ScmObj libhash_25tree_map_dump(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhash_25tree_map_dump__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhash_25tree_map_dump, NULL, NULL);

static ScmObj libhashtree_map_clearX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libhashtree_map_clearX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libhashtree_map_clearX, NULL, NULL);

static ScmObj libhashtree_map_floor(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_floor__STUB, 2, 3,SCM_FALSE,libhashtree_map_floor, NULL, NULL);

static ScmObj libhashtree_map_floor_key(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_floor_key__STUB, 2, 2,SCM_FALSE,libhashtree_map_floor_key, NULL, NULL);

static ScmObj libhashtree_map_floor_value(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_floor_value__STUB, 2, 2,SCM_FALSE,libhashtree_map_floor_value, NULL, NULL);

static ScmObj libhashtree_map_ceiling(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_ceiling__STUB, 2, 3,SCM_FALSE,libhashtree_map_ceiling, NULL, NULL);

static ScmObj libhashtree_map_ceiling_key(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_ceiling_key__STUB, 2, 2,SCM_FALSE,libhashtree_map_ceiling_key, NULL, NULL);

static ScmObj libhashtree_map_ceiling_value(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_ceiling_value__STUB, 2, 2,SCM_FALSE,libhashtree_map_ceiling_value, NULL, NULL);

static ScmObj libhashtree_map_predecessor(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_predecessor__STUB, 2, 3,SCM_FALSE,libhashtree_map_predecessor, NULL, NULL);

static ScmObj libhashtree_map_predecessor_key(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_predecessor_key__STUB, 2, 2,SCM_FALSE,libhashtree_map_predecessor_key, NULL, NULL);

static ScmObj libhashtree_map_predecessor_value(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_predecessor_value__STUB, 2, 2,SCM_FALSE,libhashtree_map_predecessor_value, NULL, NULL);

static ScmObj libhashtree_map_successor(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_successor__STUB, 2, 3,SCM_FALSE,libhashtree_map_successor, NULL, NULL);

static ScmObj libhashtree_map_successor_key(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_successor_key__STUB, 2, 2,SCM_FALSE,libhashtree_map_successor_key, NULL, NULL);

static ScmObj libhashtree_map_successor_value(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libhashtree_map_successor_value__STUB, 2, 2,SCM_FALSE,libhashtree_map_successor_value, NULL, NULL);

static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2161[299];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2161 */
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("*unique*", 8, 8),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("hash-salt", 9, 9),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("eq-hash", 7, 7),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libhash.scm", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<ulong>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("eqv-hash", 8, 8),
      SCM_STRING_CONST_INITIALIZER("legacy-hash", 11, 11),
      SCM_STRING_CONST_INITIALIZER("portable-hash", 13, 13),
      SCM_STRING_CONST_INITIALIZER("salt", 4, 4),
      SCM_STRING_CONST_INITIALIZER("default-hash", 12, 12),
      SCM_STRING_CONST_INITIALIZER("combine-hash-value", 18, 18),
      SCM_STRING_CONST_INITIALIZER("a", 1, 1),
      SCM_STRING_CONST_INITIALIZER("b", 1, 1),
      SCM_STRING_CONST_INITIALIZER("hash", 4, 4),
      SCM_STRING_CONST_INITIALIZER("%current-recursive-hash", 23, 23),
      SCM_STRING_CONST_INITIALIZER("hash-table\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%make-hash-table-simple", 23, 23),
      SCM_STRING_CONST_INITIALIZER("string=\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("equal\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("eqv\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("eq\077", 3, 3),
      SCM_STRING_CONST_INITIALIZER("type", 4, 4),
      SCM_STRING_CONST_INITIALIZER("init-size", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%make-hash-table-from-comparator", 32, 32),
      SCM_STRING_CONST_INITIALIZER("comparator", 10, 10),
      SCM_STRING_CONST_INITIALIZER("has-type-check", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<comparator>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("make-hash-table", 15, 15),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("case", 4, 4),
      SCM_STRING_CONST_INITIALIZER("else", 4, 4),
      SCM_STRING_CONST_INITIALIZER("unless", 6, 6),
      SCM_STRING_CONST_INITIALIZER("comparator\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("make-hash-table requires a comparator or one of the symbols in eq\077, eqv\077, equal\077 or string=\077, but got:", 102, 102),
      SCM_STRING_CONST_INITIALIZER("cond", 4, 4),
      SCM_STRING_CONST_INITIALIZER("or", 2, 2),
      SCM_STRING_CONST_INITIALIZER("eq-comparator", 13, 13),
      SCM_STRING_CONST_INITIALIZER("comparator-equality-predicate", 29, 29),
      SCM_STRING_CONST_INITIALIZER("eqv-comparator", 14, 14),
      SCM_STRING_CONST_INITIALIZER("equal-comparator", 16, 16),
      SCM_STRING_CONST_INITIALIZER("string-comparator", 17, 17),
      SCM_STRING_CONST_INITIALIZER("comparator-hashable\077", 20, 20),
      SCM_STRING_CONST_INITIALIZER("make-hash-table requires a comparator with hash function, but got:", 66, 66),
      SCM_STRING_CONST_INITIALIZER("$", 1, 1),
      SCM_STRING_CONST_INITIALIZER("not", 3, 3),
      SCM_STRING_CONST_INITIALIZER("comparator-type-test-predicate", 30, 30),
      SCM_STRING_CONST_INITIALIZER("with-module", 11, 11),
      SCM_STRING_CONST_INITIALIZER("default-type-test", 17, 17),
      SCM_STRING_CONST_INITIALIZER("hash-table-type", 15, 15),
      SCM_STRING_CONST_INITIALIZER("general", 7, 7),
      SCM_STRING_CONST_INITIALIZER("<hash-table>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("%hash-table-comparator-int", 26, 26),
      SCM_STRING_CONST_INITIALIZER("hash-table-comparator", 21, 21),
      SCM_STRING_CONST_INITIALIZER("unknown hashtable type:", 23, 23),
      SCM_STRING_CONST_INITIALIZER("hash-table-num-entries", 22, 22),
      SCM_STRING_CONST_INITIALIZER("hash-table-clear!", 17, 17),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("hash-table-get", 14, 14),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("fallback", 8, 8),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("hash-table-put!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("value", 5, 5),
      SCM_STRING_CONST_INITIALIZER("hash-table-adjoin!", 18, 18),
      SCM_STRING_CONST_INITIALIZER("hash-table-replace!", 19, 19),
      SCM_STRING_CONST_INITIALIZER("hash-table-delete!", 18, 18),
      SCM_STRING_CONST_INITIALIZER("hash-table-exists\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("hash-table-update!", 18, 18),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("hash-table-push!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("hash-table-pop!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("%hash-table-iter", 16, 16),
      SCM_STRING_CONST_INITIALIZER("hash-table-iterator", 19, 19),
      SCM_STRING_CONST_INITIALIZER("hash-table-copy", 15, 15),
      SCM_STRING_CONST_INITIALIZER("ht", 2, 2),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("hash-table-keys", 15, 15),
      SCM_STRING_CONST_INITIALIZER("hash-table-values", 17, 17),
      SCM_STRING_CONST_INITIALIZER("hash-table-stat", 15, 15),
      SCM_STRING_CONST_INITIALIZER("hash-table-fold", 15, 15),
      SCM_STRING_CONST_INITIALIZER("of-type\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("type-error", 10, 10),
      SCM_STRING_CONST_INITIALIZER("kons", 4, 4),
      SCM_STRING_CONST_INITIALIZER("knil", 4, 4),
      SCM_STRING_CONST_INITIALIZER("alist->hash-table", 17, 17),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("for-each", 8, 8),
      SCM_STRING_CONST_INITIALIZER("opt-cmpr", 8, 8),
      SCM_STRING_CONST_INITIALIZER("hash-table->alist", 17, 17),
      SCM_STRING_CONST_INITIALIZER("cons", 4, 4),
      SCM_STRING_CONST_INITIALIZER("hash-table-map", 14, 14),
      SCM_STRING_CONST_INITIALIZER("h", 1, 1),
      SCM_STRING_CONST_INITIALIZER("unique", 6, 6),
      SCM_STRING_CONST_INITIALIZER("hash-table-from-pairs", 21, 21),
      SCM_STRING_CONST_INITIALIZER("kv", 2, 2),
      SCM_STRING_CONST_INITIALIZER("cmpr", 4, 4),
      SCM_STRING_CONST_INITIALIZER("kvs", 3, 3),
      SCM_STRING_CONST_INITIALIZER("hash-table", 10, 10),
      SCM_STRING_CONST_INITIALIZER("hash-table-r7", 13, 13),
      SCM_STRING_CONST_INITIALIZER("k", 1, 1),
      SCM_STRING_CONST_INITIALIZER("v", 1, 1),
      SCM_STRING_CONST_INITIALIZER("plist is not even:", 18, 18),
      SCM_STRING_CONST_INITIALIZER("hash-table-empty\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("hash-table-contains\077", 20, 20),
      SCM_STRING_CONST_INITIALIZER("hash-table-size", 15, 15),
      SCM_STRING_CONST_INITIALIZER("hash-table-mutable\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("hash-table-empty-copy", 21, 21),
      SCM_STRING_CONST_INITIALIZER("hash-table-entries", 18, 18),
      SCM_STRING_CONST_INITIALIZER("hash-table-unfold", 17, 17),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("f", 1, 1),
      SCM_STRING_CONST_INITIALIZER("g", 1, 1),
      SCM_STRING_CONST_INITIALIZER("seed", 4, 4),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("hash-table-ref", 14, 14),
      SCM_STRING_CONST_INITIALIZER("identity", 8, 8),
      SCM_STRING_CONST_INITIALIZER("failure", 7, 7),
      SCM_STRING_CONST_INITIALIZER("success", 7, 7),
      SCM_STRING_CONST_INITIALIZER("let1", 4, 4),
      SCM_STRING_CONST_INITIALIZER("if", 2, 2),
      SCM_STRING_CONST_INITIALIZER("undefined\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("hash table doesn't have an entry for key:", 41, 41),
      SCM_STRING_CONST_INITIALIZER("hash-table-ref/default", 22, 22),
      SCM_STRING_CONST_INITIALIZER("default", 7, 7),
      SCM_STRING_CONST_INITIALIZER("hash-table-set!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("hash-table-intern!-r7", 21, 21),
      SCM_STRING_CONST_INITIALIZER("hash-table-delete!-r7", 21, 21),
      SCM_STRING_CONST_INITIALIZER("count", 5, 5),
      SCM_STRING_CONST_INITIALIZER("fold", 4, 4),
      SCM_STRING_CONST_INITIALIZER("keys", 4, 4),
      SCM_STRING_CONST_INITIALIZER("hash-table-update!/default", 26, 26),
      SCM_STRING_CONST_INITIALIZER("updater", 7, 7),
      SCM_STRING_CONST_INITIALIZER("hash-table-update!-r7", 21, 21),
      SCM_STRING_CONST_INITIALIZER("hash-table-pop!-r7", 18, 18),
      SCM_STRING_CONST_INITIALIZER("empty hash table can't be popped:", 33, 33),
      SCM_STRING_CONST_INITIALIZER("arg", 3, 3),
      SCM_STRING_CONST_INITIALIZER("when", 4, 4),
      SCM_STRING_CONST_INITIALIZER("Gauche's built-in hash-table-map is called with R7RS interface. Use hash-table-map-r7, or say (use scheme.hash-table).", 118, 118),
      SCM_STRING_CONST_INITIALIZER("assume-type", 11, 11),
      SCM_STRING_CONST_INITIALIZER("i", 1, 1),
      SCM_STRING_CONST_INITIALIZER("let", 3, 3),
      SCM_STRING_CONST_INITIALIZER("loop", 4, 4),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("hash-table-map-r7", 17, 17),
      SCM_STRING_CONST_INITIALIZER("hash-table-for-each", 19, 19),
      SCM_STRING_CONST_INITIALIZER("hash-table-map!-r7", 18, 18),
      SCM_STRING_CONST_INITIALIZER("hash-table-map->list-r7", 23, 23),
      SCM_STRING_CONST_INITIALIZER("hash-table-for-each-r7", 22, 22),
      SCM_STRING_CONST_INITIALIZER("hash-table-fold-r7", 18, 18),
      SCM_STRING_CONST_INITIALIZER("hash-table-prune!-r7", 20, 20),
      SCM_STRING_CONST_INITIALIZER("hash-table-seek", 15, 15),
      SCM_STRING_CONST_INITIALIZER("pred", 4, 4),
      SCM_STRING_CONST_INITIALIZER("fail", 4, 4),
      SCM_STRING_CONST_INITIALIZER("succ", 4, 4),
      SCM_STRING_CONST_INITIALIZER("hash-table-find", 15, 15),
      SCM_STRING_CONST_INITIALIZER("G2190", 5, 5),
      SCM_STRING_CONST_INITIALIZER("unused-args", 11, 11),
      SCM_STRING_CONST_INITIALIZER("^", 1, 1),
      SCM_STRING_CONST_INITIALIZER("hash-table-find-r7", 18, 18),
      SCM_STRING_CONST_INITIALIZER("G2192", 5, 5),
      SCM_STRING_CONST_INITIALIZER("hash-table-count-r7", 19, 19),
      SCM_STRING_CONST_INITIALIZER("hash-table-union!", 17, 17),
      SCM_STRING_CONST_INITIALIZER("ht1", 3, 3),
      SCM_STRING_CONST_INITIALIZER("ht2", 3, 3),
      SCM_STRING_CONST_INITIALIZER("hash-table-intersection!", 24, 24),
      SCM_STRING_CONST_INITIALIZER("hash-table-difference!", 22, 22),
      SCM_STRING_CONST_INITIALIZER("hash-table-xor!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("boolean-hash", 12, 12),
      SCM_STRING_CONST_INITIALIZER("char-hash", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<char>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("char-ci-hash", 12, 12),
      SCM_STRING_CONST_INITIALIZER("char-foldcase", 13, 13),
      SCM_STRING_CONST_INITIALIZER("string-hash", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<string>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("symbol-hash", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<symbol>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("number-hash", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<number>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("hash-bound", 10, 10),
      SCM_STRING_CONST_INITIALIZER("greatest-fixnum", 15, 15),
      SCM_STRING_CONST_INITIALIZER("hash-table-compare-as-sets", 26, 26),
      SCM_STRING_CONST_INITIALIZER("G2198", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2197", 5, 5),
      SCM_STRING_CONST_INITIALIZER("h1", 2, 2),
      SCM_STRING_CONST_INITIALIZER("h2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("value=\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("undefined", 9, 9),
      SCM_STRING_CONST_INITIALIZER("define", 6, 6),
      SCM_STRING_CONST_INITIALIZER("hash-tables can't be ordered:", 29, 29),
      SCM_STRING_CONST_INITIALIZER("subset\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("smaller", 7, 7),
      SCM_STRING_CONST_INITIALIZER("larger", 6, 6),
      SCM_STRING_CONST_INITIALIZER("w", 1, 1),
      SCM_STRING_CONST_INITIALIZER("c1", 2, 2),
      SCM_STRING_CONST_INITIALIZER("c2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("and", 3, 3),
      SCM_STRING_CONST_INITIALIZER("hash-tables with different comparators can't be compared:", 57, 57),
      SCM_STRING_CONST_INITIALIZER("hash-tables don't have comparators and can't be compared:", 57, 57),
      SCM_STRING_CONST_INITIALIZER("n1", 2, 2),
      SCM_STRING_CONST_INITIALIZER("n2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("=", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<", 1, 1),
      SCM_STRING_CONST_INITIALIZER("hash-table=\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("=\077", 2, 2),
      SCM_STRING_CONST_INITIALIZER("G2199", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2200", 5, 5),
      SCM_STRING_CONST_INITIALIZER("value-cmpr", 10, 10),
      SCM_STRING_CONST_INITIALIZER("%make-tree-map", 14, 14),
      SCM_STRING_CONST_INITIALIZER("tree-map-comparator", 19, 19),
      SCM_STRING_CONST_INITIALIZER("tm", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<tree-map>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("tree-map-copy", 13, 13),
      SCM_STRING_CONST_INITIALIZER("tree-map\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("tree-map-get", 12, 12),
      SCM_STRING_CONST_INITIALIZER("tree-map-put!", 13, 13),
      SCM_STRING_CONST_INITIALIZER("val", 3, 3),
      SCM_STRING_CONST_INITIALIZER("tree-map-adjoin!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("tree-map-replace!", 17, 17),
      SCM_STRING_CONST_INITIALIZER("tree-map-delete!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("tree-map-update!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("tree-map-push!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("tree-map-pop!", 13, 13),
      SCM_STRING_CONST_INITIALIZER("tree-map-exists\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("tree-map-num-entries", 20, 20),
      SCM_STRING_CONST_INITIALIZER("%tree-map-bound", 15, 15),
      SCM_STRING_CONST_INITIALIZER("min", 3, 3),
      SCM_STRING_CONST_INITIALIZER("pop", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%tree-map-iter", 14, 14),
      SCM_STRING_CONST_INITIALIZER("tree-map-iterator", 17, 17),
      SCM_STRING_CONST_INITIALIZER("%tree-map-check-consistency", 27, 27),
      SCM_STRING_CONST_INITIALIZER("%tree-map-dump", 14, 14),
      SCM_STRING_CONST_INITIALIZER("tree-map-clear!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("tree-map-floor", 14, 14),
      SCM_STRING_CONST_INITIALIZER("key-fb", 6, 6),
      SCM_STRING_CONST_INITIALIZER("val-fb", 6, 6),
      SCM_STRING_CONST_INITIALIZER("tree-map-floor-key", 18, 18),
      SCM_STRING_CONST_INITIALIZER("tree-map-floor-value", 20, 20),
      SCM_STRING_CONST_INITIALIZER("tree-map-ceiling", 16, 16),
      SCM_STRING_CONST_INITIALIZER("tree-map-ceiling-key", 20, 20),
      SCM_STRING_CONST_INITIALIZER("tree-map-ceiling-value", 22, 22),
      SCM_STRING_CONST_INITIALIZER("tree-map-predecessor", 20, 20),
      SCM_STRING_CONST_INITIALIZER("tree-map-predecessor-key", 24, 24),
      SCM_STRING_CONST_INITIALIZER("tree-map-predecessor-value", 26, 26),
      SCM_STRING_CONST_INITIALIZER("tree-map-successor", 18, 18),
      SCM_STRING_CONST_INITIALIZER("tree-map-successor-key", 22, 22),
      SCM_STRING_CONST_INITIALIZER("tree-map-successor-value", 24, 24),
      SCM_STRING_CONST_INITIALIZER("G2171", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2173", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2172", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2170", 8, 8),
      SCM_STRING_CONST_INITIALIZER("tmp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("tb", 2, 2),
      SCM_STRING_CONST_INITIALIZER("^x", 2, 2),
      SCM_STRING_CONST_INITIALIZER("rlet1", 5, 5),
      SCM_STRING_CONST_INITIALIZER("do", 2, 2),
      SCM_STRING_CONST_INITIALIZER("e", 1, 1),
      SCM_STRING_CONST_INITIALIZER("doplist", 7, 7),
      SCM_STRING_CONST_INITIALIZER("zero\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("G2177", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2179", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2178", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2176", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2181", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2183", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2182", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2180", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2185", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2186", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2184", 8, 8),
      SCM_STRING_CONST_INITIALIZER("=>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("^r", 2, 2),
      SCM_STRING_CONST_INITIALIZER("G2188", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2189", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2187", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2191", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2194", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2196", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2195", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2193", 8, 8),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
  },
};
static struct scm__rcRec {
  ScmPair d2169[1314] SCM_ALIGN_PAIR;
  ScmUVector d2164[117];
  ScmCompiledCode d2163[118];
  ScmWord d2162[2755];
  ScmObj d2160[1067];
} scm__rc SCM_UNUSED = {
  {   /* ScmPair d2169 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[2])},
       { SCM_OBJ(&scm__rc.d2169[3]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(136U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[7])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[9])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[10])},
       { SCM_OBJ(&scm__rc.d2169[11]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[8]), SCM_OBJ(&scm__rc.d2169[12])},
       { SCM_MAKE_INT(137U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[18])},
       { SCM_OBJ(&scm__rc.d2169[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[16]), SCM_OBJ(&scm__rc.d2169[20])},
       { SCM_MAKE_INT(138U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[23])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[26])},
       { SCM_OBJ(&scm__rc.d2169[27]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[24]), SCM_OBJ(&scm__rc.d2169[28])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[30])},
       { SCM_MAKE_INT(139U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[32])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[33])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[35])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[36])},
       { SCM_OBJ(&scm__rc.d2169[37]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[34]), SCM_OBJ(&scm__rc.d2169[38])},
       { SCM_MAKE_INT(141U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[40])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[41])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[43])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[44])},
       { SCM_OBJ(&scm__rc.d2169[45]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[42]), SCM_OBJ(&scm__rc.d2169[46])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[48])},
       { SCM_MAKE_INT(142U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[50])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[51])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[54])},
       { SCM_OBJ(&scm__rc.d2169[55]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[52]), SCM_OBJ(&scm__rc.d2169[56])},
       { SCM_MAKE_INT(146U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[58])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[59])},
       { SCM_OBJ(&scm__rc.d2169[60]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(150U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[63])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[64])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[66])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[67])},
       { SCM_OBJ(&scm__rc.d2169[68]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[65]), SCM_OBJ(&scm__rc.d2169[69])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[71])},
       { SCM_MAKE_INT(152U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[73])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[74])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[76])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[77])},
       { SCM_OBJ(&scm__rc.d2169[78]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[75]), SCM_OBJ(&scm__rc.d2169[79])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[81])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[82])},
       { SCM_MAKE_INT(199U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[84])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[85])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[87])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[88])},
       { SCM_OBJ(&scm__rc.d2169[89]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[86]), SCM_OBJ(&scm__rc.d2169[90])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[92])},
       { SCM_OBJ(&scm__rc.d2169[93]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[94])},
       { SCM_MAKE_INT(0), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[96])},
       { SCM_OBJ(&scm__rc.d2169[97]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[95]), SCM_OBJ(&scm__rc.d2169[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[99])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[101])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[102])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[103])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[105])},
       { SCM_OBJ(&scm__rc.d2169[106]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[104]), SCM_OBJ(&scm__rc.d2169[107])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[109])},
       { SCM_OBJ(&scm__sc.d2161[49]), SCM_OBJ(&scm__rc.d2169[109])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[111])},
       { SCM_OBJ(&scm__rc.d2169[112]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[110]), SCM_OBJ(&scm__rc.d2169[113])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[114])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[116])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[117])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[109])},
       { SCM_OBJ(&scm__rc.d2169[119]), SCM_OBJ(&scm__rc.d2169[92])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[120])},
       { SCM_OBJ(&scm__rc.d2169[121]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[118]), SCM_OBJ(&scm__rc.d2169[122])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[123])},
       { SCM_OBJ(&scm__rc.d2169[93]), SCM_OBJ(&scm__rc.d2169[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[125])},
       { SCM_OBJ(&scm__rc.d2169[126]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[124]), SCM_OBJ(&scm__rc.d2169[127])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[129])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[130])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[119]), SCM_OBJ(&scm__rc.d2169[132])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[133])},
       { SCM_OBJ(&scm__rc.d2169[134]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[131]), SCM_OBJ(&scm__rc.d2169[135])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[136])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[132])},
       { SCM_OBJ(&scm__rc.d2169[138]), SCM_OBJ(&scm__rc.d2169[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[139])},
       { SCM_OBJ(&scm__rc.d2169[140]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[137]), SCM_OBJ(&scm__rc.d2169[141])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[143])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[144])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[146])},
       { SCM_OBJ(&scm__rc.d2169[147]), SCM_OBJ(&scm__rc.d2169[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[148])},
       { SCM_OBJ(&scm__rc.d2169[149]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[145]), SCM_OBJ(&scm__rc.d2169[150])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[152])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[153])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[101])},
       { SCM_OBJ(&scm__rc.d2169[155]), SCM_OBJ(&scm__rc.d2169[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[156])},
       { SCM_OBJ(&scm__rc.d2169[157]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[154]), SCM_OBJ(&scm__rc.d2169[158])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[109])},
       { SCM_OBJ(&scm__sc.d2161[58]), SCM_OBJ(&scm__rc.d2169[109])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[161])},
       { SCM_OBJ(&scm__rc.d2169[162]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[160]), SCM_OBJ(&scm__rc.d2169[163])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[164])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[109])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[167])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[168])},
       { SCM_OBJ(&scm__rc.d2169[169]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[166]), SCM_OBJ(&scm__rc.d2169[170])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[171])},
       { SCM_OBJ(&scm__rc.d2169[172]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[173])},
       { SCM_OBJ(&scm__rc.d2169[174]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[175])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[176])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[177])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[178])},
       { SCM_OBJ(&scm__rc.d2169[179]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[165]), SCM_OBJ(&scm__rc.d2169[180])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[181])},
       { SCM_OBJ(&scm__rc.d2169[182]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[159]), SCM_OBJ(&scm__rc.d2169[183])},
       { SCM_OBJ(&scm__rc.d2169[151]), SCM_OBJ(&scm__rc.d2169[184])},
       { SCM_OBJ(&scm__rc.d2169[142]), SCM_OBJ(&scm__rc.d2169[185])},
       { SCM_OBJ(&scm__rc.d2169[128]), SCM_OBJ(&scm__rc.d2169[186])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[187])},
       { SCM_OBJ(&scm__rc.d2169[188]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[115]), SCM_OBJ(&scm__rc.d2169[189])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[190])},
       { SCM_OBJ(&scm__rc.d2169[191]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[108]), SCM_OBJ(&scm__rc.d2169[192])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[193])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[194])},
       { SCM_OBJ(&scm__rc.d2169[195]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[100]), SCM_OBJ(&scm__rc.d2169[196])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[197])},
       { SCM_MAKE_INT(214U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[199])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[200])},
       { SCM_OBJ(&scm__rc.d2169[201]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(249U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[205])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[206])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[208])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[209])},
       { SCM_OBJ(&scm__rc.d2169[210]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[207]), SCM_OBJ(&scm__rc.d2169[211])},
       { SCM_MAKE_INT(253U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[213])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[214])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[216])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[217])},
       { SCM_OBJ(&scm__rc.d2169[218]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[215]), SCM_OBJ(&scm__rc.d2169[219])},
       { SCM_MAKE_INT(262U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[221])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[222])},
       { SCM_OBJ(&scm__rc.d2169[223]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(271U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[226])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[227])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[229])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[230])},
       { SCM_OBJ(&scm__rc.d2169[231]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[228]), SCM_OBJ(&scm__rc.d2169[232])},
       { SCM_MAKE_INT(274U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[234])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[235])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[237])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[238])},
       { SCM_OBJ(&scm__rc.d2169[239]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[236]), SCM_OBJ(&scm__rc.d2169[240])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[242])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[243])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[244])},
       { SCM_MAKE_INT(277U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[246])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[247])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[249])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[250])},
       { SCM_OBJ(&scm__rc.d2169[251]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[248]), SCM_OBJ(&scm__rc.d2169[252])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[254])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[255])},
       { SCM_MAKE_INT(280U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[257])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[258])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[260])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[261])},
       { SCM_OBJ(&scm__rc.d2169[262]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[259]), SCM_OBJ(&scm__rc.d2169[263])},
       { SCM_MAKE_INT(283U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[265])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[266])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[268])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[269])},
       { SCM_OBJ(&scm__rc.d2169[270]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[267]), SCM_OBJ(&scm__rc.d2169[271])},
       { SCM_MAKE_INT(286U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[273])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[274])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[276])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[277])},
       { SCM_OBJ(&scm__rc.d2169[278]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[275]), SCM_OBJ(&scm__rc.d2169[279])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[281])},
       { SCM_MAKE_INT(291U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[283])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[284])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[286])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[287])},
       { SCM_OBJ(&scm__rc.d2169[288]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[285]), SCM_OBJ(&scm__rc.d2169[289])},
       { SCM_MAKE_INT(294U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[291])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[292])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[294])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[295])},
       { SCM_OBJ(&scm__rc.d2169[296]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[293]), SCM_OBJ(&scm__rc.d2169[297])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[243])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[299])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[300])},
       { SCM_MAKE_INT(304U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[302])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[303])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[305])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[306])},
       { SCM_OBJ(&scm__rc.d2169[307]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[304]), SCM_OBJ(&scm__rc.d2169[308])},
       { SCM_MAKE_INT(309U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[310])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[311])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[313])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[314])},
       { SCM_OBJ(&scm__rc.d2169[315]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[312]), SCM_OBJ(&scm__rc.d2169[316])},
       { SCM_MAKE_INT(312U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[318])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[319])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[321])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[322])},
       { SCM_OBJ(&scm__rc.d2169[323]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[320]), SCM_OBJ(&scm__rc.d2169[324])},
       { SCM_MAKE_INT(326U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[326])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[327])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[329])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[330])},
       { SCM_OBJ(&scm__rc.d2169[331]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[328]), SCM_OBJ(&scm__rc.d2169[332])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[335])},
       { SCM_MAKE_INT(332U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[337])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[338])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[340])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[341])},
       { SCM_OBJ(&scm__rc.d2169[342]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[339]), SCM_OBJ(&scm__rc.d2169[343])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(336U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[346])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[347])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[349])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[350])},
       { SCM_OBJ(&scm__rc.d2169[351]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[348]), SCM_OBJ(&scm__rc.d2169[352])},
       { SCM_MAKE_INT(337U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[354])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[355])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[357])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[358])},
       { SCM_OBJ(&scm__rc.d2169[359]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[356]), SCM_OBJ(&scm__rc.d2169[360])},
       { SCM_MAKE_INT(338U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[362])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[363])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[365])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[366])},
       { SCM_OBJ(&scm__rc.d2169[367]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[364]), SCM_OBJ(&scm__rc.d2169[368])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[370])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[371])},
       { SCM_MAKE_INT(341U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[373])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[374])},
       { SCM_OBJ(&scm__rc.d2169[375]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(353U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[381])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[382])},
       { SCM_OBJ(&scm__rc.d2169[383]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(351U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[387])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[388])},
       { SCM_OBJ(&scm__rc.d2169[389]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(355U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[393])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[394])},
       { SCM_OBJ(&scm__rc.d2169[395]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(368U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[400])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[401])},
       { SCM_OBJ(&scm__rc.d2169[402]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(366U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[406])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[407])},
       { SCM_OBJ(&scm__rc.d2169[408]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[412])},
       { SCM_OBJ(&scm__rc.d2169[411]), SCM_OBJ(&scm__rc.d2169[413])},
       { SCM_OBJ(&scm__rc.d2169[414]), SCM_NIL},
       { SCM_MAKE_INT(372U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[416])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[417])},
       { SCM_OBJ(&scm__rc.d2169[418]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(376U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[421])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[422])},
       { SCM_OBJ(&scm__rc.d2169[423]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(380U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[426])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[427])},
       { SCM_OBJ(&scm__rc.d2169[428]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(384U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[431])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[432])},
       { SCM_OBJ(&scm__rc.d2169[433]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(387U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[436])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[437])},
       { SCM_OBJ(&scm__rc.d2169[438]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[441])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[442])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[443])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[444])},
       { SCM_MAKE_INT(391U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[446])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[447])},
       { SCM_OBJ(&scm__rc.d2169[448]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[451])},
       { SCM_OBJ(&scm__rc.d2169[452]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[453])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[454])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[455])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[456])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[458])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[459])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[460])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[458])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[462])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[464])},
       { SCM_OBJ(&scm__sc.d2161[137]), SCM_OBJ(&scm__rc.d2169[281])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[466])},
       { SCM_OBJ(&scm__rc.d2169[464]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[467]), SCM_OBJ(&scm__rc.d2169[468])},
       { SCM_OBJ(&scm__rc.d2169[465]), SCM_OBJ(&scm__rc.d2169[469])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[470])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[412])},
       { SCM_OBJ(&scm__rc.d2169[472]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[471]), SCM_OBJ(&scm__rc.d2169[473])},
       { SCM_OBJ(&scm__rc.d2169[463]), SCM_OBJ(&scm__rc.d2169[474])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[475])},
       { SCM_OBJ(&scm__rc.d2169[476]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[461]), SCM_OBJ(&scm__rc.d2169[477])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[478])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[479])},
       { SCM_OBJ(&scm__rc.d2169[480]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[457]), SCM_OBJ(&scm__rc.d2169[481])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[482])},
       { SCM_MAKE_INT(400U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[484])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[485])},
       { SCM_OBJ(&scm__rc.d2169[486]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[489])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[490])},
       { SCM_MAKE_INT(410U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[492])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[493])},
       { SCM_OBJ(&scm__rc.d2169[494]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_OBJ(&scm__rc.d2169[497]), SCM_OBJ(&scm__rc.d2169[413])},
       { SCM_OBJ(&scm__rc.d2169[498]), SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(413U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[501])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[502])},
       { SCM_OBJ(&scm__rc.d2169[503]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[464])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[506])},
       { SCM_MAKE_INT(417U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[508])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[509])},
       { SCM_OBJ(&scm__rc.d2169[510]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[514])},
       { SCM_MAKE_INT(427U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[516])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[517])},
       { SCM_OBJ(&scm__rc.d2169[518]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(426U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[522])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[523])},
       { SCM_OBJ(&scm__rc.d2169[524]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[489])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[527])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[528])},
       { SCM_MAKE_INT(430U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[530])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[531])},
       { SCM_OBJ(&scm__rc.d2169[532]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[455])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[535])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[536])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[468])},
       { SCM_OBJ(&scm__rc.d2169[538]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[539])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[540])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[541])},
       { SCM_OBJ(&scm__rc.d2169[542]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[467]), SCM_OBJ(&scm__rc.d2169[543])},
       { SCM_OBJ(&scm__rc.d2169[465]), SCM_OBJ(&scm__rc.d2169[544])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[545])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[473])},
       { SCM_OBJ(&scm__rc.d2169[547]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[548])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[549])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[550])},
       { SCM_OBJ(&scm__rc.d2169[551]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[546]), SCM_OBJ(&scm__rc.d2169[552])},
       { SCM_OBJ(&scm__rc.d2169[463]), SCM_OBJ(&scm__rc.d2169[553])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[554])},
       { SCM_OBJ(&scm__rc.d2169[555]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[461]), SCM_OBJ(&scm__rc.d2169[556])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[557])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[558])},
       { SCM_OBJ(&scm__rc.d2169[559]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[537]), SCM_OBJ(&scm__rc.d2169[560])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[561])},
       { SCM_MAKE_INT(433U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[563])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[564])},
       { SCM_OBJ(&scm__rc.d2169[565]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(442U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[568])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[569])},
       { SCM_OBJ(&scm__rc.d2169[570]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[573])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[574])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[575])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[573])},
       { SCM_OBJ(&scm__rc.d2169[577]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[578])},
       { SCM_OBJ(&scm__sc.d2161[153]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[580])},
       { SCM_OBJ(&scm__rc.d2169[581]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[579]), SCM_OBJ(&scm__rc.d2169[582])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[583])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[585])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[586])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[330])},
       { SCM_OBJ(&scm__rc.d2169[588]), SCM_OBJ(&scm__rc.d2169[345])},
       { SCM_NIL, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[590])},
       { SCM_OBJ(&scm__rc.d2169[591]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[592])},
       { SCM_OBJ(&scm__rc.d2169[593]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[458])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[458])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[596])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[413])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[598]), SCM_OBJ(&scm__rc.d2169[599])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[600])},
       { SCM_OBJ(&scm__rc.d2169[601]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[602])},
       { SCM_OBJ(&scm__rc.d2169[603]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[604])},
       { SCM_OBJ(&scm__rc.d2169[597]), SCM_OBJ(&scm__rc.d2169[605])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[606])},
       { SCM_OBJ(&scm__rc.d2169[607]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[595]), SCM_OBJ(&scm__rc.d2169[608])},
       { SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[609])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[610])},
       { SCM_OBJ(&scm__rc.d2169[611]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[594]), SCM_OBJ(&scm__rc.d2169[612])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[613])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[614])},
       { SCM_OBJ(&scm__rc.d2169[615]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[589]), SCM_OBJ(&scm__rc.d2169[616])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[617])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[618])},
       { SCM_OBJ(&scm__rc.d2169[619]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[587]), SCM_OBJ(&scm__rc.d2169[620])},
       { SCM_OBJ(&scm__rc.d2169[584]), SCM_OBJ(&scm__rc.d2169[621])},
       { SCM_OBJ(&scm__rc.d2169[576]), SCM_OBJ(&scm__rc.d2169[622])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[623])},
       { SCM_MAKE_INT(454U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[625])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[626])},
       { SCM_OBJ(&scm__rc.d2169[627]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_MAKE_INT(471U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[631])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[632])},
       { SCM_OBJ(&scm__rc.d2169[633]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[345])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[636])},
       { SCM_MAKE_INT(467U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[638])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[639])},
       { SCM_OBJ(&scm__rc.d2169[640]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_MAKE_INT(475U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[644])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[645])},
       { SCM_OBJ(&scm__rc.d2169[646]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[345])},
       { SCM_MAKE_INT(473U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[650])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[651])},
       { SCM_OBJ(&scm__rc.d2169[652]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(477U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[655])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[656])},
       { SCM_OBJ(&scm__rc.d2169[657]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[660])},
       { SCM_MAKE_INT(480U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[662])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[663])},
       { SCM_OBJ(&scm__rc.d2169[664]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(488U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[667])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[668])},
       { SCM_OBJ(&scm__rc.d2169[669]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[345])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[672])},
       { SCM_MAKE_INT(491U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[674])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[675])},
       { SCM_OBJ(&scm__rc.d2169[676]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_MAKE_INT(495U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[680])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[681])},
       { SCM_OBJ(&scm__rc.d2169[682]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(494U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[685])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[686])},
       { SCM_OBJ(&scm__rc.d2169[687]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[690])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[691])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[692])},
       { SCM_MAKE_INT(497U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[694])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[695])},
       { SCM_OBJ(&scm__rc.d2169[696]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[464])},
       { SCM_MAKE_INT(508U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[700])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[701])},
       { SCM_OBJ(&scm__rc.d2169[702]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[705])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[413])},
       { SCM_MAKE_INT(509U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[708])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[709])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[413])},
       { SCM_OBJ(&scm__rc.d2169[711]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[710]), SCM_OBJ(&scm__rc.d2169[712])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2163[74]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2163[73]), SCM_OBJ(&scm__rc.d2169[715])},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[717])},
       { SCM_OBJ(&scm__rc.d2169[718]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[719])},
       { SCM_OBJ(&scm__rc.d2169[720]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[721])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[722])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[723])},
       { SCM_OBJ(&scm__rc.d2169[707]), SCM_OBJ(&scm__rc.d2169[599])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[725])},
       { SCM_OBJ(&scm__rc.d2169[726]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[727])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[728])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[729])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[730])},
       { SCM_OBJ(&scm__rc.d2169[731]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[724]), SCM_OBJ(&scm__rc.d2169[732])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[733])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[736])},
       { SCM_MAKE_INT(512U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[738])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[739])},
       { SCM_OBJ(&scm__rc.d2169[740]), SCM_OBJ(&scm__rc.d2169[712])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2163[77]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[464])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[744])},
       { SCM_MAKE_INT(511U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[746])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[747])},
       { SCM_OBJ(&scm__rc.d2169[748]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[514])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[752])},
       { SCM_MAKE_INT(516U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[754])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[755])},
       { SCM_OBJ(&scm__rc.d2169[756]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[345])},
       { SCM_MAKE_INT(514U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[760])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[761])},
       { SCM_OBJ(&scm__rc.d2169[762]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_MAKE_INT(524U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[766])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[767])},
       { SCM_OBJ(&scm__rc.d2169[768]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[771])},
       { SCM_MAKE_INT(520U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[773])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[774])},
       { SCM_OBJ(&scm__rc.d2169[775]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_MAKE_INT(532U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[779])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[780])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[412])},
       { SCM_OBJ(&scm__rc.d2169[782]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[781]), SCM_OBJ(&scm__rc.d2169[783])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(528U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[786])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[787])},
       { SCM_OBJ(&scm__rc.d2169[788]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_MAKE_INT(540U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[792])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[793])},
       { SCM_OBJ(&scm__rc.d2169[794]), SCM_OBJ(&scm__rc.d2169[783])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(536U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[797])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[798])},
       { SCM_OBJ(&scm__rc.d2169[799]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_MAKE_INT(548U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[803])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[804])},
       { SCM_OBJ(&scm__rc.d2169[805]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(544U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[808])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[809])},
       { SCM_OBJ(&scm__rc.d2169[810]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(557U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[813])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[814])},
       { SCM_OBJ(&scm__rc.d2169[815]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(561U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[818])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[819])},
       { SCM_OBJ(&scm__rc.d2169[820]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(565U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[823])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[824])},
       { SCM_OBJ(&scm__rc.d2169[825]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(569U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[828])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[829])},
       { SCM_OBJ(&scm__rc.d2169[830]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(573U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[833])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[834])},
       { SCM_OBJ(&scm__rc.d2169[835]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(577U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[838])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[839])},
       { SCM_OBJ(&scm__rc.d2169[840]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(582U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[843])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[844])},
       { SCM_OBJ(&scm__rc.d2169[845]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[848])},
       { SCM_MAKE_INT(599U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[850])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[851])},
       { SCM_OBJ(&scm__rc.d2169[852]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[855])},
       { SCM_MAKE_INT(600U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[857])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[858])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[707])},
       { SCM_OBJ(&scm__rc.d2169[860]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[859]), SCM_OBJ(&scm__rc.d2169[861])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2163[110]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2163[109]), SCM_OBJ(&scm__rc.d2169[864])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[146])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[867]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[868])},
       { SCM_OBJ(&scm__rc.d2169[869]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[866]), SCM_OBJ(&scm__rc.d2169[870])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[871])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[872])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[873])},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[875])},
       { SCM_OBJ(&scm__rc.d2169[876]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[877])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[878])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[242])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[882])},
       { SCM_OBJ(&scm__sc.d2161[205]), SCM_OBJ(&scm__rc.d2169[883])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[884])},
       { SCM_OBJ(&scm__rc.d2169[885]), SCM_OBJ(&scm__rc.d2169[242])},
       { SCM_OBJ(&scm__rc.d2169[881]), SCM_OBJ(&scm__rc.d2169[886])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[887])},
       { SCM_OBJ(&scm__rc.d2169[888]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[880]), SCM_OBJ(&scm__rc.d2169[889])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[890])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[892])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[893])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[596])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[895])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[897])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[898])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[897])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[900])},
       { SCM_OBJ(&scm__rc.d2169[901]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[902])},
       { SCM_OBJ(&scm__rc.d2169[903]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[899]), SCM_OBJ(&scm__rc.d2169[904])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[905])},
       { SCM_OBJ(&scm__rc.d2169[906]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[896]), SCM_OBJ(&scm__rc.d2169[907])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[908])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[909])},
       { SCM_OBJ(&scm__rc.d2169[910]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[911])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[912])},
       { SCM_TRUE, SCM_NIL},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2169[914])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[915])},
       { SCM_OBJ(&scm__rc.d2169[707]), SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[917])},
       { SCM_OBJ(&scm__rc.d2169[918]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[916]), SCM_OBJ(&scm__rc.d2169[919])},
       { SCM_OBJ(&scm__rc.d2169[913]), SCM_OBJ(&scm__rc.d2169[920])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[921])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[922])},
       { SCM_OBJ(&scm__rc.d2169[923]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[894]), SCM_OBJ(&scm__rc.d2169[924])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[925])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[927])},
       { SCM_OBJ(&scm__rc.d2169[928]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[929])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[882])},
       { SCM_OBJ(&scm__rc.d2169[931]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[932])},
       { SCM_OBJ(&scm__rc.d2169[933]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[930]), SCM_OBJ(&scm__rc.d2169[934])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[936])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[937])},
       { SCM_OBJ(&scm__rc.d2169[938]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[939])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[940])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[941])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[942]), SCM_OBJ(&scm__rc.d2169[943])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[937])},
       { SCM_OBJ(&scm__sc.d2161[213]), SCM_OBJ(&scm__rc.d2169[883])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[946])},
       { SCM_OBJ(&scm__rc.d2169[947]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[945]), SCM_OBJ(&scm__rc.d2169[948])},
       { SCM_OBJ(&scm__sc.d2161[214]), SCM_OBJ(&scm__rc.d2169[883])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[950])},
       { SCM_OBJ(&scm__rc.d2169[951]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[952])},
       { SCM_OBJ(&scm__rc.d2169[953]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[949]), SCM_OBJ(&scm__rc.d2169[954])},
       { SCM_OBJ(&scm__rc.d2169[944]), SCM_OBJ(&scm__rc.d2169[955])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[956])},
       { SCM_OBJ(&scm__rc.d2169[957]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[935]), SCM_OBJ(&scm__rc.d2169[958])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[959])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[883])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[927])},
       { SCM_OBJ(&scm__rc.d2169[962]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[963])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[882])},
       { SCM_OBJ(&scm__rc.d2169[965]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[966])},
       { SCM_OBJ(&scm__rc.d2169[967]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[964]), SCM_OBJ(&scm__rc.d2169[968])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[970])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[971])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[883])},
       { SCM_OBJ(&scm__rc.d2169[880]), SCM_NIL},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2169[974])},
       { SCM_OBJ(&scm__rc.d2169[973]), SCM_OBJ(&scm__rc.d2169[975])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[976])},
       { SCM_OBJ(&scm__rc.d2169[977]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[972]), SCM_OBJ(&scm__rc.d2169[978])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[971])},
       { SCM_MAKE_INT(-1), SCM_OBJ(&scm__rc.d2169[974])},
       { SCM_OBJ(&scm__rc.d2169[973]), SCM_OBJ(&scm__rc.d2169[981])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[982])},
       { SCM_OBJ(&scm__rc.d2169[983]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[980]), SCM_OBJ(&scm__rc.d2169[984])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[927])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[986])},
       { SCM_MAKE_INT(1U), SCM_OBJ(&scm__rc.d2169[974])},
       { SCM_OBJ(&scm__rc.d2169[987]), SCM_OBJ(&scm__rc.d2169[988])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[989])},
       { SCM_OBJ(&scm__rc.d2169[990]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[991])},
       { SCM_OBJ(&scm__rc.d2169[992]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[985]), SCM_OBJ(&scm__rc.d2169[993])},
       { SCM_OBJ(&scm__rc.d2169[979]), SCM_OBJ(&scm__rc.d2169[994])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[995])},
       { SCM_OBJ(&scm__rc.d2169[996]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[969]), SCM_OBJ(&scm__rc.d2169[997])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[998])},
       { SCM_OBJ(&scm__rc.d2169[999]), SCM_NIL},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2169[1000])},
       { SCM_OBJ(&scm__rc.d2169[961]), SCM_OBJ(&scm__rc.d2169[1001])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1002])},
       { SCM_OBJ(&scm__rc.d2169[1003]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[960]), SCM_OBJ(&scm__rc.d2169[1004])},
       { SCM_OBJ(&scm__rc.d2169[926]), SCM_OBJ(&scm__rc.d2169[1005])},
       { SCM_OBJ(&scm__rc.d2169[891]), SCM_OBJ(&scm__rc.d2169[1006])},
       { SCM_OBJ(&scm__rc.d2169[879]), SCM_OBJ(&scm__rc.d2169[1007])},
       { SCM_OBJ(&scm__rc.d2169[874]), SCM_OBJ(&scm__rc.d2169[1008])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1009])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1011])},
       { SCM_MAKE_INT(596U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1013])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1014])},
       { SCM_OBJ(&scm__rc.d2169[1015]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1018])},
       { SCM_OBJ(&scm__rc.d2169[1019]), SCM_OBJ(&scm__rc.d2169[893])},
       { SCM_OBJ(&scm__rc.d2169[1020]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2163[112]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1022])},
       { SCM_MAKE_INT(585U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1024])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1025])},
       { SCM_OBJ(&scm__rc.d2169[1026]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[378])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1030])},
       { SCM_MAKE_INT(625U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1032])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1033])},
       { SCM_OBJ(&scm__rc.d2169[1034]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[883])},
       { SCM_MAKE_INT(620U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1038])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1039])},
       { SCM_OBJ(&scm__rc.d2169[1040]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(648U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1043])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1044])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1046])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1047])},
       { SCM_OBJ(&scm__rc.d2169[1048]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1045]), SCM_OBJ(&scm__rc.d2169[1049])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(655U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1052])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1053])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1055])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1056])},
       { SCM_OBJ(&scm__rc.d2169[1057]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1054]), SCM_OBJ(&scm__rc.d2169[1058])},
       { SCM_MAKE_INT(664U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1060])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1061])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1063])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1064])},
       { SCM_OBJ(&scm__rc.d2169[1065]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1062]), SCM_OBJ(&scm__rc.d2169[1066])},
       { SCM_MAKE_INT(666U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1068])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1069])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1071])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1072])},
       { SCM_OBJ(&scm__rc.d2169[1073]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1070]), SCM_OBJ(&scm__rc.d2169[1074])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[244])},
       { SCM_MAKE_INT(668U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1077])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1078])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1080])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1081])},
       { SCM_OBJ(&scm__rc.d2169[1082]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1079]), SCM_OBJ(&scm__rc.d2169[1083])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1085])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1086])},
       { SCM_MAKE_INT(671U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1088])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1089])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1091])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1092])},
       { SCM_OBJ(&scm__rc.d2169[1093]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1090]), SCM_OBJ(&scm__rc.d2169[1094])},
       { SCM_MAKE_INT(674U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1096])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1097])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1099])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1100])},
       { SCM_OBJ(&scm__rc.d2169[1101]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1098]), SCM_OBJ(&scm__rc.d2169[1102])},
       { SCM_MAKE_INT(677U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1104])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1105])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1107])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1108])},
       { SCM_OBJ(&scm__rc.d2169[1109]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1106]), SCM_OBJ(&scm__rc.d2169[1110])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[281])},
       { SCM_MAKE_INT(680U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1113])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1114])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1116])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1117])},
       { SCM_OBJ(&scm__rc.d2169[1118]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1115]), SCM_OBJ(&scm__rc.d2169[1119])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[300])},
       { SCM_MAKE_INT(690U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1122])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1123])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1125])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1126])},
       { SCM_OBJ(&scm__rc.d2169[1127]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1124]), SCM_OBJ(&scm__rc.d2169[1128])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[255])},
       { SCM_MAKE_INT(693U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1131])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1132])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1134])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1135])},
       { SCM_OBJ(&scm__rc.d2169[1136]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1133]), SCM_OBJ(&scm__rc.d2169[1137])},
       { SCM_MAKE_INT(696U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1139])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1140])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1142])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1143])},
       { SCM_OBJ(&scm__rc.d2169[1144]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1141]), SCM_OBJ(&scm__rc.d2169[1145])},
       { SCM_MAKE_INT(699U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1147])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1148])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1150])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1151])},
       { SCM_OBJ(&scm__rc.d2169[1152]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1149]), SCM_OBJ(&scm__rc.d2169[1153])},
       { SCM_MAKE_INT(702U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1155])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1156])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1158])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1159])},
       { SCM_OBJ(&scm__rc.d2169[1160]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1157]), SCM_OBJ(&scm__rc.d2169[1161])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1163])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1164])},
       { SCM_MAKE_INT(706U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1166])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1167])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1169])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1170])},
       { SCM_OBJ(&scm__rc.d2169[1171]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1168]), SCM_OBJ(&scm__rc.d2169[1172])},
       { SCM_MAKE_INT(728U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1174])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1175])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1177])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1178])},
       { SCM_OBJ(&scm__rc.d2169[1179]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1176]), SCM_OBJ(&scm__rc.d2169[1180])},
       { SCM_MAKE_INT(734U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1182])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1183])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1185])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1186])},
       { SCM_OBJ(&scm__rc.d2169[1187]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1184]), SCM_OBJ(&scm__rc.d2169[1188])},
       { SCM_MAKE_INT(739U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1190])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1191])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1193])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1194])},
       { SCM_OBJ(&scm__rc.d2169[1195]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1192]), SCM_OBJ(&scm__rc.d2169[1196])},
       { SCM_MAKE_INT(743U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1198])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1199])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1201])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1202])},
       { SCM_OBJ(&scm__rc.d2169[1203]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1200]), SCM_OBJ(&scm__rc.d2169[1204])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1206])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1207])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1208])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1209])},
       { SCM_MAKE_INT(778U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1212])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1214])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1215])},
       { SCM_OBJ(&scm__rc.d2169[1216]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1213]), SCM_OBJ(&scm__rc.d2169[1217])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1219])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1220])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1221])},
       { SCM_MAKE_INT(780U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1223])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1224])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1226])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1227])},
       { SCM_OBJ(&scm__rc.d2169[1228]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1225]), SCM_OBJ(&scm__rc.d2169[1229])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1206])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1231])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1232])},
       { SCM_MAKE_INT(782U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1234])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1235])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1237])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1238])},
       { SCM_OBJ(&scm__rc.d2169[1239]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1236]), SCM_OBJ(&scm__rc.d2169[1240])},
       { SCM_MAKE_INT(786U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1242])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1243])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1245])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1246])},
       { SCM_OBJ(&scm__rc.d2169[1247]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1244]), SCM_OBJ(&scm__rc.d2169[1248])},
       { SCM_MAKE_INT(788U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1250])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1251])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1253])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1254])},
       { SCM_OBJ(&scm__rc.d2169[1255]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1252]), SCM_OBJ(&scm__rc.d2169[1256])},
       { SCM_MAKE_INT(790U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1258])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1259])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1261])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1262])},
       { SCM_OBJ(&scm__rc.d2169[1263]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1260]), SCM_OBJ(&scm__rc.d2169[1264])},
       { SCM_MAKE_INT(794U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1266])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1267])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1269])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1270])},
       { SCM_OBJ(&scm__rc.d2169[1271]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1268]), SCM_OBJ(&scm__rc.d2169[1272])},
       { SCM_MAKE_INT(797U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1274])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1275])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1277])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1278])},
       { SCM_OBJ(&scm__rc.d2169[1279]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1276]), SCM_OBJ(&scm__rc.d2169[1280])},
       { SCM_MAKE_INT(800U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1282])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1283])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1285])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1286])},
       { SCM_OBJ(&scm__rc.d2169[1287]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1284]), SCM_OBJ(&scm__rc.d2169[1288])},
       { SCM_MAKE_INT(804U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1290])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1291])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1293])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1294])},
       { SCM_OBJ(&scm__rc.d2169[1295]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1292]), SCM_OBJ(&scm__rc.d2169[1296])},
       { SCM_MAKE_INT(807U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1298])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1299])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1301])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1302])},
       { SCM_OBJ(&scm__rc.d2169[1303]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1300]), SCM_OBJ(&scm__rc.d2169[1304])},
       { SCM_MAKE_INT(810U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2161[12]), SCM_OBJ(&scm__rc.d2169[1306])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1307])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1309])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2169[1310])},
       { SCM_OBJ(&scm__rc.d2169[1311]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2169[1308]), SCM_OBJ(&scm__rc.d2169[1312])},
  },
  {   /* ScmUVector d2164 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 35, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 89, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 55, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 665, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 160, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 165, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 73, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 255, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 89, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 41, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 99, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 60, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 29, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 41, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 35, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 41, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 96, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 61, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 37, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 262, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 58, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 37, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00026, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 82, uvector__00027, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 43, uvector__00028, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 37, uvector__00029, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00030, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 57, uvector__00031, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 46, uvector__00032, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 222, uvector__00033, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 80, uvector__00034, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 351, uvector__00035, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 73, uvector__00036, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 39, uvector__00037, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 45, uvector__00038, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 37, uvector__00039, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 210, uvector__00040, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00041, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 163, uvector__00042, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 67, uvector__00043, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 61, uvector__00044, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 53, uvector__00045, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 60, uvector__00046, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 46, uvector__00047, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00048, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 449, uvector__00049, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 88, uvector__00050, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 252, uvector__00051, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 79, uvector__00052, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 425, uvector__00053, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 99, uvector__00054, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 56, uvector__00055, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 248, uvector__00056, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 73, uvector__00057, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 63, uvector__00058, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 121, uvector__00059, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 62, uvector__00060, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00061, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 44, uvector__00062, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 225, uvector__00063, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 77, uvector__00064, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00065, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 44, uvector__00066, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 39, uvector__00067, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 46, uvector__00068, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 70, uvector__00069, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00070, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 59, uvector__00071, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 309, uvector__00072, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 100, uvector__00073, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 8, uvector__00074, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 18, uvector__00075, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 175, uvector__00076, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 61, uvector__00077, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 55, uvector__00078, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 56, uvector__00079, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 69, uvector__00080, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 61, uvector__00081, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 65, uvector__00082, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 74, uvector__00083, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 231, uvector__00084, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 78, uvector__00085, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 68, uvector__00086, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 228, uvector__00087, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 76, uvector__00088, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 68, uvector__00089, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 228, uvector__00090, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 76, uvector__00091, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 97, uvector__00092, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 236, uvector__00093, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 83, uvector__00094, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 99, uvector__00095, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 47, uvector__00096, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 99, uvector__00097, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 47, uvector__00098, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 114, uvector__00099, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00100, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 99, uvector__00101, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 47, uvector__00102, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 99, uvector__00103, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 47, uvector__00104, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 99, uvector__00105, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 47, uvector__00106, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 16, uvector__00107, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 37, uvector__00108, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 8, uvector__00109, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 12, uvector__00110, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 128, uvector__00111, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 90, uvector__00112, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 989, uvector__00113, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 269, uvector__00114, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 44, uvector__00115, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 219, uvector__00116, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 93, uvector__00117, 0, NULL),
  },
  {   /* ScmCompiledCode d2163 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[0])), 16,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[16])), 16,
            10, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[62]),
            SCM_OBJ(&scm__rc.d2163[2]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[32])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-hash-table */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[47])), 171,
            22, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[203]),
            SCM_OBJ(&scm__rc.d2163[4]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[218])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-comparator */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[233])), 48,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[225]),
            SCM_OBJ(&scm__rc.d2163[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[281])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-fold */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[296])), 54,
            33, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[377]),
            SCM_OBJ(&scm__rc.d2163[8]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[350])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[365])), 7,
            6, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[385]),
            SCM_OBJ(&scm__rc.d2163[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* alist->hash-table */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[372])), 16,
            16, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[391]),
            SCM_OBJ(&scm__rc.d2163[11]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[388])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table->alist */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[403])), 6,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[397]),
            SCM_OBJ(&scm__rc.d2163[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[409])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[424])), 16,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[440])), 7,
            6, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[404]),
            SCM_OBJ(&scm__rc.d2163[16]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-from-pairs */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[447])), 15,
            16, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[410]),
            SCM_OBJ(&scm__rc.d2163[17]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[462])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[477])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[492])), 6,
            6, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[415]),
            SCM_OBJ(&scm__rc.d2163[20]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[498])), 55,
            35, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[420]),
            SCM_OBJ(&scm__rc.d2163[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[553])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-empty? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[568])), 9,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[425]),
            SCM_OBJ(&scm__rc.d2163[23]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[577])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[592])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[607])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-mutable? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[622])), 23,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[430]),
            SCM_OBJ(&scm__rc.d2163[27]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[645])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-empty-copy */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[660])), 8,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[435]),
            SCM_OBJ(&scm__rc.d2163[29]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[668])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-entries */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[683])), 11,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[440]),
            SCM_OBJ(&scm__rc.d2163[31]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[694])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-unfold */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[709])), 42,
            33, 5, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[450]),
            SCM_OBJ(&scm__rc.d2163[33]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[751])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-ref */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[766])), 80,
            25, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[488]),
            SCM_OBJ(&scm__rc.d2163[35]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[846])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-ref/default */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[861])), 6,
            6, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[496]),
            SCM_OBJ(&scm__rc.d2163[37]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[867])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[882])), 6,
            6, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[499]),
            SCM_OBJ(&scm__rc.d2163[39]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-set! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[888])), 47,
            31, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[505]),
            SCM_OBJ(&scm__rc.d2163[40]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[935])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-intern!-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[950])), 28,
            21, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[512]),
            SCM_OBJ(&scm__rc.d2163[42]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[978])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[993])), 11,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[520]),
            SCM_OBJ(&scm__rc.d2163[44]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-delete!-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1004])), 8,
            6, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[526]),
            SCM_OBJ(&scm__rc.d2163[45]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1012])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-update!/default */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1027])), 7,
            7, 4, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[534]),
            SCM_OBJ(&scm__rc.d2163[47]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1034])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-update!-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1049])), 102,
            32, 3, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[567]),
            SCM_OBJ(&scm__rc.d2163[49]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1151])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-pop!-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1166])), 57,
            21, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[572]),
            SCM_OBJ(&scm__rc.d2163[51]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1223])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-map */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1238])), 99,
            37, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[629]),
            SCM_OBJ(&scm__rc.d2163[53]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1337])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1352])), 10,
            11, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[635]),
            SCM_OBJ(&scm__rc.d2163[55]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-map-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1362])), 56,
            16, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[642]),
            SCM_OBJ(&scm__rc.d2163[56]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1418])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1433])), 11,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[648]),
            SCM_OBJ(&scm__rc.d2163[58]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-map!-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1444])), 27,
            13, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[654]),
            SCM_OBJ(&scm__rc.d2163[59]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1471])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-map->list-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1486])), 5,
            5, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[659]),
            SCM_OBJ(&scm__rc.d2163[61]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1491])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-for-each */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1506])), 50,
            28, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[666]),
            SCM_OBJ(&scm__rc.d2163[63]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1556])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-for-each-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1571])), 5,
            5, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[671]),
            SCM_OBJ(&scm__rc.d2163[65]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1576])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-fold-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1591])), 6,
            6, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[678]),
            SCM_OBJ(&scm__rc.d2163[67]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1597])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1612])), 14,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[684]),
            SCM_OBJ(&scm__rc.d2163[69]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-prune!-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1626])), 6,
            5, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[689]),
            SCM_OBJ(&scm__rc.d2163[70]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1632])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-seek */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1647])), 62,
            28, 4, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[698]),
            SCM_OBJ(&scm__rc.d2163[72]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1709])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (hash-table-find failure) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1724])), 1,
            0, 0, 0, SCM_OBJ(&scm__rc.d2169[699]), SCM_NIL, SCM_OBJ(&scm__rc.d2169[704]),
            SCM_OBJ(&scm__rc.d2163[76]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (hash-table-find #:G2190) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1725])), 1,
            0, 3, 0, SCM_OBJ(&scm__rc.d2169[706]), SCM_NIL, SCM_OBJ(&scm__rc.d2169[714]),
            SCM_OBJ(&scm__rc.d2163[76]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-find */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1726])), 36,
            17, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[735]),
            SCM_OBJ(&scm__rc.d2163[76]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1762])), 17,
            15, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (hash-table-find-r7 #:G2192) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1779])), 1,
            0, 3, 0, SCM_OBJ(&scm__rc.d2169[737]), SCM_NIL, SCM_OBJ(&scm__rc.d2169[742]),
            SCM_OBJ(&scm__rc.d2163[79]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-find-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1780])), 7,
            7, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[750]),
            SCM_OBJ(&scm__rc.d2163[79]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1787])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1804])), 11,
            12, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[758]),
            SCM_OBJ(&scm__rc.d2163[81]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-count-r7 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1815])), 8,
            6, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[764]),
            SCM_OBJ(&scm__rc.d2163[82]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1823])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1838])), 15,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[770]),
            SCM_OBJ(&scm__rc.d2163[84]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-union! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1853])), 50,
            13, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[777]),
            SCM_OBJ(&scm__rc.d2163[85]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1903])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1918])), 14,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[785]),
            SCM_OBJ(&scm__rc.d2163[87]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-intersection! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1932])), 50,
            13, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[790]),
            SCM_OBJ(&scm__rc.d2163[88]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1982])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[1997])), 14,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[796]),
            SCM_OBJ(&scm__rc.d2163[90]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-difference! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2011])), 50,
            13, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[801]),
            SCM_OBJ(&scm__rc.d2163[91]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2061])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2076])), 19,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[807]),
            SCM_OBJ(&scm__rc.d2163[93]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-xor! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2095])), 50,
            13, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[812]),
            SCM_OBJ(&scm__rc.d2163[94]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2145])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* boolean-hash */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2160])), 25,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[817]),
            SCM_OBJ(&scm__rc.d2163[96]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2185])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* char-hash */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2200])), 25,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[822]),
            SCM_OBJ(&scm__rc.d2163[98]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2225])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* char-ci-hash */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2240])), 29,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[827]),
            SCM_OBJ(&scm__rc.d2163[100]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2269])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* string-hash */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2284])), 25,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[832]),
            SCM_OBJ(&scm__rc.d2163[102]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2309])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* symbol-hash */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2324])), 25,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[837]),
            SCM_OBJ(&scm__rc.d2163[104]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2349])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* number-hash */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2364])), 25,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[842]),
            SCM_OBJ(&scm__rc.d2163[106]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2389])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-bound */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2404])), 3,
            3, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[847]),
            SCM_OBJ(&scm__rc.d2163[108]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2407])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (hash-table-compare-as-sets #:G2198) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2422])), 2,
            0, 0, 0, SCM_OBJ(&scm__rc.d2169[849]), SCM_NIL, SCM_OBJ(&scm__rc.d2169[854]),
            SCM_OBJ(&scm__rc.d2163[114]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (hash-table-compare-as-sets #:G2197) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2424])), 1,
            0, 3, 0, SCM_OBJ(&scm__rc.d2169[856]), SCM_NIL, SCM_OBJ(&scm__rc.d2169[863]),
            SCM_OBJ(&scm__rc.d2163[114]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2425])), 21,
            16, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[1017]),
            SCM_OBJ(&scm__rc.d2163[112]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* subset? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2446])), 9,
            7, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[1021]),
            SCM_OBJ(&scm__rc.d2163[113]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table-compare-as-sets */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2455])), 215,
            33, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[1028]),
            SCM_OBJ(&scm__rc.d2163[114]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2670])), 17,
            15, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2687])), 6,
            6, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[1036]),
            SCM_OBJ(&scm__rc.d2163[116]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* hash-table=? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2693])), 47,
            19, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2169[1042]),
            SCM_OBJ(&scm__rc.d2163[117]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2162[2740])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2162 */
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[0]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* *unique* */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[0]) + 13),
    0x00000009    /*   9 (CONSTF-PUSH) */,
    0x00000004    /*  10 (CONSTF) */,
    0x00000066    /*  11 (CONS) */,
    0x00000014    /*  12 (RET) */,
    0x00000015    /*  13 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* *unique* */,
    0x00000014    /*  15 (RET) */,
    /* hash */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[16]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %current-recursive-hash */,
    0x00001018    /*   4 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   5 (LREF0) */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[16]) + 12),
    0x0000004c    /*   8 (LREF10-PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00001012    /*  10 (TAIL-CALL 1) */,
    0x00000014    /*  11 (RET) */,
    0x0000004c    /*  12 (LREF10-PUSH) */,
    0x00001060    /*  13 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* legacy-hash */,
    0x00000014    /*  15 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[32]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[32]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[1])) /* #<compiled-code hash@0x77010d416900> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash */,
    0x00000014    /*  14 (RET) */,
    /* make-hash-table */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 7),
    0x00000001    /*   3 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* eq? */,
    0x00000013    /*   5 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 8),
    0x0000006a    /*   7 (LREF0-CAR) */,
    0x0000000d    /*   8 (PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 15),
    0x00000003    /*  12 (CONSTN) */,
    0x00000013    /*  13 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 16),
    0x00000076    /*  15 (LREF0-CDR) */,
    0x00002018    /*  16 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  17 (LREF0) */,
    0x00000022    /*  18 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 23),
    0x00000002    /*  20 (CONSTI 0) */,
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 24),
    0x0000006a    /*  23 (LREF0-CAR) */,
    0x0000000d    /*  24 (PUSH) */,
    0x0000003d    /*  25 (LREF0) */,
    0x00000022    /*  26 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 31),
    0x00000003    /*  28 (CONSTN) */,
    0x00000013    /*  29 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 32),
    0x00000076    /*  31 (LREF0-CDR) */,
    0x00002018    /*  32 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  33 (LREF0) */,
    0x00000022    /*  34 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 38),
    0x00000013    /*  36 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 46),
    0x0000200e    /*  38 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 46),
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[40])) /* "too many arguments for" */,
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[198])) /* (lambda (:optional (comparator 'eq?) (init-size 0)) (case comparator ((eq? eqv? equal? string=?) (%make-hash-table-simple comparator init-size)) (else (unless (comparator? comparator) (error "make-hash-table requires a comparator or one of the symbols in eq?, eqv?, equal? or string=?, but got:" comparator)) (cond ((or (eq? comparator eq-comparator) (eq? (comparator-equality-predicate comparator) eq?)) (make-hash-table 'eq? init-size)) ((or (eq? comparator eqv-comparator) (eq? (comparator-equality-predicate comparator) eqv?)) (make-hash-table 'eqv? init-size)) ((eq? comparator equal-comparator) (make-hash-table 'equal? init-size)) ((eq? comparator string-comparator) (make-hash-table 'string=? init-size)) (else (unless (comparator-hashable? comparator) (error "make-hash-table requires a comparator with hash function, but got:" comparator)) ($ %make-hash-table-from-comparator comparator init-size (not (eq? (comparator-type-test-predicate comparator) (with-module gauche.internal default-type-test))))))))) */,
    0x0000205f    /*  44 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000004d    /*  46 (LREF11-PUSH) */,
    0x00000001    /*  47 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[104])) /* (eq? eqv? equal? string=?) */,
    0x0000008c    /*  49 (MEMV) */,
    0x0000001e    /*  50 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 57),
    0x0000004d    /*  52 (LREF11-PUSH) */,
    0x00000049    /*  53 (LREF1-PUSH) */,
    0x00002060    /*  54 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %make-hash-table-simple */,
    0x00000014    /*  56 (RET) */,
    0x0000100e    /*  57 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 62),
    0x0000004d    /*  59 (LREF11-PUSH) */,
    0x0000105f    /*  60 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* comparator? */,
    0x0000001e    /*  62 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 66),
    0x00000013    /*  64 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 73),
    0x0000200e    /*  66 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 73),
    0x00000006    /*  68 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[49])) /* "make-hash-table requires a comparator or one of the symbols in eq?, eqv?, equal? or string=?, but got:" */,
    0x0000004d    /*  70 (LREF11-PUSH) */,
    0x0000205f    /*  71 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000004d    /*  73 (LREF11-PUSH) */,
    0x0000005d    /*  74 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* eq-comparator */,
    0x00000020    /*  76 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 84),
    0x00000006    /*  78 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* eq? */,
    0x00000049    /*  80 (LREF1-PUSH) */,
    0x00002060    /*  81 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00000014    /*  83 (RET) */,
    0x0000100e    /*  84 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 89),
    0x0000004d    /*  86 (LREF11-PUSH) */,
    0x0000105f    /*  87 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* comparator-equality-predicate */,
    0x00000061    /*  89 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* eq? */,
    0x00000020    /*  91 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 96),
    0x00000013    /*  93 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 78),
    0x00000014    /*  95 (RET) */,
    0x0000004d    /*  96 (LREF11-PUSH) */,
    0x0000005d    /*  97 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* eqv-comparator */,
    0x00000020    /*  99 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 107),
    0x00000006    /* 101 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* eqv? */,
    0x00000049    /* 103 (LREF1-PUSH) */,
    0x00002060    /* 104 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00000014    /* 106 (RET) */,
    0x0000100e    /* 107 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 112),
    0x0000004d    /* 109 (LREF11-PUSH) */,
    0x0000105f    /* 110 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* comparator-equality-predicate */,
    0x00000061    /* 112 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* eqv? */,
    0x00000020    /* 114 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 119),
    0x00000013    /* 116 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 101),
    0x00000014    /* 118 (RET) */,
    0x0000004d    /* 119 (LREF11-PUSH) */,
    0x0000005d    /* 120 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* equal-comparator */,
    0x00000020    /* 122 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 130),
    0x00000006    /* 124 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x00000049    /* 126 (LREF1-PUSH) */,
    0x00002060    /* 127 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00000014    /* 129 (RET) */,
    0x0000004d    /* 130 (LREF11-PUSH) */,
    0x0000005d    /* 131 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* string-comparator */,
    0x00000020    /* 133 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 141),
    0x00000006    /* 135 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string=? */,
    0x00000049    /* 137 (LREF1-PUSH) */,
    0x00002060    /* 138 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00000014    /* 140 (RET) */,
    0x0000100e    /* 141 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 146),
    0x0000004d    /* 143 (LREF11-PUSH) */,
    0x0000105f    /* 144 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* comparator-hashable? */,
    0x0000001e    /* 146 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 150),
    0x00000013    /* 148 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 157),
    0x0000200e    /* 150 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 157),
    0x00000006    /* 152 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[58])) /* "make-hash-table requires a comparator with hash function, but got:" */,
    0x0000004d    /* 154 (LREF11-PUSH) */,
    0x0000205f    /* 155 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000004d    /* 157 (LREF11-PUSH) */,
    0x00000049    /* 158 (LREF1-PUSH) */,
    0x0000100e    /* 159 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]) + 164),
    0x0000004d    /* 161 (LREF11-PUSH) */,
    0x0000105f    /* 162 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* comparator-type-test-predicate */,
    0x00000061    /* 164 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* default-type-test */,
    0x0000008f    /* 166 (EQ) */,
    0x00000092    /* 167 (NOT) */,
    0x00003063    /* 168 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %make-hash-table-from-comparator */,
    0x00000014    /* 170 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[218]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[218]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[3])) /* #<compiled-code make-hash-table@0x77010d3fa060> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-comparator */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-type */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   6 (LREF0) */,
    0x0000002e    /*   7 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* eq? */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]) + 13)  /*     13 */,
    0x0000005d    /*  10 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* eq-comparator */,
    0x00000014    /*  12 (RET) */,
    0x0000003d    /*  13 (LREF0) */,
    0x0000002e    /*  14 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* eqv? */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]) + 20)  /*     20 */,
    0x0000005d    /*  17 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* eqv-comparator */,
    0x00000014    /*  19 (RET) */,
    0x0000003d    /*  20 (LREF0) */,
    0x0000002e    /*  21 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]) + 27)  /*     27 */,
    0x0000005d    /*  24 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* equal-comparator */,
    0x00000014    /*  26 (RET) */,
    0x0000003d    /*  27 (LREF0) */,
    0x0000002e    /*  28 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* string=? */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]) + 34)  /*     34 */,
    0x0000005d    /*  31 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* string-comparator */,
    0x00000014    /*  33 (RET) */,
    0x0000003d    /*  34 (LREF0) */,
    0x0000002e    /*  35 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* general */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]) + 42)  /*     42 */,
    0x0000004c    /*  38 (LREF10-PUSH) */,
    0x00001060    /*  39 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %hash-table-comparator-int */,
    0x00000014    /*  41 (RET) */,
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[69])) /* "unknown hashtable type:" */,
    0x0000004c    /*  44 (LREF10-PUSH) */,
    0x00002060    /*  45 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  47 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[281]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-comparator */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[281]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[5])) /* #<compiled-code hash-table-comparator@0x77010cbea000> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-comparator */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-fold */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]) + 7),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]) + 12),
    0x0000003f    /*   9 (LREF2) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000004a    /*  18 (LREF2-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]) + 26),
    0x0000004a    /*  23 (LREF2-PUSH) */,
    0x0000105f    /*  24 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %hash-table-iter */,
    0x00001018    /*  26 (PUSH-LOCAL-ENV 1) */,
    0x0000004c    /*  27 (LREF10-PUSH) */,
    0x00001017    /*  28 (LOCAL-ENV 1) */,
    0x0000100e    /*  29 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]) + 35),
    0x0000005e    /*  31 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* *unique* */,
    0x00000041    /*  33 (LREF10) */,
    0x00001011    /*  34 (CALL 1) */,
    0x00002036    /*  35 (TAIL-RECEIVE 2 0) */,
    0x00000049    /*  36 (LREF1-PUSH) */,
    0x0000005d    /*  37 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* *unique* */,
    0x00000020    /*  39 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]) + 42),
    0x00000057    /*  41 (LREF10-RET) */,
    0x0000300e    /*  42 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]) + 49),
    0x00000049    /*  44 (LREF1-PUSH) */,
    0x00000048    /*  45 (LREF0-PUSH) */,
    0x0000004c    /*  46 (LREF10-PUSH) */,
    0x0040303c    /*  47 (LREF 3 1) */,
    0x00003011    /*  48 (CALL 3) */,
    0x0000000d    /*  49 (PUSH) */,
    0x0000201b    /*  50 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]) + 29),
    0x00000014    /*  52 (RET) */,
    0x00000014    /*  53 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[350]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-fold */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[350]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[7])) /* #<compiled-code hash-table-fold@0x77010dfd5300> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-fold */,
    0x00000014    /*  14 (RET) */,
    /* (alist->hash-table #f) */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x0000006a    /*   1 (LREF0-CAR) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000076    /*   3 (LREF0-CDR) */,
    0x00003063    /*   4 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /*   6 (RET) */,
    /* alist->hash-table */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[372]) + 6),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x0000003d    /*   4 (LREF0) */,
    0x00002095    /*   5 (TAIL-APPLY 2) */,
    0x00001018    /*   6 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[372]) + 15),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[9])) /* #<compiled-code (alist->hash-table #f)@0x77010d0145a0> */,
    0x0000000d    /*  11 (PUSH) */,
    0x0000004d    /*  12 (LREF11-PUSH) */,
    0x0000205f    /*  13 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* for-each */,
    0x00000053    /*  15 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[388]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* alist->hash-table */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[388]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[10])) /* #<compiled-code alist->hash-table@0x77010d014600> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* alist->hash-table */,
    0x00000014    /*  14 (RET) */,
    /* hash-table->alist */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005e    /*   1 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* cons */,
    0x00002060    /*   3 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map */,
    0x00000014    /*   5 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[409]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table->alist */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[409]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[12])) /* #<compiled-code hash-table->alist@0x77010d13c180> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table->alist */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[424]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[424]) + 13),
    0x00000009    /*   9 (CONSTF-PUSH) */,
    0x00000004    /*  10 (CONSTF) */,
    0x00000066    /*  11 (CONS) */,
    0x00000014    /*  12 (RET) */,
    0x00000015    /*  13 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x00000014    /*  15 (RET) */,
    /* (hash-table-from-pairs #f) */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x0000006a    /*   1 (LREF0-CAR) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000076    /*   3 (LREF0-CDR) */,
    0x00003063    /*   4 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /*   6 (RET) */,
    /* hash-table-from-pairs */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[447]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   6 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[447]) + 14),
    0x00000016    /*   8 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[15])) /* #<compiled-code (hash-table-from-pairs #f)@0x77010d1e3180> */,
    0x0000000d    /*  10 (PUSH) */,
    0x0000004c    /*  11 (LREF10-PUSH) */,
    0x0000205f    /*  12 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* for-each */,
    0x00000053    /*  14 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[462]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-from-pairs */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[462]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[16])) /* #<compiled-code hash-table-from-pairs@0x77010d1e34e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-from-pairs */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[477]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[477]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-from-pairs */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-r7 #f) */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00003060    /*   3 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /*   5 (RET) */,
    /* hash-table-r7 */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   6 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 54),
    0x00000016    /*   8 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[19])) /* #<compiled-code (hash-table-r7 #f)@0x77010d2ed0c0> */,
    0x0000000d    /*  10 (PUSH) */,
    0x0000004c    /*  11 (LREF10-PUSH) */,
    0x00002017    /*  12 (LOCAL-ENV 2) */,
    0x0000003d    /*  13 (LREF0) */,
    0x00000022    /*  14 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 20),
    0x00000001    /*  16 (CONST) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00000013    /*  18 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 39),
    0x00000076    /*  20 (LREF0-CDR) */,
    0x00000022    /*  21 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 38),
    0x0000200e    /*  23 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 39),
    0x0000006a    /*  25 (LREF0-CAR) */,
    0x0000200f    /*  26 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 33),
    0x00000006    /*  28 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[117])) /* "plist is not even:" */,
    0x0000004f    /*  30 (LREF20-PUSH) */,
    0x0000205f    /*  31 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000000d    /*  33 (PUSH) */,
    0x0000003e    /*  34 (LREF1) */,
    0x00002011    /*  35 (CALL 2) */,
    0x00000013    /*  36 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 39),
    0x00000004    /*  38 (CONSTF) */,
    0x00000031    /*  39 (RT) */,
    0x0000200e    /*  40 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 48),
    0x0000006a    /*  42 (LREF0-CAR) */,
    0x0000000d    /*  43 (PUSH) */,
    0x0000003d    /*  44 (LREF0) */,
    0x00000083    /*  45 (CADR-PUSH) */,
    0x0000003e    /*  46 (LREF1) */,
    0x00002011    /*  47 (CALL 2) */,
    0x00000049    /*  48 (LREF1-PUSH) */,
    0x0000003d    /*  49 (LREF0) */,
    0x00000087    /*  50 (CDDR-PUSH) */,
    0x0000101b    /*  51 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]) + 13),
    0x00000014    /*  53 (RET) */,
    0x00000053    /*  54 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[553]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[553]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[20])) /* #<compiled-code hash-table-r7@0x77010d2ed120> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-r7 */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-empty? */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[568]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-num-entries */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000002    /*   6 (CONSTI 0) */,
    0x000000ad    /*   7 (NUMEQ2) */,
    0x00000014    /*   8 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[577]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-empty? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[577]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[22])) /* #<compiled-code hash-table-empty?@0x77010cf702a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-empty? */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[592]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-contains? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[592]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-exists? */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-contains? */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[607]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-size */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[607]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-num-entries */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-size */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-mutable? */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[622]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[622]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[622]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[622]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000000a    /*  21 (CONST-RET) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[645]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-mutable? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[645]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[26])) /* #<compiled-code hash-table-mutable?@0x77010c6daf00> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-mutable? */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-empty-copy */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[660]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-comparator */,
    0x00001063    /*   5 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00000014    /*   7 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[668]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-empty-copy */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[668]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[28])) /* #<compiled-code hash-table-empty-copy@0x77010c740360> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-empty-copy */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-entries */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[683]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-keys */,
    0x0000100f    /*   5 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[683]) + 10),
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x0000105f    /*   8 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-values */,
    0x000020a3    /*  10 (VALUES-RET 2) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[694]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-entries */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[694]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[30])) /* #<compiled-code hash-table-entries@0x77010c657480> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-entries */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-unfold */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[709]) + 7),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00000049    /*   4 (LREF1-PUSH) */,
    0x0000003d    /*   5 (LREF0) */,
    0x00003095    /*   6 (TAIL-APPLY 3) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[709]) + 41),
    0x0000004e    /*  10 (LREF12-PUSH) */,
    0x00001017    /*  11 (LOCAL-ENV 1) */,
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[709]) + 17),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0140203c    /*  15 (LREF 2 5) */,
    0x00001011    /*  16 (CALL 1) */,
    0x00000031    /*  17 (RT) */,
    0x0000100e    /*  18 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[709]) + 23),
    0x00000048    /*  20 (LREF0-PUSH) */,
    0x0100203c    /*  21 (LREF 2 4) */,
    0x00001011    /*  22 (CALL 1) */,
    0x00002036    /*  23 (TAIL-RECEIVE 2 0) */,
    0x0000300e    /*  24 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[709]) + 31),
    0x0000004f    /*  26 (LREF20-PUSH) */,
    0x00000049    /*  27 (LREF1-PUSH) */,
    0x00000048    /*  28 (LREF0-PUSH) */,
    0x0000305f    /*  29 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x0000001a    /*  31 (POP-LOCAL-ENV) */,
    0x0000100e    /*  32 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[709]) + 37),
    0x00000048    /*  34 (LREF0-PUSH) */,
    0x00c0203c    /*  35 (LREF 2 3) */,
    0x00001011    /*  36 (CALL 1) */,
    0x0000000d    /*  37 (PUSH) */,
    0x0000101b    /*  38 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[709]) + 12),
    0x00000014    /*  40 (RET) */,
    0x00000053    /*  41 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[751]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-unfold */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[751]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[32])) /* #<compiled-code hash-table-unfold@0x77010cdc68a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-unfold */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-ref */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 6),
    0x00000005    /*   3 (CONSTU) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 23),
    0x0000005d    /*  19 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* identity */,
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 24),
    0x0000006a    /*  23 (LREF0-CAR) */,
    0x0000000d    /*  24 (PUSH) */,
    0x0000003d    /*  25 (LREF0) */,
    0x00000022    /*  26 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 31),
    0x00000003    /*  28 (CONSTN) */,
    0x00000013    /*  29 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 32),
    0x00000076    /*  31 (LREF0-CDR) */,
    0x00002018    /*  32 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  33 (LREF0) */,
    0x00000022    /*  34 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 38),
    0x00000013    /*  36 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 46),
    0x0000200e    /*  38 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 46),
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[40])) /* "too many arguments for" */,
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[483])) /* (lambda (ht key :optional failure (success identity)) (let1 v (hash-table-get ht key unique) (if (eq? v unique) (if (undefined? failure) (error "hash table doesn't have an entry for key:" key) (failure)) (success v)))) */,
    0x0000205f    /*  44 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000300e    /*  46 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 54),
    0x00802047    /*  48 (LREF-PUSH 2 2) */,
    0x00000050    /*  49 (LREF21-PUSH) */,
    0x0000005e    /*  50 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x0000305f    /*  52 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-get */,
    0x00001018    /*  54 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*  55 (LREF0-PUSH) */,
    0x0000005d    /*  56 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x00000020    /*  58 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 76),
    0x0000100e    /*  60 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 65),
    0x00000050    /*  62 (LREF21-PUSH) */,
    0x0000105f    /*  63 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  65 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]) + 73),
    0x00000006    /*  67 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[137])) /* "hash table doesn't have an entry for key:" */,
    0x00403047    /*  69 (LREF-PUSH 3 1) */,
    0x00002060    /*  70 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  72 (RET) */,
    0x00000045    /*  73 (LREF21) */,
    0x00000012    /*  74 (TAIL-CALL 0) */,
    0x00000014    /*  75 (RET) */,
    0x00000048    /*  76 (LREF0-PUSH) */,
    0x00000042    /*  77 (LREF11) */,
    0x00001012    /*  78 (TAIL-CALL 1) */,
    0x00000014    /*  79 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[846]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-ref */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[846]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[34])) /* #<compiled-code hash-table-ref@0x77010c731de0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-ref */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-ref/default */
    0x0000004a    /*   0 (LREF2-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00003060    /*   3 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-get */,
    0x00000014    /*   5 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[867]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-ref/default */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[867]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[36])) /* #<compiled-code hash-table-ref/default@0x77010caf92a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-ref/default */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-set! #f) */
    0x0000004d    /*   0 (LREF11-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00003060    /*   3 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /*   5 (RET) */,
    /* hash-table-set! */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[38])) /* #<compiled-code (hash-table-set! #f)@0x77010cac11e0> */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x00002017    /*   4 (LOCAL-ENV 2) */,
    0x0000003d    /*   5 (LREF0) */,
    0x00000022    /*   6 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[888]) + 12),
    0x00000001    /*   8 (CONST) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[888]) + 31),
    0x00000076    /*  12 (LREF0-CDR) */,
    0x00000022    /*  13 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[888]) + 30),
    0x0000200e    /*  15 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[888]) + 31),
    0x0000006a    /*  17 (LREF0-CAR) */,
    0x0000200f    /*  18 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[888]) + 25),
    0x00000006    /*  20 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[117])) /* "plist is not even:" */,
    0x0000004c    /*  22 (LREF10-PUSH) */,
    0x0000205f    /*  23 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000000d    /*  25 (PUSH) */,
    0x0000003e    /*  26 (LREF1) */,
    0x00002011    /*  27 (CALL 2) */,
    0x00000013    /*  28 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[888]) + 31),
    0x00000004    /*  30 (CONSTF) */,
    0x00000031    /*  31 (RT) */,
    0x0000200e    /*  32 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[888]) + 40),
    0x0000006a    /*  34 (LREF0-CAR) */,
    0x0000000d    /*  35 (PUSH) */,
    0x0000003d    /*  36 (LREF0) */,
    0x00000083    /*  37 (CADR-PUSH) */,
    0x0000003e    /*  38 (LREF1) */,
    0x00002011    /*  39 (CALL 2) */,
    0x00000049    /*  40 (LREF1-PUSH) */,
    0x0000003d    /*  41 (LREF0) */,
    0x00000087    /*  42 (CDDR-PUSH) */,
    0x0000101b    /*  43 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[888]) + 5),
    0x00000014    /*  45 (RET) */,
    0x00000014    /*  46 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[935]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-set! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[935]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[39])) /* #<compiled-code hash-table-set!@0x77010cac1240> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-set! */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-intern!-r7 */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[950]) + 8),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x0000005e    /*   4 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x0000305f    /*   6 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-get */,
    0x00001018    /*   8 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*   9 (LREF0-PUSH) */,
    0x0000005d    /*  10 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x00000020    /*  12 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[950]) + 27),
    0x0000000e    /*  14 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[950]) + 18),
    0x00000041    /*  16 (LREF10) */,
    0x00000011    /*  17 (CALL 0) */,
    0x00001018    /*  18 (PUSH-LOCAL-ENV 1) */,
    0x0000300e    /*  19 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[950]) + 26),
    0x00802047    /*  21 (LREF-PUSH 2 2) */,
    0x00000050    /*  22 (LREF21-PUSH) */,
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000305f    /*  24 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000053    /*  26 (LREF0-RET) */,
    0x00000053    /*  27 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[978]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-intern!-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[978]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[41])) /* #<compiled-code hash-table-intern!-r7@0x770110862ba0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-intern!-r7 */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-delete!-r7 #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[993]) + 6),
    0x0000004d    /*   2 (LREF11-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-delete! */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[993]) + 10),
    0x000010bd    /*   8 (LREF0-NUMADDI 1) */,
    0x00000014    /*   9 (RET) */,
    0x00000053    /*  10 (LREF0-RET) */,
    /* hash-table-delete!-r7 */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[43])) /* #<compiled-code (hash-table-delete!-r7 #f)@0x77010e9a13c0> */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000007    /*   3 (CONSTI-PUSH 0) */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00003060    /*   5 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold */,
    0x00000014    /*   7 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1012]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-delete!-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1012]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[44])) /* #<compiled-code hash-table-delete!-r7@0x77010e9a16c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-delete!-r7 */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-update!/default */
    0x0000004b    /*   0 (LREF3-PUSH) */,
    0x0000004a    /*   1 (LREF2-PUSH) */,
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x00004060    /*   4 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-update! */,
    0x00000014    /*   6 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1034]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-update!/default */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1034]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[46])) /* #<compiled-code hash-table-update!/default@0x77010d416cc0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-update!/default */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-update!-r7 */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 6),
    0x00000005    /*   3 (CONSTU) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 23),
    0x0000005d    /*  19 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* identity */,
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 24),
    0x0000006a    /*  23 (LREF0-CAR) */,
    0x0000000d    /*  24 (PUSH) */,
    0x0000003d    /*  25 (LREF0) */,
    0x00000022    /*  26 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 31),
    0x00000003    /*  28 (CONSTN) */,
    0x00000013    /*  29 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 32),
    0x00000076    /*  31 (LREF0-CDR) */,
    0x00002018    /*  32 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  33 (LREF0) */,
    0x00000022    /*  34 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 38),
    0x00000013    /*  36 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 46),
    0x0000200e    /*  38 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 46),
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[40])) /* "too many arguments for" */,
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[562])) /* (lambda (ht key updater :optional failure (success identity)) (let1 v (hash-table-get ht key unique) (if (eq? v unique) (if (undefined? failure) (error "hash table doesn't have an entry for key:" key) (hash-table-put! ht key (updater (failure)))) (hash-table-put! ht key (updater (success v)))))) */,
    0x0000205f    /*  44 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000300e    /*  46 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 54),
    0x00c02047    /*  48 (LREF-PUSH 2 3) */,
    0x00802047    /*  49 (LREF-PUSH 2 2) */,
    0x0000005e    /*  50 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x0000305f    /*  52 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-get */,
    0x00001018    /*  54 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*  55 (LREF0-PUSH) */,
    0x0000005d    /*  56 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x00000020    /*  58 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 87),
    0x0000100e    /*  60 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 65),
    0x00000050    /*  62 (LREF21-PUSH) */,
    0x0000105f    /*  63 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  65 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 73),
    0x00000006    /*  67 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[137])) /* "hash table doesn't have an entry for key:" */,
    0x00803047    /*  69 (LREF-PUSH 3 2) */,
    0x00002060    /*  70 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  72 (RET) */,
    0x00c03047    /*  73 (LREF-PUSH 3 3) */,
    0x00803047    /*  74 (LREF-PUSH 3 2) */,
    0x0000100e    /*  75 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 84),
    0x0000000e    /*  77 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 81),
    0x00000045    /*  79 (LREF21) */,
    0x00000011    /*  80 (CALL 0) */,
    0x0000000d    /*  81 (PUSH) */,
    0x0040303c    /*  82 (LREF 3 1) */,
    0x00001011    /*  83 (CALL 1) */,
    0x00003063    /*  84 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /*  86 (RET) */,
    0x00c03047    /*  87 (LREF-PUSH 3 3) */,
    0x00803047    /*  88 (LREF-PUSH 3 2) */,
    0x0000100e    /*  89 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 99),
    0x0000100e    /*  91 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]) + 96),
    0x00000048    /*  93 (LREF0-PUSH) */,
    0x00000042    /*  94 (LREF11) */,
    0x00001011    /*  95 (CALL 1) */,
    0x0000000d    /*  96 (PUSH) */,
    0x0040303c    /*  97 (LREF 3 1) */,
    0x00001011    /*  98 (CALL 1) */,
    0x00003063    /*  99 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /* 101 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1151]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-update!-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1151]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[48])) /* #<compiled-code hash-table-update!-r7@0x77010d7d26c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-update!-r7 */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-pop!-r7 */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 26),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000105f    /*  24 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %hash-table-iter */,
    0x00001018    /*  26 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  27 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 33),
    0x0000005e    /*  29 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x0000003d    /*  31 (LREF0) */,
    0x00001011    /*  32 (CALL 1) */,
    0x00002036    /*  33 (TAIL-RECEIVE 2 0) */,
    0x00000049    /*  34 (LREF1-PUSH) */,
    0x0000005d    /*  35 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x00000020    /*  37 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 48),
    0x0000200e    /*  39 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 48),
    0x00000006    /*  41 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[150])) /* "empty hash table can't be popped:" */,
    0x0000004f    /*  43 (LREF20-PUSH) */,
    0x0000205f    /*  44 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /*  46 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 48),
    0x0000200e    /*  48 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]) + 54),
    0x0000004f    /*  50 (LREF20-PUSH) */,
    0x00000049    /*  51 (LREF1-PUSH) */,
    0x0000205f    /*  52 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-delete! */,
    0x00000049    /*  54 (LREF1-PUSH) */,
    0x0000003d    /*  55 (LREF0) */,
    0x000020a3    /*  56 (VALUES-RET 2) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1223]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-pop!-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1223]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[50])) /* #<compiled-code hash-table-pop!-r7@0x77010d164de0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-pop!-r7 */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-map */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 6),
    0x00000005    /*   3 (CONSTU) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[40])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[624])) /* (lambda (ht proc :optional arg) (when (not (undefined? arg)) (error "Gauche's built-in hash-table-map is called with R7RS interface. Use hash-table-map-r7, or say (use scheme.hash-table).")) (assume-type ht <hash-table>) (let1 i ((with-module gauche.internal %hash-table-iter) ht) (let loop ((r '())) (receive (k v) (i unique) (if (eq? k unique) r (loop (cons (proc k v) r))))))) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000100e    /*  29 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 34),
    0x00000049    /*  31 (LREF1-PUSH) */,
    0x0000105f    /*  32 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  34 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 38),
    0x00000013    /*  36 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 44),
    0x0000100e    /*  38 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 44),
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[153])) /* "Gauche's built-in hash-table-map is called with R7RS interface. Use hash-table-map-r7, or say (use scheme.hash-table)." */,
    0x0000105f    /*  42 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000200e    /*  44 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 51),
    0x0000004e    /*  46 (LREF12-PUSH) */,
    0x0000005e    /*  47 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*  49 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*  51 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 56),
    0x00000043    /*  53 (LREF12) */,
    0x00000013    /*  54 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 65),
    0x0000300e    /*  56 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 65),
    0x00000006    /*  58 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht */,
    0x0000005e    /*  60 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000004e    /*  62 (LREF12-PUSH) */,
    0x0000305f    /*  63 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  65 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 70),
    0x0000004e    /*  67 (LREF12-PUSH) */,
    0x0000105f    /*  68 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %hash-table-iter */,
    0x00001018    /*  70 (PUSH-LOCAL-ENV 1) */,
    0x00000008    /*  71 (CONSTN-PUSH) */,
    0x00001017    /*  72 (LOCAL-ENV 1) */,
    0x0000100e    /*  73 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 79),
    0x0000005e    /*  75 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x00000041    /*  77 (LREF10) */,
    0x00001011    /*  78 (CALL 1) */,
    0x00002036    /*  79 (TAIL-RECEIVE 2 0) */,
    0x00000049    /*  80 (LREF1-PUSH) */,
    0x0000005d    /*  81 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x00000020    /*  83 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 86),
    0x00000057    /*  85 (LREF10-RET) */,
    0x0000200e    /*  86 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 92),
    0x00000049    /*  88 (LREF1-PUSH) */,
    0x00000048    /*  89 (LREF0-PUSH) */,
    0x0040403c    /*  90 (LREF 4 1) */,
    0x00002011    /*  91 (CALL 2) */,
    0x0000000d    /*  92 (PUSH) */,
    0x00000041    /*  93 (LREF10) */,
    0x00000067    /*  94 (CONS-PUSH) */,
    0x0000201b    /*  95 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]) + 73),
    0x00000014    /*  97 (RET) */,
    0x00000014    /*  98 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1337]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1337]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[52])) /* #<compiled-code hash-table-map@0x77010d1bef00> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-map-r7 #f) */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x0000100e    /*   2 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1352]) + 7),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0080203c    /*   5 (LREF 2 2) */,
    0x00001011    /*   6 (CALL 1) */,
    0x00003063    /*   7 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /*   9 (RET) */,
    /* hash-table-map-r7 */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 7),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <comparator> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 12),
    0x0000003e    /*   9 (LREF1) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* cmpr */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <comparator> */,
    0x00000049    /*  18 (LREF1-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 28),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000005e    /*  24 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*  26 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*  28 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 33),
    0x0000003d    /*  30 (LREF0) */,
    0x00000013    /*  31 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 42),
    0x0000300e    /*  33 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 42),
    0x00000006    /*  35 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht */,
    0x0000005e    /*  37 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x0000305f    /*  40 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  42 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 47),
    0x00000049    /*  44 (LREF1-PUSH) */,
    0x0000105f    /*  45 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00001018    /*  47 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  48 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]) + 55),
    0x0000004c    /*  50 (LREF10-PUSH) */,
    0x00000016    /*  51 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[54])) /* #<compiled-code (hash-table-map-r7 #f)@0x77010cdc69c0> */,
    0x00002062    /*  53 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x00000053    /*  55 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1418]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1418]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[55])) /* #<compiled-code hash-table-map-r7@0x77010cdc6a20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map-r7 */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-map!-r7 #f) */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x0000200e    /*   2 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1433]) + 8),
    0x00000049    /*   4 (LREF1-PUSH) */,
    0x00000048    /*   5 (LREF0-PUSH) */,
    0x00000042    /*   6 (LREF11) */,
    0x00002011    /*   7 (CALL 2) */,
    0x00003063    /*   8 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /*  10 (RET) */,
    /* hash-table-map!-r7 */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x00000016    /*  22 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[57])) /* #<compiled-code (hash-table-map!-r7 #f)@0x77010cac19c0> */,
    0x00002063    /*  24 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x00000014    /*  26 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1471]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map!-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1471]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[58])) /* #<compiled-code hash-table-map!-r7@0x77010cac1a20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map!-r7 */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-map->list-r7 */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1491]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map->list-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1491]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[60])) /* #<compiled-code hash-table-map->list-r7@0x77010c654a80> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-map->list-r7 */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-for-each */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]) + 7),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]) + 12),
    0x0000003e    /*   9 (LREF1) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000049    /*  18 (LREF1-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]) + 26),
    0x00000049    /*  23 (LREF1-PUSH) */,
    0x0000105f    /*  24 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %hash-table-iter */,
    0x00001018    /*  26 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  27 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]) + 33),
    0x0000005e    /*  29 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x0000003d    /*  31 (LREF0) */,
    0x00001011    /*  32 (CALL 1) */,
    0x00002036    /*  33 (TAIL-RECEIVE 2 0) */,
    0x00000049    /*  34 (LREF1-PUSH) */,
    0x0000005d    /*  35 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x00000020    /*  37 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]) + 40),
    0x0000000c    /*  39 (CONSTU-RET) */,
    0x0000200e    /*  40 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]) + 46),
    0x00000049    /*  42 (LREF1-PUSH) */,
    0x00000048    /*  43 (LREF0-PUSH) */,
    0x00000044    /*  44 (LREF20) */,
    0x00002011    /*  45 (CALL 2) */,
    0x0000101b    /*  46 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]) + 27),
    0x00000014    /*  48 (RET) */,
    0x00000014    /*  49 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1556]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1556]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[62])) /* #<compiled-code hash-table-for-each@0x77010c6b6e40> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-for-each-r7 */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1576]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1576]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[64])) /* #<compiled-code hash-table-for-each-r7@0x77010c6da240> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each-r7 */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-fold-r7 */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000004a    /*   1 (LREF2-PUSH) */,
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00003060    /*   3 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-fold */,
    0x00000014    /*   5 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1597]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-fold-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1597]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[66])) /* #<compiled-code hash-table-fold-r7@0x77010c740720> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-fold-r7 */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-prune!-r7 #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1612]) + 6),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x00000042    /*   4 (LREF11) */,
    0x00002011    /*   5 (CALL 2) */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1612]) + 13),
    0x0000004c    /*   8 (LREF10-PUSH) */,
    0x00000049    /*   9 (LREF1-PUSH) */,
    0x00002060    /*  10 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-delete! */,
    0x00000014    /*  12 (RET) */,
    0x0000000c    /*  13 (CONSTU-RET) */,
    /* hash-table-prune!-r7 */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000016    /*   1 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[68])) /* #<compiled-code (hash-table-prune!-r7 #f)@0x77010f5c91e0> */,
    0x00002063    /*   3 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x00000014    /*   5 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1632]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-prune!-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1632]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[69])) /* #<compiled-code hash-table-prune!-r7@0x77010f5c9240> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-prune!-r7 */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-seek */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 7),
    0x0000004b    /*   2 (LREF3-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 12),
    0x00000040    /*   9 (LREF3) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000004b    /*  18 (LREF3-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 26),
    0x0000004b    /*  23 (LREF3-PUSH) */,
    0x0000105f    /*  24 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %hash-table-iter */,
    0x00001018    /*  26 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  27 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 33),
    0x0000005e    /*  29 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x0000003d    /*  31 (LREF0) */,
    0x00001011    /*  32 (CALL 1) */,
    0x00002036    /*  33 (TAIL-RECEIVE 2 0) */,
    0x00000049    /*  34 (LREF1-PUSH) */,
    0x0000005d    /*  35 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* unique */,
    0x00000020    /*  37 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 42),
    0x00000045    /*  39 (LREF21) */,
    0x00000012    /*  40 (TAIL-CALL 0) */,
    0x00000014    /*  41 (RET) */,
    0x0000200e    /*  42 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 48),
    0x00000049    /*  44 (LREF1-PUSH) */,
    0x00000048    /*  45 (LREF0-PUSH) */,
    0x0080203c    /*  46 (LREF 2 2) */,
    0x00002011    /*  47 (CALL 2) */,
    0x00001018    /*  48 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  49 (LREF0) */,
    0x0000001e    /*  50 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 58),
    0x00000048    /*  52 (LREF0-PUSH) */,
    0x0000004d    /*  53 (LREF11-PUSH) */,
    0x0000004c    /*  54 (LREF10-PUSH) */,
    0x00000046    /*  55 (LREF30) */,
    0x00003012    /*  56 (TAIL-CALL 3) */,
    0x00000014    /*  57 (RET) */,
    0x0000201b    /*  58 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]) + 27),
    0x00000014    /*  60 (RET) */,
    0x00000014    /*  61 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1709]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-seek */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1709]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[71])) /* #<compiled-code hash-table-seek@0x77010dcd5d20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-seek */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-find failure) */
    0x0000000b    /*   0 (CONSTF-RET) */,
    /* (hash-table-find #:G2190) */
    0x00000055    /*   0 (LREF2-RET) */,
    /* hash-table-find */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1726]) + 6),
    0x00000042    /*   3 (LREF11) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1726]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1726]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1726]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1726]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1726]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1726]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[40])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[734])) /* (lambda (ht pred :optional (failure (^ () #f))) (hash-table-seek ht pred failure (^ (r k v) r))) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000004e    /*  29 (LREF12-PUSH) */,
    0x0000004d    /*  30 (LREF11-PUSH) */,
    0x00000049    /*  31 (LREF1-PUSH) */,
    0x0000004f    /*  32 (LREF20-PUSH) */,
    0x00004060    /*  33 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-seek */,
    0x00000014    /*  35 (RET) */,
    /* %toplevel */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[716])) /* (#<compiled-code (hash-table-find failure)@0x77010d6e55a0> #<compiled-code (hash-table-find #:G2190)@0x77010d6e5300>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1762]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-find */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1762]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[75])) /* #<compiled-code hash-table-find@0x77010d6e52a0> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-find */,
    0x00000014    /*  16 (RET) */,
    /* (hash-table-find-r7 #:G2192) */
    0x00000055    /*   0 (LREF2-RET) */,
    /* hash-table-find-r7 */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x0000004a    /*   1 (LREF2-PUSH) */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000004c    /*   3 (LREF10-PUSH) */,
    0x00004060    /*   4 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-seek */,
    0x00000014    /*   6 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[743])) /* (#<compiled-code (hash-table-find-r7 #:G2192)@0x77010d1a1540>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1787]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-find-r7 */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1787]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[78])) /* #<compiled-code hash-table-find-r7@0x77010d1a1480> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-find-r7 */,
    0x00000014    /*  16 (RET) */,
    /* (hash-table-count-r7 #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1804]) + 6),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x00000042    /*   4 (LREF11) */,
    0x00002011    /*   5 (CALL 2) */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1804]) + 10),
    0x000010bd    /*   8 (LREF0-NUMADDI 1) */,
    0x00000014    /*   9 (RET) */,
    0x00000053    /*  10 (LREF0-RET) */,
    /* hash-table-count-r7 */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000016    /*   1 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[80])) /* #<compiled-code (hash-table-count-r7 #f)@0x77010d26b300> */,
    0x0000000d    /*   3 (PUSH) */,
    0x00000007    /*   4 (CONSTI-PUSH 0) */,
    0x00003060    /*   5 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-fold */,
    0x00000014    /*   7 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1823]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-count-r7 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1823]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[81])) /* #<compiled-code hash-table-count-r7@0x77010d26b360> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-count-r7 */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-union! #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1838]) + 6),
    0x0000004d    /*   2 (LREF11-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-exists? */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1838]) + 9),
    0x0000000c    /*   8 (CONSTU-RET) */,
    0x0000004d    /*   9 (LREF11-PUSH) */,
    0x00000049    /*  10 (LREF1-PUSH) */,
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x00003060    /*  12 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /*  14 (RET) */,
    /* hash-table-union! */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]) + 7),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]) + 12),
    0x0000003e    /*   9 (LREF1) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht1 */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000049    /*  18 (LREF1-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]) + 28),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000005e    /*  24 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*  26 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*  28 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]) + 33),
    0x0000003d    /*  30 (LREF0) */,
    0x00000013    /*  31 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]) + 42),
    0x0000300e    /*  33 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]) + 42),
    0x00000006    /*  35 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht2 */,
    0x0000005e    /*  37 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x0000305f    /*  40 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  42 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]) + 49),
    0x00000048    /*  44 (LREF0-PUSH) */,
    0x00000016    /*  45 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[83])) /* #<compiled-code (hash-table-union! #f)@0x77010d3fa5a0> */,
    0x00002062    /*  47 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x00000054    /*  49 (LREF1-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1903]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-union! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1903]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[84])) /* #<compiled-code hash-table-union!@0x77010d3fa600> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-union! */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-intersection! #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1918]) + 6),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-exists? */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1918]) + 9),
    0x0000000c    /*   8 (CONSTU-RET) */,
    0x0000004d    /*   9 (LREF11-PUSH) */,
    0x00000049    /*  10 (LREF1-PUSH) */,
    0x00002060    /*  11 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-delete! */,
    0x00000014    /*  13 (RET) */,
    /* hash-table-intersection! */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]) + 7),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]) + 12),
    0x0000003e    /*   9 (LREF1) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht1 */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000049    /*  18 (LREF1-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]) + 28),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000005e    /*  24 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*  26 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*  28 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]) + 33),
    0x0000003d    /*  30 (LREF0) */,
    0x00000013    /*  31 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]) + 42),
    0x0000300e    /*  33 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]) + 42),
    0x00000006    /*  35 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht2 */,
    0x0000005e    /*  37 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x0000305f    /*  40 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  42 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]) + 49),
    0x00000049    /*  44 (LREF1-PUSH) */,
    0x00000016    /*  45 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[86])) /* #<compiled-code (hash-table-intersection! #f)@0x77010cac1600> */,
    0x00002062    /*  47 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x00000054    /*  49 (LREF1-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1982]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-intersection! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1982]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[87])) /* #<compiled-code hash-table-intersection!@0x77010cac1660> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-intersection! */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-difference! #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1997]) + 6),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-exists? */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[1997]) + 13),
    0x0000004d    /*   8 (LREF11-PUSH) */,
    0x00000049    /*   9 (LREF1-PUSH) */,
    0x00002060    /*  10 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-delete! */,
    0x00000014    /*  12 (RET) */,
    0x0000000c    /*  13 (CONSTU-RET) */,
    /* hash-table-difference! */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]) + 7),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]) + 12),
    0x0000003e    /*   9 (LREF1) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht1 */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000049    /*  18 (LREF1-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]) + 28),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000005e    /*  24 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*  26 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*  28 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]) + 33),
    0x0000003d    /*  30 (LREF0) */,
    0x00000013    /*  31 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]) + 42),
    0x0000300e    /*  33 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]) + 42),
    0x00000006    /*  35 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht2 */,
    0x0000005e    /*  37 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x0000305f    /*  40 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  42 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]) + 49),
    0x00000049    /*  44 (LREF1-PUSH) */,
    0x00000016    /*  45 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[89])) /* #<compiled-code (hash-table-difference! #f)@0x77010c654480> */,
    0x00002062    /*  47 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x00000054    /*  49 (LREF1-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2061]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-difference! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2061]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[90])) /* #<compiled-code hash-table-difference!@0x77010c6544e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-difference! */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-xor! #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2076]) + 6),
    0x0000004d    /*   2 (LREF11-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-exists? */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2076]) + 13),
    0x0000004d    /*   8 (LREF11-PUSH) */,
    0x00000049    /*   9 (LREF1-PUSH) */,
    0x00002060    /*  10 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-delete! */,
    0x00000014    /*  12 (RET) */,
    0x0000004d    /*  13 (LREF11-PUSH) */,
    0x00000049    /*  14 (LREF1-PUSH) */,
    0x00000048    /*  15 (LREF0-PUSH) */,
    0x00003060    /*  16 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x00000014    /*  18 (RET) */,
    /* hash-table-xor! */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]) + 7),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]) + 12),
    0x0000003e    /*   9 (LREF1) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht1 */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000049    /*  18 (LREF1-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]) + 28),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000005e    /*  24 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x0000205f    /*  26 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*  28 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]) + 33),
    0x0000003d    /*  30 (LREF0) */,
    0x00000013    /*  31 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]) + 42),
    0x0000300e    /*  33 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]) + 42),
    0x00000006    /*  35 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* ht2 */,
    0x0000005e    /*  37 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <hash-table> */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x0000305f    /*  40 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  42 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]) + 49),
    0x00000048    /*  44 (LREF0-PUSH) */,
    0x00000016    /*  45 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[92])) /* #<compiled-code (hash-table-xor! #f)@0x77010c6da780> */,
    0x00002062    /*  47 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-for-each */,
    0x00000054    /*  49 (LREF1-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2145]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-xor! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2145]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[93])) /* #<compiled-code hash-table-xor!@0x77010c6da7e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-xor! */,
    0x00000014    /*  14 (RET) */,
    /* boolean-hash */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <boolean> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* obj */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <boolean> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x00001060    /*  22 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* default-hash */,
    0x00000014    /*  24 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2185]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* boolean-hash */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2185]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[95])) /* #<compiled-code boolean-hash@0x77010ca69cc0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* boolean-hash */,
    0x00000014    /*  14 (RET) */,
    /* char-hash */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <char> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* obj */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <char> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x00001060    /*  22 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* default-hash */,
    0x00000014    /*  24 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2225]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* char-hash */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2225]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[97])) /* #<compiled-code char-hash@0x77010c8fc120> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* char-hash */,
    0x00000014    /*  14 (RET) */,
    /* char-ci-hash */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <char> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* obj */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <char> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]) + 26),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000105f    /*  24 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* char-foldcase */,
    0x00001063    /*  26 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* default-hash */,
    0x00000014    /*  28 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2269]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* char-ci-hash */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2269]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[99])) /* #<compiled-code char-ci-hash@0x77010ea4a120> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* char-ci-hash */,
    0x00000014    /*  14 (RET) */,
    /* string-hash */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <string> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* obj */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <string> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x00001060    /*  22 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* default-hash */,
    0x00000014    /*  24 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2309]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* string-hash */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2309]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[101])) /* #<compiled-code string-hash@0x77010e3e7600> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* string-hash */,
    0x00000014    /*  14 (RET) */,
    /* symbol-hash */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <symbol> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* obj */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <symbol> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x00001060    /*  22 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* default-hash */,
    0x00000014    /*  24 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2349]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol-hash */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2349]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[103])) /* #<compiled-code symbol-hash@0x77010d4165a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol-hash */,
    0x00000014    /*  14 (RET) */,
    /* number-hash */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <number> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* obj */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <number> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x00001060    /*  22 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* default-hash */,
    0x00000014    /*  24 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2389]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* number-hash */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2389]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[105])) /* #<compiled-code number-hash@0x77010d014300> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* number-hash */,
    0x00000014    /*  14 (RET) */,
    /* hash-bound */
    0x00000060    /*   0 (GREF-TAIL-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* greatest-fixnum */,
    0x00000014    /*   2 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2407]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-bound */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2407]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[107])) /* #<compiled-code hash-bound@0x77010d0af660> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-bound */,
    0x00000014    /*  14 (RET) */,
    /* (hash-table-compare-as-sets #:G2198) */
    0x0000000a    /*   0 (CONST-RET) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    /* (hash-table-compare-as-sets #:G2197) */
    0x0000000b    /*   0 (CONSTF-RET) */,
    /* (hash-table-compare-as-sets subset? #f) */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2425]) + 7),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x00000050    /*   4 (LREF21-PUSH) */,
    0x0000305f    /*   5 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-get */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x00403047    /*   8 (LREF-PUSH 3 1) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00000020    /*  10 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2425]) + 13),
    0x00000014    /*  12 (RET) */,
    0x0000200e    /*  13 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2425]) + 19),
    0x0000004c    /*  15 (LREF10-PUSH) */,
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x0040503c    /*  17 (LREF 5 1) */,
    0x00002011    /*  18 (CALL 2) */,
    0x00000092    /*  19 (NOT) */,
    0x00000014    /*  20 (RET) */,
    /* (hash-table-compare-as-sets subset?) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x00000016    /*   1 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[111])) /* #<compiled-code (hash-table-compare-as-sets subset? #f)@0x77010d164600> */,
    0x0000000d    /*   3 (PUSH) */,
    0x00405047    /*   4 (LREF-PUSH 5 1) */,
    0x00005047    /*   5 (LREF-PUSH 5 0) */,
    0x00004060    /*   6 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-seek */,
    0x00000014    /*   8 (RET) */,
    /* hash-table-compare-as-sets */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 7),
    0x0000005d    /*   3 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x00000013    /*   5 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 8),
    0x0000006a    /*   7 (LREF0-CAR) */,
    0x0000000d    /*   8 (PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 15),
    0x00000003    /*  12 (CONSTN) */,
    0x00000013    /*  13 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 16),
    0x00000076    /*  15 (LREF0-CDR) */,
    0x00002018    /*  16 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  17 (LREF0) */,
    0x00000022    /*  18 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 23),
    0x00000005    /*  20 (CONSTU) */,
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 24),
    0x0000006a    /*  23 (LREF0-CAR) */,
    0x0000000d    /*  24 (PUSH) */,
    0x0000003d    /*  25 (LREF0) */,
    0x00000022    /*  26 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 31),
    0x00000003    /*  28 (CONSTN) */,
    0x00000013    /*  29 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 32),
    0x00000076    /*  31 (LREF0-CDR) */,
    0x00002018    /*  32 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  33 (LREF0) */,
    0x00000022    /*  34 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 38),
    0x00000013    /*  36 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 46),
    0x0000200e    /*  38 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 46),
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[40])) /* "too many arguments for" */,
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[1010])) /* (lambda (h1 h2 :optional (value=? equal?) (fallback (undefined))) (define unique (cons #f #f)) (define (fail) (if (undefined? fallback) (error "hash-tables can't be ordered:" h1 h2) fallback)) (define (subset? smaller larger) (hash-table-seek smaller (^ (k v) (let1 w (hash-table-get larger k unique) (or (eq? unique w) (not (value=? v w))))) (^ () #t) (^ (r k v) #f))) (let ((c1 (hash-table-comparator h1)) (c2 (hash-table-comparator h2))) (cond ((and c1 c2 (equal? c1 c2)) c1) ((or c1 c2) (error "hash-tables with different comparators can't be compared:" h1 h2)) (else (error "hash-tables don't have comparators and can't be compared:" h1 h2)))) (if (eq? h1 h2) 0 (let ((n1 (hash-table-num-entries h1)) (n2 (hash-table-num-entries h2))) (cond ((= n1 n2) (if (subset? h1 h2) 0 (fail))) ((< n1 n2) (if (subset? h1 h2) -1 (fail))) (else (if (subset? h2 h1) 1 (fail))))))) */,
    0x0000205f    /*  44 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00002019    /*  46 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[1023])) /* (#<undef> #<compiled-code (hash-table-compare-as-sets subset?)@0x77010d1647e0>) */,
    0x00000009    /*  48 (CONSTF-PUSH) */,
    0x00000004    /*  49 (CONSTF) */,
    0x00000066    /*  50 (CONS) */,
    0x000010e8    /*  51 (ENV-SET 1) */,
    0x0000100e    /*  52 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 57),
    0x00803047    /*  54 (LREF-PUSH 3 2) */,
    0x0000105f    /*  55 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-comparator */,
    0x0000100f    /*  57 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 62),
    0x00403047    /*  59 (LREF-PUSH 3 1) */,
    0x0000105f    /*  60 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-comparator */,
    0x00002018    /*  62 (PUSH-LOCAL-ENV 2) */,
    0x0000003e    /*  63 (LREF1) */,
    0x0000001e    /*  64 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 80),
    0x0000003d    /*  66 (LREF0) */,
    0x0000001e    /*  67 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 80),
    0x0000200e    /*  69 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 75),
    0x00000049    /*  71 (LREF1-PUSH) */,
    0x00000048    /*  72 (LREF0-PUSH) */,
    0x0000205f    /*  73 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  75 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 80),
    0x0000003e    /*  77 (LREF1) */,
    0x00000013    /*  78 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 116),
    0x0000003e    /*  80 (LREF1) */,
    0x0000001e    /*  81 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 93),
    0x0000300e    /*  83 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 116),
    0x00000006    /*  85 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[213])) /* "hash-tables with different comparators can't be compared:" */,
    0x00804047    /*  87 (LREF-PUSH 4 2) */,
    0x00404047    /*  88 (LREF-PUSH 4 1) */,
    0x0000305f    /*  89 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /*  91 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 116),
    0x0000003d    /*  93 (LREF0) */,
    0x0000001e    /*  94 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 100),
    0x00000013    /*  96 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 83),
    0x00000013    /*  98 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 116),
    0x0000300e    /* 100 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 116),
    0x00000006    /* 102 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[214])) /* "hash-tables don't have comparators and can't be compared:" */,
    0x00804047    /* 104 (LREF-PUSH 4 2) */,
    0x00404047    /* 105 (LREF-PUSH 4 1) */,
    0x0000305f    /* 106 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /* 108 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 116),
    0x00000013    /* 110 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 80),
    0x00000013    /* 112 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 116),
    0x00000013    /* 114 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 80),
    0x0000001a    /* 116 (POP-LOCAL-ENV) */,
    0x00803047    /* 117 (LREF-PUSH 3 2) */,
    0x0040303c    /* 118 (LREF 3 1) */,
    0x00000020    /* 119 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 123),
    0x00000002    /* 121 (CONSTI 0) */,
    0x00000014    /* 122 (RET) */,
    0x0000100e    /* 123 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 128),
    0x00803047    /* 125 (LREF-PUSH 3 2) */,
    0x0000105f    /* 126 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-num-entries */,
    0x0000100f    /* 128 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 133),
    0x00403047    /* 130 (LREF-PUSH 3 1) */,
    0x0000105f    /* 131 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-num-entries */,
    0x00002018    /* 133 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /* 134 (LREF0) */,
    0x00400028    /* 135 (LREF-VAL0-BNUMNE 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 162),
    0x0000200e    /* 137 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 143),
    0x00804047    /* 139 (LREF-PUSH 4 2) */,
    0x00404047    /* 140 (LREF-PUSH 4 1) */,
    0x00000041    /* 141 (LREF10) */,
    0x0000201c    /* 142 (LOCAL-ENV-CALL 2) */,
    0x0000001e    /* 143 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 147),
    0x00000002    /* 145 (CONSTI 0) */,
    0x00000014    /* 146 (RET) */,
    0x0000100e    /* 147 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 152),
    0x00000050    /* 149 (LREF21-PUSH) */,
    0x0000105f    /* 150 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 152 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 161),
    0x00000006    /* 154 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[205])) /* "hash-tables can't be ordered:" */,
    0x00804047    /* 156 (LREF-PUSH 4 2) */,
    0x00404047    /* 157 (LREF-PUSH 4 1) */,
    0x00003060    /* 158 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 160 (RET) */,
    0x0000005b    /* 161 (LREF21-RET) */,
    0x0000003d    /* 162 (LREF0) */,
    0x00400029    /* 163 (LREF-VAL0-BNLT 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 190),
    0x0000200e    /* 165 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 171),
    0x00804047    /* 167 (LREF-PUSH 4 2) */,
    0x00404047    /* 168 (LREF-PUSH 4 1) */,
    0x00000041    /* 169 (LREF10) */,
    0x0000201c    /* 170 (LOCAL-ENV-CALL 2) */,
    0x0000001e    /* 171 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 175),
    -0x00000ffe   /* 173 (CONSTI -1) */,
    0x00000014    /* 174 (RET) */,
    0x0000100e    /* 175 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 180),
    0x00000050    /* 177 (LREF21-PUSH) */,
    0x0000105f    /* 178 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 180 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 189),
    0x00000006    /* 182 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[205])) /* "hash-tables can't be ordered:" */,
    0x00804047    /* 184 (LREF-PUSH 4 2) */,
    0x00404047    /* 185 (LREF-PUSH 4 1) */,
    0x00003060    /* 186 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 188 (RET) */,
    0x0000005b    /* 189 (LREF21-RET) */,
    0x0000200e    /* 190 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 196),
    0x00404047    /* 192 (LREF-PUSH 4 1) */,
    0x00804047    /* 193 (LREF-PUSH 4 2) */,
    0x00000041    /* 194 (LREF10) */,
    0x0000201c    /* 195 (LOCAL-ENV-CALL 2) */,
    0x0000001e    /* 196 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 200),
    0x00001002    /* 198 (CONSTI 1) */,
    0x00000014    /* 199 (RET) */,
    0x0000100e    /* 200 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 205),
    0x00000050    /* 202 (LREF21-PUSH) */,
    0x0000105f    /* 203 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 205 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]) + 214),
    0x00000006    /* 207 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2161[205])) /* "hash-tables can't be ordered:" */,
    0x00804047    /* 209 (LREF-PUSH 4 2) */,
    0x00404047    /* 210 (LREF-PUSH 4 1) */,
    0x00003060    /* 211 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 213 (RET) */,
    0x0000005b    /* 214 (LREF21-RET) */,
    /* %toplevel */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2169[865])) /* (#<compiled-code (hash-table-compare-as-sets #:G2198)@0x77010d164900> #<compiled-code (hash-table-compare-as-sets #:G2197)@0x77010d1648a0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2670]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-compare-as-sets */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2670]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[113])) /* #<compiled-code hash-table-compare-as-sets@0x77010d164840> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-compare-as-sets */,
    0x00000014    /*  16 (RET) */,
    /* (hash-table=? #f) */
    0x0000004e    /*   0 (LREF12-PUSH) */,
    0x00000049    /*   1 (LREF1-PUSH) */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00003060    /*   3 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* =? */,
    0x00000014    /*   5 (RET) */,
    /* hash-table=? */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x0000003d    /*   1 (LREF0) */,
    0x00000020    /*   2 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]) + 5),
    0x00000014    /*   4 (RET) */,
    0x0000100e    /*   5 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]) + 10),
    0x00000049    /*   7 (LREF1-PUSH) */,
    0x0000105f    /*   8 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-num-entries */,
    0x0000100f    /*  10 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]) + 15),
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x0000105f    /*  13 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-num-entries */,
    0x00000023    /*  15 (BNUMNE) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]) + 46),
    0x0000200e    /*  17 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]) + 31),
    0x0000100e    /*  19 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]) + 24),
    0x00000049    /*  21 (LREF1-PUSH) */,
    0x0000105f    /*  22 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-comparator */,
    0x0000100f    /*  24 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]) + 29),
    0x00000048    /*  26 (LREF0-PUSH) */,
    0x0000105f    /*  27 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-comparator */,
    0x00002062    /*  29 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x00000030    /*  31 (RF) */,
    0x0000400e    /*  32 (PRE-CALL 4) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]) + 42),
    0x00000049    /*  34 (LREF1-PUSH) */,
    0x00000048    /*  35 (LREF0-PUSH) */,
    0x00000016    /*  36 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[115])) /* #<compiled-code (hash-table=? #f)@0x77010cd61e40> */,
    0x0000000d    /*  38 (PUSH) */,
    0x00064007    /*  39 (CONSTI-PUSH 100) */,
    0x0000405f    /*  40 (GREF-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-compare-as-sets */,
    0x0000000d    /*  42 (PUSH) */,
    0x00000002    /*  43 (CONSTI 0) */,
    0x000000ad    /*  44 (NUMEQ2) */,
    0x00000014    /*  45 (RET) */,
    0x00000014    /*  46 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2740]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table=? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2162[2740]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2163[116])) /* #<compiled-code hash-table=?@0x77010cd61ea0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table=? */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmObj d2160 */
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(208, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
  },
};

static ScmObj libhashhash_salt(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("hash-salt");
  {
{
ScmSmallInt SCM_RESULT;
{SCM_RESULT=(Scm_HashSaltRef());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_INT(SCM_RESULT));
}
  }
}


static ScmObj libhasheq_hash(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("eq-hash");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
u_long SCM_RESULT;
{SCM_RESULT=(Scm_EqHash(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libhasheqv_hash(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("eqv-hash");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
u_long SCM_RESULT;
{SCM_RESULT=(Scm_EqvHash(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libhashlegacy_hash(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("legacy-hash");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
u_long SCM_RESULT;
{SCM_RESULT=(Scm_Hash(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libhashportable_hash(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj salt_scm;
  ScmSmallInt salt;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("portable-hash");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  salt_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(salt_scm)) Scm_Error("ScmSmallInt required, but got %S", salt_scm);
  salt = SCM_INT_VALUE(salt_scm);
  {
{
u_long SCM_RESULT;
{SCM_RESULT=(Scm_PortableHash(obj,salt));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libhashdefault_hash(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("default-hash");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmSmallInt SCM_RESULT;
{SCM_RESULT=(Scm_DefaultHash(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_INT(SCM_RESULT));
}
  }
}


static ScmObj libhashcombine_hash_value(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj a_scm;
  u_long a;
  ScmObj b_scm;
  u_long b;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("combine-hash-value");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  a_scm = SCM_SUBRARGS[0];
  if (!SCM_UINTEGERP(a_scm)) Scm_Error("u_long required, but got %S", a_scm);
  a = Scm_GetIntegerU(a_scm);
  b_scm = SCM_SUBRARGS[1];
  if (!SCM_UINTEGERP(b_scm)) Scm_Error("u_long required, but got %S", b_scm);
  b = Scm_GetIntegerU(b_scm);
  {
{
u_long SCM_RESULT;
{SCM_RESULT=(Scm_CombineHashValue(a,b));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_tableP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("hash-table?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_HASH_TABLE_P(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libhash_25make_hash_table_simple(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj type_scm;
  ScmObj type;
  ScmObj init_size_scm;
  int init_size;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%make-hash-table-simple");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  type_scm = SCM_SUBRARGS[0];
  if (!(type_scm)) Scm_Error("scheme object required, but got %S", type_scm);
  type = (type_scm);
  init_size_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(init_size_scm)) Scm_Error("int required, but got %S", init_size_scm);
  init_size = Scm_GetInteger(init_size_scm);
  {
{
ScmObj SCM_RESULT;

#line 153 "libhash.scm"
{int ctype=0;
if (SCM_EQ(type,scm__rc.d2160[91])){ctype=(SCM_HASH_EQ);}else if(SCM_EQ(type,scm__rc.d2160[90])){ctype=(SCM_HASH_EQV);}else if(SCM_EQ(type,scm__rc.d2160[89])){ctype=(SCM_HASH_EQUAL);}else if(SCM_EQ(type,scm__rc.d2160[88])){ctype=(SCM_HASH_STRING);} else {Scm_Error("unsupported hash type: %S",type);}
{SCM_RESULT=(Scm_MakeHashTableSimple(ctype,init_size));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static u_long generic_hashtable_hash(const ScmHashCore* h,intptr_t key){{
#line 160 "libhash.scm"
{ScmComparator* c=((ScmComparator* )((h)->data));ScmObj v=
Scm_ApplyRec1(Scm_ComparatorHashFunction(c),
SCM_OBJ(key));
if (!((SCM_INTP(v))||(SCM_BIGNUMP(v)))){{
Scm_Error("Comparator %S's hash function should return an exact integer, but got: %S",c,v);}}
#line 166 "libhash.scm"
return (Scm_GetIntegerUMod(v));}}}
static u_long generic_hashtable_hash_typecheck(const ScmHashCore* h,intptr_t key){{
#line 171 "libhash.scm"
{ScmComparator* c=((ScmComparator* )((h)->data));ScmObj t=
Scm_ApplyRec1((c)->typeFn,SCM_OBJ(key));
if (SCM_FALSEP(t)){{
Scm_Error("Invalid key for hashtable: %S",SCM_OBJ(key));}}
return (generic_hashtable_hash(h,key));}}}
static int generic_hashtable_eq(const ScmHashCore* h,intptr_t a,intptr_t b){{
#line 180 "libhash.scm"
{ScmComparator* c=((ScmComparator* )((h)->data));ScmObj e=
Scm_ApplyRec2((c)->eqFn,SCM_OBJ(a),SCM_OBJ(b));
return (!(SCM_FALSEP(e)));}}}
static int generic_hashtable_eq_typecheck(const ScmHashCore* h,intptr_t a,intptr_t b){{
#line 187 "libhash.scm"
{ScmComparator* c=((ScmComparator* )((h)->data));ScmObj t=
Scm_ApplyRec1((c)->typeFn,SCM_OBJ(a));
#line 194 "libhash.scm"
if (SCM_FALSEP(t)){{
Scm_Error("Invalid key for hashtable: %S",SCM_OBJ(a));}}
return (generic_hashtable_eq(h,a,b));}}}

static ScmObj libhash_25make_hash_table_from_comparator(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj comparator_scm;
  ScmComparator* comparator;
  ScmObj init_size_scm;
  int init_size;
  ScmObj has_type_check_scm;
  int has_type_check;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("%make-hash-table-from-comparator");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  comparator_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPARATORP(comparator_scm)) Scm_Error("<comparator> required, but got %S", comparator_scm);
  comparator = SCM_COMPARATOR(comparator_scm);
  init_size_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(init_size_scm)) Scm_Error("int required, but got %S", init_size_scm);
  init_size = Scm_GetInteger(init_size_scm);
  has_type_check_scm = SCM_SUBRARGS[2];
  if (!SCM_BOOLP(has_type_check_scm)) Scm_Error("boolean required, but got %S", has_type_check_scm);
  has_type_check = SCM_BOOL_VALUE(has_type_check_scm);
  {
{
ScmObj SCM_RESULT;

#line 202 "libhash.scm"
if (has_type_check){
{SCM_RESULT=(Scm_MakeHashTableFull(generic_hashtable_hash_typecheck,generic_hashtable_eq_typecheck,init_size,comparator));goto SCM_STUB_RETURN;}} else {
#line 207 "libhash.scm"
{SCM_RESULT=(Scm_MakeHashTableFull(generic_hashtable_hash,generic_hashtable_eq,init_size,comparator));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_type(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("hash-table-type");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  {
{
ScmObj SCM_RESULT;

#line 250 "libhash.scm"
switch ((hash)->type) {case SCM_HASH_EQ : {{SCM_RESULT=(scm__rc.d2160[91]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}case SCM_HASH_EQV : {{SCM_RESULT=(scm__rc.d2160[90]);goto SCM_STUB_RETURN;}break;}case SCM_HASH_EQUAL : {{SCM_RESULT=(scm__rc.d2160[89]);goto SCM_STUB_RETURN;}break;}case SCM_HASH_STRING : {{SCM_RESULT=(scm__rc.d2160[88]);goto SCM_STUB_RETURN;}break;}case SCM_HASH_GENERAL : {{SCM_RESULT=(scm__rc.d2160[160]);goto SCM_STUB_RETURN;}break;}default: {{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}break;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhash_25hash_table_comparator_int(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%hash-table-comparator-int");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  {
{
ScmObj SCM_RESULT;

#line 254 "libhash.scm"
if ((Scm_HashTableType(hash))==(SCM_HASH_GENERAL)){
{ScmObj r=SCM_OBJ((SCM_HASH_TABLE_CORE(hash))->data);
if (!(SCM_COMPARATORP(r))){{
Scm_Error("Got some weird hashtable - possibly internal bug: %S",hash);}}
#line 259 "libhash.scm"
{SCM_RESULT=(r);goto SCM_STUB_RETURN;}}} else {
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_num_entries(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("hash-table-num-entries");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  {
{
int SCM_RESULT;

#line 272 "libhash.scm"
{SCM_RESULT=(Scm_HashCoreNumEntries(SCM_HASH_TABLE_CORE(hash)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_clearX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("hash-table-clear!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  {

#line 275 "libhash.scm"
Scm_HashCoreClear(SCM_HASH_TABLE_CORE(hash));
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashhash_table_get(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj key_scm;
  ScmObj key;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("hash-table-get");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
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

#line 278 "libhash.scm"
{ScmObj v=Scm_HashTableRef(hash,key,fallback);if (SCM_UNBOUNDP(v)){{Scm_Error("%S doesn't have an entry for key %S",hash,key);}}{SCM_RESULT=(v);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_putX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj key_scm;
  ScmObj key;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("hash-table-put!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  value_scm = SCM_SUBRARGS[2];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {

#line 281 "libhash.scm"
Scm_HashTableSet(hash,key,value,0);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashhash_table_adjoinX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj key_scm;
  ScmObj key;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("hash-table-adjoin!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  value_scm = SCM_SUBRARGS[2];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {

#line 284 "libhash.scm"
Scm_HashTableSet(hash,key,value,SCM_DICT_NO_OVERWRITE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashhash_table_replaceX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj key_scm;
  ScmObj key;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("hash-table-replace!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  value_scm = SCM_SUBRARGS[2];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {

#line 287 "libhash.scm"
Scm_HashTableSet(hash,key,value,SCM_DICT_NO_CREATE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashhash_table_deleteX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj key_scm;
  ScmObj key;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("hash-table-delete!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  {
{
int SCM_RESULT;

#line 292 "libhash.scm"
{SCM_RESULT=(!(SCM_UNBOUNDP(Scm_HashTableDelete(hash,key))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_existsP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj key_scm;
  ScmObj key;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("hash-table-exists?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  {
{
int SCM_RESULT;

#line 295 "libhash.scm"
{SCM_RESULT=(!(SCM_UNBOUNDP(Scm_HashTableRef(hash,key,SCM_UNBOUND))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

static ScmObj hash_table_update_cc(ScmObj result,void** data){{
#line 299 "libhash.scm"
{ScmDictEntry* e=((ScmDictEntry* )((data)[0]));
((void )(SCM_DICT_SET_VALUE(e,result)));
return (result);}}}

static ScmObj libhashhash_table_updateX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj key_scm;
  ScmObj key;
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("hash-table-update!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  proc_scm = SCM_SUBRARGS[2];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  if (SCM_ARGCNT > 3+1) {
    fallback_scm = SCM_SUBRARGS[3];
  } else {
    fallback_scm = SCM_UNBOUND;
  }
  if (!(fallback_scm)) Scm_Error("scheme object required, but got %S", fallback_scm);
  fallback = (fallback_scm);
  {
{
ScmObj SCM_RESULT;

#line 306 "libhash.scm"
{ScmDictEntry* e;void* data[1];if (SCM_UNBOUNDP(fallback)){e=(Scm_HashCoreSearch(SCM_HASH_TABLE_CORE(hash),((intptr_t )(key)),SCM_DICT_GET));if ((e)==(NULL)){{Scm_Error("%S doesn't have an entry for key %S",hash,key);}}} else {e=(Scm_HashCoreSearch(SCM_HASH_TABLE_CORE(hash),((intptr_t )(key)),SCM_DICT_CREATE));if (!((e)->value)){{((void )(SCM_DICT_SET_VALUE(e,fallback)));}}}(data)[0]=(((void* )(e)));Scm_VMPushCC(hash_table_update_cc,data,1);{SCM_RESULT=(Scm_VMApply1(proc,SCM_DICT_VALUE(e)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_pushX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj key_scm;
  ScmObj key;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("hash-table-push!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  value_scm = SCM_SUBRARGS[2];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {

#line 310 "libhash.scm"
{ScmDictEntry* e=Scm_HashCoreSearch(SCM_HASH_TABLE_CORE(hash),((intptr_t )(key)),SCM_DICT_CREATE);ScmObj prev=(((e)->value)?(SCM_DICT_VALUE(e)):(SCM_NIL));((void )(SCM_DICT_SET_VALUE(e,Scm_Cons(value,prev))));}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashhash_table_popX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj key_scm;
  ScmObj key;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("hash-table-pop!");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
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

#line 313 "libhash.scm"
{ScmDictEntry* e=Scm_HashCoreSearch(SCM_HASH_TABLE_CORE(hash),((intptr_t )(key)),SCM_DICT_GET);if (!(e)){if (SCM_UNBOUNDP(fallback)){{Scm_Error("%S doesn't have an entry for key %S",hash,key);}}{SCM_RESULT=(fallback);goto SCM_STUB_RETURN;}}else if(!(SCM_PAIRP(SCM_DICT_VALUE(e)))){if (SCM_UNBOUNDP(fallback)){{Scm_Error("%S's value for key %S is not a pair: %S",hash,key,SCM_DICT_VALUE(e));}}{SCM_RESULT=(fallback);goto SCM_STUB_RETURN;}} else {{ScmObj resultval_=SCM_CAR(SCM_DICT_VALUE(e));((void )(SCM_DICT_SET_VALUE(e,SCM_CDR(SCM_DICT_VALUE(e)))));{SCM_RESULT=(resultval_);goto SCM_STUB_RETURN;}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj hash_table_iter(ScmObj* args,int G2175 SCM_UNUSED,void* data){{
#line 317 "libhash.scm"
{ScmHashIter* iter=((ScmHashIter* )(data));ScmDictEntry* e=
Scm_HashIterNext(iter);ScmObj eofval=
(args)[0];
if ((e)==(NULL)){
return (Scm_Values2(eofval,eofval));} else {
return (Scm_Values2(SCM_DICT_KEY(e),SCM_DICT_VALUE(e)));}}}}

static ScmObj libhash_25hash_table_iter(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj hash_scm;
  ScmHashTable* hash;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%hash-table-iter");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  hash_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(hash_scm)) Scm_Error("<hash-table> required, but got %S", hash_scm);
  hash = SCM_HASH_TABLE(hash_scm);
  {
{
ScmObj SCM_RESULT;

#line 327 "libhash.scm"
{ScmHashIter* iter=SCM_NEW(ScmHashIter);
Scm_HashIterInit(iter,SCM_HASH_TABLE_CORE(hash));
{SCM_RESULT=(Scm_MakeSubr(hash_table_iter,iter,1,0,SCM_OBJ(&scm__sc.d2161[88])));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_copy(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ht_scm;
  ScmHashTable* ht;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("hash-table-copy");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ht_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(ht_scm)) Scm_Error("<hash-table> required, but got %S", ht_scm);
  ht = SCM_HASH_TABLE(ht_scm);
  {
{
ScmObj SCM_RESULT;

#line 335 "libhash.scm"
{SCM_RESULT=(Scm_HashTableCopy(ht));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_keys(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ht_scm;
  ScmHashTable* ht;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("hash-table-keys");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ht_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(ht_scm)) Scm_Error("<hash-table> required, but got %S", ht_scm);
  ht = SCM_HASH_TABLE(ht_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_HashTableKeys(ht));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_values(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ht_scm;
  ScmHashTable* ht;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("hash-table-values");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ht_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(ht_scm)) Scm_Error("<hash-table> required, but got %S", ht_scm);
  ht = SCM_HASH_TABLE(ht_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_HashTableValues(ht));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashhash_table_stat(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ht_scm;
  ScmHashTable* ht;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("hash-table-stat");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ht_scm = SCM_SUBRARGS[0];
  if (!SCM_HASH_TABLE_P(ht_scm)) Scm_Error("<hash-table> required, but got %S", ht_scm);
  ht = SCM_HASH_TABLE(ht_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_HashTableStat(ht));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static int tree_map_cmp(ScmTreeCore* core,intptr_t x,intptr_t y){{
#line 637 "libhash.scm"
{ScmObj cmpr=SCM_OBJ((core)->data);
SCM_ASSERT((cmpr)&&(SCM_COMPARATORP(cmpr)));;ScmObj r=
Scm_ApplyRec2(Scm_ComparatorComparisonProcedure(
SCM_COMPARATOR(cmpr)),
SCM_OBJ(x),SCM_OBJ(y));
if (!(SCM_INTP(r))){{
Scm_Error("compare procedure of tree-map's comparator %S returned non-integral value: %S",cmpr,r);}}
#line 645 "libhash.scm"
return (SCM_INT_VALUE(r));}}}

static ScmObj libhash_25make_tree_map(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj comparator_scm;
  ScmObj comparator;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%make-tree-map");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  comparator_scm = SCM_SUBRARGS[0];
  if (!(comparator_scm)) Scm_Error("scheme object required, but got %S", comparator_scm);
  comparator = (comparator_scm);
  {
{
ScmObj SCM_RESULT;

#line 649 "libhash.scm"
{
SCM_ASSERT(SCM_COMPARATORP(comparator));
{SCM_RESULT=(Scm_MakeTreeMap(tree_map_cmp,comparator));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_comparator(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("tree-map-comparator");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  {
{
ScmObj SCM_RESULT;

#line 656 "libhash.scm"
{void* d=(SCM_TREE_MAP_CORE(tm))->data;
if (((d)==(NULL))||(
((SCM_TREE_MAP_CORE(tm))->cmp)!=(tree_map_cmp))){
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{
SCM_ASSERT(SCM_COMPARATORP(d));
{SCM_RESULT=(SCM_OBJ(d));goto SCM_STUB_RETURN;}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_copy(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("tree-map-copy");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_TreeMapCopy(tm));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_mapP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("tree-map?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_TREE_MAP_P(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_get(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-get");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
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

#line 669 "libhash.scm"
{ScmObj v=Scm_TreeMapRef(tm,key,fallback);if (SCM_UNBOUNDP(v)){{Scm_Error("%S doesn't have an entry for key %S",tm,key);}}{SCM_RESULT=(v);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_putX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj val_scm;
  ScmObj val;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-put!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  {

#line 672 "libhash.scm"
Scm_TreeMapSet(tm,key,val,0);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashtree_map_adjoinX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj val_scm;
  ScmObj val;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-adjoin!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  {

#line 675 "libhash.scm"
Scm_TreeMapSet(tm,key,val,SCM_DICT_NO_OVERWRITE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashtree_map_replaceX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj val_scm;
  ScmObj val;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-replace!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  {

#line 678 "libhash.scm"
Scm_TreeMapSet(tm,key,val,SCM_DICT_NO_CREATE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashtree_map_deleteX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("tree-map-delete!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  {
{
int SCM_RESULT;

#line 681 "libhash.scm"
{SCM_RESULT=(!(SCM_UNBOUNDP(Scm_TreeMapDelete(tm,key))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

static ScmObj tree_map_update_cc(ScmObj result,void** data){{
#line 685 "libhash.scm"
{ScmDictEntry* e=((ScmDictEntry* )((data)[0]));
((void )(SCM_DICT_SET_VALUE(e,result)));
return (result);}}}

static ScmObj libhashtree_map_updateX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("tree-map-update!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  proc_scm = SCM_SUBRARGS[2];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  if (SCM_ARGCNT > 3+1) {
    fallback_scm = SCM_SUBRARGS[3];
  } else {
    fallback_scm = SCM_UNBOUND;
  }
  if (!(fallback_scm)) Scm_Error("scheme object required, but got %S", fallback_scm);
  fallback = (fallback_scm);
  {
{
ScmObj SCM_RESULT;

#line 691 "libhash.scm"
{ScmDictEntry* e;void* data[1];if (SCM_UNBOUNDP(fallback)){e=(Scm_TreeCoreSearch(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),SCM_DICT_GET));if ((e)==(NULL)){{Scm_Error("%S doesn't have an entry for key %S",tm,key);}}} else {e=(Scm_TreeCoreSearch(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),SCM_DICT_CREATE));if (!((e)->value)){{((void )(SCM_DICT_SET_VALUE(e,fallback)));}}}(data)[0]=(((void* )(e)));Scm_VMPushCC(tree_map_update_cc,data,1);{SCM_RESULT=(Scm_VMApply1(proc,SCM_DICT_VALUE(e)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_pushX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-push!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  value_scm = SCM_SUBRARGS[2];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {

#line 694 "libhash.scm"
{ScmDictEntry* e=Scm_TreeCoreSearch(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),SCM_DICT_CREATE);ScmObj prev=(((e)->value)?(SCM_DICT_VALUE(e)):(SCM_NIL));((void )(SCM_DICT_SET_VALUE(e,Scm_Cons(value,prev))));}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashtree_map_popX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-pop!");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
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

#line 697 "libhash.scm"
{ScmDictEntry* e=Scm_TreeCoreSearch(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),SCM_DICT_GET);if (!(e)){if (SCM_UNBOUNDP(fallback)){{Scm_Error("%S doesn't have an entry for key %S",tm,key);}}{SCM_RESULT=(fallback);goto SCM_STUB_RETURN;}}else if(!(SCM_PAIRP(SCM_DICT_VALUE(e)))){if (SCM_UNBOUNDP(fallback)){{Scm_Error("%S's value for key %S is not a pair: %S",tm,key,SCM_DICT_VALUE(e));}}{SCM_RESULT=(fallback);goto SCM_STUB_RETURN;}} else {{ScmObj resultval_=SCM_CAR(SCM_DICT_VALUE(e));((void )(SCM_DICT_SET_VALUE(e,SCM_CDR(SCM_DICT_VALUE(e)))));{SCM_RESULT=(resultval_);goto SCM_STUB_RETURN;}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_existsP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("tree-map-exists?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  {
{
int SCM_RESULT;

#line 700 "libhash.scm"
{SCM_RESULT=(!(SCM_UNBOUNDP(Scm_TreeMapRef(tm,key,SCM_UNBOUND))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_num_entries(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("tree-map-num-entries");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  {
{
int SCM_RESULT;

#line 703 "libhash.scm"
{SCM_RESULT=(Scm_TreeCoreNumEntries(SCM_TREE_MAP_CORE(tm)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libhash_25tree_map_bound(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj min_scm;
  int min;
  ScmObj pop_scm;
  int pop;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("%tree-map-bound");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  min_scm = SCM_SUBRARGS[1];
  if (!SCM_BOOLP(min_scm)) Scm_Error("boolean required, but got %S", min_scm);
  min = SCM_BOOL_VALUE(min_scm);
  pop_scm = SCM_SUBRARGS[2];
  if (!SCM_BOOLP(pop_scm)) Scm_Error("boolean required, but got %S", pop_scm);
  pop = SCM_BOOL_VALUE(pop_scm);
  {
{
ScmObj SCM_RESULT;

#line 707 "libhash.scm"
{ScmTreeCoreBoundOp op=((min)?(SCM_TREE_CORE_MIN):(SCM_TREE_CORE_MAX));ScmDictEntry* e=
#line 709 "libhash.scm"
((pop)?(
Scm_TreeCorePopBound(SCM_TREE_MAP_CORE(tm),op)):(
Scm_TreeCoreGetBound(SCM_TREE_MAP_CORE(tm),op)));
if (e){
{SCM_RESULT=(Scm_Cons(SCM_DICT_KEY(e),SCM_DICT_VALUE(e)));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj tree_map_iter(ScmObj* args,int G2202 SCM_UNUSED,void* data){{
#line 718 "libhash.scm"
{ScmTreeIter* iter=((ScmTreeIter* )(data));ScmDictEntry* e=
((SCM_FALSEP((args)[1]))?(
Scm_TreeIterNext(iter)):(
Scm_TreeIterPrev(iter)));
if (!(e)){
return (Scm_Values2((args)[0],(args)[0]));} else {
return (Scm_Values2(SCM_DICT_KEY(e),SCM_DICT_VALUE(e)));}}}}

static ScmObj libhash_25tree_map_iter(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%tree-map-iter");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  {
{
ScmObj SCM_RESULT;

#line 729 "libhash.scm"
{ScmTreeIter* iter=SCM_NEW(ScmTreeIter);
Scm_TreeIterInit(iter,SCM_TREE_MAP_CORE(tm),NULL);
{SCM_RESULT=(Scm_MakeSubr(tree_map_iter,iter,2,0,SCM_OBJ(&scm__sc.d2161[245])));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhash_25tree_map_check_consistency(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%tree-map-check-consistency");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  {
{
ScmObj SCM_RESULT;

#line 735 "libhash.scm"
Scm_TreeCoreCheckConsistency(SCM_TREE_MAP_CORE(tm));

#line 736 "libhash.scm"
{SCM_RESULT=(SCM_TRUE);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhash_25tree_map_dump(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%tree-map-dump");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  {

#line 740 "libhash.scm"
Scm_TreeMapDump(tm,SCM_CUROUT);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashtree_map_clearX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("tree-map-clear!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  {

#line 744 "libhash.scm"
Scm_TreeCoreClear(SCM_TREE_MAP_CORE(tm));
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libhashtree_map_floor(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj key_fb_scm;
  ScmObj key_fb;
  ScmObj val_fb_scm;
  ScmObj val_fb;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("tree-map-floor");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    key_fb_scm = SCM_SUBRARGS[2];
  } else {
    key_fb_scm = SCM_FALSE;
  }
  if (!(key_fb_scm)) Scm_Error("scheme object required, but got %S", key_fb_scm);
  key_fb = (key_fb_scm);
  if (SCM_ARGCNT > 3+1) {
    val_fb_scm = SCM_SUBRARGS[3];
  } else {
    val_fb_scm = SCM_FALSE;
  }
  if (!(val_fb_scm)) Scm_Error("scheme object required, but got %S", val_fb_scm);
  val_fb = (val_fb_scm);
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 779 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;ScmDictEntry* eq=Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((eq)!=(NULL)){{SCM_RESULT0=(SCM_DICT_KEY(eq)),SCM_RESULT1=(SCM_DICT_VALUE(eq));goto SCM_STUB_RETURN;}}else if((lo)!=(NULL)){{SCM_RESULT0=(SCM_DICT_KEY(lo)),SCM_RESULT1=(SCM_DICT_VALUE(lo));goto SCM_STUB_RETURN;}} else {{SCM_RESULT0=(key_fb),SCM_RESULT1=(val_fb);goto SCM_STUB_RETURN;}}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libhashtree_map_floor_key(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj key_fb_scm;
  ScmObj key_fb;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-floor-key");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    key_fb_scm = SCM_SUBRARGS[2];
  } else {
    key_fb_scm = SCM_FALSE;
  }
  if (!(key_fb_scm)) Scm_Error("scheme object required, but got %S", key_fb_scm);
  key_fb = (key_fb_scm);
  {
{
ScmObj SCM_RESULT;

#line 781 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;ScmDictEntry* eq=Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((eq)!=(NULL)){{SCM_RESULT=(SCM_DICT_KEY(eq));goto SCM_STUB_RETURN;}}else if((lo)!=(NULL)){{SCM_RESULT=(SCM_DICT_KEY(lo));goto SCM_STUB_RETURN;}} else {{SCM_RESULT=(key_fb);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_floor_value(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj val_fb_scm;
  ScmObj val_fb;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-floor-value");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    val_fb_scm = SCM_SUBRARGS[2];
  } else {
    val_fb_scm = SCM_FALSE;
  }
  if (!(val_fb_scm)) Scm_Error("scheme object required, but got %S", val_fb_scm);
  val_fb = (val_fb_scm);
  {
{
ScmObj SCM_RESULT;

#line 783 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;ScmDictEntry* eq=Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((eq)!=(NULL)){{SCM_RESULT=(SCM_DICT_VALUE(eq));goto SCM_STUB_RETURN;}}else if((lo)!=(NULL)){{SCM_RESULT=(SCM_DICT_VALUE(lo));goto SCM_STUB_RETURN;}} else {{SCM_RESULT=(val_fb);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_ceiling(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj key_fb_scm;
  ScmObj key_fb;
  ScmObj val_fb_scm;
  ScmObj val_fb;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("tree-map-ceiling");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    key_fb_scm = SCM_SUBRARGS[2];
  } else {
    key_fb_scm = SCM_FALSE;
  }
  if (!(key_fb_scm)) Scm_Error("scheme object required, but got %S", key_fb_scm);
  key_fb = (key_fb_scm);
  if (SCM_ARGCNT > 3+1) {
    val_fb_scm = SCM_SUBRARGS[3];
  } else {
    val_fb_scm = SCM_FALSE;
  }
  if (!(val_fb_scm)) Scm_Error("scheme object required, but got %S", val_fb_scm);
  val_fb = (val_fb_scm);
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 787 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;ScmDictEntry* eq=Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((eq)!=(NULL)){{SCM_RESULT0=(SCM_DICT_KEY(eq)),SCM_RESULT1=(SCM_DICT_VALUE(eq));goto SCM_STUB_RETURN;}}else if((hi)!=(NULL)){{SCM_RESULT0=(SCM_DICT_KEY(hi)),SCM_RESULT1=(SCM_DICT_VALUE(hi));goto SCM_STUB_RETURN;}} else {{SCM_RESULT0=(key_fb),SCM_RESULT1=(val_fb);goto SCM_STUB_RETURN;}}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libhashtree_map_ceiling_key(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj key_fb_scm;
  ScmObj key_fb;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-ceiling-key");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    key_fb_scm = SCM_SUBRARGS[2];
  } else {
    key_fb_scm = SCM_FALSE;
  }
  if (!(key_fb_scm)) Scm_Error("scheme object required, but got %S", key_fb_scm);
  key_fb = (key_fb_scm);
  {
{
ScmObj SCM_RESULT;

#line 789 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;ScmDictEntry* eq=Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((eq)!=(NULL)){{SCM_RESULT=(SCM_DICT_KEY(eq));goto SCM_STUB_RETURN;}}else if((hi)!=(NULL)){{SCM_RESULT=(SCM_DICT_KEY(hi));goto SCM_STUB_RETURN;}} else {{SCM_RESULT=(key_fb);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_ceiling_value(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj val_fb_scm;
  ScmObj val_fb;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-ceiling-value");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    val_fb_scm = SCM_SUBRARGS[2];
  } else {
    val_fb_scm = SCM_FALSE;
  }
  if (!(val_fb_scm)) Scm_Error("scheme object required, but got %S", val_fb_scm);
  val_fb = (val_fb_scm);
  {
{
ScmObj SCM_RESULT;

#line 791 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;ScmDictEntry* eq=Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((eq)!=(NULL)){{SCM_RESULT=(SCM_DICT_VALUE(eq));goto SCM_STUB_RETURN;}}else if((hi)!=(NULL)){{SCM_RESULT=(SCM_DICT_VALUE(hi));goto SCM_STUB_RETURN;}} else {{SCM_RESULT=(val_fb);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_predecessor(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj key_fb_scm;
  ScmObj key_fb;
  ScmObj val_fb_scm;
  ScmObj val_fb;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("tree-map-predecessor");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    key_fb_scm = SCM_SUBRARGS[2];
  } else {
    key_fb_scm = SCM_FALSE;
  }
  if (!(key_fb_scm)) Scm_Error("scheme object required, but got %S", key_fb_scm);
  key_fb = (key_fb_scm);
  if (SCM_ARGCNT > 3+1) {
    val_fb_scm = SCM_SUBRARGS[3];
  } else {
    val_fb_scm = SCM_FALSE;
  }
  if (!(val_fb_scm)) Scm_Error("scheme object required, but got %S", val_fb_scm);
  val_fb = (val_fb_scm);
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 795 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((lo)!=(NULL)){{SCM_RESULT0=(SCM_DICT_KEY(lo)),SCM_RESULT1=(SCM_DICT_VALUE(lo));goto SCM_STUB_RETURN;}} else {{SCM_RESULT0=(key_fb),SCM_RESULT1=(val_fb);goto SCM_STUB_RETURN;}}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libhashtree_map_predecessor_key(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj key_fb_scm;
  ScmObj key_fb;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-predecessor-key");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    key_fb_scm = SCM_SUBRARGS[2];
  } else {
    key_fb_scm = SCM_FALSE;
  }
  if (!(key_fb_scm)) Scm_Error("scheme object required, but got %S", key_fb_scm);
  key_fb = (key_fb_scm);
  {
{
ScmObj SCM_RESULT;

#line 798 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((lo)!=(NULL)){{SCM_RESULT=(SCM_DICT_KEY(lo));goto SCM_STUB_RETURN;}} else {{SCM_RESULT=(key_fb);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_predecessor_value(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj val_fb_scm;
  ScmObj val_fb;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-predecessor-value");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    val_fb_scm = SCM_SUBRARGS[2];
  } else {
    val_fb_scm = SCM_FALSE;
  }
  if (!(val_fb_scm)) Scm_Error("scheme object required, but got %S", val_fb_scm);
  val_fb = (val_fb_scm);
  {
{
ScmObj SCM_RESULT;

#line 801 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((lo)!=(NULL)){{SCM_RESULT=(SCM_DICT_VALUE(lo));goto SCM_STUB_RETURN;}} else {{SCM_RESULT=(val_fb);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_successor(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj key_fb_scm;
  ScmObj key_fb;
  ScmObj val_fb_scm;
  ScmObj val_fb;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("tree-map-successor");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    key_fb_scm = SCM_SUBRARGS[2];
  } else {
    key_fb_scm = SCM_FALSE;
  }
  if (!(key_fb_scm)) Scm_Error("scheme object required, but got %S", key_fb_scm);
  key_fb = (key_fb_scm);
  if (SCM_ARGCNT > 3+1) {
    val_fb_scm = SCM_SUBRARGS[3];
  } else {
    val_fb_scm = SCM_FALSE;
  }
  if (!(val_fb_scm)) Scm_Error("scheme object required, but got %S", val_fb_scm);
  val_fb = (val_fb_scm);
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 805 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((hi)!=(NULL)){{SCM_RESULT0=(SCM_DICT_KEY(hi)),SCM_RESULT1=(SCM_DICT_VALUE(hi));goto SCM_STUB_RETURN;}} else {{SCM_RESULT0=(key_fb),SCM_RESULT1=(val_fb);goto SCM_STUB_RETURN;}}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libhashtree_map_successor_key(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj key_fb_scm;
  ScmObj key_fb;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-successor-key");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    key_fb_scm = SCM_SUBRARGS[2];
  } else {
    key_fb_scm = SCM_FALSE;
  }
  if (!(key_fb_scm)) Scm_Error("scheme object required, but got %S", key_fb_scm);
  key_fb = (key_fb_scm);
  {
{
ScmObj SCM_RESULT;

#line 808 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((hi)!=(NULL)){{SCM_RESULT=(SCM_DICT_KEY(hi));goto SCM_STUB_RETURN;}} else {{SCM_RESULT=(key_fb);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libhashtree_map_successor_value(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  ScmTreeMap* tm;
  ScmObj key_scm;
  ScmObj key;
  ScmObj val_fb_scm;
  ScmObj val_fb;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("tree-map-successor-value");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_TREE_MAP_P(tm_scm)) Scm_Error("<tree-map> required, but got %S", tm_scm);
  tm = SCM_TREE_MAP(tm_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    val_fb_scm = SCM_SUBRARGS[2];
  } else {
    val_fb_scm = SCM_FALSE;
  }
  if (!(val_fb_scm)) Scm_Error("scheme object required, but got %S", val_fb_scm);
  val_fb = (val_fb_scm);
  {
{
ScmObj SCM_RESULT;

#line 811 "libhash.scm"
{ScmDictEntry* lo=NULL;ScmDictEntry* hi=NULL;Scm_TreeCoreClosestEntries(SCM_TREE_MAP_CORE(tm),((intptr_t )(key)),&(lo),&(hi));if ((hi)!=(NULL)){{SCM_RESULT=(SCM_DICT_VALUE(hi));goto SCM_STUB_RETURN;}} else {{SCM_RESULT=(val_fb);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[0])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[2])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[4])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[6])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[8])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[11])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[13])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[14])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[17])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[18])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[21])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[23])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[24])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[25])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[27])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[29])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[31])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[33])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[35])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[37])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[40])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[42])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[45])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[47])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[49])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[51])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[53])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[56])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[59])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[61])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[63])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[65])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[67])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[70])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[72])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[76])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[79])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[82])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[85])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[88])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[91])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[94])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[96])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[98])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[100])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[102])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[104])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[106])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[108])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[114])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[117])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[2];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[35];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[21];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[316];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[5];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[71];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[69];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[105];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[106];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[94];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[138];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[140];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[58]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[135];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[119];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[88];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[134];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[89];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[133];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[131];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[90];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[132];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[130];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[49]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[126];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[92];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[40]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[121];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[123];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[136];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1031];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1032];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1033];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1034];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[69]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[171];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[160];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1035];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[161];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[180];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[293];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[338];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[339];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[451];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[452];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[448];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[294];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[265];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[268];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[290];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[163];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[288];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[447];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[285];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[220];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1036];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[301];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[305];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1037];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[58];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[306];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1038];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[299];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[315];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[311];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[321];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[325];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[329];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[328];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[324];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[334];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1039];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1040];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[376];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[117]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1041];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[337];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1042];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[187];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[345];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[351];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[246];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[355];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[358];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[363];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1043];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[279];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[281];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[368];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[379];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[378];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[377];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[380];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[375];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[389];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[388];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[137]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[207];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[392];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[206];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[387];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1044];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1045];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1046];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[623];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1047];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[385];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[400];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[399];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[405];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[411];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[418];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[236];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[422];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[423];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[416];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[248];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[430];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[428];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1048];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1049];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1050];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1051];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[435];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[150]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[440];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[249];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[153]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[445];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1052];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1053];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1054];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[461];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[109];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[456];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[466];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[473];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[481];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[486];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[491];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[501];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[499];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1055];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1056];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[500];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[498];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[509];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1057];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1058];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1059];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1060];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[506];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[519];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[518];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[526];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[534];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[535];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[533];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[542];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[549];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[556];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[48];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[80];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[563];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[572];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[570];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[579];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[577];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[586];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[584];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[593];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[591];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[600];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[598];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[607];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[605];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[622];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[628];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[627];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[626];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[616];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[613];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[208];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[205]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[620];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[621];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[625];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_MAKE_INT(-1);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[635];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[632];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[633];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[634];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[214]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[630];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = SCM_OBJ(&scm__sc.d2161[213]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[629];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1061];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1062];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1063];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1064];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[612];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[645];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[650];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[646];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[647];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1065];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[1066];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2160[821]), i++) = scm__rc.d2160[643];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2160[821]);
}
void Scm_Init_libhash() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2160[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[0])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2160[0] = Scm_MakeIdentifier(scm__rc.d2160[1], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2160[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[1])),TRUE); /* *unique* */
  scm__rc.d2160[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[2])),TRUE); /* gauche.internal */
  scm__rc.d2160[4] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2160[5]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2160[3] = Scm_MakeIdentifier(scm__rc.d2160[2], SCM_MODULE(scm__rc.d2160[4]), SCM_NIL); /* gauche.internal#*unique* */
  scm__rc.d2160[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[3])),TRUE); /* %toplevel */
  scm__rc.d2160[7] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[0]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[0]))->debugInfo = scm__rc.d2160[7];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[0]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[0]))[6] = SCM_WORD(scm__rc.d2160[2]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[0]))[14] = SCM_WORD(scm__rc.d2160[3]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2160[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[4])),TRUE); /* hash-salt */
  scm__rc.d2160[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[5])),TRUE); /* bind-info */
  scm__rc.d2160[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[6])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1]), scm__rc.d2160[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[2]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[3]), scm__rc.d2160[9]);
  scm__rc.d2160[11] = Scm_MakeExtendedPair(scm__rc.d2160[8], SCM_NIL, SCM_OBJ(&scm__rc.d2169[4]));
  scm__rc.d2160[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[7])),TRUE); /* -> */
  scm__rc.d2160[13] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[8])),TRUE); /* <fixnum> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[14]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[14]))[4] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[14]))[5] = scm__rc.d2160[13];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-salt")), SCM_OBJ(&libhashhash_salt__STUB), 0);
  libhashhash_salt__STUB.common.info = scm__rc.d2160[11];
  libhashhash_salt__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[14]);
  scm__rc.d2160[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[9])),TRUE); /* eq-hash */
  scm__rc.d2160[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[10])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[5]), scm__rc.d2160[21]);
  scm__rc.d2160[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[11])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[8]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[9]), scm__rc.d2160[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[10]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[11]), scm__rc.d2160[9]);
  scm__rc.d2160[23] = Scm_MakeExtendedPair(scm__rc.d2160[20], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[13]));
  scm__rc.d2160[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[13])),TRUE); /* <top> */
  scm__rc.d2160[25] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[14])),TRUE); /* <ulong> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[26]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[26]))[4] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[26]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[26]))[6] = scm__rc.d2160[25];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("eq-hash")), SCM_OBJ(&libhasheq_hash__STUB), 0);
  libhasheq_hash__STUB.common.info = scm__rc.d2160[23];
  libhasheq_hash__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[26]);
  scm__rc.d2160[33] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[15])),TRUE); /* eqv-hash */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[16]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[17]), scm__rc.d2160[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[18]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[19]), scm__rc.d2160[9]);
  scm__rc.d2160[34] = Scm_MakeExtendedPair(scm__rc.d2160[33], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[21]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("eqv-hash")), SCM_OBJ(&libhasheqv_hash__STUB), 0);
  libhasheqv_hash__STUB.common.info = scm__rc.d2160[34];
  libhasheqv_hash__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[26]);
  scm__rc.d2160[35] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[16])),TRUE); /* legacy-hash */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[24]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[25]), scm__rc.d2160[35]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[26]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[27]), scm__rc.d2160[9]);
  scm__rc.d2160[36] = Scm_MakeExtendedPair(scm__rc.d2160[35], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[29]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("legacy-hash")), SCM_OBJ(&libhashlegacy_hash__STUB), 0);
  libhashlegacy_hash__STUB.common.info = scm__rc.d2160[36];
  libhashlegacy_hash__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[26]);
  scm__rc.d2160[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[17])),TRUE); /* portable-hash */
  scm__rc.d2160[38] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[18])),TRUE); /* salt */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[30]), scm__rc.d2160[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[31]), scm__rc.d2160[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[34]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[35]), scm__rc.d2160[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[36]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[37]), scm__rc.d2160[9]);
  scm__rc.d2160[39] = Scm_MakeExtendedPair(scm__rc.d2160[37], SCM_OBJ(&scm__rc.d2169[31]), SCM_OBJ(&scm__rc.d2169[39]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[40]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[40]))[4] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[40]))[5] = scm__rc.d2160[13];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[40]))[6] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[40]))[7] = scm__rc.d2160[25];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("portable-hash")), SCM_OBJ(&libhashportable_hash__STUB), 0);
  libhashportable_hash__STUB.common.info = scm__rc.d2160[39];
  libhashportable_hash__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[40]);
  scm__rc.d2160[48] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[19])),TRUE); /* default-hash */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[42]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[43]), scm__rc.d2160[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[44]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[45]), scm__rc.d2160[9]);
  scm__rc.d2160[49] = Scm_MakeExtendedPair(scm__rc.d2160[48], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[47]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[50]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[50]))[4] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[50]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[50]))[6] = scm__rc.d2160[13];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("default-hash")), SCM_OBJ(&libhashdefault_hash__STUB), 0);
  libhashdefault_hash__STUB.common.info = scm__rc.d2160[49];
  libhashdefault_hash__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[50]);
  scm__rc.d2160[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[20])),TRUE); /* combine-hash-value */
  scm__rc.d2160[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[21])),TRUE); /* a */
  scm__rc.d2160[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[22])),TRUE); /* b */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[48]), scm__rc.d2160[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[49]), scm__rc.d2160[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[52]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[53]), scm__rc.d2160[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[54]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[55]), scm__rc.d2160[9]);
  scm__rc.d2160[60] = Scm_MakeExtendedPair(scm__rc.d2160[57], SCM_OBJ(&scm__rc.d2169[49]), SCM_OBJ(&scm__rc.d2169[57]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[61]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[61]))[4] = scm__rc.d2160[25];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[61]))[5] = scm__rc.d2160[25];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[61]))[6] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[61]))[7] = scm__rc.d2160[25];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("combine-hash-value")), SCM_OBJ(&libhashcombine_hash_value__STUB), 0);
  libhashcombine_hash_value__STUB.common.info = scm__rc.d2160[60];
  libhashcombine_hash_value__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[61]);
  scm__rc.d2160[69] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[23])),TRUE); /* hash */
  scm__rc.d2160[71] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[24])),TRUE); /* %current-recursive-hash */
  scm__rc.d2160[70] = Scm_MakeIdentifier(scm__rc.d2160[71], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%current-recursive-hash */
  scm__rc.d2160[73] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2160[10]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2160[72] = Scm_MakeIdentifier(scm__rc.d2160[35], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#legacy-hash */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[60]), scm__rc.d2160[22]);
  scm__rc.d2160[74] = Scm_MakeExtendedPair(scm__rc.d2160[69], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[61]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[62]), scm__rc.d2160[74]);
  scm__rc.d2160[75] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[1]))->name = scm__rc.d2160[69];/* hash */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[1]))->debugInfo = scm__rc.d2160[75];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[16]))[3] = SCM_WORD(scm__rc.d2160[70]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[16]))[14] = SCM_WORD(scm__rc.d2160[72]);
  scm__rc.d2160[76] = Scm_MakeIdentifier(scm__rc.d2160[69], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash */
  scm__rc.d2160[77] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[2]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[2]))->debugInfo = scm__rc.d2160[77];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[32]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[32]))[6] = SCM_WORD(scm__rc.d2160[69]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[32]))[13] = SCM_WORD(scm__rc.d2160[76]);
  scm__rc.d2160[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[25])),TRUE); /* hash-table? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[65]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[66]), scm__rc.d2160[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[67]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[68]), scm__rc.d2160[9]);
  scm__rc.d2160[79] = Scm_MakeExtendedPair(scm__rc.d2160[78], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[70]));
  scm__rc.d2160[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[26])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[81]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[81]))[4] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[81]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[81]))[6] = scm__rc.d2160[80];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table?")), SCM_OBJ(&libhashhash_tableP__STUB), 0);
  libhashhash_tableP__STUB.common.info = scm__rc.d2160[79];
  libhashhash_tableP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[81]);
  scm__rc.d2160[88] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[28])),TRUE); /* string=? */
  scm__rc.d2160[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[29])),TRUE); /* equal? */
  scm__rc.d2160[90] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[30])),TRUE); /* eqv? */
  scm__rc.d2160[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[31])),TRUE); /* eq? */
  scm__rc.d2160[92] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[27])),TRUE); /* %make-hash-table-simple */
  scm__rc.d2160[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[32])),TRUE); /* type */
  scm__rc.d2160[94] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[33])),TRUE); /* init-size */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[71]), scm__rc.d2160[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[72]), scm__rc.d2160[93]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[75]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[76]), scm__rc.d2160[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[77]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[78]), scm__rc.d2160[9]);
  scm__rc.d2160[95] = Scm_MakeExtendedPair(scm__rc.d2160[92], SCM_OBJ(&scm__rc.d2169[72]), SCM_OBJ(&scm__rc.d2169[80]));
  scm__rc.d2160[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[34])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[97]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[97]))[4] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[97]))[5] = scm__rc.d2160[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[97]))[6] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[97]))[7] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("%make-hash-table-simple")), SCM_OBJ(&libhash_25make_hash_table_simple__STUB), 0);
  libhash_25make_hash_table_simple__STUB.common.info = scm__rc.d2160[95];
  libhash_25make_hash_table_simple__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[97]);
  scm__rc.d2160[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[35])),TRUE); /* %make-hash-table-from-comparator */
  scm__rc.d2160[106] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[36])),TRUE); /* comparator */
  scm__rc.d2160[107] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[37])),TRUE); /* has-type-check */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[81]), scm__rc.d2160[107]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[82]), scm__rc.d2160[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[83]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[86]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[87]), scm__rc.d2160[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[88]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[89]), scm__rc.d2160[9]);
  scm__rc.d2160[108] = Scm_MakeExtendedPair(scm__rc.d2160[105], SCM_OBJ(&scm__rc.d2169[83]), SCM_OBJ(&scm__rc.d2169[91]));
  scm__rc.d2160[109] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[38])),TRUE); /* <comparator> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[110]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[110]))[4] = scm__rc.d2160[109];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[110]))[5] = scm__rc.d2160[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[110]))[6] = scm__rc.d2160[80];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[110]))[7] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[110]))[8] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("%make-hash-table-from-comparator")), SCM_OBJ(&libhash_25make_hash_table_from_comparator__STUB), 0);
  libhash_25make_hash_table_from_comparator__STUB.common.info = scm__rc.d2160[108];
  libhash_25make_hash_table_from_comparator__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[110]);
  scm__rc.d2160[119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[39])),TRUE); /* make-hash-table */
  scm__rc.d2160[120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[41])),TRUE); /* lambda */
  scm__rc.d2160[121] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2161[42]))); /* :optional */
  scm__rc.d2160[122] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[43])),TRUE); /* quote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[92]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[93]), scm__rc.d2160[122]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[95]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[97]), scm__rc.d2160[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[100]), scm__rc.d2160[121]);
  scm__rc.d2160[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[44])),TRUE); /* case */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[101]), scm__rc.d2160[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[102]), scm__rc.d2160[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[103]), scm__rc.d2160[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[104]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[105]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[106]), scm__rc.d2160[92]);
  scm__rc.d2160[124] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[45])),TRUE); /* else */
  scm__rc.d2160[125] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[46])),TRUE); /* unless */
  scm__rc.d2160[126] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[47])),TRUE); /* comparator? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[109]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[110]), scm__rc.d2160[126]);
  scm__rc.d2160[127] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[48])),TRUE); /* error */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[112]), scm__rc.d2160[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[115]), scm__rc.d2160[125]);
  scm__rc.d2160[128] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[50])),TRUE); /* cond */
  scm__rc.d2160[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[51])),TRUE); /* or */
  scm__rc.d2160[130] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[52])),TRUE); /* eq-comparator */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[116]), scm__rc.d2160[130]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[117]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[118]), scm__rc.d2160[91]);
  scm__rc.d2160[131] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[53])),TRUE); /* comparator-equality-predicate */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[119]), scm__rc.d2160[131]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[121]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[124]), scm__rc.d2160[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[126]), scm__rc.d2160[119]);
  scm__rc.d2160[132] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[54])),TRUE); /* eqv-comparator */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[129]), scm__rc.d2160[132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[130]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[131]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[132]), scm__rc.d2160[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[134]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[137]), scm__rc.d2160[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[138]), scm__rc.d2160[122]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[140]), scm__rc.d2160[119]);
  scm__rc.d2160[133] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[55])),TRUE); /* equal-comparator */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[143]), scm__rc.d2160[133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[144]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[145]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[146]), scm__rc.d2160[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[147]), scm__rc.d2160[122]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[149]), scm__rc.d2160[119]);
  scm__rc.d2160[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[56])),TRUE); /* string-comparator */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[152]), scm__rc.d2160[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[153]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[154]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[155]), scm__rc.d2160[122]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[157]), scm__rc.d2160[119]);
  scm__rc.d2160[135] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[57])),TRUE); /* comparator-hashable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[160]), scm__rc.d2160[135]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[162]), scm__rc.d2160[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[165]), scm__rc.d2160[125]);
  scm__rc.d2160[136] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[59])),TRUE); /* $ */
  scm__rc.d2160[137] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[60])),TRUE); /* not */
  scm__rc.d2160[138] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[61])),TRUE); /* comparator-type-test-predicate */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[166]), scm__rc.d2160[138]);
  scm__rc.d2160[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[62])),TRUE); /* with-module */
  scm__rc.d2160[140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[63])),TRUE); /* default-type-test */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[167]), scm__rc.d2160[140]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[168]), scm__rc.d2160[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[169]), scm__rc.d2160[139]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[172]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[174]), scm__rc.d2160[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[176]), scm__rc.d2160[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[177]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[178]), scm__rc.d2160[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[179]), scm__rc.d2160[136]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[182]), scm__rc.d2160[124]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[188]), scm__rc.d2160[128]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[191]), scm__rc.d2160[124]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[194]), scm__rc.d2160[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[195]), scm__rc.d2160[123]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[198]), scm__rc.d2160[120]);
  scm__rc.d2160[141] = Scm_MakeIdentifier(scm__rc.d2160[127], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2160[142] = Scm_MakeIdentifier(scm__rc.d2160[92], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#%make-hash-table-simple */
  scm__rc.d2160[143] = Scm_MakeIdentifier(scm__rc.d2160[126], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#comparator? */
  scm__rc.d2160[144] = Scm_MakeIdentifier(scm__rc.d2160[127], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#error */
  scm__rc.d2160[145] = Scm_MakeIdentifier(scm__rc.d2160[130], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#eq-comparator */
  scm__rc.d2160[146] = Scm_MakeIdentifier(scm__rc.d2160[119], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#make-hash-table */
  scm__rc.d2160[147] = Scm_MakeIdentifier(scm__rc.d2160[131], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#comparator-equality-predicate */
  scm__rc.d2160[148] = Scm_MakeIdentifier(scm__rc.d2160[91], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#eq? */
  scm__rc.d2160[149] = Scm_MakeIdentifier(scm__rc.d2160[132], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#eqv-comparator */
  scm__rc.d2160[150] = Scm_MakeIdentifier(scm__rc.d2160[90], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#eqv? */
  scm__rc.d2160[151] = Scm_MakeIdentifier(scm__rc.d2160[133], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#equal-comparator */
  scm__rc.d2160[152] = Scm_MakeIdentifier(scm__rc.d2160[134], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#string-comparator */
  scm__rc.d2160[153] = Scm_MakeIdentifier(scm__rc.d2160[135], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#comparator-hashable? */
  scm__rc.d2160[154] = Scm_MakeIdentifier(scm__rc.d2160[138], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#comparator-type-test-predicate */
  scm__rc.d2160[155] = Scm_MakeIdentifier(scm__rc.d2160[140], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#default-type-test */
  scm__rc.d2160[156] = Scm_MakeIdentifier(scm__rc.d2160[105], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#%make-hash-table-from-comparator */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[201]), scm__rc.d2160[22]);
  scm__rc.d2160[157] = Scm_MakeExtendedPair(scm__rc.d2160[119], SCM_OBJ(&scm__rc.d2169[100]), SCM_OBJ(&scm__rc.d2169[202]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[203]), scm__rc.d2160[157]);
  scm__rc.d2160[158] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[3]))->name = scm__rc.d2160[119];/* make-hash-table */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[3]))->debugInfo = scm__rc.d2160[158];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[4] = SCM_WORD(scm__rc.d2160[91]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[45] = SCM_WORD(scm__rc.d2160[141]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[55] = SCM_WORD(scm__rc.d2160[142]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[61] = SCM_WORD(scm__rc.d2160[143]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[72] = SCM_WORD(scm__rc.d2160[144]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[75] = SCM_WORD(scm__rc.d2160[145]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[79] = SCM_WORD(scm__rc.d2160[91]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[82] = SCM_WORD(scm__rc.d2160[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[88] = SCM_WORD(scm__rc.d2160[147]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[90] = SCM_WORD(scm__rc.d2160[148]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[98] = SCM_WORD(scm__rc.d2160[149]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[102] = SCM_WORD(scm__rc.d2160[90]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[105] = SCM_WORD(scm__rc.d2160[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[111] = SCM_WORD(scm__rc.d2160[147]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[113] = SCM_WORD(scm__rc.d2160[150]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[121] = SCM_WORD(scm__rc.d2160[151]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[125] = SCM_WORD(scm__rc.d2160[89]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[128] = SCM_WORD(scm__rc.d2160[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[132] = SCM_WORD(scm__rc.d2160[152]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[136] = SCM_WORD(scm__rc.d2160[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[139] = SCM_WORD(scm__rc.d2160[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[145] = SCM_WORD(scm__rc.d2160[153]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[156] = SCM_WORD(scm__rc.d2160[144]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[163] = SCM_WORD(scm__rc.d2160[154]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[165] = SCM_WORD(scm__rc.d2160[155]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[47]))[169] = SCM_WORD(scm__rc.d2160[156]);
  scm__rc.d2160[159] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[4]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[4]))->debugInfo = scm__rc.d2160[159];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[218]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[218]))[6] = SCM_WORD(scm__rc.d2160[119]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[218]))[13] = SCM_WORD(scm__rc.d2160[146]);
  scm__rc.d2160[160] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[65])),TRUE); /* general */
  scm__rc.d2160[161] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[64])),TRUE); /* hash-table-type */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[204]), scm__rc.d2160[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[207]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[208]), scm__rc.d2160[161]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[209]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[210]), scm__rc.d2160[9]);
  scm__rc.d2160[162] = Scm_MakeExtendedPair(scm__rc.d2160[161], SCM_OBJ(&scm__rc.d2169[204]), SCM_OBJ(&scm__rc.d2169[212]));
  scm__rc.d2160[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[66])),TRUE); /* <hash-table> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[164]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[164]))[4] = scm__rc.d2160[163];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[164]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[164]))[6] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-type")), SCM_OBJ(&libhashhash_table_type__STUB), 0);
  libhashhash_table_type__STUB.common.info = scm__rc.d2160[162];
  libhashhash_table_type__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[164]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2160[171] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[67])),TRUE); /* %hash-table-comparator-int */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[215]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[216]), scm__rc.d2160[171]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[217]), scm__rc.d2160[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[218]), scm__rc.d2160[9]);
  scm__rc.d2160[172] = Scm_MakeExtendedPair(scm__rc.d2160[171], SCM_OBJ(&scm__rc.d2169[204]), SCM_OBJ(&scm__rc.d2169[220]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[173]))[3] = scm__rc.d2160[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[173]))[4] = scm__rc.d2160[163];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[173]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[173]))[6] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%hash-table-comparator-int")), SCM_OBJ(&libhash_25hash_table_comparator_int__STUB), 0);
  libhash_25hash_table_comparator_int__STUB.common.info = scm__rc.d2160[172];
  libhash_25hash_table_comparator_int__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[173]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2160[180] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[68])),TRUE); /* hash-table-comparator */
  scm__rc.d2160[181] = Scm_MakeIdentifier(scm__rc.d2160[161], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-type */
  scm__rc.d2160[182] = Scm_MakeIdentifier(scm__rc.d2160[171], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%hash-table-comparator-int */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[223]), scm__rc.d2160[22]);
  scm__rc.d2160[183] = Scm_MakeExtendedPair(scm__rc.d2160[180], SCM_OBJ(&scm__rc.d2169[204]), SCM_OBJ(&scm__rc.d2169[224]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[225]), scm__rc.d2160[183]);
  scm__rc.d2160[184] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[5]))->name = scm__rc.d2160[180];/* hash-table-comparator */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[5]))->debugInfo = scm__rc.d2160[184];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[4] = SCM_WORD(scm__rc.d2160[181]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[8] = SCM_WORD(scm__rc.d2160[91]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[11] = SCM_WORD(scm__rc.d2160[145]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[15] = SCM_WORD(scm__rc.d2160[90]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[18] = SCM_WORD(scm__rc.d2160[149]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[22] = SCM_WORD(scm__rc.d2160[89]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[25] = SCM_WORD(scm__rc.d2160[151]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[29] = SCM_WORD(scm__rc.d2160[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[32] = SCM_WORD(scm__rc.d2160[152]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[36] = SCM_WORD(scm__rc.d2160[160]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[40] = SCM_WORD(scm__rc.d2160[182]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[233]))[46] = SCM_WORD(scm__rc.d2160[144]);
  scm__rc.d2160[185] = Scm_MakeIdentifier(scm__rc.d2160[180], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-comparator */
  scm__rc.d2160[186] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[6]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[6]))->debugInfo = scm__rc.d2160[186];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[281]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[281]))[6] = SCM_WORD(scm__rc.d2160[180]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[281]))[13] = SCM_WORD(scm__rc.d2160[185]);
  scm__rc.d2160[187] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[70])),TRUE); /* hash-table-num-entries */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[228]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[229]), scm__rc.d2160[187]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[230]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[231]), scm__rc.d2160[9]);
  scm__rc.d2160[188] = Scm_MakeExtendedPair(scm__rc.d2160[187], SCM_OBJ(&scm__rc.d2169[204]), SCM_OBJ(&scm__rc.d2169[233]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[189]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[189]))[4] = scm__rc.d2160[163];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[189]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[189]))[6] = scm__rc.d2160[96];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-num-entries")), SCM_OBJ(&libhashhash_table_num_entries__STUB), 0);
  libhashhash_table_num_entries__STUB.common.info = scm__rc.d2160[188];
  libhashhash_table_num_entries__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[189]);
  scm__rc.d2160[196] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[71])),TRUE); /* hash-table-clear! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[236]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[237]), scm__rc.d2160[196]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[238]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[239]), scm__rc.d2160[9]);
  scm__rc.d2160[197] = Scm_MakeExtendedPair(scm__rc.d2160[196], SCM_OBJ(&scm__rc.d2169[204]), SCM_OBJ(&scm__rc.d2169[241]));
  scm__rc.d2160[198] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[72])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[199]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[199]))[4] = scm__rc.d2160[163];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[199]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[199]))[6] = scm__rc.d2160[198];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-clear!")), SCM_OBJ(&libhashhash_table_clearX__STUB), 0);
  libhashhash_table_clearX__STUB.common.info = scm__rc.d2160[197];
  libhashhash_table_clearX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[199]);
  scm__rc.d2160[206] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[73])),TRUE); /* hash-table-get */
  scm__rc.d2160[207] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[74])),TRUE); /* key */
  scm__rc.d2160[208] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[75])),TRUE); /* fallback */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[242]), scm__rc.d2160[208]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[243]), scm__rc.d2160[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[244]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[245]), scm__rc.d2160[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[248]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[249]), scm__rc.d2160[206]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[250]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[251]), scm__rc.d2160[9]);
  scm__rc.d2160[209] = Scm_MakeExtendedPair(scm__rc.d2160[206], SCM_OBJ(&scm__rc.d2169[245]), SCM_OBJ(&scm__rc.d2169[253]));
  scm__rc.d2160[210] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[76])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[211]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[211]))[4] = scm__rc.d2160[163];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[211]))[5] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[211]))[6] = scm__rc.d2160[210];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[211]))[7] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[211]))[8] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-get")), SCM_OBJ(&libhashhash_table_get__STUB), 0);
  libhashhash_table_get__STUB.common.info = scm__rc.d2160[209];
  libhashhash_table_get__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[211]);
  scm__rc.d2160[220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[77])),TRUE); /* hash-table-put! */
  scm__rc.d2160[221] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[78])),TRUE); /* value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[254]), scm__rc.d2160[221]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[255]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[256]), scm__rc.d2160[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[259]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[260]), scm__rc.d2160[220]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[261]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[262]), scm__rc.d2160[9]);
  scm__rc.d2160[222] = Scm_MakeExtendedPair(scm__rc.d2160[220], SCM_OBJ(&scm__rc.d2169[256]), SCM_OBJ(&scm__rc.d2169[264]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[223]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[223]))[4] = scm__rc.d2160[163];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[223]))[5] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[223]))[6] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[223]))[7] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[223]))[8] = scm__rc.d2160[198];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-put!")), SCM_OBJ(&libhashhash_table_putX__STUB), 0);
  libhashhash_table_putX__STUB.common.info = scm__rc.d2160[222];
  libhashhash_table_putX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[223]);
  scm__rc.d2160[232] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[79])),TRUE); /* hash-table-adjoin! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[267]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[268]), scm__rc.d2160[232]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[269]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[270]), scm__rc.d2160[9]);
  scm__rc.d2160[233] = Scm_MakeExtendedPair(scm__rc.d2160[232], SCM_OBJ(&scm__rc.d2169[256]), SCM_OBJ(&scm__rc.d2169[272]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-adjoin!")), SCM_OBJ(&libhashhash_table_adjoinX__STUB), 0);
  libhashhash_table_adjoinX__STUB.common.info = scm__rc.d2160[233];
  libhashhash_table_adjoinX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[223]);
  scm__rc.d2160[234] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[80])),TRUE); /* hash-table-replace! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[275]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[276]), scm__rc.d2160[234]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[277]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[278]), scm__rc.d2160[9]);
  scm__rc.d2160[235] = Scm_MakeExtendedPair(scm__rc.d2160[234], SCM_OBJ(&scm__rc.d2169[256]), SCM_OBJ(&scm__rc.d2169[280]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-replace!")), SCM_OBJ(&libhashhash_table_replaceX__STUB), 0);
  libhashhash_table_replaceX__STUB.common.info = scm__rc.d2160[235];
  libhashhash_table_replaceX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[223]);
  scm__rc.d2160[236] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[81])),TRUE); /* hash-table-delete! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[281]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[282]), scm__rc.d2160[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[285]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[286]), scm__rc.d2160[236]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[287]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[288]), scm__rc.d2160[9]);
  scm__rc.d2160[237] = Scm_MakeExtendedPair(scm__rc.d2160[236], SCM_OBJ(&scm__rc.d2169[282]), SCM_OBJ(&scm__rc.d2169[290]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[238]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[238]))[4] = scm__rc.d2160[163];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[238]))[5] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[238]))[6] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[238]))[7] = scm__rc.d2160[80];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-delete!")), SCM_OBJ(&libhashhash_table_deleteX__STUB), 0);
  libhashhash_table_deleteX__STUB.common.info = scm__rc.d2160[237];
  libhashhash_table_deleteX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[238]);
  scm__rc.d2160[246] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[82])),TRUE); /* hash-table-exists? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[293]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[294]), scm__rc.d2160[246]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[295]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[296]), scm__rc.d2160[9]);
  scm__rc.d2160[247] = Scm_MakeExtendedPair(scm__rc.d2160[246], SCM_OBJ(&scm__rc.d2169[282]), SCM_OBJ(&scm__rc.d2169[298]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-exists?")), SCM_OBJ(&libhashhash_table_existsP__STUB), 0);
  libhashhash_table_existsP__STUB.common.info = scm__rc.d2160[247];
  libhashhash_table_existsP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[238]);
  scm__rc.d2160[248] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[83])),TRUE); /* hash-table-update! */
  scm__rc.d2160[249] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[84])),TRUE); /* proc */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[299]), scm__rc.d2160[249]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[300]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[301]), scm__rc.d2160[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[304]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[305]), scm__rc.d2160[248]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[306]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[307]), scm__rc.d2160[9]);
  scm__rc.d2160[250] = Scm_MakeExtendedPair(scm__rc.d2160[248], SCM_OBJ(&scm__rc.d2169[301]), SCM_OBJ(&scm__rc.d2169[309]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[251]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[251]))[4] = scm__rc.d2160[163];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[251]))[5] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[251]))[6] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[251]))[7] = scm__rc.d2160[210];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[251]))[8] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[251]))[9] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-update!")), SCM_OBJ(&libhashhash_table_updateX__STUB), 0);
  libhashhash_table_updateX__STUB.common.info = scm__rc.d2160[250];
  libhashhash_table_updateX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[251]);
  scm__rc.d2160[261] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[85])),TRUE); /* hash-table-push! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[312]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[313]), scm__rc.d2160[261]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[314]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[315]), scm__rc.d2160[9]);
  scm__rc.d2160[262] = Scm_MakeExtendedPair(scm__rc.d2160[261], SCM_OBJ(&scm__rc.d2169[256]), SCM_OBJ(&scm__rc.d2169[317]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-push!")), SCM_OBJ(&libhashhash_table_pushX__STUB), 0);
  libhashhash_table_pushX__STUB.common.info = scm__rc.d2160[262];
  libhashhash_table_pushX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[223]);
  scm__rc.d2160[263] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[86])),TRUE); /* hash-table-pop! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[320]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[321]), scm__rc.d2160[263]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[322]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[323]), scm__rc.d2160[9]);
  scm__rc.d2160[264] = Scm_MakeExtendedPair(scm__rc.d2160[263], SCM_OBJ(&scm__rc.d2169[245]), SCM_OBJ(&scm__rc.d2169[325]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-pop!")), SCM_OBJ(&libhashhash_table_popX__STUB), 0);
  libhashhash_table_popX__STUB.common.info = scm__rc.d2160[264];
  libhashhash_table_popX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[211]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2160[265] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[87])),TRUE); /* %hash-table-iter */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[328]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[329]), scm__rc.d2160[265]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[330]), scm__rc.d2160[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[331]), scm__rc.d2160[9]);
  scm__rc.d2160[266] = Scm_MakeExtendedPair(scm__rc.d2160[265], SCM_OBJ(&scm__rc.d2169[204]), SCM_OBJ(&scm__rc.d2169[333]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%hash-table-iter")), SCM_OBJ(&libhash_25hash_table_iter__STUB), 0);
  libhash_25hash_table_iter__STUB.common.info = scm__rc.d2160[266];
  libhash_25hash_table_iter__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[173]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2160[267] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[89])),TRUE); /* hash-table-copy */
  scm__rc.d2160[268] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[90])),TRUE); /* ht */
  scm__rc.d2160[269] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[91])),TRUE); /* _ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[334]), scm__rc.d2160[269]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[335]), scm__rc.d2160[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[336]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[339]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[340]), scm__rc.d2160[267]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[341]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[342]), scm__rc.d2160[9]);
  scm__rc.d2160[270] = Scm_MakeExtendedPair(scm__rc.d2160[267], SCM_OBJ(&scm__rc.d2169[336]), SCM_OBJ(&scm__rc.d2169[344]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[271]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[271]))[4] = scm__rc.d2160[163];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[271]))[5] = scm__rc.d2160[210];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[271]))[6] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[271]))[7] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-copy")), SCM_OBJ(&libhashhash_table_copy__STUB), 0);
  libhashhash_table_copy__STUB.common.info = scm__rc.d2160[270];
  libhashhash_table_copy__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[271]);
  scm__rc.d2160[279] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[92])),TRUE); /* hash-table-keys */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[345]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[348]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[349]), scm__rc.d2160[279]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[350]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[351]), scm__rc.d2160[9]);
  scm__rc.d2160[280] = Scm_MakeExtendedPair(scm__rc.d2160[279], SCM_OBJ(&scm__rc.d2169[345]), SCM_OBJ(&scm__rc.d2169[353]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-keys")), SCM_OBJ(&libhashhash_table_keys__STUB), 0);
  libhashhash_table_keys__STUB.common.info = scm__rc.d2160[280];
  libhashhash_table_keys__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[164]);
  scm__rc.d2160[281] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[93])),TRUE); /* hash-table-values */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[356]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[357]), scm__rc.d2160[281]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[358]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[359]), scm__rc.d2160[9]);
  scm__rc.d2160[282] = Scm_MakeExtendedPair(scm__rc.d2160[281], SCM_OBJ(&scm__rc.d2169[345]), SCM_OBJ(&scm__rc.d2169[361]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-values")), SCM_OBJ(&libhashhash_table_values__STUB), 0);
  libhashhash_table_values__STUB.common.info = scm__rc.d2160[282];
  libhashhash_table_values__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[164]);
  scm__rc.d2160[283] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[94])),TRUE); /* hash-table-stat */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[364]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[365]), scm__rc.d2160[283]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[366]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[367]), scm__rc.d2160[9]);
  scm__rc.d2160[284] = Scm_MakeExtendedPair(scm__rc.d2160[283], SCM_OBJ(&scm__rc.d2169[345]), SCM_OBJ(&scm__rc.d2169[369]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("hash-table-stat")), SCM_OBJ(&libhashhash_table_stat__STUB), 0);
  libhashhash_table_stat__STUB.common.info = scm__rc.d2160[284];
  libhashhash_table_stat__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[164]);
  scm__rc.d2160[285] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[95])),TRUE); /* hash-table-fold */
  scm__rc.d2160[286] = Scm_MakeIdentifier(scm__rc.d2160[163], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#<hash-table> */
  scm__rc.d2160[288] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[96])),TRUE); /* of-type? */
  scm__rc.d2160[287] = Scm_MakeIdentifier(scm__rc.d2160[288], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#of-type? */
  scm__rc.d2160[290] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[97])),TRUE); /* type-error */
  scm__rc.d2160[289] = Scm_MakeIdentifier(scm__rc.d2160[290], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#type-error */
  scm__rc.d2160[291] = Scm_MakeIdentifier(scm__rc.d2160[265], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%hash-table-iter */
  scm__rc.d2160[292] = Scm_MakeIdentifier(scm__rc.d2160[2], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#*unique* */
  scm__rc.d2160[293] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[98])),TRUE); /* kons */
  scm__rc.d2160[294] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[99])),TRUE); /* knil */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[370]), scm__rc.d2160[294]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[371]), scm__rc.d2160[293]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[372]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[375]), scm__rc.d2160[22]);
  scm__rc.d2160[295] = Scm_MakeExtendedPair(scm__rc.d2160[285], SCM_OBJ(&scm__rc.d2169[372]), SCM_OBJ(&scm__rc.d2169[376]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[377]), scm__rc.d2160[295]);
  scm__rc.d2160[296] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[7]))->name = scm__rc.d2160[285];/* hash-table-fold */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[7]))->debugInfo = scm__rc.d2160[296];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]))[15] = SCM_WORD(scm__rc.d2160[268]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]))[25] = SCM_WORD(scm__rc.d2160[291]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]))[32] = SCM_WORD(scm__rc.d2160[292]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[296]))[38] = SCM_WORD(scm__rc.d2160[292]);
  scm__rc.d2160[297] = Scm_MakeIdentifier(scm__rc.d2160[285], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-fold */
  scm__rc.d2160[298] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[8]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[8]))->debugInfo = scm__rc.d2160[298];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[350]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[350]))[6] = SCM_WORD(scm__rc.d2160[285]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[350]))[13] = SCM_WORD(scm__rc.d2160[297]);
  scm__rc.d2160[299] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[100])),TRUE); /* alist->hash-table */
  scm__rc.d2160[300] = Scm_MakeIdentifier(scm__rc.d2160[220], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-put! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[379]), scm__rc.d2160[299]);
  scm__rc.d2160[301] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[101])),TRUE); /* x */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[380]), scm__rc.d2160[301]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[383]), scm__rc.d2160[22]);
  scm__rc.d2160[302] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[379]), SCM_OBJ(&scm__rc.d2169[380]), SCM_OBJ(&scm__rc.d2169[384]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[385]), scm__rc.d2160[302]);
  scm__rc.d2160[303] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[9]))->debugInfo = scm__rc.d2160[303];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[365]))[5] = SCM_WORD(scm__rc.d2160[300]);
  scm__rc.d2160[305] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[102])),TRUE); /* for-each */
  scm__rc.d2160[304] = Scm_MakeIdentifier(scm__rc.d2160[305], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#for-each */
  scm__rc.d2160[306] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[103])),TRUE); /* opt-cmpr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[386]), scm__rc.d2160[58]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2169[386]), scm__rc.d2160[306]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[389]), scm__rc.d2160[22]);
  scm__rc.d2160[307] = Scm_MakeExtendedPair(scm__rc.d2160[299], SCM_OBJ(&scm__rc.d2169[386]), SCM_OBJ(&scm__rc.d2169[390]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[391]), scm__rc.d2160[307]);
  scm__rc.d2160[308] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[10]))->name = scm__rc.d2160[299];/* alist->hash-table */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[10]))->debugInfo = scm__rc.d2160[308];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[372]))[3] = SCM_WORD(scm__rc.d2160[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[372]))[14] = SCM_WORD(scm__rc.d2160[304]);
  scm__rc.d2160[309] = Scm_MakeIdentifier(scm__rc.d2160[299], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#alist->hash-table */
  scm__rc.d2160[310] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[11]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[11]))->debugInfo = scm__rc.d2160[310];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[388]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[388]))[6] = SCM_WORD(scm__rc.d2160[299]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[388]))[13] = SCM_WORD(scm__rc.d2160[309]);
  scm__rc.d2160[311] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[104])),TRUE); /* hash-table->alist */
  scm__rc.d2160[313] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[105])),TRUE); /* cons */
  scm__rc.d2160[312] = Scm_MakeIdentifier(scm__rc.d2160[313], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#cons */
  scm__rc.d2160[315] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[106])),TRUE); /* hash-table-map */
  scm__rc.d2160[314] = Scm_MakeIdentifier(scm__rc.d2160[315], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-map */
  scm__rc.d2160[316] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[107])),TRUE); /* h */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[392]), scm__rc.d2160[316]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[395]), scm__rc.d2160[22]);
  scm__rc.d2160[317] = Scm_MakeExtendedPair(scm__rc.d2160[311], SCM_OBJ(&scm__rc.d2169[392]), SCM_OBJ(&scm__rc.d2169[396]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[397]), scm__rc.d2160[317]);
  scm__rc.d2160[318] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[12]))->name = scm__rc.d2160[311];/* hash-table->alist */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[12]))->debugInfo = scm__rc.d2160[318];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[403]))[2] = SCM_WORD(scm__rc.d2160[312]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[403]))[4] = SCM_WORD(scm__rc.d2160[314]);
  scm__rc.d2160[319] = Scm_MakeIdentifier(scm__rc.d2160[311], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table->alist */
  scm__rc.d2160[320] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[13]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[13]))->debugInfo = scm__rc.d2160[320];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[409]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[409]))[6] = SCM_WORD(scm__rc.d2160[311]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[409]))[13] = SCM_WORD(scm__rc.d2160[319]);
  scm__rc.d2160[321] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[108])),TRUE); /* unique */
  scm__rc.d2160[322] = Scm_MakeIdentifier(scm__rc.d2160[321], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#unique */
  scm__rc.d2160[323] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[14]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[14]))->debugInfo = scm__rc.d2160[323];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[424]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[424]))[6] = SCM_WORD(scm__rc.d2160[321]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[424]))[14] = SCM_WORD(scm__rc.d2160[322]);
  scm__rc.d2160[324] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[109])),TRUE); /* hash-table-from-pairs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[398]), scm__rc.d2160[324]);
  scm__rc.d2160[325] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[110])),TRUE); /* kv */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[399]), scm__rc.d2160[325]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[402]), scm__rc.d2160[22]);
  scm__rc.d2160[326] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[398]), SCM_OBJ(&scm__rc.d2169[399]), SCM_OBJ(&scm__rc.d2169[403]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[404]), scm__rc.d2160[326]);
  scm__rc.d2160[327] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[15]))->debugInfo = scm__rc.d2160[327];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[440]))[5] = SCM_WORD(scm__rc.d2160[300]);
  scm__rc.d2160[328] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[111])),TRUE); /* cmpr */
  scm__rc.d2160[329] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[112])),TRUE); /* kvs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[405]), scm__rc.d2160[328]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2169[405]), scm__rc.d2160[329]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[408]), scm__rc.d2160[22]);
  scm__rc.d2160[330] = Scm_MakeExtendedPair(scm__rc.d2160[324], SCM_OBJ(&scm__rc.d2169[405]), SCM_OBJ(&scm__rc.d2169[409]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[410]), scm__rc.d2160[330]);
  scm__rc.d2160[331] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[16]))->name = scm__rc.d2160[324];/* hash-table-from-pairs */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[16]))->debugInfo = scm__rc.d2160[331];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[447]))[4] = SCM_WORD(scm__rc.d2160[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[447]))[13] = SCM_WORD(scm__rc.d2160[304]);
  scm__rc.d2160[332] = Scm_MakeIdentifier(scm__rc.d2160[324], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-from-pairs */
  scm__rc.d2160[333] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[17]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[17]))->debugInfo = scm__rc.d2160[333];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[462]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[462]))[6] = SCM_WORD(scm__rc.d2160[324]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[462]))[13] = SCM_WORD(scm__rc.d2160[332]);
  scm__rc.d2160[334] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[113])),TRUE); /* hash-table */
  scm__rc.d2160[335] = Scm_MakeIdentifier(scm__rc.d2160[334], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table */
  scm__rc.d2160[336] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[18]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[18]))->debugInfo = scm__rc.d2160[336];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[477]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[477]))[6] = SCM_WORD(scm__rc.d2160[334]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[477]))[10] = SCM_WORD(scm__rc.d2160[332]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[477]))[13] = SCM_WORD(scm__rc.d2160[335]);
  scm__rc.d2160[337] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[114])),TRUE); /* hash-table-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[411]), scm__rc.d2160[337]);
  scm__rc.d2160[338] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[115])),TRUE); /* k */
  scm__rc.d2160[339] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[116])),TRUE); /* v */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[412]), scm__rc.d2160[339]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[413]), scm__rc.d2160[338]);
  scm__rc.d2160[340] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[19]))->debugInfo = scm__rc.d2160[340];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[492]))[4] = SCM_WORD(scm__rc.d2160[300]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[418]), scm__rc.d2160[22]);
  scm__rc.d2160[341] = Scm_MakeExtendedPair(scm__rc.d2160[337], SCM_OBJ(&scm__rc.d2169[405]), SCM_OBJ(&scm__rc.d2169[419]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[420]), scm__rc.d2160[341]);
  scm__rc.d2160[342] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[20]))->name = scm__rc.d2160[337];/* hash-table-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[20]))->debugInfo = scm__rc.d2160[342];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]))[4] = SCM_WORD(scm__rc.d2160[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[498]))[32] = SCM_WORD(scm__rc.d2160[141]);
  scm__rc.d2160[343] = Scm_MakeIdentifier(scm__rc.d2160[337], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-r7 */
  scm__rc.d2160[344] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[21]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[21]))->debugInfo = scm__rc.d2160[344];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[553]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[553]))[6] = SCM_WORD(scm__rc.d2160[337]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[553]))[13] = SCM_WORD(scm__rc.d2160[343]);
  scm__rc.d2160[345] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[118])),TRUE); /* hash-table-empty? */
  scm__rc.d2160[346] = Scm_MakeIdentifier(scm__rc.d2160[187], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-num-entries */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[423]), scm__rc.d2160[22]);
  scm__rc.d2160[347] = Scm_MakeExtendedPair(scm__rc.d2160[345], SCM_OBJ(&scm__rc.d2169[392]), SCM_OBJ(&scm__rc.d2169[424]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[425]), scm__rc.d2160[347]);
  scm__rc.d2160[348] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[22]))->name = scm__rc.d2160[345];/* hash-table-empty? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[22]))->debugInfo = scm__rc.d2160[348];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[568]))[4] = SCM_WORD(scm__rc.d2160[346]);
  scm__rc.d2160[349] = Scm_MakeIdentifier(scm__rc.d2160[345], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-empty? */
  scm__rc.d2160[350] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[23]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[23]))->debugInfo = scm__rc.d2160[350];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[577]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[577]))[6] = SCM_WORD(scm__rc.d2160[345]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[577]))[13] = SCM_WORD(scm__rc.d2160[349]);
  scm__rc.d2160[351] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[119])),TRUE); /* hash-table-contains? */
  scm__rc.d2160[352] = Scm_MakeIdentifier(scm__rc.d2160[246], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-exists? */
  scm__rc.d2160[353] = Scm_MakeIdentifier(scm__rc.d2160[351], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-contains? */
  scm__rc.d2160[354] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[24]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[24]))->debugInfo = scm__rc.d2160[354];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[592]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[592]))[6] = SCM_WORD(scm__rc.d2160[351]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[592]))[10] = SCM_WORD(scm__rc.d2160[352]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[592]))[13] = SCM_WORD(scm__rc.d2160[353]);
  scm__rc.d2160[355] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[120])),TRUE); /* hash-table-size */
  scm__rc.d2160[356] = Scm_MakeIdentifier(scm__rc.d2160[355], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-size */
  scm__rc.d2160[357] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[25]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[25]))->debugInfo = scm__rc.d2160[357];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[607]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[607]))[6] = SCM_WORD(scm__rc.d2160[355]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[607]))[10] = SCM_WORD(scm__rc.d2160[346]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[607]))[13] = SCM_WORD(scm__rc.d2160[356]);
  scm__rc.d2160[358] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[121])),TRUE); /* hash-table-mutable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[428]), scm__rc.d2160[22]);
  scm__rc.d2160[359] = Scm_MakeExtendedPair(scm__rc.d2160[358], SCM_OBJ(&scm__rc.d2169[345]), SCM_OBJ(&scm__rc.d2169[429]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[430]), scm__rc.d2160[359]);
  scm__rc.d2160[360] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[26])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[26]))->name = scm__rc.d2160[358];/* hash-table-mutable? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[26]))->debugInfo = scm__rc.d2160[360];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[622]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[622]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[622]))[15] = SCM_WORD(scm__rc.d2160[268]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[622]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[622]))[20] = SCM_WORD(scm__rc.d2160[289]);
  scm__rc.d2160[361] = Scm_MakeIdentifier(scm__rc.d2160[358], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-mutable? */
  scm__rc.d2160[362] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[27])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[27]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[27]))->debugInfo = scm__rc.d2160[362];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[645]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[645]))[6] = SCM_WORD(scm__rc.d2160[358]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[645]))[13] = SCM_WORD(scm__rc.d2160[361]);
  scm__rc.d2160[363] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[122])),TRUE); /* hash-table-empty-copy */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[433]), scm__rc.d2160[22]);
  scm__rc.d2160[364] = Scm_MakeExtendedPair(scm__rc.d2160[363], SCM_OBJ(&scm__rc.d2169[345]), SCM_OBJ(&scm__rc.d2169[434]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[435]), scm__rc.d2160[364]);
  scm__rc.d2160[365] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[28])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[28]))->name = scm__rc.d2160[363];/* hash-table-empty-copy */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[28]))->debugInfo = scm__rc.d2160[365];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[660]))[4] = SCM_WORD(scm__rc.d2160[185]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[660]))[6] = SCM_WORD(scm__rc.d2160[146]);
  scm__rc.d2160[366] = Scm_MakeIdentifier(scm__rc.d2160[363], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-empty-copy */
  scm__rc.d2160[367] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[29])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[29]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[29]))->debugInfo = scm__rc.d2160[367];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[668]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[668]))[6] = SCM_WORD(scm__rc.d2160[363]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[668]))[13] = SCM_WORD(scm__rc.d2160[366]);
  scm__rc.d2160[368] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[123])),TRUE); /* hash-table-entries */
  scm__rc.d2160[369] = Scm_MakeIdentifier(scm__rc.d2160[279], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-keys */
  scm__rc.d2160[370] = Scm_MakeIdentifier(scm__rc.d2160[281], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-values */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[438]), scm__rc.d2160[22]);
  scm__rc.d2160[371] = Scm_MakeExtendedPair(scm__rc.d2160[368], SCM_OBJ(&scm__rc.d2169[345]), SCM_OBJ(&scm__rc.d2169[439]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[440]), scm__rc.d2160[371]);
  scm__rc.d2160[372] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[30])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[30]))->name = scm__rc.d2160[368];/* hash-table-entries */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[30]))->debugInfo = scm__rc.d2160[372];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[683]))[4] = SCM_WORD(scm__rc.d2160[369]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[683]))[9] = SCM_WORD(scm__rc.d2160[370]);
  scm__rc.d2160[373] = Scm_MakeIdentifier(scm__rc.d2160[368], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-entries */
  scm__rc.d2160[374] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[31])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[31]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[31]))->debugInfo = scm__rc.d2160[374];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[694]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[694]))[6] = SCM_WORD(scm__rc.d2160[368]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[694]))[13] = SCM_WORD(scm__rc.d2160[373]);
  scm__rc.d2160[375] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[124])),TRUE); /* hash-table-unfold */
  scm__rc.d2160[376] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[125])),TRUE); /* p */
  scm__rc.d2160[377] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[126])),TRUE); /* f */
  scm__rc.d2160[378] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[127])),TRUE); /* g */
  scm__rc.d2160[379] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[128])),TRUE); /* seed */
  scm__rc.d2160[380] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[129])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[441]), scm__rc.d2160[328]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2169[441]), scm__rc.d2160[380]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[442]), scm__rc.d2160[379]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[443]), scm__rc.d2160[378]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[444]), scm__rc.d2160[377]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[445]), scm__rc.d2160[376]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[448]), scm__rc.d2160[22]);
  scm__rc.d2160[381] = Scm_MakeExtendedPair(scm__rc.d2160[375], SCM_OBJ(&scm__rc.d2169[445]), SCM_OBJ(&scm__rc.d2169[449]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[450]), scm__rc.d2160[381]);
  scm__rc.d2160[382] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[32])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[32]))->name = scm__rc.d2160[375];/* hash-table-unfold */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[32]))->debugInfo = scm__rc.d2160[382];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[709]))[3] = SCM_WORD(scm__rc.d2160[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[709]))[30] = SCM_WORD(scm__rc.d2160[300]);
  scm__rc.d2160[383] = Scm_MakeIdentifier(scm__rc.d2160[375], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-unfold */
  scm__rc.d2160[384] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[33]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[33]))->debugInfo = scm__rc.d2160[384];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[751]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[751]))[6] = SCM_WORD(scm__rc.d2160[375]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[751]))[13] = SCM_WORD(scm__rc.d2160[383]);
  scm__rc.d2160[385] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[130])),TRUE); /* hash-table-ref */
  scm__rc.d2160[387] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[131])),TRUE); /* identity */
  scm__rc.d2160[386] = Scm_MakeIdentifier(scm__rc.d2160[387], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#identity */
  scm__rc.d2160[388] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[132])),TRUE); /* failure */
  scm__rc.d2160[389] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[133])),TRUE); /* success */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[451]), scm__rc.d2160[387]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[452]), scm__rc.d2160[389]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[454]), scm__rc.d2160[388]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[455]), scm__rc.d2160[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[456]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[457]), scm__rc.d2160[268]);
  scm__rc.d2160[390] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[134])),TRUE); /* let1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[458]), scm__rc.d2160[321]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[459]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[460]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[461]), scm__rc.d2160[206]);
  scm__rc.d2160[391] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[135])),TRUE); /* if */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[462]), scm__rc.d2160[339]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[463]), scm__rc.d2160[91]);
  scm__rc.d2160[392] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[136])),TRUE); /* undefined? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[464]), scm__rc.d2160[388]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[465]), scm__rc.d2160[392]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[467]), scm__rc.d2160[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[471]), scm__rc.d2160[391]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[472]), scm__rc.d2160[389]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[476]), scm__rc.d2160[391]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[479]), scm__rc.d2160[339]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[480]), scm__rc.d2160[390]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[483]), scm__rc.d2160[120]);
  scm__rc.d2160[393] = Scm_MakeIdentifier(scm__rc.d2160[206], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-get */
  scm__rc.d2160[394] = Scm_MakeIdentifier(scm__rc.d2160[392], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#undefined? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[486]), scm__rc.d2160[22]);
  scm__rc.d2160[395] = Scm_MakeExtendedPair(scm__rc.d2160[385], SCM_OBJ(&scm__rc.d2169[457]), SCM_OBJ(&scm__rc.d2169[487]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[488]), scm__rc.d2160[395]);
  scm__rc.d2160[396] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[34])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[34]))->name = scm__rc.d2160[385];/* hash-table-ref */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[34]))->debugInfo = scm__rc.d2160[396];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]))[20] = SCM_WORD(scm__rc.d2160[386]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]))[45] = SCM_WORD(scm__rc.d2160[141]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]))[51] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]))[53] = SCM_WORD(scm__rc.d2160[393]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]))[57] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]))[64] = SCM_WORD(scm__rc.d2160[394]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[766]))[71] = SCM_WORD(scm__rc.d2160[144]);
  scm__rc.d2160[397] = Scm_MakeIdentifier(scm__rc.d2160[385], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-ref */
  scm__rc.d2160[398] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[35])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[35]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[35]))->debugInfo = scm__rc.d2160[398];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[846]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[846]))[6] = SCM_WORD(scm__rc.d2160[385]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[846]))[13] = SCM_WORD(scm__rc.d2160[397]);
  scm__rc.d2160[399] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[138])),TRUE); /* hash-table-ref/default */
  scm__rc.d2160[400] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[139])),TRUE); /* default */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[489]), scm__rc.d2160[400]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[490]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[491]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[494]), scm__rc.d2160[22]);
  scm__rc.d2160[401] = Scm_MakeExtendedPair(scm__rc.d2160[399], SCM_OBJ(&scm__rc.d2169[491]), SCM_OBJ(&scm__rc.d2169[495]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[496]), scm__rc.d2160[401]);
  scm__rc.d2160[402] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[36])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[36]))->name = scm__rc.d2160[399];/* hash-table-ref/default */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[36]))->debugInfo = scm__rc.d2160[402];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[861]))[4] = SCM_WORD(scm__rc.d2160[393]);
  scm__rc.d2160[403] = Scm_MakeIdentifier(scm__rc.d2160[399], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-ref/default */
  scm__rc.d2160[404] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[37])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[37]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[37]))->debugInfo = scm__rc.d2160[404];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[867]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[867]))[6] = SCM_WORD(scm__rc.d2160[399]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[867]))[13] = SCM_WORD(scm__rc.d2160[403]);
  scm__rc.d2160[405] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[140])),TRUE); /* hash-table-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[497]), scm__rc.d2160[405]);
  scm__rc.d2160[406] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[38])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[38]))->debugInfo = scm__rc.d2160[406];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[882]))[4] = SCM_WORD(scm__rc.d2160[300]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[500]), scm__rc.d2160[268]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2169[500]), scm__rc.d2160[329]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[503]), scm__rc.d2160[22]);
  scm__rc.d2160[407] = Scm_MakeExtendedPair(scm__rc.d2160[405], SCM_OBJ(&scm__rc.d2169[500]), SCM_OBJ(&scm__rc.d2169[504]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[505]), scm__rc.d2160[407]);
  scm__rc.d2160[408] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[39])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[39]))->name = scm__rc.d2160[405];/* hash-table-set! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[39]))->debugInfo = scm__rc.d2160[408];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[888]))[24] = SCM_WORD(scm__rc.d2160[141]);
  scm__rc.d2160[409] = Scm_MakeIdentifier(scm__rc.d2160[405], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-set! */
  scm__rc.d2160[410] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[40])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[40]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[40]))->debugInfo = scm__rc.d2160[410];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[935]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[935]))[6] = SCM_WORD(scm__rc.d2160[405]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[935]))[13] = SCM_WORD(scm__rc.d2160[409]);
  scm__rc.d2160[411] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[141])),TRUE); /* hash-table-intern!-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[506]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[507]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[510]), scm__rc.d2160[22]);
  scm__rc.d2160[412] = Scm_MakeExtendedPair(scm__rc.d2160[411], SCM_OBJ(&scm__rc.d2169[507]), SCM_OBJ(&scm__rc.d2169[511]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[512]), scm__rc.d2160[412]);
  scm__rc.d2160[413] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[41])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[41]))->name = scm__rc.d2160[411];/* hash-table-intern!-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[41]))->debugInfo = scm__rc.d2160[413];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[950]))[5] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[950]))[7] = SCM_WORD(scm__rc.d2160[393]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[950]))[11] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[950]))[25] = SCM_WORD(scm__rc.d2160[300]);
  scm__rc.d2160[414] = Scm_MakeIdentifier(scm__rc.d2160[411], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-intern!-r7 */
  scm__rc.d2160[415] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[42])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[42]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[42]))->debugInfo = scm__rc.d2160[415];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[978]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[978]))[6] = SCM_WORD(scm__rc.d2160[411]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[978]))[13] = SCM_WORD(scm__rc.d2160[414]);
  scm__rc.d2160[416] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[142])),TRUE); /* hash-table-delete!-r7 */
  scm__rc.d2160[417] = Scm_MakeIdentifier(scm__rc.d2160[236], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-delete! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[513]), scm__rc.d2160[416]);
  scm__rc.d2160[418] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[143])),TRUE); /* count */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[514]), scm__rc.d2160[418]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[515]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[518]), scm__rc.d2160[22]);
  scm__rc.d2160[419] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[513]), SCM_OBJ(&scm__rc.d2169[515]), SCM_OBJ(&scm__rc.d2169[519]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[520]), scm__rc.d2160[419]);
  scm__rc.d2160[420] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[43])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[43]))->debugInfo = scm__rc.d2160[420];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[993]))[5] = SCM_WORD(scm__rc.d2160[417]);
  scm__rc.d2160[422] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[144])),TRUE); /* fold */
  scm__rc.d2160[421] = Scm_MakeIdentifier(scm__rc.d2160[422], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#fold */
  scm__rc.d2160[423] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[145])),TRUE); /* keys */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[521]), scm__rc.d2160[268]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2169[521]), scm__rc.d2160[423]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[524]), scm__rc.d2160[22]);
  scm__rc.d2160[424] = Scm_MakeExtendedPair(scm__rc.d2160[416], SCM_OBJ(&scm__rc.d2169[521]), SCM_OBJ(&scm__rc.d2169[525]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[526]), scm__rc.d2160[424]);
  scm__rc.d2160[425] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[44])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[44]))->name = scm__rc.d2160[416];/* hash-table-delete!-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[44]))->debugInfo = scm__rc.d2160[425];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1004]))[6] = SCM_WORD(scm__rc.d2160[421]);
  scm__rc.d2160[426] = Scm_MakeIdentifier(scm__rc.d2160[416], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-delete!-r7 */
  scm__rc.d2160[427] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[45])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[45]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[45]))->debugInfo = scm__rc.d2160[427];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1012]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1012]))[6] = SCM_WORD(scm__rc.d2160[416]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1012]))[13] = SCM_WORD(scm__rc.d2160[426]);
  scm__rc.d2160[428] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[146])),TRUE); /* hash-table-update!/default */
  scm__rc.d2160[429] = Scm_MakeIdentifier(scm__rc.d2160[248], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-update! */
  scm__rc.d2160[430] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[147])),TRUE); /* updater */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[527]), scm__rc.d2160[430]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[528]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[529]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[532]), scm__rc.d2160[22]);
  scm__rc.d2160[431] = Scm_MakeExtendedPair(scm__rc.d2160[428], SCM_OBJ(&scm__rc.d2169[529]), SCM_OBJ(&scm__rc.d2169[533]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[534]), scm__rc.d2160[431]);
  scm__rc.d2160[432] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[46])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[46]))->name = scm__rc.d2160[428];/* hash-table-update!/default */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[46]))->debugInfo = scm__rc.d2160[432];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1027]))[5] = SCM_WORD(scm__rc.d2160[429]);
  scm__rc.d2160[433] = Scm_MakeIdentifier(scm__rc.d2160[428], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-update!/default */
  scm__rc.d2160[434] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[47])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[47]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[47]))->debugInfo = scm__rc.d2160[434];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1034]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1034]))[6] = SCM_WORD(scm__rc.d2160[428]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1034]))[13] = SCM_WORD(scm__rc.d2160[433]);
  scm__rc.d2160[435] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[148])),TRUE); /* hash-table-update!-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[535]), scm__rc.d2160[430]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[536]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[537]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[538]), scm__rc.d2160[430]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[540]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[541]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[542]), scm__rc.d2160[220]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[546]), scm__rc.d2160[391]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[547]), scm__rc.d2160[430]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[549]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[550]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[551]), scm__rc.d2160[220]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[555]), scm__rc.d2160[391]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[558]), scm__rc.d2160[339]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[559]), scm__rc.d2160[390]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[562]), scm__rc.d2160[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[565]), scm__rc.d2160[22]);
  scm__rc.d2160[436] = Scm_MakeExtendedPair(scm__rc.d2160[435], SCM_OBJ(&scm__rc.d2169[537]), SCM_OBJ(&scm__rc.d2169[566]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[567]), scm__rc.d2160[436]);
  scm__rc.d2160[437] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[48])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[48]))->name = scm__rc.d2160[435];/* hash-table-update!-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[48]))->debugInfo = scm__rc.d2160[437];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]))[20] = SCM_WORD(scm__rc.d2160[386]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]))[45] = SCM_WORD(scm__rc.d2160[141]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]))[51] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]))[53] = SCM_WORD(scm__rc.d2160[393]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]))[57] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]))[64] = SCM_WORD(scm__rc.d2160[394]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]))[71] = SCM_WORD(scm__rc.d2160[144]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]))[85] = SCM_WORD(scm__rc.d2160[300]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1049]))[100] = SCM_WORD(scm__rc.d2160[300]);
  scm__rc.d2160[438] = Scm_MakeIdentifier(scm__rc.d2160[435], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-update!-r7 */
  scm__rc.d2160[439] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[49])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[49]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[49]))->debugInfo = scm__rc.d2160[439];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1151]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1151]))[6] = SCM_WORD(scm__rc.d2160[435]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1151]))[13] = SCM_WORD(scm__rc.d2160[438]);
  scm__rc.d2160[440] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[149])),TRUE); /* hash-table-pop!-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[570]), scm__rc.d2160[22]);
  scm__rc.d2160[441] = Scm_MakeExtendedPair(scm__rc.d2160[440], SCM_OBJ(&scm__rc.d2169[345]), SCM_OBJ(&scm__rc.d2169[571]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[572]), scm__rc.d2160[441]);
  scm__rc.d2160[442] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[50])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[50]))->name = scm__rc.d2160[440];/* hash-table-pop!-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[50]))->debugInfo = scm__rc.d2160[442];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[15] = SCM_WORD(scm__rc.d2160[268]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[25] = SCM_WORD(scm__rc.d2160[291]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[30] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[36] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[45] = SCM_WORD(scm__rc.d2160[144]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1166]))[53] = SCM_WORD(scm__rc.d2160[417]);
  scm__rc.d2160[443] = Scm_MakeIdentifier(scm__rc.d2160[440], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-pop!-r7 */
  scm__rc.d2160[444] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[51])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[51]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[51]))->debugInfo = scm__rc.d2160[444];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1223]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1223]))[6] = SCM_WORD(scm__rc.d2160[440]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1223]))[13] = SCM_WORD(scm__rc.d2160[443]);
  scm__rc.d2160[445] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[151])),TRUE); /* arg */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[573]), scm__rc.d2160[445]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[574]), scm__rc.d2160[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[575]), scm__rc.d2160[249]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[576]), scm__rc.d2160[268]);
  scm__rc.d2160[446] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[152])),TRUE); /* when */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[577]), scm__rc.d2160[392]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[579]), scm__rc.d2160[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[581]), scm__rc.d2160[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[584]), scm__rc.d2160[446]);
  scm__rc.d2160[447] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[154])),TRUE); /* assume-type */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[585]), scm__rc.d2160[163]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[586]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[587]), scm__rc.d2160[447]);
  scm__rc.d2160[448] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[155])),TRUE); /* i */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[588]), scm__rc.d2160[139]);
  scm__rc.d2160[449] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[156])),TRUE); /* let */
  scm__rc.d2160[450] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[157])),TRUE); /* loop */
  scm__rc.d2160[451] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[158])),TRUE); /* r */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[591]), scm__rc.d2160[122]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[593]), scm__rc.d2160[451]);
  scm__rc.d2160[452] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[159])),TRUE); /* receive */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[595]), scm__rc.d2160[448]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[596]), scm__rc.d2160[338]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[597]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[598]), scm__rc.d2160[249]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[599]), scm__rc.d2160[451]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[601]), scm__rc.d2160[313]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[603]), scm__rc.d2160[450]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[605]), scm__rc.d2160[451]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[607]), scm__rc.d2160[391]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[611]), scm__rc.d2160[452]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[614]), scm__rc.d2160[450]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[615]), scm__rc.d2160[449]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[618]), scm__rc.d2160[448]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[619]), scm__rc.d2160[390]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[624]), scm__rc.d2160[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[627]), scm__rc.d2160[22]);
  scm__rc.d2160[453] = Scm_MakeExtendedPair(scm__rc.d2160[315], SCM_OBJ(&scm__rc.d2169[576]), SCM_OBJ(&scm__rc.d2169[628]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[629]), scm__rc.d2160[453]);
  scm__rc.d2160[454] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[52])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[52]))->name = scm__rc.d2160[315];/* hash-table-map */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[52]))->debugInfo = scm__rc.d2160[454];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[28] = SCM_WORD(scm__rc.d2160[141]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[33] = SCM_WORD(scm__rc.d2160[394]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[43] = SCM_WORD(scm__rc.d2160[144]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[48] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[50] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[59] = SCM_WORD(scm__rc.d2160[268]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[61] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[64] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[69] = SCM_WORD(scm__rc.d2160[291]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[76] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1238]))[82] = SCM_WORD(scm__rc.d2160[322]);
  scm__rc.d2160[455] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[53])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[53]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[53]))->debugInfo = scm__rc.d2160[455];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1337]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1337]))[6] = SCM_WORD(scm__rc.d2160[315]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1337]))[13] = SCM_WORD(scm__rc.d2160[314]);
  scm__rc.d2160[456] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[160])),TRUE); /* hash-table-map-r7 */
  scm__rc.d2160[457] = Scm_MakeIdentifier(scm__rc.d2160[109], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#<comparator> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[630]), scm__rc.d2160[456]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[633]), scm__rc.d2160[22]);
  scm__rc.d2160[458] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[630]), SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[634]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[635]), scm__rc.d2160[458]);
  scm__rc.d2160[459] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[54])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[54]))->debugInfo = scm__rc.d2160[459];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1352]))[8] = SCM_WORD(scm__rc.d2160[300]);
  scm__rc.d2160[461] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[161])),TRUE); /* hash-table-for-each */
  scm__rc.d2160[460] = Scm_MakeIdentifier(scm__rc.d2160[461], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-for-each */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[636]), scm__rc.d2160[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[637]), scm__rc.d2160[249]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[640]), scm__rc.d2160[22]);
  scm__rc.d2160[462] = Scm_MakeExtendedPair(scm__rc.d2160[456], SCM_OBJ(&scm__rc.d2169[637]), SCM_OBJ(&scm__rc.d2169[641]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[642]), scm__rc.d2160[462]);
  scm__rc.d2160[463] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[55])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[55]))->name = scm__rc.d2160[456];/* hash-table-map-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[55]))->debugInfo = scm__rc.d2160[463];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[4] = SCM_WORD(scm__rc.d2160[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[15] = SCM_WORD(scm__rc.d2160[328]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[17] = SCM_WORD(scm__rc.d2160[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[25] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[27] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[36] = SCM_WORD(scm__rc.d2160[268]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[38] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[41] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[46] = SCM_WORD(scm__rc.d2160[146]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1362]))[54] = SCM_WORD(scm__rc.d2160[460]);
  scm__rc.d2160[464] = Scm_MakeIdentifier(scm__rc.d2160[456], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-map-r7 */
  scm__rc.d2160[465] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[56])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[56]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[56]))->debugInfo = scm__rc.d2160[465];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1418]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1418]))[6] = SCM_WORD(scm__rc.d2160[456]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1418]))[13] = SCM_WORD(scm__rc.d2160[464]);
  scm__rc.d2160[466] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[162])),TRUE); /* hash-table-map!-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[643]), scm__rc.d2160[466]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[646]), scm__rc.d2160[22]);
  scm__rc.d2160[467] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[643]), SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[647]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[648]), scm__rc.d2160[467]);
  scm__rc.d2160[468] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[57])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[57]))->debugInfo = scm__rc.d2160[468];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1433]))[9] = SCM_WORD(scm__rc.d2160[300]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[649]), scm__rc.d2160[249]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[652]), scm__rc.d2160[22]);
  scm__rc.d2160[469] = Scm_MakeExtendedPair(scm__rc.d2160[466], SCM_OBJ(&scm__rc.d2169[649]), SCM_OBJ(&scm__rc.d2169[653]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[654]), scm__rc.d2160[469]);
  scm__rc.d2160[470] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[58])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[58]))->name = scm__rc.d2160[466];/* hash-table-map!-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[58]))->debugInfo = scm__rc.d2160[470];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]))[15] = SCM_WORD(scm__rc.d2160[268]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1444]))[25] = SCM_WORD(scm__rc.d2160[460]);
  scm__rc.d2160[471] = Scm_MakeIdentifier(scm__rc.d2160[466], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-map!-r7 */
  scm__rc.d2160[472] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[59])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[59]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[59]))->debugInfo = scm__rc.d2160[472];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1471]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1471]))[6] = SCM_WORD(scm__rc.d2160[466]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1471]))[13] = SCM_WORD(scm__rc.d2160[471]);
  scm__rc.d2160[473] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[163])),TRUE); /* hash-table-map->list-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[657]), scm__rc.d2160[22]);
  scm__rc.d2160[474] = Scm_MakeExtendedPair(scm__rc.d2160[473], SCM_OBJ(&scm__rc.d2169[649]), SCM_OBJ(&scm__rc.d2169[658]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[659]), scm__rc.d2160[474]);
  scm__rc.d2160[475] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[60])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[60]))->name = scm__rc.d2160[473];/* hash-table-map->list-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[60]))->debugInfo = scm__rc.d2160[475];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1486]))[3] = SCM_WORD(scm__rc.d2160[314]);
  scm__rc.d2160[476] = Scm_MakeIdentifier(scm__rc.d2160[473], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-map->list-r7 */
  scm__rc.d2160[477] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[61])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[61]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[61]))->debugInfo = scm__rc.d2160[477];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1491]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1491]))[6] = SCM_WORD(scm__rc.d2160[473]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1491]))[13] = SCM_WORD(scm__rc.d2160[476]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[660]), scm__rc.d2160[249]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[661]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[664]), scm__rc.d2160[22]);
  scm__rc.d2160[478] = Scm_MakeExtendedPair(scm__rc.d2160[461], SCM_OBJ(&scm__rc.d2169[661]), SCM_OBJ(&scm__rc.d2169[665]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[666]), scm__rc.d2160[478]);
  scm__rc.d2160[479] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[62])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[62]))->name = scm__rc.d2160[461];/* hash-table-for-each */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[62]))->debugInfo = scm__rc.d2160[479];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]))[15] = SCM_WORD(scm__rc.d2160[268]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]))[25] = SCM_WORD(scm__rc.d2160[291]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]))[30] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1506]))[36] = SCM_WORD(scm__rc.d2160[322]);
  scm__rc.d2160[480] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[63])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[63]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[63]))->debugInfo = scm__rc.d2160[480];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1556]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1556]))[6] = SCM_WORD(scm__rc.d2160[461]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1556]))[13] = SCM_WORD(scm__rc.d2160[460]);
  scm__rc.d2160[481] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[164])),TRUE); /* hash-table-for-each-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[669]), scm__rc.d2160[22]);
  scm__rc.d2160[482] = Scm_MakeExtendedPair(scm__rc.d2160[481], SCM_OBJ(&scm__rc.d2169[649]), SCM_OBJ(&scm__rc.d2169[670]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[671]), scm__rc.d2160[482]);
  scm__rc.d2160[483] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[64])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[64]))->name = scm__rc.d2160[481];/* hash-table-for-each-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[64]))->debugInfo = scm__rc.d2160[483];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1571]))[3] = SCM_WORD(scm__rc.d2160[460]);
  scm__rc.d2160[484] = Scm_MakeIdentifier(scm__rc.d2160[481], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-for-each-r7 */
  scm__rc.d2160[485] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[65])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[65]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[65]))->debugInfo = scm__rc.d2160[485];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1576]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1576]))[6] = SCM_WORD(scm__rc.d2160[481]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1576]))[13] = SCM_WORD(scm__rc.d2160[484]);
  scm__rc.d2160[486] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[165])),TRUE); /* hash-table-fold-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[672]), scm__rc.d2160[294]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[673]), scm__rc.d2160[293]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[676]), scm__rc.d2160[22]);
  scm__rc.d2160[487] = Scm_MakeExtendedPair(scm__rc.d2160[486], SCM_OBJ(&scm__rc.d2169[673]), SCM_OBJ(&scm__rc.d2169[677]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[678]), scm__rc.d2160[487]);
  scm__rc.d2160[488] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[66])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[66]))->name = scm__rc.d2160[486];/* hash-table-fold-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[66]))->debugInfo = scm__rc.d2160[488];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1591]))[4] = SCM_WORD(scm__rc.d2160[297]);
  scm__rc.d2160[489] = Scm_MakeIdentifier(scm__rc.d2160[486], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-fold-r7 */
  scm__rc.d2160[490] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[67])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[67]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[67]))->debugInfo = scm__rc.d2160[490];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1597]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1597]))[6] = SCM_WORD(scm__rc.d2160[486]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1597]))[13] = SCM_WORD(scm__rc.d2160[489]);
  scm__rc.d2160[491] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[166])),TRUE); /* hash-table-prune!-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[679]), scm__rc.d2160[491]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[682]), scm__rc.d2160[22]);
  scm__rc.d2160[492] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[679]), SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[683]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[684]), scm__rc.d2160[492]);
  scm__rc.d2160[493] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[68])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[68]))->debugInfo = scm__rc.d2160[493];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1612]))[11] = SCM_WORD(scm__rc.d2160[417]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[687]), scm__rc.d2160[22]);
  scm__rc.d2160[494] = Scm_MakeExtendedPair(scm__rc.d2160[491], SCM_OBJ(&scm__rc.d2169[649]), SCM_OBJ(&scm__rc.d2169[688]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[689]), scm__rc.d2160[494]);
  scm__rc.d2160[495] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[69])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[69]))->name = scm__rc.d2160[491];/* hash-table-prune!-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[69]))->debugInfo = scm__rc.d2160[495];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1626]))[4] = SCM_WORD(scm__rc.d2160[460]);
  scm__rc.d2160[496] = Scm_MakeIdentifier(scm__rc.d2160[491], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-prune!-r7 */
  scm__rc.d2160[497] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[70])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[70]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[70]))->debugInfo = scm__rc.d2160[497];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1632]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1632]))[6] = SCM_WORD(scm__rc.d2160[491]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1632]))[13] = SCM_WORD(scm__rc.d2160[496]);
  scm__rc.d2160[498] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[167])),TRUE); /* hash-table-seek */
  scm__rc.d2160[499] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[168])),TRUE); /* pred */
  scm__rc.d2160[500] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[169])),TRUE); /* fail */
  scm__rc.d2160[501] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[170])),TRUE); /* succ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[690]), scm__rc.d2160[501]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[691]), scm__rc.d2160[500]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[692]), scm__rc.d2160[499]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[693]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[696]), scm__rc.d2160[22]);
  scm__rc.d2160[502] = Scm_MakeExtendedPair(scm__rc.d2160[498], SCM_OBJ(&scm__rc.d2169[693]), SCM_OBJ(&scm__rc.d2169[697]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[698]), scm__rc.d2160[502]);
  scm__rc.d2160[503] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[71])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[71]))->name = scm__rc.d2160[498];/* hash-table-seek */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[71]))->debugInfo = scm__rc.d2160[503];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]))[15] = SCM_WORD(scm__rc.d2160[268]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]))[25] = SCM_WORD(scm__rc.d2160[291]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]))[30] = SCM_WORD(scm__rc.d2160[322]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1647]))[36] = SCM_WORD(scm__rc.d2160[322]);
  scm__rc.d2160[504] = Scm_MakeIdentifier(scm__rc.d2160[498], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-seek */
  scm__rc.d2160[505] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[72])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[72]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[72]))->debugInfo = scm__rc.d2160[505];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1709]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1709]))[6] = SCM_WORD(scm__rc.d2160[498]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1709]))[13] = SCM_WORD(scm__rc.d2160[504]);
  scm__rc.d2160[506] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[171])),TRUE); /* hash-table-find */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[699]), scm__rc.d2160[506]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[702]), scm__rc.d2160[22]);
  scm__rc.d2160[507] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[699]), SCM_NIL, SCM_OBJ(&scm__rc.d2169[703]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[704]), scm__rc.d2160[507]);
  scm__rc.d2160[508] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[73])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[73]))->debugInfo = scm__rc.d2160[508];
  scm__rc.d2160[509] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[172])),FALSE); /* G2190 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[705]), scm__rc.d2160[509]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[706]), scm__rc.d2160[506]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[707]), scm__rc.d2160[451]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[710]), scm__rc.d2160[22]);
  scm__rc.d2160[510] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[173])),TRUE); /* unused-args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[711]), scm__rc.d2160[510]);
  scm__rc.d2160[511] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[706]), SCM_OBJ(&scm__rc.d2169[707]), SCM_OBJ(&scm__rc.d2169[713]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[714]), scm__rc.d2160[511]);
  scm__rc.d2160[512] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[74])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[74]))->debugInfo = scm__rc.d2160[512];
  scm__rc.d2160[513] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[174])),TRUE); /* ^ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[718]), scm__rc.d2160[513]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[720]), scm__rc.d2160[388]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[722]), scm__rc.d2160[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[723]), scm__rc.d2160[499]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[724]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[726]), scm__rc.d2160[513]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[728]), scm__rc.d2160[388]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[729]), scm__rc.d2160[499]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[730]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[731]), scm__rc.d2160[498]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[734]), scm__rc.d2160[120]);
  scm__rc.d2160[514] = Scm_MakeExtendedPair(scm__rc.d2160[506], SCM_OBJ(&scm__rc.d2169[724]), SCM_OBJ(&scm__rc.d2169[703]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[735]), scm__rc.d2160[514]);
  scm__rc.d2160[515] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[75])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[75]))->name = scm__rc.d2160[506];/* hash-table-find */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[75]))->debugInfo = scm__rc.d2160[515];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1726]))[28] = SCM_WORD(scm__rc.d2160[141]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1726]))[34] = SCM_WORD(scm__rc.d2160[504]);
  scm__rc.d2160[516] = Scm_MakeIdentifier(scm__rc.d2160[506], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-find */
  scm__rc.d2160[517] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[76])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[76]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[76]))->debugInfo = scm__rc.d2160[517];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1762]))[5] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1762]))[8] = SCM_WORD(scm__rc.d2160[506]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1762]))[15] = SCM_WORD(scm__rc.d2160[516]);
  scm__rc.d2160[518] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[175])),TRUE); /* hash-table-find-r7 */
  scm__rc.d2160[519] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[176])),FALSE); /* G2192 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[736]), scm__rc.d2160[519]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[737]), scm__rc.d2160[518]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[740]), scm__rc.d2160[22]);
  scm__rc.d2160[520] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[737]), SCM_OBJ(&scm__rc.d2169[707]), SCM_OBJ(&scm__rc.d2169[741]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[742]), scm__rc.d2160[520]);
  scm__rc.d2160[521] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[74])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[77]))->debugInfo = scm__rc.d2160[521];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[744]), scm__rc.d2160[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[745]), scm__rc.d2160[499]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[748]), scm__rc.d2160[22]);
  scm__rc.d2160[522] = Scm_MakeExtendedPair(scm__rc.d2160[518], SCM_OBJ(&scm__rc.d2169[745]), SCM_OBJ(&scm__rc.d2169[749]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[750]), scm__rc.d2160[522]);
  scm__rc.d2160[523] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[77])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[78]))->name = scm__rc.d2160[518];/* hash-table-find-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[78]))->debugInfo = scm__rc.d2160[523];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1780]))[5] = SCM_WORD(scm__rc.d2160[504]);
  scm__rc.d2160[524] = Scm_MakeIdentifier(scm__rc.d2160[518], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-find-r7 */
  scm__rc.d2160[525] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[78])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[79]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[79]))->debugInfo = scm__rc.d2160[525];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1787]))[5] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1787]))[8] = SCM_WORD(scm__rc.d2160[518]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1787]))[15] = SCM_WORD(scm__rc.d2160[524]);
  scm__rc.d2160[526] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[177])),TRUE); /* hash-table-count-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[751]), scm__rc.d2160[526]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[752]), scm__rc.d2160[339]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[753]), scm__rc.d2160[338]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[756]), scm__rc.d2160[22]);
  scm__rc.d2160[527] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[751]), SCM_OBJ(&scm__rc.d2169[753]), SCM_OBJ(&scm__rc.d2169[757]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[758]), scm__rc.d2160[527]);
  scm__rc.d2160[528] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[79])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[80]))->debugInfo = scm__rc.d2160[528];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[759]), scm__rc.d2160[499]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[762]), scm__rc.d2160[22]);
  scm__rc.d2160[529] = Scm_MakeExtendedPair(scm__rc.d2160[526], SCM_OBJ(&scm__rc.d2169[759]), SCM_OBJ(&scm__rc.d2169[763]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[764]), scm__rc.d2160[529]);
  scm__rc.d2160[530] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[80])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[81]))->name = scm__rc.d2160[526];/* hash-table-count-r7 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[81]))->debugInfo = scm__rc.d2160[530];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1815]))[6] = SCM_WORD(scm__rc.d2160[297]);
  scm__rc.d2160[531] = Scm_MakeIdentifier(scm__rc.d2160[526], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-count-r7 */
  scm__rc.d2160[532] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[81])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[82]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[82]))->debugInfo = scm__rc.d2160[532];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1823]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1823]))[6] = SCM_WORD(scm__rc.d2160[526]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1823]))[13] = SCM_WORD(scm__rc.d2160[531]);
  scm__rc.d2160[533] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[178])),TRUE); /* hash-table-union! */
  scm__rc.d2160[534] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[179])),TRUE); /* ht1 */
  scm__rc.d2160[535] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[180])),TRUE); /* ht2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[765]), scm__rc.d2160[533]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[768]), scm__rc.d2160[22]);
  scm__rc.d2160[536] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[765]), SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[769]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[770]), scm__rc.d2160[536]);
  scm__rc.d2160[537] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[82])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[83]))->debugInfo = scm__rc.d2160[537];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1838]))[5] = SCM_WORD(scm__rc.d2160[352]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1838]))[13] = SCM_WORD(scm__rc.d2160[300]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[771]), scm__rc.d2160[535]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[772]), scm__rc.d2160[534]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[775]), scm__rc.d2160[22]);
  scm__rc.d2160[538] = Scm_MakeExtendedPair(scm__rc.d2160[533], SCM_OBJ(&scm__rc.d2169[772]), SCM_OBJ(&scm__rc.d2169[776]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[777]), scm__rc.d2160[538]);
  scm__rc.d2160[539] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[83])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[84]))->name = scm__rc.d2160[533];/* hash-table-union! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[84]))->debugInfo = scm__rc.d2160[539];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[15] = SCM_WORD(scm__rc.d2160[534]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[25] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[27] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[36] = SCM_WORD(scm__rc.d2160[535]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[38] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[41] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1853]))[48] = SCM_WORD(scm__rc.d2160[460]);
  scm__rc.d2160[540] = Scm_MakeIdentifier(scm__rc.d2160[533], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-union! */
  scm__rc.d2160[541] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[84])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[85]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[85]))->debugInfo = scm__rc.d2160[541];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1903]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1903]))[6] = SCM_WORD(scm__rc.d2160[533]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1903]))[13] = SCM_WORD(scm__rc.d2160[540]);
  scm__rc.d2160[542] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[181])),TRUE); /* hash-table-intersection! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[778]), scm__rc.d2160[542]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[781]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[782]), scm__rc.d2160[510]);
  scm__rc.d2160[543] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[778]), SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[784]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[785]), scm__rc.d2160[543]);
  scm__rc.d2160[544] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[85])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[86]))->debugInfo = scm__rc.d2160[544];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1918]))[5] = SCM_WORD(scm__rc.d2160[352]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1918]))[12] = SCM_WORD(scm__rc.d2160[417]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[788]), scm__rc.d2160[22]);
  scm__rc.d2160[545] = Scm_MakeExtendedPair(scm__rc.d2160[542], SCM_OBJ(&scm__rc.d2169[772]), SCM_OBJ(&scm__rc.d2169[789]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[790]), scm__rc.d2160[545]);
  scm__rc.d2160[546] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[86])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[87]))->name = scm__rc.d2160[542];/* hash-table-intersection! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[87]))->debugInfo = scm__rc.d2160[546];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[15] = SCM_WORD(scm__rc.d2160[534]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[25] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[27] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[36] = SCM_WORD(scm__rc.d2160[535]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[38] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[41] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1932]))[48] = SCM_WORD(scm__rc.d2160[460]);
  scm__rc.d2160[547] = Scm_MakeIdentifier(scm__rc.d2160[542], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-intersection! */
  scm__rc.d2160[548] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[87])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[88]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[88]))->debugInfo = scm__rc.d2160[548];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1982]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1982]))[6] = SCM_WORD(scm__rc.d2160[542]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1982]))[13] = SCM_WORD(scm__rc.d2160[547]);
  scm__rc.d2160[549] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[182])),TRUE); /* hash-table-difference! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[791]), scm__rc.d2160[549]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[794]), scm__rc.d2160[22]);
  scm__rc.d2160[550] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[791]), SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[795]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[796]), scm__rc.d2160[550]);
  scm__rc.d2160[551] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[88])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[89]))->debugInfo = scm__rc.d2160[551];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1997]))[5] = SCM_WORD(scm__rc.d2160[352]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[1997]))[11] = SCM_WORD(scm__rc.d2160[417]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[799]), scm__rc.d2160[22]);
  scm__rc.d2160[552] = Scm_MakeExtendedPair(scm__rc.d2160[549], SCM_OBJ(&scm__rc.d2169[772]), SCM_OBJ(&scm__rc.d2169[800]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[801]), scm__rc.d2160[552]);
  scm__rc.d2160[553] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[89])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[90]))->name = scm__rc.d2160[549];/* hash-table-difference! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[90]))->debugInfo = scm__rc.d2160[553];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[15] = SCM_WORD(scm__rc.d2160[534]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[25] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[27] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[36] = SCM_WORD(scm__rc.d2160[535]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[38] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[41] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2011]))[48] = SCM_WORD(scm__rc.d2160[460]);
  scm__rc.d2160[554] = Scm_MakeIdentifier(scm__rc.d2160[549], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-difference! */
  scm__rc.d2160[555] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[90])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[91]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[91]))->debugInfo = scm__rc.d2160[555];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2061]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2061]))[6] = SCM_WORD(scm__rc.d2160[549]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2061]))[13] = SCM_WORD(scm__rc.d2160[554]);
  scm__rc.d2160[556] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[183])),TRUE); /* hash-table-xor! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[802]), scm__rc.d2160[556]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[805]), scm__rc.d2160[22]);
  scm__rc.d2160[557] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[802]), SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[806]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[807]), scm__rc.d2160[557]);
  scm__rc.d2160[558] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[91])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[92]))->debugInfo = scm__rc.d2160[558];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2076]))[5] = SCM_WORD(scm__rc.d2160[352]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2076]))[11] = SCM_WORD(scm__rc.d2160[417]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2076]))[17] = SCM_WORD(scm__rc.d2160[300]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[810]), scm__rc.d2160[22]);
  scm__rc.d2160[559] = Scm_MakeExtendedPair(scm__rc.d2160[556], SCM_OBJ(&scm__rc.d2169[772]), SCM_OBJ(&scm__rc.d2169[811]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[812]), scm__rc.d2160[559]);
  scm__rc.d2160[560] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[92])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[93]))->name = scm__rc.d2160[556];/* hash-table-xor! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[93]))->debugInfo = scm__rc.d2160[560];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[4] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[15] = SCM_WORD(scm__rc.d2160[534]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[17] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[25] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[27] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[36] = SCM_WORD(scm__rc.d2160[535]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[38] = SCM_WORD(scm__rc.d2160[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[41] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2095]))[48] = SCM_WORD(scm__rc.d2160[460]);
  scm__rc.d2160[561] = Scm_MakeIdentifier(scm__rc.d2160[556], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-xor! */
  scm__rc.d2160[562] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[93])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[94]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[94]))->debugInfo = scm__rc.d2160[562];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2145]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2145]))[6] = SCM_WORD(scm__rc.d2160[556]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2145]))[13] = SCM_WORD(scm__rc.d2160[561]);
  scm__rc.d2160[563] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[184])),TRUE); /* boolean-hash */
  scm__rc.d2160[564] = Scm_MakeIdentifier(scm__rc.d2160[80], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#<boolean> */
  scm__rc.d2160[565] = Scm_MakeIdentifier(scm__rc.d2160[48], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#default-hash */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[815]), scm__rc.d2160[22]);
  scm__rc.d2160[566] = Scm_MakeExtendedPair(scm__rc.d2160[563], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[816]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[817]), scm__rc.d2160[566]);
  scm__rc.d2160[567] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[94])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[95]))->name = scm__rc.d2160[563];/* boolean-hash */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[95]))->debugInfo = scm__rc.d2160[567];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]))[4] = SCM_WORD(scm__rc.d2160[564]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]))[15] = SCM_WORD(scm__rc.d2160[21]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]))[17] = SCM_WORD(scm__rc.d2160[564]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2160]))[23] = SCM_WORD(scm__rc.d2160[565]);
  scm__rc.d2160[568] = Scm_MakeIdentifier(scm__rc.d2160[563], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#boolean-hash */
  scm__rc.d2160[569] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[95])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[96]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[96]))->debugInfo = scm__rc.d2160[569];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2185]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2185]))[6] = SCM_WORD(scm__rc.d2160[563]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2185]))[13] = SCM_WORD(scm__rc.d2160[568]);
  scm__rc.d2160[570] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[185])),TRUE); /* char-hash */
  scm__rc.d2160[572] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[186])),TRUE); /* <char> */
  scm__rc.d2160[571] = Scm_MakeIdentifier(scm__rc.d2160[572], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#<char> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[820]), scm__rc.d2160[22]);
  scm__rc.d2160[573] = Scm_MakeExtendedPair(scm__rc.d2160[570], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[821]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[822]), scm__rc.d2160[573]);
  scm__rc.d2160[574] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[96])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[97]))->name = scm__rc.d2160[570];/* char-hash */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[97]))->debugInfo = scm__rc.d2160[574];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]))[4] = SCM_WORD(scm__rc.d2160[571]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]))[15] = SCM_WORD(scm__rc.d2160[21]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]))[17] = SCM_WORD(scm__rc.d2160[571]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2200]))[23] = SCM_WORD(scm__rc.d2160[565]);
  scm__rc.d2160[575] = Scm_MakeIdentifier(scm__rc.d2160[570], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#char-hash */
  scm__rc.d2160[576] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[97])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[98]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[98]))->debugInfo = scm__rc.d2160[576];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2225]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2225]))[6] = SCM_WORD(scm__rc.d2160[570]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2225]))[13] = SCM_WORD(scm__rc.d2160[575]);
  scm__rc.d2160[577] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[187])),TRUE); /* char-ci-hash */
  scm__rc.d2160[579] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[188])),TRUE); /* char-foldcase */
  scm__rc.d2160[578] = Scm_MakeIdentifier(scm__rc.d2160[579], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#char-foldcase */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[825]), scm__rc.d2160[22]);
  scm__rc.d2160[580] = Scm_MakeExtendedPair(scm__rc.d2160[577], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[826]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[827]), scm__rc.d2160[580]);
  scm__rc.d2160[581] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[98])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[99]))->name = scm__rc.d2160[577];/* char-ci-hash */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[99]))->debugInfo = scm__rc.d2160[581];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]))[4] = SCM_WORD(scm__rc.d2160[571]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]))[15] = SCM_WORD(scm__rc.d2160[21]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]))[17] = SCM_WORD(scm__rc.d2160[571]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]))[25] = SCM_WORD(scm__rc.d2160[578]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2240]))[27] = SCM_WORD(scm__rc.d2160[565]);
  scm__rc.d2160[582] = Scm_MakeIdentifier(scm__rc.d2160[577], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#char-ci-hash */
  scm__rc.d2160[583] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[99])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[100]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[100]))->debugInfo = scm__rc.d2160[583];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2269]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2269]))[6] = SCM_WORD(scm__rc.d2160[577]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2269]))[13] = SCM_WORD(scm__rc.d2160[582]);
  scm__rc.d2160[584] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[189])),TRUE); /* string-hash */
  scm__rc.d2160[586] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[190])),TRUE); /* <string> */
  scm__rc.d2160[585] = Scm_MakeIdentifier(scm__rc.d2160[586], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#<string> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[830]), scm__rc.d2160[22]);
  scm__rc.d2160[587] = Scm_MakeExtendedPair(scm__rc.d2160[584], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[831]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[832]), scm__rc.d2160[587]);
  scm__rc.d2160[588] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[100])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[101]))->name = scm__rc.d2160[584];/* string-hash */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[101]))->debugInfo = scm__rc.d2160[588];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]))[4] = SCM_WORD(scm__rc.d2160[585]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]))[15] = SCM_WORD(scm__rc.d2160[21]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]))[17] = SCM_WORD(scm__rc.d2160[585]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2284]))[23] = SCM_WORD(scm__rc.d2160[565]);
  scm__rc.d2160[589] = Scm_MakeIdentifier(scm__rc.d2160[584], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#string-hash */
  scm__rc.d2160[590] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[101])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[102]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[102]))->debugInfo = scm__rc.d2160[590];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2309]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2309]))[6] = SCM_WORD(scm__rc.d2160[584]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2309]))[13] = SCM_WORD(scm__rc.d2160[589]);
  scm__rc.d2160[591] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[191])),TRUE); /* symbol-hash */
  scm__rc.d2160[593] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[192])),TRUE); /* <symbol> */
  scm__rc.d2160[592] = Scm_MakeIdentifier(scm__rc.d2160[593], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#<symbol> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[835]), scm__rc.d2160[22]);
  scm__rc.d2160[594] = Scm_MakeExtendedPair(scm__rc.d2160[591], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[836]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[837]), scm__rc.d2160[594]);
  scm__rc.d2160[595] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[102])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[103]))->name = scm__rc.d2160[591];/* symbol-hash */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[103]))->debugInfo = scm__rc.d2160[595];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]))[4] = SCM_WORD(scm__rc.d2160[592]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]))[15] = SCM_WORD(scm__rc.d2160[21]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]))[17] = SCM_WORD(scm__rc.d2160[592]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2324]))[23] = SCM_WORD(scm__rc.d2160[565]);
  scm__rc.d2160[596] = Scm_MakeIdentifier(scm__rc.d2160[591], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#symbol-hash */
  scm__rc.d2160[597] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[103])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[104]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[104]))->debugInfo = scm__rc.d2160[597];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2349]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2349]))[6] = SCM_WORD(scm__rc.d2160[591]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2349]))[13] = SCM_WORD(scm__rc.d2160[596]);
  scm__rc.d2160[598] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[193])),TRUE); /* number-hash */
  scm__rc.d2160[600] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[194])),TRUE); /* <number> */
  scm__rc.d2160[599] = Scm_MakeIdentifier(scm__rc.d2160[600], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#<number> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[840]), scm__rc.d2160[22]);
  scm__rc.d2160[601] = Scm_MakeExtendedPair(scm__rc.d2160[598], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[841]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[842]), scm__rc.d2160[601]);
  scm__rc.d2160[602] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[104])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[105]))->name = scm__rc.d2160[598];/* number-hash */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[105]))->debugInfo = scm__rc.d2160[602];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]))[4] = SCM_WORD(scm__rc.d2160[599]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]))[6] = SCM_WORD(scm__rc.d2160[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]))[15] = SCM_WORD(scm__rc.d2160[21]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]))[17] = SCM_WORD(scm__rc.d2160[599]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]))[20] = SCM_WORD(scm__rc.d2160[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2364]))[23] = SCM_WORD(scm__rc.d2160[565]);
  scm__rc.d2160[603] = Scm_MakeIdentifier(scm__rc.d2160[598], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#number-hash */
  scm__rc.d2160[604] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[105])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[106]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[106]))->debugInfo = scm__rc.d2160[604];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2389]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2389]))[6] = SCM_WORD(scm__rc.d2160[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2389]))[13] = SCM_WORD(scm__rc.d2160[603]);
  scm__rc.d2160[605] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[195])),TRUE); /* hash-bound */
  scm__rc.d2160[607] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[196])),TRUE); /* greatest-fixnum */
  scm__rc.d2160[606] = Scm_MakeIdentifier(scm__rc.d2160[607], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#greatest-fixnum */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[845]), scm__rc.d2160[22]);
  scm__rc.d2160[608] = Scm_MakeExtendedPair(scm__rc.d2160[605], SCM_NIL, SCM_OBJ(&scm__rc.d2169[846]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[847]), scm__rc.d2160[608]);
  scm__rc.d2160[609] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[106])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[107]))->name = scm__rc.d2160[605];/* hash-bound */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[107]))->debugInfo = scm__rc.d2160[609];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2404]))[1] = SCM_WORD(scm__rc.d2160[606]);
  scm__rc.d2160[610] = Scm_MakeIdentifier(scm__rc.d2160[605], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-bound */
  scm__rc.d2160[611] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[107])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[108]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[108]))->debugInfo = scm__rc.d2160[611];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2407]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2407]))[6] = SCM_WORD(scm__rc.d2160[605]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2407]))[13] = SCM_WORD(scm__rc.d2160[610]);
  scm__rc.d2160[612] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[197])),TRUE); /* hash-table-compare-as-sets */
  scm__rc.d2160[613] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[198])),FALSE); /* G2198 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[848]), scm__rc.d2160[613]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[849]), scm__rc.d2160[612]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[852]), scm__rc.d2160[22]);
  scm__rc.d2160[614] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[849]), SCM_NIL, SCM_OBJ(&scm__rc.d2169[853]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[854]), scm__rc.d2160[614]);
  scm__rc.d2160[615] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[108])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[109]))->debugInfo = scm__rc.d2160[615];
  scm__rc.d2160[616] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[199])),FALSE); /* G2197 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[855]), scm__rc.d2160[616]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[856]), scm__rc.d2160[612]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[859]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[860]), scm__rc.d2160[510]);
  scm__rc.d2160[617] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[856]), SCM_OBJ(&scm__rc.d2169[707]), SCM_OBJ(&scm__rc.d2169[862]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[863]), scm__rc.d2160[617]);
  scm__rc.d2160[618] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[109])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[110]))->debugInfo = scm__rc.d2160[618];
  scm__rc.d2160[619] = Scm_MakeIdentifier(scm__rc.d2160[89], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#equal? */
  scm__rc.d2160[620] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[200])),TRUE); /* h1 */
  scm__rc.d2160[621] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[201])),TRUE); /* h2 */
  scm__rc.d2160[622] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[202])),TRUE); /* value=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[866]), scm__rc.d2160[622]);
  scm__rc.d2160[623] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[203])),TRUE); /* undefined */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[867]), scm__rc.d2160[623]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[869]), scm__rc.d2160[208]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[872]), scm__rc.d2160[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[873]), scm__rc.d2160[621]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[874]), scm__rc.d2160[620]);
  scm__rc.d2160[624] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[204])),TRUE); /* define */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[876]), scm__rc.d2160[313]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[878]), scm__rc.d2160[321]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[879]), scm__rc.d2160[624]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[880]), scm__rc.d2160[500]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[881]), scm__rc.d2160[392]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[882]), scm__rc.d2160[621]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[883]), scm__rc.d2160[620]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[885]), scm__rc.d2160[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[888]), scm__rc.d2160[391]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[891]), scm__rc.d2160[624]);
  scm__rc.d2160[625] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[206])),TRUE); /* subset? */
  scm__rc.d2160[626] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[207])),TRUE); /* smaller */
  scm__rc.d2160[627] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[208])),TRUE); /* larger */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[892]), scm__rc.d2160[627]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[893]), scm__rc.d2160[626]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[894]), scm__rc.d2160[625]);
  scm__rc.d2160[628] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[209])),TRUE); /* w */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[895]), scm__rc.d2160[627]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[896]), scm__rc.d2160[206]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[897]), scm__rc.d2160[628]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[898]), scm__rc.d2160[321]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[899]), scm__rc.d2160[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[900]), scm__rc.d2160[339]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[901]), scm__rc.d2160[622]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[903]), scm__rc.d2160[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[906]), scm__rc.d2160[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[909]), scm__rc.d2160[628]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[910]), scm__rc.d2160[390]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[913]), scm__rc.d2160[513]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[916]), scm__rc.d2160[513]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[918]), scm__rc.d2160[513]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[922]), scm__rc.d2160[626]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[923]), scm__rc.d2160[498]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[926]), scm__rc.d2160[624]);
  scm__rc.d2160[629] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[210])),TRUE); /* c1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[927]), scm__rc.d2160[620]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[928]), scm__rc.d2160[180]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[930]), scm__rc.d2160[629]);
  scm__rc.d2160[630] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[211])),TRUE); /* c2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[931]), scm__rc.d2160[180]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[933]), scm__rc.d2160[630]);
  scm__rc.d2160[631] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[212])),TRUE); /* and */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[936]), scm__rc.d2160[630]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[937]), scm__rc.d2160[629]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[938]), scm__rc.d2160[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[940]), scm__rc.d2160[630]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[941]), scm__rc.d2160[629]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[942]), scm__rc.d2160[631]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[943]), scm__rc.d2160[629]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[945]), scm__rc.d2160[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[947]), scm__rc.d2160[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[951]), scm__rc.d2160[127]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[953]), scm__rc.d2160[124]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[957]), scm__rc.d2160[128]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[960]), scm__rc.d2160[449]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[961]), scm__rc.d2160[91]);
  scm__rc.d2160[632] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[215])),TRUE); /* n1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[962]), scm__rc.d2160[187]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[964]), scm__rc.d2160[632]);
  scm__rc.d2160[633] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[216])),TRUE); /* n2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[965]), scm__rc.d2160[187]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[967]), scm__rc.d2160[633]);
  scm__rc.d2160[634] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[217])),TRUE); /* = */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[970]), scm__rc.d2160[633]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[971]), scm__rc.d2160[632]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[972]), scm__rc.d2160[634]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[973]), scm__rc.d2160[625]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[977]), scm__rc.d2160[391]);
  scm__rc.d2160[635] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[218])),TRUE); /* < */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[980]), scm__rc.d2160[635]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[983]), scm__rc.d2160[391]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[986]), scm__rc.d2160[621]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[987]), scm__rc.d2160[625]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[990]), scm__rc.d2160[391]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[992]), scm__rc.d2160[124]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[996]), scm__rc.d2160[128]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[999]), scm__rc.d2160[449]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1003]), scm__rc.d2160[391]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1010]), scm__rc.d2160[120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1011]), scm__rc.d2160[625]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1012]), scm__rc.d2160[612]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1015]), scm__rc.d2160[22]);
  scm__rc.d2160[636] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[1012]), SCM_OBJ(&scm__rc.d2169[413]), SCM_OBJ(&scm__rc.d2169[1016]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1017]), scm__rc.d2160[636]);
  scm__rc.d2160[637] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[110])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[111]))->debugInfo = scm__rc.d2160[637];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2425]))[6] = SCM_WORD(scm__rc.d2160[393]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1018]), scm__rc.d2160[625]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1019]), scm__rc.d2160[612]);
  scm__rc.d2160[638] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[111])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[112]))->name = scm__rc.d2160[625];/* (hash-table-compare-as-sets subset?) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[112]))->debugInfo = scm__rc.d2160[638];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2446]))[7] = SCM_WORD(scm__rc.d2160[504]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1026]), scm__rc.d2160[22]);
  scm__rc.d2160[639] = Scm_MakeExtendedPair(scm__rc.d2160[612], SCM_OBJ(&scm__rc.d2169[874]), SCM_OBJ(&scm__rc.d2169[1027]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1028]), scm__rc.d2160[639]);
  scm__rc.d2160[640] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[112])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[113]))->name = scm__rc.d2160[612];/* hash-table-compare-as-sets */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[113]))->debugInfo = scm__rc.d2160[640];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[4] = SCM_WORD(scm__rc.d2160[619]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[45] = SCM_WORD(scm__rc.d2160[141]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[56] = SCM_WORD(scm__rc.d2160[185]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[61] = SCM_WORD(scm__rc.d2160[185]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[74] = SCM_WORD(scm__rc.d2160[619]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[90] = SCM_WORD(scm__rc.d2160[144]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[107] = SCM_WORD(scm__rc.d2160[144]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[127] = SCM_WORD(scm__rc.d2160[346]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[132] = SCM_WORD(scm__rc.d2160[346]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[151] = SCM_WORD(scm__rc.d2160[394]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[159] = SCM_WORD(scm__rc.d2160[144]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[179] = SCM_WORD(scm__rc.d2160[394]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[187] = SCM_WORD(scm__rc.d2160[144]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[204] = SCM_WORD(scm__rc.d2160[394]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2455]))[212] = SCM_WORD(scm__rc.d2160[144]);
  scm__rc.d2160[641] = Scm_MakeIdentifier(scm__rc.d2160[612], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table-compare-as-sets */
  scm__rc.d2160[642] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[113])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[114]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[114]))->debugInfo = scm__rc.d2160[642];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2670]))[5] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2670]))[8] = SCM_WORD(scm__rc.d2160[612]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2670]))[15] = SCM_WORD(scm__rc.d2160[641]);
  scm__rc.d2160[643] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[219])),TRUE); /* hash-table=? */
  scm__rc.d2160[645] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[220])),TRUE); /* =? */
  scm__rc.d2160[644] = Scm_MakeIdentifier(scm__rc.d2160[645], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#=? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1029]), scm__rc.d2160[643]);
  scm__rc.d2160[646] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[221])),FALSE); /* G2199 */
  scm__rc.d2160[647] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[222])),FALSE); /* G2200 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1030]), scm__rc.d2160[647]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1031]), scm__rc.d2160[646]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1034]), scm__rc.d2160[22]);
  scm__rc.d2160[648] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2169[1029]), SCM_OBJ(&scm__rc.d2169[1031]), SCM_OBJ(&scm__rc.d2169[1035]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1036]), scm__rc.d2160[648]);
  scm__rc.d2160[649] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[114])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[115]))->debugInfo = scm__rc.d2160[649];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2687]))[4] = SCM_WORD(scm__rc.d2160[644]);
  scm__rc.d2160[650] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[223])),TRUE); /* value-cmpr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1037]), scm__rc.d2160[650]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1040]), scm__rc.d2160[22]);
  scm__rc.d2160[651] = Scm_MakeExtendedPair(scm__rc.d2160[643], SCM_OBJ(&scm__rc.d2169[1037]), SCM_OBJ(&scm__rc.d2169[1041]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1042]), scm__rc.d2160[651]);
  scm__rc.d2160[652] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[115])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[116]))->name = scm__rc.d2160[643];/* hash-table=? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[116]))->debugInfo = scm__rc.d2160[652];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]))[9] = SCM_WORD(scm__rc.d2160[346]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]))[14] = SCM_WORD(scm__rc.d2160[346]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]))[23] = SCM_WORD(scm__rc.d2160[185]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]))[28] = SCM_WORD(scm__rc.d2160[185]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]))[30] = SCM_WORD(scm__rc.d2160[619]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2693]))[41] = SCM_WORD(scm__rc.d2160[641]);
  scm__rc.d2160[653] = Scm_MakeIdentifier(scm__rc.d2160[643], SCM_MODULE(scm__rc.d2160[73]), SCM_NIL); /* gauche#hash-table=? */
  scm__rc.d2160[654] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2164[116])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[117]))->name = scm__rc.d2160[6];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2163[117]))->debugInfo = scm__rc.d2160[654];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2740]))[3] = SCM_WORD(scm__rc.d2160[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2740]))[6] = SCM_WORD(scm__rc.d2160[643]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2162[2740]))[13] = SCM_WORD(scm__rc.d2160[653]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2160[655] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[224])),TRUE); /* %make-tree-map */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1045]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1046]), scm__rc.d2160[655]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1047]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1048]), scm__rc.d2160[9]);
  scm__rc.d2160[656] = Scm_MakeExtendedPair(scm__rc.d2160[655], SCM_OBJ(&scm__rc.d2169[109]), SCM_OBJ(&scm__rc.d2169[1050]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[657]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[657]))[4] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[657]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[657]))[6] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("%make-tree-map")), SCM_OBJ(&libhash_25make_tree_map__STUB), 0);
  libhash_25make_tree_map__STUB.common.info = scm__rc.d2160[656];
  libhash_25make_tree_map__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[657]);
  scm__rc.d2160[664] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[225])),TRUE); /* tree-map-comparator */
  scm__rc.d2160[665] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[226])),TRUE); /* tm */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1051]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1054]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1055]), scm__rc.d2160[664]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1056]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1057]), scm__rc.d2160[9]);
  scm__rc.d2160[666] = Scm_MakeExtendedPair(scm__rc.d2160[664], SCM_OBJ(&scm__rc.d2169[1051]), SCM_OBJ(&scm__rc.d2169[1059]));
  scm__rc.d2160[667] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[227])),TRUE); /* <tree-map> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[668]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[668]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[668]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[668]))[6] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-comparator")), SCM_OBJ(&libhashtree_map_comparator__STUB), 0);
  libhashtree_map_comparator__STUB.common.info = scm__rc.d2160[666];
  libhashtree_map_comparator__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[668]);
  scm__rc.d2160[675] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[228])),TRUE); /* tree-map-copy */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1062]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1063]), scm__rc.d2160[675]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1064]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1065]), scm__rc.d2160[9]);
  scm__rc.d2160[676] = Scm_MakeExtendedPair(scm__rc.d2160[675], SCM_OBJ(&scm__rc.d2169[1051]), SCM_OBJ(&scm__rc.d2169[1067]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-copy")), SCM_OBJ(&libhashtree_map_copy__STUB), 0);
  libhashtree_map_copy__STUB.common.info = scm__rc.d2160[676];
  libhashtree_map_copy__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[668]);
  scm__rc.d2160[677] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[229])),TRUE); /* tree-map? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1070]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1071]), scm__rc.d2160[677]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1072]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1073]), scm__rc.d2160[9]);
  scm__rc.d2160[678] = Scm_MakeExtendedPair(scm__rc.d2160[677], SCM_OBJ(&scm__rc.d2169[5]), SCM_OBJ(&scm__rc.d2169[1075]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map?")), SCM_OBJ(&libhashtree_mapP__STUB), 0);
  libhashtree_mapP__STUB.common.info = scm__rc.d2160[678];
  libhashtree_mapP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[81]);
  scm__rc.d2160[679] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[230])),TRUE); /* tree-map-get */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1076]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1079]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1080]), scm__rc.d2160[679]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1081]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1082]), scm__rc.d2160[9]);
  scm__rc.d2160[680] = Scm_MakeExtendedPair(scm__rc.d2160[679], SCM_OBJ(&scm__rc.d2169[1076]), SCM_OBJ(&scm__rc.d2169[1084]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[681]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[681]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[681]))[5] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[681]))[6] = scm__rc.d2160[210];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[681]))[7] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[681]))[8] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-get")), SCM_OBJ(&libhashtree_map_get__STUB), 0);
  libhashtree_map_get__STUB.common.info = scm__rc.d2160[680];
  libhashtree_map_get__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  scm__rc.d2160[690] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[231])),TRUE); /* tree-map-put! */
  scm__rc.d2160[691] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[232])),TRUE); /* val */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1085]), scm__rc.d2160[691]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1086]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1087]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1090]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1091]), scm__rc.d2160[690]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1092]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1093]), scm__rc.d2160[9]);
  scm__rc.d2160[692] = Scm_MakeExtendedPair(scm__rc.d2160[690], SCM_OBJ(&scm__rc.d2169[1087]), SCM_OBJ(&scm__rc.d2169[1095]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[693]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[693]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[693]))[5] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[693]))[6] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[693]))[7] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[693]))[8] = scm__rc.d2160[198];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-put!")), SCM_OBJ(&libhashtree_map_putX__STUB), 0);
  libhashtree_map_putX__STUB.common.info = scm__rc.d2160[692];
  libhashtree_map_putX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[693]);
  scm__rc.d2160[702] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[233])),TRUE); /* tree-map-adjoin! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1098]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1099]), scm__rc.d2160[702]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1100]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1101]), scm__rc.d2160[9]);
  scm__rc.d2160[703] = Scm_MakeExtendedPair(scm__rc.d2160[702], SCM_OBJ(&scm__rc.d2169[1087]), SCM_OBJ(&scm__rc.d2169[1103]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-adjoin!")), SCM_OBJ(&libhashtree_map_adjoinX__STUB), 0);
  libhashtree_map_adjoinX__STUB.common.info = scm__rc.d2160[703];
  libhashtree_map_adjoinX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[693]);
  scm__rc.d2160[704] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[234])),TRUE); /* tree-map-replace! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1106]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1107]), scm__rc.d2160[704]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1108]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1109]), scm__rc.d2160[9]);
  scm__rc.d2160[705] = Scm_MakeExtendedPair(scm__rc.d2160[704], SCM_OBJ(&scm__rc.d2169[1087]), SCM_OBJ(&scm__rc.d2169[1111]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-replace!")), SCM_OBJ(&libhashtree_map_replaceX__STUB), 0);
  libhashtree_map_replaceX__STUB.common.info = scm__rc.d2160[705];
  libhashtree_map_replaceX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[693]);
  scm__rc.d2160[706] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[235])),TRUE); /* tree-map-delete! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1112]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1115]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1116]), scm__rc.d2160[706]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1117]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1118]), scm__rc.d2160[9]);
  scm__rc.d2160[707] = Scm_MakeExtendedPair(scm__rc.d2160[706], SCM_OBJ(&scm__rc.d2169[1112]), SCM_OBJ(&scm__rc.d2169[1120]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[708]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[708]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[708]))[5] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[708]))[6] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[708]))[7] = scm__rc.d2160[80];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-delete!")), SCM_OBJ(&libhashtree_map_deleteX__STUB), 0);
  libhashtree_map_deleteX__STUB.common.info = scm__rc.d2160[707];
  libhashtree_map_deleteX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[708]);
  scm__rc.d2160[716] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[236])),TRUE); /* tree-map-update! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1121]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1124]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1125]), scm__rc.d2160[716]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1126]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1127]), scm__rc.d2160[9]);
  scm__rc.d2160[717] = Scm_MakeExtendedPair(scm__rc.d2160[716], SCM_OBJ(&scm__rc.d2169[1121]), SCM_OBJ(&scm__rc.d2169[1129]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[718]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[718]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[718]))[5] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[718]))[6] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[718]))[7] = scm__rc.d2160[210];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[718]))[8] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[718]))[9] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-update!")), SCM_OBJ(&libhashtree_map_updateX__STUB), 0);
  libhashtree_map_updateX__STUB.common.info = scm__rc.d2160[717];
  libhashtree_map_updateX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[718]);
  scm__rc.d2160[728] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[237])),TRUE); /* tree-map-push! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1130]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1133]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1134]), scm__rc.d2160[728]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1135]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1136]), scm__rc.d2160[9]);
  scm__rc.d2160[729] = Scm_MakeExtendedPair(scm__rc.d2160[728], SCM_OBJ(&scm__rc.d2169[1130]), SCM_OBJ(&scm__rc.d2169[1138]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-push!")), SCM_OBJ(&libhashtree_map_pushX__STUB), 0);
  libhashtree_map_pushX__STUB.common.info = scm__rc.d2160[729];
  libhashtree_map_pushX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[693]);
  scm__rc.d2160[730] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[238])),TRUE); /* tree-map-pop! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1141]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1142]), scm__rc.d2160[730]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1143]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1144]), scm__rc.d2160[9]);
  scm__rc.d2160[731] = Scm_MakeExtendedPair(scm__rc.d2160[730], SCM_OBJ(&scm__rc.d2169[1076]), SCM_OBJ(&scm__rc.d2169[1146]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-pop!")), SCM_OBJ(&libhashtree_map_popX__STUB), 0);
  libhashtree_map_popX__STUB.common.info = scm__rc.d2160[731];
  libhashtree_map_popX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  scm__rc.d2160[732] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[239])),TRUE); /* tree-map-exists? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1149]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1150]), scm__rc.d2160[732]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1151]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1152]), scm__rc.d2160[9]);
  scm__rc.d2160[733] = Scm_MakeExtendedPair(scm__rc.d2160[732], SCM_OBJ(&scm__rc.d2169[1112]), SCM_OBJ(&scm__rc.d2169[1154]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-exists?")), SCM_OBJ(&libhashtree_map_existsP__STUB), 0);
  libhashtree_map_existsP__STUB.common.info = scm__rc.d2160[733];
  libhashtree_map_existsP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[708]);
  scm__rc.d2160[734] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[240])),TRUE); /* tree-map-num-entries */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1157]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1158]), scm__rc.d2160[734]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1159]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1160]), scm__rc.d2160[9]);
  scm__rc.d2160[735] = Scm_MakeExtendedPair(scm__rc.d2160[734], SCM_OBJ(&scm__rc.d2169[1051]), SCM_OBJ(&scm__rc.d2169[1162]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[736]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[736]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[736]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[736]))[6] = scm__rc.d2160[96];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-num-entries")), SCM_OBJ(&libhashtree_map_num_entries__STUB), 0);
  libhashtree_map_num_entries__STUB.common.info = scm__rc.d2160[735];
  libhashtree_map_num_entries__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[736]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2160[743] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[241])),TRUE); /* %tree-map-bound */
  scm__rc.d2160[744] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[242])),TRUE); /* min */
  scm__rc.d2160[745] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[243])),TRUE); /* pop */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1163]), scm__rc.d2160[745]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1164]), scm__rc.d2160[744]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1165]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1168]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1169]), scm__rc.d2160[743]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1170]), scm__rc.d2160[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1171]), scm__rc.d2160[9]);
  scm__rc.d2160[746] = Scm_MakeExtendedPair(scm__rc.d2160[743], SCM_OBJ(&scm__rc.d2169[1165]), SCM_OBJ(&scm__rc.d2169[1173]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[747]))[3] = scm__rc.d2160[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[747]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[747]))[5] = scm__rc.d2160[80];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[747]))[6] = scm__rc.d2160[80];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[747]))[7] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[747]))[8] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%tree-map-bound")), SCM_OBJ(&libhash_25tree_map_bound__STUB), 0);
  libhash_25tree_map_bound__STUB.common.info = scm__rc.d2160[746];
  libhash_25tree_map_bound__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[747]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2160[756] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[244])),TRUE); /* %tree-map-iter */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1176]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1177]), scm__rc.d2160[756]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1178]), scm__rc.d2160[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1179]), scm__rc.d2160[9]);
  scm__rc.d2160[757] = Scm_MakeExtendedPair(scm__rc.d2160[756], SCM_OBJ(&scm__rc.d2169[1051]), SCM_OBJ(&scm__rc.d2169[1181]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[758]))[3] = scm__rc.d2160[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[758]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[758]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[758]))[6] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%tree-map-iter")), SCM_OBJ(&libhash_25tree_map_iter__STUB), 0);
  libhash_25tree_map_iter__STUB.common.info = scm__rc.d2160[757];
  libhash_25tree_map_iter__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[758]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2160[765] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[246])),TRUE); /* %tree-map-check-consistency */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1184]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1185]), scm__rc.d2160[765]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1186]), scm__rc.d2160[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1187]), scm__rc.d2160[9]);
  scm__rc.d2160[766] = Scm_MakeExtendedPair(scm__rc.d2160[765], SCM_OBJ(&scm__rc.d2169[1051]), SCM_OBJ(&scm__rc.d2169[1189]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%tree-map-check-consistency")), SCM_OBJ(&libhash_25tree_map_check_consistency__STUB), 0);
  libhash_25tree_map_check_consistency__STUB.common.info = scm__rc.d2160[766];
  libhash_25tree_map_check_consistency__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[758]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2160[767] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[247])),TRUE); /* %tree-map-dump */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1192]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1193]), scm__rc.d2160[767]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1194]), scm__rc.d2160[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1195]), scm__rc.d2160[9]);
  scm__rc.d2160[768] = Scm_MakeExtendedPair(scm__rc.d2160[767], SCM_OBJ(&scm__rc.d2169[1051]), SCM_OBJ(&scm__rc.d2169[1197]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[769]))[3] = scm__rc.d2160[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[769]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[769]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[769]))[6] = scm__rc.d2160[198];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%tree-map-dump")), SCM_OBJ(&libhash_25tree_map_dump__STUB), 0);
  libhash_25tree_map_dump__STUB.common.info = scm__rc.d2160[768];
  libhash_25tree_map_dump__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[769]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2160[776] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[248])),TRUE); /* tree-map-clear! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1200]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1201]), scm__rc.d2160[776]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1202]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1203]), scm__rc.d2160[9]);
  scm__rc.d2160[777] = Scm_MakeExtendedPair(scm__rc.d2160[776], SCM_OBJ(&scm__rc.d2169[1051]), SCM_OBJ(&scm__rc.d2169[1205]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[778]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[778]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[778]))[5] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[778]))[6] = scm__rc.d2160[198];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-clear!")), SCM_OBJ(&libhashtree_map_clearX__STUB), 0);
  libhashtree_map_clearX__STUB.common.info = scm__rc.d2160[777];
  libhashtree_map_clearX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[778]);
  scm__rc.d2160[785] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[249])),TRUE); /* tree-map-floor */
  scm__rc.d2160[786] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[250])),TRUE); /* key-fb */
  scm__rc.d2160[787] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[251])),TRUE); /* val-fb */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1206]), scm__rc.d2160[787]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1207]), scm__rc.d2160[786]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1208]), scm__rc.d2160[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1209]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1210]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1213]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1214]), scm__rc.d2160[785]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1215]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1216]), scm__rc.d2160[9]);
  scm__rc.d2160[788] = Scm_MakeExtendedPair(scm__rc.d2160[785], SCM_OBJ(&scm__rc.d2169[1210]), SCM_OBJ(&scm__rc.d2169[1218]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[789]))[3] = scm__rc.d2160[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[789]))[4] = scm__rc.d2160[667];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[789]))[5] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[789]))[6] = scm__rc.d2160[210];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[789]))[7] = scm__rc.d2160[12];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[789]))[8] = scm__rc.d2160[24];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[789]))[9] = scm__rc.d2160[24];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-floor")), SCM_OBJ(&libhashtree_map_floor__STUB), 0);
  libhashtree_map_floor__STUB.common.info = scm__rc.d2160[788];
  libhashtree_map_floor__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[789]);
  scm__rc.d2160[799] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[252])),TRUE); /* tree-map-floor-key */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1219]), scm__rc.d2160[786]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1220]), scm__rc.d2160[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1221]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1222]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1225]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1226]), scm__rc.d2160[799]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1227]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1228]), scm__rc.d2160[9]);
  scm__rc.d2160[800] = Scm_MakeExtendedPair(scm__rc.d2160[799], SCM_OBJ(&scm__rc.d2169[1222]), SCM_OBJ(&scm__rc.d2169[1230]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-floor-key")), SCM_OBJ(&libhashtree_map_floor_key__STUB), 0);
  libhashtree_map_floor_key__STUB.common.info = scm__rc.d2160[800];
  libhashtree_map_floor_key__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  scm__rc.d2160[801] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[253])),TRUE); /* tree-map-floor-value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1231]), scm__rc.d2160[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1232]), scm__rc.d2160[207]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1233]), scm__rc.d2160[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1236]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1237]), scm__rc.d2160[801]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1238]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1239]), scm__rc.d2160[9]);
  scm__rc.d2160[802] = Scm_MakeExtendedPair(scm__rc.d2160[801], SCM_OBJ(&scm__rc.d2169[1233]), SCM_OBJ(&scm__rc.d2169[1241]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-floor-value")), SCM_OBJ(&libhashtree_map_floor_value__STUB), 0);
  libhashtree_map_floor_value__STUB.common.info = scm__rc.d2160[802];
  libhashtree_map_floor_value__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  scm__rc.d2160[803] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[254])),TRUE); /* tree-map-ceiling */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1244]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1245]), scm__rc.d2160[803]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1246]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1247]), scm__rc.d2160[9]);
  scm__rc.d2160[804] = Scm_MakeExtendedPair(scm__rc.d2160[803], SCM_OBJ(&scm__rc.d2169[1210]), SCM_OBJ(&scm__rc.d2169[1249]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-ceiling")), SCM_OBJ(&libhashtree_map_ceiling__STUB), 0);
  libhashtree_map_ceiling__STUB.common.info = scm__rc.d2160[804];
  libhashtree_map_ceiling__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[789]);
  scm__rc.d2160[805] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[255])),TRUE); /* tree-map-ceiling-key */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1252]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1253]), scm__rc.d2160[805]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1254]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1255]), scm__rc.d2160[9]);
  scm__rc.d2160[806] = Scm_MakeExtendedPair(scm__rc.d2160[805], SCM_OBJ(&scm__rc.d2169[1222]), SCM_OBJ(&scm__rc.d2169[1257]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-ceiling-key")), SCM_OBJ(&libhashtree_map_ceiling_key__STUB), 0);
  libhashtree_map_ceiling_key__STUB.common.info = scm__rc.d2160[806];
  libhashtree_map_ceiling_key__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  scm__rc.d2160[807] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[256])),TRUE); /* tree-map-ceiling-value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1260]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1261]), scm__rc.d2160[807]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1262]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1263]), scm__rc.d2160[9]);
  scm__rc.d2160[808] = Scm_MakeExtendedPair(scm__rc.d2160[807], SCM_OBJ(&scm__rc.d2169[1233]), SCM_OBJ(&scm__rc.d2169[1265]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-ceiling-value")), SCM_OBJ(&libhashtree_map_ceiling_value__STUB), 0);
  libhashtree_map_ceiling_value__STUB.common.info = scm__rc.d2160[808];
  libhashtree_map_ceiling_value__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  scm__rc.d2160[809] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[257])),TRUE); /* tree-map-predecessor */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1268]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1269]), scm__rc.d2160[809]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1270]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1271]), scm__rc.d2160[9]);
  scm__rc.d2160[810] = Scm_MakeExtendedPair(scm__rc.d2160[809], SCM_OBJ(&scm__rc.d2169[1210]), SCM_OBJ(&scm__rc.d2169[1273]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-predecessor")), SCM_OBJ(&libhashtree_map_predecessor__STUB), 0);
  libhashtree_map_predecessor__STUB.common.info = scm__rc.d2160[810];
  libhashtree_map_predecessor__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[789]);
  scm__rc.d2160[811] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[258])),TRUE); /* tree-map-predecessor-key */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1276]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1277]), scm__rc.d2160[811]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1278]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1279]), scm__rc.d2160[9]);
  scm__rc.d2160[812] = Scm_MakeExtendedPair(scm__rc.d2160[811], SCM_OBJ(&scm__rc.d2169[1222]), SCM_OBJ(&scm__rc.d2169[1281]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-predecessor-key")), SCM_OBJ(&libhashtree_map_predecessor_key__STUB), 0);
  libhashtree_map_predecessor_key__STUB.common.info = scm__rc.d2160[812];
  libhashtree_map_predecessor_key__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  scm__rc.d2160[813] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[259])),TRUE); /* tree-map-predecessor-value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1284]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1285]), scm__rc.d2160[813]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1286]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1287]), scm__rc.d2160[9]);
  scm__rc.d2160[814] = Scm_MakeExtendedPair(scm__rc.d2160[813], SCM_OBJ(&scm__rc.d2169[1233]), SCM_OBJ(&scm__rc.d2169[1289]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-predecessor-value")), SCM_OBJ(&libhashtree_map_predecessor_value__STUB), 0);
  libhashtree_map_predecessor_value__STUB.common.info = scm__rc.d2160[814];
  libhashtree_map_predecessor_value__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  scm__rc.d2160[815] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[260])),TRUE); /* tree-map-successor */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1292]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1293]), scm__rc.d2160[815]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1294]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1295]), scm__rc.d2160[9]);
  scm__rc.d2160[816] = Scm_MakeExtendedPair(scm__rc.d2160[815], SCM_OBJ(&scm__rc.d2169[1210]), SCM_OBJ(&scm__rc.d2169[1297]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-successor")), SCM_OBJ(&libhashtree_map_successor__STUB), 0);
  libhashtree_map_successor__STUB.common.info = scm__rc.d2160[816];
  libhashtree_map_successor__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[789]);
  scm__rc.d2160[817] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[261])),TRUE); /* tree-map-successor-key */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1300]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1301]), scm__rc.d2160[817]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1302]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1303]), scm__rc.d2160[9]);
  scm__rc.d2160[818] = Scm_MakeExtendedPair(scm__rc.d2160[817], SCM_OBJ(&scm__rc.d2169[1222]), SCM_OBJ(&scm__rc.d2169[1305]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-successor-key")), SCM_OBJ(&libhashtree_map_successor_key__STUB), 0);
  libhashtree_map_successor_key__STUB.common.info = scm__rc.d2160[818];
  libhashtree_map_successor_key__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  scm__rc.d2160[819] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[262])),TRUE); /* tree-map-successor-value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1308]), scm__rc.d2160[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1309]), scm__rc.d2160[819]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1310]), scm__rc.d2160[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2169[1311]), scm__rc.d2160[9]);
  scm__rc.d2160[820] = Scm_MakeExtendedPair(scm__rc.d2160[819], SCM_OBJ(&scm__rc.d2169[1233]), SCM_OBJ(&scm__rc.d2169[1313]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("tree-map-successor-value")), SCM_OBJ(&libhashtree_map_successor_value__STUB), 0);
  libhashtree_map_successor_value__STUB.common.info = scm__rc.d2160[820];
  libhashtree_map_successor_value__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[681]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2160[1031] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[263])),FALSE); /* G2171 */
  scm__rc.d2160[1032] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[264])),FALSE); /* G2173 */
  scm__rc.d2160[1033] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[265])),FALSE); /* G2172 */
  scm__rc.d2160[1034] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[266])),FALSE); /* rest2170 */
  scm__rc.d2160[1035] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[267])),TRUE); /* tmp */
  scm__rc.d2160[1036] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[268])),TRUE); /* tb */
  scm__rc.d2160[1037] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[269])),TRUE); /* ^x */
  scm__rc.d2160[1038] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[270])),TRUE); /* rlet1 */
  scm__rc.d2160[1039] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[271])),TRUE); /* do */
  scm__rc.d2160[1040] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[272])),TRUE); /* e */
  scm__rc.d2160[1041] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[273])),TRUE); /* doplist */
  scm__rc.d2160[1042] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[274])),TRUE); /* zero? */
  scm__rc.d2160[1043] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[275])),TRUE); /* values */
  scm__rc.d2160[1044] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[276])),FALSE); /* G2177 */
  scm__rc.d2160[1045] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[277])),FALSE); /* G2179 */
  scm__rc.d2160[1046] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[278])),FALSE); /* G2178 */
  scm__rc.d2160[1047] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[279])),FALSE); /* rest2176 */
  scm__rc.d2160[1048] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[280])),FALSE); /* G2181 */
  scm__rc.d2160[1049] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[281])),FALSE); /* G2183 */
  scm__rc.d2160[1050] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[282])),FALSE); /* G2182 */
  scm__rc.d2160[1051] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[283])),FALSE); /* rest2180 */
  scm__rc.d2160[1052] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[284])),FALSE); /* G2185 */
  scm__rc.d2160[1053] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[285])),FALSE); /* G2186 */
  scm__rc.d2160[1054] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[286])),FALSE); /* rest2184 */
  scm__rc.d2160[1055] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[287])),TRUE); /* => */
  scm__rc.d2160[1056] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[288])),TRUE); /* ^r */
  scm__rc.d2160[1057] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[289])),FALSE); /* G2188 */
  scm__rc.d2160[1058] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[290])),FALSE); /* G2189 */
  scm__rc.d2160[1059] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[291])),FALSE); /* rest2187 */
  scm__rc.d2160[1060] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[292])),FALSE); /* G2191 */
  scm__rc.d2160[1061] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[293])),FALSE); /* G2194 */
  scm__rc.d2160[1062] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[294])),FALSE); /* G2196 */
  scm__rc.d2160[1063] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[295])),FALSE); /* G2195 */
  scm__rc.d2160[1064] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[296])),FALSE); /* rest2193 */
  scm__rc.d2160[1065] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[297])),TRUE); /* cut */
  scm__rc.d2160[1066] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2161[298])),TRUE); /* <> */
}
