/* Generated automatically from libnum.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
#include "gauche/priv/bignumP.h"
#include <stdlib.h>
#include <float.h>
#include <math.h>
#if !(defined(M_PI))

#endif /* !(defined(M_PI)) */
static ScmObj libnumnumberP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumnumberP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumnumberP, SCM_MAKE_INT(SCM_VM_NUMBERP), NULL);

static ScmObj libnumcomplexP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumcomplexP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumcomplexP, SCM_MAKE_INT(SCM_VM_NUMBERP), NULL);

static ScmObj libnumrealP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumrealP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumrealP, SCM_MAKE_INT(SCM_VM_REALP), NULL);

static ScmObj libnumrationalP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumrationalP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumrationalP, NULL, NULL);

static ScmObj libnumintegerP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumintegerP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumintegerP, NULL, NULL);

static ScmObj libnumexactP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumexactP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumexactP, NULL, NULL);

static ScmObj libnuminexactP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnuminexactP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnuminexactP, NULL, NULL);

static ScmObj libnumzeroP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumzeroP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumzeroP, NULL, NULL);

static ScmObj libnumpositiveP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumpositiveP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumpositiveP, NULL, NULL);

static ScmObj libnumnegativeP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumnegativeP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumnegativeP, NULL, NULL);

static ScmObj libnumoddP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumoddP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumoddP, NULL, NULL);

static ScmObj libnumevenP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumevenP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumevenP, NULL, NULL);

static ScmObj libnumfixnumP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumfixnumP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumfixnumP, NULL, NULL);

static ScmObj libnumbignumP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumbignumP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumbignumP, NULL, NULL);

static ScmObj libnumflonumP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumflonumP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumflonumP, NULL, NULL);

static ScmObj libnumratnumP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumratnumP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumratnumP, NULL, NULL);

static ScmObj libnumfiniteP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumfiniteP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumfiniteP, NULL, NULL);

static ScmObj libnuminfiniteP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnuminfiniteP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnuminfiniteP, NULL, NULL);

static ScmObj libnumnanP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumnanP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumnanP, NULL, NULL);

static ScmObj libnumnegative_zeroP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumnegative_zeroP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumnegative_zeroP, NULL, NULL);

static ScmObj libnumexact_integerP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumexact_integerP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumexact_integerP, NULL, NULL);

static ScmObj libnumfixnum_width(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumfixnum_width__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumfixnum_width, NULL, NULL);

static ScmObj libnumleast_fixnum(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumleast_fixnum__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumleast_fixnum, NULL, NULL);

static ScmObj libnumgreatest_fixnum(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumgreatest_fixnum__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumgreatest_fixnum, NULL, NULL);

static ScmObj libnumnative_endian(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumnative_endian__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumnative_endian, NULL, NULL);

static ScmObj libnumflonum_epsilon(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumflonum_epsilon__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumflonum_epsilon, NULL, NULL);

static ScmObj libnumleast_positive_normalized_flonum(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumleast_positive_normalized_flonum__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumleast_positive_normalized_flonum, NULL, NULL);

static ScmObj libnumleast_positive_flonum(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumleast_positive_flonum__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumleast_positive_flonum, NULL, NULL);

static ScmObj libnumgreatest_positive_flonum(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumgreatest_positive_flonum__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumgreatest_positive_flonum, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 134u, 6u, 6u, 104u, 2u, 1u, 36u, 112u, 144u, 192u, 144u, 9u,
28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u,
3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 6u, 6u, 104u, 10u, 3u, 36u, 112u, 144u, 192u, 144u,
25u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libnum_25bignum_dump(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnum_25bignum_dump__STUB, 1, 0,SCM_FALSE,libnum_25bignum_dump, NULL, NULL);

static ScmObj libnum_3d(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_3d__STUB, 2, 3,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_3d, NULL, NULL);

static ScmObj libnum_LT(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_LT__STUB, 2, 3,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_LT, NULL, NULL);

static ScmObj libnum_LT_3d(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_LT_3d__STUB, 2, 3,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_LT_3d, NULL, NULL);

static ScmObj libnum_GT(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_GT__STUB, 2, 3,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_GT, NULL, NULL);

static ScmObj libnum_GT_3d(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_GT_3d__STUB, 2, 3,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_GT_3d, NULL, NULL);

static ScmObj libnummax(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnummax__STUB, 1, 1,1, SCM_FALSE,0, libnummax, NULL, NULL);

static ScmObj libnummin(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnummin__STUB, 1, 1,1, SCM_FALSE,0, libnummin, NULL, NULL);

static ScmObj libnum_LT_3d_3a_LT(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_LT_3d_3a_LT__STUB, 3, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_LT_3d_3a_LT, NULL, NULL);

static ScmObj libnum_LT_3a_LT_3d(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_LT_3a_LT_3d__STUB, 3, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_LT_3a_LT_3d, NULL, NULL);

static ScmObj libnummin_26max(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnummin_26max__STUB, 1, 1,SCM_FALSE,libnummin_26max, NULL, NULL);

static ScmObj libnumexact_TOinexact(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumexact_TOinexact__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumexact_TOinexact, NULL, NULL);

static ScmObj libnuminexact_TOexact(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnuminexact_TOexact__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnuminexact_TOexact, NULL, NULL);

static unsigned char uvector__00003[] = {
 0u, 3u, 129u, 6u, 8u, 18u, 5u, 129u, 137u, 28u, 0u, 48u, 36u, 12u,
72u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 129u, 6u, 8u, 18u, 7u, 130u, 9u, 28u, 0u, 48u, 36u, 16u, 72u,};
static ScmObj libnumnumber_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumnumber_TOstring__STUB, 1, 4,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumnumber_TOstring, NULL, NULL);

static ScmObj libnumstring_TOnumber(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnumstring_TOnumber__STUB, 1, 3,SCM_FALSE,libnumstring_TOnumber, NULL, NULL);

static ScmObj libnumfloor_TOexact(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumfloor_TOexact__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumfloor_TOexact, NULL, NULL);

static ScmObj libnumceiling_TOexact(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumceiling_TOexact__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumceiling_TOexact, NULL, NULL);

static ScmObj libnumtruncate_TOexact(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumtruncate_TOexact__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumtruncate_TOexact, NULL, NULL);

static ScmObj libnumround_TOexact(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumround_TOexact__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumround_TOexact, NULL, NULL);

static ScmObj libnumdecode_float(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnumdecode_float__STUB, 1, 0,SCM_FALSE,libnumdecode_float, NULL, NULL);

static ScmObj libnumfmod(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumfmod__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumfmod, NULL, NULL);

static ScmObj libnumfrexp(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumfrexp__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumfrexp, NULL, NULL);

static ScmObj libnummodf(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnummodf__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnummodf, NULL, NULL);

static ScmObj libnumldexp(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumldexp__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumldexp, NULL, NULL);

static ScmObj libnumlog10(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumlog10__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumlog10, NULL, NULL);

#if defined(HAVE_TGAMMA)
static ScmObj libnum_25gamma(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_25gamma__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_25gamma, NULL, NULL);

#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_LGAMMA)
static ScmObj libnum_25lgamma(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_25lgamma__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_25lgamma, NULL, NULL);

#endif /* defined(HAVE_LGAMMA) */
static ScmObj libnumflonum_TOf16bits(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumflonum_TOf16bits__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumflonum_TOf16bits, NULL, NULL);

static ScmObj libnum_2a(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_2a__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_2a, NULL, NULL);

static ScmObj libnum_2b(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_2b__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_2b, NULL, NULL);

static ScmObj libnum_(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum___STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_, NULL, NULL);

static ScmObj libnum_2f(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_2f__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_2f, NULL, NULL);

static unsigned char uvector__00005[] = {
 0u, 3u, 140u, 6u, 4u, 130u, 72u, 226u, 193u, 130u, 10u, 130u, 224u,
200u, 36u, 145u, 197u, 67u, 2u, 65u, 36u, 113u, 64u, 192u, 144u, 97u,
28u, 64u, 48u, 38u, 8u, 196u, 112u, 224u, 193u, 6u, 193u, 36u, 142u,
26u, 24u, 18u, 13u, 35u, 134u, 6u, 4u, 130u, 72u, 225u, 65u, 129u,
148u, 65u, 208u, 104u, 131u, 224u, 146u, 66u, 98u, 30u, 30u, 130u,
96u, 141u, 4u, 146u, 71u, 8u, 12u, 9u, 141u, 9u, 28u, 24u, 48u, 38u,
55u, 4u, 112u, 80u, 192u, 144u, 73u, 28u, 12u, 48u, 38u, 55u, 4u,
112u, 32u, 192u, 144u, 105u, 28u, 0u, 48u, 38u, 52u, 36u, 49u, 6u, 6u,
49u, 6u, 193u, 144u, 73u, 9u, 140u, 177u, 36u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 8u, 65u, 176u, 100u, 18u, 67u, 40u, 131u,
160u, 209u, 7u, 193u, 36u, 136u, 54u, 9u, 33u, 232u, 65u, 80u, 92u,
25u, 4u, 152u, 36u, 146u, 71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 20u,
136u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u,
0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 130u, 134u, 8u, 66u, 17u, 12u, 46u, 134u, 9u, 36u, 112u, 64u,
192u, 144u, 73u, 28u, 0u, 48u, 36u, 34u, 67u, 16u, 96u, 99u, 16u, 73u,
9u, 128u, 225u, 36u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 9u, 65u, 36u, 66u, 16u, 136u, 97u, 116u,
48u, 73u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u, 192u, 248u, 142u,
14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u,
48u, 28u, 36u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 130u, 134u, 8u, 66u, 19u, 12u, 48u, 161u, 130u, 73u, 28u,
16u, 48u, 36u, 18u, 71u, 0u, 12u, 9u, 9u, 144u, 196u, 24u, 24u, 196u,
18u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 10u, 193u, 36u, 66u, 16u, 152u, 97u, 133u,
12u, 18u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u,
131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u,
96u, 76u, 7u, 9u, 0u,};
static ScmObj libnumabs(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumabs__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumabs, NULL, NULL);

static ScmObj libnumquotient(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumquotient__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumquotient, NULL, NULL);

static ScmObj libnumremainder(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumremainder__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumremainder, NULL, NULL);

static ScmObj libnummodulo(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnummodulo__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnummodulo, NULL, NULL);

static unsigned char uvector__00011[] = {
 0u, 3u, 136u, 134u, 8u, 90u, 23u, 36u, 113u, 0u, 192u, 144u, 185u,
28u, 56u, 48u, 51u, 195u, 16u, 185u, 35u, 134u, 134u, 4u, 133u, 200u,
225u, 33u, 129u, 48u, 121u, 35u, 130u, 134u, 6u, 241u, 12u, 194u,
228u, 38u, 15u, 36u, 142u, 6u, 24u, 19u, 17u, 114u, 56u, 16u, 96u,
72u, 92u, 142u, 0u, 24u, 19u, 17u, 114u, 24u, 131u, 3u, 24u, 133u,
200u, 76u, 67u, 2u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 145u, 6u, 8u, 104u, 7u, 248u, 110u, 28u, 48u, 184u, 104u,
135u, 73u, 13u, 80u, 233u, 36u, 114u, 0u, 192u, 152u, 57u, 145u, 199u,
67u, 2u, 96u, 82u, 71u, 28u, 12u, 9u, 130u, 193u, 28u, 108u, 48u, 36u,
46u, 71u, 25u, 12u, 9u, 129u, 73u, 28u, 96u, 48u, 36u, 46u, 71u, 22u,
12u, 13u, 112u, 233u, 35u, 138u, 134u, 4u, 135u, 72u, 226u, 129u,
130u, 26u, 13u, 16u, 233u, 13u, 80u, 233u, 36u, 113u, 48u, 192u, 153u,
25u, 145u, 196u, 67u, 2u, 100u, 54u, 71u, 15u, 12u, 13u, 16u, 233u,
35u, 134u, 134u, 6u, 176u, 213u, 14u, 146u, 71u, 12u, 12u, 9u, 151u,
249u, 28u, 32u, 48u, 53u, 195u, 164u, 142u, 14u, 24u, 18u, 29u, 35u,
131u, 6u, 6u, 64u, 33u, 209u, 15u, 7u, 33u, 11u, 144u, 222u, 33u,
152u, 92u, 134u, 120u, 98u, 23u, 36u, 66u, 208u, 185u, 48u, 233u, 36u,
54u, 0u, 153u, 176u, 240u, 2u, 2u, 101u, 232u, 19u, 44u, 50u, 26u,
66u, 100u, 28u, 73u, 35u, 130u, 6u, 4u, 207u, 92u, 142u, 6u, 24u, 18u,
29u, 35u, 129u, 6u, 4u, 135u, 200u, 224u, 1u, 129u, 51u, 215u, 33u,
136u, 48u, 49u, 195u, 161u, 152u, 67u, 80u, 188u, 58u, 67u, 40u, 76u,
108u, 225u, 112u, 152u, 14u, 18u, 27u, 97u, 208u, 153u, 235u, 132u,
208u, 141u, 146u, 73u, 0u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 135u, 6u, 8u, 130u, 33u, 17u, 18u, 67u, 161u, 152u, 67u, 80u,
188u, 58u, 67u, 40u, 107u, 135u, 76u, 46u, 33u, 160u, 31u, 225u, 184u,
112u, 194u, 225u, 162u, 29u, 36u, 53u, 67u, 164u, 146u, 27u, 97u,
209u, 15u, 7u, 33u, 11u, 144u, 222u, 33u, 152u, 92u, 134u, 120u, 98u,
23u, 36u, 66u, 208u, 185u, 48u, 233u, 13u, 128u, 53u, 195u, 167u,
128u, 16u, 26u, 195u, 84u, 58u, 72u, 104u, 135u, 73u, 13u, 34u, 26u,
13u, 16u, 233u, 13u, 80u, 233u, 36u, 146u, 71u, 11u, 12u, 12u, 112u,
234u, 96u, 150u, 71u, 9u, 12u, 9u, 128u, 225u, 28u, 16u, 48u, 38u, 3u,
132u, 112u, 32u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 155u, 6u, 8u, 104u, 68u, 112u, 184u, 104u, 135u, 73u, 13u,
80u, 233u, 36u, 115u, 64u, 192u, 152u, 45u, 145u, 204u, 3u, 4u, 40u,
34u, 72u, 150u, 38u, 49u, 57u, 35u, 151u, 134u, 4u, 137u, 200u, 229u,
129u, 129u, 48u, 202u, 35u, 149u, 134u, 4u, 137u, 136u, 229u, 65u,
129u, 33u, 114u, 57u, 64u, 96u, 76u, 50u, 136u, 228u, 97u, 130u, 40u,
137u, 73u, 28u, 136u, 48u, 36u, 46u, 71u, 33u, 12u, 12u, 128u, 68u,
192u, 63u, 195u, 112u, 225u, 137u, 98u, 114u, 72u, 101u, 9u, 143u,
119u, 0u, 9u, 133u, 233u, 36u, 113u, 240u, 192u, 153u, 51u, 17u, 199u,
131u, 2u, 68u, 228u, 113u, 208u, 192u, 144u, 185u, 28u, 108u, 48u,
38u, 76u, 196u, 113u, 160u, 192u, 152u, 20u, 145u, 198u, 67u, 2u, 96u,
128u, 71u, 24u, 12u, 9u, 11u, 145u, 197u, 131u, 3u, 92u, 58u, 72u,
226u, 161u, 129u, 33u, 210u, 56u, 160u, 96u, 134u, 131u, 68u, 58u,
67u, 84u, 58u, 73u, 28u, 76u, 48u, 38u, 132u, 174u, 145u, 196u, 67u,
2u, 104u, 74u, 41u, 28u, 60u, 48u, 52u, 67u, 164u, 142u, 26u, 24u,
26u, 195u, 84u, 58u, 73u, 28u, 48u, 48u, 38u, 133u, 138u, 145u, 194u,
3u, 3u, 92u, 58u, 72u, 224u, 225u, 129u, 33u, 210u, 56u, 48u, 96u,
100u, 2u, 29u, 16u, 240u, 114u, 16u, 185u, 13u, 226u, 25u, 133u, 200u,
103u, 134u, 33u, 114u, 68u, 45u, 11u, 147u, 14u, 146u, 67u, 96u, 9u,
161u, 123u, 188u, 4u, 128u, 154u, 22u, 20u, 19u, 66u, 166u, 72u, 105u,
9u, 161u, 35u, 4u, 146u, 56u, 32u, 96u, 77u, 12u, 211u, 35u, 129u,
134u, 4u, 135u, 72u, 224u, 65u, 129u, 34u, 146u, 56u, 0u, 96u, 77u,
12u, 211u, 33u, 136u, 48u, 49u, 195u, 161u, 152u, 68u, 113u, 44u, 78u,
67u, 108u, 76u, 19u, 38u, 96u, 153u, 84u, 18u, 25u, 132u, 53u, 11u,
195u, 164u, 50u, 132u, 208u, 133u, 216u, 92u, 38u, 3u, 132u, 134u,
216u, 116u, 38u, 134u, 105u, 132u, 208u, 225u, 82u, 73u, 0u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 135u, 6u, 8u, 130u, 33u, 17u, 82u, 67u, 161u, 152u, 68u,
113u, 44u, 78u, 67u, 108u, 76u, 3u, 252u, 55u, 14u, 24u, 150u, 39u,
33u, 148u, 69u, 17u, 41u, 224u, 2u, 20u, 17u, 36u, 75u, 19u, 24u,
156u, 146u, 67u, 48u, 134u, 161u, 120u, 116u, 134u, 80u, 215u, 14u,
152u, 92u, 67u, 66u, 35u, 133u, 195u, 68u, 58u, 72u, 106u, 135u, 73u,
36u, 54u, 195u, 162u, 30u, 14u, 66u, 23u, 33u, 188u, 67u, 48u, 185u,
12u, 240u, 196u, 46u, 72u, 133u, 161u, 114u, 97u, 210u, 27u, 0u, 107u,
135u, 79u, 1u, 32u, 53u, 134u, 168u, 116u, 144u, 209u, 14u, 146u, 26u,
68u, 52u, 26u, 33u, 210u, 26u, 161u, 210u, 73u, 36u, 142u, 22u, 24u,
24u, 225u, 212u, 193u, 44u, 142u, 18u, 24u, 19u, 1u, 194u, 56u, 32u,
96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 36u,};
static ScmObj libnum_25gcd(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_25gcd__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_25gcd, NULL, NULL);

static ScmObj libnumnumerator(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumnumerator__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumnumerator, NULL, NULL);

static ScmObj libnumdenominator(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumdenominator__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumdenominator, NULL, NULL);

static unsigned char uvector__00016[] = {
 0u, 3u, 168u, 6u, 8u, 174u, 44u, 139u, 98u, 210u, 71u, 79u, 12u, 9u,
22u, 145u, 211u, 131u, 2u, 69u, 164u, 116u, 208u, 192u, 145u, 97u,
29u, 36u, 48u, 69u, 209u, 105u, 35u, 164u, 6u, 4u, 139u, 72u, 232u,
193u, 129u, 48u, 225u, 35u, 161u, 134u, 8u, 28u, 69u, 113u, 100u, 91u,
22u, 146u, 71u, 65u, 12u, 9u, 139u, 201u, 29u, 0u, 48u, 36u, 90u, 71u,
63u, 12u, 9u, 22u, 145u, 207u, 131u, 2u, 69u, 132u, 115u, 192u, 192u,
152u, 188u, 145u, 206u, 131u, 0u, 118u, 17u, 116u, 88u, 66u, 97u,
194u, 66u, 98u, 216u, 72u, 231u, 1u, 129u, 50u, 171u, 35u, 155u, 134u,
4u, 139u, 8u, 230u, 161u, 129u, 50u, 171u, 35u, 154u, 6u, 4u, 139u,
8u, 230u, 65u, 128u, 69u, 241u, 97u, 139u, 9u, 28u, 192u, 48u, 38u,
120u, 36u, 114u, 240u, 192u, 145u, 97u, 28u, 180u, 48u, 38u, 120u,
36u, 114u, 112u, 192u, 202u, 34u, 248u, 176u, 198u, 17u, 137u, 35u,
146u, 134u, 4u, 208u, 145u, 34u, 57u, 32u, 96u, 72u, 176u, 142u, 68u,
24u, 19u, 66u, 68u, 136u, 228u, 1u, 128u, 69u, 241u, 105u, 9u, 161u,
32u, 228u, 142u, 60u, 24u, 19u, 66u, 180u, 72u, 227u, 161u, 129u, 34u,
210u, 56u, 216u, 96u, 77u, 10u, 209u, 35u, 138u, 134u, 8u, 202u, 45u,
36u, 113u, 64u, 192u, 145u, 105u, 28u, 72u, 48u, 38u, 134u, 74u, 17u,
195u, 131u, 0u, 118u, 17u, 148u, 88u, 66u, 104u, 100u, 161u, 140u, 9u,
28u, 48u, 48u, 38u, 134u, 233u, 145u, 194u, 195u, 2u, 69u, 132u, 112u,
144u, 192u, 154u, 27u, 166u, 71u, 6u, 12u, 12u, 241u, 156u, 90u, 72u,
224u, 161u, 129u, 34u, 210u, 56u, 8u, 96u, 141u, 34u, 222u, 0u, 72u,
98u, 12u, 12u, 98u, 44u, 139u, 72u, 108u, 1u, 52u, 66u, 32u, 38u,
135u, 225u, 144u, 154u, 27u, 138u, 19u, 66u, 179u, 130u, 103u, 124u,
19u, 41u, 208u, 210u, 19u, 1u, 194u, 73u, 32u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 17u, 172u, 89u, 22u, 144u, 216u, 4u,
105u, 22u, 240u, 2u, 25u, 227u, 56u, 180u, 144u, 29u, 132u, 101u, 22u,
17u, 25u, 69u, 164u, 198u, 4u, 8u, 190u, 45u, 33u, 148u, 69u, 241u,
97u, 140u, 35u, 18u, 64u, 139u, 226u, 195u, 22u, 16u, 29u, 132u, 93u,
22u, 17u, 23u, 69u, 164u, 136u, 28u, 69u, 113u, 100u, 91u, 22u, 146u,
67u, 72u, 138u, 226u, 200u, 182u, 45u, 36u, 146u, 56u, 72u, 96u, 99u,
9u, 129u, 234u, 96u, 168u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u,
38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static ScmObj libnumfloor(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumfloor__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumfloor, NULL, NULL);

static ScmObj libnumceiling(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumceiling__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumceiling, NULL, NULL);

static ScmObj libnumtruncate(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumtruncate__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumtruncate, NULL, NULL);

static ScmObj libnumround(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumround__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumround, NULL, NULL);

static ScmObj libnumreal_exp(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_exp__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_exp, NULL, NULL);

static ScmObj libnumreal_ln(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_ln__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_ln, NULL, NULL);

static ScmObj libnumreal_sin(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_sin__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_sin, NULL, NULL);

static ScmObj libnumreal_cos(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_cos__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_cos, NULL, NULL);

static ScmObj libnumreal_tan(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_tan__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_tan, NULL, NULL);

static ScmObj libnumreal_sinpi(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_sinpi__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_sinpi, NULL, NULL);

static ScmObj libnumreal_cospi(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_cospi__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_cospi, NULL, NULL);

static ScmObj libnumreal_tanpi(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_tanpi__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_tanpi, NULL, NULL);

static ScmObj libnumreal_asin(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_asin__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_asin, NULL, NULL);

static ScmObj libnumreal_acos(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_acos__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_acos, NULL, NULL);

static ScmObj libnumreal_atan(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_atan__STUB, 1, 2,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_atan, NULL, NULL);

static ScmObj libnumreal_sinh(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_sinh__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_sinh, NULL, NULL);

static ScmObj libnumreal_cosh(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_cosh__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_cosh, NULL, NULL);

static ScmObj libnumreal_tanh(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_tanh__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_tanh, NULL, NULL);

static ScmObj libnumreal_asinh(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_asinh__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_asinh, NULL, NULL);

static ScmObj libnumreal_acosh(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_acosh__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_acosh, NULL, NULL);

static ScmObj libnumreal_atanh(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_atanh__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_atanh, NULL, NULL);

static ScmObj libnumreal_sqrt(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_sqrt__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_sqrt, NULL, NULL);

static ScmObj libnum_25sqrt_fast_path(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_25sqrt_fast_path__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_25sqrt_fast_path, NULL, NULL);

static ScmObj libnumreal_expt(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_expt__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_expt, NULL, NULL);

static ScmObj libnumexact_expt(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumexact_expt__STUB, 2, 0,1, SCM_FALSE,0, libnumexact_expt, NULL, NULL);

static ScmObj libnuminteger_expt(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnuminteger_expt__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnuminteger_expt, NULL, NULL);

static unsigned char uvector__00018[] = {
 0u, 3u, 144u, 6u, 6u, 120u, 218u, 55u, 36u, 113u, 240u, 192u, 145u,
185u, 28u, 104u, 48u, 71u, 2u, 57u, 17u, 212u, 110u, 72u, 142u, 227u,
114u, 72u, 227u, 1u, 129u, 48u, 184u, 35u, 139u, 134u, 4u, 141u, 200u,
226u, 161u, 129u, 48u, 184u, 35u, 137u, 134u, 4u, 194u, 56u, 142u,
34u, 24u, 19u, 9u, 178u, 56u, 128u, 96u, 72u, 220u, 142u, 28u, 24u,
19u, 9u, 178u, 56u, 96u, 96u, 76u, 35u, 136u, 225u, 65u, 128u, 71u,
145u, 185u, 9u, 132u, 9u, 35u, 132u, 134u, 4u, 201u, 100u, 142u, 16u,
24u, 18u, 55u, 35u, 130u, 134u, 8u, 230u, 55u, 36u, 112u, 64u, 192u,
145u, 185u, 28u, 8u, 48u, 8u, 246u, 55u, 33u, 50u, 252u, 36u, 112u,
16u, 192u, 153u, 174u, 17u, 192u, 3u, 2u, 70u, 228u, 49u, 6u, 6u, 49u,
27u, 144u, 216u, 19u, 53u, 144u, 153u, 43u, 6u, 144u, 152u, 14u, 18u,
73u, 0u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 17u, 244u, 110u, 67u, 96u, 17u,
236u, 110u, 68u, 115u, 27u, 146u, 4u, 121u, 27u, 145u, 28u, 8u, 228u,
71u, 81u, 185u, 34u, 59u, 141u, 201u, 33u, 164u, 51u, 198u, 209u,
185u, 36u, 145u, 194u, 67u, 3u, 24u, 76u, 15u, 83u, 4u, 162u, 56u,
56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u,
192u, 112u, 144u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 159u, 134u, 8u, 252u, 72u, 17u, 185u, 18u, 0u, 104u, 144u,
73u, 36u, 115u, 208u, 192u, 152u, 33u, 145u, 207u, 3u, 2u, 96u, 160u,
71u, 58u, 12u, 9u, 130u, 25u, 28u, 224u, 48u, 38u, 5u, 36u, 115u,
112u, 192u, 145u, 185u, 28u, 212u, 48u, 38u, 5u, 36u, 115u, 32u, 192u,
207u, 27u, 70u, 228u, 142u, 98u, 24u, 18u, 55u, 35u, 150u, 6u, 9u, 8u,
72u, 98u, 68u, 141u, 201u, 18u, 44u, 110u, 73u, 28u, 168u, 48u, 38u,
70u, 100u, 114u, 144u, 192u, 145u, 185u, 28u, 156u, 48u, 38u, 70u,
100u, 114u, 80u, 192u, 153u, 4u, 145u, 200u, 195u, 2u, 100u, 44u, 71u,
34u, 12u, 9u, 27u, 145u, 200u, 3u, 2u, 100u, 44u, 71u, 30u, 12u, 9u,
144u, 73u, 28u, 112u, 48u, 8u, 242u, 55u, 33u, 49u, 252u, 36u, 113u,
176u, 192u, 153u, 234u, 17u, 198u, 131u, 2u, 70u, 228u, 113u, 112u,
193u, 33u, 9u, 12u, 72u, 209u, 185u, 34u, 20u, 224u, 130u, 71u, 224u,
36u, 146u, 56u, 144u, 96u, 77u, 9u, 4u, 35u, 136u, 134u, 4u, 208u,
145u, 18u, 56u, 128u, 96u, 72u, 220u, 142u, 28u, 24u, 19u, 66u, 65u,
8u, 225u, 97u, 130u, 67u, 141u, 201u, 28u, 40u, 48u, 36u, 110u, 71u,
8u, 12u, 18u, 71u, 0u, 141u, 201u, 28u, 20u, 48u, 8u, 246u, 55u, 33u,
148u, 38u, 134u, 33u, 132u, 208u, 184u, 96u, 154u, 17u, 174u, 73u,
28u, 16u, 48u, 38u, 134u, 98u, 17u, 192u, 195u, 2u, 70u, 228u, 112u,
16u, 192u, 215u, 32u, 146u, 56u, 0u, 96u, 73u, 4u, 134u, 32u, 192u,
198u, 35u, 116u, 144u, 67u, 40u, 77u, 14u, 151u, 13u, 129u, 52u, 51u,
4u, 38u, 122u, 33u, 164u, 38u, 50u, 228u, 132u, 192u, 112u, 146u, 64u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 18u, 4u, 110u, 146u, 8u, 101u, 13u,
114u, 9u, 13u, 128u, 71u, 177u, 185u, 12u, 162u, 72u, 224u, 17u, 185u,
18u, 28u, 110u, 68u, 132u, 36u, 49u, 35u, 70u, 228u, 136u, 83u, 130u,
9u, 31u, 128u, 146u, 73u, 2u, 60u, 141u, 200u, 144u, 132u, 134u, 36u,
72u, 220u, 145u, 34u, 198u, 228u, 144u, 210u, 25u, 227u, 104u, 220u,
146u, 35u, 241u, 32u, 70u, 228u, 72u, 1u, 162u, 65u, 36u, 146u, 71u,
9u, 12u, 12u, 97u, 48u, 61u, 76u, 21u, 72u, 224u, 225u, 129u, 48u,
28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 194u, 50u, 24u, 25u, 227u, 104u, 220u, 145u, 225u, 24u, 12u,
9u, 27u, 145u, 225u, 19u, 12u, 17u, 192u, 146u, 68u, 137u, 27u, 146u,
35u, 241u, 34u, 198u, 230u, 74u, 36u, 143u, 8u, 144u, 96u, 76u, 50u,
136u, 240u, 134u, 134u, 4u, 195u, 92u, 143u, 8u, 96u, 96u, 72u, 220u,
143u, 8u, 80u, 96u, 76u, 53u, 200u, 240u, 132u, 6u, 4u, 194u, 128u,
143u, 8u, 48u, 96u, 76u, 43u, 72u, 240u, 130u, 134u, 4u, 141u, 200u,
240u, 129u, 134u, 4u, 194u, 180u, 143u, 8u, 8u, 96u, 76u, 40u, 8u,
239u, 225u, 128u, 71u, 145u, 185u, 9u, 132u, 153u, 35u, 191u, 6u, 4u,
203u, 164u, 142u, 250u, 24u, 18u, 55u, 35u, 189u, 6u, 9u, 38u, 55u,
36u, 119u, 144u, 192u, 145u, 185u, 29u, 220u, 48u, 8u, 246u, 55u, 33u,
51u, 140u, 36u, 119u, 96u, 192u, 153u, 246u, 17u, 221u, 67u, 2u, 70u,
228u, 119u, 32u, 193u, 36u, 198u, 228u, 142u, 226u, 24u, 18u, 55u,
35u, 183u, 6u, 9u, 38u, 55u, 36u, 118u, 208u, 192u, 145u, 185u, 29u,
172u, 48u, 71u, 242u, 92u, 152u, 72u, 237u, 65u, 129u, 36u, 194u, 59u,
72u, 96u, 73u, 44u, 142u, 206u, 24u, 36u, 217u, 59u, 128u, 18u, 59u,
48u, 96u, 73u, 56u, 142u, 202u, 24u, 36u, 241u, 38u, 73u, 196u, 74u,
18u, 137u, 12u, 161u, 52u, 46u, 104u, 38u, 133u, 68u, 132u, 208u,
156u, 194u, 72u, 236u, 97u, 129u, 52u, 51u, 36u, 142u, 196u, 24u, 18u,
81u, 35u, 176u, 6u, 4u, 208u, 204u, 146u, 58u, 240u, 96u, 147u, 101u,
46u, 0u, 72u, 235u, 161u, 129u, 37u, 34u, 58u, 224u, 96u, 147u, 196u,
151u, 41u, 17u, 40u, 74u, 100u, 50u, 132u, 208u, 241u, 0u, 154u, 25u,
4u, 19u, 66u, 67u, 201u, 35u, 173u, 6u, 4u, 209u, 1u, 242u, 58u, 200u,
96u, 73u, 76u, 142u, 174u, 24u, 19u, 68u, 7u, 200u, 234u, 129u, 130u,
73u, 141u, 201u, 29u, 76u, 48u, 36u, 110u, 71u, 81u, 12u, 17u, 252u,
169u, 38u, 18u, 58u, 128u, 96u, 73u, 48u, 142u, 158u, 24u, 18u, 84u,
35u, 166u, 134u, 9u, 54u, 78u, 224u, 4u, 142u, 152u, 24u, 18u, 78u,
35u, 165u, 134u, 9u, 60u, 73u, 146u, 113u, 18u, 132u, 162u, 67u, 40u,
77u, 20u, 84u, 9u, 162u, 104u, 97u, 52u, 74u, 24u, 146u, 58u, 72u,
96u, 77u, 21u, 131u, 35u, 164u, 6u, 4u, 148u, 72u, 232u, 193u, 129u,
52u, 86u, 12u, 142u, 136u, 24u, 35u, 249u, 82u, 85u, 36u, 116u, 48u,
192u, 146u, 169u, 29u, 8u, 48u, 36u, 168u, 71u, 64u, 12u, 12u, 178u,
168u, 77u, 23u, 202u, 9u, 162u, 163u, 132u, 142u, 126u, 24u, 18u, 85u,
35u, 159u, 6u, 6u, 64u, 37u, 81u, 43u, 74u, 36u, 144u, 154u, 49u,
182u, 72u, 231u, 129u, 129u, 52u, 105u, 28u, 142u, 118u, 24u, 18u,
81u, 35u, 156u, 134u, 4u, 209u, 164u, 114u, 57u, 184u, 96u, 101u,
149u, 4u, 175u, 42u, 132u, 209u, 164u, 112u, 154u, 47u, 148u, 19u,
69u, 71u, 8u, 77u, 15u, 216u, 36u, 115u, 96u, 192u, 146u, 161u, 28u,
212u, 48u, 50u, 1u, 42u, 9u, 90u, 83u, 36u, 132u, 209u, 193u, 2u, 71u,
51u, 12u, 9u, 163u, 193u, 132u, 115u, 32u, 192u, 146u, 153u, 28u,
192u, 48u, 38u, 143u, 6u, 17u, 203u, 195u, 3u, 32u, 18u, 152u, 150u,
35u, 114u, 68u, 162u, 37u, 152u, 220u, 146u, 37u, 121u, 80u, 38u,
143u, 6u, 4u, 209u, 196u, 80u, 154u, 31u, 176u, 73u, 28u, 180u, 48u,
38u, 144u, 45u, 17u, 203u, 3u, 2u, 70u, 228u, 114u, 160u, 192u, 154u,
64u, 180u, 71u, 40u, 12u, 9u, 164u, 2u, 4u, 114u, 112u, 192u, 145u,
185u, 28u, 148u, 48u, 38u, 144u, 8u, 17u, 200u, 131u, 4u, 147u, 27u,
146u, 57u, 8u, 96u, 72u, 220u, 142u, 64u, 24u, 18u, 90u, 35u, 143u,
6u, 9u, 54u, 91u, 224u, 4u, 142u, 58u, 24u, 18u, 91u, 35u, 142u, 6u,
9u, 60u, 75u, 82u, 217u, 18u, 132u, 110u, 67u, 40u, 77u, 37u, 12u,
150u, 130u, 105u, 32u, 41u, 36u, 113u, 160u, 192u, 154u, 76u, 54u,
71u, 25u, 12u, 9u, 27u, 145u, 197u, 195u, 2u, 105u, 48u, 217u, 28u,
84u, 48u, 50u, 136u, 102u, 55u, 33u, 52u, 151u, 80u, 38u, 143u, 234u,
146u, 56u, 152u, 96u, 77u, 40u, 92u, 35u, 137u, 6u, 4u, 141u, 200u,
226u, 1u, 129u, 52u, 161u, 112u, 142u, 28u, 24u, 37u, 200u, 223u,
128u, 18u, 56u, 88u, 96u, 14u, 2u, 93u, 141u, 200u, 77u, 42u, 90u,
33u, 52u, 161u, 68u, 145u, 194u, 67u, 2u, 105u, 88u, 49u, 28u, 32u,
48u, 36u, 110u, 71u, 6u, 12u, 9u, 165u, 96u, 196u, 112u, 80u, 192u,
37u, 104u, 220u, 146u, 56u, 24u, 96u, 77u, 45u, 10u, 35u, 129u, 6u,
4u, 141u, 200u, 224u, 1u, 129u, 52u, 180u, 40u, 134u, 32u, 192u, 198u,
35u, 114u, 27u, 2u, 105u, 104u, 56u, 77u, 42u, 216u, 9u, 159u, 72u,
76u, 185u, 131u, 72u, 76u, 8u, 137u, 36u, 128u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 18u, 244u, 110u, 67u, 96u, 18u,
180u, 110u, 72u, 14u, 2u, 93u, 141u, 200u, 151u, 35u, 126u, 0u, 72u,
101u, 16u, 204u, 110u, 68u, 158u, 37u, 169u, 108u, 137u, 66u, 55u,
33u, 148u, 73u, 178u, 223u, 0u, 50u, 208u, 146u, 99u, 114u, 72u, 100u,
2u, 83u, 18u, 196u, 110u, 72u, 148u, 68u, 179u, 27u, 146u, 68u, 175u,
42u, 9u, 90u, 83u, 34u, 87u, 149u, 68u, 173u, 40u, 145u, 31u, 202u,
146u, 169u, 18u, 120u, 147u, 36u, 226u, 37u, 9u, 68u, 134u, 81u, 38u,
201u, 220u, 0u, 136u, 254u, 84u, 147u, 8u, 146u, 99u, 114u, 73u, 18u,
120u, 146u, 229u, 34u, 37u, 9u, 76u, 134u, 81u, 38u, 202u, 92u, 0u,
137u, 60u, 73u, 146u, 113u, 18u, 132u, 162u, 67u, 40u, 147u, 100u,
238u, 0u, 68u, 127u, 37u, 201u, 132u, 73u, 49u, 185u, 36u, 73u, 49u,
185u, 36u, 146u, 64u, 143u, 99u, 114u, 36u, 152u, 220u, 144u, 35u,
200u, 220u, 136u, 224u, 73u, 34u, 68u, 141u, 201u, 17u, 248u, 145u,
99u, 115u, 37u, 18u, 67u, 72u, 103u, 141u, 163u, 114u, 73u, 35u, 132u,
134u, 6u, 48u, 152u, 30u, 166u, 9u, 68u, 112u, 112u, 192u, 152u, 14u,
17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 182u, 134u, 7u, 17u, 18u, 7u, 73u, 126u, 96u, 34u, 20u, 224u,
82u, 209u, 36u, 142u, 212u, 24u, 19u, 2u, 114u, 59u, 72u, 96u, 76u,
21u, 136u, 237u, 1u, 129u, 37u, 162u, 59u, 40u, 96u, 76u, 13u, 8u,
236u, 129u, 129u, 37u, 242u, 59u, 16u, 96u, 76u, 9u, 200u, 236u, 33u,
130u, 97u, 150u, 132u, 141u, 48u, 75u, 228u, 145u, 216u, 3u, 2u, 99u,
122u, 71u, 95u, 12u, 9u, 47u, 145u, 215u, 131u, 2u, 76u, 4u, 117u,
208u, 192u, 146u, 209u, 29u, 108u, 48u, 70u, 147u, 4u, 196u, 72u,
235u, 65u, 129u, 38u, 34u, 58u, 200u, 96u, 100u, 2u, 98u, 14u, 146u,
248u, 133u, 56u, 20u, 180u, 120u, 9u, 36u, 50u, 132u, 202u, 164u, 38u,
52u, 193u, 48u, 28u, 36u, 142u, 176u, 24u, 19u, 50u, 178u, 58u, 184u,
96u, 76u, 202u, 200u, 234u, 193u, 129u, 51u, 64u, 35u, 170u, 134u, 4u,
150u, 136u, 234u, 33u, 129u, 196u, 68u, 129u, 210u, 95u, 152u, 8u,
133u, 56u, 20u, 180u, 73u, 35u, 167u, 6u, 4u, 208u, 148u, 18u, 58u,
104u, 96u, 77u, 9u, 144u, 35u, 166u, 6u, 4u, 150u, 136u, 233u, 33u,
129u, 52u, 37u, 56u, 142u, 144u, 24u, 18u, 95u, 35u, 163u, 6u, 4u,
208u, 148u, 18u, 58u, 32u, 96u, 141u, 38u, 9u, 124u, 145u, 208u, 195u,
2u, 75u, 228u, 116u, 32u, 192u, 200u, 4u, 190u, 33u, 73u, 106u, 90u,
36u, 134u, 80u, 154u, 24u, 176u, 19u, 66u, 69u, 131u, 108u, 196u, 19u,
50u, 176u, 153u, 188u, 146u, 72u, 232u, 33u, 129u, 52u, 53u, 104u,
142u, 128u, 24u, 18u, 90u, 35u, 159u, 134u, 4u, 150u, 136u, 231u, 97u,
130u, 99u, 224u, 34u, 36u, 19u, 36u, 192u, 120u, 17u, 36u, 115u, 144u,
192u, 154u, 32u, 140u, 71u, 53u, 12u, 9u, 162u, 10u, 100u, 115u, 64u,
192u, 147u, 1u, 28u, 200u, 48u, 38u, 136u, 41u, 145u, 204u, 3u, 2u,
104u, 130u, 49u, 28u, 180u, 48u, 38u, 136u, 7u, 17u, 202u, 67u, 4u,
202u, 36u, 153u, 128u, 146u, 57u, 56u, 96u, 77u, 19u, 82u, 35u, 147u,
6u, 4u, 152u, 8u, 228u, 129u, 129u, 52u, 77u, 72u, 142u, 68u, 24u,
19u, 68u, 209u, 72u, 228u, 1u, 129u, 148u, 76u, 211u, 57u, 9u, 162u,
104u, 161u, 52u, 64u, 56u, 145u, 199u, 131u, 2u, 104u, 170u, 201u,
28u, 116u, 48u, 36u, 206u, 71u, 27u, 12u, 9u, 162u, 171u, 36u, 113u,
160u, 192u, 200u, 4u, 206u, 36u, 153u, 128u, 146u, 19u, 69u, 83u,
137u, 28u, 96u, 48u, 38u, 139u, 201u, 17u, 197u, 195u, 2u, 76u, 4u,
113u, 80u, 192u, 154u, 47u, 36u, 71u, 20u, 12u, 19u, 12u, 180u, 36u,
105u, 128u, 66u, 146u, 212u, 180u, 73u, 35u, 137u, 134u, 4u, 209u,
153u, 34u, 56u, 144u, 96u, 77u, 25u, 201u, 35u, 136u, 134u, 4u, 150u,
136u, 226u, 1u, 129u, 37u, 162u, 56u, 120u, 96u, 73u, 128u, 142u, 28u,
24u, 18u, 90u, 35u, 134u, 134u, 6u, 64u, 37u, 161u, 50u, 137u, 38u,
96u, 36u, 144u, 154u, 50u, 182u, 72u, 225u, 97u, 129u, 52u, 114u, 92u,
142u, 18u, 24u, 19u, 71u, 49u, 8u, 225u, 1u, 129u, 38u, 2u, 56u, 48u,
96u, 77u, 28u, 196u, 35u, 130u, 6u, 4u, 209u, 201u, 114u, 56u, 16u,
96u, 141u, 38u, 15u, 9u, 4u, 16u, 65u, 4u, 16u, 65u, 0u, 4u, 134u,
32u, 192u, 198u, 38u, 2u, 25u, 66u, 104u, 250u, 192u, 109u, 150u,
130u, 104u, 228u, 184u, 77u, 25u, 91u, 33u, 145u, 196u, 9u, 104u, 54u,
204u, 225u, 52u, 94u, 72u, 38u, 138u, 167u, 18u, 67u, 108u, 190u, 19u,
67u, 86u, 130u, 104u, 110u, 33u, 36u, 146u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 27u, 18u, 132u, 192u, 67u, 40u, 141u,
38u, 15u, 9u, 4u, 16u, 65u, 4u, 16u, 65u, 0u, 4u, 54u, 203u, 66u,
101u, 18u, 76u, 192u, 72u, 152u, 101u, 161u, 35u, 76u, 2u, 20u, 150u,
165u, 162u, 73u, 12u, 142u, 32u, 75u, 65u, 182u, 103u, 18u, 76u, 192u,
67u, 40u, 153u, 166u, 114u, 38u, 81u, 36u, 204u, 4u, 137u, 143u, 128u,
136u, 144u, 76u, 147u, 1u, 224u, 68u, 146u, 72u, 109u, 151u, 196u,
41u, 45u, 75u, 68u, 50u, 136u, 210u, 96u, 151u, 200u, 113u, 17u, 32u,
116u, 151u, 230u, 2u, 33u, 78u, 5u, 45u, 18u, 67u, 108u, 196u, 29u,
37u, 241u, 10u, 112u, 41u, 104u, 240u, 18u, 25u, 68u, 105u, 48u, 76u,
68u, 76u, 50u, 208u, 145u, 166u, 9u, 124u, 144u, 226u, 34u, 64u, 233u,
47u, 204u, 4u, 66u, 156u, 10u, 90u, 36u, 146u, 73u, 36u, 142u, 18u,
24u, 24u, 194u, 96u, 122u, 152u, 37u, 17u, 193u, 195u, 2u, 96u, 56u,
71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 185u, 134u, 6u, 120u, 218u, 44u, 36u, 119u, 32u, 192u, 145u,
97u, 29u, 180u, 48u, 71u, 194u, 20u, 154u, 4u, 129u, 22u, 18u, 72u,
237u, 129u, 129u, 48u, 142u, 35u, 181u, 6u, 4u, 194u, 148u, 142u,
210u, 24u, 18u, 44u, 35u, 179u, 134u, 4u, 194u, 148u, 142u, 204u, 24u,
18u, 104u, 35u, 178u, 6u, 1u, 52u, 197u, 132u, 38u, 16u, 36u, 142u,
198u, 24u, 19u, 27u, 242u, 59u, 16u, 96u, 72u, 176u, 142u, 190u, 24u,
25u, 227u, 105u, 160u, 145u, 215u, 131u, 2u, 77u, 4u, 117u, 112u,
193u, 10u, 9u, 170u, 44u, 154u, 200u, 143u, 132u, 41u, 54u, 8u, 238u,
104u, 34u, 67u, 139u, 9u, 36u, 142u, 170u, 24u, 19u, 47u, 130u, 58u,
160u, 96u, 76u, 193u, 72u, 234u, 65u, 129u, 51u, 54u, 35u, 168u, 134u,
4u, 139u, 8u, 233u, 225u, 129u, 51u, 54u, 35u, 167u, 6u, 4u, 204u,
20u, 142u, 152u, 24u, 19u, 49u, 194u, 58u, 88u, 96u, 73u, 160u, 142u,
146u, 24u, 19u, 49u, 194u, 58u, 40u, 96u, 76u, 190u, 8u, 232u, 97u,
129u, 50u, 212u, 35u, 161u, 6u, 4u, 154u, 200u, 232u, 33u, 129u, 34u,
194u, 57u, 248u, 96u, 76u, 181u, 8u, 231u, 33u, 129u, 148u, 75u, 177u,
97u, 224u, 17u, 137u, 35u, 155u, 134u, 4u, 208u, 189u, 18u, 57u, 176u,
96u, 72u, 176u, 142u, 104u, 24u, 19u, 66u, 244u, 72u, 230u, 1u, 130u,
109u, 154u, 201u, 28u, 188u, 48u, 36u, 214u, 71u, 45u, 12u, 9u, 161u,
177u, 196u, 114u, 176u, 193u, 20u, 69u, 132u, 142u, 84u, 24u, 18u,
44u, 35u, 148u, 134u, 6u, 64u, 38u, 177u, 29u, 77u, 4u, 144u, 202u,
28u, 2u, 104u, 116u, 248u, 77u, 13u, 142u, 33u, 52u, 47u, 24u, 38u,
88u, 228u, 145u, 201u, 195u, 2u, 104u, 124u, 185u, 28u, 152u, 48u,
36u, 208u, 71u, 36u, 12u, 9u, 161u, 242u, 228u, 114u, 32u, 192u, 38u,
153u, 160u, 134u, 217u, 172u, 38u, 135u, 203u, 132u, 208u, 253u, 114u,
72u, 228u, 33u, 129u, 52u, 73u, 40u, 142u, 64u, 24u, 18u, 104u, 35u,
142u, 134u, 9u, 170u, 44u, 154u, 9u, 28u, 112u, 48u, 36u, 208u, 71u,
27u, 12u, 9u, 22u, 17u, 198u, 67u, 0u, 143u, 102u, 130u, 19u, 69u, 3u,
9u, 28u, 96u, 48u, 38u, 138u, 160u, 17u, 197u, 195u, 2u, 77u, 4u,
113u, 80u, 192u, 35u, 216u, 176u, 134u, 192u, 154u, 42u, 58u, 19u,
68u, 145u, 195u, 72u, 76u, 152u, 137u, 36u, 113u, 64u, 192u, 154u,
45u, 36u, 71u, 19u, 12u, 9u, 22u, 17u, 196u, 3u, 0u, 127u, 134u, 230u,
227u, 22u, 77u, 4u, 142u, 30u, 24u, 18u, 104u, 35u, 135u, 6u, 4u,
139u, 8u, 225u, 65u, 130u, 93u, 154u, 9u, 28u, 36u, 48u, 36u, 208u,
71u, 7u, 12u, 9u, 163u, 58u, 196u, 112u, 80u, 192u, 28u, 4u, 187u,
22u, 16u, 154u, 51u, 172u, 66u, 104u, 196u, 105u, 35u, 129u, 134u, 4u,
209u, 177u, 82u, 56u, 16u, 96u, 72u, 176u, 142u, 0u, 24u, 19u, 70u,
197u, 72u, 98u, 12u, 12u, 98u, 44u, 154u, 8u, 108u, 9u, 163u, 96u,
225u, 52u, 90u, 60u, 38u, 55u, 129u, 164u, 38u, 3u, 132u, 146u, 64u,};
static unsigned char uvector__00027[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 19u, 124u, 89u, 52u, 16u, 216u, 3u,
128u, 151u, 98u, 194u, 37u, 217u, 160u, 144u, 31u, 225u, 185u, 184u,
197u, 147u, 65u, 32u, 71u, 177u, 97u, 13u, 128u, 71u, 179u, 65u, 19u,
84u, 89u, 52u, 18u, 4u, 211u, 52u, 16u, 219u, 53u, 136u, 234u, 104u,
33u, 148u, 56u, 8u, 162u, 44u, 34u, 109u, 154u, 201u, 12u, 162u, 93u,
139u, 15u, 0u, 140u, 72u, 133u, 4u, 213u, 22u, 77u, 100u, 71u, 194u,
20u, 155u, 4u, 119u, 52u, 17u, 33u, 197u, 132u, 146u, 73u, 13u, 33u,
158u, 54u, 154u, 9u, 36u, 9u, 166u, 44u, 34u, 62u, 16u, 164u, 208u,
36u, 8u, 176u, 146u, 67u, 72u, 103u, 141u, 162u, 194u, 73u, 35u, 132u,
134u, 6u, 48u, 152u, 30u, 166u, 10u, 132u, 112u, 112u, 192u, 152u,
14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00028[] = {
 0u, 3u, 195u, 156u, 24u, 38u, 168u, 178u, 104u, 36u, 120u, 115u, 67u,
2u, 77u, 4u, 120u, 115u, 3u, 2u, 69u, 132u, 120u, 114u, 3u, 4u, 127u,
56u, 78u, 36u, 143u, 14u, 56u, 96u, 73u, 196u, 143u, 14u, 48u, 96u,
73u, 192u, 143u, 14u, 32u, 96u, 156u, 128u, 156u, 4u, 220u, 37u, 136u,
176u, 205u, 4u, 129u, 46u, 206u, 4u, 137u, 196u, 77u, 194u, 89u, 139u,
12u, 208u, 72u, 18u, 236u, 226u, 73u, 9u, 134u, 41u, 35u, 195u, 132u,
24u, 19u, 34u, 50u, 60u, 56u, 33u, 129u, 39u, 18u, 60u, 51u, 225u,
129u, 50u, 35u, 35u, 195u, 58u, 24u, 19u, 22u, 130u, 60u, 51u, 129u,
129u, 39u, 18u, 60u, 51u, 97u, 129u, 49u, 104u, 35u, 195u, 50u, 24u,
19u, 30u, 146u, 60u, 51u, 1u, 129u, 38u, 130u, 60u, 50u, 161u, 129u,
49u, 246u, 35u, 195u, 40u, 24u, 18u, 44u, 35u, 195u, 36u, 24u, 19u,
31u, 98u, 60u, 50u, 1u, 129u, 49u, 233u, 35u, 195u, 28u, 24u, 19u,
22u, 130u, 60u, 49u, 129u, 129u, 49u, 191u, 35u, 195u, 22u, 24u, 18u,
112u, 35u, 195u, 18u, 24u, 19u, 27u, 242u, 60u, 48u, 225u, 129u, 49u,
104u, 35u, 195u, 12u, 24u, 18u, 112u, 35u, 195u, 10u, 24u, 19u, 22u,
130u, 60u, 48u, 97u, 129u, 49u, 133u, 35u, 195u, 4u, 24u, 18u, 104u,
35u, 194u, 190u, 24u, 19u, 25u, 34u, 60u, 43u, 193u, 129u, 34u, 194u,
60u, 43u, 129u, 129u, 49u, 146u, 35u, 194u, 180u, 24u, 19u, 24u, 82u,
60u, 42u, 193u, 129u, 198u, 115u, 151u, 201u, 30u, 21u, 80u, 192u,
146u, 249u, 30u, 21u, 64u, 192u, 147u, 153u, 30u, 21u, 16u, 193u, 53u,
69u, 147u, 65u, 35u, 194u, 160u, 24u, 18u, 104u, 35u, 194u, 158u, 24u,
18u, 44u, 35u, 194u, 154u, 24u, 25u, 67u, 176u, 112u, 18u, 108u, 233u,
192u, 72u, 141u, 37u, 248u, 178u, 90u, 36u, 56u, 9u, 54u, 116u, 157u,
72u, 141u, 37u, 168u, 178u, 95u, 36u, 132u, 209u, 0u, 240u, 154u, 29u,
156u, 72u, 240u, 163u, 134u, 4u, 209u, 41u, 130u, 60u, 40u, 193u,
129u, 37u, 242u, 60u, 40u, 161u, 129u, 34u, 194u, 60u, 40u, 129u,
129u, 37u, 162u, 60u, 40u, 65u, 129u, 52u, 74u, 96u, 143u, 10u, 0u,
96u, 77u, 18u, 84u, 35u, 194u, 62u, 24u, 18u, 116u, 35u, 194u, 50u,
24u, 19u, 68u, 118u, 8u, 240u, 140u, 6u, 4u, 150u, 136u, 240u, 139u,
134u, 4u, 139u, 8u, 240u, 139u, 6u, 4u, 151u, 200u, 240u, 138u, 6u,
4u, 209u, 29u, 130u, 60u, 34u, 65u, 129u, 52u, 70u, 76u, 143u, 8u,
136u, 96u, 73u, 208u, 143u, 8u, 112u, 96u, 157u, 167u, 57u, 220u,
145u, 225u, 13u, 12u, 9u, 59u, 145u, 225u, 12u, 12u, 9u, 57u, 145u,
225u, 10u, 12u, 18u, 108u, 191u, 22u, 18u, 60u, 33u, 33u, 129u, 34u,
194u, 60u, 32u, 193u, 130u, 118u, 156u, 231u, 130u, 71u, 132u, 20u,
48u, 36u, 240u, 71u, 132u, 16u, 48u, 36u, 230u, 71u, 132u, 8u, 48u,
38u, 141u, 203u, 17u, 225u, 0u, 12u, 18u, 52u, 183u, 58u, 18u, 59u,
248u, 96u, 73u, 208u, 142u, 252u, 24u, 18u, 91u, 35u, 189u, 134u, 8u,
144u, 72u, 211u, 204u, 245u, 58u, 153u, 232u, 145u, 222u, 131u, 2u,
79u, 68u, 119u, 128u, 192u, 154u, 61u, 34u, 71u, 119u, 12u, 9u, 163u,
210u, 36u, 119u, 96u, 192u, 147u, 209u, 29u, 212u, 48u, 36u, 242u,
71u, 115u, 12u, 9u, 163u, 208u, 132u, 118u, 240u, 193u, 18u, 7u, 73u,
230u, 122u, 157u, 76u, 244u, 72u, 237u, 193u, 129u, 39u, 162u, 59u,
96u, 96u, 77u, 33u, 140u, 35u, 181u, 134u, 4u, 210u, 24u, 194u, 59u,
80u, 96u, 73u, 228u, 142u, 208u, 24u, 19u, 72u, 87u, 200u, 236u, 193u,
130u, 123u, 158u, 120u, 1u, 35u, 177u, 134u, 9u, 26u, 90u, 139u, 9u,
29u, 136u, 48u, 36u, 88u, 71u, 97u, 12u, 9u, 45u, 17u, 215u, 195u, 4u,
41u, 60u, 9u, 218u, 91u, 18u, 52u, 241u, 192u, 73u, 36u, 117u, 208u,
192u, 154u, 75u, 168u, 71u, 92u, 12u, 9u, 164u, 193u, 100u, 117u,
176u, 192u, 146u, 217u, 29u, 100u, 48u, 38u, 146u, 234u, 17u, 214u,
3u, 2u, 79u, 4u, 117u, 96u, 192u, 146u, 209u, 29u, 84u, 48u, 36u,
182u, 71u, 82u, 12u, 19u, 180u, 183u, 59u, 146u, 58u, 136u, 96u, 73u,
220u, 142u, 160u, 24u, 18u, 91u, 35u, 167u, 6u, 9u, 54u, 90u, 139u,
9u, 29u, 52u, 48u, 36u, 88u, 71u, 74u, 12u, 19u, 180u, 183u, 60u, 18u,
58u, 72u, 96u, 73u, 224u, 142u, 144u, 24u, 18u, 91u, 35u, 163u, 6u,
4u, 210u, 176u, 178u, 58u, 24u, 96u, 152u, 248u, 8u, 159u, 4u, 126u,
36u, 8u, 179u, 129u, 25u, 224u, 146u, 71u, 65u, 12u, 9u, 165u, 153u,
4u, 116u, 0u, 192u, 154u, 89u, 170u, 71u, 63u, 12u, 9u, 60u, 17u,
207u, 3u, 2u, 105u, 104u, 17u, 28u, 232u, 48u, 36u, 88u, 71u, 56u,
12u, 9u, 165u, 160u, 68u, 115u, 96u, 192u, 154u, 89u, 144u, 71u, 51u,
12u, 9u, 165u, 146u, 4u, 115u, 32u, 192u, 200u, 4u, 238u, 37u, 137u,
160u, 145u, 60u, 9u, 102u, 104u, 36u, 137u, 244u, 9u, 108u, 38u, 150u,
72u, 17u, 45u, 4u, 210u, 176u, 178u, 67u, 40u, 77u, 42u, 68u, 9u,
165u, 34u, 97u, 145u, 196u, 9u, 110u, 91u, 34u, 90u, 150u, 137u, 19u,
232u, 19u, 208u, 77u, 37u, 157u, 34u, 121u, 9u, 164u, 145u, 132u, 78u,
129u, 148u, 38u, 146u, 7u, 4u, 210u, 21u, 240u, 154u, 61u, 8u, 72u,
156u, 194u, 104u, 234u, 153u, 18u, 248u, 77u, 27u, 150u, 36u, 50u,
132u, 209u, 172u, 48u, 154u, 51u, 0u, 19u, 68u, 84u, 137u, 36u, 146u,
57u, 128u, 96u, 77u, 49u, 68u, 35u, 151u, 134u, 4u, 154u, 8u, 229u,
161u, 129u, 52u, 197u, 16u, 142u, 86u, 24u, 19u, 76u, 54u, 136u, 229u,
65u, 129u, 38u, 130u, 57u, 64u, 96u, 77u, 48u, 218u, 35u, 147u, 6u,
1u, 12u, 197u, 132u, 38u, 152u, 79u, 146u, 57u, 32u, 96u, 77u, 57u,
23u, 35u, 145u, 134u, 4u, 139u, 8u, 228u, 33u, 129u, 52u, 228u, 92u,
142u, 60u, 24u, 35u, 241u, 55u, 69u, 130u, 70u, 154u, 9u, 36u, 113u,
192u, 192u, 154u, 118u, 14u, 71u, 27u, 12u, 9u, 167u, 99u, 196u, 113u,
160u, 192u, 147u, 65u, 28u, 100u, 48u, 36u, 88u, 71u, 23u, 12u, 9u,
167u, 96u, 228u, 113u, 80u, 193u, 26u, 77u, 28u, 0u, 145u, 196u, 67u,
4u, 213u, 22u, 77u, 4u, 142u, 32u, 24u, 18u, 104u, 35u, 135u, 134u,
4u, 139u, 8u, 225u, 161u, 130u, 52u, 139u, 56u, 1u, 35u, 132u, 134u,
9u, 250u, 44u, 154u, 9u, 28u, 32u, 48u, 36u, 208u, 71u, 7u, 12u, 9u,
22u, 17u, 193u, 67u, 0u, 134u, 102u, 130u, 19u, 79u, 229u, 9u, 28u,
12u, 48u, 38u, 160u, 100u, 17u, 192u, 131u, 2u, 77u, 4u, 112u, 0u,
192u, 154u, 129u, 144u, 67u, 16u, 96u, 99u, 17u, 100u, 208u, 67u, 96u,
77u, 64u, 197u, 1u, 52u, 252u, 88u, 38u, 159u, 2u, 144u, 19u, 79u,
97u, 194u, 105u, 214u, 209u, 9u, 167u, 34u, 129u, 164u, 59u, 4u, 197u,
160u, 38u, 4u, 68u, 146u, 72u,};
static unsigned char uvector__00029[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 55u, 69u, 147u, 65u, 13u, 128u, 67u, 51u,
65u, 19u, 244u, 89u, 52u, 18u, 4u, 105u, 22u, 112u, 2u, 38u, 168u,
178u, 104u, 36u, 8u, 210u, 104u, 224u, 4u, 71u, 226u, 110u, 139u, 4u,
141u, 52u, 18u, 72u, 16u, 204u, 88u, 67u, 32u, 19u, 184u, 150u, 38u,
130u, 68u, 240u, 37u, 153u, 160u, 146u, 39u, 208u, 37u, 177u, 49u,
240u, 17u, 62u, 8u, 252u, 72u, 17u, 103u, 2u, 51u, 193u, 36u, 137u,
104u, 78u, 210u, 220u, 240u, 73u, 12u, 162u, 77u, 150u, 162u, 194u,
39u, 105u, 110u, 119u, 33u, 145u, 196u, 9u, 110u, 91u, 34u, 90u, 150u,
137u, 19u, 232u, 19u, 208u, 133u, 39u, 129u, 59u, 75u, 98u, 70u, 158u,
56u, 9u, 36u, 137u, 228u, 72u, 210u, 212u, 88u, 72u, 157u, 3u, 40u,
158u, 231u, 158u, 0u, 68u, 72u, 29u, 39u, 153u, 234u, 117u, 51u, 209u,
17u, 32u, 145u, 167u, 153u, 234u, 117u, 51u, 209u, 36u, 78u, 98u, 70u,
150u, 231u, 66u, 68u, 190u, 39u, 105u, 206u, 120u, 36u, 134u, 81u,
38u, 203u, 241u, 97u, 19u, 180u, 231u, 59u, 144u, 202u, 29u, 131u,
128u, 147u, 103u, 78u, 2u, 68u, 105u, 47u, 197u, 146u, 209u, 33u,
192u, 73u, 179u, 164u, 234u, 68u, 105u, 45u, 69u, 146u, 249u, 36u,
77u, 81u, 100u, 208u, 67u, 140u, 231u, 47u, 146u, 73u, 36u, 144u,
210u, 29u, 132u, 228u, 4u, 224u, 38u, 225u, 44u, 69u, 134u, 104u, 36u,
9u, 118u, 112u, 36u, 78u, 34u, 110u, 18u, 204u, 88u, 102u, 130u, 64u,
151u, 103u, 18u, 72u, 143u, 231u, 9u, 196u, 145u, 53u, 69u, 147u, 65u,
36u, 146u, 56u, 72u, 96u, 99u, 9u, 129u, 138u, 96u, 144u, 71u, 7u,
12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u,
152u, 14u, 18u,};
static unsigned char uvector__00030[] = {
 0u, 3u, 154u, 6u, 6u, 120u, 218u, 55u, 36u, 115u, 48u, 192u, 145u,
185u, 28u, 184u, 48u, 72u, 66u, 20u, 19u, 252u, 88u, 69u, 8u, 4u,
208u, 72u, 145u, 132u, 40u, 40u, 64u, 98u, 194u, 40u, 64u, 166u, 130u,
73u, 35u, 150u, 134u, 4u, 195u, 96u, 142u, 88u, 24u, 19u, 14u, 82u,
57u, 80u, 96u, 76u, 68u, 136u, 229u, 33u, 129u, 38u, 130u, 57u, 56u,
96u, 76u, 68u, 136u, 228u, 161u, 129u, 48u, 242u, 35u, 146u, 6u, 4u,
139u, 8u, 228u, 65u, 129u, 48u, 242u, 35u, 144u, 134u, 4u, 194u, 56u,
142u, 62u, 24u, 19u, 11u, 82u, 56u, 240u, 96u, 73u, 160u, 142u, 56u,
24u, 19u, 11u, 82u, 56u, 208u, 96u, 76u, 38u, 200u, 227u, 33u, 129u,
34u, 194u, 56u, 184u, 96u, 76u, 38u, 200u, 226u, 193u, 129u, 144u, 8u,
176u, 71u, 81u, 185u, 34u, 104u, 17u, 220u, 110u, 73u, 9u, 132u, 9u,
35u, 138u, 6u, 4u, 208u, 133u, 178u, 56u, 152u, 96u, 72u, 220u, 142u,
34u, 24u, 19u, 66u, 22u, 200u, 225u, 225u, 129u, 52u, 32u, 68u, 142u,
28u, 24u, 18u, 55u, 35u, 134u, 6u, 4u, 208u, 129u, 18u, 56u, 80u, 96u,
19u, 76u, 110u, 66u, 103u, 236u, 72u, 225u, 33u, 129u, 52u, 45u, 76u,
142u, 16u, 24u, 18u, 55u, 35u, 130u, 134u, 9u, 254u, 55u, 36u, 112u,
64u, 192u, 145u, 185u, 28u, 8u, 48u, 8u, 246u, 55u, 33u, 52u, 50u,
112u, 145u, 192u, 67u, 2u, 104u, 106u, 225u, 28u, 0u, 48u, 36u, 110u,
67u, 16u, 96u, 99u, 17u, 185u, 13u, 129u, 52u, 53u, 100u, 38u, 133u,
168u, 6u, 144u, 152u, 14u, 18u, 73u, 0u,};
static unsigned char uvector__00031[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 20u, 32u, 113u, 185u, 13u, 128u,
71u, 177u, 185u, 19u, 252u, 110u, 72u, 19u, 76u, 110u, 67u, 32u, 17u,
96u, 142u, 163u, 114u, 68u, 208u, 35u, 184u, 220u, 146u, 36u, 33u,
10u, 9u, 254u, 44u, 34u, 132u, 2u, 104u, 36u, 72u, 194u, 20u, 20u,
32u, 49u, 97u, 20u, 32u, 83u, 65u, 36u, 146u, 26u, 67u, 60u, 109u,
27u, 146u, 73u, 28u, 36u, 48u, 49u, 132u, 193u, 13u, 48u, 80u, 35u,
131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u,
96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00032[] = {
 0u, 3u, 153u, 134u, 6u, 120u, 218u, 55u, 36u, 115u, 32u, 192u, 145u,
185u, 28u, 180u, 48u, 72u, 66u, 20u, 20u, 32u, 17u, 97u, 19u, 252u,
208u, 72u, 133u, 5u, 8u, 20u, 88u, 69u, 8u, 12u, 208u, 73u, 35u, 150u,
6u, 4u, 195u, 96u, 142u, 84u, 24u, 19u, 16u, 82u, 57u, 72u, 96u, 73u,
160u, 142u, 78u, 24u, 19u, 16u, 82u, 57u, 40u, 96u, 76u, 57u, 72u,
228u, 129u, 129u, 34u, 194u, 57u, 16u, 96u, 76u, 57u, 72u, 228u, 33u,
129u, 48u, 142u, 35u, 143u, 134u, 4u, 194u, 236u, 142u, 60u, 24u, 18u,
104u, 35u, 142u, 6u, 4u, 194u, 236u, 142u, 52u, 24u, 19u, 9u, 178u,
56u, 200u, 96u, 72u, 176u, 142u, 46u, 24u, 19u, 9u, 178u, 56u, 176u,
96u, 100u, 2u, 44u, 17u, 212u, 110u, 72u, 154u, 4u, 119u, 27u, 146u,
66u, 97u, 2u, 72u, 226u, 129u, 129u, 51u, 253u, 35u, 137u, 134u, 4u,
141u, 200u, 226u, 33u, 129u, 51u, 253u, 35u, 135u, 134u, 4u, 207u,
76u, 142u, 28u, 24u, 18u, 55u, 35u, 134u, 6u, 4u, 207u, 76u, 142u,
20u, 24u, 4u, 211u, 27u, 144u, 153u, 220u, 18u, 56u, 72u, 96u, 77u,
10u, 157u, 35u, 132u, 6u, 4u, 141u, 200u, 224u, 161u, 130u, 132u, 2u,
55u, 36u, 112u, 64u, 192u, 145u, 185u, 28u, 8u, 48u, 8u, 246u, 55u,
33u, 52u, 48u, 24u, 145u, 192u, 67u, 2u, 104u, 102u, 97u, 28u, 0u,
48u, 36u, 110u, 67u, 16u, 96u, 99u, 17u, 185u, 13u, 129u, 52u, 51u,
36u, 38u, 133u, 77u, 6u, 144u, 152u, 14u, 18u, 73u, 0u,};
static unsigned char uvector__00033[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 9u, 27u, 144u, 216u, 4u, 123u, 27u,
145u, 66u, 1u, 27u, 146u, 4u, 211u, 27u, 144u, 200u, 4u, 88u, 35u,
168u, 220u, 145u, 52u, 8u, 238u, 55u, 36u, 137u, 8u, 66u, 130u, 132u,
2u, 44u, 34u, 127u, 154u, 9u, 16u, 160u, 161u, 2u, 139u, 8u, 161u, 1u,
154u, 9u, 36u, 134u, 144u, 207u, 27u, 70u, 228u, 146u, 71u, 9u, 12u,
12u, 97u, 48u, 55u, 76u, 17u, 8u, 224u, 225u, 129u, 48u, 28u, 35u,
129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00034[] = {
 0u, 3u, 153u, 134u, 6u, 120u, 218u, 55u, 36u, 115u, 32u, 192u, 145u,
185u, 28u, 180u, 48u, 72u, 66u, 20u, 20u, 32u, 49u, 97u, 20u, 32u,
19u, 65u, 34u, 20u, 19u, 252u, 88u, 69u, 8u, 20u, 208u, 73u, 35u,
150u, 6u, 4u, 195u, 120u, 142u, 84u, 24u, 19u, 16u, 82u, 57u, 72u,
96u, 73u, 160u, 142u, 78u, 24u, 19u, 16u, 82u, 57u, 40u, 96u, 76u,
58u, 200u, 228u, 129u, 129u, 34u, 194u, 57u, 16u, 96u, 76u, 58u, 200u,
228u, 33u, 129u, 48u, 142u, 35u, 143u, 134u, 4u, 194u, 236u, 142u,
60u, 24u, 18u, 104u, 35u, 142u, 6u, 4u, 194u, 236u, 142u, 52u, 24u,
19u, 9u, 178u, 56u, 200u, 96u, 72u, 176u, 142u, 46u, 24u, 19u, 9u,
178u, 56u, 176u, 96u, 100u, 2u, 44u, 17u, 212u, 110u, 72u, 154u, 4u,
119u, 27u, 146u, 66u, 97u, 2u, 72u, 226u, 129u, 129u, 51u, 253u, 35u,
137u, 134u, 4u, 141u, 200u, 226u, 33u, 129u, 51u, 253u, 35u, 135u,
134u, 4u, 207u, 76u, 142u, 28u, 24u, 18u, 55u, 35u, 134u, 6u, 4u,
207u, 76u, 142u, 20u, 24u, 4u, 211u, 27u, 144u, 153u, 220u, 18u, 56u,
72u, 96u, 77u, 10u, 157u, 35u, 132u, 6u, 4u, 141u, 200u, 224u, 161u,
130u, 132u, 6u, 55u, 36u, 112u, 64u, 192u, 145u, 185u, 28u, 8u, 48u,
8u, 246u, 55u, 33u, 52u, 48u, 24u, 145u, 192u, 67u, 2u, 104u, 102u,
97u, 28u, 0u, 48u, 36u, 110u, 67u, 16u, 96u, 99u, 17u, 185u, 13u,
129u, 52u, 51u, 36u, 38u, 133u, 77u, 6u, 144u, 152u, 14u, 18u, 73u,
0u,};
static unsigned char uvector__00035[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 20u, 32u, 177u, 185u, 13u, 128u,
71u, 177u, 185u, 20u, 32u, 49u, 185u, 32u, 77u, 49u, 185u, 12u, 128u,
69u, 130u, 58u, 141u, 201u, 19u, 64u, 142u, 227u, 114u, 72u, 144u,
132u, 40u, 40u, 64u, 98u, 194u, 40u, 64u, 38u, 130u, 68u, 40u, 39u,
248u, 176u, 138u, 16u, 41u, 160u, 146u, 72u, 105u, 12u, 241u, 180u,
110u, 73u, 36u, 112u, 144u, 192u, 198u, 19u, 4u, 52u, 193u, 64u, 142u,
14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u,
48u, 28u, 36u,};
static unsigned char uvector__00036[] = {
 0u, 3u, 153u, 134u, 6u, 120u, 218u, 55u, 36u, 115u, 32u, 192u, 145u,
185u, 28u, 180u, 48u, 72u, 66u, 20u, 20u, 32u, 81u, 97u, 19u, 252u,
208u, 72u, 133u, 5u, 8u, 4u, 88u, 69u, 8u, 12u, 208u, 73u, 35u, 150u,
6u, 4u, 195u, 96u, 142u, 84u, 24u, 19u, 16u, 82u, 57u, 72u, 96u, 73u,
160u, 142u, 78u, 24u, 19u, 16u, 82u, 57u, 40u, 96u, 76u, 57u, 72u,
228u, 129u, 129u, 34u, 194u, 57u, 16u, 96u, 76u, 57u, 72u, 228u, 33u,
129u, 48u, 142u, 35u, 143u, 134u, 4u, 194u, 236u, 142u, 60u, 24u, 18u,
104u, 35u, 142u, 6u, 4u, 194u, 236u, 142u, 52u, 24u, 19u, 9u, 178u,
56u, 200u, 96u, 72u, 176u, 142u, 46u, 24u, 19u, 9u, 178u, 56u, 176u,
96u, 100u, 2u, 44u, 17u, 212u, 110u, 72u, 154u, 4u, 119u, 27u, 146u,
66u, 97u, 2u, 72u, 226u, 129u, 129u, 51u, 253u, 35u, 137u, 134u, 4u,
141u, 200u, 226u, 33u, 129u, 51u, 253u, 35u, 135u, 134u, 4u, 207u,
76u, 142u, 28u, 24u, 18u, 55u, 35u, 134u, 6u, 4u, 207u, 76u, 142u,
20u, 24u, 4u, 211u, 27u, 144u, 153u, 220u, 18u, 56u, 72u, 96u, 77u,
10u, 157u, 35u, 132u, 6u, 4u, 141u, 200u, 224u, 161u, 130u, 132u, 10u,
55u, 36u, 112u, 64u, 192u, 145u, 185u, 28u, 8u, 48u, 8u, 246u, 55u,
33u, 52u, 48u, 24u, 145u, 192u, 67u, 2u, 104u, 102u, 97u, 28u, 0u,
48u, 36u, 110u, 67u, 16u, 96u, 99u, 17u, 185u, 13u, 129u, 52u, 51u,
36u, 38u, 133u, 77u, 6u, 144u, 152u, 14u, 18u, 73u, 0u,};
static unsigned char uvector__00037[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 13u, 27u, 144u, 216u, 4u, 123u, 27u,
145u, 66u, 5u, 27u, 146u, 4u, 211u, 27u, 144u, 200u, 4u, 88u, 35u,
168u, 220u, 145u, 52u, 8u, 238u, 55u, 36u, 137u, 8u, 66u, 130u, 132u,
10u, 44u, 34u, 127u, 154u, 9u, 16u, 160u, 161u, 0u, 139u, 8u, 161u,
1u, 154u, 9u, 36u, 134u, 144u, 207u, 27u, 70u, 228u, 146u, 71u, 9u,
12u, 12u, 97u, 48u, 55u, 76u, 17u, 8u, 224u, 225u, 129u, 48u, 28u,
35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00038[] = {
 0u, 3u, 152u, 134u, 6u, 120u, 218u, 55u, 36u, 115u, 0u, 192u, 145u,
185u, 28u, 176u, 48u, 66u, 148u, 32u, 226u, 63u, 18u, 48u, 143u, 168u,
66u, 8u, 143u, 132u, 141u, 66u, 16u, 73u, 14u, 130u, 62u, 161u, 8u,
34u, 62u, 18u, 53u, 8u, 65u, 36u, 146u, 57u, 88u, 96u, 76u, 39u, 136u,
229u, 65u, 129u, 49u, 11u, 35u, 148u, 6u, 4u, 196u, 216u, 142u, 78u,
24u, 19u, 20u, 50u, 57u, 48u, 96u, 74u, 16u, 130u, 57u, 32u, 96u, 76u,
77u, 136u, 228u, 65u, 129u, 49u, 22u, 35u, 144u, 134u, 4u, 161u, 8u,
35u, 143u, 134u, 4u, 196u, 88u, 142u, 60u, 24u, 19u, 10u, 178u, 56u,
224u, 96u, 76u, 54u, 8u, 227u, 97u, 129u, 48u, 229u, 35u, 141u, 6u,
4u, 161u, 8u, 35u, 140u, 6u, 4u, 195u, 96u, 142u, 44u, 24u, 19u, 11u,
130u, 56u, 168u, 96u, 74u, 16u, 130u, 56u, 152u, 96u, 76u, 46u, 8u,
226u, 1u, 129u, 144u, 10u, 16u, 129u, 10u, 77u, 145u, 185u, 36u, 38u,
16u, 36u, 142u, 30u, 24u, 19u, 66u, 87u, 200u, 225u, 193u, 129u, 35u,
114u, 56u, 80u, 96u, 19u, 76u, 110u, 67u, 109u, 8u, 64u, 77u, 9u, 95u,
9u, 132u, 9u, 36u, 112u, 144u, 192u, 154u, 21u, 182u, 71u, 8u, 12u,
9u, 27u, 145u, 193u, 67u, 5u, 8u, 76u, 110u, 72u, 224u, 129u, 129u,
35u, 114u, 56u, 16u, 96u, 17u, 236u, 110u, 66u, 104u, 100u, 233u, 35u,
128u, 134u, 4u, 208u, 216u, 50u, 56u, 0u, 96u, 72u, 220u, 134u, 32u,
192u, 198u, 35u, 114u, 27u, 2u, 104u, 108u, 0u, 77u, 10u, 216u, 13u,
33u, 48u, 28u, 36u, 146u,};
static unsigned char uvector__00039[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 20u, 33u, 81u, 185u, 13u, 128u, 71u,
177u, 185u, 20u, 33u, 49u, 185u, 32u, 77u, 49u, 185u, 13u, 180u, 33u,
2u, 20u, 155u, 35u, 114u, 33u, 74u, 16u, 113u, 31u, 137u, 24u, 71u,
212u, 33u, 4u, 71u, 194u, 70u, 161u, 8u, 36u, 135u, 65u, 31u, 80u,
132u, 17u, 31u, 9u, 26u, 132u, 32u, 146u, 73u, 33u, 164u, 51u, 198u,
209u, 185u, 36u, 145u, 194u, 67u, 3u, 24u, 76u, 16u, 211u, 5u, 2u,
56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u,
4u, 192u, 112u, 144u,};
static unsigned char uvector__00040[] = {
 0u, 3u, 148u, 134u, 6u, 120u, 218u, 55u, 36u, 114u, 128u, 192u, 145u,
185u, 28u, 144u, 48u, 71u, 226u, 70u, 17u, 244u, 110u, 68u, 124u, 36u,
104u, 220u, 146u, 29u, 4u, 125u, 27u, 145u, 31u, 9u, 26u, 55u, 36u,
146u, 57u, 24u, 96u, 76u, 56u, 136u, 228u, 33u, 129u, 49u, 7u, 35u,
144u, 6u, 4u, 196u, 80u, 142u, 62u, 24u, 18u, 55u, 35u, 142u, 134u,
4u, 196u, 28u, 142u, 54u, 24u, 19u, 14u, 210u, 56u, 208u, 96u, 72u,
220u, 142u, 48u, 24u, 19u, 14u, 210u, 56u, 184u, 96u, 76u, 35u, 136u,
226u, 161u, 129u, 48u, 181u, 35u, 138u, 6u, 4u, 195u, 8u, 142u, 38u,
24u, 18u, 55u, 35u, 136u, 134u, 4u, 194u, 212u, 142u, 30u, 24u, 19u,
9u, 178u, 56u, 112u, 96u, 72u, 220u, 142u, 24u, 24u, 19u, 9u, 178u,
56u, 80u, 96u, 19u, 76u, 110u, 66u, 97u, 2u, 72u, 225u, 33u, 129u,
52u, 33u, 12u, 142u, 16u, 24u, 18u, 55u, 35u, 130u, 134u, 10u, 16u,
184u, 220u, 145u, 193u, 3u, 2u, 70u, 228u, 112u, 32u, 192u, 35u, 216u,
220u, 132u, 208u, 152u, 194u, 71u, 1u, 12u, 9u, 161u, 74u, 68u, 112u,
0u, 192u, 145u, 185u, 12u, 65u, 129u, 140u, 70u, 228u, 54u, 4u, 208u,
164u, 240u, 154u, 16u, 128u, 26u, 66u, 96u, 56u, 73u, 36u,};
static unsigned char uvector__00041[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 25u, 27u, 144u, 216u, 4u, 123u, 27u,
145u, 66u, 23u, 27u, 146u, 4u, 211u, 27u, 145u, 31u, 137u, 24u, 71u,
209u, 185u, 17u, 240u, 145u, 163u, 114u, 72u, 116u, 17u, 244u, 110u,
68u, 124u, 36u, 104u, 220u, 146u, 72u, 105u, 12u, 241u, 180u, 110u,
73u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 116u, 193u, 16u, 142u, 14u,
24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u,
28u, 36u,};
static unsigned char uvector__00042[] = {
 0u, 3u, 156u, 6u, 6u, 120u, 218u, 55u, 36u, 115u, 112u, 192u, 145u,
185u, 28u, 204u, 48u, 66u, 148u, 32u, 226u, 64u, 161u, 13u, 36u, 142u,
98u, 24u, 19u, 9u, 226u, 57u, 128u, 96u, 74u, 16u, 210u, 57u, 112u,
96u, 76u, 39u, 136u, 229u, 1u, 130u, 52u, 20u, 33u, 194u, 68u, 161u,
13u, 34u, 68u, 141u, 201u, 161u, 15u, 36u, 114u, 64u, 192u, 152u,
185u, 145u, 200u, 131u, 2u, 99u, 76u, 71u, 33u, 12u, 9u, 27u, 145u,
199u, 195u, 2u, 99u, 76u, 71u, 29u, 12u, 9u, 140u, 49u, 28u, 112u,
48u, 37u, 8u, 105u, 28u, 104u, 48u, 38u, 48u, 196u, 113u, 144u, 192u,
200u, 5u, 8u, 104u, 116u, 16u, 164u, 217u, 27u, 145u, 47u, 9u, 27u,
128u, 136u, 82u, 55u, 141u, 201u, 36u, 144u, 202u, 19u, 22u, 97u, 33u,
70u, 17u, 129u, 9u, 132u, 9u, 36u, 113u, 128u, 192u, 153u, 168u, 17u,
197u, 131u, 2u, 102u, 254u, 71u, 21u, 12u, 9u, 156u, 97u, 28u, 80u,
48u, 38u, 116u, 132u, 113u, 48u, 192u, 145u, 185u, 28u, 72u, 48u, 36u,
110u, 71u, 16u, 12u, 9u, 155u, 249u, 28u, 60u, 48u, 38u, 107u, 100u,
112u, 224u, 192u, 145u, 185u, 28u, 40u, 48u, 9u, 166u, 55u, 33u, 182u,
132u, 52u, 38u, 106u, 1u, 51u, 215u, 36u, 142u, 18u, 24u, 19u, 66u,
241u, 8u, 225u, 1u, 129u, 35u, 114u, 56u, 40u, 96u, 161u, 16u, 141u,
201u, 28u, 16u, 48u, 36u, 110u, 71u, 2u, 12u, 2u, 61u, 141u, 200u,
77u, 13u, 128u, 36u, 112u, 16u, 192u, 154u, 28u, 140u, 71u, 0u, 12u,
9u, 27u, 144u, 196u, 24u, 24u, 196u, 110u, 67u, 96u, 77u, 14u, 67u,
9u, 161u, 120u, 33u, 164u, 38u, 3u, 132u, 146u, 64u,};
static unsigned char uvector__00043[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 20u, 34u, 49u, 185u, 13u, 128u, 71u,
177u, 185u, 20u, 34u, 17u, 185u, 32u, 77u, 49u, 185u, 13u, 180u, 33u,
161u, 208u, 66u, 147u, 100u, 110u, 68u, 188u, 36u, 110u, 2u, 33u, 72u,
222u, 55u, 36u, 144u, 202u, 35u, 65u, 66u, 28u, 36u, 74u, 16u, 210u,
36u, 72u, 220u, 154u, 16u, 242u, 36u, 40u, 194u, 48u, 34u, 20u, 161u,
7u, 18u, 5u, 8u, 105u, 36u, 144u, 210u, 25u, 227u, 104u, 220u, 146u,
72u, 225u, 33u, 129u, 140u, 38u, 8u, 105u, 130u, 129u, 28u, 28u, 48u,
38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u,
56u, 72u,};
static unsigned char uvector__00044[] = {
 0u, 3u, 151u, 134u, 6u, 120u, 218u, 55u, 36u, 114u, 224u, 192u, 145u,
185u, 28u, 164u, 48u, 72u, 20u, 33u, 164u, 142u, 80u, 24u, 18u, 132u,
52u, 142u, 72u, 24u, 35u, 65u, 66u, 28u, 36u, 74u, 16u, 210u, 36u,
72u, 220u, 154u, 16u, 242u, 71u, 32u, 12u, 9u, 135u, 185u, 28u, 120u,
48u, 38u, 37u, 68u, 113u, 208u, 192u, 145u, 185u, 28u, 108u, 48u, 38u,
37u, 68u, 113u, 144u, 192u, 152u, 133u, 17u, 198u, 3u, 2u, 80u, 134u,
145u, 197u, 131u, 2u, 98u, 20u, 71u, 21u, 12u, 12u, 128u, 80u, 134u,
135u, 72u, 220u, 75u, 193u, 208u, 66u, 145u, 188u, 110u, 120u, 9u,
36u, 144u, 202u, 19u, 14u, 161u, 33u, 70u, 17u, 129u, 9u, 132u, 9u,
36u, 113u, 64u, 192u, 153u, 106u, 17u, 196u, 131u, 2u, 101u, 210u,
71u, 17u, 12u, 9u, 151u, 177u, 28u, 64u, 48u, 38u, 96u, 36u, 112u,
240u, 192u, 145u, 185u, 28u, 56u, 48u, 36u, 110u, 71u, 12u, 12u, 9u,
151u, 73u, 28u, 40u, 48u, 9u, 166u, 55u, 33u, 182u, 132u, 52u, 38u,
90u, 129u, 51u, 63u, 36u, 142u, 18u, 24u, 19u, 66u, 117u, 8u, 225u,
1u, 129u, 35u, 114u, 56u, 40u, 96u, 161u, 18u, 141u, 201u, 28u, 16u,
48u, 36u, 110u, 71u, 2u, 12u, 2u, 61u, 141u, 200u, 77u, 11u, 144u,
36u, 112u, 16u, 192u, 154u, 24u, 172u, 71u, 0u, 12u, 9u, 27u, 144u,
196u, 24u, 24u, 196u, 110u, 67u, 96u, 77u, 12u, 83u, 9u, 161u, 58u,
33u, 164u, 38u, 3u, 132u, 146u, 64u,};
static unsigned char uvector__00045[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 39u, 27u, 144u, 216u, 4u, 123u, 27u,
145u, 66u, 37u, 27u, 146u, 4u, 211u, 27u, 144u, 219u, 66u, 26u, 29u,
35u, 113u, 47u, 7u, 65u, 10u, 70u, 241u, 185u, 224u, 36u, 144u, 202u,
35u, 65u, 66u, 28u, 36u, 74u, 16u, 210u, 36u, 72u, 220u, 154u, 16u,
242u, 36u, 40u, 194u, 48u, 34u, 64u, 161u, 13u, 36u, 144u, 210u, 25u,
227u, 104u, 220u, 146u, 72u, 225u, 33u, 129u, 140u, 38u, 6u, 233u,
130u, 33u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u,
17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00046[] = {
 0u, 3u, 140u, 6u, 6u, 120u, 218u, 55u, 36u, 113u, 112u, 192u, 145u,
185u, 28u, 76u, 48u, 72u, 212u, 34u, 130u, 132u, 70u, 55u, 36u, 142u,
34u, 24u, 19u, 9u, 226u, 56u, 128u, 96u, 72u, 220u, 142u, 28u, 24u,
19u, 9u, 226u, 56u, 80u, 96u, 19u, 76u, 110u, 66u, 97u, 2u, 72u, 225u,
33u, 129u, 49u, 99u, 35u, 132u, 6u, 4u, 141u, 200u, 224u, 161u, 130u,
132u, 86u, 55u, 36u, 112u, 64u, 192u, 145u, 185u, 28u, 8u, 48u, 8u,
246u, 55u, 33u, 50u, 6u, 36u, 112u, 16u, 192u, 153u, 54u, 17u, 192u,
3u, 2u, 70u, 228u, 49u, 6u, 6u, 49u, 27u, 144u, 216u, 19u, 38u, 144u,
152u, 176u, 6u, 144u, 152u, 14u, 18u, 73u, 0u,};
static unsigned char uvector__00047[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 20u, 34u, 209u, 185u, 13u, 128u,
71u, 177u, 185u, 20u, 34u, 177u, 185u, 32u, 77u, 49u, 185u, 18u, 53u,
8u, 160u, 161u, 17u, 141u, 201u, 33u, 164u, 51u, 198u, 209u, 185u,
36u, 145u, 194u, 67u, 3u, 24u, 76u, 16u, 211u, 5u, 2u, 56u, 56u, 96u,
76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u,
144u,};
static unsigned char uvector__00048[] = {
 0u, 3u, 146u, 134u, 6u, 120u, 218u, 55u, 36u, 114u, 64u, 192u, 145u,
185u, 28u, 128u, 48u, 66u, 156u, 8u, 72u, 1u, 208u, 75u, 194u, 63u,
14u, 145u, 191u, 1u, 60u, 8u, 145u, 47u, 8u, 252u, 72u, 209u, 191u,
1u, 60u, 8u, 146u, 73u, 28u, 120u, 48u, 38u, 19u, 36u, 113u, 208u,
192u, 152u, 83u, 17u, 198u, 195u, 2u, 97u, 254u, 71u, 26u, 12u, 9u,
136u, 97u, 28u, 96u, 48u, 38u, 35u, 36u, 113u, 96u, 192u, 152u, 127u,
145u, 197u, 3u, 2u, 97u, 98u, 71u, 19u, 12u, 9u, 133u, 241u, 28u, 68u,
48u, 38u, 25u, 100u, 112u, 240u, 192u, 152u, 88u, 145u, 195u, 67u, 2u,
97u, 50u, 71u, 10u, 12u, 2u, 105u, 141u, 200u, 76u, 32u, 73u, 28u,
36u, 48u, 38u, 109u, 196u, 112u, 128u, 192u, 145u, 185u, 28u, 20u,
48u, 80u, 139u, 198u, 228u, 142u, 8u, 24u, 18u, 55u, 35u, 129u, 6u,
1u, 30u, 198u, 228u, 38u, 132u, 8u, 146u, 56u, 8u, 96u, 77u, 8u, 215u,
35u, 128u, 6u, 4u, 141u, 200u, 98u, 12u, 12u, 98u, 55u, 33u, 176u,
38u, 132u, 106u, 4u, 205u, 172u, 52u, 132u, 192u, 112u, 146u, 72u,};
static unsigned char uvector__00049[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 49u, 27u, 144u, 216u, 4u, 123u, 27u,
145u, 66u, 47u, 27u, 146u, 4u, 211u, 27u, 145u, 10u, 112u, 33u, 32u,
7u, 65u, 47u, 8u, 252u, 58u, 70u, 252u, 4u, 240u, 34u, 68u, 188u, 35u,
241u, 35u, 70u, 252u, 4u, 240u, 34u, 73u, 36u, 52u, 134u, 120u, 218u,
55u, 36u, 146u, 56u, 72u, 96u, 99u, 9u, 129u, 186u, 96u, 136u, 71u,
7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u,
152u, 14u, 18u,};
static unsigned char uvector__00050[] = {
 0u, 3u, 170u, 134u, 6u, 122u, 17u, 144u, 251u, 27u, 134u, 136u, 176u,
146u, 71u, 84u, 12u, 9u, 129u, 185u, 29u, 76u, 48u, 38u, 9u, 132u,
117u, 32u, 192u, 145u, 185u, 29u, 52u, 48u, 72u, 241u, 184u, 104u,
139u, 9u, 35u, 166u, 6u, 4u, 196u, 128u, 142u, 150u, 24u, 18u, 55u,
35u, 164u, 6u, 8u, 244u, 52u, 69u, 132u, 145u, 209u, 195u, 2u, 99u,
114u, 71u, 69u, 12u, 1u, 192u, 71u, 177u, 185u, 9u, 141u, 97u, 9u,
136u, 73u, 35u, 162u, 6u, 4u, 200u, 164u, 142u, 134u, 24u, 18u, 55u,
35u, 158u, 134u, 1u, 66u, 53u, 27u, 154u, 17u, 178u, 71u, 59u, 12u,
9u, 151u, 57u, 28u, 232u, 48u, 36u, 110u, 71u, 56u, 12u, 9u, 151u,
57u, 28u, 204u, 48u, 61u, 198u, 252u, 0u, 145u, 204u, 131u, 2u, 70u,
228u, 115u, 0u, 193u, 20u, 70u, 228u, 142u, 94u, 24u, 18u, 55u, 35u,
150u, 6u, 7u, 176u, 209u, 22u, 30u, 0u, 72u, 229u, 97u, 129u, 52u,
36u, 28u, 142u, 80u, 24u, 25u, 227u, 104u, 220u, 145u, 201u, 195u, 2u,
70u, 228u, 114u, 48u, 193u, 31u, 137u, 24u, 72u, 1u, 211u, 128u, 208u,
132u, 18u, 36u, 1u, 35u, 112u, 26u, 16u, 130u, 77u, 8u, 225u, 35u,
143u, 134u, 4u, 208u, 172u, 194u, 56u, 232u, 96u, 77u, 11u, 82u, 35u,
142u, 6u, 4u, 208u, 181u, 242u, 56u, 216u, 96u, 74u, 16u, 130u, 56u,
200u, 96u, 77u, 11u, 82u, 35u, 139u, 134u, 4u, 208u, 173u, 146u, 56u,
176u, 96u, 77u, 11u, 6u, 35u, 138u, 6u, 4u, 208u, 173u, 146u, 56u,
152u, 96u, 100u, 2u, 132u, 32u, 66u, 145u, 188u, 216u, 73u, 9u, 161u,
83u, 228u, 142u, 36u, 24u, 19u, 67u, 230u, 72u, 225u, 225u, 129u, 35u,
114u, 56u, 104u, 96u, 19u, 76u, 110u, 67u, 109u, 8u, 64u, 77u, 15u,
153u, 9u, 161u, 83u, 228u, 145u, 195u, 3u, 2u, 104u, 136u, 217u, 28u,
44u, 48u, 36u, 110u, 71u, 8u, 12u, 18u, 60u, 110u, 72u, 224u, 225u,
129u, 35u, 114u, 56u, 40u, 96u, 17u, 236u, 110u, 66u, 104u, 152u, 25u,
35u, 130u, 6u, 4u, 209u, 60u, 50u, 56u, 24u, 96u, 72u, 220u, 142u, 2u,
24u, 26u, 226u, 194u, 71u, 0u, 12u, 9u, 22u, 16u, 196u, 24u, 24u,
196u, 110u, 145u, 96u, 101u, 9u, 162u, 162u, 65u, 176u, 38u, 137u,
224u, 4u, 209u, 17u, 128u, 210u, 19u, 66u, 118u, 137u, 13u, 128u, 56u,
4u, 208u, 141u, 192u, 154u, 16u, 62u, 67u, 96u, 9u, 157u, 204u, 96u,
66u, 101u, 200u, 26u, 104u, 69u, 9u, 33u, 50u, 27u, 13u, 33u, 48u,
28u, 36u, 146u, 64u,};
static unsigned char uvector__00051[] = {
 0u, 3u, 134u, 6u, 8u, 130u, 33u, 20u, 35u, 177u, 186u, 69u, 129u,
148u, 53u, 197u, 132u, 54u, 1u, 30u, 198u, 228u, 72u, 241u, 185u, 32u,
77u, 49u, 185u, 13u, 180u, 33u, 2u, 20u, 141u, 230u, 194u, 35u, 241u,
35u, 9u, 0u, 58u, 112u, 26u, 16u, 130u, 68u, 128u, 36u, 110u, 3u, 66u,
16u, 73u, 161u, 28u, 36u, 134u, 144u, 207u, 27u, 70u, 228u, 144u,
216u, 3u, 128u, 123u, 13u, 17u, 97u, 224u, 4u, 69u, 17u, 185u, 33u,
176u, 7u, 184u, 223u, 128u, 24u, 192u, 129u, 66u, 53u, 27u, 154u, 17u,
178u, 26u, 104u, 69u, 9u, 32u, 56u, 8u, 246u, 55u, 34u, 61u, 13u, 17u,
97u, 36u, 72u, 241u, 184u, 104u, 139u, 9u, 33u, 164u, 51u, 208u, 140u,
135u, 216u, 220u, 52u, 69u, 132u, 146u, 73u, 35u, 132u, 134u, 6u, 48u,
152u, 33u, 166u, 11u, 100u, 112u, 112u, 192u, 152u, 14u, 17u, 192u,
131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00052[] = {
 0u, 3u, 143u, 134u, 6u, 120u, 218u, 55u, 36u, 113u, 224u, 192u, 145u,
185u, 28u, 104u, 48u, 71u, 226u, 70u, 18u, 0u, 116u, 224u, 49u, 185u,
34u, 64u, 18u, 55u, 1u, 141u, 201u, 60u, 8u, 145u, 197u, 195u, 2u,
97u, 28u, 71u, 21u, 12u, 9u, 134u, 113u, 28u, 80u, 48u, 38u, 27u,
100u, 113u, 48u, 192u, 145u, 185u, 28u, 68u, 48u, 38u, 25u, 196u,
112u, 240u, 192u, 152u, 77u, 145u, 195u, 131u, 2u, 97u, 80u, 71u, 12u,
12u, 9u, 132u, 217u, 28u, 40u, 48u, 9u, 166u, 55u, 33u, 48u, 129u,
36u, 112u, 144u, 192u, 153u, 78u, 17u, 194u, 3u, 2u, 70u, 228u, 112u,
80u, 193u, 66u, 61u, 27u, 146u, 56u, 32u, 96u, 72u, 220u, 142u, 4u,
24u, 4u, 123u, 27u, 144u, 153u, 159u, 146u, 56u, 8u, 96u, 76u, 233u,
72u, 224u, 1u, 129u, 35u, 114u, 24u, 131u, 3u, 24u, 141u, 200u, 108u,
9u, 157u, 16u, 76u, 166u, 67u, 72u, 76u, 7u, 9u, 36u, 128u,};
static unsigned char uvector__00053[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 63u, 27u, 144u, 216u, 4u, 123u, 27u,
145u, 66u, 61u, 27u, 146u, 4u, 211u, 27u, 145u, 31u, 137u, 24u, 72u,
1u, 211u, 128u, 198u, 228u, 137u, 0u, 72u, 220u, 6u, 55u, 36u, 240u,
34u, 67u, 72u, 103u, 141u, 163u, 114u, 73u, 35u, 132u, 134u, 6u, 48u,
152u, 27u, 166u, 8u, 132u, 112u, 112u, 192u, 152u, 14u, 17u, 192u,
131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static ScmObj libnumradians_TOdegrees(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumradians_TOdegrees__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumradians_TOdegrees, NULL, NULL);

static ScmObj libnumdegrees_TOradians(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumdegrees_TOradians__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumdegrees_TOradians, NULL, NULL);

static ScmObj libnumash(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumash__STUB, 2, 0,1, SCM_FALSE,0, libnumash, NULL, NULL);

static ScmObj libnumlognot(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumlognot__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumlognot, NULL, NULL);

static ScmObj libnumlogand(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumlogand__STUB, 0, 3,1, SCM_FALSE,0, libnumlogand, NULL, NULL);

static ScmObj libnumlogior(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumlogior__STUB, 0, 3,1, SCM_FALSE,0, libnumlogior, NULL, NULL);

static ScmObj libnumlogxor(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumlogxor__STUB, 0, 3,1, SCM_FALSE,0, libnumlogxor, NULL, NULL);

static ScmObj libnumlogcount(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumlogcount__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumlogcount, NULL, NULL);

static ScmObj libnumlogset_2bclear(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumlogset_2bclear__STUB, 3, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumlogset_2bclear, NULL, NULL);

static ScmObj libnuminteger_length(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnuminteger_length__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnuminteger_length, NULL, NULL);

static ScmObj libnumtwos_exponent_factor(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumtwos_exponent_factor__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumtwos_exponent_factor, NULL, NULL);

static ScmObj libnumtwos_exponent(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumtwos_exponent__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumtwos_exponent, NULL, NULL);

static ScmObj libnuminexact__2f(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnuminexact__2f__STUB, 1, 1,SCM_FALSE,libnuminexact__2f, NULL, NULL);

static ScmObj libnum_2b_2e(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_2b_2e__STUB, 0, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_2b_2e, NULL, NULL);

static ScmObj libnum_2a_2e(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_2a_2e__STUB, 0, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnum_2a_2e, NULL, NULL);

static ScmObj libnum__2e(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum__2e__STUB, 1, 1,1, SCM_FALSE,0, libnum__2e, NULL, NULL);

static ScmObj libnum_2f_2e(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnum_2f_2e__STUB, 1, 1,1, SCM_FALSE,0, libnum_2f_2e, NULL, NULL);

static ScmObj libnumclamp(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumclamp__STUB, 1, 3,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumclamp, NULL, NULL);

static ScmObj libnumquotient_26remainder(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnumquotient_26remainder__STUB, 2, 0,SCM_FALSE,libnumquotient_26remainder, NULL, NULL);

static ScmObj libnummake_rectangular(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnummake_rectangular__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnummake_rectangular, NULL, NULL);

static ScmObj libnummake_polar(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnummake_polar__STUB, 2, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnummake_polar, NULL, NULL);

static ScmObj libnumreal_part(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumreal_part__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumreal_part, NULL, NULL);

static ScmObj libnumimag_part(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumimag_part__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumimag_part, NULL, NULL);

static ScmObj libnummagnitude(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnummagnitude__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnummagnitude, NULL, NULL);

static ScmObj libnumangle(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnumangle__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnumangle, NULL, NULL);


static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
#if defined(HAVE_LGAMMA)
  ScmString d2159[8];
#endif /*defined(HAVE_LGAMMA)*/
#if defined(HAVE_TGAMMA)
  ScmString d2156[8];
#endif /*defined(HAVE_TGAMMA)*/
  ScmString d2148[254];
} scm__sc SCM_UNUSED = {
#if defined(HAVE_LGAMMA)
  {   /* ScmString d2159 */
      SCM_STRING_CONST_INITIALIZER("%lgamma", 7, 7),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libnum.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<double>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
  },
#endif /*defined(HAVE_LGAMMA)*/
#if defined(HAVE_TGAMMA)
  {   /* ScmString d2156 */
      SCM_STRING_CONST_INITIALIZER("%gamma", 6, 6),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libnum.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<double>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
  },
#endif /*defined(HAVE_TGAMMA)*/
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("number\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libnum.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("complex\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("real\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rational\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("integer\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("exact\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("inexact\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("zero\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<number>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("positive\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("negative\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("odd\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("even\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("fixnum\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("bignum\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("flonum\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ratnum\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("finite\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("infinite\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("nan\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("negative-zero\077", 14, 14),
      SCM_STRING_CONST_INITIALIZER("exact-integer\077", 14, 14),
      SCM_STRING_CONST_INITIALIZER("fixnum-width", 12, 12),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("least-fixnum", 12, 12),
      SCM_STRING_CONST_INITIALIZER("<long>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("greatest-fixnum", 15, 15),
      SCM_STRING_CONST_INITIALIZER("native-endian", 13, 13),
      SCM_STRING_CONST_INITIALIZER("flonum-epsilon", 14, 14),
      SCM_STRING_CONST_INITIALIZER("least-positive-normalized-flonum", 32, 32),
      SCM_STRING_CONST_INITIALIZER("least-positive-flonum", 21, 21),
      SCM_STRING_CONST_INITIALIZER("greatest-positive-flonum", 24, 24),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("flonum-min-normalized", 21, 21),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("flonum-min-denormalized", 23, 23),
      SCM_STRING_CONST_INITIALIZER("%bignum-dump", 12, 12),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("=", 1, 1),
      SCM_STRING_CONST_INITIALIZER("arg0", 4, 4),
      SCM_STRING_CONST_INITIALIZER("arg1", 4, 4),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("optarray", 8, 8),
      SCM_STRING_CONST_INITIALIZER("oarg", 4, 4),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<=", 2, 2),
      SCM_STRING_CONST_INITIALIZER(">", 1, 1),
      SCM_STRING_CONST_INITIALIZER(">=", 2, 2),
      SCM_STRING_CONST_INITIALIZER("max", 3, 3),
      SCM_STRING_CONST_INITIALIZER("min", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<=:<", 4, 4),
      SCM_STRING_CONST_INITIALIZER("y", 1, 1),
      SCM_STRING_CONST_INITIALIZER("z", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<:<=", 4, 4),
      SCM_STRING_CONST_INITIALIZER("min&max", 7, 7),
      SCM_STRING_CONST_INITIALIZER("exact->inexact", 14, 14),
      SCM_STRING_CONST_INITIALIZER("inexact->exact", 14, 14),
      SCM_STRING_CONST_INITIALIZER("exact", 5, 5),
      SCM_STRING_CONST_INITIALIZER("inexact", 7, 7),
      SCM_STRING_CONST_INITIALIZER("number->string", 14, 14),
      SCM_STRING_CONST_INITIALIZER("uppercase", 9, 9),
      SCM_STRING_CONST_INITIALIZER("plus", 4, 4),
      SCM_STRING_CONST_INITIALIZER("radix", 5, 5),
      SCM_STRING_CONST_INITIALIZER("notational", 10, 10),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("flags", 5, 5),
      SCM_STRING_CONST_INITIALIZER("precision", 9, 9),
      SCM_STRING_CONST_INITIALIZER("string->number", 14, 14),
      SCM_STRING_CONST_INITIALIZER("default-exactness", 17, 17),
      SCM_STRING_CONST_INITIALIZER("<string>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("floor->exact", 12, 12),
      SCM_STRING_CONST_INITIALIZER("num", 3, 3),
      SCM_STRING_CONST_INITIALIZER("ceiling->exact", 14, 14),
      SCM_STRING_CONST_INITIALIZER("truncate->exact", 15, 15),
      SCM_STRING_CONST_INITIALIZER("round->exact", 12, 12),
      SCM_STRING_CONST_INITIALIZER("decode-float", 12, 12),
      SCM_STRING_CONST_INITIALIZER("fmod", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<double>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("frexp", 5, 5),
      SCM_STRING_CONST_INITIALIZER("d", 1, 1),
      SCM_STRING_CONST_INITIALIZER("modf", 4, 4),
      SCM_STRING_CONST_INITIALIZER("ldexp", 5, 5),
      SCM_STRING_CONST_INITIALIZER("exp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("log10", 5, 5),
      SCM_STRING_CONST_INITIALIZER("flonum->f16bits", 15, 15),
      SCM_STRING_CONST_INITIALIZER("+", 1, 1),
      SCM_STRING_CONST_INITIALIZER("-", 1, 1),
      SCM_STRING_CONST_INITIALIZER("/", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%apply-unary-generic", 20, 20),
      SCM_STRING_CONST_INITIALIZER("class-of", 8, 8),
      SCM_STRING_CONST_INITIALIZER("applicable\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("operation ~a is not defined on ~s.  This will be an error in future releases.\012", 78, 78),
      SCM_STRING_CONST_INITIALIZER("warn", 4, 4),
      SCM_STRING_CONST_INITIALIZER("gf", 2, 2),
      SCM_STRING_CONST_INITIALIZER("who", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%apply-unary-+", 14, 14),
      SCM_STRING_CONST_INITIALIZER("object-+", 8, 8),
      SCM_STRING_CONST_INITIALIZER("%apply-unary-*", 14, 14),
      SCM_STRING_CONST_INITIALIZER("object-*", 8, 8),
      SCM_STRING_CONST_INITIALIZER("abs", 3, 3),
      SCM_STRING_CONST_INITIALIZER("quotient", 8, 8),
      SCM_STRING_CONST_INITIALIZER("n1", 2, 2),
      SCM_STRING_CONST_INITIALIZER("n2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("remainder", 9, 9),
      SCM_STRING_CONST_INITIALIZER("modulo", 6, 6),
      SCM_STRING_CONST_INITIALIZER("integer required, but got", 25, 25),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("gcd", 3, 3),
      SCM_STRING_CONST_INITIALIZER("G2166", 5, 5),
      SCM_STRING_CONST_INITIALIZER("arg", 3, 3),
      SCM_STRING_CONST_INITIALIZER("map", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%gcd", 4, 4),
      SCM_STRING_CONST_INITIALIZER("lcm", 3, 3),
      SCM_STRING_CONST_INITIALIZER("G2167", 5, 5),
      SCM_STRING_CONST_INITIALIZER("numerator", 9, 9),
      SCM_STRING_CONST_INITIALIZER("n", 1, 1),
      SCM_STRING_CONST_INITIALIZER("denominator", 11, 11),
      SCM_STRING_CONST_INITIALIZER("rationalize", 11, 11),
      SCM_STRING_CONST_INITIALIZER("rationalize needs nonnegative error bound, but got", 50, 50),
      SCM_STRING_CONST_INITIALIZER("real->rational", 14, 14),
      SCM_STRING_CONST_INITIALIZER("e", 1, 1),
      SCM_STRING_CONST_INITIALIZER("floor", 5, 5),
      SCM_STRING_CONST_INITIALIZER("v", 1, 1),
      SCM_STRING_CONST_INITIALIZER("ceiling", 7, 7),
      SCM_STRING_CONST_INITIALIZER("truncate", 8, 8),
      SCM_STRING_CONST_INITIALIZER("round", 5, 5),
      SCM_STRING_CONST_INITIALIZER("real-exp", 8, 8),
      SCM_STRING_CONST_INITIALIZER("real-ln", 7, 7),
      SCM_STRING_CONST_INITIALIZER("real-sin", 8, 8),
      SCM_STRING_CONST_INITIALIZER("real-cos", 8, 8),
      SCM_STRING_CONST_INITIALIZER("real-tan", 8, 8),
      SCM_STRING_CONST_INITIALIZER("real-sinpi", 10, 10),
      SCM_STRING_CONST_INITIALIZER("real-cospi", 10, 10),
      SCM_STRING_CONST_INITIALIZER("real-tanpi", 10, 10),
      SCM_STRING_CONST_INITIALIZER("real-asin", 9, 9),
      SCM_STRING_CONST_INITIALIZER("real-acos", 9, 9),
      SCM_STRING_CONST_INITIALIZER("real-atan", 9, 9),
      SCM_STRING_CONST_INITIALIZER("real-sinh", 9, 9),
      SCM_STRING_CONST_INITIALIZER("real-cosh", 9, 9),
      SCM_STRING_CONST_INITIALIZER("real-tanh", 9, 9),
      SCM_STRING_CONST_INITIALIZER("real-asinh", 10, 10),
      SCM_STRING_CONST_INITIALIZER("real-acosh", 10, 10),
      SCM_STRING_CONST_INITIALIZER("real-atanh", 10, 10),
      SCM_STRING_CONST_INITIALIZER("real-sqrt", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%sqrt-fast-path", 15, 15),
      SCM_STRING_CONST_INITIALIZER("real-expt", 9, 9),
      SCM_STRING_CONST_INITIALIZER("exact-expt", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<integer>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("integer-expt", 12, 12),
      SCM_STRING_CONST_INITIALIZER("real-part", 9, 9),
      SCM_STRING_CONST_INITIALIZER("imag-part", 9, 9),
      SCM_STRING_CONST_INITIALIZER("make-polar", 10, 10),
      SCM_STRING_CONST_INITIALIZER("number required, but got", 24, 24),
      SCM_STRING_CONST_INITIALIZER("log", 3, 3),
      SCM_STRING_CONST_INITIALIZER("make-rectangular", 16, 16),
      SCM_STRING_CONST_INITIALIZER("magnitude", 9, 9),
      SCM_STRING_CONST_INITIALIZER("angle", 5, 5),
      SCM_STRING_CONST_INITIALIZER("base", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sqrt", 4, 4),
      SCM_STRING_CONST_INITIALIZER("%exact-integer-sqrt", 19, 19),
      SCM_STRING_CONST_INITIALIZER("10000000000000", 14, 14),
      SCM_STRING_CONST_INITIALIZER("integer-length", 14, 14),
      SCM_STRING_CONST_INITIALIZER("ash", 3, 3),
      SCM_STRING_CONST_INITIALIZER("k", 1, 1),
      SCM_STRING_CONST_INITIALIZER("expt", 4, 4),
      SCM_STRING_CONST_INITIALIZER("%exact-expt", 11, 11),
      SCM_STRING_CONST_INITIALIZER("cos", 3, 3),
      SCM_STRING_CONST_INITIALIZER("cosh", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sin", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sinh", 4, 4),
      SCM_STRING_CONST_INITIALIZER("tan", 3, 3),
      SCM_STRING_CONST_INITIALIZER("tanh", 4, 4),
      SCM_STRING_CONST_INITIALIZER("asin", 4, 4),
      SCM_STRING_CONST_INITIALIZER("asinh", 5, 5),
      SCM_STRING_CONST_INITIALIZER("acos", 4, 4),
      SCM_STRING_CONST_INITIALIZER("acosh", 5, 5),
      SCM_STRING_CONST_INITIALIZER("atan", 4, 4),
      SCM_STRING_CONST_INITIALIZER("two-argument atan requires real numbers, but got", 48, 48),
      SCM_STRING_CONST_INITIALIZER("atanh", 5, 5),
      SCM_STRING_CONST_INITIALIZER("radians->degrees", 16, 16),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("degrees->radians", 16, 16),
      SCM_STRING_CONST_INITIALIZER("cnt", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("lognot", 6, 6),
      SCM_STRING_CONST_INITIALIZER("logand", 6, 6),
      SCM_STRING_CONST_INITIALIZER("arg2", 4, 4),
      SCM_STRING_CONST_INITIALIZER("logior", 6, 6),
      SCM_STRING_CONST_INITIALIZER("logxor", 6, 6),
      SCM_STRING_CONST_INITIALIZER("logcount", 8, 8),
      SCM_STRING_CONST_INITIALIZER("logset+clear", 12, 12),
      SCM_STRING_CONST_INITIALIZER("sets", 4, 4),
      SCM_STRING_CONST_INITIALIZER("clears", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<ulong>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("twos-exponent-factor", 20, 20),
      SCM_STRING_CONST_INITIALIZER("twos-exponent", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<integer>\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("inexact-/", 9, 9),
      SCM_STRING_CONST_INITIALIZER("+.", 2, 2),
      SCM_STRING_CONST_INITIALIZER("*.", 2, 2),
      SCM_STRING_CONST_INITIALIZER("-.", 2, 2),
      SCM_STRING_CONST_INITIALIZER("/.", 2, 2),
      SCM_STRING_CONST_INITIALIZER("clamp", 5, 5),
      SCM_STRING_CONST_INITIALIZER("quotient&remainder", 18, 18),
      SCM_STRING_CONST_INITIALIZER("a", 1, 1),
      SCM_STRING_CONST_INITIALIZER("b", 1, 1),
      SCM_STRING_CONST_INITIALIZER("t", 1, 1),
      SCM_STRING_CONST_INITIALIZER("wraparound", 10, 10),
      SCM_STRING_CONST_INITIALIZER("high", 4, 4),
      SCM_STRING_CONST_INITIALIZER("low", 3, 3),
      SCM_STRING_CONST_INITIALIZER("both", 4, 4),
      SCM_STRING_CONST_INITIALIZER("define-inline", 13, 13),
      SCM_STRING_CONST_INITIALIZER("recn", 4, 4),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("lcm2", 4, 4),
      SCM_STRING_CONST_INITIALIZER("u", 1, 1),
      SCM_STRING_CONST_INITIALIZER("g", 1, 1),
      SCM_STRING_CONST_INITIALIZER("ns", 2, 2),
      SCM_STRING_CONST_INITIALIZER("ds", 2, 2),
      SCM_STRING_CONST_INITIALIZER("dr", 2, 2),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("nr", 2, 2),
      SCM_STRING_CONST_INITIALIZER("nq", 2, 2),
      SCM_STRING_CONST_INITIALIZER("dq", 2, 2),
      SCM_STRING_CONST_INITIALIZER("if-let1", 7, 7),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("s2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("s2+", 3, 3),
      SCM_STRING_CONST_INITIALIZER("ik", 2, 2),
      SCM_STRING_CONST_INITIALIZER("ry", 2, 2),
      SCM_STRING_CONST_INITIALIZER("xn", 2, 2),
      SCM_STRING_CONST_INITIALIZER("xd", 2, 2),
      SCM_STRING_CONST_INITIALIZER("and-let*", 8, 8),
      SCM_STRING_CONST_INITIALIZER("r2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("delta", 5, 5),
      SCM_STRING_CONST_INITIALIZER("err", 3, 3),
      SCM_STRING_CONST_INITIALIZER("deliv", 5, 5),
      SCM_STRING_CONST_INITIALIZER("let*", 4, 4),
      SCM_STRING_CONST_INITIALIZER("iz", 2, 2),
      SCM_STRING_CONST_INITIALIZER("zz", 2, 2),
  },
};
static struct scm__rcRec {
#if defined(HAVE_LGAMMA)
  ScmPair d2161[10] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_LGAMMA)*/
#if defined(HAVE_LGAMMA)
  ScmObj d2160[15];
#endif /*defined(HAVE_LGAMMA)*/
#if defined(HAVE_TGAMMA)
  ScmPair d2158[10] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_TGAMMA)*/
#if defined(HAVE_TGAMMA)
  ScmObj d2157[15];
#endif /*defined(HAVE_TGAMMA)*/
  ScmUVector d2153[53];
  ScmCompiledCode d2152[54];
  ScmWord d2151[2015];
  ScmPair d2150[1102] SCM_ALIGN_PAIR;
  ScmObj d2149[1087];
} scm__rc SCM_UNUSED = {
#if defined(HAVE_LGAMMA)
  {   /* ScmPair d2161 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(314U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2159[3]), SCM_OBJ(&scm__rc.d2161[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2161[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2161[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2161[6])},
       { SCM_OBJ(&scm__rc.d2161[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2161[4]), SCM_OBJ(&scm__rc.d2161[8])},
  },
#endif /*defined(HAVE_LGAMMA)*/
#if defined(HAVE_LGAMMA)
  {   /* ScmObj d2160 */
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
  },
#endif /*defined(HAVE_LGAMMA)*/
#if defined(HAVE_TGAMMA)
  {   /* ScmPair d2158 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(311U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2156[3]), SCM_OBJ(&scm__rc.d2158[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2158[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2158[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2158[6])},
       { SCM_OBJ(&scm__rc.d2158[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[4]), SCM_OBJ(&scm__rc.d2158[8])},
  },
#endif /*defined(HAVE_TGAMMA)*/
#if defined(HAVE_TGAMMA)
  {   /* ScmObj d2157 */
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
  },
#endif /*defined(HAVE_TGAMMA)*/
  {   /* ScmUVector d2153 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 15, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 15, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 114, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 60, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 44, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 33, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 45, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 72, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 214, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 111, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 318, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 139, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 305, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 102, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 145, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 68, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 273, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 105, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 770, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 204, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 563, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 169, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 489, uvector__00026, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 143, uvector__00027, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 1104, uvector__00028, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 283, uvector__00029, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 256, uvector__00030, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 95, uvector__00031, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 246, uvector__00032, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 92, uvector__00033, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 246, uvector__00034, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 93, uvector__00035, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 246, uvector__00036, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 92, uvector__00037, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 256, uvector__00038, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 97, uvector__00039, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 206, uvector__00040, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 80, uvector__00041, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 269, uvector__00042, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 107, uvector__00043, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 239, uvector__00044, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 98, uvector__00045, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 115, uvector__00046, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 67, uvector__00047, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 182, uvector__00048, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 84, uvector__00049, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 406, uvector__00050, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 154, uvector__00051, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 154, uvector__00052, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 76, uvector__00053, 0, NULL),
  },
  {   /* ScmCompiledCode d2152 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[0])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[15])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[30])), 5,
            0, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[35])), 5,
            0, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %apply-unary-generic */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[40])), 25,
            18, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[477]),
            SCM_OBJ(&scm__rc.d2152[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[65])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %apply-unary-+ */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[80])), 8,
            6, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[482]),
            SCM_OBJ(&scm__rc.d2152[7]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[88])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %apply-unary-* */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[103])), 8,
            6, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[487]),
            SCM_OBJ(&scm__rc.d2152[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[111])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (gcd #:G2166) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[126])), 20,
            12, 1, 0, SCM_OBJ(&scm__rc.d2150[523]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[529]),
            SCM_OBJ(&scm__rc.d2152[12]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* gcd */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[146])), 38,
            29, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[535]),
            SCM_OBJ(&scm__rc.d2152[12]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[184])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (lcm #:G2167) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[201])), 20,
            12, 1, 0, SCM_OBJ(&scm__rc.d2150[537]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[542]),
            SCM_OBJ(&scm__rc.d2152[15]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* lcm */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[221])), 58,
            37, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[548]),
            SCM_OBJ(&scm__rc.d2152[15]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[279])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* rationalize */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[296])), 83,
            13, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[580]),
            SCM_OBJ(&scm__rc.d2152[17]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[379])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* exp */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[394])), 35,
            19, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[796]),
            SCM_OBJ(&scm__rc.d2152[19]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[429])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* log */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[444])), 65,
            19, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[802]),
            SCM_OBJ(&scm__rc.d2152[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[509])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* sqrt */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[524])), 159,
            25, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[807]),
            SCM_OBJ(&scm__rc.d2152[23]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[683])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %exact-integer-sqrt */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[698])), 113,
            31, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[813]),
            SCM_OBJ(&scm__rc.d2152[25]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[811])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* expt */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[826])), 121,
            24, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[818]),
            SCM_OBJ(&scm__rc.d2152[27]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[947])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %exact-expt */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[962])), 241,
            58, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[823]),
            SCM_OBJ(&scm__rc.d2152[29]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1203])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* cos */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1218])), 55,
            18, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[828]),
            SCM_OBJ(&scm__rc.d2152[31]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1273])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* cosh */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1288])), 54,
            18, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[833]),
            SCM_OBJ(&scm__rc.d2152[33]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1342])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* sin */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1357])), 54,
            18, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[838]),
            SCM_OBJ(&scm__rc.d2152[35]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1411])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* sinh */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1426])), 54,
            18, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[843]),
            SCM_OBJ(&scm__rc.d2152[37]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1480])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* tan */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1495])), 52,
            18, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[848]),
            SCM_OBJ(&scm__rc.d2152[39]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1547])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* tanh */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1562])), 44,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[853]),
            SCM_OBJ(&scm__rc.d2152[41]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1606])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* asin */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1621])), 59,
            16, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[858]),
            SCM_OBJ(&scm__rc.d2152[43]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1680])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* asinh */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1695])), 50,
            16, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[863]),
            SCM_OBJ(&scm__rc.d2152[45]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1745])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* acos */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1760])), 27,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[868]),
            SCM_OBJ(&scm__rc.d2152[47]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1787])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* acosh */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1802])), 40,
            20, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[873]),
            SCM_OBJ(&scm__rc.d2152[49]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1842])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* atan */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1857])), 94,
            16, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[879]),
            SCM_OBJ(&scm__rc.d2152[51]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1951])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* atanh */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[1966])), 34,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[884]),
            SCM_OBJ(&scm__rc.d2152[53]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[2000])), 15,
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
    SCM_WORD(SCM_UNDEFINED) /* flonum-min-normalized */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* least-positive-normalized-flonum */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* flonum-min-normalized */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[15]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* flonum-min-denormalized */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[15]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* least-positive-flonum */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* flonum-min-denormalized */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000005d    /*   0 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* inexact->exact */,
    0x00004015    /*   2 (DEFINE 4) */,
    SCM_WORD(SCM_UNDEFINED) /* exact */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000005d    /*   0 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* exact->inexact */,
    0x00004015    /*   2 (DEFINE 4) */,
    SCM_WORD(SCM_UNDEFINED) /* inexact */,
    0x00000014    /*   4 (RET) */,
    /* %apply-unary-generic */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[40]) + 10),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[40]) + 8),
    0x00000048    /*   5 (LREF0-PUSH) */,
    0x0000105f    /*   6 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* class-of */,
    0x00002062    /*   8 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* applicable? */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[40]) + 16),
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x0000003f    /*  13 (LREF2) */,
    0x00001012    /*  14 (TAIL-CALL 1) */,
    0x00000014    /*  15 (RET) */,
    0x0000300e    /*  16 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[40]) + 24),
    0x00000006    /*  18 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[104])) /* "operation ~a is not defined on ~s.  This will be an error in future releases.\n" */,
    0x00000049    /*  20 (LREF1-PUSH) */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x0000305f    /*  22 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* warn */,
    0x00000053    /*  24 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[65]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %apply-unary-generic */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[65]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[4])) /* #<compiled-code %apply-unary-generic@0x79e85a4d5720> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %apply-unary-generic */,
    0x00000014    /*  14 (RET) */,
    /* %apply-unary-+ */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* object-+ */,
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* + */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00003060    /*   5 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %apply-unary-generic */,
    0x00000014    /*   7 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[88]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %apply-unary-+ */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[88]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[6])) /* #<compiled-code %apply-unary-+@0x79e859859f60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %apply-unary-+ */,
    0x00000014    /*  14 (RET) */,
    /* %apply-unary-* */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* object-* */,
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* * */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00003060    /*   5 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %apply-unary-generic */,
    0x00000014    /*   7 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[111]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %apply-unary-* */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[111]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[8])) /* #<compiled-code %apply-unary-*@0x79e8598de9c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %apply-unary-* */,
    0x00000014    /*  14 (RET) */,
    /* (gcd #:G2166) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[126]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[126]) + 9),
    0x00000013    /*   7 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[126]) + 16),
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[126]) + 16),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[118])) /* "integer required, but got" */,
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x0000205f    /*  14 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x00001060    /*  17 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* abs */,
    0x00000014    /*  19 (RET) */,
    /* gcd */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[146]) + 6),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00001018    /*   6 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   7 (LREF0) */,
    0x00000022    /*   8 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[146]) + 12),
    0x00000002    /*  10 (CONSTI 0) */,
    0x00000014    /*  11 (RET) */,
    0x00000076    /*  12 (LREF0-CDR) */,
    0x00000022    /*  13 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[146]) + 17),
    0x0000006a    /*  15 (LREF0-CAR) */,
    0x00000014    /*  16 (RET) */,
    0x0000006a    /*  17 (LREF0-CAR) */,
    0x0000000d    /*  18 (PUSH) */,
    0x00000076    /*  19 (LREF0-CDR) */,
    0x00002018    /*  20 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  21 (LREF0) */,
    0x00000022    /*  22 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[146]) + 25),
    0x00000054    /*  24 (LREF1-RET) */,
    0x0000200e    /*  25 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[146]) + 31),
    0x00000049    /*  27 (LREF1-PUSH) */,
    0x0000006a    /*  28 (LREF0-CAR) */,
    0x00002062    /*  29 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %gcd */,
    0x0000000d    /*  31 (PUSH) */,
    0x00000076    /*  32 (LREF0-CDR) */,
    0x0000000d    /*  33 (PUSH) */,
    0x0000101b    /*  34 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[146]) + 21),
    0x00000014    /*  36 (RET) */,
    0x00000014    /*  37 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[530])) /* (#<compiled-code (gcd #:G2166)@0x79e8594ad0c0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[184]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* gcd */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[184]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[11])) /* #<compiled-code gcd@0x79e8594ad060> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* gcd */,
    0x00000014    /*  16 (RET) */,
    /* (lcm #:G2167) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[201]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[201]) + 9),
    0x00000013    /*   7 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[201]) + 16),
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[201]) + 16),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[118])) /* "integer required, but got" */,
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x0000205f    /*  14 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x00001060    /*  17 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* abs */,
    0x00000014    /*  19 (RET) */,
    /* lcm */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]) + 6),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00001018    /*   6 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   7 (LREF0) */,
    0x00000022    /*   8 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]) + 12),
    0x00001002    /*  10 (CONSTI 1) */,
    0x00000014    /*  11 (RET) */,
    0x00000076    /*  12 (LREF0-CDR) */,
    0x00000022    /*  13 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]) + 17),
    0x0000006a    /*  15 (LREF0-CAR) */,
    0x00000014    /*  16 (RET) */,
    0x0000006a    /*  17 (LREF0-CAR) */,
    0x0000000d    /*  18 (PUSH) */,
    0x00000076    /*  19 (LREF0-CDR) */,
    0x00002018    /*  20 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  21 (LREF0) */,
    0x00000022    /*  22 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]) + 25),
    0x00000054    /*  24 (LREF1-RET) */,
    0x0000006a    /*  25 (LREF0-CAR) */,
    0x00001018    /*  26 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  27 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]) + 33),
    0x0000004d    /*  29 (LREF11-PUSH) */,
    0x00000048    /*  30 (LREF0-PUSH) */,
    0x0000205f    /*  31 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %gcd */,
    0x00001018    /*  33 (PUSH-LOCAL-ENV 1) */,
    0x00000045    /*  34 (LREF21) */,
    0x0000002d    /*  35 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]) + 40),
    0x00000002    /*  37 (CONSTI 0) */,
    0x00000013    /*  38 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]) + 49),
    0x0000200e    /*  40 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]) + 46),
    0x00000050    /*  42 (LREF21-PUSH) */,
    0x00000048    /*  43 (LREF0-PUSH) */,
    0x0000205f    /*  44 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* quotient */,
    0x0000000d    /*  46 (PUSH) */,
    0x00000041    /*  47 (LREF10) */,
    0x000000b4    /*  48 (NUMMUL2) */,
    0x0000001a    /*  49 (POP-LOCAL-ENV) */,
    0x0000001a    /*  50 (POP-LOCAL-ENV) */,
    0x0000000d    /*  51 (PUSH) */,
    0x00000076    /*  52 (LREF0-CDR) */,
    0x0000000d    /*  53 (PUSH) */,
    0x0000101b    /*  54 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]) + 21),
    0x00000014    /*  56 (RET) */,
    0x00000014    /*  57 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[543])) /* (#<compiled-code (lcm #:G2167)@0x79e8590bd1e0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[279]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* lcm */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[279]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[14])) /* #<compiled-code lcm@0x79e8590bd180> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* lcm */,
    0x00000014    /*  16 (RET) */,
    /* rationalize */
    0x00000002    /*   0 (CONSTI 0) */,
    0x00000029    /*   1 (LREF-VAL0-BNLT 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 9),
    0x00000006    /*   3 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[131])) /* "rationalize needs nonnegative error bound, but got" */,
    0x00000048    /*   5 (LREF0-PUSH) */,
    0x00002060    /*   6 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*   8 (RET) */,
    0x0000100e    /*   9 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 14),
    0x00000049    /*  11 (LREF1-PUSH) */,
    0x0000105f    /*  12 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* nan? */,
    0x0000001e    /*  14 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 18),
    0x0000000a    /*  16 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* +nan.0 */,
    0x0000100e    /*  18 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 23),
    0x00000048    /*  20 (LREF0-PUSH) */,
    0x0000105f    /*  21 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* nan? */,
    0x0000001e    /*  23 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 27),
    0x0000000a    /*  25 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* +nan.0 */,
    0x0000100e    /*  27 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 32),
    0x00000048    /*  29 (LREF0-PUSH) */,
    0x0000105f    /*  30 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* infinite? */,
    0x0000001e    /*  32 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 45),
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 39),
    0x00000049    /*  36 (LREF1-PUSH) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* infinite? */,
    0x0000001e    /*  39 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 43),
    0x0000000a    /*  41 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* +nan.0 */,
    0x0000000a    /*  43 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* 0.0 */,
    0x0000100e    /*  45 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 50),
    0x00000049    /*  47 (LREF1-PUSH) */,
    0x0000105f    /*  48 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* infinite? */,
    0x0000001e    /*  50 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 53),
    0x00000054    /*  52 (LREF1-RET) */,
    0x0000100e    /*  53 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 58),
    0x00000049    /*  55 (LREF1-PUSH) */,
    0x0000105f    /*  56 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* inexact? */,
    0x0000001e    /*  58 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 70),
    0x0000300e    /*  60 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 67),
    0x00000049    /*  62 (LREF1-PUSH) */,
    0x00000048    /*  63 (LREF0-PUSH) */,
    0x00000048    /*  64 (LREF0-PUSH) */,
    0x0000305f    /*  65 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* real->rational */,
    0x00001063    /*  67 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* inexact */,
    0x00000014    /*  69 (RET) */,
    0x0000100e    /*  70 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 75),
    0x00000048    /*  72 (LREF0-PUSH) */,
    0x0000105f    /*  73 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* inexact? */,
    0x0000001f    /*  75 (BT) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]) + 60),
    0x00000049    /*  77 (LREF1-PUSH) */,
    0x00000048    /*  78 (LREF0-PUSH) */,
    0x00000048    /*  79 (LREF0-PUSH) */,
    0x00003060    /*  80 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* real->rational */,
    0x00000014    /*  82 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[379]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* rationalize */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[379]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[16])) /* #<compiled-code rationalize@0x79e859472120> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* rationalize */,
    0x00000014    /*  14 (RET) */,
    /* exp */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-exp */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]) + 29),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]) + 21),
    0x0000100e    /*  14 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]) + 19),
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x0000105f    /*  17 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-part */,
    0x00001062    /*  19 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-exp */,
    0x0000100f    /*  21 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]) + 26),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000105f    /*  24 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* imag-part */,
    0x00002063    /*  26 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-polar */,
    0x00000014    /*  28 (RET) */,
    0x00000006    /*  29 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  31 (LREF0-PUSH) */,
    0x00002060    /*  32 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  34 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[429]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[429]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[18])) /* #<compiled-code exp@0x79e85910c8a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x00000014    /*  14 (RET) */,
    /* log */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 53),
    0x0000003e    /*   3 (LREF1) */,
    0x0000009f    /*   4 (REALP) */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 26),
    0x00000002    /*   7 (CONSTI 0) */,
    0x0040002c    /*   8 (LREF-VAL0-BNGE 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 14),
    0x00000049    /*  10 (LREF1-PUSH) */,
    0x00001060    /*  11 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-ln */,
    0x00000014    /*  13 (RET) */,
    0x0000100e    /*  14 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 20),
    0x0000003e    /*  16 (LREF1) */,
    0x000000b7    /*  17 (NEGATE) */,
    0x00001062    /*  18 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-ln */,
    0x0000000d    /*  20 (PUSH) */,
    0x00000006    /*  21 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* 3.141592653589793 */,
    0x00002060    /*  23 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-rectangular */,
    0x00000014    /*  25 (RET) */,
    0x0000003e    /*  26 (LREF1) */,
    0x0000009e    /*  27 (NUMBERP) */,
    0x0000001e    /*  28 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 47),
    0x0000100e    /*  30 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 39),
    0x0000100e    /*  32 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 37),
    0x00000049    /*  34 (LREF1-PUSH) */,
    0x0000105f    /*  35 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* magnitude */,
    0x00001062    /*  37 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-ln */,
    0x0000100f    /*  39 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 44),
    0x00000049    /*  41 (LREF1-PUSH) */,
    0x0000105f    /*  42 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* angle */,
    0x00002063    /*  44 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-rectangular */,
    0x00000014    /*  46 (RET) */,
    0x00000006    /*  47 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000049    /*  49 (LREF1-PUSH) */,
    0x00002060    /*  50 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  52 (RET) */,
    0x0000100e    /*  53 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 58),
    0x00000049    /*  55 (LREF1-PUSH) */,
    0x0000105f    /*  56 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x0000100f    /*  58 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]) + 63),
    0x0000006a    /*  60 (LREF0-CAR) */,
    0x00001062    /*  61 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x000000b5    /*  63 (NUMDIV2) */,
    0x00000014    /*  64 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[509]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[509]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[20])) /* #<compiled-code log@0x79e859002420> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x00000014    /*  14 (RET) */,
    /* sqrt */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %sqrt-fast-path */,
    0x00000031    /*   5 (RT) */,
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 11),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /*  11 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 117),
    0x00000002    /*  13 (CONSTI 0) */,
    0x0000002c    /*  14 (LREF-VAL0-BNGE 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 117),
    0x0000100e    /*  16 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 21),
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000105f    /*  19 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  21 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 37),
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 28),
    0x00000048    /*  25 (LREF0-PUSH) */,
    0x0000105f    /*  26 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-integer-sqrt */,
    0x00002036    /*  28 (TAIL-RECEIVE 2 0) */,
    0x0000003d    /*  29 (LREF0) */,
    0x0000002d    /*  30 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 33),
    0x00000054    /*  32 (LREF1-RET) */,
    0x0000004c    /*  33 (LREF10-PUSH) */,
    0x00001060    /*  34 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sqrt */,
    0x00000014    /*  36 (RET) */,
    0x0000100e    /*  37 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 42),
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x0000105f    /*  40 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* numerator */,
    0x0000100f    /*  42 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 47),
    0x00000048    /*  44 (LREF0-PUSH) */,
    0x0000105f    /*  45 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* denominator */,
    0x00002018    /*  47 (PUSH-LOCAL-ENV 2) */,
    0x0000100e    /*  48 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 53),
    0x00000049    /*  50 (LREF1-PUSH) */,
    0x0000105f    /*  51 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %sqrt-fast-path */,
    0x00001018    /*  53 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  54 (LREF0) */,
    0x0000001e    /*  55 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 87),
    0x0000100e    /*  57 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 62),
    0x0000004c    /*  59 (LREF10-PUSH) */,
    0x0000105f    /*  60 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %sqrt-fast-path */,
    0x00001018    /*  62 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  63 (LREF0) */,
    0x0000001e    /*  64 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 70),
    0x0000004c    /*  66 (LREF10-PUSH) */,
    0x0000003d    /*  67 (LREF0) */,
    0x000000b5    /*  68 (NUMDIV2) */,
    0x00000014    /*  69 (RET) */,
    0x0000100e    /*  70 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 75),
    0x0000004f    /*  72 (LREF20-PUSH) */,
    0x0000105f    /*  73 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-integer-sqrt */,
    0x00002036    /*  75 (TAIL-RECEIVE 2 0) */,
    0x0000003d    /*  76 (LREF0) */,
    0x0000002d    /*  77 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 83),
    0x0000004f    /*  79 (LREF20-PUSH) */,
    0x0000003e    /*  80 (LREF1) */,
    0x000000b5    /*  81 (NUMDIV2) */,
    0x00000014    /*  82 (RET) */,
    0x00004047    /*  83 (LREF-PUSH 4 0) */,
    0x00001060    /*  84 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sqrt */,
    0x00000014    /*  86 (RET) */,
    0x0000100e    /*  87 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 92),
    0x0000004d    /*  89 (LREF11-PUSH) */,
    0x0000105f    /*  90 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-integer-sqrt */,
    0x00002036    /*  92 (TAIL-RECEIVE 2 0) */,
    0x0000003d    /*  93 (LREF0) */,
    0x0000002d    /*  94 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 113),
    0x0000100e    /*  96 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 101),
    0x0000004f    /*  98 (LREF20-PUSH) */,
    0x0000105f    /*  99 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-integer-sqrt */,
    0x00002036    /* 101 (TAIL-RECEIVE 2 0) */,
    0x0000003d    /* 102 (LREF0) */,
    0x0000002d    /* 103 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 109),
    0x0000004d    /* 105 (LREF11-PUSH) */,
    0x0000003e    /* 106 (LREF1) */,
    0x000000b5    /* 107 (NUMDIV2) */,
    0x00000014    /* 108 (RET) */,
    0x00004047    /* 109 (LREF-PUSH 4 0) */,
    0x00001060    /* 110 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sqrt */,
    0x00000014    /* 112 (RET) */,
    0x00000051    /* 113 (LREF30-PUSH) */,
    0x00001060    /* 114 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sqrt */,
    0x00000014    /* 116 (RET) */,
    0x0000003d    /* 117 (LREF0) */,
    0x0000009f    /* 118 (REALP) */,
    0x0000001e    /* 119 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 125),
    0x00000048    /* 121 (LREF0-PUSH) */,
    0x00001060    /* 122 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sqrt */,
    0x00000014    /* 124 (RET) */,
    0x0000003d    /* 125 (LREF0) */,
    0x0000009e    /* 126 (NUMBERP) */,
    0x0000001e    /* 127 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 150),
    0x0000100e    /* 129 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 138),
    0x0000100e    /* 131 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 136),
    0x00000048    /* 133 (LREF0-PUSH) */,
    0x0000105f    /* 134 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* magnitude */,
    0x00001062    /* 136 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sqrt */,
    0x0000100f    /* 138 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 143),
    0x00000048    /* 140 (LREF0-PUSH) */,
    0x0000105f    /* 141 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* angle */,
    0x0000000d    /* 143 (PUSH) */,
    0x00000001    /* 144 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* 2.0 */,
    0x000000b5    /* 146 (NUMDIV2) */,
    0x00002063    /* 147 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-polar */,
    0x00000014    /* 149 (RET) */,
    0x00000006    /* 150 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /* 152 (LREF0-PUSH) */,
    0x00002060    /* 153 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 155 (RET) */,
    0x00000013    /* 156 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]) + 117),
    0x00000014    /* 158 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[683]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* sqrt */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[683]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[22])) /* #<compiled-code sqrt@0x79e85ac38360> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sqrt */,
    0x00000014    /*  14 (RET) */,
    /* %exact-integer-sqrt */
    0x00000001    /*   0 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* 4503599627370496 */,
    0x00000029    /*   2 (LREF-VAL0-BNLT 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 21),
    0x0000100e    /*   4 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 13),
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 11),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sqrt */,
    0x00001062    /*  11 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* floor->exact */,
    0x00001018    /*  13 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000004c    /*  15 (LREF10-PUSH) */,
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x0000003d    /*  17 (LREF0) */,
    0x000000b4    /*  18 (NUMMUL2) */,
    0x000000b3    /*  19 (NUMSUB2) */,
    0x000020a3    /*  20 (VALUES-RET 2) */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 26),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000105f    /*  24 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sqrt */,
    0x00001018    /*  26 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  27 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 32),
    0x00000048    /*  29 (LREF0-PUSH) */,
    0x0000105f    /*  30 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* finite? */,
    0x0000001e    /*  32 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 45),
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 61),
    0x0000100e    /*  36 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 41),
    0x0000004c    /*  38 (LREF10-PUSH) */,
    0x0000105f    /*  39 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sqrt */,
    0x00001062    /*  41 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* floor->exact */,
    0x00000013    /*  43 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 61),
    0x0000200e    /*  45 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 61),
    0x00001007    /*  47 (CONSTI-PUSH 1) */,
    0x0000200e    /*  48 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 59),
    0x0000100e    /*  50 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 55),
    0x0000004c    /*  52 (LREF10-PUSH) */,
    0x0000105f    /*  53 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer-length */,
    0x0000000d    /*  55 (PUSH) */,
    0x00002007    /*  56 (CONSTI-PUSH 2) */,
    0x0000205f    /*  57 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* quotient */,
    0x00002062    /*  59 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ash */,
    0x0000001a    /*  61 (POP-LOCAL-ENV) */,
    0x00001018    /*  62 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*  63 (LREF0-PUSH) */,
    0x0000003d    /*  64 (LREF0) */,
    0x000000b4    /*  65 (NUMMUL2) */,
    0x00001018    /*  66 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  67 (LREF0) */,
    0x00002029    /*  68 (LREF-VAL0-BNLT 2 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 84),
    0x0000200e    /*  70 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 80),
    0x0000003d    /*  72 (LREF0) */,
    0x000020b6    /*  73 (LREF-VAL0-NUMADD2 2 0) */,
    0x0000000d    /*  74 (PUSH) */,
    0x00002007    /*  75 (CONSTI-PUSH 2) */,
    0x00000041    /*  76 (LREF10) */,
    0x000000b4    /*  77 (NUMMUL2) */,
    0x00002062    /*  78 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* quotient */,
    0x0000000d    /*  80 (PUSH) */,
    0x0000201b    /*  81 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 63),
    0x00000014    /*  83 (RET) */,
    0x00002007    /*  84 (CONSTI-PUSH 2) */,
    0x00000041    /*  85 (LREF10) */,
    0x000000b4    /*  86 (NUMMUL2) */,
    0x000000b6    /*  87 (LREF-VAL0-NUMADD2 0 0) */,
    0x000010bc    /*  88 (NUMADDI 1) */,
    0x00001018    /*  89 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  90 (LREF0) */,
    0x00003029    /*  91 (LREF-VAL0-BNLT 3 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 98),
    0x0000004f    /*  93 (LREF20-PUSH) */,
    0x00000051    /*  94 (LREF30-PUSH) */,
    0x00000041    /*  95 (LREF10) */,
    0x000000b3    /*  96 (NUMSUB2) */,
    0x000020a3    /*  97 (VALUES-RET 2) */,
    0x0000200e    /*  98 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 108),
    0x00000041    /* 100 (LREF10) */,
    0x000030b6    /* 101 (LREF-VAL0-NUMADD2 3 0) */,
    0x0000000d    /* 102 (PUSH) */,
    0x00002007    /* 103 (CONSTI-PUSH 2) */,
    0x00000044    /* 104 (LREF20) */,
    0x000000b4    /* 105 (NUMMUL2) */,
    0x00002062    /* 106 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* quotient */,
    0x0000000d    /* 108 (PUSH) */,
    0x0000301b    /* 109 (LOCAL-ENV-JUMP 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]) + 63),
    0x00000014    /* 111 (RET) */,
    0x00000014    /* 112 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[811]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-integer-sqrt */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[811]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[24])) /* #<compiled-code %exact-integer-sqrt@0x79e859eb8d20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-integer-sqrt */,
    0x00000014    /*  14 (RET) */,
    /* expt */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 19),
    0x0000100e    /*   7 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 12),
    0x00000048    /*   9 (LREF0-PUSH) */,
    0x0000105f    /*  10 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /*  12 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 19),
    0x00000049    /*  14 (LREF1-PUSH) */,
    0x00000048    /*  15 (LREF0-PUSH) */,
    0x00002060    /*  16 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-expt */,
    0x00000014    /*  18 (RET) */,
    0x0000003e    /*  19 (LREF1) */,
    0x0000009f    /*  20 (REALP) */,
    0x0000001e    /*  21 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 98),
    0x0000003d    /*  23 (LREF0) */,
    0x0000009f    /*  24 (REALP) */,
    0x0000001e    /*  25 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 32),
    0x00000049    /*  27 (LREF1-PUSH) */,
    0x00000048    /*  28 (LREF0-PUSH) */,
    0x00002060    /*  29 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* real-expt */,
    0x00000014    /*  31 (RET) */,
    0x0000003d    /*  32 (LREF0) */,
    0x0000009e    /*  33 (NUMBERP) */,
    0x0000001e    /*  34 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 92),
    0x0000100e    /*  36 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 41),
    0x00000048    /*  38 (LREF0-PUSH) */,
    0x0000105f    /*  39 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-part */,
    0x00001018    /*  41 (PUSH-LOCAL-ENV 1) */,
    0x00000042    /*  42 (LREF11) */,
    0x0000002d    /*  43 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 63),
    0x0000100e    /*  45 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 50),
    0x00000048    /*  47 (LREF0-PUSH) */,
    0x0000105f    /*  48 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* positive? */,
    0x0000001e    /*  50 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 63),
    0x0000100e    /*  52 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 57),
    0x0000004d    /*  54 (LREF11-PUSH) */,
    0x0000105f    /*  55 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /*  57 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 61),
    0x00000002    /*  59 (CONSTI 0) */,
    0x00000014    /*  60 (RET) */,
    0x0000000a    /*  61 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* 0.0 */,
    0x0000200e    /*  63 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 69),
    0x0000004d    /*  65 (LREF11-PUSH) */,
    0x00000048    /*  66 (LREF0-PUSH) */,
    0x0000205f    /*  67 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* real-expt */,
    0x0000100f    /*  69 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 87),
    0x00000006    /*  71 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* 0.0+1.0i */,
    0x0000100e    /*  73 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 78),
    0x0000004c    /*  75 (LREF10-PUSH) */,
    0x0000105f    /*  76 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* imag-part */,
    0x000000b4    /*  78 (NUMMUL2) */,
    0x0000100f    /*  79 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 84),
    0x0000004d    /*  81 (LREF11-PUSH) */,
    0x0000105f    /*  82 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-ln */,
    0x000000b4    /*  84 (NUMMUL2) */,
    0x00001062    /*  85 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x000000b4    /*  87 (NUMMUL2) */,
    0x00000014    /*  88 (RET) */,
    0x00000013    /*  89 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 63),
    0x00000014    /*  91 (RET) */,
    0x00000006    /*  92 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  94 (LREF0-PUSH) */,
    0x00002060    /*  95 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  97 (RET) */,
    0x0000003e    /*  98 (LREF1) */,
    0x0000009e    /*  99 (NUMBERP) */,
    0x0000001e    /* 100 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 112),
    0x00000048    /* 102 (LREF0-PUSH) */,
    0x0000100e    /* 103 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 108),
    0x00000049    /* 105 (LREF1-PUSH) */,
    0x0000105f    /* 106 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x000000b4    /* 108 (NUMMUL2) */,
    0x00001063    /* 109 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x00000014    /* 111 (RET) */,
    0x00000006    /* 112 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000049    /* 114 (LREF1-PUSH) */,
    0x00002060    /* 115 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 117 (RET) */,
    0x00000013    /* 118 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]) + 19),
    0x00000014    /* 120 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[947]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* expt */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[947]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[26])) /* #<compiled-code expt@0x79e85986c480> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* expt */,
    0x00000014    /*  14 (RET) */,
    /* %exact-expt */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 12),
    0x00000049    /*   7 (LREF1-PUSH) */,
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x00002060    /*   9 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* exact-expt */,
    0x00000014    /*  11 (RET) */,
    0x00000002    /*  12 (CONSTI 0) */,
    0x00400029    /*  13 (LREF-VAL0-BNLT 0 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 20),
    0x00000049    /*  15 (LREF1-PUSH) */,
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x00002060    /*  17 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* real-expt */,
    0x00000014    /*  19 (RET) */,
    0x00000002    /*  20 (CONSTI 0) */,
    0x00000029    /*  21 (LREF-VAL0-BNLT 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 33),
    0x0000200e    /*  23 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 30),
    0x00000049    /*  25 (LREF1-PUSH) */,
    0x0000003d    /*  26 (LREF0) */,
    0x000000b7    /*  27 (NEGATE) */,
    0x00002062    /*  28 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-expt */,
    0x00001063    /*  30 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* / */,
    0x00000014    /*  32 (RET) */,
    0x0000100e    /*  33 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 38),
    0x00000049    /*  35 (LREF1-PUSH) */,
    0x0000105f    /*  36 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  38 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 186),
    0x0000100e    /*  40 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 45),
    0x00000048    /*  42 (LREF0-PUSH) */,
    0x0000105f    /*  43 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* numerator */,
    0x0000100f    /*  45 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 50),
    0x00000048    /*  47 (LREF0-PUSH) */,
    0x0000105f    /*  48 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* denominator */,
    0x00002018    /*  50 (PUSH-LOCAL-ENV 2) */,
    0x0000200e    /*  51 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 69),
    0x00001007    /*  53 (CONSTI-PUSH 1) */,
    0x0000100e    /*  54 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 67),
    0x0000200e    /*  56 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 62),
    0x0000004d    /*  58 (LREF11-PUSH) */,
    0x00002007    /*  59 (CONSTI-PUSH 2) */,
    0x0000205f    /*  60 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x0000000d    /*  62 (PUSH) */,
    0x0000003d    /*  63 (LREF0) */,
    0x000000b5    /*  64 (NUMDIV2) */,
    0x00001062    /*  65 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* round->exact */,
    0x00002062    /*  67 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ash */,
    0x00001018    /*  69 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  70 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 76),
    0x00000048    /*  72 (LREF0-PUSH) */,
    0x0000004c    /*  73 (LREF10-PUSH) */,
    0x0000205f    /*  74 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* integer-expt */,
    0x00001018    /*  76 (PUSH-LOCAL-ENV 1) */,
    0x0040303c    /*  77 (LREF 3 1) */,
    0x00000028    /*  78 (LREF-VAL0-BNUMNE 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 85),
    0x0000004c    /*  80 (LREF10-PUSH) */,
    0x00000050    /*  81 (LREF21-PUSH) */,
    0x00002060    /*  82 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* integer-expt */,
    0x00000014    /*  84 (RET) */,
    0x0000004c    /*  85 (LREF10-PUSH) */,
    0x00000048    /*  86 (LREF0-PUSH) */,
    0x00002017    /*  87 (LOCAL-ENV 2) */,
    0x00000051    /*  88 (LREF30-PUSH) */,
    0x0000200e    /*  89 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 95),
    0x00000049    /*  91 (LREF1-PUSH) */,
    -0x00000f30   /*  92 (LREF30-NUMADDI-PUSH -1) */,
    0x0000205f    /*  93 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* integer-expt */,
    0x000000b4    /*  95 (NUMMUL2) */,
    0x00001018    /*  96 (PUSH-LOCAL-ENV 1) */,
    0x0000004c    /*  97 (LREF10-PUSH) */,
    0x0040503c    /*  98 (LREF 5 1) */,
    0x000000b3    /*  99 (NUMSUB2) */,
    0x00001018    /* 100 (PUSH-LOCAL-ENV 1) */,
    0x00000002    /* 101 (CONSTI 0) */,
    0x0000002b    /* 102 (LREF-VAL0-BNGT 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 115),
    0x0000200e    /* 104 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 125),
    0x0000003d    /* 106 (LREF0) */,
    0x000010b6    /* 107 (LREF-VAL0-NUMADD2 1 0) */,
    -0x00000f44   /* 108 (NUMADDI -1) */,
    0x0000000d    /* 109 (PUSH) */,
    0x0000004c    /* 110 (LREF10-PUSH) */,
    0x0000205f    /* 111 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* quotient */,
    0x00000013    /* 113 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 125),
    0x0000200e    /* 115 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 125),
    0x00000048    /* 117 (LREF0-PUSH) */,
    0x00000041    /* 118 (LREF10) */,
    0x000000b3    /* 119 (NUMSUB2) */,
    0x000010bc    /* 120 (NUMADDI 1) */,
    0x0000000d    /* 121 (PUSH) */,
    0x0000004c    /* 122 (LREF10-PUSH) */,
    0x0000205f    /* 123 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* quotient */,
    0x00001018    /* 125 (PUSH-LOCAL-ENV 1) */,
    0x00403047    /* 126 (LREF-PUSH 3 1) */,
    0x0000003d    /* 127 (LREF0) */,
    0x000000b3    /* 128 (NUMSUB2) */,
    0x00001018    /* 129 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /* 130 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 136),
    0x00000048    /* 132 (LREF0-PUSH) */,
    0x00007047    /* 133 (LREF-PUSH 7 0) */,
    0x0000205f    /* 134 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* integer-expt */,
    0x00001018    /* 136 (PUSH-LOCAL-ENV 1) */,
    0x0040903c    /* 137 (LREF 9 1) */,
    0x00000028    /* 138 (LREF-VAL0-BNUMNE 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 145),
    0x0000004c    /* 140 (LREF10-PUSH) */,
    0x00408047    /* 141 (LREF-PUSH 8 1) */,
    0x00002060    /* 142 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* integer-expt */,
    0x00000014    /* 144 (RET) */,
    0x00000044    /* 145 (LREF20) */,
    0x0000102d    /* 146 (BNUMNEI 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 159),
    0x0000300e    /* 148 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 155),
    0x00000048    /* 150 (LREF0-PUSH) */,
    0x00409047    /* 151 (LREF-PUSH 9 1) */,
    0x00005047    /* 152 (LREF-PUSH 5 0) */,
    0x0000305f    /* 153 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* < */,
    0x0000001e    /* 155 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 159),
    0x00000013    /* 157 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 173),
    0x00000044    /* 159 (LREF20) */,
    -0x00000fd3   /* 160 (BNUMNEI -1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 173),
    0x0000300e    /* 162 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 173),
    0x00005047    /* 164 (LREF-PUSH 5 0) */,
    0x00409047    /* 165 (LREF-PUSH 9 1) */,
    0x00000048    /* 166 (LREF0-PUSH) */,
    0x0000305f    /* 167 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* < */,
    0x00000013    /* 169 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 173),
    0x00000013    /* 171 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 159),
    0x0000001e    /* 173 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 180),
    0x00409047    /* 175 (LREF-PUSH 9 1) */,
    0x00009047    /* 176 (LREF-PUSH 9 0) */,
    0x00002060    /* 177 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* real-expt */,
    0x00000014    /* 179 (RET) */,
    0x0000004c    /* 180 (LREF10-PUSH) */,
    0x00000048    /* 181 (LREF0-PUSH) */,
    0x0000601b    /* 182 (LOCAL-ENV-JUMP 6) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 88),
    0x00000014    /* 184 (RET) */,
    0x00000014    /* 185 (RET) */,
    0x0000200e    /* 186 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 197),
    0x0000100e    /* 188 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 193),
    0x00000049    /* 190 (LREF1-PUSH) */,
    0x0000105f    /* 191 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* numerator */,
    0x0000000d    /* 193 (PUSH) */,
    0x00000048    /* 194 (LREF0-PUSH) */,
    0x0000205f    /* 195 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-expt */,
    0x00001018    /* 197 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 198 (LREF0) */,
    0x0000001e    /* 199 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 234),
    0x0000100e    /* 201 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 206),
    0x00000048    /* 203 (LREF0-PUSH) */,
    0x0000105f    /* 204 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /* 206 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 234),
    0x0000200e    /* 208 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 219),
    0x0000100e    /* 210 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 215),
    0x0000004d    /* 212 (LREF11-PUSH) */,
    0x0000105f    /* 213 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* denominator */,
    0x0000000d    /* 215 (PUSH) */,
    0x0000004c    /* 216 (LREF10-PUSH) */,
    0x0000205f    /* 217 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-expt */,
    0x00001018    /* 219 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 220 (LREF0) */,
    0x0000001e    /* 221 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 233),
    0x0000100e    /* 223 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 228),
    0x00000048    /* 225 (LREF0-PUSH) */,
    0x0000105f    /* 226 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exact? */,
    0x0000001e    /* 228 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]) + 233),
    0x0000004c    /* 230 (LREF10-PUSH) */,
    0x0000003d    /* 231 (LREF0) */,
    0x000000b5    /* 232 (NUMDIV2) */,
    0x0000001a    /* 233 (POP-LOCAL-ENV) */,
    0x0000001a    /* 234 (POP-LOCAL-ENV) */,
    0x00000031    /* 235 (RT) */,
    0x00000049    /* 236 (LREF1-PUSH) */,
    0x00000048    /* 237 (LREF0-PUSH) */,
    0x00002060    /* 238 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* real-expt */,
    0x00000014    /* 240 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1203]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-expt */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1203]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[28])) /* #<compiled-code %exact-expt@0x79e859962e40> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %exact-expt */,
    0x00000014    /*  14 (RET) */,
    /* cos */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cos */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]) + 49),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]) + 17),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000105f    /*  15 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-part */,
    0x0000100f    /*  17 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]) + 22),
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x0000105f    /*  20 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* imag-part */,
    0x00002018    /*  22 (PUSH-LOCAL-ENV 2) */,
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]) + 28),
    0x00000049    /*  25 (LREF1-PUSH) */,
    0x0000105f    /*  26 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cos */,
    0x0000100f    /*  28 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]) + 33),
    0x00000048    /*  30 (LREF0-PUSH) */,
    0x0000105f    /*  31 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cosh */,
    0x000000b4    /*  33 (NUMMUL2) */,
    0x0000100f    /*  34 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]) + 39),
    0x00000049    /*  36 (LREF1-PUSH) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sin */,
    0x0000100f    /*  39 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]) + 44),
    0x00000048    /*  41 (LREF0-PUSH) */,
    0x0000105f    /*  42 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sinh */,
    0x000000b4    /*  44 (NUMMUL2) */,
    0x000000b7    /*  45 (NEGATE) */,
    0x00002063    /*  46 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-rectangular */,
    0x00000014    /*  48 (RET) */,
    0x00000006    /*  49 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  51 (LREF0-PUSH) */,
    0x00002060    /*  52 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  54 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1273]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* cos */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1273]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[30])) /* #<compiled-code cos@0x79e85bdffa20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* cos */,
    0x00000014    /*  14 (RET) */,
    /* cosh */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cosh */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]) + 48),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]) + 17),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000105f    /*  15 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-part */,
    0x0000100f    /*  17 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]) + 22),
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x0000105f    /*  20 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* imag-part */,
    0x00002018    /*  22 (PUSH-LOCAL-ENV 2) */,
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]) + 28),
    0x00000049    /*  25 (LREF1-PUSH) */,
    0x0000105f    /*  26 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cosh */,
    0x0000100f    /*  28 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]) + 33),
    0x00000048    /*  30 (LREF0-PUSH) */,
    0x0000105f    /*  31 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cos */,
    0x000000b4    /*  33 (NUMMUL2) */,
    0x0000100f    /*  34 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]) + 39),
    0x00000049    /*  36 (LREF1-PUSH) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sinh */,
    0x0000100f    /*  39 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]) + 44),
    0x00000048    /*  41 (LREF0-PUSH) */,
    0x0000105f    /*  42 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sin */,
    0x000000b4    /*  44 (NUMMUL2) */,
    0x00002063    /*  45 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-rectangular */,
    0x00000014    /*  47 (RET) */,
    0x00000006    /*  48 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  50 (LREF0-PUSH) */,
    0x00002060    /*  51 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  53 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1342]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* cosh */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1342]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[32])) /* #<compiled-code cosh@0x79e85a819000> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* cosh */,
    0x00000014    /*  14 (RET) */,
    /* sin */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sin */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]) + 48),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]) + 17),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000105f    /*  15 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-part */,
    0x0000100f    /*  17 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]) + 22),
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x0000105f    /*  20 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* imag-part */,
    0x00002018    /*  22 (PUSH-LOCAL-ENV 2) */,
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]) + 28),
    0x00000049    /*  25 (LREF1-PUSH) */,
    0x0000105f    /*  26 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sin */,
    0x0000100f    /*  28 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]) + 33),
    0x00000048    /*  30 (LREF0-PUSH) */,
    0x0000105f    /*  31 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cosh */,
    0x000000b4    /*  33 (NUMMUL2) */,
    0x0000100f    /*  34 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]) + 39),
    0x00000049    /*  36 (LREF1-PUSH) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cos */,
    0x0000100f    /*  39 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]) + 44),
    0x00000048    /*  41 (LREF0-PUSH) */,
    0x0000105f    /*  42 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sinh */,
    0x000000b4    /*  44 (NUMMUL2) */,
    0x00002063    /*  45 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-rectangular */,
    0x00000014    /*  47 (RET) */,
    0x00000006    /*  48 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  50 (LREF0-PUSH) */,
    0x00002060    /*  51 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  53 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1411]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* sin */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1411]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[34])) /* #<compiled-code sin@0x79e859e54540> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sin */,
    0x00000014    /*  14 (RET) */,
    /* sinh */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sinh */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]) + 48),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]) + 17),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000105f    /*  15 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-part */,
    0x0000100f    /*  17 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]) + 22),
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x0000105f    /*  20 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* imag-part */,
    0x00002018    /*  22 (PUSH-LOCAL-ENV 2) */,
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]) + 28),
    0x00000049    /*  25 (LREF1-PUSH) */,
    0x0000105f    /*  26 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sinh */,
    0x0000100f    /*  28 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]) + 33),
    0x00000048    /*  30 (LREF0-PUSH) */,
    0x0000105f    /*  31 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cos */,
    0x000000b4    /*  33 (NUMMUL2) */,
    0x0000100f    /*  34 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]) + 39),
    0x00000049    /*  36 (LREF1-PUSH) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-cosh */,
    0x0000100f    /*  39 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]) + 44),
    0x00000048    /*  41 (LREF0-PUSH) */,
    0x0000105f    /*  42 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-sin */,
    0x000000b4    /*  44 (NUMMUL2) */,
    0x00002063    /*  45 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-rectangular */,
    0x00000014    /*  47 (RET) */,
    0x00000006    /*  48 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  50 (LREF0-PUSH) */,
    0x00002060    /*  51 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  53 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1480]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* sinh */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1480]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[36])) /* #<compiled-code sinh@0x79e85983cb40> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sinh */,
    0x00000014    /*  14 (RET) */,
    /* tan */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-tan */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]) + 46),
    0x00000006    /*  12 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* 0.0+1.0i */,
    0x0000003d    /*  14 (LREF0) */,
    0x000000b4    /*  15 (NUMMUL2) */,
    0x00001018    /*  16 (PUSH-LOCAL-ENV 1) */,
    0x00000006    /*  17 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* 0.0-1.0i */,
    0x0000100e    /*  19 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]) + 24),
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x0000105f    /*  22 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x0000100f    /*  24 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]) + 30),
    0x0000003d    /*  26 (LREF0) */,
    0x000000b7    /*  27 (NEGATE) */,
    0x00001062    /*  28 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x000000b3    /*  30 (NUMSUB2) */,
    0x0000100f    /*  31 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]) + 36),
    0x00000048    /*  33 (LREF0-PUSH) */,
    0x0000105f    /*  34 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x0000100f    /*  36 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]) + 42),
    0x0000003d    /*  38 (LREF0) */,
    0x000000b7    /*  39 (NEGATE) */,
    0x00001062    /*  40 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x000000b2    /*  42 (NUMADD2) */,
    0x000000b5    /*  43 (NUMDIV2) */,
    0x000000b4    /*  44 (NUMMUL2) */,
    0x00000014    /*  45 (RET) */,
    0x00000006    /*  46 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  48 (LREF0-PUSH) */,
    0x00002060    /*  49 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  51 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1547]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* tan */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1547]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[38])) /* #<compiled-code tan@0x79e8598b04e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* tan */,
    0x00000014    /*  14 (RET) */,
    /* tanh */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-tanh */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]) + 38),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]) + 17),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000105f    /*  15 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x0000100f    /*  17 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]) + 23),
    0x0000003d    /*  19 (LREF0) */,
    0x000000b7    /*  20 (NEGATE) */,
    0x00001062    /*  21 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x000000b3    /*  23 (NUMSUB2) */,
    0x0000100f    /*  24 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]) + 29),
    0x00000048    /*  26 (LREF0-PUSH) */,
    0x0000105f    /*  27 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x0000100f    /*  29 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]) + 35),
    0x0000003d    /*  31 (LREF0) */,
    0x000000b7    /*  32 (NEGATE) */,
    0x00001062    /*  33 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* exp */,
    0x000000b2    /*  35 (NUMADD2) */,
    0x000000b5    /*  36 (NUMDIV2) */,
    0x00000014    /*  37 (RET) */,
    0x00000006    /*  38 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  40 (LREF0-PUSH) */,
    0x00002060    /*  41 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  43 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1606]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* tanh */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1606]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[40])) /* #<compiled-code tanh@0x79e8599629c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* tanh */,
    0x00000014    /*  14 (RET) */,
    /* asin */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-asin */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]) + 53),
    0x00000006    /*  12 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* 0.0+1.0i */,
    0x0000003d    /*  14 (LREF0) */,
    0x000000b4    /*  15 (NUMMUL2) */,
    0x0000100f    /*  16 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]) + 24),
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000003d    /*  19 (LREF0) */,
    0x000000b4    /*  20 (NUMMUL2) */,
    0x000010d1    /*  21 (NUMSUBI 1) */,
    0x00001062    /*  22 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sqrt */,
    0x000000b2    /*  24 (NUMADD2) */,
    0x00001018    /*  25 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  26 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]) + 31),
    0x00000048    /*  28 (LREF0-PUSH) */,
    0x0000105f    /*  29 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* magnitude */,
    0x0000100f    /*  31 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]) + 36),
    0x0000004c    /*  33 (LREF10-PUSH) */,
    0x0000105f    /*  34 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* magnitude */,
    0x000000bb    /*  36 (NUMIDIV2) */,
    0x0000000d    /*  37 (PUSH) */,
    0x00000001    /*  38 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* 1.0e-8 */,
    0x00000024    /*  40 (BNLT) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]) + 44),
    0x0000000a    /*  42 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* +nan.0+nan.0i */,
    0x00000006    /*  44 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* 0.0-1.0i */,
    0x0000100e    /*  46 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]) + 51),
    0x00000048    /*  48 (LREF0-PUSH) */,
    0x0000105f    /*  49 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x000000b4    /*  51 (NUMMUL2) */,
    0x00000014    /*  52 (RET) */,
    0x00000006    /*  53 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  55 (LREF0-PUSH) */,
    0x00002060    /*  56 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  58 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1680]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* asin */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1680]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[42])) /* #<compiled-code asin@0x79e8599bc780> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* asin */,
    0x00000014    /*  14 (RET) */,
    /* asinh */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-asinh */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]) + 44),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]) + 20),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000003d    /*  15 (LREF0) */,
    0x000000b4    /*  16 (NUMMUL2) */,
    0x000010bc    /*  17 (NUMADDI 1) */,
    0x00001062    /*  18 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sqrt */,
    0x000000b6    /*  20 (LREF-VAL0-NUMADD2 0 0) */,
    0x00001018    /*  21 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  22 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]) + 27),
    0x00000048    /*  24 (LREF0-PUSH) */,
    0x0000105f    /*  25 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* magnitude */,
    0x0000100f    /*  27 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]) + 32),
    0x0000004c    /*  29 (LREF10-PUSH) */,
    0x0000105f    /*  30 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* magnitude */,
    0x000000bb    /*  32 (NUMIDIV2) */,
    0x0000000d    /*  33 (PUSH) */,
    0x00000001    /*  34 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* 1.0e-8 */,
    0x00000024    /*  36 (BNLT) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]) + 40),
    0x0000000a    /*  38 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* +nan.0+nan.0i */,
    0x00000048    /*  40 (LREF0-PUSH) */,
    0x00001060    /*  41 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x00000014    /*  43 (RET) */,
    0x00000006    /*  44 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  46 (LREF0-PUSH) */,
    0x00002060    /*  47 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  49 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1745]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* asinh */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1745]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[44])) /* #<compiled-code asinh@0x79e859a3d1e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* asinh */,
    0x00000014    /*  14 (RET) */,
    /* acos */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1760]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-acos */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1760]) + 21),
    0x00000006    /*  12 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* 1.5707963267948966 */,
    0x0000100e    /*  14 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1760]) + 19),
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x0000105f    /*  17 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* asin */,
    0x000000b3    /*  19 (NUMSUB2) */,
    0x00000014    /*  20 (RET) */,
    0x00000006    /*  21 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x00002060    /*  24 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  26 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1787]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* acos */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1787]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[46])) /* #<compiled-code acos@0x79e859aa13c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* acos */,
    0x00000014    /*  14 (RET) */,
    /* acosh */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-acosh */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]) + 34),
    0x00002007    /*  12 (CONSTI-PUSH 2) */,
    0x0000100e    /*  13 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]) + 32),
    0x0000100e    /*  15 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]) + 22),
    0x000010c7    /*  17 (LREF0-NUMADDI-PUSH 1) */,
    0x00002002    /*  18 (CONSTI 2) */,
    0x000000b5    /*  19 (NUMDIV2) */,
    0x00001062    /*  20 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sqrt */,
    0x0000100f    /*  22 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]) + 29),
    -0x00000f39   /*  24 (LREF0-NUMADDI-PUSH -1) */,
    0x00002002    /*  25 (CONSTI 2) */,
    0x000000b5    /*  26 (NUMDIV2) */,
    0x00001062    /*  27 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sqrt */,
    0x000000b2    /*  29 (NUMADD2) */,
    0x00001062    /*  30 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x000000b4    /*  32 (NUMMUL2) */,
    0x00000014    /*  33 (RET) */,
    0x00000006    /*  34 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  36 (LREF0-PUSH) */,
    0x00002060    /*  37 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  39 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1842]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* acosh */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1842]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[48])) /* #<compiled-code acosh@0x79e859b5e120> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* acosh */,
    0x00000014    /*  14 (RET) */,
    /* atan */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 43),
    0x0000003e    /*   3 (LREF1) */,
    0x0000009f    /*   4 (REALP) */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 11),
    0x00000049    /*   7 (LREF1-PUSH) */,
    0x00001060    /*   8 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-atan */,
    0x00000014    /*  10 (RET) */,
    0x0000003e    /*  11 (LREF1) */,
    0x0000009e    /*  12 (NUMBERP) */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 37),
    0x00000049    /*  15 (LREF1-PUSH) */,
    0x00000001    /*  16 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* 0.0+1.0i */,
    0x000000b4    /*  18 (NUMMUL2) */,
    0x00001018    /*  19 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  20 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 25),
    0x000010c7    /*  22 (LREF0-NUMADDI-PUSH 1) */,
    0x0000105f    /*  23 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x0000100f    /*  25 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 31),
    0x0000003d    /*  27 (LREF0) */,
    0x000010d1    /*  28 (NUMSUBI 1) */,
    0x00001062    /*  29 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x000000b3    /*  31 (NUMSUB2) */,
    0x0000000d    /*  32 (PUSH) */,
    0x00000001    /*  33 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* 0.0+2.0i */,
    0x000000b5    /*  35 (NUMDIV2) */,
    0x00000014    /*  36 (RET) */,
    0x00000006    /*  37 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000049    /*  39 (LREF1-PUSH) */,
    0x00002060    /*  40 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  42 (RET) */,
    0x0000006a    /*  43 (LREF0-CAR) */,
    0x0000002e    /*  44 (BNEQC) */,
    SCM_WORD(SCM_MAKE_INT(0)) /* 0 */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 67)  /*     67 */,
    0x0000003e    /*  47 (LREF1) */,
    0x0000002d    /*  48 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 67),
    0x0000003e    /*  50 (LREF1) */,
    0x0000002e    /*  51 (BNEQC) */,
    SCM_WORD(SCM_MAKE_INT(0)) /* 0 */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 56)  /*     56 */,
    0x0000000a    /*  54 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* +nan.0 */,
    0x0000100e    /*  56 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 61),
    0x00000049    /*  58 (LREF1-PUSH) */,
    0x0000105f    /*  59 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* negative-zero? */,
    0x0000001e    /*  61 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 65),
    0x0000000a    /*  63 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* -1.5707963267948966 */,
    0x0000000a    /*  65 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* 1.5707963267948966 */,
    0x0000003e    /*  67 (LREF1) */,
    0x0000009f    /*  68 (REALP) */,
    0x0000001e    /*  69 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 80),
    0x0000006a    /*  71 (LREF0-CAR) */,
    0x0000009f    /*  72 (REALP) */,
    0x0000001e    /*  73 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 80),
    0x00000049    /*  75 (LREF1-PUSH) */,
    0x0000006a    /*  76 (LREF0-CAR) */,
    0x00002063    /*  77 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* real-atan */,
    0x00000014    /*  79 (RET) */,
    0x00000006    /*  80 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[190])) /* "two-argument atan requires real numbers, but got" */,
    0x00000049    /*  82 (LREF1-PUSH) */,
    0x0000006a    /*  83 (LREF0-CAR) */,
    0x00002088    /*  84 (LIST 2) */,
    0x00002063    /*  85 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  87 (RET) */,
    0x00000013    /*  88 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 80),
    0x00000014    /*  90 (RET) */,
    0x00000013    /*  91 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]) + 67),
    0x00000014    /*  93 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1951]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* atan */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1951]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[50])) /* #<compiled-code atan@0x79e8594ad5a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* atan */,
    0x00000014    /*  14 (RET) */,
    /* atanh */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009f    /*   1 (REALP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1966]) + 8),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* real-atanh */,
    0x00000014    /*   7 (RET) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009e    /*   9 (NUMBERP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1966]) + 28),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1966]) + 17),
    0x000010c7    /*  14 (LREF0-NUMADDI-PUSH 1) */,
    0x0000105f    /*  15 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x0000100f    /*  17 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[1966]) + 23),
    0x0000003d    /*  19 (LREF0) */,
    0x000010d1    /*  20 (NUMSUBI 1) */,
    0x00001062    /*  21 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* log */,
    0x000000b3    /*  23 (NUMSUB2) */,
    0x0000000d    /*  24 (PUSH) */,
    0x00002002    /*  25 (CONSTI 2) */,
    0x000000b5    /*  26 (NUMDIV2) */,
    0x00000014    /*  27 (RET) */,
    0x00000006    /*  28 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[165])) /* "number required, but got" */,
    0x00000048    /*  30 (LREF0-PUSH) */,
    0x00002060    /*  31 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  33 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[2000]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* atanh */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[2000]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[52])) /* #<compiled-code atanh@0x79e85966bd80> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* atanh */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(51U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_OBJ(&scm__rc.d2150[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[4]), SCM_OBJ(&scm__rc.d2150[8])},
       { SCM_MAKE_INT(53U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[13])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_OBJ(&scm__rc.d2150[15]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[12]), SCM_OBJ(&scm__rc.d2150[16])},
       { SCM_MAKE_INT(55U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[19])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[21])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_OBJ(&scm__rc.d2150[23]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[20]), SCM_OBJ(&scm__rc.d2150[24])},
       { SCM_MAKE_INT(57U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[26])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[27])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[29])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_OBJ(&scm__rc.d2150[31]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[28]), SCM_OBJ(&scm__rc.d2150[32])},
       { SCM_MAKE_INT(59U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[35])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[38])},
       { SCM_OBJ(&scm__rc.d2150[39]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[36]), SCM_OBJ(&scm__rc.d2150[40])},
       { SCM_MAKE_INT(62U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[43])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[45])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[46])},
       { SCM_OBJ(&scm__rc.d2150[47]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[44]), SCM_OBJ(&scm__rc.d2150[48])},
       { SCM_MAKE_INT(63U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[50])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[54])},
       { SCM_OBJ(&scm__rc.d2150[55]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[52]), SCM_OBJ(&scm__rc.d2150[56])},
       { SCM_MAKE_INT(65U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[59])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[62])},
       { SCM_OBJ(&scm__rc.d2150[63]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[64])},
       { SCM_MAKE_INT(68U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[67])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[70])},
       { SCM_OBJ(&scm__rc.d2150[71]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[68]), SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_MAKE_INT(70U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[75])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[77])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_OBJ(&scm__rc.d2150[79]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[76]), SCM_OBJ(&scm__rc.d2150[80])},
       { SCM_MAKE_INT(72U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[85])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[86])},
       { SCM_OBJ(&scm__rc.d2150[87]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[84]), SCM_OBJ(&scm__rc.d2150[88])},
       { SCM_MAKE_INT(73U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[91])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[93])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[94])},
       { SCM_OBJ(&scm__rc.d2150[95]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[92]), SCM_OBJ(&scm__rc.d2150[96])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(78U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[99])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[100])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[102])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[103])},
       { SCM_OBJ(&scm__rc.d2150[104]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[101]), SCM_OBJ(&scm__rc.d2150[105])},
       { SCM_MAKE_INT(79U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[108])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[110])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_OBJ(&scm__rc.d2150[112]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[109]), SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_MAKE_INT(80U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[115])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[116])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[118])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_OBJ(&scm__rc.d2150[120]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[117]), SCM_OBJ(&scm__rc.d2150[121])},
       { SCM_MAKE_INT(81U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[123])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[126])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_OBJ(&scm__rc.d2150[128]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[125]), SCM_OBJ(&scm__rc.d2150[129])},
       { SCM_MAKE_INT(83U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[131])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[132])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[134])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[135])},
       { SCM_OBJ(&scm__rc.d2150[136]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[133]), SCM_OBJ(&scm__rc.d2150[137])},
       { SCM_MAKE_INT(84U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[139])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[140])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[142])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[143])},
       { SCM_OBJ(&scm__rc.d2150[144]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[141]), SCM_OBJ(&scm__rc.d2150[145])},
       { SCM_MAKE_INT(85U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[147])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[148])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[150])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[151])},
       { SCM_OBJ(&scm__rc.d2150[152]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[149]), SCM_OBJ(&scm__rc.d2150[153])},
       { SCM_MAKE_INT(86U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[155])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[156])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[158])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[159])},
       { SCM_OBJ(&scm__rc.d2150[160]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[157]), SCM_OBJ(&scm__rc.d2150[161])},
       { SCM_MAKE_INT(91U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[163])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[164])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[166])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[167])},
       { SCM_OBJ(&scm__rc.d2150[168]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[165]), SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[171])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[172])},
       { SCM_OBJ(&scm__rc.d2150[173]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[175])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[176])},
       { SCM_OBJ(&scm__rc.d2150[177]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[179])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[180])},
       { SCM_OBJ(&scm__rc.d2150[181]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[183])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_OBJ(&scm__rc.d2150[185]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[187])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[188])},
       { SCM_OBJ(&scm__rc.d2150[189]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[191])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[192])},
       { SCM_OBJ(&scm__rc.d2150[193]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[195])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[196])},
       { SCM_OBJ(&scm__rc.d2150[197]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[199])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[200])},
       { SCM_OBJ(&scm__rc.d2150[201]), SCM_NIL},
       { SCM_MAKE_INT(141U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[203])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[204])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[206])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[207])},
       { SCM_OBJ(&scm__rc.d2150[208]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[205]), SCM_OBJ(&scm__rc.d2150[209])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[212])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[213])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[214])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[215])},
       { SCM_MAKE_INT(185U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[217])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[218])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[220])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[221])},
       { SCM_OBJ(&scm__rc.d2150[222]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[219]), SCM_OBJ(&scm__rc.d2150[223])},
       { SCM_MAKE_INT(187U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[225])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[226])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[228])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[229])},
       { SCM_OBJ(&scm__rc.d2150[230]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[227]), SCM_OBJ(&scm__rc.d2150[231])},
       { SCM_MAKE_INT(189U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[234])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[236])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[237])},
       { SCM_OBJ(&scm__rc.d2150[238]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[235]), SCM_OBJ(&scm__rc.d2150[239])},
       { SCM_MAKE_INT(191U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[241])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[242])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[244])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[245])},
       { SCM_OBJ(&scm__rc.d2150[246]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[243]), SCM_OBJ(&scm__rc.d2150[247])},
       { SCM_MAKE_INT(193U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[249])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[250])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[252])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[253])},
       { SCM_OBJ(&scm__rc.d2150[254]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[251]), SCM_OBJ(&scm__rc.d2150[255])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[257])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[258])},
       { SCM_MAKE_INT(196U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[260])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[261])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[263])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[264])},
       { SCM_OBJ(&scm__rc.d2150[265]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[262]), SCM_OBJ(&scm__rc.d2150[266])},
       { SCM_MAKE_INT(198U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[268])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[271])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[272])},
       { SCM_OBJ(&scm__rc.d2150[273]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[270]), SCM_OBJ(&scm__rc.d2150[274])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[276])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[277])},
       { SCM_MAKE_INT(202U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[279])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[280])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[282])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[283])},
       { SCM_OBJ(&scm__rc.d2150[284]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[281]), SCM_OBJ(&scm__rc.d2150[285])},
       { SCM_MAKE_INT(204U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[287])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[288])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[290])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[291])},
       { SCM_OBJ(&scm__rc.d2150[292]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[289]), SCM_OBJ(&scm__rc.d2150[293])},
       { SCM_MAKE_INT(206U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[295])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[296])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[298])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[299])},
       { SCM_OBJ(&scm__rc.d2150[300]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[297]), SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_MAKE_INT(214U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[303])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[304])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[306])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[307])},
       { SCM_OBJ(&scm__rc.d2150[308]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[305]), SCM_OBJ(&scm__rc.d2150[309])},
       { SCM_MAKE_INT(215U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[311])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[312])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[314])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[315])},
       { SCM_OBJ(&scm__rc.d2150[316]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[313]), SCM_OBJ(&scm__rc.d2150[317])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[319])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[320])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[321])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[322])},
       { SCM_MAKE_INT(222U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[324])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[325])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[327])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[328])},
       { SCM_OBJ(&scm__rc.d2150[329]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[326]), SCM_OBJ(&scm__rc.d2150[330])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[332])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[333])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_MAKE_INT(254U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[336])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[337])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[339])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[340])},
       { SCM_OBJ(&scm__rc.d2150[341]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[338]), SCM_OBJ(&scm__rc.d2150[342])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(268U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[345])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[346])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[349])},
       { SCM_OBJ(&scm__rc.d2150[350]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[347]), SCM_OBJ(&scm__rc.d2150[351])},
       { SCM_MAKE_INT(270U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[353])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[354])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[356])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[357])},
       { SCM_OBJ(&scm__rc.d2150[358]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[355]), SCM_OBJ(&scm__rc.d2150[359])},
       { SCM_MAKE_INT(272U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[361])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[362])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[364])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[365])},
       { SCM_OBJ(&scm__rc.d2150[366]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[363]), SCM_OBJ(&scm__rc.d2150[367])},
       { SCM_MAKE_INT(274U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[369])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[370])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[372])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[373])},
       { SCM_OBJ(&scm__rc.d2150[374]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[371]), SCM_OBJ(&scm__rc.d2150[375])},
       { SCM_MAKE_INT(277U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[377])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[378])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[380])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[381])},
       { SCM_OBJ(&scm__rc.d2150[382]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[379]), SCM_OBJ(&scm__rc.d2150[383])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[385])},
       { SCM_MAKE_INT(294U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[387])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[388])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[390])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[391])},
       { SCM_OBJ(&scm__rc.d2150[392]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[389]), SCM_OBJ(&scm__rc.d2150[393])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(296U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[396])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[397])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[399])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[400])},
       { SCM_OBJ(&scm__rc.d2150[401]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[398]), SCM_OBJ(&scm__rc.d2150[402])},
       { SCM_MAKE_INT(299U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[404])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[405])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[407])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[408])},
       { SCM_OBJ(&scm__rc.d2150[409]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[406]), SCM_OBJ(&scm__rc.d2150[410])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[412])},
       { SCM_MAKE_INT(302U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[414])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[415])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[417])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[418])},
       { SCM_OBJ(&scm__rc.d2150[419]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[416]), SCM_OBJ(&scm__rc.d2150[420])},
       { SCM_MAKE_INT(304U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[422])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[423])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[426])},
       { SCM_OBJ(&scm__rc.d2150[427]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[424]), SCM_OBJ(&scm__rc.d2150[428])},
       { SCM_MAKE_INT(318U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[430])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[431])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[433])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[434])},
       { SCM_OBJ(&scm__rc.d2150[435]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[432]), SCM_OBJ(&scm__rc.d2150[436])},
       { SCM_MAKE_INT(332U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[438])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[439])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[441])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[442])},
       { SCM_OBJ(&scm__rc.d2150[443]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[440]), SCM_OBJ(&scm__rc.d2150[444])},
       { SCM_MAKE_INT(344U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[446])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[447])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[449])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[450])},
       { SCM_OBJ(&scm__rc.d2150[451]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[448]), SCM_OBJ(&scm__rc.d2150[452])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[258])},
       { SCM_MAKE_INT(356U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[455])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[456])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[458])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_OBJ(&scm__rc.d2150[460]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[457]), SCM_OBJ(&scm__rc.d2150[461])},
       { SCM_MAKE_INT(362U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[463])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[464])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[466])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[467])},
       { SCM_OBJ(&scm__rc.d2150[468]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[465]), SCM_OBJ(&scm__rc.d2150[469])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[471])},
       { SCM_MAKE_INT(369U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[473])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[474])},
       { SCM_OBJ(&scm__rc.d2150[475]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(381U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[478])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[479])},
       { SCM_OBJ(&scm__rc.d2150[480]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(382U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[483])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[484])},
       { SCM_OBJ(&scm__rc.d2150[485]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(386U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[488])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[489])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[491])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[492])},
       { SCM_OBJ(&scm__rc.d2150[493]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[490]), SCM_OBJ(&scm__rc.d2150[494])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[496])},
       { SCM_MAKE_INT(388U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[498])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[499])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[501])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[502])},
       { SCM_OBJ(&scm__rc.d2150[503]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[500]), SCM_OBJ(&scm__rc.d2150[504])},
       { SCM_MAKE_INT(390U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[506])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[507])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[509])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[510])},
       { SCM_OBJ(&scm__rc.d2150[511]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[508]), SCM_OBJ(&scm__rc.d2150[512])},
       { SCM_MAKE_INT(392U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[514])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[515])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[517])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[518])},
       { SCM_OBJ(&scm__rc.d2150[519]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[516]), SCM_OBJ(&scm__rc.d2150[520])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[522])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(403U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[525])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[526])},
       { SCM_OBJ(&scm__rc.d2150[527]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[10]), SCM_NIL},
       { SCM_MAKE_INT(398U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[531])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[532])},
       { SCM_OBJ(&scm__rc.d2150[533]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[536])},
       { SCM_MAKE_INT(419U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[538])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[539])},
       { SCM_OBJ(&scm__rc.d2150[540]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[13]), SCM_NIL},
       { SCM_MAKE_INT(411U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[544])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[545])},
       { SCM_OBJ(&scm__rc.d2150[546]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(428U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[549])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[550])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[552])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[553])},
       { SCM_OBJ(&scm__rc.d2150[554]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[551]), SCM_OBJ(&scm__rc.d2150[555])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(431U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[558])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[559])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[561])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[562])},
       { SCM_OBJ(&scm__rc.d2150[563]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[560]), SCM_OBJ(&scm__rc.d2150[564])},
       { SCM_MAKE_INT(432U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[566])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[567])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[569])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[570])},
       { SCM_OBJ(&scm__rc.d2150[571]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[568]), SCM_OBJ(&scm__rc.d2150[572])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[574])},
       { SCM_MAKE_INT(435U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[576])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[577])},
       { SCM_OBJ(&scm__rc.d2150[578]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(446U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[582])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[583])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[585])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[586])},
       { SCM_OBJ(&scm__rc.d2150[587]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[584]), SCM_OBJ(&scm__rc.d2150[588])},
       { SCM_MAKE_INT(448U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[590])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[591])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[593])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[594])},
       { SCM_OBJ(&scm__rc.d2150[595]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[592]), SCM_OBJ(&scm__rc.d2150[596])},
       { SCM_MAKE_INT(450U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[598])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[599])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[601])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[602])},
       { SCM_OBJ(&scm__rc.d2150[603]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[600]), SCM_OBJ(&scm__rc.d2150[604])},
       { SCM_MAKE_INT(452U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[606])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[607])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[609])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[610])},
       { SCM_OBJ(&scm__rc.d2150[611]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[608]), SCM_OBJ(&scm__rc.d2150[612])},
       { SCM_MAKE_INT(460U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[614])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[615])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[617])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[618])},
       { SCM_OBJ(&scm__rc.d2150[619]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[616]), SCM_OBJ(&scm__rc.d2150[620])},
       { SCM_MAKE_INT(461U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[622])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[623])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[625])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[626])},
       { SCM_OBJ(&scm__rc.d2150[627]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[624]), SCM_OBJ(&scm__rc.d2150[628])},
       { SCM_MAKE_INT(479U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[630])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[631])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[633])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[634])},
       { SCM_OBJ(&scm__rc.d2150[635]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[632]), SCM_OBJ(&scm__rc.d2150[636])},
       { SCM_MAKE_INT(480U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[638])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[639])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[641])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[642])},
       { SCM_OBJ(&scm__rc.d2150[643]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[640]), SCM_OBJ(&scm__rc.d2150[644])},
       { SCM_MAKE_INT(481U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[646])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[647])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[649])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[650])},
       { SCM_OBJ(&scm__rc.d2150[651]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[648]), SCM_OBJ(&scm__rc.d2150[652])},
       { SCM_MAKE_INT(483U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[654])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[655])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[657])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[658])},
       { SCM_OBJ(&scm__rc.d2150[659]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[656]), SCM_OBJ(&scm__rc.d2150[660])},
       { SCM_MAKE_INT(484U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[662])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[663])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[665])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[666])},
       { SCM_OBJ(&scm__rc.d2150[667]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[664]), SCM_OBJ(&scm__rc.d2150[668])},
       { SCM_MAKE_INT(485U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[670])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[671])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[673])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[674])},
       { SCM_OBJ(&scm__rc.d2150[675]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[672]), SCM_OBJ(&scm__rc.d2150[676])},
       { SCM_MAKE_INT(487U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[678])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[679])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[681])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[682])},
       { SCM_OBJ(&scm__rc.d2150[683]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[680]), SCM_OBJ(&scm__rc.d2150[684])},
       { SCM_MAKE_INT(496U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[686])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[687])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[689])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[690])},
       { SCM_OBJ(&scm__rc.d2150[691]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[688]), SCM_OBJ(&scm__rc.d2150[692])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[694])},
       { SCM_MAKE_INT(503U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[696])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[697])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[699])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[700])},
       { SCM_OBJ(&scm__rc.d2150[701]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[698]), SCM_OBJ(&scm__rc.d2150[702])},
       { SCM_MAKE_INT(508U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[704])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[705])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[707])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[708])},
       { SCM_OBJ(&scm__rc.d2150[709]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[706]), SCM_OBJ(&scm__rc.d2150[710])},
       { SCM_MAKE_INT(509U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[712])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[713])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[715])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[716])},
       { SCM_OBJ(&scm__rc.d2150[717]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[714]), SCM_OBJ(&scm__rc.d2150[718])},
       { SCM_MAKE_INT(510U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[720])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[721])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[723])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[724])},
       { SCM_OBJ(&scm__rc.d2150[725]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[722]), SCM_OBJ(&scm__rc.d2150[726])},
       { SCM_MAKE_INT(511U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[728])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[729])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[731])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[732])},
       { SCM_OBJ(&scm__rc.d2150[733]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[730]), SCM_OBJ(&scm__rc.d2150[734])},
       { SCM_MAKE_INT(512U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[736])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[737])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[739])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[740])},
       { SCM_OBJ(&scm__rc.d2150[741]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[738]), SCM_OBJ(&scm__rc.d2150[742])},
       { SCM_MAKE_INT(513U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[744])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[745])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[747])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[748])},
       { SCM_OBJ(&scm__rc.d2150[749]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[746]), SCM_OBJ(&scm__rc.d2150[750])},
       { SCM_MAKE_INT(515U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[752])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[753])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[755])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[756])},
       { SCM_OBJ(&scm__rc.d2150[757]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[754]), SCM_OBJ(&scm__rc.d2150[758])},
       { SCM_MAKE_INT(525U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[760])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[761])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[763])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[764])},
       { SCM_OBJ(&scm__rc.d2150[765]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[762]), SCM_OBJ(&scm__rc.d2150[766])},
       { SCM_MAKE_INT(542U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[768])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[769])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[771])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[772])},
       { SCM_OBJ(&scm__rc.d2150[773]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[770]), SCM_OBJ(&scm__rc.d2150[774])},
       { SCM_MAKE_INT(543U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[776])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[777])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[779])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[780])},
       { SCM_OBJ(&scm__rc.d2150[781]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[778]), SCM_OBJ(&scm__rc.d2150[782])},
       { SCM_MAKE_INT(546U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[784])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[785])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[787])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[788])},
       { SCM_OBJ(&scm__rc.d2150[789]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[786]), SCM_OBJ(&scm__rc.d2150[790])},
       { SCM_MAKE_INT(551U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[792])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[793])},
       { SCM_OBJ(&scm__rc.d2150[794]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(556U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[798])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[799])},
       { SCM_OBJ(&scm__rc.d2150[800]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(569U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[803])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[804])},
       { SCM_OBJ(&scm__rc.d2150[805]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(597U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[809])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[810])},
       { SCM_OBJ(&scm__rc.d2150[811]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(618U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[814])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[815])},
       { SCM_OBJ(&scm__rc.d2150[816]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(634U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[819])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[820])},
       { SCM_OBJ(&scm__rc.d2150[821]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(686U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[824])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[825])},
       { SCM_OBJ(&scm__rc.d2150[826]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(695U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[829])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[830])},
       { SCM_OBJ(&scm__rc.d2150[831]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(704U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[834])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[835])},
       { SCM_OBJ(&scm__rc.d2150[836]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(713U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[839])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[840])},
       { SCM_OBJ(&scm__rc.d2150[841]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(722U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[844])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[845])},
       { SCM_OBJ(&scm__rc.d2150[846]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(731U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[849])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[850])},
       { SCM_OBJ(&scm__rc.d2150[851]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(737U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[854])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[855])},
       { SCM_OBJ(&scm__rc.d2150[856]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(754U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[859])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[860])},
       { SCM_OBJ(&scm__rc.d2150[861]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(763U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[864])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[865])},
       { SCM_OBJ(&scm__rc.d2150[866]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(774U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[869])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[870])},
       { SCM_OBJ(&scm__rc.d2150[871]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(781U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[875])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[876])},
       { SCM_OBJ(&scm__rc.d2150[877]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(799U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[880])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[881])},
       { SCM_OBJ(&scm__rc.d2150[882]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(805U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[886])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[887])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[889])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[890])},
       { SCM_OBJ(&scm__rc.d2150[891]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[888]), SCM_OBJ(&scm__rc.d2150[892])},
       { SCM_MAKE_INT(807U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[894])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[895])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[897])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[898])},
       { SCM_OBJ(&scm__rc.d2150[899]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[896]), SCM_OBJ(&scm__rc.d2150[900])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[902])},
       { SCM_MAKE_INT(812U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[904])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[905])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[907])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[908])},
       { SCM_OBJ(&scm__rc.d2150[909]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[906]), SCM_OBJ(&scm__rc.d2150[910])},
       { SCM_MAKE_INT(814U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[912])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[913])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[915])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[916])},
       { SCM_OBJ(&scm__rc.d2150[917]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[914]), SCM_OBJ(&scm__rc.d2150[918])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[920])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[921])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[922])},
       { SCM_MAKE_INT(830U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[924])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[925])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[927])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[928])},
       { SCM_OBJ(&scm__rc.d2150[929]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[926]), SCM_OBJ(&scm__rc.d2150[930])},
       { SCM_MAKE_INT(832U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[932])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[933])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[935])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[936])},
       { SCM_OBJ(&scm__rc.d2150[937]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[934]), SCM_OBJ(&scm__rc.d2150[938])},
       { SCM_MAKE_INT(834U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[940])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[941])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[943])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[944])},
       { SCM_OBJ(&scm__rc.d2150[945]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[942]), SCM_OBJ(&scm__rc.d2150[946])},
       { SCM_MAKE_INT(837U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[948])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[949])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[951])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[952])},
       { SCM_OBJ(&scm__rc.d2150[953]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[950]), SCM_OBJ(&scm__rc.d2150[954])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[956])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[957])},
       { SCM_MAKE_INT(847U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[959])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[960])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[962])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[963])},
       { SCM_OBJ(&scm__rc.d2150[964]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[961]), SCM_OBJ(&scm__rc.d2150[965])},
       { SCM_MAKE_INT(851U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[967])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[968])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[970])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[971])},
       { SCM_OBJ(&scm__rc.d2150[972]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[969]), SCM_OBJ(&scm__rc.d2150[973])},
       { SCM_MAKE_INT(856U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[975])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[976])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[978])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[979])},
       { SCM_OBJ(&scm__rc.d2150[980]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[977]), SCM_OBJ(&scm__rc.d2150[981])},
       { SCM_MAKE_INT(867U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[983])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[984])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[986])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[987])},
       { SCM_OBJ(&scm__rc.d2150[988]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[985]), SCM_OBJ(&scm__rc.d2150[989])},
       { SCM_MAKE_INT(880U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[991])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[992])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[994])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[995])},
       { SCM_OBJ(&scm__rc.d2150[996]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[993]), SCM_OBJ(&scm__rc.d2150[997])},
       { SCM_MAKE_INT(888U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[999])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1000])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1002])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1003])},
       { SCM_OBJ(&scm__rc.d2150[1004]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1001]), SCM_OBJ(&scm__rc.d2150[1005])},
       { SCM_MAKE_INT(892U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1007])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1008])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1010])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1011])},
       { SCM_OBJ(&scm__rc.d2150[1012]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1009]), SCM_OBJ(&scm__rc.d2150[1013])},
       { SCM_MAKE_INT(896U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1015])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1016])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1018])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1019])},
       { SCM_OBJ(&scm__rc.d2150[1020]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1017]), SCM_OBJ(&scm__rc.d2150[1021])},
       { SCM_MAKE_INT(901U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1023])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1024])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1026])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1027])},
       { SCM_OBJ(&scm__rc.d2150[1028]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1025]), SCM_OBJ(&scm__rc.d2150[1029])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[263])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1031])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1032])},
       { SCM_MAKE_INT(907U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1034])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1035])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1037])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1038])},
       { SCM_OBJ(&scm__rc.d2150[1039]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1036]), SCM_OBJ(&scm__rc.d2150[1040])},
       { SCM_MAKE_INT(924U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1042])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1043])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1045])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1046])},
       { SCM_OBJ(&scm__rc.d2150[1047]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1044]), SCM_OBJ(&scm__rc.d2150[1048])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1050])},
       { SCM_MAKE_INT(932U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1052])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1053])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1055])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1056])},
       { SCM_OBJ(&scm__rc.d2150[1057]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1054]), SCM_OBJ(&scm__rc.d2150[1058])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1060])},
       { SCM_MAKE_INT(934U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1062])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1063])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1065])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1066])},
       { SCM_OBJ(&scm__rc.d2150[1067]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1064]), SCM_OBJ(&scm__rc.d2150[1068])},
       { SCM_MAKE_INT(939U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1070])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1071])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1073])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1074])},
       { SCM_OBJ(&scm__rc.d2150[1075]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1072]), SCM_OBJ(&scm__rc.d2150[1076])},
       { SCM_MAKE_INT(944U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1078])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1079])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1081])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1082])},
       { SCM_OBJ(&scm__rc.d2150[1083]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1080]), SCM_OBJ(&scm__rc.d2150[1084])},
       { SCM_MAKE_INT(949U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1086])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1087])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1089])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1090])},
       { SCM_OBJ(&scm__rc.d2150[1091]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1088]), SCM_OBJ(&scm__rc.d2150[1092])},
       { SCM_MAKE_INT(950U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1094])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1095])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1097])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1098])},
       { SCM_OBJ(&scm__rc.d2150[1099]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1096]), SCM_OBJ(&scm__rc.d2150[1100])},
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(4, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(160, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
  },
};
#if !(defined(M_PI))
#define M_PI (3.141592653589793)

#endif /* !(defined(M_PI)) */

static ScmObj libnumnumberP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("number?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_NUMBERP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumcomplexP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("complex?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_NUMBERP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumrealP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_REALP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumrationalP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("rational?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 58 "libnum.scm"
{SCM_RESULT=((SCM_REALP(obj))&&(Scm_FiniteP(obj)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumintegerP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("integer?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 60 "libnum.scm"
{SCM_RESULT=((SCM_NUMBERP(obj))&&(Scm_IntegerP(obj)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumexactP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("exact?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_EXACTP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnuminexactP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("inexact?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_INEXACTP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumzeroP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("zero?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(obj_scm)) Scm_Error("number required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 66 "libnum.scm"
{SCM_RESULT=((SCM_REALP(obj))&&((Scm_Sign(obj))==(0)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumpositiveP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("positive?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 69 "libnum.scm"
{SCM_RESULT=((Scm_Sign(obj))>(0));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumnegativeP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("negative?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 71 "libnum.scm"
{SCM_RESULT=((!(Scm_NanP(obj)))&&((Scm_Sign(obj))<(0)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumoddP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("odd?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_OddP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumevenP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("even?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 74 "libnum.scm"
{SCM_RESULT=(!(Scm_OddP(obj)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumfixnumP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("fixnum?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_INTP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumbignumP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("bignum?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_BIGNUMP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumflonumP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("flonum?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_FLONUMP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumratnumP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("ratnum?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_RATNUMP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumfiniteP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("finite?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(x_scm)) Scm_Error("number required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_FiniteP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnuminfiniteP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("infinite?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(x_scm)) Scm_Error("number required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_InfiniteP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumnanP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("nan?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(x_scm)) Scm_Error("number required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_NanP(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumnegative_zeroP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("negative-zero?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(x_scm)) Scm_Error("number required, but got %S", x_scm);
  x = (x_scm);
  {
{
int SCM_RESULT;

#line 87 "libnum.scm"
{SCM_RESULT=(((SCM_FLONUMP(x))&&(
(SCM_FLONUM_VALUE(x))==(0.0)))&&(
(signbit(SCM_FLONUM_VALUE(x)))!=(0)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumexact_integerP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("exact-integer?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_INTEGERP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnumfixnum_width(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("fixnum-width");
  {
{
int SCM_RESULT;

#line 102 "libnum.scm"
{SCM_RESULT=((SCM_SMALL_INT_SIZE)+(1));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libnumleast_fixnum(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("least-fixnum");
  {
{
long SCM_RESULT;

#line 103 "libnum.scm"
{SCM_RESULT=(SCM_SMALL_INT_MIN);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libnumgreatest_fixnum(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("greatest-fixnum");
  {
{
long SCM_RESULT;

#line 104 "libnum.scm"
{SCM_RESULT=(SCM_SMALL_INT_MAX);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libnumnative_endian(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("native-endian");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_NativeEndian());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumflonum_epsilon(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("flonum-epsilon");
  {
{
ScmObj SCM_RESULT;

#line 116 "libnum.scm"
{static ScmObj x=SCM_UNBOUND;
if ((x)==(SCM_UNBOUND)){{
x=(Scm_MakeFlonum(DBL_EPSILON));}}
{SCM_RESULT=(x);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumleast_positive_normalized_flonum(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("least-positive-normalized-flonum");
  {
{
ScmObj SCM_RESULT;

#line 121 "libnum.scm"
{static ScmObj x=SCM_UNBOUND;
if ((x)==(SCM_UNBOUND)){{
x=(Scm_MakeFlonum(DBL_MIN));}}
{SCM_RESULT=(x);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumleast_positive_flonum(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("least-positive-flonum");
  {
{
ScmObj SCM_RESULT;

#line 126 "libnum.scm"
{static ScmObj x=SCM_UNBOUND;
if ((x)==(SCM_UNBOUND)){{
{double m=Scm_EncodeFlonum(SCM_MAKE_INT(1),-1074,1);
if ((m)==(0.0)){
x=(Scm_MakeFlonum(DBL_MIN));} else {
x=(Scm_MakeFlonum(m));}}}}
{SCM_RESULT=(x);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumgreatest_positive_flonum(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("greatest-positive-flonum");
  {
{
ScmObj SCM_RESULT;

#line 134 "libnum.scm"
{SCM_RESULT=(Scm_MakeFlonum(DBL_MAX));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_25bignum_dump(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%bignum-dump");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {

#line 142 "libnum.scm"
if (SCM_BIGNUMP(obj)){{
Scm_BignumDump(SCM_BIGNUM(obj),SCM_CUROUT);}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libnum_3d(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg0_scm;
  ScmObj arg0;
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj* oarg;
  int optcnt;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("=");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg0_scm = SCM_SUBRARGS[0];
  if (!(arg0_scm)) Scm_Error("scheme object required, but got %S", arg0_scm);
  arg0 = (arg0_scm);
  arg1_scm = SCM_SUBRARGS[1];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  oarg = &SCM_SUBRARGS[2];
  optcnt = SCM_ARGCNT-1-2;
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
int SCM_RESULT;

#line 186 "libnum.scm"
{if (!(Scm_NumEq(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(0)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumEq(arg1,(oarg)[0]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(1)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumEq((oarg)[0],(oarg)[1]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(((optcnt)==(2))&&(SCM_NULLP(args))){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=((oarg)[1]),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));for (;;){if (!(Scm_NumEq(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(SCM_NULLP(args)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=(arg1),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnum_LT(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg0_scm;
  ScmObj arg0;
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj* oarg;
  int optcnt;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("<");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg0_scm = SCM_SUBRARGS[0];
  if (!(arg0_scm)) Scm_Error("scheme object required, but got %S", arg0_scm);
  arg0 = (arg0_scm);
  arg1_scm = SCM_SUBRARGS[1];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  oarg = &SCM_SUBRARGS[2];
  optcnt = SCM_ARGCNT-1-2;
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
int SCM_RESULT;

#line 188 "libnum.scm"
{if (!(Scm_NumLT(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(0)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumLT(arg1,(oarg)[0]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(1)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumLT((oarg)[0],(oarg)[1]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(((optcnt)==(2))&&(SCM_NULLP(args))){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=((oarg)[1]),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));for (;;){if (!(Scm_NumLT(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(SCM_NULLP(args)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=(arg1),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnum_LT_3d(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg0_scm;
  ScmObj arg0;
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj* oarg;
  int optcnt;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("<=");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg0_scm = SCM_SUBRARGS[0];
  if (!(arg0_scm)) Scm_Error("scheme object required, but got %S", arg0_scm);
  arg0 = (arg0_scm);
  arg1_scm = SCM_SUBRARGS[1];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  oarg = &SCM_SUBRARGS[2];
  optcnt = SCM_ARGCNT-1-2;
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
int SCM_RESULT;

#line 190 "libnum.scm"
{if (!(Scm_NumLE(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(0)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumLE(arg1,(oarg)[0]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(1)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumLE((oarg)[0],(oarg)[1]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(((optcnt)==(2))&&(SCM_NULLP(args))){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=((oarg)[1]),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));for (;;){if (!(Scm_NumLE(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(SCM_NULLP(args)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=(arg1),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnum_GT(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg0_scm;
  ScmObj arg0;
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj* oarg;
  int optcnt;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR(">");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg0_scm = SCM_SUBRARGS[0];
  if (!(arg0_scm)) Scm_Error("scheme object required, but got %S", arg0_scm);
  arg0 = (arg0_scm);
  arg1_scm = SCM_SUBRARGS[1];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  oarg = &SCM_SUBRARGS[2];
  optcnt = SCM_ARGCNT-1-2;
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
int SCM_RESULT;

#line 192 "libnum.scm"
{if (!(Scm_NumGT(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(0)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumGT(arg1,(oarg)[0]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(1)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumGT((oarg)[0],(oarg)[1]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(((optcnt)==(2))&&(SCM_NULLP(args))){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=((oarg)[1]),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));for (;;){if (!(Scm_NumGT(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(SCM_NULLP(args)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=(arg1),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnum_GT_3d(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg0_scm;
  ScmObj arg0;
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj* oarg;
  int optcnt;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR(">=");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg0_scm = SCM_SUBRARGS[0];
  if (!(arg0_scm)) Scm_Error("scheme object required, but got %S", arg0_scm);
  arg0 = (arg0_scm);
  arg1_scm = SCM_SUBRARGS[1];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  oarg = &SCM_SUBRARGS[2];
  optcnt = SCM_ARGCNT-1-2;
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
int SCM_RESULT;

#line 194 "libnum.scm"
{if (!(Scm_NumGE(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(0)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumGE(arg1,(oarg)[0]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if((optcnt)==(1)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}else if(!(Scm_NumGE((oarg)[0],(oarg)[1]))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(((optcnt)==(2))&&(SCM_NULLP(args))){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=((oarg)[1]),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));for (;;){if (!(Scm_NumGE(arg0,arg1))){{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}else if(SCM_NULLP(args)){{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {arg0=(arg1),arg1=(SCM_CAR(args)),args=(SCM_CDR(args));}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnummax(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg0_scm;
  ScmObj arg0;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("max");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg0_scm = SCM_SUBRARGS[0];
  if (!(arg0_scm)) Scm_Error("scheme object required, but got %S", arg0_scm);
  arg0 = (arg0_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;

#line 197 "libnum.scm"
Scm_MinMax(arg0,args,NULL,&(SCM_RESULT));
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnummin(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg0_scm;
  ScmObj arg0;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("min");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg0_scm = SCM_SUBRARGS[0];
  if (!(arg0_scm)) Scm_Error("scheme object required, but got %S", arg0_scm);
  arg0 = (arg0_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;

#line 199 "libnum.scm"
Scm_MinMax(arg0,args,&(SCM_RESULT),NULL);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_LT_3d_3a_LT(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj y_scm;
  ScmObj y;
  ScmObj z_scm;
  ScmObj z;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("<=:<");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  y_scm = SCM_SUBRARGS[1];
  if (!(y_scm)) Scm_Error("scheme object required, but got %S", y_scm);
  y = (y_scm);
  z_scm = SCM_SUBRARGS[2];
  if (!(z_scm)) Scm_Error("scheme object required, but got %S", z_scm);
  z = (z_scm);
  {
{
int SCM_RESULT;

#line 203 "libnum.scm"
{SCM_RESULT=((Scm_NumLE(x,y))&&(Scm_NumLT(y,z)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnum_LT_3a_LT_3d(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj y_scm;
  ScmObj y;
  ScmObj z_scm;
  ScmObj z;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("<:<=");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  y_scm = SCM_SUBRARGS[1];
  if (!(y_scm)) Scm_Error("scheme object required, but got %S", y_scm);
  y = (y_scm);
  z_scm = SCM_SUBRARGS[2];
  if (!(z_scm)) Scm_Error("scheme object required, but got %S", z_scm);
  z = (z_scm);
  {
{
int SCM_RESULT;

#line 205 "libnum.scm"
{SCM_RESULT=((Scm_NumLT(x,y))&&(Scm_NumLE(y,z)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libnummin_26max(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg0_scm;
  ScmObj arg0;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("min&max");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg0_scm = SCM_SUBRARGS[0];
  if (!(arg0_scm)) Scm_Error("scheme object required, but got %S", arg0_scm);
  arg0 = (arg0_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 207 "libnum.scm"
Scm_MinMax(arg0,args,&(SCM_RESULT0),&(SCM_RESULT1));
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libnumexact_TOinexact(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("exact->inexact");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Inexact(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnuminexact_TOexact(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("inexact->exact");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Exact(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumnumber_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj radix_scm;
  ScmSmallInt radix;
  ScmObj flags_scm;
  ScmObj flags;
  ScmObj precision_scm;
  ScmSmallInt precision;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("number->string");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  if (SCM_ARGCNT > 1+1) {
    radix_scm = SCM_SUBRARGS[1];
  } else {
    radix_scm = SCM_MAKE_INT(10U);
  }
  if (!SCM_INTP(radix_scm)) Scm_Error("ScmSmallInt required, but got %S", radix_scm);
  radix = SCM_INT_VALUE(radix_scm);
  if (SCM_ARGCNT > 2+1) {
    flags_scm = SCM_SUBRARGS[2];
  } else {
    flags_scm = SCM_FALSE;
  }
  if (!(flags_scm)) Scm_Error("scheme object required, but got %S", flags_scm);
  flags = (flags_scm);
  if (SCM_ARGCNT > 3+1) {
    precision_scm = SCM_SUBRARGS[3];
  } else {
    precision_scm = SCM_MAKE_INT(-1);
  }
  if (!SCM_INTP(precision_scm)) Scm_Error("ScmSmallInt required, but got %S", precision_scm);
  precision = SCM_INT_VALUE(precision_scm);
  {
{
ScmObj SCM_RESULT;

#line 226 "libnum.scm"
{u_long f=0;ScmNumberFormat fmt;ScmPort* o=
#line 228 "libnum.scm"
SCM_PORT(Scm_MakeOutputStringPort(TRUE));
if (((radix)<(SCM_RADIX_MIN))||((radix)>(SCM_RADIX_MAX))){{
Scm_Error("radix must be an integer between %d and %d, but got %d",SCM_RADIX_MIN,SCM_RADIX_MAX,radix);}}
#line 232 "libnum.scm"
if ((SCM_FALSEP(flags))||(SCM_NULLP(flags))){f=(0);}else if(
SCM_TRUEP(flags)){f=(SCM_NUMBER_FORMAT_USE_UPPER);}else if(
SCM_PAIRP(flags)){
if (!(SCM_FALSEP(Scm_Memq(scm__rc.d2149[222],flags)))){{
(f)|=(SCM_NUMBER_FORMAT_USE_UPPER);}}
if (!(SCM_FALSEP(Scm_Memq(scm__rc.d2149[223],flags)))){{
(f)|=(SCM_NUMBER_FORMAT_SHOW_PLUS);}}
if (!(SCM_FALSEP(Scm_Memq(scm__rc.d2149[224],flags)))){{
(f)|=(SCM_NUMBER_FORMAT_ALT_RADIX);}}
if (!(SCM_FALSEP(Scm_Memq(scm__rc.d2149[225],flags)))){{
(f)|=(SCM_NUMBER_FORMAT_ROUND_NOTATIONAL);}}} else {
#line 244 "libnum.scm"
Scm_Error("flags argument must be a list of symbols (uppercase, plus, radix, notational) or a boolean, but got: %S",flags);}
#line 247 "libnum.scm"
Scm_NumberFormatInit(&(fmt));
(fmt).radix=(radix);
(fmt).flags=(f);
(fmt).precision=(precision);
Scm_PrintNumber(o,obj,&(fmt));
{SCM_RESULT=(Scm_GetOutputString(o,0));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumstring_TOnumber(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmString* obj;
  ScmObj radix_scm;
  ScmSmallInt radix;
  ScmObj default_exactness_scm;
  ScmObj default_exactness;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("string->number");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(obj_scm)) Scm_Error("<string> required, but got %S", obj_scm);
  obj = SCM_STRING(obj_scm);
  if (SCM_ARGCNT > 1+1) {
    radix_scm = SCM_SUBRARGS[1];
  } else {
    radix_scm = SCM_MAKE_INT(10U);
  }
  if (!SCM_INTP(radix_scm)) Scm_Error("ScmSmallInt required, but got %S", radix_scm);
  radix = SCM_INT_VALUE(radix_scm);
  if (SCM_ARGCNT > 2+1) {
    default_exactness_scm = SCM_SUBRARGS[2];
  } else {
    default_exactness_scm = SCM_FALSE;
  }
  if (!(default_exactness_scm)) Scm_Error("scheme object required, but got %S", default_exactness_scm);
  default_exactness = (default_exactness_scm);
  {
{
ScmObj SCM_RESULT;

#line 257 "libnum.scm"
{u_long flags=0;
if (
SCM_EQ(default_exactness,scm__rc.d2149[216])){
flags=(SCM_NUMBER_FORMAT_EXACT);}else if(
SCM_EQ(default_exactness,scm__rc.d2149[220])){
flags=(SCM_NUMBER_FORMAT_INEXACT);}else if(
SCM_FALSEP(default_exactness)){} else {
Scm_Error("default-exactness must be either #f, exact or inexact, but got: %S",default_exactness);}
{SCM_RESULT=(Scm_StringToNumber(obj,radix,flags));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumfloor_TOexact(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj num_scm;
  ScmObj num;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("floor->exact");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  num_scm = SCM_SUBRARGS[0];
  if (!(num_scm)) Scm_Error("scheme object required, but got %S", num_scm);
  num = (num_scm);
  {
{
ScmObj SCM_RESULT;

#line 269 "libnum.scm"
{SCM_RESULT=(Scm_RoundToExact(num,SCM_ROUND_FLOOR));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumceiling_TOexact(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj num_scm;
  ScmObj num;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("ceiling->exact");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  num_scm = SCM_SUBRARGS[0];
  if (!(num_scm)) Scm_Error("scheme object required, but got %S", num_scm);
  num = (num_scm);
  {
{
ScmObj SCM_RESULT;

#line 271 "libnum.scm"
{SCM_RESULT=(Scm_RoundToExact(num,SCM_ROUND_CEIL));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumtruncate_TOexact(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj num_scm;
  ScmObj num;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("truncate->exact");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  num_scm = SCM_SUBRARGS[0];
  if (!(num_scm)) Scm_Error("scheme object required, but got %S", num_scm);
  num = (num_scm);
  {
{
ScmObj SCM_RESULT;

#line 273 "libnum.scm"
{SCM_RESULT=(Scm_RoundToExact(num,SCM_ROUND_TRUNC));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumround_TOexact(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj num_scm;
  ScmObj num;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("round->exact");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  num_scm = SCM_SUBRARGS[0];
  if (!(num_scm)) Scm_Error("scheme object required, but got %S", num_scm);
  num = (num_scm);
  {
{
ScmObj SCM_RESULT;

#line 275 "libnum.scm"
{SCM_RESULT=(Scm_RoundToExact(num,SCM_ROUND_ROUND));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumdecode_float(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj num_scm;
  ScmObj num;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("decode-float");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  num_scm = SCM_SUBRARGS[0];
  if (!(num_scm)) Scm_Error("scheme object required, but got %S", num_scm);
  num = (num_scm);
  {
{
ScmObj SCM_RESULT;

#line 278 "libnum.scm"
if (SCM_FLONUMP(num)){
{int exp;int sign;ScmObj f=
Scm_DecodeFlonum(SCM_FLONUM_VALUE(num),&(exp),&(sign));ScmObj v=
Scm_MakeVector(3,SCM_FALSE);
SCM_VECTOR_ELEMENT(v,0)=(f),
SCM_VECTOR_ELEMENT(v,1)=(Scm_MakeInteger(exp)),
SCM_VECTOR_ELEMENT(v,2)=(Scm_MakeInteger(sign));
{SCM_RESULT=(v);goto SCM_STUB_RETURN;}}}else if(
SCM_INTP(num)){
{ScmObj v=Scm_MakeVector(3,SCM_FALSE);
SCM_VECTOR_ELEMENT(v,0)=(Scm_Abs(num)),
SCM_VECTOR_ELEMENT(v,1)=(Scm_MakeInteger(0)),
SCM_VECTOR_ELEMENT(v,2)=(Scm_MakeInteger(Scm_Sign(num)));
{SCM_RESULT=(v);goto SCM_STUB_RETURN;}}} else {
SCM_TYPE_ERROR(num,"real number");{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumfmod(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj y_scm;
  double y;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("fmod");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  y_scm = SCM_SUBRARGS[1];
  if (!SCM_REALP(y_scm)) Scm_Error("double required, but got %S", y_scm);
  y = Scm_GetDouble(y_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(fmod(x,y));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumfrexp(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj d_scm;
  double d;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("frexp");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  d_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(d_scm)) Scm_Error("double required, but got %S", d_scm);
  d = Scm_GetDouble(d_scm);
  {
double SCM_RESULT0;
int SCM_RESULT1;
{

#line 297 "libnum.scm"
SCM_RESULT0=(frexp(d,&(SCM_RESULT1)));
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(Scm_VMReturnFlonum(SCM_RESULT0),Scm_MakeInteger(SCM_RESULT1)));
  }
}


static ScmObj libnummodf(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("modf");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
double SCM_RESULT0;
double SCM_RESULT1;
{

#line 300 "libnum.scm"
SCM_RESULT0=(modf(x,&(SCM_RESULT1)));
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(Scm_VMReturnFlonum(SCM_RESULT0),Scm_VMReturnFlonum(SCM_RESULT1)));
  }
}


static ScmObj libnumldexp(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj exp_scm;
  int exp;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("ldexp");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  exp_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(exp_scm)) Scm_Error("int required, but got %S", exp_scm);
  exp = Scm_GetInteger(exp_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(ldexp(x,exp));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumlog10(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("log10");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(log10(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}

#if defined(HAVE_TGAMMA)

static ScmObj libnum_25gamma(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%gamma");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(tgamma(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_LGAMMA)

static ScmObj libnum_25lgamma(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%lgamma");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(lgamma(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_LGAMMA) */

static ScmObj libnumflonum_TOf16bits(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("flonum->f16bits");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_DoubleToHalf(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libnum_2a(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("*");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2162;
#line 333 "libnum.scm"
if (!(SCM_PAIRP(args))){{SCM_RESULT=(SCM_MAKE_INT(1));goto SCM_STUB_RETURN;}}else if(
(!(SCM_PAIRP(SCM_CDR(args))))&&(
!(SCM_NUMBERP(SCM_CAR(args))))){
{ScmObj unary_proc=SCM_UNDEFINED;
SCM_BIND_PROC(unary_proc,"%apply-unary-*",
Scm_GaucheInternalModule());
{SCM_RESULT=(Scm_ApplyRec1(unary_proc,SCM_CAR(args)));goto SCM_STUB_RETURN;}}} else {
{ScmObj r=SCM_CAR(args);
SCM_FOR_EACH(cise__2162,SCM_CDR(args)) {{ScmObj v=SCM_CAR(cise__2162);r=(Scm_Mul(r,v));}}
{SCM_RESULT=(r);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_2b(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("+");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2163;
#line 345 "libnum.scm"
if (!(SCM_PAIRP(args))){{SCM_RESULT=(SCM_MAKE_INT(0));goto SCM_STUB_RETURN;}}else if(
(!(SCM_PAIRP(SCM_CDR(args))))&&(
!(SCM_NUMBERP(SCM_CAR(args))))){
{ScmObj unary_proc=SCM_UNDEFINED;
SCM_BIND_PROC(unary_proc,"%apply-unary-+",
Scm_GaucheInternalModule());
{SCM_RESULT=(Scm_ApplyRec1(unary_proc,SCM_CAR(args)));goto SCM_STUB_RETURN;}}} else {
{ScmObj r=SCM_CAR(args);
SCM_FOR_EACH(cise__2163,SCM_CDR(args)) {{ScmObj v=SCM_CAR(cise__2163);r=(Scm_Add(r,v));}}
{SCM_RESULT=(r);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("-");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg1_scm = SCM_SUBRARGS[0];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2164;
#line 357 "libnum.scm"
if (SCM_NULLP(args)){
{SCM_RESULT=(Scm_VMNegate(arg1));goto SCM_STUB_RETURN;}} else {
{SCM_FOR_EACH(cise__2164,args) {{ScmObj v=SCM_CAR(cise__2164);arg1=(Scm_Sub(arg1,v));}}
{SCM_RESULT=(arg1);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_2f(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("/");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg1_scm = SCM_SUBRARGS[0];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2165;
#line 363 "libnum.scm"
if (SCM_NULLP(args)){
{SCM_RESULT=(Scm_VMReciprocal(arg1));goto SCM_STUB_RETURN;}} else {
{SCM_FOR_EACH(cise__2165,args) {{ScmObj v=SCM_CAR(cise__2165);arg1=(Scm_Div(arg1,v));}}
{SCM_RESULT=(arg1);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumabs(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("abs");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMAbs(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumquotient(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n1_scm;
  ScmObj n1;
  ScmObj n2_scm;
  ScmObj n2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("quotient");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n1_scm = SCM_SUBRARGS[0];
  if (!(n1_scm)) Scm_Error("scheme object required, but got %S", n1_scm);
  n1 = (n1_scm);
  n2_scm = SCM_SUBRARGS[1];
  if (!(n2_scm)) Scm_Error("scheme object required, but got %S", n2_scm);
  n2 = (n2_scm);
  {
{
ScmObj SCM_RESULT;

#line 389 "libnum.scm"
{SCM_RESULT=(Scm_Quotient(n1,n2,NULL));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumremainder(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n1_scm;
  ScmObj n1;
  ScmObj n2_scm;
  ScmObj n2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("remainder");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n1_scm = SCM_SUBRARGS[0];
  if (!(n1_scm)) Scm_Error("scheme object required, but got %S", n1_scm);
  n1 = (n1_scm);
  n2_scm = SCM_SUBRARGS[1];
  if (!(n2_scm)) Scm_Error("scheme object required, but got %S", n2_scm);
  n2 = (n2_scm);
  {
{
ScmObj SCM_RESULT;

#line 391 "libnum.scm"
{SCM_RESULT=(Scm_Modulo(n1,n2,TRUE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnummodulo(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n1_scm;
  ScmObj n1;
  ScmObj n2_scm;
  ScmObj n2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("modulo");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n1_scm = SCM_SUBRARGS[0];
  if (!(n1_scm)) Scm_Error("scheme object required, but got %S", n1_scm);
  n1 = (n1_scm);
  n2_scm = SCM_SUBRARGS[1];
  if (!(n2_scm)) Scm_Error("scheme object required, but got %S", n2_scm);
  n2 = (n2_scm);
  {
{
ScmObj SCM_RESULT;

#line 393 "libnum.scm"
{SCM_RESULT=(Scm_Modulo(n1,n2,FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_25gcd(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n1_scm;
  ScmObj n1;
  ScmObj n2_scm;
  ScmObj n2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%gcd");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n1_scm = SCM_SUBRARGS[0];
  if (!(n1_scm)) Scm_Error("scheme object required, but got %S", n1_scm);
  n1 = (n1_scm);
  n2_scm = SCM_SUBRARGS[1];
  if (!(n2_scm)) Scm_Error("scheme object required, but got %S", n2_scm);
  n2 = (n2_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Gcd(n1,n2));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumnumerator(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n_scm;
  ScmObj n;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("numerator");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n_scm = SCM_SUBRARGS[0];
  if (!(n_scm)) Scm_Error("scheme object required, but got %S", n_scm);
  n = (n_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Numerator(n));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumdenominator(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n_scm;
  ScmObj n;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("denominator");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n_scm = SCM_SUBRARGS[0];
  if (!(n_scm)) Scm_Error("scheme object required, but got %S", n_scm);
  n = (n_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Denominator(n));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumfloor(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmObj v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("floor");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!(v_scm)) Scm_Error("scheme object required, but got %S", v_scm);
  v = (v_scm);
  {
{
ScmObj SCM_RESULT;

#line 447 "libnum.scm"
{SCM_RESULT=(Scm_Round(v,SCM_ROUND_FLOOR));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumceiling(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmObj v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("ceiling");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!(v_scm)) Scm_Error("scheme object required, but got %S", v_scm);
  v = (v_scm);
  {
{
ScmObj SCM_RESULT;

#line 449 "libnum.scm"
{SCM_RESULT=(Scm_Round(v,SCM_ROUND_CEIL));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumtruncate(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmObj v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("truncate");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!(v_scm)) Scm_Error("scheme object required, but got %S", v_scm);
  v = (v_scm);
  {
{
ScmObj SCM_RESULT;

#line 451 "libnum.scm"
{SCM_RESULT=(Scm_Round(v,SCM_ROUND_TRUNC));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumround(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj v_scm;
  ScmObj v;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("round");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  v_scm = SCM_SUBRARGS[0];
  if (!(v_scm)) Scm_Error("scheme object required, but got %S", v_scm);
  v = (v_scm);
  {
{
ScmObj SCM_RESULT;

#line 453 "libnum.scm"
{SCM_RESULT=(Scm_Round(v,SCM_ROUND_ROUND));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_exp(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-exp");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(exp(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_ln(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-ln");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(x_scm)) Scm_Error("number required, but got %S", x_scm);
  x = (x_scm);
  {
{
double SCM_RESULT;

#line 462 "libnum.scm"
if (!(SCM_REALP(x))){{SCM_TYPE_ERROR(x,"real number");}}

#line 463 "libnum.scm"
if ((Scm_Sign(x))<(0)){{
Scm_Error("Argument must be nonnegative real number: %S",x);}}

#line 467 "libnum.scm"
{double d=Scm_GetDouble(x);
if ((d)==(SCM_DBL_POSITIVE_INFINITY)){{
if (SCM_BIGNUMP(x)){
{ScmBits* z=((ScmBits* )((SCM_BIGNUM(x))->values));long scale=
(Scm_BitsHighest1(z,0,(SCM_BIGNUM_SIZE(x))*(SCM_WORD_BITS)))-(53);
{SCM_RESULT=((log(Scm_GetDouble(
Scm_DivInexact(x,Scm_Ash(SCM_MAKE_INT(1),scale)))))+(
(scale)*(log(2.0))));goto SCM_STUB_RETURN;}}} else {
{SCM_RESULT=(SCM_DBL_POSITIVE_INFINITY);goto SCM_STUB_RETURN;}}}}
{SCM_RESULT=(log(d));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_sin(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-sin");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(sin(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_cos(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-cos");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(cos(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_tan(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-tan");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(tan(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_sinpi(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-sinpi");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(Scm_SinPi(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_cospi(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-cospi");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(Scm_CosPi(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_tanpi(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-tanpi");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(Scm_TanPi(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_asin(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-asin");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
ScmObj SCM_RESULT;

#line 488 "libnum.scm"
if ((x)>(1.0)){
{SCM_RESULT=(Scm_MakeComplex((M_PI)/(2.0),
-(log((x)+(sqrt(((x)*(x))-(1.0)))))));goto SCM_STUB_RETURN;}}else if(
(x)<(-1.0)){
{SCM_RESULT=(Scm_MakeComplex((-(M_PI))/(2.0),
-(log((-(x))-(sqrt(((x)*(x))-(1.0)))))));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_VMReturnFlonum(asin(x)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_acos(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-acos");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
ScmObj SCM_RESULT;

#line 497 "libnum.scm"
if ((x)>(1.0)){
{SCM_RESULT=(Scm_MakeComplex(0,log((x)+(sqrt(((x)*(x))-(1.0))))));goto SCM_STUB_RETURN;}}else if(
(x)<(-1.0)){
{SCM_RESULT=(Scm_MakeComplex(0,log((x)+(sqrt(((x)*(x))-(1.0))))));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_VMReturnFlonum(acos(x)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_atan(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj z_scm;
  double z;
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("real-atan");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  z_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(z_scm)) Scm_Error("double required, but got %S", z_scm);
  z = Scm_GetDouble(z_scm);
  if (SCM_ARGCNT > 1+1) {
    x_scm = SCM_SUBRARGS[1];
  } else {
    x_scm = SCM_UNBOUND;
  }
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
double SCM_RESULT;

#line 504 "libnum.scm"
if (SCM_UNBOUNDP(x)){{SCM_RESULT=(atan(z));goto SCM_STUB_RETURN;}} else {
if (!(SCM_REALP(x))){{SCM_TYPE_ERROR(x,"real number");}}
{SCM_RESULT=(atan2(z,Scm_GetDouble(x)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_sinh(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-sinh");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(sinh(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_cosh(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-cosh");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(cosh(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_tanh(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-tanh");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(tanh(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_asinh(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-asinh");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(asinh(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_acosh(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-acosh");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(acosh(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_atanh(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-atanh");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(atanh(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_sqrt(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  double x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-sqrt");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(x_scm)) Scm_Error("double required, but got %S", x_scm);
  x = Scm_GetDouble(x_scm);
  {
{
ScmObj SCM_RESULT;

#line 516 "libnum.scm"
if ((x)<(0)){
{SCM_RESULT=(Scm_MakeComplex(0.0,sqrt(-(x))));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_VMReturnFlonum(sqrt(x)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_25sqrt_fast_path(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%sqrt-fast-path");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  {
{
ScmObj SCM_RESULT;

#line 526 "libnum.scm"
if ((SCM_FLONUMP(x))&&((Scm_Sign(x))>=(0))){
{SCM_RESULT=(Scm_VMReturnFlonum(sqrt(SCM_FLONUM_VALUE(x))));goto SCM_STUB_RETURN;}}else if(
((SCM_INTEGERP(x))&&(
(Scm_Sign(x))>=(0)))&&(
(Scm_NumCmp(SCM_2_52,x))>=(0))){
{double d=Scm_GetDouble(x);double q=
sqrt(d);double qq=
floor(q);double dd=
(qq)*(qq);
#line 536 "libnum.scm"
if ((d)==(dd)){
{SCM_RESULT=(SCM_MAKE_INT(((long )(q))));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_VMReturnFlonum(q));goto SCM_STUB_RETURN;}}}} else {
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_expt(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj y_scm;
  ScmObj y;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("real-expt");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  y_scm = SCM_SUBRARGS[1];
  if (!(y_scm)) Scm_Error("scheme object required, but got %S", y_scm);
  y = (y_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Expt(x,y));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumexact_expt(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj y_scm;
  ScmObj y;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("exact-expt");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  y_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(y_scm)) Scm_Error("exact integer required, but got %S", y_scm);
  y = (y_scm);
  {
{
ScmObj SCM_RESULT;

#line 544 "libnum.scm"
if (!(SCM_EXACTP(x))){{SCM_TYPE_ERROR(x,"exact real number");}}

#line 545 "libnum.scm"
{SCM_RESULT=(Scm_ExactIntegerExpt(x,y));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnuminteger_expt(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj y_scm;
  ScmObj y;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("integer-expt");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(x_scm)) Scm_Error("exact integer required, but got %S", x_scm);
  x = (x_scm);
  y_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(y_scm)) Scm_Error("exact integer required, but got %S", y_scm);
  y = (y_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ExactIntegerExpt(x,y));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumradians_TOdegrees(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj r_scm;
  double r;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("radians->degrees");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  r_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(r_scm)) Scm_Error("double required, but got %S", r_scm);
  r = Scm_GetDouble(r_scm);
  {
{
double SCM_RESULT;

#line 806 "libnum.scm"
{SCM_RESULT=((r)*((180)/(M_PI)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumdegrees_TOradians(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj d_scm;
  double d;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("degrees->radians");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  d_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(d_scm)) Scm_Error("double required, but got %S", d_scm);
  d = Scm_GetDouble(d_scm);
  {
{
double SCM_RESULT;

#line 808 "libnum.scm"
{SCM_RESULT=((d)*((M_PI)/(180)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libnumash(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj num_scm;
  ScmObj num;
  ScmObj cnt_scm;
  ScmSmallInt cnt;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("ash");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  num_scm = SCM_SUBRARGS[0];
  if (!(num_scm)) Scm_Error("scheme object required, but got %S", num_scm);
  num = (num_scm);
  cnt_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(cnt_scm)) Scm_Error("ScmSmallInt required, but got %S", cnt_scm);
  cnt = SCM_INT_VALUE(cnt_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Ash(num,cnt));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumlognot(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("lognot");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(x_scm)) Scm_Error("exact integer required, but got %S", x_scm);
  x = (x_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_LogNot(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumlogand(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj* arg2;
  int optcnt;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("logand");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg2 = &SCM_SUBRARGS[0];
  optcnt = SCM_ARGCNT-1-0;
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2170;
#line 831 "libnum.scm"
if ((optcnt)==(0)){{SCM_RESULT=(SCM_MAKE_INT(-1));goto SCM_STUB_RETURN;}}else if((optcnt)==(1)){if (!(SCM_INTEGERP((arg2)[0]))){{Scm_Error("Exact integer required, but got %S",(arg2)[0]);}}{SCM_RESULT=((arg2)[0]);goto SCM_STUB_RETURN;}} else {{ScmObj r=Scm_LogAnd((arg2)[0],(arg2)[1]);SCM_FOR_EACH(cise__2170,args) {{ScmObj v=SCM_CAR(cise__2170);r=(Scm_LogAnd(r,v));}}{SCM_RESULT=(r);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumlogior(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj* arg2;
  int optcnt;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("logior");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg2 = &SCM_SUBRARGS[0];
  optcnt = SCM_ARGCNT-1-0;
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2171;
#line 833 "libnum.scm"
if ((optcnt)==(0)){{SCM_RESULT=(SCM_MAKE_INT(0));goto SCM_STUB_RETURN;}}else if((optcnt)==(1)){if (!(SCM_INTEGERP((arg2)[0]))){{Scm_Error("Exact integer required, but got %S",(arg2)[0]);}}{SCM_RESULT=((arg2)[0]);goto SCM_STUB_RETURN;}} else {{ScmObj r=Scm_LogIor((arg2)[0],(arg2)[1]);SCM_FOR_EACH(cise__2171,args) {{ScmObj v=SCM_CAR(cise__2171);r=(Scm_LogIor(r,v));}}{SCM_RESULT=(r);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumlogxor(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj* arg2;
  int optcnt;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("logxor");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg2 = &SCM_SUBRARGS[0];
  optcnt = SCM_ARGCNT-1-0;
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2172;
#line 835 "libnum.scm"
if ((optcnt)==(0)){{SCM_RESULT=(SCM_MAKE_INT(0));goto SCM_STUB_RETURN;}}else if((optcnt)==(1)){if (!(SCM_INTEGERP((arg2)[0]))){{Scm_Error("Exact integer required, but got %S",(arg2)[0]);}}{SCM_RESULT=((arg2)[0]);goto SCM_STUB_RETURN;}} else {{ScmObj r=Scm_LogXor((arg2)[0],(arg2)[1]);SCM_FOR_EACH(cise__2172,args) {{ScmObj v=SCM_CAR(cise__2172);r=(Scm_LogXor(r,v));}}{SCM_RESULT=(r);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumlogcount(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n_scm;
  ScmObj n;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("logcount");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(n_scm)) Scm_Error("exact integer required, but got %S", n_scm);
  n = (n_scm);
  {
{
int SCM_RESULT;

#line 838 "libnum.scm"
if (SCM_EQ(n,SCM_MAKE_INT(0))){{SCM_RESULT=(0);goto SCM_STUB_RETURN;}}else if(
SCM_INTP(n)){
{ScmBits z=((ScmBits )(((long )(SCM_INT_VALUE(n)))));
if ((SCM_INT_VALUE(n))>(0)){
{SCM_RESULT=(Scm_BitsCount1(&(z),0,SCM_WORD_BITS));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_BitsCount0(&(z),0,SCM_WORD_BITS));goto SCM_STUB_RETURN;}}}}else if(
SCM_BIGNUMP(n)){{SCM_RESULT=(Scm_BignumLogCount(SCM_BIGNUM(n)));goto SCM_STUB_RETURN;}} else {
SCM_TYPE_ERROR(n,"exact integer");{SCM_RESULT=(0);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libnumlogset_2bclear(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n_scm;
  ScmObj n;
  ScmObj sets_scm;
  ScmObj sets;
  ScmObj clears_scm;
  ScmObj clears;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("logset+clear");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(n_scm)) Scm_Error("exact integer required, but got %S", n_scm);
  n = (n_scm);
  sets_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(sets_scm)) Scm_Error("exact integer required, but got %S", sets_scm);
  sets = (sets_scm);
  clears_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(clears_scm)) Scm_Error("exact integer required, but got %S", clears_scm);
  clears = (clears_scm);
  {
{
ScmObj SCM_RESULT;

#line 849 "libnum.scm"
{SCM_RESULT=(Scm_LogAnd(Scm_LogIor(n,sets),Scm_LogNot(clears)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnuminteger_length(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n_scm;
  ScmObj n;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("integer-length");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(n_scm)) Scm_Error("exact integer required, but got %S", n_scm);
  n = (n_scm);
  {
{
u_long SCM_RESULT;
{SCM_RESULT=(Scm_IntegerLength(n));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libnumtwos_exponent_factor(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n_scm;
  ScmObj n;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("twos-exponent-factor");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(n_scm)) Scm_Error("exact integer required, but got %S", n_scm);
  n = (n_scm);
  {
{
int SCM_RESULT;

#line 857 "libnum.scm"
if (SCM_EQ(n,SCM_MAKE_INT(0))){{SCM_RESULT=(-1);goto SCM_STUB_RETURN;}}else if(
SCM_INTP(n)){
{ScmBits z=((ScmBits )(((long )(SCM_INT_VALUE(n)))));
{SCM_RESULT=(Scm_BitsLowest1(&(z),0,SCM_WORD_BITS));goto SCM_STUB_RETURN;}}}else if(
SCM_BIGNUMP(n)){
{ScmBits* z=((ScmBits* )((SCM_BIGNUM(n))->values));int k=
SCM_BIGNUM_SIZE(n);
{SCM_RESULT=(Scm_BitsLowest1(z,0,(k)*(SCM_WORD_BITS)));goto SCM_STUB_RETURN;}}} else {
SCM_TYPE_ERROR(n,"exact integer");{SCM_RESULT=(0);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libnumtwos_exponent(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n_scm;
  ScmObj n;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("twos-exponent");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(n_scm)) Scm_Error("exact integer required, but got %S", n_scm);
  n = (n_scm);
  {
{
ScmObj SCM_RESULT;

#line 868 "libnum.scm"
{long i=Scm_TwosPower(n);
{SCM_RESULT=((((i)>=(0))?(Scm_MakeInteger(i)):(SCM_FALSE)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_OBJ_SAFE, SCM_RESULT));
}
  }
}


static ScmObj libnuminexact__2f(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("inexact-/");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg1_scm = SCM_SUBRARGS[0];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2173;
#line 881 "libnum.scm"
if (SCM_NULLP(args)){{SCM_RESULT=(Scm_ReciprocalInexact(arg1));goto SCM_STUB_RETURN;}} else {
SCM_FOR_EACH(cise__2173,args) {{ScmObj x=SCM_CAR(cise__2173);arg1=(Scm_DivCompat(arg1,x));}}
{SCM_RESULT=(arg1);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_2b_2e(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("+.");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2174;
#line 889 "libnum.scm"
{ScmObj a=scm__rc.d2149[436];
SCM_FOR_EACH(cise__2174,args) {{ScmObj x=SCM_CAR(cise__2174);a=(Scm_Add(a,Scm_Inexact(x)));}}
{SCM_RESULT=(a);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_2a_2e(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("*.");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2175;
#line 893 "libnum.scm"
{ScmObj a=scm__rc.d2149[832];
SCM_FOR_EACH(cise__2175,args) {{ScmObj x=SCM_CAR(cise__2175);a=(Scm_Mul(a,Scm_Inexact(x)));}}
{SCM_RESULT=(a);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum__2e(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("-.");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg1_scm = SCM_SUBRARGS[0];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2176;
#line 897 "libnum.scm"
if (
SCM_NULLP(args)){{SCM_RESULT=(Scm_Negate(Scm_Inexact(arg1)));goto SCM_STUB_RETURN;}} else {
SCM_FOR_EACH(cise__2176,args) {{ScmObj x=SCM_CAR(cise__2176);arg1=(Scm_Sub(arg1,Scm_Inexact(x)));}}
{SCM_RESULT=(arg1);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnum_2f_2e(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("/.");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  arg1_scm = SCM_SUBRARGS[0];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cise__2177;
#line 902 "libnum.scm"
if (
SCM_NULLP(args)){{SCM_RESULT=(Scm_Reciprocal(Scm_Inexact(arg1)));goto SCM_STUB_RETURN;}} else {
SCM_FOR_EACH(cise__2177,args) {{ScmObj x=SCM_CAR(cise__2177);arg1=(Scm_DivInexact(arg1,x));}}
{SCM_RESULT=(arg1);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumclamp(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  ScmObj x;
  ScmObj min_scm;
  ScmObj min;
  ScmObj max_scm;
  ScmObj max;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("clamp");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!(x_scm)) Scm_Error("scheme object required, but got %S", x_scm);
  x = (x_scm);
  if (SCM_ARGCNT > 1+1) {
    min_scm = SCM_SUBRARGS[1];
  } else {
    min_scm = SCM_FALSE;
  }
  if (!(min_scm)) Scm_Error("scheme object required, but got %S", min_scm);
  min = (min_scm);
  if (SCM_ARGCNT > 2+1) {
    max_scm = SCM_SUBRARGS[2];
  } else {
    max_scm = SCM_FALSE;
  }
  if (!(max_scm)) Scm_Error("scheme object required, but got %S", max_scm);
  max = (max_scm);
  {
{
ScmObj SCM_RESULT;

#line 908 "libnum.scm"
{ScmObj r=x;int maybe_exact=SCM_EXACTP(x);
if (!(SCM_REALP(x))){{SCM_TYPE_ERROR(x,"real number");}}
if (SCM_EXACTP(min)){if ((Scm_NumCmp(x,min))<(0)){{r=(min);}}}else if(
SCM_FLONUMP(min)){
maybe_exact=(FALSE);
if ((Scm_NumCmp(x,min))<(0)){{r=(min);}}}else if(
!(SCM_FALSEP(min))){SCM_TYPE_ERROR(min,"real number or #f");}
if (SCM_EXACTP(max)){if ((Scm_NumCmp(x,max))>(0)){{r=(max);}}}else if(
SCM_FLONUMP(max)){
maybe_exact=(FALSE);
if ((Scm_NumCmp(x,max))>(0)){{r=(max);}}}else if(
!(SCM_FALSEP(max))){SCM_TYPE_ERROR(max,"real number or #f");}
if ((!(maybe_exact))&&(SCM_EXACTP(r))){
{SCM_RESULT=(Scm_Inexact(r));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(r);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumquotient_26remainder(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj n1_scm;
  ScmObj n1;
  ScmObj n2_scm;
  ScmObj n2;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("quotient&remainder");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  n1_scm = SCM_SUBRARGS[0];
  if (!(n1_scm)) Scm_Error("scheme object required, but got %S", n1_scm);
  n1 = (n1_scm);
  n2_scm = SCM_SUBRARGS[1];
  if (!(n2_scm)) Scm_Error("scheme object required, but got %S", n2_scm);
  n2 = (n2_scm);
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 925 "libnum.scm"
SCM_RESULT0=(Scm_Quotient(n1,n2,&(SCM_RESULT1)));
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libnummake_rectangular(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj a_scm;
  double a;
  ScmObj b_scm;
  double b;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-rectangular");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  a_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(a_scm)) Scm_Error("double required, but got %S", a_scm);
  a = Scm_GetDouble(a_scm);
  b_scm = SCM_SUBRARGS[1];
  if (!SCM_REALP(b_scm)) Scm_Error("double required, but got %S", b_scm);
  b = Scm_GetDouble(b_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeComplex(a,b));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnummake_polar(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj r_scm;
  double r;
  ScmObj t_scm;
  double t;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("make-polar");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  r_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(r_scm)) Scm_Error("double required, but got %S", r_scm);
  r = Scm_GetDouble(r_scm);
  t_scm = SCM_SUBRARGS[1];
  if (!SCM_REALP(t_scm)) Scm_Error("double required, but got %S", t_scm);
  t = Scm_GetDouble(t_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeComplexPolar(r,t));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumreal_part(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj z_scm;
  ScmObj z;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("real-part");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  z_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(z_scm)) Scm_Error("number required, but got %S", z_scm);
  z = (z_scm);
  {
{
ScmObj SCM_RESULT;

#line 940 "libnum.scm"
if (SCM_REALP(z)){
{SCM_RESULT=(z);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_VMReturnFlonum(SCM_COMPNUM_REAL(z)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumimag_part(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj z_scm;
  ScmObj z;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("imag-part");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  z_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(z_scm)) Scm_Error("number required, but got %S", z_scm);
  z = (z_scm);
  {
{
ScmObj SCM_RESULT;

#line 945 "libnum.scm"
if (SCM_EXACTP(z)){{SCM_RESULT=(SCM_MAKE_INT(0));goto SCM_STUB_RETURN;}}else if(
SCM_REALP(z)){{SCM_RESULT=(Scm_VMReturnFlonum(0.0));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_VMReturnFlonum(SCM_COMPNUM_IMAG(z)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnummagnitude(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj z_scm;
  ScmObj z;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("magnitude");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  z_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(z_scm)) Scm_Error("number required, but got %S", z_scm);
  z = (z_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMAbs(z));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnumangle(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj z_scm;
  ScmObj z;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("angle");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  z_scm = SCM_SUBRARGS[0];
  if (!SCM_NUMBERP(z_scm)) Scm_Error("number required, but got %S", z_scm);
  z = (z_scm);
  {
{
double SCM_RESULT;
{SCM_RESULT=(Scm_Angle(z));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}

 int Scm_ClampMode(ScmObj clamp){{
#line 957 "libnum.scm"
if (SCM_EQ(clamp,scm__rc.d2149[893])){return (SCM_CLAMP_BOTH);}else if(
SCM_EQ(clamp,scm__rc.d2149[892])){return (SCM_CLAMP_LO);}else if(
SCM_EQ(clamp,scm__rc.d2149[891])){return (SCM_CLAMP_HI);}else if(
SCM_EQ(clamp,scm__rc.d2149[890])){return (SCM_CLAMP_WRAPAROUND);}else if(
!((SCM_FALSEP(clamp))||(SCM_UNBOUNDP(clamp)))){
Scm_Error("clamp argument must be either 'both, 'high, 'low, 'wraparound or #f, but got %S",clamp);}
#line 964 "libnum.scm"
return (SCM_CLAMP_ERROR);}}
static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[17])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[23])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[27])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[29])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[31])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[33])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[35])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[37])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[39])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[41])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[43])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[45])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[47])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[49])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[51])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[53])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[118];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[110];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[124];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[112];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1056];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[216];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[212];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[220];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[203];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[351];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = SCM_OBJ(&scm__sc.d2148[104]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[353];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[352];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[349];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[346];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[344];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[360];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[358];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[367];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[147];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[365];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[372];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[396];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = SCM_OBJ(&scm__sc.d2148[118]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[22];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1057];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[129];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[402];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[143];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[400];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[395];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1058];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[4];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[394];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1059];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[374];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1060];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1061];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[446];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[28];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[408];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[407];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[439];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[47];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[440];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[26];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[72];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1062];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[436];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[74];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = SCM_OBJ(&scm__sc.d2148[131]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[157];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[430];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = SCM_OBJ(&scm__sc.d2148[165]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[179];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[572];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[461];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[568];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[570];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[16];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[18];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[302];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[342];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[577];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[587];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[581];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[463];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[583];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[585];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[340];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[495];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[159];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[517];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[603];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1063];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1064];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[139];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1065];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1066];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[597];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[281];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1067];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[426];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1068];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1069];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[526];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1070];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[425];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[428];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1071];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[732];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[163];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[24];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[592];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1072];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[618];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1073];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1074];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[617];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[614];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[251];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[63];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1075];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[178];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[0];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[535];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1076];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[629];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[38];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[625];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[623];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1077];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1078];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1079];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1080];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1081];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = SCM_MAKE_INT(-1);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[556];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[852];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[853];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1082];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1083];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[161];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[265];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1084];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[545];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[474];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[507];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[472];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[505];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[647];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[656];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[661];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[666];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[673];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1085];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[476];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[671];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[509];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[679];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[1086];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[837];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[688];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[484];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[685];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[511];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[694];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[703];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[493];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[701];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[513];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[709];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = SCM_OBJ(&scm__sc.d2148[190]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[76];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[720];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[717];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[715];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[515];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[894]), i++) = scm__rc.d2149[725];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[894]);
}
void Scm_Init_libnum() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* number? */
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
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("number?")), SCM_OBJ(&libnumnumberP__STUB), SCM_BINDING_INLINABLE);
  libnumnumberP__STUB.common.info = scm__rc.d2149[5];
  libnumnumberP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* complex? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[12]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[13]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[15]), scm__rc.d2149[3]);
  scm__rc.d2149[17] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[17]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("complex?")), SCM_OBJ(&libnumcomplexP__STUB), SCM_BINDING_INLINABLE);
  libnumcomplexP__STUB.common.info = scm__rc.d2149[17];
  libnumcomplexP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* real? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[20]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[21]), scm__rc.d2149[18]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[22]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[23]), scm__rc.d2149[3]);
  scm__rc.d2149[19] = Scm_MakeExtendedPair(scm__rc.d2149[18], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[25]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("real?")), SCM_OBJ(&libnumrealP__STUB), SCM_BINDING_INLINABLE);
  libnumrealP__STUB.common.info = scm__rc.d2149[19];
  libnumrealP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* rational? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[28]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[29]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[30]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[31]), scm__rc.d2149[3]);
  scm__rc.d2149[21] = Scm_MakeExtendedPair(scm__rc.d2149[20], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[33]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("rational?")), SCM_OBJ(&libnumrationalP__STUB), SCM_BINDING_INLINABLE);
  libnumrationalP__STUB.common.info = scm__rc.d2149[21];
  libnumrationalP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* integer? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[36]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[37]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[38]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[39]), scm__rc.d2149[3]);
  scm__rc.d2149[23] = Scm_MakeExtendedPair(scm__rc.d2149[22], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[41]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("integer?")), SCM_OBJ(&libnumintegerP__STUB), SCM_BINDING_INLINABLE);
  libnumintegerP__STUB.common.info = scm__rc.d2149[23];
  libnumintegerP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* exact? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[44]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2149[24]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[47]), scm__rc.d2149[3]);
  scm__rc.d2149[25] = Scm_MakeExtendedPair(scm__rc.d2149[24], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[49]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("exact?")), SCM_OBJ(&libnumexactP__STUB), SCM_BINDING_INLINABLE);
  libnumexactP__STUB.common.info = scm__rc.d2149[25];
  libnumexactP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* inexact? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[52]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[53]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[55]), scm__rc.d2149[3]);
  scm__rc.d2149[27] = Scm_MakeExtendedPair(scm__rc.d2149[26], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[57]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("inexact?")), SCM_OBJ(&libnuminexactP__STUB), SCM_BINDING_INLINABLE);
  libnuminexactP__STUB.common.info = scm__rc.d2149[27];
  libnuminexactP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* zero? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[61]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[62]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[63]), scm__rc.d2149[3]);
  scm__rc.d2149[29] = Scm_MakeExtendedPair(scm__rc.d2149[28], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[65]));
  scm__rc.d2149[30] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* <number> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[31]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[31]))[4] = scm__rc.d2149[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[31]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[31]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("zero?")), SCM_OBJ(&libnumzeroP__STUB), SCM_BINDING_INLINABLE);
  libnumzeroP__STUB.common.info = scm__rc.d2149[29];
  libnumzeroP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[31]);
  scm__rc.d2149[38] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* positive? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[68]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[70]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[71]), scm__rc.d2149[3]);
  scm__rc.d2149[39] = Scm_MakeExtendedPair(scm__rc.d2149[38], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[73]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("positive?")), SCM_OBJ(&libnumpositiveP__STUB), SCM_BINDING_INLINABLE);
  libnumpositiveP__STUB.common.info = scm__rc.d2149[39];
  libnumpositiveP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[40] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* negative? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[76]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[40]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[79]), scm__rc.d2149[3]);
  scm__rc.d2149[41] = Scm_MakeExtendedPair(scm__rc.d2149[40], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[81]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("negative?")), SCM_OBJ(&libnumnegativeP__STUB), SCM_BINDING_INLINABLE);
  libnumnegativeP__STUB.common.info = scm__rc.d2149[41];
  libnumnegativeP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* odd? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[84]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[85]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[86]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[87]), scm__rc.d2149[3]);
  scm__rc.d2149[43] = Scm_MakeExtendedPair(scm__rc.d2149[42], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[89]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("odd?")), SCM_OBJ(&libnumoddP__STUB), SCM_BINDING_INLINABLE);
  libnumoddP__STUB.common.info = scm__rc.d2149[43];
  libnumoddP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[44] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* even? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[92]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[93]), scm__rc.d2149[44]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[94]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[95]), scm__rc.d2149[3]);
  scm__rc.d2149[45] = Scm_MakeExtendedPair(scm__rc.d2149[44], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[97]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("even?")), SCM_OBJ(&libnumevenP__STUB), SCM_BINDING_INLINABLE);
  libnumevenP__STUB.common.info = scm__rc.d2149[45];
  libnumevenP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[46] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* fixnum? */
  scm__rc.d2149[47] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* x */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[101]), scm__rc.d2149[2]);
  scm__rc.d2149[48] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[102]), scm__rc.d2149[46]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[104]), scm__rc.d2149[3]);
  scm__rc.d2149[49] = Scm_MakeExtendedPair(scm__rc.d2149[46], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[106]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[50]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[50]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[50]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[50]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("fixnum?")), SCM_OBJ(&libnumfixnumP__STUB), 0);
  libnumfixnumP__STUB.common.info = scm__rc.d2149[49];
  libnumfixnumP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
  scm__rc.d2149[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* bignum? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[109]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[111]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[112]), scm__rc.d2149[3]);
  scm__rc.d2149[58] = Scm_MakeExtendedPair(scm__rc.d2149[57], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[114]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("bignum?")), SCM_OBJ(&libnumbignumP__STUB), 0);
  libnumbignumP__STUB.common.info = scm__rc.d2149[58];
  libnumbignumP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* flonum? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[117]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[118]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[119]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[120]), scm__rc.d2149[3]);
  scm__rc.d2149[60] = Scm_MakeExtendedPair(scm__rc.d2149[59], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[122]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("flonum?")), SCM_OBJ(&libnumflonumP__STUB), SCM_BINDING_INLINABLE);
  libnumflonumP__STUB.common.info = scm__rc.d2149[60];
  libnumflonumP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
  scm__rc.d2149[61] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* ratnum? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[125]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[126]), scm__rc.d2149[61]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[127]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[128]), scm__rc.d2149[3]);
  scm__rc.d2149[62] = Scm_MakeExtendedPair(scm__rc.d2149[61], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[130]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("ratnum?")), SCM_OBJ(&libnumratnumP__STUB), SCM_BINDING_INLINABLE);
  libnumratnumP__STUB.common.info = scm__rc.d2149[62];
  libnumratnumP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
  scm__rc.d2149[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* finite? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[133]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[134]), scm__rc.d2149[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[135]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[136]), scm__rc.d2149[3]);
  scm__rc.d2149[64] = Scm_MakeExtendedPair(scm__rc.d2149[63], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[138]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[65]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[65]))[4] = scm__rc.d2149[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[65]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[65]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("finite?")), SCM_OBJ(&libnumfiniteP__STUB), 0);
  libnumfiniteP__STUB.common.info = scm__rc.d2149[64];
  libnumfiniteP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[65]);
  scm__rc.d2149[72] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* infinite? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[142]), scm__rc.d2149[72]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[143]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[144]), scm__rc.d2149[3]);
  scm__rc.d2149[73] = Scm_MakeExtendedPair(scm__rc.d2149[72], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[146]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("infinite?")), SCM_OBJ(&libnuminfiniteP__STUB), 0);
  libnuminfiniteP__STUB.common.info = scm__rc.d2149[73];
  libnuminfiniteP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[65]);
  scm__rc.d2149[74] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* nan? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[149]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[150]), scm__rc.d2149[74]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[151]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[152]), scm__rc.d2149[3]);
  scm__rc.d2149[75] = Scm_MakeExtendedPair(scm__rc.d2149[74], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[154]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("nan?")), SCM_OBJ(&libnumnanP__STUB), 0);
  libnumnanP__STUB.common.info = scm__rc.d2149[75];
  libnumnanP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[65]);
  scm__rc.d2149[76] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* negative-zero? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[157]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[158]), scm__rc.d2149[76]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[159]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[160]), scm__rc.d2149[3]);
  scm__rc.d2149[77] = Scm_MakeExtendedPair(scm__rc.d2149[76], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[162]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("negative-zero?")), SCM_OBJ(&libnumnegative_zeroP__STUB), SCM_BINDING_INLINABLE);
  libnumnegative_zeroP__STUB.common.info = scm__rc.d2149[77];
  libnumnegative_zeroP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[65]);
  scm__rc.d2149[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* exact-integer? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[165]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[166]), scm__rc.d2149[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[167]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[3]);
  scm__rc.d2149[79] = Scm_MakeExtendedPair(scm__rc.d2149[78], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[170]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("exact-integer?")), SCM_OBJ(&libnumexact_integerP__STUB), SCM_BINDING_INLINABLE);
  libnumexact_integerP__STUB.common.info = scm__rc.d2149[79];
  libnumexact_integerP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* fixnum-width */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[171]), scm__rc.d2149[80]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[172]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[173]), scm__rc.d2149[3]);
  scm__rc.d2149[81] = Scm_MakeExtendedPair(scm__rc.d2149[80], SCM_NIL, SCM_OBJ(&scm__rc.d2150[174]));
  scm__rc.d2149[82] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[5] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("fixnum-width")), SCM_OBJ(&libnumfixnum_width__STUB), 0);
  libnumfixnum_width__STUB.common.info = scm__rc.d2149[81];
  libnumfixnum_width__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[83]);
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* least-fixnum */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[175]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[176]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[177]), scm__rc.d2149[3]);
  scm__rc.d2149[90] = Scm_MakeExtendedPair(scm__rc.d2149[89], SCM_NIL, SCM_OBJ(&scm__rc.d2150[178]));
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* <long> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[92]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[92]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[92]))[5] = scm__rc.d2149[91];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("least-fixnum")), SCM_OBJ(&libnumleast_fixnum__STUB), 0);
  libnumleast_fixnum__STUB.common.info = scm__rc.d2149[90];
  libnumleast_fixnum__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[92]);
  scm__rc.d2149[98] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* greatest-fixnum */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[179]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[180]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[181]), scm__rc.d2149[3]);
  scm__rc.d2149[99] = Scm_MakeExtendedPair(scm__rc.d2149[98], SCM_NIL, SCM_OBJ(&scm__rc.d2150[182]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("greatest-fixnum")), SCM_OBJ(&libnumgreatest_fixnum__STUB), 0);
  libnumgreatest_fixnum__STUB.common.info = scm__rc.d2149[99];
  libnumgreatest_fixnum__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[92]);

#line 110 "libnum.scm"
Scm_DefaultEndian();
  scm__rc.d2149[100] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* native-endian */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[183]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[184]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[185]), scm__rc.d2149[3]);
  scm__rc.d2149[101] = Scm_MakeExtendedPair(scm__rc.d2149[100], SCM_NIL, SCM_OBJ(&scm__rc.d2150[186]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[102]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[102]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[102]))[5] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("native-endian")), SCM_OBJ(&libnumnative_endian__STUB), 0);
  libnumnative_endian__STUB.common.info = scm__rc.d2149[101];
  libnumnative_endian__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[102]);
  scm__rc.d2149[108] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* flonum-epsilon */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[187]), scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[188]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[189]), scm__rc.d2149[3]);
  scm__rc.d2149[109] = Scm_MakeExtendedPair(scm__rc.d2149[108], SCM_NIL, SCM_OBJ(&scm__rc.d2150[190]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("flonum-epsilon")), SCM_OBJ(&libnumflonum_epsilon__STUB), 0);
  libnumflonum_epsilon__STUB.common.info = scm__rc.d2149[109];
  libnumflonum_epsilon__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[102]);
  scm__rc.d2149[110] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* least-positive-normalized-flonum */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[191]), scm__rc.d2149[110]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[192]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[193]), scm__rc.d2149[3]);
  scm__rc.d2149[111] = Scm_MakeExtendedPair(scm__rc.d2149[110], SCM_NIL, SCM_OBJ(&scm__rc.d2150[194]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("least-positive-normalized-flonum")), SCM_OBJ(&libnumleast_positive_normalized_flonum__STUB), 0);
  libnumleast_positive_normalized_flonum__STUB.common.info = scm__rc.d2149[111];
  libnumleast_positive_normalized_flonum__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[102]);
  scm__rc.d2149[112] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* least-positive-flonum */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[195]), scm__rc.d2149[112]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[196]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[197]), scm__rc.d2149[3]);
  scm__rc.d2149[113] = Scm_MakeExtendedPair(scm__rc.d2149[112], SCM_NIL, SCM_OBJ(&scm__rc.d2150[198]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("least-positive-flonum")), SCM_OBJ(&libnumleast_positive_flonum__STUB), 0);
  libnumleast_positive_flonum__STUB.common.info = scm__rc.d2149[113];
  libnumleast_positive_flonum__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[102]);
  scm__rc.d2149[114] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* greatest-positive-flonum */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[199]), scm__rc.d2149[114]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[200]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[201]), scm__rc.d2149[3]);
  scm__rc.d2149[115] = Scm_MakeExtendedPair(scm__rc.d2149[114], SCM_NIL, SCM_OBJ(&scm__rc.d2150[202]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("greatest-positive-flonum")), SCM_OBJ(&libnumgreatest_positive_flonum__STUB), 0);
  libnumgreatest_positive_flonum__STUB.common.info = scm__rc.d2149[115];
  libnumgreatest_positive_flonum__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[102]);
  scm__rc.d2149[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[116] = Scm_MakeIdentifier(scm__rc.d2149[117], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[118] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* flonum-min-normalized */
  scm__rc.d2149[120] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[48]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[119] = Scm_MakeIdentifier(scm__rc.d2149[110], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#least-positive-normalized-flonum */
  scm__rc.d2149[121] = Scm_MakeIdentifier(scm__rc.d2149[118], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#flonum-min-normalized */
  scm__rc.d2149[122] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* %toplevel */
  scm__rc.d2149[123] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->debugInfo = scm__rc.d2149[123];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[6] = SCM_WORD(scm__rc.d2149[118]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[10] = SCM_WORD(scm__rc.d2149[119]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]))[13] = SCM_WORD(scm__rc.d2149[121]);
  scm__rc.d2149[124] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* flonum-min-denormalized */
  scm__rc.d2149[125] = Scm_MakeIdentifier(scm__rc.d2149[112], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#least-positive-flonum */
  scm__rc.d2149[126] = Scm_MakeIdentifier(scm__rc.d2149[124], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#flonum-min-denormalized */
  scm__rc.d2149[127] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->debugInfo = scm__rc.d2149[127];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[15]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[15]))[6] = SCM_WORD(scm__rc.d2149[124]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[15]))[10] = SCM_WORD(scm__rc.d2149[125]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[15]))[13] = SCM_WORD(scm__rc.d2149[126]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[128] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* %bignum-dump */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[205]), scm__rc.d2149[2]);
  scm__rc.d2149[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[206]), scm__rc.d2149[128]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[207]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[208]), scm__rc.d2149[3]);
  scm__rc.d2149[130] = Scm_MakeExtendedPair(scm__rc.d2149[128], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[210]));
  scm__rc.d2149[131] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[132]))[3] = scm__rc.d2149[129];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[132]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[132]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[132]))[6] = scm__rc.d2149[131];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%bignum-dump")), SCM_OBJ(&libnum_25bignum_dump__STUB), 0);
  libnum_25bignum_dump__STUB.common.info = scm__rc.d2149[130];
  libnum_25bignum_dump__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[132]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* = */
  scm__rc.d2149[140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* arg0 */
  scm__rc.d2149[141] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* arg1 */
  scm__rc.d2149[142] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52]))); /* :rest */
  scm__rc.d2149[143] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* args */
  scm__rc.d2149[144] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54]))); /* :optarray */
  scm__rc.d2149[145] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* oarg */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[211]), scm__rc.d2149[145]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[212]), scm__rc.d2149[144]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[213]), scm__rc.d2149[143]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[214]), scm__rc.d2149[142]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[215]), scm__rc.d2149[141]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[216]), scm__rc.d2149[140]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[219]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[220]), scm__rc.d2149[139]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[221]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[222]), scm__rc.d2149[3]);
  scm__rc.d2149[146] = Scm_MakeExtendedPair(scm__rc.d2149[139], SCM_OBJ(&scm__rc.d2150[216]), SCM_OBJ(&scm__rc.d2150[224]));
  scm__rc.d2149[147] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[148]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[148]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[148]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[148]))[6] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[148]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[148]))[8] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("=")), SCM_OBJ(&libnum_3d__STUB), SCM_BINDING_INLINABLE);
  libnum_3d__STUB.common.info = scm__rc.d2149[146];
  libnum_3d__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[148]);
  scm__rc.d2149[157] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* < */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[227]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[228]), scm__rc.d2149[157]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[229]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[230]), scm__rc.d2149[3]);
  scm__rc.d2149[158] = Scm_MakeExtendedPair(scm__rc.d2149[157], SCM_OBJ(&scm__rc.d2150[216]), SCM_OBJ(&scm__rc.d2150[232]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("<")), SCM_OBJ(&libnum_LT__STUB), SCM_BINDING_INLINABLE);
  libnum_LT__STUB.common.info = scm__rc.d2149[158];
  libnum_LT__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[148]);
  scm__rc.d2149[159] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58])),TRUE); /* <= */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[236]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[237]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[238]), scm__rc.d2149[3]);
  scm__rc.d2149[160] = Scm_MakeExtendedPair(scm__rc.d2149[159], SCM_OBJ(&scm__rc.d2150[216]), SCM_OBJ(&scm__rc.d2150[240]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("<=")), SCM_OBJ(&libnum_LT_3d__STUB), SCM_BINDING_INLINABLE);
  libnum_LT_3d__STUB.common.info = scm__rc.d2149[160];
  libnum_LT_3d__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[148]);
  scm__rc.d2149[161] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* > */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[243]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[244]), scm__rc.d2149[161]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[245]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[246]), scm__rc.d2149[3]);
  scm__rc.d2149[162] = Scm_MakeExtendedPair(scm__rc.d2149[161], SCM_OBJ(&scm__rc.d2150[216]), SCM_OBJ(&scm__rc.d2150[248]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN(">")), SCM_OBJ(&libnum_GT__STUB), SCM_BINDING_INLINABLE);
  libnum_GT__STUB.common.info = scm__rc.d2149[162];
  libnum_GT__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[148]);
  scm__rc.d2149[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* >= */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[251]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[252]), scm__rc.d2149[163]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[253]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[254]), scm__rc.d2149[3]);
  scm__rc.d2149[164] = Scm_MakeExtendedPair(scm__rc.d2149[163], SCM_OBJ(&scm__rc.d2150[216]), SCM_OBJ(&scm__rc.d2150[256]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN(">=")), SCM_OBJ(&libnum_GT_3d__STUB), SCM_BINDING_INLINABLE);
  libnum_GT_3d__STUB.common.info = scm__rc.d2149[164];
  libnum_GT_3d__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[148]);
  scm__rc.d2149[165] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61])),TRUE); /* max */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[257]), scm__rc.d2149[143]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[258]), scm__rc.d2149[142]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[259]), scm__rc.d2149[140]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[262]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[263]), scm__rc.d2149[165]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[264]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[265]), scm__rc.d2149[3]);
  scm__rc.d2149[166] = Scm_MakeExtendedPair(scm__rc.d2149[165], SCM_OBJ(&scm__rc.d2150[259]), SCM_OBJ(&scm__rc.d2150[267]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[5] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[167]))[7] = scm__rc.d2149[30];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("max")), SCM_OBJ(&libnummax__STUB), SCM_BINDING_INLINABLE);
  libnummax__STUB.common.info = scm__rc.d2149[166];
  libnummax__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[167]);
  scm__rc.d2149[175] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* min */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[270]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[271]), scm__rc.d2149[175]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[272]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[273]), scm__rc.d2149[3]);
  scm__rc.d2149[176] = Scm_MakeExtendedPair(scm__rc.d2149[175], SCM_OBJ(&scm__rc.d2150[259]), SCM_OBJ(&scm__rc.d2150[275]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("min")), SCM_OBJ(&libnummin__STUB), SCM_BINDING_INLINABLE);
  libnummin__STUB.common.info = scm__rc.d2149[176];
  libnummin__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[167]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[177] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* <=:< */
  scm__rc.d2149[178] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* y */
  scm__rc.d2149[179] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* z */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[276]), scm__rc.d2149[179]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[277]), scm__rc.d2149[178]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[278]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[281]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[282]), scm__rc.d2149[177]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[283]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[284]), scm__rc.d2149[3]);
  scm__rc.d2149[180] = Scm_MakeExtendedPair(scm__rc.d2149[177], SCM_OBJ(&scm__rc.d2150[278]), SCM_OBJ(&scm__rc.d2150[286]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[181]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[181]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[181]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[181]))[6] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[181]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[181]))[8] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("<=:<")), SCM_OBJ(&libnum_LT_3d_3a_LT__STUB), SCM_BINDING_INLINABLE);
  libnum_LT_3d_3a_LT__STUB.common.info = scm__rc.d2149[180];
  libnum_LT_3d_3a_LT__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[181]);
  scm__rc.d2149[190] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* <:<= */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[289]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[290]), scm__rc.d2149[190]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[291]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[292]), scm__rc.d2149[3]);
  scm__rc.d2149[191] = Scm_MakeExtendedPair(scm__rc.d2149[190], SCM_OBJ(&scm__rc.d2150[278]), SCM_OBJ(&scm__rc.d2150[294]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("<:<=")), SCM_OBJ(&libnum_LT_3a_LT_3d__STUB), SCM_BINDING_INLINABLE);
  libnum_LT_3a_LT_3d__STUB.common.info = scm__rc.d2149[191];
  libnum_LT_3a_LT_3d__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[181]);
  scm__rc.d2149[192] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* min&max */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[297]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[298]), scm__rc.d2149[192]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[299]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[300]), scm__rc.d2149[3]);
  scm__rc.d2149[193] = Scm_MakeExtendedPair(scm__rc.d2149[192], SCM_OBJ(&scm__rc.d2150[259]), SCM_OBJ(&scm__rc.d2150[302]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[194]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[194]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[194]))[5] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[194]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[194]))[7] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[194]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("min&max")), SCM_OBJ(&libnummin_26max__STUB), 0);
  libnummin_26max__STUB.common.info = scm__rc.d2149[193];
  libnummin_26max__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[194]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[203] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* exact->inexact */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[305]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[306]), scm__rc.d2149[203]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[307]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[308]), scm__rc.d2149[3]);
  scm__rc.d2149[204] = Scm_MakeExtendedPair(scm__rc.d2149[203], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[310]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[205]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[205]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[205]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[205]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("exact->inexact")), SCM_OBJ(&libnumexact_TOinexact__STUB), SCM_BINDING_INLINABLE);
  libnumexact_TOinexact__STUB.common.info = scm__rc.d2149[204];
  libnumexact_TOinexact__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[205]);
  scm__rc.d2149[212] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* inexact->exact */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[313]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[314]), scm__rc.d2149[212]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[315]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[316]), scm__rc.d2149[3]);
  scm__rc.d2149[213] = Scm_MakeExtendedPair(scm__rc.d2149[212], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[318]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("inexact->exact")), SCM_OBJ(&libnuminexact_TOexact__STUB), SCM_BINDING_INLINABLE);
  libnuminexact_TOexact__STUB.common.info = scm__rc.d2149[213];
  libnuminexact_TOexact__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[205]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[214] = Scm_MakeIdentifier(scm__rc.d2149[212], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#inexact->exact */
  scm__rc.d2149[216] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* exact */
  scm__rc.d2149[215] = Scm_MakeIdentifier(scm__rc.d2149[216], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#exact */
  scm__rc.d2149[217] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->debugInfo = scm__rc.d2149[217];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[30]))[1] = SCM_WORD(scm__rc.d2149[214]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[30]))[3] = SCM_WORD(scm__rc.d2149[215]);
  scm__rc.d2149[218] = Scm_MakeIdentifier(scm__rc.d2149[203], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#exact->inexact */
  scm__rc.d2149[220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* inexact */
  scm__rc.d2149[219] = Scm_MakeIdentifier(scm__rc.d2149[220], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#inexact */
  scm__rc.d2149[221] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3]))->debugInfo = scm__rc.d2149[221];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[35]))[1] = SCM_WORD(scm__rc.d2149[218]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[35]))[3] = SCM_WORD(scm__rc.d2149[219]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[222] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* uppercase */
  scm__rc.d2149[223] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* plus */
  scm__rc.d2149[224] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* radix */
  scm__rc.d2149[225] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* notational */
  scm__rc.d2149[226] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* number->string */
  scm__rc.d2149[227] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77]))); /* :optional */
  scm__rc.d2149[228] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* flags */
  scm__rc.d2149[229] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* precision */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[319]), scm__rc.d2149[229]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[320]), scm__rc.d2149[228]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[321]), scm__rc.d2149[224]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[322]), scm__rc.d2149[227]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[323]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[326]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[327]), scm__rc.d2149[226]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[328]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[329]), scm__rc.d2149[3]);
  scm__rc.d2149[230] = Scm_MakeExtendedPair(scm__rc.d2149[226], SCM_OBJ(&scm__rc.d2150[323]), SCM_OBJ(&scm__rc.d2150[331]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[231]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[231]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[231]))[5] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[231]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[231]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("number->string")), SCM_OBJ(&libnumnumber_TOstring__STUB), SCM_BINDING_INLINABLE);
  libnumnumber_TOstring__STUB.common.info = scm__rc.d2149[230];
  libnumnumber_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[231]);
  scm__rc.d2149[239] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* string->number */
  scm__rc.d2149[240] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* default-exactness */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[332]), scm__rc.d2149[240]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[333]), scm__rc.d2149[224]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[334]), scm__rc.d2149[227]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[335]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[338]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[339]), scm__rc.d2149[239]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[340]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[341]), scm__rc.d2149[3]);
  scm__rc.d2149[241] = Scm_MakeExtendedPair(scm__rc.d2149[239], SCM_OBJ(&scm__rc.d2150[335]), SCM_OBJ(&scm__rc.d2150[343]));
  scm__rc.d2149[242] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* <string> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[4] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[5] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("string->number")), SCM_OBJ(&libnumstring_TOnumber__STUB), 0);
  libnumstring_TOnumber__STUB.common.info = scm__rc.d2149[241];
  libnumstring_TOnumber__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[251] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* floor->exact */
  scm__rc.d2149[252] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* num */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[344]), scm__rc.d2149[252]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[347]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[348]), scm__rc.d2149[251]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[349]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[350]), scm__rc.d2149[3]);
  scm__rc.d2149[253] = Scm_MakeExtendedPair(scm__rc.d2149[251], SCM_OBJ(&scm__rc.d2150[344]), SCM_OBJ(&scm__rc.d2150[352]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[254]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[254]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[254]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[254]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("floor->exact")), SCM_OBJ(&libnumfloor_TOexact__STUB), SCM_BINDING_INLINABLE);
  libnumfloor_TOexact__STUB.common.info = scm__rc.d2149[253];
  libnumfloor_TOexact__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[254]);
  scm__rc.d2149[261] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),TRUE); /* ceiling->exact */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[355]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[356]), scm__rc.d2149[261]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[357]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[358]), scm__rc.d2149[3]);
  scm__rc.d2149[262] = Scm_MakeExtendedPair(scm__rc.d2149[261], SCM_OBJ(&scm__rc.d2150[344]), SCM_OBJ(&scm__rc.d2150[360]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("ceiling->exact")), SCM_OBJ(&libnumceiling_TOexact__STUB), SCM_BINDING_INLINABLE);
  libnumceiling_TOexact__STUB.common.info = scm__rc.d2149[262];
  libnumceiling_TOexact__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[254]);
  scm__rc.d2149[263] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* truncate->exact */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[363]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[364]), scm__rc.d2149[263]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[365]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[366]), scm__rc.d2149[3]);
  scm__rc.d2149[264] = Scm_MakeExtendedPair(scm__rc.d2149[263], SCM_OBJ(&scm__rc.d2150[344]), SCM_OBJ(&scm__rc.d2150[368]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("truncate->exact")), SCM_OBJ(&libnumtruncate_TOexact__STUB), SCM_BINDING_INLINABLE);
  libnumtruncate_TOexact__STUB.common.info = scm__rc.d2149[264];
  libnumtruncate_TOexact__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[254]);
  scm__rc.d2149[265] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),TRUE); /* round->exact */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[371]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[372]), scm__rc.d2149[265]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[373]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[374]), scm__rc.d2149[3]);
  scm__rc.d2149[266] = Scm_MakeExtendedPair(scm__rc.d2149[265], SCM_OBJ(&scm__rc.d2150[344]), SCM_OBJ(&scm__rc.d2150[376]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("round->exact")), SCM_OBJ(&libnumround_TOexact__STUB), SCM_BINDING_INLINABLE);
  libnumround_TOexact__STUB.common.info = scm__rc.d2149[266];
  libnumround_TOexact__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[254]);
  scm__rc.d2149[267] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),TRUE); /* decode-float */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[379]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[380]), scm__rc.d2149[267]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[381]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[382]), scm__rc.d2149[3]);
  scm__rc.d2149[268] = Scm_MakeExtendedPair(scm__rc.d2149[267], SCM_OBJ(&scm__rc.d2150[344]), SCM_OBJ(&scm__rc.d2150[384]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("decode-float")), SCM_OBJ(&libnumdecode_float__STUB), 0);
  libnumdecode_float__STUB.common.info = scm__rc.d2149[268];
  libnumdecode_float__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[254]);
  scm__rc.d2149[269] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* fmod */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[385]), scm__rc.d2149[178]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[386]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[389]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[390]), scm__rc.d2149[269]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[391]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[392]), scm__rc.d2149[3]);
  scm__rc.d2149[270] = Scm_MakeExtendedPair(scm__rc.d2149[269], SCM_OBJ(&scm__rc.d2150[386]), SCM_OBJ(&scm__rc.d2150[394]));
  scm__rc.d2149[271] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* <double> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[272]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[272]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[272]))[5] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[272]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[272]))[7] = scm__rc.d2149[271];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("fmod")), SCM_OBJ(&libnumfmod__STUB), SCM_BINDING_INLINABLE);
  libnumfmod__STUB.common.info = scm__rc.d2149[270];
  libnumfmod__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[272]);
  scm__rc.d2149[280] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),TRUE); /* frexp */
  scm__rc.d2149[281] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* d */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[395]), scm__rc.d2149[281]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[398]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[399]), scm__rc.d2149[280]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[400]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[401]), scm__rc.d2149[3]);
  scm__rc.d2149[282] = Scm_MakeExtendedPair(scm__rc.d2149[280], SCM_OBJ(&scm__rc.d2150[395]), SCM_OBJ(&scm__rc.d2150[403]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[6] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[7] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("frexp")), SCM_OBJ(&libnumfrexp__STUB), SCM_BINDING_INLINABLE);
  libnumfrexp__STUB.common.info = scm__rc.d2149[282];
  libnumfrexp__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[283]);
  scm__rc.d2149[291] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* modf */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[406]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[407]), scm__rc.d2149[291]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[408]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[409]), scm__rc.d2149[3]);
  scm__rc.d2149[292] = Scm_MakeExtendedPair(scm__rc.d2149[291], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[411]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[293]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[293]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[293]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[293]))[6] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[293]))[7] = scm__rc.d2149[271];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("modf")), SCM_OBJ(&libnummodf__STUB), SCM_BINDING_INLINABLE);
  libnummodf__STUB.common.info = scm__rc.d2149[292];
  libnummodf__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[293]);
  scm__rc.d2149[301] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),TRUE); /* ldexp */
  scm__rc.d2149[302] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* exp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[412]), scm__rc.d2149[302]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[413]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[416]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[417]), scm__rc.d2149[301]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[418]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[419]), scm__rc.d2149[3]);
  scm__rc.d2149[303] = Scm_MakeExtendedPair(scm__rc.d2149[301], SCM_OBJ(&scm__rc.d2150[413]), SCM_OBJ(&scm__rc.d2150[421]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[304]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[304]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[304]))[5] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[304]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[304]))[7] = scm__rc.d2149[271];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("ldexp")), SCM_OBJ(&libnumldexp__STUB), SCM_BINDING_INLINABLE);
  libnumldexp__STUB.common.info = scm__rc.d2149[303];
  libnumldexp__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[304]);
  scm__rc.d2149[312] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* log10 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[424]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[425]), scm__rc.d2149[312]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[426]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[427]), scm__rc.d2149[3]);
  scm__rc.d2149[313] = Scm_MakeExtendedPair(scm__rc.d2149[312], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[429]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[314]))[6] = scm__rc.d2149[271];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("log10")), SCM_OBJ(&libnumlog10__STUB), SCM_BINDING_INLINABLE);
  libnumlog10__STUB.common.info = scm__rc.d2149[313];
  libnumlog10__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
#if defined(HAVE_TGAMMA)
  scm__rc.d2157[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2156[0])),TRUE); /* %gamma */
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  scm__rc.d2157[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2156[1])),TRUE); /* x */
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2158[1]), scm__rc.d2157[1]);
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  scm__rc.d2157[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2156[2])),TRUE); /* source-info */
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2158[4]), scm__rc.d2157[2]);
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  scm__rc.d2157[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2156[4])),TRUE); /* bind-info */
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  scm__rc.d2157[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2156[5])),TRUE); /* gauche.internal */
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2158[5]), scm__rc.d2157[0]);
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2158[6]), scm__rc.d2157[4]);
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2158[7]), scm__rc.d2157[3]);
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  scm__rc.d2157[5] = Scm_MakeExtendedPair(scm__rc.d2157[0], SCM_OBJ(&scm__rc.d2158[1]), SCM_OBJ(&scm__rc.d2158[9]));
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  scm__rc.d2157[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2156[6])),TRUE); /* <double> */
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  scm__rc.d2157[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2156[7])),TRUE); /* -> */
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2157[8]))[3] = scm__rc.d2157[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2157[8]))[4] = scm__rc.d2157[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2157[8]))[5] = scm__rc.d2157[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2157[8]))[6] = scm__rc.d2157[6];
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_TGAMMA)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%gamma")), SCM_OBJ(&libnum_25gamma__STUB), SCM_BINDING_INLINABLE);
  libnum_25gamma__STUB.common.info = scm__rc.d2157[5];
  libnum_25gamma__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2157[8]);
#endif /* defined(HAVE_TGAMMA) */
#if defined(HAVE_LGAMMA)
  scm__rc.d2160[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2159[0])),TRUE); /* %lgamma */
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  scm__rc.d2160[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2159[1])),TRUE); /* x */
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2161[1]), scm__rc.d2160[1]);
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  scm__rc.d2160[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2159[2])),TRUE); /* source-info */
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2161[4]), scm__rc.d2160[2]);
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  scm__rc.d2160[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2159[4])),TRUE); /* bind-info */
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  scm__rc.d2160[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2159[5])),TRUE); /* gauche.internal */
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2161[5]), scm__rc.d2160[0]);
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2161[6]), scm__rc.d2160[4]);
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2161[7]), scm__rc.d2160[3]);
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  scm__rc.d2160[5] = Scm_MakeExtendedPair(scm__rc.d2160[0], SCM_OBJ(&scm__rc.d2161[1]), SCM_OBJ(&scm__rc.d2161[9]));
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  scm__rc.d2160[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2159[6])),TRUE); /* <double> */
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  scm__rc.d2160[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2159[7])),TRUE); /* -> */
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[8]))[3] = scm__rc.d2160[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[8]))[4] = scm__rc.d2160[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[8]))[5] = scm__rc.d2160[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2160[8]))[6] = scm__rc.d2160[6];
#endif /* defined(HAVE_LGAMMA) */
#if defined(HAVE_LGAMMA)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%lgamma")), SCM_OBJ(&libnum_25lgamma__STUB), SCM_BINDING_INLINABLE);
  libnum_25lgamma__STUB.common.info = scm__rc.d2160[5];
  libnum_25lgamma__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2160[8]);
#endif /* defined(HAVE_LGAMMA) */
  scm__rc.d2149[321] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* flonum->f16bits */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[432]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[433]), scm__rc.d2149[321]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[434]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[435]), scm__rc.d2149[3]);
  scm__rc.d2149[322] = Scm_MakeExtendedPair(scm__rc.d2149[321], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[437]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[323]))[3] = scm__rc.d2149[129];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[323]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[323]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[323]))[6] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("flonum->f16bits")), SCM_OBJ(&libnumflonum_TOf16bits__STUB), SCM_BINDING_INLINABLE);
  libnumflonum_TOf16bits__STUB.common.info = scm__rc.d2149[322];
  libnumflonum_TOf16bits__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[323]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[440]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[441]), scm__rc.d2149[147]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[442]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[443]), scm__rc.d2149[3]);
  scm__rc.d2149[330] = Scm_MakeExtendedPair(scm__rc.d2149[147], SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[445]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[331]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[331]))[4] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[331]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[331]))[6] = scm__rc.d2149[30];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("*")), SCM_OBJ(&libnum_2a__STUB), 0);
  libnum_2a__STUB.common.info = scm__rc.d2149[330];
  libnum_2a__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[331]);
  scm__rc.d2149[338] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* + */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[448]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[449]), scm__rc.d2149[338]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[450]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[451]), scm__rc.d2149[3]);
  scm__rc.d2149[339] = Scm_MakeExtendedPair(scm__rc.d2149[338], SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[453]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("+")), SCM_OBJ(&libnum_2b__STUB), 0);
  libnum_2b__STUB.common.info = scm__rc.d2149[339];
  libnum_2b__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[331]);
  scm__rc.d2149[340] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* - */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[454]), scm__rc.d2149[141]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[457]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[458]), scm__rc.d2149[340]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[459]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[460]), scm__rc.d2149[3]);
  scm__rc.d2149[341] = Scm_MakeExtendedPair(scm__rc.d2149[340], SCM_OBJ(&scm__rc.d2150[454]), SCM_OBJ(&scm__rc.d2150[462]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("-")), SCM_OBJ(&libnum___STUB), 0);
  libnum___STUB.common.info = scm__rc.d2149[341];
  libnum___STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[167]);
  scm__rc.d2149[342] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* / */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[465]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[466]), scm__rc.d2149[342]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[467]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[468]), scm__rc.d2149[3]);
  scm__rc.d2149[343] = Scm_MakeExtendedPair(scm__rc.d2149[342], SCM_OBJ(&scm__rc.d2150[454]), SCM_OBJ(&scm__rc.d2150[470]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("/")), SCM_OBJ(&libnum_2f__STUB), 0);
  libnum_2f__STUB.common.info = scm__rc.d2149[343];
  libnum_2f__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[167]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[344] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* %apply-unary-generic */
  scm__rc.d2149[346] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* class-of */
  scm__rc.d2149[347] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[129]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[345] = Scm_MakeIdentifier(scm__rc.d2149[346], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#class-of */
  scm__rc.d2149[349] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* applicable? */
  scm__rc.d2149[348] = Scm_MakeIdentifier(scm__rc.d2149[349], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#applicable? */
  scm__rc.d2149[351] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* warn */
  scm__rc.d2149[350] = Scm_MakeIdentifier(scm__rc.d2149[351], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#warn */
  scm__rc.d2149[352] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[106])),TRUE); /* gf */
  scm__rc.d2149[353] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107])),TRUE); /* who */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[471]), scm__rc.d2149[353]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[472]), scm__rc.d2149[352]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[475]), scm__rc.d2149[2]);
  scm__rc.d2149[354] = Scm_MakeExtendedPair(scm__rc.d2149[344], SCM_OBJ(&scm__rc.d2150[472]), SCM_OBJ(&scm__rc.d2150[476]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[477]), scm__rc.d2149[354]);
  scm__rc.d2149[355] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4]))->name = scm__rc.d2149[344];/* %apply-unary-generic */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4]))->debugInfo = scm__rc.d2149[355];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[40]))[7] = SCM_WORD(scm__rc.d2149[345]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[40]))[9] = SCM_WORD(scm__rc.d2149[348]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[40]))[23] = SCM_WORD(scm__rc.d2149[350]);
  scm__rc.d2149[356] = Scm_MakeIdentifier(scm__rc.d2149[344], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#%apply-unary-generic */
  scm__rc.d2149[357] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5]))->debugInfo = scm__rc.d2149[357];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[65]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[65]))[6] = SCM_WORD(scm__rc.d2149[344]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[65]))[13] = SCM_WORD(scm__rc.d2149[356]);
  scm__rc.d2149[358] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[108])),TRUE); /* %apply-unary-+ */
  scm__rc.d2149[360] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[109])),TRUE); /* object-+ */
  scm__rc.d2149[359] = Scm_MakeIdentifier(scm__rc.d2149[360], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#object-+ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[480]), scm__rc.d2149[2]);
  scm__rc.d2149[361] = Scm_MakeExtendedPair(scm__rc.d2149[358], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[481]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[482]), scm__rc.d2149[361]);
  scm__rc.d2149[362] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6]))->name = scm__rc.d2149[358];/* %apply-unary-+ */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6]))->debugInfo = scm__rc.d2149[362];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[80]))[1] = SCM_WORD(scm__rc.d2149[359]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[80]))[3] = SCM_WORD(scm__rc.d2149[338]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[80]))[6] = SCM_WORD(scm__rc.d2149[356]);
  scm__rc.d2149[363] = Scm_MakeIdentifier(scm__rc.d2149[358], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#%apply-unary-+ */
  scm__rc.d2149[364] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->debugInfo = scm__rc.d2149[364];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[88]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[88]))[6] = SCM_WORD(scm__rc.d2149[358]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[88]))[13] = SCM_WORD(scm__rc.d2149[363]);
  scm__rc.d2149[365] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[110])),TRUE); /* %apply-unary-* */
  scm__rc.d2149[367] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[111])),TRUE); /* object-* */
  scm__rc.d2149[366] = Scm_MakeIdentifier(scm__rc.d2149[367], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#object-* */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[485]), scm__rc.d2149[2]);
  scm__rc.d2149[368] = Scm_MakeExtendedPair(scm__rc.d2149[365], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[486]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[487]), scm__rc.d2149[368]);
  scm__rc.d2149[369] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[8]))->name = scm__rc.d2149[365];/* %apply-unary-* */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[8]))->debugInfo = scm__rc.d2149[369];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[103]))[1] = SCM_WORD(scm__rc.d2149[366]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[103]))[3] = SCM_WORD(scm__rc.d2149[147]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[103]))[6] = SCM_WORD(scm__rc.d2149[356]);
  scm__rc.d2149[370] = Scm_MakeIdentifier(scm__rc.d2149[365], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#%apply-unary-* */
  scm__rc.d2149[371] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->debugInfo = scm__rc.d2149[371];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[111]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[111]))[6] = SCM_WORD(scm__rc.d2149[365]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[111]))[13] = SCM_WORD(scm__rc.d2149[370]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[372] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[112])),TRUE); /* abs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[490]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[491]), scm__rc.d2149[372]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[492]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[493]), scm__rc.d2149[3]);
  scm__rc.d2149[373] = Scm_MakeExtendedPair(scm__rc.d2149[372], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[495]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("abs")), SCM_OBJ(&libnumabs__STUB), SCM_BINDING_INLINABLE);
  libnumabs__STUB.common.info = scm__rc.d2149[373];
  libnumabs__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[205]);
  scm__rc.d2149[374] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[113])),TRUE); /* quotient */
  scm__rc.d2149[375] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[114])),TRUE); /* n1 */
  scm__rc.d2149[376] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[115])),TRUE); /* n2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[496]), scm__rc.d2149[376]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[497]), scm__rc.d2149[375]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[500]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[501]), scm__rc.d2149[374]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[502]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[503]), scm__rc.d2149[3]);
  scm__rc.d2149[377] = Scm_MakeExtendedPair(scm__rc.d2149[374], SCM_OBJ(&scm__rc.d2150[497]), SCM_OBJ(&scm__rc.d2150[505]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[378]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[378]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[378]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[378]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[378]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("quotient")), SCM_OBJ(&libnumquotient__STUB), SCM_BINDING_INLINABLE);
  libnumquotient__STUB.common.info = scm__rc.d2149[377];
  libnumquotient__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[378]);
  scm__rc.d2149[386] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[116])),TRUE); /* remainder */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[508]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[509]), scm__rc.d2149[386]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[510]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[511]), scm__rc.d2149[3]);
  scm__rc.d2149[387] = Scm_MakeExtendedPair(scm__rc.d2149[386], SCM_OBJ(&scm__rc.d2150[497]), SCM_OBJ(&scm__rc.d2150[513]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("remainder")), SCM_OBJ(&libnumremainder__STUB), SCM_BINDING_INLINABLE);
  libnumremainder__STUB.common.info = scm__rc.d2149[387];
  libnumremainder__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[378]);
  scm__rc.d2149[388] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[117])),TRUE); /* modulo */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[516]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[517]), scm__rc.d2149[388]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[518]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[519]), scm__rc.d2149[3]);
  scm__rc.d2149[389] = Scm_MakeExtendedPair(scm__rc.d2149[388], SCM_OBJ(&scm__rc.d2150[497]), SCM_OBJ(&scm__rc.d2150[521]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("modulo")), SCM_OBJ(&libnummodulo__STUB), SCM_BINDING_INLINABLE);
  libnummodulo__STUB.common.info = scm__rc.d2149[389];
  libnummodulo__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[378]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[390] = Scm_MakeIdentifier(scm__rc.d2149[22], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#integer? */
  scm__rc.d2149[392] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[119])),TRUE); /* error */
  scm__rc.d2149[391] = Scm_MakeIdentifier(scm__rc.d2149[392], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#error */
  scm__rc.d2149[393] = Scm_MakeIdentifier(scm__rc.d2149[372], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#abs */
  scm__rc.d2149[394] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[120])),TRUE); /* gcd */
  scm__rc.d2149[395] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[121])),FALSE); /* G2166 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[522]), scm__rc.d2149[395]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[523]), scm__rc.d2149[394]);
  scm__rc.d2149[396] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[122])),TRUE); /* arg */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[524]), scm__rc.d2149[396]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[527]), scm__rc.d2149[2]);
  scm__rc.d2149[397] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[523]), SCM_OBJ(&scm__rc.d2150[524]), SCM_OBJ(&scm__rc.d2150[528]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[529]), scm__rc.d2149[397]);
  scm__rc.d2149[398] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[10]))->debugInfo = scm__rc.d2149[398];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[126]))[4] = SCM_WORD(scm__rc.d2149[390]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[126]))[15] = SCM_WORD(scm__rc.d2149[391]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[126]))[18] = SCM_WORD(scm__rc.d2149[393]);
  scm__rc.d2149[400] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[123])),TRUE); /* map */
  scm__rc.d2149[399] = Scm_MakeIdentifier(scm__rc.d2149[400], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#map */
  scm__rc.d2149[402] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[124])),TRUE); /* %gcd */
  scm__rc.d2149[401] = Scm_MakeIdentifier(scm__rc.d2149[402], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%gcd */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[533]), scm__rc.d2149[2]);
  scm__rc.d2149[403] = Scm_MakeExtendedPair(scm__rc.d2149[394], scm__rc.d2149[143], SCM_OBJ(&scm__rc.d2150[534]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[535]), scm__rc.d2149[403]);
  scm__rc.d2149[404] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->name = scm__rc.d2149[394];/* gcd */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->debugInfo = scm__rc.d2149[404];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[146]))[5] = SCM_WORD(scm__rc.d2149[399]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[146]))[30] = SCM_WORD(scm__rc.d2149[401]);
  scm__rc.d2149[405] = Scm_MakeIdentifier(scm__rc.d2149[394], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#gcd */
  scm__rc.d2149[406] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->debugInfo = scm__rc.d2149[406];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[184]))[5] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[184]))[8] = SCM_WORD(scm__rc.d2149[394]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[184]))[15] = SCM_WORD(scm__rc.d2149[405]);
  scm__rc.d2149[407] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[125])),TRUE); /* lcm */
  scm__rc.d2149[408] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[126])),FALSE); /* G2167 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[536]), scm__rc.d2149[408]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[537]), scm__rc.d2149[407]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[540]), scm__rc.d2149[2]);
  scm__rc.d2149[409] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[537]), SCM_OBJ(&scm__rc.d2150[524]), SCM_OBJ(&scm__rc.d2150[541]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[542]), scm__rc.d2149[409]);
  scm__rc.d2149[410] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13]))->debugInfo = scm__rc.d2149[410];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[201]))[4] = SCM_WORD(scm__rc.d2149[390]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[201]))[15] = SCM_WORD(scm__rc.d2149[391]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[201]))[18] = SCM_WORD(scm__rc.d2149[393]);
  scm__rc.d2149[411] = Scm_MakeIdentifier(scm__rc.d2149[374], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#quotient */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[546]), scm__rc.d2149[2]);
  scm__rc.d2149[412] = Scm_MakeExtendedPair(scm__rc.d2149[407], scm__rc.d2149[143], SCM_OBJ(&scm__rc.d2150[547]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[548]), scm__rc.d2149[412]);
  scm__rc.d2149[413] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[14]))->name = scm__rc.d2149[407];/* lcm */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[14]))->debugInfo = scm__rc.d2149[413];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]))[5] = SCM_WORD(scm__rc.d2149[399]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]))[32] = SCM_WORD(scm__rc.d2149[401]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[221]))[45] = SCM_WORD(scm__rc.d2149[411]);
  scm__rc.d2149[414] = Scm_MakeIdentifier(scm__rc.d2149[407], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#lcm */
  scm__rc.d2149[415] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15]))->debugInfo = scm__rc.d2149[415];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[279]))[5] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[279]))[8] = SCM_WORD(scm__rc.d2149[407]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[279]))[15] = SCM_WORD(scm__rc.d2149[414]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[551]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[552]), scm__rc.d2149[402]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[553]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[554]), scm__rc.d2149[3]);
  scm__rc.d2149[416] = Scm_MakeExtendedPair(scm__rc.d2149[402], SCM_OBJ(&scm__rc.d2150[497]), SCM_OBJ(&scm__rc.d2150[556]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[417]))[3] = scm__rc.d2149[129];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[417]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[417]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[417]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[417]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%gcd")), SCM_OBJ(&libnum_25gcd__STUB), SCM_BINDING_INLINABLE);
  libnum_25gcd__STUB.common.info = scm__rc.d2149[416];
  libnum_25gcd__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[417]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[425] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[127])),TRUE); /* numerator */
  scm__rc.d2149[426] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[128])),TRUE); /* n */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[557]), scm__rc.d2149[426]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[560]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[561]), scm__rc.d2149[425]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[562]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[563]), scm__rc.d2149[3]);
  scm__rc.d2149[427] = Scm_MakeExtendedPair(scm__rc.d2149[425], SCM_OBJ(&scm__rc.d2150[557]), SCM_OBJ(&scm__rc.d2150[565]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("numerator")), SCM_OBJ(&libnumnumerator__STUB), SCM_BINDING_INLINABLE);
  libnumnumerator__STUB.common.info = scm__rc.d2149[427];
  libnumnumerator__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[205]);
  scm__rc.d2149[428] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[129])),TRUE); /* denominator */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[568]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[569]), scm__rc.d2149[428]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[570]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[571]), scm__rc.d2149[3]);
  scm__rc.d2149[429] = Scm_MakeExtendedPair(scm__rc.d2149[428], SCM_OBJ(&scm__rc.d2150[557]), SCM_OBJ(&scm__rc.d2150[573]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("denominator")), SCM_OBJ(&libnumdenominator__STUB), SCM_BINDING_INLINABLE);
  libnumdenominator__STUB.common.info = scm__rc.d2149[429];
  libnumdenominator__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[205]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[430] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[130])),TRUE); /* rationalize */
  scm__rc.d2149[431] = Scm_MakeIdentifier(scm__rc.d2149[74], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#nan? */
  scm__rc.d2149[432] = 
SCM_NAN;
  scm__rc.d2149[433] = 
SCM_NAN;
  scm__rc.d2149[434] = Scm_MakeIdentifier(scm__rc.d2149[72], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#infinite? */
  scm__rc.d2149[435] = 
SCM_NAN;
  scm__rc.d2149[436] = 
Scm_MakeFlonum(0.0);
  scm__rc.d2149[437] = Scm_MakeIdentifier(scm__rc.d2149[26], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#inexact? */
  scm__rc.d2149[439] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[132])),TRUE); /* real->rational */
  scm__rc.d2149[438] = Scm_MakeIdentifier(scm__rc.d2149[439], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real->rational */
  scm__rc.d2149[440] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[133])),TRUE); /* e */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[574]), scm__rc.d2149[440]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[575]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[578]), scm__rc.d2149[2]);
  scm__rc.d2149[441] = Scm_MakeExtendedPair(scm__rc.d2149[430], SCM_OBJ(&scm__rc.d2150[575]), SCM_OBJ(&scm__rc.d2150[579]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[580]), scm__rc.d2149[441]);
  scm__rc.d2149[442] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16]))->name = scm__rc.d2149[430];/* rationalize */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16]))->debugInfo = scm__rc.d2149[442];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[7] = SCM_WORD(scm__rc.d2149[391]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[13] = SCM_WORD(scm__rc.d2149[431]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[17] = SCM_WORD(scm__rc.d2149[432]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[22] = SCM_WORD(scm__rc.d2149[431]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[26] = SCM_WORD(scm__rc.d2149[433]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[31] = SCM_WORD(scm__rc.d2149[434]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[38] = SCM_WORD(scm__rc.d2149[434]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[42] = SCM_WORD(scm__rc.d2149[435]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[44] = SCM_WORD(scm__rc.d2149[436]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[49] = SCM_WORD(scm__rc.d2149[434]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[57] = SCM_WORD(scm__rc.d2149[437]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[66] = SCM_WORD(scm__rc.d2149[438]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[68] = SCM_WORD(scm__rc.d2149[219]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[74] = SCM_WORD(scm__rc.d2149[437]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[296]))[81] = SCM_WORD(scm__rc.d2149[438]);
  scm__rc.d2149[443] = Scm_MakeIdentifier(scm__rc.d2149[430], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#rationalize */
  scm__rc.d2149[444] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[17]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[17]))->debugInfo = scm__rc.d2149[444];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[379]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[379]))[6] = SCM_WORD(scm__rc.d2149[430]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[379]))[13] = SCM_WORD(scm__rc.d2149[443]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[445] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[134])),TRUE); /* floor */
  scm__rc.d2149[446] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[135])),TRUE); /* v */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[581]), scm__rc.d2149[446]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[584]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[585]), scm__rc.d2149[445]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[586]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[587]), scm__rc.d2149[3]);
  scm__rc.d2149[447] = Scm_MakeExtendedPair(scm__rc.d2149[445], SCM_OBJ(&scm__rc.d2150[581]), SCM_OBJ(&scm__rc.d2150[589]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[448]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[448]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[448]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[448]))[6] = scm__rc.d2149[30];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("floor")), SCM_OBJ(&libnumfloor__STUB), SCM_BINDING_INLINABLE);
  libnumfloor__STUB.common.info = scm__rc.d2149[447];
  libnumfloor__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[448]);
  scm__rc.d2149[455] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[136])),TRUE); /* ceiling */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[592]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[593]), scm__rc.d2149[455]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[594]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[595]), scm__rc.d2149[3]);
  scm__rc.d2149[456] = Scm_MakeExtendedPair(scm__rc.d2149[455], SCM_OBJ(&scm__rc.d2150[581]), SCM_OBJ(&scm__rc.d2150[597]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("ceiling")), SCM_OBJ(&libnumceiling__STUB), SCM_BINDING_INLINABLE);
  libnumceiling__STUB.common.info = scm__rc.d2149[456];
  libnumceiling__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[448]);
  scm__rc.d2149[457] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[137])),TRUE); /* truncate */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[600]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[601]), scm__rc.d2149[457]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[602]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[603]), scm__rc.d2149[3]);
  scm__rc.d2149[458] = Scm_MakeExtendedPair(scm__rc.d2149[457], SCM_OBJ(&scm__rc.d2150[581]), SCM_OBJ(&scm__rc.d2150[605]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("truncate")), SCM_OBJ(&libnumtruncate__STUB), SCM_BINDING_INLINABLE);
  libnumtruncate__STUB.common.info = scm__rc.d2149[458];
  libnumtruncate__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[448]);
  scm__rc.d2149[459] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[138])),TRUE); /* round */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[608]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[609]), scm__rc.d2149[459]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[610]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[611]), scm__rc.d2149[3]);
  scm__rc.d2149[460] = Scm_MakeExtendedPair(scm__rc.d2149[459], SCM_OBJ(&scm__rc.d2150[581]), SCM_OBJ(&scm__rc.d2150[613]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("round")), SCM_OBJ(&libnumround__STUB), SCM_BINDING_INLINABLE);
  libnumround__STUB.common.info = scm__rc.d2149[460];
  libnumround__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[448]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[461] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[139])),TRUE); /* real-exp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[616]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[617]), scm__rc.d2149[461]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[618]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[619]), scm__rc.d2149[3]);
  scm__rc.d2149[462] = Scm_MakeExtendedPair(scm__rc.d2149[461], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[621]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-exp")), SCM_OBJ(&libnumreal_exp__STUB), SCM_BINDING_INLINABLE);
  libnumreal_exp__STUB.common.info = scm__rc.d2149[462];
  libnumreal_exp__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[463] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[140])),TRUE); /* real-ln */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[624]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[625]), scm__rc.d2149[463]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[626]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[627]), scm__rc.d2149[3]);
  scm__rc.d2149[464] = Scm_MakeExtendedPair(scm__rc.d2149[463], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[629]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[465]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[465]))[4] = scm__rc.d2149[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[465]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[465]))[6] = scm__rc.d2149[271];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-ln")), SCM_OBJ(&libnumreal_ln__STUB), SCM_BINDING_INLINABLE);
  libnumreal_ln__STUB.common.info = scm__rc.d2149[464];
  libnumreal_ln__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[465]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[472] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[141])),TRUE); /* real-sin */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[632]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[633]), scm__rc.d2149[472]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[634]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[635]), scm__rc.d2149[3]);
  scm__rc.d2149[473] = Scm_MakeExtendedPair(scm__rc.d2149[472], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[637]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-sin")), SCM_OBJ(&libnumreal_sin__STUB), SCM_BINDING_INLINABLE);
  libnumreal_sin__STUB.common.info = scm__rc.d2149[473];
  libnumreal_sin__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[474] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[142])),TRUE); /* real-cos */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[640]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[641]), scm__rc.d2149[474]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[642]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[643]), scm__rc.d2149[3]);
  scm__rc.d2149[475] = Scm_MakeExtendedPair(scm__rc.d2149[474], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[645]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-cos")), SCM_OBJ(&libnumreal_cos__STUB), SCM_BINDING_INLINABLE);
  libnumreal_cos__STUB.common.info = scm__rc.d2149[475];
  libnumreal_cos__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[476] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[143])),TRUE); /* real-tan */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[648]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[649]), scm__rc.d2149[476]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[650]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[651]), scm__rc.d2149[3]);
  scm__rc.d2149[477] = Scm_MakeExtendedPair(scm__rc.d2149[476], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[653]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-tan")), SCM_OBJ(&libnumreal_tan__STUB), SCM_BINDING_INLINABLE);
  libnumreal_tan__STUB.common.info = scm__rc.d2149[477];
  libnumreal_tan__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[478] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[144])),TRUE); /* real-sinpi */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[656]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[657]), scm__rc.d2149[478]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[658]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[659]), scm__rc.d2149[3]);
  scm__rc.d2149[479] = Scm_MakeExtendedPair(scm__rc.d2149[478], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[661]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-sinpi")), SCM_OBJ(&libnumreal_sinpi__STUB), SCM_BINDING_INLINABLE);
  libnumreal_sinpi__STUB.common.info = scm__rc.d2149[479];
  libnumreal_sinpi__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[480] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[145])),TRUE); /* real-cospi */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[664]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[665]), scm__rc.d2149[480]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[666]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[667]), scm__rc.d2149[3]);
  scm__rc.d2149[481] = Scm_MakeExtendedPair(scm__rc.d2149[480], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[669]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-cospi")), SCM_OBJ(&libnumreal_cospi__STUB), SCM_BINDING_INLINABLE);
  libnumreal_cospi__STUB.common.info = scm__rc.d2149[481];
  libnumreal_cospi__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[482] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[146])),TRUE); /* real-tanpi */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[672]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[673]), scm__rc.d2149[482]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[674]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[675]), scm__rc.d2149[3]);
  scm__rc.d2149[483] = Scm_MakeExtendedPair(scm__rc.d2149[482], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[677]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-tanpi")), SCM_OBJ(&libnumreal_tanpi__STUB), SCM_BINDING_INLINABLE);
  libnumreal_tanpi__STUB.common.info = scm__rc.d2149[483];
  libnumreal_tanpi__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[484] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[147])),TRUE); /* real-asin */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[680]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[681]), scm__rc.d2149[484]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[682]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[683]), scm__rc.d2149[3]);
  scm__rc.d2149[485] = Scm_MakeExtendedPair(scm__rc.d2149[484], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[685]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[486]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[486]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[486]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[486]))[6] = scm__rc.d2149[30];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-asin")), SCM_OBJ(&libnumreal_asin__STUB), SCM_BINDING_INLINABLE);
  libnumreal_asin__STUB.common.info = scm__rc.d2149[485];
  libnumreal_asin__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[486]);
  scm__rc.d2149[493] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[148])),TRUE); /* real-acos */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[688]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[689]), scm__rc.d2149[493]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[690]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[691]), scm__rc.d2149[3]);
  scm__rc.d2149[494] = Scm_MakeExtendedPair(scm__rc.d2149[493], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[693]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-acos")), SCM_OBJ(&libnumreal_acos__STUB), SCM_BINDING_INLINABLE);
  libnumreal_acos__STUB.common.info = scm__rc.d2149[494];
  libnumreal_acos__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[486]);
  scm__rc.d2149[495] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[149])),TRUE); /* real-atan */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[694]), scm__rc.d2149[227]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[695]), scm__rc.d2149[179]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[698]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[699]), scm__rc.d2149[495]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[700]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[701]), scm__rc.d2149[3]);
  scm__rc.d2149[496] = Scm_MakeExtendedPair(scm__rc.d2149[495], SCM_OBJ(&scm__rc.d2150[695]), SCM_OBJ(&scm__rc.d2150[703]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[497]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[497]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[497]))[5] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[497]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[497]))[7] = scm__rc.d2149[271];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-atan")), SCM_OBJ(&libnumreal_atan__STUB), SCM_BINDING_INLINABLE);
  libnumreal_atan__STUB.common.info = scm__rc.d2149[496];
  libnumreal_atan__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[497]);
  scm__rc.d2149[505] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[150])),TRUE); /* real-sinh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[706]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[707]), scm__rc.d2149[505]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[708]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[709]), scm__rc.d2149[3]);
  scm__rc.d2149[506] = Scm_MakeExtendedPair(scm__rc.d2149[505], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[711]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-sinh")), SCM_OBJ(&libnumreal_sinh__STUB), SCM_BINDING_INLINABLE);
  libnumreal_sinh__STUB.common.info = scm__rc.d2149[506];
  libnumreal_sinh__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[507] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[151])),TRUE); /* real-cosh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[714]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[715]), scm__rc.d2149[507]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[716]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[717]), scm__rc.d2149[3]);
  scm__rc.d2149[508] = Scm_MakeExtendedPair(scm__rc.d2149[507], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[719]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-cosh")), SCM_OBJ(&libnumreal_cosh__STUB), SCM_BINDING_INLINABLE);
  libnumreal_cosh__STUB.common.info = scm__rc.d2149[508];
  libnumreal_cosh__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[509] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[152])),TRUE); /* real-tanh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[722]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[723]), scm__rc.d2149[509]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[724]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[725]), scm__rc.d2149[3]);
  scm__rc.d2149[510] = Scm_MakeExtendedPair(scm__rc.d2149[509], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[727]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-tanh")), SCM_OBJ(&libnumreal_tanh__STUB), SCM_BINDING_INLINABLE);
  libnumreal_tanh__STUB.common.info = scm__rc.d2149[510];
  libnumreal_tanh__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[511] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[153])),TRUE); /* real-asinh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[730]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[731]), scm__rc.d2149[511]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[732]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[733]), scm__rc.d2149[3]);
  scm__rc.d2149[512] = Scm_MakeExtendedPair(scm__rc.d2149[511], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[735]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-asinh")), SCM_OBJ(&libnumreal_asinh__STUB), SCM_BINDING_INLINABLE);
  libnumreal_asinh__STUB.common.info = scm__rc.d2149[512];
  libnumreal_asinh__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[513] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[154])),TRUE); /* real-acosh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[738]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[739]), scm__rc.d2149[513]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[740]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[741]), scm__rc.d2149[3]);
  scm__rc.d2149[514] = Scm_MakeExtendedPair(scm__rc.d2149[513], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[743]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-acosh")), SCM_OBJ(&libnumreal_acosh__STUB), SCM_BINDING_INLINABLE);
  libnumreal_acosh__STUB.common.info = scm__rc.d2149[514];
  libnumreal_acosh__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[515] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[155])),TRUE); /* real-atanh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[746]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[747]), scm__rc.d2149[515]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[748]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[749]), scm__rc.d2149[3]);
  scm__rc.d2149[516] = Scm_MakeExtendedPair(scm__rc.d2149[515], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[751]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-atanh")), SCM_OBJ(&libnumreal_atanh__STUB), SCM_BINDING_INLINABLE);
  libnumreal_atanh__STUB.common.info = scm__rc.d2149[516];
  libnumreal_atanh__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[517] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[156])),TRUE); /* real-sqrt */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[754]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[755]), scm__rc.d2149[517]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[756]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[757]), scm__rc.d2149[3]);
  scm__rc.d2149[518] = Scm_MakeExtendedPair(scm__rc.d2149[517], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[759]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[519]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[519]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[519]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[519]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-sqrt")), SCM_OBJ(&libnumreal_sqrt__STUB), SCM_BINDING_INLINABLE);
  libnumreal_sqrt__STUB.common.info = scm__rc.d2149[518];
  libnumreal_sqrt__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[519]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[526] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[157])),TRUE); /* %sqrt-fast-path */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[762]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[763]), scm__rc.d2149[526]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[764]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[765]), scm__rc.d2149[3]);
  scm__rc.d2149[527] = Scm_MakeExtendedPair(scm__rc.d2149[526], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[767]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[528]))[3] = scm__rc.d2149[129];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[528]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[528]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[528]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%sqrt-fast-path")), SCM_OBJ(&libnum_25sqrt_fast_path__STUB), SCM_BINDING_INLINABLE);
  libnum_25sqrt_fast_path__STUB.common.info = scm__rc.d2149[527];
  libnum_25sqrt_fast_path__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[528]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[535] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[158])),TRUE); /* real-expt */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[770]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[771]), scm__rc.d2149[535]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[772]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[773]), scm__rc.d2149[3]);
  scm__rc.d2149[536] = Scm_MakeExtendedPair(scm__rc.d2149[535], SCM_OBJ(&scm__rc.d2150[386]), SCM_OBJ(&scm__rc.d2150[775]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[537]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[537]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[537]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[537]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[537]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("real-expt")), SCM_OBJ(&libnumreal_expt__STUB), SCM_BINDING_INLINABLE);
  libnumreal_expt__STUB.common.info = scm__rc.d2149[536];
  libnumreal_expt__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[537]);
  scm__rc.d2149[545] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[159])),TRUE); /* exact-expt */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[778]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[779]), scm__rc.d2149[545]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[780]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[781]), scm__rc.d2149[3]);
  scm__rc.d2149[546] = Scm_MakeExtendedPair(scm__rc.d2149[545], SCM_OBJ(&scm__rc.d2150[386]), SCM_OBJ(&scm__rc.d2150[783]));
  scm__rc.d2149[547] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[160])),TRUE); /* <integer> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[5] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("exact-expt")), SCM_OBJ(&libnumexact_expt__STUB), SCM_BINDING_INLINABLE);
  libnumexact_expt__STUB.common.info = scm__rc.d2149[546];
  libnumexact_expt__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[548]);
  scm__rc.d2149[556] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[161])),TRUE); /* integer-expt */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[786]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[787]), scm__rc.d2149[556]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[788]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[789]), scm__rc.d2149[3]);
  scm__rc.d2149[557] = Scm_MakeExtendedPair(scm__rc.d2149[556], SCM_OBJ(&scm__rc.d2150[386]), SCM_OBJ(&scm__rc.d2150[791]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[558]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[558]))[4] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[558]))[5] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[558]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[558]))[7] = scm__rc.d2149[547];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("integer-expt")), SCM_OBJ(&libnuminteger_expt__STUB), SCM_BINDING_INLINABLE);
  libnuminteger_expt__STUB.common.info = scm__rc.d2149[557];
  libnuminteger_expt__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[558]);
  scm__rc.d2149[566] = Scm_MakeIdentifier(scm__rc.d2149[461], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-exp */
  scm__rc.d2149[568] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[162])),TRUE); /* real-part */
  scm__rc.d2149[567] = Scm_MakeIdentifier(scm__rc.d2149[568], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-part */
  scm__rc.d2149[570] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[163])),TRUE); /* imag-part */
  scm__rc.d2149[569] = Scm_MakeIdentifier(scm__rc.d2149[570], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#imag-part */
  scm__rc.d2149[572] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[164])),TRUE); /* make-polar */
  scm__rc.d2149[571] = Scm_MakeIdentifier(scm__rc.d2149[572], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#make-polar */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[794]), scm__rc.d2149[2]);
  scm__rc.d2149[573] = Scm_MakeExtendedPair(scm__rc.d2149[302], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[795]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[796]), scm__rc.d2149[573]);
  scm__rc.d2149[574] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[18]))->name = scm__rc.d2149[302];/* exp */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[18]))->debugInfo = scm__rc.d2149[574];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]))[6] = SCM_WORD(scm__rc.d2149[566]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]))[18] = SCM_WORD(scm__rc.d2149[567]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]))[20] = SCM_WORD(scm__rc.d2149[566]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]))[25] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]))[27] = SCM_WORD(scm__rc.d2149[571]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[394]))[33] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[575] = Scm_MakeIdentifier(scm__rc.d2149[302], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#exp */
  scm__rc.d2149[576] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19]))->debugInfo = scm__rc.d2149[576];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[429]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[429]))[6] = SCM_WORD(scm__rc.d2149[302]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[429]))[13] = SCM_WORD(scm__rc.d2149[575]);
  scm__rc.d2149[577] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[166])),TRUE); /* log */
  scm__rc.d2149[578] = Scm_MakeIdentifier(scm__rc.d2149[463], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-ln */
  scm__rc.d2149[579] = 
Scm_MakeFlonum(3.141592653589793);
  scm__rc.d2149[581] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[167])),TRUE); /* make-rectangular */
  scm__rc.d2149[580] = Scm_MakeIdentifier(scm__rc.d2149[581], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#make-rectangular */
  scm__rc.d2149[583] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[168])),TRUE); /* magnitude */
  scm__rc.d2149[582] = Scm_MakeIdentifier(scm__rc.d2149[583], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#magnitude */
  scm__rc.d2149[585] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[169])),TRUE); /* angle */
  scm__rc.d2149[584] = Scm_MakeIdentifier(scm__rc.d2149[585], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#angle */
  scm__rc.d2149[586] = Scm_MakeIdentifier(scm__rc.d2149[577], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#log */
  scm__rc.d2149[587] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[170])),TRUE); /* base */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[797]), scm__rc.d2149[179]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[797]), scm__rc.d2149[587]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[800]), scm__rc.d2149[2]);
  scm__rc.d2149[588] = Scm_MakeExtendedPair(scm__rc.d2149[577], SCM_OBJ(&scm__rc.d2150[797]), SCM_OBJ(&scm__rc.d2150[801]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[802]), scm__rc.d2149[588]);
  scm__rc.d2149[589] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[20]))->name = scm__rc.d2149[577];/* log */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[20]))->debugInfo = scm__rc.d2149[589];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[12] = SCM_WORD(scm__rc.d2149[578]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[19] = SCM_WORD(scm__rc.d2149[578]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[22] = SCM_WORD(scm__rc.d2149[579]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[24] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[36] = SCM_WORD(scm__rc.d2149[582]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[38] = SCM_WORD(scm__rc.d2149[578]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[43] = SCM_WORD(scm__rc.d2149[584]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[45] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[51] = SCM_WORD(scm__rc.d2149[391]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[57] = SCM_WORD(scm__rc.d2149[586]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[444]))[62] = SCM_WORD(scm__rc.d2149[586]);
  scm__rc.d2149[590] = Scm_MakeIdentifier(scm__rc.d2149[577], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#log */
  scm__rc.d2149[591] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21]))->debugInfo = scm__rc.d2149[591];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[509]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[509]))[6] = SCM_WORD(scm__rc.d2149[577]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[509]))[13] = SCM_WORD(scm__rc.d2149[590]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[592] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[171])),TRUE); /* sqrt */
  scm__rc.d2149[593] = Scm_MakeIdentifier(scm__rc.d2149[526], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#%sqrt-fast-path */
  scm__rc.d2149[594] = Scm_MakeIdentifier(scm__rc.d2149[24], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#exact? */
  scm__rc.d2149[595] = Scm_MakeIdentifier(scm__rc.d2149[22], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#integer? */
  scm__rc.d2149[597] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[172])),TRUE); /* %exact-integer-sqrt */
  scm__rc.d2149[596] = Scm_MakeIdentifier(scm__rc.d2149[597], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#%exact-integer-sqrt */
  scm__rc.d2149[598] = Scm_MakeIdentifier(scm__rc.d2149[517], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#real-sqrt */
  scm__rc.d2149[599] = Scm_MakeIdentifier(scm__rc.d2149[425], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#numerator */
  scm__rc.d2149[600] = Scm_MakeIdentifier(scm__rc.d2149[428], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#denominator */
  scm__rc.d2149[601] = Scm_MakeIdentifier(scm__rc.d2149[583], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#magnitude */
  scm__rc.d2149[602] = Scm_MakeIdentifier(scm__rc.d2149[585], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#angle */
  scm__rc.d2149[603] = 
Scm_MakeFlonum(2.0);
  scm__rc.d2149[604] = Scm_MakeIdentifier(scm__rc.d2149[572], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#make-polar */
  scm__rc.d2149[605] = Scm_MakeIdentifier(scm__rc.d2149[392], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#error */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[805]), scm__rc.d2149[2]);
  scm__rc.d2149[606] = Scm_MakeExtendedPair(scm__rc.d2149[592], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[806]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[807]), scm__rc.d2149[606]);
  scm__rc.d2149[607] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22]))->name = scm__rc.d2149[592];/* sqrt */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22]))->debugInfo = scm__rc.d2149[607];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[4] = SCM_WORD(scm__rc.d2149[593]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[10] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[20] = SCM_WORD(scm__rc.d2149[595]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[27] = SCM_WORD(scm__rc.d2149[596]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[35] = SCM_WORD(scm__rc.d2149[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[41] = SCM_WORD(scm__rc.d2149[599]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[46] = SCM_WORD(scm__rc.d2149[600]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[52] = SCM_WORD(scm__rc.d2149[593]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[61] = SCM_WORD(scm__rc.d2149[593]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[74] = SCM_WORD(scm__rc.d2149[596]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[85] = SCM_WORD(scm__rc.d2149[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[91] = SCM_WORD(scm__rc.d2149[596]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[100] = SCM_WORD(scm__rc.d2149[596]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[111] = SCM_WORD(scm__rc.d2149[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[115] = SCM_WORD(scm__rc.d2149[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[123] = SCM_WORD(scm__rc.d2149[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[135] = SCM_WORD(scm__rc.d2149[601]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[137] = SCM_WORD(scm__rc.d2149[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[142] = SCM_WORD(scm__rc.d2149[602]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[145] = SCM_WORD(scm__rc.d2149[603]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[148] = SCM_WORD(scm__rc.d2149[604]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[524]))[154] = SCM_WORD(scm__rc.d2149[605]);
  scm__rc.d2149[608] = Scm_MakeIdentifier(scm__rc.d2149[592], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#sqrt */
  scm__rc.d2149[609] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[23]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[23]))->debugInfo = scm__rc.d2149[609];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[683]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[683]))[6] = SCM_WORD(scm__rc.d2149[592]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[683]))[13] = SCM_WORD(scm__rc.d2149[608]);
  scm__rc.d2149[610] = Scm_StringToNumber(SCM_STRING(SCM_OBJ(&scm__sc.d2148[173])), 16, 0);
  scm__rc.d2149[611] = Scm_MakeIdentifier(scm__rc.d2149[251], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#floor->exact */
  scm__rc.d2149[612] = Scm_MakeIdentifier(scm__rc.d2149[63], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#finite? */
  scm__rc.d2149[614] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[174])),TRUE); /* integer-length */
  scm__rc.d2149[613] = Scm_MakeIdentifier(scm__rc.d2149[614], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#integer-length */
  scm__rc.d2149[615] = Scm_MakeIdentifier(scm__rc.d2149[374], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#quotient */
  scm__rc.d2149[617] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[175])),TRUE); /* ash */
  scm__rc.d2149[616] = Scm_MakeIdentifier(scm__rc.d2149[617], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#ash */
  scm__rc.d2149[618] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[176])),TRUE); /* k */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[808]), scm__rc.d2149[618]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[811]), scm__rc.d2149[2]);
  scm__rc.d2149[619] = Scm_MakeExtendedPair(scm__rc.d2149[597], SCM_OBJ(&scm__rc.d2150[808]), SCM_OBJ(&scm__rc.d2150[812]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[813]), scm__rc.d2149[619]);
  scm__rc.d2149[620] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[24]))->name = scm__rc.d2149[597];/* %exact-integer-sqrt */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[24]))->debugInfo = scm__rc.d2149[620];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[1] = SCM_WORD(scm__rc.d2149[610]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[10] = SCM_WORD(scm__rc.d2149[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[12] = SCM_WORD(scm__rc.d2149[611]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[25] = SCM_WORD(scm__rc.d2149[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[31] = SCM_WORD(scm__rc.d2149[612]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[40] = SCM_WORD(scm__rc.d2149[598]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[42] = SCM_WORD(scm__rc.d2149[611]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[54] = SCM_WORD(scm__rc.d2149[613]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[58] = SCM_WORD(scm__rc.d2149[615]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[60] = SCM_WORD(scm__rc.d2149[616]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[79] = SCM_WORD(scm__rc.d2149[615]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[698]))[107] = SCM_WORD(scm__rc.d2149[615]);
  scm__rc.d2149[621] = Scm_MakeIdentifier(scm__rc.d2149[597], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%exact-integer-sqrt */
  scm__rc.d2149[622] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25]))->debugInfo = scm__rc.d2149[622];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[811]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[811]))[6] = SCM_WORD(scm__rc.d2149[597]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[811]))[13] = SCM_WORD(scm__rc.d2149[621]);
  scm__rc.d2149[623] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[177])),TRUE); /* expt */
  scm__rc.d2149[625] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[178])),TRUE); /* %exact-expt */
  scm__rc.d2149[624] = Scm_MakeIdentifier(scm__rc.d2149[625], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%exact-expt */
  scm__rc.d2149[626] = Scm_MakeIdentifier(scm__rc.d2149[535], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#real-expt */
  scm__rc.d2149[627] = Scm_MakeIdentifier(scm__rc.d2149[568], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#real-part */
  scm__rc.d2149[628] = Scm_MakeIdentifier(scm__rc.d2149[38], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#positive? */
  scm__rc.d2149[629] = Scm_MakeComplex(0.0, 1.0);
  scm__rc.d2149[630] = Scm_MakeIdentifier(scm__rc.d2149[570], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#imag-part */
  scm__rc.d2149[631] = Scm_MakeIdentifier(scm__rc.d2149[463], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#real-ln */
  scm__rc.d2149[632] = Scm_MakeIdentifier(scm__rc.d2149[302], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#exp */
  scm__rc.d2149[633] = Scm_MakeIdentifier(scm__rc.d2149[577], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#log */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[816]), scm__rc.d2149[2]);
  scm__rc.d2149[634] = Scm_MakeExtendedPair(scm__rc.d2149[623], SCM_OBJ(&scm__rc.d2150[386]), SCM_OBJ(&scm__rc.d2150[817]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[818]), scm__rc.d2149[634]);
  scm__rc.d2149[635] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[26]))->name = scm__rc.d2149[623];/* expt */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[26]))->debugInfo = scm__rc.d2149[635];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[4] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[11] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[17] = SCM_WORD(scm__rc.d2149[624]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[30] = SCM_WORD(scm__rc.d2149[626]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[40] = SCM_WORD(scm__rc.d2149[627]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[49] = SCM_WORD(scm__rc.d2149[628]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[56] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[62] = SCM_WORD(scm__rc.d2149[436]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[68] = SCM_WORD(scm__rc.d2149[626]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[72] = SCM_WORD(scm__rc.d2149[629]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[77] = SCM_WORD(scm__rc.d2149[630]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[83] = SCM_WORD(scm__rc.d2149[631]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[86] = SCM_WORD(scm__rc.d2149[632]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[96] = SCM_WORD(scm__rc.d2149[605]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[107] = SCM_WORD(scm__rc.d2149[633]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[110] = SCM_WORD(scm__rc.d2149[632]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[826]))[116] = SCM_WORD(scm__rc.d2149[605]);
  scm__rc.d2149[636] = Scm_MakeIdentifier(scm__rc.d2149[623], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#expt */
  scm__rc.d2149[637] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[26])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[27]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[27]))->debugInfo = scm__rc.d2149[637];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[947]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[947]))[6] = SCM_WORD(scm__rc.d2149[623]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[947]))[13] = SCM_WORD(scm__rc.d2149[636]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[638] = Scm_MakeIdentifier(scm__rc.d2149[545], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#exact-expt */
  scm__rc.d2149[639] = Scm_MakeIdentifier(scm__rc.d2149[625], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#%exact-expt */
  scm__rc.d2149[640] = Scm_MakeIdentifier(scm__rc.d2149[342], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#/ */
  scm__rc.d2149[641] = Scm_MakeIdentifier(scm__rc.d2149[265], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#round->exact */
  scm__rc.d2149[642] = Scm_MakeIdentifier(scm__rc.d2149[556], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#integer-expt */
  scm__rc.d2149[643] = Scm_MakeIdentifier(scm__rc.d2149[157], SCM_MODULE(scm__rc.d2149[347]), SCM_NIL); /* gauche.internal#< */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[821]), scm__rc.d2149[2]);
  scm__rc.d2149[644] = Scm_MakeExtendedPair(scm__rc.d2149[625], SCM_OBJ(&scm__rc.d2150[386]), SCM_OBJ(&scm__rc.d2150[822]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[823]), scm__rc.d2149[644]);
  scm__rc.d2149[645] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[27])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[28]))->name = scm__rc.d2149[625];/* %exact-expt */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[28]))->debugInfo = scm__rc.d2149[645];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[4] = SCM_WORD(scm__rc.d2149[595]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[10] = SCM_WORD(scm__rc.d2149[638]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[18] = SCM_WORD(scm__rc.d2149[626]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[29] = SCM_WORD(scm__rc.d2149[639]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[31] = SCM_WORD(scm__rc.d2149[640]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[37] = SCM_WORD(scm__rc.d2149[595]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[44] = SCM_WORD(scm__rc.d2149[599]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[49] = SCM_WORD(scm__rc.d2149[600]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[61] = SCM_WORD(scm__rc.d2149[633]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[66] = SCM_WORD(scm__rc.d2149[641]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[68] = SCM_WORD(scm__rc.d2149[616]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[75] = SCM_WORD(scm__rc.d2149[642]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[83] = SCM_WORD(scm__rc.d2149[642]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[94] = SCM_WORD(scm__rc.d2149[642]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[112] = SCM_WORD(scm__rc.d2149[615]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[124] = SCM_WORD(scm__rc.d2149[615]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[135] = SCM_WORD(scm__rc.d2149[642]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[143] = SCM_WORD(scm__rc.d2149[642]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[154] = SCM_WORD(scm__rc.d2149[643]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[168] = SCM_WORD(scm__rc.d2149[643]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[178] = SCM_WORD(scm__rc.d2149[626]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[192] = SCM_WORD(scm__rc.d2149[599]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[196] = SCM_WORD(scm__rc.d2149[639]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[205] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[214] = SCM_WORD(scm__rc.d2149[600]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[218] = SCM_WORD(scm__rc.d2149[639]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[227] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[962]))[239] = SCM_WORD(scm__rc.d2149[626]);
  scm__rc.d2149[646] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[28])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[29]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[29]))->debugInfo = scm__rc.d2149[646];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1203]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1203]))[6] = SCM_WORD(scm__rc.d2149[625]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1203]))[13] = SCM_WORD(scm__rc.d2149[639]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[647] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[179])),TRUE); /* cos */
  scm__rc.d2149[648] = Scm_MakeIdentifier(scm__rc.d2149[474], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-cos */
  scm__rc.d2149[649] = Scm_MakeIdentifier(scm__rc.d2149[507], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-cosh */
  scm__rc.d2149[650] = Scm_MakeIdentifier(scm__rc.d2149[472], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-sin */
  scm__rc.d2149[651] = Scm_MakeIdentifier(scm__rc.d2149[505], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-sinh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[826]), scm__rc.d2149[2]);
  scm__rc.d2149[652] = Scm_MakeExtendedPair(scm__rc.d2149[647], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[827]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[828]), scm__rc.d2149[652]);
  scm__rc.d2149[653] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[29])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[30]))->name = scm__rc.d2149[647];/* cos */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[30]))->debugInfo = scm__rc.d2149[653];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]))[6] = SCM_WORD(scm__rc.d2149[648]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]))[16] = SCM_WORD(scm__rc.d2149[567]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]))[21] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]))[27] = SCM_WORD(scm__rc.d2149[648]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]))[32] = SCM_WORD(scm__rc.d2149[649]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]))[38] = SCM_WORD(scm__rc.d2149[650]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]))[43] = SCM_WORD(scm__rc.d2149[651]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]))[47] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1218]))[53] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[654] = Scm_MakeIdentifier(scm__rc.d2149[647], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#cos */
  scm__rc.d2149[655] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[30])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[31]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[31]))->debugInfo = scm__rc.d2149[655];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1273]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1273]))[6] = SCM_WORD(scm__rc.d2149[647]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1273]))[13] = SCM_WORD(scm__rc.d2149[654]);
  scm__rc.d2149[656] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[180])),TRUE); /* cosh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[831]), scm__rc.d2149[2]);
  scm__rc.d2149[657] = Scm_MakeExtendedPair(scm__rc.d2149[656], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[832]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[833]), scm__rc.d2149[657]);
  scm__rc.d2149[658] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[31])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[32]))->name = scm__rc.d2149[656];/* cosh */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[32]))->debugInfo = scm__rc.d2149[658];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]))[6] = SCM_WORD(scm__rc.d2149[649]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]))[16] = SCM_WORD(scm__rc.d2149[567]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]))[21] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]))[27] = SCM_WORD(scm__rc.d2149[649]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]))[32] = SCM_WORD(scm__rc.d2149[648]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]))[38] = SCM_WORD(scm__rc.d2149[651]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]))[43] = SCM_WORD(scm__rc.d2149[650]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]))[46] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1288]))[52] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[659] = Scm_MakeIdentifier(scm__rc.d2149[656], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#cosh */
  scm__rc.d2149[660] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[32])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[33]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[33]))->debugInfo = scm__rc.d2149[660];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1342]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1342]))[6] = SCM_WORD(scm__rc.d2149[656]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1342]))[13] = SCM_WORD(scm__rc.d2149[659]);
  scm__rc.d2149[661] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[181])),TRUE); /* sin */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[836]), scm__rc.d2149[2]);
  scm__rc.d2149[662] = Scm_MakeExtendedPair(scm__rc.d2149[661], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[837]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[838]), scm__rc.d2149[662]);
  scm__rc.d2149[663] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[34]))->name = scm__rc.d2149[661];/* sin */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[34]))->debugInfo = scm__rc.d2149[663];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]))[6] = SCM_WORD(scm__rc.d2149[650]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]))[16] = SCM_WORD(scm__rc.d2149[567]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]))[21] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]))[27] = SCM_WORD(scm__rc.d2149[650]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]))[32] = SCM_WORD(scm__rc.d2149[649]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]))[38] = SCM_WORD(scm__rc.d2149[648]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]))[43] = SCM_WORD(scm__rc.d2149[651]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]))[46] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1357]))[52] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[664] = Scm_MakeIdentifier(scm__rc.d2149[661], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#sin */
  scm__rc.d2149[665] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[34])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[35]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[35]))->debugInfo = scm__rc.d2149[665];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1411]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1411]))[6] = SCM_WORD(scm__rc.d2149[661]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1411]))[13] = SCM_WORD(scm__rc.d2149[664]);
  scm__rc.d2149[666] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[182])),TRUE); /* sinh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[841]), scm__rc.d2149[2]);
  scm__rc.d2149[667] = Scm_MakeExtendedPair(scm__rc.d2149[666], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[842]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[843]), scm__rc.d2149[667]);
  scm__rc.d2149[668] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[35])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[36]))->name = scm__rc.d2149[666];/* sinh */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[36]))->debugInfo = scm__rc.d2149[668];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]))[6] = SCM_WORD(scm__rc.d2149[651]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]))[16] = SCM_WORD(scm__rc.d2149[567]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]))[21] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]))[27] = SCM_WORD(scm__rc.d2149[651]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]))[32] = SCM_WORD(scm__rc.d2149[648]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]))[38] = SCM_WORD(scm__rc.d2149[649]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]))[43] = SCM_WORD(scm__rc.d2149[650]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]))[46] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1426]))[52] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[669] = Scm_MakeIdentifier(scm__rc.d2149[666], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#sinh */
  scm__rc.d2149[670] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[36])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[37]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[37]))->debugInfo = scm__rc.d2149[670];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1480]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1480]))[6] = SCM_WORD(scm__rc.d2149[666]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1480]))[13] = SCM_WORD(scm__rc.d2149[669]);
  scm__rc.d2149[671] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[183])),TRUE); /* tan */
  scm__rc.d2149[672] = Scm_MakeIdentifier(scm__rc.d2149[476], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-tan */
  scm__rc.d2149[673] = Scm_MakeComplex(0.0, -1.0);
  scm__rc.d2149[674] = Scm_MakeIdentifier(scm__rc.d2149[302], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#exp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[846]), scm__rc.d2149[2]);
  scm__rc.d2149[675] = Scm_MakeExtendedPair(scm__rc.d2149[671], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[847]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[848]), scm__rc.d2149[675]);
  scm__rc.d2149[676] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[37])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[38]))->name = scm__rc.d2149[671];/* tan */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[38]))->debugInfo = scm__rc.d2149[676];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]))[6] = SCM_WORD(scm__rc.d2149[672]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]))[13] = SCM_WORD(scm__rc.d2149[629]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]))[18] = SCM_WORD(scm__rc.d2149[673]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]))[23] = SCM_WORD(scm__rc.d2149[674]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]))[29] = SCM_WORD(scm__rc.d2149[674]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]))[35] = SCM_WORD(scm__rc.d2149[674]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]))[41] = SCM_WORD(scm__rc.d2149[674]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1495]))[50] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[677] = Scm_MakeIdentifier(scm__rc.d2149[671], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#tan */
  scm__rc.d2149[678] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[38])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[39]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[39]))->debugInfo = scm__rc.d2149[678];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1547]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1547]))[6] = SCM_WORD(scm__rc.d2149[671]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1547]))[13] = SCM_WORD(scm__rc.d2149[677]);
  scm__rc.d2149[679] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[184])),TRUE); /* tanh */
  scm__rc.d2149[680] = Scm_MakeIdentifier(scm__rc.d2149[509], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-tanh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[851]), scm__rc.d2149[2]);
  scm__rc.d2149[681] = Scm_MakeExtendedPair(scm__rc.d2149[679], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[852]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[853]), scm__rc.d2149[681]);
  scm__rc.d2149[682] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[39])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[40]))->name = scm__rc.d2149[679];/* tanh */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[40]))->debugInfo = scm__rc.d2149[682];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]))[6] = SCM_WORD(scm__rc.d2149[680]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]))[16] = SCM_WORD(scm__rc.d2149[674]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]))[22] = SCM_WORD(scm__rc.d2149[674]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]))[28] = SCM_WORD(scm__rc.d2149[674]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]))[34] = SCM_WORD(scm__rc.d2149[674]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1562]))[42] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[683] = Scm_MakeIdentifier(scm__rc.d2149[679], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#tanh */
  scm__rc.d2149[684] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[40])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[41]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[41]))->debugInfo = scm__rc.d2149[684];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1606]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1606]))[6] = SCM_WORD(scm__rc.d2149[679]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1606]))[13] = SCM_WORD(scm__rc.d2149[683]);
  scm__rc.d2149[685] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[185])),TRUE); /* asin */
  scm__rc.d2149[686] = Scm_MakeIdentifier(scm__rc.d2149[484], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-asin */
  scm__rc.d2149[687] = Scm_MakeIdentifier(scm__rc.d2149[592], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#sqrt */
  scm__rc.d2149[688] = 
Scm_MakeFlonum(1.0e-8);
  scm__rc.d2149[689] = Scm_MakeComplex(SCM_DBL_NAN, SCM_DBL_NAN);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[856]), scm__rc.d2149[2]);
  scm__rc.d2149[690] = Scm_MakeExtendedPair(scm__rc.d2149[685], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[857]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[858]), scm__rc.d2149[690]);
  scm__rc.d2149[691] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[41])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[42]))->name = scm__rc.d2149[685];/* asin */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[42]))->debugInfo = scm__rc.d2149[691];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[6] = SCM_WORD(scm__rc.d2149[686]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[13] = SCM_WORD(scm__rc.d2149[629]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[23] = SCM_WORD(scm__rc.d2149[687]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[30] = SCM_WORD(scm__rc.d2149[582]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[35] = SCM_WORD(scm__rc.d2149[582]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[39] = SCM_WORD(scm__rc.d2149[688]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[43] = SCM_WORD(scm__rc.d2149[689]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[45] = SCM_WORD(scm__rc.d2149[673]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[50] = SCM_WORD(scm__rc.d2149[586]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1621]))[57] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[692] = Scm_MakeIdentifier(scm__rc.d2149[685], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#asin */
  scm__rc.d2149[693] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[42])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[43]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[43]))->debugInfo = scm__rc.d2149[693];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1680]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1680]))[6] = SCM_WORD(scm__rc.d2149[685]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1680]))[13] = SCM_WORD(scm__rc.d2149[692]);
  scm__rc.d2149[694] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[186])),TRUE); /* asinh */
  scm__rc.d2149[695] = Scm_MakeIdentifier(scm__rc.d2149[511], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-asinh */
  scm__rc.d2149[696] = Scm_MakeComplex(SCM_DBL_NAN, SCM_DBL_NAN);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[861]), scm__rc.d2149[2]);
  scm__rc.d2149[697] = Scm_MakeExtendedPair(scm__rc.d2149[694], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[862]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[863]), scm__rc.d2149[697]);
  scm__rc.d2149[698] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[43])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[44]))->name = scm__rc.d2149[694];/* asinh */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[44]))->debugInfo = scm__rc.d2149[698];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]))[6] = SCM_WORD(scm__rc.d2149[695]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]))[19] = SCM_WORD(scm__rc.d2149[687]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]))[26] = SCM_WORD(scm__rc.d2149[582]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]))[31] = SCM_WORD(scm__rc.d2149[582]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]))[35] = SCM_WORD(scm__rc.d2149[688]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]))[39] = SCM_WORD(scm__rc.d2149[696]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]))[42] = SCM_WORD(scm__rc.d2149[586]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1695]))[48] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[699] = Scm_MakeIdentifier(scm__rc.d2149[694], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#asinh */
  scm__rc.d2149[700] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[44])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[45]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[45]))->debugInfo = scm__rc.d2149[700];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1745]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1745]))[6] = SCM_WORD(scm__rc.d2149[694]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1745]))[13] = SCM_WORD(scm__rc.d2149[699]);
  scm__rc.d2149[701] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[187])),TRUE); /* acos */
  scm__rc.d2149[702] = Scm_MakeIdentifier(scm__rc.d2149[493], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-acos */
  scm__rc.d2149[703] = 
Scm_MakeFlonum(1.5707963267948966);
  scm__rc.d2149[704] = Scm_MakeIdentifier(scm__rc.d2149[685], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#asin */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[866]), scm__rc.d2149[2]);
  scm__rc.d2149[705] = Scm_MakeExtendedPair(scm__rc.d2149[701], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[867]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[868]), scm__rc.d2149[705]);
  scm__rc.d2149[706] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[45])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[46]))->name = scm__rc.d2149[701];/* acos */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[46]))->debugInfo = scm__rc.d2149[706];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1760]))[6] = SCM_WORD(scm__rc.d2149[702]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1760]))[13] = SCM_WORD(scm__rc.d2149[703]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1760]))[18] = SCM_WORD(scm__rc.d2149[704]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1760]))[25] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[707] = Scm_MakeIdentifier(scm__rc.d2149[701], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#acos */
  scm__rc.d2149[708] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[46])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[47]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[47]))->debugInfo = scm__rc.d2149[708];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1787]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1787]))[6] = SCM_WORD(scm__rc.d2149[701]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1787]))[13] = SCM_WORD(scm__rc.d2149[707]);
  scm__rc.d2149[709] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[188])),TRUE); /* acosh */
  scm__rc.d2149[710] = Scm_MakeIdentifier(scm__rc.d2149[513], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-acosh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[871]), scm__rc.d2149[2]);
  scm__rc.d2149[711] = Scm_MakeExtendedPair(scm__rc.d2149[709], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[872]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[873]), scm__rc.d2149[711]);
  scm__rc.d2149[712] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[47])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[48]))->name = scm__rc.d2149[709];/* acosh */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[48]))->debugInfo = scm__rc.d2149[712];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]))[6] = SCM_WORD(scm__rc.d2149[710]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]))[21] = SCM_WORD(scm__rc.d2149[687]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]))[28] = SCM_WORD(scm__rc.d2149[687]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]))[31] = SCM_WORD(scm__rc.d2149[586]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1802]))[38] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[713] = Scm_MakeIdentifier(scm__rc.d2149[709], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#acosh */
  scm__rc.d2149[714] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[48])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[49]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[49]))->debugInfo = scm__rc.d2149[714];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1842]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1842]))[6] = SCM_WORD(scm__rc.d2149[709]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1842]))[13] = SCM_WORD(scm__rc.d2149[713]);
  scm__rc.d2149[715] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[189])),TRUE); /* atan */
  scm__rc.d2149[716] = Scm_MakeIdentifier(scm__rc.d2149[495], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-atan */
  scm__rc.d2149[717] = Scm_MakeComplex(0.0, 2.0);
  scm__rc.d2149[718] = 
SCM_NAN;
  scm__rc.d2149[719] = Scm_MakeIdentifier(scm__rc.d2149[76], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#negative-zero? */
  scm__rc.d2149[720] = 
Scm_MakeFlonum(-1.5707963267948966);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[874]), scm__rc.d2149[179]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[874]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[877]), scm__rc.d2149[2]);
  scm__rc.d2149[721] = Scm_MakeExtendedPair(scm__rc.d2149[715], SCM_OBJ(&scm__rc.d2150[874]), SCM_OBJ(&scm__rc.d2150[878]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[879]), scm__rc.d2149[721]);
  scm__rc.d2149[722] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[49])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[50]))->name = scm__rc.d2149[715];/* atan */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[50]))->debugInfo = scm__rc.d2149[722];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[9] = SCM_WORD(scm__rc.d2149[716]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[17] = SCM_WORD(scm__rc.d2149[629]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[24] = SCM_WORD(scm__rc.d2149[586]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[30] = SCM_WORD(scm__rc.d2149[586]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[34] = SCM_WORD(scm__rc.d2149[717]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[41] = SCM_WORD(scm__rc.d2149[391]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[55] = SCM_WORD(scm__rc.d2149[718]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[60] = SCM_WORD(scm__rc.d2149[719]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[64] = SCM_WORD(scm__rc.d2149[720]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[66] = SCM_WORD(scm__rc.d2149[703]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[78] = SCM_WORD(scm__rc.d2149[716]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1857]))[86] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[723] = Scm_MakeIdentifier(scm__rc.d2149[715], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#atan */
  scm__rc.d2149[724] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[50])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[51]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[51]))->debugInfo = scm__rc.d2149[724];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1951]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1951]))[6] = SCM_WORD(scm__rc.d2149[715]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1951]))[13] = SCM_WORD(scm__rc.d2149[723]);
  scm__rc.d2149[725] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[191])),TRUE); /* atanh */
  scm__rc.d2149[726] = Scm_MakeIdentifier(scm__rc.d2149[515], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#real-atanh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[882]), scm__rc.d2149[2]);
  scm__rc.d2149[727] = Scm_MakeExtendedPair(scm__rc.d2149[725], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[883]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[884]), scm__rc.d2149[727]);
  scm__rc.d2149[728] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[51])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[52]))->name = scm__rc.d2149[725];/* atanh */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[52]))->debugInfo = scm__rc.d2149[728];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1966]))[6] = SCM_WORD(scm__rc.d2149[726]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1966]))[16] = SCM_WORD(scm__rc.d2149[586]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1966]))[22] = SCM_WORD(scm__rc.d2149[586]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[1966]))[32] = SCM_WORD(scm__rc.d2149[391]);
  scm__rc.d2149[729] = Scm_MakeIdentifier(scm__rc.d2149[725], SCM_MODULE(scm__rc.d2149[120]), SCM_NIL); /* gauche#atanh */
  scm__rc.d2149[730] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[52])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[53]))->name = scm__rc.d2149[122];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[53]))->debugInfo = scm__rc.d2149[730];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[2000]))[3] = SCM_WORD(scm__rc.d2149[116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[2000]))[6] = SCM_WORD(scm__rc.d2149[725]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[2000]))[13] = SCM_WORD(scm__rc.d2149[729]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[731] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[192])),TRUE); /* radians->degrees */
  scm__rc.d2149[732] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[193])),TRUE); /* r */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[885]), scm__rc.d2149[732]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[888]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[889]), scm__rc.d2149[731]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[890]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[891]), scm__rc.d2149[3]);
  scm__rc.d2149[733] = Scm_MakeExtendedPair(scm__rc.d2149[731], SCM_OBJ(&scm__rc.d2150[885]), SCM_OBJ(&scm__rc.d2150[893]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("radians->degrees")), SCM_OBJ(&libnumradians_TOdegrees__STUB), SCM_BINDING_INLINABLE);
  libnumradians_TOdegrees__STUB.common.info = scm__rc.d2149[733];
  libnumradians_TOdegrees__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
  scm__rc.d2149[734] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[194])),TRUE); /* degrees->radians */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[896]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[897]), scm__rc.d2149[734]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[898]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[899]), scm__rc.d2149[3]);
  scm__rc.d2149[735] = Scm_MakeExtendedPair(scm__rc.d2149[734], SCM_OBJ(&scm__rc.d2150[395]), SCM_OBJ(&scm__rc.d2150[901]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("degrees->radians")), SCM_OBJ(&libnumdegrees_TOradians__STUB), SCM_BINDING_INLINABLE);
  libnumdegrees_TOradians__STUB.common.info = scm__rc.d2149[735];
  libnumdegrees_TOradians__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[314]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[736] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[195])),TRUE); /* cnt */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[902]), scm__rc.d2149[736]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[903]), scm__rc.d2149[252]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[906]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[907]), scm__rc.d2149[617]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[908]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[909]), scm__rc.d2149[3]);
  scm__rc.d2149[737] = Scm_MakeExtendedPair(scm__rc.d2149[617], SCM_OBJ(&scm__rc.d2150[903]), SCM_OBJ(&scm__rc.d2150[911]));
  scm__rc.d2149[738] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[196])),TRUE); /* <fixnum> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[739]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[739]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[739]))[5] = scm__rc.d2149[738];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[739]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[739]))[7] = scm__rc.d2149[547];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("ash")), SCM_OBJ(&libnumash__STUB), SCM_BINDING_INLINABLE);
  libnumash__STUB.common.info = scm__rc.d2149[737];
  libnumash__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[739]);
  scm__rc.d2149[747] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[197])),TRUE); /* lognot */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[914]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[915]), scm__rc.d2149[747]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[916]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[917]), scm__rc.d2149[3]);
  scm__rc.d2149[748] = Scm_MakeExtendedPair(scm__rc.d2149[747], SCM_OBJ(&scm__rc.d2150[98]), SCM_OBJ(&scm__rc.d2150[919]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[749]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[749]))[4] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[749]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[749]))[6] = scm__rc.d2149[547];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("lognot")), SCM_OBJ(&libnumlognot__STUB), SCM_BINDING_INLINABLE);
  libnumlognot__STUB.common.info = scm__rc.d2149[748];
  libnumlognot__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[749]);
  scm__rc.d2149[756] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[198])),TRUE); /* logand */
  scm__rc.d2149[757] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[199])),TRUE); /* arg2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[920]), scm__rc.d2149[757]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[921]), scm__rc.d2149[144]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[922]), scm__rc.d2149[143]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[923]), scm__rc.d2149[142]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[926]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[927]), scm__rc.d2149[756]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[928]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[929]), scm__rc.d2149[3]);
  scm__rc.d2149[758] = Scm_MakeExtendedPair(scm__rc.d2149[756], SCM_OBJ(&scm__rc.d2150[923]), SCM_OBJ(&scm__rc.d2150[931]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[759]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[759]))[4] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[759]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[759]))[6] = scm__rc.d2149[547];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("logand")), SCM_OBJ(&libnumlogand__STUB), SCM_BINDING_INLINABLE);
  libnumlogand__STUB.common.info = scm__rc.d2149[758];
  libnumlogand__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[759]);
  scm__rc.d2149[766] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[200])),TRUE); /* logior */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[934]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[935]), scm__rc.d2149[766]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[936]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[937]), scm__rc.d2149[3]);
  scm__rc.d2149[767] = Scm_MakeExtendedPair(scm__rc.d2149[766], SCM_OBJ(&scm__rc.d2150[923]), SCM_OBJ(&scm__rc.d2150[939]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("logior")), SCM_OBJ(&libnumlogior__STUB), SCM_BINDING_INLINABLE);
  libnumlogior__STUB.common.info = scm__rc.d2149[767];
  libnumlogior__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[759]);
  scm__rc.d2149[768] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[201])),TRUE); /* logxor */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[942]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[943]), scm__rc.d2149[768]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[944]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[945]), scm__rc.d2149[3]);
  scm__rc.d2149[769] = Scm_MakeExtendedPair(scm__rc.d2149[768], SCM_OBJ(&scm__rc.d2150[923]), SCM_OBJ(&scm__rc.d2150[947]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("logxor")), SCM_OBJ(&libnumlogxor__STUB), SCM_BINDING_INLINABLE);
  libnumlogxor__STUB.common.info = scm__rc.d2149[769];
  libnumlogxor__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[759]);
  scm__rc.d2149[770] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[202])),TRUE); /* logcount */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[950]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[951]), scm__rc.d2149[770]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[952]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[953]), scm__rc.d2149[3]);
  scm__rc.d2149[771] = Scm_MakeExtendedPair(scm__rc.d2149[770], SCM_OBJ(&scm__rc.d2150[557]), SCM_OBJ(&scm__rc.d2150[955]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[772]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[772]))[4] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[772]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[772]))[6] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("logcount")), SCM_OBJ(&libnumlogcount__STUB), SCM_BINDING_INLINABLE);
  libnumlogcount__STUB.common.info = scm__rc.d2149[771];
  libnumlogcount__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[772]);
  scm__rc.d2149[779] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[203])),TRUE); /* logset+clear */
  scm__rc.d2149[780] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[204])),TRUE); /* sets */
  scm__rc.d2149[781] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[205])),TRUE); /* clears */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[956]), scm__rc.d2149[781]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[957]), scm__rc.d2149[780]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[958]), scm__rc.d2149[426]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[961]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[962]), scm__rc.d2149[779]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[963]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[964]), scm__rc.d2149[3]);
  scm__rc.d2149[782] = Scm_MakeExtendedPair(scm__rc.d2149[779], SCM_OBJ(&scm__rc.d2150[958]), SCM_OBJ(&scm__rc.d2150[966]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[4] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[5] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[6] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[783]))[8] = scm__rc.d2149[547];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("logset+clear")), SCM_OBJ(&libnumlogset_2bclear__STUB), SCM_BINDING_INLINABLE);
  libnumlogset_2bclear__STUB.common.info = scm__rc.d2149[782];
  libnumlogset_2bclear__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[783]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[969]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[970]), scm__rc.d2149[614]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[971]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[972]), scm__rc.d2149[3]);
  scm__rc.d2149[792] = Scm_MakeExtendedPair(scm__rc.d2149[614], SCM_OBJ(&scm__rc.d2150[557]), SCM_OBJ(&scm__rc.d2150[974]));
  scm__rc.d2149[793] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[206])),TRUE); /* <ulong> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[794]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[794]))[4] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[794]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[794]))[6] = scm__rc.d2149[793];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("integer-length")), SCM_OBJ(&libnuminteger_length__STUB), SCM_BINDING_INLINABLE);
  libnuminteger_length__STUB.common.info = scm__rc.d2149[792];
  libnuminteger_length__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[794]);
  scm__rc.d2149[801] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[207])),TRUE); /* twos-exponent-factor */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[977]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[978]), scm__rc.d2149[801]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[979]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[980]), scm__rc.d2149[3]);
  scm__rc.d2149[802] = Scm_MakeExtendedPair(scm__rc.d2149[801], SCM_OBJ(&scm__rc.d2150[557]), SCM_OBJ(&scm__rc.d2150[982]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("twos-exponent-factor")), SCM_OBJ(&libnumtwos_exponent_factor__STUB), SCM_BINDING_INLINABLE);
  libnumtwos_exponent_factor__STUB.common.info = scm__rc.d2149[802];
  libnumtwos_exponent_factor__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[772]);
  scm__rc.d2149[803] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[208])),TRUE); /* twos-exponent */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[985]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[986]), scm__rc.d2149[803]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[987]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[988]), scm__rc.d2149[3]);
  scm__rc.d2149[804] = Scm_MakeExtendedPair(scm__rc.d2149[803], SCM_OBJ(&scm__rc.d2150[557]), SCM_OBJ(&scm__rc.d2150[990]));
  scm__rc.d2149[805] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[209])),TRUE); /* <integer>? */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[806]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[806]))[4] = scm__rc.d2149[547];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[806]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[806]))[6] = scm__rc.d2149[805];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("twos-exponent")), SCM_OBJ(&libnumtwos_exponent__STUB), SCM_BINDING_INLINABLE);
  libnumtwos_exponent__STUB.common.info = scm__rc.d2149[804];
  libnumtwos_exponent__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[806]);
  scm__rc.d2149[813] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[210])),TRUE); /* inexact-/ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[993]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[994]), scm__rc.d2149[813]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[995]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[996]), scm__rc.d2149[3]);
  scm__rc.d2149[814] = Scm_MakeExtendedPair(scm__rc.d2149[813], SCM_OBJ(&scm__rc.d2150[454]), SCM_OBJ(&scm__rc.d2150[998]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[815]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[815]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[815]))[5] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[815]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[815]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("inexact-/")), SCM_OBJ(&libnuminexact__2f__STUB), 0);
  libnuminexact__2f__STUB.common.info = scm__rc.d2149[814];
  libnuminexact__2f__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[815]);
  scm__rc.d2149[823] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[211])),TRUE); /* +. */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1001]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1002]), scm__rc.d2149[823]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1003]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1004]), scm__rc.d2149[3]);
  scm__rc.d2149[824] = Scm_MakeExtendedPair(scm__rc.d2149[823], SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[1006]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[825]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[825]))[4] = scm__rc.d2149[147];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[825]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[825]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("+.")), SCM_OBJ(&libnum_2b_2e__STUB), SCM_BINDING_INLINABLE);
  libnum_2b_2e__STUB.common.info = scm__rc.d2149[824];
  libnum_2b_2e__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[825]);
  scm__rc.d2149[832] = 
Scm_MakeFlonum(1.0);
  scm__rc.d2149[833] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[212])),TRUE); /* *. */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1009]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1010]), scm__rc.d2149[833]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1011]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1012]), scm__rc.d2149[3]);
  scm__rc.d2149[834] = Scm_MakeExtendedPair(scm__rc.d2149[833], SCM_OBJ(&scm__rc.d2150[258]), SCM_OBJ(&scm__rc.d2150[1014]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("*.")), SCM_OBJ(&libnum_2a_2e__STUB), SCM_BINDING_INLINABLE);
  libnum_2a_2e__STUB.common.info = scm__rc.d2149[834];
  libnum_2a_2e__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[825]);
  scm__rc.d2149[835] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[213])),TRUE); /* -. */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1017]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1018]), scm__rc.d2149[835]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1019]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1020]), scm__rc.d2149[3]);
  scm__rc.d2149[836] = Scm_MakeExtendedPair(scm__rc.d2149[835], SCM_OBJ(&scm__rc.d2150[454]), SCM_OBJ(&scm__rc.d2150[1022]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("-.")), SCM_OBJ(&libnum__2e__STUB), SCM_BINDING_INLINABLE);
  libnum__2e__STUB.common.info = scm__rc.d2149[836];
  libnum__2e__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[815]);
  scm__rc.d2149[837] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[214])),TRUE); /* /. */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1025]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1026]), scm__rc.d2149[837]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1027]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1028]), scm__rc.d2149[3]);
  scm__rc.d2149[838] = Scm_MakeExtendedPair(scm__rc.d2149[837], SCM_OBJ(&scm__rc.d2150[454]), SCM_OBJ(&scm__rc.d2150[1030]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("/.")), SCM_OBJ(&libnum_2f_2e__STUB), SCM_BINDING_INLINABLE);
  libnum_2f_2e__STUB.common.info = scm__rc.d2149[838];
  libnum_2f_2e__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[815]);
  scm__rc.d2149[839] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[215])),TRUE); /* clamp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1031]), scm__rc.d2149[175]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1032]), scm__rc.d2149[227]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1033]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1036]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1037]), scm__rc.d2149[839]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1038]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1039]), scm__rc.d2149[3]);
  scm__rc.d2149[840] = Scm_MakeExtendedPair(scm__rc.d2149[839], SCM_OBJ(&scm__rc.d2150[1033]), SCM_OBJ(&scm__rc.d2150[1041]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("clamp")), SCM_OBJ(&libnumclamp__STUB), SCM_BINDING_INLINABLE);
  libnumclamp__STUB.common.info = scm__rc.d2149[840];
  libnumclamp__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[815]);
  scm__rc.d2149[841] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[216])),TRUE); /* quotient&remainder */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1044]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1045]), scm__rc.d2149[841]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1046]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1047]), scm__rc.d2149[3]);
  scm__rc.d2149[842] = Scm_MakeExtendedPair(scm__rc.d2149[841], SCM_OBJ(&scm__rc.d2150[497]), SCM_OBJ(&scm__rc.d2150[1049]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[843]))[3] = scm__rc.d2149[48];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[843]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[843]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[843]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[843]))[7] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[843]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("quotient&remainder")), SCM_OBJ(&libnumquotient_26remainder__STUB), 0);
  libnumquotient_26remainder__STUB.common.info = scm__rc.d2149[842];
  libnumquotient_26remainder__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[843]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[852] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[217])),TRUE); /* a */
  scm__rc.d2149[853] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[218])),TRUE); /* b */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1050]), scm__rc.d2149[853]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1051]), scm__rc.d2149[852]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1054]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1055]), scm__rc.d2149[581]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1056]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1057]), scm__rc.d2149[3]);
  scm__rc.d2149[854] = Scm_MakeExtendedPair(scm__rc.d2149[581], SCM_OBJ(&scm__rc.d2150[1051]), SCM_OBJ(&scm__rc.d2150[1059]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[4] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[5] = scm__rc.d2149[271];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[7] = scm__rc.d2149[30];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("make-rectangular")), SCM_OBJ(&libnummake_rectangular__STUB), SCM_BINDING_INLINABLE);
  libnummake_rectangular__STUB.common.info = scm__rc.d2149[854];
  libnummake_rectangular__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[855]);
  scm__rc.d2149[863] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[219])),TRUE); /* t */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1060]), scm__rc.d2149[863]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1061]), scm__rc.d2149[732]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1064]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1065]), scm__rc.d2149[572]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1066]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1067]), scm__rc.d2149[3]);
  scm__rc.d2149[864] = Scm_MakeExtendedPair(scm__rc.d2149[572], SCM_OBJ(&scm__rc.d2150[1061]), SCM_OBJ(&scm__rc.d2150[1069]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("make-polar")), SCM_OBJ(&libnummake_polar__STUB), SCM_BINDING_INLINABLE);
  libnummake_polar__STUB.common.info = scm__rc.d2149[864];
  libnummake_polar__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[855]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1072]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1073]), scm__rc.d2149[568]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1074]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1075]), scm__rc.d2149[3]);
  scm__rc.d2149[865] = Scm_MakeExtendedPair(scm__rc.d2149[568], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[1077]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[866]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[866]))[4] = scm__rc.d2149[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[866]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[866]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("real-part")), SCM_OBJ(&libnumreal_part__STUB), SCM_BINDING_INLINABLE);
  libnumreal_part__STUB.common.info = scm__rc.d2149[865];
  libnumreal_part__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[866]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1080]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1081]), scm__rc.d2149[570]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1082]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1083]), scm__rc.d2149[3]);
  scm__rc.d2149[873] = Scm_MakeExtendedPair(scm__rc.d2149[570], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[1085]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("imag-part")), SCM_OBJ(&libnumimag_part__STUB), SCM_BINDING_INLINABLE);
  libnumimag_part__STUB.common.info = scm__rc.d2149[873];
  libnumimag_part__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[866]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1088]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1089]), scm__rc.d2149[583]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1090]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1091]), scm__rc.d2149[3]);
  scm__rc.d2149[874] = Scm_MakeExtendedPair(scm__rc.d2149[583], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[1093]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[875]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[875]))[4] = scm__rc.d2149[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[875]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[875]))[6] = scm__rc.d2149[30];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("magnitude")), SCM_OBJ(&libnummagnitude__STUB), SCM_BINDING_INLINABLE);
  libnummagnitude__STUB.common.info = scm__rc.d2149[874];
  libnummagnitude__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[875]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1096]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1097]), scm__rc.d2149[585]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1098]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1099]), scm__rc.d2149[3]);
  scm__rc.d2149[882] = Scm_MakeExtendedPair(scm__rc.d2149[585], SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[1101]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[883]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[883]))[4] = scm__rc.d2149[30];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[883]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[883]))[6] = scm__rc.d2149[271];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("angle")), SCM_OBJ(&libnumangle__STUB), SCM_BINDING_INLINABLE);
  libnumangle__STUB.common.info = scm__rc.d2149[882];
  libnumangle__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[883]);
  scm__rc.d2149[890] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[220])),TRUE); /* wraparound */
  scm__rc.d2149[891] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[221])),TRUE); /* high */
  scm__rc.d2149[892] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[222])),TRUE); /* low */
  scm__rc.d2149[893] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[223])),TRUE); /* both */
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[1056] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[224])),TRUE); /* define-inline */
  scm__rc.d2149[1057] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[225])),TRUE); /* recn */
  scm__rc.d2149[1058] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[226])),TRUE); /* define-in-module */
  scm__rc.d2149[1059] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[227])),TRUE); /* lcm2 */
  scm__rc.d2149[1060] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[228])),TRUE); /* u */
  scm__rc.d2149[1061] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[229])),TRUE); /* g */
  scm__rc.d2149[1062] = 
SCM_NAN;
  scm__rc.d2149[1063] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[230])),TRUE); /* ns */
  scm__rc.d2149[1064] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[231])),TRUE); /* ds */
  scm__rc.d2149[1065] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[232])),TRUE); /* dr */
  scm__rc.d2149[1066] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[233])),TRUE); /* receive */
  scm__rc.d2149[1067] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[234])),TRUE); /* nr */
  scm__rc.d2149[1068] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[235])),TRUE); /* nq */
  scm__rc.d2149[1069] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[236])),TRUE); /* dq */
  scm__rc.d2149[1070] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[237])),TRUE); /* if-let1 */
  scm__rc.d2149[1071] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[238])),TRUE); /* s */
  scm__rc.d2149[1072] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[239])),TRUE); /* s2 */
  scm__rc.d2149[1073] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[240])),TRUE); /* values */
  scm__rc.d2149[1074] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[241])),TRUE); /* s2+ */
  scm__rc.d2149[1075] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[242])),TRUE); /* ik */
  scm__rc.d2149[1076] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[243])),TRUE); /* ry */
  scm__rc.d2149[1077] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[244])),TRUE); /* xn */
  scm__rc.d2149[1078] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[245])),TRUE); /* xd */
  scm__rc.d2149[1079] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[246])),TRUE); /* and-let* */
  scm__rc.d2149[1080] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[247])),TRUE); /* r2 */
  scm__rc.d2149[1081] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[248])),TRUE); /* delta */
  scm__rc.d2149[1082] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[249])),TRUE); /* err */
  scm__rc.d2149[1083] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[250])),TRUE); /* deliv */
  scm__rc.d2149[1084] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[251])),TRUE); /* let* */
  scm__rc.d2149[1085] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[252])),TRUE); /* iz */
  scm__rc.d2149[1086] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[253])),TRUE); /* zz */
}
