/* Generated automatically from libproc.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
#include "gauche/prof.h"
#include "gauche/priv/vmP.h"
#include "gauche/priv/procP.h"
static ScmObj libprocprocedureP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocprocedureP__STUB, 1, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocprocedureP, NULL, NULL);

static ScmObj libprocapply(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libprocapply__STUB, 2, 1,SCM_FALSE,libprocapply, SCM_MAKE_INT(SCM_VM_TAIL_APPLY), NULL);

static ScmObj libproccall_with_current_continuation(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccall_with_current_continuation__STUB, 1, 0,SCM_FALSE,libproccall_with_current_continuation, NULL, NULL);

static ScmObj libprocvalues(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocvalues__STUB, 0, 1,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocvalues, SCM_MAKE_INT(SCM_VM_VALUES), NULL);

static ScmObj libprocdynamic_wind(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libprocdynamic_wind__STUB, 3, 0,SCM_FALSE,libprocdynamic_wind, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 131u, 134u, 7u, 88u, 2u, 1u, 36u, 112u, 96u, 192u, 144u, 9u,
28u, 20u, 48u, 36u, 0u, 71u, 4u, 12u, 16u, 20u, 2u, 32u, 50u, 19u, 1u,
194u, 71u, 3u, 12u, 9u, 134u, 17u, 28u, 8u, 48u, 36u, 6u, 71u, 0u,
12u, 9u, 134u, 17u, 12u, 65u, 129u, 140u, 64u, 112u, 1u, 9u, 133u,
89u, 36u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 6u, 8u, 18u, 5u, 16u, 52u, 7u, 0u, 17u, 1u, 64u, 34u,
3u, 33u, 214u, 0u, 128u, 73u, 36u, 112u, 144u, 192u, 198u, 19u, 3u,
212u, 193u, 80u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u,
7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 134u, 6u, 8u, 18u, 5u, 129u, 224u, 130u, 71u, 9u, 12u, 9u,
4u, 17u, 193u, 195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u,
0u, 48u, 38u, 3u, 132u, 128u,};
static ScmObj libproccontinuationP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccontinuationP__STUB, 1, 0,SCM_FALSE,libproccontinuationP, NULL, NULL);

static ScmObj libproc_25call_2fpc(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproc_25call_2fpc__STUB, 1, 0,SCM_FALSE,libproc_25call_2fpc, NULL, NULL);

static ScmObj libproc_25reset(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproc_25reset__STUB, 1, 0,SCM_FALSE,libproc_25reset, NULL, NULL);

static ScmObj libprocmake_continuation_prompt_tag(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libprocmake_continuation_prompt_tag__STUB, 0, 2,SCM_FALSE,libprocmake_continuation_prompt_tag, NULL, NULL);

static ScmObj libprocdefault_continuation_prompt_tag(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocdefault_continuation_prompt_tag__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocdefault_continuation_prompt_tag, NULL, NULL);

static ScmObj libproccontinuation_prompt_tagP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccontinuation_prompt_tagP__STUB, 1, 0,SCM_FALSE,libproccontinuation_prompt_tagP, NULL, NULL);

static ScmObj libproccall_with_continuation_prompt(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccall_with_continuation_prompt__STUB, 1, 3,SCM_FALSE,libproccall_with_continuation_prompt, NULL, NULL);

static ScmObj libprocabort_current_continuation(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libprocabort_current_continuation__STUB, 1, 1,SCM_FALSE,libprocabort_current_continuation, NULL, NULL);

static ScmObj libproccontinuation_marks(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccontinuation_marks__STUB, 1, 2,SCM_FALSE,libproccontinuation_marks, NULL, NULL);

static ScmObj libproccurrent_continuation_marks(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccurrent_continuation_marks__STUB, 0, 2,SCM_FALSE,libproccurrent_continuation_marks, NULL, NULL);

static ScmObj libproccontinuation_marksP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccontinuation_marksP__STUB, 1, 0,SCM_FALSE,libproccontinuation_marksP, NULL, NULL);

static ScmObj find_immediate_continuation_mark(ScmVM* vm,ScmObj key,ScmObj fallback);
static ScmObj libproccall_with_immediate_continuation_mark(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccall_with_immediate_continuation_mark__STUB, 2, 2,SCM_FALSE,libproccall_with_immediate_continuation_mark, NULL, NULL);

static ScmObj libproccall_with_current_expression_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccall_with_current_expression_name__STUB, 1, 0,SCM_FALSE,libproccall_with_current_expression_name, NULL, NULL);

static ScmObj libproccontinuation_mark_setP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccontinuation_mark_setP__STUB, 1, 0,SCM_FALSE,libproccontinuation_mark_setP, NULL, NULL);

static ScmObj libproccontinuation_mark_set_TOlist(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccontinuation_mark_set_TOlist__STUB, 2, 2,SCM_FALSE,libproccontinuation_mark_set_TOlist, NULL, NULL);

static ScmObj libproccontinuation_mark_set_first(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproccontinuation_mark_set_first__STUB, 2, 3,SCM_FALSE,libproccontinuation_mark_set_first, NULL, NULL);

static unsigned char uvector__00004[] = {
 0u, 3u, 145u, 134u, 8u, 36u, 65u, 80u, 89u, 36u, 114u, 16u, 192u,
152u, 20u, 145u, 200u, 3u, 2u, 65u, 100u, 113u, 224u, 192u, 152u, 20u,
145u, 199u, 3u, 3u, 60u, 24u, 24u, 67u, 24u, 131u, 68u, 22u, 24u, 96u,
226u, 72u, 76u, 7u, 9u, 36u, 113u, 96u, 192u, 152u, 114u, 145u, 196u,
131u, 3u, 92u, 30u, 72u, 226u, 33u, 129u, 32u, 242u, 56u, 128u, 96u,
100u, 2u, 11u, 12u, 161u, 174u, 16u, 33u, 49u, 42u, 13u, 16u, 129u,
36u, 65u, 225u, 148u, 53u, 194u, 4u, 48u, 169u, 13u, 80u, 129u, 36u,
134u, 240u, 152u, 214u, 132u, 195u, 148u, 134u, 69u, 76u, 81u, 73u,
28u, 60u, 48u, 38u, 87u, 100u, 112u, 160u, 192u, 153u, 72u, 145u,
194u, 67u, 2u, 66u, 36u, 112u, 112u, 192u, 153u, 45u, 145u, 192u, 67u,
2u, 100u, 92u, 71u, 0u, 12u, 9u, 8u, 144u, 196u, 24u, 19u, 16u, 82u,
64u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 9u, 65u, 162u, 11u, 12u, 48u, 113u, 36u,
65u, 34u, 10u, 130u, 201u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u,
193u, 152u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u,
224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00006[] = {
 0u, 1u, 136u, 48u, 49u, 136u, 76u, 191u, 18u, 64u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 10u, 66u, 101u, 248u, 145u, 194u, 67u, 3u,
24u, 76u, 12u, 83u, 3u, 226u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u,
129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 128u, 6u, 4u, 133u, 72u, 98u, 12u, 12u, 98u, 21u, 48u, 169u,
36u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 128u, 6u, 4u, 133u, 136u, 98u, 12u, 12u, 112u, 188u, 44u,
73u, 0u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 128u, 6u, 6u, 56u, 94u, 22u, 36u, 49u, 6u, 6u, 49u, 11u, 16u,
229u, 11u, 194u, 196u, 146u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 129u, 134u, 7u, 88u, 98u, 1u, 36u, 112u, 32u, 192u, 144u, 9u,
28u, 0u, 48u, 36u, 48u, 67u, 16u, 96u, 99u, 133u, 194u, 96u, 56u, 73u,
0u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 128u, 6u, 6u, 56u, 92u, 58u, 195u, 16u, 9u, 36u, 49u, 6u, 6u,
56u, 4u, 57u, 66u, 225u, 48u, 49u, 36u, 144u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 136u, 6u, 8u, 102u, 26u, 16u, 216u, 16u, 177u, 14u, 80u,
188u, 44u, 72u, 128u, 67u, 148u, 46u, 29u, 97u, 136u, 4u, 146u, 73u,
28u, 56u, 48u, 38u, 6u, 100u, 112u, 128u, 192u, 199u, 0u, 166u, 16u,
68u, 112u, 80u, 192u, 198u, 19u, 4u, 52u, 193u, 64u, 142u, 0u, 24u,
19u, 3u, 50u, 64u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 137u, 134u, 7u, 56u, 114u, 29u, 36u, 113u, 32u, 192u, 144u,
233u, 28u, 68u, 48u, 36u, 56u, 71u, 12u, 12u, 16u, 244u, 58u, 72u,
225u, 97u, 129u, 33u, 210u, 56u, 56u, 96u, 101u, 14u, 194u, 30u, 135u,
8u, 76u, 42u, 200u, 135u, 200u, 76u, 7u, 9u, 28u, 24u, 48u, 38u, 35u,
196u, 112u, 80u, 192u, 144u, 225u, 28u, 16u, 48u, 50u, 1u, 14u, 8u,
128u, 146u, 19u, 16u, 130u, 71u, 3u, 12u, 9u, 144u, 33u, 28u, 8u, 48u,
36u, 64u, 71u, 0u, 12u, 9u, 144u, 33u, 12u, 65u, 129u, 140u, 68u, 16u,
233u, 13u, 176u, 224u, 76u, 129u, 2u, 98u, 16u, 73u, 32u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 129u, 134u, 8u, 132u, 57u, 8u, 130u, 29u, 33u, 182u, 28u,
17u, 1u, 12u, 161u, 216u, 67u, 208u, 225u, 16u, 244u, 58u, 72u, 135u,
200u, 115u, 135u, 33u, 210u, 73u, 135u, 98u, 34u, 71u, 2u, 12u, 9u,
17u, 17u, 192u, 67u, 2u, 67u, 164u, 112u, 0u, 192u, 145u, 25u, 12u,
65u, 129u, 140u, 68u, 73u, 14u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 18u, 68u, 73u, 14u, 136u, 132u, 57u, 8u,
130u, 29u, 33u, 182u, 28u, 17u, 1u, 12u, 161u, 216u, 67u, 208u, 225u,
16u, 244u, 58u, 72u, 135u, 200u, 115u, 135u, 33u, 210u, 73u, 135u,
98u, 34u, 72u, 225u, 97u, 129u, 140u, 38u, 6u, 41u, 130u, 73u, 28u,
36u, 48u, 38u, 3u, 132u, 112u, 64u, 192u, 152u, 14u, 17u, 192u, 131u,
2u, 96u, 56u, 72u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 156u, 6u, 7u, 16u, 235u, 18u, 196u, 196u, 145u, 205u, 131u,
2u, 96u, 78u, 71u, 53u, 12u, 9u, 19u, 17u, 205u, 3u, 2u, 68u, 164u,
115u, 32u, 192u, 152u, 19u, 145u, 204u, 67u, 2u, 68u, 228u, 114u,
240u, 192u, 202u, 33u, 232u, 152u, 196u, 225u, 48u, 28u, 36u, 114u,
224u, 192u, 152u, 165u, 17u, 203u, 67u, 2u, 68u, 196u, 114u, 192u,
192u, 200u, 4u, 76u, 34u, 72u, 138u, 39u, 36u, 132u, 196u, 252u, 145u,
202u, 131u, 2u, 100u, 36u, 71u, 41u, 12u, 9u, 19u, 145u, 202u, 3u, 2u,
68u, 68u, 114u, 96u, 192u, 153u, 9u, 17u, 201u, 3u, 2u, 68u, 228u,
114u, 48u, 192u, 200u, 4u, 68u, 28u, 226u, 136u, 164u, 146u, 25u, 28u,
64u, 137u, 226u, 114u, 67u, 108u, 76u, 19u, 33u, 32u, 152u, 159u,
146u, 72u, 228u, 65u, 129u, 51u, 98u, 35u, 144u, 134u, 4u, 138u, 72u,
228u, 1u, 129u, 34u, 130u, 56u, 224u, 96u, 113u, 17u, 65u, 138u, 137u,
28u, 108u, 48u, 36u, 84u, 71u, 25u, 12u, 9u, 161u, 41u, 100u, 113u,
128u, 192u, 145u, 65u, 28u, 88u, 48u, 38u, 132u, 165u, 145u, 197u,
67u, 3u, 32u, 17u, 80u, 137u, 98u, 184u, 168u, 146u, 19u, 66u, 80u,
9u, 28u, 80u, 48u, 38u, 133u, 172u, 17u, 196u, 195u, 2u, 68u, 164u,
113u, 32u, 192u, 145u, 81u, 28u, 68u, 48u, 36u, 86u, 71u, 15u, 12u,
9u, 161u, 107u, 4u, 112u, 224u, 192u, 145u, 81u, 28u, 48u, 48u, 50u,
136u, 122u, 43u, 49u, 80u, 109u, 138u, 130u, 104u, 90u, 192u, 77u, 9u,
64u, 36u, 142u, 22u, 24u, 19u, 67u, 149u, 8u, 225u, 65u, 129u, 34u,
178u, 56u, 64u, 96u, 72u, 156u, 142u, 12u, 24u, 34u, 130u, 71u, 5u,
12u, 9u, 20u, 17u, 192u, 195u, 2u, 104u, 132u, 81u, 28u, 4u, 48u, 53u,
197u, 36u, 142u, 0u, 24u, 18u, 41u, 33u, 136u, 48u, 49u, 136u, 150u,
39u, 138u, 18u, 41u, 12u, 161u, 52u, 70u, 68u, 50u, 56u, 129u, 21u,
132u, 209u, 8u, 162u, 34u, 168u, 156u, 144u, 154u, 28u, 146u, 67u,
108u, 68u, 19u, 54u, 32u, 153u, 197u, 18u, 73u, 0u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 134u, 6u, 8u, 18u, 44u, 17u, 108u, 75u, 19u, 197u, 9u, 20u,
134u, 80u, 215u, 20u, 144u, 200u, 226u, 4u, 86u, 34u, 130u, 68u, 85u,
19u, 146u, 25u, 68u, 61u, 21u, 152u, 168u, 54u, 197u, 66u, 37u, 138u,
226u, 162u, 28u, 68u, 80u, 98u, 162u, 73u, 13u, 177u, 16u, 115u, 138u,
34u, 146u, 25u, 28u, 64u, 137u, 226u, 114u, 67u, 108u, 76u, 34u, 72u,
138u, 39u, 33u, 148u, 67u, 209u, 49u, 137u, 195u, 136u, 117u, 137u,
98u, 98u, 73u, 36u, 146u, 56u, 72u, 96u, 99u, 9u, 129u, 234u, 96u,
210u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u,
0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 136u, 134u, 8u, 150u, 43u, 14u, 34u, 40u, 36u, 145u, 196u,
3u, 2u, 68u, 164u, 112u, 224u, 192u, 152u, 25u, 145u, 195u, 67u, 2u,
56u, 145u, 194u, 195u, 2u, 96u, 124u, 71u, 10u, 12u, 9u, 20u, 17u,
194u, 3u, 2u, 96u, 124u, 71u, 6u, 12u, 9u, 129u, 153u, 28u, 20u, 48u,
36u, 86u, 71u, 4u, 12u, 9u, 19u, 145u, 192u, 131u, 3u, 40u, 135u,
162u, 179u, 19u, 132u, 192u, 112u, 145u, 192u, 67u, 2u, 100u, 0u, 71u,
0u, 12u, 9u, 21u, 144u, 196u, 24u, 25u, 28u, 64u, 138u, 196u, 80u,
73u, 9u, 143u, 169u, 36u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 138u, 134u, 7u, 88u, 148u, 69u, 209u, 48u, 139u, 192u, 140u,
3u, 137u, 36u, 146u, 71u, 20u, 12u, 9u, 129u, 137u, 28u, 64u, 48u,
38u, 12u, 164u, 112u, 240u, 192u, 142u, 36u, 112u, 208u, 192u, 152u,
50u, 145u, 195u, 3u, 2u, 68u, 196u, 112u, 176u, 192u, 145u, 41u, 28u,
40u, 48u, 36u, 78u, 71u, 8u, 12u, 12u, 162u, 30u, 137u, 140u, 78u,
19u, 1u, 194u, 71u, 7u, 12u, 9u, 142u, 177u, 28u, 24u, 48u, 36u, 76u,
71u, 5u, 12u, 12u, 128u, 68u, 194u, 36u, 136u, 137u, 33u, 49u, 203u,
36u, 112u, 48u, 192u, 153u, 79u, 17u, 192u, 131u, 2u, 68u, 68u, 112u,
0u, 192u, 153u, 79u, 16u, 196u, 24u, 25u, 28u, 84u, 54u, 196u, 193u,
50u, 158u, 9u, 142u, 89u, 36u, 128u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 137u, 134u, 4u, 113u, 35u, 136u, 134u, 6u, 71u, 21u, 13u,
177u, 48u, 137u, 34u, 34u, 25u, 68u, 61u, 19u, 24u, 156u, 58u, 196u,
162u, 46u, 137u, 132u, 94u, 4u, 96u, 28u, 73u, 36u, 146u, 73u, 28u,
64u, 48u, 50u, 1u, 17u, 7u, 56u, 162u, 41u, 36u, 132u, 193u, 16u,
145u, 195u, 195u, 2u, 98u, 184u, 71u, 14u, 12u, 9u, 20u, 145u, 195u,
67u, 2u, 69u, 4u, 112u, 160u, 192u, 142u, 36u, 112u, 128u, 193u, 20u,
18u, 56u, 56u, 96u, 72u, 160u, 142u, 10u, 24u, 19u, 37u, 242u, 56u,
24u, 96u, 100u, 113u, 2u, 43u, 9u, 146u, 249u, 33u, 148u, 67u, 209u,
89u, 137u, 196u, 75u, 21u, 135u, 17u, 20u, 18u, 73u, 35u, 128u, 134u,
6u, 184u, 164u, 145u, 192u, 3u, 2u, 69u, 36u, 49u, 6u, 6u, 49u, 18u,
196u, 241u, 66u, 69u, 33u, 148u, 38u, 116u, 129u, 50u, 224u, 13u,
177u, 16u, 76u, 87u, 2u, 96u, 136u, 73u, 36u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 134u, 6u, 8u, 18u, 44u, 17u, 140u, 75u, 19u, 197u, 9u, 20u,
134u, 80u, 215u, 20u, 144u, 200u, 226u, 4u, 86u, 34u, 130u, 72u, 101u,
16u, 244u, 86u, 98u, 113u, 18u, 197u, 97u, 196u, 69u, 4u, 146u, 67u,
108u, 68u, 28u, 226u, 136u, 164u, 134u, 71u, 21u, 13u, 177u, 48u,
137u, 34u, 34u, 25u, 68u, 61u, 19u, 24u, 156u, 58u, 196u, 162u, 46u,
137u, 132u, 94u, 4u, 96u, 28u, 73u, 36u, 146u, 73u, 36u, 142u, 18u,
24u, 24u, 194u, 96u, 122u, 152u, 52u, 145u, 193u, 195u, 2u, 96u, 56u,
71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 151u, 134u, 7u, 18u, 71u, 46u, 12u, 14u, 177u, 44u, 76u, 72u,
229u, 161u, 129u, 34u, 98u, 57u, 96u, 96u, 72u, 148u, 142u, 84u, 24u,
19u, 4u, 50u, 57u, 56u, 96u, 111u, 16u, 244u, 76u, 66u, 96u, 134u,
19u, 1u, 194u, 71u, 38u, 12u, 9u, 136u, 89u, 28u, 148u, 48u, 36u, 76u,
71u, 36u, 12u, 12u, 128u, 68u, 194u, 36u, 136u, 137u, 33u, 49u, 0u,
36u, 114u, 32u, 192u, 152u, 239u, 17u, 200u, 67u, 2u, 68u, 68u, 113u,
240u, 192u, 152u, 239u, 17u, 199u, 131u, 3u, 32u, 17u, 16u, 115u,
138u, 34u, 146u, 72u, 100u, 113u, 80u, 219u, 19u, 4u, 199u, 120u, 38u,
32u, 4u, 146u, 56u, 232u, 96u, 76u, 180u, 8u, 227u, 129u, 129u, 34u,
146u, 56u, 216u, 96u, 72u, 160u, 142u, 46u, 24u, 28u, 68u, 80u, 73u,
28u, 84u, 48u, 38u, 127u, 164u, 113u, 64u, 192u, 145u, 65u, 28u, 72u,
48u, 38u, 127u, 164u, 113u, 16u, 193u, 18u, 197u, 100u, 142u, 32u,
24u, 18u, 37u, 35u, 135u, 134u, 4u, 138u, 200u, 225u, 161u, 129u, 52u,
37u, 60u, 142u, 20u, 24u, 27u, 196u, 61u, 21u, 144u, 154u, 18u, 158u,
19u, 63u, 34u, 71u, 9u, 12u, 9u, 161u, 90u, 164u, 112u, 128u, 192u,
145u, 89u, 28u, 24u, 48u, 69u, 4u, 142u, 10u, 24u, 18u, 40u, 35u,
129u, 134u, 4u, 208u, 197u, 146u, 56u, 8u, 96u, 107u, 138u, 73u, 28u,
0u, 48u, 36u, 82u, 67u, 16u, 96u, 99u, 17u, 44u, 80u, 145u, 72u, 101u,
9u, 161u, 176u, 1u, 145u, 196u, 8u, 172u, 38u, 134u, 44u, 146u, 19u,
66u, 178u, 136u, 109u, 136u, 130u, 101u, 160u, 19u, 47u, 130u, 73u,
32u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 134u, 6u, 8u, 18u, 44u, 17u, 148u, 75u, 20u, 36u, 82u, 25u,
67u, 92u, 82u, 67u, 35u, 136u, 17u, 88u, 138u, 9u, 33u, 188u, 67u,
209u, 89u, 17u, 44u, 86u, 67u, 136u, 138u, 9u, 36u, 54u, 196u, 65u,
206u, 40u, 138u, 72u, 100u, 113u, 80u, 219u, 19u, 8u, 146u, 34u, 33u,
188u, 67u, 209u, 49u, 14u, 177u, 44u, 76u, 67u, 137u, 36u, 146u, 72u,
225u, 33u, 129u, 140u, 38u, 7u, 169u, 130u, 249u, 28u, 28u, 48u, 38u,
3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u, 56u,
72u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 159u, 134u, 7u, 16u, 230u, 29u, 98u, 88u, 152u, 197u, 68u,
145u, 207u, 131u, 2u, 96u, 78u, 71u, 61u, 12u, 9u, 21u, 17u, 206u,
195u, 2u, 96u, 100u, 71u, 58u, 12u, 9u, 19u, 17u, 206u, 67u, 2u, 68u,
164u, 115u, 112u, 192u, 152u, 25u, 17u, 205u, 67u, 4u, 103u, 21u, 18u,
57u, 160u, 96u, 72u, 168u, 142u, 100u, 24u, 25u, 68u, 61u, 19u, 16u,
152u, 194u, 132u, 192u, 112u, 145u, 204u, 67u, 2u, 99u, 218u, 71u,
48u, 12u, 9u, 19u, 17u, 203u, 195u, 3u, 32u, 17u, 48u, 137u, 34u, 34u,
72u, 76u, 120u, 137u, 28u, 180u, 48u, 38u, 88u, 4u, 114u, 192u, 192u,
145u, 17u, 28u, 168u, 48u, 38u, 88u, 4u, 114u, 112u, 192u, 200u, 4u,
68u, 28u, 226u, 136u, 164u, 146u, 25u, 28u, 64u, 138u, 131u, 10u,
146u, 67u, 108u, 76u, 19u, 44u, 0u, 152u, 241u, 18u, 72u, 228u, 193u,
129u, 51u, 178u, 35u, 146u, 134u, 4u, 138u, 72u, 228u, 129u, 129u,
34u, 130u, 57u, 0u, 96u, 113u, 17u, 65u, 138u, 137u, 28u, 124u, 48u,
36u, 84u, 71u, 29u, 12u, 9u, 161u, 64u, 100u, 113u, 192u, 192u, 145u,
65u, 28u, 104u, 48u, 38u, 133u, 1u, 145u, 198u, 67u, 3u, 32u, 17u,
80u, 115u, 17u, 44u, 86u, 98u, 162u, 72u, 77u, 9u, 216u, 36u, 113u,
128u, 192u, 154u, 24u, 32u, 71u, 23u, 12u, 9u, 21u, 17u, 197u, 67u,
2u, 104u, 96u, 217u, 28u, 80u, 48u, 36u, 74u, 71u, 19u, 12u, 9u, 21u,
145u, 196u, 67u, 2u, 104u, 96u, 217u, 28u, 60u, 48u, 70u, 113u, 81u,
35u, 135u, 6u, 4u, 138u, 136u, 225u, 129u, 129u, 148u, 67u, 209u, 89u,
9u, 161u, 227u, 33u, 182u, 42u, 9u, 161u, 130u, 1u, 52u, 39u, 96u,
146u, 56u, 88u, 96u, 77u, 16u, 1u, 35u, 133u, 6u, 4u, 138u, 200u,
224u, 193u, 130u, 40u, 36u, 112u, 80u, 192u, 145u, 65u, 28u, 12u, 48u,
38u, 136u, 239u, 17u, 192u, 67u, 3u, 92u, 82u, 72u, 224u, 1u, 129u,
34u, 146u, 24u, 131u, 3u, 24u, 137u, 98u, 132u, 138u, 67u, 40u, 77u,
19u, 5u, 12u, 142u, 32u, 69u, 97u, 52u, 71u, 120u, 136u, 168u, 48u,
169u, 36u, 38u, 135u, 235u, 16u, 219u, 17u, 4u, 206u, 200u, 38u, 123u,
68u, 146u, 64u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 134u, 6u, 8u, 18u, 44u, 17u, 164u, 75u, 20u, 36u, 82u, 25u,
67u, 92u, 82u, 67u, 35u, 136u, 17u, 88u, 138u, 9u, 17u, 80u, 97u, 82u,
72u, 101u, 16u, 244u, 86u, 68u, 103u, 21u, 16u, 219u, 21u, 7u, 49u,
18u, 197u, 102u, 42u, 33u, 196u, 69u, 6u, 42u, 36u, 144u, 219u, 17u,
7u, 56u, 162u, 41u, 33u, 145u, 196u, 8u, 168u, 48u, 169u, 36u, 54u,
196u, 194u, 36u, 136u, 136u, 101u, 16u, 244u, 76u, 68u, 103u, 21u,
16u, 226u, 28u, 195u, 172u, 75u, 19u, 24u, 168u, 146u, 73u, 36u, 142u,
18u, 24u, 24u, 194u, 96u, 122u, 152u, 47u, 145u, 193u, 195u, 2u, 96u,
56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00027[] = {
 0u, 3u, 139u, 134u, 7u, 17u, 20u, 18u, 71u, 21u, 12u, 9u, 129u, 57u,
28u, 80u, 48u, 36u, 80u, 71u, 18u, 12u, 9u, 129u, 57u, 28u, 68u, 48u,
36u, 86u, 71u, 15u, 12u, 2u, 53u, 138u, 204u, 86u, 72u, 225u, 193u,
129u, 49u, 6u, 35u, 134u, 134u, 4u, 141u, 72u, 225u, 129u, 129u, 34u,
178u, 56u, 80u, 96u, 76u, 65u, 136u, 224u, 225u, 128u, 67u, 209u, 89u,
110u, 36u, 112u, 96u, 192u, 152u, 252u, 145u, 193u, 67u, 2u, 69u,
100u, 112u, 48u, 193u, 20u, 18u, 56u, 16u, 96u, 72u, 160u, 142u, 0u,
24u, 19u, 40u, 242u, 24u, 131u, 3u, 24u, 141u, 98u, 130u, 25u, 28u,
64u, 138u, 194u, 101u, 30u, 72u, 108u, 9u, 143u, 176u, 76u, 64u, 195u,
72u, 76u, 7u, 9u, 36u, 144u,};
static unsigned char uvector__00028[] = {
 0u, 3u, 134u, 6u, 8u, 18u, 44u, 17u, 180u, 107u, 20u, 16u, 200u,
226u, 4u, 86u, 34u, 130u, 72u, 108u, 2u, 30u, 138u, 203u, 113u, 2u,
53u, 138u, 204u, 86u, 67u, 72u, 113u, 17u, 65u, 36u, 146u, 71u, 9u,
12u, 12u, 97u, 48u, 61u, 76u, 21u, 8u, 224u, 225u, 129u, 48u, 28u,
35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static ScmObj libprocprofiler_start(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocprofiler_start__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocprofiler_start, NULL, NULL);

static ScmObj libprocprofiler_stop(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocprofiler_stop__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocprofiler_stop, NULL, NULL);

static ScmObj libprocprofiler_reset(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocprofiler_reset__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocprofiler_reset, NULL, NULL);

static ScmObj libprocprofiler_raw_result(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocprofiler_raw_result__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocprofiler_raw_result, NULL, NULL);

static ScmObj libprocsubrP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libprocsubrP__STUB, 1, 0,SCM_FALSE,libprocsubrP, NULL, NULL);

static ScmObj libprocclosureP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libprocclosureP__STUB, 1, 0,SCM_FALSE,libprocclosureP, NULL, NULL);

static ScmObj libproctoplevel_closureP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproctoplevel_closureP__STUB, 1, 0,SCM_FALSE,libproctoplevel_closureP, NULL, NULL);

static ScmObj libprocclosure_code(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocclosure_code__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocclosure_code, NULL, NULL);

static ScmObj libprocmethod_code(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocmethod_code__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocmethod_code, NULL, NULL);

static ScmObj libprocprocedure_info(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocprocedure_info__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocprocedure_info, NULL, NULL);

static ScmObj libprocprocedure_type(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocprocedure_type__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocprocedure_type, NULL, NULL);

static ScmObj libprocmethod_leafP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocmethod_leafP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocmethod_leafP, NULL, NULL);

static unsigned char uvector__00029[] = {
 0u, 3u, 133u, 134u, 0u, 203u, 27u, 199u, 17u, 201u, 142u, 163u, 178u,
71u, 9u, 12u, 9u, 28u, 145u, 193u, 67u, 2u, 71u, 4u, 112u, 48u, 192u,
152u, 15u, 145u, 192u, 131u, 2u, 70u, 228u, 112u, 16u, 192u, 145u,
217u, 28u, 0u, 48u, 36u, 116u, 67u, 16u, 96u, 99u, 17u, 220u, 111u,
30u, 16u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00030[] = {
 0u, 3u, 130u, 6u, 7u, 80u, 228u, 35u, 184u, 222u, 60u, 32u, 50u,
198u, 241u, 196u, 114u, 99u, 168u, 236u, 152u, 244u, 145u, 192u, 195u,
2u, 71u, 164u, 112u, 0u, 192u, 198u, 19u, 3u, 32u, 152u, 43u, 18u,
24u, 131u, 3u, 24u, 143u, 72u, 76u, 7u, 9u, 32u,};
static unsigned char uvector__00031[] = {
 0u, 3u, 129u, 134u, 7u, 88u, 250u, 63u, 144u, 9u, 28u, 8u, 48u, 36u,
128u, 71u, 1u, 12u, 9u, 31u, 145u, 192u, 3u, 2u, 71u, 196u, 49u, 6u,
6u, 49u, 31u, 144u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00032[] = {
 0u, 3u, 166u, 6u, 7u, 89u, 6u, 66u, 144u, 228u, 2u, 71u, 75u, 12u,
9u, 32u, 17u, 210u, 131u, 2u, 72u, 100u, 116u, 128u, 192u, 146u, 17u,
29u, 24u, 48u, 36u, 130u, 71u, 67u, 12u, 18u, 32u, 145u, 67u, 172u,
125u, 31u, 200u, 4u, 137u, 26u, 60u, 12u, 50u, 57u, 36u, 142u, 130u,
24u, 19u, 21u, 194u, 57u, 240u, 96u, 72u, 240u, 142u, 120u, 24u, 19u,
21u, 194u, 57u, 208u, 96u, 99u, 17u, 249u, 76u, 74u, 136u, 231u, 1u,
129u, 238u, 67u, 146u, 9u, 28u, 216u, 48u, 36u, 144u, 71u, 53u, 12u,
9u, 33u, 145u, 204u, 195u, 0u, 101u, 18u, 76u, 120u, 24u, 100u, 162u,
99u, 136u, 228u, 199u, 66u, 73u, 143u, 3u, 12u, 150u, 73u, 35u, 152u,
134u, 4u, 142u, 72u, 229u, 161u, 129u, 35u, 130u, 57u, 88u, 96u, 76u,
194u, 8u, 229u, 33u, 129u, 51u, 19u, 35u, 148u, 6u, 4u, 143u, 8u,
228u, 161u, 129u, 51u, 102u, 35u, 146u, 6u, 4u, 143u, 8u, 228u, 97u,
129u, 35u, 162u, 57u, 0u, 96u, 145u, 3u, 144u, 143u, 72u, 117u, 14u,
66u, 59u, 141u, 227u, 194u, 3u, 44u, 111u, 28u, 71u, 38u, 58u, 142u,
201u, 143u, 73u, 147u, 9u, 28u, 124u, 48u, 36u, 152u, 71u, 28u, 12u,
12u, 97u, 52u, 41u, 32u, 38u, 133u, 44u, 18u, 56u, 208u, 96u, 101u,
147u, 2u, 104u, 80u, 128u, 76u, 193u, 73u, 28u, 100u, 48u, 36u, 152u,
71u, 24u, 12u, 12u, 128u, 73u, 130u, 77u, 143u, 9u, 33u, 52u, 51u,
96u, 145u, 197u, 131u, 2u, 104u, 112u, 241u, 28u, 84u, 48u, 36u, 120u,
71u, 19u, 12u, 9u, 161u, 195u, 196u, 113u, 32u, 192u, 200u, 4u, 116u,
36u, 233u, 0u, 146u, 36u, 249u, 48u, 38u, 135u, 15u, 4u, 208u, 161u,
0u, 153u, 130u, 146u, 71u, 17u, 12u, 9u, 162u, 8u, 68u, 113u, 0u,
192u, 146u, 1u, 28u, 56u, 48u, 61u, 200u, 114u, 129u, 35u, 134u, 6u,
4u, 148u, 8u, 225u, 97u, 129u, 36u, 50u, 56u, 80u, 96u, 100u, 2u, 67u,
18u, 140u, 120u, 73u, 13u, 128u, 38u, 137u, 32u, 134u, 216u, 232u,
38u, 136u, 33u, 4u, 209u, 8u, 34u, 64u, 76u, 157u, 130u, 98u, 38u,
67u, 72u, 76u, 7u, 9u, 36u, 112u, 128u, 192u, 154u, 39u, 22u, 71u, 7u,
12u, 9u, 30u, 17u, 193u, 67u, 2u, 104u, 156u, 89u, 28u, 8u, 48u, 36u,
164u, 67u, 16u, 96u, 99u, 17u, 226u, 72u, 1u, 154u, 62u, 15u, 242u,
156u, 164u, 72u, 109u, 144u, 194u, 104u, 156u, 88u, 77u, 19u, 203u,
36u, 144u,};
static unsigned char uvector__00033[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 32u, 199u, 137u, 32u, 6u, 104u, 248u, 63u,
202u, 114u, 145u, 33u, 182u, 67u, 18u, 140u, 120u, 67u, 96u, 15u,
114u, 28u, 160u, 67u, 108u, 116u, 36u, 233u, 0u, 137u, 62u, 76u, 18u,
108u, 120u, 68u, 136u, 28u, 132u, 122u, 67u, 168u, 114u, 17u, 220u,
111u, 30u, 16u, 25u, 99u, 120u, 226u, 57u, 49u, 212u, 118u, 76u, 122u,
76u, 152u, 64u, 101u, 18u, 76u, 120u, 24u, 100u, 162u, 99u, 136u,
228u, 199u, 66u, 73u, 143u, 3u, 12u, 150u, 73u, 36u, 128u, 247u, 33u,
201u, 4u, 72u, 130u, 69u, 14u, 177u, 244u, 127u, 32u, 18u, 36u, 104u,
240u, 48u, 200u, 228u, 146u, 26u, 67u, 172u, 131u, 33u, 72u, 114u, 1u,
36u, 146u, 56u, 72u, 96u, 99u, 9u, 129u, 138u, 96u, 146u, 71u, 7u,
12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u,
152u, 14u, 18u,};
static ScmObj libprocprocedure_locked_setter(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libprocprocedure_locked_setter__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libprocprocedure_locked_setter, NULL, NULL);

static ScmObj libprocprocedure_constantP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libprocprocedure_constantP__STUB, 1, 0,SCM_FALSE,libprocprocedure_constantP, NULL, NULL);

static ScmObj libproc_25procedure_copy(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproc_25procedure_copy__STUB, 1, 2,SCM_FALSE,libproc_25procedure_copy, NULL, NULL);

static ScmObj libproc_25procedure_tags_alist(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libproc_25procedure_tags_alist__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libproc_25procedure_tags_alist, NULL, NULL);

static ScmObj libproc_25closure_env_TOlist(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libproc_25closure_env_TOlist__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libproc_25closure_env_TOlist, NULL, NULL);

static ScmObj libproc_25apply_rec0(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproc_25apply_rec0__STUB, 1, 0,SCM_FALSE,libproc_25apply_rec0, NULL, NULL);

static ScmObj libproc_25apply_rec1(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproc_25apply_rec1__STUB, 2, 0,SCM_FALSE,libproc_25apply_rec1, NULL, NULL);

static ScmObj libproc_25apply_rec2(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproc_25apply_rec2__STUB, 3, 0,SCM_FALSE,libproc_25apply_rec2, NULL, NULL);

static ScmObj libproc_25apply_rec3(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproc_25apply_rec3__STUB, 4, 0,SCM_FALSE,libproc_25apply_rec3, NULL, NULL);

static ScmObj libproc_25apply_rec4(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproc_25apply_rec4__STUB, 5, 0,SCM_FALSE,libproc_25apply_rec4, NULL, NULL);

static ScmObj libproc_25apply_rec(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libproc_25apply_rec__STUB, 1, 1,SCM_FALSE,libproc_25apply_rec, NULL, NULL);

static ScmObj libproc_25procedure_currying_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libproc_25procedure_currying_setX__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libproc_25procedure_currying_setX, NULL, NULL);

static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[175];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("procedure\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libproc.scm", 11, 11),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("apply", 5, 5),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("arg1", 4, 4),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("call-with-current-continuation", 30, 30),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("dynamic-wind", 12, 12),
      SCM_STRING_CONST_INITIALIZER("pre", 3, 3),
      SCM_STRING_CONST_INITIALIZER("body", 4, 4),
      SCM_STRING_CONST_INITIALIZER("post", 4, 4),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("call-with-values", 16, 16),
      SCM_STRING_CONST_INITIALIZER("producer", 8, 8),
      SCM_STRING_CONST_INITIALIZER("consumer", 8, 8),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("call/cc", 7, 7),
      SCM_STRING_CONST_INITIALIZER("continuation\077", 13, 13),
      SCM_STRING_CONST_INITIALIZER("%call/pc", 8, 8),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("%reset", 6, 6),
      SCM_STRING_CONST_INITIALIZER("make-continuation-prompt-tag", 28, 28),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("default-continuation-prompt-tag", 31, 31),
      SCM_STRING_CONST_INITIALIZER("continuation-prompt-tag\077", 24, 24),
      SCM_STRING_CONST_INITIALIZER("call-with-continuation-prompt", 29, 29),
      SCM_STRING_CONST_INITIALIZER("thunk", 5, 5),
      SCM_STRING_CONST_INITIALIZER("prompt-tag", 10, 10),
      SCM_STRING_CONST_INITIALIZER("abort-handler", 13, 13),
      SCM_STRING_CONST_INITIALIZER("abort-current-continuation", 26, 26),
      SCM_STRING_CONST_INITIALIZER("objs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("continuation-marks", 18, 18),
      SCM_STRING_CONST_INITIALIZER("cont", 4, 4),
      SCM_STRING_CONST_INITIALIZER("current-continuation-marks", 26, 26),
      SCM_STRING_CONST_INITIALIZER("continuation-marks\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("call-with-immediate-continuation-mark", 37, 37),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("fallback", 8, 8),
      SCM_STRING_CONST_INITIALIZER("call-with-current-expression-name", 33, 33),
      SCM_STRING_CONST_INITIALIZER("continuation-mark-set\077", 22, 22),
      SCM_STRING_CONST_INITIALIZER("continuation-mark-set->list", 27, 27),
      SCM_STRING_CONST_INITIALIZER("cmset", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<continuation-mark-set>\077", 24, 24),
      SCM_STRING_CONST_INITIALIZER("continuation-mark-set-first", 27, 27),
      SCM_STRING_CONST_INITIALIZER("make-continuation-mark-key", 26, 26),
      SCM_STRING_CONST_INITIALIZER("continuation-mark-key-", 22, 22),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("gensym", 6, 6),
      SCM_STRING_CONST_INITIALIZER("x->string", 9, 9),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("continuation-mark-key\077", 22, 22),
      SCM_STRING_CONST_INITIALIZER("unused-args", 11, 11),
      SCM_STRING_CONST_INITIALIZER("identity", 8, 8),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("lvar", 4, 4),
      SCM_STRING_CONST_INITIALIZER("$LREF", 5, 5),
      SCM_STRING_CONST_INITIALIZER("$LAMBDA", 7, 7),
      SCM_STRING_CONST_INITIALIZER("constantly", 10, 10),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("val", 3, 3),
      SCM_STRING_CONST_INITIALIZER("^", 1, 1),
      SCM_STRING_CONST_INITIALIZER("vals", 4, 4),
      SCM_STRING_CONST_INITIALIZER("$GREF", 5, 5),
      SCM_STRING_CONST_INITIALIZER("$ASM", 4, 4),
      SCM_STRING_CONST_INITIALIZER("make-case-lambda", 16, 16),
      SCM_STRING_CONST_INITIALIZER("%generate-values", 16, 16),
      SCM_STRING_CONST_INITIALIZER("G2158", 5, 5),
      SCM_STRING_CONST_INITIALIZER("g", 1, 1),
      SCM_STRING_CONST_INITIALIZER("tail", 4, 4),
      SCM_STRING_CONST_INITIALIZER("fold-right", 10, 10),
      SCM_STRING_CONST_INITIALIZER("gens", 4, 4),
      SCM_STRING_CONST_INITIALIZER("generator-fold", 14, 14),
      SCM_STRING_CONST_INITIALIZER("fn", 2, 2),
      SCM_STRING_CONST_INITIALIZER("knil", 4, 4),
      SCM_STRING_CONST_INITIALIZER("gen", 3, 3),
      SCM_STRING_CONST_INITIALIZER("more", 4, 4),
      SCM_STRING_CONST_INITIALIZER("generator-fold-right", 20, 20),
      SCM_STRING_CONST_INITIALIZER("loop", 4, 4),
      SCM_STRING_CONST_INITIALIZER("generator-for-each", 18, 18),
      SCM_STRING_CONST_INITIALIZER("generator-map", 13, 13),
      SCM_STRING_CONST_INITIALIZER("generator-find", 14, 14),
      SCM_STRING_CONST_INITIALIZER("pred", 4, 4),
      SCM_STRING_CONST_INITIALIZER("profiler-start", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("profiler-stop", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("profiler-reset", 14, 14),
      SCM_STRING_CONST_INITIALIZER("profiler-raw-result", 19, 19),
      SCM_STRING_CONST_INITIALIZER("subr\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("closure\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("toplevel-closure\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("closure-code", 12, 12),
      SCM_STRING_CONST_INITIALIZER("clo", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<closure>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("method-code", 11, 11),
      SCM_STRING_CONST_INITIALIZER("m", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<method>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("procedure-info", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<procedure>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("procedure-type", 14, 14),
      SCM_STRING_CONST_INITIALIZER("method-leaf\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("applicable\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("method-applicable-for-classes\077", 30, 30),
      SCM_STRING_CONST_INITIALIZER("gauche.object", 13, 13),
      SCM_STRING_CONST_INITIALIZER("class-of", 8, 8),
      SCM_STRING_CONST_INITIALIZER("case-lambda-decompose", 21, 21),
      SCM_STRING_CONST_INITIALIZER(">=", 2, 2),
      SCM_STRING_CONST_INITIALIZER("=", 1, 1),
      SCM_STRING_CONST_INITIALIZER("reqargs", 7, 7),
      SCM_STRING_CONST_INITIALIZER("optarg", 6, 6),
      SCM_STRING_CONST_INITIALIZER("info", 4, 4),
      SCM_STRING_CONST_INITIALIZER("any", 3, 3),
      SCM_STRING_CONST_INITIALIZER("required", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<generic>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("methods", 7, 7),
      SCM_STRING_CONST_INITIALIZER("~", 1, 1),
      SCM_STRING_CONST_INITIALIZER("object-apply", 12, 12),
      SCM_STRING_CONST_INITIALIZER("arg-types", 9, 9),
      SCM_STRING_CONST_INITIALIZER("procedure-locked-setter", 23, 23),
      SCM_STRING_CONST_INITIALIZER("procedure-constant\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("%procedure-copy", 15, 15),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("tags-alist", 10, 10),
      SCM_STRING_CONST_INITIALIZER("%procedure-tags-alist", 21, 21),
      SCM_STRING_CONST_INITIALIZER("%closure-env->list", 18, 18),
      SCM_STRING_CONST_INITIALIZER("%apply-rec0", 11, 11),
      SCM_STRING_CONST_INITIALIZER("%apply-rec1", 11, 11),
      SCM_STRING_CONST_INITIALIZER("a", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%apply-rec2", 11, 11),
      SCM_STRING_CONST_INITIALIZER("b", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%apply-rec3", 11, 11),
      SCM_STRING_CONST_INITIALIZER("c", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%apply-rec4", 11, 11),
      SCM_STRING_CONST_INITIALIZER("d", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%apply-rec", 10, 10),
      SCM_STRING_CONST_INITIALIZER("%procedure-currying-set!", 24, 24),
      SCM_STRING_CONST_INITIALIZER("f", 1, 1),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("G2155", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2156", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2154", 8, 8),
      SCM_STRING_CONST_INITIALIZER("define-inline", 13, 13),
      SCM_STRING_CONST_INITIALIZER("case-lambda", 11, 11),
      SCM_STRING_CONST_INITIALIZER("v", 1, 1),
      SCM_STRING_CONST_INITIALIZER("eof-object\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("eof-object", 10, 10),
      SCM_STRING_CONST_INITIALIZER("items", 5, 5),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("item", 4, 4),
      SCM_STRING_CONST_INITIALIZER("append", 6, 6),
      SCM_STRING_CONST_INITIALIZER("quasiquote", 10, 10),
      SCM_STRING_CONST_INITIALIZER("unquote", 7, 7),
      SCM_STRING_CONST_INITIALIZER("reverse", 7, 7),
      SCM_STRING_CONST_INITIALIZER("nargs", 5, 5),
      SCM_STRING_CONST_INITIALIZER("method-applicable\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("^m", 2, 2),
      SCM_STRING_CONST_INITIALIZER("slot-ref", 8, 8),
      SCM_STRING_CONST_INITIALIZER("infos", 5, 5),
      SCM_STRING_CONST_INITIALIZER("length", 6, 6),
      SCM_STRING_CONST_INITIALIZER("if-let1", 7, 7),
  },
};
static struct scm__rcRec {
  ScmUVector d2153[33];
  ScmCompiledCode d2152[33];
  ScmWord d2151[646];
  ScmPair d2150[562] SCM_ALIGN_PAIR;
  ScmObj d2149[690];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2153 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 58, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 49, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 144, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 47, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 10, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 38, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 15, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 15, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 20, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 29, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 24, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 56, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 105, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 62, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 69, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 332, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 110, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 97, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 124, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 152, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 104, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 261, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 93, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 354, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 119, uvector__00026, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 124, uvector__00027, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 65, uvector__00028, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 58, uvector__00029, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00030, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 36, uvector__00031, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 394, uvector__00032, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 144, uvector__00033, 0, NULL),
  },
  {   /* ScmCompiledCode d2152 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-with-values */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[0])), 9,
            10, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[56]),
            SCM_OBJ(&scm__rc.d2152[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[9])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[24])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-continuation-mark-key */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[39])), 38,
            17, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[219]),
            SCM_OBJ(&scm__rc.d2152[4]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[77])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* continuation-mark-key? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[92])), 2,
            0, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[226]),
            SCM_OBJ(&scm__rc.d2152[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[94])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* identity */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[109])), 1,
            0, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[229]),
            SCM_FALSE, SCM_OBJ(&scm__rc.d2149[211])),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* constantly */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[110])), 1,
            0, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[243]),
            SCM_OBJ(&scm__rc.d2152[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* constantly */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[111])), 3,
            0, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[246]),
            SCM_OBJ(&scm__rc.d2152[12]), SCM_OBJ(&scm__rc.d2149[233])),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* constantly */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[114])), 5,
            2, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[258]),
            SCM_OBJ(&scm__rc.d2152[11]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* constantly */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[119])), 3,
            0, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[260]),
            SCM_OBJ(&scm__rc.d2152[12]), SCM_OBJ(&scm__rc.d2149[265])),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[122])), 19,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (%generate-values #:G2158) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[141])), 21,
            10, 2, 0, SCM_OBJ(&scm__rc.d2150[276]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[283]),
            SCM_OBJ(&scm__rc.d2152[15]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %generate-values */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[162])), 6,
            6, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[290]),
            SCM_OBJ(&scm__rc.d2152[15]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[168])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* generator-fold */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[185])), 60,
            28, 3, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[298]),
            SCM_OBJ(&scm__rc.d2152[17]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[245])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* loop */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[260])), 19,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[305]),
            SCM_OBJ(&scm__rc.d2152[20]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* loop */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[279])), 23,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[311]),
            SCM_OBJ(&scm__rc.d2152[20]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* generator-fold-right */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[302])), 22,
            14, 3, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[317]),
            SCM_OBJ(&scm__rc.d2152[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[324])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* generator-for-each */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[339])), 51,
            24, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[323]),
            SCM_OBJ(&scm__rc.d2152[23]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[390])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* generator-map */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[405])), 67,
            28, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[328]),
            SCM_OBJ(&scm__rc.d2152[25]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[472])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* generator-find */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[487])), 27,
            22, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[335]),
            SCM_OBJ(&scm__rc.d2152[27]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[514])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[529])), 13,
            5, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[429]),
            SCM_OBJ(&scm__rc.d2152[29]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[542])), 6,
            2, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[433]),
            SCM_OBJ(&scm__rc.d2152[31]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[548])), 5,
            3, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[438]),
            SCM_OBJ(&scm__rc.d2152[31]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* applicable? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[553])), 78,
            23, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[444]),
            SCM_OBJ(&scm__rc.d2152[32]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2151[631])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2151 */
    /* call-with-values */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[0]) + 4),
    0x0000003e    /*   2 (LREF1) */,
    0x00000011    /*   3 (CALL 0) */,
    0x00400036    /*   4 (TAIL-RECEIVE 0 1) */,
    0x0000004c    /*   5 (LREF10-PUSH) */,
    0x0000003d    /*   6 (LREF0) */,
    0x00002095    /*   7 (TAIL-APPLY 2) */,
    0x00000014    /*   8 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[9]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-values */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[9]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[0])) /* #<compiled-code call-with-values@0x7486f6650de0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-values */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[24]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call/cc */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[24]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-current-continuation */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call/cc */,
    0x00000014    /*  14 (RET) */,
    /* make-continuation-mark-key */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]) + 7),
    0x00000001    /*   3 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* continuation-mark-key- */,
    0x00000013    /*   5 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]) + 8),
    0x0000006a    /*   7 (LREF0-CAR) */,
    0x0000000d    /*   8 (PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]) + 15),
    0x00000003    /*  12 (CONSTN) */,
    0x00000013    /*  13 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]) + 16),
    0x00000076    /*  15 (LREF0-CDR) */,
    0x00002018    /*  16 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  17 (LREF0) */,
    0x00000022    /*  18 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]) + 22),
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]) + 30),
    0x0000200e    /*  22 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]) + 30),
    0x00000006    /*  24 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[58])) /* "too many arguments for" */,
    0x00000006    /*  26 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[214])) /* (lambda (:optional (name 'continuation-mark-key-)) (gensym (x->string name))) */,
    0x0000205f    /*  28 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000100e    /*  30 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]) + 35),
    0x00000049    /*  32 (LREF1-PUSH) */,
    0x0000105f    /*  33 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* x->string */,
    0x00001063    /*  35 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* gensym */,
    0x00000014    /*  37 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[77]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-continuation-mark-key */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[77]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[3])) /* #<compiled-code make-continuation-mark-key@0x7486f5697c00> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-continuation-mark-key */,
    0x00000014    /*  14 (RET) */,
    /* continuation-mark-key? */
    0x0000000a    /*   0 (CONST-RET) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[94]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* continuation-mark-key? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[94]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[5])) /* #<compiled-code continuation-mark-key?@0x7486f563ea80> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* continuation-mark-key? */,
    0x00000014    /*  14 (RET) */,
    /* identity */
    0x00000053    /*   0 (LREF0-RET) */,
    /* (constantly constantly) */
    0x00000057    /*   0 (LREF10-RET) */,
    /* constantly */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[8])) /* #<compiled-code (constantly constantly)@0x7486f54edf00> */,
    0x00000014    /*   2 (RET) */,
    /* (constantly constantly) */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* values */,
    0x00000041    /*   2 (LREF10) */,
    0x00002095    /*   3 (TAIL-APPLY 2) */,
    0x00000014    /*   4 (RET) */,
    /* constantly */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[10])) /* #<compiled-code (constantly constantly)@0x7486f54ede40> */,
    0x00000014    /*   2 (RET) */,
    /* %toplevel */
    0x0000400e    /*   0 (PRE-CALL 4) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[122]) + 16),
    0x00000007    /*   2 (CONSTI-PUSH 0) */,
    0x00001007    /*   3 (CONSTI-PUSH 1) */,
    0x00000009    /*   4 (CONSTF-PUSH) */,
    0x00000016    /*   5 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[9])) /* #<compiled-code constantly@0x7486f54edf60> */,
    0x0000000d    /*   7 (PUSH) */,
    0x00000016    /*   8 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[11])) /* #<compiled-code constantly@0x7486f54edea0> */,
    0x00002088    /*  10 (LIST 2) */,
    0x0000000d    /*  11 (PUSH) */,
    0x00000006    /*  12 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* constantly */,
    0x0000405f    /*  14 (GREF-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* make-case-lambda */,
    0x00004015    /*  16 (DEFINE 4) */,
    SCM_WORD(SCM_UNDEFINED) /* constantly */,
    0x00000014    /*  18 (RET) */,
    /* (%generate-values #:G2158) */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[141]) + 4),
    0x0000003e    /*   2 (LREF1) */,
    0x00000011    /*   3 (CALL 0) */,
    0x00001018    /*   4 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   5 (LREF0) */,
    0x0000009a    /*   6 (EOFP) */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[141]) + 11),
    0x0000000a    /*   9 (CONST-RET) */,
    SCM_WORD(SCM_EOF) /* #<eof> */,
    0x00000041    /*  11 (LREF10) */,
    0x0000009a    /*  12 (EOFP) */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[141]) + 17),
    0x0000000a    /*  15 (CONST-RET) */,
    SCM_WORD(SCM_EOF) /* #<eof> */,
    0x00000048    /*  17 (LREF0-PUSH) */,
    0x00000041    /*  18 (LREF10) */,
    0x00000066    /*  19 (CONS) */,
    0x00000014    /*  20 (RET) */,
    /* %generate-values */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x00000048    /*   1 (LREF0-PUSH) */,
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00003060    /*   3 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold-right */,
    0x00000014    /*   5 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[284])) /* (#<compiled-code (%generate-values #:G2158)@0x7486f5387cc0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[168]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %generate-values */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[168]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[14])) /* #<compiled-code %generate-values@0x7486f5387c60> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %generate-values */,
    0x00000014    /*  16 (RET) */,
    /* generator-fold */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 32),
    0x0000000e    /*   3 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 7),
    0x0000003e    /*   5 (LREF1) */,
    0x00000011    /*   6 (CALL 0) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000004a    /*   8 (LREF2-PUSH) */,
    0x00002017    /*   9 (LOCAL-ENV 2) */,
    0x0000003e    /*  10 (LREF1) */,
    0x0000009a    /*  11 (EOFP) */,
    0x0000001e    /*  12 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 15),
    0x00000053    /*  14 (LREF0-RET) */,
    0x0000200e    /*  15 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 21),
    0x00000049    /*  17 (LREF1-PUSH) */,
    0x00000048    /*  18 (LREF0-PUSH) */,
    0x00c0103c    /*  19 (LREF 1 3) */,
    0x00002011    /*  20 (CALL 2) */,
    0x00001018    /*  21 (PUSH-LOCAL-ENV 1) */,
    0x0000000e    /*  22 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 26),
    0x00000045    /*  24 (LREF21) */,
    0x00000011    /*  25 (CALL 0) */,
    0x0000000d    /*  26 (PUSH) */,
    0x00000048    /*  27 (LREF0-PUSH) */,
    0x0000201b    /*  28 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 10),
    0x00000014    /*  30 (RET) */,
    0x00000014    /*  31 (RET) */,
    0x00000049    /*  32 (LREF1-PUSH) */,
    0x0000003d    /*  33 (LREF0) */,
    0x00000067    /*  34 (CONS-PUSH) */,
    0x00001017    /*  35 (LOCAL-ENV 1) */,
    0x0000004e    /*  36 (LREF12-PUSH) */,
    0x00001017    /*  37 (LOCAL-ENV 1) */,
    0x0000200e    /*  38 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 44),
    0x0000004c    /*  40 (LREF10-PUSH) */,
    0x00000048    /*  41 (LREF0-PUSH) */,
    0x0000205f    /*  42 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %generate-values */,
    0x00001018    /*  44 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  45 (LREF0) */,
    0x0000009a    /*  46 (EOFP) */,
    0x0000001e    /*  47 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 50),
    0x00000057    /*  49 (LREF10-RET) */,
    0x0000000e    /*  50 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 55),
    0x00c03047    /*  52 (LREF-PUSH 3 3) */,
    0x0000003d    /*  53 (LREF0) */,
    0x00002095    /*  54 (TAIL-APPLY 2) */,
    0x0000000d    /*  55 (PUSH) */,
    0x0000201b    /*  56 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]) + 38),
    0x00000014    /*  58 (RET) */,
    0x00000014    /*  59 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[245]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-fold */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[245]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[16])) /* #<compiled-code generator-fold@0x7486f54428a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-fold */,
    0x00000014    /*  14 (RET) */,
    /* (generator-fold-right loop) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009a    /*   1 (EOFP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[260]) + 5),
    0x00802052    /*   4 (LREF-RET 2 2) */,
    0x00000048    /*   5 (LREF0-PUSH) */,
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[260]) + 15),
    0x0000000e    /*   8 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[260]) + 12),
    0x00000045    /*  10 (LREF21) */,
    0x00000011    /*  11 (CALL 0) */,
    0x0000000d    /*  12 (PUSH) */,
    0x00000041    /*  13 (LREF10) */,
    0x0000101c    /*  14 (LOCAL-ENV-CALL 1) */,
    0x0000000d    /*  15 (PUSH) */,
    0x00c0203c    /*  16 (LREF 2 3) */,
    0x00002012    /*  17 (TAIL-CALL 2) */,
    0x00000014    /*  18 (RET) */,
    /* (generator-fold-right loop) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[279]) + 5),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %generate-values */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   6 (LREF0) */,
    0x0000009a    /*   7 (EOFP) */,
    0x0000001e    /*   8 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[279]) + 11),
    0x00803052    /*  10 (LREF-RET 3 2) */,
    0x00c03047    /*  11 (LREF-PUSH 3 3) */,
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x0000000e    /*  13 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[279]) + 17),
    0x00000041    /*  15 (LREF10) */,
    0x0000001c    /*  16 (LOCAL-ENV-CALL 0) */,
    0x0000000d    /*  17 (PUSH) */,
    0x00000003    /*  18 (CONSTN) */,
    0x00000066    /*  19 (CONS) */,
    0x00002091    /*  20 (APPEND 2) */,
    0x00002095    /*  21 (TAIL-APPLY 2) */,
    0x00000014    /*  22 (RET) */,
    /* generator-fold-right */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[302]) + 13),
    0x00001019    /*   3 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[306])) /* (#<compiled-code (generator-fold-right loop)@0x7486f54c8240>) */,
    0x0000000e    /*   5 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[302]) + 9),
    0x00000042    /*   7 (LREF11) */,
    0x00000011    /*   8 (CALL 0) */,
    0x0000000d    /*   9 (PUSH) */,
    0x0000003d    /*  10 (LREF0) */,
    0x0000101d    /*  11 (LOCAL-ENV-TAIL-CALL 1) */,
    0x00000014    /*  12 (RET) */,
    0x00000049    /*  13 (LREF1-PUSH) */,
    0x0000003d    /*  14 (LREF0) */,
    0x00000067    /*  15 (CONS-PUSH) */,
    0x00001017    /*  16 (LOCAL-ENV 1) */,
    0x00001019    /*  17 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[312])) /* (#<compiled-code (generator-fold-right loop)@0x7486f54c81e0>) */,
    0x0000003d    /*  19 (LREF0) */,
    0x0000001d    /*  20 (LOCAL-ENV-TAIL-CALL 0) */,
    0x00000014    /*  21 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[324]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-fold-right */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[324]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[20])) /* #<compiled-code generator-fold-right@0x7486f54c82a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-fold-right */,
    0x00000014    /*  14 (RET) */,
    /* generator-for-each */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 27),
    0x0000000e    /*   3 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 7),
    0x0000003e    /*   5 (LREF1) */,
    0x00000011    /*   6 (CALL 0) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000009a    /*   9 (EOFP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 13),
    0x0000000c    /*  12 (CONSTU-RET) */,
    0x0000100e    /*  13 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 18),
    0x00000048    /*  15 (LREF0-PUSH) */,
    0x00000043    /*  16 (LREF12) */,
    0x00001011    /*  17 (CALL 1) */,
    0x0000000e    /*  18 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 22),
    0x00000042    /*  20 (LREF11) */,
    0x00000011    /*  21 (CALL 0) */,
    0x0000000d    /*  22 (PUSH) */,
    0x0000101b    /*  23 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 8),
    0x00000014    /*  25 (RET) */,
    0x00000014    /*  26 (RET) */,
    0x00000049    /*  27 (LREF1-PUSH) */,
    0x0000003d    /*  28 (LREF0) */,
    0x00000067    /*  29 (CONS-PUSH) */,
    0x00001017    /*  30 (LOCAL-ENV 1) */,
    0x0000100e    /*  31 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 36),
    0x00000048    /*  33 (LREF0-PUSH) */,
    0x0000105f    /*  34 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %generate-values */,
    0x00001018    /*  36 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  37 (LREF0) */,
    0x0000009a    /*  38 (EOFP) */,
    0x0000001e    /*  39 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 42),
    0x0000000c    /*  41 (CONSTU-RET) */,
    0x0000000e    /*  42 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 47),
    0x00802047    /*  44 (LREF-PUSH 2 2) */,
    0x0000003d    /*  45 (LREF0) */,
    0x00002095    /*  46 (TAIL-APPLY 2) */,
    0x0000101b    /*  47 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]) + 31),
    0x00000014    /*  49 (RET) */,
    0x00000014    /*  50 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[390]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-for-each */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[390]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[22])) /* #<compiled-code generator-for-each@0x7486f5105de0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-for-each */,
    0x00000014    /*  14 (RET) */,
    /* generator-map */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 36),
    0x0000000e    /*   3 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 7),
    0x0000003e    /*   5 (LREF1) */,
    0x00000011    /*   6 (CALL 0) */,
    0x0000000d    /*   7 (PUSH) */,
    0x00000008    /*   8 (CONSTN-PUSH) */,
    0x00002017    /*   9 (LOCAL-ENV 2) */,
    0x0000003e    /*  10 (LREF1) */,
    0x0000009a    /*  11 (EOFP) */,
    0x0000001e    /*  12 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 17),
    0x0000003d    /*  14 (LREF0) */,
    0x00000093    /*  15 (REVERSE) */,
    0x00000014    /*  16 (RET) */,
    0x0000100e    /*  17 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 22),
    0x00000049    /*  19 (LREF1-PUSH) */,
    0x00000043    /*  20 (LREF12) */,
    0x00001011    /*  21 (CALL 1) */,
    0x0000000d    /*  22 (PUSH) */,
    0x0000003d    /*  23 (LREF0) */,
    0x00000067    /*  24 (CONS-PUSH) */,
    0x00001017    /*  25 (LOCAL-ENV 1) */,
    0x0000000e    /*  26 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 30),
    0x00000045    /*  28 (LREF21) */,
    0x00000011    /*  29 (CALL 0) */,
    0x0000000d    /*  30 (PUSH) */,
    0x00000048    /*  31 (LREF0-PUSH) */,
    0x0000201b    /*  32 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 10),
    0x00000014    /*  34 (RET) */,
    0x00000014    /*  35 (RET) */,
    0x00000049    /*  36 (LREF1-PUSH) */,
    0x0000003d    /*  37 (LREF0) */,
    0x00000067    /*  38 (CONS-PUSH) */,
    0x00001017    /*  39 (LOCAL-ENV 1) */,
    0x00000008    /*  40 (CONSTN-PUSH) */,
    0x00001017    /*  41 (LOCAL-ENV 1) */,
    0x0000100e    /*  42 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 47),
    0x0000004c    /*  44 (LREF10-PUSH) */,
    0x0000105f    /*  45 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %generate-values */,
    0x00001018    /*  47 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  48 (LREF0) */,
    0x0000009a    /*  49 (EOFP) */,
    0x0000001e    /*  50 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 55),
    0x00000041    /*  52 (LREF10) */,
    0x00000093    /*  53 (REVERSE) */,
    0x00000014    /*  54 (RET) */,
    0x0000000e    /*  55 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 60),
    0x00803047    /*  57 (LREF-PUSH 3 2) */,
    0x0000003d    /*  58 (LREF0) */,
    0x00002095    /*  59 (TAIL-APPLY 2) */,
    0x0000000d    /*  60 (PUSH) */,
    0x00000041    /*  61 (LREF10) */,
    0x00000067    /*  62 (CONS-PUSH) */,
    0x0000201b    /*  63 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]) + 42),
    0x00000014    /*  65 (RET) */,
    0x00000014    /*  66 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[472]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-map */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[472]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[24])) /* #<compiled-code generator-map@0x7486f5180360> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-map */,
    0x00000014    /*  14 (RET) */,
    /* generator-find */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[487]) + 4),
    0x0000003d    /*   2 (LREF0) */,
    0x00000011    /*   3 (CALL 0) */,
    0x00001018    /*   4 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   5 (LREF0) */,
    0x0000009a    /*   6 (EOFP) */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[487]) + 10),
    0x0000000b    /*   9 (CONSTF-RET) */,
    0x0000100e    /*  10 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[487]) + 15),
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x00000042    /*  13 (LREF11) */,
    0x00001011    /*  14 (CALL 1) */,
    0x0000001e    /*  15 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[487]) + 18),
    0x00000053    /*  17 (LREF0-RET) */,
    0x0000000e    /*  18 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[487]) + 22),
    0x00000041    /*  20 (LREF10) */,
    0x00000011    /*  21 (CALL 0) */,
    0x0000000d    /*  22 (PUSH) */,
    0x0000101b    /*  23 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[487]) + 5),
    0x00000014    /*  25 (RET) */,
    0x00000014    /*  26 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[514]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-find */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[514]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[26])) /* #<compiled-code generator-find@0x7486f7fff0c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* generator-find */,
    0x00000014    /*  14 (RET) */,
    /* (applicable? #f #f) */
    0x00000051    /*   0 (LREF30-PUSH) */,
    0x0000004a    /*   1 (LREF2-PUSH) */,
    0x0000003e    /*   2 (LREF1) */,
    0x0000001e    /*   3 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[529]) + 9),
    0x0000005d    /*   5 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* >= */,
    0x00000013    /*   7 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[529]) + 11),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* = */,
    0x00002012    /*  11 (TAIL-CALL 2) */,
    0x00000014    /*  12 (RET) */,
    /* (applicable? #f) */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[28])) /* #<compiled-code (applicable? #f #f)@0x7486f53a7240> */,
    0x0000000d    /*   2 (PUSH) */,
    0x0000003d    /*   3 (LREF0) */,
    0x00002095    /*   4 (TAIL-APPLY 2) */,
    0x00000014    /*   5 (RET) */,
    /* (applicable? #f) */
    0x0000004f    /*   0 (LREF20-PUSH) */,
    0x00000048    /*   1 (LREF0-PUSH) */,
    0x00000046    /*   2 (LREF30) */,
    0x00003095    /*   3 (TAIL-APPLY 3) */,
    0x00000014    /*   4 (RET) */,
    /* applicable? */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[418])) /* (#<undef>) */,
    0x0000005d    /*   2 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* method-applicable-for-classes? */,
    0x000000e8    /*   4 (ENV-SET 0) */,
    0x0000100e    /*   5 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]) + 10),
    0x0000004d    /*   7 (LREF11-PUSH) */,
    0x0000105f    /*   8 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* class-of */,
    0x00001018    /*  10 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x0000005d    /*  12 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <procedure> */,
    0x00000020    /*  14 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]) + 53),
    0x00000044    /*  16 (LREF20) */,
    0x0000008a    /*  17 (LENGTH) */,
    0x00001018    /*  18 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  19 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]) + 24),
    0x00403047    /*  21 (LREF-PUSH 3 1) */,
    0x0000105f    /*  22 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* case-lambda-decompose */,
    0x00001018    /*  24 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  25 (LREF0) */,
    0x0000001e    /*  26 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]) + 35),
    0x00000016    /*  28 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[29])) /* #<compiled-code (applicable? #f)@0x7486f53a72a0> */,
    0x0000000d    /*  30 (PUSH) */,
    0x00000048    /*  31 (LREF0-PUSH) */,
    0x00002060    /*  32 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* any */,
    0x00000014    /*  34 (RET) */,
    0x0000004c    /*  35 (LREF10-PUSH) */,
    0x0040403c    /*  36 (LREF 4 1) */,
    0x000000e3    /*  37 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* required */,
    0x0000000d    /*  39 (PUSH) */,
    0x0040403c    /*  40 (LREF 4 1) */,
    0x000000e3    /*  41 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* optional */,
    0x0000001e    /*  43 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]) + 49),
    0x0000005d    /*  45 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* >= */,
    0x00000013    /*  47 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]) + 51),
    0x0000005d    /*  49 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* = */,
    0x00002012    /*  51 (TAIL-CALL 2) */,
    0x00000014    /*  52 (RET) */,
    0x00000048    /*  53 (LREF0-PUSH) */,
    0x0000005d    /*  54 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <generic> */,
    0x00000020    /*  56 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]) + 70),
    0x00000016    /*  58 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[30])) /* #<compiled-code (applicable? #f)@0x7486f53a71e0> */,
    0x0000200f    /*  60 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]) + 67),
    0x00000050    /*  62 (LREF21-PUSH) */,
    0x00000006    /*  63 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* methods */,
    0x0000205f    /*  65 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00002063    /*  67 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* any */,
    0x00000014    /*  69 (RET) */,
    0x0000005e    /*  70 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* applicable? */,
    0x0000005e    /*  72 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* object-apply */,
    0x00000048    /*  74 (LREF0-PUSH) */,
    0x00000044    /*  75 (LREF20) */,
    0x00004095    /*  76 (TAIL-APPLY 4) */,
    0x00000014    /*  77 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[631]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* applicable? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2151[631]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2152[31])) /* #<compiled-code applicable?@0x7486f53a7300> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* applicable? */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(47U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_OBJ(&scm__rc.d2150[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[4]), SCM_OBJ(&scm__rc.d2150[8])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[12])},
       { SCM_MAKE_INT(50U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_OBJ(&scm__rc.d2150[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[16]), SCM_OBJ(&scm__rc.d2150[20])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(67U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[23])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[24])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[26])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[27])},
       { SCM_OBJ(&scm__rc.d2150[28]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[25]), SCM_OBJ(&scm__rc.d2150[29])},
       { SCM_MAKE_INT(68U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[31])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[32])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[35])},
       { SCM_OBJ(&scm__rc.d2150[36]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[33]), SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[40])},
       { SCM_MAKE_INT(69U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[43])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[45])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[46])},
       { SCM_OBJ(&scm__rc.d2150[47]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[44]), SCM_OBJ(&scm__rc.d2150[48])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[50])},
       { SCM_MAKE_INT(71U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_OBJ(&scm__rc.d2150[54]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(77U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[57])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_OBJ(&scm__rc.d2150[62]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[59]), SCM_OBJ(&scm__rc.d2150[63])},
       { SCM_MAKE_INT(81U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[65])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_OBJ(&scm__rc.d2150[70]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[67]), SCM_OBJ(&scm__rc.d2150[71])},
       { SCM_MAKE_INT(82U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[73])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[76])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[77])},
       { SCM_OBJ(&scm__rc.d2150[78]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[75]), SCM_OBJ(&scm__rc.d2150[79])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_MAKE_INT(86U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[84])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[86])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[87])},
       { SCM_OBJ(&scm__rc.d2150[88]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[85]), SCM_OBJ(&scm__rc.d2150[89])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[91])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[92])},
       { SCM_OBJ(&scm__rc.d2150[93]), SCM_NIL},
       { SCM_MAKE_INT(90U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[95])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[96])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[99])},
       { SCM_OBJ(&scm__rc.d2150[100]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[97]), SCM_OBJ(&scm__rc.d2150[101])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[103])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[104])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[105])},
       { SCM_MAKE_INT(93U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[108])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[110])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_OBJ(&scm__rc.d2150[112]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[109]), SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[115])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[116])},
       { SCM_MAKE_INT(97U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[118])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[121])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[122])},
       { SCM_OBJ(&scm__rc.d2150[123]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[120]), SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[126])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_MAKE_INT(102U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[129])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[130])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[132])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[133])},
       { SCM_OBJ(&scm__rc.d2150[134]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[131]), SCM_OBJ(&scm__rc.d2150[135])},
       { SCM_MAKE_INT(104U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[137])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[138])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[140])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[141])},
       { SCM_OBJ(&scm__rc.d2150[142]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[139]), SCM_OBJ(&scm__rc.d2150[143])},
       { SCM_MAKE_INT(107U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[145])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[146])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[148])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[149])},
       { SCM_OBJ(&scm__rc.d2150[150]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[147]), SCM_OBJ(&scm__rc.d2150[151])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[153])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[154])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[155])},
       { SCM_MAKE_INT(119U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[158])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[160])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[161])},
       { SCM_OBJ(&scm__rc.d2150[162]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[159]), SCM_OBJ(&scm__rc.d2150[163])},
       { SCM_MAKE_INT(124U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[165])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[166])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[168])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_OBJ(&scm__rc.d2150[170]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[167]), SCM_OBJ(&scm__rc.d2150[171])},
       { SCM_MAKE_INT(131U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[173])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[174])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[176])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[177])},
       { SCM_OBJ(&scm__rc.d2150[178]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[175]), SCM_OBJ(&scm__rc.d2150[179])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[181])},
       { SCM_MAKE_INT(134U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[183])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[186])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[187])},
       { SCM_OBJ(&scm__rc.d2150[188]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[185]), SCM_OBJ(&scm__rc.d2150[189])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[126])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[191])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[192])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[193])},
       { SCM_MAKE_INT(138U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[195])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[196])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[198])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[199])},
       { SCM_OBJ(&scm__rc.d2150[200]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[197]), SCM_OBJ(&scm__rc.d2150[201])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[203])},
       { SCM_OBJ(&scm__rc.d2150[204]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[205])},
       { SCM_OBJ(&scm__rc.d2150[206]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[207])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_OBJ(&scm__rc.d2150[209]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[210])},
       { SCM_OBJ(&scm__rc.d2150[211]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[208]), SCM_OBJ(&scm__rc.d2150[212])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[213])},
       { SCM_MAKE_INT(155U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[215])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[216])},
       { SCM_OBJ(&scm__rc.d2150[217]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(157U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[220])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[221])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1])},
       { SCM_OBJ(&scm__rc.d2150[223]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[222]), SCM_OBJ(&scm__rc.d2150[224])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[227])},
       { SCM_OBJ(&scm__rc.d2150[228]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[227]), SCM_OBJ(&scm__rc.d2150[227])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[230])},
       { SCM_MAKE_INT(1U), SCM_NIL},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[234])},
       { SCM_MAKE_INT(172U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[236])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[237])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[239])},
       { SCM_OBJ(&scm__rc.d2150[240]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[238]), SCM_OBJ(&scm__rc.d2150[241])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[244])},
       { SCM_OBJ(&scm__rc.d2150[245]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[244])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[247])},
       { SCM_MAKE_INT(3U), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[247])},
       { SCM_OBJ(&scm__rc.d2150[250]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[244]), SCM_OBJ(&scm__rc.d2150[251])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[252])},
       { SCM_MAKE_INT(173U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[254])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[255])},
       { SCM_OBJ(&scm__rc.d2150[256]), SCM_OBJ(&scm__rc.d2150[241])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_OBJ(&scm__rc.d2150[259]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[261])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[262])},
       { SCM_MAKE_INT(2U), SCM_NIL},
       { SCM_MAKE_INT(149U), SCM_OBJ(&scm__rc.d2150[264])},
       { SCM_MAKE_INT(7U), SCM_NIL},
       { SCM_MAKE_INT(5U), SCM_OBJ(&scm__rc.d2150[266])},
       { SCM_OBJ(&scm__rc.d2150[263]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[268])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_OBJ(&scm__rc.d2150[271]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[272])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[273])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[275])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[277])},
       { SCM_MAKE_INT(187U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[279])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[280])},
       { SCM_OBJ(&scm__rc.d2150[281]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[13]), SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(186U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[286])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[287])},
       { SCM_OBJ(&scm__rc.d2150[288]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[291])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[292])},
       { SCM_MAKE_INT(194U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[294])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[295])},
       { SCM_OBJ(&scm__rc.d2150[296]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[299])},
       { SCM_MAKE_INT(212U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[302])},
       { SCM_OBJ(&scm__rc.d2150[303]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[18]), SCM_NIL},
       { SCM_MAKE_INT(217U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[307])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[308])},
       { SCM_OBJ(&scm__rc.d2150[309]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2152[19]), SCM_NIL},
       { SCM_MAKE_INT(210U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[313])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[314])},
       { SCM_OBJ(&scm__rc.d2150[315]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[291])},
       { SCM_MAKE_INT(223U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[319])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[320])},
       { SCM_OBJ(&scm__rc.d2150[321]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(235U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[324])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[325])},
       { SCM_OBJ(&scm__rc.d2150[326]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[329])},
       { SCM_MAKE_INT(249U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[331])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[332])},
       { SCM_OBJ(&scm__rc.d2150[333]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[336])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[337])},
       { SCM_OBJ(&scm__rc.d2150[338]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[340])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[341])},
       { SCM_OBJ(&scm__rc.d2150[342]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[344])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[345])},
       { SCM_OBJ(&scm__rc.d2150[346]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[349])},
       { SCM_OBJ(&scm__rc.d2150[350]), SCM_NIL},
       { SCM_MAKE_INT(275U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[353])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[355])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[356])},
       { SCM_OBJ(&scm__rc.d2150[357]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[354]), SCM_OBJ(&scm__rc.d2150[358])},
       { SCM_MAKE_INT(276U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[360])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[361])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[363])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[364])},
       { SCM_OBJ(&scm__rc.d2150[365]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[362]), SCM_OBJ(&scm__rc.d2150[366])},
       { SCM_MAKE_INT(277U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[368])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[369])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[371])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[372])},
       { SCM_OBJ(&scm__rc.d2150[373]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[370]), SCM_OBJ(&scm__rc.d2150[374])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(280U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[377])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[378])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[380])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[381])},
       { SCM_OBJ(&scm__rc.d2150[382]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[379]), SCM_OBJ(&scm__rc.d2150[383])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(281U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[386])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[387])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[389])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[390])},
       { SCM_OBJ(&scm__rc.d2150[391]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[388]), SCM_OBJ(&scm__rc.d2150[392])},
       { SCM_MAKE_INT(287U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[394])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[395])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[397])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[398])},
       { SCM_OBJ(&scm__rc.d2150[399]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[396]), SCM_OBJ(&scm__rc.d2150[400])},
       { SCM_MAKE_INT(296U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[402])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[403])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[405])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[406])},
       { SCM_OBJ(&scm__rc.d2150[407]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[404]), SCM_OBJ(&scm__rc.d2150[408])},
       { SCM_MAKE_INT(316U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[410])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[411])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[413])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[414])},
       { SCM_OBJ(&scm__rc.d2150[415]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[412]), SCM_OBJ(&scm__rc.d2150[416])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[419])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[421])},
       { SCM_MAKE_INT(327U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[423])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[424])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_OBJ(&scm__rc.d2150[426]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[425]), SCM_OBJ(&scm__rc.d2150[427])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[425]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(334U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[434])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[435])},
       { SCM_OBJ(&scm__rc.d2150[436]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(320U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[440])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[441])},
       { SCM_OBJ(&scm__rc.d2150[442]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(340U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[445])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[446])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[448])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[449])},
       { SCM_OBJ(&scm__rc.d2150[450]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[447]), SCM_OBJ(&scm__rc.d2150[451])},
       { SCM_MAKE_INT(348U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[453])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[454])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[456])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[457])},
       { SCM_OBJ(&scm__rc.d2150[458]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[455]), SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[461])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[462])},
       { SCM_MAKE_INT(352U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[464])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[465])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[467])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[468])},
       { SCM_OBJ(&scm__rc.d2150[469]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[466]), SCM_OBJ(&scm__rc.d2150[470])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(355U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[473])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[474])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[476])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[477])},
       { SCM_OBJ(&scm__rc.d2150[478]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[475]), SCM_OBJ(&scm__rc.d2150[479])},
       { SCM_MAKE_INT(361U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[481])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[482])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[484])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[485])},
       { SCM_OBJ(&scm__rc.d2150[486]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[483]), SCM_OBJ(&scm__rc.d2150[487])},
       { SCM_MAKE_INT(376U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[489])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[490])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[492])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[493])},
       { SCM_OBJ(&scm__rc.d2150[494]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[491]), SCM_OBJ(&scm__rc.d2150[495])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[497])},
       { SCM_MAKE_INT(377U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[499])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[500])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[502])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[503])},
       { SCM_OBJ(&scm__rc.d2150[504]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[501]), SCM_OBJ(&scm__rc.d2150[505])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[507])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[508])},
       { SCM_MAKE_INT(378U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[510])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[511])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[513])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[514])},
       { SCM_OBJ(&scm__rc.d2150[515]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[512]), SCM_OBJ(&scm__rc.d2150[516])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[518])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[519])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[520])},
       { SCM_MAKE_INT(379U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[522])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[523])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[525])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[526])},
       { SCM_OBJ(&scm__rc.d2150[527]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[524]), SCM_OBJ(&scm__rc.d2150[528])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[530])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[531])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[532])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[533])},
       { SCM_MAKE_INT(380U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[535])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[536])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[538])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[539])},
       { SCM_OBJ(&scm__rc.d2150[540]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[537]), SCM_OBJ(&scm__rc.d2150[541])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_MAKE_INT(381U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[544])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[545])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[547])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[548])},
       { SCM_OBJ(&scm__rc.d2150[549]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[546]), SCM_OBJ(&scm__rc.d2150[550])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[552])},
       { SCM_MAKE_INT(385U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[554])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[555])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[557])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[558])},
       { SCM_OBJ(&scm__rc.d2150[559]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[556]), SCM_OBJ(&scm__rc.d2150[560])},
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(4, FALSE),
    SCM_MAKE_INT(1U),
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(13, FALSE),
    SCM_MAKE_INT(5U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2150[231]),
    SCM_UNDEFINED,
    SCM_MAKE_INT(1U),
    SCM_MAKE_INT(0),
    SCM_OBJ(&scm__rc.d2150[232]),
    SCM_MAKE_INT(3U),
    SCM_OBJ(&scm__rc.d2150[233]),
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(23, FALSE),
    SCM_MAKE_INT(15U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2150[248]),
    SCM_UNDEFINED,
    SCM_MAKE_INT(0),
    SCM_MAKE_INT(1U),
    SCM_OBJ(&scm__rc.d2150[249]),
    SCM_MAKE_INT(5U),
    SCM_OBJ(&scm__rc.d2150[233]),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2150[253]),
    SCM_UNDEFINED,
    SCM_MAKE_INT(1U),
    SCM_MAKE_INT(0),
    SCM_OBJ(&scm__rc.d2150[232]),
    SCM_MAKE_INT(7U),
    SCM_OBJ(&scm__rc.d2150[233]),
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(29, FALSE),
    SCM_MAKE_INT(21U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2150[263]),
    SCM_OBJ(&scm__rc.d2150[265]),
    SCM_OBJ(&scm__rc.d2150[267]),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2150[270]),
    SCM_UNDEFINED,
    SCM_MAKE_INT(0),
    SCM_MAKE_INT(1U),
    SCM_OBJ(&scm__rc.d2150[249]),
    SCM_MAKE_INT(9U),
    SCM_OBJ(&scm__rc.d2150[233]),
    SCM_UNDEFINED,
    SCM_OBJ(&scm__rc.d2150[274]),
    SCM_UNDEFINED,
    SCM_MAKE_INT(0),
    SCM_MAKE_INT(1U),
    SCM_OBJ(&scm__rc.d2150[232]),
    SCM_MAKE_INT(13U),
    SCM_OBJ(&scm__rc.d2150[233]),
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(84, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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

static ScmObj libprocprocedureP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("procedure?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_PROCEDUREP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libprocapply(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj arg1_scm;
  ScmObj arg1;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("apply");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  arg1_scm = SCM_SUBRARGS[1];
  if (!(arg1_scm)) Scm_Error("scheme object required, but got %S", arg1_scm);
  arg1 = (arg1_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
ScmObj cp;
#line 52 "libproc.scm"
{ScmObj head;ScmObj tail;
if (SCM_NULLP(args)){{SCM_RESULT=(Scm_VMApply(proc,arg1));goto SCM_STUB_RETURN;}} else {
head=(Scm_Cons(arg1,SCM_NIL)),tail=(head);
#line 56 "libproc.scm"
SCM_FOR_EACH(cp,args){
if (SCM_NULLP(SCM_CDR(cp))){{
if ((Scm_Length(SCM_CAR(cp)))<(0)){{
Scm_Error("improper list not allowed: %S",SCM_CAR(cp));}}
SCM_APPEND(head,tail,SCM_CAR(cp));
break;}}
if (!(SCM_PAIRP(SCM_CDR(cp)))){{
Scm_Error("improper list not allowed: %S",SCM_CDR(cp));}}
SCM_APPEND1(head,tail,SCM_CAR(cp));}
{SCM_RESULT=(Scm_VMApply(proc,head));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproccall_with_current_continuation(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("call-with-current-continuation");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMCallCC(proc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocvalues(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("values");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Values(args));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocdynamic_wind(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pre_scm;
  ScmObj pre;
  ScmObj body_scm;
  ScmObj body;
  ScmObj post_scm;
  ScmObj post;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("dynamic-wind");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pre_scm = SCM_SUBRARGS[0];
  if (!(pre_scm)) Scm_Error("scheme object required, but got %S", pre_scm);
  pre = (pre_scm);
  body_scm = SCM_SUBRARGS[1];
  if (!(body_scm)) Scm_Error("scheme object required, but got %S", body_scm);
  body = (body_scm);
  post_scm = SCM_SUBRARGS[2];
  if (!(post_scm)) Scm_Error("scheme object required, but got %S", post_scm);
  post = (post_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMDynamicWind(pre,body,post));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproccontinuationP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("continuation?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_ContinuationP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libproc_25call_2fpc(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%call/pc");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  {
{
ScmObj SCM_RESULT;

#line 81 "libproc.scm"
{SCM_RESULT=(Scm_VMCallPC(proc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25reset(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%reset");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  {
{
ScmObj SCM_RESULT;

#line 82 "libproc.scm"
{SCM_RESULT=(Scm_VMReset(proc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocmake_continuation_prompt_tag(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmObj name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("make-continuation-prompt-tag");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    name_scm = SCM_SUBRARGS[0];
  } else {
    name_scm = SCM_FALSE;
  }
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakePromptTag(name));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocdefault_continuation_prompt_tag(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("default-continuation-prompt-tag");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_DefaultPromptTag());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproccontinuation_prompt_tagP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("continuation-prompt-tag?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_PROMPT_TAG_P(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libproccall_with_continuation_prompt(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj thunk_scm;
  ScmObj thunk;
  ScmObj prompt_tag_scm;
  ScmObj prompt_tag;
  ScmObj abort_handler_scm;
  ScmObj abort_handler;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("call-with-continuation-prompt");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  thunk_scm = SCM_SUBRARGS[0];
  if (!(thunk_scm)) Scm_Error("scheme object required, but got %S", thunk_scm);
  thunk = (thunk_scm);
  if (SCM_ARGCNT > 1+1) {
    prompt_tag_scm = SCM_SUBRARGS[1];
  } else {
    prompt_tag_scm = SCM_FALSE;
  }
  if (!(prompt_tag_scm)) Scm_Error("scheme object required, but got %S", prompt_tag_scm);
  prompt_tag = (prompt_tag_scm);
  if (SCM_ARGCNT > 2+1) {
    abort_handler_scm = SCM_SUBRARGS[2];
  } else {
    abort_handler_scm = SCM_FALSE;
  }
  if (!(abort_handler_scm)) Scm_Error("scheme object required, but got %S", abort_handler_scm);
  abort_handler = (abort_handler_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMCallWithContinuationPrompt(thunk,prompt_tag,abort_handler));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocabort_current_continuation(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj prompt_tag_scm;
  ScmObj prompt_tag;
  ScmObj objs_scm;
  ScmObj objs;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("abort-current-continuation");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  prompt_tag_scm = SCM_SUBRARGS[0];
  if (!(prompt_tag_scm)) Scm_Error("scheme object required, but got %S", prompt_tag_scm);
  prompt_tag = (prompt_tag_scm);
  objs_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(objs_scm)) Scm_Error("list required, but got %S", objs_scm);
  objs = (objs_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_VMAbortCurrentContinuation(prompt_tag,objs));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproccontinuation_marks(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cont_scm;
  ScmObj cont;
  ScmObj prompt_tag_scm;
  ScmObj prompt_tag;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("continuation-marks");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cont_scm = SCM_SUBRARGS[0];
  if (!(cont_scm)) Scm_Error("scheme object required, but got %S", cont_scm);
  cont = (cont_scm);
  if (SCM_ARGCNT > 1+1) {
    prompt_tag_scm = SCM_SUBRARGS[1];
  } else {
    prompt_tag_scm = SCM_FALSE;
  }
  if (!(prompt_tag_scm)) Scm_Error("scheme object required, but got %S", prompt_tag_scm);
  prompt_tag = (prompt_tag_scm);
  {
{
ScmObj SCM_RESULT;

#line 103 "libproc.scm"
{SCM_RESULT=(Scm_ContinuationMarks(cont,prompt_tag));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproccurrent_continuation_marks(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj prompt_tag_scm;
  ScmObj prompt_tag;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("current-continuation-marks");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    prompt_tag_scm = SCM_SUBRARGS[0];
  } else {
    prompt_tag_scm = SCM_FALSE;
  }
  if (!(prompt_tag_scm)) Scm_Error("scheme object required, but got %S", prompt_tag_scm);
  prompt_tag = (prompt_tag_scm);
  {
{
ScmObj SCM_RESULT;

#line 105 "libproc.scm"
{SCM_RESULT=(Scm_CurrentContinuationMarks(prompt_tag));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproccontinuation_marksP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("continuation-marks?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 108 "libproc.scm"
{SCM_RESULT=(SCM_CONTINUATION_MARK_SET_P(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

static ScmObj find_immediate_continuation_mark(ScmVM* vm,ScmObj key,ScmObj fallback){{
#line 111 "libproc.scm"
{ScmObj p=(vm)->denv;
for (; SCM_PAIRP(p); p=(SCM_CDR(p))){
if (((vm)->cont)&&(SCM_EQ(p,(vm)->cont->denv))){
return (fallback);}else if(
SCM_EQ(SCM_CAAR(p),key)){
return (SCM_CDAR(p));}}
return (fallback);}}}

static ScmObj libproccall_with_immediate_continuation_mark(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj key_scm;
  ScmObj key;
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("call-with-immediate-continuation-mark");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  key_scm = SCM_SUBRARGS[0];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  proc_scm = SCM_SUBRARGS[1];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  if (SCM_ARGCNT > 2+1) {
    fallback_scm = SCM_SUBRARGS[2];
  } else {
    fallback_scm = SCM_FALSE;
  }
  if (!(fallback_scm)) Scm_Error("scheme object required, but got %S", fallback_scm);
  fallback = (fallback_scm);
  {
{
ScmObj SCM_RESULT;

#line 121 "libproc.scm"
{ScmObj val=find_immediate_continuation_mark(Scm_VM(),key,fallback);
{SCM_RESULT=(Scm_VMApply1(proc,val));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproccall_with_current_expression_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("call-with-current-expression-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  {
{
ScmObj SCM_RESULT;

#line 125 "libproc.scm"
{ScmObj name=find_immediate_continuation_mark(
Scm_VM(),
Scm__GetDenvKey(SCM_DENV_KEY_EXPRESSION_NAME),SCM_FALSE);
#line 129 "libproc.scm"
{SCM_RESULT=(Scm_VMApply1(proc,name));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproccontinuation_mark_setP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("continuation-mark-set?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 132 "libproc.scm"
{SCM_RESULT=(SCM_CONTINUATION_MARK_SET_P(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libproccontinuation_mark_set_TOlist(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cmset_scm;
  ScmContinuationMarkSet* cmset;
  ScmObj key_scm;
  ScmObj key;
  ScmObj prompt_tag_scm;
  ScmObj prompt_tag;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("continuation-mark-set->list");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cmset_scm = SCM_SUBRARGS[0];
  if (!SCM_MAYBE_P(SCM_CONTINUATION_MARK_SET_P, cmset_scm)) Scm_Error("<continuation-mark-set> or #f required, but got %S", cmset_scm);
  cmset = SCM_MAYBE(SCM_CONTINUATION_MARK_SET, cmset_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    prompt_tag_scm = SCM_SUBRARGS[2];
  } else {
    prompt_tag_scm = SCM_FALSE;
  }
  if (!(prompt_tag_scm)) Scm_Error("scheme object required, but got %S", prompt_tag_scm);
  prompt_tag = (prompt_tag_scm);
  {
{
ScmObj SCM_RESULT;

#line 136 "libproc.scm"
{SCM_RESULT=(Scm_ContinuationMarkSetToList(cmset,key,prompt_tag));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproccontinuation_mark_set_first(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cmset_scm;
  ScmContinuationMarkSet* cmset;
  ScmObj key_scm;
  ScmObj key;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj prompt_tag_scm;
  ScmObj prompt_tag;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("continuation-mark-set-first");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cmset_scm = SCM_SUBRARGS[0];
  if (!SCM_MAYBE_P(SCM_CONTINUATION_MARK_SET_P, cmset_scm)) Scm_Error("<continuation-mark-set> or #f required, but got %S", cmset_scm);
  cmset = SCM_MAYBE(SCM_CONTINUATION_MARK_SET, cmset_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  if (SCM_ARGCNT > 2+1) {
    fallback_scm = SCM_SUBRARGS[2];
  } else {
    fallback_scm = SCM_FALSE;
  }
  if (!(fallback_scm)) Scm_Error("scheme object required, but got %S", fallback_scm);
  fallback = (fallback_scm);
  if (SCM_ARGCNT > 3+1) {
    prompt_tag_scm = SCM_SUBRARGS[3];
  } else {
    prompt_tag_scm = SCM_FALSE;
  }
  if (!(prompt_tag_scm)) Scm_Error("scheme object required, but got %S", prompt_tag_scm);
  prompt_tag = (prompt_tag_scm);
  {
{
ScmObj SCM_RESULT;

#line 141 "libproc.scm"
{ScmContinuationMarkSet* cms=
((cmset)?(cmset):(
SCM_CONTINUATION_MARK_SET(Scm_CurrentContinuationMarks(prompt_tag))));ScmObj p=
(cms)->denv;
for (; SCM_PAIRP(p); p=(SCM_CDR(p))){
if (SCM_EQ(SCM_CAAR(p),key)){{
{SCM_RESULT=(SCM_CDAR(p));goto SCM_STUB_RETURN;}}}}
{SCM_RESULT=(fallback);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocprofiler_start(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("profiler-start");
  {
Scm_ProfilerStart();
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libprocprofiler_stop(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("profiler-stop");
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_ProfilerStop());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libprocprofiler_reset(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("profiler-reset");
  {
Scm_ProfilerReset();
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libprocprofiler_raw_result(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("profiler-raw-result");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ProfilerRawResult());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocsubrP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("subr?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_SUBRP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libprocclosureP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("closure?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_CLOSUREP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libproctoplevel_closureP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("toplevel-closure?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 278 "libproc.scm"
{SCM_RESULT=((SCM_CLOSUREP(obj))&&(((SCM_CLOSURE(obj))->env)==(NULL)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libprocclosure_code(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj clo_scm;
  ScmClosure* clo;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("closure-code");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  clo_scm = SCM_SUBRARGS[0];
  if (!SCM_CLOSUREP(clo_scm)) Scm_Error("ScmClosure* required, but got %S", clo_scm);
  clo = SCM_CLOSURE(clo_scm);
  {
{
ScmObj SCM_RESULT;

#line 280 "libproc.scm"
{SCM_RESULT=(SCM_CLOSURE_CODE(clo));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocmethod_code(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj m_scm;
  ScmMethod* m;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("method-code");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  m_scm = SCM_SUBRARGS[0];
  if (!SCM_METHODP(m_scm)) Scm_Error("<method> required, but got %S", m_scm);
  m = SCM_METHOD(m_scm);
  {
{
ScmObj SCM_RESULT;

#line 282 "libproc.scm"
if ((m)->func){
#line 284 "libproc.scm"
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(SCM_OBJ((m)->data));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocprocedure_info(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmProcedure* proc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("procedure-info");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(proc_scm)) Scm_Error("<procedure> required, but got %S", proc_scm);
  proc = SCM_PROCEDURE(proc_scm);
  {
{
ScmObj SCM_RESULT;

#line 288 "libproc.scm"
{SCM_RESULT=(SCM_PROCEDURE_INFO(proc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmObj tmp_cc_2159(ScmObj type,void** data2160);static ScmObj tmp_cc_2159(ScmObj type,void** data2160){{{ScmObj proc=((ScmObj )((data2160)[0]));
#line 312 "libproc.scm"
(((ScmProcedure* )(proc)))->typeHint=(type);
return (type);}}}static ScmObj tmp_cc_2161(ScmObj type,void** data2162);static ScmObj tmp_cc_2161(ScmObj type,void** data2162){{{ScmObj proc=((ScmObj )((data2162)[0]));
#line 304 "libproc.scm"
(((ScmProcedure* )(proc)))->typeHint=(type);
return (type);}}}
static ScmObj libprocprocedure_type(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmProcedure* proc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("procedure-type");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(proc_scm)) Scm_Error("<procedure> required, but got %S", proc_scm);
  proc = SCM_PROCEDURE(proc_scm);
  {
{
ScmObj SCM_RESULT;

#line 297 "libproc.scm"
{ScmObj typehint=(proc)->typeHint;
if (SCM_VECTORP(typehint)){
{static ScmObj reconstruct_proc=SCM_UNDEFINED;
SCM_BIND_PROC(reconstruct_proc,"reconstruct-procedure-type",
Scm_GaucheInternalModule());
{void* data2162[1];(data2162)[0]=(((void* )(proc)));Scm_VMPushCC(tmp_cc_2161,data2162,1);{SCM_RESULT=(Scm_VMApply2(reconstruct_proc,SCM_OBJ(proc),typehint));goto SCM_STUB_RETURN;}}}}else if(
#line 306 "libproc.scm"
SCM_FALSEP(typehint)){
{static ScmObj compute_proc=SCM_UNDEFINED;
SCM_BIND_PROC(compute_proc,"compute-procedure-type",
Scm_GaucheInternalModule());
{void* data2160[1];(data2160)[0]=(((void* )(proc)));Scm_VMPushCC(tmp_cc_2159,data2160,1);{SCM_RESULT=(Scm_VMApply1(compute_proc,SCM_OBJ(proc)));goto SCM_STUB_RETURN;}}}} else {
#line 314 "libproc.scm"
{SCM_RESULT=(typehint);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocmethod_leafP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj m_scm;
  ScmMethod* m;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("method-leaf?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  m_scm = SCM_SUBRARGS[0];
  if (!SCM_METHODP(m_scm)) Scm_Error("<method> required, but got %S", m_scm);
  m = SCM_METHOD(m_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_METHOD_LEAF_P(m));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libprocprocedure_locked_setter(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj proc_scm;
  ScmProcedure* proc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("procedure-locked-setter");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  proc_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(proc_scm)) Scm_Error("<procedure> required, but got %S", proc_scm);
  proc = SCM_PROCEDURE(proc_scm);
  {
{
ScmObj SCM_RESULT;

#line 341 "libproc.scm"
if (((proc)->locked)&&(
SCM_PROCEDUREP((proc)->setter))){
{SCM_RESULT=((proc)->setter);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libprocprocedure_constantP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("procedure-constant?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 349 "libproc.scm"
{SCM_RESULT=((SCM_PROCEDUREP(obj))&&(
SCM_PROCEDURE_CONSTANT(obj)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libproc_25procedure_copy(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmProcedure* p;
  ScmObj tags_alist_scm;
  ScmObj tags_alist;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%procedure-copy");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(p_scm)) Scm_Error("<procedure> required, but got %S", p_scm);
  p = SCM_PROCEDURE(p_scm);
  if (SCM_ARGCNT > 1+1) {
    tags_alist_scm = SCM_SUBRARGS[1];
  } else {
    tags_alist_scm = SCM_FALSE;
  }
  if (!(tags_alist_scm)) Scm_Error("scheme object required, but got %S", tags_alist_scm);
  tags_alist = (tags_alist_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm__CopyProcedure(p,tags_alist));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25procedure_tags_alist(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmProcedure* p;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%procedure-tags-alist");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(p_scm)) Scm_Error("<procedure> required, but got %S", p_scm);
  p = SCM_PROCEDURE(p_scm);
  {
{
ScmObj SCM_RESULT;

#line 356 "libproc.scm"
{SCM_RESULT=((p)->tagsAlist);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25closure_env_TOlist(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj clo_scm;
  ScmClosure* clo;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%closure-env->list");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  clo_scm = SCM_SUBRARGS[0];
  if (!SCM_CLOSUREP(clo_scm)) Scm_Error("ScmClosure* required, but got %S", clo_scm);
  clo = SCM_CLOSURE(clo_scm);
  {
{
ScmObj SCM_RESULT;

#line 362 "libproc.scm"
{ScmEnvFrame* env=SCM_CLOSURE_ENV(clo);ScmObj h=SCM_NIL;ScmObj t=SCM_NIL;
#line 365 "libproc.scm"
if ((env)==(NULL)){{
{SCM_RESULT=(SCM_NIL);goto SCM_STUB_RETURN;}}}
{int i=0;int cise__2163=(env)->size;for (; (i)<(cise__2163); (i)++){
SCM_APPEND1(h,t,ENV_DATA(env,i));}}
{SCM_RESULT=(h);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25apply_rec0(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmObj p;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%apply-rec0");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!(p_scm)) Scm_Error("scheme object required, but got %S", p_scm);
  p = (p_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ApplyRec0(p));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25apply_rec1(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmObj p;
  ScmObj a_scm;
  ScmObj a;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%apply-rec1");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!(p_scm)) Scm_Error("scheme object required, but got %S", p_scm);
  p = (p_scm);
  a_scm = SCM_SUBRARGS[1];
  if (!(a_scm)) Scm_Error("scheme object required, but got %S", a_scm);
  a = (a_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ApplyRec1(p,a));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25apply_rec2(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmObj p;
  ScmObj a_scm;
  ScmObj a;
  ScmObj b_scm;
  ScmObj b;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("%apply-rec2");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!(p_scm)) Scm_Error("scheme object required, but got %S", p_scm);
  p = (p_scm);
  a_scm = SCM_SUBRARGS[1];
  if (!(a_scm)) Scm_Error("scheme object required, but got %S", a_scm);
  a = (a_scm);
  b_scm = SCM_SUBRARGS[2];
  if (!(b_scm)) Scm_Error("scheme object required, but got %S", b_scm);
  b = (b_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ApplyRec2(p,a,b));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25apply_rec3(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmObj p;
  ScmObj a_scm;
  ScmObj a;
  ScmObj b_scm;
  ScmObj b;
  ScmObj c_scm;
  ScmObj c;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("%apply-rec3");
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!(p_scm)) Scm_Error("scheme object required, but got %S", p_scm);
  p = (p_scm);
  a_scm = SCM_SUBRARGS[1];
  if (!(a_scm)) Scm_Error("scheme object required, but got %S", a_scm);
  a = (a_scm);
  b_scm = SCM_SUBRARGS[2];
  if (!(b_scm)) Scm_Error("scheme object required, but got %S", b_scm);
  b = (b_scm);
  c_scm = SCM_SUBRARGS[3];
  if (!(c_scm)) Scm_Error("scheme object required, but got %S", c_scm);
  c = (c_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ApplyRec3(p,a,b,c));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25apply_rec4(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmObj p;
  ScmObj a_scm;
  ScmObj a;
  ScmObj b_scm;
  ScmObj b;
  ScmObj c_scm;
  ScmObj c;
  ScmObj d_scm;
  ScmObj d;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("%apply-rec4");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!(p_scm)) Scm_Error("scheme object required, but got %S", p_scm);
  p = (p_scm);
  a_scm = SCM_SUBRARGS[1];
  if (!(a_scm)) Scm_Error("scheme object required, but got %S", a_scm);
  a = (a_scm);
  b_scm = SCM_SUBRARGS[2];
  if (!(b_scm)) Scm_Error("scheme object required, but got %S", b_scm);
  b = (b_scm);
  c_scm = SCM_SUBRARGS[3];
  if (!(c_scm)) Scm_Error("scheme object required, but got %S", c_scm);
  c = (c_scm);
  d_scm = SCM_SUBRARGS[4];
  if (!(d_scm)) Scm_Error("scheme object required, but got %S", d_scm);
  d = (d_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ApplyRec4(p,a,b,c,d));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25apply_rec(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmObj p;
  ScmObj args_scm;
  ScmObj args;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%apply-rec");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!(p_scm)) Scm_Error("scheme object required, but got %S", p_scm);
  p = (p_scm);
  args_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ApplyRec(p,args));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libproc_25procedure_currying_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmProcedure* p;
  ScmObj f_scm;
  int f;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%procedure-currying-set!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(p_scm)) Scm_Error("<procedure> required, but got %S", p_scm);
  p = SCM_PROCEDURE(p_scm);
  f_scm = SCM_SUBRARGS[1];
  if (!SCM_BOOLP(f_scm)) Scm_Error("boolean required, but got %S", f_scm);
  f = SCM_BOOL_VALUE(f_scm);
  {

#line 386 "libproc.scm"
SCM_PROCEDURE_CURRYING(p)=(f);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[17])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[23])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[27])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[32])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[68];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[262];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[666];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[67];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[667];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[4];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[66];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[74];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[32];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[188];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[189];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[95];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = SCM_OBJ(&scm__sc.d2148[58]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[94];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[185];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[668];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[669];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[670];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[184];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[1];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[199];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[206];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[231];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[228];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[41];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[671];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[227];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[672];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[673];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[304];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[674];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[675];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[303];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[308];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[310];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[302];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[301];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[316];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[676];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[317];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[318];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[319];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[677];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[678];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[96];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[315];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[679];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[680];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[681];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[324];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[334];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[682];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[339];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[345];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[344];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[442];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[438];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[440];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[683];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[441];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[17];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[445];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[684];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[396];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[462];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[427];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[461];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[533];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[449];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[685];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[458];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[456];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[453];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[686];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[451];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[450];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[687];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[436];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[688];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[689];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[408];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[433];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[429];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[580]), i++) = scm__rc.d2149[431];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[580]);
}
void Scm_Init_libproc() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* procedure? */
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
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("procedure?")), SCM_OBJ(&libprocprocedureP__STUB), SCM_BINDING_INLINABLE);
  libprocprocedureP__STUB.common.info = scm__rc.d2149[5];
  libprocprocedureP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* apply */
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* proc */
  scm__rc.d2149[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* arg1 */
  scm__rc.d2149[19] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12]))); /* :rest */
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[10]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[11]), scm__rc.d2149[19]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[12]), scm__rc.d2149[18]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[13]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[16]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[17]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[18]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[19]), scm__rc.d2149[3]);
  scm__rc.d2149[21] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[21]));
  scm__rc.d2149[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[23]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[23]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[23]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[23]))[6] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[23]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[23]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("apply")), SCM_OBJ(&libprocapply__STUB), SCM_BINDING_INLINABLE);
  libprocapply__STUB.common.info = scm__rc.d2149[21];
  libprocapply__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[23]);
  scm__rc.d2149[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* call-with-current-continuation */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[22]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[25]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[27]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[28]), scm__rc.d2149[3]);
  scm__rc.d2149[33] = Scm_MakeExtendedPair(scm__rc.d2149[32], SCM_OBJ(&scm__rc.d2150[22]), SCM_OBJ(&scm__rc.d2150[30]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[34]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[34]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[34]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[34]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("call-with-current-continuation")), SCM_OBJ(&libproccall_with_current_continuation__STUB), 0);
  libproccall_with_current_continuation__STUB.common.info = scm__rc.d2149[33];
  libproccall_with_current_continuation__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[34]);
  scm__rc.d2149[41] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* values */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[33]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[34]), scm__rc.d2149[41]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[35]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[36]), scm__rc.d2149[3]);
  scm__rc.d2149[42] = Scm_MakeExtendedPair(scm__rc.d2149[41], SCM_OBJ(&scm__rc.d2150[11]), SCM_OBJ(&scm__rc.d2150[38]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[43]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[43]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[43]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[43]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("values")), SCM_OBJ(&libprocvalues__STUB), SCM_BINDING_INLINABLE);
  libprocvalues__STUB.common.info = scm__rc.d2149[42];
  libprocvalues__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[43]);
  scm__rc.d2149[50] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* dynamic-wind */
  scm__rc.d2149[51] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* pre */
  scm__rc.d2149[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* body */
  scm__rc.d2149[53] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* post */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[39]), scm__rc.d2149[53]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[40]), scm__rc.d2149[52]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[41]), scm__rc.d2149[51]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[44]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2149[50]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[47]), scm__rc.d2149[3]);
  scm__rc.d2149[54] = Scm_MakeExtendedPair(scm__rc.d2149[50], SCM_OBJ(&scm__rc.d2150[41]), SCM_OBJ(&scm__rc.d2150[49]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[55]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[55]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[55]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[55]))[6] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[55]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[55]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("dynamic-wind")), SCM_OBJ(&libprocdynamic_wind__STUB), 0);
  libprocdynamic_wind__STUB.common.info = scm__rc.d2149[54];
  libprocdynamic_wind__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[55]);
  scm__rc.d2149[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[64] = Scm_MakeIdentifier(scm__rc.d2149[65], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[66] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* call-with-values */
  scm__rc.d2149[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* producer */
  scm__rc.d2149[68] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* consumer */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[50]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[51]), scm__rc.d2149[67]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[2]);
  scm__rc.d2149[69] = Scm_MakeExtendedPair(scm__rc.d2149[66], SCM_OBJ(&scm__rc.d2150[51]), SCM_OBJ(&scm__rc.d2150[55]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[56]), scm__rc.d2149[69]);
  scm__rc.d2149[70] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->name = scm__rc.d2149[66];/* call-with-values */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[0]))->debugInfo = scm__rc.d2149[70];
  scm__rc.d2149[71] = Scm_MakeIdentifier(scm__rc.d2149[66], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#call-with-values */
  scm__rc.d2149[72] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* %toplevel */
  scm__rc.d2149[73] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[1]))->debugInfo = scm__rc.d2149[73];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[9]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[9]))[6] = SCM_WORD(scm__rc.d2149[66]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[9]))[13] = SCM_WORD(scm__rc.d2149[71]);
  scm__rc.d2149[74] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* call/cc */
  scm__rc.d2149[76] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[4]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module scheme */
  scm__rc.d2149[75] = Scm_MakeIdentifier(scm__rc.d2149[32], SCM_MODULE(scm__rc.d2149[76]), SCM_NIL); /* scheme#call-with-current-continuation */
  scm__rc.d2149[77] = Scm_MakeIdentifier(scm__rc.d2149[74], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#call/cc */
  scm__rc.d2149[78] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[2]))->debugInfo = scm__rc.d2149[78];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[24]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[24]))[6] = SCM_WORD(scm__rc.d2149[74]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[24]))[10] = SCM_WORD(scm__rc.d2149[75]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[24]))[13] = SCM_WORD(scm__rc.d2149[77]);
  scm__rc.d2149[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* continuation? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[61]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[62]), scm__rc.d2149[3]);
  scm__rc.d2149[80] = Scm_MakeExtendedPair(scm__rc.d2149[79], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[64]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("continuation?")), SCM_OBJ(&libproccontinuationP__STUB), 0);
  libproccontinuationP__STUB.common.info = scm__rc.d2149[80];
  libproccontinuationP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* %call/pc */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[67]), scm__rc.d2149[2]);
  scm__rc.d2149[82] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[68]), scm__rc.d2149[81]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[70]), scm__rc.d2149[3]);
  scm__rc.d2149[83] = Scm_MakeExtendedPair(scm__rc.d2149[81], SCM_OBJ(&scm__rc.d2150[22]), SCM_OBJ(&scm__rc.d2150[72]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[84]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[84]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[84]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[84]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%call/pc")), SCM_OBJ(&libproc_25call_2fpc__STUB), 0);
  libproc_25call_2fpc__STUB.common.info = scm__rc.d2149[83];
  libproc_25call_2fpc__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[84]);
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* %reset */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[75]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[76]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[3]);
  scm__rc.d2149[92] = Scm_MakeExtendedPair(scm__rc.d2149[91], SCM_OBJ(&scm__rc.d2150[22]), SCM_OBJ(&scm__rc.d2150[80]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%reset")), SCM_OBJ(&libproc_25reset__STUB), 0);
  libproc_25reset__STUB.common.info = scm__rc.d2149[92];
  libproc_25reset__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[84]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* make-continuation-prompt-tag */
  scm__rc.d2149[94] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32]))); /* :optional */
  scm__rc.d2149[95] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[81]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[82]), scm__rc.d2149[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[85]), scm__rc.d2149[2]);
  scm__rc.d2149[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[86]), scm__rc.d2149[93]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[87]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[88]), scm__rc.d2149[3]);
  scm__rc.d2149[97] = Scm_MakeExtendedPair(scm__rc.d2149[93], SCM_OBJ(&scm__rc.d2150[82]), SCM_OBJ(&scm__rc.d2150[90]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[98]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[98]))[4] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[98]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[98]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-continuation-prompt-tag")), SCM_OBJ(&libprocmake_continuation_prompt_tag__STUB), 0);
  libprocmake_continuation_prompt_tag__STUB.common.info = scm__rc.d2149[97];
  libprocmake_continuation_prompt_tag__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[98]);
  scm__rc.d2149[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* default-continuation-prompt-tag */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[91]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[92]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[93]), scm__rc.d2149[3]);
  scm__rc.d2149[106] = Scm_MakeExtendedPair(scm__rc.d2149[105], SCM_NIL, SCM_OBJ(&scm__rc.d2150[94]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[5] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("default-continuation-prompt-tag")), SCM_OBJ(&libprocdefault_continuation_prompt_tag__STUB), 0);
  libprocdefault_continuation_prompt_tag__STUB.common.info = scm__rc.d2149[106];
  libprocdefault_continuation_prompt_tag__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[107]);
  scm__rc.d2149[113] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* continuation-prompt-tag? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[97]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[113]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[100]), scm__rc.d2149[3]);
  scm__rc.d2149[114] = Scm_MakeExtendedPair(scm__rc.d2149[113], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[102]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[115]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[115]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[115]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[115]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("continuation-prompt-tag?")), SCM_OBJ(&libproccontinuation_prompt_tagP__STUB), 0);
  libproccontinuation_prompt_tagP__STUB.common.info = scm__rc.d2149[114];
  libproccontinuation_prompt_tagP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[115]);
  scm__rc.d2149[122] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* call-with-continuation-prompt */
  scm__rc.d2149[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* thunk */
  scm__rc.d2149[124] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* prompt-tag */
  scm__rc.d2149[125] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* abort-handler */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[125]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[104]), scm__rc.d2149[124]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[105]), scm__rc.d2149[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[106]), scm__rc.d2149[123]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[109]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[122]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[111]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[112]), scm__rc.d2149[3]);
  scm__rc.d2149[126] = Scm_MakeExtendedPair(scm__rc.d2149[122], SCM_OBJ(&scm__rc.d2150[106]), SCM_OBJ(&scm__rc.d2150[114]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[127]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[127]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[127]))[5] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[127]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[127]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("call-with-continuation-prompt")), SCM_OBJ(&libproccall_with_continuation_prompt__STUB), 0);
  libproccall_with_continuation_prompt__STUB.common.info = scm__rc.d2149[126];
  libproccall_with_continuation_prompt__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[127]);
  scm__rc.d2149[135] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* abort-current-continuation */
  scm__rc.d2149[136] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* objs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[136]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[116]), scm__rc.d2149[19]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[117]), scm__rc.d2149[124]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[120]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[121]), scm__rc.d2149[135]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[122]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[123]), scm__rc.d2149[3]);
  scm__rc.d2149[137] = Scm_MakeExtendedPair(scm__rc.d2149[135], SCM_OBJ(&scm__rc.d2150[117]), SCM_OBJ(&scm__rc.d2150[125]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("abort-current-continuation")), SCM_OBJ(&libprocabort_current_continuation__STUB), 0);
  libprocabort_current_continuation__STUB.common.info = scm__rc.d2149[137];
  libprocabort_current_continuation__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[127]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[138] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* continuation-marks */
  scm__rc.d2149[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* cont */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[126]), scm__rc.d2149[124]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[127]), scm__rc.d2149[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[128]), scm__rc.d2149[139]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[131]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[132]), scm__rc.d2149[138]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[133]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[134]), scm__rc.d2149[3]);
  scm__rc.d2149[140] = Scm_MakeExtendedPair(scm__rc.d2149[138], SCM_OBJ(&scm__rc.d2150[128]), SCM_OBJ(&scm__rc.d2150[136]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("continuation-marks")), SCM_OBJ(&libproccontinuation_marks__STUB), 0);
  libproccontinuation_marks__STUB.common.info = scm__rc.d2149[140];
  libproccontinuation_marks__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[127]);
  scm__rc.d2149[141] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* current-continuation-marks */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[139]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[140]), scm__rc.d2149[141]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[142]), scm__rc.d2149[3]);
  scm__rc.d2149[142] = Scm_MakeExtendedPair(scm__rc.d2149[141], SCM_OBJ(&scm__rc.d2150[127]), SCM_OBJ(&scm__rc.d2150[144]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("current-continuation-marks")), SCM_OBJ(&libproccurrent_continuation_marks__STUB), 0);
  libproccurrent_continuation_marks__STUB.common.info = scm__rc.d2149[142];
  libproccurrent_continuation_marks__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[98]);
  scm__rc.d2149[143] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* continuation-marks? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[147]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[148]), scm__rc.d2149[143]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[149]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[150]), scm__rc.d2149[3]);
  scm__rc.d2149[144] = Scm_MakeExtendedPair(scm__rc.d2149[143], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[152]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("continuation-marks?")), SCM_OBJ(&libproccontinuation_marksP__STUB), 0);
  libproccontinuation_marksP__STUB.common.info = scm__rc.d2149[144];
  libproccontinuation_marksP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[115]);
  scm__rc.d2149[145] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* call-with-immediate-continuation-mark */
  scm__rc.d2149[146] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* key */
  scm__rc.d2149[147] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* fallback */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[153]), scm__rc.d2149[147]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[154]), scm__rc.d2149[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[155]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[156]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[159]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[160]), scm__rc.d2149[145]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[161]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[162]), scm__rc.d2149[3]);
  scm__rc.d2149[148] = Scm_MakeExtendedPair(scm__rc.d2149[145], SCM_OBJ(&scm__rc.d2150[156]), SCM_OBJ(&scm__rc.d2150[164]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[149]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[149]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[149]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[149]))[6] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[149]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[149]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("call-with-immediate-continuation-mark")), SCM_OBJ(&libproccall_with_immediate_continuation_mark__STUB), 0);
  libproccall_with_immediate_continuation_mark__STUB.common.info = scm__rc.d2149[148];
  libproccall_with_immediate_continuation_mark__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[149]);
  scm__rc.d2149[158] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* call-with-current-expression-name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[167]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[158]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[169]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[170]), scm__rc.d2149[3]);
  scm__rc.d2149[159] = Scm_MakeExtendedPair(scm__rc.d2149[158], SCM_OBJ(&scm__rc.d2150[22]), SCM_OBJ(&scm__rc.d2150[172]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[160]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[160]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[160]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[160]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("call-with-current-expression-name")), SCM_OBJ(&libproccall_with_current_expression_name__STUB), 0);
  libproccall_with_current_expression_name__STUB.common.info = scm__rc.d2149[159];
  libproccall_with_current_expression_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[160]);
  scm__rc.d2149[167] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* continuation-mark-set? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[175]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[176]), scm__rc.d2149[167]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[177]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[178]), scm__rc.d2149[3]);
  scm__rc.d2149[168] = Scm_MakeExtendedPair(scm__rc.d2149[167], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[180]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("continuation-mark-set?")), SCM_OBJ(&libproccontinuation_mark_setP__STUB), 0);
  libproccontinuation_mark_setP__STUB.common.info = scm__rc.d2149[168];
  libproccontinuation_mark_setP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[115]);
  scm__rc.d2149[169] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),TRUE); /* continuation-mark-set->list */
  scm__rc.d2149[170] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* cmset */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[181]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[182]), scm__rc.d2149[170]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[185]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[186]), scm__rc.d2149[169]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[187]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[188]), scm__rc.d2149[3]);
  scm__rc.d2149[171] = Scm_MakeExtendedPair(scm__rc.d2149[169], SCM_OBJ(&scm__rc.d2150[182]), SCM_OBJ(&scm__rc.d2150[190]));
  scm__rc.d2149[172] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* <continuation-mark-set>? */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[173]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[173]))[4] = scm__rc.d2149[172];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[173]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[173]))[6] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[173]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[173]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("continuation-mark-set->list")), SCM_OBJ(&libproccontinuation_mark_set_TOlist__STUB), 0);
  libproccontinuation_mark_set_TOlist__STUB.common.info = scm__rc.d2149[171];
  libproccontinuation_mark_set_TOlist__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[173]);
  scm__rc.d2149[182] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* continuation-mark-set-first */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[191]), scm__rc.d2149[147]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[192]), scm__rc.d2149[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[193]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[194]), scm__rc.d2149[170]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[197]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[198]), scm__rc.d2149[182]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[199]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[200]), scm__rc.d2149[3]);
  scm__rc.d2149[183] = Scm_MakeExtendedPair(scm__rc.d2149[182], SCM_OBJ(&scm__rc.d2150[194]), SCM_OBJ(&scm__rc.d2150[202]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("continuation-mark-set-first")), SCM_OBJ(&libproccontinuation_mark_set_first__STUB), 0);
  libproccontinuation_mark_set_first__STUB.common.info = scm__rc.d2149[183];
  libproccontinuation_mark_set_first__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[173]);
  scm__rc.d2149[184] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* make-continuation-mark-key */
  scm__rc.d2149[185] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* continuation-mark-key- */
  scm__rc.d2149[186] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* lambda */
  scm__rc.d2149[187] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* quote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[203]), scm__rc.d2149[185]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[204]), scm__rc.d2149[187]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[206]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[208]), scm__rc.d2149[94]);
  scm__rc.d2149[188] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61])),TRUE); /* gensym */
  scm__rc.d2149[189] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* x->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[209]), scm__rc.d2149[189]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[211]), scm__rc.d2149[188]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[214]), scm__rc.d2149[186]);
  scm__rc.d2149[191] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* error */
  scm__rc.d2149[190] = Scm_MakeIdentifier(scm__rc.d2149[191], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2149[193] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[96]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[192] = Scm_MakeIdentifier(scm__rc.d2149[189], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#x->string */
  scm__rc.d2149[194] = Scm_MakeIdentifier(scm__rc.d2149[188], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#gensym */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[217]), scm__rc.d2149[2]);
  scm__rc.d2149[195] = Scm_MakeExtendedPair(scm__rc.d2149[184], SCM_OBJ(&scm__rc.d2150[208]), SCM_OBJ(&scm__rc.d2150[218]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[219]), scm__rc.d2149[195]);
  scm__rc.d2149[196] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3]))->name = scm__rc.d2149[184];/* make-continuation-mark-key */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[3]))->debugInfo = scm__rc.d2149[196];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]))[4] = SCM_WORD(scm__rc.d2149[185]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]))[29] = SCM_WORD(scm__rc.d2149[190]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]))[34] = SCM_WORD(scm__rc.d2149[192]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[39]))[36] = SCM_WORD(scm__rc.d2149[194]);
  scm__rc.d2149[197] = Scm_MakeIdentifier(scm__rc.d2149[184], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#make-continuation-mark-key */
  scm__rc.d2149[198] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[4]))->debugInfo = scm__rc.d2149[198];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[77]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[77]))[6] = SCM_WORD(scm__rc.d2149[184]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[77]))[13] = SCM_WORD(scm__rc.d2149[197]);
  scm__rc.d2149[199] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* continuation-mark-key? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[222]), scm__rc.d2149[2]);
  scm__rc.d2149[200] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* unused-args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[223]), scm__rc.d2149[200]);
  scm__rc.d2149[201] = Scm_MakeExtendedPair(scm__rc.d2149[199], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[225]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[226]), scm__rc.d2149[201]);
  scm__rc.d2149[202] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5]))->name = scm__rc.d2149[199];/* continuation-mark-key? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[5]))->debugInfo = scm__rc.d2149[202];
  scm__rc.d2149[203] = Scm_MakeIdentifier(scm__rc.d2149[199], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#continuation-mark-key? */
  scm__rc.d2149[204] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[6]))->debugInfo = scm__rc.d2149[204];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[94]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[94]))[6] = SCM_WORD(scm__rc.d2149[199]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[94]))[13] = SCM_WORD(scm__rc.d2149[203]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[205] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* identity */
  scm__rc.d2149[206] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* x */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[227]), scm__rc.d2149[206]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[228]), scm__rc.d2149[205]);
  scm__rc.d2149[207] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* lvar */
  scm__rc.d2149[208] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* $LREF */
  scm__rc.d2149[209] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* $LAMBDA */
  scm__rc.d2149[210] = Scm_MakeIdentifier(scm__rc.d2149[186], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#lambda */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[231]), scm__rc.d2149[210]);
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[211]))[3] = scm__rc.d2149[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[211]))[4] = scm__rc.d2149[206];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[211]))[5] = scm__rc.d2149[208];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[211]))[7] = scm__rc.d2149[209];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[211]))[9] = scm__rc.d2149[205];
  scm__rc.d2149[226] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->name = scm__rc.d2149[205];/* identity */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[7]))->debugInfo = scm__rc.d2149[226];
  ScmObj G2157 = Scm_MakeClosure(SCM_OBJ(&scm__rc.d2152[7]), NULL);

  Scm_MakeBinding(SCM_MODULE(Scm_CurrentModule()) /*  */, SCM_SYMBOL(scm__rc.d2149[205]) /* identity */, G2157,SCM_BINDING_INLINABLE);

  scm__rc.d2149[227] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* constantly */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[234]), scm__rc.d2149[227]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[227]);
  scm__rc.d2149[228] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* _ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[238]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[239]), scm__rc.d2149[228]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[240]), scm__rc.d2149[200]);
  scm__rc.d2149[229] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[228], SCM_OBJ(&scm__rc.d2150[242]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[243]), scm__rc.d2149[229]);
  scm__rc.d2149[230] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[8]))->name = scm__rc.d2149[227];/* (constantly constantly) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[8]))->debugInfo = scm__rc.d2149[230];
  scm__rc.d2149[231] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* val */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[244]), scm__rc.d2149[231]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[245]), scm__rc.d2149[227]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[247]), scm__rc.d2149[228]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[248]), scm__rc.d2149[210]);
  scm__rc.d2149[232] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* ^ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[250]), scm__rc.d2149[232]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[253]), scm__rc.d2149[210]);
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[3] = scm__rc.d2149[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[4] = scm__rc.d2149[231];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[5] = scm__rc.d2149[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[6] = scm__rc.d2149[228];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[7] = scm__rc.d2149[208];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[9] = scm__rc.d2149[209];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[11] = scm__rc.d2149[227];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[17] = scm__rc.d2149[209];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[233]))[19] = scm__rc.d2149[227];
  scm__rc.d2149[258] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->name = scm__rc.d2149[227];/* constantly */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[9]))->debugInfo = scm__rc.d2149[258];
  scm__rc.d2149[259] = Scm_MakeIdentifier(scm__rc.d2149[41], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#values */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[256]), scm__rc.d2149[2]);
  scm__rc.d2149[260] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[228], SCM_OBJ(&scm__rc.d2150[257]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[258]), scm__rc.d2149[260]);
  scm__rc.d2149[261] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[10]))->name = scm__rc.d2149[227];/* (constantly constantly) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[10]))->debugInfo = scm__rc.d2149[261];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[114]))[1] = SCM_WORD(scm__rc.d2149[259]);
  scm__rc.d2149[262] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* vals */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[259]), scm__rc.d2149[227]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[259]), scm__rc.d2149[262]);
  scm__rc.d2149[263] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* $GREF */
  scm__rc.d2149[264] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),TRUE); /* $ASM */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[261]), scm__rc.d2149[262]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[262]), scm__rc.d2149[41]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[263]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[269]), scm__rc.d2149[228]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[270]), scm__rc.d2149[210]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[271]), scm__rc.d2149[232]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[273]), scm__rc.d2149[262]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[274]), scm__rc.d2149[210]);
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[3] = scm__rc.d2149[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[4] = scm__rc.d2149[262];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[5] = scm__rc.d2149[207];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[6] = scm__rc.d2149[228];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[7] = scm__rc.d2149[263];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[8] = scm__rc.d2149[259];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[9] = scm__rc.d2149[208];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[11] = scm__rc.d2149[264];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[15] = scm__rc.d2149[209];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[17] = scm__rc.d2149[227];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[23] = scm__rc.d2149[209];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[265]))[25] = scm__rc.d2149[227];
  scm__rc.d2149[296] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->name = scm__rc.d2149[227];/* constantly */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[11]))->debugInfo = scm__rc.d2149[296];
  scm__rc.d2149[298] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* make-case-lambda */
  scm__rc.d2149[297] = Scm_MakeIdentifier(scm__rc.d2149[298], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#make-case-lambda */
  scm__rc.d2149[299] = Scm_MakeIdentifier(scm__rc.d2149[227], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#constantly */
  scm__rc.d2149[300] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[12]))->debugInfo = scm__rc.d2149[300];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[122]))[13] = SCM_WORD(scm__rc.d2149[227]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[122]))[15] = SCM_WORD(scm__rc.d2149[297]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[122]))[17] = SCM_WORD(scm__rc.d2149[299]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[301] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* %generate-values */
  scm__rc.d2149[302] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),FALSE); /* G2158 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[275]), scm__rc.d2149[302]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[276]), scm__rc.d2149[301]);
  scm__rc.d2149[303] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* g */
  scm__rc.d2149[304] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* tail */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[277]), scm__rc.d2149[304]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[278]), scm__rc.d2149[303]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[281]), scm__rc.d2149[2]);
  scm__rc.d2149[305] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[278]), SCM_OBJ(&scm__rc.d2150[282]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[283]), scm__rc.d2149[305]);
  scm__rc.d2149[306] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[13]))->debugInfo = scm__rc.d2149[306];
  scm__rc.d2149[308] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* fold-right */
  scm__rc.d2149[309] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[82]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[307] = Scm_MakeIdentifier(scm__rc.d2149[308], SCM_MODULE(scm__rc.d2149[309]), SCM_NIL); /* gauche.internal#fold-right */
  scm__rc.d2149[310] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* gens */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[285]), scm__rc.d2149[310]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[285]), scm__rc.d2149[304]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[288]), scm__rc.d2149[2]);
  scm__rc.d2149[311] = Scm_MakeExtendedPair(scm__rc.d2149[301], SCM_OBJ(&scm__rc.d2150[285]), SCM_OBJ(&scm__rc.d2150[289]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[290]), scm__rc.d2149[311]);
  scm__rc.d2149[312] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[14]))->name = scm__rc.d2149[301];/* %generate-values */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[14]))->debugInfo = scm__rc.d2149[312];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[162]))[4] = SCM_WORD(scm__rc.d2149[307]);
  scm__rc.d2149[313] = Scm_MakeIdentifier(scm__rc.d2149[301], SCM_MODULE(scm__rc.d2149[309]), SCM_NIL); /* gauche.internal#%generate-values */
  scm__rc.d2149[314] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[15]))->debugInfo = scm__rc.d2149[314];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[168]))[5] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[168]))[8] = SCM_WORD(scm__rc.d2149[301]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[168]))[15] = SCM_WORD(scm__rc.d2149[313]);
  scm__rc.d2149[315] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),TRUE); /* generator-fold */
  scm__rc.d2149[316] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* fn */
  scm__rc.d2149[317] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),TRUE); /* knil */
  scm__rc.d2149[318] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),TRUE); /* gen */
  scm__rc.d2149[319] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* more */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[291]), scm__rc.d2149[318]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[291]), scm__rc.d2149[319]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[292]), scm__rc.d2149[317]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[293]), scm__rc.d2149[316]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[296]), scm__rc.d2149[2]);
  scm__rc.d2149[320] = Scm_MakeExtendedPair(scm__rc.d2149[315], SCM_OBJ(&scm__rc.d2150[293]), SCM_OBJ(&scm__rc.d2150[297]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[298]), scm__rc.d2149[320]);
  scm__rc.d2149[321] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16]))->name = scm__rc.d2149[315];/* generator-fold */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[16]))->debugInfo = scm__rc.d2149[321];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[185]))[43] = SCM_WORD(scm__rc.d2149[313]);
  scm__rc.d2149[322] = Scm_MakeIdentifier(scm__rc.d2149[315], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#generator-fold */
  scm__rc.d2149[323] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[17]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[17]))->debugInfo = scm__rc.d2149[323];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[245]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[245]))[6] = SCM_WORD(scm__rc.d2149[315]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[245]))[13] = SCM_WORD(scm__rc.d2149[322]);
  scm__rc.d2149[324] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* generator-fold-right */
  scm__rc.d2149[325] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),TRUE); /* loop */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[299]), scm__rc.d2149[325]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[300]), scm__rc.d2149[324]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[303]), scm__rc.d2149[2]);
  scm__rc.d2149[326] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[300]), scm__rc.d2149[228], SCM_OBJ(&scm__rc.d2150[304]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[305]), scm__rc.d2149[326]);
  scm__rc.d2149[327] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[18]))->name = scm__rc.d2149[325];/* (generator-fold-right loop) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[18]))->debugInfo = scm__rc.d2149[327];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[309]), scm__rc.d2149[2]);
  scm__rc.d2149[328] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[300]), scm__rc.d2149[228], SCM_OBJ(&scm__rc.d2150[310]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[311]), scm__rc.d2149[328]);
  scm__rc.d2149[329] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19]))->name = scm__rc.d2149[325];/* (generator-fold-right loop) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[19]))->debugInfo = scm__rc.d2149[329];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[279]))[4] = SCM_WORD(scm__rc.d2149[313]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[315]), scm__rc.d2149[2]);
  scm__rc.d2149[330] = Scm_MakeExtendedPair(scm__rc.d2149[324], SCM_OBJ(&scm__rc.d2150[293]), SCM_OBJ(&scm__rc.d2150[316]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[317]), scm__rc.d2149[330]);
  scm__rc.d2149[331] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[20]))->name = scm__rc.d2149[324];/* generator-fold-right */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[20]))->debugInfo = scm__rc.d2149[331];
  scm__rc.d2149[332] = Scm_MakeIdentifier(scm__rc.d2149[324], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#generator-fold-right */
  scm__rc.d2149[333] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[21]))->debugInfo = scm__rc.d2149[333];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[324]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[324]))[6] = SCM_WORD(scm__rc.d2149[324]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[324]))[13] = SCM_WORD(scm__rc.d2149[332]);
  scm__rc.d2149[334] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* generator-for-each */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[318]), scm__rc.d2149[316]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[321]), scm__rc.d2149[2]);
  scm__rc.d2149[335] = Scm_MakeExtendedPair(scm__rc.d2149[334], SCM_OBJ(&scm__rc.d2150[318]), SCM_OBJ(&scm__rc.d2150[322]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[323]), scm__rc.d2149[335]);
  scm__rc.d2149[336] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22]))->name = scm__rc.d2149[334];/* generator-for-each */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[22]))->debugInfo = scm__rc.d2149[336];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[339]))[35] = SCM_WORD(scm__rc.d2149[313]);
  scm__rc.d2149[337] = Scm_MakeIdentifier(scm__rc.d2149[334], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#generator-for-each */
  scm__rc.d2149[338] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[23]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[23]))->debugInfo = scm__rc.d2149[338];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[390]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[390]))[6] = SCM_WORD(scm__rc.d2149[334]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[390]))[13] = SCM_WORD(scm__rc.d2149[337]);
  scm__rc.d2149[339] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* generator-map */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[326]), scm__rc.d2149[2]);
  scm__rc.d2149[340] = Scm_MakeExtendedPair(scm__rc.d2149[339], SCM_OBJ(&scm__rc.d2150[318]), SCM_OBJ(&scm__rc.d2150[327]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[328]), scm__rc.d2149[340]);
  scm__rc.d2149[341] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[24]))->name = scm__rc.d2149[339];/* generator-map */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[24]))->debugInfo = scm__rc.d2149[341];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[405]))[46] = SCM_WORD(scm__rc.d2149[313]);
  scm__rc.d2149[342] = Scm_MakeIdentifier(scm__rc.d2149[339], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#generator-map */
  scm__rc.d2149[343] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[25]))->debugInfo = scm__rc.d2149[343];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[472]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[472]))[6] = SCM_WORD(scm__rc.d2149[339]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[472]))[13] = SCM_WORD(scm__rc.d2149[342]);
  scm__rc.d2149[344] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),TRUE); /* generator-find */
  scm__rc.d2149[345] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* pred */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[329]), scm__rc.d2149[318]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[330]), scm__rc.d2149[345]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[333]), scm__rc.d2149[2]);
  scm__rc.d2149[346] = Scm_MakeExtendedPair(scm__rc.d2149[344], SCM_OBJ(&scm__rc.d2150[330]), SCM_OBJ(&scm__rc.d2150[334]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[335]), scm__rc.d2149[346]);
  scm__rc.d2149[347] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[26])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[26]))->name = scm__rc.d2149[344];/* generator-find */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[26]))->debugInfo = scm__rc.d2149[347];
  scm__rc.d2149[348] = Scm_MakeIdentifier(scm__rc.d2149[344], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#generator-find */
  scm__rc.d2149[349] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[27])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[27]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[27]))->debugInfo = scm__rc.d2149[349];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[514]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[514]))[6] = SCM_WORD(scm__rc.d2149[344]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[514]))[13] = SCM_WORD(scm__rc.d2149[348]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[350] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* profiler-start */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[336]), scm__rc.d2149[350]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[337]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[338]), scm__rc.d2149[3]);
  scm__rc.d2149[351] = Scm_MakeExtendedPair(scm__rc.d2149[350], SCM_NIL, SCM_OBJ(&scm__rc.d2150[339]));
  scm__rc.d2149[352] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[353]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[353]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[353]))[5] = scm__rc.d2149[352];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("profiler-start")), SCM_OBJ(&libprocprofiler_start__STUB), 0);
  libprocprofiler_start__STUB.common.info = scm__rc.d2149[351];
  libprocprofiler_start__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[353]);
  scm__rc.d2149[359] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* profiler-stop */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[340]), scm__rc.d2149[359]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[341]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[342]), scm__rc.d2149[3]);
  scm__rc.d2149[360] = Scm_MakeExtendedPair(scm__rc.d2149[359], SCM_NIL, SCM_OBJ(&scm__rc.d2150[343]));
  scm__rc.d2149[361] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[362]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[362]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[362]))[5] = scm__rc.d2149[361];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("profiler-stop")), SCM_OBJ(&libprocprofiler_stop__STUB), 0);
  libprocprofiler_stop__STUB.common.info = scm__rc.d2149[360];
  libprocprofiler_stop__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[362]);
  scm__rc.d2149[368] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* profiler-reset */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[344]), scm__rc.d2149[368]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[345]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[346]), scm__rc.d2149[3]);
  scm__rc.d2149[369] = Scm_MakeExtendedPair(scm__rc.d2149[368], SCM_NIL, SCM_OBJ(&scm__rc.d2150[347]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("profiler-reset")), SCM_OBJ(&libprocprofiler_reset__STUB), 0);
  libprocprofiler_reset__STUB.common.info = scm__rc.d2149[369];
  libprocprofiler_reset__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[353]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[370] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* profiler-raw-result */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[348]), scm__rc.d2149[370]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[349]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[350]), scm__rc.d2149[3]);
  scm__rc.d2149[371] = Scm_MakeExtendedPair(scm__rc.d2149[370], SCM_NIL, SCM_OBJ(&scm__rc.d2150[351]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[372]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[372]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[372]))[5] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("profiler-raw-result")), SCM_OBJ(&libprocprofiler_raw_result__STUB), 0);
  libprocprofiler_raw_result__STUB.common.info = scm__rc.d2149[371];
  libprocprofiler_raw_result__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[372]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[378] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* subr? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[354]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[355]), scm__rc.d2149[378]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[356]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[357]), scm__rc.d2149[3]);
  scm__rc.d2149[379] = Scm_MakeExtendedPair(scm__rc.d2149[378], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[359]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("subr?")), SCM_OBJ(&libprocsubrP__STUB), 0);
  libprocsubrP__STUB.common.info = scm__rc.d2149[379];
  libprocsubrP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[115]);
  scm__rc.d2149[380] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* closure? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[362]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[363]), scm__rc.d2149[380]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[364]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[365]), scm__rc.d2149[3]);
  scm__rc.d2149[381] = Scm_MakeExtendedPair(scm__rc.d2149[380], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[367]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("closure?")), SCM_OBJ(&libprocclosureP__STUB), 0);
  libprocclosureP__STUB.common.info = scm__rc.d2149[381];
  libprocclosureP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[115]);
  scm__rc.d2149[382] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104])),TRUE); /* toplevel-closure? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[370]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[371]), scm__rc.d2149[382]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[372]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[373]), scm__rc.d2149[3]);
  scm__rc.d2149[383] = Scm_MakeExtendedPair(scm__rc.d2149[382], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[375]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("toplevel-closure?")), SCM_OBJ(&libproctoplevel_closureP__STUB), 0);
  libproctoplevel_closureP__STUB.common.info = scm__rc.d2149[383];
  libproctoplevel_closureP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[115]);
  scm__rc.d2149[384] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* closure-code */
  scm__rc.d2149[385] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[106])),TRUE); /* clo */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[376]), scm__rc.d2149[385]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[379]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[380]), scm__rc.d2149[384]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[381]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[382]), scm__rc.d2149[3]);
  scm__rc.d2149[386] = Scm_MakeExtendedPair(scm__rc.d2149[384], SCM_OBJ(&scm__rc.d2150[376]), SCM_OBJ(&scm__rc.d2150[384]));
  scm__rc.d2149[387] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107])),TRUE); /* <closure> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[388]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[388]))[4] = scm__rc.d2149[387];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[388]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[388]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("closure-code")), SCM_OBJ(&libprocclosure_code__STUB), 0);
  libprocclosure_code__STUB.common.info = scm__rc.d2149[386];
  libprocclosure_code__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
  scm__rc.d2149[395] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[108])),TRUE); /* method-code */
  scm__rc.d2149[396] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[109])),TRUE); /* m */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[385]), scm__rc.d2149[396]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[388]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[389]), scm__rc.d2149[395]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[390]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[391]), scm__rc.d2149[3]);
  scm__rc.d2149[397] = Scm_MakeExtendedPair(scm__rc.d2149[395], SCM_OBJ(&scm__rc.d2150[385]), SCM_OBJ(&scm__rc.d2150[393]));
  scm__rc.d2149[398] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[110])),TRUE); /* <method> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[399]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[399]))[4] = scm__rc.d2149[398];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[399]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[399]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("method-code")), SCM_OBJ(&libprocmethod_code__STUB), 0);
  libprocmethod_code__STUB.common.info = scm__rc.d2149[397];
  libprocmethod_code__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[399]);
  scm__rc.d2149[406] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[111])),TRUE); /* procedure-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[396]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[397]), scm__rc.d2149[406]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[398]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[399]), scm__rc.d2149[3]);
  scm__rc.d2149[407] = Scm_MakeExtendedPair(scm__rc.d2149[406], SCM_OBJ(&scm__rc.d2150[22]), SCM_OBJ(&scm__rc.d2150[401]));
  scm__rc.d2149[408] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[112])),TRUE); /* <procedure> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[409]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[409]))[4] = scm__rc.d2149[408];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[409]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[409]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("procedure-info")), SCM_OBJ(&libprocprocedure_info__STUB), 0);
  libprocprocedure_info__STUB.common.info = scm__rc.d2149[407];
  libprocprocedure_info__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[409]);
  scm__rc.d2149[416] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[113])),TRUE); /* procedure-type */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[404]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[405]), scm__rc.d2149[416]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[406]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[407]), scm__rc.d2149[3]);
  scm__rc.d2149[417] = Scm_MakeExtendedPair(scm__rc.d2149[416], SCM_OBJ(&scm__rc.d2150[22]), SCM_OBJ(&scm__rc.d2150[409]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("procedure-type")), SCM_OBJ(&libprocprocedure_type__STUB), 0);
  libprocprocedure_type__STUB.common.info = scm__rc.d2149[417];
  libprocprocedure_type__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[409]);
  scm__rc.d2149[418] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[114])),TRUE); /* method-leaf? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[412]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[413]), scm__rc.d2149[418]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[414]), scm__rc.d2149[96]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[415]), scm__rc.d2149[3]);
  scm__rc.d2149[419] = Scm_MakeExtendedPair(scm__rc.d2149[418], SCM_OBJ(&scm__rc.d2150[385]), SCM_OBJ(&scm__rc.d2150[417]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[420]))[3] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[420]))[4] = scm__rc.d2149[398];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[420]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[420]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("method-leaf?")), SCM_OBJ(&libprocmethod_leafP__STUB), 0);
  libprocmethod_leafP__STUB.common.info = scm__rc.d2149[419];
  libprocmethod_leafP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[420]);
  scm__rc.d2149[427] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[115])),TRUE); /* applicable? */
  scm__rc.d2149[429] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[116])),TRUE); /* method-applicable-for-classes? */
  scm__rc.d2149[431] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[117])),TRUE); /* gauche.object */
  scm__rc.d2149[430] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[431]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.object */
  scm__rc.d2149[428] = Scm_MakeIdentifier(scm__rc.d2149[429], SCM_MODULE(scm__rc.d2149[430]), SCM_NIL); /* gauche.object#method-applicable-for-classes? */
  scm__rc.d2149[433] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[118])),TRUE); /* class-of */
  scm__rc.d2149[432] = Scm_MakeIdentifier(scm__rc.d2149[433], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#class-of */
  scm__rc.d2149[434] = Scm_MakeIdentifier(scm__rc.d2149[408], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#<procedure> */
  scm__rc.d2149[436] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[119])),TRUE); /* case-lambda-decompose */
  scm__rc.d2149[435] = Scm_MakeIdentifier(scm__rc.d2149[436], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#case-lambda-decompose */
  scm__rc.d2149[438] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[120])),TRUE); /* >= */
  scm__rc.d2149[437] = Scm_MakeIdentifier(scm__rc.d2149[438], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#>= */
  scm__rc.d2149[440] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[121])),TRUE); /* = */
  scm__rc.d2149[439] = Scm_MakeIdentifier(scm__rc.d2149[440], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#= */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[420]), scm__rc.d2149[427]);
  scm__rc.d2149[441] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[122])),TRUE); /* reqargs */
  scm__rc.d2149[442] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[123])),TRUE); /* optarg */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[421]), scm__rc.d2149[442]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[422]), scm__rc.d2149[441]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[425]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[426]), scm__rc.d2149[200]);
  scm__rc.d2149[443] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[420]), SCM_OBJ(&scm__rc.d2150[422]), SCM_OBJ(&scm__rc.d2150[428]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[429]), scm__rc.d2149[443]);
  scm__rc.d2149[444] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[28])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[28]))->debugInfo = scm__rc.d2149[444];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[529]))[6] = SCM_WORD(scm__rc.d2149[437]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[529]))[10] = SCM_WORD(scm__rc.d2149[439]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[430]), scm__rc.d2149[427]);
  scm__rc.d2149[445] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[124])),TRUE); /* info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[431]), scm__rc.d2149[445]);
  scm__rc.d2149[446] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[430]), SCM_OBJ(&scm__rc.d2150[431]), SCM_OBJ(&scm__rc.d2150[432]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[433]), scm__rc.d2149[446]);
  scm__rc.d2149[447] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[29])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[29]))->debugInfo = scm__rc.d2149[447];
  scm__rc.d2149[449] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[125])),TRUE); /* any */
  scm__rc.d2149[448] = Scm_MakeIdentifier(scm__rc.d2149[449], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#any */
  scm__rc.d2149[450] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[126])),TRUE); /* required */
  scm__rc.d2149[451] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* optional */
  scm__rc.d2149[453] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[127])),TRUE); /* <generic> */
  scm__rc.d2149[452] = Scm_MakeIdentifier(scm__rc.d2149[453], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#<generic> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[436]), scm__rc.d2149[2]);
  scm__rc.d2149[454] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[430]), SCM_OBJ(&scm__rc.d2150[385]), SCM_OBJ(&scm__rc.d2150[437]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[438]), scm__rc.d2149[454]);
  scm__rc.d2149[455] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[30])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[30]))->debugInfo = scm__rc.d2149[455];
  scm__rc.d2149[456] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[128])),TRUE); /* methods */
  scm__rc.d2149[458] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[129])),TRUE); /* ~ */
  scm__rc.d2149[457] = Scm_MakeIdentifier(scm__rc.d2149[458], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#~ */
  scm__rc.d2149[459] = Scm_MakeIdentifier(scm__rc.d2149[427], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#applicable? */
  scm__rc.d2149[461] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[130])),TRUE); /* object-apply */
  scm__rc.d2149[460] = Scm_MakeIdentifier(scm__rc.d2149[461], SCM_MODULE(scm__rc.d2149[193]), SCM_NIL); /* gauche#object-apply */
  scm__rc.d2149[462] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[131])),TRUE); /* arg-types */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[439]), scm__rc.d2149[17]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[439]), scm__rc.d2149[462]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[442]), scm__rc.d2149[2]);
  scm__rc.d2149[463] = Scm_MakeExtendedPair(scm__rc.d2149[427], SCM_OBJ(&scm__rc.d2150[439]), SCM_OBJ(&scm__rc.d2150[443]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[444]), scm__rc.d2149[463]);
  scm__rc.d2149[464] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[31])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[31]))->name = scm__rc.d2149[427];/* applicable? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[31]))->debugInfo = scm__rc.d2149[464];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[3] = SCM_WORD(scm__rc.d2149[428]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[9] = SCM_WORD(scm__rc.d2149[432]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[13] = SCM_WORD(scm__rc.d2149[434]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[23] = SCM_WORD(scm__rc.d2149[435]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[33] = SCM_WORD(scm__rc.d2149[448]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[38] = SCM_WORD(scm__rc.d2149[450]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[42] = SCM_WORD(scm__rc.d2149[451]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[46] = SCM_WORD(scm__rc.d2149[437]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[50] = SCM_WORD(scm__rc.d2149[439]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[55] = SCM_WORD(scm__rc.d2149[452]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[64] = SCM_WORD(scm__rc.d2149[456]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[66] = SCM_WORD(scm__rc.d2149[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[68] = SCM_WORD(scm__rc.d2149[448]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[71] = SCM_WORD(scm__rc.d2149[459]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[553]))[73] = SCM_WORD(scm__rc.d2149[460]);
  scm__rc.d2149[465] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2153[32])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[32]))->name = scm__rc.d2149[72];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2152[32]))->debugInfo = scm__rc.d2149[465];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[631]))[3] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[631]))[6] = SCM_WORD(scm__rc.d2149[427]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2151[631]))[13] = SCM_WORD(scm__rc.d2149[459]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[466] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[132])),TRUE); /* procedure-locked-setter */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[447]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[448]), scm__rc.d2149[466]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[449]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[450]), scm__rc.d2149[3]);
  scm__rc.d2149[467] = Scm_MakeExtendedPair(scm__rc.d2149[466], SCM_OBJ(&scm__rc.d2150[22]), SCM_OBJ(&scm__rc.d2150[452]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[468]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[468]))[4] = scm__rc.d2149[408];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[468]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[468]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("procedure-locked-setter")), SCM_OBJ(&libprocprocedure_locked_setter__STUB), 0);
  libprocprocedure_locked_setter__STUB.common.info = scm__rc.d2149[467];
  libprocprocedure_locked_setter__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[468]);
  scm__rc.d2149[475] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[133])),TRUE); /* procedure-constant? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[455]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[456]), scm__rc.d2149[475]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[457]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[458]), scm__rc.d2149[3]);
  scm__rc.d2149[476] = Scm_MakeExtendedPair(scm__rc.d2149[475], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[460]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[477]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[477]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[477]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[477]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("procedure-constant?")), SCM_OBJ(&libprocprocedure_constantP__STUB), 0);
  libprocprocedure_constantP__STUB.common.info = scm__rc.d2149[476];
  libprocprocedure_constantP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[477]);
  scm__rc.d2149[484] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[134])),TRUE); /* %procedure-copy */
  scm__rc.d2149[485] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[135])),TRUE); /* p */
  scm__rc.d2149[486] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[136])),TRUE); /* tags-alist */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[461]), scm__rc.d2149[486]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[462]), scm__rc.d2149[94]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[463]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[466]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[467]), scm__rc.d2149[484]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[468]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[469]), scm__rc.d2149[3]);
  scm__rc.d2149[487] = Scm_MakeExtendedPair(scm__rc.d2149[484], SCM_OBJ(&scm__rc.d2150[463]), SCM_OBJ(&scm__rc.d2150[471]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[488]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[488]))[4] = scm__rc.d2149[408];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[488]))[5] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[488]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[488]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%procedure-copy")), SCM_OBJ(&libproc_25procedure_copy__STUB), 0);
  libproc_25procedure_copy__STUB.common.info = scm__rc.d2149[487];
  libproc_25procedure_copy__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[488]);
  scm__rc.d2149[496] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[137])),TRUE); /* %procedure-tags-alist */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[472]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[475]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[476]), scm__rc.d2149[496]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[477]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[478]), scm__rc.d2149[3]);
  scm__rc.d2149[497] = Scm_MakeExtendedPair(scm__rc.d2149[496], SCM_OBJ(&scm__rc.d2150[472]), SCM_OBJ(&scm__rc.d2150[480]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%procedure-tags-alist")), SCM_OBJ(&libproc_25procedure_tags_alist__STUB), 0);
  libproc_25procedure_tags_alist__STUB.common.info = scm__rc.d2149[497];
  libproc_25procedure_tags_alist__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[468]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[498] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[138])),TRUE); /* %closure-env->list */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[483]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[484]), scm__rc.d2149[498]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[485]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[486]), scm__rc.d2149[3]);
  scm__rc.d2149[499] = Scm_MakeExtendedPair(scm__rc.d2149[498], SCM_OBJ(&scm__rc.d2150[376]), SCM_OBJ(&scm__rc.d2150[488]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[500]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[500]))[4] = scm__rc.d2149[387];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[500]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[500]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%closure-env->list")), SCM_OBJ(&libproc_25closure_env_TOlist__STUB), 0);
  libproc_25closure_env_TOlist__STUB.common.info = scm__rc.d2149[499];
  libproc_25closure_env_TOlist__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[500]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[507] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[139])),TRUE); /* %apply-rec0 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[491]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[492]), scm__rc.d2149[507]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[493]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[494]), scm__rc.d2149[3]);
  scm__rc.d2149[508] = Scm_MakeExtendedPair(scm__rc.d2149[507], SCM_OBJ(&scm__rc.d2150[472]), SCM_OBJ(&scm__rc.d2150[496]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%apply-rec0")), SCM_OBJ(&libproc_25apply_rec0__STUB), 0);
  libproc_25apply_rec0__STUB.common.info = scm__rc.d2149[508];
  libproc_25apply_rec0__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[84]);
  scm__rc.d2149[509] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[140])),TRUE); /* %apply-rec1 */
  scm__rc.d2149[510] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[141])),TRUE); /* a */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[497]), scm__rc.d2149[510]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[498]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[501]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[502]), scm__rc.d2149[509]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[503]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[504]), scm__rc.d2149[3]);
  scm__rc.d2149[511] = Scm_MakeExtendedPair(scm__rc.d2149[509], SCM_OBJ(&scm__rc.d2150[498]), SCM_OBJ(&scm__rc.d2150[506]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[512]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[512]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[512]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[512]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[512]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%apply-rec1")), SCM_OBJ(&libproc_25apply_rec1__STUB), 0);
  libproc_25apply_rec1__STUB.common.info = scm__rc.d2149[511];
  libproc_25apply_rec1__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[512]);
  scm__rc.d2149[520] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[142])),TRUE); /* %apply-rec2 */
  scm__rc.d2149[521] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[143])),TRUE); /* b */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[507]), scm__rc.d2149[521]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[508]), scm__rc.d2149[510]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[509]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[512]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[513]), scm__rc.d2149[520]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[514]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[515]), scm__rc.d2149[3]);
  scm__rc.d2149[522] = Scm_MakeExtendedPair(scm__rc.d2149[520], SCM_OBJ(&scm__rc.d2150[509]), SCM_OBJ(&scm__rc.d2150[517]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[523]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[523]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[523]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[523]))[6] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[523]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[523]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%apply-rec2")), SCM_OBJ(&libproc_25apply_rec2__STUB), 0);
  libproc_25apply_rec2__STUB.common.info = scm__rc.d2149[522];
  libproc_25apply_rec2__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[523]);
  scm__rc.d2149[532] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[144])),TRUE); /* %apply-rec3 */
  scm__rc.d2149[533] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[145])),TRUE); /* c */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[518]), scm__rc.d2149[533]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[519]), scm__rc.d2149[521]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[520]), scm__rc.d2149[510]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[521]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[524]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[525]), scm__rc.d2149[532]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[526]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[527]), scm__rc.d2149[3]);
  scm__rc.d2149[534] = Scm_MakeExtendedPair(scm__rc.d2149[532], SCM_OBJ(&scm__rc.d2150[521]), SCM_OBJ(&scm__rc.d2150[529]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[6] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[7] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[8] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[9] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%apply-rec3")), SCM_OBJ(&libproc_25apply_rec3__STUB), 0);
  libproc_25apply_rec3__STUB.common.info = scm__rc.d2149[534];
  libproc_25apply_rec3__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[535]);
  scm__rc.d2149[545] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[146])),TRUE); /* %apply-rec4 */
  scm__rc.d2149[546] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[147])),TRUE); /* d */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[530]), scm__rc.d2149[546]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[531]), scm__rc.d2149[533]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[532]), scm__rc.d2149[521]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[533]), scm__rc.d2149[510]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[534]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[537]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[538]), scm__rc.d2149[545]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[539]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[540]), scm__rc.d2149[3]);
  scm__rc.d2149[547] = Scm_MakeExtendedPair(scm__rc.d2149[545], SCM_OBJ(&scm__rc.d2150[534]), SCM_OBJ(&scm__rc.d2150[542]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[6] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[7] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[8] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[9] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[548]))[10] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%apply-rec4")), SCM_OBJ(&libproc_25apply_rec4__STUB), 0);
  libproc_25apply_rec4__STUB.common.info = scm__rc.d2149[547];
  libproc_25apply_rec4__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[548]);
  scm__rc.d2149[559] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[148])),TRUE); /* %apply-rec */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[543]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[546]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[547]), scm__rc.d2149[559]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[548]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[549]), scm__rc.d2149[3]);
  scm__rc.d2149[560] = Scm_MakeExtendedPair(scm__rc.d2149[559], SCM_OBJ(&scm__rc.d2150[543]), SCM_OBJ(&scm__rc.d2150[551]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[561]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[561]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[561]))[5] = scm__rc.d2149[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[561]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[561]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%apply-rec")), SCM_OBJ(&libproc_25apply_rec__STUB), 0);
  libproc_25apply_rec__STUB.common.info = scm__rc.d2149[560];
  libproc_25apply_rec__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[561]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[569] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[149])),TRUE); /* %procedure-currying-set! */
  scm__rc.d2149[570] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[150])),TRUE); /* f */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[552]), scm__rc.d2149[570]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[553]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[556]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[557]), scm__rc.d2149[569]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[558]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[559]), scm__rc.d2149[3]);
  scm__rc.d2149[571] = Scm_MakeExtendedPair(scm__rc.d2149[569], SCM_OBJ(&scm__rc.d2150[553]), SCM_OBJ(&scm__rc.d2150[561]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[572]))[3] = scm__rc.d2149[82];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[572]))[4] = scm__rc.d2149[408];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[572]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[572]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[572]))[7] = scm__rc.d2149[352];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%procedure-currying-set!")), SCM_OBJ(&libproc_25procedure_currying_setX__STUB), 0);
  libproc_25procedure_currying_setX__STUB.common.info = scm__rc.d2149[571];
  libproc_25procedure_currying_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[572]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[666] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[151])),TRUE); /* receive */
  scm__rc.d2149[667] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[152])),TRUE); /* define-in-module */
  scm__rc.d2149[668] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[153])),FALSE); /* G2155 */
  scm__rc.d2149[669] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[154])),FALSE); /* G2156 */
  scm__rc.d2149[670] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[155])),FALSE); /* rest2154 */
  scm__rc.d2149[671] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[156])),TRUE); /* define-inline */
  scm__rc.d2149[672] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[157])),TRUE); /* case-lambda */
  scm__rc.d2149[673] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[158])),TRUE); /* v */
  scm__rc.d2149[674] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[159])),TRUE); /* eof-object? */
  scm__rc.d2149[675] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[160])),TRUE); /* eof-object */
  scm__rc.d2149[676] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[161])),TRUE); /* items */
  scm__rc.d2149[677] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[162])),TRUE); /* r */
  scm__rc.d2149[678] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[163])),TRUE); /* item */
  scm__rc.d2149[679] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[164])),TRUE); /* append */
  scm__rc.d2149[680] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[165])),TRUE); /* quasiquote */
  scm__rc.d2149[681] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[166])),TRUE); /* unquote */
  scm__rc.d2149[682] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[167])),TRUE); /* reverse */
  scm__rc.d2149[683] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[168])),TRUE); /* nargs */
  scm__rc.d2149[684] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[169])),TRUE); /* method-applicable? */
  scm__rc.d2149[685] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[170])),TRUE); /* ^m */
  scm__rc.d2149[686] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[171])),TRUE); /* slot-ref */
  scm__rc.d2149[687] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[172])),TRUE); /* infos */
  scm__rc.d2149[688] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[173])),TRUE); /* length */
  scm__rc.d2149[689] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[174])),TRUE); /* if-let1 */
}
