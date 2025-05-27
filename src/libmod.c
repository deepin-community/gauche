/* Generated automatically from ./libmod.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
#include "gauche/priv/glocP.h"
#include "gauche/priv/moduleP.h"
static ScmObj libmodmoduleP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodmoduleP__STUB, 1, 0,1, SCM_FALSE,0, libmodmoduleP, NULL, NULL);

static ScmObj libmodmodule_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodmodule_name__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodmodule_name, NULL, NULL);

static ScmObj libmodmodule_parents(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodmodule_parents__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodmodule_parents, NULL, NULL);

static ScmObj libmodmodule_precedence_list(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodmodule_precedence_list__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodmodule_precedence_list, NULL, NULL);

static ScmObj libmodmodule_imports(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodmodule_imports__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodmodule_imports, NULL, NULL);

static ScmObj libmodmodule_exports(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodmodule_exports__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodmodule_exports, NULL, NULL);

static ScmObj libmodmodule_table(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodmodule_table__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodmodule_table, NULL, NULL);

static ScmObj libmodfind_module(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodfind_module__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodfind_module, NULL, NULL);

static ScmObj libmodall_modules(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodall_modules__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodall_modules, NULL, NULL);

static ScmObj libmodmake_module(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodmake_module__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodmake_module, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 158u, 134u, 0u, 32u, 8u, 4u, 136u, 0u, 64u, 80u, 25u, 36u,
8u, 2u, 4u, 32u, 64u, 16u, 25u, 16u, 44u, 12u, 73u, 36u, 115u, 160u,
192u, 144u, 49u, 28u, 228u, 48u, 36u, 6u, 71u, 56u, 12u, 9u, 2u, 17u,
205u, 3u, 2u, 96u, 146u, 71u, 51u, 12u, 9u, 1u, 145u, 204u, 67u, 2u,
96u, 146u, 71u, 48u, 12u, 9u, 0u, 145u, 203u, 195u, 2u, 64u, 228u,
114u, 192u, 192u, 31u, 224u, 136u, 36u, 134u, 24u, 40u, 136u, 44u,
48u, 193u, 132u, 134u, 21u, 36u, 142u, 80u, 24u, 19u, 39u, 66u, 57u,
32u, 96u, 76u, 157u, 8u, 228u, 1u, 129u, 50u, 55u, 35u, 142u, 134u,
0u, 255u, 4u, 65u, 36u, 48u, 193u, 164u, 65u, 97u, 134u, 12u, 36u,
48u, 169u, 36u, 113u, 144u, 192u, 153u, 200u, 145u, 197u, 67u, 2u,
103u, 34u, 71u, 17u, 12u, 9u, 154u, 161u, 28u, 56u, 48u, 7u, 248u,
34u, 9u, 33u, 133u, 232u, 136u, 44u, 48u, 193u, 132u, 134u, 21u, 36u,
142u, 20u, 24u, 19u, 66u, 83u, 8u, 224u, 193u, 129u, 52u, 37u, 48u,
142u, 4u, 24u, 19u, 66u, 52u, 72u, 98u, 12u, 12u, 98u, 3u, 72u, 24u,
51u, 64u, 225u, 52u, 35u, 68u, 134u, 104u, 4u, 38u, 106u, 132u, 51u,
64u, 129u, 50u, 55u, 34u, 14u, 2u, 0u, 129u, 202u, 96u, 56u, 73u, 32u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 129u, 6u, 7u, 80u, 198u, 32u, 52u, 129u, 131u, 52u, 14u, 3u,
252u, 17u, 4u, 144u, 194u, 244u, 68u, 22u, 24u, 96u, 194u, 67u, 10u,
146u, 67u, 52u, 2u, 3u, 252u, 17u, 4u, 144u, 195u, 6u, 145u, 5u, 134u,
24u, 48u, 144u, 194u, 164u, 144u, 205u, 2u, 0u, 255u, 4u, 65u, 36u,
48u, 193u, 68u, 65u, 97u, 134u, 12u, 36u, 48u, 169u, 36u, 65u, 192u,
64u, 16u, 57u, 2u, 0u, 128u, 72u, 128u, 4u, 5u, 1u, 146u, 64u, 128u,
32u, 66u, 4u, 1u, 1u, 145u, 2u, 192u, 196u, 146u, 72u, 106u, 131u,
201u, 35u, 128u, 134u, 4u, 203u, 96u, 142u, 0u, 24u, 18u, 16u, 33u,
136u, 48u, 49u, 136u, 62u, 17u, 33u, 48u, 28u, 36u, 128u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 138u, 134u, 6u, 104u, 72u, 66u, 97u, 134u, 18u, 33u, 140u,
65u, 240u, 137u, 14u, 161u, 140u, 64u, 105u, 3u, 6u, 104u, 28u, 7u,
248u, 34u, 9u, 33u, 133u, 232u, 136u, 44u, 48u, 193u, 132u, 134u, 21u,
36u, 134u, 104u, 4u, 7u, 248u, 34u, 9u, 33u, 134u, 13u, 34u, 11u, 12u,
48u, 97u, 33u, 133u, 73u, 33u, 154u, 4u, 1u, 254u, 8u, 130u, 72u, 97u,
130u, 136u, 130u, 195u, 12u, 24u, 72u, 97u, 82u, 72u, 131u, 128u,
128u, 32u, 114u, 4u, 1u, 0u, 145u, 0u, 8u, 10u, 3u, 36u, 129u, 0u,
64u, 132u, 8u, 2u, 3u, 34u, 5u, 129u, 137u, 36u, 144u, 213u, 7u, 146u,
67u, 8u, 16u, 162u, 97u, 12u, 73u, 36u, 113u, 32u, 192u, 152u, 24u,
145u, 195u, 67u, 3u, 26u, 96u, 188u, 71u, 9u, 12u, 9u, 128u, 225u,
28u, 16u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 156u, 6u, 4u, 133u, 72u, 230u, 1u, 130u, 22u, 133u, 97u,
114u, 71u, 45u, 12u, 9u, 10u, 145u, 202u, 195u, 2u, 96u, 140u, 71u,
39u, 12u, 12u, 240u, 196u, 50u, 72u, 228u, 193u, 129u, 33u, 146u, 57u,
16u, 96u, 76u, 54u, 200u, 228u, 1u, 128u, 59u, 8u, 90u, 21u, 134u,
136u, 76u, 17u, 136u, 76u, 54u, 201u, 28u, 120u, 48u, 38u, 47u, 132u,
113u, 176u, 192u, 144u, 169u, 28u, 100u, 48u, 38u, 47u, 132u, 113u,
80u, 192u, 207u, 13u, 195u, 36u, 142u, 40u, 24u, 18u, 25u, 35u, 136u,
6u, 4u, 201u, 188u, 142u, 28u, 24u, 4u, 45u, 10u, 195u, 132u, 38u,
77u, 228u, 142u, 24u, 24u, 19u, 48u, 82u, 56u, 72u, 96u, 72u, 84u,
142u, 14u, 24u, 19u, 48u, 82u, 56u, 48u, 96u, 100u, 2u, 21u, 16u,
232u, 135u, 161u, 242u, 73u, 13u, 129u, 51u, 2u, 9u, 139u, 113u, 133u,
73u, 28u, 16u, 48u, 38u, 127u, 100u, 112u, 48u, 192u, 154u, 16u, 16u,
71u, 2u, 12u, 9u, 15u, 145u, 192u, 3u, 2u, 103u, 246u, 67u, 16u, 96u,
99u, 16u, 249u, 17u, 4u, 42u, 19u, 63u, 176u, 154u, 16u, 150u, 73u,
32u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 159u, 6u, 7u, 17u, 16u, 144u, 231u, 17u, 67u, 230u, 35u, 36u,
115u, 208u, 192u, 145u, 25u, 28u, 240u, 48u, 38u, 6u, 228u, 115u,
176u, 192u, 144u, 249u, 28u, 232u, 48u, 36u, 68u, 71u, 56u, 12u, 9u,
129u, 57u, 28u, 212u, 48u, 56u, 196u, 129u, 133u, 72u, 115u, 17u, 44u,
62u, 98u, 50u, 72u, 230u, 129u, 129u, 49u, 128u, 35u, 153u, 134u, 4u,
136u, 200u, 230u, 33u, 129u, 49u, 139u, 35u, 152u, 6u, 4u, 137u, 72u,
229u, 225u, 129u, 33u, 242u, 57u, 104u, 96u, 76u, 98u, 200u, 229u,
97u, 129u, 34u, 66u, 57u, 64u, 96u, 113u, 17u, 9u, 14u, 113u, 36u,
62u, 98u, 50u, 71u, 39u, 12u, 9u, 17u, 145u, 201u, 131u, 2u, 102u,
54u, 71u, 37u, 12u, 9u, 15u, 145u, 201u, 3u, 2u, 68u, 132u, 114u, 32u,
192u, 153u, 133u, 145u, 199u, 195u, 4u, 77u, 18u, 68u, 228u, 142u,
60u, 24u, 18u, 36u, 35u, 142u, 134u, 6u, 64u, 34u, 65u, 16u, 146u,
67u, 40u, 77u, 8u, 93u, 9u, 152u, 0u, 76u, 86u, 73u, 35u, 142u, 6u,
4u, 208u, 149u, 242u, 56u, 200u, 96u, 137u, 162u, 40u, 156u, 145u,
198u, 3u, 2u, 68u, 68u, 113u, 80u, 193u, 20u, 8u, 120u, 57u, 136u,
150u, 31u, 49u, 25u, 49u, 73u, 35u, 136u, 134u, 4u, 208u, 188u, 194u,
56u, 128u, 96u, 77u, 11u, 217u, 35u, 135u, 134u, 4u, 136u, 200u, 225u,
161u, 129u, 52u, 48u, 16u, 142u, 24u, 24u, 18u, 37u, 35u, 133u, 134u,
4u, 135u, 200u, 225u, 33u, 129u, 52u, 48u, 16u, 142u, 14u, 24u, 4u,
85u, 17u, 16u, 154u, 23u, 62u, 72u, 224u, 193u, 129u, 52u, 61u, 20u,
142u, 10u, 24u, 18u, 34u, 35u, 128u, 6u, 8u, 132u, 144u, 196u, 24u,
24u, 212u, 50u, 56u, 129u, 17u, 4u, 209u, 9u, 66u, 33u, 240u, 194u,
164u, 136u, 140u, 48u, 169u, 36u, 54u, 4u, 208u, 244u, 32u, 19u, 66u,
182u, 3u, 108u, 72u, 19u, 66u, 87u, 194u, 104u, 76u, 169u, 33u, 164u,
38u, 3u, 132u, 146u, 72u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 141u, 134u, 8u, 172u, 50u, 136u, 178u, 25u, 34u, 45u, 17u,
116u, 50u, 72u, 103u, 139u, 225u, 146u, 67u, 146u, 134u, 71u, 16u,
34u, 33u, 16u, 146u, 33u, 240u, 194u, 164u, 136u, 140u, 48u, 169u,
36u, 54u, 1u, 21u, 68u, 68u, 69u, 2u, 30u, 14u, 98u, 37u, 135u, 204u,
70u, 76u, 82u, 72u, 17u, 52u, 69u, 19u, 144u, 219u, 18u, 8u, 132u,
134u, 81u, 19u, 68u, 145u, 57u, 14u, 34u, 33u, 33u, 206u, 36u, 135u,
204u, 70u, 67u, 140u, 72u, 24u, 84u, 135u, 49u, 18u, 195u, 230u, 35u,
36u, 146u, 26u, 67u, 136u, 136u, 72u, 115u, 136u, 161u, 243u, 17u,
146u, 73u, 36u, 113u, 144u, 192u, 198u, 161u, 48u, 172u, 36u, 113u,
96u, 192u, 152u, 60u, 17u, 197u, 67u, 2u, 67u, 36u, 113u, 16u, 192u,
152u, 60u, 17u, 195u, 67u, 2u, 96u, 156u, 71u, 11u, 12u, 9u, 130u,
217u, 28u, 40u, 48u, 36u, 50u, 71u, 8u, 12u, 9u, 130u, 217u, 28u, 24u,
48u, 38u, 9u, 196u, 112u, 64u, 192u, 152u, 20u, 145u, 192u, 195u, 2u,
96u, 104u, 71u, 2u, 12u, 9u, 12u, 144u, 196u, 24u, 24u, 196u, 50u,
67u, 48u, 137u, 97u, 242u, 34u, 8u, 84u, 67u, 162u, 30u, 135u, 201u,
13u, 128u, 66u, 208u, 172u, 56u, 67u, 60u, 55u, 12u, 146u, 3u, 176u,
133u, 161u, 88u, 104u, 136u, 90u, 21u, 133u, 201u, 12u, 240u, 196u,
50u, 73u, 36u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 1u, 67u, 36u, 51u, 8u, 150u, 31u, 34u,
32u, 133u, 68u, 58u, 33u, 232u, 124u, 144u, 216u, 4u, 45u, 10u, 195u,
132u, 51u, 195u, 112u, 201u, 32u, 59u, 8u, 90u, 21u, 134u, 136u, 133u,
161u, 88u, 92u, 144u, 207u, 12u, 67u, 36u, 146u, 68u, 86u, 25u, 68u,
89u, 12u, 145u, 22u, 136u, 186u, 25u, 36u, 51u, 197u, 240u, 201u, 33u,
201u, 67u, 35u, 136u, 17u, 16u, 136u, 73u, 16u, 248u, 97u, 82u, 68u,
70u, 24u, 84u, 146u, 27u, 0u, 138u, 162u, 34u, 34u, 129u, 15u, 7u,
49u, 18u, 195u, 230u, 35u, 38u, 41u, 36u, 8u, 154u, 34u, 137u, 200u,
109u, 137u, 4u, 66u, 67u, 40u, 137u, 162u, 72u, 156u, 135u, 17u, 16u,
144u, 231u, 18u, 67u, 230u, 35u, 33u, 198u, 36u, 12u, 42u, 67u, 152u,
137u, 97u, 243u, 17u, 146u, 73u, 13u, 33u, 196u, 68u, 36u, 57u, 196u,
80u, 249u, 136u, 201u, 36u, 146u, 71u, 9u, 12u, 12u, 97u, 48u, 49u,
76u, 15u, 136u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u,
112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 130u, 134u, 8u, 194u, 49u, 140u, 161u, 114u, 71u, 2u, 12u,
9u, 25u, 16u, 196u, 24u, 24u, 196u, 100u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 144u, 6u, 8u, 204u, 8u, 210u, 40u, 141u, 97u, 162u, 35u, 97u,
26u, 70u, 17u, 140u, 107u, 11u, 145u, 27u, 199u, 17u, 73u, 36u, 145u,
199u, 131u, 4u, 81u, 28u, 195u, 68u, 142u, 50u, 24u, 19u, 5u, 162u,
56u, 184u, 96u, 76u, 39u, 200u, 226u, 129u, 129u, 35u, 130u, 56u,
144u, 96u, 76u, 39u, 200u, 226u, 33u, 129u, 35u, 162u, 56u, 120u, 96u,
76u, 22u, 136u, 225u, 161u, 129u, 48u, 229u, 35u, 133u, 134u, 6u,
120u, 238u, 56u, 36u, 112u, 160u, 192u, 145u, 193u, 28u, 24u, 48u,
38u, 75u, 132u, 112u, 32u, 192u, 222u, 35u, 200u, 224u, 132u, 201u,
112u, 145u, 192u, 67u, 2u, 101u, 244u, 71u, 0u, 12u, 9u, 28u, 16u,
196u, 24u, 24u, 196u, 112u, 66u, 101u, 222u, 35u, 216u, 206u, 61u, 9u,
129u, 100u, 123u, 27u, 4u, 193u, 158u, 61u, 141u, 227u, 136u, 164u,
146u, 64u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 31u, 71u, 4u, 55u, 136u, 242u, 56u, 33u,
158u, 59u, 142u, 9u, 17u, 236u, 103u, 30u, 136u, 210u, 40u, 141u, 97u,
163u, 30u, 198u, 194u, 52u, 140u, 35u, 24u, 214u, 23u, 49u, 236u,
111u, 28u, 69u, 36u, 145u, 194u, 195u, 3u, 24u, 76u, 12u, 83u, 3u,
226u, 56u, 72u, 96u, 76u, 7u, 8u, 224u, 129u, 129u, 48u, 28u, 35u,
129u, 6u, 4u, 192u, 112u, 144u,};
static ScmModule* get_module_from_mod_or_name(ScmObj id);
static ScmObj libmodmodule_bindsP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmodmodule_bindsP__STUB, 2, 0,SCM_FALSE,libmodmodule_bindsP, NULL, NULL);

static ScmObj libmodmodule_exportsP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmodmodule_exportsP__STUB, 2, 0,SCM_FALSE,libmodmodule_exportsP, NULL, NULL);

static ScmObj libmodmodule_binding_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmodmodule_binding_ref__STUB, 2, 3,SCM_FALSE,libmodmodule_binding_ref, NULL, NULL);

static unsigned char uvector__00011[] = {
 0u, 3u, 134u, 6u, 6u, 104u, 254u, 64u, 36u, 112u, 144u, 192u, 146u,
1u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 6u, 66u, 36u, 112u, 144u, 192u, 146u,
17u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 143u, 134u, 9u, 2u, 3u, 134u, 73u, 28u, 120u, 48u, 36u, 50u,
71u, 29u, 12u, 9u, 1u, 145u, 198u, 195u, 3u, 60u, 134u, 24u, 67u, 24u,
134u, 100u, 65u, 1u, 183u, 18u, 19u, 1u, 194u, 73u, 28u, 84u, 48u,
38u, 21u, 164u, 113u, 16u, 192u, 215u, 34u, 146u, 56u, 128u, 96u, 73u,
20u, 142u, 30u, 24u, 25u, 0u, 128u, 195u, 40u, 107u, 145u, 139u, 112u,
104u, 145u, 137u, 34u, 69u, 12u, 161u, 174u, 70u, 33u, 133u, 72u,
106u, 145u, 137u, 36u, 55u, 132u, 197u, 188u, 38u, 21u, 164u, 50u,
42u, 98u, 14u, 72u, 225u, 193u, 129u, 50u, 112u, 35u, 132u, 134u, 4u,
201u, 24u, 142u, 16u, 24u, 18u, 71u, 35u, 131u, 6u, 4u, 200u, 64u,
142u, 2u, 24u, 19u, 31u, 2u, 56u, 0u, 96u, 73u, 28u, 134u, 32u, 192u,
152u, 102u, 146u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 134u, 6u, 9u, 34u, 12u, 18u, 76u, 51u, 34u, 8u, 13u, 184u,
145u, 32u, 64u, 112u, 201u, 36u, 112u, 144u, 192u, 198u, 19u, 3u,
212u, 193u, 176u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u,
7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static ScmObj libmod_25export_all(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmod_25export_all__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmod_25export_all, NULL, NULL);

static ScmObj libmod_25extend_module(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmod_25extend_module__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmod_25extend_module, NULL, NULL);

static ScmObj libmod_25insert_binding(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmod_25insert_binding__STUB, 3, 2,SCM_FALSE,libmod_25insert_binding, NULL, NULL);

static unsigned char uvector__00015[] = {
 0u, 3u, 142u, 6u, 9u, 42u, 75u, 134u, 100u, 194u, 71u, 27u, 12u, 9u,
38u, 17u, 198u, 131u, 2u, 67u, 36u, 113u, 144u, 192u, 146u, 89u, 28u,
92u, 48u, 51u, 201u, 178u, 97u, 35u, 139u, 6u, 4u, 147u, 8u, 226u,
65u, 129u, 48u, 225u, 35u, 134u, 6u, 9u, 58u, 76u, 36u, 112u, 176u,
192u, 146u, 97u, 28u, 36u, 48u, 38u, 46u, 132u, 112u, 80u, 192u, 222u,
29u, 132u, 159u, 38u, 16u, 152u, 186u, 16u, 152u, 112u, 146u, 56u,
24u, 96u, 76u, 133u, 72u, 224u, 65u, 129u, 36u, 194u, 56u, 0u, 96u,
76u, 133u, 72u, 98u, 12u, 12u, 98u, 75u, 134u, 100u, 194u, 19u, 31u,
240u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 40u, 73u, 112u, 204u, 152u, 67u, 120u,
118u, 18u, 124u, 152u, 68u, 157u, 38u, 18u, 25u, 228u, 217u, 48u,
145u, 37u, 73u, 112u, 204u, 152u, 73u, 28u, 36u, 48u, 49u, 132u, 192u,
197u, 48u, 82u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u,
1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static ScmObj libmod_25hide_binding(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmod_25hide_binding__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmod_25hide_binding, NULL, NULL);

static ScmObj libmod_25alias_binding(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmod_25alias_binding__STUB, 4, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmod_25alias_binding, NULL, NULL);

static ScmObj libmod_25make_wrapper_module(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmod_25make_wrapper_module__STUB, 2, 0,SCM_FALSE,libmod_25make_wrapper_module, NULL, NULL);

static ScmObj libmod_25export_symbols(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmod_25export_symbols__STUB, 2, 0,SCM_FALSE,libmod_25export_symbols, NULL, NULL);

static ScmObj libmod_25import_module(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmod_25import_module__STUB, 2, 3,SCM_FALSE,libmod_25import_module, NULL, NULL);

static ScmObj libmod_25import_modules(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmod_25import_modules__STUB, 2, 0,SCM_FALSE,libmod_25import_modules, NULL, NULL);

static ScmObj libmod_25seal_moduleX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmod_25seal_moduleX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmod_25seal_moduleX, NULL, NULL);

static void module_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2163 SCM_UNUSED);
static unsigned char uvector__00017[] = {
 0u, 3u, 135u, 6u, 9u, 68u, 59u, 202u, 68u, 145u, 195u, 67u, 2u, 96u,
82u, 71u, 12u, 12u, 9u, 41u, 17u, 194u, 131u, 4u, 166u, 26u, 165u,
34u, 72u, 225u, 33u, 129u, 48u, 194u, 35u, 131u, 6u, 9u, 82u, 82u,
36u, 112u, 80u, 192u, 146u, 145u, 28u, 12u, 48u, 38u, 36u, 132u, 112u,
16u, 193u, 42u, 202u, 68u, 142u, 0u, 24u, 18u, 82u, 33u, 136u, 48u,
49u, 137u, 72u, 135u, 96u, 152u, 215u, 135u, 0u, 152u, 146u, 4u, 194u,
212u, 38u, 3u, 132u, 146u, 64u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 151u, 134u, 9u, 88u, 65u, 194u, 10u, 16u, 44u, 174u, 73u,
16u, 88u, 97u, 150u, 9u, 36u, 114u, 208u, 192u, 152u, 49u, 145u, 202u,
67u, 2u, 96u, 198u, 71u, 40u, 12u, 9u, 129u, 177u, 28u, 156u, 48u,
36u, 174u, 71u, 35u, 12u, 9u, 128u, 225u, 28u, 132u, 48u, 75u, 50u,
209u, 35u, 142u, 134u, 4u, 198u, 36u, 142u, 54u, 24u, 37u, 185u, 104u,
145u, 197u, 195u, 2u, 99u, 212u, 71u, 19u, 12u, 13u, 226u, 92u, 150u,
136u, 76u, 122u, 130u, 99u, 18u, 72u, 226u, 33u, 129u, 50u, 86u, 35u,
134u, 134u, 4u, 201u, 88u, 142u, 22u, 24u, 3u, 252u, 25u, 5u, 17u, 2u,
202u, 228u, 145u, 194u, 131u, 2u, 74u, 228u, 112u, 96u, 192u, 202u,
37u, 208u, 228u, 37u, 34u, 29u, 132u, 171u, 41u, 16u, 224u, 37u, 73u,
72u, 137u, 76u, 53u, 74u, 68u, 137u, 68u, 59u, 202u, 68u, 146u, 101u,
114u, 32u, 224u, 153u, 137u, 16u, 244u, 19u, 36u, 176u, 152u, 14u, 6u,
17u, 47u, 75u, 4u, 146u, 71u, 4u, 12u, 9u, 157u, 17u, 28u, 12u, 48u,
36u, 174u, 71u, 2u, 12u, 9u, 47u, 145u, 192u, 3u, 2u, 103u, 68u, 67u,
16u, 96u, 99u, 18u, 185u, 9u, 156u, 185u, 36u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 48u, 74u, 228u, 50u, 137u, 116u, 57u, 9u,
72u, 135u, 97u, 42u, 202u, 68u, 56u, 9u, 82u, 82u, 34u, 83u, 13u, 82u,
145u, 34u, 81u, 14u, 242u, 145u, 36u, 153u, 92u, 136u, 56u, 7u, 248u,
50u, 10u, 34u, 5u, 149u, 201u, 33u, 232u, 55u, 137u, 114u, 90u, 34u,
91u, 150u, 136u, 150u, 101u, 162u, 68u, 172u, 32u, 225u, 5u, 8u, 22u,
87u, 36u, 136u, 44u, 48u, 203u, 4u, 144u, 194u, 37u, 233u, 96u, 146u,
73u, 28u, 44u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 132u, 134u,
4u, 192u, 112u, 142u, 8u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u,
9u, 0u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 128u, 134u, 0u, 255u, 4u, 76u, 6u, 97u, 36u, 112u, 0u, 192u,
147u, 9u, 12u, 65u, 129u, 142u, 97u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 129u, 6u, 7u, 80u, 199u, 48u, 128u, 255u, 4u, 76u, 6u, 97u,
36u, 53u, 76u, 68u, 145u, 192u, 67u, 2u, 96u, 226u, 71u, 0u, 12u, 9u,
49u, 144u, 196u, 24u, 24u, 196u, 197u, 50u, 16u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 138u, 134u, 6u, 104u, 40u, 66u, 97u, 134u, 10u, 33u, 140u,
76u, 83u, 33u, 14u, 161u, 142u, 97u, 1u, 254u, 8u, 152u, 12u, 194u,
72u, 106u, 152u, 137u, 33u, 132u, 8u, 81u, 48u, 134u, 36u, 146u, 56u,
144u, 96u, 76u, 12u, 72u, 225u, 161u, 129u, 141u, 48u, 94u, 35u, 132u,
134u, 4u, 192u, 112u, 142u, 8u, 24u, 19u, 1u, 194u, 56u, 16u, 96u,
76u, 7u, 9u, 0u,};
static ScmObj libmodfind_binding(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodfind_binding__STUB, 3, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodfind_binding, NULL, NULL);

static ScmObj libmodfind_const_binding(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodfind_const_binding__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodfind_const_binding, NULL, NULL);

static ScmObj libmodgloc_boundP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodgloc_boundP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodgloc_boundP, NULL, NULL);

static ScmObj libmodgloc_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmodgloc_ref__STUB, 1, 2,SCM_FALSE,libmodgloc_ref, NULL, NULL);

static ScmObj libmodgloc_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libmodgloc_setX__STUB, 2, 0,SCM_FALSE,libmodgloc_setX, NULL, NULL);

static ScmObj libmodgloc_constP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodgloc_constP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodgloc_constP, NULL, NULL);

static ScmObj libmodgloc_inlinableP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodgloc_inlinableP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodgloc_inlinableP, NULL, NULL);


static ScmObj libmodid_TObound_gloc(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libmodid_TObound_gloc__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libmodid_TObound_gloc, NULL, NULL);

static unsigned char uvector__00023[] = {
 0u, 3u, 143u, 6u, 7u, 185u, 150u, 102u, 36u, 113u, 208u, 192u, 147u,
49u, 28u, 112u, 48u, 36u, 202u, 71u, 27u, 12u, 19u, 56u, 2u, 104u,
154u, 73u, 2u, 104u, 154u, 137u, 19u, 40u, 154u, 230u, 146u, 68u,
204u, 38u, 185u, 168u, 146u, 19u, 1u, 194u, 71u, 26u, 12u, 9u, 51u,
17u, 198u, 67u, 2u, 97u, 86u, 71u, 23u, 12u, 9u, 137u, 145u, 28u, 88u,
48u, 36u, 212u, 71u, 20u, 12u, 9u, 137u, 145u, 28u, 76u, 48u, 38u,
21u, 100u, 113u, 32u, 192u, 147u, 41u, 28u, 68u, 48u, 38u, 21u, 100u,
112u, 240u, 192u, 152u, 132u, 17u, 195u, 131u, 2u, 77u, 36u, 112u,
192u, 192u, 152u, 132u, 17u, 194u, 195u, 2u, 97u, 86u, 71u, 9u, 12u,
9u, 134u, 241u, 28u, 32u, 48u, 36u, 212u, 71u, 6u, 12u, 9u, 134u,
241u, 28u, 20u, 48u, 38u, 21u, 100u, 112u, 48u, 192u, 152u, 95u, 17u,
192u, 131u, 2u, 77u, 36u, 112u, 0u, 192u, 152u, 95u, 16u, 196u, 24u,
24u, 196u, 211u, 53u, 16u, 152u, 85u, 146u, 64u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 54u, 77u, 51u, 81u, 19u, 56u, 2u, 104u,
154u, 73u, 2u, 104u, 154u, 137u, 19u, 40u, 154u, 230u, 146u, 68u,
204u, 38u, 185u, 168u, 146u, 30u, 230u, 89u, 152u, 146u, 71u, 9u, 12u,
12u, 97u, 48u, 49u, 76u, 18u, 8u, 224u, 225u, 129u, 48u, 28u, 35u,
129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[183];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("module\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("./libmod.scm", 12, 12),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("module-name", 11, 11),
      SCM_STRING_CONST_INITIALIZER("mod", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<module>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("module-parents", 14, 14),
      SCM_STRING_CONST_INITIALIZER("module-precedence-list", 22, 22),
      SCM_STRING_CONST_INITIALIZER("module-imports", 14, 14),
      SCM_STRING_CONST_INITIALIZER("module-exports", 14, 14),
      SCM_STRING_CONST_INITIALIZER("module-table", 12, 12),
      SCM_STRING_CONST_INITIALIZER("find-module", 11, 11),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<symbol>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<module>\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("all-modules", 11, 11),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("if-exists", 9, 9),
      SCM_STRING_CONST_INITIALIZER("make-module", 11, 11),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<symbol>\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("begin", 5, 5),
      SCM_STRING_CONST_INITIALIZER("make-identifier", 15, 15),
      SCM_STRING_CONST_INITIALIZER("require", 7, 7),
      SCM_STRING_CONST_INITIALIZER("import", 6, 6),
      SCM_STRING_CONST_INITIALIZER("module-name->path", 17, 17),
      SCM_STRING_CONST_INITIALIZER("G2153", 5, 5),
      SCM_STRING_CONST_INITIALIZER("module", 6, 6),
      SCM_STRING_CONST_INITIALIZER("options", 7, 7),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("use", 3, 3),
      SCM_STRING_CONST_INITIALIZER("G2151", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2152", 5, 5),
      SCM_STRING_CONST_INITIALIZER("unused-args", 11, 11),
      SCM_STRING_CONST_INITIALIZER("source", 6, 6),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("define", 6, 6),
      SCM_STRING_CONST_INITIALIZER("begin.", 6, 6),
      SCM_STRING_CONST_INITIALIZER("with-module", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("require.", 8, 8),
      SCM_STRING_CONST_INITIALIZER("import.", 7, 7),
      SCM_STRING_CONST_INITIALIZER("quasiquote", 10, 10),
      SCM_STRING_CONST_INITIALIZER("unquote", 7, 7),
      SCM_STRING_CONST_INITIALIZER("unquote-splicing", 16, 16),
      SCM_STRING_CONST_INITIALIZER("%make-macro-transformer", 23, 23),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("list->string", 12, 12),
      SCM_STRING_CONST_INITIALIZER("", 0, 0),
      SCM_STRING_CONST_INITIALIZER("equal\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("Invalid module name (it can't end with #\134.):", 44, 44),
      SCM_STRING_CONST_INITIALIZER(".", 1, 1),
      SCM_STRING_CONST_INITIALIZER("Invalid module name (component can't be \042.\042 or \042..\042):", 53, 53),
      SCM_STRING_CONST_INITIALIZER("..", 2, 2),
      SCM_STRING_CONST_INITIALIZER("path-comp", 9, 9),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("identifier->symbol", 18, 18),
      SCM_STRING_CONST_INITIALIZER("symbol->string", 14, 14),
      SCM_STRING_CONST_INITIALIZER("identifier expected, but got:", 29, 29),
      SCM_STRING_CONST_INITIALIZER("/", 1, 1),
      SCM_STRING_CONST_INITIALIZER("string-join", 11, 11),
      SCM_STRING_CONST_INITIALIZER("with-input-from-string", 22, 22),
      SCM_STRING_CONST_INITIALIZER("\134.", 2, 2),
      SCM_STRING_CONST_INITIALIZER("regexp-replace-all", 18, 18),
      SCM_STRING_CONST_INITIALIZER("path->module-name", 17, 17),
      SCM_STRING_CONST_INITIALIZER("G2159", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2158", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string required, but got:", 25, 25),
      SCM_STRING_CONST_INITIALIZER("string-split", 12, 12),
      SCM_STRING_CONST_INITIALIZER("map", 3, 3),
      SCM_STRING_CONST_INITIALIZER("string->symbol", 14, 14),
      SCM_STRING_CONST_INITIALIZER("path", 4, 4),
      SCM_STRING_CONST_INITIALIZER("module-binds\077", 13, 13),
      SCM_STRING_CONST_INITIALIZER("mod-or-name", 11, 11),
      SCM_STRING_CONST_INITIALIZER("module-exports\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("module-binding-ref", 18, 18),
      SCM_STRING_CONST_INITIALIZER("mod_or_name", 11, 11),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("fallback", 8, 8),
      SCM_STRING_CONST_INITIALIZER("stay-in-module", 14, 14),
      SCM_STRING_CONST_INITIALIZER("global-variable-bound\077", 22, 22),
      SCM_STRING_CONST_INITIALIZER("global-variable-ref", 19, 19),
      SCM_STRING_CONST_INITIALIZER("symbol-bound\077", 13, 13),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("%export-all", 11, 11),
      SCM_STRING_CONST_INITIALIZER("%extend-module", 14, 14),
      SCM_STRING_CONST_INITIALIZER("supers", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<list>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%insert-binding", 15, 15),
      SCM_STRING_CONST_INITIALIZER("fresh", 5, 5),
      SCM_STRING_CONST_INITIALIZER("const", 5, 5),
      SCM_STRING_CONST_INITIALIZER("inlinable", 9, 9),
      SCM_STRING_CONST_INITIALIZER("dummy", 5, 5),
      SCM_STRING_CONST_INITIALIZER("value", 5, 5),
      SCM_STRING_CONST_INITIALIZER("flags", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%insert-syntax-binding", 22, 22),
      SCM_STRING_CONST_INITIALIZER("syntax\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("macro\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("Syntax or macro object required, but got", 40, 40),
      SCM_STRING_CONST_INITIALIZER("%hide-binding", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%alias-binding", 14, 14),
      SCM_STRING_CONST_INITIALIZER("target", 6, 6),
      SCM_STRING_CONST_INITIALIZER("tname", 5, 5),
      SCM_STRING_CONST_INITIALIZER("origin", 6, 6),
      SCM_STRING_CONST_INITIALIZER("oname", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%make-wrapper-module", 20, 20),
      SCM_STRING_CONST_INITIALIZER("prefix", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%export-symbols", 15, 15),
      SCM_STRING_CONST_INITIALIZER("names", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%import-module", 14, 14),
      SCM_STRING_CONST_INITIALIZER("imported", 8, 8),
      SCM_STRING_CONST_INITIALIZER("%import-modules", 15, 15),
      SCM_STRING_CONST_INITIALIZER("mods", 4, 4),
      SCM_STRING_CONST_INITIALIZER("%seal-module!", 13, 13),
      SCM_STRING_CONST_INITIALIZER("list\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("keyword\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("%expand-user-import", 19, 19),
      SCM_STRING_CONST_INITIALIZER("G2165", 5, 5),
      SCM_STRING_CONST_INITIALIZER("import-spec", 11, 11),
      SCM_STRING_CONST_INITIALIZER("any", 3, 3),
      SCM_STRING_CONST_INITIALIZER("r7rs-setup", 10, 10),
      SCM_STRING_CONST_INITIALIZER("provided\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("load", 4, 4),
      SCM_STRING_CONST_INITIALIZER("provide", 7, 7),
      SCM_STRING_CONST_INITIALIZER("r7rs.user", 9, 9),
      SCM_STRING_CONST_INITIALIZER("eval", 4, 4),
      SCM_STRING_CONST_INITIALIZER("select-module", 13, 13),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("user", 4, 4),
      SCM_STRING_CONST_INITIALIZER("G2169", 5, 5),
      SCM_STRING_CONST_INITIALIZER("import-specs", 12, 12),
      SCM_STRING_CONST_INITIALIZER("G2167", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2168", 5, 5),
      SCM_STRING_CONST_INITIALIZER("find-binding", 12, 12),
      SCM_STRING_CONST_INITIALIZER("<gloc>\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("find-const-binding", 18, 18),
      SCM_STRING_CONST_INITIALIZER("id", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<identifier>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("gloc-bound\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gloc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<gloc>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("gloc-ref", 8, 8),
      SCM_STRING_CONST_INITIALIZER("gloc-set!", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gloc-const\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gloc-inlinable\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("id->bound-gloc", 14, 14),
      SCM_STRING_CONST_INITIALIZER("global-identifier=\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("wrapped-identifier\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("id1", 3, 3),
      SCM_STRING_CONST_INITIALIZER("id2", 3, 3),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("reverse", 7, 7),
      SCM_STRING_CONST_INITIALIZER("rlet1", 5, 5),
      SCM_STRING_CONST_INITIALIZER("read-char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("c", 1, 1),
      SCM_STRING_CONST_INITIALIZER("ps", 2, 2),
      SCM_STRING_CONST_INITIALIZER("c2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("eqv\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("eof-object\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("identifier\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("G2157", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("$", 1, 1),
      SCM_STRING_CONST_INITIALIZER("G2161", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2162", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2160", 8, 8),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("pair\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("symbol\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("g1", 2, 2),
      SCM_STRING_CONST_INITIALIZER("g2", 2, 2),
      SCM_STRING_CONST_INITIALIZER("and-let*", 8, 8),
  },
};
static struct scm__rcRec {
  ScmUVector d2156[24];
  ScmCompiledCode d2155[24];
  ScmWord d2154[611];
  ScmPair d2150[466] SCM_ALIGN_PAIR;
  ScmObj d2149[562];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2156 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 212, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 118, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 145, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 183, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 316, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 225, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 178, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 26, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 141, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 71, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 134, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 47, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 109, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 60, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 85, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 193, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 109, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 25, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 41, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 69, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 164, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 64, uvector__00024, 0, NULL),
  },
  {   /* ScmCompiledCode d2155 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (#f #:G2153) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[0])), 64,
            26, 1, 1, SCM_OBJ(&scm__rc.d2150[87]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[90]),
            SCM_OBJ(&scm__rc.d2155[2]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[64])), 4,
            2, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[96]),
            SCM_OBJ(&scm__rc.d2155[2]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[68])), 25,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* path-comp */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[93])), 57,
            16, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[165]),
            SCM_OBJ(&scm__rc.d2155[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[150])), 66,
            28, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[173]),
            SCM_OBJ(&scm__rc.d2155[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* module-name->path */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[216])), 30,
            23, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[178]),
            SCM_OBJ(&scm__rc.d2155[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[246])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (path->module-name #:G2159) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[261])), 8,
            6, 1, 0, SCM_OBJ(&scm__rc.d2150[180]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[186]),
            SCM_OBJ(&scm__rc.d2155[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* path->module-name */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[269])), 35,
            27, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[193]),
            SCM_OBJ(&scm__rc.d2155[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[304])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[321])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[336])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* symbol-bound? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[351])), 34,
            17, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[237]),
            SCM_OBJ(&scm__rc.d2155[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[385])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %insert-syntax-binding */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[400])), 31,
            12, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[276]),
            SCM_OBJ(&scm__rc.d2155[15]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[431])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (%expand-user-import #:G2165) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[446])), 17,
            11, 1, 0, SCM_OBJ(&scm__rc.d2150[349]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[355]),
            SCM_OBJ(&scm__rc.d2155[18]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %expand-user-import */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[463])), 51,
            18, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[366]),
            SCM_OBJ(&scm__rc.d2155[18]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[514])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (#f #:G2169) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[531])), 4,
            4, 0, 1, SCM_OBJ(&scm__rc.d2150[368]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[370]),
            SCM_OBJ(&scm__rc.d2155[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[535])), 4,
            2, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[376]),
            SCM_OBJ(&scm__rc.d2155[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[539])), 25,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* global-identifier=? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[564])), 32,
            15, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[465]),
            SCM_OBJ(&scm__rc.d2155[23]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2154[596])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2154 */
    /* (#f #:G2153) */
    0x00003019    /*   0 (LOCAL-ENV-CLOSURES 3) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[85])) /* (#<undef> #<undef> #<undef>) */,
    0x0000300e    /*   2 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 16),
    0x00000006    /*   4 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* begin */,
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 12),
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche */,
    0x0000105f    /*  10 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* find-module */,
    0x0000000d    /*  12 (PUSH) */,
    0x00000008    /*  13 (CONSTN-PUSH) */,
    0x0000305f    /*  14 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make-identifier */,
    0x000020e8    /*  16 (ENV-SET 2) */,
    0x0000300e    /*  17 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 31),
    0x00000006    /*  19 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* require */,
    0x0000100e    /*  21 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 27),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche */,
    0x0000105f    /*  25 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* find-module */,
    0x0000000d    /*  27 (PUSH) */,
    0x00000008    /*  28 (CONSTN-PUSH) */,
    0x0000305f    /*  29 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make-identifier */,
    0x000010e8    /*  31 (ENV-SET 1) */,
    0x0000300e    /*  32 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 46),
    0x00000006    /*  34 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* import */,
    0x0000100e    /*  36 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 42),
    0x00000006    /*  38 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche */,
    0x0000105f    /*  40 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* find-module */,
    0x0000000d    /*  42 (PUSH) */,
    0x00000008    /*  43 (CONSTN-PUSH) */,
    0x0000305f    /*  44 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make-identifier */,
    0x000000e8    /*  46 (ENV-SET 0) */,
    0x0000004a    /*  47 (LREF2-PUSH) */,
    0x00000049    /*  48 (LREF1-PUSH) */,
    0x0000100e    /*  49 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]) + 54),
    0x0000004d    /*  51 (LREF11-PUSH) */,
    0x0000105f    /*  52 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* module-name->path */,
    0x00002088    /*  54 (LIST 2) */,
    0x0000000d    /*  55 (PUSH) */,
    0x00000048    /*  56 (LREF0-PUSH) */,
    0x0000004d    /*  57 (LREF11-PUSH) */,
    0x00000041    /*  58 (LREF10) */,
    0x00000066    /*  59 (CONS) */,
    0x00002088    /*  60 (LIST 2) */,
    0x00002088    /*  61 (LIST 2) */,
    0x00000066    /*  62 (CONS) */,
    0x00000014    /*  63 (RET) */,
    /* #f */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x00000077    /*   1 (LREF1-CDR) */,
    0x00002095    /*   2 (TAIL-APPLY 2) */,
    0x00000014    /*   3 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[91])) /* (#<compiled-code (#f #:G2153)@0x7503bb949d80>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[68]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* use */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[68]) + 21),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* use */,
    0x00000016    /*  13 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[1])) /* #<compiled-code #f@0x7503bb949cc0> */,
    0x0000000d    /*  15 (PUSH) */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[160])) /* ((source lambda (module . options) (define begin. ((with-module gauche.internal make-identifier) 'begin (find-module 'gauche) '())) (define require. ((with-module gauche.internal make-identifier) 'require (find-module 'gauche) '())) (define import. ((with-module gauche.internal make-identifier) 'import (find-module 'gauche) '())) `(,begin. (,require. ,(module-name->path module)) (,import. (,module ,@options))))) */,
    0x00003060    /*  18 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %make-macro-transformer */,
    0x00000014    /*  20 (RET) */,
    0x00000015    /*  21 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* use */,
    0x0000001a    /*  23 (POP-LOCAL-ENV) */,
    0x0000000c    /*  24 (CONSTU-RET) */,
    /* (module-name->path path-comp) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 6),
    0x0000003d    /*   2 (LREF0) */,
    0x00000093    /*   3 (REVERSE) */,
    0x00001062    /*   4 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list->string */,
    0x00001018    /*   6 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 14),
    0x00000048    /*   9 (LREF0-PUSH) */,
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[56])) /* "" */,
    0x0000205f    /*  12 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  14 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 25),
    0x0000200e    /*  16 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 56),
    0x00000006    /*  18 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[58])) /* "Invalid module name (it can't end with #\\.):" */,
    0x00000051    /*  20 (LREF30-PUSH) */,
    0x0000205f    /*  21 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /*  23 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 56),
    0x0000200e    /*  25 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 32),
    0x00000048    /*  27 (LREF0-PUSH) */,
    0x00000006    /*  28 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[59])) /* "." */,
    0x0000205f    /*  30 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  32 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 43),
    0x0000200e    /*  34 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 56),
    0x00000006    /*  36 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[60])) /* "Invalid module name (component can't be \".\" or \"..\"):" */,
    0x00000051    /*  38 (LREF30-PUSH) */,
    0x0000205f    /*  39 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /*  41 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 56),
    0x0000200e    /*  43 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 50),
    0x00000048    /*  45 (LREF0-PUSH) */,
    0x00000006    /*  46 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[61])) /* ".." */,
    0x0000205f    /*  48 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  50 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 56),
    0x00000013    /*  52 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 34),
    0x00000013    /*  54 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]) + 56),
    0x00000053    /*  56 (LREF0-RET) */,
    /* (module-name->path #f) */
    0x000000db    /*   0 (READ-CHAR 0) */,
    0x0000000d    /*   1 (PUSH) */,
    0x00000008    /*   2 (CONSTN-PUSH) */,
    0x00000008    /*   3 (CONSTN-PUSH) */,
    0x00003017    /*   4 (LOCAL-ENV 3) */,
    0x0000003f    /*   5 (LREF2) */,
    0x0000009a    /*   6 (EOFP) */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[150]) + 24),
    0x0000100e    /*   9 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[150]) + 14),
    0x00000049    /*  11 (LREF1-PUSH) */,
    0x00000041    /*  12 (LREF10) */,
    0x0000101c    /*  13 (LOCAL-ENV-CALL 1) */,
    0x0000000d    /*  14 (PUSH) */,
    0x0000003d    /*  15 (LREF0) */,
    0x00000066    /*  16 (CONS) */,
    0x00000093    /*  17 (REVERSE) */,
    0x0000000d    /*  18 (PUSH) */,
    0x00000006    /*  19 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[67])) /* "/" */,
    0x00002060    /*  21 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-join */,
    0x00000014    /*  23 (RET) */,
    0x0000003f    /*  24 (LREF2) */,
    0x0000002f    /*  25 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(46)) /* #\. */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[150]) + 56)  /*     56 */,
    0x000000db    /*  28 (READ-CHAR 0) */,
    0x00001018    /*  29 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  30 (LREF0) */,
    0x0000002f    /*  31 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(46)) /* #\. */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[150]) + 43)  /*     43 */,
    0x000000db    /*  34 (READ-CHAR 0) */,
    0x0000000d    /*  35 (PUSH) */,
    0x00000048    /*  36 (LREF0-PUSH) */,
    0x00000042    /*  37 (LREF11) */,
    0x00000067    /*  38 (CONS-PUSH) */,
    0x0000004c    /*  39 (LREF10-PUSH) */,
    0x0000201b    /*  40 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[150]) + 5),
    0x00000014    /*  42 (RET) */,
    0x00000048    /*  43 (LREF0-PUSH) */,
    0x00000008    /*  44 (CONSTN-PUSH) */,
    0x0000100e    /*  45 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[150]) + 50),
    0x0000004d    /*  47 (LREF11-PUSH) */,
    0x00000044    /*  48 (LREF20) */,
    0x0000101c    /*  49 (LOCAL-ENV-CALL 1) */,
    0x0000000d    /*  50 (PUSH) */,
    0x00000041    /*  51 (LREF10) */,
    0x00000067    /*  52 (CONS-PUSH) */,
    0x0000201b    /*  53 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[150]) + 5),
    0x00000014    /*  55 (RET) */,
    0x000000db    /*  56 (READ-CHAR 0) */,
    0x0000000d    /*  57 (PUSH) */,
    0x0000004a    /*  58 (LREF2-PUSH) */,
    0x0000003e    /*  59 (LREF1) */,
    0x00000067    /*  60 (CONS-PUSH) */,
    0x00000048    /*  61 (LREF0-PUSH) */,
    0x0000101b    /*  62 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[150]) + 5),
    0x00000014    /*  64 (RET) */,
    0x00000014    /*  65 (RET) */,
    /* module-name->path */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[166])) /* (#<compiled-code (module-name->path path-comp)@0x7503bb0fa180>) */,
    0x00000041    /*   2 (LREF10) */,
    0x000000a0    /*   3 (IDENTIFIERP) */,
    0x0000001e    /*   4 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[216]) + 17),
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[216]) + 24),
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[216]) + 13),
    0x0000004c    /*  10 (LREF10-PUSH) */,
    0x0000105f    /*  11 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* identifier->symbol */,
    0x00001062    /*  13 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol->string */,
    0x00000013    /*  15 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[216]) + 24),
    0x0000200e    /*  17 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[216]) + 24),
    0x00000006    /*  19 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[66])) /* "identifier expected, but got:" */,
    0x0000004c    /*  21 (LREF10-PUSH) */,
    0x0000205f    /*  22 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000000d    /*  24 (PUSH) */,
    0x00000016    /*  25 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[4])) /* #<compiled-code (module-name->path #f)@0x7503bb0fa0c0> */,
    0x00002063    /*  27 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-string */,
    0x00000014    /*  29 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[246]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* module-name->path */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[246]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[5])) /* #<compiled-code module-name->path@0x7503bb0fa1e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* module-name->path */,
    0x00000014    /*  14 (RET) */,
    /* (path->module-name #:G2159) */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #/\./ */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00000006    /*   3 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[61])) /* ".." */,
    0x00003060    /*   5 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-all */,
    0x00000014    /*   7 (RET) */,
    /* path->module-name */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009b    /*   1 (STRINGP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]) + 6),
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]) + 13),
    0x0000200e    /*   6 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]) + 13),
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[75])) /* "string required, but got:" */,
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x0000205f    /*  11 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000200e    /*  13 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]) + 32),
    0x0000200e    /*  15 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]) + 27),
    0x0000004c    /*  17 (LREF10-PUSH) */,
    0x0000200e    /*  18 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]) + 25),
    0x00000048    /*  20 (LREF0-PUSH) */,
    0x00000006    /*  21 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[67])) /* "/" */,
    0x0000205f    /*  23 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-split */,
    0x00002062    /*  25 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x0000000d    /*  27 (PUSH) */,
    0x00000006    /*  28 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[59])) /* "." */,
    0x0000205f    /*  30 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-join */,
    0x00001063    /*  32 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string->symbol */,
    0x00000014    /*  34 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[187])) /* (#<compiled-code (path->module-name #:G2159)@0x7503baac0c60>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* path->module-name */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[8])) /* #<compiled-code path->module-name@0x7503baac0c00> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* path->module-name */,
    0x00000014    /*  16 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[321]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* global-variable-bound? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[321]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binds? */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* global-variable-bound? */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[336]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* global-variable-ref */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[336]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* global-variable-ref */,
    0x00000014    /*  14 (RET) */,
    /* symbol-bound? */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[351]) + 6),
    0x00000004    /*   3 (CONSTF) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[351]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[351]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[351]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[351]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[351]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[351]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[91])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[232])) /* (lambda (name :optional (module #f)) (module-binds? module name)) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000049    /*  29 (LREF1-PUSH) */,
    0x0000004d    /*  30 (LREF11-PUSH) */,
    0x00002060    /*  31 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binds? */,
    0x00000014    /*  33 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[385]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol-bound? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[385]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[12])) /* #<compiled-code symbol-bound?@0x7503baada660> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol-bound? */,
    0x00000014    /*  14 (RET) */,
    /* %insert-syntax-binding */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* syntax? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]) + 9),
    0x00000013    /*   7 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]) + 25),
    0x0000100e    /*   9 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]) + 14),
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x0000105f    /*  12 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* macro? */,
    0x0000001e    /*  14 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]) + 18),
    0x00000013    /*  16 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]) + 25),
    0x0000200e    /*  18 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]) + 25),
    0x00000006    /*  20 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[106])) /* "Syntax or macro object required, but got" */,
    0x00000048    /*  22 (LREF0-PUSH) */,
    0x0000205f    /*  23 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000004a    /*  25 (LREF2-PUSH) */,
    0x00000049    /*  26 (LREF1-PUSH) */,
    0x00000048    /*  27 (LREF0-PUSH) */,
    0x00003060    /*  28 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %insert-binding */,
    0x00000014    /*  30 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[431]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %insert-syntax-binding */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[431]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[14])) /* #<compiled-code %insert-syntax-binding@0x7503ba8adf60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %insert-syntax-binding */,
    0x00000014    /*  14 (RET) */,
    /* (%expand-user-import #:G2165) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000009c    /*   1 (SYMBOLP) */,
    0x00000031    /*   2 (RT) */,
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[446]) + 8),
    0x00000048    /*   5 (LREF0-PUSH) */,
    0x0000105f    /*   6 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x00000030    /*   8 (RF) */,
    0x00000076    /*   9 (LREF0-CDR) */,
    0x00000098    /*  10 (PAIRP) */,
    0x00000030    /*  11 (RF) */,
    0x0000003d    /*  12 (LREF0) */,
    0x00000083    /*  13 (CADR-PUSH) */,
    0x00001060    /*  14 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* keyword? */,
    0x00000014    /*  16 (RET) */,
    /* %expand-user-import */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]) + 6),
    0x0000004c    /*   2 (LREF10-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* any */,
    0x0000001e    /*   6 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]) + 13),
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[358])) /* (with-module gauche import) */,
    0x0000003d    /*  10 (LREF0) */,
    0x00000066    /*  11 (CONS) */,
    0x00000014    /*  12 (RET) */,
    0x0000100e    /*  13 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]) + 19),
    0x00000006    /*  15 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[129])) /* "r7rs-setup" */,
    0x0000105f    /*  17 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* provided? */,
    0x0000001e    /*  19 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]) + 23),
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]) + 35),
    0x0000100e    /*  23 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]) + 29),
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[129])) /* "r7rs-setup" */,
    0x0000105f    /*  27 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* load */,
    0x0000100e    /*  29 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]) + 35),
    0x00000006    /*  31 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[129])) /* "r7rs-setup" */,
    0x0000105f    /*  33 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* provide */,
    0x0000200e    /*  35 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]) + 49),
    0x00000006    /*  37 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* import */,
    0x0000003d    /*  39 (LREF0) */,
    0x00000067    /*  40 (CONS-PUSH) */,
    0x0000100e    /*  41 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]) + 47),
    0x00000006    /*  43 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* r7rs.user */,
    0x0000105f    /*  45 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* find-module */,
    0x00002062    /*  47 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* eval */,
    0x0000000a    /*  49 (CONST-RET) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[360])) /* (select-module r7rs.user) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[356])) /* (#<compiled-code (%expand-user-import #:G2165)@0x7503bb393a20>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[514]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %expand-user-import */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[514]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[17])) /* #<compiled-code %expand-user-import@0x7503bb3939c0> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expand-user-import */,
    0x00000014    /*  16 (RET) */,
    /* (#f #:G2169) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %expand-user-import */,
    0x00000014    /*   3 (RET) */,
    /* #f */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x00000077    /*   1 (LREF1-CDR) */,
    0x00002095    /*   2 (TAIL-APPLY 2) */,
    0x00000014    /*   3 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[371])) /* (#<compiled-code (#f #:G2169)@0x7503bb954780>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[539]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* import */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[539]) + 21),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* import */,
    0x00000016    /*  13 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[20])) /* #<compiled-code #f@0x7503bb954720> */,
    0x0000000d    /*  15 (PUSH) */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[386])) /* ((source lambda import-specs ((with-module gauche.internal %expand-user-import) import-specs))) */,
    0x00003060    /*  18 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %make-macro-transformer */,
    0x00000014    /*  20 (RET) */,
    0x00000015    /*  21 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* import */,
    0x0000001a    /*  23 (POP-LOCAL-ENV) */,
    0x0000000c    /*  24 (CONSTU-RET) */,
    /* global-identifier=? */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[564]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* wrapped-identifier? */,
    0x00000030    /*   5 (RF) */,
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[564]) + 11),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* wrapped-identifier? */,
    0x00000030    /*  11 (RF) */,
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[564]) + 17),
    0x00000049    /*  14 (LREF1-PUSH) */,
    0x0000105f    /*  15 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* id->bound-gloc */,
    0x00001018    /*  17 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  18 (LREF0) */,
    0x00000030    /*  19 (RF) */,
    0x0000100e    /*  20 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[564]) + 25),
    0x0000004c    /*  22 (LREF10-PUSH) */,
    0x0000105f    /*  23 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* id->bound-gloc */,
    0x00001018    /*  25 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  26 (LREF0) */,
    0x00000030    /*  27 (RF) */,
    0x0000004c    /*  28 (LREF10-PUSH) */,
    0x0000003d    /*  29 (LREF0) */,
    0x0000008f    /*  30 (EQ) */,
    0x00000014    /*  31 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[596]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* global-identifier=? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2154[596]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2155[22])) /* #<compiled-code global-identifier=?@0x7503bb1a07e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* global-identifier=? */,
    0x00000014    /*  14 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(46U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_OBJ(&scm__rc.d2150[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[4]), SCM_OBJ(&scm__rc.d2150[8])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(48U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[12])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[15])},
       { SCM_OBJ(&scm__rc.d2150[16]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[13]), SCM_OBJ(&scm__rc.d2150[17])},
       { SCM_MAKE_INT(51U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[19])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[20])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[23])},
       { SCM_OBJ(&scm__rc.d2150[24]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[21]), SCM_OBJ(&scm__rc.d2150[25])},
       { SCM_MAKE_INT(52U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[27])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[28])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[31])},
       { SCM_OBJ(&scm__rc.d2150[32]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[29]), SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_MAKE_INT(53U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[35])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[36])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[38])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_OBJ(&scm__rc.d2150[40]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[37]), SCM_OBJ(&scm__rc.d2150[41])},
       { SCM_MAKE_INT(54U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[43])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[44])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[46])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[47])},
       { SCM_OBJ(&scm__rc.d2150[48]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[45]), SCM_OBJ(&scm__rc.d2150[49])},
       { SCM_MAKE_INT(55U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[54])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[55])},
       { SCM_OBJ(&scm__rc.d2150[56]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[53]), SCM_OBJ(&scm__rc.d2150[57])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(57U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[63])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[64])},
       { SCM_OBJ(&scm__rc.d2150[65]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[62]), SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[68])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_OBJ(&scm__rc.d2150[70]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[73])},
       { SCM_MAKE_INT(62U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[75])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[76])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[79])},
       { SCM_OBJ(&scm__rc.d2150[80]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[77]), SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[84])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[86])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_OBJ(&scm__rc.d2150[87]), SCM_OBJ(&scm__rc.d2150[88])},
       { SCM_OBJ(&scm__rc.d2150[89]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[0]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[92])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[92])},
       { SCM_OBJ(&scm__rc.d2150[94]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[97])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[100])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[102])},
       { SCM_OBJ(&scm__rc.d2150[103]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[104])},
       { SCM_NIL, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[106])},
       { SCM_OBJ(&scm__rc.d2150[107]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[105]), SCM_OBJ(&scm__rc.d2150[108])},
       { SCM_OBJ(&scm__rc.d2150[101]), SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_OBJ(&scm__rc.d2150[99]), SCM_OBJ(&scm__rc.d2150[110])},
       { SCM_OBJ(&scm__rc.d2150[111]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[112])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[115])},
       { SCM_OBJ(&scm__rc.d2150[116]), SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_OBJ(&scm__rc.d2150[99]), SCM_OBJ(&scm__rc.d2150[117])},
       { SCM_OBJ(&scm__rc.d2150[118]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[120])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[122])},
       { SCM_OBJ(&scm__rc.d2150[123]), SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_OBJ(&scm__rc.d2150[99]), SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_OBJ(&scm__rc.d2150[125]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[126])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[129])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[131])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[133])},
       { SCM_OBJ(&scm__rc.d2150[134]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[135])},
       { SCM_OBJ(&scm__rc.d2150[136]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[132]), SCM_OBJ(&scm__rc.d2150[137])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[139])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[133])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[142])},
       { SCM_OBJ(&scm__rc.d2150[143]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[141]), SCM_OBJ(&scm__rc.d2150[144])},
       { SCM_OBJ(&scm__rc.d2150[145]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[140]), SCM_OBJ(&scm__rc.d2150[146])},
       { SCM_OBJ(&scm__rc.d2150[147]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[138]), SCM_OBJ(&scm__rc.d2150[148])},
       { SCM_OBJ(&scm__rc.d2150[130]), SCM_OBJ(&scm__rc.d2150[149])},
       { SCM_OBJ(&scm__rc.d2150[150]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[151])},
       { SCM_OBJ(&scm__rc.d2150[152]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[128]), SCM_OBJ(&scm__rc.d2150[153])},
       { SCM_OBJ(&scm__rc.d2150[121]), SCM_OBJ(&scm__rc.d2150[154])},
       { SCM_OBJ(&scm__rc.d2150[114]), SCM_OBJ(&scm__rc.d2150[155])},
       { SCM_OBJ(&scm__rc.d2150[88]), SCM_OBJ(&scm__rc.d2150[156])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[158])},
       { SCM_OBJ(&scm__rc.d2150[159]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[161])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[162]), SCM_OBJ(&scm__rc.d2150[163])},
       { SCM_OBJ(&scm__rc.d2150[164]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[3]), SCM_NIL},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[167])},
       { SCM_MAKE_INT(99U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[170])},
       { SCM_OBJ(&scm__rc.d2150[171]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(87U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[174])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[175])},
       { SCM_OBJ(&scm__rc.d2150[176]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[179])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(113U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[182])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[183])},
       { SCM_OBJ(&scm__rc.d2150[184]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[7]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(110U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[189])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[190])},
       { SCM_OBJ(&scm__rc.d2150[191]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[59])},
       { SCM_MAKE_INT(126U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[195])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[196])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[198])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[199])},
       { SCM_OBJ(&scm__rc.d2150[200]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[197]), SCM_OBJ(&scm__rc.d2150[201])},
       { SCM_MAKE_INT(131U), SCM_NIL},
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
       { SCM_MAKE_INT(136U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[216])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[217])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[219])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[220])},
       { SCM_OBJ(&scm__rc.d2150[221]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[218]), SCM_OBJ(&scm__rc.d2150[222])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[167])},
       { SCM_OBJ(&scm__rc.d2150[224]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[225])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[226])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[59])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[228])},
       { SCM_OBJ(&scm__rc.d2150[229]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[227]), SCM_OBJ(&scm__rc.d2150[230])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[231])},
       { SCM_MAKE_INT(153U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[234])},
       { SCM_OBJ(&scm__rc.d2150[235]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(158U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[238])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[239])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[241])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[242])},
       { SCM_OBJ(&scm__rc.d2150[243]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[240]), SCM_OBJ(&scm__rc.d2150[244])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[246])},
       { SCM_MAKE_INT(159U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[248])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[249])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[251])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[252])},
       { SCM_OBJ(&scm__rc.d2150[253]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[250]), SCM_OBJ(&scm__rc.d2150[254])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[256])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[257])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[258])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[259])},
       { SCM_MAKE_INT(170U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[261])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[262])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[264])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[265])},
       { SCM_OBJ(&scm__rc.d2150[266]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[263]), SCM_OBJ(&scm__rc.d2150[267])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[270])},
       { SCM_MAKE_INT(191U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[272])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[273])},
       { SCM_OBJ(&scm__rc.d2150[274]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[59])},
       { SCM_MAKE_INT(196U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[278])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[279])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[281])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[282])},
       { SCM_OBJ(&scm__rc.d2150[283]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[280]), SCM_OBJ(&scm__rc.d2150[284])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[286])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[287])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[288])},
       { SCM_MAKE_INT(199U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[290])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[291])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[293])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[294])},
       { SCM_OBJ(&scm__rc.d2150[295]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[292]), SCM_OBJ(&scm__rc.d2150[296])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[298])},
       { SCM_MAKE_INT(204U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[300])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[303])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[304])},
       { SCM_OBJ(&scm__rc.d2150[305]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[302]), SCM_OBJ(&scm__rc.d2150[306])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[308])},
       { SCM_MAKE_INT(207U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[310])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[311])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[313])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[314])},
       { SCM_OBJ(&scm__rc.d2150[315]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[312]), SCM_OBJ(&scm__rc.d2150[316])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[256])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[318])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[319])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[320])},
       { SCM_MAKE_INT(209U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[322])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[323])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[325])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[326])},
       { SCM_OBJ(&scm__rc.d2150[327]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[324]), SCM_OBJ(&scm__rc.d2150[328])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[330])},
       { SCM_MAKE_INT(214U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[332])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[333])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[335])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[336])},
       { SCM_OBJ(&scm__rc.d2150[337]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[334]), SCM_OBJ(&scm__rc.d2150[338])},
       { SCM_MAKE_INT(218U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[340])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[341])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[343])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[344])},
       { SCM_OBJ(&scm__rc.d2150[345]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[342]), SCM_OBJ(&scm__rc.d2150[346])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(262U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[351])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_OBJ(&scm__rc.d2150[353]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[16]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[122])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[357])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[359])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(261U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[362])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[363])},
       { SCM_OBJ(&scm__rc.d2150[364]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[367])},
       { SCM_OBJ(&scm__rc.d2150[368]), SCM_UNDEFINED},
       { SCM_OBJ(&scm__rc.d2150[369]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2155[19]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[372])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[372])},
       { SCM_OBJ(&scm__rc.d2150[374]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[377])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[378])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[379]), SCM_OBJ(&scm__rc.d2150[380])},
       { SCM_OBJ(&scm__rc.d2150[381]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[382])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[383])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[384])},
       { SCM_OBJ(&scm__rc.d2150[385]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[387])},
       { SCM_MAKE_INT(298U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[389])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[390])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[392])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[393])},
       { SCM_OBJ(&scm__rc.d2150[394]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[391]), SCM_OBJ(&scm__rc.d2150[395])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(307U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[398])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[399])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[401])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[402])},
       { SCM_OBJ(&scm__rc.d2150[403]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[400]), SCM_OBJ(&scm__rc.d2150[404])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(317U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[407])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[408])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[410])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[411])},
       { SCM_OBJ(&scm__rc.d2150[412]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[409]), SCM_OBJ(&scm__rc.d2150[413])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[415])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[416])},
       { SCM_MAKE_INT(319U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[418])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[419])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[421])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[422])},
       { SCM_OBJ(&scm__rc.d2150[423]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[420]), SCM_OBJ(&scm__rc.d2150[424])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_MAKE_INT(327U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[427])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[428])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[430])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[431])},
       { SCM_OBJ(&scm__rc.d2150[432]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[429]), SCM_OBJ(&scm__rc.d2150[433])},
       { SCM_MAKE_INT(328U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[435])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[436])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[438])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[439])},
       { SCM_OBJ(&scm__rc.d2150[440]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[437]), SCM_OBJ(&scm__rc.d2150[441])},
       { SCM_MAKE_INT(329U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[443])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[444])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[446])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[447])},
       { SCM_OBJ(&scm__rc.d2150[448]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[449])},
       { SCM_MAKE_INT(353U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[451])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[452])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[454])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[455])},
       { SCM_OBJ(&scm__rc.d2150[456]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[453]), SCM_OBJ(&scm__rc.d2150[457])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_MAKE_INT(359U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[461])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[462])},
       { SCM_OBJ(&scm__rc.d2150[463]), SCM_NIL},
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(109, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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

static ScmObj libmodmoduleP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("module?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_MODULEP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmodmodule_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("module-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  {
{
ScmObj SCM_RESULT;

#line 49 "./libmod.scm"
{SCM_RESULT=(SCM_OBJ((SCM_MODULE(mod))->name));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodmodule_parents(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("module-parents");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  {
{
ScmObj SCM_RESULT;

#line 51 "./libmod.scm"
{SCM_RESULT=((mod)->parents);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodmodule_precedence_list(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("module-precedence-list");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  {
{
ScmObj SCM_RESULT;

#line 52 "./libmod.scm"
{SCM_RESULT=((mod)->mpl);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodmodule_imports(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("module-imports");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  {
{
ScmObj SCM_RESULT;

#line 53 "./libmod.scm"
{SCM_RESULT=((mod)->imported);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodmodule_exports(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("module-exports");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ModuleExports(mod));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodmodule_table(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("module-table");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  {
{
ScmObj SCM_RESULT;

#line 55 "./libmod.scm"
{SCM_RESULT=(SCM_OBJ((mod)->internal));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodfind_module(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("find-module");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  {
{
ScmModule* SCM_RESULT;

#line 58 "./libmod.scm"
{SCM_RESULT=(Scm_FindModule(name,SCM_FIND_MODULE_QUIET));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_OBJ_SAFE, SCM_RESULT));
}
  }
}


static ScmObj libmodall_modules(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("all-modules");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_AllModules());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodmake_module(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj if_exists_scm = scm__rc.d2149[57];
  ScmObj if_exists;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("make-module");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_MAYBE_P(SCM_SYMBOLP, name_scm)) Scm_Error("<symbol> or #f required, but got %S", name_scm);
  name = SCM_MAYBE(SCM_SYMBOL, name_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[58])) {
      if_exists_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(if_exists_scm)) Scm_Error("scheme object required, but got %S", if_exists_scm);
  if_exists = (if_exists_scm);
  {
{
ScmObj SCM_RESULT;

#line 63 "./libmod.scm"
{int error_if_exists=TRUE;
if (SCM_EQ(if_exists,scm__rc.d2149[57])){error_if_exists=(TRUE);}else if(
SCM_FALSEP(if_exists)){error_if_exists=(FALSE);} else {
Scm_TypeError(":if-exists",":error or #f",if_exists);}
{SCM_RESULT=(Scm_MakeModule(name,error_if_exists));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmModule* get_module_from_mod_or_name(ScmObj id){{
#line 118 "./libmod.scm"
if (SCM_MODULEP(id)){return (SCM_MODULE(id));}else if(
SCM_SYMBOLP(id)){return (Scm_FindModule(SCM_SYMBOL(id),0));}else if(
SCM_FALSEP(id)){return (SCM_CURRENT_MODULE());} else {
Scm_Error("module or symbol required, but got: %S",id);
return (NULL);}}}

static ScmObj libmodmodule_bindsP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_or_name_scm;
  ScmObj mod_or_name;
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("module-binds?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_or_name_scm = SCM_SUBRARGS[0];
  if (!(mod_or_name_scm)) Scm_Error("scheme object required, but got %S", mod_or_name_scm);
  mod_or_name = (mod_or_name_scm);
  name_scm = SCM_SUBRARGS[1];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  {
{
int SCM_RESULT;

#line 127 "./libmod.scm"
{SCM_RESULT=(
!(SCM_UNBOUNDP(
Scm_GlobalVariableRef(get_module_from_mod_or_name(mod_or_name),name,0))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmodmodule_exportsP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_or_name_scm;
  ScmObj mod_or_name;
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("module-exports?");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_or_name_scm = SCM_SUBRARGS[0];
  if (!(mod_or_name_scm)) Scm_Error("scheme object required, but got %S", mod_or_name_scm);
  mod_or_name = (mod_or_name_scm);
  name_scm = SCM_SUBRARGS[1];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  {
{
int SCM_RESULT;

#line 132 "./libmod.scm"
{SCM_RESULT=(
!(SCM_UNBOUNDP(
Scm_GlobalVariableRef(get_module_from_mod_or_name(mod_or_name),name,SCM_BINDING_EXTERNAL))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmodmodule_binding_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_or_name_scm;
  ScmObj mod_or_name;
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj stay_in_module_scm;
  int stay_in_module;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("module-binding-ref");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_or_name_scm = SCM_SUBRARGS[0];
  if (!(mod_or_name_scm)) Scm_Error("scheme object required, but got %S", mod_or_name_scm);
  mod_or_name = (mod_or_name_scm);
  name_scm = SCM_SUBRARGS[1];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  if (SCM_ARGCNT > 2+1) {
    fallback_scm = SCM_SUBRARGS[2];
  } else {
    fallback_scm = SCM_UNBOUND;
  }
  if (!(fallback_scm)) Scm_Error("scheme object required, but got %S", fallback_scm);
  fallback = (fallback_scm);
  if (SCM_ARGCNT > 3+1) {
    stay_in_module_scm = SCM_SUBRARGS[3];
  } else {
    stay_in_module_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(stay_in_module_scm)) Scm_Error("boolean required, but got %S", stay_in_module_scm);
  stay_in_module = SCM_BOOL_VALUE(stay_in_module_scm);
  {
{
ScmObj SCM_RESULT;

#line 140 "./libmod.scm"
{ScmModule* module=get_module_from_mod_or_name(mod_or_name);int flags=
((stay_in_module)?(SCM_BINDING_STAY_IN_MODULE):(0));ScmObj r=
Scm_GlobalVariableRef(module,name,flags);ScmObj r2=
((SCM_UNBOUNDP(r))?(fallback):(r));
if (SCM_UNBOUNDP(r2)){{
Scm_Error("global identifier %S is not bound in module %S",name,module);}}
#line 147 "./libmod.scm"
{SCM_RESULT=(r2);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmod_25export_all(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj module_scm;
  ScmModule* module;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%export-all");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  module_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(module_scm)) Scm_Error("<module> required, but got %S", module_scm);
  module = SCM_MODULE(module_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ExportAll(module));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmod_25extend_module(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj module_scm;
  ScmModule* module;
  ScmObj supers_scm;
  ScmObj supers;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%extend-module");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  module_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(module_scm)) Scm_Error("<module> required, but got %S", module_scm);
  module = SCM_MODULE(module_scm);
  supers_scm = SCM_SUBRARGS[1];
  if (!SCM_LISTP(supers_scm)) Scm_Error("list required, but got %S", supers_scm);
  supers = (supers_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ExtendModule(module,supers));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmod_25insert_binding(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj value_scm;
  ScmObj value;
  ScmObj flags_scm;
  ScmObj flags;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("%insert-binding");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  name_scm = SCM_SUBRARGS[1];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  value_scm = SCM_SUBRARGS[2];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  if (SCM_ARGCNT > 3+1) {
    flags_scm = SCM_SUBRARGS[3];
  } else {
    flags_scm = SCM_OBJ(&scm__rc.d2150[107]);
  }
  if (!(flags_scm)) Scm_Error("scheme object required, but got %S", flags_scm);
  flags = (flags_scm);
  {
{
ScmObj SCM_RESULT;

#line 172 "./libmod.scm"
{int z=0;
if ((!(SCM_FALSEP(Scm_Memq(scm__rc.d2149[215],flags))))&&(
!(SCM_UNBOUNDP(
Scm_GlobalVariableRef(mod,name,SCM_BINDING_STAY_IN_MODULE))))){
#line 177 "./libmod.scm"
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{
if (!(SCM_FALSEP(Scm_Memq(scm__rc.d2149[216],flags)))){{
(z)|=(SCM_BINDING_CONST);}}
if (!(SCM_FALSEP(Scm_Memq(scm__rc.d2149[217],flags)))){{
(z)|=(SCM_BINDING_INLINABLE);}}
if (!(SCM_FALSEP(Scm_Memq(scm__rc.d2149[218],flags)))){{
(z)|=(SCM_BINDING_DUMMY);}}
{SCM_RESULT=(SCM_OBJ(Scm_MakeBinding(mod,name,value,z)));goto SCM_STUB_RETURN;}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmod_25hide_binding(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%hide-binding");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  name_scm = SCM_SUBRARGS[1];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  {
Scm_HideBinding(mod,name);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libmod_25alias_binding(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj target_scm;
  ScmModule* target;
  ScmObj tname_scm;
  ScmSymbol* tname;
  ScmObj origin_scm;
  ScmModule* origin;
  ScmObj oname_scm;
  ScmSymbol* oname;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("%alias-binding");
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  target_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(target_scm)) Scm_Error("<module> required, but got %S", target_scm);
  target = SCM_MODULE(target_scm);
  tname_scm = SCM_SUBRARGS[1];
  if (!SCM_SYMBOLP(tname_scm)) Scm_Error("<symbol> required, but got %S", tname_scm);
  tname = SCM_SYMBOL(tname_scm);
  origin_scm = SCM_SUBRARGS[2];
  if (!SCM_MODULEP(origin_scm)) Scm_Error("<module> required, but got %S", origin_scm);
  origin = SCM_MODULE(origin_scm);
  oname_scm = SCM_SUBRARGS[3];
  if (!SCM_SYMBOLP(oname_scm)) Scm_Error("<symbol> required, but got %S", oname_scm);
  oname = SCM_SYMBOL(oname_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_AliasBinding(target,tname,origin,oname));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmod_25make_wrapper_module(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj origin_scm;
  ScmModule* origin;
  ScmObj prefix_scm;
  ScmObj prefix;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%make-wrapper-module");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  origin_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(origin_scm)) Scm_Error("<module> required, but got %S", origin_scm);
  origin = SCM_MODULE(origin_scm);
  prefix_scm = SCM_SUBRARGS[1];
  if (!(prefix_scm)) Scm_Error("scheme object required, but got %S", prefix_scm);
  prefix = (prefix_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm__MakeWrapperModule(origin,prefix));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmod_25export_symbols(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj names_scm;
  ScmObj names;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%export-symbols");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  names_scm = SCM_SUBRARGS[1];
  if (!(names_scm)) Scm_Error("scheme object required, but got %S", names_scm);
  names = (names_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ExportSymbols(mod,names));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmod_25import_module(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj imported_scm;
  ScmObj imported;
  ScmObj prefix_scm;
  ScmObj prefix;
  ScmObj flags_scm;
  u_long flags;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("%import-module");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  imported_scm = SCM_SUBRARGS[1];
  if (!(imported_scm)) Scm_Error("scheme object required, but got %S", imported_scm);
  imported = (imported_scm);
  if (SCM_ARGCNT > 2+1) {
    prefix_scm = SCM_SUBRARGS[2];
  } else {
    prefix_scm = SCM_FALSE;
  }
  if (!(prefix_scm)) Scm_Error("scheme object required, but got %S", prefix_scm);
  prefix = (prefix_scm);
  if (SCM_ARGCNT > 3+1) {
    flags_scm = SCM_SUBRARGS[3];
  } else {
    flags_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_UINTEGERP(flags_scm)) Scm_Error("u_long required, but got %S", flags_scm);
  flags = Scm_GetIntegerU(flags_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ImportModule(mod,imported,prefix,flags));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmod_25import_modules(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj mods_scm;
  ScmObj mods;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%import-modules");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  mods_scm = SCM_SUBRARGS[1];
  if (!(mods_scm)) Scm_Error("scheme object required, but got %S", mods_scm);
  mods = (mods_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ImportModules(mod,mods));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmod_25seal_moduleX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%seal-module!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  {
Scm_ModuleSeal(mod);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

static void module_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2164 SCM_UNUSED){{
#line 225 "./libmod.scm"
if (SCM_MODULEP((SCM_MODULE(obj))->origin)){
Scm_Printf(port,"#<module %A$%A @%p>",
(SCM_MODULE(obj))->name,
(SCM_MODULE((SCM_MODULE(obj))->origin))->name,obj);} else {
#line 230 "./libmod.scm"
Scm_Printf(port,"#<module %A>",(SCM_MODULE(obj))->name);}}}
SCM_DEFINE_BUILTIN_CLASS(Scm_ModuleClass, module_print, NULL, NULL, NULL, SCM_CLASS_COLLECTION_CPL);

static ScmObj Scm_ModuleClass_name_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(obj->name);
}

static ScmObj Scm_ModuleClass_mpl_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(obj->mpl);
}

static ScmObj Scm_ModuleClass_parents_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(obj->parents);
}

static ScmObj Scm_ModuleClass_imports_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(obj->imported);
}

static ScmObj Scm_ModuleClass_exports_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(Scm_ModuleExports(obj));
}

static ScmObj Scm_ModuleClass_export_all_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_MAKE_BOOL(obj->exportAll);
}

static ScmObj Scm_ModuleClass_table_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(obj->internal);
}

static ScmObj Scm_ModuleClass_depends_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(obj->depended);
}

static ScmObj Scm_ModuleClass_origin_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(obj->origin);
}

static ScmObj Scm_ModuleClass_prefix_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(obj->prefix);
}

static ScmObj Scm_ModuleClass_info_GET(ScmObj OBJARG)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  return SCM_OBJ_SAFE(obj->info);
}

static void Scm_ModuleClass_info_SET(ScmObj OBJARG, ScmObj value)
{
  ScmModule* obj = SCM_MODULE(OBJARG);
  obj->info = (value);
}

static ScmClassStaticSlotSpec Scm_ModuleClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("name", Scm_ModuleClass_name_GET, NULL),
  SCM_CLASS_SLOT_SPEC("mpl", Scm_ModuleClass_mpl_GET, NULL),
  SCM_CLASS_SLOT_SPEC("parents", Scm_ModuleClass_parents_GET, NULL),
  SCM_CLASS_SLOT_SPEC("imports", Scm_ModuleClass_imports_GET, NULL),
  SCM_CLASS_SLOT_SPEC("exports", Scm_ModuleClass_exports_GET, NULL),
  SCM_CLASS_SLOT_SPEC("export-all", Scm_ModuleClass_export_all_GET, NULL),
  SCM_CLASS_SLOT_SPEC("table", Scm_ModuleClass_table_GET, NULL),
  SCM_CLASS_SLOT_SPEC("depends", Scm_ModuleClass_depends_GET, NULL),
  SCM_CLASS_SLOT_SPEC("origin", Scm_ModuleClass_origin_GET, NULL),
  SCM_CLASS_SLOT_SPEC("prefix", Scm_ModuleClass_prefix_GET, NULL),
  SCM_CLASS_SLOT_SPEC("info", Scm_ModuleClass_info_GET, Scm_ModuleClass_info_SET),
  SCM_CLASS_SLOT_SPEC_END()
};


static ScmObj libmodfind_binding(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mod_scm;
  ScmModule* mod;
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj stay_in_module_scm;
  int stay_in_module;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("find-binding");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mod_scm = SCM_SUBRARGS[0];
  if (!SCM_MODULEP(mod_scm)) Scm_Error("<module> required, but got %S", mod_scm);
  mod = SCM_MODULE(mod_scm);
  name_scm = SCM_SUBRARGS[1];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  stay_in_module_scm = SCM_SUBRARGS[2];
  if (!SCM_BOOLP(stay_in_module_scm)) Scm_Error("boolean required, but got %S", stay_in_module_scm);
  stay_in_module = SCM_BOOL_VALUE(stay_in_module_scm);
  {
{
ScmGloc* SCM_RESULT;

#line 301 "./libmod.scm"
{SCM_RESULT=(Scm_FindBinding(mod,name,
((stay_in_module)?(SCM_BINDING_STAY_IN_MODULE):(0))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_OBJ, SCM_RESULT));
}
  }
}


static ScmObj libmodfind_const_binding(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj id_scm;
  ScmIdentifier* id;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("find-const-binding");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  id_scm = SCM_SUBRARGS[0];
  if (!SCM_IDENTIFIERP(id_scm)) Scm_Error("<identifier> required, but got %S", id_scm);
  id = SCM_IDENTIFIER(id_scm);
  {
{
ScmObj SCM_RESULT;

#line 308 "./libmod.scm"
{ScmGloc* g=Scm_IdentifierGlobalBinding(id);
if (((!(g))||(
!(SCM_GLOC_CONST_P(g))))||(
SCM_VM_COMPILER_FLAG_IS_SET(Scm_VM(),SCM_COMPILE_NOINLINE_CONSTS))){
#line 313 "./libmod.scm"
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
#line 315 "./libmod.scm"
{SCM_RESULT=(SCM_GLOC_GET(g));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodgloc_boundP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj gloc_scm;
  ScmGloc* gloc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("gloc-bound?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  gloc_scm = SCM_SUBRARGS[0];
  if (!SCM_GLOCP(gloc_scm)) Scm_Error("GLOC required, but got %S", gloc_scm);
  gloc = SCM_GLOC(gloc_scm);
  {
{
int SCM_RESULT;

#line 318 "./libmod.scm"
{SCM_RESULT=(!(SCM_UNBOUNDP(SCM_GLOC_GET(gloc))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmodgloc_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj gloc_scm;
  ScmGloc* gloc;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("gloc-ref");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  gloc_scm = SCM_SUBRARGS[0];
  if (!SCM_GLOCP(gloc_scm)) Scm_Error("GLOC required, but got %S", gloc_scm);
  gloc = SCM_GLOC(gloc_scm);
  if (SCM_ARGCNT > 1+1) {
    fallback_scm = SCM_SUBRARGS[1];
  } else {
    fallback_scm = SCM_UNBOUND;
  }
  if (!(fallback_scm)) Scm_Error("scheme object required, but got %S", fallback_scm);
  fallback = (fallback_scm);
  {
{
ScmObj SCM_RESULT;

#line 320 "./libmod.scm"
{ScmObj v=SCM_GLOC_GET(gloc);
if (SCM_UNBOUNDP(v)){
{
if (SCM_UNBOUNDP(fallback)){{
Scm_Error("gloc %S doesn't have a value",SCM_OBJ(gloc));}}
{SCM_RESULT=(fallback);goto SCM_STUB_RETURN;}}} else {
{SCM_RESULT=(v);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodgloc_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj gloc_scm;
  ScmGloc* gloc;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("gloc-set!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  gloc_scm = SCM_SUBRARGS[0];
  if (!SCM_GLOCP(gloc_scm)) Scm_Error("GLOC required, but got %S", gloc_scm);
  gloc = SCM_GLOC(gloc_scm);
  value_scm = SCM_SUBRARGS[1];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(SCM_GLOC_SET(gloc,value));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libmodgloc_constP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj gloc_scm;
  ScmGloc* gloc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("gloc-const?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  gloc_scm = SCM_SUBRARGS[0];
  if (!SCM_GLOCP(gloc_scm)) Scm_Error("GLOC required, but got %S", gloc_scm);
  gloc = SCM_GLOC(gloc_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_GlocConstP(gloc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libmodgloc_inlinableP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj gloc_scm;
  ScmGloc* gloc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("gloc-inlinable?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  gloc_scm = SCM_SUBRARGS[0];
  if (!SCM_GLOCP(gloc_scm)) Scm_Error("GLOC required, but got %S", gloc_scm);
  gloc = SCM_GLOC(gloc_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_GlocInlinableP(gloc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

 ScmGloc* Scm__IdentifierToBoundGloc(ScmIdentifier* id){{
#line 348 "./libmod.scm"
{ScmGloc* gloc=Scm_IdentifierGlobalBinding(id);
if ((gloc)&&(!(SCM_UNBOUNDP(SCM_GLOC_GET(gloc))))){
return (gloc);} else {
return (NULL);}}}}

static ScmObj libmodid_TObound_gloc(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj id_scm;
  ScmIdentifier* id;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("id->bound-gloc");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  id_scm = SCM_SUBRARGS[0];
  if (!SCM_IDENTIFIERP(id_scm)) Scm_Error("<identifier> required, but got %S", id_scm);
  id = SCM_IDENTIFIER(id_scm);
  {
{
ScmGloc* SCM_RESULT;
{SCM_RESULT=(Scm__IdentifierToBoundGloc(id));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_OBJ, SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[2])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[6])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[9])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[10])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[11])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[13])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[15])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[18])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[21])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[23])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[104];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[101];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[81];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[83];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[102];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[105];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[84];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[97];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[99];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[77];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[79];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[37];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[4];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[78];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[103];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[89];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[82];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[90];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[88];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[107];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[94];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[538];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[114];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[61]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[60]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[38];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[59]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[58]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[56]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[112];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[539];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[118];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[540];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[541];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[542];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[543];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[544];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[117];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[545];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_MAKE_CHAR(46);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[125];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[67]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[546];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[129];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[547];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[123];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[121];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[66]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[135];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[133];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[138];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[146];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[548];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[549];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[144];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[142];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[147];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[550];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[137];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[75]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[551];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[552];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[136];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[180];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[152];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[184];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[165];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[91]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[167];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[553];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[554];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[555];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[556];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[188];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[219];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[17];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[220];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[106]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[238];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[235];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[233];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[313];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[316];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[557];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[311];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[558];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[330];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[332];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[327];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[326];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = SCM_OBJ(&scm__sc.d2148[129]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[324];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[322];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[320];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[331];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[315];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[314];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[341];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[343];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[340];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[344];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[559];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[560];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[561];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[419];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[421];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[422];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[408];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[427]), i++) = scm__rc.d2149[417];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[427]);
}
void Scm_Init_libmod() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* module? */
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[1])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1]), scm__rc.d2149[1]);
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[2])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[4]), scm__rc.d2149[2]);
  scm__rc.d2149[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[4])),TRUE); /* bind-info */
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[5])),TRUE); /* gauche */
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
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module?")), SCM_OBJ(&libmodmoduleP__STUB), SCM_BINDING_INLINABLE);
  libmodmoduleP__STUB.common.info = scm__rc.d2149[5];
  libmodmoduleP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* module-name */
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* mod */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[10]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[13]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[15]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[16]), scm__rc.d2149[3]);
  scm__rc.d2149[18] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_OBJ(&scm__rc.d2150[10]), SCM_OBJ(&scm__rc.d2150[18]));
  scm__rc.d2149[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* <module> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[20]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[20]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[20]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[20]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module-name")), SCM_OBJ(&libmodmodule_name__STUB), 0);
  libmodmodule_name__STUB.common.info = scm__rc.d2149[18];
  libmodmodule_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[20]);
  scm__rc.d2149[27] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* module-parents */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[21]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[22]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[23]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[24]), scm__rc.d2149[3]);
  scm__rc.d2149[28] = Scm_MakeExtendedPair(scm__rc.d2149[27], SCM_OBJ(&scm__rc.d2150[10]), SCM_OBJ(&scm__rc.d2150[26]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module-parents")), SCM_OBJ(&libmodmodule_parents__STUB), 0);
  libmodmodule_parents__STUB.common.info = scm__rc.d2149[28];
  libmodmodule_parents__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[20]);
  scm__rc.d2149[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* module-precedence-list */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[29]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[30]), scm__rc.d2149[29]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[31]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[32]), scm__rc.d2149[3]);
  scm__rc.d2149[30] = Scm_MakeExtendedPair(scm__rc.d2149[29], SCM_OBJ(&scm__rc.d2150[10]), SCM_OBJ(&scm__rc.d2150[34]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module-precedence-list")), SCM_OBJ(&libmodmodule_precedence_list__STUB), 0);
  libmodmodule_precedence_list__STUB.common.info = scm__rc.d2149[30];
  libmodmodule_precedence_list__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[20]);
  scm__rc.d2149[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* module-imports */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[37]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[38]), scm__rc.d2149[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[39]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[40]), scm__rc.d2149[3]);
  scm__rc.d2149[32] = Scm_MakeExtendedPair(scm__rc.d2149[31], SCM_OBJ(&scm__rc.d2150[10]), SCM_OBJ(&scm__rc.d2150[42]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module-imports")), SCM_OBJ(&libmodmodule_imports__STUB), 0);
  libmodmodule_imports__STUB.common.info = scm__rc.d2149[32];
  libmodmodule_imports__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[20]);
  scm__rc.d2149[33] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* module-exports */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[45]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[47]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[48]), scm__rc.d2149[3]);
  scm__rc.d2149[34] = Scm_MakeExtendedPair(scm__rc.d2149[33], SCM_OBJ(&scm__rc.d2150[10]), SCM_OBJ(&scm__rc.d2150[50]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module-exports")), SCM_OBJ(&libmodmodule_exports__STUB), 0);
  libmodmodule_exports__STUB.common.info = scm__rc.d2149[34];
  libmodmodule_exports__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[20]);
  scm__rc.d2149[35] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* module-table */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[53]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[35]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[55]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[56]), scm__rc.d2149[3]);
  scm__rc.d2149[36] = Scm_MakeExtendedPair(scm__rc.d2149[35], SCM_OBJ(&scm__rc.d2150[10]), SCM_OBJ(&scm__rc.d2150[58]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module-table")), SCM_OBJ(&libmodmodule_table__STUB), 0);
  libmodmodule_table__STUB.common.info = scm__rc.d2149[36];
  libmodmodule_table__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[20]);
  scm__rc.d2149[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* find-module */
  scm__rc.d2149[38] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[62]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[63]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[64]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[65]), scm__rc.d2149[3]);
  scm__rc.d2149[39] = Scm_MakeExtendedPair(scm__rc.d2149[37], SCM_OBJ(&scm__rc.d2150[59]), SCM_OBJ(&scm__rc.d2150[67]));
  scm__rc.d2149[40] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* <symbol> */
  scm__rc.d2149[41] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* <module>? */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[4] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[42]))[6] = scm__rc.d2149[41];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("find-module")), SCM_OBJ(&libmodfind_module__STUB), 0);
  libmodfind_module__STUB.common.info = scm__rc.d2149[39];
  libmodfind_module__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[42]);
  scm__rc.d2149[49] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* all-modules */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[68]), scm__rc.d2149[49]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[70]), scm__rc.d2149[3]);
  scm__rc.d2149[50] = Scm_MakeExtendedPair(scm__rc.d2149[49], SCM_NIL, SCM_OBJ(&scm__rc.d2150[71]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[51]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[51]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[51]))[5] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("all-modules")), SCM_OBJ(&libmodall_modules__STUB), 0);
  libmodall_modules__STUB.common.info = scm__rc.d2149[50];
  libmodall_modules__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[51]);
  scm__rc.d2149[57] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22]))); /* :error */
  scm__rc.d2149[58] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23]))); /* :if-exists */
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* make-module */
  scm__rc.d2149[60] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25]))); /* :key */
  scm__rc.d2149[61] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* if-exists */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[72]), scm__rc.d2149[61]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[73]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[74]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[79]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[80]), scm__rc.d2149[3]);
  scm__rc.d2149[62] = Scm_MakeExtendedPair(scm__rc.d2149[59], SCM_OBJ(&scm__rc.d2150[74]), SCM_OBJ(&scm__rc.d2150[82]));
  scm__rc.d2149[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* <symbol>? */
  scm__rc.d2149[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[65]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[65]))[4] = scm__rc.d2149[63];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[65]))[5] = scm__rc.d2149[64];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[65]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[65]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("make-module")), SCM_OBJ(&libmodmake_module__STUB), 0);
  libmodmake_module__STUB.common.info = scm__rc.d2149[62];
  libmodmake_module__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[65]);
  scm__rc.d2149[73] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* begin */
  scm__rc.d2149[75] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[4]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[74] = Scm_MakeIdentifier(scm__rc.d2149[37], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#find-module */
  scm__rc.d2149[77] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* make-identifier */
  scm__rc.d2149[76] = Scm_MakeIdentifier(scm__rc.d2149[77], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#make-identifier */
  scm__rc.d2149[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* require */
  scm__rc.d2149[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* import */
  scm__rc.d2149[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* module-name->path */
  scm__rc.d2149[80] = Scm_MakeIdentifier(scm__rc.d2149[81], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#module-name->path */
  scm__rc.d2149[82] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),FALSE); /* G2153 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[86]), scm__rc.d2149[82]);
  scm__rc.d2149[83] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* module */
  scm__rc.d2149[84] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* options */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[88]), scm__rc.d2149[83]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[88]), scm__rc.d2149[84]);
  scm__rc.d2149[85] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[0]))->debugInfo = scm__rc.d2149[85];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[5] = SCM_WORD(scm__rc.d2149[73]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[9] = SCM_WORD(scm__rc.d2149[4]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[11] = SCM_WORD(scm__rc.d2149[74]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[15] = SCM_WORD(scm__rc.d2149[76]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[20] = SCM_WORD(scm__rc.d2149[78]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[24] = SCM_WORD(scm__rc.d2149[4]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[26] = SCM_WORD(scm__rc.d2149[74]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[30] = SCM_WORD(scm__rc.d2149[76]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[35] = SCM_WORD(scm__rc.d2149[79]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[39] = SCM_WORD(scm__rc.d2149[4]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[41] = SCM_WORD(scm__rc.d2149[74]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[45] = SCM_WORD(scm__rc.d2149[76]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[0]))[53] = SCM_WORD(scm__rc.d2149[80]);
  scm__rc.d2149[87] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[86] = Scm_MakeIdentifier(scm__rc.d2149[87], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[88] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* use */
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),FALSE); /* G2151 */
  scm__rc.d2149[90] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),FALSE); /* G2152 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[92]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[93]), scm__rc.d2149[89]);
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* unused-args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[94]), scm__rc.d2149[91]);
  scm__rc.d2149[92] = Scm_MakeExtendedPair(SCM_FALSE, SCM_OBJ(&scm__rc.d2150[93]), SCM_OBJ(&scm__rc.d2150[95]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[96]), scm__rc.d2149[92]);
  scm__rc.d2149[93] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[1]))->debugInfo = scm__rc.d2149[93];
  scm__rc.d2149[94] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* source */
  scm__rc.d2149[95] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[42])),TRUE); /* lambda */
  scm__rc.d2149[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* define */
  scm__rc.d2149[97] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* begin. */
  scm__rc.d2149[98] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* with-module */
  scm__rc.d2149[99] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[97]), scm__rc.d2149[77]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[98]);
  scm__rc.d2149[100] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* quote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[100]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[101]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[102]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[105]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[107]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[113]), scm__rc.d2149[97]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[114]), scm__rc.d2149[96]);
  scm__rc.d2149[101] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* require. */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[116]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[120]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[121]), scm__rc.d2149[96]);
  scm__rc.d2149[102] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* import. */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[122]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[123]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[127]), scm__rc.d2149[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[128]), scm__rc.d2149[96]);
  scm__rc.d2149[103] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* quasiquote */
  scm__rc.d2149[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* unquote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[129]), scm__rc.d2149[97]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[130]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[131]), scm__rc.d2149[101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[132]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[133]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[134]), scm__rc.d2149[81]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[136]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[139]), scm__rc.d2149[102]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[140]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[104]);
  scm__rc.d2149[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),TRUE); /* unquote-splicing */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[142]), scm__rc.d2149[84]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[143]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[152]), scm__rc.d2149[103]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[158]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[159]), scm__rc.d2149[94]);
  scm__rc.d2149[107] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* %make-macro-transformer */
  scm__rc.d2149[106] = Scm_MakeIdentifier(scm__rc.d2149[107], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%make-macro-transformer */
  scm__rc.d2149[108] = Scm_MakeIdentifier(scm__rc.d2149[88], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#use */
  scm__rc.d2149[109] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* %toplevel */
  scm__rc.d2149[110] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[2]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[2]))->debugInfo = scm__rc.d2149[110];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[68]))[5] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[68]))[8] = SCM_WORD(scm__rc.d2149[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[68]))[12] = SCM_WORD(scm__rc.d2149[88]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[68]))[19] = SCM_WORD(scm__rc.d2149[106]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[68]))[22] = SCM_WORD(scm__rc.d2149[108]);
  scm__rc.d2149[112] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* list->string */
  scm__rc.d2149[111] = Scm_MakeIdentifier(scm__rc.d2149[112], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#list->string */
  scm__rc.d2149[114] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* equal? */
  scm__rc.d2149[113] = Scm_MakeIdentifier(scm__rc.d2149[114], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#equal? */
  scm__rc.d2149[116] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* error */
  scm__rc.d2149[115] = Scm_MakeIdentifier(scm__rc.d2149[116], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#error */
  scm__rc.d2149[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* path-comp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[161]), scm__rc.d2149[117]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[162]), scm__rc.d2149[81]);
  scm__rc.d2149[118] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* p */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[163]), scm__rc.d2149[118]);
  scm__rc.d2149[119] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[3]))->name = scm__rc.d2149[117];/* (module-name->path path-comp) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[3]))->debugInfo = scm__rc.d2149[119];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]))[5] = SCM_WORD(scm__rc.d2149[111]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]))[13] = SCM_WORD(scm__rc.d2149[113]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]))[22] = SCM_WORD(scm__rc.d2149[115]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]))[31] = SCM_WORD(scm__rc.d2149[113]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]))[40] = SCM_WORD(scm__rc.d2149[115]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[93]))[49] = SCM_WORD(scm__rc.d2149[113]);
  scm__rc.d2149[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* identifier->symbol */
  scm__rc.d2149[120] = Scm_MakeIdentifier(scm__rc.d2149[121], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#identifier->symbol */
  scm__rc.d2149[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* symbol->string */
  scm__rc.d2149[122] = Scm_MakeIdentifier(scm__rc.d2149[123], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#symbol->string */
  scm__rc.d2149[125] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* string-join */
  scm__rc.d2149[124] = Scm_MakeIdentifier(scm__rc.d2149[125], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#string-join */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[81]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[171]), scm__rc.d2149[2]);
  scm__rc.d2149[126] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[168]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[172]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[173]), scm__rc.d2149[126]);
  scm__rc.d2149[127] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[4]))->debugInfo = scm__rc.d2149[127];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[150]))[22] = SCM_WORD(scm__rc.d2149[124]);
  scm__rc.d2149[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* with-input-from-string */
  scm__rc.d2149[128] = Scm_MakeIdentifier(scm__rc.d2149[129], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#with-input-from-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[176]), scm__rc.d2149[2]);
  scm__rc.d2149[130] = Scm_MakeExtendedPair(scm__rc.d2149[81], SCM_OBJ(&scm__rc.d2150[59]), SCM_OBJ(&scm__rc.d2150[177]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[178]), scm__rc.d2149[130]);
  scm__rc.d2149[131] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[5]))->name = scm__rc.d2149[81];/* module-name->path */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[5]))->debugInfo = scm__rc.d2149[131];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[216]))[12] = SCM_WORD(scm__rc.d2149[120]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[216]))[14] = SCM_WORD(scm__rc.d2149[122]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[216]))[23] = SCM_WORD(scm__rc.d2149[115]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[216]))[28] = SCM_WORD(scm__rc.d2149[128]);
  scm__rc.d2149[132] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[6]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[6]))->debugInfo = scm__rc.d2149[132];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[246]))[3] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[246]))[6] = SCM_WORD(scm__rc.d2149[81]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[246]))[13] = SCM_WORD(scm__rc.d2149[80]);
  scm__rc.d2149[133] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])), 0);
  scm__rc.d2149[135] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* regexp-replace-all */
  scm__rc.d2149[134] = Scm_MakeIdentifier(scm__rc.d2149[135], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#regexp-replace-all */
  scm__rc.d2149[136] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* path->module-name */
  scm__rc.d2149[137] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),FALSE); /* G2159 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[179]), scm__rc.d2149[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[180]), scm__rc.d2149[136]);
  scm__rc.d2149[138] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),FALSE); /* G2158 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[181]), scm__rc.d2149[138]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[184]), scm__rc.d2149[2]);
  scm__rc.d2149[139] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[180]), SCM_OBJ(&scm__rc.d2150[181]), SCM_OBJ(&scm__rc.d2150[185]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[186]), scm__rc.d2149[139]);
  scm__rc.d2149[140] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[7]))->debugInfo = scm__rc.d2149[140];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[1] = SCM_WORD(scm__rc.d2149[133]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[261]))[6] = SCM_WORD(scm__rc.d2149[134]);
  scm__rc.d2149[142] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* string-split */
  scm__rc.d2149[141] = Scm_MakeIdentifier(scm__rc.d2149[142], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#string-split */
  scm__rc.d2149[144] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),TRUE); /* map */
  scm__rc.d2149[143] = Scm_MakeIdentifier(scm__rc.d2149[144], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#map */
  scm__rc.d2149[146] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* string->symbol */
  scm__rc.d2149[145] = Scm_MakeIdentifier(scm__rc.d2149[146], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#string->symbol */
  scm__rc.d2149[147] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* path */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[188]), scm__rc.d2149[147]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[191]), scm__rc.d2149[2]);
  scm__rc.d2149[148] = Scm_MakeExtendedPair(scm__rc.d2149[136], SCM_OBJ(&scm__rc.d2150[188]), SCM_OBJ(&scm__rc.d2150[192]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[193]), scm__rc.d2149[148]);
  scm__rc.d2149[149] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[8]))->name = scm__rc.d2149[136];/* path->module-name */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[8]))->debugInfo = scm__rc.d2149[149];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]))[12] = SCM_WORD(scm__rc.d2149[115]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]))[24] = SCM_WORD(scm__rc.d2149[141]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]))[26] = SCM_WORD(scm__rc.d2149[143]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]))[31] = SCM_WORD(scm__rc.d2149[124]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[269]))[33] = SCM_WORD(scm__rc.d2149[145]);
  scm__rc.d2149[150] = Scm_MakeIdentifier(scm__rc.d2149[136], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#path->module-name */
  scm__rc.d2149[151] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[9]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[9]))->debugInfo = scm__rc.d2149[151];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]))[5] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]))[8] = SCM_WORD(scm__rc.d2149[136]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[304]))[15] = SCM_WORD(scm__rc.d2149[150]);
  scm__rc.d2149[152] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* module-binds? */
  scm__rc.d2149[153] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* mod-or-name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[194]), scm__rc.d2149[153]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[197]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[198]), scm__rc.d2149[152]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[199]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[200]), scm__rc.d2149[3]);
  scm__rc.d2149[154] = Scm_MakeExtendedPair(scm__rc.d2149[152], SCM_OBJ(&scm__rc.d2150[194]), SCM_OBJ(&scm__rc.d2150[202]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[155]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[155]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[155]))[5] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[155]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[155]))[7] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module-binds?")), SCM_OBJ(&libmodmodule_bindsP__STUB), 0);
  libmodmodule_bindsP__STUB.common.info = scm__rc.d2149[154];
  libmodmodule_bindsP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[155]);
  scm__rc.d2149[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* module-exports? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[205]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[206]), scm__rc.d2149[163]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[207]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[208]), scm__rc.d2149[3]);
  scm__rc.d2149[164] = Scm_MakeExtendedPair(scm__rc.d2149[163], SCM_OBJ(&scm__rc.d2150[194]), SCM_OBJ(&scm__rc.d2150[210]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module-exports?")), SCM_OBJ(&libmodmodule_exportsP__STUB), 0);
  libmodmodule_exportsP__STUB.common.info = scm__rc.d2149[164];
  libmodmodule_exportsP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[155]);
  scm__rc.d2149[165] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* module-binding-ref */
  scm__rc.d2149[166] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* mod_or_name */
  scm__rc.d2149[167] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85]))); /* :optional */
  scm__rc.d2149[168] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* fallback */
  scm__rc.d2149[169] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),TRUE); /* stay-in-module */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[211]), scm__rc.d2149[169]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[212]), scm__rc.d2149[168]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[213]), scm__rc.d2149[167]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[214]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[215]), scm__rc.d2149[166]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[218]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[219]), scm__rc.d2149[165]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[220]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[221]), scm__rc.d2149[3]);
  scm__rc.d2149[170] = Scm_MakeExtendedPair(scm__rc.d2149[165], SCM_OBJ(&scm__rc.d2150[215]), SCM_OBJ(&scm__rc.d2150[223]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[5] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[6] = scm__rc.d2149[64];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("module-binding-ref")), SCM_OBJ(&libmodmodule_binding_ref__STUB), 0);
  libmodmodule_binding_ref__STUB.common.info = scm__rc.d2149[170];
  libmodmodule_binding_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[171]);
  scm__rc.d2149[180] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),TRUE); /* global-variable-bound? */
  scm__rc.d2149[181] = Scm_MakeIdentifier(scm__rc.d2149[152], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#module-binds? */
  scm__rc.d2149[182] = Scm_MakeIdentifier(scm__rc.d2149[180], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#global-variable-bound? */
  scm__rc.d2149[183] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[10]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[10]))->debugInfo = scm__rc.d2149[183];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[321]))[3] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[321]))[6] = SCM_WORD(scm__rc.d2149[180]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[321]))[10] = SCM_WORD(scm__rc.d2149[181]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[321]))[13] = SCM_WORD(scm__rc.d2149[182]);
  scm__rc.d2149[184] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* global-variable-ref */
  scm__rc.d2149[185] = Scm_MakeIdentifier(scm__rc.d2149[165], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#module-binding-ref */
  scm__rc.d2149[186] = Scm_MakeIdentifier(scm__rc.d2149[184], SCM_MODULE(scm__rc.d2149[75]), SCM_NIL); /* gauche#global-variable-ref */
  scm__rc.d2149[187] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[11]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[11]))->debugInfo = scm__rc.d2149[187];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[336]))[3] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[336]))[6] = SCM_WORD(scm__rc.d2149[184]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[336]))[10] = SCM_WORD(scm__rc.d2149[185]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[336]))[13] = SCM_WORD(scm__rc.d2149[186]);
  scm__rc.d2149[188] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* symbol-bound? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[224]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[226]), scm__rc.d2149[167]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[227]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[228]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[229]), scm__rc.d2149[152]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[232]), scm__rc.d2149[95]);
  scm__rc.d2149[189] = Scm_MakeIdentifier(scm__rc.d2149[116], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[2]);
  scm__rc.d2149[190] = Scm_MakeExtendedPair(scm__rc.d2149[188], SCM_OBJ(&scm__rc.d2150[227]), SCM_OBJ(&scm__rc.d2150[236]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[237]), scm__rc.d2149[190]);
  scm__rc.d2149[191] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[12]))->name = scm__rc.d2149[188];/* symbol-bound? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[12]))->debugInfo = scm__rc.d2149[191];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[351]))[28] = SCM_WORD(scm__rc.d2149[189]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[351]))[32] = SCM_WORD(scm__rc.d2149[181]);
  scm__rc.d2149[192] = Scm_MakeIdentifier(scm__rc.d2149[188], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#symbol-bound? */
  scm__rc.d2149[193] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[13]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[13]))->debugInfo = scm__rc.d2149[193];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[385]))[3] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[385]))[6] = SCM_WORD(scm__rc.d2149[188]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[385]))[13] = SCM_WORD(scm__rc.d2149[192]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[194] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* %export-all */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[240]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[241]), scm__rc.d2149[194]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[242]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[243]), scm__rc.d2149[3]);
  scm__rc.d2149[195] = Scm_MakeExtendedPair(scm__rc.d2149[194], SCM_OBJ(&scm__rc.d2150[133]), SCM_OBJ(&scm__rc.d2150[245]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[196]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[196]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[196]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[196]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%export-all")), SCM_OBJ(&libmod_25export_all__STUB), 0);
  libmod_25export_all__STUB.common.info = scm__rc.d2149[195];
  libmod_25export_all__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[196]);
  scm__rc.d2149[203] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* %extend-module */
  scm__rc.d2149[204] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),TRUE); /* supers */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[246]), scm__rc.d2149[204]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[247]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[250]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[251]), scm__rc.d2149[203]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[252]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[253]), scm__rc.d2149[3]);
  scm__rc.d2149[205] = Scm_MakeExtendedPair(scm__rc.d2149[203], SCM_OBJ(&scm__rc.d2150[247]), SCM_OBJ(&scm__rc.d2150[255]));
  scm__rc.d2149[206] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* <list> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[207]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[207]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[207]))[5] = scm__rc.d2149[206];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[207]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[207]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%extend-module")), SCM_OBJ(&libmod_25extend_module__STUB), 0);
  libmod_25extend_module__STUB.common.info = scm__rc.d2149[205];
  libmod_25extend_module__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[207]);
  scm__rc.d2149[215] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* fresh */
  scm__rc.d2149[216] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* const */
  scm__rc.d2149[217] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* inlinable */
  scm__rc.d2149[218] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* dummy */
  scm__rc.d2149[219] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* %insert-binding */
  scm__rc.d2149[220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* value */
  scm__rc.d2149[221] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* flags */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[256]), scm__rc.d2149[221]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[257]), scm__rc.d2149[167]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[258]), scm__rc.d2149[220]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[259]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[260]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[263]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[264]), scm__rc.d2149[219]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[265]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[266]), scm__rc.d2149[3]);
  scm__rc.d2149[222] = Scm_MakeExtendedPair(scm__rc.d2149[219], SCM_OBJ(&scm__rc.d2150[260]), SCM_OBJ(&scm__rc.d2150[268]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[5] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[6] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[7] = scm__rc.d2149[64];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[8] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[9] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%insert-binding")), SCM_OBJ(&libmod_25insert_binding__STUB), 0);
  libmod_25insert_binding__STUB.common.info = scm__rc.d2149[222];
  libmod_25insert_binding__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[223]);
  scm__rc.d2149[233] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* %insert-syntax-binding */
  scm__rc.d2149[235] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104])),TRUE); /* syntax? */
  scm__rc.d2149[236] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[99]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[234] = Scm_MakeIdentifier(scm__rc.d2149[235], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#syntax? */
  scm__rc.d2149[238] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* macro? */
  scm__rc.d2149[237] = Scm_MakeIdentifier(scm__rc.d2149[238], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#macro? */
  scm__rc.d2149[239] = Scm_MakeIdentifier(scm__rc.d2149[116], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#error */
  scm__rc.d2149[240] = Scm_MakeIdentifier(scm__rc.d2149[219], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#%insert-binding */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[269]), scm__rc.d2149[220]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[270]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[271]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[274]), scm__rc.d2149[2]);
  scm__rc.d2149[241] = Scm_MakeExtendedPair(scm__rc.d2149[233], SCM_OBJ(&scm__rc.d2150[271]), SCM_OBJ(&scm__rc.d2150[275]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[276]), scm__rc.d2149[241]);
  scm__rc.d2149[242] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[14]))->name = scm__rc.d2149[233];/* %insert-syntax-binding */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[14]))->debugInfo = scm__rc.d2149[242];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]))[4] = SCM_WORD(scm__rc.d2149[234]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]))[13] = SCM_WORD(scm__rc.d2149[237]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]))[24] = SCM_WORD(scm__rc.d2149[239]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[400]))[29] = SCM_WORD(scm__rc.d2149[240]);
  scm__rc.d2149[243] = Scm_MakeIdentifier(scm__rc.d2149[233], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#%insert-syntax-binding */
  scm__rc.d2149[244] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[15]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[15]))->debugInfo = scm__rc.d2149[244];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[431]))[3] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[431]))[6] = SCM_WORD(scm__rc.d2149[233]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[431]))[13] = SCM_WORD(scm__rc.d2149[243]);
  scm__rc.d2149[245] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107])),TRUE); /* %hide-binding */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[277]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[280]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[281]), scm__rc.d2149[245]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[282]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[283]), scm__rc.d2149[3]);
  scm__rc.d2149[246] = Scm_MakeExtendedPair(scm__rc.d2149[245], SCM_OBJ(&scm__rc.d2150[277]), SCM_OBJ(&scm__rc.d2150[285]));
  scm__rc.d2149[247] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[108])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[248]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[248]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[248]))[5] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[248]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[248]))[7] = scm__rc.d2149[247];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%hide-binding")), SCM_OBJ(&libmod_25hide_binding__STUB), 0);
  libmod_25hide_binding__STUB.common.info = scm__rc.d2149[246];
  libmod_25hide_binding__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[248]);
  scm__rc.d2149[256] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[109])),TRUE); /* %alias-binding */
  scm__rc.d2149[257] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[110])),TRUE); /* target */
  scm__rc.d2149[258] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[111])),TRUE); /* tname */
  scm__rc.d2149[259] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[112])),TRUE); /* origin */
  scm__rc.d2149[260] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[113])),TRUE); /* oname */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[286]), scm__rc.d2149[260]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[287]), scm__rc.d2149[259]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[288]), scm__rc.d2149[258]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[289]), scm__rc.d2149[257]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[292]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[293]), scm__rc.d2149[256]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[294]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[295]), scm__rc.d2149[3]);
  scm__rc.d2149[261] = Scm_MakeExtendedPair(scm__rc.d2149[256], SCM_OBJ(&scm__rc.d2150[289]), SCM_OBJ(&scm__rc.d2150[297]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[262]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[262]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[262]))[5] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[262]))[6] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[262]))[7] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[262]))[8] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[262]))[9] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%alias-binding")), SCM_OBJ(&libmod_25alias_binding__STUB), 0);
  libmod_25alias_binding__STUB.common.info = scm__rc.d2149[261];
  libmod_25alias_binding__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[262]);
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[114])),TRUE); /* %make-wrapper-module */
  scm__rc.d2149[273] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[115])),TRUE); /* prefix */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[298]), scm__rc.d2149[273]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[299]), scm__rc.d2149[259]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[302]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[303]), scm__rc.d2149[272]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[304]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[305]), scm__rc.d2149[3]);
  scm__rc.d2149[274] = Scm_MakeExtendedPair(scm__rc.d2149[272], SCM_OBJ(&scm__rc.d2150[299]), SCM_OBJ(&scm__rc.d2150[307]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%make-wrapper-module")), SCM_OBJ(&libmod_25make_wrapper_module__STUB), 0);
  libmod_25make_wrapper_module__STUB.common.info = scm__rc.d2149[274];
  libmod_25make_wrapper_module__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[275]);
  scm__rc.d2149[283] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[116])),TRUE); /* %export-symbols */
  scm__rc.d2149[284] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[117])),TRUE); /* names */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[308]), scm__rc.d2149[284]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[309]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[312]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[313]), scm__rc.d2149[283]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[314]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[315]), scm__rc.d2149[3]);
  scm__rc.d2149[285] = Scm_MakeExtendedPair(scm__rc.d2149[283], SCM_OBJ(&scm__rc.d2150[309]), SCM_OBJ(&scm__rc.d2150[317]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%export-symbols")), SCM_OBJ(&libmod_25export_symbols__STUB), 0);
  libmod_25export_symbols__STUB.common.info = scm__rc.d2149[285];
  libmod_25export_symbols__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[275]);
  scm__rc.d2149[286] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[118])),TRUE); /* %import-module */
  scm__rc.d2149[287] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[119])),TRUE); /* imported */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[318]), scm__rc.d2149[273]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[319]), scm__rc.d2149[167]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[320]), scm__rc.d2149[287]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[321]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[324]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[325]), scm__rc.d2149[286]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[326]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[327]), scm__rc.d2149[3]);
  scm__rc.d2149[288] = Scm_MakeExtendedPair(scm__rc.d2149[286], SCM_OBJ(&scm__rc.d2150[321]), SCM_OBJ(&scm__rc.d2150[329]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[6] = scm__rc.d2149[64];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[289]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%import-module")), SCM_OBJ(&libmod_25import_module__STUB), 0);
  libmod_25import_module__STUB.common.info = scm__rc.d2149[288];
  libmod_25import_module__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[289]);
  scm__rc.d2149[298] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[120])),TRUE); /* %import-modules */
  scm__rc.d2149[299] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[121])),TRUE); /* mods */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[330]), scm__rc.d2149[299]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[331]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[334]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[335]), scm__rc.d2149[298]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[336]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[337]), scm__rc.d2149[3]);
  scm__rc.d2149[300] = Scm_MakeExtendedPair(scm__rc.d2149[298], SCM_OBJ(&scm__rc.d2150[331]), SCM_OBJ(&scm__rc.d2150[339]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%import-modules")), SCM_OBJ(&libmod_25import_modules__STUB), 0);
  libmod_25import_modules__STUB.common.info = scm__rc.d2149[300];
  libmod_25import_modules__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[275]);
  scm__rc.d2149[301] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[122])),TRUE); /* %seal-module! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[342]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[343]), scm__rc.d2149[301]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[344]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[345]), scm__rc.d2149[3]);
  scm__rc.d2149[302] = Scm_MakeExtendedPair(scm__rc.d2149[301], SCM_OBJ(&scm__rc.d2150[10]), SCM_OBJ(&scm__rc.d2150[347]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[303]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[303]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[303]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[303]))[6] = scm__rc.d2149[247];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%seal-module!")), SCM_OBJ(&libmod_25seal_moduleX__STUB), 0);
  libmod_25seal_moduleX__STUB.common.info = scm__rc.d2149[302];
  libmod_25seal_moduleX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[303]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  Scm_InitStaticClassWithMeta(&Scm_ModuleClass, "<module>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_ModuleClass__SLOTS, 0);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[311] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[123])),TRUE); /* list? */
  scm__rc.d2149[310] = Scm_MakeIdentifier(scm__rc.d2149[311], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#list? */
  scm__rc.d2149[313] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[124])),TRUE); /* keyword? */
  scm__rc.d2149[312] = Scm_MakeIdentifier(scm__rc.d2149[313], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#keyword? */
  scm__rc.d2149[314] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[125])),TRUE); /* %expand-user-import */
  scm__rc.d2149[315] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[126])),FALSE); /* G2165 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[348]), scm__rc.d2149[315]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[349]), scm__rc.d2149[314]);
  scm__rc.d2149[316] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[127])),TRUE); /* import-spec */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[350]), scm__rc.d2149[316]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[353]), scm__rc.d2149[2]);
  scm__rc.d2149[317] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[349]), SCM_OBJ(&scm__rc.d2150[350]), SCM_OBJ(&scm__rc.d2150[354]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[355]), scm__rc.d2149[317]);
  scm__rc.d2149[318] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[16]))->debugInfo = scm__rc.d2149[318];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[446]))[7] = SCM_WORD(scm__rc.d2149[310]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[446]))[15] = SCM_WORD(scm__rc.d2149[312]);
  scm__rc.d2149[320] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[128])),TRUE); /* any */
  scm__rc.d2149[319] = Scm_MakeIdentifier(scm__rc.d2149[320], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#any */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[357]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[358]), scm__rc.d2149[98]);
  scm__rc.d2149[322] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[130])),TRUE); /* provided? */
  scm__rc.d2149[321] = Scm_MakeIdentifier(scm__rc.d2149[322], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#provided? */
  scm__rc.d2149[324] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[131])),TRUE); /* load */
  scm__rc.d2149[323] = Scm_MakeIdentifier(scm__rc.d2149[324], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#load */
  scm__rc.d2149[326] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[132])),TRUE); /* provide */
  scm__rc.d2149[325] = Scm_MakeIdentifier(scm__rc.d2149[326], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#provide */
  scm__rc.d2149[327] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[133])),TRUE); /* r7rs.user */
  scm__rc.d2149[328] = Scm_MakeIdentifier(scm__rc.d2149[37], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#find-module */
  scm__rc.d2149[330] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[134])),TRUE); /* eval */
  scm__rc.d2149[329] = Scm_MakeIdentifier(scm__rc.d2149[330], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#eval */
  scm__rc.d2149[331] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[135])),TRUE); /* select-module */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[359]), scm__rc.d2149[327]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[360]), scm__rc.d2149[331]);
  scm__rc.d2149[332] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[136])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[361]), scm__rc.d2149[332]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[364]), scm__rc.d2149[2]);
  scm__rc.d2149[333] = Scm_MakeExtendedPair(scm__rc.d2149[314], SCM_OBJ(&scm__rc.d2150[361]), SCM_OBJ(&scm__rc.d2150[365]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[366]), scm__rc.d2149[333]);
  scm__rc.d2149[334] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[17]))->name = scm__rc.d2149[314];/* %expand-user-import */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[17]))->debugInfo = scm__rc.d2149[334];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]))[5] = SCM_WORD(scm__rc.d2149[319]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]))[18] = SCM_WORD(scm__rc.d2149[321]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]))[28] = SCM_WORD(scm__rc.d2149[323]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]))[34] = SCM_WORD(scm__rc.d2149[325]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]))[38] = SCM_WORD(scm__rc.d2149[79]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]))[44] = SCM_WORD(scm__rc.d2149[327]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]))[46] = SCM_WORD(scm__rc.d2149[328]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[463]))[48] = SCM_WORD(scm__rc.d2149[329]);
  scm__rc.d2149[335] = Scm_MakeIdentifier(scm__rc.d2149[314], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#%expand-user-import */
  scm__rc.d2149[336] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[18]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[18]))->debugInfo = scm__rc.d2149[336];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[514]))[5] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[514]))[8] = SCM_WORD(scm__rc.d2149[314]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[514]))[15] = SCM_WORD(scm__rc.d2149[335]);
  scm__rc.d2149[338] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[137])),TRUE); /* user */
  scm__rc.d2149[337] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[338]), SCM_FIND_MODULE_CREATE)); /* module user */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[337]));
  scm__rc.d2149[339] = Scm_MakeIdentifier(scm__rc.d2149[314], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expand-user-import */
  scm__rc.d2149[340] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[138])),FALSE); /* G2169 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[367]), scm__rc.d2149[340]);
  scm__rc.d2149[341] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[139])),TRUE); /* import-specs */
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[369]), scm__rc.d2149[341]);
  scm__rc.d2149[342] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[19]))->debugInfo = scm__rc.d2149[342];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[531]))[2] = SCM_WORD(scm__rc.d2149[339]);
  scm__rc.d2149[343] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[140])),FALSE); /* G2167 */
  scm__rc.d2149[344] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[141])),FALSE); /* G2168 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[372]), scm__rc.d2149[344]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[373]), scm__rc.d2149[343]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[374]), scm__rc.d2149[91]);
  scm__rc.d2149[345] = Scm_MakeExtendedPair(SCM_FALSE, SCM_OBJ(&scm__rc.d2150[373]), SCM_OBJ(&scm__rc.d2150[375]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[376]), scm__rc.d2149[345]);
  scm__rc.d2149[346] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[20]))->debugInfo = scm__rc.d2149[346];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[377]), scm__rc.d2149[314]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[378]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[379]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[380]), scm__rc.d2149[341]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[383]), scm__rc.d2149[341]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[384]), scm__rc.d2149[95]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[385]), scm__rc.d2149[94]);
  scm__rc.d2149[348] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[338]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module user */
  scm__rc.d2149[347] = Scm_MakeIdentifier(scm__rc.d2149[79], SCM_MODULE(scm__rc.d2149[348]), SCM_NIL); /* user#import */
  scm__rc.d2149[349] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[21]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[21]))->debugInfo = scm__rc.d2149[349];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[539]))[5] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[539]))[8] = SCM_WORD(scm__rc.d2149[79]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[539]))[12] = SCM_WORD(scm__rc.d2149[79]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[539]))[19] = SCM_WORD(scm__rc.d2149[106]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[539]))[22] = SCM_WORD(scm__rc.d2149[347]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[350] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[142])),TRUE); /* find-binding */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[387]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[388]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[391]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[392]), scm__rc.d2149[350]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[393]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[394]), scm__rc.d2149[3]);
  scm__rc.d2149[351] = Scm_MakeExtendedPair(scm__rc.d2149[350], SCM_OBJ(&scm__rc.d2150[388]), SCM_OBJ(&scm__rc.d2150[396]));
  scm__rc.d2149[352] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[143])),TRUE); /* <gloc>? */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[353]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[353]))[4] = scm__rc.d2149[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[353]))[5] = scm__rc.d2149[40];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[353]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[353]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[353]))[8] = scm__rc.d2149[352];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("find-binding")), SCM_OBJ(&libmodfind_binding__STUB), 0);
  libmodfind_binding__STUB.common.info = scm__rc.d2149[351];
  libmodfind_binding__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[353]);
  scm__rc.d2149[362] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[144])),TRUE); /* find-const-binding */
  scm__rc.d2149[363] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[145])),TRUE); /* id */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[397]), scm__rc.d2149[363]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[400]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[401]), scm__rc.d2149[362]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[402]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[403]), scm__rc.d2149[3]);
  scm__rc.d2149[364] = Scm_MakeExtendedPair(scm__rc.d2149[362], SCM_OBJ(&scm__rc.d2150[397]), SCM_OBJ(&scm__rc.d2150[405]));
  scm__rc.d2149[365] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[146])),TRUE); /* <identifier> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[366]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[366]))[4] = scm__rc.d2149[365];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[366]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[366]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("find-const-binding")), SCM_OBJ(&libmodfind_const_binding__STUB), 0);
  libmodfind_const_binding__STUB.common.info = scm__rc.d2149[364];
  libmodfind_const_binding__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[366]);
  scm__rc.d2149[373] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[147])),TRUE); /* gloc-bound? */
  scm__rc.d2149[374] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[148])),TRUE); /* gloc */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[406]), scm__rc.d2149[374]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[409]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[410]), scm__rc.d2149[373]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[411]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[412]), scm__rc.d2149[3]);
  scm__rc.d2149[375] = Scm_MakeExtendedPair(scm__rc.d2149[373], SCM_OBJ(&scm__rc.d2150[406]), SCM_OBJ(&scm__rc.d2150[414]));
  scm__rc.d2149[376] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[149])),TRUE); /* <gloc> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[377]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[377]))[4] = scm__rc.d2149[376];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[377]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[377]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("gloc-bound?")), SCM_OBJ(&libmodgloc_boundP__STUB), 0);
  libmodgloc_boundP__STUB.common.info = scm__rc.d2149[375];
  libmodgloc_boundP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[377]);
  scm__rc.d2149[384] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[150])),TRUE); /* gloc-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[415]), scm__rc.d2149[168]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[416]), scm__rc.d2149[167]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[417]), scm__rc.d2149[374]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[420]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[421]), scm__rc.d2149[384]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[422]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[423]), scm__rc.d2149[3]);
  scm__rc.d2149[385] = Scm_MakeExtendedPair(scm__rc.d2149[384], SCM_OBJ(&scm__rc.d2150[417]), SCM_OBJ(&scm__rc.d2150[425]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[4] = scm__rc.d2149[376];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[5] = scm__rc.d2149[64];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[386]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("gloc-ref")), SCM_OBJ(&libmodgloc_ref__STUB), 0);
  libmodgloc_ref__STUB.common.info = scm__rc.d2149[385];
  libmodgloc_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[386]);
  scm__rc.d2149[394] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[151])),TRUE); /* gloc-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[426]), scm__rc.d2149[374]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[429]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[430]), scm__rc.d2149[394]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[431]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[432]), scm__rc.d2149[3]);
  scm__rc.d2149[395] = Scm_MakeExtendedPair(scm__rc.d2149[394], SCM_OBJ(&scm__rc.d2150[426]), SCM_OBJ(&scm__rc.d2150[434]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[396]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[396]))[4] = scm__rc.d2149[376];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[396]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[396]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[396]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("gloc-set!")), SCM_OBJ(&libmodgloc_setX__STUB), 0);
  libmodgloc_setX__STUB.common.info = scm__rc.d2149[395];
  libmodgloc_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[396]);
  scm__rc.d2149[404] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[152])),TRUE); /* gloc-const? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[437]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[438]), scm__rc.d2149[404]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[439]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[440]), scm__rc.d2149[3]);
  scm__rc.d2149[405] = Scm_MakeExtendedPair(scm__rc.d2149[404], SCM_OBJ(&scm__rc.d2150[406]), SCM_OBJ(&scm__rc.d2150[442]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("gloc-const?")), SCM_OBJ(&libmodgloc_constP__STUB), 0);
  libmodgloc_constP__STUB.common.info = scm__rc.d2149[405];
  libmodgloc_constP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[377]);
  scm__rc.d2149[406] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[153])),TRUE); /* gloc-inlinable? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[445]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[446]), scm__rc.d2149[406]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[447]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[448]), scm__rc.d2149[3]);
  scm__rc.d2149[407] = Scm_MakeExtendedPair(scm__rc.d2149[406], SCM_OBJ(&scm__rc.d2150[406]), SCM_OBJ(&scm__rc.d2150[450]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("gloc-inlinable?")), SCM_OBJ(&libmodgloc_inlinableP__STUB), 0);
  libmodgloc_inlinableP__STUB.common.info = scm__rc.d2149[407];
  libmodgloc_inlinableP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[377]);
  scm__rc.d2149[408] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[154])),TRUE); /* id->bound-gloc */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[453]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[454]), scm__rc.d2149[408]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[455]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[456]), scm__rc.d2149[3]);
  scm__rc.d2149[409] = Scm_MakeExtendedPair(scm__rc.d2149[408], SCM_OBJ(&scm__rc.d2150[397]), SCM_OBJ(&scm__rc.d2150[458]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[3] = scm__rc.d2149[99];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[4] = scm__rc.d2149[365];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[6] = scm__rc.d2149[352];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("id->bound-gloc")), SCM_OBJ(&libmodid_TObound_gloc__STUB), 0);
  libmodid_TObound_gloc__STUB.common.info = scm__rc.d2149[409];
  libmodid_TObound_gloc__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[410]);
  scm__rc.d2149[417] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[155])),TRUE); /* global-identifier=? */
  scm__rc.d2149[419] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[156])),TRUE); /* wrapped-identifier? */
  scm__rc.d2149[418] = Scm_MakeIdentifier(scm__rc.d2149[419], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#wrapped-identifier? */
  scm__rc.d2149[420] = Scm_MakeIdentifier(scm__rc.d2149[408], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#id->bound-gloc */
  scm__rc.d2149[421] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[157])),TRUE); /* id1 */
  scm__rc.d2149[422] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[158])),TRUE); /* id2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[459]), scm__rc.d2149[422]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[460]), scm__rc.d2149[421]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[463]), scm__rc.d2149[2]);
  scm__rc.d2149[423] = Scm_MakeExtendedPair(scm__rc.d2149[417], SCM_OBJ(&scm__rc.d2150[460]), SCM_OBJ(&scm__rc.d2150[464]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[465]), scm__rc.d2149[423]);
  scm__rc.d2149[424] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[22]))->name = scm__rc.d2149[417];/* global-identifier=? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[22]))->debugInfo = scm__rc.d2149[424];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[564]))[4] = SCM_WORD(scm__rc.d2149[418]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[564]))[10] = SCM_WORD(scm__rc.d2149[418]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[564]))[16] = SCM_WORD(scm__rc.d2149[420]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[564]))[24] = SCM_WORD(scm__rc.d2149[420]);
  scm__rc.d2149[425] = Scm_MakeIdentifier(scm__rc.d2149[417], SCM_MODULE(scm__rc.d2149[236]), SCM_NIL); /* gauche.internal#global-identifier=? */
  scm__rc.d2149[426] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2156[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[23]))->name = scm__rc.d2149[109];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2155[23]))->debugInfo = scm__rc.d2149[426];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[596]))[3] = SCM_WORD(scm__rc.d2149[86]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[596]))[6] = SCM_WORD(scm__rc.d2149[417]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2154[596]))[13] = SCM_WORD(scm__rc.d2149[425]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[538] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[159])),TRUE); /* s */
  scm__rc.d2149[539] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[160])),TRUE); /* reverse */
  scm__rc.d2149[540] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[161])),TRUE); /* rlet1 */
  scm__rc.d2149[541] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[162])),TRUE); /* read-char */
  scm__rc.d2149[542] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[163])),TRUE); /* c */
  scm__rc.d2149[543] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[164])),TRUE); /* ps */
  scm__rc.d2149[544] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[165])),TRUE); /* c2 */
  scm__rc.d2149[545] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[166])),TRUE); /* eqv? */
  scm__rc.d2149[546] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[167])),TRUE); /* eof-object? */
  scm__rc.d2149[547] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[168])),TRUE); /* identifier? */
  scm__rc.d2149[548] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[169])),TRUE); /* cut */
  scm__rc.d2149[549] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[170])),TRUE); /* <> */
  scm__rc.d2149[550] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[171])),FALSE); /* G2157 */
  scm__rc.d2149[551] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[172])),TRUE); /* string? */
  scm__rc.d2149[552] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[173])),TRUE); /* $ */
  scm__rc.d2149[553] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[174])),FALSE); /* G2161 */
  scm__rc.d2149[554] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[175])),FALSE); /* G2162 */
  scm__rc.d2149[555] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[176])),FALSE); /* rest2160 */
  scm__rc.d2149[556] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[177])),TRUE); /* define-in-module */
  scm__rc.d2149[557] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[178])),TRUE); /* pair? */
  scm__rc.d2149[558] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[179])),TRUE); /* symbol? */
  scm__rc.d2149[559] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[180])),TRUE); /* g1 */
  scm__rc.d2149[560] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[181])),TRUE); /* g2 */
  scm__rc.d2149[561] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[182])),TRUE); /* and-let* */
}
