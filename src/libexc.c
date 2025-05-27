/* Generated automatically from libexc.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/exception.h"
static unsigned char uvector__00001[] = {
 0u, 3u, 134u, 6u, 6u, 104u, 2u, 1u, 36u, 112u, 144u, 192u, 144u, 9u,
28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u,
3u, 2u, 96u, 56u, 72u,};
static ScmObj libexcwith_error_handler(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libexcwith_error_handler__STUB, 2, 1,SCM_FALSE,libexcwith_error_handler, NULL, NULL);

static ScmObj libexcreport_error(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libexcreport_error__STUB, 1, 2,SCM_FALSE,libexcreport_error, NULL, NULL);

static ScmObj libexccondition_type_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libexccondition_type_name__STUB, 1, 0,SCM_FALSE,libexccondition_type_name, NULL, NULL);

static unsigned char uvector__00002[] = {
 0u, 3u, 154u, 6u, 4u, 128u, 136u, 230u, 97u, 129u, 32u, 34u, 57u,
128u, 96u, 128u, 224u, 64u, 195u, 2u, 146u, 71u, 45u, 12u, 9u, 2u,
17u, 202u, 67u, 4u, 13u, 2u, 64u, 228u, 142u, 78u, 24u, 18u, 7u, 35u,
147u, 6u, 4u, 129u, 8u, 228u, 129u, 129u, 48u, 229u, 35u, 145u, 6u,
6u, 80u, 224u, 32u, 136u, 16u, 132u, 195u, 148u, 132u, 193u, 194u, 2u,
36u, 114u, 0u, 192u, 152u, 221u, 17u, 199u, 195u, 2u, 64u, 132u, 113u,
208u, 192u, 152u, 221u, 17u, 198u, 195u, 3u, 60u, 18u, 24u, 67u, 24u,
129u, 32u, 161u, 1u, 55u, 18u, 19u, 26u, 66u, 73u, 28u, 84u, 48u, 38u,
85u, 164u, 113u, 16u, 192u, 215u, 5u, 146u, 56u, 128u, 96u, 72u, 44u,
142u, 30u, 24u, 25u, 0u, 128u, 131u, 40u, 107u, 131u, 11u, 112u, 104u,
131u, 9u, 34u, 11u, 12u, 161u, 174u, 12u, 33u, 133u, 72u, 106u, 131u,
9u, 36u, 55u, 132u, 205u, 188u, 38u, 85u, 164u, 50u, 42u, 102u, 14u,
72u, 225u, 193u, 129u, 52u, 35u, 64u, 142u, 18u, 24u, 19u, 66u, 33u,
136u, 225u, 1u, 129u, 32u, 210u, 56u, 48u, 96u, 77u, 8u, 16u, 35u,
128u, 134u, 4u, 207u, 192u, 142u, 0u, 24u, 18u, 13u, 33u, 136u, 48u,
38u, 89u, 164u, 128u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 7u, 64u, 144u, 80u, 128u, 155u, 137u, 12u,
161u, 192u, 65u, 16u, 33u, 16u, 52u, 9u, 3u, 146u, 32u, 56u, 16u, 48u,
192u, 164u, 192u, 68u, 145u, 194u, 67u, 3u, 24u, 76u, 12u, 83u, 6u,
2u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u,
6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 167u, 134u, 8u, 60u, 48u, 134u, 238u, 3u, 8u, 18u, 31u, 97u,
24u, 74u, 19u, 36u, 142u, 156u, 24u, 19u, 5u, 162u, 58u, 104u, 96u,
72u, 76u, 142u, 148u, 24u, 18u, 17u, 35u, 162u, 134u, 8u, 60u, 48u,
134u, 238u, 3u, 8u, 18u, 31u, 97u, 24u, 80u, 66u, 176u, 153u, 36u,
142u, 136u, 24u, 19u, 22u, 34u, 58u, 16u, 96u, 76u, 96u, 72u, 232u,
33u, 129u, 33u, 50u, 57u, 248u, 96u, 76u, 96u, 72u, 231u, 129u, 129u,
33u, 18u, 57u, 184u, 96u, 131u, 195u, 8u, 110u, 224u, 48u, 129u, 33u,
246u, 17u, 133u, 132u, 43u, 9u, 145u, 11u, 194u, 97u, 134u, 5u, 36u,
146u, 57u, 176u, 96u, 76u, 181u, 136u, 230u, 129u, 129u, 51u, 15u,
35u, 152u, 134u, 4u, 132u, 200u, 229u, 225u, 129u, 51u, 15u, 35u,
150u, 134u, 4u, 203u, 212u, 142u, 88u, 24u, 18u, 19u, 35u, 149u, 6u,
4u, 203u, 212u, 142u, 78u, 24u, 18u, 17u, 35u, 145u, 134u, 1u, 3u,
66u, 112u, 57u, 16u, 196u, 35u, 11u, 4u, 203u, 212u, 38u, 97u, 228u,
145u, 200u, 67u, 2u, 104u, 76u, 57u, 28u, 124u, 48u, 36u, 14u, 71u,
30u, 12u, 9u, 9u, 145u, 199u, 3u, 2u, 104u, 76u, 57u, 28u, 104u, 48u,
7u, 145u, 4u, 66u, 100u, 136u, 98u, 17u, 132u, 161u, 50u, 72u, 227u,
1u, 129u, 52u, 48u, 124u, 142u, 46u, 24u, 18u, 19u, 35u, 138u, 134u,
4u, 208u, 193u, 242u, 56u, 152u, 96u, 134u, 67u, 12u, 34u, 97u, 168u,
108u, 145u, 196u, 131u, 2u, 66u, 36u, 113u, 0u, 192u, 144u, 209u, 28u,
48u, 48u, 38u, 135u, 12u, 17u, 194u, 67u, 2u, 66u, 36u, 112u, 112u,
192u, 202u, 33u, 200u, 110u, 26u, 48u, 216u, 77u, 14u, 24u, 36u, 112u,
80u, 192u, 154u, 32u, 148u, 71u, 3u, 12u, 9u, 13u, 17u, 192u, 131u,
2u, 66u, 36u, 112u, 0u, 192u, 154u, 32u, 148u, 67u, 16u, 96u, 99u,
16u, 156u, 34u, 68u, 59u, 8u, 195u, 68u, 54u, 4u, 208u, 193u, 16u,
154u, 19u, 8u, 26u, 68u, 49u, 8u, 194u, 129u, 49u, 129u, 36u, 146u,
64u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 15u, 66u, 112u, 137u, 16u, 236u, 35u, 13u,
16u, 216u, 3u, 200u, 130u, 33u, 50u, 68u, 49u, 8u, 194u, 80u, 153u,
32u, 64u, 208u, 156u, 14u, 68u, 49u, 8u, 194u, 194u, 21u, 132u, 200u,
133u, 225u, 48u, 195u, 2u, 146u, 72u, 105u, 16u, 196u, 35u, 10u, 8u,
86u, 19u, 36u, 146u, 71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 18u, 8u,
224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u,
24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 32u, 136u, 73u, 28u, 4u, 48u, 36u, 66u,
71u, 0u, 12u, 9u, 16u, 16u, 196u, 24u, 24u, 196u, 64u, 66u, 96u, 56u,
73u, 0u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 130u, 134u, 8u, 138u, 35u, 137u, 9u, 28u, 16u, 48u, 36u, 72u,
71u, 0u, 12u, 9u, 128u, 225u, 12u, 65u, 129u, 140u, 64u, 132u, 54u,
6u, 144u, 152u, 14u, 55u, 18u, 73u, 0u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 129u, 6u, 8u, 150u, 36u, 132u, 73u, 28u, 4u, 48u, 36u, 34u,
71u, 0u, 12u, 9u, 18u, 16u, 196u, 24u, 24u, 212u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 133u, 6u, 8u, 152u, 49u, 136u, 16u, 134u, 192u, 210u, 34u,
40u, 142u, 36u, 45u, 196u, 144u, 198u, 162u, 37u, 137u, 33u, 18u, 98u,
119u, 226u, 71u, 3u, 12u, 9u, 132u, 121u, 28u, 0u, 48u, 38u, 5u, 36u,
49u, 6u, 6u, 49u, 18u, 17u, 20u, 8u, 16u, 38u, 9u, 228u, 38u, 19u,
196u, 146u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 159u, 134u, 8u, 166u, 42u, 138u, 201u, 28u, 248u, 48u, 36u,
86u, 71u, 61u, 12u, 9u, 21u, 17u, 206u, 195u, 4u, 83u, 21u, 69u, 132u,
142u, 116u, 24u, 18u, 44u, 35u, 156u, 134u, 4u, 138u, 136u, 230u,
225u, 129u, 48u, 173u, 35u, 155u, 6u, 8u, 180u, 69u, 113u, 97u, 12u,
162u, 31u, 132u, 226u, 226u, 34u, 241u, 24u, 67u, 241u, 140u, 66u,
68u, 47u, 9u, 134u, 24u, 200u, 146u, 35u, 48u, 194u, 164u, 62u, 194u,
100u, 144u, 152u, 86u, 132u, 192u, 112u, 145u, 205u, 67u, 2u, 100u,
100u, 71u, 52u, 12u, 9u, 146u, 137u, 28u, 204u, 48u, 36u, 38u, 71u,
46u, 12u, 9u, 142u, 17u, 28u, 176u, 48u, 38u, 63u, 164u, 114u, 144u,
192u, 144u, 153u, 28u, 156u, 48u, 38u, 63u, 164u, 114u, 96u, 192u,
145u, 161u, 28u, 144u, 48u, 38u, 56u, 68u, 114u, 32u, 192u, 152u,
201u, 145u, 200u, 67u, 2u, 99u, 60u, 71u, 31u, 12u, 9u, 23u, 17u,
199u, 131u, 2u, 66u, 100u, 113u, 192u, 192u, 240u, 32u, 136u, 76u,
132u, 197u, 176u, 145u, 198u, 131u, 2u, 104u, 80u, 17u, 28u, 100u,
48u, 36u, 38u, 71u, 23u, 12u, 9u, 161u, 64u, 68u, 113u, 80u, 193u,
12u, 134u, 24u, 68u, 195u, 80u, 217u, 35u, 138u, 6u, 4u, 132u, 72u,
226u, 65u, 129u, 33u, 162u, 56u, 112u, 96u, 77u, 11u, 159u, 35u, 133u,
134u, 4u, 132u, 72u, 225u, 33u, 129u, 148u, 67u, 144u, 220u, 52u, 97u,
176u, 154u, 23u, 62u, 72u, 224u, 225u, 129u, 52u, 55u, 68u, 142u, 10u,
24u, 18u, 26u, 35u, 130u, 6u, 4u, 132u, 72u, 224u, 65u, 129u, 52u,
55u, 68u, 134u, 32u, 192u, 198u, 33u, 56u, 68u, 134u, 97u, 21u, 68u,
132u, 69u, 2u, 4u, 13u, 34u, 34u, 136u, 226u, 66u, 220u, 72u, 137u,
98u, 72u, 68u, 146u, 33u, 216u, 70u, 26u, 33u, 52u, 39u, 92u, 146u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 26u, 194u, 112u, 137u, 12u, 194u, 42u,
137u, 8u, 138u, 4u, 8u, 26u, 68u, 69u, 17u, 196u, 133u, 184u, 145u,
18u, 196u, 144u, 137u, 36u, 67u, 176u, 140u, 52u, 67u, 192u, 130u,
33u, 50u, 34u, 209u, 21u, 197u, 132u, 50u, 136u, 126u, 19u, 139u,
136u, 139u, 196u, 97u, 15u, 198u, 49u, 9u, 16u, 188u, 38u, 24u, 99u,
34u, 72u, 140u, 195u, 10u, 144u, 251u, 9u, 146u, 68u, 83u, 21u, 69u,
132u, 69u, 49u, 84u, 86u, 73u, 36u, 112u, 176u, 192u, 198u, 19u, 3u,
20u, 193u, 32u, 142u, 18u, 24u, 19u, 1u, 194u, 56u, 32u, 96u, 76u, 7u,
8u, 224u, 65u, 129u, 48u, 28u, 36u,};
static ScmObj libexc_25type_error(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libexc_25type_error__STUB, 3, 0,SCM_FALSE,libexc_25type_error, NULL, NULL);

static unsigned char uvector__00012[] = {
 0u, 3u, 134u, 6u, 8u, 216u, 70u, 241u, 193u, 17u, 188u, 114u, 99u,
162u, 71u, 11u, 12u, 9u, 29u, 17u, 194u, 3u, 2u, 96u, 134u, 71u, 7u,
12u, 9u, 28u, 145u, 193u, 67u, 2u, 96u, 134u, 71u, 3u, 12u, 9u, 129u,
73u, 28u, 8u, 48u, 36u, 112u, 71u, 0u, 12u, 9u, 129u, 73u, 12u, 65u,
129u, 140u, 71u, 17u, 204u, 116u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 134u, 6u, 8u, 238u, 60u, 16u, 204u, 113u, 28u, 199u, 68u,
70u, 194u, 55u, 142u, 8u, 141u, 227u, 147u, 29u, 18u, 71u, 9u, 12u,
12u, 97u, 48u, 61u, 76u, 23u, 136u, 224u, 225u, 129u, 48u, 28u, 35u,
129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static ScmObj libexccurrent_exception_handler(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libexccurrent_exception_handler__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libexccurrent_exception_handler, NULL, NULL);

static ScmObj libexcexception_handler_stack(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libexcexception_handler_stack__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libexcexception_handler_stack, NULL, NULL);

static ScmObj libexcwith_exception_handler(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libexcwith_exception_handler__STUB, 2, 0,SCM_FALSE,libexcwith_exception_handler, NULL, NULL);

static ScmObj libexc_25raise(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libexc_25raise__STUB, 1, 2,SCM_FALSE,libexc_25raise, NULL, NULL);

static ScmObj libexc_25reraise(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libexc_25reraise__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libexc_25reraise, NULL, NULL);

static unsigned char uvector__00014[] = {
 0u, 3u, 128u, 134u, 8u, 246u, 36u, 36u, 112u, 0u, 192u, 145u, 33u,
12u, 65u, 129u, 140u, 68u, 132u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 134u, 6u, 8u, 238u, 60u, 17u, 244u, 72u, 68u, 123u, 18u, 18u,
71u, 9u, 12u, 12u, 97u, 48u, 61u, 76u, 18u, 136u, 224u, 225u, 129u,
48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u,
64u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 128u, 134u, 8u, 250u, 36u, 36u, 112u, 0u, 192u, 145u, 33u,
12u, 65u, 129u, 140u, 68u, 132u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 134u, 6u, 8u, 238u, 60u, 17u, 252u, 72u, 68u, 125u, 18u, 18u,
71u, 9u, 12u, 12u, 97u, 48u, 61u, 76u, 18u, 136u, 224u, 225u, 129u,
48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u,
64u,};
static ScmObj libexcconditionP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libexcconditionP__STUB, 1, 0,SCM_FALSE,libexcconditionP, NULL, NULL);

static ScmObj libexccondition_has_typeP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libexccondition_has_typeP__STUB, 2, 0,SCM_FALSE,libexccondition_has_typeP, NULL, NULL);

static ScmObj libexcmake_compound_condition(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libexcmake_compound_condition__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libexcmake_compound_condition, NULL, NULL);

static unsigned char uvector__00018[] = {
 0u, 3u, 142u, 134u, 9u, 2u, 65u, 144u, 164u, 57u, 16u, 62u, 200u,
166u, 70u, 145u, 201u, 28u, 112u, 48u, 36u, 142u, 71u, 24u, 12u, 9u,
130u, 137u, 28u, 92u, 48u, 36u, 138u, 71u, 20u, 12u, 9u, 33u, 145u,
196u, 3u, 2u, 72u, 36u, 112u, 224u, 192u, 207u, 36u, 72u, 164u, 142u,
26u, 24u, 18u, 69u, 35u, 132u, 134u, 4u, 197u, 188u, 142u, 10u, 24u,
27u, 196u, 147u, 34u, 144u, 152u, 183u, 146u, 56u, 24u, 96u, 76u,
131u, 72u, 224u, 65u, 129u, 36u, 82u, 56u, 0u, 96u, 76u, 131u, 72u,
98u, 12u, 12u, 98u, 67u, 145u, 100u, 114u, 19u, 32u, 32u, 152u, 14u,
18u, 64u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 37u, 72u, 114u, 44u, 142u, 67u, 120u,
146u, 100u, 82u, 25u, 228u, 137u, 20u, 145u, 32u, 72u, 50u, 20u, 135u,
34u, 7u, 217u, 20u, 200u, 210u, 57u, 36u, 112u, 144u, 192u, 198u, 19u,
3u, 20u, 193u, 72u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u,
7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 144u, 73u, 28u, 4u, 48u, 36u,
130u, 71u, 0u, 12u, 9u, 37u, 144u, 196u, 24u, 24u, 196u, 150u, 66u,
96u, 56u, 73u, 0u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 36u, 201u, 100u, 67u, 242u, 92u, 130u,
73u, 28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u,
4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u,
9u, 0u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 158u, 6u, 9u, 50u, 77u, 147u, 131u, 68u, 158u, 73u, 28u,
236u, 48u, 38u, 7u, 164u, 115u, 160u, 192u, 146u, 113u, 28u, 212u,
48u, 56u, 135u, 201u, 60u, 146u, 57u, 160u, 96u, 76u, 53u, 8u, 230u,
97u, 129u, 36u, 242u, 57u, 144u, 96u, 148u, 34u, 64u, 209u, 39u, 144u,
239u, 39u, 146u, 71u, 49u, 12u, 9u, 140u, 121u, 28u, 192u, 48u, 36u,
158u, 71u, 46u, 12u, 9u, 139u, 185u, 28u, 180u, 48u, 36u, 72u, 71u,
43u, 12u, 2u, 81u, 137u, 3u, 68u, 158u, 72u, 76u, 88u, 2u, 97u, 146u,
72u, 229u, 33u, 129u, 50u, 118u, 35u, 148u, 6u, 4u, 202u, 52u, 142u,
78u, 24u, 18u, 36u, 35u, 146u, 134u, 4u, 201u, 216u, 142u, 68u, 24u,
25u, 229u, 41u, 76u, 145u, 200u, 67u, 2u, 74u, 100u, 113u, 208u, 192u,
214u, 26u, 164u, 242u, 72u, 227u, 129u, 129u, 52u, 32u, 72u, 142u,
54u, 24u, 18u, 36u, 35u, 140u, 134u, 6u, 185u, 60u, 145u, 198u, 3u,
2u, 73u, 228u, 113u, 96u, 192u, 146u, 153u, 28u, 84u, 48u, 50u, 1u,
18u, 9u, 2u, 78u, 36u, 134u, 71u, 16u, 36u, 249u, 76u, 144u, 216u, 2u,
104u, 74u, 36u, 72u, 64u, 77u, 8u, 7u, 9u, 157u, 17u, 9u, 147u, 152u,
105u, 9u, 128u, 225u, 36u, 145u, 196u, 195u, 2u, 104u, 84u, 33u, 28u,
72u, 48u, 36u, 156u, 71u, 16u, 12u, 9u, 161u, 80u, 132u, 112u, 224u,
192u, 207u, 42u, 73u, 196u, 142u, 26u, 24u, 18u, 78u, 35u, 132u, 134u,
4u, 208u, 220u, 242u, 56u, 40u, 96u, 111u, 18u, 76u, 156u, 66u, 104u,
110u, 121u, 35u, 129u, 134u, 4u, 208u, 241u, 50u, 56u, 16u, 96u, 73u,
56u, 142u, 0u, 24u, 19u, 67u, 196u, 200u, 98u, 12u, 12u, 98u, 78u,
73u, 76u, 38u, 135u, 132u, 4u, 208u, 164u, 146u, 72u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 42u, 201u, 201u, 41u, 134u, 241u, 36u,
201u, 196u, 51u, 202u, 146u, 113u, 33u, 144u, 8u, 144u, 72u, 18u,
113u, 36u, 50u, 56u, 129u, 39u, 202u, 100u, 134u, 192u, 26u, 228u,
243u, 18u, 16u, 26u, 195u, 84u, 158u, 72u, 103u, 148u, 165u, 50u, 64u,
148u, 98u, 64u, 209u, 39u, 146u, 37u, 8u, 144u, 52u, 73u, 228u, 59u,
201u, 228u, 135u, 16u, 249u, 39u, 146u, 67u, 72u, 147u, 36u, 217u,
56u, 52u, 73u, 228u, 146u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 24u,
166u, 9u, 36u, 112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u,
56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 129u, 6u, 9u, 90u, 36u, 149u, 201u, 28u, 4u, 48u, 36u, 174u,
71u, 0u, 12u, 9u, 18u, 16u, 196u, 24u, 24u, 196u, 73u, 43u, 144u,
152u, 14u, 18u, 64u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 1u, 196u, 146u, 185u, 18u, 180u, 73u, 43u,
146u, 71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 18u, 8u, 224u, 225u,
129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u,
194u, 64u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 157u, 6u, 7u, 16u, 213u, 44u, 18u, 71u, 56u, 12u, 9u, 129u,
57u, 28u, 212u, 48u, 74u, 18u, 204u, 180u, 37u, 104u, 146u, 90u, 36u,
142u, 104u, 24u, 19u, 10u, 162u, 57u, 152u, 96u, 73u, 104u, 142u,
100u, 24u, 18u, 36u, 35u, 152u, 134u, 4u, 150u, 136u, 230u, 1u, 129u,
37u, 146u, 57u, 112u, 96u, 120u, 18u, 220u, 73u, 45u, 16u, 152u, 68u,
146u, 57u, 96u, 96u, 76u, 114u, 200u, 229u, 97u, 129u, 37u, 162u, 57u,
80u, 96u, 72u, 144u, 142u, 80u, 24u, 19u, 28u, 178u, 57u, 56u, 96u,
100u, 2u, 90u, 18u, 224u, 104u, 150u, 9u, 36u, 38u, 56u, 1u, 48u, 28u,
36u, 114u, 80u, 192u, 153u, 117u, 145u, 201u, 3u, 2u, 101u, 240u, 71u,
34u, 12u, 9u, 151u, 89u, 28u, 132u, 48u, 36u, 178u, 71u, 31u, 12u,
13u, 114u, 193u, 35u, 143u, 6u, 4u, 150u, 8u, 227u, 97u, 130u, 93u,
147u, 137u, 28u, 104u, 48u, 36u, 156u, 71u, 24u, 12u, 9u, 161u, 25u,
196u, 113u, 112u, 192u, 200u, 4u, 178u, 36u, 9u, 56u, 146u, 25u, 28u,
64u, 150u, 2u, 104u, 70u, 113u, 33u, 148u, 38u, 132u, 9u, 203u, 33u,
50u, 208u, 36u, 145u, 197u, 67u, 2u, 104u, 80u, 209u, 28u, 80u, 48u,
36u, 156u, 71u, 18u, 12u, 9u, 161u, 67u, 68u, 113u, 0u, 193u, 38u,
75u, 210u, 116u, 72u, 72u, 225u, 225u, 129u, 34u, 66u, 56u, 112u, 96u,
73u, 56u, 142u, 20u, 24u, 19u, 67u, 53u, 200u, 224u, 193u, 129u, 188u,
64u, 209u, 36u, 156u, 66u, 104u, 102u, 185u, 35u, 130u, 6u, 4u, 208u,
233u, 18u, 56u, 24u, 96u, 73u, 56u, 142u, 4u, 24u, 18u, 36u, 35u,
128u, 6u, 4u, 208u, 233u, 18u, 24u, 131u, 3u, 24u, 137u, 36u, 226u,
19u, 67u, 161u, 130u, 104u, 78u, 249u, 36u,};
static unsigned char uvector__00027[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 47u, 196u, 146u, 113u, 13u, 226u, 6u,
137u, 36u, 226u, 36u, 201u, 122u, 78u, 137u, 9u, 12u, 128u, 75u, 34u,
64u, 147u, 137u, 33u, 145u, 196u, 9u, 96u, 75u, 178u, 113u, 36u, 50u,
134u, 185u, 96u, 203u, 33u, 144u, 9u, 104u, 75u, 129u, 162u, 88u, 36u,
144u, 240u, 37u, 184u, 146u, 90u, 34u, 80u, 150u, 101u, 161u, 43u,
68u, 146u, 209u, 36u, 56u, 134u, 169u, 96u, 146u, 73u, 36u, 112u,
144u, 192u, 198u, 19u, 3u, 20u, 193u, 32u, 142u, 14u, 24u, 19u, 1u,
194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00028[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 130u, 1u, 36u, 112u, 144u, 192u, 144u,
9u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00029[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 134u, 7u, 36u, 112u, 144u, 192u, 144u,
57u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00030[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 138u, 99u, 36u, 112u, 144u, 192u, 147u,
25u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00031[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 146u, 101u, 36u, 112u, 144u, 192u, 147u,
41u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00032[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 154u, 103u, 36u, 112u, 144u, 192u, 147u,
57u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00033[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 162u, 105u, 36u, 112u, 144u, 192u, 147u,
73u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00034[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 170u, 107u, 36u, 112u, 144u, 192u, 147u,
89u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00035[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 178u, 109u, 36u, 112u, 144u, 192u, 147u,
105u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00036[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 186u, 111u, 36u, 112u, 144u, 192u, 147u,
121u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00037[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 194u, 113u, 36u, 112u, 144u, 192u, 147u,
137u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00038[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 129u, 201u, 28u, 4u, 48u, 36u,
14u, 71u, 0u, 12u, 9u, 37u, 144u, 196u, 24u, 24u, 196u, 150u, 66u,
96u, 56u, 73u, 0u,};
static unsigned char uvector__00039[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 57u, 73u, 100u, 67u, 242u, 92u, 14u, 73u,
28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u, 4u,
192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u,
0u,};
static unsigned char uvector__00040[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 152u, 201u, 28u, 4u, 48u, 36u,
198u, 71u, 0u, 12u, 9u, 37u, 144u, 196u, 24u, 24u, 196u, 150u, 66u,
96u, 56u, 73u, 0u,};
static unsigned char uvector__00041[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 57u, 201u, 100u, 67u, 242u, 92u, 198u,
73u, 28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u,
4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u,
9u, 0u,};
static unsigned char uvector__00042[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 153u, 73u, 28u, 4u, 48u, 36u,
202u, 71u, 0u, 12u, 9u, 37u, 144u, 196u, 24u, 24u, 196u, 150u, 66u,
96u, 56u, 73u, 0u,};
static unsigned char uvector__00043[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 58u, 73u, 100u, 67u, 242u, 92u, 202u, 73u,
28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u, 4u,
192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u,
0u,};
static unsigned char uvector__00044[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 214u, 118u, 36u, 112u, 144u, 192u, 147u,
177u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00045[] = {
 0u, 3u, 130u, 134u, 9u, 2u, 118u, 157u, 231u, 130u, 71u, 4u, 12u, 9u,
60u, 17u, 192u, 3u, 2u, 78u, 196u, 49u, 6u, 6u, 49u, 60u, 16u, 152u,
14u, 18u, 64u,};
static unsigned char uvector__00046[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 60u, 207u, 4u, 72u, 19u, 180u, 239u, 60u,
18u, 71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 15u, 136u, 224u, 225u,
129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u,
194u, 64u,};
static unsigned char uvector__00047[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 157u, 137u, 28u, 4u, 48u, 36u,
236u, 71u, 0u, 12u, 9u, 37u, 144u, 196u, 24u, 24u, 196u, 150u, 66u,
96u, 56u, 73u, 0u,};
static unsigned char uvector__00048[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 61u, 73u, 100u, 67u, 242u, 92u, 236u, 73u,
28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u, 4u,
192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u,
0u,};
static unsigned char uvector__00049[] = {
 0u, 3u, 140u, 6u, 8u, 94u, 123u, 12u, 51u, 225u, 36u, 113u, 80u,
192u, 147u, 217u, 28u, 76u, 48u, 67u, 33u, 134u, 123u, 51u, 180u, 54u,
72u, 226u, 65u, 129u, 39u, 178u, 56u, 128u, 96u, 73u, 216u, 142u, 24u,
24u, 19u, 9u, 18u, 56u, 72u, 96u, 73u, 236u, 142u, 14u, 24u, 25u, 68u,
57u, 13u, 206u, 198u, 27u, 9u, 132u, 137u, 35u, 130u, 134u, 4u, 198u,
116u, 142u, 6u, 24u, 18u, 118u, 35u, 129u, 6u, 4u, 158u, 200u, 224u,
1u, 129u, 49u, 157u, 33u, 136u, 48u, 49u, 137u, 236u, 136u, 118u,
123u, 157u, 136u, 76u, 7u, 9u, 32u,};
static unsigned char uvector__00050[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 62u, 207u, 100u, 67u, 179u, 220u, 236u,
68u, 47u, 61u, 134u, 25u, 240u, 146u, 71u, 9u, 12u, 12u, 97u, 48u,
49u, 76u, 15u, 136u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u,
192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static ScmObj thread_exception_allocate(ScmClass* klass,ScmObj G2160 SCM_UNUSED);
static void thread_exception_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2162 SCM_UNUSED);
static void uncaught_exception_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2164 SCM_UNUSED);
static void terminated_thread_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2166 SCM_UNUSED);
static unsigned char uvector__00051[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 250u, 127u, 36u, 112u, 144u, 192u, 147u,
249u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00052[] = {
 0u, 3u, 132u, 6u, 9u, 2u, 127u, 161u, 0u, 20u, 32u, 36u, 145u, 193u,
131u, 2u, 96u, 134u, 71u, 4u, 12u, 9u, 130u, 25u, 28u, 0u, 48u, 36u,
254u, 67u, 16u, 96u, 99u, 80u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00053[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 4u, 68u, 129u, 63u, 208u, 128u, 10u,
16u, 18u, 73u, 28u, 36u, 48u, 49u, 170u, 96u, 116u, 71u, 7u, 12u, 9u,
128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u,
18u,};
static unsigned char uvector__00054[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 159u, 201u, 28u, 4u, 48u, 36u,
254u, 71u, 0u, 12u, 9u, 37u, 144u, 196u, 24u, 24u, 196u, 150u, 66u,
96u, 56u, 73u, 0u,};
static unsigned char uvector__00055[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 7u, 37u, 145u, 15u, 201u, 115u, 249u,
36u, 112u, 144u, 192u, 198u, 19u, 3u, 116u, 193u, 16u, 142u, 14u, 24u,
19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u,
36u,};
static unsigned char uvector__00056[] = {
 0u, 3u, 134u, 6u, 6u, 106u, 16u, 74u, 16u, 82u, 71u, 9u, 12u, 9u,
66u, 10u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u,
112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00057[] = {
 0u, 3u, 130u, 134u, 9u, 2u, 132u, 22u, 132u, 26u, 75u, 36u, 112u,
64u, 192u, 146u, 89u, 28u, 0u, 48u, 37u, 8u, 41u, 12u, 65u, 129u,
140u, 73u, 100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00058[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 15u, 37u, 145u, 32u, 80u, 130u, 208u,
131u, 73u, 100u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u, 4u, 66u,
56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u,
4u, 192u, 112u, 144u,};
static unsigned char uvector__00059[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 161u, 5u, 36u, 112u, 16u, 192u,
148u, 32u, 164u, 112u, 0u, 192u, 146u, 89u, 12u, 65u, 129u, 140u, 73u,
100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00060[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 17u, 37u, 145u, 15u, 201u, 116u, 32u,
164u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u, 4u, 66u, 56u, 56u,
96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u,
112u, 144u,};
static unsigned char uvector__00061[] = {
 0u, 3u, 139u, 6u, 9u, 90u, 75u, 12u, 52u, 33u, 36u, 145u, 197u, 67u,
2u, 73u, 100u, 113u, 48u, 193u, 12u, 134u, 25u, 44u, 208u, 130u, 195u,
100u, 142u, 36u, 24u, 18u, 75u, 35u, 136u, 6u, 4u, 161u, 5u, 35u,
134u, 6u, 4u, 194u, 92u, 142u, 18u, 24u, 18u, 75u, 35u, 131u, 134u,
6u, 81u, 14u, 67u, 116u, 32u, 166u, 27u, 9u, 132u, 185u, 35u, 130u,
134u, 4u, 198u, 188u, 142u, 6u, 24u, 18u, 132u, 20u, 142u, 4u, 24u,
18u, 75u, 35u, 128u, 6u, 4u, 198u, 188u, 134u, 32u, 192u, 198u, 36u,
178u, 33u, 217u, 46u, 132u, 20u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00062[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 21u, 37u, 145u, 14u, 201u, 116u, 32u,
164u, 74u, 210u, 88u, 97u, 161u, 9u, 36u, 145u, 194u, 67u, 3u, 24u,
76u, 13u, 211u, 4u, 66u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u,
48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00063[] = {
 0u, 3u, 134u, 6u, 6u, 106u, 16u, 186u, 16u, 194u, 71u, 9u, 12u, 9u,
66u, 24u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u,
112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00064[] = {
 0u, 3u, 129u, 6u, 9u, 2u, 132u, 48u, 145u, 192u, 3u, 2u, 80u, 134u,
16u, 196u, 24u, 24u, 212u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00065[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 26u, 68u, 129u, 66u, 24u, 73u, 28u,
36u, 48u, 49u, 170u, 96u, 116u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u,
48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00066[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 161u, 12u, 36u, 112u, 16u, 192u,
148u, 33u, 132u, 112u, 0u, 192u, 146u, 89u, 12u, 65u, 129u, 140u, 73u,
100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00067[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 29u, 37u, 145u, 15u, 201u, 116u, 33u,
132u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u, 4u, 66u, 56u, 56u,
96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u,
112u, 144u,};
static unsigned char uvector__00068[] = {
 0u, 3u, 134u, 6u, 6u, 106u, 16u, 250u, 17u, 2u, 71u, 9u, 12u, 9u,
66u, 32u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u,
112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00069[] = {
 0u, 3u, 129u, 6u, 9u, 2u, 132u, 64u, 145u, 192u, 3u, 2u, 80u, 136u,
16u, 196u, 24u, 24u, 212u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00070[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 34u, 68u, 129u, 66u, 32u, 73u, 28u,
36u, 48u, 49u, 170u, 96u, 116u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u,
48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00071[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 161u, 16u, 36u, 112u, 16u, 192u,
148u, 34u, 4u, 112u, 0u, 192u, 146u, 89u, 12u, 65u, 129u, 140u, 73u,
100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00072[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 37u, 37u, 145u, 15u, 201u, 116u, 34u,
4u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u, 4u, 66u, 56u, 56u, 96u,
76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u,
144u,};
static unsigned char uvector__00073[] = {
 0u, 3u, 134u, 6u, 6u, 106u, 17u, 58u, 17u, 66u, 71u, 9u, 12u, 9u,
66u, 40u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u,
112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00074[] = {
 0u, 3u, 129u, 6u, 9u, 2u, 132u, 80u, 145u, 192u, 3u, 2u, 80u, 138u,
16u, 196u, 24u, 24u, 212u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00075[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 42u, 68u, 129u, 66u, 40u, 73u, 28u,
36u, 48u, 49u, 170u, 96u, 116u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u,
48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00076[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 161u, 20u, 36u, 112u, 16u, 192u,
148u, 34u, 132u, 112u, 0u, 192u, 146u, 89u, 12u, 65u, 129u, 140u, 73u,
100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00077[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 45u, 37u, 145u, 15u, 201u, 116u, 34u,
132u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u, 4u, 66u, 56u, 56u,
96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u,
112u, 144u,};
static unsigned char uvector__00078[] = {
 0u, 3u, 134u, 6u, 6u, 106u, 17u, 122u, 17u, 130u, 71u, 9u, 12u, 9u,
66u, 48u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u,
112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00079[] = {
 0u, 3u, 129u, 6u, 9u, 2u, 132u, 96u, 145u, 192u, 3u, 2u, 80u, 140u,
16u, 196u, 24u, 24u, 212u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00080[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 50u, 68u, 129u, 66u, 48u, 73u, 28u,
36u, 48u, 49u, 170u, 96u, 116u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u,
48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00081[] = {
 0u, 3u, 129u, 134u, 8u, 126u, 75u, 161u, 24u, 36u, 112u, 16u, 192u,
148u, 35u, 4u, 112u, 0u, 192u, 146u, 89u, 12u, 65u, 129u, 140u, 73u,
100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00082[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 53u, 37u, 145u, 15u, 201u, 116u, 35u,
4u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u, 4u, 66u, 56u, 56u, 96u,
76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u,
144u,};
static ScmObj condition_continuation_mixin_allocate(ScmClass* klass,ScmObj G2168 SCM_UNUSED);
static ScmObj load_condition_mixin_allocate(ScmClass* klass,ScmObj G2170 SCM_UNUSED);
static ScmObj compile_error_mixin_allocate(ScmClass* klass,ScmObj G2172 SCM_UNUSED);
static ScmObj filename_error_mixin_allocate(ScmClass* klass,ScmObj G2174 SCM_UNUSED);
static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2149[186];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2149 */
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("<exception>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<condition>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("rewind-before", 13, 13),
      SCM_STRING_CONST_INITIALIZER("with-error-handler", 18, 18),
      SCM_STRING_CONST_INITIALIZER("handler", 7, 7),
      SCM_STRING_CONST_INITIALIZER("thunk", 5, 5),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libexc.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("report-error", 12, 12),
      SCM_STRING_CONST_INITIALIZER("exception", 9, 9),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("port", 4, 4),
      SCM_STRING_CONST_INITIALIZER("condition-type-name", 19, 19),
      SCM_STRING_CONST_INITIALIZER("c", 1, 1),
      SCM_STRING_CONST_INITIALIZER("condition-message", 17, 17),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("e", 1, 1),
      SCM_STRING_CONST_INITIALIZER("fallback", 8, 8),
      SCM_STRING_CONST_INITIALIZER("if", 2, 2),
      SCM_STRING_CONST_INITIALIZER("and", 3, 3),
      SCM_STRING_CONST_INITIALIZER("condition\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("condition-has-type\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("<message-condition>", 19, 19),
      SCM_STRING_CONST_INITIALIZER("condition-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("message", 7, 7),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("print-default-error-heading", 27, 27),
      SCM_STRING_CONST_INITIALIZER("<output-port>", 13, 13),
      SCM_STRING_CONST_INITIALIZER("of-type\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("out", 3, 3),
      SCM_STRING_CONST_INITIALIZER("type-error", 10, 10),
      SCM_STRING_CONST_INITIALIZER("*** ~a: ~,,,,200:a\012", 19, 19),
      SCM_STRING_CONST_INITIALIZER("~", 1, 1),
      SCM_STRING_CONST_INITIALIZER("format-internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("gauche.format", 13, 13),
      SCM_STRING_CONST_INITIALIZER("*** ~a\012", 7, 7),
      SCM_STRING_CONST_INITIALIZER("*** ERROR: unhandled exception: ~s\012", 35, 35),
      SCM_STRING_CONST_INITIALIZER("exc", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<mixin-condition>", 17, 17),
      SCM_STRING_CONST_INITIALIZER("print-additional-error-heading", 30, 30),
      SCM_STRING_CONST_INITIALIZER("G2158", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2157", 5, 5),
      SCM_STRING_CONST_INITIALIZER("Error from (report-additional-condition ~s)\012", 44, 44),
      SCM_STRING_CONST_INITIALIZER("warn", 4, 4),
      SCM_STRING_CONST_INITIALIZER("additional-condition", 20, 20),
      SCM_STRING_CONST_INITIALIZER("unused-args", 11, 11),
      SCM_STRING_CONST_INITIALIZER("report-additional-condition", 27, 27),
      SCM_STRING_CONST_INITIALIZER("<compound-condition>", 20, 20),
      SCM_STRING_CONST_INITIALIZER("%conditions", 11, 11),
      SCM_STRING_CONST_INITIALIZER("partition", 9, 9),
      SCM_STRING_CONST_INITIALIZER("for-each", 8, 8),
      SCM_STRING_CONST_INITIALIZER("%type-error", 11, 11),
      SCM_STRING_CONST_INITIALIZER("what", 4, 4),
      SCM_STRING_CONST_INITIALIZER("expected-type", 13, 13),
      SCM_STRING_CONST_INITIALIZER("actual-object", 13, 13),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("write-to-string", 15, 15),
      SCM_STRING_CONST_INITIALIZER("expr", 4, 4),
      SCM_STRING_CONST_INITIALIZER("current-exception-handler", 25, 25),
      SCM_STRING_CONST_INITIALIZER("exception-handler-stack", 23, 23),
      SCM_STRING_CONST_INITIALIZER("with-exception-handler", 22, 22),
      SCM_STRING_CONST_INITIALIZER("%raise", 6, 6),
      SCM_STRING_CONST_INITIALIZER("non-continuable\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("%reraise", 8, 8),
      SCM_STRING_CONST_INITIALIZER("raise", 5, 5),
      SCM_STRING_CONST_INITIALIZER("raise-continuable", 17, 17),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("k", 1, 1),
      SCM_STRING_CONST_INITIALIZER("make-compound-condition", 23, 23),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("conditions", 10, 10),
      SCM_STRING_CONST_INITIALIZER("make-condition-type", 19, 19),
      SCM_STRING_CONST_INITIALIZER("condition-type\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("condition-type required as a parent of make-condition-type, but got:", 68, 68),
      SCM_STRING_CONST_INITIALIZER("<condition-meta>", 16, 16),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("supers", 6, 6),
      SCM_STRING_CONST_INITIALIZER("slots", 5, 5),
      SCM_STRING_CONST_INITIALIZER("make", 4, 4),
      SCM_STRING_CONST_INITIALIZER("parent", 6, 6),
      SCM_STRING_CONST_INITIALIZER("field-names", 11, 11),
      SCM_STRING_CONST_INITIALIZER("make-condition", 14, 14),
      SCM_STRING_CONST_INITIALIZER("make-condition requires a condition type, but got:", 50, 50),
      SCM_STRING_CONST_INITIALIZER("make-condition is given non-even initargs:", 42, 42),
      SCM_STRING_CONST_INITIALIZER("slot-exists\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("condition type ~s doesn't have a field ~s", 41, 41),
      SCM_STRING_CONST_INITIALIZER("errorf", 6, 6),
      SCM_STRING_CONST_INITIALIZER("type", 4, 4),
      SCM_STRING_CONST_INITIALIZER("initargs", 8, 8),
      SCM_STRING_CONST_INITIALIZER("slot", 4, 4),
      SCM_STRING_CONST_INITIALIZER("extract-condition", 17, 17),
      SCM_STRING_CONST_INITIALIZER("cannot extract a condition of type ~s from a condition ~s", 57, 57),
      SCM_STRING_CONST_INITIALIZER("class-slots", 11, 11),
      SCM_STRING_CONST_INITIALIZER("slot-definition-name", 20, 20),
      SCM_STRING_CONST_INITIALIZER("slot-bound\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("&condition", 10, 10),
      SCM_STRING_CONST_INITIALIZER("&message", 8, 8),
      SCM_STRING_CONST_INITIALIZER("&serious", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<serious-condition>", 19, 19),
      SCM_STRING_CONST_INITIALIZER("&error", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<error>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("&i/o-error", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<io-error>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("&i/o-port-error", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<port-error>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("&i/o-read-error", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<io-read-error>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("&i/o-write-error", 16, 16),
      SCM_STRING_CONST_INITIALIZER("<io-write-error>", 16, 16),
      SCM_STRING_CONST_INITIALIZER("&i/o-closed-error", 17, 17),
      SCM_STRING_CONST_INITIALIZER("<io-closed-error>", 17, 17),
      SCM_STRING_CONST_INITIALIZER("&read-error", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<read-error>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("message-condition\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("serious-condition\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("error\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("&continuation", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<continuation-violation>", 24, 24),
      SCM_STRING_CONST_INITIALIZER("make-continuation-violation", 27, 27),
      SCM_STRING_CONST_INITIALIZER("prompt-tag", 10, 10),
      SCM_STRING_CONST_INITIALIZER("tag", 3, 3),
      SCM_STRING_CONST_INITIALIZER("continuation-violation\077", 23, 23),
      SCM_STRING_CONST_INITIALIZER("continuation-violation-prompt-tag", 33, 33),
      SCM_STRING_CONST_INITIALIZER("condition", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche.threads", 14, 14),
      SCM_STRING_CONST_INITIALIZER("&thread", 7, 7),
      SCM_STRING_CONST_INITIALIZER("<thread-exception>", 18, 18),
      SCM_STRING_CONST_INITIALIZER("make-thread-condition", 21, 21),
      SCM_STRING_CONST_INITIALIZER("thread", 6, 6),
      SCM_STRING_CONST_INITIALIZER("current-thread", 14, 14),
      SCM_STRING_CONST_INITIALIZER("thread-condition\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("&uncaught-exception", 19, 19),
      SCM_STRING_CONST_INITIALIZER("<uncaught-exception>", 20, 20),
      SCM_STRING_CONST_INITIALIZER("make-uncaught-exception-condition", 33, 33),
      SCM_STRING_CONST_INITIALIZER("reason", 6, 6),
      SCM_STRING_CONST_INITIALIZER("uncaught-exception-condition\077", 29, 29),
      SCM_STRING_CONST_INITIALIZER("uncaught-exception-condition-reason", 35, 35),
      SCM_STRING_CONST_INITIALIZER("&thread-already-terminated", 26, 26),
      SCM_STRING_CONST_INITIALIZER("<terminated-thread-exception>", 29, 29),
      SCM_STRING_CONST_INITIALIZER("make-thread-already-terminated-condition", 40, 40),
      SCM_STRING_CONST_INITIALIZER("thread-already-terminated-condition\077", 36, 36),
      SCM_STRING_CONST_INITIALIZER("&thread-timeout", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<join-timeout-exception>", 24, 24),
      SCM_STRING_CONST_INITIALIZER("make-thread-timeout-condition", 29, 29),
      SCM_STRING_CONST_INITIALIZER("thread-timeout-condition\077", 25, 25),
      SCM_STRING_CONST_INITIALIZER("&thread-abandoned-mutex", 23, 23),
      SCM_STRING_CONST_INITIALIZER("<abandoned-mutex-exception>", 27, 27),
      SCM_STRING_CONST_INITIALIZER("make-thread-abandoned-mutex-condition", 37, 37),
      SCM_STRING_CONST_INITIALIZER("thread-abandoned-mutex-condition\077", 33, 33),
      SCM_STRING_CONST_INITIALIZER("&concurrent-modification", 24, 24),
      SCM_STRING_CONST_INITIALIZER("<concurrent-modification-violation>", 35, 35),
      SCM_STRING_CONST_INITIALIZER("make-concurrent-modification-violation", 38, 38),
      SCM_STRING_CONST_INITIALIZER("concurrent-modification-violation\077", 34, 34),
      SCM_STRING_CONST_INITIALIZER("G2155", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2156", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2154", 8, 8),
      SCM_STRING_CONST_INITIALIZER("format", 6, 6),
      SCM_STRING_CONST_INITIALIZER("v", 1, 1),
      SCM_STRING_CONST_INITIALIZER("assume-type", 11, 11),
      SCM_STRING_CONST_INITIALIZER("is-a\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("guard", 5, 5),
      SCM_STRING_CONST_INITIALIZER("mixins", 6, 6),
      SCM_STRING_CONST_INITIALIZER("mains", 5, 5),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("slot-set!", 9, 9),
      SCM_STRING_CONST_INITIALIZER("slot-ref", 8, 8),
      SCM_STRING_CONST_INITIALIZER("cc", 2, 2),
      SCM_STRING_CONST_INITIALIZER("sn", 2, 2),
  },
};
static struct scm__rcRec {
  ScmPair d2153[324] SCM_ALIGN_PAIR;
  ScmUVector d2152[82];
  ScmCompiledCode d2151[82];
  ScmWord d2150[1294];
  ScmObj d2148[649];
} scm__rc SCM_UNUSED = {
  {   /* ScmPair d2153 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[3])},
       { SCM_MAKE_INT(51U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[6])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[8])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[9])},
       { SCM_OBJ(&scm__rc.d2153[10]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[7]), SCM_OBJ(&scm__rc.d2153[11])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[13])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[14])},
       { SCM_MAKE_INT(61U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[16])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[17])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[19])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[20])},
       { SCM_OBJ(&scm__rc.d2153[21]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[18]), SCM_OBJ(&scm__rc.d2153[22])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(64U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[26])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[28])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[29])},
       { SCM_OBJ(&scm__rc.d2153[30]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[27]), SCM_OBJ(&scm__rc.d2153[31])},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[33])},
       { SCM_OBJ(&scm__rc.d2153[34]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[35])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[36])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[38])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[40])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[41])},
       { SCM_OBJ(&scm__rc.d2153[42]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[39]), SCM_OBJ(&scm__rc.d2153[43])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[44])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[46])},
       { SCM_OBJ(&scm__rc.d2153[47]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[48])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[49])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[50]), SCM_OBJ(&scm__rc.d2153[51])},
       { SCM_OBJ(&scm__rc.d2153[45]), SCM_OBJ(&scm__rc.d2153[52])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[53])},
       { SCM_OBJ(&scm__rc.d2153[54]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[37]), SCM_OBJ(&scm__rc.d2153[55])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[56])},
       { SCM_MAKE_INT(68U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[58])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[59])},
       { SCM_OBJ(&scm__rc.d2153[60]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1U), SCM_OBJ(&scm__rc.d2153[63])},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2153[64])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1U), SCM_OBJ(&scm__rc.d2153[66])},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2153[67])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1U), SCM_OBJ(&scm__rc.d2153[69])},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2153[70])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[72])},
       { SCM_MAKE_INT(74U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[75])},
       { SCM_OBJ(&scm__rc.d2153[76]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[79])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(95U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[83])},
       { SCM_OBJ(&scm__rc.d2153[84]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[5]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[88])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[38])},
       { SCM_OBJ(&scm__rc.d2153[90]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[89]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[93]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[95])},
       { SCM_OBJ(&scm__rc.d2153[96]), SCM_OBJ(&scm__rc.d2153[24])},
       { SCM_OBJ(&scm__rc.d2153[97]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[8]), SCM_NIL},
       { SCM_MAKE_INT(86U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[100])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[101])},
       { SCM_OBJ(&scm__rc.d2153[102]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[105])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[106])},
       { SCM_MAKE_INT(101U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[108])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[109])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[111])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[112])},
       { SCM_OBJ(&scm__rc.d2153[113]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[110]), SCM_OBJ(&scm__rc.d2153[114])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[106])},
       { SCM_MAKE_INT(106U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[117])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[118])},
       { SCM_OBJ(&scm__rc.d2153[119]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[122])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[123])},
       { SCM_OBJ(&scm__rc.d2153[124]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[126])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[127])},
       { SCM_OBJ(&scm__rc.d2153[128]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[130])},
       { SCM_MAKE_INT(118U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[132])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[133])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[135])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[136])},
       { SCM_OBJ(&scm__rc.d2153[137]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[134]), SCM_OBJ(&scm__rc.d2153[138])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[140])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[141])},
       { SCM_MAKE_INT(123U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[143])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[144])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[146])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[147])},
       { SCM_OBJ(&scm__rc.d2153[148]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[145]), SCM_OBJ(&scm__rc.d2153[149])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[151])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[152])},
       { SCM_OBJ(&scm__rc.d2153[153]), SCM_NIL},
       { SCM_MAKE_INT(139U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[155])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[156])},
       { SCM_OBJ(&scm__rc.d2153[157]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(142U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[160])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[161])},
       { SCM_OBJ(&scm__rc.d2153[162]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(150U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[166])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[167])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[169])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[170])},
       { SCM_OBJ(&scm__rc.d2153[171]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[168]), SCM_OBJ(&scm__rc.d2153[172])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[174])},
       { SCM_MAKE_INT(152U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[176])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[177])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[179])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[180])},
       { SCM_OBJ(&scm__rc.d2153[181]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[178]), SCM_OBJ(&scm__rc.d2153[182])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[184])},
       { SCM_MAKE_INT(154U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[186])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[187])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[189])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[190])},
       { SCM_OBJ(&scm__rc.d2153[191]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[188]), SCM_OBJ(&scm__rc.d2153[192])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[194])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[195])},
       { SCM_MAKE_INT(157U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[197])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[198])},
       { SCM_OBJ(&scm__rc.d2153[199]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(165U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[202])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[203])},
       { SCM_OBJ(&scm__rc.d2153[204]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(168U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[208])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[209])},
       { SCM_OBJ(&scm__rc.d2153[210]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[213])},
       { SCM_MAKE_INT(183U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[215])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[216])},
       { SCM_OBJ(&scm__rc.d2153[217]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[220])},
       { SCM_MAKE_INT(186U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[222])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[223])},
       { SCM_OBJ(&scm__rc.d2153[224]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(211U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[227])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[228])},
       { SCM_OBJ(&scm__rc.d2153[229]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(212U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[232])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[233])},
       { SCM_OBJ(&scm__rc.d2153[234]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(213U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[237])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[238])},
       { SCM_OBJ(&scm__rc.d2153[239]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(217U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[243])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[244])},
       { SCM_OBJ(&scm__rc.d2153[245]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(219U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[248])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[249])},
       { SCM_OBJ(&scm__rc.d2153[250]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(221U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[254])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[255])},
       { SCM_OBJ(&scm__rc.d2153[256]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(315U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[259])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[260])},
       { SCM_OBJ(&scm__rc.d2153[261]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(317U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[264])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[265])},
       { SCM_OBJ(&scm__rc.d2153[266]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(320U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[269])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[270])},
       { SCM_OBJ(&scm__rc.d2153[271]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(322U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[274])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[275])},
       { SCM_OBJ(&scm__rc.d2153[276]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(323U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[279])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[280])},
       { SCM_OBJ(&scm__rc.d2153[281]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(328U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[284])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[285])},
       { SCM_OBJ(&scm__rc.d2153[286]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(330U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[289])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[290])},
       { SCM_OBJ(&scm__rc.d2153[291]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(334U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[294])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[295])},
       { SCM_OBJ(&scm__rc.d2153[296]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(336U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[299])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[300])},
       { SCM_OBJ(&scm__rc.d2153[301]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(340U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[304])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[305])},
       { SCM_OBJ(&scm__rc.d2153[306]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(342U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[309])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[310])},
       { SCM_OBJ(&scm__rc.d2153[311]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(346U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[314])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[315])},
       { SCM_OBJ(&scm__rc.d2153[316]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(348U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2149[11]), SCM_OBJ(&scm__rc.d2153[319])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2153[320])},
       { SCM_OBJ(&scm__rc.d2153[321]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
  },
  {   /* ScmUVector d2152 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 201, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 60, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 326, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 85, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 35, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 28, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 56, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 293, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 110, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 66, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 23, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 23, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 105, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 61, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 284, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 109, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 43, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 282, uvector__00026, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 102, uvector__00027, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00028, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00029, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00030, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00031, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00032, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00033, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00034, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00035, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00036, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00037, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00038, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00039, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00040, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00041, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00042, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00043, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00044, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00045, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 43, uvector__00046, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00047, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00048, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 98, uvector__00049, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00050, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00051, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 38, uvector__00052, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00053, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00054, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00055, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00056, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 33, uvector__00057, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 45, uvector__00058, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00059, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 43, uvector__00060, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 102, uvector__00061, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00062, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00063, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 23, uvector__00064, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 38, uvector__00065, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00066, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 43, uvector__00067, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00068, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 23, uvector__00069, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 38, uvector__00070, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00071, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 43, uvector__00072, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00073, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 23, uvector__00074, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 38, uvector__00075, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00076, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 43, uvector__00077, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00078, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 23, uvector__00079, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 38, uvector__00080, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 31, uvector__00081, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 43, uvector__00082, 0, NULL),
  },
  {   /* ScmCompiledCode d2151 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[0])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* condition-message */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[15])), 53,
            17, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[62]),
            SCM_OBJ(&scm__rc.d2151[2]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[68])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* print-default-error-heading */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[83])), 82,
            15, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[78]),
            SCM_OBJ(&scm__rc.d2151[4]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[165])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (print-additional-error-heading #:G2158) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[180])), 5,
            1, 1, 0, SCM_OBJ(&scm__rc.d2153[80]), SCM_NIL, SCM_OBJ(&scm__rc.d2153[86]),
            SCM_OBJ(&scm__rc.d2151[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[185])), 8,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[92]),
            SCM_OBJ(&scm__rc.d2151[8]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[193])), 5,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[94]),
            SCM_OBJ(&scm__rc.d2151[8]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* additional-condition */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[198])), 13,
            7, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[98]),
            SCM_OBJ(&scm__rc.d2151[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* print-additional-error-heading */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[211])), 67,
            23, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[104]),
            SCM_OBJ(&scm__rc.d2151[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[278])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* type-error */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[295])), 15,
            13, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[121]),
            SCM_OBJ(&scm__rc.d2151[12]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[310])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* raise */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[325])), 4,
            4, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[159]),
            SCM_OBJ(&scm__rc.d2151[14]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[329])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* raise-continuable */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[344])), 4,
            4, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[164]),
            SCM_OBJ(&scm__rc.d2151[16]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[348])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-condition-type */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[363])), 32,
            12, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[201]),
            SCM_OBJ(&scm__rc.d2151[18]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[395])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* condition-type? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[410])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[206]),
            SCM_OBJ(&scm__rc.d2151[20]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[415])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-condition */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[430])), 64,
            27, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[212]),
            SCM_OBJ(&scm__rc.d2151[22]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[494])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* condition-ref */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[509])), 4,
            1, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[219]),
            SCM_OBJ(&scm__rc.d2151[24]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[513])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* extract-condition */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[528])), 62,
            31, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[226]),
            SCM_OBJ(&scm__rc.d2151[26]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[590])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[605])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[620])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[635])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[650])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[665])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[680])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[695])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[710])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[725])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[740])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* message-condition? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[755])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[231]),
            SCM_OBJ(&scm__rc.d2151[38]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[760])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* serious-condition? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[775])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[236]),
            SCM_OBJ(&scm__rc.d2151[40]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[780])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* error? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[795])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[241]),
            SCM_OBJ(&scm__rc.d2151[42]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[800])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[815])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-continuation-violation */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[830])), 8,
            6, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[247]),
            SCM_OBJ(&scm__rc.d2151[45]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[838])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* continuation-violation? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[853])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[252]),
            SCM_OBJ(&scm__rc.d2151[47]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[858])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* continuation-violation-prompt-tag */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[873])), 27,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[258]),
            SCM_OBJ(&scm__rc.d2151[49]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[900])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[915])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-thread-condition */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[930])), 11,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[263]),
            SCM_OBJ(&scm__rc.d2151[52]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[941])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* thread-condition? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[956])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[268]),
            SCM_OBJ(&scm__rc.d2151[54]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[961])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[976])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-uncaught-exception-condition */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[991])), 8,
            6, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[273]),
            SCM_OBJ(&scm__rc.d2151[57]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[999])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* uncaught-exception-condition? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1014])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[278]),
            SCM_OBJ(&scm__rc.d2151[59]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1019])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* uncaught-exception-condition-reason */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1034])), 25,
            13, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[283]),
            SCM_OBJ(&scm__rc.d2151[61]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1059])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1074])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-thread-already-terminated-condition */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1089])), 5,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[288]),
            SCM_OBJ(&scm__rc.d2151[64]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1094])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* thread-already-terminated-condition? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1109])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[293]),
            SCM_OBJ(&scm__rc.d2151[66]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1114])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1129])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-thread-timeout-condition */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1144])), 5,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[298]),
            SCM_OBJ(&scm__rc.d2151[69]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1149])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* thread-timeout-condition? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1164])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[303]),
            SCM_OBJ(&scm__rc.d2151[71]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1169])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1184])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-thread-abandoned-mutex-condition */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1199])), 5,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[308]),
            SCM_OBJ(&scm__rc.d2151[74]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1204])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* thread-abandoned-mutex-condition? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1219])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[313]),
            SCM_OBJ(&scm__rc.d2151[76]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1224])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1239])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-concurrent-modification-violation */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1254])), 5,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[318]),
            SCM_OBJ(&scm__rc.d2151[79]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1259])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* concurrent-modification-violation? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1274])), 5,
            1, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2153[323]),
            SCM_OBJ(&scm__rc.d2151[81]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2150[1279])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2150 */
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[0]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* <exception> */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[0]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <condition> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* <exception> */,
    0x00000014    /*  14 (RET) */,
    /* condition-message */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 6),
    0x00000004    /*   3 (CONSTF) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[23])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[57])) /* (lambda (e :optional (fallback #f)) (if (and (condition? e) (condition-has-type? e <message-condition>)) (condition-ref e 'message) fallback)) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000100e    /*  29 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 34),
    0x0000004d    /*  31 (LREF11-PUSH) */,
    0x0000105f    /*  32 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* condition? */,
    0x0000001e    /*  34 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 52),
    0x0000200e    /*  36 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 43),
    0x0000004d    /*  38 (LREF11-PUSH) */,
    0x0000005e    /*  39 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <message-condition> */,
    0x0000205f    /*  41 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-has-type? */,
    0x0000001e    /*  43 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]) + 51),
    0x0000004d    /*  45 (LREF11-PUSH) */,
    0x00000006    /*  46 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* message */,
    0x00002060    /*  48 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-ref */,
    0x00000014    /*  50 (RET) */,
    0x00000054    /*  51 (LREF1-RET) */,
    0x00000054    /*  52 (LREF1-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[68]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-message */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[68]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[1])) /* #<compiled-code condition-message@0x7870815eaf00> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-message */,
    0x00000014    /*  14 (RET) */,
    /* print-default-error-heading */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <output-port> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* out */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <output-port> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 26),
    0x00000049    /*  23 (LREF1-PUSH) */,
    0x0000105f    /*  24 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* condition? */,
    0x0000001e    /*  26 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 72),
    0x0000200e    /*  28 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 35),
    0x00000049    /*  30 (LREF1-PUSH) */,
    0x0000005e    /*  31 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <message-condition> */,
    0x0000205f    /*  33 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-has-type? */,
    0x0000001e    /*  35 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 58),
    0x00000006    /*  37 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[65])) /* (#f 1 #<box #f>) */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[41])) /* "*** ~a: ~,,,,200:a\n" */,
    0x0000100e    /*  42 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 47),
    0x00000049    /*  44 (LREF1-PUSH) */,
    0x0000105f    /*  45 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-type-name */,
    0x0000200f    /*  47 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 54),
    0x00000049    /*  49 (LREF1-PUSH) */,
    0x00000006    /*  50 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* message */,
    0x0000205f    /*  52 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00004088    /*  54 (LIST 4) */,
    0x00002063    /*  55 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* format-internal */,
    0x00000014    /*  57 (RET) */,
    0x00000006    /*  58 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[68])) /* (#f 1 #<box #f>) */,
    0x00000048    /*  60 (LREF0-PUSH) */,
    0x00000006    /*  61 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[45])) /* "*** ~a\n" */,
    0x0000100e    /*  63 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]) + 68),
    0x00000049    /*  65 (LREF1-PUSH) */,
    0x0000105f    /*  66 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-type-name */,
    0x00003088    /*  68 (LIST 3) */,
    0x00002063    /*  69 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* format-internal */,
    0x00000014    /*  71 (RET) */,
    0x00000006    /*  72 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[71])) /* (#f 1 #<box #f>) */,
    0x00000048    /*  74 (LREF0-PUSH) */,
    0x00000006    /*  75 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[46])) /* "*** ERROR: unhandled exception: ~s\n" */,
    0x0000003e    /*  77 (LREF1) */,
    0x00003088    /*  78 (LIST 3) */,
    0x00002063    /*  79 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* format-internal */,
    0x00000014    /*  81 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[165]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* print-default-error-heading */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[165]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[3])) /* #<compiled-code print-default-error-heading@0x787080d449c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* print-default-error-heading */,
    0x00000014    /*  14 (RET) */,
    /* (print-additional-error-heading #:G2158) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <mixin-condition> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* (print-additional-error-heading additional-condition #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[185]) + 7),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[52])) /* "Error from (report-additional-condition ~s)\n" */,
    0x0000004c    /*   4 (LREF10-PUSH) */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* warn */,
    0x0000000b    /*   7 (CONSTF-RET) */,
    /* (print-additional-error-heading additional-condition #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000004f    /*   1 (LREF20-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* report-additional-condition */,
    0x00000014    /*   4 (RET) */,
    /* (print-additional-error-heading additional-condition) */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[6])) /* #<compiled-code (print-additional-error-heading additional-condition #f)@0x78708097a540> */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[7])) /* #<compiled-code (print-additional-error-heading additional-condition #f)@0x78708097a4e0> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000006    /*   6 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :rewind-before */,
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00004060    /*  10 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* with-error-handler */,
    0x00000014    /*  12 (RET) */,
    /* print-additional-error-heading */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[99])) /* (#<compiled-code (print-additional-error-heading additional-condition)@0x78708097a5a0>) */,
    0x0000200e    /*   2 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 9),
    0x0000004c    /*   4 (LREF10-PUSH) */,
    0x0000005e    /*   5 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <output-port> */,
    0x0000205f    /*   7 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   9 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 14),
    0x00000041    /*  11 (LREF10) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 23),
    0x0000300e    /*  14 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 23),
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* out */,
    0x0000005e    /*  18 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <output-port> */,
    0x0000004c    /*  20 (LREF10-PUSH) */,
    0x0000305f    /*  21 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 28),
    0x0000004d    /*  25 (LREF11-PUSH) */,
    0x0000105f    /*  26 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* condition? */,
    0x0000001e    /*  28 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 66),
    0x0000004d    /*  30 (LREF11-PUSH) */,
    0x0000005d    /*  31 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <compound-condition> */,
    0x00000096    /*  33 (IS-A) */,
    0x0000001e    /*  34 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 50),
    0x0000200e    /*  36 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 54),
    0x0000004f    /*  38 (LREF20-PUSH) */,
    0x0000200e    /*  39 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 46),
    0x0000004d    /*  41 (LREF11-PUSH) */,
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %conditions */,
    0x0000205f    /*  44 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00002062    /*  46 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* partition */,
    0x00000013    /*  48 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 54),
    0x00000008    /*  50 (CONSTN-PUSH) */,
    0x00000042    /*  51 (LREF11) */,
    0x00001088    /*  52 (LIST 1) */,
    0x000020a2    /*  53 (VALUES 2) */,
    0x00002036    /*  54 (TAIL-RECEIVE 2 0) */,
    0x0000200e    /*  55 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]) + 61),
    0x0000004c    /*  57 (LREF10-PUSH) */,
    0x00000048    /*  58 (LREF0-PUSH) */,
    0x0000205f    /*  59 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* for-each */,
    0x0000004c    /*  61 (LREF10-PUSH) */,
    0x00000049    /*  62 (LREF1-PUSH) */,
    0x00002060    /*  63 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* for-each */,
    0x00000014    /*  65 (RET) */,
    0x0000000c    /*  66 (CONSTU-RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[87])) /* (#<compiled-code (print-additional-error-heading #:G2158)@0x78708097a660>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[278]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* print-additional-error-heading */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[278]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[9])) /* #<compiled-code print-additional-error-heading@0x78708097a600> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* print-additional-error-heading */,
    0x00000014    /*  16 (RET) */,
    /* type-error */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[295]) + 5),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* write-to-string */,
    0x0000100f    /*   5 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[295]) + 10),
    0x00000049    /*   7 (LREF1-PUSH) */,
    0x0000105f    /*   8 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* write-to-string */,
    0x0000000d    /*  10 (PUSH) */,
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x00003060    /*  12 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %type-error */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[310]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[310]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[11])) /* #<compiled-code type-error@0x787080251660> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x00000014    /*  14 (RET) */,
    /* raise */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %raise */,
    0x00000014    /*   3 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[329]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* raise */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[329]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[13])) /* #<compiled-code raise@0x78708034d240> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* raise */,
    0x00000014    /*  14 (RET) */,
    /* raise-continuable */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* raise */,
    0x00000014    /*   3 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[348]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* raise-continuable */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[348]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[15])) /* #<compiled-code raise-continuable@0x78708035e780> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* raise-continuable */,
    0x00000014    /*  14 (RET) */,
    /* make-condition-type */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-type? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]) + 9),
    0x00000013    /*   7 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]) + 16),
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]) + 16),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[86])) /* "condition-type required as a parent of make-condition-type, but got:" */,
    0x00000049    /*  13 (LREF1-PUSH) */,
    0x0000205f    /*  14 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <condition-meta> */,
    0x00000006    /*  18 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :name */,
    0x0000004a    /*  20 (LREF2-PUSH) */,
    0x00000006    /*  21 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :supers */,
    0x0000003e    /*  23 (LREF1) */,
    0x00001088    /*  24 (LIST 1) */,
    0x0000000d    /*  25 (PUSH) */,
    0x00000006    /*  26 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :slots */,
    0x00000048    /*  28 (LREF0-PUSH) */,
    0x00007060    /*  29 (GREF-TAIL-CALL 7) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*  31 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[395]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-condition-type */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[395]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[17])) /* #<compiled-code make-condition-type@0x7870803ca660> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-condition-type */,
    0x00000014    /*  14 (RET) */,
    /* condition-type? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <condition-meta> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[415]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-type? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[415]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[19])) /* #<compiled-code condition-type?@0x7870802dde40> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-type? */,
    0x00000014    /*  14 (RET) */,
    /* make-condition */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-type? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 9),
    0x00000013    /*   7 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 16),
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 16),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[95])) /* "make-condition requires a condition type, but got:" */,
    0x00000049    /*  13 (LREF1-PUSH) */,
    0x0000205f    /*  14 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000100e    /*  16 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 21),
    0x00000049    /*  18 (LREF1-PUSH) */,
    0x0000105f    /*  19 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00001018    /*  21 (PUSH-LOCAL-ENV 1) */,
    0x0000004c    /*  22 (LREF10-PUSH) */,
    0x00001017    /*  23 (LOCAL-ENV 1) */,
    0x0000003d    /*  24 (LREF0) */,
    0x00000022    /*  25 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 28),
    0x00000057    /*  27 (LREF10-RET) */,
    0x00000076    /*  28 (LREF0-CDR) */,
    0x00000022    /*  29 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 37),
    0x00000006    /*  31 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[96])) /* "make-condition is given non-even initargs:" */,
    0x0000004f    /*  33 (LREF20-PUSH) */,
    0x00002060    /*  34 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  36 (RET) */,
    0x0000200e    /*  37 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 43),
    0x0000004c    /*  39 (LREF10-PUSH) */,
    0x0000006a    /*  40 (LREF0-CAR) */,
    0x00002062    /*  41 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* slot-exists? */,
    0x0000001e    /*  43 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 56),
    0x0000004c    /*  45 (LREF10-PUSH) */,
    0x0000006a    /*  46 (LREF0-CAR) */,
    0x0000000d    /*  47 (PUSH) */,
    0x0000003d    /*  48 (LREF0) */,
    0x00000082    /*  49 (CADR) */,
    0x000000e2    /*  50 (SLOT-SET) */,
    0x0000003d    /*  51 (LREF0) */,
    0x00000087    /*  52 (CDDR-PUSH) */,
    0x0000101b    /*  53 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]) + 24),
    0x00000014    /*  55 (RET) */,
    0x00000006    /*  56 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[98])) /* "condition type ~s doesn't have a field ~s" */,
    0x00000050    /*  58 (LREF21-PUSH) */,
    0x0000006a    /*  59 (LREF0-CAR) */,
    0x00003063    /*  60 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000014    /*  62 (RET) */,
    0x00000014    /*  63 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[494]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-condition */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[494]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[21])) /* #<compiled-code make-condition@0x787080301840> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-condition */,
    0x00000014    /*  14 (RET) */,
    /* condition-ref */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x0000003d    /*   1 (LREF0) */,
    0x000000e1    /*   2 (SLOT-REF) */,
    0x00000014    /*   3 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[513]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-ref */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[513]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[23])) /* #<compiled-code condition-ref@0x787080156de0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-ref */,
    0x00000014    /*  14 (RET) */,
    /* extract-condition */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 6),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* condition-has-type? */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 10),
    0x00000013    /*   8 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 18),
    0x0000300e    /*  10 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 18),
    0x00000006    /*  12 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2149[104])) /* "cannot extract a condition of type ~s from a condition ~s" */,
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x00000049    /*  15 (LREF1-PUSH) */,
    0x0000305f    /*  16 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0000100e    /*  18 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 23),
    0x00000048    /*  20 (LREF0-PUSH) */,
    0x0000105f    /*  21 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00001018    /*  23 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  24 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 29),
    0x0000004c    /*  26 (LREF10-PUSH) */,
    0x0000105f    /*  27 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* class-slots */,
    0x00001018    /*  29 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  30 (LREF0) */,
    0x00000022    /*  31 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 34),
    0x00000057    /*  33 (LREF10-RET) */,
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 39),
    0x0000006a    /*  36 (LREF0-CAR) */,
    0x00001062    /*  37 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* slot-definition-name */,
    0x00001018    /*  39 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  40 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 46),
    0x00403047    /*  42 (LREF-PUSH 3 1) */,
    0x00000048    /*  43 (LREF0-PUSH) */,
    0x0000205f    /*  44 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* slot-bound? */,
    0x0000001e    /*  46 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 56),
    0x0000004f    /*  48 (LREF20-PUSH) */,
    0x00000048    /*  49 (LREF0-PUSH) */,
    0x00403047    /*  50 (LREF-PUSH 3 1) */,
    0x0000003d    /*  51 (LREF0) */,
    0x000000e1    /*  52 (SLOT-REF) */,
    0x000000e2    /*  53 (SLOT-SET) */,
    0x00000013    /*  54 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 56),
    0x0000007a    /*  56 (LREF10-CDR) */,
    0x0000000d    /*  57 (PUSH) */,
    0x0000201b    /*  58 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]) + 30),
    0x00000014    /*  60 (RET) */,
    0x00000014    /*  61 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[590]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* extract-condition */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[590]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[25])) /* #<compiled-code extract-condition@0x78708016e240> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* extract-condition */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[605]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &condition */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[605]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <condition> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &condition */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[620]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &message */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[620]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <message-condition> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &message */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[635]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &serious */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[635]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <serious-condition> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &serious */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[650]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[650]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <error> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &error */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[665]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[665]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <io-error> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-error */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[680]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-port-error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[680]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <port-error> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-port-error */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[695]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-read-error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[695]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <io-read-error> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-read-error */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[710]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-write-error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[710]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <io-write-error> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-write-error */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[725]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-closed-error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[725]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <io-closed-error> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &i/o-closed-error */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[740]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &read-error */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[740]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <read-error> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &read-error */,
    0x00000014    /*  14 (RET) */,
    /* message-condition? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <message-condition> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[760]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* message-condition? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[760]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[37])) /* #<compiled-code message-condition?@0x787080d44ea0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* message-condition? */,
    0x00000014    /*  14 (RET) */,
    /* serious-condition? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <serious-condition> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[780]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* serious-condition? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[780]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[39])) /* #<compiled-code serious-condition?@0x787080979cc0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* serious-condition? */,
    0x00000014    /*  14 (RET) */,
    /* error? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <error> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[800]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* error? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[800]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[41])) /* #<compiled-code error?@0x7870809e5360> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* error? */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[815]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &continuation */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[815]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <continuation-violation> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &continuation */,
    0x00000014    /*  14 (RET) */,
    /* make-continuation-violation */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <continuation-violation> */,
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :prompt-tag */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00003060    /*   5 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*   7 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[838]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-continuation-violation */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[838]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[44])) /* #<compiled-code make-continuation-violation@0x787080a68240> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-continuation-violation */,
    0x00000014    /*  14 (RET) */,
    /* continuation-violation? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <continuation-violation> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[858]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* continuation-violation? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[858]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[46])) /* #<compiled-code continuation-violation?@0x787080adbea0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* continuation-violation? */,
    0x00000014    /*  14 (RET) */,
    /* continuation-violation-prompt-tag */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <continuation-violation> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* condition */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <continuation-violation> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x00000006    /*  22 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* prompt-tag */,
    0x00002060    /*  24 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00000014    /*  26 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[900]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* continuation-violation-prompt-tag */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[900]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[48])) /* #<compiled-code continuation-violation-prompt-tag@0x787080b11360> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* continuation-violation-prompt-tag */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[915]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &thread */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[915]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <thread-exception> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &thread */,
    0x00000014    /*  14 (RET) */,
    /* make-thread-condition */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <thread-exception> */,
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :thread */,
    0x0000000e    /*   4 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[930]) + 8),
    0x0000005f    /*   6 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* current-thread */,
    0x00003063    /*   8 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*  10 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[941]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-thread-condition */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[941]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[51])) /* #<compiled-code make-thread-condition@0x7870803bdf00> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-thread-condition */,
    0x00000014    /*  14 (RET) */,
    /* thread-condition? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <thread-exception> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[961]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* thread-condition? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[961]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[53])) /* #<compiled-code thread-condition?@0x787080777d80> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* thread-condition? */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[976]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &uncaught-exception */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[976]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <uncaught-exception> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &uncaught-exception */,
    0x00000014    /*  14 (RET) */,
    /* make-uncaught-exception-condition */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <uncaught-exception> */,
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :reason */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00003060    /*   5 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*   7 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[999]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-uncaught-exception-condition */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[999]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[56])) /* #<compiled-code make-uncaught-exception-condition@0x7870803896c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-uncaught-exception-condition */,
    0x00000014    /*  14 (RET) */,
    /* uncaught-exception-condition? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <uncaught-exception> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1019]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* uncaught-exception-condition? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1019]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[58])) /* #<compiled-code uncaught-exception-condition?@0x78708030aae0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* uncaught-exception-condition? */,
    0x00000014    /*  14 (RET) */,
    /* uncaught-exception-condition-reason */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <uncaught-exception> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]) + 12),
    0x0000003d    /*   9 (LREF0) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* obj */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <uncaught-exception> */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000003d    /*  21 (LREF0) */,
    0x000000e3    /*  22 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* reason */,
    0x00000014    /*  24 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1059]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* uncaught-exception-condition-reason */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1059]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[60])) /* #<compiled-code uncaught-exception-condition-reason@0x7870803b70c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* uncaught-exception-condition-reason */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1074]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &thread-already-terminated */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1074]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <terminated-thread-exception> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &thread-already-terminated */,
    0x00000014    /*  14 (RET) */,
    /* make-thread-already-terminated-condition */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <terminated-thread-exception> */,
    0x00001060    /*   2 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1094]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-thread-already-terminated-condition */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1094]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[63])) /* #<compiled-code make-thread-already-terminated-condition@0x78708062b960> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-thread-already-terminated-condition */,
    0x00000014    /*  14 (RET) */,
    /* thread-already-terminated-condition? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <terminated-thread-exception> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1114]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* thread-already-terminated-condition? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1114]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[65])) /* #<compiled-code thread-already-terminated-condition?@0x7870805e3ea0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* thread-already-terminated-condition? */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1129]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &thread-timeout */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1129]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <join-timeout-exception> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &thread-timeout */,
    0x00000014    /*  14 (RET) */,
    /* make-thread-timeout-condition */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <join-timeout-exception> */,
    0x00001060    /*   2 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1149]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-thread-timeout-condition */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1149]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[68])) /* #<compiled-code make-thread-timeout-condition@0x7870801ec7e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-thread-timeout-condition */,
    0x00000014    /*  14 (RET) */,
    /* thread-timeout-condition? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <join-timeout-exception> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1169]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* thread-timeout-condition? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1169]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[70])) /* #<compiled-code thread-timeout-condition?@0x7870804b2d20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* thread-timeout-condition? */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1184]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &thread-abandoned-mutex */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1184]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <abandoned-mutex-exception> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &thread-abandoned-mutex */,
    0x00000014    /*  14 (RET) */,
    /* make-thread-abandoned-mutex-condition */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <abandoned-mutex-exception> */,
    0x00001060    /*   2 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1204]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-thread-abandoned-mutex-condition */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1204]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[73])) /* #<compiled-code make-thread-abandoned-mutex-condition@0x7870800d0660> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-thread-abandoned-mutex-condition */,
    0x00000014    /*  14 (RET) */,
    /* thread-abandoned-mutex-condition? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <abandoned-mutex-exception> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1224]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* thread-abandoned-mutex-condition? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1224]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[75])) /* #<compiled-code thread-abandoned-mutex-condition?@0x787082fffde0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* thread-abandoned-mutex-condition? */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1239]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* &concurrent-modification */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1239]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <concurrent-modification-violation> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* &concurrent-modification */,
    0x00000014    /*  14 (RET) */,
    /* make-concurrent-modification-violation */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <concurrent-modification-violation> */,
    0x00001060    /*   2 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1259]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-concurrent-modification-violation */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1259]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[78])) /* #<compiled-code make-concurrent-modification-violation@0x78708190c8a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-concurrent-modification-violation */,
    0x00000014    /*  14 (RET) */,
    /* concurrent-modification-violation? */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000005d    /*   1 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <concurrent-modification-violation> */,
    0x00000096    /*   3 (IS-A) */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1279]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* concurrent-modification-violation? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2150[1279]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[80])) /* #<compiled-code concurrent-modification-violation?@0x7870815ea960> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* concurrent-modification-violation? */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmObj d2148 */
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(155, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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

static ScmObj libexcwith_error_handler(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj handler_scm;
  ScmObj handler;
  ScmObj thunk_scm;
  ScmObj thunk;
  ScmObj rewind_before_scm = SCM_FALSE;
  int rewind_before;
  ScmObj SCM_SUBRARGS[2];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("with-error-handler");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  handler_scm = SCM_SUBRARGS[0];
  if (!(handler_scm)) Scm_Error("scheme object required, but got %S", handler_scm);
  handler = (handler_scm);
  thunk_scm = SCM_SUBRARGS[1];
  if (!(thunk_scm)) Scm_Error("scheme object required, but got %S", thunk_scm);
  thunk = (thunk_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2148[10])) {
      rewind_before_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!SCM_BOOLP(rewind_before_scm)) Scm_Error("boolean required, but got %S", rewind_before_scm);
  rewind_before = SCM_BOOL_VALUE(rewind_before_scm);
  {
{
ScmObj SCM_RESULT;

#line 52 "libexc.scm"
if (!(SCM_PROCEDURE_TAKE_NARG_P(handler,1))){{
Scm_Error("error handler must take at least 1 argument, but got %S",handler);}}

#line 55 "libexc.scm"
if (!(SCM_PROCEDURE_THUNK_P(thunk))){{
Scm_Error("thunk required, but got %S",thunk);}}

#line 57 "libexc.scm"
if (rewind_before){
{SCM_RESULT=(Scm_VMWithGuardHandler(handler,thunk));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_VMWithErrorHandler(handler,thunk));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libexcreport_error(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj exception_scm;
  ScmObj exception;
  ScmObj port_scm;
  ScmObj port;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("report-error");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  exception_scm = SCM_SUBRARGS[0];
  if (!(exception_scm)) Scm_Error("scheme object required, but got %S", exception_scm);
  exception = (exception_scm);
  if (SCM_ARGCNT > 1+1) {
    port_scm = SCM_SUBRARGS[1];
  } else {
    port_scm = SCM_OBJ(SCM_CURERR);
  }
  if (!(port_scm)) Scm_Error("scheme object required, but got %S", port_scm);
  port = (port_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ReportError(exception,port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libexccondition_type_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmObj c;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("condition-type-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!(c_scm)) Scm_Error("scheme object required, but got %S", c_scm);
  c = (c_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ConditionTypeName(c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libexc_25type_error(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj what_scm;
  const char* what;
  ScmObj expected_type_scm;
  const char* expected_type;
  ScmObj actual_object_scm;
  ScmObj actual_object;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("%type-error");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  what_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(what_scm)) Scm_Error("const char* required, but got %S", what_scm);
  what = SCM_STRING_CONST_CSTRING(what_scm);
  expected_type_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(expected_type_scm)) Scm_Error("const char* required, but got %S", expected_type_scm);
  expected_type = SCM_STRING_CONST_CSTRING(expected_type_scm);
  actual_object_scm = SCM_SUBRARGS[2];
  if (!(actual_object_scm)) Scm_Error("scheme object required, but got %S", actual_object_scm);
  actual_object = (actual_object_scm);
  {
Scm_TypeError(what,expected_type,actual_object);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libexccurrent_exception_handler(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("current-exception-handler");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMCurrentExceptionHandler());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libexcexception_handler_stack(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("exception-handler-stack");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMExceptionHandlerStack());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libexcwith_exception_handler(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj handler_scm;
  ScmObj handler;
  ScmObj thunk_scm;
  ScmObj thunk;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("with-exception-handler");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  handler_scm = SCM_SUBRARGS[0];
  if (!(handler_scm)) Scm_Error("scheme object required, but got %S", handler_scm);
  handler = (handler_scm);
  thunk_scm = SCM_SUBRARGS[1];
  if (!(thunk_scm)) Scm_Error("scheme object required, but got %S", thunk_scm);
  thunk = (thunk_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMWithExceptionHandler(handler,thunk));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libexc_25raise(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj exception_scm;
  ScmObj exception;
  ScmObj non_continuableP_scm;
  ScmObj non_continuableP;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%raise");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  exception_scm = SCM_SUBRARGS[0];
  if (!(exception_scm)) Scm_Error("scheme object required, but got %S", exception_scm);
  exception = (exception_scm);
  if (SCM_ARGCNT > 1+1) {
    non_continuableP_scm = SCM_SUBRARGS[1];
  } else {
    non_continuableP_scm = SCM_FALSE;
  }
  if (!(non_continuableP_scm)) Scm_Error("scheme object required, but got %S", non_continuableP_scm);
  non_continuableP = (non_continuableP_scm);
  {
{
ScmObj SCM_RESULT;

#line 124 "libexc.scm"
{u_long flags=
((SCM_FALSEP(non_continuableP))?(0):(SCM_RAISE_NON_CONTINUABLE));
{SCM_RESULT=(Scm_Raise(exception,flags));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libexc_25reraise(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("%reraise");
  {
{
ScmObj SCM_RESULT;

#line 136 "libexc.scm"
{SCM_RESULT=(Scm_VMReraise());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libexcconditionP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("condition?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_CONDITIONP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libexccondition_has_typeP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj c_scm;
  ScmObj c;
  ScmObj k_scm;
  ScmObj k;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("condition-has-type?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  c_scm = SCM_SUBRARGS[0];
  if (!(c_scm)) Scm_Error("scheme object required, but got %S", c_scm);
  c = (c_scm);
  k_scm = SCM_SUBRARGS[1];
  if (!(k_scm)) Scm_Error("scheme object required, but got %S", k_scm);
  k = (k_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_ConditionHasType(c,k));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libexcmake_compound_condition(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj conditions_scm;
  ScmObj conditions;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("make-compound-condition");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  conditions_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(conditions_scm)) Scm_Error("list required, but got %S", conditions_scm);
  conditions = (conditions_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeCompoundCondition(conditions));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj thread_exception_allocate(ScmClass* klass,ScmObj G2161 SCM_UNUSED){{
#line 234 "libexc.scm"
return (Scm_MakeThreadException(klass,NULL));}}
static void thread_exception_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2163 SCM_UNUSED){{
#line 238 "libexc.scm"
{ScmClass* k=SCM_CLASS_OF(obj);ScmThreadException* exc=
SCM_THREAD_EXCEPTION(obj);ScmObj cname=
Scm_ShortClassName(k);
if (SCM_UNDEFINEDP((exc)->data)){
Scm_Printf(port,"#<%A %S>",cname,SCM_OBJ_SAFE((exc)->thread));} else {
Scm_Printf(port,"#<%A %S %S>",cname,SCM_OBJ_SAFE((exc)->thread),
(exc)->data);}}}}
static void uncaught_exception_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2165 SCM_UNUSED){{
#line 248 "libexc.scm"
{ScmThreadException* exc=SCM_THREAD_EXCEPTION(obj);
Scm_Printf(port,"#<uncaught-exception in thread %S: %S>",
SCM_OBJ_SAFE((exc)->thread),(exc)->data);}}}
static void terminated_thread_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2167 SCM_UNUSED){{
#line 254 "libexc.scm"
{ScmThreadException* exc=SCM_THREAD_EXCEPTION(obj);
Scm_Printf(port,"#<terminated-thread-exception: %S terminated by %S>",
SCM_OBJ_SAFE((exc)->thread),(exc)->data);}}}
static ScmClass *thread_exception_cpa[] = {
   SCM_CLASS_STATIC_PTR(Scm_ThreadExceptionClass),
   SCM_CLASS_STATIC_PTR(Scm_ConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_TopClass),
   NULL
 };
static ScmClass *Scm_ThreadExceptionClass_CPL[] = {
  SCM_CLASS_STATIC_PTR(Scm_ConditionClass),
  SCM_CLASS_STATIC_PTR(Scm_TopClass),
  NULL
};
SCM_DEFINE_BUILTIN_CLASS(Scm_ThreadExceptionClass, thread_exception_print, NULL, NULL, thread_exception_allocate, Scm_ThreadExceptionClass_CPL);

static ScmObj Scm_ThreadExceptionClass_thread_GET(ScmObj OBJARG)
{
  ScmThreadException* obj = SCM_THREAD_EXCEPTION(OBJARG);
  return SCM_OBJ_SAFE(obj->thread);
}

static void Scm_ThreadExceptionClass_thread_SET(ScmObj OBJARG, ScmObj value)
{
  ScmThreadException* obj = SCM_THREAD_EXCEPTION(OBJARG);
  if (!SCM_VMP(value)) Scm_Error("ScmVM* required, but got %S", value);
  obj->thread = SCM_VM(value);
}

static ScmClassStaticSlotSpec Scm_ThreadExceptionClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("thread", Scm_ThreadExceptionClass_thread_GET, Scm_ThreadExceptionClass_thread_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

SCM_DEFINE_BUILTIN_CLASS(Scm_JoinTimeoutExceptionClass, thread_exception_print, NULL, NULL, thread_exception_allocate, thread_exception_cpa);

SCM_DEFINE_BUILTIN_CLASS(Scm_AbandonedMutexExceptionClass, thread_exception_print, NULL, NULL, thread_exception_allocate, thread_exception_cpa);

static ScmObj Scm_AbandonedMutexExceptionClass_mutex_GET(ScmObj OBJARG)
{
  ScmThreadException* obj = SCM_THREAD_EXCEPTION(OBJARG);
  return SCM_OBJ_SAFE(obj->data);
}

static void Scm_AbandonedMutexExceptionClass_mutex_SET(ScmObj OBJARG, ScmObj value)
{
  ScmThreadException* obj = SCM_THREAD_EXCEPTION(OBJARG);
  obj->data = (value);
}

static ScmClassStaticSlotSpec Scm_AbandonedMutexExceptionClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("mutex", Scm_AbandonedMutexExceptionClass_mutex_GET, Scm_AbandonedMutexExceptionClass_mutex_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

SCM_DEFINE_BUILTIN_CLASS(Scm_TerminatedThreadExceptionClass, terminated_thread_print, NULL, NULL, thread_exception_allocate, thread_exception_cpa);

static ScmObj Scm_TerminatedThreadExceptionClass_terminator_GET(ScmObj OBJARG)
{
  ScmThreadException* obj = SCM_THREAD_EXCEPTION(OBJARG);
  return SCM_OBJ_SAFE(obj->data);
}

static void Scm_TerminatedThreadExceptionClass_terminator_SET(ScmObj OBJARG, ScmObj value)
{
  ScmThreadException* obj = SCM_THREAD_EXCEPTION(OBJARG);
  obj->data = (value);
}

static ScmClassStaticSlotSpec Scm_TerminatedThreadExceptionClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("terminator", Scm_TerminatedThreadExceptionClass_terminator_GET, Scm_TerminatedThreadExceptionClass_terminator_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

SCM_DEFINE_BUILTIN_CLASS(Scm_UncaughtExceptionClass, uncaught_exception_print, NULL, NULL, thread_exception_allocate, thread_exception_cpa);

static ScmObj Scm_UncaughtExceptionClass_reason_GET(ScmObj OBJARG)
{
  ScmThreadException* obj = SCM_THREAD_EXCEPTION(OBJARG);
  return SCM_OBJ_SAFE(obj->data);
}

static void Scm_UncaughtExceptionClass_reason_SET(ScmObj OBJARG, ScmObj value)
{
  ScmThreadException* obj = SCM_THREAD_EXCEPTION(OBJARG);
  obj->data = (value);
}

static ScmClassStaticSlotSpec Scm_UncaughtExceptionClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("reason", Scm_UncaughtExceptionClass_reason_GET, Scm_UncaughtExceptionClass_reason_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

SCM_DEFINE_BUILTIN_CLASS(Scm_ConcurrentModificationViolationClass, uncaught_exception_print, NULL, NULL, thread_exception_allocate, thread_exception_cpa);

static ScmClass *mixin_condition_cpa[] = {
   SCM_CLASS_STATIC_PTR(Scm_MixinConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_ConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_TopClass),
   NULL
  };
static ScmObj condition_continuation_mixin_allocate(ScmClass* klass,ScmObj G2169 SCM_UNUSED){{
#line 371 "libexc.scm"
{ScmConditionContinuationMixin* c=SCM_NEW_INSTANCE(ScmConditionContinuationMixin,klass);
(c)->continuation=(SCM_FALSE);
return (SCM_OBJ(c));}}}
SCM_DEFINE_BUILTIN_CLASS(Scm_CoditionContinuationMixinClass, NULL, NULL, NULL, condition_continuation_mixin_allocate, mixin_condition_cpa);

static ScmObj Scm_CoditionContinuationMixinClass_continuation_GET(ScmObj OBJARG)
{
  ScmConditionContinuationMixin* obj = SCM_CONDITION_CONTINUATION_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->continuation);
}

static void Scm_CoditionContinuationMixinClass_continuation_SET(ScmObj OBJARG, ScmObj value)
{
  ScmConditionContinuationMixin* obj = SCM_CONDITION_CONTINUATION_MIXIN(OBJARG);
  obj->continuation = (value);
}

static ScmClassStaticSlotSpec Scm_CoditionContinuationMixinClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("continuation", Scm_CoditionContinuationMixinClass_continuation_GET, Scm_CoditionContinuationMixinClass_continuation_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

static ScmObj load_condition_mixin_allocate(ScmClass* klass,ScmObj G2171 SCM_UNUSED){{
#line 382 "libexc.scm"
{ScmLoadConditionMixin* c=SCM_NEW_INSTANCE(ScmLoadConditionMixin,klass);
(c)->history=(SCM_FALSE);
(c)->port=(SCM_FALSE);
return (SCM_OBJ(c));}}}
SCM_DEFINE_BUILTIN_CLASS(Scm_LoadConditionMixinClass, NULL, NULL, NULL, load_condition_mixin_allocate, mixin_condition_cpa);

static ScmObj Scm_LoadConditionMixinClass_history_GET(ScmObj OBJARG)
{
  ScmLoadConditionMixin* obj = SCM_LOAD_CONDITION_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->history);
}

static void Scm_LoadConditionMixinClass_history_SET(ScmObj OBJARG, ScmObj value)
{
  ScmLoadConditionMixin* obj = SCM_LOAD_CONDITION_MIXIN(OBJARG);
  obj->history = (value);
}

static ScmObj Scm_LoadConditionMixinClass_port_GET(ScmObj OBJARG)
{
  ScmLoadConditionMixin* obj = SCM_LOAD_CONDITION_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->port);
}

static void Scm_LoadConditionMixinClass_port_SET(ScmObj OBJARG, ScmObj value)
{
  ScmLoadConditionMixin* obj = SCM_LOAD_CONDITION_MIXIN(OBJARG);
  obj->port = (value);
}

static ScmClassStaticSlotSpec Scm_LoadConditionMixinClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("history", Scm_LoadConditionMixinClass_history_GET, Scm_LoadConditionMixinClass_history_SET),
  SCM_CLASS_SLOT_SPEC("port", Scm_LoadConditionMixinClass_port_GET, Scm_LoadConditionMixinClass_port_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

static ScmObj compile_error_mixin_allocate(ScmClass* klass,ScmObj G2173 SCM_UNUSED){{
#line 395 "libexc.scm"
{ScmCompileErrorMixin* c=SCM_NEW_INSTANCE(ScmCompileErrorMixin,klass);
(c)->expr=(SCM_FALSE);
return (SCM_OBJ(c));}}}
SCM_DEFINE_BUILTIN_CLASS(Scm_CompileErrorMixinClass, NULL, NULL, NULL, compile_error_mixin_allocate, mixin_condition_cpa);

static ScmObj Scm_CompileErrorMixinClass_expr_GET(ScmObj OBJARG)
{
  ScmCompileErrorMixin* obj = SCM_COMPILE_ERROR_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->expr);
}

static void Scm_CompileErrorMixinClass_expr_SET(ScmObj OBJARG, ScmObj value)
{
  ScmCompileErrorMixin* obj = SCM_COMPILE_ERROR_MIXIN(OBJARG);
  obj->expr = (value);
}

static ScmClassStaticSlotSpec Scm_CompileErrorMixinClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("expr", Scm_CompileErrorMixinClass_expr_GET, Scm_CompileErrorMixinClass_expr_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

static ScmObj filename_error_mixin_allocate(ScmClass* klass,ScmObj G2175 SCM_UNUSED){{
#line 413 "libexc.scm"
{ScmFilenameErrorMixin* c=SCM_NEW_INSTANCE(ScmFilenameErrorMixin,klass);
(c)->filename=(SCM_FALSE);
return (SCM_OBJ(c));}}}
static ScmClass *filename_condition_cpa[] = {
   SCM_CLASS_STATIC_PTR(Scm_FileProtectionErrorMixinClass),
   SCM_CLASS_STATIC_PTR(Scm_FilenameErrorMixinClass),
   SCM_CLASS_STATIC_PTR(Scm_MixinConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_ConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_TopClass),
   NULL
  };
SCM_DEFINE_BUILTIN_CLASS(Scm_FilenameErrorMixinClass, NULL, NULL, NULL, filename_error_mixin_allocate, filename_condition_cpa+2);

static ScmObj Scm_FilenameErrorMixinClass_filename_GET(ScmObj OBJARG)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->filename);
}

static void Scm_FilenameErrorMixinClass_filename_SET(ScmObj OBJARG, ScmObj value)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  obj->filename = (value);
}

static ScmClassStaticSlotSpec Scm_FilenameErrorMixinClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("filename", Scm_FilenameErrorMixinClass_filename_GET, Scm_FilenameErrorMixinClass_filename_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

SCM_DEFINE_BUILTIN_CLASS(Scm_MalformedFilenameErrorClass, NULL, NULL, NULL, filename_error_mixin_allocate, filename_condition_cpa+1);

static ScmObj Scm_MalformedFilenameErrorClass_filename_GET(ScmObj OBJARG)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->filename);
}

static void Scm_MalformedFilenameErrorClass_filename_SET(ScmObj OBJARG, ScmObj value)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  obj->filename = (value);
}

static ScmClassStaticSlotSpec Scm_MalformedFilenameErrorClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("filename", Scm_MalformedFilenameErrorClass_filename_GET, Scm_MalformedFilenameErrorClass_filename_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

SCM_DEFINE_BUILTIN_CLASS(Scm_FileProtectionErrorMixinClass, NULL, NULL, NULL, filename_error_mixin_allocate, filename_condition_cpa+1);

static ScmObj Scm_FileProtectionErrorMixinClass_filename_GET(ScmObj OBJARG)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->filename);
}

static void Scm_FileProtectionErrorMixinClass_filename_SET(ScmObj OBJARG, ScmObj value)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  obj->filename = (value);
}

static ScmClassStaticSlotSpec Scm_FileProtectionErrorMixinClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("filename", Scm_FileProtectionErrorMixinClass_filename_GET, Scm_FileProtectionErrorMixinClass_filename_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

SCM_DEFINE_BUILTIN_CLASS(Scm_FileIsReadOnlyErrorMixinClass, NULL, NULL, NULL, filename_error_mixin_allocate, filename_condition_cpa);

static ScmObj Scm_FileIsReadOnlyErrorMixinClass_filename_GET(ScmObj OBJARG)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->filename);
}

static void Scm_FileIsReadOnlyErrorMixinClass_filename_SET(ScmObj OBJARG, ScmObj value)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  obj->filename = (value);
}

static ScmClassStaticSlotSpec Scm_FileIsReadOnlyErrorMixinClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("filename", Scm_FileIsReadOnlyErrorMixinClass_filename_GET, Scm_FileIsReadOnlyErrorMixinClass_filename_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

SCM_DEFINE_BUILTIN_CLASS(Scm_FileAlreadyExistsErrorMixinClass, NULL, NULL, NULL, filename_error_mixin_allocate, filename_condition_cpa+1);

static ScmObj Scm_FileAlreadyExistsErrorMixinClass_filename_GET(ScmObj OBJARG)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->filename);
}

static void Scm_FileAlreadyExistsErrorMixinClass_filename_SET(ScmObj OBJARG, ScmObj value)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  obj->filename = (value);
}

static ScmClassStaticSlotSpec Scm_FileAlreadyExistsErrorMixinClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("filename", Scm_FileAlreadyExistsErrorMixinClass_filename_GET, Scm_FileAlreadyExistsErrorMixinClass_filename_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

SCM_DEFINE_BUILTIN_CLASS(Scm_NoSuchFileErrorMixinClass, NULL, NULL, NULL, filename_error_mixin_allocate, filename_condition_cpa+1);

static ScmObj Scm_NoSuchFileErrorMixinClass_filename_GET(ScmObj OBJARG)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  return SCM_OBJ_SAFE(obj->filename);
}

static void Scm_NoSuchFileErrorMixinClass_filename_SET(ScmObj OBJARG, ScmObj value)
{
  ScmFilenameErrorMixin* obj = SCM_FILENAME_ERROR_MIXIN(OBJARG);
  obj->filename = (value);
}

static ScmClassStaticSlotSpec Scm_NoSuchFileErrorMixinClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("filename", Scm_NoSuchFileErrorMixinClass_filename_GET, Scm_NoSuchFileErrorMixinClass_filename_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[0])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[2])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[4])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[10])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[12])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[14])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[16])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[18])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[20])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[22])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[24])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[26])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[27])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[28])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[29])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[30])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[31])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[32])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[33])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[34])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[35])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[36])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[38])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[40])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[42])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[43])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[45])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[47])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[49])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[50])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[52])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[54])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[55])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[57])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[59])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[61])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[62])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[64])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[66])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[67])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[69])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[71])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[72])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[74])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[76])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[77])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[79])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[81])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[2];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[4];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[57];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[63];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[56];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[65];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[61];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[62];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[60];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[23]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[33];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[628];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[629];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[630];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[54];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[89];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[93];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[81];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[46]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[94];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[45]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[44];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[41]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[87];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[631];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[83];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[78];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[632];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[80];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[633];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[76];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[634];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[103];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[100];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[107];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[52]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[45];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[113];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[11];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[10];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[635];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[123];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[108];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[636];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[637];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[638];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[118];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[121];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[639];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[640];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[119];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[641];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[102];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[101];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[128];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[146];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[149];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[130];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[131];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[642];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[6];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[173];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[192];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[198];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[245];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[240];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[241];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[246];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[242];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[247];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[243];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[248];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[86]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[237];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[235];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[204];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[260];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[98]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[261];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[643];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[644];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[258];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[96]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[262];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[95]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[256];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[645];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[267];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[646];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[647];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[648];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[277];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[275];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[273];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = SCM_OBJ(&scm__sc.d2149[104]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[271];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[282];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[285];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[288];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[290];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[293];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[295];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[298];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[300];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[303];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[305];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[308];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[310];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[313];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[315];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[318];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[320];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[323];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[325];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[328];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[333];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[338];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[343];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[345];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[349];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[350];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[348];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[355];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[361];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[362];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[360];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[369];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[371];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[376];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[378];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[375];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[384];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[389];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[391];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[395];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[394];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[400];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[406];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[405];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[411];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[413];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[416];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[421];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[426];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[428];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[431];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[436];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[441];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[443];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[446];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[451];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[456];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[458];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[461];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2148[471]), i++) = scm__rc.d2148[466];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2148[471]);
}
void Scm_Init_libexc() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2148[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[0])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2148[0] = Scm_MakeIdentifier(scm__rc.d2148[1], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2148[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[1])),TRUE); /* <exception> */
  scm__rc.d2148[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[2])),TRUE); /* <condition> */
  scm__rc.d2148[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[3])),TRUE); /* gauche */
  scm__rc.d2148[5] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2148[6]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2148[3] = Scm_MakeIdentifier(scm__rc.d2148[4], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<condition> */
  scm__rc.d2148[7] = Scm_MakeIdentifier(scm__rc.d2148[2], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<exception> */
  scm__rc.d2148[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[4])),TRUE); /* %toplevel */
  scm__rc.d2148[9] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[0]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[0]))->debugInfo = scm__rc.d2148[9];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[0]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[0]))[6] = SCM_WORD(scm__rc.d2148[2]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[0]))[10] = SCM_WORD(scm__rc.d2148[3]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[0]))[13] = SCM_WORD(scm__rc.d2148[7]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2148[10] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[5]))); /* :rewind-before */
  scm__rc.d2148[11] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[6])),TRUE); /* with-error-handler */
  scm__rc.d2148[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[7])),TRUE); /* handler */
  scm__rc.d2148[13] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[8])),TRUE); /* thunk */
  scm__rc.d2148[14] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[9]))); /* :key */
  scm__rc.d2148[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[5])),TRUE); /* rewind-before */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[1]), scm__rc.d2148[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[2]), scm__rc.d2148[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[3]), scm__rc.d2148[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[4]), scm__rc.d2148[12]);
  scm__rc.d2148[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[10])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[7]), scm__rc.d2148[16]);
  scm__rc.d2148[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[12])),TRUE); /* bind-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[8]), scm__rc.d2148[11]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[9]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[10]), scm__rc.d2148[17]);
  scm__rc.d2148[18] = Scm_MakeExtendedPair(scm__rc.d2148[11], SCM_OBJ(&scm__rc.d2153[4]), SCM_OBJ(&scm__rc.d2153[12]));
  scm__rc.d2148[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[13])),TRUE); /* <top> */
  scm__rc.d2148[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[14])),TRUE); /* * */
  scm__rc.d2148[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[15])),TRUE); /* -> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[22]))[3] = scm__rc.d2148[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[22]))[4] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[22]))[5] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[22]))[6] = scm__rc.d2148[20];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[22]))[7] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[22]))[8] = scm__rc.d2148[19];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("with-error-handler")), SCM_OBJ(&libexcwith_error_handler__STUB), 0);
  libexcwith_error_handler__STUB.common.info = scm__rc.d2148[18];
  libexcwith_error_handler__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[22]);
  scm__rc.d2148[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[16])),TRUE); /* report-error */
  scm__rc.d2148[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[17])),TRUE); /* exception */
  scm__rc.d2148[33] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[18]))); /* :optional */
  scm__rc.d2148[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[19])),TRUE); /* port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[13]), scm__rc.d2148[34]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[14]), scm__rc.d2148[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[15]), scm__rc.d2148[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[18]), scm__rc.d2148[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[19]), scm__rc.d2148[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[20]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[21]), scm__rc.d2148[17]);
  scm__rc.d2148[35] = Scm_MakeExtendedPair(scm__rc.d2148[31], SCM_OBJ(&scm__rc.d2153[15]), SCM_OBJ(&scm__rc.d2153[23]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[36]))[3] = scm__rc.d2148[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[36]))[4] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[36]))[5] = scm__rc.d2148[20];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[36]))[6] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[36]))[7] = scm__rc.d2148[19];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("report-error")), SCM_OBJ(&libexcreport_error__STUB), 0);
  libexcreport_error__STUB.common.info = scm__rc.d2148[35];
  libexcreport_error__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[36]);
  scm__rc.d2148[44] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[20])),TRUE); /* condition-type-name */
  scm__rc.d2148[45] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[21])),TRUE); /* c */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[24]), scm__rc.d2148[45]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[27]), scm__rc.d2148[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[28]), scm__rc.d2148[44]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[29]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[30]), scm__rc.d2148[17]);
  scm__rc.d2148[46] = Scm_MakeExtendedPair(scm__rc.d2148[44], SCM_OBJ(&scm__rc.d2153[24]), SCM_OBJ(&scm__rc.d2153[32]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[47]))[3] = scm__rc.d2148[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[47]))[4] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[47]))[5] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[47]))[6] = scm__rc.d2148[19];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("condition-type-name")), SCM_OBJ(&libexccondition_type_name__STUB), 0);
  libexccondition_type_name__STUB.common.info = scm__rc.d2148[46];
  libexccondition_type_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[47]);
  scm__rc.d2148[54] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[22])),TRUE); /* condition-message */
  scm__rc.d2148[55] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[24])),TRUE); /* lambda */
  scm__rc.d2148[56] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[25])),TRUE); /* e */
  scm__rc.d2148[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[26])),TRUE); /* fallback */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[34]), scm__rc.d2148[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[36]), scm__rc.d2148[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[37]), scm__rc.d2148[56]);
  scm__rc.d2148[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[27])),TRUE); /* if */
  scm__rc.d2148[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[28])),TRUE); /* and */
  scm__rc.d2148[60] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[29])),TRUE); /* condition? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[38]), scm__rc.d2148[56]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[39]), scm__rc.d2148[60]);
  scm__rc.d2148[61] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[30])),TRUE); /* condition-has-type? */
  scm__rc.d2148[62] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[31])),TRUE); /* <message-condition> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[40]), scm__rc.d2148[62]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[41]), scm__rc.d2148[56]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[42]), scm__rc.d2148[61]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[45]), scm__rc.d2148[59]);
  scm__rc.d2148[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[32])),TRUE); /* condition-ref */
  scm__rc.d2148[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[33])),TRUE); /* quote */
  scm__rc.d2148[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[34])),TRUE); /* message */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[46]), scm__rc.d2148[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[47]), scm__rc.d2148[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[49]), scm__rc.d2148[56]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[50]), scm__rc.d2148[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[51]), scm__rc.d2148[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[54]), scm__rc.d2148[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[57]), scm__rc.d2148[55]);
  scm__rc.d2148[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[35])),TRUE); /* error */
  scm__rc.d2148[66] = Scm_MakeIdentifier(scm__rc.d2148[67], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2148[68] = Scm_MakeIdentifier(scm__rc.d2148[60], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#condition? */
  scm__rc.d2148[69] = Scm_MakeIdentifier(scm__rc.d2148[62], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<message-condition> */
  scm__rc.d2148[70] = Scm_MakeIdentifier(scm__rc.d2148[61], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#condition-has-type? */
  scm__rc.d2148[71] = Scm_MakeIdentifier(scm__rc.d2148[63], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#condition-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[60]), scm__rc.d2148[16]);
  scm__rc.d2148[72] = Scm_MakeExtendedPair(scm__rc.d2148[54], SCM_OBJ(&scm__rc.d2153[37]), SCM_OBJ(&scm__rc.d2153[61]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[62]), scm__rc.d2148[72]);
  scm__rc.d2148[73] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[1]))->name = scm__rc.d2148[54];/* condition-message */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[1]))->debugInfo = scm__rc.d2148[73];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]))[28] = SCM_WORD(scm__rc.d2148[66]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]))[33] = SCM_WORD(scm__rc.d2148[68]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]))[40] = SCM_WORD(scm__rc.d2148[69]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]))[42] = SCM_WORD(scm__rc.d2148[70]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]))[47] = SCM_WORD(scm__rc.d2148[65]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[15]))[49] = SCM_WORD(scm__rc.d2148[71]);
  scm__rc.d2148[74] = Scm_MakeIdentifier(scm__rc.d2148[54], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#condition-message */
  scm__rc.d2148[75] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[2]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[2]))->debugInfo = scm__rc.d2148[75];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[68]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[68]))[6] = SCM_WORD(scm__rc.d2148[54]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[68]))[13] = SCM_WORD(scm__rc.d2148[74]);
  scm__rc.d2148[76] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[36])),TRUE); /* print-default-error-heading */
  scm__rc.d2148[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[37])),TRUE); /* <output-port> */
  scm__rc.d2148[77] = Scm_MakeIdentifier(scm__rc.d2148[78], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<output-port> */
  scm__rc.d2148[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[38])),TRUE); /* of-type? */
  scm__rc.d2148[79] = Scm_MakeIdentifier(scm__rc.d2148[80], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#of-type? */
  scm__rc.d2148[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[39])),TRUE); /* out */
  scm__rc.d2148[83] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[40])),TRUE); /* type-error */
  scm__rc.d2148[82] = Scm_MakeIdentifier(scm__rc.d2148[83], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#type-error */
  scm__rc.d2148[84] = SCM_OBJ(Scm_MakeBox(SCM_FALSE));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[63]), scm__rc.d2148[84]);
  scm__rc.d2148[85] = Scm_MakeIdentifier(scm__rc.d2148[44], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#condition-type-name */
  scm__rc.d2148[87] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[42])),TRUE); /* ~ */
  scm__rc.d2148[86] = Scm_MakeIdentifier(scm__rc.d2148[87], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#~ */
  scm__rc.d2148[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[43])),TRUE); /* format-internal */
  scm__rc.d2148[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[44])),TRUE); /* gauche.format */
  scm__rc.d2148[90] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2148[91]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.format */
  scm__rc.d2148[88] = Scm_MakeIdentifier(scm__rc.d2148[89], SCM_MODULE(scm__rc.d2148[90]), SCM_NIL); /* gauche.format#format-internal */
  scm__rc.d2148[92] = SCM_OBJ(Scm_MakeBox(SCM_FALSE));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[66]), scm__rc.d2148[92]);
  scm__rc.d2148[93] = SCM_OBJ(Scm_MakeBox(SCM_FALSE));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[69]), scm__rc.d2148[93]);
  scm__rc.d2148[94] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[47])),TRUE); /* exc */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[72]), scm__rc.d2148[81]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[73]), scm__rc.d2148[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[76]), scm__rc.d2148[16]);
  scm__rc.d2148[95] = Scm_MakeExtendedPair(scm__rc.d2148[76], SCM_OBJ(&scm__rc.d2153[73]), SCM_OBJ(&scm__rc.d2153[77]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[78]), scm__rc.d2148[95]);
  scm__rc.d2148[96] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[3]))->name = scm__rc.d2148[76];/* print-default-error-heading */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[3]))->debugInfo = scm__rc.d2148[96];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[4] = SCM_WORD(scm__rc.d2148[77]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[6] = SCM_WORD(scm__rc.d2148[79]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[15] = SCM_WORD(scm__rc.d2148[81]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[17] = SCM_WORD(scm__rc.d2148[77]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[20] = SCM_WORD(scm__rc.d2148[82]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[25] = SCM_WORD(scm__rc.d2148[68]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[32] = SCM_WORD(scm__rc.d2148[69]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[34] = SCM_WORD(scm__rc.d2148[70]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[46] = SCM_WORD(scm__rc.d2148[85]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[51] = SCM_WORD(scm__rc.d2148[65]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[53] = SCM_WORD(scm__rc.d2148[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[56] = SCM_WORD(scm__rc.d2148[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[67] = SCM_WORD(scm__rc.d2148[85]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[70] = SCM_WORD(scm__rc.d2148[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[83]))[80] = SCM_WORD(scm__rc.d2148[88]);
  scm__rc.d2148[97] = Scm_MakeIdentifier(scm__rc.d2148[76], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#print-default-error-heading */
  scm__rc.d2148[98] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[4]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[4]))->debugInfo = scm__rc.d2148[98];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[165]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[165]))[6] = SCM_WORD(scm__rc.d2148[76]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[165]))[13] = SCM_WORD(scm__rc.d2148[97]);
  scm__rc.d2148[100] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[48])),TRUE); /* <mixin-condition> */
  scm__rc.d2148[99] = Scm_MakeIdentifier(scm__rc.d2148[100], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<mixin-condition> */
  scm__rc.d2148[101] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[49])),TRUE); /* print-additional-error-heading */
  scm__rc.d2148[102] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[50])),FALSE); /* G2158 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[79]), scm__rc.d2148[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[80]), scm__rc.d2148[101]);
  scm__rc.d2148[103] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[51])),FALSE); /* G2157 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[81]), scm__rc.d2148[103]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[84]), scm__rc.d2148[16]);
  scm__rc.d2148[104] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2153[80]), SCM_OBJ(&scm__rc.d2153[81]), SCM_OBJ(&scm__rc.d2153[85]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[86]), scm__rc.d2148[104]);
  scm__rc.d2148[105] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[5]))->debugInfo = scm__rc.d2148[105];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[180]))[2] = SCM_WORD(scm__rc.d2148[99]);
  scm__rc.d2148[107] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[53])),TRUE); /* warn */
  scm__rc.d2148[106] = Scm_MakeIdentifier(scm__rc.d2148[107], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#warn */
  scm__rc.d2148[108] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[54])),TRUE); /* additional-condition */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[88]), scm__rc.d2148[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[89]), scm__rc.d2148[101]);
  scm__rc.d2148[109] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[55])),TRUE); /* unused-args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[90]), scm__rc.d2148[109]);
  scm__rc.d2148[110] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2153[89]), SCM_OBJ(&scm__rc.d2153[38]), SCM_OBJ(&scm__rc.d2153[91]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[92]), scm__rc.d2148[110]);
  scm__rc.d2148[111] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[6]))->debugInfo = scm__rc.d2148[111];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[185]))[6] = SCM_WORD(scm__rc.d2148[106]);
  scm__rc.d2148[113] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[56])),TRUE); /* report-additional-condition */
  scm__rc.d2148[112] = Scm_MakeIdentifier(scm__rc.d2148[113], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#report-additional-condition */
  scm__rc.d2148[114] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[7]))->debugInfo = scm__rc.d2148[114];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[193]))[3] = SCM_WORD(scm__rc.d2148[112]);
  scm__rc.d2148[115] = Scm_MakeIdentifier(scm__rc.d2148[11], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-error-handler */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[95]), scm__rc.d2148[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[96]), scm__rc.d2148[101]);
  scm__rc.d2148[116] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[8]))->name = scm__rc.d2148[108];/* (print-additional-error-heading additional-condition) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[8]))->debugInfo = scm__rc.d2148[116];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[198]))[7] = SCM_WORD(scm__rc.d2148[10]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[198]))[11] = SCM_WORD(scm__rc.d2148[115]);
  scm__rc.d2148[118] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[57])),TRUE); /* <compound-condition> */
  scm__rc.d2148[117] = Scm_MakeIdentifier(scm__rc.d2148[118], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<compound-condition> */
  scm__rc.d2148[119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[58])),TRUE); /* %conditions */
  scm__rc.d2148[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[59])),TRUE); /* partition */
  scm__rc.d2148[120] = Scm_MakeIdentifier(scm__rc.d2148[121], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#partition */
  scm__rc.d2148[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[60])),TRUE); /* for-each */
  scm__rc.d2148[122] = Scm_MakeIdentifier(scm__rc.d2148[123], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#for-each */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[102]), scm__rc.d2148[16]);
  scm__rc.d2148[124] = Scm_MakeExtendedPair(scm__rc.d2148[101], SCM_OBJ(&scm__rc.d2153[73]), SCM_OBJ(&scm__rc.d2153[103]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[104]), scm__rc.d2148[124]);
  scm__rc.d2148[125] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[9]))->name = scm__rc.d2148[101];/* print-additional-error-heading */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[9]))->debugInfo = scm__rc.d2148[125];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[6] = SCM_WORD(scm__rc.d2148[77]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[8] = SCM_WORD(scm__rc.d2148[79]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[17] = SCM_WORD(scm__rc.d2148[81]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[19] = SCM_WORD(scm__rc.d2148[77]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[22] = SCM_WORD(scm__rc.d2148[82]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[27] = SCM_WORD(scm__rc.d2148[68]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[32] = SCM_WORD(scm__rc.d2148[117]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[43] = SCM_WORD(scm__rc.d2148[119]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[45] = SCM_WORD(scm__rc.d2148[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[47] = SCM_WORD(scm__rc.d2148[120]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[60] = SCM_WORD(scm__rc.d2148[122]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[211]))[64] = SCM_WORD(scm__rc.d2148[122]);
  scm__rc.d2148[126] = Scm_MakeIdentifier(scm__rc.d2148[101], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#print-additional-error-heading */
  scm__rc.d2148[127] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[10]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[10]))->debugInfo = scm__rc.d2148[127];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[278]))[5] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[278]))[8] = SCM_WORD(scm__rc.d2148[101]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[278]))[15] = SCM_WORD(scm__rc.d2148[126]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2148[128] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[61])),TRUE); /* %type-error */
  scm__rc.d2148[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[62])),TRUE); /* what */
  scm__rc.d2148[130] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[63])),TRUE); /* expected-type */
  scm__rc.d2148[131] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[64])),TRUE); /* actual-object */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[105]), scm__rc.d2148[131]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[106]), scm__rc.d2148[130]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[107]), scm__rc.d2148[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[110]), scm__rc.d2148[16]);
  scm__rc.d2148[132] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[65])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[111]), scm__rc.d2148[128]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[112]), scm__rc.d2148[132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[113]), scm__rc.d2148[17]);
  scm__rc.d2148[133] = Scm_MakeExtendedPair(scm__rc.d2148[128], SCM_OBJ(&scm__rc.d2153[107]), SCM_OBJ(&scm__rc.d2153[115]));
  scm__rc.d2148[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[66])),TRUE); /* <const-cstring> */
  scm__rc.d2148[135] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[67])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[136]))[3] = scm__rc.d2148[132];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[136]))[4] = scm__rc.d2148[134];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[136]))[5] = scm__rc.d2148[134];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[136]))[6] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[136]))[7] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[136]))[8] = scm__rc.d2148[135];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%type-error")), SCM_OBJ(&libexc_25type_error__STUB), 0);
  libexc_25type_error__STUB.common.info = scm__rc.d2148[133];
  libexc_25type_error__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[136]);
  scm__rc.d2148[146] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[68])),TRUE); /* write-to-string */
  scm__rc.d2148[147] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2148[132]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2148[145] = Scm_MakeIdentifier(scm__rc.d2148[146], SCM_MODULE(scm__rc.d2148[147]), SCM_NIL); /* gauche.internal#write-to-string */
  scm__rc.d2148[148] = Scm_MakeIdentifier(scm__rc.d2148[128], SCM_MODULE(scm__rc.d2148[147]), SCM_NIL); /* gauche.internal#%type-error */
  scm__rc.d2148[149] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[69])),TRUE); /* expr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[116]), scm__rc.d2148[149]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[119]), scm__rc.d2148[16]);
  scm__rc.d2148[150] = Scm_MakeExtendedPair(scm__rc.d2148[83], SCM_OBJ(&scm__rc.d2153[116]), SCM_OBJ(&scm__rc.d2153[120]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[121]), scm__rc.d2148[150]);
  scm__rc.d2148[151] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[11]))->name = scm__rc.d2148[83];/* type-error */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[11]))->debugInfo = scm__rc.d2148[151];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[295]))[4] = SCM_WORD(scm__rc.d2148[145]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[295]))[9] = SCM_WORD(scm__rc.d2148[145]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[295]))[13] = SCM_WORD(scm__rc.d2148[148]);
  scm__rc.d2148[152] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[12]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[12]))->debugInfo = scm__rc.d2148[152];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[310]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[310]))[6] = SCM_WORD(scm__rc.d2148[83]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[310]))[13] = SCM_WORD(scm__rc.d2148[82]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2148[153] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[70])),TRUE); /* current-exception-handler */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[122]), scm__rc.d2148[153]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[123]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[124]), scm__rc.d2148[17]);
  scm__rc.d2148[154] = Scm_MakeExtendedPair(scm__rc.d2148[153], SCM_NIL, SCM_OBJ(&scm__rc.d2153[125]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[155]))[3] = scm__rc.d2148[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[155]))[4] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[155]))[5] = scm__rc.d2148[19];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("current-exception-handler")), SCM_OBJ(&libexccurrent_exception_handler__STUB), 0);
  libexccurrent_exception_handler__STUB.common.info = scm__rc.d2148[154];
  libexccurrent_exception_handler__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[155]);
  scm__rc.d2148[161] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[71])),TRUE); /* exception-handler-stack */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[126]), scm__rc.d2148[161]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[127]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[128]), scm__rc.d2148[17]);
  scm__rc.d2148[162] = Scm_MakeExtendedPair(scm__rc.d2148[161], SCM_NIL, SCM_OBJ(&scm__rc.d2153[129]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("exception-handler-stack")), SCM_OBJ(&libexcexception_handler_stack__STUB), 0);
  libexcexception_handler_stack__STUB.common.info = scm__rc.d2148[162];
  libexcexception_handler_stack__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[155]);
  scm__rc.d2148[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[72])),TRUE); /* with-exception-handler */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[130]), scm__rc.d2148[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[131]), scm__rc.d2148[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[134]), scm__rc.d2148[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[135]), scm__rc.d2148[163]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[136]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[137]), scm__rc.d2148[17]);
  scm__rc.d2148[164] = Scm_MakeExtendedPair(scm__rc.d2148[163], SCM_OBJ(&scm__rc.d2153[131]), SCM_OBJ(&scm__rc.d2153[139]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[165]))[3] = scm__rc.d2148[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[165]))[4] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[165]))[5] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[165]))[6] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[165]))[7] = scm__rc.d2148[19];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("with-exception-handler")), SCM_OBJ(&libexcwith_exception_handler__STUB), 0);
  libexcwith_exception_handler__STUB.common.info = scm__rc.d2148[164];
  libexcwith_exception_handler__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[165]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2148[173] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[73])),TRUE); /* %raise */
  scm__rc.d2148[174] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[74])),TRUE); /* non-continuable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[140]), scm__rc.d2148[174]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[141]), scm__rc.d2148[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[142]), scm__rc.d2148[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[145]), scm__rc.d2148[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[146]), scm__rc.d2148[173]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[147]), scm__rc.d2148[132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[148]), scm__rc.d2148[17]);
  scm__rc.d2148[175] = Scm_MakeExtendedPair(scm__rc.d2148[173], SCM_OBJ(&scm__rc.d2153[142]), SCM_OBJ(&scm__rc.d2153[150]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[176]))[3] = scm__rc.d2148[132];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[176]))[4] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[176]))[5] = scm__rc.d2148[20];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[176]))[6] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[176]))[7] = scm__rc.d2148[19];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%raise")), SCM_OBJ(&libexc_25raise__STUB), 0);
  libexc_25raise__STUB.common.info = scm__rc.d2148[175];
  libexc_25raise__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[176]);
  scm__rc.d2148[184] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[75])),TRUE); /* %reraise */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[151]), scm__rc.d2148[184]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[152]), scm__rc.d2148[132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[153]), scm__rc.d2148[17]);
  scm__rc.d2148[185] = Scm_MakeExtendedPair(scm__rc.d2148[184], SCM_NIL, SCM_OBJ(&scm__rc.d2153[154]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[186]))[3] = scm__rc.d2148[132];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[186]))[4] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[186]))[5] = scm__rc.d2148[19];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%reraise")), SCM_OBJ(&libexc_25reraise__STUB), 0);
  libexc_25reraise__STUB.common.info = scm__rc.d2148[185];
  libexc_25reraise__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[186]);
  scm__rc.d2148[192] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[76])),TRUE); /* raise */
  scm__rc.d2148[193] = Scm_MakeIdentifier(scm__rc.d2148[173], SCM_MODULE(scm__rc.d2148[147]), SCM_NIL); /* gauche.internal#%raise */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[157]), scm__rc.d2148[16]);
  scm__rc.d2148[194] = Scm_MakeExtendedPair(scm__rc.d2148[192], SCM_OBJ(&scm__rc.d2153[24]), SCM_OBJ(&scm__rc.d2153[158]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[159]), scm__rc.d2148[194]);
  scm__rc.d2148[195] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[13]))->name = scm__rc.d2148[192];/* raise */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[13]))->debugInfo = scm__rc.d2148[195];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[325]))[2] = SCM_WORD(scm__rc.d2148[193]);
  scm__rc.d2148[196] = Scm_MakeIdentifier(scm__rc.d2148[192], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#raise */
  scm__rc.d2148[197] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[14]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[14]))->debugInfo = scm__rc.d2148[197];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[329]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[329]))[6] = SCM_WORD(scm__rc.d2148[192]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[329]))[13] = SCM_WORD(scm__rc.d2148[196]);
  scm__rc.d2148[198] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[77])),TRUE); /* raise-continuable */
  scm__rc.d2148[199] = Scm_MakeIdentifier(scm__rc.d2148[192], SCM_MODULE(scm__rc.d2148[147]), SCM_NIL); /* gauche.internal#raise */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[162]), scm__rc.d2148[16]);
  scm__rc.d2148[200] = Scm_MakeExtendedPair(scm__rc.d2148[198], SCM_OBJ(&scm__rc.d2153[24]), SCM_OBJ(&scm__rc.d2153[163]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[164]), scm__rc.d2148[200]);
  scm__rc.d2148[201] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[15]))->name = scm__rc.d2148[198];/* raise-continuable */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[15]))->debugInfo = scm__rc.d2148[201];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[344]))[2] = SCM_WORD(scm__rc.d2148[199]);
  scm__rc.d2148[202] = Scm_MakeIdentifier(scm__rc.d2148[198], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#raise-continuable */
  scm__rc.d2148[203] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[16]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[16]))->debugInfo = scm__rc.d2148[203];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[348]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[348]))[6] = SCM_WORD(scm__rc.d2148[198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[348]))[13] = SCM_WORD(scm__rc.d2148[202]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2148[204] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[78])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[165]), scm__rc.d2148[204]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[168]), scm__rc.d2148[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[169]), scm__rc.d2148[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[170]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[171]), scm__rc.d2148[17]);
  scm__rc.d2148[205] = Scm_MakeExtendedPair(scm__rc.d2148[60], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[173]));
  scm__rc.d2148[206] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[79])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[207]))[3] = scm__rc.d2148[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[207]))[4] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[207]))[5] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[207]))[6] = scm__rc.d2148[206];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("condition?")), SCM_OBJ(&libexcconditionP__STUB), 0);
  libexcconditionP__STUB.common.info = scm__rc.d2148[205];
  libexcconditionP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[207]);
  scm__rc.d2148[214] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[80])),TRUE); /* k */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[174]), scm__rc.d2148[214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[175]), scm__rc.d2148[45]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[178]), scm__rc.d2148[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[179]), scm__rc.d2148[61]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[180]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[181]), scm__rc.d2148[17]);
  scm__rc.d2148[215] = Scm_MakeExtendedPair(scm__rc.d2148[61], SCM_OBJ(&scm__rc.d2153[175]), SCM_OBJ(&scm__rc.d2153[183]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[216]))[3] = scm__rc.d2148[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[216]))[4] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[216]))[5] = scm__rc.d2148[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[216]))[6] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[216]))[7] = scm__rc.d2148[206];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("condition-has-type?")), SCM_OBJ(&libexccondition_has_typeP__STUB), 0);
  libexccondition_has_typeP__STUB.common.info = scm__rc.d2148[215];
  libexccondition_has_typeP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[216]);
  scm__rc.d2148[224] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[81])),TRUE); /* make-compound-condition */
  scm__rc.d2148[225] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[82]))); /* :rest */
  scm__rc.d2148[226] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[83])),TRUE); /* conditions */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[184]), scm__rc.d2148[226]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[185]), scm__rc.d2148[225]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[188]), scm__rc.d2148[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[189]), scm__rc.d2148[224]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[190]), scm__rc.d2148[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[191]), scm__rc.d2148[17]);
  scm__rc.d2148[227] = Scm_MakeExtendedPair(scm__rc.d2148[224], SCM_OBJ(&scm__rc.d2153[185]), SCM_OBJ(&scm__rc.d2153[193]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[228]))[3] = scm__rc.d2148[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[228]))[4] = scm__rc.d2148[20];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[228]))[5] = scm__rc.d2148[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2148[228]))[6] = scm__rc.d2148[19];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-compound-condition")), SCM_OBJ(&libexcmake_compound_condition__STUB), 0);
  libexcmake_compound_condition__STUB.common.info = scm__rc.d2148[227];
  libexcmake_compound_condition__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2148[228]);
  scm__rc.d2148[235] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[84])),TRUE); /* make-condition-type */
  scm__rc.d2148[237] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[85])),TRUE); /* condition-type? */
  scm__rc.d2148[236] = Scm_MakeIdentifier(scm__rc.d2148[237], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#condition-type? */
  scm__rc.d2148[238] = Scm_MakeIdentifier(scm__rc.d2148[67], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#error */
  scm__rc.d2148[240] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[87])),TRUE); /* <condition-meta> */
  scm__rc.d2148[239] = Scm_MakeIdentifier(scm__rc.d2148[240], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<condition-meta> */
  scm__rc.d2148[241] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[88]))); /* :name */
  scm__rc.d2148[242] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[89]))); /* :supers */
  scm__rc.d2148[243] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[90]))); /* :slots */
  scm__rc.d2148[245] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[91])),TRUE); /* make */
  scm__rc.d2148[244] = Scm_MakeIdentifier(scm__rc.d2148[245], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#make */
  scm__rc.d2148[246] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[88])),TRUE); /* name */
  scm__rc.d2148[247] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[92])),TRUE); /* parent */
  scm__rc.d2148[248] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[93])),TRUE); /* field-names */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[194]), scm__rc.d2148[248]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[195]), scm__rc.d2148[247]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[196]), scm__rc.d2148[246]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[199]), scm__rc.d2148[16]);
  scm__rc.d2148[249] = Scm_MakeExtendedPair(scm__rc.d2148[235], SCM_OBJ(&scm__rc.d2153[196]), SCM_OBJ(&scm__rc.d2153[200]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[201]), scm__rc.d2148[249]);
  scm__rc.d2148[250] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[17]))->name = scm__rc.d2148[235];/* make-condition-type */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[17]))->debugInfo = scm__rc.d2148[250];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]))[4] = SCM_WORD(scm__rc.d2148[236]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]))[15] = SCM_WORD(scm__rc.d2148[238]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]))[17] = SCM_WORD(scm__rc.d2148[239]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]))[19] = SCM_WORD(scm__rc.d2148[241]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]))[22] = SCM_WORD(scm__rc.d2148[242]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]))[27] = SCM_WORD(scm__rc.d2148[243]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[363]))[30] = SCM_WORD(scm__rc.d2148[244]);
  scm__rc.d2148[251] = Scm_MakeIdentifier(scm__rc.d2148[235], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#make-condition-type */
  scm__rc.d2148[252] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[18]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[18]))->debugInfo = scm__rc.d2148[252];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[395]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[395]))[6] = SCM_WORD(scm__rc.d2148[235]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[395]))[13] = SCM_WORD(scm__rc.d2148[251]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[204]), scm__rc.d2148[16]);
  scm__rc.d2148[253] = Scm_MakeExtendedPair(scm__rc.d2148[237], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[205]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[206]), scm__rc.d2148[253]);
  scm__rc.d2148[254] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[19]))->name = scm__rc.d2148[237];/* condition-type? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[19]))->debugInfo = scm__rc.d2148[254];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[410]))[2] = SCM_WORD(scm__rc.d2148[239]);
  scm__rc.d2148[255] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[20]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[20]))->debugInfo = scm__rc.d2148[255];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[415]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[415]))[6] = SCM_WORD(scm__rc.d2148[237]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[415]))[13] = SCM_WORD(scm__rc.d2148[236]);
  scm__rc.d2148[256] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[94])),TRUE); /* make-condition */
  scm__rc.d2148[258] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[97])),TRUE); /* slot-exists? */
  scm__rc.d2148[257] = Scm_MakeIdentifier(scm__rc.d2148[258], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#slot-exists? */
  scm__rc.d2148[260] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[99])),TRUE); /* errorf */
  scm__rc.d2148[259] = Scm_MakeIdentifier(scm__rc.d2148[260], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#errorf */
  scm__rc.d2148[261] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[100])),TRUE); /* type */
  scm__rc.d2148[262] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[101])),TRUE); /* initargs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[207]), scm__rc.d2148[261]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2153[207]), scm__rc.d2148[262]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[210]), scm__rc.d2148[16]);
  scm__rc.d2148[263] = Scm_MakeExtendedPair(scm__rc.d2148[256], SCM_OBJ(&scm__rc.d2153[207]), SCM_OBJ(&scm__rc.d2153[211]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[212]), scm__rc.d2148[263]);
  scm__rc.d2148[264] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[21]))->name = scm__rc.d2148[256];/* make-condition */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[21]))->debugInfo = scm__rc.d2148[264];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]))[4] = SCM_WORD(scm__rc.d2148[236]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]))[15] = SCM_WORD(scm__rc.d2148[238]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]))[20] = SCM_WORD(scm__rc.d2148[244]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]))[35] = SCM_WORD(scm__rc.d2148[238]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]))[42] = SCM_WORD(scm__rc.d2148[257]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[430]))[61] = SCM_WORD(scm__rc.d2148[259]);
  scm__rc.d2148[265] = Scm_MakeIdentifier(scm__rc.d2148[256], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#make-condition */
  scm__rc.d2148[266] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[22]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[22]))->debugInfo = scm__rc.d2148[266];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[494]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[494]))[6] = SCM_WORD(scm__rc.d2148[256]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[494]))[13] = SCM_WORD(scm__rc.d2148[265]);
  scm__rc.d2148[267] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[102])),TRUE); /* slot */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[213]), scm__rc.d2148[267]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[214]), scm__rc.d2148[45]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[217]), scm__rc.d2148[16]);
  scm__rc.d2148[268] = Scm_MakeExtendedPair(scm__rc.d2148[63], SCM_OBJ(&scm__rc.d2153[214]), SCM_OBJ(&scm__rc.d2153[218]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[219]), scm__rc.d2148[268]);
  scm__rc.d2148[269] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[23]))->name = scm__rc.d2148[63];/* condition-ref */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[23]))->debugInfo = scm__rc.d2148[269];
  scm__rc.d2148[270] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[24]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[24]))->debugInfo = scm__rc.d2148[270];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[513]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[513]))[6] = SCM_WORD(scm__rc.d2148[63]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[513]))[13] = SCM_WORD(scm__rc.d2148[71]);
  scm__rc.d2148[271] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[103])),TRUE); /* extract-condition */
  scm__rc.d2148[273] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[105])),TRUE); /* class-slots */
  scm__rc.d2148[272] = Scm_MakeIdentifier(scm__rc.d2148[273], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#class-slots */
  scm__rc.d2148[275] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[106])),TRUE); /* slot-definition-name */
  scm__rc.d2148[274] = Scm_MakeIdentifier(scm__rc.d2148[275], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#slot-definition-name */
  scm__rc.d2148[277] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[107])),TRUE); /* slot-bound? */
  scm__rc.d2148[276] = Scm_MakeIdentifier(scm__rc.d2148[277], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#slot-bound? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[220]), scm__rc.d2148[261]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[221]), scm__rc.d2148[45]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[224]), scm__rc.d2148[16]);
  scm__rc.d2148[278] = Scm_MakeExtendedPair(scm__rc.d2148[271], SCM_OBJ(&scm__rc.d2153[221]), SCM_OBJ(&scm__rc.d2153[225]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[226]), scm__rc.d2148[278]);
  scm__rc.d2148[279] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[25]))->name = scm__rc.d2148[271];/* extract-condition */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[25]))->debugInfo = scm__rc.d2148[279];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]))[5] = SCM_WORD(scm__rc.d2148[70]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]))[17] = SCM_WORD(scm__rc.d2148[259]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]))[22] = SCM_WORD(scm__rc.d2148[244]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]))[28] = SCM_WORD(scm__rc.d2148[272]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]))[38] = SCM_WORD(scm__rc.d2148[274]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[528]))[45] = SCM_WORD(scm__rc.d2148[276]);
  scm__rc.d2148[280] = Scm_MakeIdentifier(scm__rc.d2148[271], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#extract-condition */
  scm__rc.d2148[281] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[26])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[26]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[26]))->debugInfo = scm__rc.d2148[281];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[590]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[590]))[6] = SCM_WORD(scm__rc.d2148[271]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[590]))[13] = SCM_WORD(scm__rc.d2148[280]);
  scm__rc.d2148[282] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[108])),TRUE); /* &condition */
  scm__rc.d2148[283] = Scm_MakeIdentifier(scm__rc.d2148[282], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&condition */
  scm__rc.d2148[284] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[27])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[27]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[27]))->debugInfo = scm__rc.d2148[284];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[605]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[605]))[6] = SCM_WORD(scm__rc.d2148[282]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[605]))[10] = SCM_WORD(scm__rc.d2148[3]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[605]))[13] = SCM_WORD(scm__rc.d2148[283]);
  scm__rc.d2148[285] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[109])),TRUE); /* &message */
  scm__rc.d2148[286] = Scm_MakeIdentifier(scm__rc.d2148[285], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&message */
  scm__rc.d2148[287] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[28])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[28]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[28]))->debugInfo = scm__rc.d2148[287];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[620]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[620]))[6] = SCM_WORD(scm__rc.d2148[285]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[620]))[10] = SCM_WORD(scm__rc.d2148[69]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[620]))[13] = SCM_WORD(scm__rc.d2148[286]);
  scm__rc.d2148[288] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[110])),TRUE); /* &serious */
  scm__rc.d2148[290] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[111])),TRUE); /* <serious-condition> */
  scm__rc.d2148[289] = Scm_MakeIdentifier(scm__rc.d2148[290], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<serious-condition> */
  scm__rc.d2148[291] = Scm_MakeIdentifier(scm__rc.d2148[288], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&serious */
  scm__rc.d2148[292] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[29])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[29]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[29]))->debugInfo = scm__rc.d2148[292];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[635]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[635]))[6] = SCM_WORD(scm__rc.d2148[288]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[635]))[10] = SCM_WORD(scm__rc.d2148[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[635]))[13] = SCM_WORD(scm__rc.d2148[291]);
  scm__rc.d2148[293] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[112])),TRUE); /* &error */
  scm__rc.d2148[295] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[113])),TRUE); /* <error> */
  scm__rc.d2148[294] = Scm_MakeIdentifier(scm__rc.d2148[295], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<error> */
  scm__rc.d2148[296] = Scm_MakeIdentifier(scm__rc.d2148[293], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&error */
  scm__rc.d2148[297] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[30])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[30]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[30]))->debugInfo = scm__rc.d2148[297];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[650]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[650]))[6] = SCM_WORD(scm__rc.d2148[293]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[650]))[10] = SCM_WORD(scm__rc.d2148[294]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[650]))[13] = SCM_WORD(scm__rc.d2148[296]);
  scm__rc.d2148[298] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[114])),TRUE); /* &i/o-error */
  scm__rc.d2148[300] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[115])),TRUE); /* <io-error> */
  scm__rc.d2148[299] = Scm_MakeIdentifier(scm__rc.d2148[300], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<io-error> */
  scm__rc.d2148[301] = Scm_MakeIdentifier(scm__rc.d2148[298], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&i/o-error */
  scm__rc.d2148[302] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[31])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[31]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[31]))->debugInfo = scm__rc.d2148[302];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[665]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[665]))[6] = SCM_WORD(scm__rc.d2148[298]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[665]))[10] = SCM_WORD(scm__rc.d2148[299]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[665]))[13] = SCM_WORD(scm__rc.d2148[301]);
  scm__rc.d2148[303] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[116])),TRUE); /* &i/o-port-error */
  scm__rc.d2148[305] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[117])),TRUE); /* <port-error> */
  scm__rc.d2148[304] = Scm_MakeIdentifier(scm__rc.d2148[305], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<port-error> */
  scm__rc.d2148[306] = Scm_MakeIdentifier(scm__rc.d2148[303], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&i/o-port-error */
  scm__rc.d2148[307] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[32])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[32]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[32]))->debugInfo = scm__rc.d2148[307];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[680]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[680]))[6] = SCM_WORD(scm__rc.d2148[303]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[680]))[10] = SCM_WORD(scm__rc.d2148[304]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[680]))[13] = SCM_WORD(scm__rc.d2148[306]);
  scm__rc.d2148[308] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[118])),TRUE); /* &i/o-read-error */
  scm__rc.d2148[310] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[119])),TRUE); /* <io-read-error> */
  scm__rc.d2148[309] = Scm_MakeIdentifier(scm__rc.d2148[310], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<io-read-error> */
  scm__rc.d2148[311] = Scm_MakeIdentifier(scm__rc.d2148[308], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&i/o-read-error */
  scm__rc.d2148[312] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[33]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[33]))->debugInfo = scm__rc.d2148[312];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[695]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[695]))[6] = SCM_WORD(scm__rc.d2148[308]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[695]))[10] = SCM_WORD(scm__rc.d2148[309]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[695]))[13] = SCM_WORD(scm__rc.d2148[311]);
  scm__rc.d2148[313] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[120])),TRUE); /* &i/o-write-error */
  scm__rc.d2148[315] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[121])),TRUE); /* <io-write-error> */
  scm__rc.d2148[314] = Scm_MakeIdentifier(scm__rc.d2148[315], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<io-write-error> */
  scm__rc.d2148[316] = Scm_MakeIdentifier(scm__rc.d2148[313], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&i/o-write-error */
  scm__rc.d2148[317] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[34])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[34]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[34]))->debugInfo = scm__rc.d2148[317];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[710]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[710]))[6] = SCM_WORD(scm__rc.d2148[313]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[710]))[10] = SCM_WORD(scm__rc.d2148[314]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[710]))[13] = SCM_WORD(scm__rc.d2148[316]);
  scm__rc.d2148[318] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[122])),TRUE); /* &i/o-closed-error */
  scm__rc.d2148[320] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[123])),TRUE); /* <io-closed-error> */
  scm__rc.d2148[319] = Scm_MakeIdentifier(scm__rc.d2148[320], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<io-closed-error> */
  scm__rc.d2148[321] = Scm_MakeIdentifier(scm__rc.d2148[318], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&i/o-closed-error */
  scm__rc.d2148[322] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[35])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[35]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[35]))->debugInfo = scm__rc.d2148[322];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[725]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[725]))[6] = SCM_WORD(scm__rc.d2148[318]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[725]))[10] = SCM_WORD(scm__rc.d2148[319]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[725]))[13] = SCM_WORD(scm__rc.d2148[321]);
  scm__rc.d2148[323] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[124])),TRUE); /* &read-error */
  scm__rc.d2148[325] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[125])),TRUE); /* <read-error> */
  scm__rc.d2148[324] = Scm_MakeIdentifier(scm__rc.d2148[325], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<read-error> */
  scm__rc.d2148[326] = Scm_MakeIdentifier(scm__rc.d2148[323], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&read-error */
  scm__rc.d2148[327] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[36])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[36]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[36]))->debugInfo = scm__rc.d2148[327];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[740]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[740]))[6] = SCM_WORD(scm__rc.d2148[323]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[740]))[10] = SCM_WORD(scm__rc.d2148[324]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[740]))[13] = SCM_WORD(scm__rc.d2148[326]);
  scm__rc.d2148[328] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[126])),TRUE); /* message-condition? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[229]), scm__rc.d2148[16]);
  scm__rc.d2148[329] = Scm_MakeExtendedPair(scm__rc.d2148[328], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[230]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[231]), scm__rc.d2148[329]);
  scm__rc.d2148[330] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[37])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[37]))->name = scm__rc.d2148[328];/* message-condition? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[37]))->debugInfo = scm__rc.d2148[330];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[755]))[2] = SCM_WORD(scm__rc.d2148[69]);
  scm__rc.d2148[331] = Scm_MakeIdentifier(scm__rc.d2148[328], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#message-condition? */
  scm__rc.d2148[332] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[38])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[38]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[38]))->debugInfo = scm__rc.d2148[332];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[760]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[760]))[6] = SCM_WORD(scm__rc.d2148[328]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[760]))[13] = SCM_WORD(scm__rc.d2148[331]);
  scm__rc.d2148[333] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[127])),TRUE); /* serious-condition? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[234]), scm__rc.d2148[16]);
  scm__rc.d2148[334] = Scm_MakeExtendedPair(scm__rc.d2148[333], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[235]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[236]), scm__rc.d2148[334]);
  scm__rc.d2148[335] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[39])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[39]))->name = scm__rc.d2148[333];/* serious-condition? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[39]))->debugInfo = scm__rc.d2148[335];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[775]))[2] = SCM_WORD(scm__rc.d2148[289]);
  scm__rc.d2148[336] = Scm_MakeIdentifier(scm__rc.d2148[333], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#serious-condition? */
  scm__rc.d2148[337] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[40])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[40]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[40]))->debugInfo = scm__rc.d2148[337];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[780]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[780]))[6] = SCM_WORD(scm__rc.d2148[333]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[780]))[13] = SCM_WORD(scm__rc.d2148[336]);
  scm__rc.d2148[338] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[128])),TRUE); /* error? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[239]), scm__rc.d2148[16]);
  scm__rc.d2148[339] = Scm_MakeExtendedPair(scm__rc.d2148[338], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[240]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[241]), scm__rc.d2148[339]);
  scm__rc.d2148[340] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[41])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[41]))->name = scm__rc.d2148[338];/* error? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[41]))->debugInfo = scm__rc.d2148[340];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[795]))[2] = SCM_WORD(scm__rc.d2148[294]);
  scm__rc.d2148[341] = Scm_MakeIdentifier(scm__rc.d2148[338], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#error? */
  scm__rc.d2148[342] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[42])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[42]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[42]))->debugInfo = scm__rc.d2148[342];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[800]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[800]))[6] = SCM_WORD(scm__rc.d2148[338]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[800]))[13] = SCM_WORD(scm__rc.d2148[341]);
  scm__rc.d2148[343] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[129])),TRUE); /* &continuation */
  scm__rc.d2148[345] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[130])),TRUE); /* <continuation-violation> */
  scm__rc.d2148[344] = Scm_MakeIdentifier(scm__rc.d2148[345], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#<continuation-violation> */
  scm__rc.d2148[346] = Scm_MakeIdentifier(scm__rc.d2148[343], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#&continuation */
  scm__rc.d2148[347] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[43])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[43]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[43]))->debugInfo = scm__rc.d2148[347];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[815]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[815]))[6] = SCM_WORD(scm__rc.d2148[343]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[815]))[10] = SCM_WORD(scm__rc.d2148[344]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[815]))[13] = SCM_WORD(scm__rc.d2148[346]);
  scm__rc.d2148[348] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[131])),TRUE); /* make-continuation-violation */
  scm__rc.d2148[349] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[132]))); /* :prompt-tag */
  scm__rc.d2148[350] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[133])),TRUE); /* tag */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[242]), scm__rc.d2148[350]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[245]), scm__rc.d2148[16]);
  scm__rc.d2148[351] = Scm_MakeExtendedPair(scm__rc.d2148[348], SCM_OBJ(&scm__rc.d2153[242]), SCM_OBJ(&scm__rc.d2153[246]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[247]), scm__rc.d2148[351]);
  scm__rc.d2148[352] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[44])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[44]))->name = scm__rc.d2148[348];/* make-continuation-violation */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[44]))->debugInfo = scm__rc.d2148[352];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[830]))[1] = SCM_WORD(scm__rc.d2148[344]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[830]))[3] = SCM_WORD(scm__rc.d2148[349]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[830]))[6] = SCM_WORD(scm__rc.d2148[244]);
  scm__rc.d2148[353] = Scm_MakeIdentifier(scm__rc.d2148[348], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#make-continuation-violation */
  scm__rc.d2148[354] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[45])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[45]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[45]))->debugInfo = scm__rc.d2148[354];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[838]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[838]))[6] = SCM_WORD(scm__rc.d2148[348]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[838]))[13] = SCM_WORD(scm__rc.d2148[353]);
  scm__rc.d2148[355] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[134])),TRUE); /* continuation-violation? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[250]), scm__rc.d2148[16]);
  scm__rc.d2148[356] = Scm_MakeExtendedPair(scm__rc.d2148[355], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[251]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[252]), scm__rc.d2148[356]);
  scm__rc.d2148[357] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[46])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[46]))->name = scm__rc.d2148[355];/* continuation-violation? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[46]))->debugInfo = scm__rc.d2148[357];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[853]))[2] = SCM_WORD(scm__rc.d2148[344]);
  scm__rc.d2148[358] = Scm_MakeIdentifier(scm__rc.d2148[355], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#continuation-violation? */
  scm__rc.d2148[359] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[47])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[47]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[47]))->debugInfo = scm__rc.d2148[359];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[858]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[858]))[6] = SCM_WORD(scm__rc.d2148[355]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[858]))[13] = SCM_WORD(scm__rc.d2148[358]);
  scm__rc.d2148[360] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[135])),TRUE); /* continuation-violation-prompt-tag */
  scm__rc.d2148[361] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[136])),TRUE); /* condition */
  scm__rc.d2148[362] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[132])),TRUE); /* prompt-tag */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[253]), scm__rc.d2148[361]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[256]), scm__rc.d2148[16]);
  scm__rc.d2148[363] = Scm_MakeExtendedPair(scm__rc.d2148[360], SCM_OBJ(&scm__rc.d2153[253]), SCM_OBJ(&scm__rc.d2153[257]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[258]), scm__rc.d2148[363]);
  scm__rc.d2148[364] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[48])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[48]))->name = scm__rc.d2148[360];/* continuation-violation-prompt-tag */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[48]))->debugInfo = scm__rc.d2148[364];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]))[4] = SCM_WORD(scm__rc.d2148[344]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]))[6] = SCM_WORD(scm__rc.d2148[79]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]))[15] = SCM_WORD(scm__rc.d2148[361]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]))[17] = SCM_WORD(scm__rc.d2148[344]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]))[20] = SCM_WORD(scm__rc.d2148[82]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]))[23] = SCM_WORD(scm__rc.d2148[362]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[873]))[25] = SCM_WORD(scm__rc.d2148[86]);
  scm__rc.d2148[365] = Scm_MakeIdentifier(scm__rc.d2148[360], SCM_MODULE(scm__rc.d2148[5]), SCM_NIL); /* gauche#continuation-violation-prompt-tag */
  scm__rc.d2148[366] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[49])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[49]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[49]))->debugInfo = scm__rc.d2148[366];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[900]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[900]))[6] = SCM_WORD(scm__rc.d2148[360]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[900]))[13] = SCM_WORD(scm__rc.d2148[365]);
  scm__rc.d2148[368] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[137])),TRUE); /* gauche.threads */
  scm__rc.d2148[367] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2148[368]), SCM_FIND_MODULE_CREATE)); /* module gauche.threads */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2148[367]));
  Scm_InitStaticClassWithMeta(&Scm_ThreadExceptionClass, "<thread-exception>", SCM_MODULE(scm__rc.d2148[367]), NULL, SCM_FALSE, Scm_ThreadExceptionClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_JoinTimeoutExceptionClass, "<join-timeout-exception>", SCM_MODULE(scm__rc.d2148[367]), NULL, SCM_FALSE, NULL, 0);
  Scm_InitStaticClassWithMeta(&Scm_AbandonedMutexExceptionClass, "<abandoned-mutex-exception>", SCM_MODULE(scm__rc.d2148[367]), NULL, SCM_FALSE, Scm_AbandonedMutexExceptionClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_TerminatedThreadExceptionClass, "<terminated-thread-exception>", SCM_MODULE(scm__rc.d2148[367]), NULL, SCM_FALSE, Scm_TerminatedThreadExceptionClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_UncaughtExceptionClass, "<uncaught-exception>", SCM_MODULE(scm__rc.d2148[367]), NULL, SCM_FALSE, Scm_UncaughtExceptionClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_ConcurrentModificationViolationClass, "<concurrent-modification-violation>", SCM_MODULE(scm__rc.d2148[367]), NULL, SCM_FALSE, NULL, 0);
  scm__rc.d2148[369] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[138])),TRUE); /* &thread */
  scm__rc.d2148[371] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[139])),TRUE); /* <thread-exception> */
  scm__rc.d2148[372] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2148[368]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.threads */
  scm__rc.d2148[370] = Scm_MakeIdentifier(scm__rc.d2148[371], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#<thread-exception> */
  scm__rc.d2148[373] = Scm_MakeIdentifier(scm__rc.d2148[369], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#&thread */
  scm__rc.d2148[374] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[50])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[50]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[50]))->debugInfo = scm__rc.d2148[374];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[915]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[915]))[6] = SCM_WORD(scm__rc.d2148[369]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[915]))[10] = SCM_WORD(scm__rc.d2148[370]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[915]))[13] = SCM_WORD(scm__rc.d2148[373]);
  scm__rc.d2148[375] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[140])),TRUE); /* make-thread-condition */
  scm__rc.d2148[376] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[141]))); /* :thread */
  scm__rc.d2148[378] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[142])),TRUE); /* current-thread */
  scm__rc.d2148[377] = Scm_MakeIdentifier(scm__rc.d2148[378], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#current-thread */
  scm__rc.d2148[379] = Scm_MakeIdentifier(scm__rc.d2148[245], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#make */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[261]), scm__rc.d2148[16]);
  scm__rc.d2148[380] = Scm_MakeExtendedPair(scm__rc.d2148[375], SCM_NIL, SCM_OBJ(&scm__rc.d2153[262]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[263]), scm__rc.d2148[380]);
  scm__rc.d2148[381] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[51])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[51]))->name = scm__rc.d2148[375];/* make-thread-condition */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[51]))->debugInfo = scm__rc.d2148[381];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[930]))[1] = SCM_WORD(scm__rc.d2148[370]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[930]))[3] = SCM_WORD(scm__rc.d2148[376]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[930]))[7] = SCM_WORD(scm__rc.d2148[377]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[930]))[9] = SCM_WORD(scm__rc.d2148[379]);
  scm__rc.d2148[382] = Scm_MakeIdentifier(scm__rc.d2148[375], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#make-thread-condition */
  scm__rc.d2148[383] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[52])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[52]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[52]))->debugInfo = scm__rc.d2148[383];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[941]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[941]))[6] = SCM_WORD(scm__rc.d2148[375]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[941]))[13] = SCM_WORD(scm__rc.d2148[382]);
  scm__rc.d2148[384] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[143])),TRUE); /* thread-condition? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[266]), scm__rc.d2148[16]);
  scm__rc.d2148[385] = Scm_MakeExtendedPair(scm__rc.d2148[384], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[267]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[268]), scm__rc.d2148[385]);
  scm__rc.d2148[386] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[53])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[53]))->name = scm__rc.d2148[384];/* thread-condition? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[53]))->debugInfo = scm__rc.d2148[386];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[956]))[2] = SCM_WORD(scm__rc.d2148[370]);
  scm__rc.d2148[387] = Scm_MakeIdentifier(scm__rc.d2148[384], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#thread-condition? */
  scm__rc.d2148[388] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[54])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[54]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[54]))->debugInfo = scm__rc.d2148[388];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[961]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[961]))[6] = SCM_WORD(scm__rc.d2148[384]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[961]))[13] = SCM_WORD(scm__rc.d2148[387]);
  scm__rc.d2148[389] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[144])),TRUE); /* &uncaught-exception */
  scm__rc.d2148[391] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[145])),TRUE); /* <uncaught-exception> */
  scm__rc.d2148[390] = Scm_MakeIdentifier(scm__rc.d2148[391], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#<uncaught-exception> */
  scm__rc.d2148[392] = Scm_MakeIdentifier(scm__rc.d2148[389], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#&uncaught-exception */
  scm__rc.d2148[393] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[55])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[55]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[55]))->debugInfo = scm__rc.d2148[393];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[976]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[976]))[6] = SCM_WORD(scm__rc.d2148[389]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[976]))[10] = SCM_WORD(scm__rc.d2148[390]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[976]))[13] = SCM_WORD(scm__rc.d2148[392]);
  scm__rc.d2148[394] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[146])),TRUE); /* make-uncaught-exception-condition */
  scm__rc.d2148[395] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2149[147]))); /* :reason */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[271]), scm__rc.d2148[16]);
  scm__rc.d2148[396] = Scm_MakeExtendedPair(scm__rc.d2148[394], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[272]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[273]), scm__rc.d2148[396]);
  scm__rc.d2148[397] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[56])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[56]))->name = scm__rc.d2148[394];/* make-uncaught-exception-condition */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[56]))->debugInfo = scm__rc.d2148[397];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[991]))[1] = SCM_WORD(scm__rc.d2148[390]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[991]))[3] = SCM_WORD(scm__rc.d2148[395]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[991]))[6] = SCM_WORD(scm__rc.d2148[379]);
  scm__rc.d2148[398] = Scm_MakeIdentifier(scm__rc.d2148[394], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#make-uncaught-exception-condition */
  scm__rc.d2148[399] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[57])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[57]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[57]))->debugInfo = scm__rc.d2148[399];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[999]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[999]))[6] = SCM_WORD(scm__rc.d2148[394]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[999]))[13] = SCM_WORD(scm__rc.d2148[398]);
  scm__rc.d2148[400] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[148])),TRUE); /* uncaught-exception-condition? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[276]), scm__rc.d2148[16]);
  scm__rc.d2148[401] = Scm_MakeExtendedPair(scm__rc.d2148[400], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[277]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[278]), scm__rc.d2148[401]);
  scm__rc.d2148[402] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[58])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[58]))->name = scm__rc.d2148[400];/* uncaught-exception-condition? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[58]))->debugInfo = scm__rc.d2148[402];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1014]))[2] = SCM_WORD(scm__rc.d2148[390]);
  scm__rc.d2148[403] = Scm_MakeIdentifier(scm__rc.d2148[400], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#uncaught-exception-condition? */
  scm__rc.d2148[404] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[59])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[59]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[59]))->debugInfo = scm__rc.d2148[404];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1019]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1019]))[6] = SCM_WORD(scm__rc.d2148[400]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1019]))[13] = SCM_WORD(scm__rc.d2148[403]);
  scm__rc.d2148[405] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[149])),TRUE); /* uncaught-exception-condition-reason */
  scm__rc.d2148[406] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[147])),TRUE); /* reason */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[281]), scm__rc.d2148[16]);
  scm__rc.d2148[407] = Scm_MakeExtendedPair(scm__rc.d2148[405], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[282]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[283]), scm__rc.d2148[407]);
  scm__rc.d2148[408] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[60])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[60]))->name = scm__rc.d2148[405];/* uncaught-exception-condition-reason */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[60]))->debugInfo = scm__rc.d2148[408];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]))[4] = SCM_WORD(scm__rc.d2148[390]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]))[6] = SCM_WORD(scm__rc.d2148[79]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]))[15] = SCM_WORD(scm__rc.d2148[204]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]))[17] = SCM_WORD(scm__rc.d2148[390]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]))[20] = SCM_WORD(scm__rc.d2148[82]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1034]))[23] = SCM_WORD(scm__rc.d2148[406]);
  scm__rc.d2148[409] = Scm_MakeIdentifier(scm__rc.d2148[405], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#uncaught-exception-condition-reason */
  scm__rc.d2148[410] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[61])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[61]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[61]))->debugInfo = scm__rc.d2148[410];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1059]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1059]))[6] = SCM_WORD(scm__rc.d2148[405]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1059]))[13] = SCM_WORD(scm__rc.d2148[409]);
  scm__rc.d2148[411] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[150])),TRUE); /* &thread-already-terminated */
  scm__rc.d2148[413] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[151])),TRUE); /* <terminated-thread-exception> */
  scm__rc.d2148[412] = Scm_MakeIdentifier(scm__rc.d2148[413], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#<terminated-thread-exception> */
  scm__rc.d2148[414] = Scm_MakeIdentifier(scm__rc.d2148[411], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#&thread-already-terminated */
  scm__rc.d2148[415] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[62])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[62]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[62]))->debugInfo = scm__rc.d2148[415];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1074]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1074]))[6] = SCM_WORD(scm__rc.d2148[411]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1074]))[10] = SCM_WORD(scm__rc.d2148[412]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1074]))[13] = SCM_WORD(scm__rc.d2148[414]);
  scm__rc.d2148[416] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[152])),TRUE); /* make-thread-already-terminated-condition */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[286]), scm__rc.d2148[16]);
  scm__rc.d2148[417] = Scm_MakeExtendedPair(scm__rc.d2148[416], SCM_NIL, SCM_OBJ(&scm__rc.d2153[287]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[288]), scm__rc.d2148[417]);
  scm__rc.d2148[418] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[63])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[63]))->name = scm__rc.d2148[416];/* make-thread-already-terminated-condition */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[63]))->debugInfo = scm__rc.d2148[418];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1089]))[1] = SCM_WORD(scm__rc.d2148[412]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1089]))[3] = SCM_WORD(scm__rc.d2148[379]);
  scm__rc.d2148[419] = Scm_MakeIdentifier(scm__rc.d2148[416], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#make-thread-already-terminated-condition */
  scm__rc.d2148[420] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[64])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[64]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[64]))->debugInfo = scm__rc.d2148[420];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1094]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1094]))[6] = SCM_WORD(scm__rc.d2148[416]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1094]))[13] = SCM_WORD(scm__rc.d2148[419]);
  scm__rc.d2148[421] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[153])),TRUE); /* thread-already-terminated-condition? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[291]), scm__rc.d2148[16]);
  scm__rc.d2148[422] = Scm_MakeExtendedPair(scm__rc.d2148[421], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[292]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[293]), scm__rc.d2148[422]);
  scm__rc.d2148[423] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[65])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[65]))->name = scm__rc.d2148[421];/* thread-already-terminated-condition? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[65]))->debugInfo = scm__rc.d2148[423];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1109]))[2] = SCM_WORD(scm__rc.d2148[412]);
  scm__rc.d2148[424] = Scm_MakeIdentifier(scm__rc.d2148[421], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#thread-already-terminated-condition? */
  scm__rc.d2148[425] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[66])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[66]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[66]))->debugInfo = scm__rc.d2148[425];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1114]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1114]))[6] = SCM_WORD(scm__rc.d2148[421]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1114]))[13] = SCM_WORD(scm__rc.d2148[424]);
  scm__rc.d2148[426] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[154])),TRUE); /* &thread-timeout */
  scm__rc.d2148[428] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[155])),TRUE); /* <join-timeout-exception> */
  scm__rc.d2148[427] = Scm_MakeIdentifier(scm__rc.d2148[428], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#<join-timeout-exception> */
  scm__rc.d2148[429] = Scm_MakeIdentifier(scm__rc.d2148[426], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#&thread-timeout */
  scm__rc.d2148[430] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[67])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[67]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[67]))->debugInfo = scm__rc.d2148[430];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1129]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1129]))[6] = SCM_WORD(scm__rc.d2148[426]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1129]))[10] = SCM_WORD(scm__rc.d2148[427]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1129]))[13] = SCM_WORD(scm__rc.d2148[429]);
  scm__rc.d2148[431] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[156])),TRUE); /* make-thread-timeout-condition */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[296]), scm__rc.d2148[16]);
  scm__rc.d2148[432] = Scm_MakeExtendedPair(scm__rc.d2148[431], SCM_NIL, SCM_OBJ(&scm__rc.d2153[297]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[298]), scm__rc.d2148[432]);
  scm__rc.d2148[433] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[68])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[68]))->name = scm__rc.d2148[431];/* make-thread-timeout-condition */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[68]))->debugInfo = scm__rc.d2148[433];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1144]))[1] = SCM_WORD(scm__rc.d2148[427]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1144]))[3] = SCM_WORD(scm__rc.d2148[379]);
  scm__rc.d2148[434] = Scm_MakeIdentifier(scm__rc.d2148[431], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#make-thread-timeout-condition */
  scm__rc.d2148[435] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[69])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[69]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[69]))->debugInfo = scm__rc.d2148[435];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1149]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1149]))[6] = SCM_WORD(scm__rc.d2148[431]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1149]))[13] = SCM_WORD(scm__rc.d2148[434]);
  scm__rc.d2148[436] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[157])),TRUE); /* thread-timeout-condition? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[301]), scm__rc.d2148[16]);
  scm__rc.d2148[437] = Scm_MakeExtendedPair(scm__rc.d2148[436], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[302]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[303]), scm__rc.d2148[437]);
  scm__rc.d2148[438] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[70])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[70]))->name = scm__rc.d2148[436];/* thread-timeout-condition? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[70]))->debugInfo = scm__rc.d2148[438];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1164]))[2] = SCM_WORD(scm__rc.d2148[427]);
  scm__rc.d2148[439] = Scm_MakeIdentifier(scm__rc.d2148[436], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#thread-timeout-condition? */
  scm__rc.d2148[440] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[71])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[71]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[71]))->debugInfo = scm__rc.d2148[440];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1169]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1169]))[6] = SCM_WORD(scm__rc.d2148[436]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1169]))[13] = SCM_WORD(scm__rc.d2148[439]);
  scm__rc.d2148[441] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[158])),TRUE); /* &thread-abandoned-mutex */
  scm__rc.d2148[443] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[159])),TRUE); /* <abandoned-mutex-exception> */
  scm__rc.d2148[442] = Scm_MakeIdentifier(scm__rc.d2148[443], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#<abandoned-mutex-exception> */
  scm__rc.d2148[444] = Scm_MakeIdentifier(scm__rc.d2148[441], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#&thread-abandoned-mutex */
  scm__rc.d2148[445] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[72])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[72]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[72]))->debugInfo = scm__rc.d2148[445];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1184]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1184]))[6] = SCM_WORD(scm__rc.d2148[441]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1184]))[10] = SCM_WORD(scm__rc.d2148[442]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1184]))[13] = SCM_WORD(scm__rc.d2148[444]);
  scm__rc.d2148[446] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[160])),TRUE); /* make-thread-abandoned-mutex-condition */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[306]), scm__rc.d2148[16]);
  scm__rc.d2148[447] = Scm_MakeExtendedPair(scm__rc.d2148[446], SCM_NIL, SCM_OBJ(&scm__rc.d2153[307]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[308]), scm__rc.d2148[447]);
  scm__rc.d2148[448] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[73])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[73]))->name = scm__rc.d2148[446];/* make-thread-abandoned-mutex-condition */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[73]))->debugInfo = scm__rc.d2148[448];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1199]))[1] = SCM_WORD(scm__rc.d2148[442]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1199]))[3] = SCM_WORD(scm__rc.d2148[379]);
  scm__rc.d2148[449] = Scm_MakeIdentifier(scm__rc.d2148[446], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#make-thread-abandoned-mutex-condition */
  scm__rc.d2148[450] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[74])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[74]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[74]))->debugInfo = scm__rc.d2148[450];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1204]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1204]))[6] = SCM_WORD(scm__rc.d2148[446]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1204]))[13] = SCM_WORD(scm__rc.d2148[449]);
  scm__rc.d2148[451] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[161])),TRUE); /* thread-abandoned-mutex-condition? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[311]), scm__rc.d2148[16]);
  scm__rc.d2148[452] = Scm_MakeExtendedPair(scm__rc.d2148[451], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[312]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[313]), scm__rc.d2148[452]);
  scm__rc.d2148[453] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[75])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[75]))->name = scm__rc.d2148[451];/* thread-abandoned-mutex-condition? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[75]))->debugInfo = scm__rc.d2148[453];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1219]))[2] = SCM_WORD(scm__rc.d2148[442]);
  scm__rc.d2148[454] = Scm_MakeIdentifier(scm__rc.d2148[451], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#thread-abandoned-mutex-condition? */
  scm__rc.d2148[455] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[76])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[76]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[76]))->debugInfo = scm__rc.d2148[455];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1224]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1224]))[6] = SCM_WORD(scm__rc.d2148[451]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1224]))[13] = SCM_WORD(scm__rc.d2148[454]);
  scm__rc.d2148[456] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[162])),TRUE); /* &concurrent-modification */
  scm__rc.d2148[458] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[163])),TRUE); /* <concurrent-modification-violation> */
  scm__rc.d2148[457] = Scm_MakeIdentifier(scm__rc.d2148[458], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#<concurrent-modification-violation> */
  scm__rc.d2148[459] = Scm_MakeIdentifier(scm__rc.d2148[456], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#&concurrent-modification */
  scm__rc.d2148[460] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[77])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[77]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[77]))->debugInfo = scm__rc.d2148[460];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1239]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1239]))[6] = SCM_WORD(scm__rc.d2148[456]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1239]))[10] = SCM_WORD(scm__rc.d2148[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1239]))[13] = SCM_WORD(scm__rc.d2148[459]);
  scm__rc.d2148[461] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[164])),TRUE); /* make-concurrent-modification-violation */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[316]), scm__rc.d2148[16]);
  scm__rc.d2148[462] = Scm_MakeExtendedPair(scm__rc.d2148[461], SCM_NIL, SCM_OBJ(&scm__rc.d2153[317]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[318]), scm__rc.d2148[462]);
  scm__rc.d2148[463] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[78])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[78]))->name = scm__rc.d2148[461];/* make-concurrent-modification-violation */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[78]))->debugInfo = scm__rc.d2148[463];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1254]))[1] = SCM_WORD(scm__rc.d2148[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1254]))[3] = SCM_WORD(scm__rc.d2148[379]);
  scm__rc.d2148[464] = Scm_MakeIdentifier(scm__rc.d2148[461], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#make-concurrent-modification-violation */
  scm__rc.d2148[465] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[79])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[79]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[79]))->debugInfo = scm__rc.d2148[465];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1259]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1259]))[6] = SCM_WORD(scm__rc.d2148[461]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1259]))[13] = SCM_WORD(scm__rc.d2148[464]);
  scm__rc.d2148[466] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[165])),TRUE); /* concurrent-modification-violation? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[321]), scm__rc.d2148[16]);
  scm__rc.d2148[467] = Scm_MakeExtendedPair(scm__rc.d2148[466], SCM_OBJ(&scm__rc.d2153[165]), SCM_OBJ(&scm__rc.d2153[322]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2153[323]), scm__rc.d2148[467]);
  scm__rc.d2148[468] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[80])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[80]))->name = scm__rc.d2148[466];/* concurrent-modification-violation? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[80]))->debugInfo = scm__rc.d2148[468];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1274]))[2] = SCM_WORD(scm__rc.d2148[457]);
  scm__rc.d2148[469] = Scm_MakeIdentifier(scm__rc.d2148[466], SCM_MODULE(scm__rc.d2148[372]), SCM_NIL); /* gauche.threads#concurrent-modification-violation? */
  scm__rc.d2148[470] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2152[81])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[81]))->name = scm__rc.d2148[8];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2151[81]))->debugInfo = scm__rc.d2148[470];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1279]))[3] = SCM_WORD(scm__rc.d2148[0]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1279]))[6] = SCM_WORD(scm__rc.d2148[466]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2150[1279]))[13] = SCM_WORD(scm__rc.d2148[469]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  Scm_InitStaticClassWithMeta(&Scm_CoditionContinuationMixinClass, "<condition-continuation-mixin>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_CoditionContinuationMixinClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_LoadConditionMixinClass, "<load-condition-mixin>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_LoadConditionMixinClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_CompileErrorMixinClass, "<compile-error-mixin>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_CompileErrorMixinClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_FilenameErrorMixinClass, "<io-filename-error>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_FilenameErrorMixinClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_MalformedFilenameErrorClass, "<io-malformed-filename-error>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_MalformedFilenameErrorClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_FileProtectionErrorMixinClass, "<io-file-protection-error>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_FileProtectionErrorMixinClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_FileIsReadOnlyErrorMixinClass, "<io-file-is-read-only-error>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_FileIsReadOnlyErrorMixinClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_FileAlreadyExistsErrorMixinClass, "<io-file-already-exists-error>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_FileAlreadyExistsErrorMixinClass__SLOTS, 0);
  Scm_InitStaticClassWithMeta(&Scm_NoSuchFileErrorMixinClass, "<io-no-such-file-error>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_NoSuchFileErrorMixinClass__SLOTS, 0);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2148[628] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[166])),FALSE); /* G2155 */
  scm__rc.d2148[629] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[167])),FALSE); /* G2156 */
  scm__rc.d2148[630] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[168])),FALSE); /* rest2154 */
  scm__rc.d2148[631] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[169])),TRUE); /* format */
  scm__rc.d2148[632] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[170])),TRUE); /* v */
  scm__rc.d2148[633] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[171])),TRUE); /* assume-type */
  scm__rc.d2148[634] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[172])),TRUE); /* is-a? */
  scm__rc.d2148[635] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[173])),TRUE); /* guard */
  scm__rc.d2148[636] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[174])),TRUE); /* mixins */
  scm__rc.d2148[637] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[175])),TRUE); /* mains */
  scm__rc.d2148[638] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[176])),TRUE); /* receive */
  scm__rc.d2148[639] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[177])),TRUE); /* cut */
  scm__rc.d2148[640] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[178])),TRUE); /* <> */
  scm__rc.d2148[641] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[179])),TRUE); /* values */
  scm__rc.d2148[642] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[180])),TRUE); /* define-in-module */
  scm__rc.d2148[643] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[181])),TRUE); /* args */
  scm__rc.d2148[644] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[182])),TRUE); /* slot-set! */
  scm__rc.d2148[645] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[183])),TRUE); /* slot-ref */
  scm__rc.d2148[646] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[90])),TRUE); /* slots */
  scm__rc.d2148[647] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[184])),TRUE); /* cc */
  scm__rc.d2148[648] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2149[185])),TRUE); /* sn */
}
