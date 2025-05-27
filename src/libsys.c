/* Generated automatically from libsys.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/priv/mmapP.h"
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#if !(defined(GAUCHE_WINDOWS))
#include <grp.h>
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#include <pwd.h>
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#include <sys/wait.h>
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#include <utime.h>
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#include <sys/times.h>
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#include <sys/utsname.h>
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if HAVE_CRYPT_H
#include <crypt.h>
#endif /* HAVE_CRYPT_H */
#if HAVE_SYS_RESOURCE_H
#include <sys/resource.h>
#endif /* HAVE_SYS_RESOURCE_H */
#if HAVE_SYS_LOADAVG_H
#include <sys/loadavg.h>
#endif /* HAVE_SYS_LOADAVG_H */
#if HAVE_UNISTD_H
#include <unistd.h>
#endif /* HAVE_UNISTD_H */
#if HAVE_SYS_MMAN_H
#include <sys/mman.h>
#endif /* HAVE_SYS_MMAN_H */
#if defined(GAUCHE_WINDOWS)

#endif /* defined(GAUCHE_WINDOWS) */
static ScmObj libsyssys_readdir(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_readdir__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_readdir, NULL, NULL);

static ScmObj libsyssys_tmpdir(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_tmpdir__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_tmpdir, NULL, NULL);

static ScmObj libsyssys_basename(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_basename__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_basename, NULL, NULL);

static ScmObj libsyssys_dirname(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_dirname__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_dirname, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 199u, 144u, 24u, 32u, 0u, 249u, 0u, 152u, 10u, 3u, 129u, 9u,
30u, 60u, 112u, 192u, 144u, 33u, 30u, 60u, 96u, 192u, 144u, 25u, 30u,
60u, 80u, 192u, 144u, 17u, 30u, 60u, 64u, 192u, 152u, 23u, 145u, 227u,
195u, 12u, 9u, 0u, 145u, 227u, 193u, 12u, 16u, 44u, 12u, 26u, 32u,
18u, 72u, 241u, 224u, 6u, 4u, 198u, 72u, 143u, 28u, 248u, 96u, 72u,
4u, 143u, 28u, 216u, 96u, 76u, 94u, 200u, 241u, 204u, 6u, 8u, 0u, 62u,
64u, 38u, 2u, 128u, 195u, 188u, 2u, 73u, 30u, 57u, 112u, 192u, 153u,
78u, 145u, 227u, 150u, 12u, 9u, 0u, 145u, 227u, 149u, 12u, 9u, 1u,
145u, 227u, 148u, 12u, 9u, 1u, 17u, 227u, 147u, 12u, 9u, 147u, 137u,
30u, 57u, 32u, 192u, 144u, 9u, 30u, 56u, 240u, 192u, 32u, 114u, 19u,
38u, 66u, 71u, 142u, 56u, 48u, 36u, 16u, 71u, 142u, 44u, 48u, 64u, 1u,
242u, 1u, 48u, 16u, 119u, 128u, 76u, 8u, 72u, 241u, 197u, 6u, 4u,
129u, 8u, 241u, 196u, 134u, 4u, 208u, 148u, 130u, 60u, 113u, 1u, 129u,
32u, 18u, 60u, 112u, 225u, 129u, 32u, 34u, 60u, 112u, 193u, 129u, 52u,
36u, 24u, 143u, 28u, 40u, 96u, 72u, 4u, 143u, 28u, 16u, 96u, 16u, 73u,
9u, 161u, 27u, 36u, 143u, 28u, 8u, 96u, 72u, 32u, 143u, 26u, 240u,
96u, 128u, 3u, 228u, 2u, 67u, 188u, 2u, 96u, 56u, 16u, 145u, 227u,
93u, 12u, 9u, 2u, 17u, 227u, 92u, 12u, 9u, 1u, 145u, 227u, 91u, 12u,
9u, 161u, 176u, 164u, 120u, 214u, 131u, 2u, 64u, 36u, 120u, 214u, 67u,
2u, 104u, 106u, 105u, 30u, 53u, 128u, 192u, 144u, 9u, 30u, 53u, 80u,
192u, 32u, 162u, 19u, 67u, 80u, 9u, 30u, 53u, 64u, 192u, 144u, 65u,
30u, 53u, 48u, 193u, 5u, 136u, 48u, 52u, 64u, 36u, 132u, 209u, 8u,
112u, 154u, 24u, 128u, 19u, 63u, 240u, 210u, 30u, 130u, 98u, 246u,
19u, 2u, 34u, 73u, 30u, 53u, 16u, 192u, 154u, 35u, 40u, 71u, 141u,
64u, 48u, 38u, 136u, 224u, 145u, 227u, 78u, 12u, 9u, 162u, 50u, 132u,
120u, 210u, 195u, 3u, 60u, 27u, 0u, 146u, 60u, 105u, 65u, 129u, 32u,
18u, 60u, 104u, 193u, 129u, 172u, 53u, 64u, 36u, 145u, 227u, 69u, 12u,
9u, 162u, 179u, 36u, 120u, 209u, 3u, 2u, 65u, 196u, 120u, 208u, 67u,
4u, 30u, 33u, 8u, 58u, 17u, 48u, 145u, 35u, 198u, 56u, 24u, 19u, 69u,
194u, 136u, 241u, 140u, 134u, 4u, 131u, 136u, 241u, 139u, 134u, 4u,
209u, 112u, 162u, 60u, 98u, 161u, 129u, 150u, 19u, 9u, 162u, 219u,
176u, 113u, 35u, 198u, 40u, 24u, 18u, 19u, 35u, 198u, 32u, 24u, 28u,
67u, 84u, 40u, 67u, 152u, 104u, 133u, 12u, 42u, 91u, 137u, 30u, 48u,
224u, 192u, 154u, 52u, 154u, 71u, 140u, 52u, 48u, 36u, 42u, 71u, 140u,
44u, 48u, 38u, 141u, 44u, 17u, 227u, 9u, 12u, 9u, 163u, 66u, 164u,
120u, 192u, 3u, 3u, 136u, 106u, 133u, 8u, 106u, 133u, 75u, 241u, 35u,
197u, 184u, 24u, 19u, 71u, 66u, 8u, 241u, 109u, 6u, 4u, 209u, 205u,
2u, 60u, 90u, 193u, 130u, 22u, 133u, 195u, 68u, 40u, 73u, 30u, 45u,
80u, 192u, 154u, 61u, 42u, 71u, 139u, 68u, 48u, 38u, 143u, 47u, 17u,
226u, 205u, 12u, 16u, 196u, 41u, 192u, 73u, 30u, 44u, 176u, 192u,
144u, 169u, 30u, 44u, 144u, 192u, 154u, 64u, 6u, 71u, 139u, 24u, 48u,
36u, 38u, 71u, 138u, 124u, 48u, 67u, 48u, 160u, 97u, 16u, 209u, 36u,
143u, 20u, 224u, 96u, 72u, 84u, 143u, 20u, 208u, 96u, 77u, 33u, 193u,
35u, 197u, 38u, 24u, 33u, 144u, 209u, 10u, 152u, 108u, 145u, 226u,
143u, 12u, 9u, 164u, 105u, 228u, 120u, 163u, 67u, 2u, 105u, 26u, 17u,
30u, 40u, 160u, 192u, 226u, 26u, 161u, 66u, 28u, 195u, 68u, 40u, 97u,
82u, 220u, 72u, 241u, 68u, 6u, 4u, 210u, 80u, 162u, 60u, 80u, 225u,
129u, 33u, 82u, 60u, 80u, 161u, 129u, 52u, 148u, 84u, 143u, 20u, 24u,
96u, 77u, 36u, 210u, 35u, 197u, 2u, 24u, 26u, 225u, 82u, 71u, 138u,
0u, 48u, 36u, 42u, 71u, 137u, 120u, 48u, 8u, 100u, 52u, 66u, 134u,
27u, 33u, 148u, 59u, 4u, 210u, 120u, 32u, 154u, 70u, 132u, 33u, 200u,
84u, 144u, 154u, 73u, 142u, 19u, 71u, 49u, 73u, 35u, 196u, 184u, 24u,
19u, 74u, 19u, 8u, 241u, 44u, 6u, 4u, 210u, 133u, 146u, 60u, 74u,
193u, 129u, 52u, 161u, 48u, 143u, 18u, 152u, 96u, 113u, 13u, 80u,
161u, 133u, 95u, 137u, 30u, 37u, 0u, 192u, 144u, 169u, 30u, 36u, 224u,
192u, 154u, 87u, 54u, 71u, 137u, 48u, 48u, 8u, 100u, 52u, 66u, 134u,
29u, 33u, 52u, 174u, 64u, 145u, 226u, 74u, 12u, 9u, 165u, 162u, 132u,
120u, 145u, 131u, 2u, 105u, 106u, 9u, 30u, 36u, 64u, 192u, 154u, 90u,
40u, 71u, 137u, 4u, 48u, 65u, 226u, 30u, 133u, 76u, 62u, 72u, 241u,
32u, 6u, 4u, 135u, 200u, 241u, 15u, 6u, 4u, 210u, 245u, 226u, 60u,
67u, 161u, 129u, 33u, 82u, 60u, 67u, 129u, 129u, 144u, 8u, 84u, 50u,
196u, 1u, 206u, 26u, 133u, 76u, 42u, 73u, 9u, 165u, 234u, 36u, 143u,
16u, 216u, 96u, 72u, 84u, 143u, 16u, 192u, 96u, 77u, 49u, 142u, 35u,
196u, 46u, 24u, 18u, 21u, 35u, 196u, 38u, 24u, 19u, 76u, 86u, 72u,
241u, 9u, 6u, 4u, 136u, 8u, 241u, 8u, 6u, 6u, 184u, 80u, 145u, 226u,
15u, 12u, 9u, 10u, 17u, 226u, 9u, 12u, 16u, 132u, 29u, 16u, 146u, 60u,
64u, 193u, 129u, 32u, 226u, 60u, 64u, 129u, 129u, 52u, 213u, 44u,
143u, 16u, 16u, 96u, 101u, 136u, 131u, 35u, 136u, 16u, 160u, 77u, 53u,
75u, 34u, 21u, 12u, 42u, 72u, 136u, 27u, 137u, 13u, 128u, 38u, 154u,
66u, 6u, 216u, 84u, 38u, 152u, 172u, 132u, 210u, 245u, 18u, 66u, 105u,
104u, 136u, 77u, 40u, 73u, 13u, 33u, 52u, 104u, 40u, 146u, 19u, 70u,
55u, 137u, 30u, 32u, 16u, 192u, 145u, 17u, 30u, 32u, 0u, 193u, 17u,
136u, 144u, 68u, 177u, 49u, 36u, 143u, 14u, 240u, 96u, 72u, 56u, 143u,
14u, 208u, 96u, 137u, 196u, 80u, 97u, 248u, 56u, 145u, 225u, 217u,
12u, 9u, 7u, 17u, 225u, 216u, 12u, 9u, 15u, 145u, 225u, 213u, 12u, 9u,
167u, 113u, 164u, 120u, 116u, 195u, 2u, 105u, 220u, 105u, 30u, 29u,
16u, 192u, 154u, 119u, 0u, 71u, 135u, 56u, 48u, 36u, 28u, 71u, 135u,
40u, 48u, 66u, 209u, 76u, 28u, 72u, 240u, 228u, 134u, 4u, 131u, 136u,
240u, 226u, 134u, 4u, 211u, 233u, 18u, 60u, 56u, 33u, 130u, 22u, 138u,
160u, 226u, 71u, 135u, 0u, 48u, 36u, 28u, 71u, 134u, 112u, 48u, 38u,
159u, 239u, 17u, 225u, 154u, 12u, 12u, 176u, 152u, 77u, 63u, 222u, 9u,
167u, 210u, 36u, 143u, 12u, 200u, 96u, 72u, 76u, 143u, 12u, 184u, 96u,
101u, 14u, 17u, 88u, 121u, 17u, 100u, 28u, 73u, 9u, 167u, 112u, 16u,
113u, 35u, 195u, 44u, 24u, 18u, 43u, 35u, 195u, 42u, 24u, 19u, 78u,
161u, 8u, 240u, 201u, 134u, 4u, 137u, 136u, 240u, 198u, 134u, 8u,
158u, 45u, 17u, 112u, 97u, 139u, 201u, 36u, 120u, 99u, 3u, 2u, 106u,
40u, 89u, 30u, 24u, 176u, 192u, 145u, 113u, 30u, 24u, 112u, 192u,
154u, 138u, 22u, 71u, 134u, 24u, 48u, 36u, 90u, 71u, 134u, 16u, 48u,
38u, 162u, 106u, 17u, 225u, 128u, 12u, 12u, 241u, 132u, 76u, 72u,
240u, 175u, 134u, 4u, 137u, 136u, 240u, 173u, 134u, 4u, 212u, 124u,
50u, 60u, 42u, 225u, 130u, 49u, 140u, 131u, 12u, 102u, 73u, 30u, 21u,
64u, 192u, 145u, 145u, 30u, 21u, 32u, 192u, 154u, 146u, 28u, 71u,
133u, 64u, 48u, 50u, 198u, 65u, 53u, 36u, 56u, 38u, 163u, 225u, 146u,
60u, 41u, 225u, 129u, 35u, 34u, 60u, 41u, 193u, 129u, 140u, 70u, 68u,
38u, 165u, 68u, 146u, 60u, 41u, 129u, 130u, 52u, 17u, 119u, 1u, 36u,
143u, 10u, 88u, 96u, 77u, 76u, 139u, 35u, 194u, 148u, 24u, 18u, 46u,
35u, 194u, 142u, 24u, 19u, 83u, 34u, 200u, 240u, 162u, 134u, 4u, 212u,
197u, 226u, 60u, 40u, 33u, 129u, 158u, 53u, 131u, 137u, 30u, 20u, 0u,
192u, 145u, 49u, 30u, 17u, 192u, 192u, 154u, 157u, 140u, 71u, 132u,
104u, 48u, 50u, 194u, 97u, 53u, 59u, 24u, 70u, 193u, 53u, 49u, 120u,
146u, 60u, 35u, 33u, 129u, 33u, 50u, 60u, 34u, 129u, 129u, 53u, 31u,
12u, 143u, 8u, 152u, 96u, 72u, 152u, 143u, 8u, 120u, 96u, 77u, 71u,
195u, 35u, 194u, 22u, 24u, 19u, 82u, 67u, 136u, 240u, 132u, 6u, 4u,
140u, 136u, 240u, 131u, 6u, 4u, 212u, 144u, 226u, 60u, 32u, 129u,
129u, 53u, 42u, 36u, 143u, 8u, 24u, 96u, 72u, 200u, 143u, 8u, 16u,
96u, 77u, 75u, 198u, 35u, 194u, 0u, 24u, 35u, 113u, 28u, 18u, 71u,
126u, 12u, 9u, 170u, 170u, 228u, 119u, 192u, 192u, 154u, 170u, 174u,
71u, 122u, 12u, 9u, 170u, 169u, 68u, 119u, 0u, 193u, 28u, 199u, 68u,
142u, 216u, 24u, 19u, 85u, 183u, 200u, 236u, 193u, 130u, 57u, 142u,
201u, 29u, 136u, 48u, 38u, 171u, 227u, 17u, 216u, 3u, 3u, 44u, 38u,
35u, 194u, 35u, 96u, 154u, 170u, 148u, 73u, 29u, 124u, 48u, 36u, 38u,
71u, 93u, 12u, 12u, 162u, 25u, 143u, 97u, 162u, 19u, 86u, 35u, 66u,
106u, 128u, 137u, 35u, 173u, 134u, 4u, 213u, 156u, 226u, 58u, 192u,
96u, 72u, 244u, 142u, 172u, 24u, 19u, 86u, 115u, 136u, 234u, 129u,
130u, 46u, 224u, 36u, 142u, 166u, 24u, 18u, 46u, 35u, 168u, 6u, 4u,
213u, 189u, 98u, 58u, 112u, 96u, 101u, 139u, 132u, 124u, 4u, 122u,
19u, 86u, 245u, 136u, 139u, 66u, 106u, 206u, 25u, 33u, 53u, 19u, 80u,
193u, 196u, 142u, 154u, 24u, 18u, 46u, 35u, 166u, 6u, 6u, 64u, 34u,
224u, 225u, 31u, 136u, 90u, 64u, 131u, 137u, 36u, 38u, 174u, 132u,
18u, 58u, 80u, 96u, 77u, 95u, 68u, 35u, 164u, 134u, 4u, 137u, 136u,
232u, 161u, 129u, 53u, 125u, 16u, 142u, 132u, 24u, 18u, 63u, 35u,
156u, 134u, 6u, 88u, 78u, 18u, 144u, 73u, 28u, 224u, 48u, 36u, 38u,
71u, 54u, 12u, 18u, 16u, 97u, 144u, 200u, 145u, 9u, 35u, 154u, 6u, 4u,
214u, 41u, 130u, 57u, 144u, 96u, 77u, 98u, 152u, 35u, 150u, 6u, 4u,
129u, 8u, 228u, 225u, 129u, 148u, 72u, 176u, 33u, 110u, 129u, 9u, 28u,
148u, 48u, 38u, 178u, 32u, 145u, 201u, 3u, 2u, 64u, 132u, 114u, 32u,
192u, 154u, 200u, 130u, 71u, 32u, 12u, 9u, 1u, 145u, 198u, 195u, 3u,
40u, 145u, 96u, 50u, 221u, 1u, 146u, 56u, 200u, 96u, 77u, 102u, 80u,
35u, 140u, 6u, 4u, 128u, 200u, 226u, 193u, 129u, 53u, 153u, 64u, 142u,
40u, 24u, 18u, 2u, 35u, 135u, 134u, 6u, 81u, 34u, 192u, 69u, 186u, 2u,
36u, 112u, 208u, 192u, 154u, 208u, 190u, 71u, 12u, 12u, 9u, 1u, 17u,
194u, 131u, 2u, 107u, 66u, 249u, 28u, 32u, 48u, 53u, 192u, 36u, 142u,
14u, 24u, 18u, 1u, 35u, 128u, 6u, 4u, 145u, 136u, 98u, 12u, 12u, 98u,
38u, 145u, 196u, 86u, 220u, 68u, 126u, 220u, 68u, 68u, 220u, 72u,
102u, 132u, 194u, 107u, 18u, 153u, 12u, 208u, 248u, 77u, 97u, 132u,
33u, 152u, 68u, 176u, 113u, 18u, 68u, 92u, 19u, 87u, 195u, 194u, 106u,
232u, 236u, 28u, 72u, 102u, 17u, 225u, 14u, 193u, 53u, 95u, 24u, 38u,
171u, 111u, 195u, 68u, 134u, 97u, 27u, 38u, 165u, 232u, 166u, 165u,
239u, 6u, 97u, 22u, 65u, 196u, 38u, 160u, 165u, 144u, 204u, 34u, 72u,
56u, 132u, 212u, 40u, 130u, 25u, 132u, 57u, 10u, 16u, 236u, 19u, 72u,
112u, 67u, 132u, 38u, 19u, 72u, 0u, 194u, 104u, 242u, 241u, 36u, 51u,
8u, 142u, 14u, 33u, 52u, 218u, 96u, 137u, 38u, 35u, 146u, 98u, 73u,
38u, 37u, 137u, 137u, 36u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 6u, 9u, 42u, 75u, 18u, 100u, 77u, 35u, 136u, 173u,
184u, 136u, 253u, 184u, 136u, 137u, 184u, 144u, 205u, 9u, 137u, 8u,
48u, 200u, 100u, 72u, 132u, 144u, 205u, 15u, 134u, 88u, 78u, 18u,
144u, 73u, 12u, 194u, 37u, 131u, 136u, 146u, 34u, 224u, 225u, 31u,
136u, 90u, 64u, 131u, 137u, 17u, 240u, 17u, 232u, 139u, 184u, 9u, 34u,
45u, 12u, 162u, 25u, 143u, 97u, 162u, 25u, 97u, 49u, 30u, 17u, 27u,
8u, 220u, 71u, 4u, 146u, 25u, 97u, 48u, 207u, 26u, 193u, 196u, 70u,
194u, 52u, 17u, 119u, 1u, 36u, 146u, 72u, 137u, 226u, 209u, 23u, 6u,
24u, 188u, 146u, 96u, 226u, 67u, 48u, 143u, 8u, 118u, 17u, 204u, 118u,
68u, 115u, 29u, 24u, 104u, 144u, 204u, 35u, 104u, 200u, 134u, 88u,
200u, 70u, 49u, 144u, 97u, 140u, 201u, 12u, 241u, 132u, 76u, 73u, 12u,
194u, 44u, 131u, 136u, 101u, 132u, 196u, 45u, 21u, 65u, 196u, 66u,
209u, 76u, 28u, 73u, 12u, 194u, 36u, 131u, 136u, 101u, 14u, 17u, 88u,
121u, 17u, 100u, 28u, 73u, 17u, 56u, 138u, 12u, 63u, 7u, 24u, 56u,
144u, 204u, 33u, 200u, 80u, 135u, 97u, 12u, 194u, 129u, 132u, 67u,
68u, 144u, 225u, 9u, 136u, 98u, 20u, 224u, 36u, 66u, 208u, 184u, 104u,
133u, 9u, 36u, 134u, 97u, 17u, 193u, 196u, 50u, 196u, 65u, 145u, 196u,
8u, 80u, 66u, 16u, 116u, 66u, 72u, 133u, 67u, 10u, 146u, 34u, 6u,
226u, 67u, 96u, 13u, 112u, 161u, 13u, 176u, 168u, 101u, 136u, 3u,
156u, 53u, 10u, 152u, 84u, 136u, 60u, 67u, 208u, 169u, 135u, 201u,
32u, 67u, 33u, 162u, 20u, 48u, 233u, 14u, 33u, 170u, 20u, 48u, 171u,
241u, 32u, 67u, 33u, 162u, 20u, 48u, 217u, 12u, 161u, 216u, 53u, 194u,
164u, 67u, 33u, 162u, 21u, 48u, 217u, 16u, 228u, 42u, 72u, 113u, 13u,
80u, 161u, 14u, 97u, 162u, 20u, 48u, 169u, 110u, 33u, 196u, 53u, 66u,
132u, 53u, 66u, 165u, 248u, 146u, 26u, 67u, 136u, 106u, 133u, 8u,
115u, 13u, 16u, 161u, 133u, 75u, 113u, 36u, 134u, 88u, 76u, 65u, 226u,
16u, 131u, 161u, 19u, 9u, 24u, 56u, 146u, 36u, 152u, 142u, 73u, 137u,
36u, 152u, 150u, 38u, 36u, 142u, 18u, 24u, 24u, 194u, 96u, 122u, 152u,
78u, 17u, 193u, 195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u,
0u, 48u, 38u, 3u, 132u, 128u,};
static ScmObj libsyssys_errno_TOsymbol(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_errno_TOsymbol__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_errno_TOsymbol, NULL, NULL);

static ScmObj libsyssys_symbol_TOerrno(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_symbol_TOerrno__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_symbol_TOerrno, NULL, NULL);

static ScmObj libsyssys_getgrgid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getgrgid__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getgrgid, NULL, NULL);

static ScmObj libsyssys_getgrnam(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getgrnam__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getgrnam, NULL, NULL);

static ScmObj libsyssys_gid_TOgroup_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_gid_TOgroup_name__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_gid_TOgroup_name, NULL, NULL);

static ScmObj libsyssys_group_name_TOgid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_group_name_TOgid__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_group_name_TOgid, NULL, NULL);

static ScmObj libsyssys_setlocale(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_setlocale__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_setlocale, NULL, NULL);

static ScmObj libsyssys_localeconv(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_localeconv__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_localeconv, NULL, NULL);

static ScmObj libsyssys_getpwuid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getpwuid__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getpwuid, NULL, NULL);

static ScmObj libsyssys_getpwnam(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getpwnam__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getpwnam, NULL, NULL);

static ScmObj libsyssys_uid_TOuser_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_uid_TOuser_name__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_uid_TOuser_name, NULL, NULL);

static ScmObj libsyssys_user_name_TOuid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_user_name_TOuid__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_user_name_TOuid, NULL, NULL);

static ScmObj libsyssys_sigset_addX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_sigset_addX__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_sigset_addX, NULL, NULL);

static ScmObj libsyssys_sigset_deleteX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_sigset_deleteX__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_sigset_deleteX, NULL, NULL);

static ScmObj libsyssys_sigset_fillX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_sigset_fillX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_sigset_fillX, NULL, NULL);

static ScmObj libsyssys_sigset_emptyX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_sigset_emptyX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_sigset_emptyX, NULL, NULL);

static ScmObj libsyssys_signal_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_signal_name__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_signal_name, NULL, NULL);

static ScmObj libsyssys_kill(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_kill__STUB, 2, 0,SCM_FALSE,libsyssys_kill, NULL, NULL);

static ScmObj libsysset_signal_handlerX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsysset_signal_handlerX__STUB, 2, 2,SCM_FALSE,libsysset_signal_handlerX, NULL, NULL);

static ScmObj libsysget_signal_handler(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsysget_signal_handler__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsysget_signal_handler, NULL, NULL);

static ScmObj libsysget_signal_handler_mask(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsysget_signal_handler_mask__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsysget_signal_handler_mask, NULL, NULL);

static ScmObj libsysget_signal_handlers(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsysget_signal_handlers__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsysget_signal_handlers, NULL, NULL);

static ScmObj libsysset_signal_pending_limit(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsysset_signal_pending_limit__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsysset_signal_pending_limit, NULL, NULL);

static ScmObj libsysget_signal_pending_limit(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsysget_signal_pending_limit__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsysget_signal_pending_limit, NULL, NULL);

static ScmObj libsyssys_sigmask(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_sigmask__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_sigmask, NULL, NULL);

static ScmObj libsyssys_sigsuspend(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_sigsuspend__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_sigsuspend, NULL, NULL);

static ScmObj libsyssys_sigwait(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_sigwait__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_sigwait, NULL, NULL);

static unsigned char uvector__00003[] = {
 0u, 3u, 137u, 6u, 7u, 89u, 52u, 73u, 210u, 121u, 148u, 9u, 28u, 68u,
48u, 36u, 160u, 71u, 14u, 12u, 9u, 129u, 137u, 28u, 48u, 48u, 36u,
158u, 71u, 10u, 12u, 9u, 129u, 137u, 28u, 32u, 48u, 36u, 154u, 71u,
5u, 12u, 18u, 116u, 158u, 72u, 224u, 97u, 129u, 36u, 242u, 56u, 8u,
96u, 107u, 148u, 9u, 28u, 0u, 48u, 36u, 160u, 67u, 16u, 96u, 99u,
148u, 3u, 40u, 76u, 106u, 2u, 98u, 150u, 19u, 1u, 194u, 73u, 0u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 40u, 164u, 160u, 25u, 67u, 92u, 160u, 68u,
157u, 39u, 144u, 235u, 38u, 137u, 58u, 79u, 50u, 129u, 36u, 142u, 18u,
24u, 24u, 229u, 4u, 192u, 252u, 142u, 14u, 24u, 19u, 1u, 194u, 56u,
16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static ScmObj libsyssys_remove(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_remove__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_remove, NULL, NULL);

static ScmObj libsyssys_rename(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_rename__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_rename, NULL, NULL);

static ScmObj libsyssys_tmpnam(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_tmpnam__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_tmpnam, NULL, NULL);

static ScmObj libsyssys_mkstemp(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_mkstemp__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_mkstemp, NULL, NULL);

static ScmObj libsyssys_mkdtemp(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_mkdtemp__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_mkdtemp, NULL, NULL);

static ScmObj libsyssys_ctermid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_ctermid__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_ctermid, NULL, NULL);

static ScmObj libsyssys_exit(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_exit__STUB, 1, 0,SCM_FALSE,libsyssys_exit, NULL, NULL);

static ScmObj libsyssys_getenv(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getenv__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getenv, NULL, NULL);

static ScmObj libsyssys_abort(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_abort__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_abort, NULL, NULL);

static ScmObj libsyssys_system(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_system__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_system, NULL, NULL);

static ScmObj libsyssys_random(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_random__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_random, NULL, NULL);

static ScmObj libsyssys_srandom(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_srandom__STUB, 1, 0,SCM_FALSE,libsyssys_srandom, NULL, NULL);

static ScmObj libsyssys_environ(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_environ__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_environ, NULL, NULL);

static ScmObj libsyssys_setenv(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_setenv__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_setenv, NULL, NULL);

static ScmObj libsyssys_unsetenv(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_unsetenv__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_unsetenv, NULL, NULL);

static ScmObj libsyssys_clearenv(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_clearenv__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_clearenv, NULL, NULL);

static unsigned char uvector__00005[] = {
 0u, 3u, 138u, 6u, 7u, 57u, 74u, 26u, 36u, 113u, 16u, 192u, 146u,
145u, 28u, 60u, 48u, 57u, 202u, 114u, 161u, 35u, 135u, 6u, 4u, 149u,
8u, 225u, 161u, 129u, 37u, 50u, 56u, 88u, 96u, 101u, 148u, 194u, 97u,
2u, 19u, 1u, 194u, 71u, 10u, 12u, 9u, 41u, 145u, 194u, 67u, 4u, 170u,
37u, 57u, 80u, 137u, 90u, 82u, 149u, 195u, 12u, 176u, 72u, 76u, 68u,
9u, 28u, 28u, 48u, 38u, 55u, 132u, 112u, 32u, 192u, 146u, 145u, 28u,
0u, 48u, 38u, 55u, 132u, 49u, 6u, 6u, 49u, 41u, 16u, 152u, 202u, 146u,
64u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 145u, 6u, 9u, 100u, 57u, 9u, 72u, 137u, 84u, 74u, 114u, 161u,
18u, 180u, 165u, 43u, 134u, 25u, 96u, 144u, 203u, 41u, 135u, 57u, 78u,
84u, 33u, 206u, 82u, 134u, 137u, 38u, 90u, 36u, 114u, 16u, 192u, 146u,
209u, 28u, 128u, 48u, 36u, 182u, 71u, 30u, 12u, 12u, 242u, 224u, 97u,
12u, 98u, 93u, 18u, 208u, 151u, 137u, 33u, 48u, 28u, 36u, 145u, 198u,
3u, 2u, 99u, 6u, 71u, 20u, 12u, 13u, 114u, 249u, 35u, 137u, 134u, 4u,
151u, 200u, 226u, 65u, 129u, 144u, 9u, 104u, 50u, 134u, 185u, 128u,
132u, 199u, 32u, 52u, 76u, 4u, 145u, 47u, 134u, 80u, 215u, 48u, 16u,
194u, 164u, 53u, 76u, 4u, 146u, 27u, 194u, 100u, 134u, 19u, 24u, 50u,
25u, 21u, 49u, 219u, 36u, 113u, 16u, 192u, 153u, 168u, 145u, 195u, 3u,
2u, 102u, 78u, 71u, 11u, 12u, 9u, 48u, 145u, 194u, 67u, 2u, 101u,
226u, 71u, 5u, 12u, 9u, 142u, 65u, 28u, 12u, 48u, 38u, 57u, 4u, 112u,
16u, 192u, 153u, 98u, 17u, 192u, 3u, 2u, 76u, 36u, 49u, 6u, 4u, 198u,
140u, 144u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 49u, 75u, 162u, 90u, 18u, 241u, 36u, 75u,
33u, 200u, 74u, 68u, 74u, 162u, 83u, 149u, 8u, 149u, 165u, 41u, 92u,
48u, 203u, 4u, 134u, 89u, 76u, 57u, 202u, 114u, 161u, 14u, 114u, 148u,
52u, 73u, 50u, 209u, 36u, 112u, 176u, 192u, 198u, 19u, 3u, 20u, 193u,
120u, 142u, 18u, 24u, 19u, 1u, 194u, 56u, 32u, 96u, 76u, 7u, 8u, 224u,
65u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 154u, 6u, 9u, 142u, 100u, 13u, 19u, 41u, 126u, 36u, 115u, 0u,
192u, 152u, 25u, 145u, 203u, 195u, 2u, 76u, 132u, 114u, 192u, 193u,
49u, 204u, 211u, 59u, 241u, 35u, 148u, 134u, 4u, 153u, 200u, 229u, 1u,
129u, 38u, 98u, 57u, 48u, 96u, 103u, 154u, 38u, 66u, 71u, 37u, 12u,
9u, 50u, 17u, 200u, 67u, 2u, 98u, 192u, 71u, 29u, 12u, 13u, 243u, 48u,
76u, 88u, 9u, 28u, 112u, 48u, 36u, 204u, 71u, 27u, 12u, 18u, 168u,
153u, 166u, 114u, 37u, 105u, 146u, 87u, 12u, 50u, 193u, 33u, 49u,
243u, 9u, 134u, 57u, 35u, 140u, 134u, 4u, 202u, 40u, 142u, 40u, 24u,
18u, 100u, 35u, 137u, 6u, 4u, 202u, 40u, 142u, 32u, 24u, 32u, 89u,
164u, 48u, 205u, 70u, 8u, 36u, 112u, 240u, 192u, 147u, 33u, 28u, 36u,
48u, 38u, 114u, 68u, 112u, 80u, 192u, 222u, 38u, 184u, 32u, 132u,
206u, 72u, 145u, 193u, 3u, 2u, 104u, 68u, 81u, 28u, 12u, 48u, 36u,
200u, 71u, 1u, 12u, 13u, 115u, 41u, 35u, 128u, 6u, 4u, 153u, 72u, 98u,
12u, 12u, 98u, 100u, 73u, 148u, 54u, 0u, 154u, 19u, 166u, 38u, 201u,
174u, 100u, 33u, 50u, 99u, 33u, 164u, 38u, 3u, 132u, 146u, 64u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 54u, 204u, 137u, 50u, 134u, 192u, 26u,
230u, 82u, 38u, 201u, 174u, 100u, 34u, 85u, 19u, 52u, 206u, 68u, 173u,
50u, 74u, 225u, 134u, 88u, 36u, 55u, 204u, 193u, 158u, 104u, 153u, 9u,
19u, 28u, 205u, 51u, 191u, 18u, 67u, 72u, 152u, 230u, 64u, 209u, 50u,
151u, 226u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 24u, 166u, 9u, 36u,
112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u,
12u, 9u, 128u, 225u, 32u,};
static ScmObj libsyssys_strerror(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_strerror__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_strerror, NULL, NULL);

#if HAVE_STRSIGNAL
static ScmObj libsyssys_strsignal(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_strsignal__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_strsignal, NULL, NULL);

#endif /* HAVE_STRSIGNAL */
#if !(HAVE_STRSIGNAL)
static ScmObj libsyssys_strsignal(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_strsignal__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_strsignal, NULL, NULL);

#endif /* !(HAVE_STRSIGNAL) */
#if defined(HAVE_GETLOADAVG)
static ScmObj libsyssys_getloadavg(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getloadavg__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getloadavg, NULL, NULL);

#endif /* defined(HAVE_GETLOADAVG) */
#if !(defined(HAVE_GETLOADAVG))
static ScmObj libsyssys_getloadavg(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getloadavg__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getloadavg, NULL, NULL);

#endif /* !(defined(HAVE_GETLOADAVG)) */
static ScmObj libsyssys_mmap(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_mmap__STUB, 4, 2,SCM_FALSE,libsyssys_mmap, NULL, NULL);

#if defined(HAVE_SYS_RESOURCE_H)
#if (SIZEOF_RLIM_T)==(4)

#endif /* (SIZEOF_RLIM_T)==(4) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if (SIZEOF_RLIM_T)==(4)

#endif /* (SIZEOF_RLIM_T)==(4) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if !((SIZEOF_RLIM_T)==(4))
#if (SIZEOF_RLIM_T)==(8)

#endif /* (SIZEOF_RLIM_T)==(8) */
#endif /* !((SIZEOF_RLIM_T)==(4)) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if !((SIZEOF_RLIM_T)==(4))
#if (SIZEOF_RLIM_T)==(8)

#endif /* (SIZEOF_RLIM_T)==(8) */
#endif /* !((SIZEOF_RLIM_T)==(4)) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if !((SIZEOF_RLIM_T)==(4))
#if !((SIZEOF_RLIM_T)==(8))

#endif /* !((SIZEOF_RLIM_T)==(8)) */
#endif /* !((SIZEOF_RLIM_T)==(4)) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
static ScmObj libsyssys_getrlimit(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getrlimit__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getrlimit, NULL, NULL);

#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
static ScmObj libsyssys_setrlimit(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_setrlimit__STUB, 2, 2,SCM_FALSE,libsyssys_setrlimit, NULL, NULL);

#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(GAUCHE_WINDOWS)
static const char* check_trailing_separator(const char* path);
#endif /* defined(GAUCHE_WINDOWS) */
#if !(defined(GAUCHE_WINDOWS))
static const char* check_trailing_separator(const char* path);
#endif /* !(defined(GAUCHE_WINDOWS)) */
static ScmObj libsyssys_stat(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_stat__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_stat, NULL, NULL);

#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_lstat(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_lstat__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_lstat, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(!(defined(GAUCHE_WINDOWS)))
static ScmObj libsyssys_lstat(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_lstat__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_lstat, NULL, NULL);

#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_mkfifo(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_mkfifo__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_mkfifo, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
static ScmObj libsyssys_fstat(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_fstat__STUB, 1, 0,SCM_FALSE,libsyssys_fstat, NULL, NULL);

static ScmObj libsysfile_existsP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsysfile_existsP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsysfile_existsP, NULL, NULL);

static ScmObj libsysfile_is_regularP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsysfile_is_regularP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsysfile_is_regularP, NULL, NULL);

static ScmObj libsysfile_is_directoryP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsysfile_is_directoryP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsysfile_is_directoryP, NULL, NULL);

static void utime_ts(ScmTimeSpec* ts,ScmObj arg);
static ScmObj libsyssys_utime(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_utime__STUB, 1, 3,SCM_FALSE,libsyssys_utime, NULL, NULL);

static ScmObj libsyssys_times(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_times__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_times, NULL, NULL);

static ScmObj libsyssys_uname(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_uname__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_uname, NULL, NULL);

static ScmObj libsyssys_wait(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_wait__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_wait, NULL, NULL);

static ScmObj libsyssys_waitpid(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_waitpid__STUB, 1, 1,SCM_FALSE,libsyssys_waitpid, NULL, NULL);

static ScmObj libsyssys_wait_exitedP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_wait_exitedP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_wait_exitedP, NULL, NULL);

static ScmObj libsyssys_wait_exit_status(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_wait_exit_status__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_wait_exit_status, NULL, NULL);

static ScmObj libsyssys_wait_signaledP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_wait_signaledP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_wait_signaledP, NULL, NULL);

static ScmObj libsyssys_wait_termsig(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_wait_termsig__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_wait_termsig, NULL, NULL);

static ScmObj libsyssys_wait_stoppedP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_wait_stoppedP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_wait_stoppedP, NULL, NULL);

static ScmObj libsyssys_wait_stopsig(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_wait_stopsig__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_wait_stopsig, NULL, NULL);

static ScmObj libsyssys_time(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_time__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_time, NULL, NULL);

static ScmObj libsyssys_gettimeofday(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_gettimeofday__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_gettimeofday, NULL, NULL);

static ScmObj libsyscurrent_microseconds(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyscurrent_microseconds__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyscurrent_microseconds, NULL, NULL);

static ScmObj libsyssys_clock_gettime_monotonic(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_clock_gettime_monotonic__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_clock_gettime_monotonic, NULL, NULL);

static ScmObj libsyssys_clock_getres_monotonic(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_clock_getres_monotonic__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_clock_getres_monotonic, NULL, NULL);

static ScmObj libsyscurrent_time(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyscurrent_time__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyscurrent_time, NULL, NULL);

static ScmObj libsystimeP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsystimeP__STUB, 1, 0,SCM_FALSE,libsystimeP, NULL, NULL);

static ScmObj libsysabsolute_time(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsysabsolute_time__STUB, 1, 2,SCM_FALSE,libsysabsolute_time, NULL, NULL);

static unsigned char uvector__00010[] = {
 0u, 3u, 150u, 6u, 9u, 186u, 111u, 156u, 9u, 28u, 172u, 48u, 36u,
224u, 71u, 42u, 12u, 9u, 55u, 145u, 202u, 3u, 4u, 226u, 24u, 102u,
243u, 57u, 78u, 100u, 142u, 78u, 24u, 18u, 111u, 35u, 146u, 134u, 4u,
156u, 136u, 228u, 33u, 129u, 48u, 173u, 35u, 143u, 6u, 4u, 155u, 200u,
227u, 129u, 129u, 148u, 78u, 147u, 156u, 228u, 103u, 48u, 152u, 86u,
146u, 56u, 208u, 96u, 76u, 110u, 72u, 227u, 1u, 129u, 39u, 34u, 56u,
184u, 96u, 73u, 188u, 142u, 42u, 24u, 19u, 27u, 146u, 56u, 152u, 96u,
156u, 67u, 12u, 224u, 103u, 89u, 204u, 145u, 196u, 131u, 2u, 78u, 4u,
113u, 0u, 192u, 147u, 169u, 28u, 48u, 48u, 38u, 89u, 4u, 112u, 144u,
192u, 147u, 129u, 28u, 28u, 48u, 50u, 137u, 210u, 115u, 157u, 76u,
230u, 19u, 44u, 130u, 71u, 5u, 12u, 9u, 158u, 161u, 28u, 12u, 48u,
36u, 234u, 71u, 2u, 12u, 9u, 56u, 17u, 192u, 3u, 2u, 103u, 168u, 67u,
16u, 96u, 99u, 19u, 132u, 222u, 68u, 237u, 56u, 78u, 164u, 78u, 211u,
124u, 228u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 59u, 206u, 19u, 121u, 19u, 180u, 225u,
58u, 145u, 59u, 77u, 243u, 145u, 19u, 116u, 223u, 56u, 18u, 71u, 9u,
12u, 12u, 97u, 48u, 49u, 76u, 18u, 8u, 224u, 225u, 129u, 48u, 28u,
35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static ScmObj libsystime_TOseconds(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsystime_TOseconds__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsystime_TOseconds, NULL, NULL);

static ScmObj libsysseconds_TOtime(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsysseconds_TOtime__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsysseconds_TOtime, NULL, NULL);

static unsigned char uvector__00012[] = {
 0u, 3u, 132u, 6u, 9u, 224u, 79u, 51u, 212u, 246u, 73u, 28u, 16u, 48u,
38u, 5u, 36u, 112u, 48u, 192u, 147u, 217u, 28u, 8u, 48u, 36u, 244u,
71u, 0u, 12u, 9u, 129u, 73u, 12u, 65u, 129u, 140u, 79u, 83u, 217u, 9u,
128u, 225u, 36u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 132u, 6u, 9u, 240u, 79u, 51u, 212u, 246u, 120u, 1u, 35u,
130u, 6u, 4u, 192u, 164u, 142u, 6u, 24u, 18u, 123u, 35u, 129u, 6u, 4u,
158u, 136u, 224u, 1u, 129u, 48u, 41u, 33u, 136u, 48u, 49u, 137u, 234u,
123u, 33u, 48u, 28u, 36u, 128u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 138u, 134u, 6u, 105u, 244u, 79u, 211u, 248u, 114u, 19u, 212u,
246u, 68u, 240u, 39u, 153u, 234u, 123u, 36u, 135u, 33u, 61u, 79u,
100u, 79u, 130u, 121u, 158u, 167u, 179u, 192u, 9u, 161u, 0u, 36u,
142u, 36u, 24u, 19u, 3u, 18u, 56u, 128u, 96u, 74u, 16u, 2u, 56u, 112u,
96u, 99u, 9u, 133u, 120u, 76u, 50u, 73u, 28u, 44u, 48u, 49u, 132u,
193u, 76u, 38u, 13u, 164u, 142u, 18u, 24u, 18u, 127u, 35u, 131u, 134u,
4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u,
9u, 0u,};
static void tm_print(ScmObj obj,ScmPort* port,ScmWriteContext* ctx);
#include <gauche/class.h>
typedef struct {
  SCM_HEADER;
  struct tm data;
} Scm_sys_tm_Rec;
SCM_CLASS_DECL(Scm_sys_tm_Class);
#define SCM_SYS_TM_P(obj) SCM_ISA(obj,&Scm_sys_tm_Class)
#define SCM_SYS_TM(obj) &(((Scm_sys_tm_Rec *)(obj))->data)
SCM_EXTERN ScmObj Scm_Make_sys_tm(const struct tm*);

static ScmObj libsyssys_asctime(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_asctime__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_asctime, NULL, NULL);

static ScmObj libsyssys_ctime(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_ctime__STUB, 1, 0,SCM_FALSE,libsyssys_ctime, NULL, NULL);

static ScmObj libsyssys_difftime(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_difftime__STUB, 2, 0,SCM_FALSE,libsyssys_difftime, NULL, NULL);

static ScmObj libsyssys_strftime(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_strftime__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_strftime, NULL, NULL);

static ScmObj libsyssys_gmtime(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_gmtime__STUB, 1, 0,SCM_FALSE,libsyssys_gmtime, NULL, NULL);

static ScmObj libsyssys_localtime(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_localtime__STUB, 1, 0,SCM_FALSE,libsyssys_localtime, NULL, NULL);

static ScmObj libsyssys_mktime(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_mktime__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_mktime, NULL, NULL);

static ScmObj libsyssys_access(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_access__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_access, NULL, NULL);

static ScmObj libsyssys_chdir(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_chdir__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_chdir, NULL, NULL);

static ScmObj libsyssys_chmod(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_chmod__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_chmod, NULL, NULL);

#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_fchmod(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_fchmod__STUB, 2, 0,SCM_FALSE,libsyssys_fchmod, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
static ScmObj libsyssys_chown(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_chown__STUB, 3, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_chown, NULL, NULL);

#if defined(HAVE_LCHOWN)
static ScmObj libsyssys_lchown(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_lchown__STUB, 3, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_lchown, NULL, NULL);

#endif /* defined(HAVE_LCHOWN) */
static ScmObj libsyssys_fork(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_fork__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_fork, NULL, NULL);

static ScmObj libsyssys_exec(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_exec__STUB, 2, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_exec, NULL, NULL);

static ScmObj libsyssys_fork_and_exec(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_fork_and_exec__STUB, 2, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_fork_and_exec, NULL, NULL);

static ScmObj libsyssys_getcwd(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getcwd__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getcwd, NULL, NULL);

static ScmObj libsyssys_getegid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getegid__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getegid, NULL, NULL);

static ScmObj libsyssys_getgid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getgid__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getgid, NULL, NULL);

static ScmObj libsyssys_geteuid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_geteuid__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_geteuid, NULL, NULL);

static ScmObj libsyssys_getuid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getuid__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getuid, NULL, NULL);

static ScmObj libsyssys_setugidP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_setugidP__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_setugidP, NULL, NULL);

static ScmObj libsyssys_getpid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getpid__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getpid, NULL, NULL);

static ScmObj libsyssys_getppid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getppid__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getppid, NULL, NULL);

#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_setgid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_setgid__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_setgid, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_setpgid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_setpgid__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_setpgid, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
static ScmObj libsyssys_getpgid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getpgid__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getpgid, NULL, NULL);

#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_getpgrp(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getpgrp__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getpgrp, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_setsid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_setsid__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_setsid, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_setuid(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_setuid__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_setuid, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_nice(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_nice__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_nice, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_getgroups(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getgroups__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getgroups, NULL, NULL);

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
static ScmObj libsyssys_setgroups(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_setgroups__STUB, 1, 0,SCM_FALSE,libsyssys_setgroups, NULL, NULL);

#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
static unsigned char uvector__00015[] = {
 0u, 3u, 129u, 6u, 10u, 16u, 30u, 1u, 192u, 9u, 12u, 65u, 129u, 141u,
66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 4u, 69u, 8u, 15u, 0u, 224u, 4u, 145u,
194u, 67u, 3u, 26u, 166u, 7u, 68u, 112u, 112u, 192u, 152u, 14u, 17u,
192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static ScmObj libsyssys_getlogin(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getlogin__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getlogin, NULL, NULL);

static ScmObj libsyssys_link(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_link__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_link, NULL, NULL);

static ScmObj libsyssys_pause(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_pause__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_pause, NULL, NULL);

static ScmObj libsyssys_alarm(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_alarm__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_alarm, NULL, NULL);

static ScmObj libsyssys_pipe(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_pipe__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_pipe, NULL, NULL);

static ScmObj libsyssys_close(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_close__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_close, NULL, NULL);

static ScmObj libsyssys_mkdir(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_mkdir__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_mkdir, NULL, NULL);

static ScmObj libsyssys_rmdir(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_rmdir__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_rmdir, NULL, NULL);

static ScmObj libsyssys_umask(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_umask__STUB, 0, 2,SCM_FALSE,libsyssys_umask, NULL, NULL);

static ScmObj libsyssys_sleep(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_sleep__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_sleep, NULL, NULL);

#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
static ScmObj libsyssys_nanosleep(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_nanosleep__STUB, 1, 2,SCM_FALSE,libsyssys_nanosleep, NULL, NULL);

#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
static ScmObj libsyssys_unlink(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_unlink__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_unlink, NULL, NULL);

static ScmObj libsyssys_isatty(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_isatty__STUB, 1, 0,SCM_FALSE,libsyssys_isatty, NULL, NULL);

static ScmObj libsyssys_ttyname(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_ttyname__STUB, 1, 0,SCM_FALSE,libsyssys_ttyname, NULL, NULL);

static ScmObj libsyssys_truncate(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_truncate__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_truncate, NULL, NULL);

static ScmObj libsyssys_ftruncate(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_ftruncate__STUB, 2, 0,SCM_FALSE,libsyssys_ftruncate, NULL, NULL);

#if defined(HAVE_CRYPT)
static ScmObj libsyssys_crypt(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_crypt__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_crypt, NULL, NULL);

#endif /* defined(HAVE_CRYPT) */
#if !(defined(HOSTNAMELEN))

#endif /* !(defined(HOSTNAMELEN)) */
static ScmObj libsyssys_gethostname(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_gethostname__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_gethostname, NULL, NULL);

static ScmObj libsyssys_getdomainname(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_getdomainname__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_getdomainname, NULL, NULL);

#if defined(HAVE_SYMLINK)
static ScmObj libsyssys_symlink(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_symlink__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_symlink, NULL, NULL);

#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_READLINK)
static ScmObj libsyssys_readlink(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_readlink__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_readlink, NULL, NULL);

#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_SELECT)
static ScmObj libsyssys_fdset_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_fdset_ref__STUB, 2, 0,SCM_FALSE,libsyssys_fdset_ref, NULL, NULL);

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
static ScmObj libsyssys_fdset_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_fdset_setX__STUB, 3, 0,SCM_FALSE,libsyssys_fdset_setX, NULL, NULL);

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
static ScmObj libsyssys_fdset_max_fd(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_fdset_max_fd__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_fdset_max_fd, NULL, NULL);

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
static ScmObj libsyssys_fdset_clearX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_fdset_clearX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_fdset_clearX, NULL, NULL);

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
static ScmObj libsyssys_fdset_copyX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_fdset_copyX__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_fdset_copyX, NULL, NULL);

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
static ScmObj libsyssys_select(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_select__STUB, 3, 2,SCM_FALSE,libsyssys_select, NULL, NULL);

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
static ScmObj libsyssys_selectX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_selectX__STUB, 3, 2,SCM_FALSE,libsyssys_selectX, NULL, NULL);

#endif /* defined(HAVE_SELECT) */
static ScmObj libsyssys_available_processors(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libsyssys_available_processors__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libsyssys_available_processors, NULL, NULL);

static unsigned char uvector__00017[] = {
 0u, 3u, 131u, 134u, 7u, 90u, 16u, 58u, 16u, 71u, 48u, 194u, 166u,
132u, 20u, 145u, 193u, 131u, 2u, 80u, 130u, 145u, 192u, 195u, 2u, 57u,
145u, 192u, 131u, 2u, 80u, 130u, 17u, 192u, 3u, 2u, 80u, 129u, 144u,
196u, 24u, 24u, 197u, 8u, 34u, 80u, 130u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 13u, 66u, 8u, 148u, 32u, 161u, 214u,
132u, 14u, 132u, 17u, 204u, 48u, 169u, 161u, 5u, 36u, 142u, 18u, 24u,
24u, 194u, 96u, 110u, 152u, 45u, 145u, 193u, 195u, 2u, 96u, 56u, 71u,
2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 134u, 6u, 6u, 106u, 16u, 122u, 16u, 98u, 71u, 9u, 12u, 9u,
66u, 12u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u,
112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 131u, 6u, 10u, 16u, 138u, 16u, 154u, 16u, 170u, 16u, 186u,
16u, 202u, 16u, 218u, 16u, 226u, 71u, 5u, 12u, 9u, 66u, 28u, 71u, 4u,
12u, 9u, 66u, 26u, 71u, 3u, 12u, 9u, 66u, 24u, 71u, 2u, 12u, 9u, 66u,
22u, 71u, 1u, 12u, 9u, 66u, 20u, 71u, 0u, 12u, 9u, 66u, 18u, 67u, 16u,
96u, 99u, 20u, 33u, 52u, 33u, 100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 195u, 28u, 24u, 40u, 67u, 195u, 229u, 8u, 129u, 161u, 17u,
161u, 18u, 161u, 19u, 161u, 20u, 36u, 120u, 99u, 67u, 2u, 80u, 138u,
17u, 225u, 140u, 12u, 9u, 66u, 38u, 71u, 134u, 44u, 48u, 37u, 8u,
145u, 30u, 24u, 160u, 192u, 148u, 34u, 36u, 120u, 98u, 67u, 2u, 96u,
106u, 71u, 134u, 32u, 48u, 37u, 8u, 129u, 30u, 24u, 96u, 193u, 2u,
192u, 193u, 162u, 132u, 64u, 146u, 60u, 48u, 161u, 129u, 50u, 14u,
35u, 195u, 8u, 24u, 18u, 132u, 64u, 143u, 12u, 0u, 96u, 76u, 125u,
200u, 240u, 174u, 134u, 10u, 16u, 240u, 249u, 66u, 32u, 104u, 68u,
104u, 68u, 168u, 68u, 195u, 189u, 8u, 129u, 36u, 120u, 87u, 3u, 2u,
102u, 154u, 71u, 133u, 108u, 48u, 37u, 8u, 129u, 30u, 21u, 160u, 192u,
148u, 34u, 100u, 120u, 86u, 67u, 2u, 80u, 137u, 17u, 225u, 88u, 12u,
9u, 66u, 34u, 71u, 133u, 92u, 48u, 38u, 95u, 228u, 120u, 85u, 131u,
2u, 80u, 136u, 17u, 225u, 83u, 12u, 2u, 132u, 84u, 132u, 203u, 176u,
145u, 225u, 82u, 12u, 9u, 4u, 17u, 225u, 79u, 12u, 20u, 33u, 225u,
242u, 132u, 64u, 208u, 136u, 208u, 137u, 7u, 122u, 17u, 3u, 66u, 40u,
72u, 240u, 167u, 6u, 4u, 161u, 20u, 35u, 194u, 154u, 24u, 19u, 66u,
229u, 8u, 240u, 166u, 6u, 4u, 161u, 16u, 35u, 194u, 150u, 24u, 18u,
132u, 72u, 143u, 10u, 80u, 96u, 74u, 17u, 18u, 60u, 41u, 33u, 129u,
52u, 44u, 88u, 143u, 10u, 64u, 96u, 74u, 17u, 2u, 60u, 40u, 161u,
128u, 80u, 139u, 16u, 154u, 22u, 6u, 72u, 240u, 162u, 6u, 4u, 130u,
8u, 240u, 160u, 134u, 10u, 16u, 240u, 249u, 66u, 32u, 104u, 68u, 67u,
189u, 8u, 129u, 161u, 19u, 161u, 20u, 36u, 120u, 80u, 3u, 2u, 80u,
138u, 17u, 225u, 31u, 12u, 9u, 66u, 38u, 71u, 132u, 120u, 48u, 38u,
136u, 102u, 145u, 225u, 29u, 12u, 9u, 66u, 32u, 71u, 132u, 112u, 48u,
37u, 8u, 137u, 30u, 17u, 176u, 192u, 154u, 32u, 190u, 71u, 132u, 104u,
48u, 37u, 8u, 129u, 30u, 17u, 112u, 192u, 40u, 69u, 200u, 77u, 16u,
76u, 36u, 120u, 69u, 131u, 2u, 65u, 4u, 120u, 68u, 195u, 5u, 8u, 120u,
124u, 161u, 16u, 33u, 222u, 132u, 64u, 208u, 137u, 80u, 137u, 208u,
138u, 18u, 60u, 34u, 65u, 129u, 40u, 69u, 8u, 240u, 136u, 134u, 4u,
161u, 19u, 35u, 194u, 32u, 24u, 18u, 132u, 72u, 143u, 8u, 120u, 96u,
77u, 22u, 6u, 35u, 194u, 28u, 24u, 18u, 132u, 64u, 143u, 8u, 104u,
96u, 77u, 21u, 200u, 35u, 194u, 24u, 24u, 18u, 132u, 64u, 143u, 8u,
72u, 96u, 20u, 35u, 4u, 38u, 138u, 202u, 146u, 60u, 33u, 1u, 129u,
32u, 130u, 60u, 32u, 225u, 130u, 11u, 16u, 96u, 104u, 161u, 16u, 36u,
38u, 140u, 236u, 4u, 209u, 72u, 240u, 154u, 30u, 140u, 19u, 66u, 128u,
195u, 72u, 122u, 9u, 143u, 184u, 76u, 8u, 137u, 36u, 120u, 65u, 67u,
2u, 104u, 216u, 89u, 30u, 16u, 64u, 192u, 154u, 54u, 48u, 71u, 132u,
12u, 48u, 37u, 8u, 129u, 30u, 16u, 16u, 192u, 154u, 54u, 22u, 71u,
126u, 12u, 12u, 240u, 109u, 8u, 129u, 35u, 190u, 134u, 4u, 161u, 16u,
35u, 188u, 134u, 6u, 176u, 213u, 66u, 32u, 73u, 29u, 224u, 48u, 38u,
143u, 227u, 145u, 221u, 195u, 2u, 80u, 136u, 17u, 221u, 131u, 2u, 66u,
164u, 119u, 64u, 193u, 66u, 51u, 10u, 146u, 59u, 152u, 96u, 74u, 17u,
146u, 59u, 144u, 96u, 72u, 84u, 142u, 224u, 24u, 25u, 104u, 70u, 66u,
105u, 10u, 124u, 42u, 72u, 237u, 225u, 129u, 40u, 70u, 72u, 237u,
129u, 130u, 132u, 104u, 80u, 141u, 208u, 132u, 80u, 142u, 80u, 133u,
80u, 142u, 80u, 134u, 80u, 134u, 208u, 135u, 26u, 17u, 209u, 66u, 53u,
66u, 60u, 24u, 84u, 134u, 81u, 66u, 63u, 66u, 8u, 104u, 65u, 3u, 237u,
8u, 33u, 36u, 145u, 218u, 131u, 2u, 105u, 38u, 185u, 29u, 164u, 48u,
38u, 146u, 230u, 145u, 218u, 3u, 2u, 80u, 130u, 17u, 217u, 67u, 2u,
80u, 130u, 17u, 216u, 195u, 2u, 105u, 42u, 97u, 29u, 132u, 48u, 38u,
146u, 171u, 145u, 216u, 3u, 2u, 80u, 130u, 17u, 215u, 131u, 2u, 105u,
42u, 185u, 29u, 108u, 48u, 37u, 8u, 241u, 29u, 100u, 48u, 38u, 146u,
107u, 145u, 214u, 3u, 2u, 80u, 142u, 145u, 213u, 67u, 3u, 24u, 161u,
9u, 161u, 11u, 34u, 132u, 34u, 132u, 38u, 132u, 42u, 132u, 46u, 132u,
50u, 132u, 54u, 132u, 56u, 146u, 58u, 152u, 96u, 77u, 35u, 142u, 35u,
165u, 6u, 6u, 81u, 33u, 6u, 25u, 12u, 135u, 250u, 20u, 1u, 34u, 18u,
98u, 26u, 20u, 18u, 71u, 73u, 12u, 9u, 165u, 146u, 228u, 116u, 112u,
192u, 154u, 90u, 46u, 71u, 69u, 12u, 9u, 165u, 162u, 228u, 115u, 224u,
192u, 144u, 249u, 28u, 240u, 48u, 37u, 8u, 161u, 28u, 220u, 48u, 50u,
137u, 22u, 132u, 80u, 183u, 80u, 138u, 18u, 57u, 168u, 96u, 77u, 47u,
196u, 35u, 154u, 6u, 4u, 161u, 20u, 35u, 153u, 6u, 4u, 210u, 252u,
66u, 57u, 128u, 96u, 74u, 17u, 50u, 57u, 96u, 96u, 74u, 20u, 34u, 57u,
80u, 96u, 101u, 18u, 45u, 8u, 153u, 161u, 66u, 161u, 19u, 36u, 114u,
128u, 192u, 154u, 100u, 182u, 71u, 39u, 12u, 9u, 66u, 38u, 71u, 37u,
12u, 9u, 166u, 75u, 100u, 114u, 48u, 192u, 148u, 34u, 68u, 113u, 240u,
192u, 148u, 40u, 100u, 113u, 208u, 192u, 202u, 36u, 90u, 17u, 35u,
66u, 135u, 66u, 36u, 72u, 227u, 97u, 129u, 52u, 212u, 104u, 142u, 52u,
24u, 18u, 132u, 72u, 142u, 48u, 24u, 19u, 77u, 70u, 136u, 226u, 193u,
129u, 40u, 68u, 72u, 226u, 33u, 129u, 148u, 72u, 180u, 34u, 37u, 186u,
132u, 68u, 145u, 195u, 195u, 2u, 105u, 188u, 73u, 28u, 56u, 48u, 37u,
8u, 137u, 28u, 48u, 48u, 38u, 155u, 196u, 145u, 194u, 131u, 3u, 93u,
8u, 129u, 35u, 132u, 134u, 4u, 161u, 16u, 35u, 128u, 6u, 4u, 161u,
68u, 33u, 136u, 48u, 49u, 138u, 16u, 74u, 16u, 170u, 17u, 217u, 28u,
67u, 237u, 196u, 80u, 134u, 208u, 161u, 145u, 66u, 51u, 66u, 132u,
69u, 8u, 115u, 113u, 34u, 62u, 2u, 132u, 48u, 59u, 67u, 225u, 52u,
178u, 48u, 145u, 10u, 132u, 210u, 56u, 226u, 66u, 105u, 20u, 17u, 36u,
128u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 7u, 66u, 9u, 66u, 21u, 66u, 59u, 35u,
136u, 125u, 184u, 138u, 16u, 218u, 20u, 50u, 40u, 70u, 104u, 80u,
136u, 161u, 14u, 110u, 36u, 71u, 192u, 80u, 134u, 7u, 104u, 124u, 50u,
137u, 8u, 48u, 200u, 100u, 63u, 208u, 160u, 9u, 16u, 147u, 16u, 208u,
160u, 146u, 68u, 42u, 40u, 70u, 133u, 8u, 221u, 8u, 69u, 8u, 229u, 8u,
85u, 8u, 229u, 8u, 101u, 8u, 109u, 8u, 113u, 161u, 29u, 20u, 35u, 84u,
35u, 193u, 133u, 72u, 101u, 20u, 35u, 244u, 32u, 134u, 132u, 16u, 62u,
208u, 130u, 18u, 73u, 33u, 150u, 132u, 100u, 80u, 140u, 194u, 166u,
21u, 36u, 145u, 194u, 67u, 3u, 24u, 76u, 13u, 211u, 15u, 98u, 56u,
56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u,
192u, 112u, 144u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 130u, 134u, 10u, 20u, 90u, 20u, 96u, 213u, 66u, 142u, 104u,
71u, 73u, 28u, 16u, 48u, 37u, 10u, 41u, 28u, 12u, 48u, 37u, 8u, 233u,
28u, 4u, 48u, 38u, 7u, 228u, 112u, 0u, 192u, 148u, 40u, 196u, 49u, 6u,
6u, 49u, 66u, 141u, 66u, 58u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 146u, 134u, 10u, 16u, 208u, 228u, 40u, 81u, 168u, 71u, 72u,
161u, 69u, 161u, 70u, 13u, 84u, 40u, 230u, 132u, 116u, 154u, 17u,
218u, 20u, 96u, 209u, 66u, 142u, 95u, 137u, 28u, 144u, 48u, 37u, 8u,
105u, 28u, 128u, 48u, 38u, 26u, 228u, 113u, 240u, 192u, 148u, 40u,
196u, 113u, 224u, 192u, 148u, 35u, 164u, 113u, 176u, 192u, 198u, 19u,
3u, 160u, 152u, 48u, 18u, 56u, 200u, 96u, 161u, 13u, 161u, 10u, 161u,
29u, 161u, 70u, 13u, 20u, 40u, 229u, 184u, 145u, 198u, 3u, 2u, 80u,
134u, 145u, 197u, 67u, 2u, 100u, 214u, 71u, 20u, 12u, 9u, 66u, 140u,
71u, 19u, 12u, 9u, 66u, 58u, 71u, 18u, 12u, 9u, 66u, 20u, 71u, 16u,
12u, 13u, 97u, 170u, 133u, 28u, 146u, 56u, 120u, 96u, 76u, 233u, 136u,
225u, 161u, 130u, 133u, 34u, 133u, 24u, 53u, 80u, 163u, 154u, 17u,
210u, 71u, 12u, 12u, 9u, 66u, 144u, 71u, 11u, 12u, 9u, 66u, 58u, 71u,
9u, 12u, 9u, 161u, 10u, 36u, 112u, 128u, 192u, 148u, 40u, 196u, 112u,
80u, 192u, 246u, 26u, 40u, 81u, 200u, 97u, 161u, 73u, 36u, 142u, 8u,
24u, 19u, 66u, 162u, 136u, 224u, 97u, 129u, 40u, 71u, 72u, 224u, 33u,
129u, 174u, 133u, 28u, 145u, 192u, 3u, 2u, 80u, 163u, 144u, 196u, 24u,
24u, 197u, 10u, 53u, 10u, 61u, 8u, 233u, 13u, 128u, 38u, 134u, 3u,
80u, 142u, 144u, 19u, 66u, 151u, 194u, 104u, 64u, 113u, 1u, 51u, 155u,
9u, 145u, 65u, 13u, 33u, 48u, 28u, 36u, 146u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 130u, 6u, 10u, 20u, 138u, 20u, 170u, 20u, 122u, 20u, 178u,
71u, 3u, 12u, 9u, 66u, 144u, 71u, 2u, 12u, 9u, 66u, 150u, 71u, 1u,
12u, 9u, 66u, 142u, 71u, 0u, 12u, 9u, 66u, 148u, 67u, 16u, 96u, 99u,
20u, 41u, 84u, 41u, 100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 138u, 134u, 10u, 17u, 161u, 66u, 55u, 66u, 145u, 66u, 57u,
66u, 143u, 66u, 56u, 69u, 10u, 45u, 10u, 53u, 10u, 61u, 8u, 233u, 20u,
33u, 174u, 97u, 133u, 77u, 10u, 53u, 10u, 99u, 241u, 36u, 113u, 64u,
192u, 152u, 101u, 145u, 196u, 195u, 2u, 80u, 134u, 145u, 195u, 131u,
2u, 80u, 163u, 17u, 194u, 195u, 2u, 57u, 145u, 194u, 67u, 2u, 97u,
150u, 71u, 8u, 12u, 9u, 132u, 41u, 28u, 28u, 48u, 37u, 10u, 41u, 28u,
24u, 48u, 37u, 8u, 233u, 28u, 20u, 48u, 37u, 10u, 57u, 28u, 16u, 48u,
37u, 10u, 49u, 28u, 8u, 48u, 38u, 16u, 164u, 112u, 0u, 192u, 198u,
40u, 82u, 168u, 82u, 200u, 161u, 72u, 161u, 74u, 161u, 71u, 161u, 75u,
36u, 134u, 32u, 192u, 198u, 40u, 81u, 168u, 81u, 232u, 71u, 72u, 76u,
7u, 9u, 32u,};
static unsigned char uvector__00027[] = {
 0u, 3u, 136u, 6u, 10u, 20u, 80u, 209u, 66u, 154u, 67u, 85u, 10u,
105u, 161u, 29u, 36u, 112u, 240u, 192u, 148u, 40u, 164u, 112u, 224u,
192u, 148u, 35u, 164u, 112u, 192u, 192u, 152u, 38u, 145u, 194u, 131u,
2u, 96u, 94u, 71u, 9u, 12u, 12u, 128u, 80u, 166u, 138u, 20u, 234u,
20u, 248u, 126u, 132u, 56u, 146u, 19u, 1u, 194u, 71u, 7u, 12u, 9u,
139u, 161u, 28u, 24u, 48u, 37u, 8u, 113u, 28u, 20u, 48u, 36u, 62u,
71u, 4u, 12u, 9u, 66u, 158u, 71u, 2u, 12u, 9u, 139u, 161u, 12u, 65u,
129u, 140u, 80u, 167u, 208u, 133u, 80u, 142u, 195u, 244u, 33u, 180u,
33u, 196u, 51u, 10u, 20u, 90u, 20u, 106u, 20u, 122u, 17u, 210u, 27u,
0u, 107u, 161u, 71u, 52u, 35u, 164u, 7u, 176u, 209u, 66u, 142u, 67u,
13u, 10u, 73u, 34u, 133u, 34u, 133u, 24u, 53u, 80u, 163u, 154u, 17u,
210u, 64u, 107u, 13u, 84u, 40u, 228u, 138u, 16u, 218u, 16u, 170u, 17u,
218u, 20u, 96u, 209u, 66u, 142u, 91u, 137u, 13u, 34u, 132u, 52u, 57u,
10u, 20u, 106u, 17u, 210u, 40u, 81u, 104u, 81u, 131u, 85u, 10u, 57u,
161u, 29u, 38u, 132u, 118u, 133u, 24u, 52u, 80u, 163u, 151u, 226u,
73u, 12u, 194u, 133u, 34u, 133u, 26u, 133u, 30u, 132u, 116u, 138u,
17u, 161u, 66u, 55u, 66u, 145u, 66u, 57u, 66u, 143u, 66u, 56u, 69u,
10u, 45u, 10u, 53u, 10u, 61u, 8u, 233u, 20u, 33u, 174u, 97u, 133u,
77u, 10u, 53u, 10u, 99u, 241u, 36u, 54u, 208u, 166u, 132u, 197u, 208u,
38u, 3u, 132u, 146u,};
static unsigned char uvector__00028[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 17u, 66u, 159u, 66u, 21u, 66u, 59u,
15u, 208u, 134u, 208u, 135u, 16u, 204u, 40u, 81u, 104u, 81u, 168u,
81u, 232u, 71u, 72u, 108u, 1u, 174u, 133u, 28u, 208u, 142u, 144u, 30u,
195u, 69u, 10u, 57u, 12u, 52u, 41u, 36u, 138u, 20u, 138u, 20u, 96u,
213u, 66u, 142u, 104u, 71u, 73u, 1u, 172u, 53u, 80u, 163u, 146u, 40u,
67u, 104u, 66u, 168u, 71u, 104u, 81u, 131u, 69u, 10u, 57u, 110u, 36u,
52u, 138u, 16u, 208u, 228u, 40u, 81u, 168u, 71u, 72u, 161u, 69u, 161u,
70u, 13u, 84u, 40u, 230u, 132u, 116u, 154u, 17u, 218u, 20u, 96u, 209u,
66u, 142u, 95u, 137u, 36u, 51u, 10u, 20u, 138u, 20u, 106u, 20u, 122u,
17u, 210u, 40u, 70u, 133u, 8u, 221u, 10u, 69u, 8u, 229u, 10u, 61u, 8u,
225u, 20u, 40u, 180u, 40u, 212u, 40u, 244u, 35u, 164u, 80u, 134u,
185u, 134u, 21u, 52u, 40u, 212u, 41u, 143u, 196u, 144u, 219u, 66u,
154u, 40u, 83u, 168u, 83u, 225u, 250u, 16u, 226u, 40u, 81u, 67u, 69u,
10u, 105u, 13u, 84u, 41u, 166u, 132u, 116u, 146u, 71u, 9u, 12u, 12u,
97u, 48u, 55u, 76u, 37u, 8u, 224u, 225u, 129u, 48u, 28u, 35u, 129u,
6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00029[] = {
 0u, 3u, 139u, 134u, 10u, 21u, 10u, 21u, 18u, 71u, 22u, 12u, 9u, 66u,
162u, 71u, 18u, 12u, 2u, 25u, 161u, 81u, 161u, 82u, 33u, 134u, 133u,
36u, 146u, 56u, 128u, 96u, 76u, 35u, 136u, 225u, 161u, 129u, 40u, 84u,
72u, 225u, 97u, 129u, 48u, 142u, 35u, 131u, 134u, 1u, 12u, 208u, 168u,
195u, 68u, 48u, 196u, 4u, 145u, 193u, 67u, 2u, 99u, 14u, 71u, 2u, 12u,
9u, 66u, 162u, 71u, 0u, 12u, 9u, 140u, 57u, 12u, 65u, 129u, 140u, 80u,
168u, 144u, 216u, 19u, 24u, 64u, 152u, 69u, 134u, 144u, 152u, 14u,
18u, 73u, 0u,};
static unsigned char uvector__00030[] = {
 0u, 3u, 147u, 6u, 7u, 58u, 16u, 225u, 44u, 208u, 169u, 194u, 132u,
145u, 201u, 3u, 2u, 96u, 110u, 71u, 35u, 12u, 9u, 10u, 17u, 200u,
131u, 2u, 80u, 170u, 17u, 200u, 3u, 2u, 96u, 110u, 71u, 31u, 12u, 9u,
66u, 28u, 71u, 29u, 12u, 14u, 111u, 194u, 89u, 161u, 83u, 13u, 80u,
161u, 36u, 142u, 54u, 24u, 19u, 23u, 98u, 56u, 208u, 96u, 76u, 100u,
200u, 227u, 33u, 129u, 40u, 85u, 8u, 226u, 225u, 129u, 49u, 118u, 35u,
137u, 134u, 6u, 81u, 12u, 134u, 136u, 80u, 195u, 68u, 38u, 44u, 97u,
48u, 28u, 36u, 113u, 16u, 192u, 153u, 71u, 145u, 195u, 67u, 2u, 101u,
56u, 71u, 11u, 12u, 9u, 148u, 121u, 28u, 40u, 48u, 50u, 1u, 10u, 8u,
66u, 133u, 62u, 31u, 36u, 132u, 202u, 16u, 145u, 194u, 3u, 2u, 103u,
88u, 71u, 7u, 12u, 9u, 15u, 145u, 193u, 131u, 2u, 80u, 167u, 145u,
193u, 3u, 2u, 103u, 88u, 71u, 2u, 12u, 9u, 66u, 168u, 67u, 16u, 96u,
99u, 20u, 41u, 240u, 253u, 8u, 113u, 12u, 194u, 133u, 78u, 133u, 68u,
134u, 192u, 33u, 154u, 21u, 24u, 104u, 134u, 24u, 128u, 144u, 33u,
154u, 21u, 26u, 21u, 34u, 24u, 104u, 82u, 73u, 13u, 34u, 133u, 66u,
133u, 68u, 146u, 67u, 108u, 40u, 19u, 58u, 192u, 153u, 66u, 18u, 72u,};
static unsigned char uvector__00031[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 66u, 157u, 66u, 159u, 15u, 208u, 135u,
16u, 204u, 40u, 84u, 232u, 84u, 72u, 108u, 2u, 25u, 161u, 81u, 134u,
136u, 97u, 136u, 9u, 2u, 25u, 161u, 81u, 161u, 82u, 33u, 134u, 133u,
36u, 144u, 210u, 40u, 84u, 40u, 84u, 73u, 36u, 54u, 194u, 130u, 16u,
161u, 79u, 135u, 200u, 101u, 16u, 200u, 104u, 133u, 12u, 52u, 67u,
155u, 240u, 150u, 104u, 84u, 195u, 84u, 40u, 73u, 14u, 116u, 33u,
194u, 89u, 161u, 83u, 133u, 9u, 36u, 145u, 194u, 195u, 3u, 24u, 76u,
13u, 211u, 6u, 66u, 56u, 72u, 96u, 76u, 7u, 8u, 224u, 129u, 129u, 48u,
28u, 35u, 129u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00032[] = {
 0u, 3u, 135u, 6u, 10u, 21u, 90u, 21u, 106u, 17u, 210u, 71u, 13u, 12u,
9u, 66u, 58u, 71u, 12u, 12u, 9u, 66u, 172u, 71u, 11u, 12u, 9u, 66u,
172u, 71u, 9u, 12u, 13u, 116u, 35u, 164u, 142u, 16u, 24u, 18u, 132u,
116u, 142u, 14u, 24u, 25u, 0u, 161u, 86u, 16u, 133u, 10u, 189u, 10u,
193u, 36u, 50u, 132u, 195u, 238u, 133u, 88u, 38u, 3u, 132u, 145u,
193u, 67u, 2u, 99u, 6u, 71u, 2u, 12u, 9u, 66u, 174u, 71u, 0u, 12u, 9u,
140u, 25u, 12u, 65u, 129u, 140u, 80u, 171u, 208u, 142u, 144u, 219u,
66u, 172u, 19u, 24u, 48u, 152u, 220u, 146u, 72u,};
static unsigned char uvector__00033[] = {
 0u, 3u, 132u, 6u, 7u, 49u, 19u, 208u, 172u, 208u, 173u, 26u, 17u,
210u, 71u, 7u, 12u, 9u, 66u, 58u, 71u, 4u, 12u, 9u, 129u, 57u, 28u,
12u, 48u, 37u, 10u, 209u, 28u, 8u, 48u, 37u, 10u, 201u, 28u, 0u, 48u,
38u, 4u, 228u, 49u, 6u, 6u, 49u, 66u, 181u, 66u, 58u, 66u, 96u, 56u,
73u, 0u,};
static unsigned char uvector__00034[] = {
 0u, 3u, 130u, 134u, 10u, 17u, 160u, 228u, 40u, 86u, 168u, 71u, 72u,
115u, 17u, 61u, 10u, 205u, 10u, 209u, 161u, 29u, 38u, 132u, 118u,
133u, 108u, 145u, 193u, 3u, 2u, 80u, 173u, 145u, 192u, 195u, 2u, 80u,
142u, 145u, 192u, 3u, 3u, 24u, 76u, 14u, 130u, 96u, 192u, 72u, 98u,
12u, 12u, 98u, 133u, 102u, 132u, 116u, 132u, 192u, 112u, 146u,};
static unsigned char uvector__00035[] = {
 0u, 3u, 129u, 134u, 10u, 21u, 202u, 21u, 218u, 21u, 226u, 71u, 2u,
12u, 9u, 66u, 184u, 71u, 1u, 12u, 9u, 66u, 188u, 71u, 0u, 12u, 9u,
66u, 186u, 67u, 16u, 96u, 99u, 20u, 43u, 164u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00036[] = {
 0u, 3u, 129u, 134u, 10u, 21u, 250u, 24u, 10u, 24u, 18u, 71u, 2u, 12u,
9u, 66u, 190u, 71u, 1u, 12u, 9u, 67u, 2u, 71u, 0u, 12u, 9u, 67u, 0u,
67u, 16u, 96u, 99u, 20u, 48u, 4u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00037[] = {
 0u, 3u, 129u, 134u, 10u, 24u, 42u, 24u, 58u, 24u, 66u, 71u, 2u, 12u,
9u, 67u, 4u, 71u, 1u, 12u, 9u, 67u, 10u, 71u, 0u, 12u, 9u, 67u, 6u,
67u, 16u, 96u, 99u, 20u, 48u, 100u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00038[] = {
 0u, 3u, 194u, 36u, 24u, 25u, 232u, 97u, 168u, 83u, 201u, 30u, 17u,
16u, 192u, 148u, 41u, 228u, 120u, 67u, 131u, 5u, 12u, 56u, 150u, 69u,
12u, 68u, 79u, 66u, 57u, 67u, 10u, 104u, 85u, 139u, 113u, 35u, 194u,
20u, 24u, 19u, 11u, 130u, 60u, 33u, 33u, 129u, 40u, 85u, 136u, 240u,
130u, 134u, 6u, 49u, 67u, 6u, 69u, 12u, 21u, 12u, 29u, 12u, 33u, 36u,
120u, 64u, 131u, 2u, 68u, 228u, 120u, 64u, 3u, 5u, 12u, 72u, 20u, 48u,
81u, 57u, 20u, 48u, 148u, 48u, 164u, 134u, 52u, 198u, 208u, 145u,
223u, 131u, 2u, 100u, 170u, 71u, 124u, 12u, 9u, 133u, 193u, 29u, 232u,
48u, 80u, 197u, 80u, 197u, 240u, 2u, 71u, 121u, 12u, 9u, 67u, 22u,
71u, 120u, 12u, 20u, 48u, 226u, 132u, 106u, 63u, 12u, 42u, 68u, 178u,
40u, 98u, 34u, 122u, 17u, 193u, 23u, 6u, 26u, 24u, 194u, 77u, 10u,
177u, 34u, 46u, 12u, 49u, 121u, 36u, 142u, 238u, 24u, 19u, 66u, 65u,
136u, 238u, 193u, 129u, 32u, 130u, 59u, 144u, 96u, 77u, 9u, 6u, 35u,
184u, 6u, 4u, 207u, 88u, 142u, 220u, 24u, 19u, 66u, 1u, 72u, 237u,
161u, 129u, 40u, 85u, 136u, 237u, 33u, 129u, 140u, 80u, 192u, 17u,
66u, 191u, 67u, 1u, 67u, 2u, 73u, 29u, 156u, 48u, 38u, 132u, 47u,
145u, 217u, 131u, 2u, 65u, 4u, 118u, 32u, 192u, 154u, 16u, 190u, 71u,
95u, 12u, 9u, 19u, 145u, 215u, 67u, 5u, 12u, 72u, 20u, 43u, 241u, 57u,
20u, 48u, 33u, 52u, 33u, 124u, 144u, 198u, 154u, 23u, 172u, 72u, 235u,
97u, 129u, 52u, 56u, 116u, 142u, 178u, 24u, 19u, 66u, 1u, 72u, 234u,
225u, 129u, 40u, 99u, 72u, 234u, 161u, 129u, 51u, 214u, 35u, 169u, 6u,
6u, 122u, 24u, 234u, 20u, 242u, 71u, 81u, 12u, 9u, 66u, 158u, 71u,
77u, 12u, 20u, 49u, 84u, 49u, 124u, 0u, 145u, 211u, 3u, 2u, 80u, 197u,
145u, 210u, 131u, 3u, 140u, 168u, 40u, 70u, 131u, 144u, 161u, 89u,
161u, 29u, 34u, 132u, 104u, 57u, 10u, 21u, 170u, 17u, 210u, 28u, 196u,
79u, 66u, 179u, 66u, 180u, 104u, 71u, 73u, 161u, 29u, 161u, 91u, 36u,
48u, 169u, 18u, 200u, 161u, 136u, 137u, 232u, 71u, 4u, 92u, 24u, 104u,
99u, 9u, 52u, 42u, 196u, 146u, 58u, 72u, 96u, 71u, 18u, 58u, 48u, 96u,
77u, 19u, 18u, 35u, 162u, 6u, 4u, 209u, 84u, 50u, 58u, 24u, 96u, 74u,
21u, 98u, 57u, 248u, 96u, 99u, 20u, 43u, 164u, 80u, 174u, 80u, 174u,
208u, 175u, 18u, 71u, 61u, 12u, 9u, 162u, 179u, 164u, 115u, 192u,
192u, 144u, 65u, 28u, 224u, 48u, 38u, 138u, 206u, 145u, 205u, 67u, 2u,
68u, 228u, 115u, 48u, 193u, 67u, 18u, 5u, 10u, 228u, 78u, 69u, 10u,
240u, 77u, 21u, 157u, 36u, 49u, 166u, 140u, 4u, 18u, 57u, 136u, 96u,
77u, 26u, 79u, 35u, 151u, 134u, 4u, 209u, 84u, 50u, 57u, 88u, 96u,
99u, 9u, 162u, 106u, 1u, 52u, 78u, 88u, 145u, 202u, 67u, 2u, 104u,
152u, 145u, 28u, 160u, 48u, 36u, 168u, 71u, 39u, 12u, 18u, 168u, 161u,
91u, 149u, 8u, 161u, 143u, 17u, 112u, 97u, 139u, 201u, 12u, 34u, 26u,
36u, 58u, 80u, 197u, 240u, 18u, 66u, 104u, 150u, 233u, 35u, 147u, 6u,
4u, 209u, 228u, 130u, 57u, 40u, 96u, 74u, 24u, 242u, 57u, 32u, 96u,
77u, 31u, 1u, 35u, 144u, 6u, 4u, 209u, 229u, 178u, 56u, 248u, 96u,
72u, 32u, 142u, 54u, 24u, 19u, 71u, 150u, 200u, 227u, 33u, 129u, 52u,
121u, 32u, 142u, 46u, 24u, 4u, 50u, 34u, 238u, 0u, 104u, 100u, 8u,
77u, 29u, 219u, 36u, 113u, 80u, 192u, 154u, 69u, 10u, 71u, 17u, 12u,
9u, 164u, 82u, 68u, 113u, 0u, 192u, 144u, 65u, 28u, 52u, 48u, 38u,
145u, 73u, 17u, 194u, 195u, 2u, 105u, 20u, 41u, 28u, 36u, 48u, 8u,
90u, 134u, 70u, 134u, 20u, 208u, 201u, 10u, 25u, 48u, 216u, 19u, 72u,
160u, 128u, 77u, 18u, 3u, 9u, 162u, 33u, 132u, 52u, 132u, 207u, 12u,
146u, 72u, 225u, 1u, 129u, 32u, 130u, 56u, 56u, 96u, 77u, 37u, 81u,
35u, 130u, 134u, 4u, 210u, 85u, 66u, 56u, 32u, 96u, 74u, 24u, 82u,
56u, 0u, 96u, 77u, 37u, 84u, 33u, 136u, 48u, 50u, 56u, 129u, 67u, 11u,
67u, 10u, 69u, 10u, 181u, 12u, 161u, 33u, 176u, 38u, 146u, 168u, 128u,
153u, 164u, 132u, 194u, 148u, 134u, 144u, 152u, 17u, 18u, 73u, 0u,};
static unsigned char uvector__00039[] = {
 0u, 3u, 130u, 6u, 4u, 113u, 35u, 129u, 134u, 4u, 161u, 148u, 35u,
129u, 6u, 4u, 161u, 133u, 35u, 128u, 6u, 6u, 71u, 16u, 40u, 97u, 104u,
97u, 72u, 161u, 86u, 161u, 148u, 36u, 54u, 1u, 11u, 80u, 200u, 208u,
194u, 154u, 25u, 33u, 67u, 38u, 27u, 0u, 134u, 68u, 93u, 192u, 13u,
12u, 129u, 18u, 168u, 161u, 91u, 149u, 8u, 161u, 143u, 17u, 112u, 97u,
139u, 201u, 12u, 34u, 26u, 36u, 58u, 80u, 197u, 240u, 18u, 67u, 140u,
168u, 40u, 70u, 131u, 144u, 161u, 89u, 161u, 29u, 34u, 132u, 104u,
57u, 10u, 21u, 170u, 17u, 210u, 28u, 196u, 79u, 66u, 179u, 66u, 180u,
104u, 71u, 73u, 161u, 29u, 161u, 91u, 36u, 48u, 169u, 18u, 200u, 161u,
136u, 137u, 232u, 71u, 4u, 92u, 24u, 104u, 99u, 9u, 52u, 42u, 196u,
146u, 64u, 161u, 138u, 161u, 139u, 224u, 4u, 51u, 208u, 199u, 80u,
167u, 146u, 26u, 69u, 12u, 56u, 161u, 26u, 143u, 195u, 10u, 145u, 44u,
138u, 24u, 136u, 158u, 132u, 112u, 69u, 193u, 134u, 134u, 48u, 147u,
66u, 172u, 72u, 139u, 131u, 12u, 94u, 73u, 36u, 144u, 40u, 98u, 168u,
98u, 248u, 1u, 20u, 48u, 226u, 89u, 20u, 49u, 17u, 61u, 8u, 229u, 12u,
41u, 161u, 86u, 45u, 196u, 134u, 144u, 207u, 67u, 13u, 66u, 158u, 73u,
36u, 49u, 6u, 6u, 49u, 67u, 11u, 67u, 41u, 67u, 22u, 66u, 97u, 72u,
73u, 0u,};
static unsigned char uvector__00040[] = {
 0u, 3u, 143u, 6u, 7u, 58u, 20u, 250u, 17u, 210u, 71u, 29u, 12u, 9u,
66u, 58u, 71u, 28u, 12u, 9u, 66u, 158u, 71u, 26u, 12u, 20u, 42u, 162u,
134u, 84u, 80u, 199u, 208u, 167u, 134u, 17u, 13u, 19u, 192u, 15u, 0u,
52u, 35u, 164u, 142u, 50u, 24u, 18u, 132u, 116u, 142u, 46u, 24u, 18u,
134u, 88u, 142u, 42u, 24u, 37u, 81u, 67u, 44u, 148u, 50u, 225u, 48u,
233u, 161u, 150u, 36u, 113u, 64u, 192u, 152u, 116u, 145u, 196u, 195u,
2u, 80u, 199u, 145u, 195u, 195u, 2u, 80u, 167u, 145u, 195u, 67u, 2u,
97u, 210u, 71u, 11u, 12u, 12u, 162u, 86u, 161u, 79u, 161u, 152u, 33u,
48u, 195u, 9u, 128u, 225u, 35u, 132u, 134u, 4u, 204u, 56u, 142u, 12u,
24u, 18u, 133u, 60u, 142u, 8u, 24u, 19u, 48u, 226u, 56u, 16u, 96u,
74u, 24u, 210u, 24u, 131u, 3u, 24u, 161u, 79u, 161u, 29u, 33u, 152u,
80u, 199u, 208u, 194u, 208u, 202u, 80u, 197u, 144u, 200u, 226u, 5u,
12u, 45u, 12u, 41u, 20u, 42u, 212u, 50u, 132u, 134u, 192u, 33u, 106u,
25u, 26u, 24u, 83u, 67u, 36u, 40u, 100u, 195u, 96u, 16u, 200u, 139u,
184u, 1u, 161u, 144u, 34u, 85u, 20u, 43u, 114u, 161u, 20u, 49u, 226u,
46u, 12u, 49u, 121u, 33u, 132u, 67u, 68u, 135u, 74u, 24u, 190u, 2u,
72u, 113u, 149u, 5u, 8u, 208u, 114u, 20u, 43u, 52u, 35u, 164u, 80u,
141u, 7u, 33u, 66u, 181u, 66u, 58u, 67u, 152u, 137u, 232u, 86u, 104u,
86u, 141u, 8u, 233u, 52u, 35u, 180u, 43u, 100u, 134u, 21u, 34u, 89u,
20u, 49u, 17u, 61u, 8u, 224u, 139u, 131u, 13u, 12u, 97u, 38u, 133u,
88u, 146u, 72u, 20u, 49u, 84u, 49u, 124u, 0u, 134u, 122u, 24u, 234u,
20u, 242u, 67u, 72u, 161u, 135u, 20u, 35u, 81u, 248u, 97u, 82u, 37u,
145u, 67u, 17u, 19u, 208u, 142u, 8u, 184u, 48u, 208u, 198u, 18u, 104u,
85u, 137u, 17u, 112u, 97u, 139u, 201u, 36u, 146u, 5u, 12u, 85u, 12u,
95u, 0u, 34u, 134u, 28u, 75u, 34u, 134u, 34u, 39u, 161u, 28u, 161u,
133u, 52u, 42u, 197u, 184u, 144u, 210u, 25u, 232u, 97u, 168u, 83u,
201u, 36u, 134u, 97u, 31u, 208u, 171u, 208u, 142u, 144u, 219u, 66u,
172u, 33u, 10u, 21u, 122u, 21u, 130u, 25u, 67u, 93u, 8u, 233u, 161u,
86u, 20u, 42u, 180u, 42u, 212u, 35u, 164u, 146u, 19u, 48u, 50u, 72u,};
static unsigned char uvector__00041[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 66u, 61u, 66u, 159u, 66u, 58u, 67u, 48u,
161u, 143u, 161u, 133u, 161u, 148u, 161u, 139u, 33u, 145u, 196u, 10u,
24u, 90u, 24u, 82u, 40u, 85u, 168u, 101u, 9u, 13u, 128u, 66u, 212u,
50u, 52u, 48u, 166u, 134u, 72u, 80u, 201u, 134u, 192u, 33u, 145u, 23u,
112u, 3u, 67u, 32u, 68u, 170u, 40u, 86u, 229u, 66u, 40u, 99u, 196u,
92u, 24u, 98u, 242u, 67u, 8u, 134u, 137u, 14u, 148u, 49u, 124u, 4u,
144u, 227u, 42u, 10u, 17u, 160u, 228u, 40u, 86u, 104u, 71u, 72u, 161u,
26u, 14u, 66u, 133u, 106u, 132u, 116u, 135u, 49u, 19u, 208u, 172u,
208u, 173u, 26u, 17u, 210u, 104u, 71u, 104u, 86u, 201u, 12u, 42u, 68u,
178u, 40u, 98u, 34u, 122u, 17u, 193u, 23u, 6u, 26u, 24u, 194u, 77u,
10u, 177u, 36u, 144u, 40u, 98u, 168u, 98u, 248u, 1u, 12u, 244u, 49u,
212u, 41u, 228u, 134u, 145u, 67u, 14u, 40u, 70u, 163u, 240u, 194u,
164u, 75u, 34u, 134u, 34u, 39u, 161u, 28u, 17u, 112u, 97u, 161u, 140u,
36u, 208u, 171u, 18u, 34u, 224u, 195u, 23u, 146u, 73u, 36u, 10u, 24u,
170u, 24u, 190u, 0u, 69u, 12u, 56u, 150u, 69u, 12u, 68u, 79u, 66u,
57u, 67u, 10u, 104u, 85u, 139u, 113u, 33u, 164u, 51u, 208u, 195u, 80u,
167u, 146u, 73u, 12u, 194u, 63u, 161u, 87u, 161u, 29u, 33u, 182u,
133u, 88u, 66u, 20u, 42u, 244u, 43u, 4u, 50u, 134u, 186u, 17u, 211u,
66u, 172u, 40u, 85u, 104u, 85u, 168u, 71u, 73u, 36u, 50u, 137u, 90u,
133u, 62u, 134u, 96u, 138u, 21u, 81u, 67u, 42u, 40u, 99u, 232u, 83u,
195u, 8u, 134u, 137u, 224u, 7u, 128u, 26u, 17u, 210u, 28u, 232u, 83u,
232u, 71u, 73u, 36u, 112u, 176u, 192u, 198u, 19u, 3u, 116u, 193u,
104u, 142u, 18u, 24u, 19u, 1u, 194u, 56u, 32u, 96u, 76u, 7u, 8u, 224u,
65u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00042[] = {
 0u, 3u, 191u, 134u, 7u, 58u, 25u, 145u, 67u, 52u, 40u, 102u, 205u,
12u, 225u, 36u, 119u, 224u, 192u, 152u, 27u, 145u, 223u, 67u, 2u, 80u,
205u, 17u, 223u, 3u, 2u, 80u, 206u, 17u, 222u, 131u, 2u, 96u, 148u,
71u, 120u, 12u, 9u, 129u, 185u, 29u, 220u, 48u, 37u, 12u, 201u, 29u,
212u, 48u, 57u, 208u, 206u, 138u, 25u, 161u, 67u, 54u, 104u, 103u, 9u,
35u, 186u, 6u, 4u, 199u, 16u, 142u, 230u, 24u, 18u, 134u, 104u, 142u,
228u, 24u, 18u, 134u, 112u, 142u, 224u, 24u, 19u, 29u, 114u, 59u,
112u, 96u, 76u, 113u, 8u, 237u, 161u, 129u, 40u, 103u, 72u, 237u,
129u, 129u, 144u, 10u, 25u, 209u, 67u, 60u, 40u, 103u, 201u, 36u, 38u,
53u, 36u, 142u, 212u, 24u, 19u, 53u, 114u, 59u, 72u, 96u, 76u, 218u,
136u, 236u, 225u, 129u, 51u, 87u, 35u, 178u, 134u, 7u, 49u, 67u, 129u,
67u, 58u, 69u, 12u, 208u, 161u, 155u, 52u, 51u, 132u, 145u, 217u, 3u,
2u, 104u, 70u, 169u, 29u, 140u, 48u, 37u, 12u, 209u, 29u, 136u, 48u,
37u, 12u, 225u, 29u, 128u, 48u, 38u, 132u, 132u, 17u, 215u, 131u, 2u,
104u, 70u, 169u, 29u, 112u, 48u, 38u, 132u, 71u, 145u, 214u, 195u, 2u,
80u, 206u, 145u, 214u, 67u, 2u, 104u, 68u, 121u, 29u, 96u, 48u, 50u,
1u, 67u, 58u, 40u, 103u, 133u, 12u, 249u, 36u, 132u, 208u, 136u, 66u,
71u, 86u, 12u, 9u, 161u, 160u, 68u, 117u, 80u, 192u, 154u, 26u, 42u,
71u, 83u, 12u, 9u, 161u, 160u, 68u, 117u, 32u, 193u, 67u, 54u, 72u,
233u, 225u, 128u, 80u, 224u, 144u, 154u, 30u, 14u, 27u, 104u, 103u,
66u, 104u, 104u, 16u, 77u, 8u, 132u, 36u, 142u, 156u, 24u, 18u, 8u,
35u, 166u, 134u, 8u, 44u, 80u, 225u, 16u, 154u, 30u, 172u, 26u, 67u,
109u, 12u, 232u, 76u, 213u, 194u, 99u, 82u, 73u, 35u, 166u, 6u, 4u,
209u, 17u, 18u, 58u, 72u, 96u, 161u, 195u, 161u, 153u, 161u, 196u,
36u, 116u, 128u, 192u, 148u, 51u, 36u, 116u, 80u, 193u, 67u, 52u, 40u,
102u, 205u, 12u, 225u, 35u, 162u, 6u, 4u, 161u, 154u, 35u, 161u, 134u,
4u, 161u, 156u, 35u, 160u, 134u, 4u, 209u, 61u, 162u, 57u, 248u, 96u,
77u, 19u, 199u, 35u, 159u, 6u, 4u, 161u, 197u, 35u, 157u, 6u, 6u, 81u,
67u, 141u, 67u, 138u, 67u, 8u, 161u, 199u, 36u, 80u, 228u, 1u, 67u,
147u, 67u, 138u, 69u, 14u, 80u, 77u, 19u, 199u, 36u, 146u, 57u, 200u,
96u, 77u, 22u, 95u, 35u, 156u, 6u, 4u, 161u, 197u, 35u, 155u, 134u,
6u, 64u, 40u, 113u, 69u, 12u, 217u, 36u, 38u, 139u, 42u, 18u, 57u,
176u, 96u, 77u, 25u, 29u, 35u, 153u, 134u, 10u, 28u, 58u, 25u, 154u,
28u, 178u, 71u, 50u, 12u, 9u, 67u, 50u, 71u, 48u, 12u, 20u, 57u, 130u,
135u, 40u, 80u, 205u, 10u, 25u, 179u, 67u, 56u, 73u, 35u, 151u, 134u,
4u, 209u, 184u, 146u, 57u, 112u, 96u, 74u, 25u, 162u, 57u, 104u, 96u,
74u, 25u, 194u, 57u, 88u, 96u, 77u, 27u, 156u, 35u, 148u, 134u, 4u,
209u, 184u, 146u, 57u, 32u, 96u, 161u, 195u, 161u, 153u, 161u, 205u,
36u, 114u, 48u, 192u, 148u, 51u, 36u, 113u, 240u, 193u, 67u, 53u, 67u,
51u, 67u, 56u, 72u, 227u, 193u, 129u, 40u, 102u, 136u, 227u, 161u,
129u, 40u, 103u, 8u, 227u, 129u, 129u, 40u, 102u, 72u, 227u, 33u,
130u, 135u, 56u, 80u, 205u, 154u, 25u, 194u, 71u, 24u, 12u, 9u, 67u,
56u, 71u, 22u, 12u, 9u, 164u, 34u, 36u, 113u, 48u, 192u, 40u, 115u,
200u, 77u, 32u, 222u, 36u, 113u, 32u, 192u, 148u, 51u, 36u, 113u, 16u,
193u, 67u, 156u, 40u, 102u, 205u, 12u, 225u, 35u, 136u, 6u, 4u, 161u,
156u, 35u, 135u, 6u, 4u, 210u, 56u, 162u, 56u, 96u, 96u, 77u, 35u,
87u, 35u, 131u, 134u, 10u, 28u, 58u, 25u, 154u, 28u, 242u, 71u, 6u,
12u, 9u, 67u, 50u, 71u, 2u, 12u, 2u, 135u, 26u, 134u, 100u, 134u, 17u,
67u, 142u, 73u, 35u, 128u, 134u, 4u, 210u, 100u, 98u, 56u, 0u, 96u,
74u, 25u, 146u, 24u, 131u, 3u, 24u, 161u, 153u, 161u, 156u, 33u, 176u,
38u, 147u, 33u, 128u, 154u, 74u, 136u, 40u, 114u, 0u, 161u, 201u,
161u, 208u, 34u, 135u, 40u, 38u, 145u, 171u, 146u, 72u, 9u, 163u,
200u, 2u, 135u, 32u, 38u, 141u, 161u, 146u, 2u, 104u, 210u, 32u, 109u,
161u, 197u, 9u, 163u, 35u, 161u, 52u, 89u, 80u, 144u, 19u, 68u, 178u,
2u, 104u, 136u, 33u, 13u, 33u, 48u, 28u, 36u, 146u,};
static unsigned char uvector__00043[] = {
 0u, 3u, 194u, 182u, 24u, 25u, 232u, 116u, 104u, 116u, 137u, 30u, 21u,
160u, 192u, 148u, 58u, 68u, 120u, 85u, 131u, 7u, 0u, 110u, 161u, 211u,
20u, 57u, 66u, 134u, 104u, 80u, 205u, 144u, 194u, 164u, 146u, 71u,
133u, 84u, 48u, 38u, 22u, 4u, 120u, 85u, 3u, 2u, 97u, 188u, 71u, 133u,
76u, 48u, 37u, 12u, 209u, 30u, 21u, 0u, 192u, 152u, 120u, 145u, 225u,
78u, 12u, 9u, 134u, 241u, 30u, 20u, 112u, 192u, 40u, 117u, 8u, 161u,
200u, 9u, 133u, 41u, 36u, 120u, 81u, 131u, 2u, 80u, 233u, 17u, 225u,
68u, 12u, 28u, 1u, 186u, 135u, 76u, 80u, 229u, 10u, 29u, 81u, 67u,
54u, 67u, 10u, 146u, 73u, 30u, 20u, 48u, 192u, 153u, 119u, 17u, 225u,
65u, 12u, 20u, 51u, 84u, 51u, 52u, 51u, 132u, 143u, 10u, 0u, 96u, 74u,
25u, 162u, 60u, 35u, 193u, 129u, 40u, 102u, 72u, 240u, 141u, 134u,
10u, 25u, 161u, 67u, 54u, 104u, 103u, 9u, 30u, 17u, 160u, 192u, 148u,
51u, 68u, 120u, 69u, 195u, 2u, 104u, 72u, 57u, 30u, 17u, 80u, 192u,
154u, 17u, 168u, 71u, 132u, 80u, 48u, 37u, 14u, 41u, 30u, 17u, 0u,
192u, 202u, 40u, 113u, 168u, 113u, 72u, 97u, 20u, 56u, 228u, 138u,
28u, 128u, 40u, 114u, 104u, 113u, 72u, 161u, 202u, 9u, 161u, 26u,
132u, 146u, 71u, 132u, 60u, 48u, 38u, 133u, 173u, 17u, 225u, 14u, 12u,
9u, 67u, 138u, 71u, 132u, 52u, 48u, 50u, 1u, 67u, 138u, 40u, 102u,
201u, 33u, 52u, 45u, 60u, 145u, 225u, 12u, 12u, 9u, 161u, 201u, 68u,
120u, 66u, 67u, 0u, 161u, 203u, 33u, 182u, 135u, 20u, 38u, 135u, 37u,
4u, 208u, 180u, 242u, 72u, 240u, 132u, 6u, 4u, 161u, 153u, 35u, 194u,
10u, 24u, 40u, 102u, 133u, 12u, 217u, 161u, 156u, 36u, 120u, 65u, 3u,
2u, 80u, 205u, 17u, 225u, 1u, 12u, 9u, 162u, 34u, 164u, 119u, 240u,
192u, 154u, 34u, 4u, 71u, 122u, 12u, 2u, 135u, 52u, 138u, 28u, 128u,
40u, 114u, 104u, 117u, 136u, 161u, 202u, 9u, 162u, 32u, 68u, 146u,
71u, 121u, 12u, 9u, 67u, 50u, 71u, 118u, 12u, 2u, 135u, 95u, 128u,
112u, 17u, 67u, 176u, 40u, 114u, 104u, 117u, 136u, 161u, 201u, 161u,
208u, 36u, 138u, 28u, 161u, 67u, 53u, 67u, 51u, 67u, 56u, 73u, 35u,
186u, 134u, 4u, 209u, 93u, 114u, 59u, 160u, 96u, 74u, 25u, 162u, 59u,
152u, 96u, 74u, 25u, 194u, 59u, 144u, 96u, 74u, 25u, 146u, 59u, 128u,
96u, 77u, 21u, 215u, 35u, 183u, 134u, 4u, 209u, 73u, 98u, 59u, 112u,
96u, 77u, 20u, 209u, 35u, 182u, 134u, 4u, 209u, 77u, 242u, 58u, 240u,
96u, 161u, 154u, 20u, 51u, 102u, 134u, 112u, 145u, 215u, 67u, 2u, 80u,
205u, 17u, 215u, 3u, 2u, 80u, 206u, 17u, 214u, 131u, 2u, 104u, 206u,
153u, 29u, 96u, 48u, 38u, 140u, 224u, 17u, 213u, 195u, 2u, 80u, 226u,
145u, 212u, 67u, 3u, 40u, 161u, 198u, 161u, 197u, 33u, 132u, 80u,
227u, 147u, 67u, 138u, 72u, 234u, 1u, 129u, 52u, 113u, 96u, 142u,
158u, 24u, 18u, 135u, 20u, 142u, 148u, 24u, 25u, 0u, 161u, 197u, 20u,
51u, 100u, 145u, 67u, 144u, 5u, 14u, 77u, 14u, 177u, 20u, 57u, 52u,
58u, 4u, 80u, 228u, 132u, 209u, 196u, 210u, 40u, 114u, 130u, 104u,
206u, 1u, 36u, 145u, 210u, 67u, 2u, 104u, 242u, 153u, 29u, 24u, 48u,
10u, 28u, 178u, 27u, 104u, 113u, 66u, 104u, 242u, 152u, 77u, 30u,
143u, 36u, 142u, 138u, 24u, 18u, 134u, 100u, 142u, 130u, 24u, 40u,
102u, 133u, 12u, 217u, 161u, 156u, 36u, 116u, 0u, 192u, 148u, 51u,
68u, 115u, 240u, 192u, 148u, 51u, 132u, 115u, 208u, 192u, 154u, 68u,
170u, 71u, 59u, 12u, 9u, 164u, 72u, 68u, 115u, 32u, 192u, 40u, 118u,
72u, 161u, 200u, 2u, 135u, 38u, 135u, 88u, 138u, 28u, 154u, 29u, 3u,
67u, 178u, 40u, 114u, 130u, 105u, 18u, 17u, 36u, 145u, 204u, 67u, 2u,
80u, 204u, 145u, 203u, 131u, 5u, 12u, 208u, 161u, 155u, 52u, 51u,
132u, 142u, 90u, 24u, 18u, 134u, 104u, 142u, 88u, 24u, 18u, 134u,
112u, 142u, 84u, 24u, 19u, 73u, 176u, 8u, 229u, 1u, 129u, 52u, 154u,
52u, 142u, 66u, 24u, 5u, 14u, 105u, 20u, 57u, 0u, 80u, 228u, 208u,
235u, 17u, 67u, 147u, 67u, 160u, 69u, 14u, 80u, 77u, 38u, 141u, 36u,
146u, 57u, 0u, 96u, 74u, 25u, 146u, 56u, 232u, 96u, 161u, 218u, 20u,
51u, 102u, 134u, 112u, 145u, 199u, 3u, 2u, 80u, 206u, 17u, 198u, 131u,
2u, 105u, 86u, 217u, 28u, 92u, 48u, 10u, 28u, 242u, 19u, 74u, 178u,
9u, 28u, 88u, 48u, 37u, 12u, 201u, 28u, 84u, 48u, 80u, 237u, 10u, 25u,
179u, 67u, 56u, 72u, 226u, 65u, 129u, 52u, 181u, 80u, 142u, 30u, 24u,
5u, 14u, 121u, 9u, 165u, 168u, 36u, 142u, 28u, 24u, 18u, 134u, 100u,
142u, 26u, 24u, 19u, 49u, 194u, 56u, 96u, 96u, 76u, 203u, 200u, 225u,
65u, 129u, 51u, 28u, 35u, 129u, 134u, 1u, 67u, 182u, 69u, 14u, 64u,
76u, 184u, 201u, 35u, 129u, 6u, 4u, 161u, 210u, 33u, 136u, 48u, 49u,
168u, 102u, 20u, 58u, 180u, 51u, 52u, 51u, 132u, 65u, 116u, 51u, 33u,
52u, 185u, 40u, 38u, 137u, 109u, 132u, 208u, 245u, 208u, 210u, 19u,
59u, 50u, 72u, 102u, 20u, 59u, 84u, 51u, 52u, 51u, 132u, 65u, 116u,
51u, 33u, 52u, 177u, 4u, 38u, 148u, 101u, 4u, 210u, 69u, 240u, 154u,
65u, 146u, 26u, 69u, 14u, 64u, 77u, 20u, 147u, 36u, 144u, 204u, 40u,
102u, 168u, 102u, 104u, 103u, 8u, 108u, 2u, 135u, 26u, 134u, 100u,
134u, 17u, 67u, 142u, 73u, 2u, 135u, 14u, 134u, 102u, 135u, 60u, 138u,
28u, 128u, 40u, 114u, 104u, 116u, 8u, 161u, 202u, 20u, 57u, 194u,
134u, 108u, 208u, 206u, 18u, 73u, 2u, 135u, 14u, 134u, 102u, 135u,
52u, 138u, 28u, 129u, 67u, 152u, 40u, 114u, 133u, 12u, 208u, 161u,
155u, 52u, 51u, 132u, 146u, 64u, 161u, 195u, 161u, 153u, 161u, 203u,
33u, 182u, 135u, 20u, 80u, 205u, 144u, 202u, 40u, 113u, 168u, 113u,
72u, 97u, 20u, 56u, 228u, 138u, 28u, 128u, 40u, 114u, 104u, 113u, 72u,
161u, 202u, 20u, 51u, 66u, 134u, 108u, 208u, 206u, 18u, 73u, 36u, 10u,
28u, 58u, 25u, 154u, 28u, 66u, 32u, 177u, 67u, 132u, 64u, 161u, 193u,
34u, 134u, 108u, 134u, 218u, 25u, 209u, 67u, 60u, 40u, 103u, 201u,
14u, 98u, 135u, 2u, 134u, 116u, 138u, 25u, 161u, 67u, 54u, 104u, 103u,
9u, 36u, 52u, 134u, 218u, 25u, 209u, 67u, 60u, 40u, 103u, 201u, 14u,
116u, 51u, 162u, 134u, 104u, 80u, 205u, 154u, 25u, 194u, 73u, 36u,
52u, 135u, 58u, 25u, 145u, 67u, 52u, 40u, 102u, 205u, 12u, 225u, 36u,
144u, 204u, 40u, 115u, 168u, 102u, 104u, 103u, 8u, 130u, 232u, 102u,
64u, 161u, 207u, 34u, 135u, 56u, 80u, 205u, 154u, 25u, 194u, 67u, 72u,
161u, 154u, 161u, 153u, 161u, 156u, 36u, 145u, 5u, 208u, 233u, 4u,
211u, 5u, 64u, 153u, 35u, 134u, 144u, 152u, 17u, 18u, 73u, 0u,};
static unsigned char uvector__00044[] = {
 0u, 3u, 162u, 134u, 10u, 29u, 192u, 249u, 67u, 186u, 104u, 119u,
137u, 29u, 16u, 48u, 37u, 14u, 241u, 29u, 12u, 48u, 38u, 5u, 228u,
116u, 32u, 192u, 148u, 59u, 164u, 116u, 0u, 193u, 2u, 192u, 193u,
162u, 135u, 116u, 146u, 57u, 248u, 96u, 76u, 71u, 136u, 231u, 97u,
129u, 49u, 7u, 35u, 156u, 6u, 10u, 29u, 192u, 249u, 67u, 186u, 67u,
189u, 14u, 233u, 36u, 115u, 112u, 192u, 152u, 242u, 145u, 205u, 131u,
2u, 80u, 238u, 145u, 205u, 67u, 2u, 99u, 142u, 71u, 52u, 12u, 9u, 67u,
186u, 71u, 49u, 12u, 2u, 135u, 124u, 132u, 198u, 208u, 145u, 204u, 3u,
2u, 65u, 4u, 114u, 240u, 193u, 5u, 136u, 48u, 52u, 80u, 238u, 146u,
19u, 45u, 176u, 210u, 30u, 130u, 98u, 14u, 19u, 1u, 194u, 73u, 28u,
180u, 48u, 38u, 107u, 132u, 114u, 192u, 192u, 153u, 180u, 145u, 202u,
131u, 2u, 102u, 184u, 71u, 39u, 12u, 12u, 240u, 109u, 14u, 233u, 35u,
147u, 6u, 4u, 161u, 221u, 35u, 145u, 6u, 6u, 176u, 213u, 67u, 186u,
73u, 28u, 132u, 48u, 38u, 133u, 3u, 145u, 199u, 131u, 5u, 16u, 0u,
162u, 1u, 20u, 64u, 84u, 41u, 225u, 201u, 67u, 48u, 161u, 213u, 161u,
153u, 161u, 156u, 34u, 11u, 161u, 153u, 2u, 135u, 60u, 138u, 29u,
161u, 67u, 54u, 104u, 103u, 9u, 2u, 135u, 52u, 138u, 28u, 128u, 40u,
114u, 104u, 117u, 136u, 161u, 202u, 20u, 51u, 66u, 134u, 108u, 208u,
206u, 18u, 73u, 2u, 135u, 44u, 134u, 218u, 28u, 81u, 67u, 54u, 67u,
40u, 161u, 198u, 161u, 197u, 33u, 132u, 80u, 227u, 146u, 40u, 114u,
0u, 161u, 201u, 161u, 197u, 34u, 135u, 40u, 80u, 205u, 10u, 25u, 179u,
67u, 56u, 73u, 36u, 144u, 210u, 40u, 102u, 168u, 102u, 104u, 103u, 9u,
36u, 51u, 10u, 29u, 170u, 25u, 154u, 25u, 194u, 32u, 186u, 25u, 144u,
40u, 115u, 200u, 161u, 218u, 20u, 51u, 102u, 134u, 112u, 144u, 40u,
115u, 72u, 161u, 200u, 2u, 135u, 38u, 135u, 88u, 138u, 28u, 154u, 29u,
2u, 40u, 114u, 133u, 12u, 208u, 161u, 155u, 52u, 51u, 132u, 146u, 64u,
161u, 217u, 34u, 135u, 32u, 10u, 28u, 154u, 29u, 98u, 40u, 114u, 104u,
116u, 13u, 14u, 200u, 161u, 202u, 20u, 51u, 66u, 134u, 108u, 208u,
206u, 18u, 73u, 2u, 135u, 44u, 134u, 218u, 28u, 81u, 67u, 54u, 69u,
14u, 64u, 20u, 57u, 52u, 58u, 196u, 80u, 228u, 208u, 232u, 17u, 67u,
146u, 25u, 69u, 14u, 53u, 14u, 41u, 12u, 34u, 135u, 28u, 154u, 28u,
82u, 69u, 14u, 80u, 161u, 154u, 20u, 51u, 102u, 134u, 112u, 146u, 73u,
13u, 34u, 135u, 32u, 10u, 29u, 126u, 1u, 192u, 69u, 14u, 192u, 161u,
201u, 161u, 214u, 34u, 135u, 38u, 135u, 64u, 146u, 40u, 114u, 133u,
12u, 213u, 12u, 205u, 12u, 225u, 36u, 146u, 67u, 48u, 161u, 154u,
161u, 153u, 161u, 156u, 33u, 176u, 10u, 28u, 106u, 25u, 146u, 24u,
69u, 14u, 57u, 36u, 10u, 28u, 58u, 25u, 154u, 28u, 242u, 40u, 114u,
0u, 161u, 201u, 161u, 208u, 34u, 135u, 40u, 80u, 231u, 10u, 25u, 179u,
67u, 56u, 73u, 36u, 10u, 28u, 58u, 25u, 154u, 28u, 210u, 40u, 114u,
5u, 14u, 96u, 161u, 202u, 20u, 51u, 66u, 134u, 108u, 208u, 206u, 18u,
73u, 2u, 135u, 14u, 134u, 102u, 135u, 44u, 134u, 218u, 28u, 81u, 67u,
54u, 67u, 40u, 161u, 198u, 161u, 197u, 33u, 132u, 80u, 227u, 146u,
40u, 114u, 0u, 161u, 201u, 161u, 197u, 34u, 135u, 40u, 80u, 205u, 10u,
25u, 179u, 67u, 56u, 73u, 36u, 144u, 40u, 112u, 232u, 102u, 104u,
113u, 8u, 130u, 197u, 14u, 17u, 2u, 135u, 4u, 138u, 25u, 178u, 27u,
104u, 103u, 69u, 12u, 240u, 161u, 159u, 36u, 57u, 138u, 28u, 10u, 25u,
210u, 40u, 102u, 133u, 12u, 217u, 161u, 156u, 36u, 144u, 210u, 27u,
104u, 103u, 69u, 12u, 240u, 161u, 159u, 36u, 57u, 208u, 206u, 138u,
25u, 161u, 67u, 54u, 104u, 103u, 9u, 36u, 144u, 210u, 28u, 232u, 102u,
69u, 12u, 208u, 161u, 155u, 52u, 51u, 132u, 146u, 67u, 48u, 161u,
206u, 161u, 153u, 161u, 156u, 34u, 11u, 161u, 153u, 2u, 135u, 60u,
138u, 28u, 225u, 67u, 54u, 104u, 103u, 9u, 13u, 34u, 134u, 106u, 134u,
102u, 134u, 112u, 146u, 68u, 23u, 67u, 164u, 5u, 14u, 217u, 20u, 57u,
3u, 128u, 55u, 80u, 233u, 138u, 28u, 161u, 67u, 170u, 40u, 102u, 200u,
97u, 82u, 73u, 36u, 10u, 29u, 66u, 40u, 114u, 7u, 0u, 110u, 161u,
211u, 20u, 57u, 66u, 134u, 104u, 80u, 205u, 144u, 194u, 164u, 146u,
72u, 105u, 12u, 244u, 58u, 52u, 58u, 68u, 146u, 73u, 35u, 142u, 6u,
4u, 208u, 176u, 130u, 56u, 208u, 96u, 77u, 11u, 27u, 35u, 140u, 6u,
6u, 53u, 9u, 161u, 113u, 161u, 52u, 69u, 100u, 38u, 141u, 174u, 132u,
210u, 116u, 208u, 154u, 82u, 154u, 72u, 226u, 225u, 129u, 40u, 83u,
200u, 226u, 161u, 129u, 52u, 44u, 108u, 142u, 38u, 24u, 19u, 66u,
194u, 8u, 226u, 33u, 129u, 40u, 119u, 136u, 225u, 97u, 129u, 148u,
72u, 180u, 59u, 198u, 135u, 110u, 135u, 120u, 145u, 194u, 67u, 2u,
105u, 134u, 201u, 28u, 32u, 48u, 37u, 14u, 241u, 28u, 24u, 48u, 38u,
152u, 108u, 145u, 193u, 3u, 3u, 93u, 14u, 233u, 35u, 129u, 134u, 4u,
161u, 221u, 35u, 128u, 6u, 4u, 162u, 3u, 33u, 136u, 48u, 49u, 138u,
20u, 249u, 28u, 80u, 233u, 80u, 237u, 146u, 25u, 168u, 102u, 232u,
129u, 8u, 102u, 161u, 214u, 12u, 34u, 133u, 69u, 40u, 129u, 73u, 12u,
212u, 58u, 1u, 132u, 80u, 235u, 240u, 6u, 234u, 28u, 194u, 72u, 77u,
10u, 213u, 36u, 128u,};
static unsigned char uvector__00045[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 66u, 161u, 66u, 159u, 35u, 138u, 29u, 42u,
29u, 178u, 67u, 53u, 12u, 221u, 16u, 33u, 12u, 212u, 58u, 193u, 132u,
80u, 168u, 165u, 16u, 41u, 33u, 154u, 135u, 64u, 48u, 138u, 29u, 126u,
0u, 221u, 67u, 152u, 73u, 20u, 64u, 2u, 136u, 4u, 81u, 1u, 80u, 167u,
135u, 37u, 12u, 194u, 135u, 86u, 134u, 102u, 134u, 112u, 136u, 46u,
134u, 100u, 10u, 28u, 242u, 40u, 118u, 133u, 12u, 217u, 161u, 156u,
36u, 10u, 28u, 210u, 40u, 114u, 0u, 161u, 201u, 161u, 214u, 34u, 135u,
40u, 80u, 205u, 10u, 25u, 179u, 67u, 56u, 73u, 36u, 10u, 28u, 178u,
27u, 104u, 113u, 69u, 12u, 217u, 12u, 162u, 135u, 26u, 135u, 20u,
134u, 17u, 67u, 142u, 72u, 161u, 200u, 2u, 135u, 38u, 135u, 20u, 138u,
28u, 161u, 67u, 52u, 40u, 102u, 205u, 12u, 225u, 36u, 146u, 67u, 72u,
161u, 154u, 161u, 153u, 161u, 156u, 36u, 144u, 204u, 40u, 118u, 168u,
102u, 104u, 103u, 8u, 130u, 232u, 102u, 64u, 161u, 207u, 34u, 135u,
104u, 80u, 205u, 154u, 25u, 194u, 64u, 161u, 205u, 34u, 135u, 32u,
10u, 28u, 154u, 29u, 98u, 40u, 114u, 104u, 116u, 8u, 161u, 202u, 20u,
51u, 66u, 134u, 108u, 208u, 206u, 18u, 73u, 2u, 135u, 100u, 138u, 28u,
128u, 40u, 114u, 104u, 117u, 136u, 161u, 201u, 161u, 208u, 52u, 59u,
34u, 135u, 40u, 80u, 205u, 10u, 25u, 179u, 67u, 56u, 73u, 36u, 10u,
28u, 178u, 27u, 104u, 113u, 69u, 12u, 217u, 20u, 57u, 0u, 80u, 228u,
208u, 235u, 17u, 67u, 147u, 67u, 160u, 69u, 14u, 72u, 101u, 20u, 56u,
212u, 56u, 164u, 48u, 138u, 28u, 114u, 104u, 113u, 73u, 20u, 57u, 66u,
134u, 104u, 80u, 205u, 154u, 25u, 194u, 73u, 36u, 52u, 138u, 28u,
128u, 40u, 117u, 248u, 7u, 1u, 20u, 59u, 2u, 135u, 38u, 135u, 88u,
138u, 28u, 154u, 29u, 2u, 72u, 161u, 202u, 20u, 51u, 84u, 51u, 52u,
51u, 132u, 146u, 73u, 12u, 194u, 134u, 106u, 134u, 102u, 134u, 112u,
134u, 192u, 40u, 113u, 168u, 102u, 72u, 97u, 20u, 56u, 228u, 144u,
40u, 112u, 232u, 102u, 104u, 115u, 200u, 161u, 200u, 2u, 135u, 38u,
135u, 64u, 138u, 28u, 161u, 67u, 156u, 40u, 102u, 205u, 12u, 225u,
36u, 144u, 40u, 112u, 232u, 102u, 104u, 115u, 72u, 161u, 200u, 20u,
57u, 130u, 135u, 40u, 80u, 205u, 10u, 25u, 179u, 67u, 56u, 73u, 36u,
10u, 28u, 58u, 25u, 154u, 28u, 178u, 27u, 104u, 113u, 69u, 12u, 217u,
12u, 162u, 135u, 26u, 135u, 20u, 134u, 17u, 67u, 142u, 72u, 161u,
200u, 2u, 135u, 38u, 135u, 20u, 138u, 28u, 161u, 67u, 52u, 40u, 102u,
205u, 12u, 225u, 36u, 146u, 64u, 161u, 195u, 161u, 153u, 161u, 196u,
34u, 11u, 20u, 56u, 68u, 10u, 28u, 18u, 40u, 102u, 200u, 109u, 161u,
157u, 20u, 51u, 194u, 134u, 124u, 144u, 230u, 40u, 112u, 40u, 103u,
72u, 161u, 154u, 20u, 51u, 102u, 134u, 112u, 146u, 67u, 72u, 109u,
161u, 157u, 20u, 51u, 194u, 134u, 124u, 144u, 231u, 67u, 58u, 40u,
102u, 133u, 12u, 217u, 161u, 156u, 36u, 146u, 67u, 72u, 115u, 161u,
153u, 20u, 51u, 66u, 134u, 108u, 208u, 206u, 18u, 73u, 12u, 194u,
135u, 58u, 134u, 102u, 134u, 112u, 136u, 46u, 134u, 100u, 10u, 28u,
242u, 40u, 115u, 133u, 12u, 217u, 161u, 156u, 36u, 52u, 138u, 25u,
170u, 25u, 154u, 25u, 194u, 73u, 16u, 93u, 14u, 144u, 20u, 59u, 100u,
80u, 228u, 14u, 0u, 221u, 67u, 166u, 40u, 114u, 133u, 14u, 168u, 161u,
155u, 33u, 133u, 73u, 36u, 144u, 40u, 117u, 8u, 161u, 200u, 28u, 1u,
186u, 135u, 76u, 80u, 229u, 10u, 25u, 161u, 67u, 54u, 67u, 10u, 146u,
73u, 33u, 164u, 51u, 208u, 232u, 208u, 233u, 18u, 73u, 36u, 145u,
194u, 67u, 3u, 24u, 76u, 13u, 211u, 7u, 162u, 56u, 56u, 96u, 76u, 7u,
8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00046[] = {
 0u, 3u, 151u, 6u, 7u, 16u, 213u, 67u, 58u, 67u, 152u, 104u, 161u,
157u, 48u, 169u, 36u, 114u, 208u, 192u, 152u, 34u, 145u, 203u, 3u, 2u,
66u, 164u, 114u, 160u, 192u, 152u, 40u, 17u, 202u, 3u, 2u, 96u, 78u,
71u, 38u, 12u, 2u, 136u, 24u, 52u, 80u, 206u, 146u, 19u, 1u, 194u,
71u, 37u, 12u, 9u, 138u, 113u, 28u, 144u, 48u, 38u, 44u, 36u, 114u,
0u, 193u, 68u, 14u, 33u, 232u, 84u, 146u, 56u, 248u, 96u, 76u, 136u,
136u, 227u, 193u, 129u, 33u, 82u, 56u, 216u, 96u, 123u, 13u, 20u, 51u,
164u, 48u, 208u, 227u, 146u, 71u, 26u, 12u, 9u, 149u, 217u, 28u, 96u,
48u, 53u, 134u, 170u, 25u, 210u, 72u, 226u, 225u, 129u, 51u, 76u, 35u,
138u, 6u, 6u, 160u, 249u, 68u, 16u, 73u, 28u, 76u, 48u, 38u, 119u,
228u, 113u, 32u, 192u, 148u, 65u, 36u, 112u, 240u, 192u, 246u, 40u,
130u, 168u, 130u, 72u, 97u, 161u, 211u, 36u, 142u, 28u, 24u, 26u, 19u,
59u, 194u, 56u, 104u, 96u, 76u, 239u, 200u, 225u, 129u, 129u, 40u,
130u, 72u, 225u, 65u, 130u, 136u, 44u, 81u, 6u, 81u, 4u, 158u, 8u,
72u, 224u, 225u, 129u, 52u, 43u, 36u, 142u, 12u, 24u, 18u, 136u, 36u,
142u, 10u, 24u, 25u, 0u, 162u, 9u, 20u, 65u, 180u, 65u, 196u, 144u,
224u, 19u, 66u, 165u, 130u, 104u, 68u, 184u, 100u, 113u, 2u, 134u,
116u, 81u, 7u, 209u, 4u, 146u, 33u, 80u, 194u, 164u, 144u, 216u, 2u,
102u, 130u, 28u, 2u, 101u, 96u, 19u, 32u, 242u, 66u, 98u, 150u, 26u,
91u, 137u, 36u, 145u, 192u, 195u, 2u, 104u, 98u, 217u, 28u, 8u, 48u,
37u, 16u, 113u, 28u, 0u, 48u, 38u, 134u, 45u, 144u, 196u, 24u, 24u,
197u, 16u, 113u, 13u, 180u, 65u, 33u, 52u, 49u, 108u, 38u, 134u, 99u,
146u, 72u,};
static unsigned char uvector__00047[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 68u, 33u, 68u, 28u, 67u, 109u, 16u, 72u,
162u, 13u, 162u, 14u, 33u, 192u, 81u, 5u, 138u, 32u, 202u, 32u, 147u,
193u, 8u, 123u, 20u, 65u, 84u, 65u, 36u, 48u, 208u, 233u, 146u, 25u,
28u, 64u, 161u, 157u, 20u, 65u, 244u, 65u, 36u, 136u, 84u, 48u, 169u,
36u, 54u, 0u, 214u, 26u, 168u, 103u, 73u, 14u, 1u, 236u, 52u, 80u,
206u, 144u, 195u, 67u, 142u, 72u, 162u, 7u, 16u, 244u, 42u, 73u, 32u,
81u, 3u, 6u, 138u, 25u, 210u, 67u, 136u, 106u, 161u, 157u, 33u, 204u,
52u, 80u, 206u, 152u, 84u, 146u, 26u, 91u, 137u, 36u, 146u, 56u, 72u,
96u, 99u, 9u, 129u, 186u, 96u, 148u, 71u, 7u, 12u, 9u, 128u, 225u,
28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00048[] = {
 0u, 3u, 147u, 6u, 4u, 162u, 17u, 35u, 145u, 6u, 8u, 158u, 136u, 70u,
136u, 72u, 145u, 200u, 67u, 2u, 81u, 9u, 17u, 200u, 3u, 2u, 81u, 8u,
145u, 199u, 131u, 2u, 96u, 152u, 71u, 28u, 12u, 20u, 66u, 96u, 81u,
10u, 10u, 33u, 90u, 33u, 18u, 64u, 162u, 11u, 162u, 20u, 224u, 4u,
128u, 242u, 40u, 112u, 197u, 16u, 181u, 16u, 136u, 162u, 23u, 162u,
20u, 224u, 36u, 138u, 33u, 106u, 33u, 46u, 0u, 73u, 36u, 38u, 9u,
132u, 142u, 54u, 24u, 19u, 26u, 242u, 56u, 208u, 96u, 76u, 110u, 136u,
227u, 1u, 129u, 50u, 36u, 35u, 139u, 6u, 4u, 162u, 18u, 35u, 138u, 6u,
4u, 200u, 144u, 142u, 36u, 24u, 19u, 28u, 210u, 56u, 136u, 96u, 76u,
124u, 8u, 226u, 1u, 129u, 40u, 132u, 72u, 225u, 193u, 129u, 49u, 205u,
35u, 134u, 6u, 4u, 197u, 224u, 142u, 18u, 24u, 19u, 18u, 50u, 56u,
64u, 96u, 74u, 33u, 66u, 56u, 56u, 96u, 76u, 72u, 200u, 224u, 161u,
129u, 49u, 76u, 35u, 130u, 6u, 4u, 162u, 17u, 35u, 129u, 6u, 4u, 197u,
48u, 142u, 0u, 24u, 18u, 136u, 68u, 134u, 32u, 192u, 198u, 40u, 132u,
72u, 112u, 162u, 17u, 14u, 193u, 49u, 35u, 162u, 17u, 36u, 146u,};
static unsigned char uvector__00049[] = {
 0u, 3u, 148u, 6u, 4u, 161u, 29u, 35u, 147u, 134u, 4u, 161u, 29u, 35u,
144u, 6u, 10u, 16u, 170u, 33u, 138u, 17u, 210u, 71u, 31u, 12u, 9u,
66u, 20u, 71u, 30u, 12u, 9u, 66u, 58u, 71u, 29u, 12u, 9u, 68u, 48u,
71u, 27u, 12u, 9u, 131u, 225u, 28u, 92u, 48u, 81u, 12u, 209u, 12u,
18u, 56u, 176u, 96u, 74u, 33u, 130u, 56u, 160u, 96u, 76u, 98u, 72u,
226u, 65u, 130u, 136u, 76u, 1u, 68u, 53u, 68u, 54u, 72u, 162u, 24u,
17u, 61u, 8u, 117u, 16u, 217u, 32u, 59u, 7u, 154u, 33u, 194u, 19u,
24u, 146u, 72u, 76u, 31u, 9u, 28u, 68u, 48u, 37u, 16u, 225u, 28u, 60u,
48u, 38u, 68u, 196u, 112u, 224u, 192u, 148u, 67u, 4u, 112u, 208u,
192u, 153u, 19u, 17u, 194u, 195u, 2u, 100u, 246u, 71u, 10u, 12u, 9u,
68u, 54u, 71u, 9u, 12u, 9u, 66u, 28u, 71u, 7u, 12u, 9u, 147u, 217u,
28u, 16u, 48u, 38u, 71u, 228u, 112u, 48u, 192u, 148u, 67u, 68u, 112u,
32u, 192u, 148u, 67u, 100u, 112u, 0u, 192u, 153u, 31u, 144u, 196u,
24u, 24u, 197u, 16u, 221u, 8u, 233u, 14u, 193u, 50u, 38u, 161u, 29u,
36u, 144u,};
static unsigned char uvector__00050[] = {
 0u, 3u, 187u, 134u, 10u, 17u, 160u, 228u, 40u, 134u, 232u, 71u, 72u,
118u, 20u, 66u, 96u, 10u, 33u, 170u, 33u, 178u, 69u, 16u, 192u, 137u,
232u, 67u, 168u, 134u, 201u, 1u, 216u, 60u, 209u, 14u, 17u, 68u, 51u,
68u, 48u, 73u, 34u, 132u, 42u, 136u, 98u, 132u, 116u, 154u, 17u, 210u,
104u, 71u, 69u, 16u, 232u, 130u, 232u, 81u, 128u, 126u, 33u, 218u,
136u, 122u, 65u, 36u, 6u, 226u, 29u, 168u, 135u, 225u, 210u, 67u, 77u,
10u, 49u, 36u, 145u, 221u, 67u, 2u, 99u, 90u, 71u, 116u, 12u, 9u, 66u,
140u, 71u, 107u, 12u, 9u, 68u, 62u, 71u, 104u, 12u, 9u, 144u, 201u,
29u, 156u, 48u, 37u, 10u, 49u, 29u, 120u, 48u, 37u, 16u, 241u, 29u,
108u, 48u, 38u, 59u, 164u, 117u, 160u, 192u, 148u, 40u, 196u, 117u,
128u, 192u, 152u, 214u, 145u, 213u, 195u, 2u, 80u, 142u, 145u, 213u,
3u, 3u, 24u, 76u, 14u, 130u, 96u, 192u, 72u, 234u, 97u, 129u, 40u,
71u, 72u, 233u, 225u, 129u, 40u, 71u, 72u, 233u, 161u, 130u, 132u,
42u, 136u, 98u, 132u, 116u, 145u, 211u, 3u, 2u, 80u, 133u, 17u, 210u,
195u, 2u, 80u, 142u, 145u, 210u, 131u, 2u, 81u, 12u, 17u, 209u, 131u,
5u, 16u, 205u, 16u, 193u, 35u, 162u, 134u, 4u, 162u, 24u, 35u, 161u,
134u, 4u, 208u, 189u, 210u, 58u, 0u, 96u, 74u, 33u, 194u, 57u, 240u,
96u, 101u, 14u, 2u, 137u, 2u, 136u, 96u, 135u, 96u, 243u, 68u, 56u,
66u, 104u, 94u, 233u, 33u, 52u, 40u, 122u, 132u, 116u, 145u, 207u, 3u,
2u, 104u, 110u, 49u, 28u, 236u, 48u, 37u, 16u, 193u, 28u, 228u, 48u,
38u, 134u, 227u, 17u, 206u, 3u, 3u, 32u, 20u, 67u, 2u, 39u, 161u, 14u,
162u, 17u, 36u, 132u, 208u, 217u, 2u, 71u, 54u, 12u, 9u, 162u, 18u,
196u, 115u, 80u, 192u, 144u, 65u, 28u, 208u, 48u, 37u, 8u, 113u, 28u,
200u, 48u, 38u, 136u, 75u, 17u, 204u, 3u, 0u, 162u, 16u, 162u, 26u,
52u, 50u, 66u, 137u, 4u, 54u, 209u, 12u, 4u, 209u, 9u, 96u, 154u, 27u,
32u, 73u, 35u, 151u, 134u, 4u, 130u, 8u, 229u, 193u, 129u, 52u, 76u,
20u, 142u, 88u, 24u, 19u, 68u, 194u, 8u, 229u, 97u, 129u, 40u, 134u,
136u, 229u, 33u, 129u, 52u, 76u, 32u, 142u, 78u, 24u, 40u, 66u, 168u,
67u, 168u, 71u, 73u, 28u, 152u, 48u, 37u, 8u, 81u, 28u, 148u, 48u,
37u, 8u, 233u, 28u, 144u, 48u, 37u, 8u, 113u, 28u, 132u, 48u, 61u,
209u, 13u, 6u, 24u, 128u, 146u, 57u, 0u, 96u, 74u, 33u, 162u, 56u,
248u, 96u, 100u, 2u, 132u, 56u, 65u, 116u, 40u, 192u, 63u, 16u, 237u,
68u, 61u, 68u, 36u, 72u, 13u, 196u, 59u, 81u, 15u, 195u, 68u, 134u,
145u, 19u, 208u, 163u, 81u, 9u, 18u, 73u, 13u, 128u, 38u, 140u, 12u,
132u, 209u, 101u, 162u, 19u, 68u, 193u, 67u, 72u, 76u, 7u, 9u, 36u,
113u, 208u, 192u, 154u, 53u, 62u, 71u, 28u, 12u, 9u, 68u, 36u, 71u,
27u, 12u, 9u, 66u, 140u, 71u, 25u, 12u, 9u, 163u, 83u, 228u, 113u, 0u,
192u, 148u, 67u, 228u, 112u, 208u, 192u, 154u, 52u, 48u, 71u, 12u,
12u, 9u, 66u, 140u, 71u, 9u, 12u, 9u, 68u, 36u, 71u, 4u, 12u, 9u, 68u,
60u, 71u, 1u, 12u, 9u, 163u, 50u, 196u, 112u, 0u, 192u, 148u, 40u,
196u, 49u, 6u, 6u, 49u, 66u, 21u, 66u, 59u, 66u, 141u, 68u, 53u, 68u,
56u, 67u, 109u, 8u, 112u, 77u, 25u, 89u, 9u, 163u, 99u, 100u, 146u,};
static unsigned char uvector__00051[] = {
 0u, 3u, 187u, 6u, 10u, 36u, 32u, 249u, 68u, 134u, 104u, 145u, 40u,
145u, 73u, 29u, 212u, 48u, 37u, 18u, 41u, 29u, 208u, 48u, 37u, 18u,
33u, 29u, 204u, 48u, 38u, 5u, 228u, 119u, 32u, 192u, 148u, 72u, 100u,
119u, 0u, 193u, 2u, 192u, 193u, 162u, 137u, 12u, 146u, 59u, 120u, 96u,
76u, 87u, 136u, 237u, 97u, 129u, 49u, 71u, 35u, 180u, 6u, 10u, 36u,
32u, 249u, 68u, 134u, 104u, 145u, 3u, 189u, 18u, 25u, 36u, 118u, 112u,
192u, 153u, 26u, 145u, 217u, 131u, 2u, 81u, 33u, 145u, 217u, 67u, 2u,
81u, 34u, 17u, 217u, 3u, 2u, 100u, 14u, 71u, 99u, 12u, 9u, 68u, 134u,
71u, 96u, 12u, 2u, 137u, 24u, 132u, 199u, 208u, 145u, 215u, 195u, 2u,
65u, 4u, 117u, 192u, 193u, 68u, 132u, 31u, 40u, 144u, 200u, 119u,
162u, 67u, 52u, 72u, 164u, 142u, 182u, 24u, 18u, 137u, 20u, 142u,
180u, 24u, 19u, 66u, 0u, 8u, 235u, 33u, 129u, 40u, 144u, 200u, 235u,
1u, 129u, 51u, 226u, 35u, 171u, 134u, 4u, 162u, 67u, 35u, 170u, 6u,
1u, 68u, 142u, 66u, 103u, 158u, 72u, 234u, 97u, 129u, 32u, 130u, 58u,
144u, 96u, 130u, 196u, 24u, 26u, 40u, 144u, 201u, 9u, 161u, 75u, 129u,
51u, 91u, 13u, 33u, 232u, 38u, 40u, 225u, 48u, 28u, 36u, 145u, 212u,
3u, 2u, 104u, 90u, 233u, 29u, 60u, 48u, 38u, 133u, 197u, 17u, 211u,
67u, 2u, 104u, 90u, 233u, 29u, 40u, 48u, 51u, 193u, 180u, 72u, 100u,
142u, 146u, 24u, 18u, 137u, 12u, 142u, 138u, 24u, 26u, 195u, 85u, 18u,
25u, 36u, 116u, 64u, 192u, 154u, 30u, 42u, 71u, 65u, 12u, 12u, 98u,
132u, 42u, 132u, 118u, 133u, 26u, 136u, 106u, 136u, 112u, 134u, 218u,
16u, 225u, 5u, 208u, 163u, 0u, 252u, 67u, 181u, 16u, 245u, 16u, 145u,
32u, 55u, 16u, 237u, 68u, 63u, 13u, 18u, 26u, 68u, 79u, 66u, 141u,
68u, 36u, 73u, 13u, 128u, 61u, 209u, 13u, 6u, 24u, 128u, 145u, 66u,
21u, 66u, 29u, 66u, 58u, 72u, 20u, 66u, 20u, 67u, 70u, 134u, 72u, 81u,
32u, 134u, 218u, 33u, 129u, 19u, 208u, 135u, 81u, 8u, 144u, 202u, 28u,
5u, 18u, 5u, 16u, 193u, 14u, 193u, 230u, 136u, 112u, 138u, 33u, 154u,
33u, 130u, 72u, 161u, 10u, 162u, 24u, 161u, 29u, 52u, 35u, 164u, 146u,
26u, 69u, 8u, 208u, 114u, 20u, 67u, 116u, 35u, 164u, 59u, 10u, 33u,
48u, 5u, 16u, 213u, 16u, 217u, 34u, 136u, 96u, 68u, 244u, 33u, 212u,
67u, 100u, 128u, 236u, 30u, 104u, 135u, 8u, 162u, 25u, 162u, 24u, 36u,
145u, 66u, 21u, 68u, 49u, 66u, 58u, 77u, 8u, 233u, 52u, 35u, 162u,
136u, 116u, 65u, 116u, 40u, 192u, 63u, 16u, 237u, 68u, 61u, 32u, 146u,
3u, 113u, 14u, 212u, 67u, 240u, 233u, 33u, 166u, 133u, 24u, 146u, 73u,
36u, 142u, 126u, 24u, 40u, 146u, 40u, 146u, 73u, 28u, 248u, 48u, 37u,
18u, 65u, 28u, 244u, 48u, 37u, 18u, 73u, 28u, 236u, 48u, 38u, 141u,
225u, 17u, 206u, 67u, 5u, 18u, 69u, 18u, 81u, 35u, 156u, 6u, 4u, 162u,
72u, 35u, 155u, 134u, 4u, 162u, 74u, 35u, 154u, 134u, 4u, 209u, 213u,
82u, 57u, 144u, 96u, 100u, 2u, 136u, 72u, 50u, 138u, 36u, 177u, 68u,
152u, 76u, 37u, 32u, 146u, 67u, 48u, 162u, 72u, 162u, 17u, 33u, 194u,
136u, 68u, 59u, 10u, 33u, 48u, 40u, 133u, 5u, 16u, 173u, 16u, 137u,
32u, 81u, 5u, 209u, 10u, 112u, 2u, 64u, 121u, 20u, 56u, 98u, 136u,
90u, 136u, 68u, 81u, 11u, 209u, 10u, 112u, 18u, 69u, 16u, 181u, 16u,
151u, 0u, 36u, 146u, 34u, 122u, 33u, 26u, 33u, 34u, 104u, 132u, 73u,
33u, 154u, 136u, 120u, 38u, 142u, 170u, 144u, 205u, 68u, 62u, 19u,
70u, 240u, 136u, 114u, 9u, 162u, 1u, 193u, 52u, 67u, 16u, 146u, 57u,
80u, 96u, 77u, 31u, 73u, 35u, 148u, 134u, 4u, 209u, 245u, 66u, 57u,
32u, 96u, 77u, 31u, 135u, 35u, 145u, 6u, 4u, 209u, 248u, 114u, 57u,
0u, 96u, 77u, 31u, 84u, 35u, 143u, 6u, 4u, 162u, 69u, 35u, 140u, 134u,
6u, 81u, 34u, 209u, 34u, 150u, 234u, 36u, 82u, 71u, 23u, 12u, 9u,
164u, 249u, 228u, 113u, 96u, 192u, 148u, 72u, 164u, 113u, 64u, 192u,
154u, 79u, 158u, 71u, 18u, 12u, 9u, 68u, 136u, 71u, 13u, 12u, 12u,
162u, 69u, 162u, 68u, 45u, 212u, 72u, 132u, 142u, 22u, 24u, 19u, 74u,
133u, 136u, 225u, 65u, 129u, 40u, 145u, 8u, 225u, 1u, 129u, 52u, 168u,
88u, 142u, 12u, 24u, 26u, 232u, 144u, 201u, 28u, 20u, 48u, 37u, 18u,
25u, 28u, 0u, 48u, 37u, 18u, 105u, 12u, 65u, 129u, 140u, 72u, 226u,
137u, 41u, 184u, 138u, 36u, 150u, 226u, 67u, 109u, 16u, 144u, 77u,
31u, 73u, 9u, 163u, 251u, 161u, 52u, 142u, 120u, 38u, 146u, 11u, 132u,
210u, 73u, 2u, 73u, 0u,};
static unsigned char uvector__00052[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 68u, 157u, 35u, 138u, 36u, 166u, 226u,
40u, 146u, 91u, 137u, 13u, 180u, 66u, 65u, 148u, 81u, 37u, 138u, 36u,
194u, 97u, 41u, 4u, 134u, 97u, 68u, 145u, 68u, 34u, 67u, 133u, 16u,
136u, 118u, 20u, 66u, 96u, 81u, 10u, 10u, 33u, 90u, 33u, 18u, 64u,
162u, 11u, 162u, 20u, 224u, 4u, 128u, 242u, 40u, 112u, 197u, 16u,
181u, 16u, 136u, 162u, 23u, 162u, 20u, 224u, 36u, 138u, 33u, 106u,
33u, 46u, 0u, 73u, 36u, 68u, 244u, 66u, 52u, 66u, 68u, 209u, 8u, 146u,
67u, 53u, 16u, 240u, 162u, 72u, 162u, 74u, 36u, 51u, 81u, 15u, 138u,
36u, 138u, 36u, 146u, 67u, 144u, 161u, 10u, 161u, 29u, 161u, 70u,
162u, 26u, 162u, 28u, 33u, 182u, 132u, 56u, 65u, 116u, 40u, 192u, 63u,
16u, 237u, 68u, 61u, 68u, 36u, 72u, 13u, 196u, 59u, 81u, 15u, 195u,
68u, 134u, 145u, 19u, 208u, 163u, 81u, 9u, 18u, 67u, 96u, 15u, 116u,
67u, 65u, 134u, 32u, 36u, 80u, 133u, 80u, 135u, 80u, 142u, 146u, 5u,
16u, 133u, 16u, 209u, 161u, 146u, 20u, 72u, 33u, 182u, 136u, 96u, 68u,
244u, 33u, 212u, 66u, 36u, 50u, 135u, 1u, 68u, 129u, 68u, 48u, 67u,
176u, 121u, 162u, 28u, 34u, 136u, 102u, 136u, 96u, 146u, 40u, 66u,
168u, 134u, 40u, 71u, 77u, 8u, 233u, 36u, 134u, 145u, 66u, 52u, 28u,
133u, 16u, 221u, 8u, 233u, 14u, 194u, 136u, 76u, 1u, 68u, 53u, 68u,
54u, 72u, 162u, 24u, 17u, 61u, 8u, 117u, 16u, 217u, 32u, 59u, 7u,
154u, 33u, 194u, 40u, 134u, 104u, 134u, 9u, 36u, 80u, 133u, 81u, 12u,
80u, 142u, 147u, 66u, 58u, 77u, 8u, 232u, 162u, 29u, 16u, 93u, 10u,
48u, 15u, 196u, 59u, 81u, 15u, 72u, 36u, 128u, 220u, 67u, 181u, 16u,
252u, 58u, 72u, 105u, 161u, 70u, 36u, 146u, 73u, 36u, 142u, 18u, 24u,
24u, 194u, 96u, 110u, 152u, 64u, 17u, 193u, 195u, 2u, 96u, 56u, 71u,
2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00053[] = {
 0u, 3u, 134u, 6u, 6u, 106u, 20u, 49u, 68u, 156u, 73u, 28u, 36u, 48u,
38u, 6u, 228u, 112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u,
56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
#if defined(GAUCHE_WINDOWS)
static void handle_cleanup(ScmObj h);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
static void handle_print(ScmObj h,ScmPort* p,ScmWriteContext* G2289 SCM_UNUSED);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
static ScmClass *WinHandleClass = NULL;
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
static ScmObj libsyssys_win_processP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_win_processP__STUB, 1, 0,SCM_FALSE,libsyssys_win_processP, NULL, NULL);

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
static ScmObj libsyssys_win_process_pid(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_win_process_pid__STUB, 1, 0,SCM_FALSE,libsyssys_win_process_pid, NULL, NULL);

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
static ScmObj libsyssys_get_osfhandle(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_get_osfhandle__STUB, 1, 0,SCM_FALSE,libsyssys_get_osfhandle, NULL, NULL);

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
static ScmObj libsyssys_win_pipe_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libsyssys_win_pipe_name__STUB, 1, 0,SCM_FALSE,libsyssys_win_pipe_name, NULL, NULL);

#endif /* defined(GAUCHE_WINDOWS) */
static unsigned char uvector__00054[] = {
 0u, 3u, 139u, 134u, 10u, 36u, 241u, 68u, 161u, 67u, 54u, 73u, 28u,
88u, 48u, 38u, 5u, 228u, 113u, 48u, 192u, 148u, 51u, 100u, 113u, 16u,
192u, 152u, 23u, 145u, 196u, 3u, 5u, 16u, 152u, 2u, 137u, 68u, 48u,
201u, 100u, 48u, 209u, 41u, 18u, 69u, 12u, 216u, 162u, 82u, 162u, 83u,
36u, 132u, 192u, 112u, 145u, 195u, 195u, 2u, 80u, 205u, 145u, 195u,
131u, 2u, 97u, 250u, 71u, 12u, 12u, 9u, 139u, 193u, 28u, 44u, 48u,
37u, 18u, 153u, 28u, 36u, 48u, 38u, 47u, 4u, 112u, 128u, 192u, 152u,
126u, 145u, 193u, 131u, 2u, 98u, 44u, 71u, 0u, 12u, 9u, 136u, 177u,
12u, 65u, 129u, 140u, 81u, 41u, 144u, 152u, 126u, 146u, 64u,};
static unsigned char uvector__00055[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 68u, 169u, 68u, 166u, 69u, 16u, 152u, 2u,
137u, 68u, 48u, 201u, 100u, 48u, 209u, 41u, 18u, 69u, 12u, 216u, 162u,
82u, 162u, 83u, 36u, 138u, 36u, 241u, 68u, 161u, 67u, 54u, 73u, 36u,
112u, 144u, 192u, 198u, 19u, 3u, 116u, 193u, 40u, 142u, 14u, 24u, 19u,
1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00056[] = {
 0u, 3u, 139u, 6u, 8u, 156u, 81u, 42u, 135u, 65u, 68u, 173u, 192u,
133u, 16u, 168u, 139u, 184u, 9u, 39u, 128u, 154u, 28u, 179u, 68u,
174u, 72u, 226u, 33u, 129u, 48u, 41u, 35u, 134u, 134u, 4u, 192u, 240u,
142u, 24u, 24u, 19u, 4u, 114u, 56u, 80u, 96u, 76u, 25u, 72u, 225u,
33u, 129u, 48u, 120u, 35u, 132u, 6u, 4u, 139u, 136u, 224u, 161u, 129u,
48u, 120u, 35u, 129u, 134u, 4u, 193u, 148u, 142u, 0u, 24u, 19u, 2u,
146u, 24u, 131u, 3u, 24u, 139u, 136u, 146u, 98u, 112u, 152u, 20u,
209u, 43u, 146u, 72u,};
static unsigned char uvector__00057[] = {
 0u, 3u, 169u, 134u, 10u, 37u, 129u, 68u, 179u, 68u, 34u, 73u, 29u,
68u, 48u, 38u, 5u, 228u, 117u, 0u, 192u, 148u, 66u, 36u, 116u, 224u,
192u, 152u, 23u, 145u, 211u, 67u, 2u, 81u, 8u, 145u, 210u, 131u, 4u,
79u, 68u, 174u, 36u, 154u, 37u, 170u, 37u, 186u, 33u, 17u, 67u, 38u,
36u, 152u, 156u, 81u, 42u, 135u, 65u, 68u, 173u, 192u, 133u, 16u,
168u, 139u, 184u, 9u, 39u, 128u, 154u, 28u, 179u, 68u, 174u, 73u,
162u, 87u, 36u, 116u, 80u, 193u, 68u, 181u, 68u, 183u, 68u, 34u, 19u,
24u, 114u, 71u, 68u, 12u, 9u, 68u, 184u, 71u, 67u, 12u, 9u, 68u, 34u,
71u, 63u, 12u, 9u, 148u, 57u, 28u, 236u, 48u, 10u, 37u, 218u, 33u,
18u, 36u, 152u, 158u, 137u, 92u, 38u, 41u, 84u, 74u, 228u, 145u, 206u,
131u, 2u, 102u, 248u, 71u, 55u, 12u, 9u, 68u, 34u, 71u, 53u, 12u, 9u,
155u, 225u, 28u, 208u, 48u, 37u, 16u, 137u, 28u, 196u, 48u, 68u, 244u,
74u, 244u, 66u, 52u, 74u, 228u, 142u, 92u, 24u, 18u, 136u, 68u, 142u,
84u, 24u, 25u, 68u, 173u, 68u, 35u, 68u, 188u, 66u, 104u, 76u, 77u,
16u, 137u, 35u, 148u, 6u, 4u, 208u, 169u, 210u, 57u, 40u, 96u, 74u,
33u, 18u, 57u, 24u, 96u, 77u, 10u, 157u, 35u, 143u, 134u, 8u, 22u,
137u, 126u, 136u, 68u, 145u, 199u, 131u, 2u, 81u, 8u, 145u, 198u,
131u, 2u, 104u, 102u, 97u, 28u, 96u, 48u, 60u, 10u, 40u, 10u, 33u,
18u, 19u, 67u, 51u, 9u, 28u, 92u, 48u, 38u, 135u, 34u, 17u, 197u, 3u,
2u, 81u, 8u, 145u, 196u, 131u, 2u, 104u, 114u, 33u, 28u, 64u, 48u,
81u, 64u, 132u, 208u, 225u, 144u, 154u, 21u, 36u, 72u, 225u, 225u,
129u, 40u, 160u, 72u, 225u, 97u, 128u, 67u, 52u, 66u, 48u, 209u, 162u,
130u, 36u, 112u, 144u, 192u, 154u, 34u, 162u, 71u, 6u, 12u, 9u, 68u,
34u, 71u, 4u, 12u, 9u, 162u, 42u, 36u, 112u, 32u, 192u, 30u, 68u,
215u, 68u, 34u, 72u, 76u, 7u, 9u, 28u, 4u, 48u, 38u, 137u, 166u, 145u,
192u, 3u, 2u, 81u, 8u, 144u, 196u, 24u, 24u, 197u, 16u, 141u, 20u, 9u,
13u, 129u, 52u, 76u, 124u, 38u, 136u, 167u, 4u, 209u, 1u, 144u, 153u,
188u, 134u, 154u, 33u, 18u, 73u, 32u,};
static unsigned char uvector__00058[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 68u, 177u, 68u, 35u, 69u, 2u, 67u, 96u,
15u, 34u, 107u, 162u, 17u, 36u, 81u, 44u, 10u, 37u, 154u, 33u, 18u,
72u, 16u, 205u, 16u, 140u, 52u, 104u, 160u, 136u, 162u, 129u, 15u, 2u,
138u, 2u, 136u, 68u, 136u, 22u, 137u, 126u, 136u, 68u, 144u, 202u,
37u, 106u, 33u, 26u, 37u, 226u, 34u, 122u, 37u, 122u, 33u, 26u, 37u,
115u, 68u, 34u, 72u, 20u, 75u, 180u, 66u, 36u, 73u, 49u, 61u, 18u,
184u, 146u, 104u, 150u, 168u, 150u, 232u, 132u, 69u, 12u, 152u, 146u,
98u, 113u, 68u, 170u, 29u, 5u, 18u, 183u, 2u, 20u, 66u, 162u, 46u,
224u, 36u, 158u, 2u, 104u, 114u, 205u, 18u, 185u, 38u, 137u, 92u,
144u, 211u, 68u, 34u, 73u, 35u, 133u, 134u, 6u, 48u, 152u, 27u, 166u,
11u, 68u, 112u, 144u, 192u, 152u, 14u, 17u, 193u, 3u, 2u, 96u, 56u,
71u, 2u, 12u, 9u, 128u, 225u, 32u,};
static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
#if defined(GAUCHE_WINDOWS)
  ScmString d2292[16];
#endif /*defined(GAUCHE_WINDOWS)*/
#if defined(HAVE_SELECT)
  ScmString d2252[28];
#endif /*defined(HAVE_SELECT)*/
#if defined(HAVE_READLINK)
  ScmString d2247[9];
#endif /*defined(HAVE_READLINK)*/
#if defined(HAVE_SYMLINK)
  ScmString d2244[10];
#endif /*defined(HAVE_SYMLINK)*/
#if defined(HAVE_CRYPT)
  ScmString d2241[9];
#endif /*defined(HAVE_CRYPT)*/
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  ScmString d2238[11];
#endif /*(defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  ScmString d2234[9];
#endif /*defined(HAVE_SETGROUPS)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  ScmString d2230[8];
#endif /*defined(HAVE_GETPGID)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if defined(HAVE_LCHOWN)
  ScmString d2227[11];
#endif /*defined(HAVE_LCHOWN)*/
#if !(!(defined(GAUCHE_WINDOWS)))
  ScmString d2221[9];
#endif /*!(!(defined(GAUCHE_WINDOWS)))*/
#if !(defined(GAUCHE_WINDOWS))
  ScmString d2218[28];
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_OFILE)
  ScmString d2215[1];
#endif /*defined(RLIMIT_OFILE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_STACK)
  ScmString d2213[1];
#endif /*defined(RLIMIT_STACK)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SBSIZE)
  ScmString d2211[1];
#endif /*defined(RLIMIT_SBSIZE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SIGPENDING)
  ScmString d2209[1];
#endif /*defined(RLIMIT_SIGPENDING)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RTPRIO)
  ScmString d2207[1];
#endif /*defined(RLIMIT_RTPRIO)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RSS)
  ScmString d2205[1];
#endif /*defined(RLIMIT_RSS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NPROC)
  ScmString d2203[1];
#endif /*defined(RLIMIT_NPROC)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NOFILE)
  ScmString d2201[1];
#endif /*defined(RLIMIT_NOFILE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NICE)
  ScmString d2199[1];
#endif /*defined(RLIMIT_NICE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MSGQUEUE)
  ScmString d2197[1];
#endif /*defined(RLIMIT_MSGQUEUE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MEMLOCK)
  ScmString d2195[1];
#endif /*defined(RLIMIT_MEMLOCK)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_LOCKS)
  ScmString d2193[1];
#endif /*defined(RLIMIT_LOCKS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_FSIZE)
  ScmString d2191[1];
#endif /*defined(RLIMIT_FSIZE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_DATA)
  ScmString d2189[1];
#endif /*defined(RLIMIT_DATA)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CPU)
  ScmString d2187[1];
#endif /*defined(RLIMIT_CPU)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CORE)
  ScmString d2185[1];
#endif /*defined(RLIMIT_CORE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_AS)
  ScmString d2183[1];
#endif /*defined(RLIMIT_AS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
  ScmString d2179[17];
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if !(defined(HAVE_GETLOADAVG))
  ScmString d2176[10];
#endif /*!(defined(HAVE_GETLOADAVG))*/
#if defined(HAVE_GETLOADAVG)
  ScmString d2172[10];
#endif /*defined(HAVE_GETLOADAVG)*/
#if !(HAVE_STRSIGNAL)
  ScmString d2169[9];
#endif /*!(HAVE_STRSIGNAL)*/
#if HAVE_STRSIGNAL
  ScmString d2166[9];
#endif /*HAVE_STRSIGNAL*/
  ScmString d2148[657];
} scm__sc SCM_UNUSED = {
#if defined(GAUCHE_WINDOWS)
  {   /* ScmString d2292 */
      SCM_STRING_CONST_INITIALIZER("handle-type", 11, 11),
      SCM_STRING_CONST_INITIALIZER("process", 7, 7),
      SCM_STRING_CONST_INITIALIZER("sys-win-process\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-win-process-pid", 19, 19),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-get-osfhandle", 17, 17),
      SCM_STRING_CONST_INITIALIZER("port-or-fd", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-win-pipe-name", 17, 17),
  },
#endif /*defined(GAUCHE_WINDOWS)*/
#if defined(HAVE_SELECT)
  {   /* ScmString d2252 */
      SCM_STRING_CONST_INITIALIZER("sys-fdset-ref", 13, 13),
      SCM_STRING_CONST_INITIALIZER("fdset", 5, 5),
      SCM_STRING_CONST_INITIALIZER("pf", 2, 2),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<sys-fdset>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-fdset-set!", 14, 14),
      SCM_STRING_CONST_INITIALIZER("flag", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sys-fdset-max-fd", 16, 16),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-fdset-clear!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("sys-fdset-copy!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("dst", 3, 3),
      SCM_STRING_CONST_INITIALIZER("src", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sys-select", 10, 10),
      SCM_STRING_CONST_INITIALIZER("rfds", 4, 4),
      SCM_STRING_CONST_INITIALIZER("wfds", 4, 4),
      SCM_STRING_CONST_INITIALIZER("efds", 4, 4),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("timeout", 7, 7),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("sys-select!", 11, 11),
  },
#endif /*defined(HAVE_SELECT)*/
#if defined(HAVE_READLINK)
  {   /* ScmString d2247 */
      SCM_STRING_CONST_INITIALIZER("sys-readlink", 12, 12),
      SCM_STRING_CONST_INITIALIZER("path", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
  },
#endif /*defined(HAVE_READLINK)*/
#if defined(HAVE_SYMLINK)
  {   /* ScmString d2244 */
      SCM_STRING_CONST_INITIALIZER("sys-symlink", 11, 11),
      SCM_STRING_CONST_INITIALIZER("existing", 8, 8),
      SCM_STRING_CONST_INITIALIZER("newpath", 7, 7),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
  },
#endif /*defined(HAVE_SYMLINK)*/
#if defined(HAVE_CRYPT)
  {   /* ScmString d2241 */
      SCM_STRING_CONST_INITIALIZER("sys-crypt", 9, 9),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("salt", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
  },
#endif /*defined(HAVE_CRYPT)*/
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  {   /* ScmString d2238 */
      SCM_STRING_CONST_INITIALIZER("sys-nanosleep", 13, 13),
      SCM_STRING_CONST_INITIALIZER("nanoseconds", 11, 11),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("no-retry", 8, 8),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
  },
#endif /*(defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  {   /* ScmString d2234 */
      SCM_STRING_CONST_INITIALIZER("sys-setgroups", 13, 13),
      SCM_STRING_CONST_INITIALIZER("gids", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
  },
#endif /*defined(HAVE_SETGROUPS)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  {   /* ScmString d2230 */
      SCM_STRING_CONST_INITIALIZER("sys-getpgid", 11, 11),
      SCM_STRING_CONST_INITIALIZER("pid", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
  },
#endif /*defined(HAVE_GETPGID)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if defined(HAVE_LCHOWN)
  {   /* ScmString d2227 */
      SCM_STRING_CONST_INITIALIZER("sys-lchown", 10, 10),
      SCM_STRING_CONST_INITIALIZER("path", 4, 4),
      SCM_STRING_CONST_INITIALIZER("owner", 5, 5),
      SCM_STRING_CONST_INITIALIZER("group", 5, 5),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
  },
#endif /*defined(HAVE_LCHOWN)*/
#if !(!(defined(GAUCHE_WINDOWS)))
  {   /* ScmString d2221 */
      SCM_STRING_CONST_INITIALIZER("sys-lstat", 9, 9),
      SCM_STRING_CONST_INITIALIZER("path", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<sys-stat>", 10, 10),
  },
#endif /*!(!(defined(GAUCHE_WINDOWS)))*/
#if !(defined(GAUCHE_WINDOWS))
  {   /* ScmString d2218 */
      SCM_STRING_CONST_INITIALIZER("sys-lstat", 9, 9),
      SCM_STRING_CONST_INITIALIZER("path", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<sys-stat>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-mkfifo", 10, 10),
      SCM_STRING_CONST_INITIALIZER("mode", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-fchmod", 10, 10),
      SCM_STRING_CONST_INITIALIZER("port-or-fd", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sys-setgid", 10, 10),
      SCM_STRING_CONST_INITIALIZER("gid", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sys-setpgid", 11, 11),
      SCM_STRING_CONST_INITIALIZER("pid", 3, 3),
      SCM_STRING_CONST_INITIALIZER("pgid", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sys-getpgrp", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-setsid", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-setuid", 10, 10),
      SCM_STRING_CONST_INITIALIZER("uid", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sys-nice", 8, 8),
      SCM_STRING_CONST_INITIALIZER("inc", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sys-getgroups", 13, 13),
  },
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_OFILE)
  {   /* ScmString d2215 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_OFILE", 12, 12),
  },
#endif /*defined(RLIMIT_OFILE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_STACK)
  {   /* ScmString d2213 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_STACK", 12, 12),
  },
#endif /*defined(RLIMIT_STACK)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SBSIZE)
  {   /* ScmString d2211 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_SBSIZE", 13, 13),
  },
#endif /*defined(RLIMIT_SBSIZE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SIGPENDING)
  {   /* ScmString d2209 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_SIGPENDING", 17, 17),
  },
#endif /*defined(RLIMIT_SIGPENDING)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RTPRIO)
  {   /* ScmString d2207 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_RTPRIO", 13, 13),
  },
#endif /*defined(RLIMIT_RTPRIO)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RSS)
  {   /* ScmString d2205 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_RSS", 10, 10),
  },
#endif /*defined(RLIMIT_RSS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NPROC)
  {   /* ScmString d2203 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_NPROC", 12, 12),
  },
#endif /*defined(RLIMIT_NPROC)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NOFILE)
  {   /* ScmString d2201 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_NOFILE", 13, 13),
  },
#endif /*defined(RLIMIT_NOFILE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NICE)
  {   /* ScmString d2199 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_NICE", 11, 11),
  },
#endif /*defined(RLIMIT_NICE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MSGQUEUE)
  {   /* ScmString d2197 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_MSGQUEUE", 15, 15),
  },
#endif /*defined(RLIMIT_MSGQUEUE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MEMLOCK)
  {   /* ScmString d2195 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_MEMLOCK", 14, 14),
  },
#endif /*defined(RLIMIT_MEMLOCK)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_LOCKS)
  {   /* ScmString d2193 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_LOCKS", 12, 12),
  },
#endif /*defined(RLIMIT_LOCKS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_FSIZE)
  {   /* ScmString d2191 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_FSIZE", 12, 12),
  },
#endif /*defined(RLIMIT_FSIZE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_DATA)
  {   /* ScmString d2189 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_DATA", 11, 11),
  },
#endif /*defined(RLIMIT_DATA)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CPU)
  {   /* ScmString d2187 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_CPU", 10, 10),
  },
#endif /*defined(RLIMIT_CPU)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CORE)
  {   /* ScmString d2185 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_CORE", 11, 11),
  },
#endif /*defined(RLIMIT_CORE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_AS)
  {   /* ScmString d2183 */
      SCM_STRING_CONST_INITIALIZER("RLIMIT_AS", 9, 9),
  },
#endif /*defined(RLIMIT_AS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
  {   /* ScmString d2179 */
      SCM_STRING_CONST_INITIALIZER("sys-getrlimit", 13, 13),
      SCM_STRING_CONST_INITIALIZER("rsrc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<integer>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-setrlimit", 13, 13),
      SCM_STRING_CONST_INITIALIZER("cur", 3, 3),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("max", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("RLIM_INFINITY", 13, 13),
  },
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if !(defined(HAVE_GETLOADAVG))
  {   /* ScmString d2176 */
      SCM_STRING_CONST_INITIALIZER("sys-getloadavg", 14, 14),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
  },
#endif /*!(defined(HAVE_GETLOADAVG))*/
#if defined(HAVE_GETLOADAVG)
  {   /* ScmString d2172 */
      SCM_STRING_CONST_INITIALIZER("sys-getloadavg", 14, 14),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("nsamples", 8, 8),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
  },
#endif /*defined(HAVE_GETLOADAVG)*/
#if !(HAVE_STRSIGNAL)
  {   /* ScmString d2169 */
      SCM_STRING_CONST_INITIALIZER("sys-strsignal", 13, 13),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>\077", 16, 16),
  },
#endif /*!(HAVE_STRSIGNAL)*/
#if HAVE_STRSIGNAL
  {   /* ScmString d2166 */
      SCM_STRING_CONST_INITIALIZER("sys-strsignal", 13, 13),
      SCM_STRING_CONST_INITIALIZER("signum", 6, 6),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>\077", 16, 16),
  },
#endif /*HAVE_STRSIGNAL*/
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("sys-readdir", 11, 11),
      SCM_STRING_CONST_INITIALIZER("pathname", 8, 8),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libsys.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<string>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-tmpdir", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-basename", 12, 12),
      SCM_STRING_CONST_INITIALIZER("sys-dirname", 11, 11),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("sys-normalize-pathname", 22, 22),
      SCM_STRING_CONST_INITIALIZER("undefined\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("gauche.os.windows", 17, 17),
      SCM_STRING_CONST_INITIALIZER("cond-features", 13, 13),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("\134", 1, 1),
      SCM_STRING_CONST_INITIALIZER("/", 1, 1),
      SCM_STRING_CONST_INITIALIZER("^~([^/\134\134]*)", 11, 11),
      SCM_STRING_CONST_INITIALIZER("rxmatch", 7, 7),
      SCM_STRING_CONST_INITIALIZER("", 0, 0),
      SCM_STRING_CONST_INITIALIZER("equal\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("HOME", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sys-getenv", 10, 10),
      SCM_STRING_CONST_INITIALIZER("USERPROFILE", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-getuid", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-getpwuid", 12, 12),
      SCM_STRING_CONST_INITIALIZER("dir", 3, 3),
      SCM_STRING_CONST_INITIALIZER("~", 1, 1),
      SCM_STRING_CONST_INITIALIZER("Couldn't obtain username for :", 30, 30),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("'~user' expansil isn't supported on Windows:", 44, 44),
      SCM_STRING_CONST_INITIALIZER("sys-getpwnam", 12, 12),
      SCM_STRING_CONST_INITIALIZER("after", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string-append", 13, 13),
      SCM_STRING_CONST_INITIALIZER("^([A-Za-z]:)\077[/\134\134]", 18, 18),
      SCM_STRING_CONST_INITIALIZER("^/", 2, 2),
      SCM_STRING_CONST_INITIALIZER("sys-getcwd", 10, 10),
      SCM_STRING_CONST_INITIALIZER("string-split", 12, 12),
      SCM_STRING_CONST_INITIALIZER("string-join", 11, 11),
      SCM_STRING_CONST_INITIALIZER(".", 1, 1),
      SCM_STRING_CONST_INITIALIZER("..", 2, 2),
      SCM_STRING_CONST_INITIALIZER("length=\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("^[A-Za-z]:$", 11, 11),
      SCM_STRING_CONST_INITIALIZER("keyword list not even", 21, 21),
      SCM_STRING_CONST_INITIALIZER("unwrap-syntax-1", 15, 15),
      SCM_STRING_CONST_INITIALIZER("absolute", 8, 8),
      SCM_STRING_CONST_INITIALIZER("expand", 6, 6),
      SCM_STRING_CONST_INITIALIZER("canonicalize", 12, 12),
      SCM_STRING_CONST_INITIALIZER("unknown keyword ~S", 18, 18),
      SCM_STRING_CONST_INITIALIZER("errorf", 6, 6),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-errno->symbol", 17, 17),
      SCM_STRING_CONST_INITIALIZER("num", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sys-symbol->errno", 17, 17),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<symbol>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("E2BIG", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EACCES", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EADDRINUSE", 10, 10),
      SCM_STRING_CONST_INITIALIZER("EADDRNOTAVAIL", 13, 13),
      SCM_STRING_CONST_INITIALIZER("EADV", 4, 4),
      SCM_STRING_CONST_INITIALIZER("EAFNOSUPPORT", 12, 12),
      SCM_STRING_CONST_INITIALIZER("EAGAIN", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EALREADY", 8, 8),
      SCM_STRING_CONST_INITIALIZER("EBADE", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EBADF", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EBADFD", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EBADMSG", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EBADR", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EBADRQC", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EBADSLT", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EBFONT", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EBUSY", 5, 5),
      SCM_STRING_CONST_INITIALIZER("ECANCELED", 9, 9),
      SCM_STRING_CONST_INITIALIZER("ECHILD", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ECHRNG", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ECOMM", 5, 5),
      SCM_STRING_CONST_INITIALIZER("ECONNABORTED", 12, 12),
      SCM_STRING_CONST_INITIALIZER("ECONNREFUSED", 12, 12),
      SCM_STRING_CONST_INITIALIZER("ECONNRESET", 10, 10),
      SCM_STRING_CONST_INITIALIZER("EDEADLK", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EDEADLOCK", 9, 9),
      SCM_STRING_CONST_INITIALIZER("EDESTADDRREQ", 12, 12),
      SCM_STRING_CONST_INITIALIZER("EDOM", 4, 4),
      SCM_STRING_CONST_INITIALIZER("EDOTDOT", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EDQUOT", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EEXIST", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EFAULT", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EFBIG", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EHOSTDOWN", 9, 9),
      SCM_STRING_CONST_INITIALIZER("EHOSTUNREACH", 12, 12),
      SCM_STRING_CONST_INITIALIZER("EIDRM", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EILSEQ", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EINPROGRESS", 11, 11),
      SCM_STRING_CONST_INITIALIZER("EINTR", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EINVAL", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EIO", 3, 3),
      SCM_STRING_CONST_INITIALIZER("EISCONN", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EISDIR", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EISNAM", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EKEYEXPIRED", 11, 11),
      SCM_STRING_CONST_INITIALIZER("EKEYREJECTED", 12, 12),
      SCM_STRING_CONST_INITIALIZER("EKEYREVOKED", 11, 11),
      SCM_STRING_CONST_INITIALIZER("EL2HLT", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EL2NSYNC", 8, 8),
      SCM_STRING_CONST_INITIALIZER("EL3HLT", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EL3RST", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ELIBACC", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ELIBBAD", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ELIBEXEC", 8, 8),
      SCM_STRING_CONST_INITIALIZER("ELIBMAX", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ELIBSCN", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ELNRNG", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ELOOP", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EMEDIUMTYPE", 11, 11),
      SCM_STRING_CONST_INITIALIZER("EMFILE", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EMLINK", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EMSGSIZE", 8, 8),
      SCM_STRING_CONST_INITIALIZER("EMULTIHOP", 9, 9),
      SCM_STRING_CONST_INITIALIZER("ENAMETOOLONG", 12, 12),
      SCM_STRING_CONST_INITIALIZER("ENAVAIL", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ENETDOWN", 8, 8),
      SCM_STRING_CONST_INITIALIZER("ENETRESET", 9, 9),
      SCM_STRING_CONST_INITIALIZER("ENETUNREACH", 11, 11),
      SCM_STRING_CONST_INITIALIZER("ENFILE", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOANO", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOBUFS", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ENOCSI", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENODATA", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ENODEV", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOENT", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOEXEC", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ENOKEY", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOLCK", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOLINK", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ENOMEDIUM", 9, 9),
      SCM_STRING_CONST_INITIALIZER("ENOMEM", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOMSG", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENONET", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOPKG", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOPROTOOPT", 11, 11),
      SCM_STRING_CONST_INITIALIZER("ENOSPC", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOSR", 5, 5),
      SCM_STRING_CONST_INITIALIZER("ENOSTR", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOSYS", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOTBLK", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ENOTCONN", 8, 8),
      SCM_STRING_CONST_INITIALIZER("ENOTDIR", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ENOTEMPTY", 9, 9),
      SCM_STRING_CONST_INITIALIZER("ENOTNAM", 7, 7),
      SCM_STRING_CONST_INITIALIZER("ENOTSOCK", 8, 8),
      SCM_STRING_CONST_INITIALIZER("ENOTTY", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ENOTUNIQ", 8, 8),
      SCM_STRING_CONST_INITIALIZER("ENXIO", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EOPNOTSUPP", 10, 10),
      SCM_STRING_CONST_INITIALIZER("EOVERFLOW", 9, 9),
      SCM_STRING_CONST_INITIALIZER("EPERM", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EPFNOSUPPORT", 12, 12),
      SCM_STRING_CONST_INITIALIZER("EPIPE", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EPROTO", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EPROTONOSUPPORT", 15, 15),
      SCM_STRING_CONST_INITIALIZER("EPROTOTYPE", 10, 10),
      SCM_STRING_CONST_INITIALIZER("ERANGE", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EREMCHG", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EREMOTE", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EREMOTEIO", 9, 9),
      SCM_STRING_CONST_INITIALIZER("ERESTART", 8, 8),
      SCM_STRING_CONST_INITIALIZER("EROFS", 5, 5),
      SCM_STRING_CONST_INITIALIZER("ESHUTDOWN", 9, 9),
      SCM_STRING_CONST_INITIALIZER("ESOCKTNOSUPPORT", 15, 15),
      SCM_STRING_CONST_INITIALIZER("ESPIPE", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ESRCH", 5, 5),
      SCM_STRING_CONST_INITIALIZER("ESRMNT", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ESTALE", 6, 6),
      SCM_STRING_CONST_INITIALIZER("ESTRPIPE", 8, 8),
      SCM_STRING_CONST_INITIALIZER("ETIME", 5, 5),
      SCM_STRING_CONST_INITIALIZER("ETIMEDOUT", 9, 9),
      SCM_STRING_CONST_INITIALIZER("ETOOMANYREFS", 12, 12),
      SCM_STRING_CONST_INITIALIZER("ETXTBSY", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EUCLEAN", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EUNATCH", 7, 7),
      SCM_STRING_CONST_INITIALIZER("EUSERS", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EWOULDBLOCK", 11, 11),
      SCM_STRING_CONST_INITIALIZER("EXDEV", 5, 5),
      SCM_STRING_CONST_INITIALIZER("EXFULL", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sys-getgrgid", 12, 12),
      SCM_STRING_CONST_INITIALIZER("gid", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-getgrnam", 12, 12),
      SCM_STRING_CONST_INITIALIZER("sys-gid->group-name", 19, 19),
      SCM_STRING_CONST_INITIALIZER("sys-group-name->gid", 19, 19),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("LC_ALL", 6, 6),
      SCM_STRING_CONST_INITIALIZER("LC_COLLATE", 10, 10),
      SCM_STRING_CONST_INITIALIZER("LC_CTYPE", 8, 8),
      SCM_STRING_CONST_INITIALIZER("LC_MONETARY", 11, 11),
      SCM_STRING_CONST_INITIALIZER("LC_NUMERIC", 10, 10),
      SCM_STRING_CONST_INITIALIZER("LC_TIME", 7, 7),
      SCM_STRING_CONST_INITIALIZER("sys-setlocale", 13, 13),
      SCM_STRING_CONST_INITIALIZER("category", 8, 8),
      SCM_STRING_CONST_INITIALIZER("locale", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("sys-localeconv", 14, 14),
      SCM_STRING_CONST_INITIALIZER("decimal_point", 13, 13),
      SCM_STRING_CONST_INITIALIZER("thousands_sep", 13, 13),
      SCM_STRING_CONST_INITIALIZER("grouping", 8, 8),
      SCM_STRING_CONST_INITIALIZER("int_curr_symbol", 15, 15),
      SCM_STRING_CONST_INITIALIZER("currency_symbol", 15, 15),
      SCM_STRING_CONST_INITIALIZER("mon_decimal_point", 17, 17),
      SCM_STRING_CONST_INITIALIZER("mon_thousands_sep", 17, 17),
      SCM_STRING_CONST_INITIALIZER("mon_grouping", 12, 12),
      SCM_STRING_CONST_INITIALIZER("positive_sign", 13, 13),
      SCM_STRING_CONST_INITIALIZER("negative_sign", 13, 13),
      SCM_STRING_CONST_INITIALIZER("int_frac_digits", 15, 15),
      SCM_STRING_CONST_INITIALIZER("frac_digits", 11, 11),
      SCM_STRING_CONST_INITIALIZER("p_cs_precedes", 13, 13),
      SCM_STRING_CONST_INITIALIZER("p_sep_by_space", 14, 14),
      SCM_STRING_CONST_INITIALIZER("n_cs_precedes", 13, 13),
      SCM_STRING_CONST_INITIALIZER("n_sep_by_space", 14, 14),
      SCM_STRING_CONST_INITIALIZER("p_sign_posn", 11, 11),
      SCM_STRING_CONST_INITIALIZER("n_sign_posn", 11, 11),
      SCM_STRING_CONST_INITIALIZER("uid", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sys-uid->user-name", 18, 18),
      SCM_STRING_CONST_INITIALIZER("sys-user-name->uid", 18, 18),
      SCM_STRING_CONST_INITIALIZER("SIG_SETMASK", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SIG_BLOCK", 9, 9),
      SCM_STRING_CONST_INITIALIZER("SIG_UNBLOCK", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-sigset-add!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("set", 3, 3),
      SCM_STRING_CONST_INITIALIZER("rest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sigs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<sys-sigset>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("sys-sigset-delete!", 18, 18),
      SCM_STRING_CONST_INITIALIZER("sys-sigset-fill!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("sys-sigset-empty!", 17, 17),
      SCM_STRING_CONST_INITIALIZER("sys-signal-name", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sig", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sys-kill", 8, 8),
      SCM_STRING_CONST_INITIALIZER("process", 7, 7),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("set-signal-handler!", 19, 19),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("mask", 4, 4),
      SCM_STRING_CONST_INITIALIZER("get-signal-handler", 18, 18),
      SCM_STRING_CONST_INITIALIZER("get-signal-handler-mask", 23, 23),
      SCM_STRING_CONST_INITIALIZER("get-signal-handlers", 19, 19),
      SCM_STRING_CONST_INITIALIZER("set-signal-pending-limit", 24, 24),
      SCM_STRING_CONST_INITIALIZER("limit", 5, 5),
      SCM_STRING_CONST_INITIALIZER("get-signal-pending-limit", 24, 24),
      SCM_STRING_CONST_INITIALIZER("sys-sigmask", 11, 11),
      SCM_STRING_CONST_INITIALIZER("how", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<sys-sigset>\077", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-sigsuspend", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sys-sigwait", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-sigset", 10, 10),
      SCM_STRING_CONST_INITIALIZER("make", 4, 4),
      SCM_STRING_CONST_INITIALIZER("signals", 7, 7),
      SCM_STRING_CONST_INITIALIZER("sys-remove", 10, 10),
      SCM_STRING_CONST_INITIALIZER("filename", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sys-rename", 10, 10),
      SCM_STRING_CONST_INITIALIZER("oldname", 7, 7),
      SCM_STRING_CONST_INITIALIZER("newname", 7, 7),
      SCM_STRING_CONST_INITIALIZER("sys-tmpnam", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-mkstemp", 11, 11),
      SCM_STRING_CONST_INITIALIZER("template", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sys-mkdtemp", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-ctermid", 11, 11),
      SCM_STRING_CONST_INITIALIZER("CON", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sys-exit", 8, 8),
      SCM_STRING_CONST_INITIALIZER("code", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sys-abort", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-system", 10, 10),
      SCM_STRING_CONST_INITIALIZER("command", 7, 7),
      SCM_STRING_CONST_INITIALIZER("sys-random", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<long>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sys-srandom", 11, 11),
      SCM_STRING_CONST_INITIALIZER("seed", 4, 4),
      SCM_STRING_CONST_INITIALIZER("RAND_MAX", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sys-environ", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-setenv", 10, 10),
      SCM_STRING_CONST_INITIALIZER("value", 5, 5),
      SCM_STRING_CONST_INITIALIZER("overwrite", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-unsetenv", 12, 12),
      SCM_STRING_CONST_INITIALIZER("sys-clearenv", 12, 12),
      SCM_STRING_CONST_INITIALIZER("both", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string-scan", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-environ->alist", 18, 18),
      SCM_STRING_CONST_INITIALIZER("G2165", 5, 5),
      SCM_STRING_CONST_INITIALIZER("envstr", 6, 6),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("envlist", 7, 7),
      SCM_STRING_CONST_INITIALIZER("map", 3, 3),
      SCM_STRING_CONST_INITIALIZER("^", 1, 1),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("pre", 3, 3),
      SCM_STRING_CONST_INITIALIZER("post", 4, 4),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("if", 2, 2),
      SCM_STRING_CONST_INITIALIZER("cons", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sys-putenv", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bad type of argument for ~s: ~s", 31, 31),
      SCM_STRING_CONST_INITIALIZER("arg", 3, 3),
      SCM_STRING_CONST_INITIALIZER("sys-putenv: argument doesn't contain '=':", 41, 41),
      SCM_STRING_CONST_INITIALIZER("name=value", 10, 10),
      SCM_STRING_CONST_INITIALIZER("other", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-strerror", 12, 12),
      SCM_STRING_CONST_INITIALIZER("errno_", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sys-mmap", 8, 8),
      SCM_STRING_CONST_INITIALIZER("maybe-port", 10, 10),
      SCM_STRING_CONST_INITIALIZER("prot", 4, 4),
      SCM_STRING_CONST_INITIALIZER("flags", 5, 5),
      SCM_STRING_CONST_INITIALIZER("size", 4, 4),
      SCM_STRING_CONST_INITIALIZER("off", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<size_t>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("PROT_EXEC", 9, 9),
      SCM_STRING_CONST_INITIALIZER("PROT_READ", 9, 9),
      SCM_STRING_CONST_INITIALIZER("PROT_WRITE", 10, 10),
      SCM_STRING_CONST_INITIALIZER("PROT_NONE", 9, 9),
      SCM_STRING_CONST_INITIALIZER("MAP_SHARED", 10, 10),
      SCM_STRING_CONST_INITIALIZER("MAP_PRIVATE", 11, 11),
      SCM_STRING_CONST_INITIALIZER("MAP_ANONYMOUS", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-stat", 8, 8),
      SCM_STRING_CONST_INITIALIZER("path", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<sys-stat>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-fstat", 9, 9),
      SCM_STRING_CONST_INITIALIZER("port-or-fd", 10, 10),
      SCM_STRING_CONST_INITIALIZER("file-exists\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("file-is-regular\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("file-is-directory\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("sys-utime", 9, 9),
      SCM_STRING_CONST_INITIALIZER("atime", 5, 5),
      SCM_STRING_CONST_INITIALIZER("mtime", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-times", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-uname", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-wait", 8, 8),
      SCM_STRING_CONST_INITIALIZER("nohang", 6, 6),
      SCM_STRING_CONST_INITIALIZER("untraced", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sys-waitpid", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-wait-exited\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("status", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sys-wait-exit-status", 20, 20),
      SCM_STRING_CONST_INITIALIZER("sys-wait-signaled\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("sys-wait-termsig", 16, 16),
      SCM_STRING_CONST_INITIALIZER("sys-wait-stopped\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("sys-wait-stopsig", 16, 16),
      SCM_STRING_CONST_INITIALIZER("sys-time", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sys-gettimeofday", 16, 16),
      SCM_STRING_CONST_INITIALIZER("<ulong>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("current-microseconds", 20, 20),
      SCM_STRING_CONST_INITIALIZER("sys-clock-gettime-monotonic", 27, 27),
      SCM_STRING_CONST_INITIALIZER("sys-clock-getres-monotonic", 26, 26),
      SCM_STRING_CONST_INITIALIZER("current-time", 12, 12),
      SCM_STRING_CONST_INITIALIZER("time\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("absolute-time", 13, 13),
      SCM_STRING_CONST_INITIALIZER("time-utc", 8, 8),
      SCM_STRING_CONST_INITIALIZER("t0", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<time>\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("seconds+", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<time>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("of-type\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("t", 1, 1),
      SCM_STRING_CONST_INITIALIZER("type-error", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<real>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("dt", 2, 2),
      SCM_STRING_CONST_INITIALIZER("time->seconds", 13, 13),
      SCM_STRING_CONST_INITIALIZER("seconds->time", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<double>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("time-comparator", 15, 15),
      SCM_STRING_CONST_INITIALIZER("compare", 7, 7),
      SCM_STRING_CONST_INITIALIZER("a", 1, 1),
      SCM_STRING_CONST_INITIALIZER("b", 1, 1),
      SCM_STRING_CONST_INITIALIZER("default-hash", 12, 12),
      SCM_STRING_CONST_INITIALIZER("make-comparator", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sys-asctime", 11, 11),
      SCM_STRING_CONST_INITIALIZER("tm", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<sys-tm>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sys-ctime", 9, 9),
      SCM_STRING_CONST_INITIALIZER("time", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sys-difftime", 12, 12),
      SCM_STRING_CONST_INITIALIZER("time1", 5, 5),
      SCM_STRING_CONST_INITIALIZER("time0", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-strftime", 12, 12),
      SCM_STRING_CONST_INITIALIZER("format", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sys-gmtime", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-localtime", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-mktime", 10, 10),
      SCM_STRING_CONST_INITIALIZER("R_OK", 4, 4),
      SCM_STRING_CONST_INITIALIZER("W_OK", 4, 4),
      SCM_STRING_CONST_INITIALIZER("X_OK", 4, 4),
      SCM_STRING_CONST_INITIALIZER("F_OK", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sys-access", 10, 10),
      SCM_STRING_CONST_INITIALIZER("amode", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-chdir", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-chmod", 9, 9),
      SCM_STRING_CONST_INITIALIZER("mode", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sys-chown", 9, 9),
      SCM_STRING_CONST_INITIALIZER("owner", 5, 5),
      SCM_STRING_CONST_INITIALIZER("group", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-fork", 8, 8),
      SCM_STRING_CONST_INITIALIZER("iomap", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sigmask", 7, 7),
      SCM_STRING_CONST_INITIALIZER("directory", 9, 9),
      SCM_STRING_CONST_INITIALIZER("detached", 8, 8),
      SCM_STRING_CONST_INITIALIZER("environment", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-exec", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<list>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sys-fork-and-exec", 17, 17),
      SCM_STRING_CONST_INITIALIZER("sys-getegid", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-getgid", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-geteuid", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-setugid\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("sys-getpid", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-getppid", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-setpgrp", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-setpgid", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-getlogin", 12, 12),
      SCM_STRING_CONST_INITIALIZER("sys-link", 8, 8),
      SCM_STRING_CONST_INITIALIZER("existing", 8, 8),
      SCM_STRING_CONST_INITIALIZER("newpath", 7, 7),
      SCM_STRING_CONST_INITIALIZER("sys-pause", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-alarm", 9, 9),
      SCM_STRING_CONST_INITIALIZER("seconds", 7, 7),
      SCM_STRING_CONST_INITIALIZER("(pipe)", 6, 6),
      SCM_STRING_CONST_INITIALIZER("buffering", 9, 9),
      SCM_STRING_CONST_INITIALIZER("buffered\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-pipe", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sys-close", 9, 9),
      SCM_STRING_CONST_INITIALIZER("fd", 2, 2),
      SCM_STRING_CONST_INITIALIZER("sys-mkdir", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-rmdir", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-umask", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-sleep", 9, 9),
      SCM_STRING_CONST_INITIALIZER("no-retry", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sys-unlink", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-isatty", 10, 10),
      SCM_STRING_CONST_INITIALIZER("port_or_fd", 10, 10),
      SCM_STRING_CONST_INITIALIZER("sys-ttyname", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-truncate", 12, 12),
      SCM_STRING_CONST_INITIALIZER("length", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<integer>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-ftruncate", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-gethostname", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sys-getdomainname", 17, 17),
      SCM_STRING_CONST_INITIALIZER("sys-available-processors", 24, 24),
      SCM_STRING_CONST_INITIALIZER("glob", 4, 4),
      SCM_STRING_CONST_INITIALIZER("glob-fold", 9, 9),
      SCM_STRING_CONST_INITIALIZER("patterns", 8, 8),
      SCM_STRING_CONST_INITIALIZER("opts", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sys-glob", 8, 8),
      SCM_STRING_CONST_INITIALIZER("glob-fs-folder", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sort", 4, 4),
      SCM_STRING_CONST_INITIALIZER("glob-fold-1", 11, 11),
      SCM_STRING_CONST_INITIALIZER("G2264", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2265", 5, 5),
      SCM_STRING_CONST_INITIALIZER("glob-expand-braces", 18, 18),
      SCM_STRING_CONST_INITIALIZER("list\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("fold", 4, 4),
      SCM_STRING_CONST_INITIALIZER("separator", 9, 9),
      SCM_STRING_CONST_INITIALIZER("folder", 6, 6),
      SCM_STRING_CONST_INITIALIZER("sorter", 6, 6),
      SCM_STRING_CONST_INITIALIZER("prefix", 6, 6),
      SCM_STRING_CONST_INITIALIZER("**", 2, 2),
      SCM_STRING_CONST_INITIALIZER("rec", 3, 3),
      SCM_STRING_CONST_INITIALIZER("node", 4, 4),
      SCM_STRING_CONST_INITIALIZER("matcher", 7, 7),
      SCM_STRING_CONST_INITIALIZER("rec*", 4, 4),
      SCM_STRING_CONST_INITIALIZER("G2266", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2267", 5, 5),
      SCM_STRING_CONST_INITIALIZER("^[^.].*$", 8, 8),
      SCM_STRING_CONST_INITIALIZER("glob-prepare-pattern", 20, 20),
      SCM_STRING_CONST_INITIALIZER("pattern", 7, 7),
      SCM_STRING_CONST_INITIALIZER("dir\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("glob-component->regexp", 22, 22),
      SCM_STRING_CONST_INITIALIZER("f", 1, 1),
      SCM_STRING_CONST_INITIALIZER("comp", 4, 4),
      SCM_STRING_CONST_INITIALIZER("pat", 3, 3),
      SCM_STRING_CONST_INITIALIZER("[{}]", 4, 4),
      SCM_STRING_CONST_INITIALIZER("{", 1, 1),
      SCM_STRING_CONST_INITIALIZER("parse", 5, 5),
      SCM_STRING_CONST_INITIALIZER("loop", 4, 4),
      SCM_STRING_CONST_INITIALIZER("in", 2, 2),
      SCM_STRING_CONST_INITIALIZER("seg", 3, 3),
      SCM_STRING_CONST_INITIALIZER("before", 6, 6),
      SCM_STRING_CONST_INITIALIZER("G2270", 5, 5),
      SCM_STRING_CONST_INITIALIZER("extra closing curly-brace in glob pattern:", 42, 42),
      SCM_STRING_CONST_INITIALIZER("G2273", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2276", 5, 5),
      SCM_STRING_CONST_INITIALIZER("unclosed curly-brace in glob pattern:", 37, 37),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("str", 3, 3),
      SCM_STRING_CONST_INITIALIZER("pres", 4, 4),
      SCM_STRING_CONST_INITIALIZER("level", 5, 5),
      SCM_STRING_CONST_INITIALIZER("eol", 3, 3),
      SCM_STRING_CONST_INITIALIZER("rep", 3, 3),
      SCM_STRING_CONST_INITIALIZER("any", 3, 3),
      SCM_STRING_CONST_INITIALIZER("read-char-set", 13, 13),
      SCM_STRING_CONST_INITIALIZER("char-set-complement!", 20, 20),
      SCM_STRING_CONST_INITIALIZER("element1", 8, 8),
      SCM_STRING_CONST_INITIALIZER("ch", 2, 2),
      SCM_STRING_CONST_INITIALIZER("ct", 2, 2),
      SCM_STRING_CONST_INITIALIZER("bol", 3, 3),
      SCM_STRING_CONST_INITIALIZER("seq", 3, 3),
      SCM_STRING_CONST_INITIALIZER("shell", 5, 5),
      SCM_STRING_CONST_INITIALIZER("mode argument must be :glob or :shell, but got", 46, 46),
      SCM_STRING_CONST_INITIALIZER("with-input-from-string", 22, 22),
      SCM_STRING_CONST_INITIALIZER("regexp-optimize", 15, 15),
      SCM_STRING_CONST_INITIALIZER("regexp-compile", 14, 14),
      SCM_STRING_CONST_INITIALIZER("fixed-regexp\077", 13, 13),
      SCM_STRING_CONST_INITIALIZER("regexp-ast", 10, 10),
      SCM_STRING_CONST_INITIALIZER("list->string", 12, 12),
      SCM_STRING_CONST_INITIALIZER("rx", 2, 2),
      SCM_STRING_CONST_INITIALIZER("make-glob-fs-fold", 17, 17),
      SCM_STRING_CONST_INITIALIZER("gauche-architecture", 19, 19),
      SCM_STRING_CONST_INITIALIZER("mingw", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string-length", 13, 13),
      SCM_STRING_CONST_INITIALIZER("string-ref", 10, 10),
      SCM_STRING_CONST_INITIALIZER("ensure-dirname", 14, 14),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("loop2286", 8, 8),
      SCM_STRING_CONST_INITIALIZER("child", 5, 5),
      SCM_STRING_CONST_INITIALIZER("regexp", 6, 6),
      SCM_STRING_CONST_INITIALIZER("non-leaf\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("root-path", 9, 9),
      SCM_STRING_CONST_INITIALIZER("current-path", 12, 12),
      SCM_STRING_CONST_INITIALIZER("%sys-mintty\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("sys-win-pipe-name", 17, 17),
      SCM_STRING_CONST_INITIALIZER("module-binds\077", 13, 13),
      SCM_STRING_CONST_INITIALIZER("^\134\134msys-[0-9a-f]+-pty[0-9]+-((\077:to|from))-master.*$", 51, 51),
      SCM_STRING_CONST_INITIALIZER("boolean", 7, 7),
      SCM_STRING_CONST_INITIALIZER("make-string", 11, 11),
      SCM_STRING_CONST_INITIALIZER("\042", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%sys-escape-windows-command-line", 32, 32),
      SCM_STRING_CONST_INITIALIZER("G2294", 5, 5),
      SCM_STRING_CONST_INITIALIZER("m", 1, 1),
      SCM_STRING_CONST_INITIALIZER("\042\042", 2, 2),
      SCM_STRING_CONST_INITIALIZER("[!\042%&()<>^|]", 12, 12),
      SCM_STRING_CONST_INITIALIZER("It is unsafe to pass argument ~s to BAT or CMD file.", 52, 52),
      SCM_STRING_CONST_INITIALIZER("[\134u0009-\134u000d !&'+,;->\134[\134]^`{}~]", 33, 33),
      SCM_STRING_CONST_INITIALIZER("(\134\134*)\042", 6, 6),
      SCM_STRING_CONST_INITIALIZER("regexp-replace-all", 18, 18),
      SCM_STRING_CONST_INITIALIZER("write-to-string", 15, 15),
      SCM_STRING_CONST_INITIALIZER("batfilep", 8, 8),
      SCM_STRING_CONST_INITIALIZER("loop2153", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args2152", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2154", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2155", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2156", 5, 5),
      SCM_STRING_CONST_INITIALIZER("tmp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("case", 4, 4),
      SCM_STRING_CONST_INITIALIZER("windows\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("comps", 5, 5),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("root\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("reverse", 7, 7),
      SCM_STRING_CONST_INITIALIZER("canon-path", 10, 10),
      SCM_STRING_CONST_INITIALIZER("abs-path", 8, 8),
      SCM_STRING_CONST_INITIALIZER("expand-tilde", 12, 12),
      SCM_STRING_CONST_INITIALIZER("absolute\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("home", 4, 4),
      SCM_STRING_CONST_INITIALIZER("pw", 2, 2),
      SCM_STRING_CONST_INITIALIZER("get-unix-home", 13, 13),
      SCM_STRING_CONST_INITIALIZER("get-windows-home", 16, 16),
      SCM_STRING_CONST_INITIALIZER("user", 4, 4),
      SCM_STRING_CONST_INITIALIZER("let*", 4, 4),
      SCM_STRING_CONST_INITIALIZER("assq", 4, 4),
      SCM_STRING_CONST_INITIALIZER("rest2151", 8, 8),
      SCM_STRING_CONST_INITIALIZER("if-let1", 7, 7),
      SCM_STRING_CONST_INITIALIZER("$", 1, 1),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("G2163", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2164", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2162", 8, 8),
      SCM_STRING_CONST_INITIALIZER("string\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("check-arg", 9, 9),
      SCM_STRING_CONST_INITIALIZER("v", 1, 1),
      SCM_STRING_CONST_INITIALIZER("assume-type", 11, 11),
      SCM_STRING_CONST_INITIALIZER("zero\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<", 1, 1),
      SCM_STRING_CONST_INITIALIZER("sep", 3, 3),
      SCM_STRING_CONST_INITIALIZER("loop2259", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args2258", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2260", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2261", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2262", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2263", 5, 5),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("rest2257", 8, 8),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("G2268", 5, 5),
      SCM_STRING_CONST_INITIALIZER("append", 6, 6),
      SCM_STRING_CONST_INITIALIZER("segs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("ins", 3, 3),
      SCM_STRING_CONST_INITIALIZER("G2269", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2271", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2272", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2274", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2275", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2277", 5, 5),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("cute", 4, 4),
      SCM_STRING_CONST_INITIALIZER("letrec", 6, 6),
      SCM_STRING_CONST_INITIALIZER("=", 1, 1),
      SCM_STRING_CONST_INITIALIZER("G2279", 5, 5),
      SCM_STRING_CONST_INITIALIZER("=>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("^m", 2, 2),
      SCM_STRING_CONST_INITIALIZER("values-ref", 10, 10),
      SCM_STRING_CONST_INITIALIZER("G2278", 5, 5),
      SCM_STRING_CONST_INITIALIZER("n", 1, 1),
      SCM_STRING_CONST_INITIALIZER("cs", 2, 2),
      SCM_STRING_CONST_INITIALIZER("current-input-port", 18, 18),
      SCM_STRING_CONST_INITIALIZER("peek-char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("eqv\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("next", 4, 4),
      SCM_STRING_CONST_INITIALIZER("eof-object\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("quasiquote", 10, 10),
      SCM_STRING_CONST_INITIALIZER("unquote", 7, 7),
      SCM_STRING_CONST_INITIALIZER("unquote-splicing", 16, 16),
      SCM_STRING_CONST_INITIALIZER("element1*", 9, 9),
      SCM_STRING_CONST_INITIALIZER("ra", 2, 2),
      SCM_STRING_CONST_INITIALIZER("element0", 8, 8),
      SCM_STRING_CONST_INITIALIZER("nd", 2, 2),
      SCM_STRING_CONST_INITIALIZER("element0*", 9, 9),
      SCM_STRING_CONST_INITIALIZER("loop2282", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args2281", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2283", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2280", 8, 8),
      SCM_STRING_CONST_INITIALIZER("read-char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("char\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("ast", 3, 3),
      SCM_STRING_CONST_INITIALIZER("caddr", 5, 5),
      SCM_STRING_CONST_INITIALIZER(">", 1, 1),
      SCM_STRING_CONST_INITIALIZER("cdddr", 5, 5),
      SCM_STRING_CONST_INITIALIZER("separ", 5, 5),
      SCM_STRING_CONST_INITIALIZER("and-let*", 8, 8),
      SCM_STRING_CONST_INITIALIZER("len", 3, 3),
      SCM_STRING_CONST_INITIALIZER("-", 1, 1),
      SCM_STRING_CONST_INITIALIZER("full", 4, 4),
      SCM_STRING_CONST_INITIALIZER("root-path/", 10, 10),
      SCM_STRING_CONST_INITIALIZER("current-path/", 13, 13),
      SCM_STRING_CONST_INITIALIZER("^s", 2, 2),
      SCM_STRING_CONST_INITIALIZER("args2285", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2287", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2288", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2284", 8, 8),
  },
};
static struct scm__rcRec {
#if defined(GAUCHE_WINDOWS)
  ScmPair d2293[35] SCM_ALIGN_PAIR;
#endif /*defined(GAUCHE_WINDOWS)*/
#if defined(GAUCHE_WINDOWS)
  ScmObj d2291[40];
#endif /*defined(GAUCHE_WINDOWS)*/
#if defined(HAVE_SELECT)
  ScmPair d2255[70] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_SELECT)*/
#if defined(HAVE_SELECT)
  ScmObj d2254[83];
#endif /*defined(HAVE_SELECT)*/
#if defined(HAVE_READLINK)
  ScmPair d2249[10] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_READLINK)*/
#if defined(HAVE_READLINK)
  ScmObj d2248[16];
#endif /*defined(HAVE_READLINK)*/
#if defined(HAVE_SYMLINK)
  ScmPair d2246[11] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_SYMLINK)*/
#if defined(HAVE_SYMLINK)
  ScmObj d2245[18];
#endif /*defined(HAVE_SYMLINK)*/
#if defined(HAVE_CRYPT)
  ScmPair d2243[11] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_CRYPT)*/
#if defined(HAVE_CRYPT)
  ScmObj d2242[17];
#endif /*defined(HAVE_CRYPT)*/
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  ScmPair d2240[12] SCM_ALIGN_PAIR;
#endif /*(defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))*/
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  ScmObj d2239[19];
#endif /*(defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  ScmPair d2237[10] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_SETGROUPS)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  ScmObj d2236[16];
#endif /*defined(HAVE_SETGROUPS)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  ScmPair d2232[10] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_GETPGID)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  ScmObj d2231[15];
#endif /*defined(HAVE_GETPGID)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if defined(HAVE_LCHOWN)
  ScmPair d2229[12] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_LCHOWN)*/
#if defined(HAVE_LCHOWN)
  ScmObj d2228[20];
#endif /*defined(HAVE_LCHOWN)*/
#if !(!(defined(GAUCHE_WINDOWS)))
  ScmPair d2223[10] SCM_ALIGN_PAIR;
#endif /*!(!(defined(GAUCHE_WINDOWS)))*/
#if !(!(defined(GAUCHE_WINDOWS)))
  ScmObj d2222[16];
#endif /*!(!(defined(GAUCHE_WINDOWS)))*/
#if !(defined(GAUCHE_WINDOWS))
  ScmPair d2220[90] SCM_ALIGN_PAIR;
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
  ScmObj d2219[87];
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_OFILE)
  ScmObj d2214[1];
#endif /*defined(RLIMIT_OFILE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_STACK)
  ScmObj d2212[1];
#endif /*defined(RLIMIT_STACK)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SBSIZE)
  ScmObj d2210[1];
#endif /*defined(RLIMIT_SBSIZE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SIGPENDING)
  ScmObj d2208[1];
#endif /*defined(RLIMIT_SIGPENDING)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RTPRIO)
  ScmObj d2206[1];
#endif /*defined(RLIMIT_RTPRIO)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RSS)
  ScmObj d2204[1];
#endif /*defined(RLIMIT_RSS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NPROC)
  ScmObj d2202[1];
#endif /*defined(RLIMIT_NPROC)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NOFILE)
  ScmObj d2200[1];
#endif /*defined(RLIMIT_NOFILE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NICE)
  ScmObj d2198[1];
#endif /*defined(RLIMIT_NICE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MSGQUEUE)
  ScmObj d2196[1];
#endif /*defined(RLIMIT_MSGQUEUE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MEMLOCK)
  ScmObj d2194[1];
#endif /*defined(RLIMIT_MEMLOCK)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_LOCKS)
  ScmObj d2192[1];
#endif /*defined(RLIMIT_LOCKS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_FSIZE)
  ScmObj d2190[1];
#endif /*defined(RLIMIT_FSIZE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_DATA)
  ScmObj d2188[1];
#endif /*defined(RLIMIT_DATA)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CPU)
  ScmObj d2186[1];
#endif /*defined(RLIMIT_CPU)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CORE)
  ScmObj d2184[1];
#endif /*defined(RLIMIT_CORE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_AS)
  ScmObj d2182[1];
#endif /*defined(RLIMIT_AS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
  ScmPair d2181[22] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
  ScmObj d2180[35];
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if !(defined(HAVE_GETLOADAVG))
  ScmPair d2178[11] SCM_ALIGN_PAIR;
#endif /*!(defined(HAVE_GETLOADAVG))*/
#if !(defined(HAVE_GETLOADAVG))
  ScmObj d2177[17];
#endif /*!(defined(HAVE_GETLOADAVG))*/
#if defined(HAVE_GETLOADAVG)
  ScmPair d2175[11] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_GETLOADAVG)*/
#if defined(HAVE_GETLOADAVG)
  ScmObj d2174[17];
#endif /*defined(HAVE_GETLOADAVG)*/
#if !(HAVE_STRSIGNAL)
  ScmPair d2171[10] SCM_ALIGN_PAIR;
#endif /*!(HAVE_STRSIGNAL)*/
#if !(HAVE_STRSIGNAL)
  ScmObj d2170[16];
#endif /*!(HAVE_STRSIGNAL)*/
#if HAVE_STRSIGNAL
  ScmPair d2168[10] SCM_ALIGN_PAIR;
#endif /*HAVE_STRSIGNAL*/
#if HAVE_STRSIGNAL
  ScmObj d2167[16];
#endif /*HAVE_STRSIGNAL*/
  ScmUVector d2159[58];
  ScmCompiledCode d2158[58];
  ScmWord d2157[2531];
  ScmPair d2150[1216] SCM_ALIGN_PAIR;
  ScmObj d2149[1687];
} scm__rc SCM_UNUSED = {
#if defined(GAUCHE_WINDOWS)
  {   /* ScmPair d2293 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1733U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2292[5]), SCM_OBJ(&scm__rc.d2293[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[6])},
       { SCM_OBJ(&scm__rc.d2293[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2293[4]), SCM_OBJ(&scm__rc.d2293[8])},
       { SCM_MAKE_INT(1734U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2292[5]), SCM_OBJ(&scm__rc.d2293[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[11])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[13])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[14])},
       { SCM_OBJ(&scm__rc.d2293[15]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2293[12]), SCM_OBJ(&scm__rc.d2293[16])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1738U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2292[5]), SCM_OBJ(&scm__rc.d2293[19])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[20])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[23])},
       { SCM_OBJ(&scm__rc.d2293[24]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2293[21]), SCM_OBJ(&scm__rc.d2293[25])},
       { SCM_MAKE_INT(1744U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2292[5]), SCM_OBJ(&scm__rc.d2293[27])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[28])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2293[31])},
       { SCM_OBJ(&scm__rc.d2293[32]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2293[29]), SCM_OBJ(&scm__rc.d2293[33])},
  },
#endif /*defined(GAUCHE_WINDOWS)*/
#if defined(GAUCHE_WINDOWS)
  {   /* ScmObj d2291 */
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(5, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNBOUND,
    SCM_UNBOUND,
  },
#endif /*defined(GAUCHE_WINDOWS)*/
#if defined(HAVE_SELECT)
  {   /* ScmPair d2255 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[1])},
       { SCM_MAKE_INT(1396U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2252[4]), SCM_OBJ(&scm__rc.d2255[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[4])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[7])},
       { SCM_OBJ(&scm__rc.d2255[8]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2255[5]), SCM_OBJ(&scm__rc.d2255[9])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[11])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[12])},
       { SCM_MAKE_INT(1404U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2252[4]), SCM_OBJ(&scm__rc.d2255[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[18])},
       { SCM_OBJ(&scm__rc.d2255[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2255[16]), SCM_OBJ(&scm__rc.d2255[20])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1417U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2252[4]), SCM_OBJ(&scm__rc.d2255[23])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[24])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[26])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[27])},
       { SCM_OBJ(&scm__rc.d2255[28]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2255[25]), SCM_OBJ(&scm__rc.d2255[29])},
       { SCM_MAKE_INT(1420U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2252[4]), SCM_OBJ(&scm__rc.d2255[31])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[32])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[34])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[35])},
       { SCM_OBJ(&scm__rc.d2255[36]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2255[33]), SCM_OBJ(&scm__rc.d2255[37])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[39])},
       { SCM_MAKE_INT(1425U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2252[4]), SCM_OBJ(&scm__rc.d2255[41])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[42])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[44])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[45])},
       { SCM_OBJ(&scm__rc.d2255[46]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2255[43]), SCM_OBJ(&scm__rc.d2255[47])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[49])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[50])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[52])},
       { SCM_MAKE_INT(1430U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2252[4]), SCM_OBJ(&scm__rc.d2255[54])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[55])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[57])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[58])},
       { SCM_OBJ(&scm__rc.d2255[59]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2255[56]), SCM_OBJ(&scm__rc.d2255[60])},
       { SCM_MAKE_INT(1433U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2252[4]), SCM_OBJ(&scm__rc.d2255[62])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[63])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[65])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2255[66])},
       { SCM_OBJ(&scm__rc.d2255[67]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2255[64]), SCM_OBJ(&scm__rc.d2255[68])},
  },
#endif /*defined(HAVE_SELECT)*/
#if defined(HAVE_SELECT)
  {   /* ScmObj d2254 */
    SCM_UNBOUND,
    SCM_UNBOUND,
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
  },
#endif /*defined(HAVE_SELECT)*/
#if defined(HAVE_READLINK)
  {   /* ScmPair d2249 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1368U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2247[3]), SCM_OBJ(&scm__rc.d2249[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2249[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2249[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2249[6])},
       { SCM_OBJ(&scm__rc.d2249[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2249[4]), SCM_OBJ(&scm__rc.d2249[8])},
  },
#endif /*defined(HAVE_READLINK)*/
#if defined(HAVE_READLINK)
  {   /* ScmObj d2248 */
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
  },
#endif /*defined(HAVE_READLINK)*/
#if defined(HAVE_SYMLINK)
  {   /* ScmPair d2246 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2246[1])},
       { SCM_MAKE_INT(1358U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2244[4]), SCM_OBJ(&scm__rc.d2246[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2246[4])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2246[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2246[7])},
       { SCM_OBJ(&scm__rc.d2246[8]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2246[5]), SCM_OBJ(&scm__rc.d2246[9])},
  },
#endif /*defined(HAVE_SYMLINK)*/
#if defined(HAVE_SYMLINK)
  {   /* ScmObj d2245 */
    SCM_UNBOUND,
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
  },
#endif /*defined(HAVE_SYMLINK)*/
#if defined(HAVE_CRYPT)
  {   /* ScmPair d2243 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2243[1])},
       { SCM_MAKE_INT(1323U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2241[4]), SCM_OBJ(&scm__rc.d2243[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2243[4])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2243[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2243[7])},
       { SCM_OBJ(&scm__rc.d2243[8]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2243[5]), SCM_OBJ(&scm__rc.d2243[9])},
  },
#endif /*defined(HAVE_CRYPT)*/
#if defined(HAVE_CRYPT)
  {   /* ScmObj d2242 */
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
  },
#endif /*defined(HAVE_CRYPT)*/
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  {   /* ScmPair d2240 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2240[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2240[2])},
       { SCM_MAKE_INT(1249U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2238[5]), SCM_OBJ(&scm__rc.d2240[4])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2240[5])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2240[7])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2240[8])},
       { SCM_OBJ(&scm__rc.d2240[9]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2240[6]), SCM_OBJ(&scm__rc.d2240[10])},
  },
#endif /*(defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))*/
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  {   /* ScmObj d2239 */
    SCM_UNBOUND,
    SCM_UNBOUND,
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
  },
#endif /*(defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  {   /* ScmPair d2237 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1150U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2234[3]), SCM_OBJ(&scm__rc.d2237[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2237[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2237[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2237[6])},
       { SCM_OBJ(&scm__rc.d2237[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2237[4]), SCM_OBJ(&scm__rc.d2237[8])},
  },
#endif /*defined(HAVE_SETGROUPS)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  {   /* ScmObj d2236 */
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
  },
#endif /*defined(HAVE_SETGROUPS)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  {   /* ScmPair d2232 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1102U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2230[3]), SCM_OBJ(&scm__rc.d2232[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2232[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2232[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2232[6])},
       { SCM_OBJ(&scm__rc.d2232[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2232[4]), SCM_OBJ(&scm__rc.d2232[8])},
  },
#endif /*defined(HAVE_GETPGID)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  {   /* ScmObj d2231 */
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
#endif /*defined(HAVE_GETPGID)*/
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if defined(HAVE_LCHOWN)
  {   /* ScmPair d2229 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2229[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2229[2])},
       { SCM_MAKE_INT(1030U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2227[5]), SCM_OBJ(&scm__rc.d2229[4])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2229[5])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2229[7])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2229[8])},
       { SCM_OBJ(&scm__rc.d2229[9]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2229[6]), SCM_OBJ(&scm__rc.d2229[10])},
  },
#endif /*defined(HAVE_LCHOWN)*/
#if defined(HAVE_LCHOWN)
  {   /* ScmObj d2228 */
    SCM_UNBOUND,
    SCM_UNBOUND,
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
  },
#endif /*defined(HAVE_LCHOWN)*/
#if !(!(defined(GAUCHE_WINDOWS)))
  {   /* ScmPair d2223 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(728U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2221[3]), SCM_OBJ(&scm__rc.d2223[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2223[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2223[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2223[6])},
       { SCM_OBJ(&scm__rc.d2223[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2223[4]), SCM_OBJ(&scm__rc.d2223[8])},
  },
#endif /*!(!(defined(GAUCHE_WINDOWS)))*/
#if !(!(defined(GAUCHE_WINDOWS)))
  {   /* ScmObj d2222 */
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
  },
#endif /*!(!(defined(GAUCHE_WINDOWS)))*/
#if !(defined(GAUCHE_WINDOWS))
  {   /* ScmPair d2220 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(726U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[6])},
       { SCM_OBJ(&scm__rc.d2220[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[4]), SCM_OBJ(&scm__rc.d2220[8])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[10])},
       { SCM_MAKE_INT(732U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[12])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[13])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[15])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[16])},
       { SCM_OBJ(&scm__rc.d2220[17]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[14]), SCM_OBJ(&scm__rc.d2220[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[10])},
       { SCM_MAKE_INT(1010U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[21])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[22])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[24])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[25])},
       { SCM_OBJ(&scm__rc.d2220[26]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[23]), SCM_OBJ(&scm__rc.d2220[27])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1084U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[31])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[34])},
       { SCM_OBJ(&scm__rc.d2220[35]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[32]), SCM_OBJ(&scm__rc.d2220[36])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[38])},
       { SCM_MAKE_INT(1088U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[40])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[41])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[43])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[44])},
       { SCM_OBJ(&scm__rc.d2220[45]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[42]), SCM_OBJ(&scm__rc.d2220[46])},
       { SCM_MAKE_INT(1107U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[48])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[49])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[52])},
       { SCM_OBJ(&scm__rc.d2220[53]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[50]), SCM_OBJ(&scm__rc.d2220[54])},
       { SCM_MAKE_INT(1111U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[56])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[57])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[59])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[60])},
       { SCM_OBJ(&scm__rc.d2220[61]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[58]), SCM_OBJ(&scm__rc.d2220[62])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1115U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[65])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[66])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[68])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[69])},
       { SCM_OBJ(&scm__rc.d2220[70]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[67]), SCM_OBJ(&scm__rc.d2220[71])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1125U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[75])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[77])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[78])},
       { SCM_OBJ(&scm__rc.d2220[79]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[76]), SCM_OBJ(&scm__rc.d2220[80])},
       { SCM_MAKE_INT(1133U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2218[3]), SCM_OBJ(&scm__rc.d2220[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[83])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[85])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2220[86])},
       { SCM_OBJ(&scm__rc.d2220[87]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2220[84]), SCM_OBJ(&scm__rc.d2220[88])},
  },
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if !(defined(GAUCHE_WINDOWS))
  {   /* ScmObj d2219 */
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(4, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
  },
#endif /*!(defined(GAUCHE_WINDOWS))*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_OFILE)
  {   /* ScmObj d2214 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_OFILE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_STACK)
  {   /* ScmObj d2212 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_STACK)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SBSIZE)
  {   /* ScmObj d2210 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_SBSIZE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SIGPENDING)
  {   /* ScmObj d2208 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_SIGPENDING)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RTPRIO)
  {   /* ScmObj d2206 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_RTPRIO)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RSS)
  {   /* ScmObj d2204 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_RSS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NPROC)
  {   /* ScmObj d2202 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_NPROC)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NOFILE)
  {   /* ScmObj d2200 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_NOFILE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NICE)
  {   /* ScmObj d2198 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_NICE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MSGQUEUE)
  {   /* ScmObj d2196 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_MSGQUEUE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MEMLOCK)
  {   /* ScmObj d2194 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_MEMLOCK)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_LOCKS)
  {   /* ScmObj d2192 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_LOCKS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_FSIZE)
  {   /* ScmObj d2190 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_FSIZE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_DATA)
  {   /* ScmObj d2188 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_DATA)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CPU)
  {   /* ScmObj d2186 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_CPU)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CORE)
  {   /* ScmObj d2184 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_CORE)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_AS)
  {   /* ScmObj d2182 */
    SCM_UNBOUND,
  },
#endif /*defined(RLIMIT_AS)*/
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
  {   /* ScmPair d2181 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(634U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2179[3]), SCM_OBJ(&scm__rc.d2181[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2181[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2181[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2181[6])},
       { SCM_OBJ(&scm__rc.d2181[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2181[4]), SCM_OBJ(&scm__rc.d2181[8])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2181[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2181[11])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2181[12])},
       { SCM_MAKE_INT(641U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2179[3]), SCM_OBJ(&scm__rc.d2181[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2181[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2181[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2181[18])},
       { SCM_OBJ(&scm__rc.d2181[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2181[16]), SCM_OBJ(&scm__rc.d2181[20])},
  },
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if defined(HAVE_SYS_RESOURCE_H)
  {   /* ScmObj d2180 */
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
  },
#endif /*defined(HAVE_SYS_RESOURCE_H)*/
#if !(defined(HAVE_GETLOADAVG))
  {   /* ScmPair d2178 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2178[1])},
       { SCM_MAKE_INT(574U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2176[4]), SCM_OBJ(&scm__rc.d2178[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2178[4])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2178[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2178[7])},
       { SCM_OBJ(&scm__rc.d2178[8]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2178[5]), SCM_OBJ(&scm__rc.d2178[9])},
  },
#endif /*!(defined(HAVE_GETLOADAVG))*/
#if !(defined(HAVE_GETLOADAVG))
  {   /* ScmObj d2177 */
    SCM_UNBOUND,
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
  },
#endif /*!(defined(HAVE_GETLOADAVG))*/
#if defined(HAVE_GETLOADAVG)
  {   /* ScmPair d2175 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2175[1])},
       { SCM_MAKE_INT(562U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2172[4]), SCM_OBJ(&scm__rc.d2175[3])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2175[4])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2175[6])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2175[7])},
       { SCM_OBJ(&scm__rc.d2175[8]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2175[5]), SCM_OBJ(&scm__rc.d2175[9])},
  },
#endif /*defined(HAVE_GETLOADAVG)*/
#if defined(HAVE_GETLOADAVG)
  {   /* ScmObj d2174 */
    SCM_UNBOUND,
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
  },
#endif /*defined(HAVE_GETLOADAVG)*/
#if !(HAVE_STRSIGNAL)
  {   /* ScmPair d2171 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(554U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2169[3]), SCM_OBJ(&scm__rc.d2171[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2171[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2171[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2171[6])},
       { SCM_OBJ(&scm__rc.d2171[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2171[4]), SCM_OBJ(&scm__rc.d2171[8])},
  },
#endif /*!(HAVE_STRSIGNAL)*/
#if !(HAVE_STRSIGNAL)
  {   /* ScmObj d2170 */
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
  },
#endif /*!(HAVE_STRSIGNAL)*/
#if HAVE_STRSIGNAL
  {   /* ScmPair d2168 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(552U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2166[3]), SCM_OBJ(&scm__rc.d2168[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2168[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2168[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2168[6])},
       { SCM_OBJ(&scm__rc.d2168[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2168[4]), SCM_OBJ(&scm__rc.d2168[8])},
  },
#endif /*HAVE_STRSIGNAL*/
#if HAVE_STRSIGNAL
  {   /* ScmObj d2167 */
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
  },
#endif /*HAVE_STRSIGNAL*/
  {   /* ScmUVector d2159 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 1837, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 375, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 79, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 94, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 174, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 72, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 194, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 83, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 175, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 52, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 44, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 46, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 93, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 19, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 40, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 52, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 68, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 986, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 136, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 52, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 241, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 135, uvector__00026, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 247, uvector__00027, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 205, uvector__00028, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 96, uvector__00029, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 210, uvector__00030, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 111, uvector__00031, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 102, uvector__00032, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 57, uvector__00033, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 62, uvector__00034, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 40, uvector__00035, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 40, uvector__00036, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 40, uvector__00037, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 691, uvector__00038, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 223, uvector__00039, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 375, uvector__00040, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 301, uvector__00041, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 706, uvector__00042, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 1094, uvector__00043, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 877, uvector__00044, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 617, uvector__00045, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 285, uvector__00046, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 130, uvector__00047, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 197, uvector__00048, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 186, uvector__00049, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 548, uvector__00050, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 757, uvector__00051, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 321, uvector__00052, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 35, uvector__00053, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 114, uvector__00054, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 67, uvector__00055, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 93, uvector__00056, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 359, uvector__00057, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 148, uvector__00058, 0, NULL),
  },
  {   /* ScmCompiledCode d2158 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* sys-normalize-pathname */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[0])), 492,
            61, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[46]),
            SCM_OBJ(&scm__rc.d2158[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[492])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* sys-sigset */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[507])), 20,
            13, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[273]),
            SCM_OBJ(&scm__rc.d2158[3]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[527])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (sys-environ->alist #:G2165) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[542])), 22,
            13, 1, 0, SCM_OBJ(&scm__rc.d2150[390]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[396]),
            SCM_OBJ(&scm__rc.d2158[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* sys-environ->alist */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[564])), 37,
            17, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[434]),
            SCM_OBJ(&scm__rc.d2158[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[601])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* sys-putenv */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[618])), 55,
            17, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[440]),
            SCM_OBJ(&scm__rc.d2158[8]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[673])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* seconds+ */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[688])), 47,
            13, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[641]),
            SCM_OBJ(&scm__rc.d2158[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[735])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[750])), 10,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[665]),
            SCM_OBJ(&scm__rc.d2158[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[760])), 10,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[670]),
            SCM_OBJ(&scm__rc.d2158[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[770])), 24,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* sys-setpgrp */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[794])), 5,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[835]),
            SCM_OBJ(&scm__rc.d2158[15]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[799])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* glob */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[814])), 9,
            5, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[985]),
            SCM_OBJ(&scm__rc.d2158[17]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[823])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[838])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[853])), 9,
            9, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[993]),
            SCM_OBJ(&scm__rc.d2158[20]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* glob-fold */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[862])), 210,
            60, 3, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1012]),
            SCM_OBJ(&scm__rc.d2158[21]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1072])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1087])), 7,
            6, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1020]),
            SCM_OBJ(&scm__rc.d2158[23]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* rec */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1094])), 39,
            8, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1026]),
            SCM_OBJ(&scm__rc.d2158[26]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1133])), 6,
            6, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1035]),
            SCM_OBJ(&scm__rc.d2158[25]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* rec* */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1139])), 24,
            15, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1039]),
            SCM_OBJ(&scm__rc.d2158[26]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* glob-fold-1 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1163])), 18,
            18, 6, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1052]),
            SCM_OBJ(&scm__rc.d2158[27]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1181])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (glob-prepare-pattern f) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1196])), 26,
            12, 1, 0, SCM_OBJ(&scm__rc.d2150[1054]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1057]),
            SCM_OBJ(&scm__rc.d2158[30]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* glob-prepare-pattern */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1222])), 40,
            21, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1065]),
            SCM_OBJ(&scm__rc.d2158[30]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1262])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (glob-expand-braces expand) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1279])), 16,
            12, 2, 0, SCM_OBJ(&scm__rc.d2150[1067]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1070]),
            SCM_OBJ(&scm__rc.d2158[40]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1295])), 10,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1081]),
            SCM_OBJ(&scm__rc.d2158[33]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1305])), 8,
            6, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1090]),
            SCM_OBJ(&scm__rc.d2158[37]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1313])), 5,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1093]),
            SCM_OBJ(&scm__rc.d2158[37]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1318])), 5,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1096]),
            SCM_OBJ(&scm__rc.d2158[37]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1323])), 5,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1099]),
            SCM_OBJ(&scm__rc.d2158[37]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* loop */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1328])), 149,
            47, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1107]),
            SCM_OBJ(&scm__rc.d2158[38]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* parse */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1477])), 7,
            9, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1115]),
            SCM_OBJ(&scm__rc.d2158[39]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* glob-expand-braces */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1484])), 32,
            18, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1122]),
            SCM_OBJ(&scm__rc.d2158[40]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1516])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* element1 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1533])), 129,
            21, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1134]),
            SCM_OBJ(&scm__rc.d2158[42]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1662])), 190,
            49, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1142]),
            SCM_OBJ(&scm__rc.d2158[43]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* glob-component->regexp */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1852])), 73,
            35, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1152]),
            SCM_OBJ(&scm__rc.d2158[44]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1925])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* fixed-regexp? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1940])), 53,
            21, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1158]),
            SCM_OBJ(&scm__rc.d2158[46]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1993])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* ensure-dirname */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2008])), 39,
            17, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1163]),
            SCM_OBJ(&scm__rc.d2158[50]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2047])), 41,
            16, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1172]),
            SCM_OBJ(&scm__rc.d2158[49]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #:loop2286 */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2088])), 122,
            23, 5, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1184]),
            SCM_OBJ(&scm__rc.d2158[50]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-glob-fs-fold */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2210])), 122,
            42, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1194]),
            SCM_OBJ(&scm__rc.d2158[51]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2332])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2347])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %sys-mintty? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2362])), 26,
            15, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1199]),
            SCM_OBJ(&scm__rc.d2158[54]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2388])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (%sys-escape-windows-command-line #:G2294) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2403])), 25,
            28, 1, 0, SCM_OBJ(&scm__rc.d2150[1201]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1207]),
            SCM_OBJ(&scm__rc.d2158[57]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %sys-escape-windows-command-line */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2428])), 86,
            15, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1215]),
            SCM_OBJ(&scm__rc.d2158[57]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2514])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2157 */
    /* sys-normalize-pathname */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000005    /*   1 (CONSTU) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000005    /*   3 (CONSTU) */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000005    /*   5 (CONSTU) */,
    0x00004018    /*   6 (PUSH-LOCAL-ENV 4) */,
    0x00000040    /*   7 (LREF3) */,
    0x00000022    /*   8 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 421),
    0x0000100e    /*  10 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 15),
    0x0000004a    /*  12 (LREF2-PUSH) */,
    0x0000105f    /*  13 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  15 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 20),
    0x00000004    /*  17 (CONSTF) */,
    0x00000013    /*  18 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 21),
    0x0000003f    /*  20 (LREF2) */,
    0x00001018    /*  21 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  22 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 27),
    0x0000004d    /*  24 (LREF11-PUSH) */,
    0x0000105f    /*  25 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  27 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 32),
    0x00000004    /*  29 (CONSTF) */,
    0x00000013    /*  30 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 33),
    0x00000042    /*  32 (LREF11) */,
    0x00001018    /*  33 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 39),
    0x0000004f    /*  36 (LREF20-PUSH) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  39 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 44),
    0x00000004    /*  41 (CONSTF) */,
    0x00000013    /*  42 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 45),
    0x00000044    /*  44 (LREF20) */,
    0x00001018    /*  45 (PUSH-LOCAL-ENV 1) */,
    0x00002019    /*  46 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[31])) /* (#<undef> #<undef>) */,
    0x00000006    /*  48 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.os.windows */,
    0x0000000e    /*  50 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 54),
    0x0000005f    /*  52 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* cond-features */,
    0x0000008d    /*  54 (ASSQ) */,
    0x000010e8    /*  55 (ENV-SET 1) */,
    0x0000003e    /*  56 (LREF1) */,
    0x0000001e    /*  57 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 63),
    0x00000001    /*  59 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[18])) /* "\\" */,
    0x00000013    /*  61 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 65),
    0x00000001    /*  63 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[19])) /* "/" */,
    0x000000e8    /*  65 (ENV-SET 0) */,
    0x00000044    /*  66 (LREF20) */,
    0x0000001e    /*  67 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 76),
    0x0000200e    /*  69 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 76),
    0x00000006    /*  71 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #/^~([^\/\\]*)/ */,
    0x00405047    /*  73 (LREF-PUSH 5 1) */,
    0x0000205f    /*  74 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x00001018    /*  76 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  77 (LREF0) */,
    0x0000001e    /*  78 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 211),
    0x0000100e    /*  80 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 85),
    0x00001007    /*  82 (CONSTI-PUSH 1) */,
    0x0000003d    /*  83 (LREF0) */,
    0x00001011    /*  84 (CALL 1) */,
    0x00001018    /*  85 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  86 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 93),
    0x00000048    /*  88 (LREF0-PUSH) */,
    0x00000006    /*  89 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[22])) /* "" */,
    0x0000205f    /*  91 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  93 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 153),
    0x00000045    /*  95 (LREF21) */,
    0x0000001e    /*  96 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 122),
    0x0000100e    /*  98 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 104),
    0x00000006    /* 100 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[24])) /* "HOME" */,
    0x0000105f    /* 102 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getenv */,
    0x0000001e    /* 104 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 108),
    0x00000013    /* 106 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 195),
    0x0000100e    /* 108 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 114),
    0x00000006    /* 110 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[26])) /* "USERPROFILE" */,
    0x0000105f    /* 112 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getenv */,
    0x0000001e    /* 114 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 118),
    0x00000013    /* 116 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 195),
    0x00000001    /* 118 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[22])) /* "" */,
    0x00000013    /* 120 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 195),
    0x0000100e    /* 122 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 130),
    0x0000000e    /* 124 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 128),
    0x0000005f    /* 126 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getuid */,
    0x00001062    /* 128 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getpwuid */,
    0x00001018    /* 130 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 131 (LREF0) */,
    0x0000001e    /* 132 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 143),
    0x0000200e    /* 134 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 150),
    0x00000048    /* 136 (LREF0-PUSH) */,
    0x00000006    /* 137 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* dir */,
    0x0000205f    /* 139 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00000013    /* 141 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 150),
    0x0000200e    /* 143 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 150),
    0x00000006    /* 145 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[31])) /* "Couldn't obtain username for :" */,
    0x00408047    /* 147 (LREF-PUSH 8 1) */,
    0x0000205f    /* 148 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000001a    /* 150 (POP-LOCAL-ENV) */,
    0x00000013    /* 151 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 195),
    0x00000045    /* 153 (LREF21) */,
    0x0000001e    /* 154 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 165),
    0x0000200e    /* 156 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 195),
    0x00000006    /* 158 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[33])) /* "'~user' expansil isn't supported on Windows:" */,
    0x00407047    /* 160 (LREF-PUSH 7 1) */,
    0x0000205f    /* 161 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /* 163 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 195),
    0x0000100e    /* 165 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 174),
    0x0000100e    /* 167 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 172),
    0x00001007    /* 169 (CONSTI-PUSH 1) */,
    0x00000041    /* 170 (LREF10) */,
    0x00001011    /* 171 (CALL 1) */,
    0x00001062    /* 172 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getpwnam */,
    0x00001018    /* 174 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 175 (LREF0) */,
    0x0000001e    /* 176 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 187),
    0x0000200e    /* 178 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 194),
    0x00000048    /* 180 (LREF0-PUSH) */,
    0x00000006    /* 181 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* dir */,
    0x0000205f    /* 183 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00000013    /* 185 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 194),
    0x0000200e    /* 187 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 194),
    0x00000006    /* 189 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[31])) /* "Couldn't obtain username for :" */,
    0x00408047    /* 191 (LREF-PUSH 8 1) */,
    0x0000205f    /* 192 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000001a    /* 194 (POP-LOCAL-ENV) */,
    0x00001018    /* 195 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /* 196 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 207),
    0x00000048    /* 198 (LREF0-PUSH) */,
    0x0000100e    /* 199 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 205),
    0x00000006    /* 201 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* after */,
    0x00000044    /* 203 (LREF20) */,
    0x00001011    /* 204 (CALL 1) */,
    0x00002062    /* 205 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x0000001a    /* 207 (POP-LOCAL-ENV) */,
    0x0000001a    /* 208 (POP-LOCAL-ENV) */,
    0x00000013    /* 209 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 212),
    0x0040603c    /* 211 (LREF 6 1) */,
    0x0000001a    /* 212 (POP-LOCAL-ENV) */,
    0x00001018    /* 213 (PUSH-LOCAL-ENV 1) */,
    0x0000403c    /* 214 (LREF 4 0) */,
    0x0000001e    /* 215 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 254),
    0x00000042    /* 217 (LREF11) */,
    0x0000001e    /* 218 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 229),
    0x0000200e    /* 220 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 236),
    0x00000006    /* 222 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #/^([A-Za-z]:)?[\/\\]/ */,
    0x00000048    /* 224 (LREF0-PUSH) */,
    0x0000205f    /* 225 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x00000013    /* 227 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 236),
    0x0000200e    /* 229 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 236),
    0x00000006    /* 231 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #/^\// */,
    0x00000048    /* 233 (LREF0-PUSH) */,
    0x0000205f    /* 234 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x0000001e    /* 236 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 241),
    0x0000003d    /* 238 (LREF0) */,
    0x00000013    /* 239 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 255),
    0x0000300e    /* 241 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 255),
    0x0000000e    /* 243 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 247),
    0x0000005f    /* 245 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getcwd */,
    0x0000000d    /* 247 (PUSH) */,
    0x0000004c    /* 248 (LREF10-PUSH) */,
    0x00000048    /* 249 (LREF0-PUSH) */,
    0x0000305f    /* 250 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00000013    /* 252 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 255),
    0x0000003d    /* 254 (LREF0) */,
    0x0000001a    /* 255 (POP-LOCAL-ENV) */,
    0x00001018    /* 256 (PUSH-LOCAL-ENV 1) */,
    0x00000044    /* 257 (LREF20) */,
    0x0000001e    /* 258 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 404),
    0x0000200e    /* 260 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 267),
    0x00000048    /* 262 (LREF0-PUSH) */,
    0x00000006    /* 263 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #[/\\] */,
    0x0000205f    /* 265 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-split */,
    0x0000000d    /* 267 (PUSH) */,
    0x00000008    /* 268 (CONSTN-PUSH) */,
    0x00000009    /* 269 (CONSTF-PUSH) */,
    0x00003017    /* 270 (LOCAL-ENV 3) */,
    0x0000003f    /* 271 (LREF2) */,
    0x00000022    /* 272 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 292),
    0x0000003d    /* 274 (LREF0) */,
    0x0000001e    /* 275 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 283),
    0x00000006    /* 277 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[22])) /* "" */,
    0x0000003e    /* 279 (LREF1) */,
    0x00000066    /* 280 (CONS) */,
    0x00000013    /* 281 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 284),
    0x0000003e    /* 283 (LREF1) */,
    0x00001018    /* 284 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 285 (LREF0) */,
    0x00000093    /* 286 (REVERSE) */,
    0x0000000d    /* 287 (PUSH) */,
    0x00000051    /* 288 (LREF30-PUSH) */,
    0x00002060    /* 289 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-join */,
    0x00000014    /* 291 (RET) */,
    0x0000200e    /* 292 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 300),
    0x0000006c    /* 294 (LREF2-CAR) */,
    0x0000000d    /* 295 (PUSH) */,
    0x00000006    /* 296 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[42])) /* "." */,
    0x0000205f    /* 298 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /* 300 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 310),
    0x00000078    /* 302 (LREF2-CDR) */,
    0x0000000d    /* 303 (PUSH) */,
    0x00000049    /* 304 (LREF1-PUSH) */,
    0x00000006    /* 305 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000101b    /* 307 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 271),
    0x00000014    /* 309 (RET) */,
    0x0000200e    /* 310 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 318),
    0x0000006c    /* 312 (LREF2-CAR) */,
    0x0000000d    /* 313 (PUSH) */,
    0x00000006    /* 314 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[43])) /* ".." */,
    0x0000205f    /* 316 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /* 318 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 393),
    0x0000003e    /* 320 (LREF1) */,
    0x00000022    /* 321 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 333),
    0x00000078    /* 323 (LREF2-CDR) */,
    0x0000000d    /* 324 (PUSH) */,
    0x0000006c    /* 325 (LREF2-CAR) */,
    0x0000000d    /* 326 (PUSH) */,
    0x0000003e    /* 327 (LREF1) */,
    0x00000067    /* 328 (CONS-PUSH) */,
    0x00000009    /* 329 (CONSTF-PUSH) */,
    0x0000101b    /* 330 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 271),
    0x00000014    /* 332 (RET) */,
    0x0000200e    /* 333 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 341),
    0x0000006b    /* 335 (LREF1-CAR) */,
    0x0000000d    /* 336 (PUSH) */,
    0x00000006    /* 337 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[43])) /* ".." */,
    0x0000205f    /* 339 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /* 341 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 346),
    0x00000013    /* 343 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 323),
    0x00000014    /* 345 (RET) */,
    0x0000200e    /* 346 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 353),
    0x00000049    /* 348 (LREF1-PUSH) */,
    0x00000006    /* 349 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[32])) /* ("") */,
    0x0000205f    /* 351 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /* 353 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 358),
    0x00000013    /* 355 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 323),
    0x00000014    /* 357 (RET) */,
    0x00000045    /* 358 (LREF21) */,
    0x0000001e    /* 359 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 378),
    0x0000200e    /* 361 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 367),
    0x00000049    /* 363 (LREF1-PUSH) */,
    0x00001007    /* 364 (CONSTI-PUSH 1) */,
    0x0000205f    /* 365 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* length=? */,
    0x0000001e    /* 367 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 378),
    0x0000200e    /* 369 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 376),
    0x00000006    /* 371 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #/^[A-Za-z]:$/ */,
    0x0000006b    /* 373 (LREF1-CAR) */,
    0x00002062    /* 374 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x0000001f    /* 376 (BT) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 323),
    0x00000078    /* 378 (LREF2-CDR) */,
    0x0000000d    /* 379 (PUSH) */,
    0x00000077    /* 380 (LREF1-CDR) */,
    0x0000000d    /* 381 (PUSH) */,
    0x00000006    /* 382 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000101b    /* 384 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 271),
    0x00000014    /* 386 (RET) */,
    0x00000013    /* 387 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 378),
    0x00000014    /* 389 (RET) */,
    0x00000013    /* 390 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 378),
    0x00000014    /* 392 (RET) */,
    0x00000078    /* 393 (LREF2-CDR) */,
    0x0000000d    /* 394 (PUSH) */,
    0x0000006c    /* 395 (LREF2-CAR) */,
    0x0000000d    /* 396 (PUSH) */,
    0x0000003e    /* 397 (LREF1) */,
    0x00000067    /* 398 (CONS-PUSH) */,
    0x00000009    /* 399 (CONSTF-PUSH) */,
    0x0000101b    /* 400 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 271),
    0x00000014    /* 402 (RET) */,
    0x00000014    /* 403 (RET) */,
    0x00000042    /* 404 (LREF11) */,
    0x0000001e    /* 405 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 420),
    0x0000200e    /* 407 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 414),
    0x00000048    /* 409 (LREF0-PUSH) */,
    0x00000006    /* 410 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(47)) /* #\/ */,
    0x0000205f    /* 412 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-split */,
    0x0000000d    /* 414 (PUSH) */,
    0x00000006    /* 415 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[18])) /* "\\" */,
    0x00002060    /* 417 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-join */,
    0x00000014    /* 419 (RET) */,
    0x00000053    /* 420 (LREF0-RET) */,
    0x00000079    /* 421 (LREF3-CDR) */,
    0x00000022    /* 422 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 430),
    0x00000006    /* 424 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[46])) /* "keyword list not even" */,
    0x0000004b    /* 426 (LREF3-PUSH) */,
    0x00002060    /* 427 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 429 (RET) */,
    0x0000100e    /* 430 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 435),
    0x0000006d    /* 432 (LREF3-CAR) */,
    0x00001062    /* 433 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /* 435 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 436 (LREF0) */,
    0x0000002e    /* 437 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :absolute */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 449)  /*    449 */,
    0x00c0103c    /* 440 (LREF 1 3) */,
    0x00000087    /* 441 (CDDR-PUSH) */,
    0x00c0103c    /* 442 (LREF 1 3) */,
    0x00000083    /* 443 (CADR-PUSH) */,
    0x0000004d    /* 444 (LREF11-PUSH) */,
    0x0000004c    /* 445 (LREF10-PUSH) */,
    0x0000201b    /* 446 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 7),
    0x00000014    /* 448 (RET) */,
    0x0000003d    /* 449 (LREF0) */,
    0x0000002e    /* 450 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :expand */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 462)  /*    462 */,
    0x00c0103c    /* 453 (LREF 1 3) */,
    0x00000087    /* 454 (CDDR-PUSH) */,
    0x0000004e    /* 455 (LREF12-PUSH) */,
    0x00c0103c    /* 456 (LREF 1 3) */,
    0x00000083    /* 457 (CADR-PUSH) */,
    0x0000004c    /* 458 (LREF10-PUSH) */,
    0x0000201b    /* 459 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 7),
    0x00000014    /* 461 (RET) */,
    0x0000003d    /* 462 (LREF0) */,
    0x0000002e    /* 463 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :canonicalize */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 475)  /*    475 */,
    0x00c0103c    /* 466 (LREF 1 3) */,
    0x00000087    /* 467 (CDDR-PUSH) */,
    0x0000004e    /* 468 (LREF12-PUSH) */,
    0x0000004d    /* 469 (LREF11-PUSH) */,
    0x00c0103c    /* 470 (LREF 1 3) */,
    0x00000083    /* 471 (CADR-PUSH) */,
    0x0000201b    /* 472 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 7),
    0x00000014    /* 474 (RET) */,
    0x0000200e    /* 475 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 483),
    0x00000006    /* 477 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[51])) /* "unknown keyword ~S" */,
    0x00c0103c    /* 479 (LREF 1 3) */,
    0x00000069    /* 480 (CAR-PUSH) */,
    0x0000205f    /* 481 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00c0103c    /* 483 (LREF 1 3) */,
    0x00000087    /* 484 (CDDR-PUSH) */,
    0x0000004e    /* 485 (LREF12-PUSH) */,
    0x0000004d    /* 486 (LREF11-PUSH) */,
    0x0000004c    /* 487 (LREF10-PUSH) */,
    0x0000201b    /* 488 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]) + 7),
    0x00000014    /* 490 (RET) */,
    0x00000014    /* 491 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[492]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-normalize-pathname */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[492]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[0])) /* #<compiled-code sys-normalize-pathname@0x701049025f60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-normalize-pathname */,
    0x00000014    /*  14 (RET) */,
    /* sys-sigset */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[507]) + 8),
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <sys-sigset> */,
    0x00001060    /*   5 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*   7 (RET) */,
    0x0000005e    /*   8 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-sigset-add! */,
    0x0000100e    /*  10 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[507]) + 16),
    0x0000005e    /*  12 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <sys-sigset> */,
    0x0000105f    /*  14 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x0000000d    /*  16 (PUSH) */,
    0x0000003d    /*  17 (LREF0) */,
    0x00003095    /*  18 (TAIL-APPLY 3) */,
    0x00000014    /*  19 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[527]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-sigset */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[527]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[2])) /* #<compiled-code sys-sigset@0x701048b62840> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-sigset */,
    0x00000014    /*  14 (RET) */,
    /* (sys-environ->alist #:G2165) */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[542]) + 9),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00000006    /*   3 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(61)) /* #\= */,
    0x00000006    /*   5 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* both */,
    0x0000305f    /*   7 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-scan */,
    0x00002036    /*   9 (TAIL-RECEIVE 2 0) */,
    0x0000003e    /*  10 (LREF1) */,
    0x0000001e    /*  11 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[542]) + 17),
    0x00000049    /*  13 (LREF1-PUSH) */,
    0x0000003d    /*  14 (LREF0) */,
    0x00000066    /*  15 (CONS) */,
    0x00000014    /*  16 (RET) */,
    0x0000004c    /*  17 (LREF10-PUSH) */,
    0x00000001    /*  18 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[22])) /* "" */,
    0x00000066    /*  20 (CONS) */,
    0x00000014    /*  21 (RET) */,
    /* sys-environ->alist */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]) + 9),
    0x0000000e    /*   3 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]) + 10),
    0x0000005f    /*   5 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-environ */,
    0x00000013    /*   7 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]) + 10),
    0x0000006a    /*   9 (LREF0-CAR) */,
    0x0000000d    /*  10 (PUSH) */,
    0x0000003d    /*  11 (LREF0) */,
    0x00000022    /*  12 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]) + 17),
    0x00000003    /*  14 (CONSTN) */,
    0x00000013    /*  15 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]) + 18),
    0x00000076    /*  17 (LREF0-CDR) */,
    0x00002018    /*  18 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  19 (LREF0) */,
    0x00000022    /*  20 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]) + 24),
    0x00000013    /*  22 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]) + 32),
    0x0000200e    /*  24 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]) + 32),
    0x00000006    /*  26 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[296])) /* "too many arguments for" */,
    0x00000006    /*  28 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[429])) /* (lambda (:optional (envlist (sys-environ))) (map (^ (envstr) (receive (pre post) (string-scan envstr #\= 'both) (if pre (cons pre post) (cons envstr "")))) envlist)) */,
    0x0000205f    /*  30 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000004f    /*  32 (LREF20-PUSH) */,
    0x00000049    /*  33 (LREF1-PUSH) */,
    0x00002060    /*  34 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00000014    /*  36 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[397])) /* (#<compiled-code (sys-environ->alist #:G2165)@0x701049061a20>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[601]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-environ->alist */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[601]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[5])) /* #<compiled-code sys-environ->alist@0x7010490619c0> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-environ->alist */,
    0x00000014    /*  16 (RET) */,
    /* sys-putenv */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]) + 47),
    0x0000003e    /*   3 (LREF1) */,
    0x0000009b    /*   4 (STRINGP) */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]) + 9),
    0x00000013    /*   7 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]) + 18),
    0x0000300e    /*   9 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]) + 18),
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[308])) /* "bad type of argument for ~s: ~s" */,
    0x00000006    /*  13 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* arg */,
    0x00000049    /*  15 (LREF1-PUSH) */,
    0x0000305f    /*  16 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0000300e    /*  18 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]) + 27),
    0x00000049    /*  20 (LREF1-PUSH) */,
    0x00000006    /*  21 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(61)) /* #\= */,
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* both */,
    0x0000305f    /*  25 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-scan */,
    0x00002036    /*  27 (TAIL-RECEIVE 2 0) */,
    0x0000003e    /*  28 (LREF1) */,
    0x0000001e    /*  29 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]) + 33),
    0x00000013    /*  31 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]) + 40),
    0x0000200e    /*  33 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]) + 40),
    0x00000006    /*  35 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[310])) /* "sys-putenv: argument doesn't contain '=':" */,
    0x0000004d    /*  37 (LREF11-PUSH) */,
    0x0000205f    /*  38 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000049    /*  40 (LREF1-PUSH) */,
    0x00000048    /*  41 (LREF0-PUSH) */,
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00003060    /*  44 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-setenv */,
    0x00000014    /*  46 (RET) */,
    0x00000049    /*  47 (LREF1-PUSH) */,
    0x0000006a    /*  48 (LREF0-CAR) */,
    0x0000000d    /*  49 (PUSH) */,
    0x00000006    /*  50 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00003060    /*  52 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-setenv */,
    0x00000014    /*  54 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[673]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-putenv */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[673]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[7])) /* #<compiled-code sys-putenv@0x701047e25180> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-putenv */,
    0x00000014    /*  14 (RET) */,
    /* seconds+ */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]) + 7),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <time> */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]) + 12),
    0x0000003e    /*   9 (LREF1) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]) + 21),
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* t */,
    0x0000005e    /*  16 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <time> */,
    0x00000049    /*  18 (LREF1-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]) + 28),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000005e    /*  24 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <real> */,
    0x0000205f    /*  26 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* of-type? */,
    0x0000001e    /*  28 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]) + 33),
    0x0000003d    /*  30 (LREF0) */,
    0x00000013    /*  31 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]) + 42),
    0x0000300e    /*  33 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]) + 42),
    0x00000006    /*  35 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* dt */,
    0x0000005e    /*  37 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <real> */,
    0x00000048    /*  39 (LREF0-PUSH) */,
    0x0000305f    /*  40 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* type-error */,
    0x00000048    /*  42 (LREF0-PUSH) */,
    0x00000049    /*  43 (LREF1-PUSH) */,
    0x00002060    /*  44 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* absolute-time */,
    0x00000014    /*  46 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[735]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* seconds+ */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[735]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[9])) /* #<compiled-code seconds+@0x7010481206c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* seconds+ */,
    0x00000014    /*  14 (RET) */,
    /* #f */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[750]) + 6),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* compare */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000002    /*   7 (CONSTI 0) */,
    0x000000ad    /*   8 (NUMEQ2) */,
    0x00000014    /*   9 (RET) */,
    /* #f */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[760]) + 6),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* compare */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000002    /*   7 (CONSTI 0) */,
    0x000000ae    /*   8 (NUMLT2) */,
    0x00000014    /*   9 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[770]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* time-comparator */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[770]) + 21),
    0x0000005e    /*   9 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* time? */,
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[11])) /* #<compiled-code #f@0x701047dd1e40> */,
    0x0000000d    /*  13 (PUSH) */,
    0x00000016    /*  14 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[12])) /* #<compiled-code #f@0x701047dd1de0> */,
    0x00000061    /*  16 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* default-hash */,
    0x00004063    /*  18 (PUSH-GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* make-comparator */,
    0x00000014    /*  20 (RET) */,
    0x00000015    /*  21 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* time-comparator */,
    0x00000014    /*  23 (RET) */,
    /* sys-setpgrp */
    0x00000007    /*   0 (CONSTI-PUSH 0) */,
    0x00000007    /*   1 (CONSTI-PUSH 0) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-setpgid */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[799]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-setpgrp */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[799]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[14])) /* #<compiled-code sys-setpgrp@0x701048bd7720> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-setpgrp */,
    0x00000014    /*  14 (RET) */,
    /* glob */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-fold */,
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000005e    /*   3 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* cons */,
    0x00000008    /*   5 (CONSTN-PUSH) */,
    0x0000003d    /*   6 (LREF0) */,
    0x00005095    /*   7 (TAIL-APPLY 5) */,
    0x00000014    /*   8 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[823]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* glob */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[823]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[16])) /* #<compiled-code glob@0x70104abfe3c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* glob */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[838]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-glob */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[838]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* glob */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-glob */,
    0x00000014    /*  14 (RET) */,
    /* (glob-fold #f) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x00807047    /*   1 (LREF-PUSH 7 2) */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000004c    /*   3 (LREF10-PUSH) */,
    0x00004047    /*   4 (LREF-PUSH 4 0) */,
    0x0000004f    /*   5 (LREF20-PUSH) */,
    0x00006060    /*   6 (GREF-TAIL-CALL 6) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-fold-1 */,
    0x00000014    /*   8 (RET) */,
    /* glob-fold */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000005    /*   1 (CONSTU) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000005    /*   3 (CONSTU) */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000005    /*   5 (CONSTU) */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000005    /*   7 (CONSTU) */,
    0x00005018    /*   8 (PUSH-LOCAL-ENV 5) */,
    0x0100003c    /*   9 (LREF 0 4) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 119),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 17),
    0x0000004b    /*  14 (LREF3-PUSH) */,
    0x0000105f    /*  15 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  17 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 22),
    0x00000004    /*  19 (CONSTF) */,
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 23),
    0x00000040    /*  22 (LREF3) */,
    0x00001018    /*  23 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  24 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 29),
    0x0000004e    /*  26 (LREF12-PUSH) */,
    0x0000105f    /*  27 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  29 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 35),
    0x0000005d    /*  31 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-fs-folder */,
    0x00000013    /*  33 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 36),
    0x00000043    /*  35 (LREF12) */,
    0x00001018    /*  36 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  37 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 42),
    0x00000050    /*  39 (LREF21-PUSH) */,
    0x0000105f    /*  40 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  42 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 48),
    0x0000005d    /*  44 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* sort */,
    0x00000013    /*  46 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 49),
    0x00000045    /*  48 (LREF21) */,
    0x00001018    /*  49 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  50 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 55),
    0x00000051    /*  52 (LREF30-PUSH) */,
    0x0000105f    /*  53 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  55 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 60),
    0x00000004    /*  57 (CONSTF) */,
    0x00000013    /*  58 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 61),
    0x00000046    /*  60 (LREF30) */,
    0x00001018    /*  61 (PUSH-LOCAL-ENV 1) */,
    0x00000046    /*  62 (LREF30) */,
    0x0000001e    /*  63 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 67),
    0x00000013    /*  65 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 82),
    0x00000006    /*  67 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.os.windows */,
    0x0000000e    /*  69 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 73),
    0x0000005f    /*  71 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* cond-features */,
    0x0000008d    /*  73 (ASSQ) */,
    0x0000001e    /*  74 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 80),
    0x00000001    /*  76 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* #[/\\] */,
    0x00000013    /*  78 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 82),
    0x00000001    /*  80 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* #[/] */,
    0x00001018    /*  82 (PUSH-LOCAL-ENV 1) */,
    0x0000300e    /*  83 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 110),
    0x00000016    /*  85 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[19])) /* #<compiled-code (glob-fold #f)@0x701049598ba0> */,
    0x0000000d    /*  87 (PUSH) */,
    0x00406047    /*  88 (LREF-PUSH 6 1) */,
    0x0000300e    /*  89 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 108),
    0x0000005e    /*  91 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-expand-braces */,
    0x00000008    /*  93 (CONSTN-PUSH) */,
    0x0000100e    /*  94 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 99),
    0x00c06047    /*  96 (LREF-PUSH 6 3) */,
    0x0000105f    /*  97 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x0000001e    /*  99 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 104),
    0x00c0603c    /* 101 (LREF 6 3) */,
    0x00000013    /* 102 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 106),
    0x00c0603c    /* 104 (LREF 6 3) */,
    0x00001088    /* 105 (LIST 1) */,
    0x00003062    /* 106 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold */,
    0x00003062    /* 108 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold */,
    0x00001018    /* 110 (PUSH-LOCAL-ENV 1) */,
    0x00000046    /* 111 (LREF30) */,
    0x0000001e    /* 112 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 118),
    0x00000048    /* 114 (LREF0-PUSH) */,
    0x00000046    /* 115 (LREF30) */,
    0x00001012    /* 116 (TAIL-CALL 1) */,
    0x00000014    /* 117 (RET) */,
    0x00000053    /* 118 (LREF0-RET) */,
    0x0100003c    /* 119 (LREF 0 4) */,
    0x00000074    /* 120 (CDR) */,
    0x00000022    /* 121 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 129),
    0x00000006    /* 123 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[46])) /* "keyword list not even" */,
    0x01000047    /* 125 (LREF-PUSH 0 4) */,
    0x00002060    /* 126 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 128 (RET) */,
    0x0000100e    /* 129 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 135),
    0x0100003c    /* 131 (LREF 0 4) */,
    0x00000069    /* 132 (CAR-PUSH) */,
    0x0000105f    /* 133 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /* 135 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 136 (LREF0) */,
    0x0000002e    /* 137 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :separator */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 150)  /*    150 */,
    0x0100103c    /* 140 (LREF 1 4) */,
    0x00000087    /* 141 (CDDR-PUSH) */,
    0x0100103c    /* 142 (LREF 1 4) */,
    0x00000083    /* 143 (CADR-PUSH) */,
    0x0000004e    /* 144 (LREF12-PUSH) */,
    0x0000004d    /* 145 (LREF11-PUSH) */,
    0x0000004c    /* 146 (LREF10-PUSH) */,
    0x0000201b    /* 147 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 9),
    0x00000014    /* 149 (RET) */,
    0x0000003d    /* 150 (LREF0) */,
    0x0000002e    /* 151 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :folder */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 164)  /*    164 */,
    0x0100103c    /* 154 (LREF 1 4) */,
    0x00000087    /* 155 (CDDR-PUSH) */,
    0x00c01047    /* 156 (LREF-PUSH 1 3) */,
    0x0100103c    /* 157 (LREF 1 4) */,
    0x00000083    /* 158 (CADR-PUSH) */,
    0x0000004d    /* 159 (LREF11-PUSH) */,
    0x0000004c    /* 160 (LREF10-PUSH) */,
    0x0000201b    /* 161 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 9),
    0x00000014    /* 163 (RET) */,
    0x0000003d    /* 164 (LREF0) */,
    0x0000002e    /* 165 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :sorter */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 178)  /*    178 */,
    0x0100103c    /* 168 (LREF 1 4) */,
    0x00000087    /* 169 (CDDR-PUSH) */,
    0x00c01047    /* 170 (LREF-PUSH 1 3) */,
    0x0000004e    /* 171 (LREF12-PUSH) */,
    0x0100103c    /* 172 (LREF 1 4) */,
    0x00000083    /* 173 (CADR-PUSH) */,
    0x0000004c    /* 174 (LREF10-PUSH) */,
    0x0000201b    /* 175 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 9),
    0x00000014    /* 177 (RET) */,
    0x0000003d    /* 178 (LREF0) */,
    0x0000002e    /* 179 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :prefix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 192)  /*    192 */,
    0x0100103c    /* 182 (LREF 1 4) */,
    0x00000087    /* 183 (CDDR-PUSH) */,
    0x00c01047    /* 184 (LREF-PUSH 1 3) */,
    0x0000004e    /* 185 (LREF12-PUSH) */,
    0x0000004d    /* 186 (LREF11-PUSH) */,
    0x0100103c    /* 187 (LREF 1 4) */,
    0x00000083    /* 188 (CADR-PUSH) */,
    0x0000201b    /* 189 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 9),
    0x00000014    /* 191 (RET) */,
    0x0000200e    /* 192 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 200),
    0x00000006    /* 194 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[51])) /* "unknown keyword ~S" */,
    0x0100103c    /* 196 (LREF 1 4) */,
    0x00000069    /* 197 (CAR-PUSH) */,
    0x0000205f    /* 198 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0100103c    /* 200 (LREF 1 4) */,
    0x00000087    /* 201 (CDDR-PUSH) */,
    0x00c01047    /* 202 (LREF-PUSH 1 3) */,
    0x0000004e    /* 203 (LREF12-PUSH) */,
    0x0000004d    /* 204 (LREF11-PUSH) */,
    0x0000004c    /* 205 (LREF10-PUSH) */,
    0x0000201b    /* 206 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]) + 9),
    0x00000014    /* 208 (RET) */,
    0x00000014    /* 209 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1072]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-fold */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1072]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[20])) /* #<compiled-code glob-fold@0x701049598c60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-fold */,
    0x00000014    /*  14 (RET) */,
    /* (glob-fold-1 rec #f) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x0000007b    /*   1 (LREF11-CDR) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x00000045    /*   4 (LREF21) */,
    0x0000301d    /*   5 (LOCAL-ENV-TAIL-CALL 3) */,
    0x00000014    /*   6 (RET) */,
    /* (glob-fold-1 rec) */
    0x0000003e    /*   0 (LREF1) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1094]) + 4),
    0x00000053    /*   3 (LREF0-RET) */,
    0x0000006b    /*   4 (LREF1-CAR) */,
    0x0000002e    /*   5 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* ** */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1094]) + 15)  /*     15 */,
    0x0000004a    /*   8 (LREF2-PUSH) */,
    0x00000077    /*   9 (LREF1-CDR) */,
    0x0000000d    /*  10 (PUSH) */,
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x00000041    /*  12 (LREF10) */,
    0x0000301d    /*  13 (LOCAL-ENV-TAIL-CALL 3) */,
    0x00000014    /*  14 (RET) */,
    0x00000077    /*  15 (LREF1-CDR) */,
    0x00000022    /*  16 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1094]) + 27),
    0x01002047    /*  18 (LREF-PUSH 2 4) */,
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x0000004a    /*  20 (LREF2-PUSH) */,
    0x0000006b    /*  21 (LREF1-CAR) */,
    0x0000000d    /*  22 (PUSH) */,
    0x00000009    /*  23 (CONSTF-PUSH) */,
    0x00000045    /*  24 (LREF21) */,
    0x00005012    /*  25 (TAIL-CALL 5) */,
    0x00000014    /*  26 (RET) */,
    0x00000016    /*  27 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[22])) /* #<compiled-code (glob-fold-1 rec #f)@0x70104885a660> */,
    0x0000000d    /*  29 (PUSH) */,
    0x00000048    /*  30 (LREF0-PUSH) */,
    0x0000004a    /*  31 (LREF2-PUSH) */,
    0x0000006b    /*  32 (LREF1-CAR) */,
    0x0000000d    /*  33 (PUSH) */,
    0x00000006    /*  34 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00000045    /*  36 (LREF21) */,
    0x00005012    /*  37 (TAIL-CALL 5) */,
    0x00000014    /*  38 (RET) */,
    /* (glob-fold-1 rec* #f) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x0000004d    /*   1 (LREF11-PUSH) */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00000044    /*   3 (LREF20) */,
    0x0000301d    /*   4 (LOCAL-ENV-TAIL-CALL 3) */,
    0x00000014    /*   5 (RET) */,
    /* (glob-fold-1 rec*) */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[24])) /* #<compiled-code (glob-fold-1 rec* #f)@0x70104885a4e0> */,
    0x0000300f    /*   2 (PUSH-PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1139]) + 9),
    0x0000004a    /*   4 (LREF2-PUSH) */,
    0x00000049    /*   5 (LREF1-PUSH) */,
    0x00000048    /*   6 (LREF0-PUSH) */,
    0x00000042    /*   7 (LREF11) */,
    0x0000301c    /*   8 (LOCAL-ENV-CALL 3) */,
    0x0000500f    /*   9 (PUSH-PRE-CALL 5) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1139]) + 21),
    0x0000005e    /*  11 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* cons */,
    0x00000008    /*  13 (CONSTN-PUSH) */,
    0x0000004a    /*  14 (LREF2-PUSH) */,
    0x00000006    /*  15 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #/^[^.].*$/ */,
    0x00000006    /*  17 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00000045    /*  19 (LREF21) */,
    0x00005011    /*  20 (CALL 5) */,
    0x00003063    /*  21 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold */,
    0x00000014    /*  23 (RET) */,
    /* glob-fold-1 */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1041])) /* (#<compiled-code (glob-fold-1 rec)@0x70104885aba0> #<compiled-code (glob-fold-1 rec*)@0x70104885a5a0>) */,
    0x0000300e    /*   2 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1163]) + 9),
    0x01401047    /*   4 (LREF-PUSH 1 5) */,
    0x0000004e    /*   5 (LREF12-PUSH) */,
    0x0000004c    /*   6 (LREF10-PUSH) */,
    0x0000305f    /*   7 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-prepare-pattern */,
    0x00001018    /*   9 (PUSH-LOCAL-ENV 1) */,
    0x0000006a    /*  10 (LREF0-CAR) */,
    0x0000000d    /*  11 (PUSH) */,
    0x00000076    /*  12 (LREF0-CDR) */,
    0x0000000d    /*  13 (PUSH) */,
    0x00c02047    /*  14 (LREF-PUSH 2 3) */,
    0x00000042    /*  15 (LREF11) */,
    0x0000301d    /*  16 (LOCAL-ENV-TAIL-CALL 3) */,
    0x00000014    /*  17 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1181]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-fold-1 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1181]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[26])) /* #<compiled-code glob-fold-1@0x70104885ac60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-fold-1 */,
    0x00000014    /*  14 (RET) */,
    /* (glob-prepare-pattern f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1196]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00000006    /*   3 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[22])) /* "" */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1196]) + 11),
    0x0000000a    /*   9 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* dir? */,
    0x0000200e    /*  11 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1196]) + 18),
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[472])) /* "**" */,
    0x0000205f    /*  16 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  18 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1196]) + 22),
    0x0000000a    /*  20 (CONST-RET) */,
    SCM_WORD(SCM_UNDEFINED) /* ** */,
    0x00000048    /*  22 (LREF0-PUSH) */,
    0x00001060    /*  23 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-component->regexp */,
    0x00000014    /*  25 (RET) */,
    /* glob-prepare-pattern */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[30])) /* (#<undef>) */,
    0x00000044    /*   2 (LREF20) */,
    0x000000e8    /*   3 (ENV-SET 0) */,
    0x0000200e    /*   4 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1222]) + 10),
    0x0000004e    /*   6 (LREF12-PUSH) */,
    0x0000004d    /*   7 (LREF11-PUSH) */,
    0x0000205f    /*   8 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-split */,
    0x00001018    /*  10 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  11 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1222]) + 19),
    0x0000006a    /*  13 (LREF0-CAR) */,
    0x0000000d    /*  14 (PUSH) */,
    0x00000006    /*  15 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[22])) /* "" */,
    0x0000205f    /*  17 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  19 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1222]) + 31),
    0x00000006    /*  21 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000200e    /*  23 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1222]) + 29),
    0x00000051    /*  25 (LREF30-PUSH) */,
    0x00000076    /*  26 (LREF0-CDR) */,
    0x00002062    /*  27 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00000066    /*  29 (CONS) */,
    0x00000014    /*  30 (RET) */,
    0x0000004f    /*  31 (LREF20-PUSH) */,
    0x0000200e    /*  32 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1222]) + 38),
    0x00000051    /*  34 (LREF30-PUSH) */,
    0x00000048    /*  35 (LREF0-PUSH) */,
    0x0000205f    /*  36 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00000066    /*  38 (CONS) */,
    0x00000014    /*  39 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1058])) /* (#<compiled-code (glob-prepare-pattern f)@0x701048683a20>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1262]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-prepare-pattern */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1262]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[29])) /* #<compiled-code glob-prepare-pattern@0x7010486839c0> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-prepare-pattern */,
    0x00000014    /*  16 (RET) */,
    /* (glob-expand-braces expand) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1279]) + 7),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000006    /*   3 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(44)) /* #\, */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-split */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x00000041    /*   8 (LREF10) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1279]) + 12),
    0x00000053    /*  11 (LREF0-RET) */,
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x00000041    /*  13 (LREF10) */,
    0x00002091    /*  14 (APPEND 2) */,
    0x00000014    /*  15 (RET) */,
    /* (glob-expand-braces parse loop #f #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1295]) + 6),
    0x0000004d    /*   2 (LREF11-PUSH) */,
    0x00000049    /*   3 (LREF1-PUSH) */,
    0x0000205f    /*   4 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x0000000d    /*   6 (PUSH) */,
    0x0000003d    /*   7 (LREF0) */,
    0x00000066    /*   8 (CONS) */,
    0x00000014    /*   9 (RET) */,
    /* (glob-expand-braces parse loop #f) */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[32])) /* #<compiled-code (glob-expand-braces parse loop #f #f)@0x701048711300> */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x0000004d    /*   4 (LREF11-PUSH) */,
    0x00003060    /*   5 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold */,
    0x00000014    /*   7 (RET) */,
    /* (glob-expand-braces parse loop #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000004c    /*   1 (LREF10-PUSH) */,
    0x00000042    /*   2 (LREF11) */,
    0x00002012    /*   3 (TAIL-CALL 2) */,
    0x00000014    /*   4 (RET) */,
    /* (glob-expand-braces parse loop #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000004c    /*   1 (LREF10-PUSH) */,
    0x00000042    /*   2 (LREF11) */,
    0x00002012    /*   3 (TAIL-CALL 2) */,
    0x00000014    /*   4 (RET) */,
    /* (glob-expand-braces parse loop #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00403047    /*   1 (LREF-PUSH 3 1) */,
    0x00000041    /*   2 (LREF10) */,
    0x00002012    /*   3 (TAIL-CALL 2) */,
    0x00000014    /*   4 (RET) */,
    /* (glob-expand-braces parse loop) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 7),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #/[{}]/ */,
    0x00000049    /*   4 (LREF1-PUSH) */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* rxmatch */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000001e    /*   9 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 121),
    0x0000200e    /*  11 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 23),
    0x0000100e    /*  13 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 18),
    0x00000007    /*  15 (CONSTI-PUSH 0) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00001011    /*  17 (CALL 1) */,
    0x0000000d    /*  18 (PUSH) */,
    0x00000006    /*  19 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[488])) /* "{" */,
    0x0000205f    /*  21 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  23 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 76),
    0x0000300e    /*  25 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 39),
    0x0000100e    /*  27 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 33),
    0x00000006    /*  29 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* after */,
    0x0000003d    /*  31 (LREF0) */,
    0x00001011    /*  32 (CALL 1) */,
    0x0000000d    /*  33 (PUSH) */,
    0x00000006    /*  34 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[32])) /* ("") */,
    0x000010d0    /*  36 (LREF30-NUMADDI-PUSH 1) */,
    0x0040403c    /*  37 (LREF 4 1) */,
    0x0000301c    /*  38 (LOCAL-ENV-CALL 3) */,
    0x00002036    /*  39 (TAIL-RECEIVE 2 0) */,
    0x00000048    /*  40 (LREF0-PUSH) */,
    0x0000300e    /*  41 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 72),
    0x00000016    /*  43 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[33])) /* #<compiled-code (glob-expand-braces parse loop #f)@0x701048711360> */,
    0x0000000d    /*  45 (PUSH) */,
    0x00000008    /*  46 (CONSTN-PUSH) */,
    0x0000200e    /*  47 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 70),
    0x0000200e    /*  49 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 66),
    0x00002019    /*  51 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[31])) /* (#<undef> #<undef>) */,
    0x0000005d    /*  53 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x000010e8    /*  55 (ENV-SET 1) */,
    0x0000100e    /*  56 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 62),
    0x00000006    /*  58 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* before */,
    0x00000044    /*  60 (LREF20) */,
    0x00001011    /*  61 (CALL 1) */,
    0x000000e8    /*  62 (ENV-SET 0) */,
    0x00000016    /*  63 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[34])) /* #<compiled-code (glob-expand-braces parse loop #f)@0x7010487112a0> */,
    0x00000014    /*  65 (RET) */,
    0x0000000d    /*  66 (PUSH) */,
    0x0000004f    /*  67 (LREF20-PUSH) */,
    0x0000205f    /*  68 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00003062    /*  70 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold */,
    0x0000000d    /*  72 (PUSH) */,
    0x00000046    /*  73 (LREF30) */,
    0x0000201d    /*  74 (LOCAL-ENV-TAIL-CALL 2) */,
    0x00000014    /*  75 (RET) */,
    0x00000046    /*  76 (LREF30) */,
    0x0000002d    /*  77 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 85),
    0x00000006    /*  79 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[495])) /* "extra closing curly-brace in glob pattern:" */,
    0x00405047    /*  81 (LREF-PUSH 5 1) */,
    0x00002060    /*  82 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  84 (RET) */,
    0x0000300e    /*  85 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 114),
    0x00006047    /*  87 (LREF-PUSH 6 0) */,
    0x00000008    /*  88 (CONSTN-PUSH) */,
    0x0000200e    /*  89 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 112),
    0x0000200e    /*  91 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 108),
    0x00002019    /*  93 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[31])) /* (#<undef> #<undef>) */,
    0x0000005d    /*  95 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x000010e8    /*  97 (ENV-SET 1) */,
    0x0000100e    /*  98 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 104),
    0x00000006    /* 100 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* before */,
    0x00000041    /* 102 (LREF10) */,
    0x00001011    /* 103 (CALL 1) */,
    0x000000e8    /* 104 (ENV-SET 0) */,
    0x00000016    /* 105 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[35])) /* #<compiled-code (glob-expand-braces parse loop #f)@0x7010487110c0> */,
    0x00000014    /* 107 (RET) */,
    0x0000000d    /* 108 (PUSH) */,
    0x0000004c    /* 109 (LREF10-PUSH) */,
    0x0000205f    /* 110 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00003062    /* 112 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold */,
    0x0000100f    /* 114 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 120),
    0x00000006    /* 116 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* after */,
    0x0000003d    /* 118 (LREF0) */,
    0x00001011    /* 119 (CALL 1) */,
    0x000020a3    /* 120 (VALUES-RET 2) */,
    0x00000046    /* 121 (LREF30) */,
    0x0000002d    /* 122 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 143),
    0x0000200e    /* 124 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 140),
    0x0000100e    /* 126 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]) + 136),
    0x00001019    /* 128 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[30])) /* (#<undef>) */,
    0x0000005d    /* 130 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x000000e8    /* 132 (ENV-SET 0) */,
    0x00000016    /* 133 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[36])) /* #<compiled-code (glob-expand-braces parse loop #f)@0x701048711060> */,
    0x00000014    /* 135 (RET) */,
    0x0000000d    /* 136 (PUSH) */,
    0x0000004c    /* 137 (LREF10-PUSH) */,
    0x0000205f    /* 138 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x0000000d    /* 140 (PUSH) */,
    0x00000004    /* 141 (CONSTF) */,
    0x000020a3    /* 142 (VALUES-RET 2) */,
    0x00000006    /* 143 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[498])) /* "unclosed curly-brace in glob pattern:" */,
    0x00405047    /* 145 (LREF-PUSH 5 1) */,
    0x00002060    /* 146 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 148 (RET) */,
    /* (glob-expand-braces parse) */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1108])) /* (#<compiled-code (glob-expand-braces parse loop)@0x7010487113c0>) */,
    0x0000004e    /*   2 (LREF12-PUSH) */,
    0x0000004d    /*   3 (LREF11-PUSH) */,
    0x0000003d    /*   4 (LREF0) */,
    0x0000201d    /*   5 (LOCAL-ENV-TAIL-CALL 2) */,
    0x00000014    /*   6 (RET) */,
    /* glob-expand-braces */
    0x00002019    /*   0 (LOCAL-ENV-CLOSURES 2) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1116])) /* (#<compiled-code (glob-expand-braces parse)@0x701048711420> #<undef>) */,
    0x00000044    /*   2 (LREF20) */,
    0x000000e8    /*   3 (ENV-SET 0) */,
    0x0000200e    /*   4 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1484]) + 11),
    0x0000004d    /*   6 (LREF11-PUSH) */,
    0x00000006    /*   7 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(123)) /* #\{ */,
    0x0000205f    /*   9 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-scan */,
    0x0000001e    /*  11 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1484]) + 28),
    0x0000300e    /*  13 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1484]) + 21),
    0x0000004d    /*  15 (LREF11-PUSH) */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[32])) /* ("") */,
    0x00000007    /*  18 (CONSTI-PUSH 0) */,
    0x0000003e    /*  19 (LREF1) */,
    0x0000301c    /*  20 (LOCAL-ENV-CALL 3) */,
    0x00401035    /*  21 (RECEIVE 1 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1484]) + 24),
    0x00000054    /*  23 (LREF1-RET) */,
    0x0000000d    /*  24 (PUSH) */,
    0x00000041    /*  25 (LREF10) */,
    0x00002091    /*  26 (APPEND 2) */,
    0x00000014    /*  27 (RET) */,
    0x0000004d    /*  28 (LREF11-PUSH) */,
    0x00000041    /*  29 (LREF10) */,
    0x00000066    /*  30 (CONS) */,
    0x00000014    /*  31 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1071])) /* (#<compiled-code (glob-expand-braces expand)@0x7010487114e0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1516]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-expand-braces */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1516]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[39])) /* #<compiled-code glob-expand-braces@0x701048711480> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-expand-braces */,
    0x00000014    /*  16 (RET) */,
    /* (glob-component->regexp #f element1) */
    0x0000003e    /*   0 (LREF1) */,
    0x0000009a    /*   1 (EOFP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 6),
    0x0000000a    /*   4 (CONST-RET) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1123])) /* (eol) */,
    0x0000003e    /*   6 (LREF1) */,
    0x0000002f    /*   7 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(42)) /* #\* */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 35)  /*     35 */,
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1127])) /* (rep 0 #f any) */,
    0x0000200e    /*  12 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 33),
    0x000000db    /*  14 (READ-CHAR 0) */,
    0x0000000d    /*  15 (PUSH) */,
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x00002017    /*  17 (LOCAL-ENV 2) */,
    0x0000003e    /*  18 (LREF1) */,
    0x0000002f    /*  19 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(42)) /* #\* */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 28)  /*     28 */,
    0x000000db    /*  22 (READ-CHAR 0) */,
    0x0000000d    /*  23 (PUSH) */,
    0x00000048    /*  24 (LREF0-PUSH) */,
    0x0000101b    /*  25 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 18),
    0x00000014    /*  27 (RET) */,
    0x00000049    /*  28 (LREF1-PUSH) */,
    0x00000048    /*  29 (LREF0-PUSH) */,
    0x00000044    /*  30 (LREF20) */,
    0x0000201d    /*  31 (LOCAL-ENV-TAIL-CALL 2) */,
    0x00000014    /*  32 (RET) */,
    0x00000066    /*  33 (CONS) */,
    0x00000014    /*  34 (RET) */,
    0x0000003e    /*  35 (LREF1) */,
    0x0000002f    /*  36 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(63)) /* #\? */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 50)  /*     50 */,
    0x00000006    /*  39 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* any */,
    0x0000200e    /*  41 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 48),
    0x000000db    /*  43 (READ-CHAR 0) */,
    0x0000000d    /*  44 (PUSH) */,
    0x00000048    /*  45 (LREF0-PUSH) */,
    0x00000041    /*  46 (LREF10) */,
    0x0000201c    /*  47 (LOCAL-ENV-CALL 2) */,
    0x00000066    /*  48 (CONS) */,
    0x00000014    /*  49 (RET) */,
    0x0000003e    /*  50 (LREF1) */,
    0x0000002f    /*  51 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(92)) /* #\\ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 72)  /*     72 */,
    0x000000db    /*  54 (READ-CHAR 0) */,
    0x00001018    /*  55 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  56 (LREF0) */,
    0x0000009a    /*  57 (EOFP) */,
    0x0000001e    /*  58 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 62),
    0x0000000a    /*  60 (CONST-RET) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1123])) /* (eol) */,
    0x00000048    /*  62 (LREF0-PUSH) */,
    0x0000200e    /*  63 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 70),
    0x000000db    /*  65 (READ-CHAR 0) */,
    0x0000000d    /*  66 (PUSH) */,
    0x0000004c    /*  67 (LREF10-PUSH) */,
    0x00000044    /*  68 (LREF20) */,
    0x0000201c    /*  69 (LOCAL-ENV-CALL 2) */,
    0x00000066    /*  70 (CONS) */,
    0x00000014    /*  71 (RET) */,
    0x0000003e    /*  72 (LREF1) */,
    0x0000002f    /*  73 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(91)) /* #\[ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 119)  /*    119 */,
    0x000000dc    /*  76 (PEEK-CHAR 0) */,
    0x00001018    /*  77 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  78 (LREF0) */,
    0x0000002f    /*  79 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(33)) /* #\! */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 103)  /*    103 */,
    0x000000db    /*  82 (READ-CHAR 0) */,
    0x0000100e    /*  83 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 88),
    0x000000de    /*  85 (CURIN) */,
    0x00001062    /*  86 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read-char-set */,
    0x00001018    /*  88 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  89 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 94),
    0x00000048    /*  91 (LREF0-PUSH) */,
    0x0000105f    /*  92 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* char-set-complement! */,
    0x0000200f    /*  94 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 101),
    0x000000db    /*  96 (READ-CHAR 0) */,
    0x0000000d    /*  97 (PUSH) */,
    0x0000004f    /*  98 (LREF20-PUSH) */,
    0x00000046    /*  99 (LREF30) */,
    0x0000201c    /* 100 (LOCAL-ENV-CALL 2) */,
    0x00000066    /* 101 (CONS) */,
    0x00000014    /* 102 (RET) */,
    0x0000100e    /* 103 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 108),
    0x000000de    /* 105 (CURIN) */,
    0x00001062    /* 106 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read-char-set */,
    0x00001018    /* 108 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /* 109 (LREF0-PUSH) */,
    0x0000200e    /* 110 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 117),
    0x000000db    /* 112 (READ-CHAR 0) */,
    0x0000000d    /* 113 (PUSH) */,
    0x0000004f    /* 114 (LREF20-PUSH) */,
    0x00000046    /* 115 (LREF30) */,
    0x0000201c    /* 116 (LOCAL-ENV-CALL 2) */,
    0x00000066    /* 117 (CONS) */,
    0x00000014    /* 118 (RET) */,
    0x00000049    /* 119 (LREF1-PUSH) */,
    0x0000200e    /* 120 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]) + 127),
    0x000000db    /* 122 (READ-CHAR 0) */,
    0x0000000d    /* 123 (PUSH) */,
    0x00000048    /* 124 (LREF0-PUSH) */,
    0x00000041    /* 125 (LREF10) */,
    0x0000201c    /* 126 (LOCAL-ENV-CALL 2) */,
    0x00000066    /* 127 (CONS) */,
    0x00000014    /* 128 (RET) */,
    /* (glob-component->regexp #f) */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1135])) /* (#<compiled-code (glob-component->regexp #f element1)@0x7010474fe540>) */,
    0x00000041    /*   2 (LREF10) */,
    0x0000002e    /*   3 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :glob */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 166)  /*    166 */,
    0x00000007    /*   6 (CONSTI-PUSH 0) */,
    0x00000009    /*   7 (CONSTF-PUSH) */,
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* bol */,
    0x0000100e    /*  10 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 163),
    0x000000db    /*  12 (READ-CHAR 0) */,
    0x00001018    /*  13 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  14 (LREF0) */,
    0x0000002f    /*  15 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(42)) /* #\* */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 121)  /*    121 */,
    0x000000db    /*  18 (READ-CHAR 0) */,
    0x0000000d    /*  19 (PUSH) */,
    0x00000008    /*  20 (CONSTN-PUSH) */,
    0x00002017    /*  21 (LOCAL-ENV 2) */,
    0x0000003e    /*  22 (LREF1) */,
    0x0000002f    /*  23 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(42)) /* #\* */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 32)  /*     32 */,
    0x000000db    /*  26 (READ-CHAR 0) */,
    0x0000000d    /*  27 (PUSH) */,
    0x00000048    /*  28 (LREF0-PUSH) */,
    0x0000101b    /*  29 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 22),
    0x00000014    /*  31 (RET) */,
    0x0000003e    /*  32 (LREF1) */,
    0x0000002f    /*  33 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(63)) /* #\? */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 49)  /*     49 */,
    0x00000006    /*  36 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1136])) /* (comp . #[.]) */,
    0x00000006    /*  38 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1127])) /* (rep 0 #f any) */,
    0x0000200e    /*  40 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 47),
    0x000000db    /*  42 (READ-CHAR 0) */,
    0x0000000d    /*  43 (PUSH) */,
    0x00000048    /*  44 (LREF0-PUSH) */,
    0x00000044    /*  45 (LREF20) */,
    0x0000201c    /*  46 (LOCAL-ENV-CALL 2) */,
    0x00003089    /*  47 (LIST-STAR 3) */,
    0x00000014    /*  48 (RET) */,
    0x0000003e    /*  49 (LREF1) */,
    0x0000002f    /*  50 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(46)) /* #\. */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 69)  /*     69 */,
    0x00000006    /*  53 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1136])) /* (comp . #[.]) */,
    0x00000006    /*  55 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1127])) /* (rep 0 #f any) */,
    0x00000006    /*  57 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(46)) /* #\. */,
    0x0000200e    /*  59 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 66),
    0x000000db    /*  61 (READ-CHAR 0) */,
    0x0000000d    /*  62 (PUSH) */,
    0x00000048    /*  63 (LREF0-PUSH) */,
    0x00000044    /*  64 (LREF20) */,
    0x0000201c    /*  65 (LOCAL-ENV-CALL 2) */,
    0x00003089    /*  66 (LIST-STAR 3) */,
    0x00000066    /*  67 (CONS) */,
    0x00000014    /*  68 (RET) */,
    0x0000003e    /*  69 (LREF1) */,
    0x0000002f    /*  70 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(92)) /* #\\ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 98)  /*     98 */,
    0x000000db    /*  73 (READ-CHAR 0) */,
    0x00001018    /*  74 (PUSH-LOCAL-ENV 1) */,
    0x00000006    /*  75 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1136])) /* (comp . #[.]) */,
    0x00000006    /*  77 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1127])) /* (rep 0 #f any) */,
    0x0000003d    /*  79 (LREF0) */,
    0x0000009a    /*  80 (EOFP) */,
    0x0000001e    /*  81 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 87),
    0x00000001    /*  83 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1123])) /* (eol) */,
    0x00000013    /*  85 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 88),
    0x0000003d    /*  87 (LREF0) */,
    0x0000200f    /*  88 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 95),
    0x000000db    /*  90 (READ-CHAR 0) */,
    0x0000000d    /*  91 (PUSH) */,
    0x0000004c    /*  92 (LREF10-PUSH) */,
    0x00000046    /*  93 (LREF30) */,
    0x0000201c    /*  94 (LOCAL-ENV-CALL 2) */,
    0x00003089    /*  95 (LIST-STAR 3) */,
    0x00000066    /*  96 (CONS) */,
    0x00000014    /*  97 (RET) */,
    0x00000006    /*  98 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* rep */,
    0x00000007    /* 100 (CONSTI-PUSH 0) */,
    0x00001007    /* 101 (CONSTI-PUSH 1) */,
    0x00000006    /* 102 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* seq */,
    0x00000006    /* 104 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1136])) /* (comp . #[.]) */,
    0x00000001    /* 106 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1127])) /* (rep 0 #f any) */,
    0x00002088    /* 108 (LIST 2) */,
    0x00000066    /* 109 (CONS) */,
    0x00002088    /* 110 (LIST 2) */,
    0x00003089    /* 111 (LIST-STAR 3) */,
    0x0000200f    /* 112 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 118),
    0x00000049    /* 114 (LREF1-PUSH) */,
    0x00000048    /* 115 (LREF0-PUSH) */,
    0x00000044    /* 116 (LREF20) */,
    0x0000201c    /* 117 (LOCAL-ENV-CALL 2) */,
    0x00000066    /* 118 (CONS) */,
    0x00000014    /* 119 (RET) */,
    0x00000014    /* 120 (RET) */,
    0x0000003d    /* 121 (LREF0) */,
    0x0000002f    /* 122 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(63)) /* #\? */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 136)  /*    136 */,
    0x00000006    /* 125 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1136])) /* (comp . #[.]) */,
    0x0000200e    /* 127 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 134),
    0x000000db    /* 129 (READ-CHAR 0) */,
    0x0000000d    /* 130 (PUSH) */,
    0x00000008    /* 131 (CONSTN-PUSH) */,
    0x00000041    /* 132 (LREF10) */,
    0x0000201c    /* 133 (LOCAL-ENV-CALL 2) */,
    0x00000066    /* 134 (CONS) */,
    0x00000014    /* 135 (RET) */,
    0x0000003d    /* 136 (LREF0) */,
    0x0000002f    /* 137 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_CHAR(92)) /* #\\ */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 158)  /*    158 */,
    0x000000db    /* 140 (READ-CHAR 0) */,
    0x00001018    /* 141 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 142 (LREF0) */,
    0x0000009a    /* 143 (EOFP) */,
    0x0000001e    /* 144 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 148),
    0x0000000a    /* 146 (CONST-RET) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1123])) /* (eol) */,
    0x00000048    /* 148 (LREF0-PUSH) */,
    0x0000200e    /* 149 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 156),
    0x000000db    /* 151 (READ-CHAR 0) */,
    0x0000000d    /* 152 (PUSH) */,
    0x00000008    /* 153 (CONSTN-PUSH) */,
    0x00000044    /* 154 (LREF20) */,
    0x0000201c    /* 155 (LOCAL-ENV-CALL 2) */,
    0x00000066    /* 156 (CONS) */,
    0x00000014    /* 157 (RET) */,
    0x00000048    /* 158 (LREF0-PUSH) */,
    0x00000008    /* 159 (CONSTN-PUSH) */,
    0x00000041    /* 160 (LREF10) */,
    0x0000201d    /* 161 (LOCAL-ENV-TAIL-CALL 2) */,
    0x00000014    /* 162 (RET) */,
    0x00003089    /* 163 (LIST-STAR 3) */,
    0x00000066    /* 164 (CONS) */,
    0x00000014    /* 165 (RET) */,
    0x00000041    /* 166 (LREF10) */,
    0x0000002e    /* 167 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :shell */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 184)  /*    184 */,
    0x00000007    /* 170 (CONSTI-PUSH 0) */,
    0x00000009    /* 171 (CONSTF-PUSH) */,
    0x00000006    /* 172 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* bol */,
    0x0000200e    /* 174 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]) + 181),
    0x000000db    /* 176 (READ-CHAR 0) */,
    0x0000000d    /* 177 (PUSH) */,
    0x00000008    /* 178 (CONSTN-PUSH) */,
    0x0000003d    /* 179 (LREF0) */,
    0x0000201c    /* 180 (LOCAL-ENV-CALL 2) */,
    0x00003089    /* 181 (LIST-STAR 3) */,
    0x00000066    /* 182 (CONS) */,
    0x00000014    /* 183 (RET) */,
    0x00000006    /* 184 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[514])) /* "mode argument must be :glob or :shell, but got" */,
    0x0000004c    /* 186 (LREF10-PUSH) */,
    0x00002060    /* 187 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 189 (RET) */,
    /* glob-component->regexp */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000005    /*   1 (CONSTU) */,
    0x00002018    /*   2 (PUSH-LOCAL-ENV 2) */,
    0x0000003e    /*   3 (LREF1) */,
    0x00000022    /*   4 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 33),
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 11),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  11 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 17),
    0x00000001    /*  13 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* :glob */,
    0x00000013    /*  15 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 18),
    0x0000003d    /*  17 (LREF0) */,
    0x00001018    /*  18 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  19 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 30),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 28),
    0x00000050    /*  23 (LREF21-PUSH) */,
    0x00000016    /*  24 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[42])) /* #<compiled-code (glob-component->regexp #f)@0x7010474fe5a0> */,
    0x00002062    /*  26 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-string */,
    0x00001062    /*  28 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-optimize */,
    0x00001063    /*  30 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-compile */,
    0x00000014    /*  32 (RET) */,
    0x00000077    /*  33 (LREF1-CDR) */,
    0x00000022    /*  34 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 42),
    0x00000006    /*  36 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[46])) /* "keyword list not even" */,
    0x00000049    /*  38 (LREF1-PUSH) */,
    0x00002060    /*  39 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  41 (RET) */,
    0x0000100e    /*  42 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 47),
    0x0000006b    /*  44 (LREF1-CAR) */,
    0x00001062    /*  45 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /*  47 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  48 (LREF0) */,
    0x0000002e    /*  49 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :mode */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 59)  /*     59 */,
    0x00000042    /*  52 (LREF11) */,
    0x00000087    /*  53 (CDDR-PUSH) */,
    0x00000042    /*  54 (LREF11) */,
    0x00000083    /*  55 (CADR-PUSH) */,
    0x0000201b    /*  56 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 3),
    0x00000014    /*  58 (RET) */,
    0x0000200e    /*  59 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 66),
    0x00000006    /*  61 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[51])) /* "unknown keyword ~S" */,
    0x0000006f    /*  63 (LREF11-CAR) */,
    0x00002062    /*  64 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000042    /*  66 (LREF11) */,
    0x00000087    /*  67 (CDDR-PUSH) */,
    0x0000004c    /*  68 (LREF10-PUSH) */,
    0x0000201b    /*  69 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]) + 3),
    0x00000014    /*  71 (RET) */,
    0x00000014    /*  72 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1925]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-component->regexp */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1925]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[43])) /* #<compiled-code glob-component->regexp@0x7010474fe600> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-component->regexp */,
    0x00000014    /*  14 (RET) */,
    /* fixed-regexp? */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-ast */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   6 (LREF0) */,
    0x0000008a    /*   7 (LENGTH) */,
    0x0000000d    /*   8 (PUSH) */,
    0x00004002    /*   9 (CONSTI 4) */,
    0x00000026    /*  10 (BNGT) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]) + 52),
    0x0000003d    /*  12 (LREF0) */,
    0x00000086    /*  13 (CDDR) */,
    0x00000068    /*  14 (CAR) */,
    0x0000002e    /*  15 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* bol */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]) + 51)  /*     51 */,
    0x0000003d    /*  18 (LREF0) */,
    0x00000086    /*  19 (CDDR) */,
    0x00000075    /*  20 (CDR-PUSH) */,
    0x00000008    /*  21 (CONSTN-PUSH) */,
    0x00002017    /*  22 (LOCAL-ENV 2) */,
    0x00000077    /*  23 (LREF1-CDR) */,
    0x00000022    /*  24 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]) + 36),
    0x0000006b    /*  26 (LREF1-CAR) */,
    0x0000002e    /*  27 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* eol */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]) + 35)  /*     35 */,
    0x0000003d    /*  30 (LREF0) */,
    0x00000093    /*  31 (REVERSE) */,
    0x00001063    /*  32 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list->string */,
    0x00000014    /*  34 (RET) */,
    0x00000014    /*  35 (RET) */,
    0x0000006b    /*  36 (LREF1-CAR) */,
    0x00000099    /*  37 (CHARP) */,
    0x0000001e    /*  38 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]) + 49),
    0x00000077    /*  40 (LREF1-CDR) */,
    0x0000000d    /*  41 (PUSH) */,
    0x0000006b    /*  42 (LREF1-CAR) */,
    0x0000000d    /*  43 (PUSH) */,
    0x0000003d    /*  44 (LREF0) */,
    0x00000067    /*  45 (CONS-PUSH) */,
    0x0000101b    /*  46 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]) + 23),
    0x00000014    /*  48 (RET) */,
    0x0000000b    /*  49 (CONSTF-RET) */,
    0x00000014    /*  50 (RET) */,
    0x00000014    /*  51 (RET) */,
    0x00000014    /*  52 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1993]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* fixed-regexp? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1993]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[45])) /* #<compiled-code fixed-regexp?@0x7010499e5f60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* fixed-regexp? */,
    0x00000014    /*  14 (RET) */,
    /* (make-glob-fs-fold ensure-dirname) */
    0x0000003d    /*   0 (LREF0) */,
    0x00000030    /*   1 (RF) */,
    0x0000100e    /*   2 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]) + 7),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000105f    /*   5 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-length */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   8 (LREF0) */,
    0x0000001e    /*   9 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]) + 36),
    0x00000002    /*  11 (CONSTI 0) */,
    0x0000002b    /*  12 (LREF-VAL0-BNGT 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]) + 36),
    0x0000200e    /*  14 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]) + 20),
    0x0000004c    /*  16 (LREF10-PUSH) */,
    -0x00000f39   /*  17 (LREF0-NUMADDI-PUSH -1) */,
    0x0000205f    /*  18 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x0000200f    /*  20 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]) + 26),
    0x00000051    /*  22 (LREF30-PUSH) */,
    0x00000007    /*  23 (CONSTI-PUSH 0) */,
    0x0000205f    /*  24 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-ref */,
    0x00000090    /*  26 (EQV) */,
    0x00000092    /*  27 (NOT) */,
    0x0000001e    /*  28 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]) + 36),
    0x0000200e    /*  30 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]) + 36),
    0x0000004c    /*  32 (LREF10-PUSH) */,
    0x00000051    /*  33 (LREF30-PUSH) */,
    0x0000205f    /*  34 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x0000001a    /*  36 (POP-LOCAL-ENV) */,
    0x00000031    /*  37 (RT) */,
    0x00000053    /*  38 (LREF0-RET) */,
    /* (make-glob-fs-fold #:loop2286 #f) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0040303c    /*   3 (LREF 3 1) */,
    0x00001011    /*   4 (CALL 1) */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 40),
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 13),
    0x0000004f    /*   9 (LREF20-PUSH) */,
    0x00000049    /*  10 (LREF1-PUSH) */,
    0x0000205f    /*  11 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00001018    /*  13 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  14 (LREF0) */,
    0x0000001e    /*  15 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 37),
    0x0000403c    /*  17 (LREF 4 0) */,
    0x0000001e    /*  18 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 27),
    0x0000100e    /*  20 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 25),
    0x00000048    /*  22 (LREF0-PUSH) */,
    0x0000105f    /*  23 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* file-is-directory? */,
    0x0000001e    /*  25 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 37),
    0x0000200e    /*  27 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 37),
    0x00000048    /*  29 (LREF0-PUSH) */,
    0x0000004c    /*  30 (LREF10-PUSH) */,
    0x0100403c    /*  31 (LREF 4 4) */,
    0x00002011    /*  32 (CALL 2) */,
    0x00000013    /*  33 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 37),
    0x00000013    /*  35 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]) + 27),
    0x0000001a    /*  37 (POP-LOCAL-ENV) */,
    0x00000031    /*  38 (RT) */,
    0x00000053    /*  39 (LREF0-RET) */,
    0x00000053    /*  40 (LREF0-RET) */,
    /* (make-glob-fs-fold #:loop2286) */
    0x0000003f    /*   0 (LREF2) */,
    0x0000002f    /*   1 (BNEQVC) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 12)  /*     12 */,
    0x00000042    /*   4 (LREF11) */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 9),
    0x00000013    /*   7 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 31),
    0x00000044    /*   9 (LREF20) */,
    0x00000013    /*  10 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 31),
    0x0000003f    /*  12 (LREF2) */,
    0x0000002f    /*  13 (BNEQVC) */,
    SCM_WORD(SCM_FALSE) /* #f */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 25)  /*     25 */,
    0x00000041    /*  16 (LREF10) */,
    0x0000001e    /*  17 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 31),
    0x00000001    /*  21 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[22])) /* "" */,
    0x00000013    /*  23 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 31),
    0x0000200e    /*  25 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 31),
    0x0000004a    /*  27 (LREF2-PUSH) */,
    0x0000004f    /*  28 (LREF20-PUSH) */,
    0x0000205f    /*  29 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00001018    /*  31 (PUSH-LOCAL-ENV 1) */,
    0x00000042    /*  32 (LREF11) */,
    0x0000002e    /*  33 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* dir? */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 41)  /*     41 */,
    0x00000048    /*  36 (LREF0-PUSH) */,
    0x00c01047    /*  37 (LREF-PUSH 1 3) */,
    0x0100103c    /*  38 (LREF 1 4) */,
    0x00002012    /*  39 (TAIL-CALL 2) */,
    0x00000014    /*  40 (RET) */,
    0x0000100e    /*  41 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 46),
    0x0000004d    /*  43 (LREF11-PUSH) */,
    0x0000105f    /*  44 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* fixed-regexp? */,
    0x00001018    /*  46 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  47 (LREF0) */,
    0x0000001e    /*  48 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 84),
    0x0000200e    /*  50 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 56),
    0x0000004c    /*  52 (LREF10-PUSH) */,
    0x00000048    /*  53 (LREF0-PUSH) */,
    0x0000205f    /*  54 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00001018    /*  56 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  57 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 62),
    0x00000048    /*  59 (LREF0-PUSH) */,
    0x0000105f    /*  60 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* file-exists? */,
    0x0000001e    /*  62 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 83),
    0x00000046    /*  64 (LREF30) */,
    0x0000001e    /*  65 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 74),
    0x0000100e    /*  67 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 72),
    0x00000048    /*  69 (LREF0-PUSH) */,
    0x0000105f    /*  70 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* file-is-directory? */,
    0x0000001e    /*  72 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 79),
    0x00000048    /*  74 (LREF0-PUSH) */,
    0x00c03047    /*  75 (LREF-PUSH 3 3) */,
    0x0100303c    /*  76 (LREF 3 4) */,
    0x00002012    /*  77 (TAIL-CALL 2) */,
    0x00000014    /*  78 (RET) */,
    0x00c03052    /*  79 (LREF-RET 3 3) */,
    0x00000013    /*  80 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 74),
    0x00000014    /*  82 (RET) */,
    0x00c03052    /*  83 (LREF-RET 3 3) */,
    0x00000016    /*  84 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[48])) /* #<compiled-code (make-glob-fs-fold #:loop2286 #f)@0x701049025de0> */,
    0x0000000d    /*  86 (PUSH) */,
    0x00c02047    /*  87 (LREF-PUSH 2 3) */,
    0x0000100e    /*  88 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 119),
    0x0080203c    /*  90 (LREF 2 2) */,
    0x0000002f    /*  91 (BNEQVC) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 103)  /*    103 */,
    0x0040303c    /*  94 (LREF 3 1) */,
    0x0000001e    /*  95 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 99),
    0x00000013    /*  97 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 117),
    0x00000001    /*  99 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[19])) /* "/" */,
    0x00000013    /* 101 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 117),
    0x0080203c    /* 103 (LREF 2 2) */,
    0x0000002f    /* 104 (BNEQVC) */,
    SCM_WORD(SCM_FALSE) /* #f */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 116)  /*    116 */,
    0x00000046    /* 107 (LREF30) */,
    0x0000001e    /* 108 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 112),
    0x00000013    /* 110 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 117),
    0x00000001    /* 112 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[42])) /* "." */,
    0x00000013    /* 114 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]) + 117),
    0x0080203c    /* 116 (LREF 2 2) */,
    0x00001062    /* 117 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-readdir */,
    0x00003063    /* 119 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* fold */,
    0x00000014    /* 121 (RET) */,
    /* make-glob-fs-fold */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000005    /*   1 (CONSTU) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000005    /*   3 (CONSTU) */,
    0x00003018    /*   4 (PUSH-LOCAL-ENV 3) */,
    0x0000003f    /*   5 (LREF2) */,
    0x00000022    /*   6 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 68),
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 13),
    0x00000049    /*  10 (LREF1-PUSH) */,
    0x0000105f    /*  11 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 18),
    0x00000004    /*  15 (CONSTF) */,
    0x00000013    /*  16 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 19),
    0x0000003e    /*  18 (LREF1) */,
    0x00001018    /*  19 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  20 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 25),
    0x0000004c    /*  22 (LREF10-PUSH) */,
    0x0000105f    /*  23 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  25 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 30),
    0x00000004    /*  27 (CONSTF) */,
    0x00000013    /*  28 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 31),
    0x00000041    /*  30 (LREF10) */,
    0x00001018    /*  31 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  32 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 42),
    0x0000000e    /*  34 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 38),
    0x0000005f    /*  36 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche-architecture */,
    0x0000000d    /*  38 (PUSH) */,
    0x00000001    /*  39 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* #/mingw/ */,
    0x00001011    /*  41 (CALL 1) */,
    0x0000001e    /*  42 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 48),
    0x00000001    /*  44 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[18])) /* "\\" */,
    0x00000013    /*  46 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 50),
    0x00000001    /*  48 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[19])) /* "/" */,
    0x00001018    /*  50 (PUSH-LOCAL-ENV 1) */,
    0x00003019    /*  51 (LOCAL-ENV-CLOSURES 3) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1164])) /* (#<compiled-code (make-glob-fs-fold ensure-dirname)@0x701049025ea0> #<undef> #<undef>) */,
    0x0000100e    /*  53 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 58),
    0x00000051    /*  55 (LREF30-PUSH) */,
    0x0000003f    /*  56 (LREF2) */,
    0x0000101c    /*  57 (LOCAL-ENV-CALL 1) */,
    0x000010e8    /*  58 (ENV-SET 1) */,
    0x0000100e    /*  59 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 64),
    0x0000004f    /*  61 (LREF20-PUSH) */,
    0x0000003f    /*  62 (LREF2) */,
    0x0000101c    /*  63 (LOCAL-ENV-CALL 1) */,
    0x000000e8    /*  64 (ENV-SET 0) */,
    0x00000016    /*  65 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[49])) /* #<compiled-code (make-glob-fs-fold #:loop2286)@0x701049025e40> */,
    0x00000014    /*  67 (RET) */,
    0x00000078    /*  68 (LREF2-CDR) */,
    0x00000022    /*  69 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 77),
    0x00000006    /*  71 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[46])) /* "keyword list not even" */,
    0x0000004a    /*  73 (LREF2-PUSH) */,
    0x00002060    /*  74 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  76 (RET) */,
    0x0000100e    /*  77 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 82),
    0x0000006c    /*  79 (LREF2-CAR) */,
    0x00001062    /*  80 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /*  82 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  83 (LREF0) */,
    0x0000002e    /*  84 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :root-path */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 95)  /*     95 */,
    0x00000043    /*  87 (LREF12) */,
    0x00000087    /*  88 (CDDR-PUSH) */,
    0x00000043    /*  89 (LREF12) */,
    0x00000083    /*  90 (CADR-PUSH) */,
    0x0000004c    /*  91 (LREF10-PUSH) */,
    0x0000201b    /*  92 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 5),
    0x00000014    /*  94 (RET) */,
    0x0000003d    /*  95 (LREF0) */,
    0x0000002e    /*  96 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :current-path */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 107)  /*    107 */,
    0x00000043    /*  99 (LREF12) */,
    0x00000087    /* 100 (CDDR-PUSH) */,
    0x0000004d    /* 101 (LREF11-PUSH) */,
    0x00000043    /* 102 (LREF12) */,
    0x00000083    /* 103 (CADR-PUSH) */,
    0x0000201b    /* 104 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 5),
    0x00000014    /* 106 (RET) */,
    0x0000200e    /* 107 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 114),
    0x00000006    /* 109 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[51])) /* "unknown keyword ~S" */,
    0x00000070    /* 111 (LREF12-CAR) */,
    0x00002062    /* 112 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000043    /* 114 (LREF12) */,
    0x00000087    /* 115 (CDDR-PUSH) */,
    0x0000004d    /* 116 (LREF11-PUSH) */,
    0x0000004c    /* 117 (LREF10-PUSH) */,
    0x0000201b    /* 118 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]) + 5),
    0x00000014    /* 120 (RET) */,
    0x00000014    /* 121 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2332]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-glob-fs-fold */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2332]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[50])) /* #<compiled-code make-glob-fs-fold@0x701049025f00> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-glob-fs-fold */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2347]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-fs-folder */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2347]) + 12),
    0x00000060    /*   9 (GREF-TAIL-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-glob-fs-fold */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* glob-fs-folder */,
    0x00000014    /*  14 (RET) */,
    /* %sys-mintty? */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2362]) + 8),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche */,
    0x00000006    /*   4 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-win-pipe-name */,
    0x0000205f    /*   6 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binds? */,
    0x00000030    /*   8 (RF) */,
    0x0000100e    /*   9 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2362]) + 14),
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x0000105f    /*  12 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-win-pipe-name */,
    0x00001018    /*  14 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  15 (LREF0) */,
    0x00000030    /*  16 (RF) */,
    0x0000100e    /*  17 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2362]) + 23),
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x00000001    /*  20 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* #/^\\msys-[0-9a-f]+-pty[0-9]+-((?:to|from))-master.*$/ */,
    0x00001011    /*  22 (CALL 1) */,
    0x00001063    /*  23 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* boolean */,
    0x00000014    /*  25 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2388]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %sys-mintty? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2388]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[53])) /* #<compiled-code %sys-mintty?@0x701047148900> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %sys-mintty? */,
    0x00000014    /*  14 (RET) */,
    /* (%sys-escape-windows-command-line #:G2294) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2403]) + 19),
    0x00002007    /*   2 (CONSTI-PUSH 2) */,
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2403]) + 12),
    0x0000100e    /*   5 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2403]) + 10),
    0x00001007    /*   7 (CONSTI-PUSH 1) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00001011    /*   9 (CALL 1) */,
    0x00001062    /*  10 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* string-length */,
    0x000000b4    /*  12 (NUMMUL2) */,
    0x000010bc    /*  13 (NUMADDI 1) */,
    0x0000000d    /*  14 (PUSH) */,
    0x00000006    /*  15 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(92)) /* #\\ */,
    0x0000205f    /*  17 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-string */,
    0x0000000d    /*  19 (PUSH) */,
    0x00000006    /*  20 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[541])) /* "\"" */,
    0x00002060    /*  22 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00000014    /*  24 (RET) */,
    /* %sys-escape-windows-command-line */
    0x0000003e    /*   0 (LREF1) */,
    0x0000009b    /*   1 (STRINGP) */,
    0x0000001e    /*   2 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 78),
    0x0000200e    /*   4 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 11),
    0x00000049    /*   6 (LREF1-PUSH) */,
    0x00000006    /*   7 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[22])) /* "" */,
    0x0000205f    /*   9 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* equal? */,
    0x0000001e    /*  11 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 15),
    0x0000000a    /*  13 (CONST-RET) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[545])) /* "\"\"" */,
    0x0000003d    /*  15 (LREF0) */,
    0x0000001e    /*  16 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 53),
    0x0000100e    /*  18 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 24),
    0x00000049    /*  20 (LREF1-PUSH) */,
    0x00000001    /*  21 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* #/[!"%&()<>^|]/ */,
    0x00001011    /*  23 (CALL 1) */,
    0x0000001e    /*  24 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 35),
    0x0000200e    /*  26 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 35),
    0x00000006    /*  28 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[547])) /* "It is unsafe to pass argument ~s to BAT or CMD file." */,
    0x00000049    /*  30 (LREF1-PUSH) */,
    0x0000205f    /*  31 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000013    /*  33 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 35),
    0x0000200e    /*  35 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 42),
    0x00000049    /*  37 (LREF1-PUSH) */,
    0x00000006    /*  38 (CONST-PUSH) */,
    SCM_WORD(SCM_MAKE_CHAR(32)) /* #\space */,
    0x0000205f    /*  40 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* string-scan */,
    0x0000001e    /*  42 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 52),
    0x00000006    /*  44 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[541])) /* "\"" */,
    0x00000049    /*  46 (LREF1-PUSH) */,
    0x00000006    /*  47 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[541])) /* "\"" */,
    0x00003060    /*  49 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00000014    /*  51 (RET) */,
    0x00000054    /*  52 (LREF1-RET) */,
    0x0000100e    /*  53 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 59),
    0x00000049    /*  55 (LREF1-PUSH) */,
    0x00000001    /*  56 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* #/[\u0009-\u000d !&'+,;->\[\]^`{}~]/ */,
    0x00001011    /*  58 (CALL 1) */,
    0x0000001e    /*  59 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 77),
    0x00000006    /*  61 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[541])) /* "\"" */,
    0x0000300e    /*  63 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 71),
    0x00000006    /*  65 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* #/(\\*)"/ */,
    0x00000049    /*  67 (LREF1-PUSH) */,
    0x0000004c    /*  68 (LREF10-PUSH) */,
    0x0000305f    /*  69 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* regexp-replace-all */,
    0x0000000d    /*  71 (PUSH) */,
    0x00000006    /*  72 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[541])) /* "\"" */,
    0x00003060    /*  74 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* string-append */,
    0x00000014    /*  76 (RET) */,
    0x00000054    /*  77 (LREF1-RET) */,
    0x0000100e    /*  78 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]) + 83),
    0x00000049    /*  80 (LREF1-PUSH) */,
    0x0000105f    /*  81 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* write-to-string */,
    0x00001063    /*  83 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %sys-escape-windows-command-line */,
    0x00000014    /*  85 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1208])) /* (#<compiled-code (%sys-escape-windows-command-line #:G2294)@0x701047896f00>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2514]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %sys-escape-windows-command-line */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2514]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[56])) /* #<compiled-code %sys-escape-windows-command-line@0x701047896ea0> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %sys-escape-windows-command-line */,
    0x00000014    /*  16 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(60U), SCM_NIL},
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
       { SCM_OBJ(&scm__rc.d2150[12]), SCM_NIL},
       { SCM_MAKE_INT(62U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[15])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_OBJ(&scm__rc.d2150[19]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[16]), SCM_OBJ(&scm__rc.d2150[20])},
       { SCM_MAKE_INT(63U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[23])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[26])},
       { SCM_OBJ(&scm__rc.d2150[27]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[24]), SCM_OBJ(&scm__rc.d2150[28])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_OBJ(&scm__sc.d2148[22]), SCM_NIL},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_OBJ(&scm__rc.d2150[36]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[35]), SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_OBJ(&scm__rc.d2150[34]), SCM_OBJ(&scm__rc.d2150[38])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[40])},
       { SCM_MAKE_INT(68U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[43])},
       { SCM_OBJ(&scm__rc.d2150[44]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(154U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[48])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[49])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_OBJ(&scm__rc.d2150[53]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[50]), SCM_OBJ(&scm__rc.d2150[54])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(156U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[57])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_OBJ(&scm__rc.d2150[62]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[59]), SCM_OBJ(&scm__rc.d2150[63])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(292U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[66])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[67])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[70])},
       { SCM_OBJ(&scm__rc.d2150[71]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[68]), SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_MAKE_INT(293U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[74])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[75])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[77])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_OBJ(&scm__rc.d2150[79]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[76]), SCM_OBJ(&scm__rc.d2150[80])},
       { SCM_MAKE_INT(296U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[85])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[86])},
       { SCM_OBJ(&scm__rc.d2150[87]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[84]), SCM_OBJ(&scm__rc.d2150[88])},
       { SCM_MAKE_INT(300U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[91])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[93])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[94])},
       { SCM_OBJ(&scm__rc.d2150[95]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[92]), SCM_OBJ(&scm__rc.d2150[96])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_MAKE_INT(320U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[100])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[101])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[103])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[104])},
       { SCM_OBJ(&scm__rc.d2150[105]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[102]), SCM_OBJ(&scm__rc.d2150[106])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[108])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_OBJ(&scm__rc.d2150[110]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(352U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[114])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[116])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[117])},
       { SCM_OBJ(&scm__rc.d2150[118]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_MAKE_INT(353U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[121])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[122])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[125])},
       { SCM_OBJ(&scm__rc.d2150[126]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[123]), SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_MAKE_INT(356U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[129])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[130])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[132])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[133])},
       { SCM_OBJ(&scm__rc.d2150[134]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[131]), SCM_OBJ(&scm__rc.d2150[135])},
       { SCM_MAKE_INT(360U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[137])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[138])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[140])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[141])},
       { SCM_OBJ(&scm__rc.d2150[142]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[139]), SCM_OBJ(&scm__rc.d2150[143])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[145])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[146])},
       { SCM_MAKE_INT(374U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[148])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[149])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[151])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[152])},
       { SCM_OBJ(&scm__rc.d2150[153]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[150]), SCM_OBJ(&scm__rc.d2150[154])},
       { SCM_MAKE_INT(377U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[156])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[159])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[160])},
       { SCM_OBJ(&scm__rc.d2150[161]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[158]), SCM_OBJ(&scm__rc.d2150[162])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(380U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[165])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[166])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[168])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_OBJ(&scm__rc.d2150[170]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[167]), SCM_OBJ(&scm__rc.d2150[171])},
       { SCM_MAKE_INT(383U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[173])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[174])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[176])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[177])},
       { SCM_OBJ(&scm__rc.d2150[178]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[175]), SCM_OBJ(&scm__rc.d2150[179])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(386U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[182])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[183])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[185])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[186])},
       { SCM_OBJ(&scm__rc.d2150[187]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[184]), SCM_OBJ(&scm__rc.d2150[188])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[181])},
       { SCM_MAKE_INT(388U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[191])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[192])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[194])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[195])},
       { SCM_OBJ(&scm__rc.d2150[196]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[193]), SCM_OBJ(&scm__rc.d2150[197])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[199])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[200])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[201])},
       { SCM_MAKE_INT(390U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[203])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[204])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[206])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[207])},
       { SCM_OBJ(&scm__rc.d2150[208]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[205]), SCM_OBJ(&scm__rc.d2150[209])},
       { SCM_MAKE_INT(392U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[212])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[214])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[215])},
       { SCM_OBJ(&scm__rc.d2150[216]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[213]), SCM_OBJ(&scm__rc.d2150[217])},
       { SCM_MAKE_INT(393U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[219])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[220])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[222])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[223])},
       { SCM_OBJ(&scm__rc.d2150[224]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[221]), SCM_OBJ(&scm__rc.d2150[225])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[227])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[228])},
       { SCM_OBJ(&scm__rc.d2150[229]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(396U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[232])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[235])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[236])},
       { SCM_OBJ(&scm__rc.d2150[237]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[234]), SCM_OBJ(&scm__rc.d2150[238])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[240])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[241])},
       { SCM_OBJ(&scm__rc.d2150[242]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[199])},
       { SCM_MAKE_INT(401U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[245])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[246])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[248])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[249])},
       { SCM_OBJ(&scm__rc.d2150[250]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[247]), SCM_OBJ(&scm__rc.d2150[251])},
       { SCM_MAKE_INT(403U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[253])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[254])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[256])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[257])},
       { SCM_OBJ(&scm__rc.d2150[258]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[255]), SCM_OBJ(&scm__rc.d2150[259])},
       { SCM_MAKE_INT(405U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[261])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[262])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[264])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[265])},
       { SCM_OBJ(&scm__rc.d2150[266]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[263]), SCM_OBJ(&scm__rc.d2150[267])},
       { SCM_MAKE_INT(407U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[270])},
       { SCM_OBJ(&scm__rc.d2150[271]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(415U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[275])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[276])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[278])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[279])},
       { SCM_OBJ(&scm__rc.d2150[280]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[277]), SCM_OBJ(&scm__rc.d2150[281])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[283])},
       { SCM_MAKE_INT(420U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[285])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[286])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[288])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[289])},
       { SCM_OBJ(&scm__rc.d2150[290]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[287]), SCM_OBJ(&scm__rc.d2150[291])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[293])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[294])},
       { SCM_OBJ(&scm__rc.d2150[295]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(447U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[298])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[299])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[302])},
       { SCM_OBJ(&scm__rc.d2150[303]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[300]), SCM_OBJ(&scm__rc.d2150[304])},
       { SCM_MAKE_INT(448U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[306])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[307])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[309])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[310])},
       { SCM_OBJ(&scm__rc.d2150[311]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[308]), SCM_OBJ(&scm__rc.d2150[312])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[314])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[315])},
       { SCM_OBJ(&scm__rc.d2150[316]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(460U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[319])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[320])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[322])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[323])},
       { SCM_OBJ(&scm__rc.d2150[324]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[321]), SCM_OBJ(&scm__rc.d2150[325])},
       { SCM_MAKE_INT(463U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[327])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[328])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[330])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[331])},
       { SCM_OBJ(&scm__rc.d2150[332]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[329]), SCM_OBJ(&scm__rc.d2150[333])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[335])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[336])},
       { SCM_OBJ(&scm__rc.d2150[337]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(471U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[340])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[341])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[343])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[344])},
       { SCM_OBJ(&scm__rc.d2150[345]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[342]), SCM_OBJ(&scm__rc.d2150[346])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[348])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[349])},
       { SCM_OBJ(&scm__rc.d2150[350]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(486U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[353])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[354])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[356])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[357])},
       { SCM_OBJ(&scm__rc.d2150[358]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[355]), SCM_OBJ(&scm__rc.d2150[359])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[361])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[362])},
       { SCM_OBJ(&scm__rc.d2150[363]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[365])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[366])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[367])},
       { SCM_MAKE_INT(504U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[369])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[370])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[372])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[373])},
       { SCM_OBJ(&scm__rc.d2150[374]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[371]), SCM_OBJ(&scm__rc.d2150[375])},
       { SCM_MAKE_INT(508U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[377])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[378])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[380])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[381])},
       { SCM_OBJ(&scm__rc.d2150[382]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[379]), SCM_OBJ(&scm__rc.d2150[383])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[385])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[386])},
       { SCM_OBJ(&scm__rc.d2150[387]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[389])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(512U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[392])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[393])},
       { SCM_OBJ(&scm__rc.d2150[394]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[4]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[361]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[398])},
       { SCM_OBJ(&scm__rc.d2150[399]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[400])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[402])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[404])},
       { SCM_OBJ(&scm__rc.d2150[405]), SCM_NIL},
       { SCM_MAKE_CHAR(61), SCM_OBJ(&scm__rc.d2150[406])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[407])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[408])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[403])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[32])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[411])},
       { SCM_OBJ(&scm__rc.d2150[412]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[410]), SCM_OBJ(&scm__rc.d2150[413])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[414])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[415])},
       { SCM_OBJ(&scm__rc.d2150[416]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[409]), SCM_OBJ(&scm__rc.d2150[417])},
       { SCM_OBJ(&scm__rc.d2150[403]), SCM_OBJ(&scm__rc.d2150[418])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[419])},
       { SCM_OBJ(&scm__rc.d2150[420]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[391]), SCM_OBJ(&scm__rc.d2150[421])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[422])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[423]), SCM_OBJ(&scm__rc.d2150[424])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_OBJ(&scm__rc.d2150[426]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[401]), SCM_OBJ(&scm__rc.d2150[427])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[428])},
       { SCM_MAKE_INT(511U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[430])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[431])},
       { SCM_OBJ(&scm__rc.d2150[432]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(524U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[436])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[437])},
       { SCM_OBJ(&scm__rc.d2150[438]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(540U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[442])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[443])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[445])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[446])},
       { SCM_OBJ(&scm__rc.d2150[447]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[444]), SCM_OBJ(&scm__rc.d2150[448])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[450])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[451])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[452])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[453])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[454])},
       { SCM_MAKE_INT(598U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[456])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[457])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[460])},
       { SCM_OBJ(&scm__rc.d2150[461]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[458]), SCM_OBJ(&scm__rc.d2150[462])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(717U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[465])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[466])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[468])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[469])},
       { SCM_OBJ(&scm__rc.d2150[470]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[467]), SCM_OBJ(&scm__rc.d2150[471])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(737U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[474])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[475])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[477])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[478])},
       { SCM_OBJ(&scm__rc.d2150[479]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[476]), SCM_OBJ(&scm__rc.d2150[480])},
       { SCM_MAKE_INT(746U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[482])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[483])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[485])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[486])},
       { SCM_OBJ(&scm__rc.d2150[487]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[484]), SCM_OBJ(&scm__rc.d2150[488])},
       { SCM_MAKE_INT(764U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[490])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[491])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[493])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[494])},
       { SCM_OBJ(&scm__rc.d2150[495]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[492]), SCM_OBJ(&scm__rc.d2150[496])},
       { SCM_MAKE_INT(766U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[498])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[499])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[501])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[502])},
       { SCM_OBJ(&scm__rc.d2150[503]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[500]), SCM_OBJ(&scm__rc.d2150[504])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[506])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[507])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[508])},
       { SCM_MAKE_INT(787U), SCM_NIL},
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
       { SCM_OBJ(&scm__rc.d2150[520]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[522])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[523])},
       { SCM_OBJ(&scm__rc.d2150[524]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[526])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[527])},
       { SCM_OBJ(&scm__rc.d2150[528]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[530])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[531])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[532])},
       { SCM_MAKE_INT(834U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[534])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[535])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[537])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[538])},
       { SCM_OBJ(&scm__rc.d2150[539]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[536]), SCM_OBJ(&scm__rc.d2150[540])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(841U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[543])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[544])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[546])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[547])},
       { SCM_OBJ(&scm__rc.d2150[548]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[545]), SCM_OBJ(&scm__rc.d2150[549])},
       { SCM_MAKE_INT(842U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[551])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[552])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[554])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[555])},
       { SCM_OBJ(&scm__rc.d2150[556]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[553]), SCM_OBJ(&scm__rc.d2150[557])},
       { SCM_MAKE_INT(843U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[559])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[560])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[562])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[563])},
       { SCM_OBJ(&scm__rc.d2150[564]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[561]), SCM_OBJ(&scm__rc.d2150[565])},
       { SCM_MAKE_INT(844U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[567])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[568])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[570])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[571])},
       { SCM_OBJ(&scm__rc.d2150[572]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[569]), SCM_OBJ(&scm__rc.d2150[573])},
       { SCM_MAKE_INT(845U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[575])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[576])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[578])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[579])},
       { SCM_OBJ(&scm__rc.d2150[580]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[577]), SCM_OBJ(&scm__rc.d2150[581])},
       { SCM_MAKE_INT(848U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[583])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[584])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[586])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[587])},
       { SCM_OBJ(&scm__rc.d2150[588]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[585]), SCM_OBJ(&scm__rc.d2150[589])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[591])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[592])},
       { SCM_OBJ(&scm__rc.d2150[593]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[595])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[596])},
       { SCM_OBJ(&scm__rc.d2150[597]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[599])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[600])},
       { SCM_OBJ(&scm__rc.d2150[601]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[603])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[604])},
       { SCM_OBJ(&scm__rc.d2150[605]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[607])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[608])},
       { SCM_OBJ(&scm__rc.d2150[609]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[611])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[612])},
       { SCM_OBJ(&scm__rc.d2150[613]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(884U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[616])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[617])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[619])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[620])},
       { SCM_OBJ(&scm__rc.d2150[621]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[618]), SCM_OBJ(&scm__rc.d2150[622])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[624])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[625])},
       { SCM_MAKE_INT(889U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[627])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[628])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[630])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[631])},
       { SCM_OBJ(&scm__rc.d2150[632]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[629]), SCM_OBJ(&scm__rc.d2150[633])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[635])},
       { SCM_MAKE_INT(898U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[637])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[638])},
       { SCM_OBJ(&scm__rc.d2150[639]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(903U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[643])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[644])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[646])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[647])},
       { SCM_OBJ(&scm__rc.d2150[648]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[645]), SCM_OBJ(&scm__rc.d2150[649])},
       { SCM_MAKE_INT(906U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[651])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[652])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[654])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[655])},
       { SCM_OBJ(&scm__rc.d2150[656]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[653]), SCM_OBJ(&scm__rc.d2150[657])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[659])},
       { SCM_MAKE_INT(911U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[661])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[662])},
       { SCM_OBJ(&scm__rc.d2150[663]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(912U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[666])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[667])},
       { SCM_OBJ(&scm__rc.d2150[668]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(940U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[672])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[673])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[675])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[676])},
       { SCM_OBJ(&scm__rc.d2150[677]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[674]), SCM_OBJ(&scm__rc.d2150[678])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(946U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[681])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[682])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[684])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[685])},
       { SCM_OBJ(&scm__rc.d2150[686]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[683]), SCM_OBJ(&scm__rc.d2150[687])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[689])},
       { SCM_MAKE_INT(950U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[691])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[692])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[694])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[695])},
       { SCM_OBJ(&scm__rc.d2150[696]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[693]), SCM_OBJ(&scm__rc.d2150[697])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[671])},
       { SCM_MAKE_INT(953U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[700])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[701])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[703])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[704])},
       { SCM_OBJ(&scm__rc.d2150[705]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[702]), SCM_OBJ(&scm__rc.d2150[706])},
       { SCM_MAKE_INT(961U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[708])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[709])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[711])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[712])},
       { SCM_OBJ(&scm__rc.d2150[713]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[710]), SCM_OBJ(&scm__rc.d2150[714])},
       { SCM_MAKE_INT(969U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[716])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[717])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[719])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[720])},
       { SCM_OBJ(&scm__rc.d2150[721]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[718]), SCM_OBJ(&scm__rc.d2150[722])},
       { SCM_MAKE_INT(977U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[724])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[725])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[727])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[728])},
       { SCM_OBJ(&scm__rc.d2150[729]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[726]), SCM_OBJ(&scm__rc.d2150[730])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[732])},
       { SCM_MAKE_INT(990U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[734])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[735])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[737])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[738])},
       { SCM_OBJ(&scm__rc.d2150[739]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[736]), SCM_OBJ(&scm__rc.d2150[740])},
       { SCM_MAKE_INT(998U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[742])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[743])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[745])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[746])},
       { SCM_OBJ(&scm__rc.d2150[747]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[744]), SCM_OBJ(&scm__rc.d2150[748])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[750])},
       { SCM_MAKE_INT(1003U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[752])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[753])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[755])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[756])},
       { SCM_OBJ(&scm__rc.d2150[757]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[754]), SCM_OBJ(&scm__rc.d2150[758])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[760])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[761])},
       { SCM_MAKE_INT(1018U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[763])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[764])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[766])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[767])},
       { SCM_OBJ(&scm__rc.d2150[768]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[765]), SCM_OBJ(&scm__rc.d2150[769])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[771])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[772])},
       { SCM_OBJ(&scm__rc.d2150[773]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[775])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[776])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[777])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[778])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[779])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[780])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[781])},
       { SCM_MAKE_INT(1047U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[783])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[784])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[786])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[787])},
       { SCM_OBJ(&scm__rc.d2150[788]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[785]), SCM_OBJ(&scm__rc.d2150[789])},
       { SCM_MAKE_INT(1059U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[791])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[792])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[794])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[795])},
       { SCM_OBJ(&scm__rc.d2150[796]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[793]), SCM_OBJ(&scm__rc.d2150[797])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[799])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[800])},
       { SCM_OBJ(&scm__rc.d2150[801]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[803])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[804])},
       { SCM_OBJ(&scm__rc.d2150[805]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[807])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[808])},
       { SCM_OBJ(&scm__rc.d2150[809]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[811])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[812])},
       { SCM_OBJ(&scm__rc.d2150[813]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[815])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[816])},
       { SCM_OBJ(&scm__rc.d2150[817]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[819])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[820])},
       { SCM_OBJ(&scm__rc.d2150[821]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[823])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[824])},
       { SCM_OBJ(&scm__rc.d2150[825]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[827])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[828])},
       { SCM_OBJ(&scm__rc.d2150[829]), SCM_NIL},
       { SCM_MAKE_INT(1169U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[831])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[832])},
       { SCM_OBJ(&scm__rc.d2150[833]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[836])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[837])},
       { SCM_OBJ(&scm__rc.d2150[838]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[840])},
       { SCM_MAKE_INT(1173U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[842])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[843])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[845])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[846])},
       { SCM_OBJ(&scm__rc.d2150[847]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[844]), SCM_OBJ(&scm__rc.d2150[848])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[850])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[851])},
       { SCM_OBJ(&scm__rc.d2150[852]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1186U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[855])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[856])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[858])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[859])},
       { SCM_OBJ(&scm__rc.d2150[860]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[857]), SCM_OBJ(&scm__rc.d2150[861])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[863])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[864])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[865])},
       { SCM_MAKE_INT(1190U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[867])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[868])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[870])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[871])},
       { SCM_OBJ(&scm__rc.d2150[872]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[869]), SCM_OBJ(&scm__rc.d2150[873])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1208U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[876])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[877])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[879])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[880])},
       { SCM_OBJ(&scm__rc.d2150[881]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[878]), SCM_OBJ(&scm__rc.d2150[882])},
       { SCM_MAKE_INT(1212U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[884])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[885])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[887])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[888])},
       { SCM_OBJ(&scm__rc.d2150[889]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[886]), SCM_OBJ(&scm__rc.d2150[890])},
       { SCM_MAKE_INT(1220U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[892])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[893])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[895])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[896])},
       { SCM_OBJ(&scm__rc.d2150[897]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[894]), SCM_OBJ(&scm__rc.d2150[898])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[750])},
       { SCM_MAKE_INT(1225U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[901])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[902])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[904])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[905])},
       { SCM_OBJ(&scm__rc.d2150[906]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[903]), SCM_OBJ(&scm__rc.d2150[907])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[909])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[910])},
       { SCM_MAKE_INT(1233U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[912])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[913])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[915])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[916])},
       { SCM_OBJ(&scm__rc.d2150[917]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[914]), SCM_OBJ(&scm__rc.d2150[918])},
       { SCM_MAKE_INT(1284U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[920])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[921])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[923])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[924])},
       { SCM_OBJ(&scm__rc.d2150[925]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[922]), SCM_OBJ(&scm__rc.d2150[926])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1299U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[929])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[930])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[932])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[933])},
       { SCM_OBJ(&scm__rc.d2150[934]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[931]), SCM_OBJ(&scm__rc.d2150[935])},
       { SCM_MAKE_INT(1303U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[937])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[938])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[940])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[941])},
       { SCM_OBJ(&scm__rc.d2150[942]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[939]), SCM_OBJ(&scm__rc.d2150[943])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[945])},
       { SCM_MAKE_INT(1307U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[947])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[948])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[950])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[951])},
       { SCM_OBJ(&scm__rc.d2150[952]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[949]), SCM_OBJ(&scm__rc.d2150[953])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[945])},
       { SCM_MAKE_INT(1313U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[956])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[957])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[959])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[960])},
       { SCM_OBJ(&scm__rc.d2150[961]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[958]), SCM_OBJ(&scm__rc.d2150[962])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[964])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[965])},
       { SCM_OBJ(&scm__rc.d2150[966]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[968])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[969])},
       { SCM_OBJ(&scm__rc.d2150[970]), SCM_NIL},
       { SCM_MAKE_INT(1443U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[972])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[973])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[975])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[976])},
       { SCM_OBJ(&scm__rc.d2150[977]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[974]), SCM_OBJ(&scm__rc.d2150[978])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(1464U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[981])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[982])},
       { SCM_OBJ(&scm__rc.d2150[983]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[987])},
       { SCM_MAKE_INT(1480U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[989])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[990])},
       { SCM_OBJ(&scm__rc.d2150[991]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[995])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[997])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_OBJ(&scm__rc.d2150[999]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[998]), SCM_OBJ(&scm__rc.d2150[1000])},
       { SCM_OBJ(&scm__rc.d2150[996]), SCM_OBJ(&scm__rc.d2150[1001])},
       { SCM_OBJ(&scm__rc.d2150[994]), SCM_OBJ(&scm__rc.d2150[1002])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1003])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1004])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1005])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1006])},
       { SCM_MAKE_INT(1469U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1008])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1009])},
       { SCM_OBJ(&scm__rc.d2150[1010]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1013])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_MAKE_INT(1491U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1016])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1017])},
       { SCM_OBJ(&scm__rc.d2150[1018]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1021])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1023])},
       { SCM_OBJ(&scm__rc.d2150[1022]), SCM_OBJ(&scm__rc.d2150[1024])},
       { SCM_OBJ(&scm__rc.d2150[1025]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1027])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1029])},
       { SCM_MAKE_INT(1494U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1031])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1032])},
       { SCM_OBJ(&scm__rc.d2150[1033]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1036])},
       { SCM_OBJ(&scm__rc.d2150[1037]), SCM_OBJ(&scm__rc.d2150[1024])},
       { SCM_OBJ(&scm__rc.d2150[1038]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[25]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[23]), SCM_OBJ(&scm__rc.d2150[1040])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1042])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1043])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1044])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1045])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1046])},
       { SCM_MAKE_INT(1486U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1048])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1049])},
       { SCM_OBJ(&scm__rc.d2150[1050]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1053])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1054]), SCM_OBJ(&scm__rc.d2150[1055])},
       { SCM_OBJ(&scm__rc.d2150[1056]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[28]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1042])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1059])},
       { SCM_MAKE_INT(1500U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1061])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1062])},
       { SCM_OBJ(&scm__rc.d2150[1063]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1066])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_OBJ(&scm__rc.d2150[1067]), SCM_OBJ(&scm__rc.d2150[1068])},
       { SCM_OBJ(&scm__rc.d2150[1069]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[31]), SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1072])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1073])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1074])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_MAKE_INT(1531U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1077])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1078])},
       { SCM_OBJ(&scm__rc.d2150[1079]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1082])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1083])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_MAKE_INT(1530U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1086])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1087])},
       { SCM_OBJ(&scm__rc.d2150[1088]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1084]), SCM_OBJ(&scm__rc.d2150[1091])},
       { SCM_OBJ(&scm__rc.d2150[1092]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1084]), SCM_OBJ(&scm__rc.d2150[1094])},
       { SCM_OBJ(&scm__rc.d2150[1095]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1084]), SCM_OBJ(&scm__rc.d2150[1097])},
       { SCM_OBJ(&scm__rc.d2150[1098]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1100])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1101])},
       { SCM_MAKE_INT(1522U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1103])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1104])},
       { SCM_OBJ(&scm__rc.d2150[1105]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[37]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1109])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1111])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1112])},
       { SCM_OBJ(&scm__rc.d2150[1110]), SCM_OBJ(&scm__rc.d2150[1113])},
       { SCM_OBJ(&scm__rc.d2150[1114]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[38]), SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_MAKE_INT(1520U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1118])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1119])},
       { SCM_OBJ(&scm__rc.d2150[1120]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[1124])},
       { SCM_MAKE_INT(0), SCM_OBJ(&scm__rc.d2150[1125])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1126])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[1128])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1129])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1131])},
       { SCM_OBJ(&scm__rc.d2150[1130]), SCM_OBJ(&scm__rc.d2150[1132])},
       { SCM_OBJ(&scm__rc.d2150[1133]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[41]), SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_MAKE_INT(1566U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1138])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1139])},
       { SCM_OBJ(&scm__rc.d2150[1140]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1143])},
       { SCM_OBJ(&scm__rc.d2150[1144]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1145])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1146])},
       { SCM_MAKE_INT(1559U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1148])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1149])},
       { SCM_OBJ(&scm__rc.d2150[1150]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1615U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1154])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1155])},
       { SCM_OBJ(&scm__rc.d2150[1156]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1159])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1160]), SCM_OBJ(&scm__rc.d2150[1161])},
       { SCM_OBJ(&scm__rc.d2150[1162]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[47]), SCM_OBJ(&scm__rc.d2150[31])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1165])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_MAKE_INT(1660U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1168])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1169])},
       { SCM_OBJ(&scm__rc.d2150[1170]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1173])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1175])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1176])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1177])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1178])},
       { SCM_MAKE_INT(1639U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1180])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1181])},
       { SCM_OBJ(&scm__rc.d2150[1182]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[33])},
       { SCM_OBJ(&scm__rc.d2150[1186]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1185]), SCM_OBJ(&scm__rc.d2150[1187])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1188])},
       { SCM_MAKE_INT(1625U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1190])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1191])},
       { SCM_OBJ(&scm__rc.d2150[1192]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1760U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1195])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1196])},
       { SCM_OBJ(&scm__rc.d2150[1197]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1200])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1830U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1203])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1204])},
       { SCM_OBJ(&scm__rc.d2150[1205]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[55]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1209])},
       { SCM_MAKE_INT(1817U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1212])},
       { SCM_OBJ(&scm__rc.d2150[1213]), SCM_NIL},
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(323, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
#if defined(GAUCHE_WINDOWS)
#undef _SC_CLK_TCK

#endif /* defined(GAUCHE_WINDOWS) */

static ScmObj libsyssys_readdir(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pathname_scm;
  ScmString* pathname;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-readdir");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pathname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(pathname_scm)) Scm_Error("<string> required, but got %S", pathname_scm);
  pathname = SCM_STRING(pathname_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_ReadDirectory(pathname));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_tmpdir(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-tmpdir");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_TmpDir());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_basename(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pathname_scm;
  ScmString* pathname;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-basename");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pathname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(pathname_scm)) Scm_Error("<string> required, but got %S", pathname_scm);
  pathname = SCM_STRING(pathname_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_BaseName(pathname));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_dirname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pathname_scm;
  ScmString* pathname;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-dirname");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pathname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(pathname_scm)) Scm_Error("<string> required, but got %S", pathname_scm);
  pathname = SCM_STRING(pathname_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_DirName(pathname));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

ScmHashTable *errno_n2y;
ScmHashTable *errno_y2n;

static ScmObj libsyssys_errno_TOsymbol(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj num_scm;
  ScmSmallInt num;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-errno->symbol");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  num_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(num_scm)) Scm_Error("ScmSmallInt required, but got %S", num_scm);
  num = SCM_INT_VALUE(num_scm);
  {
{
ScmObj SCM_RESULT;

#line 155 "libsys.scm"
{SCM_RESULT=(Scm_HashTableRef(errno_n2y,SCM_MAKE_INT(num),SCM_FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_symbol_TOerrno(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmSymbol* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-symbol->errno");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_SYMBOLP(name_scm)) Scm_Error("<symbol> required, but got %S", name_scm);
  name = SCM_SYMBOL(name_scm);
  {
{
ScmObj SCM_RESULT;

#line 157 "libsys.scm"
{SCM_RESULT=(Scm_HashTableRef(errno_y2n,SCM_OBJ(name),SCM_FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getgrgid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj gid_scm;
  int gid;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getgrgid");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  gid_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(gid_scm)) Scm_Error("int required, but got %S", gid_scm);
  gid = Scm_GetInteger(gid_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetGroupById(gid));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getgrnam(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmString* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getgrnam");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("<string> required, but got %S", name_scm);
  name = SCM_STRING(name_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetGroupByName(name));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_gid_TOgroup_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj gid_scm;
  int gid;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-gid->group-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  gid_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(gid_scm)) Scm_Error("int required, but got %S", gid_scm);
  gid = Scm_GetInteger(gid_scm);
  {
{
ScmObj SCM_RESULT;

#line 297 "libsys.scm"
{struct group* g=getgrgid(gid);
if ((g)==(NULL)){Scm_SigCheck(Scm_VM());{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(SCM_MAKE_STR_COPYING((g)->gr_name));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_group_name_TOgid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  const char* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-group-name->gid");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("const char* required, but got %S", name_scm);
  name = SCM_STRING_CONST_CSTRING(name_scm);
  {
{
ScmObj SCM_RESULT;

#line 301 "libsys.scm"
{struct group* g=getgrnam(name);
if ((g)==(NULL)){Scm_SigCheck(Scm_VM());{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_MakeInteger((g)->gr_gid));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_setlocale(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj category_scm;
  ScmSmallInt category;
  ScmObj locale_scm;
  const char* locale;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-setlocale");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  category_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(category_scm)) Scm_Error("ScmSmallInt required, but got %S", category_scm);
  category = SCM_INT_VALUE(category_scm);
  locale_scm = SCM_SUBRARGS[1];
  if (!SCM_MAYBE_P(SCM_STRINGP, locale_scm)) Scm_Error("const char* or #f required, but got %S", locale_scm);
  locale = SCM_MAYBE(SCM_STRING_CONST_CSTRING, locale_scm);
  {
{
const char* SCM_RESULT;
{SCM_RESULT=(setlocale(category,locale));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_MAKE_STR_COPYING, SCM_RESULT));
}
  }
}


static ScmObj libsyssys_localeconv(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-localeconv");
  {
{
ScmObj SCM_RESULT;

#line 324 "libsys.scm"
{struct lconv* lc=localeconv();
{SCM_RESULT=(Scm_Cons(Scm_Cons(scm__rc.d2149[283],SCM_MAKE_STR_COPYING((lc)->decimal_point)),Scm_Cons(
Scm_Cons(scm__rc.d2149[284],SCM_MAKE_STR_COPYING((lc)->thousands_sep)),Scm_Cons(
Scm_Cons(scm__rc.d2149[285],SCM_MAKE_STR_COPYING((lc)->grouping)),Scm_Cons(
Scm_Cons(scm__rc.d2149[286],SCM_MAKE_STR_COPYING((lc)->int_curr_symbol)),Scm_Cons(
Scm_Cons(scm__rc.d2149[287],SCM_MAKE_STR_COPYING((lc)->currency_symbol)),Scm_Cons(
Scm_Cons(scm__rc.d2149[288],SCM_MAKE_STR_COPYING((lc)->mon_decimal_point)),Scm_Cons(
Scm_Cons(scm__rc.d2149[289],SCM_MAKE_STR_COPYING((lc)->mon_thousands_sep)),Scm_Cons(
Scm_Cons(scm__rc.d2149[290],SCM_MAKE_STR_COPYING((lc)->mon_grouping)),Scm_Cons(
Scm_Cons(scm__rc.d2149[291],SCM_MAKE_STR_COPYING((lc)->positive_sign)),Scm_Cons(
Scm_Cons(scm__rc.d2149[292],SCM_MAKE_STR_COPYING((lc)->negative_sign)),Scm_Cons(
Scm_Cons(scm__rc.d2149[293],SCM_MAKE_INT((lc)->int_frac_digits)),Scm_Cons(
Scm_Cons(scm__rc.d2149[294],SCM_MAKE_INT((lc)->frac_digits)),Scm_Cons(
Scm_Cons(scm__rc.d2149[295],SCM_MAKE_BOOL((lc)->p_cs_precedes)),Scm_Cons(
Scm_Cons(scm__rc.d2149[296],SCM_MAKE_BOOL((lc)->p_sep_by_space)),Scm_Cons(
Scm_Cons(scm__rc.d2149[297],SCM_MAKE_BOOL((lc)->n_cs_precedes)),Scm_Cons(
Scm_Cons(scm__rc.d2149[298],SCM_MAKE_BOOL((lc)->n_sep_by_space)),Scm_Cons(
Scm_Cons(scm__rc.d2149[299],SCM_MAKE_INT((lc)->p_sign_posn)),Scm_Cons(
Scm_Cons(scm__rc.d2149[300],SCM_MAKE_INT((lc)->n_sign_posn)),SCM_NIL)))))))))))))))))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getpwuid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj uid_scm;
  int uid;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getpwuid");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  uid_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(uid_scm)) Scm_Error("int required, but got %S", uid_scm);
  uid = Scm_GetInteger(uid_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetPasswdById(uid));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getpwnam(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmString* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getpwnam");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("<string> required, but got %S", name_scm);
  name = SCM_STRING(name_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetPasswdByName(name));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_uid_TOuser_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj uid_scm;
  int uid;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-uid->user-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  uid_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(uid_scm)) Scm_Error("int required, but got %S", uid_scm);
  uid = Scm_GetInteger(uid_scm);
  {
{
ScmObj SCM_RESULT;

#line 357 "libsys.scm"
{struct passwd* p=getpwuid(uid);
if ((p)==(NULL)){Scm_SigCheck(Scm_VM());{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(SCM_MAKE_STR_COPYING((p)->pw_name));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_user_name_TOuid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  const char* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-user-name->uid");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("const char* required, but got %S", name_scm);
  name = SCM_STRING_CONST_CSTRING(name_scm);
  {
{
ScmObj SCM_RESULT;

#line 361 "libsys.scm"
{struct passwd* p=getpwnam(name);
if ((p)==(NULL)){Scm_SigCheck(Scm_VM());{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_MakeInteger((p)->pw_uid));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_sigset_addX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj set_scm;
  ScmSysSigset* set;
  ScmObj sigs_scm;
  ScmObj sigs;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-sigset-add!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  set_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_SIGSET_P(set_scm)) Scm_Error("<sys-sigset> required, but got %S", set_scm);
  set = SCM_SYS_SIGSET(set_scm);
  sigs_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(sigs_scm)) Scm_Error("list required, but got %S", sigs_scm);
  sigs = (sigs_scm);
  {
{
ScmObj SCM_RESULT;

#line 375 "libsys.scm"
{SCM_RESULT=(Scm_SysSigsetOp(set,sigs,FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_sigset_deleteX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj set_scm;
  ScmSysSigset* set;
  ScmObj sigs_scm;
  ScmObj sigs;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-sigset-delete!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  set_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_SIGSET_P(set_scm)) Scm_Error("<sys-sigset> required, but got %S", set_scm);
  set = SCM_SYS_SIGSET(set_scm);
  sigs_scm = SCM_SUBRARGS[SCM_ARGCNT-1];
  if (!SCM_LISTP(sigs_scm)) Scm_Error("list required, but got %S", sigs_scm);
  sigs = (sigs_scm);
  {
{
ScmObj SCM_RESULT;

#line 378 "libsys.scm"
{SCM_RESULT=(Scm_SysSigsetOp(set,sigs,TRUE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_sigset_fillX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj set_scm;
  ScmSysSigset* set;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-sigset-fill!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  set_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_SIGSET_P(set_scm)) Scm_Error("<sys-sigset> required, but got %S", set_scm);
  set = SCM_SYS_SIGSET(set_scm);
  {
{
ScmObj SCM_RESULT;

#line 381 "libsys.scm"
{SCM_RESULT=(Scm_SysSigsetFill(set,FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_sigset_emptyX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj set_scm;
  ScmSysSigset* set;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-sigset-empty!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  set_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_SIGSET_P(set_scm)) Scm_Error("<sys-sigset> required, but got %S", set_scm);
  set = SCM_SYS_SIGSET(set_scm);
  {
{
ScmObj SCM_RESULT;

#line 384 "libsys.scm"
{SCM_RESULT=(Scm_SysSigsetFill(set,TRUE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_signal_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sig_scm;
  ScmSmallInt sig;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-signal-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sig_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(sig_scm)) Scm_Error("ScmSmallInt required, but got %S", sig_scm);
  sig = SCM_INT_VALUE(sig_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SignalName(sig));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_kill(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj process_scm;
  ScmObj process;
  ScmObj sig_scm;
  ScmSmallInt sig;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-kill");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  process_scm = SCM_SUBRARGS[0];
  if (!(process_scm)) Scm_Error("scheme object required, but got %S", process_scm);
  process = (process_scm);
  sig_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(sig_scm)) Scm_Error("ScmSmallInt required, but got %S", sig_scm);
  sig = SCM_INT_VALUE(sig_scm);
  {
Scm_SysKill(process,sig);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsysset_signal_handlerX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sig_scm;
  ScmObj sig;
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj mask_scm;
  ScmSysSigset* mask;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("set-signal-handler!");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sig_scm = SCM_SUBRARGS[0];
  if (!(sig_scm)) Scm_Error("scheme object required, but got %S", sig_scm);
  sig = (sig_scm);
  proc_scm = SCM_SUBRARGS[1];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  if (SCM_ARGCNT > 2+1) {
    mask_scm = SCM_SUBRARGS[2];
  } else {
    mask_scm = SCM_FALSE;
  }
  if (!SCM_MAYBE_P(SCM_SYS_SIGSET_P, mask_scm)) Scm_Error("<sys-sigset> or #f required, but got %S", mask_scm);
  mask = SCM_MAYBE(SCM_SYS_SIGSET, mask_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SetSignalHandler(sig,proc,mask));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsysget_signal_handler(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sig_scm;
  ScmSmallInt sig;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("get-signal-handler");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sig_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(sig_scm)) Scm_Error("ScmSmallInt required, but got %S", sig_scm);
  sig = SCM_INT_VALUE(sig_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetSignalHandler(sig));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsysget_signal_handler_mask(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sig_scm;
  ScmSmallInt sig;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("get-signal-handler-mask");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sig_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(sig_scm)) Scm_Error("ScmSmallInt required, but got %S", sig_scm);
  sig = SCM_INT_VALUE(sig_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetSignalHandlerMask(sig));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsysget_signal_handlers(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("get-signal-handlers");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetSignalHandlers());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsysset_signal_pending_limit(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj limit_scm;
  ScmSmallInt limit;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("set-signal-pending-limit");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  limit_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(limit_scm)) Scm_Error("ScmSmallInt required, but got %S", limit_scm);
  limit = SCM_INT_VALUE(limit_scm);
  {
Scm_SetSignalPendingLimit(limit);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsysget_signal_pending_limit(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("get-signal-pending-limit");
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_GetSignalPendingLimit());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_sigmask(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj how_scm;
  ScmSmallInt how;
  ScmObj mask_scm;
  ScmSysSigset* mask;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-sigmask");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  how_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(how_scm)) Scm_Error("ScmSmallInt required, but got %S", how_scm);
  how = SCM_INT_VALUE(how_scm);
  mask_scm = SCM_SUBRARGS[1];
  if (!SCM_MAYBE_P(SCM_SYS_SIGSET_P, mask_scm)) Scm_Error("<sys-sigset> or #f required, but got %S", mask_scm);
  mask = SCM_MAYBE(SCM_SYS_SIGSET, mask_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SysSigmask(how,mask));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_sigsuspend(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mask_scm;
  ScmSysSigset* mask;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-sigsuspend");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mask_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_SIGSET_P(mask_scm)) Scm_Error("<sys-sigset> required, but got %S", mask_scm);
  mask = SCM_SYS_SIGSET(mask_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SigSuspend(mask));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_sigwait(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mask_scm;
  ScmSysSigset* mask;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-sigwait");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  mask_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_SIGSET_P(mask_scm)) Scm_Error("<sys-sigset> required, but got %S", mask_scm);
  mask = SCM_SYS_SIGSET(mask_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_SigWait(mask));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_remove(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj filename_scm;
  const char* filename;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-remove");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  filename_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(filename_scm)) Scm_Error("const char* required, but got %S", filename_scm);
  filename = SCM_STRING_CONST_CSTRING(filename_scm);
  {

#line 416 "libsys.scm"
{int r;
SCM_SYSCALL(r,remove(filename));
if ((r)<(0)){{Scm_SysError("remove failed on %s",filename);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_rename(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj oldname_scm;
  const char* oldname;
  ScmObj newname_scm;
  const char* newname;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-rename");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  oldname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(oldname_scm)) Scm_Error("const char* required, but got %S", oldname_scm);
  oldname = SCM_STRING_CONST_CSTRING(oldname_scm);
  newname_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(newname_scm)) Scm_Error("const char* required, but got %S", newname_scm);
  newname = SCM_STRING_CONST_CSTRING(newname_scm);
  {

#line 423 "libsys.scm"
{int r;

#if defined(GAUCHE_WINDOWS)

#line 429 "libsys.scm"
chmod(newname,438);

unlink(newname);
#endif /* defined(GAUCHE_WINDOWS) */

#line 431 "libsys.scm"
SCM_SYSCALL(r,rename(oldname,newname));
if ((r)<(0)){{Scm_SysError("renaming %s to %s failed",oldname,newname);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_tmpnam(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-tmpnam");
  {
{
ScmObj SCM_RESULT;

#line 437 "libsys.scm"

#if HAVE_MKSTEMP

#line 438 "libsys.scm"
{char nam[]="/tmp/fileXXXXXX";int fd;
SCM_SYSCALL(fd,mkstemp(nam));
if ((fd)<(0)){{Scm_SysError("mkstemp failed");}}
close(fd);
unlink(nam);
{SCM_RESULT=(SCM_MAKE_STR_COPYING(nam));goto SCM_STUB_RETURN;}}
#else /* !HAVE_MKSTEMP */

#line 444 "libsys.scm"
{char* s=tmpnam(NULL);
{SCM_RESULT=(SCM_MAKE_STR_COPYING(s));goto SCM_STUB_RETURN;}}
#endif /* HAVE_MKSTEMP */

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_mkstemp(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj template_scm;
  ScmString* template;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-mkstemp");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  template_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(template_scm)) Scm_Error("<string> required, but got %S", template_scm);
  template = SCM_STRING(template_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SysMkstemp(template));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_mkdtemp(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj template_scm;
  ScmString* template;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-mkdtemp");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  template_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(template_scm)) Scm_Error("<string> required, but got %S", template_scm);
  template = SCM_STRING(template_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SysMkdtemp(template));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_ctermid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-ctermid");
  {
{
ScmObj SCM_RESULT;

#line 452 "libsys.scm"

#if defined(GAUCHE_WINDOWS)

#line 453 "libsys.scm"
{SCM_RESULT=(SCM_OBJ(&scm__sc.d2148[274]));goto SCM_STUB_RETURN;}
#else /* !defined(GAUCHE_WINDOWS) */

#line 454 "libsys.scm"
{char buf[(L_ctermid)+(1)];
{SCM_RESULT=(SCM_MAKE_STR_COPYING(ctermid(buf)));goto SCM_STUB_RETURN;}}
#endif /* defined(GAUCHE_WINDOWS) */

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_exit(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj code_scm;
  ScmObj code;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-exit");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  code_scm = SCM_SUBRARGS[0];
  if (!(code_scm)) Scm_Error("scheme object required, but got %S", code_scm);
  code = (code_scm);
  {

#line 461 "libsys.scm"
_exit(Scm_ObjToExitCode(code));
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_getenv(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  const char* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getenv");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("const char* required, but got %S", name_scm);
  name = SCM_STRING_CONST_CSTRING(name_scm);
  {
{
const char* SCM_RESULT;
{SCM_RESULT=(Scm_GetEnv(name));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_MAKE_STR_COPYING, SCM_RESULT));
}
  }
}


static ScmObj libsyssys_abort(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-abort");
  {
abort();
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_system(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj command_scm;
  const char* command;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-system");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  command_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(command_scm)) Scm_Error("const char* required, but got %S", command_scm);
  command = SCM_STRING_CONST_CSTRING(command_scm);
  {
{
int SCM_RESULT;

#line 472 "libsys.scm"
if (((command)[0])==(0)){
{SCM_RESULT=(0);goto SCM_STUB_RETURN;}} else {
SCM_SYSCALL(SCM_RESULT,system(command));}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_random(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-random");
  {
{
long SCM_RESULT;

#line 477 "libsys.scm"

#if 0 /*dummy*/
#elif (defined(HAVE_RANDOM))&&(defined(HAVE_SRANDOM))

#line 478 "libsys.scm"
{SCM_RESULT=(random());goto SCM_STUB_RETURN;}
#elif (defined(LRAND48))&&(defined(SRAND48))

#line 480 "libsys.scm"
{SCM_RESULT=(lrand48());goto SCM_STUB_RETURN;}
#else

#line 484 "libsys.scm"
{SCM_RESULT=(rand());goto SCM_STUB_RETURN;}
#endif

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_srandom(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj seed_scm;
  ScmObj seed;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-srandom");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  seed_scm = SCM_SUBRARGS[0];
  if (!(seed_scm)) Scm_Error("scheme object required, but got %S", seed_scm);
  seed = (seed_scm);
  {

#line 487 "libsys.scm"
if (!(SCM_EXACTP(seed))){{Scm_Error("exact integer required: %S",seed);}}

#line 488 "libsys.scm"

#if 0 /*dummy*/
#elif (defined(HAVE_RANDOM))&&(defined(HAVE_SRANDOM))

#line 489 "libsys.scm"
srandom(Scm_GetUInteger(seed));
#elif (defined(LRAND48))&&(defined(SRAND48))

#line 491 "libsys.scm"
srand48(Scm_GetUInteger(seed));
#else

#line 495 "libsys.scm"
srand(Scm_GetUInteger(seed));
#endif

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_environ(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-environ");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Environ());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_setenv(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  const char* name;
  ScmObj value_scm;
  const char* value;
  ScmObj overwrite_scm;
  int overwrite;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("sys-setenv");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("const char* required, but got %S", name_scm);
  name = SCM_STRING_CONST_CSTRING(name_scm);
  value_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(value_scm)) Scm_Error("const char* required, but got %S", value_scm);
  value = SCM_STRING_CONST_CSTRING(value_scm);
  if (SCM_ARGCNT > 2+1) {
    overwrite_scm = SCM_SUBRARGS[2];
  } else {
    overwrite_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(overwrite_scm)) Scm_Error("boolean required, but got %S", overwrite_scm);
  overwrite = SCM_BOOL_VALUE(overwrite_scm);
  {
Scm_SetEnv(name,value,overwrite);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_unsetenv(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  const char* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-unsetenv");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("const char* required, but got %S", name_scm);
  name = SCM_STRING_CONST_CSTRING(name_scm);
  {
Scm_UnsetEnv(name);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_clearenv(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-clearenv");
  {
Scm_ClearEnv();
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_strerror(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj errno__scm;
  int errno_;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-strerror");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  errno__scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(errno__scm)) Scm_Error("int required, but got %S", errno__scm);
  errno_ = Scm_GetInteger(errno__scm);
  {
{
const char* SCM_RESULT;
{SCM_RESULT=(strerror(errno_));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_STR_COPYING(SCM_RESULT));
}
  }
}

#if HAVE_STRSIGNAL

static ScmObj libsyssys_strsignal(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj signum_scm;
  int signum;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-strsignal");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  signum_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(signum_scm)) Scm_Error("int required, but got %S", signum_scm);
  signum = Scm_GetInteger(signum_scm);
  {
{
const char* SCM_RESULT;

#line 553 "libsys.scm"
{SCM_RESULT=(strsignal(signum));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_MAKE_STR_COPYING, SCM_RESULT));
}
  }
}

#endif /* HAVE_STRSIGNAL */
#if !(HAVE_STRSIGNAL)

static ScmObj libsyssys_strsignal(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-strsignal");
  {
{
const char* SCM_RESULT;

#line 555 "libsys.scm"
{SCM_RESULT=(NULL);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_MAKE_STR_COPYING, SCM_RESULT));
}
  }
}

#endif /* !(HAVE_STRSIGNAL) */
#if defined(HAVE_GETLOADAVG)

static ScmObj libsyssys_getloadavg(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj nsamples_scm;
  int nsamples;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getloadavg");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    nsamples_scm = SCM_SUBRARGS[0];
  } else {
    nsamples_scm = SCM_MAKE_INT(3U);
  }
  if (!SCM_INTEGERP(nsamples_scm)) Scm_Error("int required, but got %S", nsamples_scm);
  nsamples = Scm_GetInteger(nsamples_scm);
  {
{
ScmObj SCM_RESULT;

#line 563 "libsys.scm"
{double samples[3];
if (((nsamples)<=(0))||((nsamples)>(3))){{
Scm_Error("sys-getloadavg: argument out of range: %d",nsamples);}};int count=
getloadavg(samples,nsamples);
if ((count)<(0)){
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{ScmObj h=SCM_NIL;ScmObj t=SCM_NIL;
{int i=0;int cise__2173=count;for (; (i)<(cise__2173); (i)++){
{ScmObj n=Scm_MakeFlonum((samples)[i]);
SCM_APPEND1(h,t,n);}}}
{SCM_RESULT=(h);goto SCM_STUB_RETURN;}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_GETLOADAVG) */
#if !(defined(HAVE_GETLOADAVG))

static ScmObj libsyssys_getloadavg(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getloadavg");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  {
{
ScmObj SCM_RESULT;

#line 575 "libsys.scm"
{
Scm_Error("sys-getloadavg isn't supported on this platform");
{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* !(defined(HAVE_GETLOADAVG)) */
static void Scm_MemoryRegionClass_PRINT(ScmObj obj, ScmPort *port, ScmWriteContext *ctx SCM_UNUSED)
{

#line 591 "libsys.scm"
{ScmMemoryRegion* m=SCM_MEMORY_REGION(obj);
Scm_Printf(port,"#<memory-region %p[%lx] (%s%s%s)>",
(m)->ptr,(m)->size,
((((m)->prot)&(PROT_READ))?("r"):("")),
((((m)->prot)&(PROT_WRITE))?("w"):("")),
((((m)->prot)&(PROT_EXEC))?("x"):("")));}
}

SCM_DEFINE_BUILTIN_CLASS(Scm_MemoryRegionClass, Scm_MemoryRegionClass_PRINT, NULL, NULL, NULL, SCM_CLASS_DEFAULT_CPL);

static ScmObj Scm_MemoryRegionClass_address_GET(ScmObj OBJARG)
{
  ScmMemoryRegion* obj = SCM_MEMORY_REGION(OBJARG);
  return SCM_OBJ_SAFE(Scm_MakeIntegerU((uintptr_t)obj->ptr));
}

static ScmObj Scm_MemoryRegionClass_size_GET(ScmObj OBJARG)
{
  ScmMemoryRegion* obj = SCM_MEMORY_REGION(OBJARG);
  return Scm_SizeToInteger(obj->size);
}

static ScmObj Scm_MemoryRegionClass_protection_GET(ScmObj OBJARG)
{
  ScmMemoryRegion* obj = SCM_MEMORY_REGION(OBJARG);
  return Scm_MakeInteger(obj->prot);
}

static ScmObj Scm_MemoryRegionClass_flags_GET(ScmObj OBJARG)
{
  ScmMemoryRegion* obj = SCM_MEMORY_REGION(OBJARG);
  return Scm_MakeInteger(obj->flags);
}

static ScmClassStaticSlotSpec Scm_MemoryRegionClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("address", Scm_MemoryRegionClass_address_GET, NULL),
  SCM_CLASS_SLOT_SPEC("size", Scm_MemoryRegionClass_size_GET, NULL),
  SCM_CLASS_SLOT_SPEC("protection", Scm_MemoryRegionClass_protection_GET, NULL),
  SCM_CLASS_SLOT_SPEC("flags", Scm_MemoryRegionClass_flags_GET, NULL),
  SCM_CLASS_SLOT_SPEC_END()
};


static ScmObj libsyssys_mmap(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj maybe_port_scm;
  ScmObj maybe_port;
  ScmObj prot_scm;
  int prot;
  ScmObj flags_scm;
  int flags;
  ScmObj size_scm;
  size_t size;
  ScmObj off_scm;
  off_t off;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("sys-mmap");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  maybe_port_scm = SCM_SUBRARGS[0];
  if (!(maybe_port_scm)) Scm_Error("scheme object required, but got %S", maybe_port_scm);
  maybe_port = (maybe_port_scm);
  prot_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(prot_scm)) Scm_Error("int required, but got %S", prot_scm);
  prot = Scm_GetInteger(prot_scm);
  flags_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(flags_scm)) Scm_Error("int required, but got %S", flags_scm);
  flags = Scm_GetInteger(flags_scm);
  size_scm = SCM_SUBRARGS[3];
  if (!Scm_IntegerFitsSizeP(size_scm)) Scm_Error("size_t required, but got %S", size_scm);
  size = Scm_IntegerToSize(size_scm);
  if (SCM_ARGCNT > 4+1) {
    off_scm = SCM_SUBRARGS[4];
  } else {
    off_scm = SCM_MAKE_INT(0);
  }
  if (!Scm_IntegerFitsOffsetP(off_scm)) Scm_Error("off_t required, but got %S", off_scm);
  off = Scm_IntegerToOffset(off_scm);
  {
{
ScmObj SCM_RESULT;

#line 600 "libsys.scm"
{int fd=-1;
if (SCM_PORTP(maybe_port)){
fd=(Scm_PortFileNo(SCM_PORT(maybe_port)));
if ((fd)<(0)){{
Scm_Error("non-file-backed port can't be used to mmap: %S",maybe_port);}}}else if(
#line 606 "libsys.scm"
SCM_FALSEP(maybe_port)){} else {
SCM_TYPE_ERROR(maybe_port,"port or #f");}
{SCM_RESULT=(Scm_SysMmap(NULL,fd,size,off,prot,flags));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#if defined(HAVE_SYS_RESOURCE_H)
#if (SIZEOF_RLIM_T)==(4)
#define MAKERLIMIT(val) (Scm_MakeIntegerU(val))

#endif /* (SIZEOF_RLIM_T)==(4) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if (SIZEOF_RLIM_T)==(4)
#define GETRLIMIT(obj) (Scm_GetIntegerU(obj))

#endif /* (SIZEOF_RLIM_T)==(4) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if !((SIZEOF_RLIM_T)==(4))
#if (SIZEOF_RLIM_T)==(8)
#define MAKERLIMIT(val) (Scm_MakeIntegerU64(val))

#endif /* (SIZEOF_RLIM_T)==(8) */
#endif /* !((SIZEOF_RLIM_T)==(4)) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if !((SIZEOF_RLIM_T)==(4))
#if (SIZEOF_RLIM_T)==(8)
#define GETRLIMIT(obj) (Scm_GetIntegerU64(obj))

#endif /* (SIZEOF_RLIM_T)==(8) */
#endif /* !((SIZEOF_RLIM_T)==(4)) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if !((SIZEOF_RLIM_T)==(4))
#if !((SIZEOF_RLIM_T)==(8))
#error "rlim_t must be 32bit or 64bit"
#endif /* !((SIZEOF_RLIM_T)==(8)) */
#endif /* !((SIZEOF_RLIM_T)==(4)) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)

static ScmObj libsyssys_getrlimit(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj rsrc_scm;
  int rsrc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getrlimit");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  rsrc_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(rsrc_scm)) Scm_Error("int required, but got %S", rsrc_scm);
  rsrc = Scm_GetInteger(rsrc_scm);
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 635 "libsys.scm"
{struct rlimit limit;int ret;
SCM_SYSCALL(ret,getrlimit(rsrc,&(limit)));
if ((ret)<(0)){{Scm_SysError("getrlimit failed");}}
{SCM_RESULT0=(MAKERLIMIT((limit).rlim_cur)),SCM_RESULT1=(
MAKERLIMIT((limit).rlim_max));goto SCM_STUB_RETURN;}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}

#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)

static ScmObj libsyssys_setrlimit(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj rsrc_scm;
  int rsrc;
  ScmObj cur_scm;
  ScmObj cur;
  ScmObj max_scm;
  ScmObj max;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("sys-setrlimit");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  rsrc_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(rsrc_scm)) Scm_Error("int required, but got %S", rsrc_scm);
  rsrc = Scm_GetInteger(rsrc_scm);
  cur_scm = SCM_SUBRARGS[1];
  if (!(cur_scm)) Scm_Error("scheme object required, but got %S", cur_scm);
  cur = (cur_scm);
  if (SCM_ARGCNT > 2+1) {
    max_scm = SCM_SUBRARGS[2];
  } else {
    max_scm = SCM_FALSE;
  }
  if (!(max_scm)) Scm_Error("scheme object required, but got %S", max_scm);
  max = (max_scm);
  {

#line 642 "libsys.scm"
{struct rlimit limit;int ret;
if ((SCM_FALSEP(cur))||(SCM_FALSEP(max))){{
SCM_SYSCALL(ret,getrlimit(rsrc,&(limit)));
if ((ret)<(0)){{Scm_SysError("getrlimit in sys-setrlimit failed");}}}}
if (SCM_INTEGERP(cur)){(limit).rlim_cur=(GETRLIMIT(cur));}else if(
!(SCM_FALSEP(cur))){
SCM_TYPE_ERROR(cur,"non-negative integer or #f");}
if (SCM_INTEGERP(max)){(limit).rlim_max=(GETRLIMIT(max));}else if(
!(SCM_FALSEP(max))){
SCM_TYPE_ERROR(max,"non-negative integer or #f");}
SCM_SYSCALL(ret,setrlimit(rsrc,&(limit)));
if ((ret)<(0)){{Scm_SysError("setrlimit failed");}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(GAUCHE_WINDOWS)
static const char* check_trailing_separator(const char* path){{
#line 696 "libsys.scm"
{int size=strlen(path);const char* ends=
(path)+(size);const char* lastchar;
#line 699 "libsys.scm"
if ((size)==(0)){{return (path);}}
SCM_CHAR_BACKWARD(ends,path,lastchar);
if (!(((lastchar)>=(path))&&((lastchar)<(ends)))){{
Scm_SysError("invalid pathname: %s",path);}}
if (((!((lastchar)==(path)))&&(
!(((lastchar)==((path)+(2)))&&(
((path)[1])==('\x3a')))))&&(
((*(lastchar))==('\\'))||(
(*(lastchar))==('\x2f')))){{
{char * pcopy=SCM_NEW_ATOMIC_ARRAY(char ,size);
memcpy(pcopy,path,(size)-(1));
(pcopy)[(size)-(1)]=(0);
path=(((const char * )(pcopy)));}}}
return (path);}}}
#endif /* defined(GAUCHE_WINDOWS) */
#if !(defined(GAUCHE_WINDOWS))
static const char* check_trailing_separator(const char* path){{
#line 715 "libsys.scm"
return (path);}}
#endif /* !(defined(GAUCHE_WINDOWS)) */

static ScmObj libsyssys_stat(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-stat");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  {
{
ScmSysStat* SCM_RESULT;

#line 718 "libsys.scm"
{ScmSysStat* s=SCM_SYS_STAT(Scm_MakeSysStat());int r;const char* p=check_trailing_separator(path);SCM_SYSCALL(r,stat(p,SCM_SYS_STAT_STAT(s)));if ((r)<(0)){{Scm_SysError("%s failed for %s","stat",p);}}{SCM_RESULT=(s);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_lstat(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-lstat");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  {
{
ScmSysStat* SCM_RESULT;

#line 727 "libsys.scm"
{ScmSysStat* s=SCM_SYS_STAT(Scm_MakeSysStat());int r;const char* p=check_trailing_separator(path);SCM_SYSCALL(r,lstat(p,SCM_SYS_STAT_STAT(s)));if ((r)<(0)){{Scm_SysError("%s failed for %s","lstat",p);}}{SCM_RESULT=(s);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(!(defined(GAUCHE_WINDOWS)))

static ScmObj libsyssys_lstat(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-lstat");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  {
{
ScmSysStat* SCM_RESULT;

#line 729 "libsys.scm"
{ScmSysStat* s=SCM_SYS_STAT(Scm_MakeSysStat());int r;const char* p=check_trailing_separator(path);SCM_SYSCALL(r,stat(p,SCM_SYS_STAT_STAT(s)));if ((r)<(0)){{Scm_SysError("%s failed for %s","stat",p);}}{SCM_RESULT=(s);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_mkfifo(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj mode_scm;
  int mode;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-mkfifo");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  mode_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(mode_scm)) Scm_Error("int required, but got %S", mode_scm);
  mode = Scm_GetInteger(mode_scm);
  {
{
int SCM_RESULT;

#line 733 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,mkfifo(path,mode));

#line 734 "libsys.scm"
if ((SCM_RESULT)<(0)){{Scm_SysError("mkfifo failed on %s",path);}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */

static ScmObj libsyssys_fstat(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_or_fd_scm;
  ScmObj port_or_fd;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-fstat");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_or_fd_scm = SCM_SUBRARGS[0];
  if (!(port_or_fd_scm)) Scm_Error("scheme object required, but got %S", port_or_fd_scm);
  port_or_fd = (port_or_fd_scm);
  {
{
ScmObj SCM_RESULT;

#line 738 "libsys.scm"
{ScmSysStat* s=SCM_SYS_STAT(Scm_MakeSysStat());int fd=
Scm_GetPortFd(port_or_fd,FALSE);int r;
#line 741 "libsys.scm"
if ((fd)<(0)){{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
SCM_SYSCALL(r,fstat(fd,SCM_SYS_STAT_STAT(s)));
if ((r)<(0)){{Scm_SysError("fstat failed for %d",fd);}}
{SCM_RESULT=(SCM_OBJ(s));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsysfile_existsP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("file-exists?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  {
{
int SCM_RESULT;

#line 747 "libsys.scm"
{int r;
SCM_SYSCALL(r,access(path,F_OK));
{SCM_RESULT=((r)==(0));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsysfile_is_regularP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("file-is-regular?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  {
{
int SCM_RESULT;

#line 765 "libsys.scm"
{int r;ScmStat s;const char* p=check_trailing_separator(path);SCM_SYSCALL(r,access(p,F_OK));if ((r)==(0)){{SCM_SYSCALL(r,stat(p,&(s)));if ((r)<(0)){{Scm_SysError("stat failed for %s",path);}}{SCM_RESULT=(S_ISREG((s).st_mode));goto SCM_STUB_RETURN;}}} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsysfile_is_directoryP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("file-is-directory?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  {
{
int SCM_RESULT;

#line 767 "libsys.scm"
{int r;ScmStat s;const char* p=check_trailing_separator(path);SCM_SYSCALL(r,access(p,F_OK));if ((r)==(0)){{SCM_SYSCALL(r,stat(p,&(s)));if ((r)<(0)){{Scm_SysError("stat failed for %s",path);}}{SCM_RESULT=(S_ISDIR((s).st_mode));goto SCM_STUB_RETURN;}}} else {{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

static void utime_ts(ScmTimeSpec* ts,ScmObj arg){{
#line 772 "libsys.scm"
if (SCM_FALSEP(arg)){(ts)->tv_nsec=(UTIME_NOW);}else if(
SCM_TRUEP(arg)){(ts)->tv_nsec=(UTIME_OMIT);}else if(
SCM_REALP(arg)){
{double s;
(ts)->tv_nsec=(
((u_long )((modf(Scm_GetDouble(arg),&(s)))*(1.0e9))));
#line 779 "libsys.scm"
(ts)->tv_sec=(((u_long )(s)));
while(((ts)->tv_nsec)>=(1000000000)){
(ts)->tv_nsec=(((ts)->tv_nsec)-(1000000000));
++((ts)->tv_sec);}}}else if(
SCM_TIMEP(arg)){Scm_GetTimeSpec(arg,ts);} else {
Scm_Error("<time> object, real number or boolean required, but got: %S",arg);}}}

static ScmObj libsyssys_utime(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj atime_scm;
  ScmObj atime;
  ScmObj mtime_scm;
  ScmObj mtime;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("sys-utime");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  if (SCM_ARGCNT > 1+1) {
    atime_scm = SCM_SUBRARGS[1];
  } else {
    atime_scm = SCM_FALSE;
  }
  if (!(atime_scm)) Scm_Error("scheme object required, but got %S", atime_scm);
  atime = (atime_scm);
  if (SCM_ARGCNT > 2+1) {
    mtime_scm = SCM_SUBRARGS[2];
  } else {
    mtime_scm = SCM_FALSE;
  }
  if (!(mtime_scm)) Scm_Error("scheme object required, but got %S", mtime_scm);
  mtime = (mtime_scm);
  {

#line 788 "libsys.scm"
{ScmTimeSpec tss[2];int r;
utime_ts(&((tss)[0]),atime);
utime_ts(&((tss)[1]),mtime);
SCM_SYSCALL(r,utimensat(AT_FDCWD,path,tss,0));
if ((r)<(0)){{Scm_SysError("utimensat failed on %s",path);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_times(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-times");
  {
{
ScmObj SCM_RESULT;

#line 799 "libsys.scm"
{struct tms info;clock_t r;long tick;
SCM_SYSCALL3(r,times(&(info)),(r)==(((clock_t )(-1))));
if ((r)==(((clock_t )(-1)))){{Scm_SysError("times failed");}}

#if defined(_SC_CLK_TCK)

#line 803 "libsys.scm"
tick=(sysconf(_SC_CLK_TCK));
#else /* !defined(_SC_CLK_TCK) */

#line 804 "libsys.scm"

#if defined(CLK_TCK)

#line 805 "libsys.scm"
tick=(CLK_TCK);
#else /* !defined(CLK_TCK) */

#line 806 "libsys.scm"
tick=(100);
#endif /* defined(CLK_TCK) */

#endif /* defined(_SC_CLK_TCK) */

#line 807 "libsys.scm"
{SCM_RESULT=(SCM_LIST5(Scm_MakeInteger((info).tms_utime),
Scm_MakeInteger((info).tms_stime),
Scm_MakeInteger((info).tms_cutime),
Scm_MakeInteger((info).tms_cstime),
Scm_MakeInteger(tick)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_uname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-uname");
  {
{
ScmObj SCM_RESULT;

#line 817 "libsys.scm"

#if !(defined(GAUCHE_WINDOWS))

#line 818 "libsys.scm"
{struct utsname info;
if ((uname(&(info)))<(0)){{Scm_SysError("uname failed");}}
{SCM_RESULT=(SCM_LIST5(SCM_MAKE_STR_COPYING((info).sysname),
SCM_MAKE_STR_COPYING((info).nodename),
SCM_MAKE_STR_COPYING((info).release),
SCM_MAKE_STR_COPYING((info).version),
SCM_MAKE_STR_COPYING((info).machine)));goto SCM_STUB_RETURN;}}
#else /* !!(defined(GAUCHE_WINDOWS)) */

#line 826 "libsys.scm"
{SCM_RESULT=(SCM_LIST5(SCM_FALSE,SCM_FALSE,SCM_FALSE,SCM_FALSE,SCM_FALSE));goto SCM_STUB_RETURN;}
#endif /* !(defined(GAUCHE_WINDOWS)) */

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_wait(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-wait");
  {
{
ScmObj SCM_RESULT;

#line 832 "libsys.scm"
{SCM_RESULT=(Scm_SysWait(SCM_MAKE_INT(-1),0));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_waitpid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj process_scm;
  ScmObj process;
  ScmObj nohang_scm = SCM_FALSE;
  ScmObj nohang;
  ScmObj untraced_scm = SCM_FALSE;
  ScmObj untraced;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("sys-waitpid");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  process_scm = SCM_SUBRARGS[0];
  if (!(process_scm)) Scm_Error("scheme object required, but got %S", process_scm);
  process = (process_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[650])) {
      nohang_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[651])) {
      untraced_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(nohang_scm)) Scm_Error("scheme object required, but got %S", nohang_scm);
  nohang = (nohang_scm);
  if (!(untraced_scm)) Scm_Error("scheme object required, but got %S", untraced_scm);
  untraced = (untraced_scm);
  {
{
ScmObj SCM_RESULT;

#line 835 "libsys.scm"
{int options=0;
if (!(SCM_FALSEP(nohang))){{(options)|=(WNOHANG);}}
if (!(SCM_FALSEP(untraced))){{(options)|=(WUNTRACED);}}
{SCM_RESULT=(Scm_SysWait(process,options));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_wait_exitedP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj status_scm;
  int status;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-wait-exited?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  status_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(status_scm)) Scm_Error("int required, but got %S", status_scm);
  status = Scm_GetInteger(status_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(WIFEXITED(status));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_wait_exit_status(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj status_scm;
  int status;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-wait-exit-status");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  status_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(status_scm)) Scm_Error("int required, but got %S", status_scm);
  status = Scm_GetInteger(status_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(WEXITSTATUS(status));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_wait_signaledP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj status_scm;
  int status;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-wait-signaled?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  status_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(status_scm)) Scm_Error("int required, but got %S", status_scm);
  status = Scm_GetInteger(status_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(WIFSIGNALED(status));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_wait_termsig(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj status_scm;
  int status;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-wait-termsig");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  status_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(status_scm)) Scm_Error("int required, but got %S", status_scm);
  status = Scm_GetInteger(status_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(WTERMSIG(status));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_wait_stoppedP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj status_scm;
  int status;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-wait-stopped?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  status_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(status_scm)) Scm_Error("int required, but got %S", status_scm);
  status = Scm_GetInteger(status_scm);
  {
{
int SCM_RESULT;

#line 846 "libsys.scm"
((void )(status));

#line 847 "libsys.scm"
{SCM_RESULT=(WIFSTOPPED(status));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_wait_stopsig(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj status_scm;
  int status;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-wait-stopsig");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  status_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(status_scm)) Scm_Error("int required, but got %S", status_scm);
  status = Scm_GetInteger(status_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(WSTOPSIG(status));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_time(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-time");
  {
{
ScmObj SCM_RESULT;

#line 853 "libsys.scm"
{SCM_RESULT=(Scm_MakeSysTime(time(NULL)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_gettimeofday(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-gettimeofday");
  {
u_long SCM_RESULT0;
u_long SCM_RESULT1;
{

#line 856 "libsys.scm"
Scm_GetTimeOfDay(&(SCM_RESULT0),&(SCM_RESULT1));
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(Scm_MakeIntegerU(SCM_RESULT0),Scm_MakeIntegerU(SCM_RESULT1)));
  }
}


static ScmObj libsyscurrent_microseconds(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("current-microseconds");
  {
{
long SCM_RESULT;
{SCM_RESULT=(Scm_CurrentMicroseconds());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_clock_gettime_monotonic(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-clock-gettime-monotonic");
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 863 "libsys.scm"
{u_long sec;u_long nsec;int r=
Scm_ClockGetTimeMonotonic(&(sec),&(nsec));
if (r){
{SCM_RESULT0=(Scm_MakeIntegerU(sec));
SCM_RESULT1=(Scm_MakeIntegerU(nsec));}} else {
{SCM_RESULT0=(SCM_FALSE);
SCM_RESULT1=(SCM_FALSE);}}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libsyssys_clock_getres_monotonic(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-clock-getres-monotonic");
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 873 "libsys.scm"
{u_long sec;u_long nsec;int r=
Scm_ClockGetResMonotonic(&(sec),&(nsec));
if (r){
{SCM_RESULT0=(Scm_MakeIntegerU(sec));
SCM_RESULT1=(Scm_MakeIntegerU(nsec));}} else {
{SCM_RESULT0=(SCM_FALSE);
SCM_RESULT1=(SCM_FALSE);}}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libsyscurrent_time(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("current-time");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CurrentTime());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsystimeP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("time?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_TIMEP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsysabsolute_time(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj t0_scm;
  ScmTime* t0;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("absolute-time");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  if (SCM_ARGCNT > 1+1) {
    t0_scm = SCM_SUBRARGS[1];
  } else {
    t0_scm = SCM_FALSE;
  }
  if (!SCM_MAYBE_P(SCM_TIMEP, t0_scm)) Scm_Error("<time> or #f required, but got %S", t0_scm);
  t0 = SCM_MAYBE(SCM_TIME, t0_scm);
  {
{
ScmTime* SCM_RESULT;

#line 890 "libsys.scm"
{ScmTimeSpec ts;ScmTimeSpec* pts=
Scm_ToTimeSpec(obj,t0,&(ts));
if ((pts)==(NULL)){
{SCM_RESULT=(NULL);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(SCM_TIME(Scm_MakeTime64(((t0)?((t0)->type):(scm__rc.d2149[728])),
(pts)->tv_sec,
(pts)->tv_nsec)));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_OBJ_SAFE, SCM_RESULT));
}
  }
}


static ScmObj libsystime_TOseconds(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj t_scm;
  ScmTime* t;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("time->seconds");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  t_scm = SCM_SUBRARGS[0];
  if (!SCM_TIMEP(t_scm)) Scm_Error("<time> required, but got %S", t_scm);
  t = SCM_TIME(t_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_TimeToSeconds(t));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsysseconds_TOtime(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj t_scm;
  double t;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("seconds->time");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  t_scm = SCM_SUBRARGS[0];
  if (!SCM_REALP(t_scm)) Scm_Error("double required, but got %S", t_scm);
  t = Scm_GetDouble(t_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_RealSecondsToTime(t));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


ScmObj Scm_Make_sys_tm(const struct tm *v)
{
  Scm_sys_tm_Rec *z = SCM_NEW(Scm_sys_tm_Rec);
  SCM_SET_CLASS(z, &Scm_sys_tm_Class);
  z->data = *v;

  return SCM_OBJ(z);
}
SCM_DEFINE_BUILTIN_CLASS(Scm_sys_tm_Class, tm_print, NULL, NULL, NULL, SCM_CLASS_DEFAULT_CPL);

static ScmObj Scm_sys_tm_Class_sec_GET(ScmObj OBJARG)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  return Scm_MakeInteger(obj->tm_sec);
}

static void Scm_sys_tm_Class_sec_SET(ScmObj OBJARG, ScmObj value)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->tm_sec = Scm_GetInteger(value);
}

static ScmObj Scm_sys_tm_Class_min_GET(ScmObj OBJARG)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  return Scm_MakeInteger(obj->tm_min);
}

static void Scm_sys_tm_Class_min_SET(ScmObj OBJARG, ScmObj value)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->tm_min = Scm_GetInteger(value);
}

static ScmObj Scm_sys_tm_Class_hour_GET(ScmObj OBJARG)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  return Scm_MakeInteger(obj->tm_hour);
}

static void Scm_sys_tm_Class_hour_SET(ScmObj OBJARG, ScmObj value)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->tm_hour = Scm_GetInteger(value);
}

static ScmObj Scm_sys_tm_Class_mday_GET(ScmObj OBJARG)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  return Scm_MakeInteger(obj->tm_mday);
}

static void Scm_sys_tm_Class_mday_SET(ScmObj OBJARG, ScmObj value)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->tm_mday = Scm_GetInteger(value);
}

static ScmObj Scm_sys_tm_Class_mon_GET(ScmObj OBJARG)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  return Scm_MakeInteger(obj->tm_mon);
}

static void Scm_sys_tm_Class_mon_SET(ScmObj OBJARG, ScmObj value)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->tm_mon = Scm_GetInteger(value);
}

static ScmObj Scm_sys_tm_Class_year_GET(ScmObj OBJARG)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  return Scm_MakeInteger(obj->tm_year);
}

static void Scm_sys_tm_Class_year_SET(ScmObj OBJARG, ScmObj value)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->tm_year = Scm_GetInteger(value);
}

static ScmObj Scm_sys_tm_Class_wday_GET(ScmObj OBJARG)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  return Scm_MakeInteger(obj->tm_wday);
}

static void Scm_sys_tm_Class_wday_SET(ScmObj OBJARG, ScmObj value)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->tm_wday = Scm_GetInteger(value);
}

static ScmObj Scm_sys_tm_Class_yday_GET(ScmObj OBJARG)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  return Scm_MakeInteger(obj->tm_yday);
}

static void Scm_sys_tm_Class_yday_SET(ScmObj OBJARG, ScmObj value)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->tm_yday = Scm_GetInteger(value);
}

static ScmObj Scm_sys_tm_Class_isdst_GET(ScmObj OBJARG)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  return Scm_MakeInteger(obj->tm_isdst);
}

static void Scm_sys_tm_Class_isdst_SET(ScmObj OBJARG, ScmObj value)
{
  struct tm* obj = SCM_SYS_TM(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->tm_isdst = Scm_GetInteger(value);
}

static ScmClassStaticSlotSpec Scm_sys_tm_Class__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("sec", Scm_sys_tm_Class_sec_GET, Scm_sys_tm_Class_sec_SET),
  SCM_CLASS_SLOT_SPEC("min", Scm_sys_tm_Class_min_GET, Scm_sys_tm_Class_min_SET),
  SCM_CLASS_SLOT_SPEC("hour", Scm_sys_tm_Class_hour_GET, Scm_sys_tm_Class_hour_SET),
  SCM_CLASS_SLOT_SPEC("mday", Scm_sys_tm_Class_mday_GET, Scm_sys_tm_Class_mday_SET),
  SCM_CLASS_SLOT_SPEC("mon", Scm_sys_tm_Class_mon_GET, Scm_sys_tm_Class_mon_SET),
  SCM_CLASS_SLOT_SPEC("year", Scm_sys_tm_Class_year_GET, Scm_sys_tm_Class_year_SET),
  SCM_CLASS_SLOT_SPEC("wday", Scm_sys_tm_Class_wday_GET, Scm_sys_tm_Class_wday_SET),
  SCM_CLASS_SLOT_SPEC("yday", Scm_sys_tm_Class_yday_GET, Scm_sys_tm_Class_yday_SET),
  SCM_CLASS_SLOT_SPEC("isdst", Scm_sys_tm_Class_isdst_GET, Scm_sys_tm_Class_isdst_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

 void tm_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2226 SCM_UNUSED){{
#line 932 "libsys.scm"
{struct tm* st=SCM_SYS_TM(obj);const char* fmt;
#line 934 "libsys.scm"

#if !(defined(GAUCHE_WINDOWS))

#line 935 "libsys.scm"
fmt=("%a %b %e %T %Y");
#else /* !!(defined(GAUCHE_WINDOWS)) */

#line 936 "libsys.scm"
fmt=("%a %b %d %H:%M:%S %Y");
#endif /* !(defined(GAUCHE_WINDOWS)) */

#line 937 "libsys.scm"
Scm_Printf(port,"#<sys-tm %S>",Scm_StrfTime(fmt,st,SCM_FALSE));}}}

static ScmObj libsyssys_asctime(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  struct tm* tm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-asctime");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_TM_P(tm_scm)) Scm_Error("<sys-tm> required, but got %S", tm_scm);
  tm = SCM_SYS_TM(tm_scm);
  {
{
ScmObj SCM_RESULT;

#line 941 "libsys.scm"
{SCM_RESULT=(SCM_MAKE_STR_COPYING(asctime(tm)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_ctime(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj time_scm;
  ScmObj time;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-ctime");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  time_scm = SCM_SUBRARGS[0];
  if (!(time_scm)) Scm_Error("scheme object required, but got %S", time_scm);
  time = (time_scm);
  {
{
ScmObj SCM_RESULT;

#line 947 "libsys.scm"
{time_t tim=Scm_GetSysTime(time);
{SCM_RESULT=(SCM_MAKE_STR_COPYING(ctime(&(tim))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_difftime(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj time1_scm;
  ScmObj time1;
  ScmObj time0_scm;
  ScmObj time0;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-difftime");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  time1_scm = SCM_SUBRARGS[0];
  if (!(time1_scm)) Scm_Error("scheme object required, but got %S", time1_scm);
  time1 = (time1_scm);
  time0_scm = SCM_SUBRARGS[1];
  if (!(time0_scm)) Scm_Error("scheme object required, but got %S", time0_scm);
  time0 = (time0_scm);
  {
{
double SCM_RESULT;

#line 951 "libsys.scm"
{SCM_RESULT=(difftime(Scm_GetSysTime(time1),Scm_GetSysTime(time0)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_VMReturnFlonum(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_strftime(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj format_scm;
  const char* format;
  ScmObj tm_scm;
  struct tm* tm;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-strftime");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  format_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(format_scm)) Scm_Error("const char* required, but got %S", format_scm);
  format = SCM_STRING_CONST_CSTRING(format_scm);
  tm_scm = SCM_SUBRARGS[1];
  if (!SCM_SYS_TM_P(tm_scm)) Scm_Error("<sys-tm> required, but got %S", tm_scm);
  tm = SCM_SYS_TM(tm_scm);
  {
{
ScmObj SCM_RESULT;

#line 954 "libsys.scm"
{SCM_RESULT=(Scm_StrfTime(format,tm,SCM_FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_gmtime(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj time_scm;
  ScmObj time;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-gmtime");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  time_scm = SCM_SUBRARGS[0];
  if (!(time_scm)) Scm_Error("scheme object required, but got %S", time_scm);
  time = (time_scm);
  {
{
ScmObj SCM_RESULT;

#line 962 "libsys.scm"

#if defined(GAUCHE_WINDOWS)

#line 963 "libsys.scm"
{time_t tim=Scm_GetSysTime(time);
{SCM_RESULT=(Scm_Make_sys_tm(gmtime(&(tim))));goto SCM_STUB_RETURN;}}
#else /* !defined(GAUCHE_WINDOWS) */

#line 965 "libsys.scm"
{time_t tim=Scm_GetSysTime(time);struct tm buf;
#line 967 "libsys.scm"
{SCM_RESULT=(Scm_Make_sys_tm(gmtime_r(&(tim),&(buf))));goto SCM_STUB_RETURN;}}
#endif /* defined(GAUCHE_WINDOWS) */

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_localtime(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj time_scm;
  ScmObj time;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-localtime");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  time_scm = SCM_SUBRARGS[0];
  if (!(time_scm)) Scm_Error("scheme object required, but got %S", time_scm);
  time = (time_scm);
  {
{
ScmObj SCM_RESULT;

#line 970 "libsys.scm"

#if defined(GAUCHE_WINDOWS)

#line 971 "libsys.scm"
{time_t tim=Scm_GetSysTime(time);
{SCM_RESULT=(Scm_Make_sys_tm(localtime(&(tim))));goto SCM_STUB_RETURN;}}
#else /* !defined(GAUCHE_WINDOWS) */

#line 973 "libsys.scm"
{time_t tim=Scm_GetSysTime(time);struct tm buf;
#line 975 "libsys.scm"
{SCM_RESULT=(Scm_Make_sys_tm(localtime_r(&(tim),&(buf))));goto SCM_STUB_RETURN;}}
#endif /* defined(GAUCHE_WINDOWS) */

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_mktime(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj tm_scm;
  struct tm* tm;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-mktime");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  tm_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_TM_P(tm_scm)) Scm_Error("<sys-tm> required, but got %S", tm_scm);
  tm = SCM_SYS_TM(tm_scm);
  {
{
ScmObj SCM_RESULT;

#line 978 "libsys.scm"
{SCM_RESULT=(Scm_MakeSysTime(mktime(tm)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_access(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pathname_scm;
  const char* pathname;
  ScmObj amode_scm;
  int amode;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-access");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pathname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(pathname_scm)) Scm_Error("const char* required, but got %S", pathname_scm);
  pathname = SCM_STRING_CONST_CSTRING(pathname_scm);
  amode_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(amode_scm)) Scm_Error("int required, but got %S", amode_scm);
  amode = Scm_GetInteger(amode_scm);
  {
{
int SCM_RESULT;

#line 992 "libsys.scm"
{int r;
if (Scm_IsSugid()){{
Scm_Error("cannot use sys-access in suid/sgid program.");}}
SCM_SYSCALL(r,access(pathname,amode));
{SCM_RESULT=((r)==(0));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_chdir(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pathname_scm;
  const char* pathname;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-chdir");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pathname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(pathname_scm)) Scm_Error("const char* required, but got %S", pathname_scm);
  pathname = SCM_STRING_CONST_CSTRING(pathname_scm);
  {

#line 999 "libsys.scm"
{int r;
SCM_SYSCALL(r,chdir(pathname));
if ((r)<(0)){{Scm_SysError("chdir failed");}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_chmod(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pathname_scm;
  const char* pathname;
  ScmObj mode_scm;
  int mode;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-chmod");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pathname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(pathname_scm)) Scm_Error("const char* required, but got %S", pathname_scm);
  pathname = SCM_STRING_CONST_CSTRING(pathname_scm);
  mode_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(mode_scm)) Scm_Error("int required, but got %S", mode_scm);
  mode = Scm_GetInteger(mode_scm);
  {

#line 1004 "libsys.scm"
{int r;
SCM_SYSCALL(r,chmod(pathname,mode));
if ((r)<(0)){{Scm_SysError("chmod failed");}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_fchmod(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_or_fd_scm;
  ScmObj port_or_fd;
  ScmObj mode_scm;
  int mode;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-fchmod");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_or_fd_scm = SCM_SUBRARGS[0];
  if (!(port_or_fd_scm)) Scm_Error("scheme object required, but got %S", port_or_fd_scm);
  port_or_fd = (port_or_fd_scm);
  mode_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(mode_scm)) Scm_Error("int required, but got %S", mode_scm);
  mode = Scm_GetInteger(mode_scm);
  {

#line 1011 "libsys.scm"
{int r;int fd=Scm_GetPortFd(port_or_fd,TRUE);
SCM_SYSCALL(r,fchmod(fd,mode));
if ((r)<(0)){{Scm_SysError("fchmod failed");}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */

static ScmObj libsyssys_chown(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj owner_scm;
  int owner;
  ScmObj group_scm;
  int group;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("sys-chown");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  owner_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(owner_scm)) Scm_Error("int required, but got %S", owner_scm);
  owner = Scm_GetInteger(owner_scm);
  group_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(group_scm)) Scm_Error("int required, but got %S", group_scm);
  group = Scm_GetInteger(group_scm);
  {
{
int SCM_RESULT;

#line 1020 "libsys.scm"
((void )(owner));

#line 1021 "libsys.scm"
((void )(group));

#line 1022 "libsys.scm"

#if !(defined(GAUCHE_WINDOWS))

#line 1023 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,chown(path,owner,group));
#else /* !!(defined(GAUCHE_WINDOWS)) */

#line 1024 "libsys.scm"
SCM_RESULT=(0);
#endif /* !(defined(GAUCHE_WINDOWS)) */


#line 1025 "libsys.scm"
if ((SCM_RESULT)<(0)){{Scm_SysError("chown failed on %s",path);}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#if defined(HAVE_LCHOWN)

static ScmObj libsyssys_lchown(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj owner_scm;
  int owner;
  ScmObj group_scm;
  int group;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("sys-lchown");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  owner_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(owner_scm)) Scm_Error("int required, but got %S", owner_scm);
  owner = Scm_GetInteger(owner_scm);
  group_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(group_scm)) Scm_Error("int required, but got %S", group_scm);
  group = Scm_GetInteger(group_scm);
  {
{
int SCM_RESULT;

#line 1032 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,lchown(path,owner,group));

#line 1033 "libsys.scm"
if ((SCM_RESULT)<(0)){{Scm_SysError("lchown failed on %S",path);}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_LCHOWN) */

static ScmObj libsyssys_fork(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-fork");
  {
{
int SCM_RESULT;

#line 1041 "libsys.scm"
{pid_t pid;
GC_gcollect();
SCM_SYSCALL(pid,fork());
if ((pid)<(0)){{Scm_SysError("fork failed");}}
{SCM_RESULT=(pid);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_exec(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj command_scm;
  ScmString* command;
  ScmObj args_scm;
  ScmObj args;
  ScmObj iomap_scm = SCM_NIL;
  ScmObj iomap;
  ScmObj sigmask_scm = SCM_FALSE;
  ScmSysSigset* sigmask;
  ScmObj directory_scm = SCM_FALSE;
  ScmString* directory;
  ScmObj detached_scm = SCM_FALSE;
  int detached;
  ScmObj environment_scm = SCM_FALSE;
  ScmObj environment;
  ScmObj SCM_SUBRARGS[2];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("sys-exec");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  command_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(command_scm)) Scm_Error("<string> required, but got %S", command_scm);
  command = SCM_STRING(command_scm);
  args_scm = SCM_SUBRARGS[1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[878])) {
      iomap_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[879])) {
      sigmask_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[880])) {
      directory_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[881])) {
      detached_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[882])) {
      environment_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(iomap_scm)) Scm_Error("scheme object required, but got %S", iomap_scm);
  iomap = (iomap_scm);
  if (!SCM_MAYBE_P(SCM_SYS_SIGSET_P, sigmask_scm)) Scm_Error("<sys-sigset> or #f required, but got %S", sigmask_scm);
  sigmask = SCM_MAYBE(SCM_SYS_SIGSET, sigmask_scm);
  if (!SCM_MAYBE_P(SCM_STRINGP, directory_scm)) Scm_Error("<string> or #f required, but got %S", directory_scm);
  directory = SCM_MAYBE(SCM_STRING, directory_scm);
  if (!SCM_BOOLP(detached_scm)) Scm_Error("boolean required, but got %S", detached_scm);
  detached = SCM_BOOL_VALUE(detached_scm);
  if (!(environment_scm)) Scm_Error("scheme object required, but got %S", environment_scm);
  environment = (environment_scm);
  {

#line 1056 "libsys.scm"
{u_long flags=((detached)?(SCM_EXEC_DETACHED):(0));
Scm_SysExec(command,args,iomap,sigmask,directory,environment,flags);}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_fork_and_exec(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj command_scm;
  ScmString* command;
  ScmObj args_scm;
  ScmObj args;
  ScmObj iomap_scm = SCM_NIL;
  ScmObj iomap;
  ScmObj sigmask_scm = SCM_FALSE;
  ScmSysSigset* sigmask;
  ScmObj directory_scm = SCM_FALSE;
  ScmString* directory;
  ScmObj detached_scm = SCM_FALSE;
  int detached;
  ScmObj environment_scm = SCM_FALSE;
  ScmObj environment;
  ScmObj SCM_SUBRARGS[2];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("sys-fork-and-exec");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  command_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(command_scm)) Scm_Error("<string> required, but got %S", command_scm);
  command = SCM_STRING(command_scm);
  args_scm = SCM_SUBRARGS[1];
  if (!SCM_LISTP(args_scm)) Scm_Error("list required, but got %S", args_scm);
  args = (args_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[878])) {
      iomap_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[879])) {
      sigmask_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[880])) {
      directory_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[881])) {
      detached_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[882])) {
      environment_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(iomap_scm)) Scm_Error("scheme object required, but got %S", iomap_scm);
  iomap = (iomap_scm);
  if (!SCM_MAYBE_P(SCM_SYS_SIGSET_P, sigmask_scm)) Scm_Error("<sys-sigset> or #f required, but got %S", sigmask_scm);
  sigmask = SCM_MAYBE(SCM_SYS_SIGSET, sigmask_scm);
  if (!SCM_MAYBE_P(SCM_STRINGP, directory_scm)) Scm_Error("<string> or #f required, but got %S", directory_scm);
  directory = SCM_MAYBE(SCM_STRING, directory_scm);
  if (!SCM_BOOLP(detached_scm)) Scm_Error("boolean required, but got %S", detached_scm);
  detached = SCM_BOOL_VALUE(detached_scm);
  if (!(environment_scm)) Scm_Error("scheme object required, but got %S", environment_scm);
  environment = (environment_scm);
  {
{
ScmObj SCM_RESULT;

#line 1065 "libsys.scm"
{u_int flags=SCM_EXEC_WITH_FORK;
if (detached){{
flags=((flags)|(SCM_EXEC_DETACHED));}}
{SCM_RESULT=(
Scm_SysExec(command,args,iomap,sigmask,directory,environment,flags));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getcwd(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getcwd");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetCwd());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getegid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getegid");
  {
{
int SCM_RESULT;
{SCM_RESULT=(getegid());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getgid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getgid");
  {
{
int SCM_RESULT;
{SCM_RESULT=(getgid());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_geteuid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-geteuid");
  {
{
int SCM_RESULT;
{SCM_RESULT=(geteuid());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getuid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getuid");
  {
{
int SCM_RESULT;
{SCM_RESULT=(getuid());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_setugidP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-setugid?");
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_IsSugid());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getpid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getpid");
  {
{
int SCM_RESULT;
{SCM_RESULT=(getpid());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getppid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getppid");
  {
{
int SCM_RESULT;
{SCM_RESULT=(getppid());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_setgid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj gid_scm;
  int gid;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-setgid");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  gid_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(gid_scm)) Scm_Error("int required, but got %S", gid_scm);
  gid = Scm_GetInteger(gid_scm);
  {
{
int SCM_RESULT;

#line 1085 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,setgid(gid));

#line 1086 "libsys.scm"
if ((SCM_RESULT)<(0)){{Scm_SysError("setgid failed on %d",gid);}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_setpgid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pid_scm;
  int pid;
  ScmObj pgid_scm;
  int pgid;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-setpgid");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pid_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(pid_scm)) Scm_Error("int required, but got %S", pid_scm);
  pid = Scm_GetInteger(pid_scm);
  pgid_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(pgid_scm)) Scm_Error("int required, but got %S", pgid_scm);
  pgid = Scm_GetInteger(pgid_scm);
  {
{
int SCM_RESULT;

#line 1089 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,setpgid(pid,pgid));

#line 1090 "libsys.scm"
if ((SCM_RESULT)<(0)){{
Scm_SysError("setpgid failed on process %d for pgid %d",pid,pgid);}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)

static ScmObj libsyssys_getpgid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pid_scm;
  int pid;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getpgid");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pid_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(pid_scm)) Scm_Error("int required, but got %S", pid_scm);
  pid = Scm_GetInteger(pid_scm);
  {
{
int SCM_RESULT;

#line 1103 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,((int )(getpgid(pid))));

#line 1104 "libsys.scm"
if ((SCM_RESULT)<(0)){{Scm_SysError("getpgid failed");}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_getpgrp(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getpgrp");
  {
{
int SCM_RESULT;

#line 1108 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,((int )(getpgrp())));

#line 1109 "libsys.scm"
if ((SCM_RESULT)<(0)){{Scm_SysError("getpgrp failed");}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_setsid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-setsid");
  {
{
int SCM_RESULT;

#line 1112 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,setsid());

#line 1113 "libsys.scm"
if ((SCM_RESULT)<(0)){{Scm_SysError("setsid failed");}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_setuid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj uid_scm;
  int uid;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-setuid");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  uid_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(uid_scm)) Scm_Error("int required, but got %S", uid_scm);
  uid = Scm_GetInteger(uid_scm);
  {
{
int SCM_RESULT;

#line 1116 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,setuid(uid));

#line 1117 "libsys.scm"
if ((SCM_RESULT)<(0)){{Scm_SysError("setuid failed");}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
 int call_nice(int inc,int* errno_save){{
#line 1120 "libsys.scm"
errno=(0);
{int r=nice(inc);
*(errno_save)=(errno);
return (r);}}}
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_nice(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj inc_scm;
  int inc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-nice");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  inc_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(inc_scm)) Scm_Error("int required, but got %S", inc_scm);
  inc = Scm_GetInteger(inc_scm);
  {
{
int SCM_RESULT;

#line 1126 "libsys.scm"
{int errno_save=0;
SCM_SYSCALL(SCM_RESULT,call_nice(inc,&(errno_save)));
if (((SCM_RESULT)<(0))&&((errno)!=(0))){{
Scm_SysError("nice failed");}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_getgroups(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getgroups");
  {
{
ScmObj SCM_RESULT;

#line 1134 "libsys.scm"
{int size=32;gid_t glist[32];gid_t* pglist=glist;
#line 1137 "libsys.scm"
for (;;){{int n=getgroups(size,pglist);
if ((n)>=(0)){{
{ScmObj h=SCM_NIL;ScmObj t=SCM_NIL;
{int i=0;int cise__2233=n;for (; (i)<(cise__2233); (i)++){
SCM_APPEND1(h,t,Scm_MakeInteger((pglist)[i]));}}
SCM_RESULT=(h);
break;}}}
if ((errno)==(EINVAL)){
(size)+=(size);
pglist=(SCM_NEW_ATOMIC_ARRAY(gid_t,size));} else {
Scm_SysError("getgroups failed");}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)

static ScmObj libsyssys_setgroups(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj gids_scm;
  ScmObj gids;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-setgroups");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  gids_scm = SCM_SUBRARGS[0];
  if (!(gids_scm)) Scm_Error("scheme object required, but got %S", gids_scm);
  gids = (gids_scm);
  {
ScmObj cise__2235;
#line 1151 "libsys.scm"
{int ngid=Scm_Length(gids);gid_t* glist=NULL;int k=0;int r;
#line 1154 "libsys.scm"
if ((ngid)<(0)){{
Scm_Error("List of integer gids required, but got: %S",gids);}}
glist=(SCM_NEW_ATOMIC_ARRAY(gid_t,ngid));
SCM_FOR_EACH(cise__2235,gids) {{ScmObj gid=SCM_CAR(cise__2235);
if (!(SCM_INTP(gid))){{
Scm_Error("gid list contains invalid value: %S",gid);}}
(glist)[k]=(SCM_INT_VALUE(gid));
(k)++;}}
#line 1163 "libsys.scm"
SCM_SYSCALL(r,setgroups(ngid,glist));
if ((r)<(0)){{
Scm_SysError("setgroups failed with %S",gids);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */

static ScmObj libsyssys_getlogin(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getlogin");
  {
{
const char* SCM_RESULT;
{SCM_RESULT=(getlogin());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_MAKE_STR_COPYING, SCM_RESULT));
}
  }
}


static ScmObj libsyssys_link(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj existing_scm;
  const char* existing;
  ScmObj newpath_scm;
  const char* newpath;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-link");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  existing_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(existing_scm)) Scm_Error("const char* required, but got %S", existing_scm);
  existing = SCM_STRING_CONST_CSTRING(existing_scm);
  newpath_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(newpath_scm)) Scm_Error("const char* required, but got %S", newpath_scm);
  newpath = SCM_STRING_CONST_CSTRING(newpath_scm);
  {

#line 1176 "libsys.scm"
{int r;
SCM_SYSCALL(r,link(existing,newpath));
if ((r)<(0)){{Scm_SysError("link failed");}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_pause(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-pause");
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_Pause());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_alarm(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj seconds_scm;
  ScmSmallInt seconds;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-alarm");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  seconds_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(seconds_scm)) Scm_Error("ScmSmallInt required, but got %S", seconds_scm);
  seconds = SCM_INT_VALUE(seconds_scm);
  {
{
int SCM_RESULT;

#line 1187 "libsys.scm"
SCM_SYSCALL(SCM_RESULT,alarm(seconds));
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_pipe(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm = SCM_OBJ(&scm__sc.d2148[433]);
  ScmObj name;
  ScmObj buffering_scm = SCM_FALSE;
  ScmObj buffering;
  ScmObj bufferedP_scm = SCM_FALSE;
  ScmObj bufferedP;
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("sys-pipe");
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[963])) {
      name_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[964])) {
      buffering_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[965])) {
      bufferedP_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  if (!(buffering_scm)) Scm_Error("scheme object required, but got %S", buffering_scm);
  buffering = (buffering_scm);
  if (!(bufferedP_scm)) Scm_Error("scheme object required, but got %S", bufferedP_scm);
  bufferedP = (bufferedP_scm);
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 1192 "libsys.scm"
{int fds[2];int mode;int r;
SCM_SYSCALL(r,pipe(fds));
if ((r)<(0)){{Scm_SysError("pipe failed");}}
if (SCM_TRUEP(bufferedP)){
mode=(SCM_PORT_BUFFER_FULL);} else {
mode=(Scm_BufferingMode(buffering,-1,SCM_PORT_BUFFER_LINE));}
{SCM_RESULT0=(Scm_MakePortWithFd(name,SCM_PORT_INPUT,(fds)[0],mode,TRUE)),SCM_RESULT1=(
Scm_MakePortWithFd(name,SCM_PORT_OUTPUT,(fds)[1],mode,TRUE));goto SCM_STUB_RETURN;}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libsyssys_close(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fd_scm;
  int fd;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-close");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fd_scm = SCM_SUBRARGS[0];
  if (!SCM_INTEGERP(fd_scm)) Scm_Error("int required, but got %S", fd_scm);
  fd = Scm_GetInteger(fd_scm);
  {

#line 1209 "libsys.scm"
{int r=close(fd);
if ((r)<(0)){{Scm_SysError("close failed on file descriptor %d",fd);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_mkdir(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pathname_scm;
  const char* pathname;
  ScmObj mode_scm;
  int mode;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-mkdir");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pathname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(pathname_scm)) Scm_Error("const char* required, but got %S", pathname_scm);
  pathname = SCM_STRING_CONST_CSTRING(pathname_scm);
  mode_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(mode_scm)) Scm_Error("int required, but got %S", mode_scm);
  mode = Scm_GetInteger(mode_scm);
  {

#line 1213 "libsys.scm"
{int r;
((void )(mode));

#if !(defined(GAUCHE_WINDOWS))

#line 1216 "libsys.scm"
SCM_SYSCALL(r,mkdir(pathname,mode));
#else /* !!(defined(GAUCHE_WINDOWS)) */

#line 1217 "libsys.scm"
SCM_SYSCALL(r,mkdir(pathname));
#endif /* !(defined(GAUCHE_WINDOWS)) */

#line 1218 "libsys.scm"
if ((r)<(0)){{Scm_SysError("mkdir failed on %s",pathname);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_rmdir(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pathname_scm;
  const char* pathname;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-rmdir");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pathname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(pathname_scm)) Scm_Error("const char* required, but got %S", pathname_scm);
  pathname = SCM_STRING_CONST_CSTRING(pathname_scm);
  {

#line 1221 "libsys.scm"
{int r;
SCM_SYSCALL(r,rmdir(pathname));
if ((r)<(0)){{Scm_SysError("rmdir failed for %s",pathname);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_umask(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj mode_scm;
  ScmObj mode;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-umask");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    mode_scm = SCM_SUBRARGS[0];
  } else {
    mode_scm = SCM_UNBOUND;
  }
  if (!(mode_scm)) Scm_Error("scheme object required, but got %S", mode_scm);
  mode = (mode_scm);
  {
{
int SCM_RESULT;

#line 1226 "libsys.scm"
if ((SCM_UNBOUNDP(mode))||(SCM_FALSEP(mode))){
{int prev=umask(0);
umask(prev);
{SCM_RESULT=(prev);goto SCM_STUB_RETURN;}}}else if(
SCM_INTP(mode)){{SCM_RESULT=(umask(SCM_INT_VALUE(mode)));goto SCM_STUB_RETURN;}} else {
SCM_TYPE_ERROR(mode,"fixnum or #f");{SCM_RESULT=(0);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_sleep(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj seconds_scm;
  ScmSmallInt seconds;
  ScmObj no_retry_scm;
  int no_retry;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-sleep");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  seconds_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(seconds_scm)) Scm_Error("ScmSmallInt required, but got %S", seconds_scm);
  seconds = SCM_INT_VALUE(seconds_scm);
  if (SCM_ARGCNT > 1+1) {
    no_retry_scm = SCM_SUBRARGS[1];
  } else {
    no_retry_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(no_retry_scm)) Scm_Error("boolean required, but got %S", no_retry_scm);
  no_retry = SCM_BOOL_VALUE(no_retry_scm);
  {
{
int SCM_RESULT;

#line 1236 "libsys.scm"
((void )(no_retry));

#line 1237 "libsys.scm"

#if defined(GAUCHE_WINDOWS)

#line 1238 "libsys.scm"
{Sleep((seconds)*(1000));{SCM_RESULT=(0);goto SCM_STUB_RETURN;}}
#else /* !defined(GAUCHE_WINDOWS) */

#line 1239 "libsys.scm"
{u_int k=((u_int )(seconds));ScmVM* vm=
Scm_VM();
while((k)>(0)){
k=(sleep(k));
SCM_SIGCHECK(vm);
if (no_retry){{break;}}}
{SCM_RESULT=(k);goto SCM_STUB_RETURN;}}
#endif /* defined(GAUCHE_WINDOWS) */

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))

static ScmObj libsyssys_nanosleep(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj nanoseconds_scm;
  ScmObj nanoseconds;
  ScmObj no_retry_scm;
  int no_retry;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-nanosleep");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  nanoseconds_scm = SCM_SUBRARGS[0];
  if (!(nanoseconds_scm)) Scm_Error("scheme object required, but got %S", nanoseconds_scm);
  nanoseconds = (nanoseconds_scm);
  if (SCM_ARGCNT > 1+1) {
    no_retry_scm = SCM_SUBRARGS[1];
  } else {
    no_retry_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(no_retry_scm)) Scm_Error("boolean required, but got %S", no_retry_scm);
  no_retry = SCM_BOOL_VALUE(no_retry_scm);
  {
{
ScmObj SCM_RESULT;

#line 1251 "libsys.scm"
{ScmTimeSpec spec;ScmTimeSpec rem;ScmVM* vm=
Scm_VM();
if (
SCM_TIMEP(nanoseconds)){
(spec).tv_sec=((SCM_TIME(nanoseconds))->sec),
(spec).tv_nsec=((SCM_TIME(nanoseconds))->nsec);}else if(
!(SCM_REALP(nanoseconds))){
Scm_Error("bad timeout spec: <time> object or real number is required, but got %S",nanoseconds);} else {
#line 1261 "libsys.scm"
{double v=Scm_GetDouble(nanoseconds);
if ((v)<(0)){{
Scm_Error("bad timeout spec: positive number required, but got %S",nanoseconds);}}
#line 1265 "libsys.scm"
(spec).tv_sec=(((unsigned long )(floor((v)/(1.0e9))))),
(spec).tv_nsec=(((unsigned long )(fmod(v,1.0e9))));
while(((spec).tv_nsec)>=(1000000000)){
((spec).tv_nsec)-=(1000000000);
((spec).tv_sec)+=(1);}}}
(rem).tv_sec=(0),(rem).tv_nsec=(0);
while((Scm_NanoSleep(&(spec),&(rem)))<(0)){
if (!((errno)==(EINTR))){{
Scm_SysError("nanosleep failed");}}
SCM_SIGCHECK(vm);
if (no_retry){{break;}}
spec=(rem);
(rem).tv_sec=(0),(rem).tv_nsec=(0);}
if ((((rem).tv_sec)==(0))&&(((rem).tv_nsec)==(0))){
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_MakeTime(SCM_FALSE,(rem).tv_sec,(rem).tv_nsec));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */

static ScmObj libsyssys_unlink(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj pathname_scm;
  const char* pathname;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-unlink");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  pathname_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(pathname_scm)) Scm_Error("const char* required, but got %S", pathname_scm);
  pathname = SCM_STRING_CONST_CSTRING(pathname_scm);
  {
{
ScmObj SCM_RESULT;

#line 1285 "libsys.scm"
{int r;

#if defined(GAUCHE_WINDOWS)

#line 1289 "libsys.scm"
if (!(access(pathname,F_OK))){{
chmod(pathname,384);}}
#endif /* defined(GAUCHE_WINDOWS) */

#line 1291 "libsys.scm"
SCM_SYSCALL(r,unlink(pathname));
if ((r)<(0)){
{
if (!((errno)==(ENOENT))){{
Scm_SysError("unlink failed on %s",pathname);}}
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}} else {
{SCM_RESULT=(SCM_TRUE);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_isatty(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_or_fd_scm;
  ScmObj port_or_fd;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-isatty");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_or_fd_scm = SCM_SUBRARGS[0];
  if (!(port_or_fd_scm)) Scm_Error("scheme object required, but got %S", port_or_fd_scm);
  port_or_fd = (port_or_fd_scm);
  {
{
int SCM_RESULT;

#line 1300 "libsys.scm"
{int fd=Scm_GetPortFd(port_or_fd,FALSE);
{SCM_RESULT=(((fd)>=(0))&&(isatty(fd)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_ttyname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_or_fd_scm;
  ScmObj port_or_fd;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-ttyname");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_or_fd_scm = SCM_SUBRARGS[0];
  if (!(port_or_fd_scm)) Scm_Error("scheme object required, but got %S", port_or_fd_scm);
  port_or_fd = (port_or_fd_scm);
  {
{
const char* SCM_RESULT;

#line 1304 "libsys.scm"
{int fd=Scm_GetPortFd(port_or_fd,FALSE);
{SCM_RESULT=((((fd)<(0))?(NULL):(ttyname(fd))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_MAYBE(SCM_MAKE_STR_COPYING, SCM_RESULT));
}
  }
}


static ScmObj libsyssys_truncate(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj length_scm;
  ScmObj length;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-truncate");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  length_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(length_scm)) Scm_Error("exact integer required, but got %S", length_scm);
  length = (length_scm);
  {

#line 1309 "libsys.scm"
{int r;
SCM_SYSCALL(r,truncate(path,Scm_IntegerToOffset(length)));
if ((r)<(0)){{Scm_SysError("truncate failed on %s",path);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libsyssys_ftruncate(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_or_fd_scm;
  ScmObj port_or_fd;
  ScmObj length_scm;
  ScmObj length;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-ftruncate");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_or_fd_scm = SCM_SUBRARGS[0];
  if (!(port_or_fd_scm)) Scm_Error("scheme object required, but got %S", port_or_fd_scm);
  port_or_fd = (port_or_fd_scm);
  length_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(length_scm)) Scm_Error("exact integer required, but got %S", length_scm);
  length = (length_scm);
  {

#line 1314 "libsys.scm"
{int r;int fd=Scm_GetPortFd(port_or_fd,TRUE);
SCM_SYSCALL(r,ftruncate(fd,Scm_IntegerToOffset(length)));
if ((r)<(0)){{Scm_SysError("ftruncate failed on %S",port_or_fd);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

#if defined(HAVE_CRYPT)

static ScmObj libsyssys_crypt(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj key_scm;
  const char* key;
  ScmObj salt_scm;
  const char* salt;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-crypt");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  key_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(key_scm)) Scm_Error("const char* required, but got %S", key_scm);
  key = SCM_STRING_CONST_CSTRING(key_scm);
  salt_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(salt_scm)) Scm_Error("const char* required, but got %S", salt_scm);
  salt = SCM_STRING_CONST_CSTRING(salt_scm);
  {
{
const char* SCM_RESULT;

#line 1324 "libsys.scm"
{SCM_RESULT=(((const char * )(crypt(key,salt))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_STR_COPYING(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_CRYPT) */
#if !(defined(HOSTNAMELEN))
#define HOSTNAMELEN (1024)

#endif /* !(defined(HOSTNAMELEN)) */

static ScmObj libsyssys_gethostname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-gethostname");
  {
{
ScmObj SCM_RESULT;

#line 1333 "libsys.scm"

#if defined(HAVE_GETHOSTNAME)

#line 1334 "libsys.scm"
{char buf[HOSTNAMELEN];int r;
SCM_SYSCALL(r,gethostname(buf,HOSTNAMELEN));
if ((r)<(0)){{Scm_SysError("gethostname failed");}}
{SCM_RESULT=(SCM_MAKE_STR_COPYING(buf));goto SCM_STUB_RETURN;}}
#else /* !defined(HAVE_GETHOSTNAME) */

#line 1339 "libsys.scm"
{SCM_RESULT=(SCM_MAKE_STR_IMMUTABLE("localhost"));goto SCM_STUB_RETURN;}
#endif /* defined(HAVE_GETHOSTNAME) */

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libsyssys_getdomainname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-getdomainname");
  {
{
ScmObj SCM_RESULT;

#line 1342 "libsys.scm"

#if defined(HAVE_GETDOMAINNAME)

#line 1343 "libsys.scm"
{char buf[HOSTNAMELEN];int r;
SCM_SYSCALL(r,getdomainname(buf,HOSTNAMELEN));
if ((r)<(0)){{Scm_SysError("getdomainame failed");}}
{SCM_RESULT=(SCM_MAKE_STR_COPYING(buf));goto SCM_STUB_RETURN;}}
#else /* !defined(HAVE_GETDOMAINNAME) */

#line 1348 "libsys.scm"
{SCM_RESULT=(SCM_MAKE_STR_IMMUTABLE("local"));goto SCM_STUB_RETURN;}
#endif /* defined(HAVE_GETDOMAINNAME) */

goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#if defined(HAVE_SYMLINK)

static ScmObj libsyssys_symlink(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj existing_scm;
  const char* existing;
  ScmObj newpath_scm;
  const char* newpath;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-symlink");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  existing_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(existing_scm)) Scm_Error("const char* required, but got %S", existing_scm);
  existing = SCM_STRING_CONST_CSTRING(existing_scm);
  newpath_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(newpath_scm)) Scm_Error("const char* required, but got %S", newpath_scm);
  newpath = SCM_STRING_CONST_CSTRING(newpath_scm);
  {

#line 1361 "libsys.scm"
{int r;
SCM_SYSCALL(r,symlink(existing,newpath));
if ((r)<(0)){{
Scm_SysError("symlink from %s to %s failed",newpath,existing);}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_READLINK)

static ScmObj libsyssys_readlink(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  const char* path;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-readlink");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("const char* required, but got %S", path_scm);
  path = SCM_STRING_CONST_CSTRING(path_scm);
  {
{
ScmObj SCM_RESULT;

#line 1369 "libsys.scm"
{char buf[1024];int n;
#line 1371 "libsys.scm"
SCM_SYSCALL(n,readlink(path,buf,1024));
if ((n)<(0)){{Scm_SysError("readlink failed on %s",path);}}
if ((n)==(1024)){{Scm_Error("readlink result too long on %s",path);}}
{SCM_RESULT=(Scm_MakeString(buf,n,-1,SCM_STRING_COPYING));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_SELECT)

static ScmObj libsyssys_fdset_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fdset_scm;
  ScmSysFdset* fdset;
  ScmObj pf_scm;
  ScmObj pf;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-fdset-ref");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fdset_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_FDSET_P(fdset_scm)) Scm_Error("<sys-fdset> required, but got %S", fdset_scm);
  fdset = SCM_SYS_FDSET(fdset_scm);
  pf_scm = SCM_SUBRARGS[1];
  if (!(pf_scm)) Scm_Error("scheme object required, but got %S", pf_scm);
  pf = (pf_scm);
  {
{
int SCM_RESULT;

#line 1398 "libsys.scm"
{int fd=Scm_GetPortFd(pf,FALSE);
if ((fd)<(0)){
{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}} else {
{
#if !(defined(GAUCHE_WINDOWS))
{int G2253=fd;if (((G2253)<(0))||((G2253)>=(FD_SETSIZE))){{Scm_Error("File descriptor value is out of range: %d (must be between 0 and %d, inclusive)",G2253,(FD_SETSIZE)-(1));}}}
#endif /* ! defined(GAUCHE_WINDOWS) */

#line 1402 "libsys.scm"
{SCM_RESULT=(FD_ISSET(fd,&((fdset)->fdset)));goto SCM_STUB_RETURN;}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)

static ScmObj libsyssys_fdset_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fdset_scm;
  ScmSysFdset* fdset;
  ScmObj pf_scm;
  ScmObj pf;
  ScmObj flag_scm;
  int flag;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("sys-fdset-set!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fdset_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_FDSET_P(fdset_scm)) Scm_Error("<sys-fdset> required, but got %S", fdset_scm);
  fdset = SCM_SYS_FDSET(fdset_scm);
  pf_scm = SCM_SUBRARGS[1];
  if (!(pf_scm)) Scm_Error("scheme object required, but got %S", pf_scm);
  pf = (pf_scm);
  flag_scm = SCM_SUBRARGS[2];
  if (!SCM_BOOLP(flag_scm)) Scm_Error("boolean required, but got %S", flag_scm);
  flag = SCM_BOOL_VALUE(flag_scm);
  {

#line 1405 "libsys.scm"
{int fd=Scm_GetPortFd(pf,FALSE);
if ((fd)>=(0)){{

#if !(defined(GAUCHE_WINDOWS))
{int G2256=fd;if (((G2256)<(0))||((G2256)>=(FD_SETSIZE))){{Scm_Error("File descriptor value is out of range: %d (must be between 0 and %d, inclusive)",G2256,(FD_SETSIZE)-(1));}}}
#endif /* ! defined(GAUCHE_WINDOWS) */

#line 1408 "libsys.scm"
if (flag){FD_SET(fd,&((fdset)->fdset));
if (((fdset)->maxfd)<(fd)){{(fdset)->maxfd=(fd);}}} else {
FD_CLR(fd,&((fdset)->fdset));
if (((fdset)->maxfd)==(fd)){{
{int i=((fdset)->maxfd)-(1);
for (; (i)>=(0); (i)--){
if (FD_ISSET(i,&((fdset)->fdset))){{break;}}}
(fdset)->maxfd=(i);}}}}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)

static ScmObj libsyssys_fdset_max_fd(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fdset_scm;
  ScmSysFdset* fdset;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-fdset-max-fd");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fdset_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_FDSET_P(fdset_scm)) Scm_Error("<sys-fdset> required, but got %S", fdset_scm);
  fdset = SCM_SYS_FDSET(fdset_scm);
  {
{
int SCM_RESULT;

#line 1418 "libsys.scm"
{SCM_RESULT=((fdset)->maxfd);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)

static ScmObj libsyssys_fdset_clearX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fdset_scm;
  ScmSysFdset* fdset;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-fdset-clear!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fdset_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_FDSET_P(fdset_scm)) Scm_Error("<sys-fdset> required, but got %S", fdset_scm);
  fdset = SCM_SYS_FDSET(fdset_scm);
  {
{
ScmObj SCM_RESULT;

#line 1421 "libsys.scm"
FD_ZERO(&((fdset)->fdset));

#line 1422 "libsys.scm"
(fdset)->maxfd=(-1);

#line 1423 "libsys.scm"
{SCM_RESULT=(SCM_OBJ(fdset));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)

static ScmObj libsyssys_fdset_copyX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj dst_scm;
  ScmSysFdset* dst;
  ScmObj src_scm;
  ScmSysFdset* src;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-fdset-copy!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  dst_scm = SCM_SUBRARGS[0];
  if (!SCM_SYS_FDSET_P(dst_scm)) Scm_Error("<sys-fdset> required, but got %S", dst_scm);
  dst = SCM_SYS_FDSET(dst_scm);
  src_scm = SCM_SUBRARGS[1];
  if (!SCM_SYS_FDSET_P(src_scm)) Scm_Error("<sys-fdset> required, but got %S", src_scm);
  src = SCM_SYS_FDSET(src_scm);
  {
{
ScmObj SCM_RESULT;

#line 1426 "libsys.scm"
(dst)->fdset=((src)->fdset),
(dst)->maxfd=((src)->maxfd);

#line 1428 "libsys.scm"
{SCM_RESULT=(SCM_OBJ(dst));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)

static ScmObj libsyssys_select(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj rfds_scm;
  ScmObj rfds;
  ScmObj wfds_scm;
  ScmObj wfds;
  ScmObj efds_scm;
  ScmObj efds;
  ScmObj timeout_scm;
  ScmObj timeout;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("sys-select");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  rfds_scm = SCM_SUBRARGS[0];
  if (!(rfds_scm)) Scm_Error("scheme object required, but got %S", rfds_scm);
  rfds = (rfds_scm);
  wfds_scm = SCM_SUBRARGS[1];
  if (!(wfds_scm)) Scm_Error("scheme object required, but got %S", wfds_scm);
  wfds = (wfds_scm);
  efds_scm = SCM_SUBRARGS[2];
  if (!(efds_scm)) Scm_Error("scheme object required, but got %S", efds_scm);
  efds = (efds_scm);
  if (SCM_ARGCNT > 3+1) {
    timeout_scm = SCM_SUBRARGS[3];
  } else {
    timeout_scm = SCM_FALSE;
  }
  if (!(timeout_scm)) Scm_Error("scheme object required, but got %S", timeout_scm);
  timeout = (timeout_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SysSelect(rfds,wfds,efds,timeout));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)

static ScmObj libsyssys_selectX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj rfds_scm;
  ScmObj rfds;
  ScmObj wfds_scm;
  ScmObj wfds;
  ScmObj efds_scm;
  ScmObj efds;
  ScmObj timeout_scm;
  ScmObj timeout;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("sys-select!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  rfds_scm = SCM_SUBRARGS[0];
  if (!(rfds_scm)) Scm_Error("scheme object required, but got %S", rfds_scm);
  rfds = (rfds_scm);
  wfds_scm = SCM_SUBRARGS[1];
  if (!(wfds_scm)) Scm_Error("scheme object required, but got %S", wfds_scm);
  wfds = (wfds_scm);
  efds_scm = SCM_SUBRARGS[2];
  if (!(efds_scm)) Scm_Error("scheme object required, but got %S", efds_scm);
  efds = (efds_scm);
  if (SCM_ARGCNT > 3+1) {
    timeout_scm = SCM_SUBRARGS[3];
  } else {
    timeout_scm = SCM_FALSE;
  }
  if (!(timeout_scm)) Scm_Error("scheme object required, but got %S", timeout_scm);
  timeout = (timeout_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SysSelectX(rfds,wfds,efds,timeout));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_SELECT) */

static ScmObj libsyssys_available_processors(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("sys-available-processors");
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_AvailableProcessors());goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#if defined(GAUCHE_WINDOWS)
static void handle_cleanup(ScmObj h){{
#line 1688 "libsys.scm"
CloseHandle(SCM_FOREIGN_POINTER_REF(HANDLE,h));}}
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
static void handle_print(ScmObj h,ScmPort* p,ScmWriteContext* G2290 SCM_UNUSED){{
#line 1691 "libsys.scm"
{ScmObj type=Scm_ForeignPointerAttrGet(SCM_FOREIGN_POINTER(h),
scm__rc.d2291[0],SCM_FALSE);
if (
SCM_EQ(type,scm__rc.d2291[1])){
Scm_Printf(p,"#<win:handle process %d @%p>",Scm_WinProcessPID(h),h);} else {
#line 1697 "libsys.scm"
Scm_Printf(p,"#<win:handle @%p>",h);}}}}
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
 ScmObj Scm_MakeWinHandle(HANDLE wh,ScmObj type){{
#line 1706 "libsys.scm"
{ScmObj h=Scm_MakeForeignPointer(WinHandleClass,wh);
if (!(SCM_FALSEP(type))){{
Scm_ForeignPointerAttrSet(SCM_FOREIGN_POINTER(h),scm__rc.d2291[0],type);}}
return (h);}}}
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
 int Scm_WinHandleP(ScmObj obj,ScmObj type){{
#line 1712 "libsys.scm"
if (!(SCM_XTYPEP(obj,WinHandleClass))){{return (FALSE);}}
return (
(SCM_FALSEP(type))||(
SCM_EQ(type,Scm_ForeignPointerAttrGet(SCM_FOREIGN_POINTER(obj),
scm__rc.d2291[0],SCM_FALSE))));}}
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
 HANDLE Scm_WinHandle(ScmObj h,ScmObj type){{
#line 1719 "libsys.scm"
if (!(Scm_WinHandleP(h,type))){{SCM_TYPE_ERROR(h,"<win:handle>");}}
return (SCM_FOREIGN_POINTER_REF(HANDLE,h));}}
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
 ScmObj Scm_MakeWinProcess(HANDLE h){{
#line 1725 "libsys.scm"
return (Scm_MakeWinHandle(h,scm__rc.d2291[1]));}}
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
 int Scm_WinProcessP(ScmObj obj){{
#line 1728 "libsys.scm"
return (Scm_WinHandleP(obj,scm__rc.d2291[1]));}}
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
 HANDLE Scm_WinProcess(ScmObj obj){{
#line 1731 "libsys.scm"
return (Scm_WinHandle(obj,scm__rc.d2291[1]));}}
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

static ScmObj libsyssys_win_processP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-win-process?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_WinProcessP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

static ScmObj libsyssys_win_process_pid(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-win-process-pid");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_WinProcessPID(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

static ScmObj libsyssys_get_osfhandle(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_or_fd_scm;
  ScmObj port_or_fd;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-get-osfhandle");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_or_fd_scm = SCM_SUBRARGS[0];
  if (!(port_or_fd_scm)) Scm_Error("scheme object required, but got %S", port_or_fd_scm);
  port_or_fd = (port_or_fd_scm);
  {
{
ScmObj SCM_RESULT;

#line 1739 "libsys.scm"
{int fd=Scm_GetPortFd(port_or_fd,TRUE);HANDLE h=
((HANDLE )(_get_osfhandle(fd)));
if ((h)==(INVALID_HANDLE_VALUE)){{Scm_SysError("get_osfhandle failed");}}
{SCM_RESULT=(Scm_MakeWinHandle(h,SCM_FALSE));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

static ScmObj libsyssys_win_pipe_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_or_fd_scm;
  ScmObj port_or_fd;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-win-pipe-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_or_fd_scm = SCM_SUBRARGS[0];
  if (!(port_or_fd_scm)) Scm_Error("scheme object required, but got %S", port_or_fd_scm);
  port_or_fd = (port_or_fd_scm);
  {
{
ScmObj SCM_RESULT;

#line 1745 "libsys.scm"
{int fd=Scm_GetPortFd(port_or_fd,FALSE);
if ((fd)<(0)){
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_WinGetPipeName(((HANDLE )(_get_osfhandle(fd)))));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(GAUCHE_WINDOWS) */
static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[6])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[8])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[10])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[13])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[15])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[17])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[18])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[21])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[27])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[30])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[40])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[44])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[46])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[51])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[52])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[54])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[57])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1583];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1584];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1585];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1586];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1587];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[78];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[51]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[76];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1588];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[75];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[74];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1589];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[73];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[46]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[598];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[67];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[65];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(47);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[18]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1590];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1591];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1592];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[40];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[70];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[69];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[42];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[22]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[43]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1593];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[42]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1594];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1089];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1117];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[63];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[82];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1595];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1596];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1597];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[58];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[62];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[60];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[59];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[80];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1598];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1599];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1242];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[56];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[31]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[51];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1600];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[49];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[55];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[33]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1601];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[48];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[46];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[44];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[26]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[24]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1602];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1603];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1604];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[81];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[38];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[19]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1605];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[33];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[35];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[32];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1606];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[79];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1607];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1608];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1609];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[4];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[30];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[313];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[421];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[318];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[423];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[417];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[532];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[541];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[542];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[540];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[529];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(61);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[527];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[538];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[537];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[531];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[296]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[358];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[508];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1610];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1611];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1612];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[530];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[510];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[555];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[556];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[100];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[511];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[310]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[308]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[552];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1613];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1614];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[551];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[729];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[751];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[746];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[748];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[750];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1615];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[745];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[743];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1616];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[741];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1617];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[779];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[780];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[781];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1618];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[776];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[789];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[718];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[787];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[934];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[932];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1056];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1058];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1059];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1054];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1064];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1074];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1075];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[357];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1076];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1619];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1090];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1092];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1620];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1621];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1622];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1623];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1624];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1625];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1088];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1087];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1086];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1085];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1091];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1084];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1626];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1627];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[505];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1080];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1082];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[37];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1072];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1070];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1068];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1628];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1097];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1098];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1101];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1103];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1096];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1104];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1105];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1108];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1629];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1111];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1112];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1119];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1121];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[472]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1120];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1630];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1631];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1632];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1127];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(44);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1137];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1134];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1633];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1634];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1141];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1635];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1636];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1143];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1637];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1638];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1145];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1639];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1150];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[498]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1640];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1641];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1642];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1643];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1152];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1140];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1644];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[495]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1132];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[488]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1129];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1645];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1646];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1151];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1647];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1648];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1147];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(123);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1166];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1165];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1649];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1167];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1650];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1162];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1651];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1164];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(33);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1652];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1653];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(91);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1654];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1655];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1158];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1656];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1657];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1658];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(92);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1160];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(63);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1659];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(42);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1660];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[514]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[853];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1169];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1172];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1661];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1662];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1159];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1171];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(46);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1663];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1157];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1664];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1665];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1666];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1181];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1180];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1178];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1176];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1667];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1668];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1170];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1669];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1189];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1670];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1671];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1672];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1673];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1027];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1187];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1190];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1674];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1185];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1204];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1675];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1676];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1677];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1200];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1202];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1678];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1679];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[630];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1213];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1209];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1214];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[0];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1680];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1681];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[618];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1682];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1208];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1683];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1684];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1685];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1218];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1217];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1203];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1220];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1219];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1198];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1197];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1686];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1195];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1233];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1231];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1229];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1227];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[609];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1226];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1239];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[319];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[541]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1240];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1252];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1250];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1248];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1241];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1247];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_MAKE_CHAR(32);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[547]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1245];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = scm__rc.d2149[1254];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1258]), i++) = SCM_OBJ(&scm__sc.d2148[545]);
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[1258]);
}
void Scm_Init_libsys() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* sys-readdir */
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[1])),TRUE); /* pathname */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1]), scm__rc.d2149[1]);
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[2])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[4]), scm__rc.d2149[2]);
  scm__rc.d2149[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[4])),TRUE); /* bind-info */
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[5])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[5]), scm__rc.d2149[0]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[6]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[7]), scm__rc.d2149[3]);
  scm__rc.d2149[5] = Scm_MakeExtendedPair(scm__rc.d2149[0], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[9]));
  scm__rc.d2149[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[6])),TRUE); /* <string> */
  scm__rc.d2149[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[7])),TRUE); /* -> */
  scm__rc.d2149[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[8])),TRUE); /* <top> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[9]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[9]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[9]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[9]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-readdir")), SCM_OBJ(&libsyssys_readdir__STUB), 0);
  libsyssys_readdir__STUB.common.info = scm__rc.d2149[5];
  libsyssys_readdir__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* sys-tmpdir */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[10]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[11]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[12]), scm__rc.d2149[3]);
  scm__rc.d2149[17] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_NIL, SCM_OBJ(&scm__rc.d2150[13]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[18]))[5] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-tmpdir")), SCM_OBJ(&libsyssys_tmpdir__STUB), 0);
  libsyssys_tmpdir__STUB.common.info = scm__rc.d2149[17];
  libsyssys_tmpdir__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* sys-basename */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[16]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[17]), scm__rc.d2149[24]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[18]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[19]), scm__rc.d2149[3]);
  scm__rc.d2149[25] = Scm_MakeExtendedPair(scm__rc.d2149[24], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[21]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-basename")), SCM_OBJ(&libsyssys_basename__STUB), 0);
  libsyssys_basename__STUB.common.info = scm__rc.d2149[25];
  libsyssys_basename__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* sys-dirname */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[24]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[25]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[26]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[27]), scm__rc.d2149[3]);
  scm__rc.d2149[27] = Scm_MakeExtendedPair(scm__rc.d2149[26], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[29]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-dirname")), SCM_OBJ(&libsyssys_dirname__STUB), 0);
  libsyssys_dirname__STUB.common.info = scm__rc.d2149[27];
  libsyssys_dirname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[28] = Scm_MakeIdentifier(scm__rc.d2149[29], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[30] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* sys-normalize-pathname */
  scm__rc.d2149[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* undefined? */
  scm__rc.d2149[31] = Scm_MakeIdentifier(scm__rc.d2149[32], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#undefined? */
  scm__rc.d2149[33] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15])),TRUE); /* gauche.os.windows */
  scm__rc.d2149[35] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* cond-features */
  scm__rc.d2149[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* gauche.internal */
  scm__rc.d2149[36] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[37]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[34] = Scm_MakeIdentifier(scm__rc.d2149[35], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#cond-features */
  scm__rc.d2149[38] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])), 0);
  scm__rc.d2149[40] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* rxmatch */
  scm__rc.d2149[39] = Scm_MakeIdentifier(scm__rc.d2149[40], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#rxmatch */
  scm__rc.d2149[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* equal? */
  scm__rc.d2149[41] = Scm_MakeIdentifier(scm__rc.d2149[42], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#equal? */
  scm__rc.d2149[44] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* sys-getenv */
  scm__rc.d2149[43] = Scm_MakeIdentifier(scm__rc.d2149[44], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#sys-getenv */
  scm__rc.d2149[46] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* sys-getuid */
  scm__rc.d2149[45] = Scm_MakeIdentifier(scm__rc.d2149[46], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#sys-getuid */
  scm__rc.d2149[48] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* sys-getpwuid */
  scm__rc.d2149[47] = Scm_MakeIdentifier(scm__rc.d2149[48], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#sys-getpwuid */
  scm__rc.d2149[49] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* dir */
  scm__rc.d2149[51] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* ~ */
  scm__rc.d2149[50] = Scm_MakeIdentifier(scm__rc.d2149[51], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#~ */
  scm__rc.d2149[53] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* error */
  scm__rc.d2149[52] = Scm_MakeIdentifier(scm__rc.d2149[53], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#error */
  scm__rc.d2149[55] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* sys-getpwnam */
  scm__rc.d2149[54] = Scm_MakeIdentifier(scm__rc.d2149[55], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#sys-getpwnam */
  scm__rc.d2149[56] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* after */
  scm__rc.d2149[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* string-append */
  scm__rc.d2149[57] = Scm_MakeIdentifier(scm__rc.d2149[58], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#string-append */
  scm__rc.d2149[59] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])), 0);
  scm__rc.d2149[60] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])), 0);
  scm__rc.d2149[62] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* sys-getcwd */
  scm__rc.d2149[61] = Scm_MakeIdentifier(scm__rc.d2149[62], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#sys-getcwd */
  {
     ScmCharSet *cs = SCM_CHARSET(Scm_MakeEmptyCharSet());
     Scm_CharSetAddRange(cs, SCM_CHAR(47), SCM_CHAR(47));
     Scm_CharSetAddRange(cs, SCM_CHAR(92), SCM_CHAR(92));
     scm__rc.d2149[63] = SCM_OBJ(cs);
  }
  scm__rc.d2149[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* string-split */
  scm__rc.d2149[64] = Scm_MakeIdentifier(scm__rc.d2149[65], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#string-split */
  scm__rc.d2149[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* string-join */
  scm__rc.d2149[66] = Scm_MakeIdentifier(scm__rc.d2149[67], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#string-join */
  scm__rc.d2149[69] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* length=? */
  scm__rc.d2149[68] = Scm_MakeIdentifier(scm__rc.d2149[69], SCM_MODULE(scm__rc.d2149[36]), SCM_NIL); /* gauche.internal#length=? */
  scm__rc.d2149[70] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])), 0);
  scm__rc.d2149[71] = Scm_MakeIdentifier(scm__rc.d2149[53], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2149[73] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* unwrap-syntax-1 */
  scm__rc.d2149[72] = Scm_MakeIdentifier(scm__rc.d2149[73], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#unwrap-syntax-1 */
  scm__rc.d2149[74] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48]))); /* :absolute */
  scm__rc.d2149[75] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49]))); /* :expand */
  scm__rc.d2149[76] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50]))); /* :canonicalize */
  scm__rc.d2149[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),TRUE); /* errorf */
  scm__rc.d2149[77] = Scm_MakeIdentifier(scm__rc.d2149[78], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#errorf */
  scm__rc.d2149[79] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53]))); /* :key */
  scm__rc.d2149[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* absolute */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[34]), scm__rc.d2149[80]);
  scm__rc.d2149[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* expand */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[35]), scm__rc.d2149[81]);
  scm__rc.d2149[82] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[50])),TRUE); /* canonicalize */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[36]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[40]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[41]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[44]), scm__rc.d2149[2]);
  scm__rc.d2149[83] = Scm_MakeExtendedPair(scm__rc.d2149[30], SCM_OBJ(&scm__rc.d2150[41]), SCM_OBJ(&scm__rc.d2150[45]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[83]);
  scm__rc.d2149[84] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[0]))->name = scm__rc.d2149[30];/* sys-normalize-pathname */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[0]))->debugInfo = scm__rc.d2149[84];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[14] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[26] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[38] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[49] = SCM_WORD(scm__rc.d2149[33]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[53] = SCM_WORD(scm__rc.d2149[34]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[72] = SCM_WORD(scm__rc.d2149[38]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[75] = SCM_WORD(scm__rc.d2149[39]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[92] = SCM_WORD(scm__rc.d2149[41]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[103] = SCM_WORD(scm__rc.d2149[43]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[113] = SCM_WORD(scm__rc.d2149[43]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[127] = SCM_WORD(scm__rc.d2149[45]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[129] = SCM_WORD(scm__rc.d2149[47]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[138] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[140] = SCM_WORD(scm__rc.d2149[50]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[149] = SCM_WORD(scm__rc.d2149[52]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[162] = SCM_WORD(scm__rc.d2149[52]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[173] = SCM_WORD(scm__rc.d2149[54]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[182] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[184] = SCM_WORD(scm__rc.d2149[50]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[193] = SCM_WORD(scm__rc.d2149[52]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[202] = SCM_WORD(scm__rc.d2149[56]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[206] = SCM_WORD(scm__rc.d2149[57]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[223] = SCM_WORD(scm__rc.d2149[59]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[226] = SCM_WORD(scm__rc.d2149[39]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[232] = SCM_WORD(scm__rc.d2149[60]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[235] = SCM_WORD(scm__rc.d2149[39]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[246] = SCM_WORD(scm__rc.d2149[61]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[251] = SCM_WORD(scm__rc.d2149[57]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[264] = SCM_WORD(scm__rc.d2149[63]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[266] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[290] = SCM_WORD(scm__rc.d2149[66]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[299] = SCM_WORD(scm__rc.d2149[41]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[317] = SCM_WORD(scm__rc.d2149[41]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[340] = SCM_WORD(scm__rc.d2149[41]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[352] = SCM_WORD(scm__rc.d2149[41]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[366] = SCM_WORD(scm__rc.d2149[68]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[372] = SCM_WORD(scm__rc.d2149[70]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[375] = SCM_WORD(scm__rc.d2149[39]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[413] = SCM_WORD(scm__rc.d2149[64]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[418] = SCM_WORD(scm__rc.d2149[66]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[428] = SCM_WORD(scm__rc.d2149[71]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[434] = SCM_WORD(scm__rc.d2149[72]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[438] = SCM_WORD(scm__rc.d2149[74]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[451] = SCM_WORD(scm__rc.d2149[75]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[464] = SCM_WORD(scm__rc.d2149[76]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[482] = SCM_WORD(scm__rc.d2149[77]);
  scm__rc.d2149[85] = Scm_MakeIdentifier(scm__rc.d2149[30], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#sys-normalize-pathname */
  scm__rc.d2149[86] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* %toplevel */
  scm__rc.d2149[87] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1]))->debugInfo = scm__rc.d2149[87];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[492]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[492]))[6] = SCM_WORD(scm__rc.d2149[30]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[492]))[13] = SCM_WORD(scm__rc.d2149[85]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));

#line 140 "libsys.scm"
errno_n2y=(SCM_HASH_TABLE(Scm_MakeHashTableSimple(SCM_HASH_EQV,0)));

#line 141 "libsys.scm"
errno_y2n=(SCM_HASH_TABLE(Scm_MakeHashTableSimple(SCM_HASH_EQ,0)));
  scm__rc.d2149[88] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* sys-errno->symbol */
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* num */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[47]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[50]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[51]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[52]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[53]), scm__rc.d2149[3]);
  scm__rc.d2149[90] = Scm_MakeExtendedPair(scm__rc.d2149[88], SCM_OBJ(&scm__rc.d2150[47]), SCM_OBJ(&scm__rc.d2150[55]));
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* <fixnum> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[92]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[92]))[4] = scm__rc.d2149[91];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[92]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[92]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-errno->symbol")), SCM_OBJ(&libsyssys_errno_TOsymbol__STUB), 0);
  libsyssys_errno_TOsymbol__STUB.common.info = scm__rc.d2149[90];
  libsyssys_errno_TOsymbol__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[92]);
  scm__rc.d2149[99] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58])),TRUE); /* sys-symbol->errno */
  scm__rc.d2149[100] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[56]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[59]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[99]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[61]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[62]), scm__rc.d2149[3]);
  scm__rc.d2149[101] = Scm_MakeExtendedPair(scm__rc.d2149[99], SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[64]));
  scm__rc.d2149[102] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* <symbol> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[103]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[103]))[4] = scm__rc.d2149[102];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[103]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[103]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-symbol->errno")), SCM_OBJ(&libsyssys_symbol_TOerrno__STUB), 0);
  libsyssys_symbol_TOerrno__STUB.common.info = scm__rc.d2149[101];
  libsyssys_symbol_TOerrno__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[103]);
  scm__rc.d2149[110] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61])),TRUE); /* E2BIG */

#if defined(E2BIG)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[110]),SCM_MAKE_INT(E2BIG));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(E2BIG),scm__rc.d2149[110],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[110],SCM_MAKE_INT(E2BIG),0);}
#endif /* defined(E2BIG) */

  scm__rc.d2149[111] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* EACCES */

#if defined(EACCES)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[111]),SCM_MAKE_INT(EACCES));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EACCES),scm__rc.d2149[111],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[111],SCM_MAKE_INT(EACCES),0);}
#endif /* defined(EACCES) */

  scm__rc.d2149[112] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* EADDRINUSE */

#if defined(EADDRINUSE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[112]),SCM_MAKE_INT(EADDRINUSE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EADDRINUSE),scm__rc.d2149[112],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[112],SCM_MAKE_INT(EADDRINUSE),0);}
#endif /* defined(EADDRINUSE) */

  scm__rc.d2149[113] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64])),TRUE); /* EADDRNOTAVAIL */

#if defined(EADDRNOTAVAIL)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[113]),SCM_MAKE_INT(EADDRNOTAVAIL));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EADDRNOTAVAIL),scm__rc.d2149[113],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[113],SCM_MAKE_INT(EADDRNOTAVAIL),0);}
#endif /* defined(EADDRNOTAVAIL) */

  scm__rc.d2149[114] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* EADV */

#if defined(EADV)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[114]),SCM_MAKE_INT(EADV));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EADV),scm__rc.d2149[114],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[114],SCM_MAKE_INT(EADV),0);}
#endif /* defined(EADV) */

  scm__rc.d2149[115] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66])),TRUE); /* EAFNOSUPPORT */

#if defined(EAFNOSUPPORT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[115]),SCM_MAKE_INT(EAFNOSUPPORT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EAFNOSUPPORT),scm__rc.d2149[115],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[115],SCM_MAKE_INT(EAFNOSUPPORT),0);}
#endif /* defined(EAFNOSUPPORT) */

  scm__rc.d2149[116] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* EAGAIN */

#if defined(EAGAIN)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[116]),SCM_MAKE_INT(EAGAIN));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EAGAIN),scm__rc.d2149[116],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[116],SCM_MAKE_INT(EAGAIN),0);}
#endif /* defined(EAGAIN) */

  scm__rc.d2149[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* EALREADY */

#if defined(EALREADY)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[117]),SCM_MAKE_INT(EALREADY));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EALREADY),scm__rc.d2149[117],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[117],SCM_MAKE_INT(EALREADY),0);}
#endif /* defined(EALREADY) */

  scm__rc.d2149[118] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69])),TRUE); /* EBADE */

#if defined(EBADE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[118]),SCM_MAKE_INT(EBADE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EBADE),scm__rc.d2149[118],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[118],SCM_MAKE_INT(EBADE),0);}
#endif /* defined(EBADE) */

  scm__rc.d2149[119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70])),TRUE); /* EBADF */

#if defined(EBADF)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[119]),SCM_MAKE_INT(EBADF));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EBADF),scm__rc.d2149[119],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[119],SCM_MAKE_INT(EBADF),0);}
#endif /* defined(EBADF) */

  scm__rc.d2149[120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* EBADFD */

#if defined(EBADFD)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[120]),SCM_MAKE_INT(EBADFD));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EBADFD),scm__rc.d2149[120],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[120],SCM_MAKE_INT(EBADFD),0);}
#endif /* defined(EBADFD) */

  scm__rc.d2149[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* EBADMSG */

#if defined(EBADMSG)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[121]),SCM_MAKE_INT(EBADMSG));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EBADMSG),scm__rc.d2149[121],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[121],SCM_MAKE_INT(EBADMSG),0);}
#endif /* defined(EBADMSG) */

  scm__rc.d2149[122] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* EBADR */

#if defined(EBADR)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[122]),SCM_MAKE_INT(EBADR));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EBADR),scm__rc.d2149[122],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[122],SCM_MAKE_INT(EBADR),0);}
#endif /* defined(EBADR) */

  scm__rc.d2149[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* EBADRQC */

#if defined(EBADRQC)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[123]),SCM_MAKE_INT(EBADRQC));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EBADRQC),scm__rc.d2149[123],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[123],SCM_MAKE_INT(EBADRQC),0);}
#endif /* defined(EBADRQC) */

  scm__rc.d2149[124] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* EBADSLT */

#if defined(EBADSLT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[124]),SCM_MAKE_INT(EBADSLT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EBADSLT),scm__rc.d2149[124],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[124],SCM_MAKE_INT(EBADSLT),0);}
#endif /* defined(EBADSLT) */

  scm__rc.d2149[125] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* EBFONT */

#if defined(EBFONT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[125]),SCM_MAKE_INT(EBFONT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EBFONT),scm__rc.d2149[125],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[125],SCM_MAKE_INT(EBFONT),0);}
#endif /* defined(EBFONT) */

  scm__rc.d2149[126] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),TRUE); /* EBUSY */

#if defined(EBUSY)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[126]),SCM_MAKE_INT(EBUSY));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EBUSY),scm__rc.d2149[126],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[126],SCM_MAKE_INT(EBUSY),0);}
#endif /* defined(EBUSY) */

  scm__rc.d2149[127] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* ECANCELED */

#if defined(ECANCELED)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[127]),SCM_MAKE_INT(ECANCELED));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ECANCELED),scm__rc.d2149[127],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[127],SCM_MAKE_INT(ECANCELED),0);}
#endif /* defined(ECANCELED) */

  scm__rc.d2149[128] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* ECHILD */

#if defined(ECHILD)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[128]),SCM_MAKE_INT(ECHILD));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ECHILD),scm__rc.d2149[128],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[128],SCM_MAKE_INT(ECHILD),0);}
#endif /* defined(ECHILD) */

  scm__rc.d2149[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* ECHRNG */

#if defined(ECHRNG)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[129]),SCM_MAKE_INT(ECHRNG));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ECHRNG),scm__rc.d2149[129],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[129],SCM_MAKE_INT(ECHRNG),0);}
#endif /* defined(ECHRNG) */

  scm__rc.d2149[130] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* ECOMM */

#if defined(ECOMM)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[130]),SCM_MAKE_INT(ECOMM));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ECOMM),scm__rc.d2149[130],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[130],SCM_MAKE_INT(ECOMM),0);}
#endif /* defined(ECOMM) */

  scm__rc.d2149[131] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* ECONNABORTED */

#if defined(ECONNABORTED)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[131]),SCM_MAKE_INT(ECONNABORTED));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ECONNABORTED),scm__rc.d2149[131],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[131],SCM_MAKE_INT(ECONNABORTED),0);}
#endif /* defined(ECONNABORTED) */

  scm__rc.d2149[132] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* ECONNREFUSED */

#if defined(ECONNREFUSED)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[132]),SCM_MAKE_INT(ECONNREFUSED));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ECONNREFUSED),scm__rc.d2149[132],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[132],SCM_MAKE_INT(ECONNREFUSED),0);}
#endif /* defined(ECONNREFUSED) */

  scm__rc.d2149[133] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[84])),TRUE); /* ECONNRESET */

#if defined(ECONNRESET)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[133]),SCM_MAKE_INT(ECONNRESET));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ECONNRESET),scm__rc.d2149[133],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[133],SCM_MAKE_INT(ECONNRESET),0);}
#endif /* defined(ECONNRESET) */

  scm__rc.d2149[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),TRUE); /* EDEADLK */

#if defined(EDEADLK)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[134]),SCM_MAKE_INT(EDEADLK));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EDEADLK),scm__rc.d2149[134],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[134],SCM_MAKE_INT(EDEADLK),0);}
#endif /* defined(EDEADLK) */

  scm__rc.d2149[135] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[86])),TRUE); /* EDEADLOCK */

#if defined(EDEADLOCK)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[135]),SCM_MAKE_INT(EDEADLOCK));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EDEADLOCK),scm__rc.d2149[135],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[135],SCM_MAKE_INT(EDEADLOCK),0);}
#endif /* defined(EDEADLOCK) */

  scm__rc.d2149[136] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),TRUE); /* EDESTADDRREQ */

#if defined(EDESTADDRREQ)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[136]),SCM_MAKE_INT(EDESTADDRREQ));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EDESTADDRREQ),scm__rc.d2149[136],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[136],SCM_MAKE_INT(EDESTADDRREQ),0);}
#endif /* defined(EDESTADDRREQ) */

  scm__rc.d2149[137] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),TRUE); /* EDOM */

#if defined(EDOM)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[137]),SCM_MAKE_INT(EDOM));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EDOM),scm__rc.d2149[137],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[137],SCM_MAKE_INT(EDOM),0);}
#endif /* defined(EDOM) */

  scm__rc.d2149[138] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* EDOTDOT */

#if defined(EDOTDOT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[138]),SCM_MAKE_INT(EDOTDOT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EDOTDOT),scm__rc.d2149[138],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[138],SCM_MAKE_INT(EDOTDOT),0);}
#endif /* defined(EDOTDOT) */

  scm__rc.d2149[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* EDQUOT */

#if defined(EDQUOT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[139]),SCM_MAKE_INT(EDQUOT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EDQUOT),scm__rc.d2149[139],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[139],SCM_MAKE_INT(EDQUOT),0);}
#endif /* defined(EDQUOT) */

  scm__rc.d2149[140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),TRUE); /* EEXIST */

#if defined(EEXIST)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[140]),SCM_MAKE_INT(EEXIST));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EEXIST),scm__rc.d2149[140],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[140],SCM_MAKE_INT(EEXIST),0);}
#endif /* defined(EEXIST) */

  scm__rc.d2149[141] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* EFAULT */

#if defined(EFAULT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[141]),SCM_MAKE_INT(EFAULT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EFAULT),scm__rc.d2149[141],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[141],SCM_MAKE_INT(EFAULT),0);}
#endif /* defined(EFAULT) */

  scm__rc.d2149[142] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* EFBIG */

#if defined(EFBIG)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[142]),SCM_MAKE_INT(EFBIG));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EFBIG),scm__rc.d2149[142],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[142],SCM_MAKE_INT(EFBIG),0);}
#endif /* defined(EFBIG) */

  scm__rc.d2149[143] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),TRUE); /* EHOSTDOWN */

#if defined(EHOSTDOWN)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[143]),SCM_MAKE_INT(EHOSTDOWN));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EHOSTDOWN),scm__rc.d2149[143],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[143],SCM_MAKE_INT(EHOSTDOWN),0);}
#endif /* defined(EHOSTDOWN) */

  scm__rc.d2149[144] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* EHOSTUNREACH */

#if defined(EHOSTUNREACH)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[144]),SCM_MAKE_INT(EHOSTUNREACH));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EHOSTUNREACH),scm__rc.d2149[144],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[144],SCM_MAKE_INT(EHOSTUNREACH),0);}
#endif /* defined(EHOSTUNREACH) */

  scm__rc.d2149[145] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* EIDRM */

#if defined(EIDRM)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[145]),SCM_MAKE_INT(EIDRM));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EIDRM),scm__rc.d2149[145],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[145],SCM_MAKE_INT(EIDRM),0);}
#endif /* defined(EIDRM) */

  scm__rc.d2149[146] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* EILSEQ */

#if defined(EILSEQ)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[146]),SCM_MAKE_INT(EILSEQ));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EILSEQ),scm__rc.d2149[146],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[146],SCM_MAKE_INT(EILSEQ),0);}
#endif /* defined(EILSEQ) */

  scm__rc.d2149[147] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* EINPROGRESS */

#if defined(EINPROGRESS)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[147]),SCM_MAKE_INT(EINPROGRESS));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EINPROGRESS),scm__rc.d2149[147],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[147],SCM_MAKE_INT(EINPROGRESS),0);}
#endif /* defined(EINPROGRESS) */

  scm__rc.d2149[148] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* EINTR */

#if defined(EINTR)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[148]),SCM_MAKE_INT(EINTR));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EINTR),scm__rc.d2149[148],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[148],SCM_MAKE_INT(EINTR),0);}
#endif /* defined(EINTR) */

  scm__rc.d2149[149] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* EINVAL */

#if defined(EINVAL)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[149]),SCM_MAKE_INT(EINVAL));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EINVAL),scm__rc.d2149[149],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[149],SCM_MAKE_INT(EINVAL),0);}
#endif /* defined(EINVAL) */

  scm__rc.d2149[150] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* EIO */

#if defined(EIO)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[150]),SCM_MAKE_INT(EIO));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EIO),scm__rc.d2149[150],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[150],SCM_MAKE_INT(EIO),0);}
#endif /* defined(EIO) */

  scm__rc.d2149[151] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* EISCONN */

#if defined(EISCONN)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[151]),SCM_MAKE_INT(EISCONN));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EISCONN),scm__rc.d2149[151],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[151],SCM_MAKE_INT(EISCONN),0);}
#endif /* defined(EISCONN) */

  scm__rc.d2149[152] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* EISDIR */

#if defined(EISDIR)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[152]),SCM_MAKE_INT(EISDIR));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EISDIR),scm__rc.d2149[152],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[152],SCM_MAKE_INT(EISDIR),0);}
#endif /* defined(EISDIR) */

  scm__rc.d2149[153] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104])),TRUE); /* EISNAM */

#if defined(EISNAM)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[153]),SCM_MAKE_INT(EISNAM));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EISNAM),scm__rc.d2149[153],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[153],SCM_MAKE_INT(EISNAM),0);}
#endif /* defined(EISNAM) */

  scm__rc.d2149[154] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* EKEYEXPIRED */

#if defined(EKEYEXPIRED)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[154]),SCM_MAKE_INT(EKEYEXPIRED));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EKEYEXPIRED),scm__rc.d2149[154],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[154],SCM_MAKE_INT(EKEYEXPIRED),0);}
#endif /* defined(EKEYEXPIRED) */

  scm__rc.d2149[155] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[106])),TRUE); /* EKEYREJECTED */

#if defined(EKEYREJECTED)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[155]),SCM_MAKE_INT(EKEYREJECTED));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EKEYREJECTED),scm__rc.d2149[155],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[155],SCM_MAKE_INT(EKEYREJECTED),0);}
#endif /* defined(EKEYREJECTED) */

  scm__rc.d2149[156] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107])),TRUE); /* EKEYREVOKED */

#if defined(EKEYREVOKED)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[156]),SCM_MAKE_INT(EKEYREVOKED));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EKEYREVOKED),scm__rc.d2149[156],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[156],SCM_MAKE_INT(EKEYREVOKED),0);}
#endif /* defined(EKEYREVOKED) */

  scm__rc.d2149[157] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[108])),TRUE); /* EL2HLT */

#if defined(EL2HLT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[157]),SCM_MAKE_INT(EL2HLT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EL2HLT),scm__rc.d2149[157],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[157],SCM_MAKE_INT(EL2HLT),0);}
#endif /* defined(EL2HLT) */

  scm__rc.d2149[158] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[109])),TRUE); /* EL2NSYNC */

#if defined(EL2NSYNC)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[158]),SCM_MAKE_INT(EL2NSYNC));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EL2NSYNC),scm__rc.d2149[158],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[158],SCM_MAKE_INT(EL2NSYNC),0);}
#endif /* defined(EL2NSYNC) */

  scm__rc.d2149[159] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[110])),TRUE); /* EL3HLT */

#if defined(EL3HLT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[159]),SCM_MAKE_INT(EL3HLT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EL3HLT),scm__rc.d2149[159],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[159],SCM_MAKE_INT(EL3HLT),0);}
#endif /* defined(EL3HLT) */

  scm__rc.d2149[160] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[111])),TRUE); /* EL3RST */

#if defined(EL3RST)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[160]),SCM_MAKE_INT(EL3RST));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EL3RST),scm__rc.d2149[160],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[160],SCM_MAKE_INT(EL3RST),0);}
#endif /* defined(EL3RST) */

  scm__rc.d2149[161] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[112])),TRUE); /* ELIBACC */

#if defined(ELIBACC)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[161]),SCM_MAKE_INT(ELIBACC));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ELIBACC),scm__rc.d2149[161],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[161],SCM_MAKE_INT(ELIBACC),0);}
#endif /* defined(ELIBACC) */

  scm__rc.d2149[162] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[113])),TRUE); /* ELIBBAD */

#if defined(ELIBBAD)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[162]),SCM_MAKE_INT(ELIBBAD));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ELIBBAD),scm__rc.d2149[162],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[162],SCM_MAKE_INT(ELIBBAD),0);}
#endif /* defined(ELIBBAD) */

  scm__rc.d2149[163] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[114])),TRUE); /* ELIBEXEC */

#if defined(ELIBEXEC)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[163]),SCM_MAKE_INT(ELIBEXEC));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ELIBEXEC),scm__rc.d2149[163],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[163],SCM_MAKE_INT(ELIBEXEC),0);}
#endif /* defined(ELIBEXEC) */

  scm__rc.d2149[164] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[115])),TRUE); /* ELIBMAX */

#if defined(ELIBMAX)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[164]),SCM_MAKE_INT(ELIBMAX));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ELIBMAX),scm__rc.d2149[164],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[164],SCM_MAKE_INT(ELIBMAX),0);}
#endif /* defined(ELIBMAX) */

  scm__rc.d2149[165] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[116])),TRUE); /* ELIBSCN */

#if defined(ELIBSCN)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[165]),SCM_MAKE_INT(ELIBSCN));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ELIBSCN),scm__rc.d2149[165],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[165],SCM_MAKE_INT(ELIBSCN),0);}
#endif /* defined(ELIBSCN) */

  scm__rc.d2149[166] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[117])),TRUE); /* ELNRNG */

#if defined(ELNRNG)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[166]),SCM_MAKE_INT(ELNRNG));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ELNRNG),scm__rc.d2149[166],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[166],SCM_MAKE_INT(ELNRNG),0);}
#endif /* defined(ELNRNG) */

  scm__rc.d2149[167] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[118])),TRUE); /* ELOOP */

#if defined(ELOOP)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[167]),SCM_MAKE_INT(ELOOP));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ELOOP),scm__rc.d2149[167],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[167],SCM_MAKE_INT(ELOOP),0);}
#endif /* defined(ELOOP) */

  scm__rc.d2149[168] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[119])),TRUE); /* EMEDIUMTYPE */

#if defined(EMEDIUMTYPE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[168]),SCM_MAKE_INT(EMEDIUMTYPE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EMEDIUMTYPE),scm__rc.d2149[168],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[168],SCM_MAKE_INT(EMEDIUMTYPE),0);}
#endif /* defined(EMEDIUMTYPE) */

  scm__rc.d2149[169] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[120])),TRUE); /* EMFILE */

#if defined(EMFILE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[169]),SCM_MAKE_INT(EMFILE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EMFILE),scm__rc.d2149[169],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[169],SCM_MAKE_INT(EMFILE),0);}
#endif /* defined(EMFILE) */

  scm__rc.d2149[170] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[121])),TRUE); /* EMLINK */

#if defined(EMLINK)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[170]),SCM_MAKE_INT(EMLINK));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EMLINK),scm__rc.d2149[170],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[170],SCM_MAKE_INT(EMLINK),0);}
#endif /* defined(EMLINK) */

  scm__rc.d2149[171] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[122])),TRUE); /* EMSGSIZE */

#if defined(EMSGSIZE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[171]),SCM_MAKE_INT(EMSGSIZE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EMSGSIZE),scm__rc.d2149[171],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[171],SCM_MAKE_INT(EMSGSIZE),0);}
#endif /* defined(EMSGSIZE) */

  scm__rc.d2149[172] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[123])),TRUE); /* EMULTIHOP */

#if defined(EMULTIHOP)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[172]),SCM_MAKE_INT(EMULTIHOP));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EMULTIHOP),scm__rc.d2149[172],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[172],SCM_MAKE_INT(EMULTIHOP),0);}
#endif /* defined(EMULTIHOP) */

  scm__rc.d2149[173] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[124])),TRUE); /* ENAMETOOLONG */

#if defined(ENAMETOOLONG)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[173]),SCM_MAKE_INT(ENAMETOOLONG));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENAMETOOLONG),scm__rc.d2149[173],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[173],SCM_MAKE_INT(ENAMETOOLONG),0);}
#endif /* defined(ENAMETOOLONG) */

  scm__rc.d2149[174] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[125])),TRUE); /* ENAVAIL */

#if defined(ENAVAIL)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[174]),SCM_MAKE_INT(ENAVAIL));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENAVAIL),scm__rc.d2149[174],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[174],SCM_MAKE_INT(ENAVAIL),0);}
#endif /* defined(ENAVAIL) */

  scm__rc.d2149[175] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[126])),TRUE); /* ENETDOWN */

#if defined(ENETDOWN)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[175]),SCM_MAKE_INT(ENETDOWN));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENETDOWN),scm__rc.d2149[175],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[175],SCM_MAKE_INT(ENETDOWN),0);}
#endif /* defined(ENETDOWN) */

  scm__rc.d2149[176] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[127])),TRUE); /* ENETRESET */

#if defined(ENETRESET)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[176]),SCM_MAKE_INT(ENETRESET));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENETRESET),scm__rc.d2149[176],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[176],SCM_MAKE_INT(ENETRESET),0);}
#endif /* defined(ENETRESET) */

  scm__rc.d2149[177] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[128])),TRUE); /* ENETUNREACH */

#if defined(ENETUNREACH)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[177]),SCM_MAKE_INT(ENETUNREACH));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENETUNREACH),scm__rc.d2149[177],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[177],SCM_MAKE_INT(ENETUNREACH),0);}
#endif /* defined(ENETUNREACH) */

  scm__rc.d2149[178] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[129])),TRUE); /* ENFILE */

#if defined(ENFILE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[178]),SCM_MAKE_INT(ENFILE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENFILE),scm__rc.d2149[178],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[178],SCM_MAKE_INT(ENFILE),0);}
#endif /* defined(ENFILE) */

  scm__rc.d2149[179] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[130])),TRUE); /* ENOANO */

#if defined(ENOANO)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[179]),SCM_MAKE_INT(ENOANO));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOANO),scm__rc.d2149[179],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[179],SCM_MAKE_INT(ENOANO),0);}
#endif /* defined(ENOANO) */

  scm__rc.d2149[180] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[131])),TRUE); /* ENOBUFS */

#if defined(ENOBUFS)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[180]),SCM_MAKE_INT(ENOBUFS));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOBUFS),scm__rc.d2149[180],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[180],SCM_MAKE_INT(ENOBUFS),0);}
#endif /* defined(ENOBUFS) */

  scm__rc.d2149[181] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[132])),TRUE); /* ENOCSI */

#if defined(ENOCSI)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[181]),SCM_MAKE_INT(ENOCSI));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOCSI),scm__rc.d2149[181],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[181],SCM_MAKE_INT(ENOCSI),0);}
#endif /* defined(ENOCSI) */

  scm__rc.d2149[182] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[133])),TRUE); /* ENODATA */

#if defined(ENODATA)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[182]),SCM_MAKE_INT(ENODATA));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENODATA),scm__rc.d2149[182],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[182],SCM_MAKE_INT(ENODATA),0);}
#endif /* defined(ENODATA) */

  scm__rc.d2149[183] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[134])),TRUE); /* ENODEV */

#if defined(ENODEV)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[183]),SCM_MAKE_INT(ENODEV));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENODEV),scm__rc.d2149[183],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[183],SCM_MAKE_INT(ENODEV),0);}
#endif /* defined(ENODEV) */

  scm__rc.d2149[184] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[135])),TRUE); /* ENOENT */

#if defined(ENOENT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[184]),SCM_MAKE_INT(ENOENT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOENT),scm__rc.d2149[184],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[184],SCM_MAKE_INT(ENOENT),0);}
#endif /* defined(ENOENT) */

  scm__rc.d2149[185] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[136])),TRUE); /* ENOEXEC */

#if defined(ENOEXEC)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[185]),SCM_MAKE_INT(ENOEXEC));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOEXEC),scm__rc.d2149[185],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[185],SCM_MAKE_INT(ENOEXEC),0);}
#endif /* defined(ENOEXEC) */

  scm__rc.d2149[186] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[137])),TRUE); /* ENOKEY */

#if defined(ENOKEY)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[186]),SCM_MAKE_INT(ENOKEY));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOKEY),scm__rc.d2149[186],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[186],SCM_MAKE_INT(ENOKEY),0);}
#endif /* defined(ENOKEY) */

  scm__rc.d2149[187] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[138])),TRUE); /* ENOLCK */

#if defined(ENOLCK)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[187]),SCM_MAKE_INT(ENOLCK));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOLCK),scm__rc.d2149[187],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[187],SCM_MAKE_INT(ENOLCK),0);}
#endif /* defined(ENOLCK) */

  scm__rc.d2149[188] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[139])),TRUE); /* ENOLINK */

#if defined(ENOLINK)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[188]),SCM_MAKE_INT(ENOLINK));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOLINK),scm__rc.d2149[188],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[188],SCM_MAKE_INT(ENOLINK),0);}
#endif /* defined(ENOLINK) */

  scm__rc.d2149[189] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[140])),TRUE); /* ENOMEDIUM */

#if defined(ENOMEDIUM)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[189]),SCM_MAKE_INT(ENOMEDIUM));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOMEDIUM),scm__rc.d2149[189],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[189],SCM_MAKE_INT(ENOMEDIUM),0);}
#endif /* defined(ENOMEDIUM) */

  scm__rc.d2149[190] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[141])),TRUE); /* ENOMEM */

#if defined(ENOMEM)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[190]),SCM_MAKE_INT(ENOMEM));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOMEM),scm__rc.d2149[190],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[190],SCM_MAKE_INT(ENOMEM),0);}
#endif /* defined(ENOMEM) */

  scm__rc.d2149[191] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[142])),TRUE); /* ENOMSG */

#if defined(ENOMSG)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[191]),SCM_MAKE_INT(ENOMSG));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOMSG),scm__rc.d2149[191],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[191],SCM_MAKE_INT(ENOMSG),0);}
#endif /* defined(ENOMSG) */

  scm__rc.d2149[192] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[143])),TRUE); /* ENONET */

#if defined(ENONET)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[192]),SCM_MAKE_INT(ENONET));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENONET),scm__rc.d2149[192],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[192],SCM_MAKE_INT(ENONET),0);}
#endif /* defined(ENONET) */

  scm__rc.d2149[193] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[144])),TRUE); /* ENOPKG */

#if defined(ENOPKG)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[193]),SCM_MAKE_INT(ENOPKG));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOPKG),scm__rc.d2149[193],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[193],SCM_MAKE_INT(ENOPKG),0);}
#endif /* defined(ENOPKG) */

  scm__rc.d2149[194] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[145])),TRUE); /* ENOPROTOOPT */

#if defined(ENOPROTOOPT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[194]),SCM_MAKE_INT(ENOPROTOOPT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOPROTOOPT),scm__rc.d2149[194],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[194],SCM_MAKE_INT(ENOPROTOOPT),0);}
#endif /* defined(ENOPROTOOPT) */

  scm__rc.d2149[195] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[146])),TRUE); /* ENOSPC */

#if defined(ENOSPC)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[195]),SCM_MAKE_INT(ENOSPC));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOSPC),scm__rc.d2149[195],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[195],SCM_MAKE_INT(ENOSPC),0);}
#endif /* defined(ENOSPC) */

  scm__rc.d2149[196] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[147])),TRUE); /* ENOSR */

#if defined(ENOSR)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[196]),SCM_MAKE_INT(ENOSR));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOSR),scm__rc.d2149[196],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[196],SCM_MAKE_INT(ENOSR),0);}
#endif /* defined(ENOSR) */

  scm__rc.d2149[197] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[148])),TRUE); /* ENOSTR */

#if defined(ENOSTR)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[197]),SCM_MAKE_INT(ENOSTR));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOSTR),scm__rc.d2149[197],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[197],SCM_MAKE_INT(ENOSTR),0);}
#endif /* defined(ENOSTR) */

  scm__rc.d2149[198] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[149])),TRUE); /* ENOSYS */

#if defined(ENOSYS)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[198]),SCM_MAKE_INT(ENOSYS));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOSYS),scm__rc.d2149[198],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[198],SCM_MAKE_INT(ENOSYS),0);}
#endif /* defined(ENOSYS) */

  scm__rc.d2149[199] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[150])),TRUE); /* ENOTBLK */

#if defined(ENOTBLK)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[199]),SCM_MAKE_INT(ENOTBLK));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOTBLK),scm__rc.d2149[199],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[199],SCM_MAKE_INT(ENOTBLK),0);}
#endif /* defined(ENOTBLK) */

  scm__rc.d2149[200] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[151])),TRUE); /* ENOTCONN */

#if defined(ENOTCONN)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[200]),SCM_MAKE_INT(ENOTCONN));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOTCONN),scm__rc.d2149[200],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[200],SCM_MAKE_INT(ENOTCONN),0);}
#endif /* defined(ENOTCONN) */

  scm__rc.d2149[201] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[152])),TRUE); /* ENOTDIR */

#if defined(ENOTDIR)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[201]),SCM_MAKE_INT(ENOTDIR));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOTDIR),scm__rc.d2149[201],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[201],SCM_MAKE_INT(ENOTDIR),0);}
#endif /* defined(ENOTDIR) */

  scm__rc.d2149[202] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[153])),TRUE); /* ENOTEMPTY */

#if defined(ENOTEMPTY)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[202]),SCM_MAKE_INT(ENOTEMPTY));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOTEMPTY),scm__rc.d2149[202],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[202],SCM_MAKE_INT(ENOTEMPTY),0);}
#endif /* defined(ENOTEMPTY) */

  scm__rc.d2149[203] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[154])),TRUE); /* ENOTNAM */

#if defined(ENOTNAM)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[203]),SCM_MAKE_INT(ENOTNAM));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOTNAM),scm__rc.d2149[203],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[203],SCM_MAKE_INT(ENOTNAM),0);}
#endif /* defined(ENOTNAM) */

  scm__rc.d2149[204] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[155])),TRUE); /* ENOTSOCK */

#if defined(ENOTSOCK)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[204]),SCM_MAKE_INT(ENOTSOCK));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOTSOCK),scm__rc.d2149[204],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[204],SCM_MAKE_INT(ENOTSOCK),0);}
#endif /* defined(ENOTSOCK) */

  scm__rc.d2149[205] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[156])),TRUE); /* ENOTTY */

#if defined(ENOTTY)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[205]),SCM_MAKE_INT(ENOTTY));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOTTY),scm__rc.d2149[205],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[205],SCM_MAKE_INT(ENOTTY),0);}
#endif /* defined(ENOTTY) */

  scm__rc.d2149[206] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[157])),TRUE); /* ENOTUNIQ */

#if defined(ENOTUNIQ)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[206]),SCM_MAKE_INT(ENOTUNIQ));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENOTUNIQ),scm__rc.d2149[206],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[206],SCM_MAKE_INT(ENOTUNIQ),0);}
#endif /* defined(ENOTUNIQ) */

  scm__rc.d2149[207] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[158])),TRUE); /* ENXIO */

#if defined(ENXIO)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[207]),SCM_MAKE_INT(ENXIO));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ENXIO),scm__rc.d2149[207],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[207],SCM_MAKE_INT(ENXIO),0);}
#endif /* defined(ENXIO) */

  scm__rc.d2149[208] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[159])),TRUE); /* EOPNOTSUPP */

#if defined(EOPNOTSUPP)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[208]),SCM_MAKE_INT(EOPNOTSUPP));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EOPNOTSUPP),scm__rc.d2149[208],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[208],SCM_MAKE_INT(EOPNOTSUPP),0);}
#endif /* defined(EOPNOTSUPP) */

  scm__rc.d2149[209] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[160])),TRUE); /* EOVERFLOW */

#if defined(EOVERFLOW)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[209]),SCM_MAKE_INT(EOVERFLOW));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EOVERFLOW),scm__rc.d2149[209],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[209],SCM_MAKE_INT(EOVERFLOW),0);}
#endif /* defined(EOVERFLOW) */

  scm__rc.d2149[210] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[161])),TRUE); /* EPERM */

#if defined(EPERM)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[210]),SCM_MAKE_INT(EPERM));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EPERM),scm__rc.d2149[210],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[210],SCM_MAKE_INT(EPERM),0);}
#endif /* defined(EPERM) */

  scm__rc.d2149[211] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[162])),TRUE); /* EPFNOSUPPORT */

#if defined(EPFNOSUPPORT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[211]),SCM_MAKE_INT(EPFNOSUPPORT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EPFNOSUPPORT),scm__rc.d2149[211],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[211],SCM_MAKE_INT(EPFNOSUPPORT),0);}
#endif /* defined(EPFNOSUPPORT) */

  scm__rc.d2149[212] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[163])),TRUE); /* EPIPE */

#if defined(EPIPE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[212]),SCM_MAKE_INT(EPIPE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EPIPE),scm__rc.d2149[212],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[212],SCM_MAKE_INT(EPIPE),0);}
#endif /* defined(EPIPE) */

  scm__rc.d2149[213] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[164])),TRUE); /* EPROTO */

#if defined(EPROTO)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[213]),SCM_MAKE_INT(EPROTO));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EPROTO),scm__rc.d2149[213],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[213],SCM_MAKE_INT(EPROTO),0);}
#endif /* defined(EPROTO) */

  scm__rc.d2149[214] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[165])),TRUE); /* EPROTONOSUPPORT */

#if defined(EPROTONOSUPPORT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[214]),SCM_MAKE_INT(EPROTONOSUPPORT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EPROTONOSUPPORT),scm__rc.d2149[214],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[214],SCM_MAKE_INT(EPROTONOSUPPORT),0);}
#endif /* defined(EPROTONOSUPPORT) */

  scm__rc.d2149[215] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[166])),TRUE); /* EPROTOTYPE */

#if defined(EPROTOTYPE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[215]),SCM_MAKE_INT(EPROTOTYPE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EPROTOTYPE),scm__rc.d2149[215],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[215],SCM_MAKE_INT(EPROTOTYPE),0);}
#endif /* defined(EPROTOTYPE) */

  scm__rc.d2149[216] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[167])),TRUE); /* ERANGE */

#if defined(ERANGE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[216]),SCM_MAKE_INT(ERANGE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ERANGE),scm__rc.d2149[216],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[216],SCM_MAKE_INT(ERANGE),0);}
#endif /* defined(ERANGE) */

  scm__rc.d2149[217] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[168])),TRUE); /* EREMCHG */

#if defined(EREMCHG)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[217]),SCM_MAKE_INT(EREMCHG));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EREMCHG),scm__rc.d2149[217],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[217],SCM_MAKE_INT(EREMCHG),0);}
#endif /* defined(EREMCHG) */

  scm__rc.d2149[218] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[169])),TRUE); /* EREMOTE */

#if defined(EREMOTE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[218]),SCM_MAKE_INT(EREMOTE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EREMOTE),scm__rc.d2149[218],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[218],SCM_MAKE_INT(EREMOTE),0);}
#endif /* defined(EREMOTE) */

  scm__rc.d2149[219] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[170])),TRUE); /* EREMOTEIO */

#if defined(EREMOTEIO)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[219]),SCM_MAKE_INT(EREMOTEIO));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EREMOTEIO),scm__rc.d2149[219],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[219],SCM_MAKE_INT(EREMOTEIO),0);}
#endif /* defined(EREMOTEIO) */

  scm__rc.d2149[220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[171])),TRUE); /* ERESTART */

#if defined(ERESTART)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[220]),SCM_MAKE_INT(ERESTART));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ERESTART),scm__rc.d2149[220],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[220],SCM_MAKE_INT(ERESTART),0);}
#endif /* defined(ERESTART) */

  scm__rc.d2149[221] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[172])),TRUE); /* EROFS */

#if defined(EROFS)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[221]),SCM_MAKE_INT(EROFS));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EROFS),scm__rc.d2149[221],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[221],SCM_MAKE_INT(EROFS),0);}
#endif /* defined(EROFS) */

  scm__rc.d2149[222] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[173])),TRUE); /* ESHUTDOWN */

#if defined(ESHUTDOWN)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[222]),SCM_MAKE_INT(ESHUTDOWN));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ESHUTDOWN),scm__rc.d2149[222],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[222],SCM_MAKE_INT(ESHUTDOWN),0);}
#endif /* defined(ESHUTDOWN) */

  scm__rc.d2149[223] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[174])),TRUE); /* ESOCKTNOSUPPORT */

#if defined(ESOCKTNOSUPPORT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[223]),SCM_MAKE_INT(ESOCKTNOSUPPORT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ESOCKTNOSUPPORT),scm__rc.d2149[223],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[223],SCM_MAKE_INT(ESOCKTNOSUPPORT),0);}
#endif /* defined(ESOCKTNOSUPPORT) */

  scm__rc.d2149[224] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[175])),TRUE); /* ESPIPE */

#if defined(ESPIPE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[224]),SCM_MAKE_INT(ESPIPE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ESPIPE),scm__rc.d2149[224],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[224],SCM_MAKE_INT(ESPIPE),0);}
#endif /* defined(ESPIPE) */

  scm__rc.d2149[225] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[176])),TRUE); /* ESRCH */

#if defined(ESRCH)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[225]),SCM_MAKE_INT(ESRCH));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ESRCH),scm__rc.d2149[225],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[225],SCM_MAKE_INT(ESRCH),0);}
#endif /* defined(ESRCH) */

  scm__rc.d2149[226] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[177])),TRUE); /* ESRMNT */

#if defined(ESRMNT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[226]),SCM_MAKE_INT(ESRMNT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ESRMNT),scm__rc.d2149[226],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[226],SCM_MAKE_INT(ESRMNT),0);}
#endif /* defined(ESRMNT) */

  scm__rc.d2149[227] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[178])),TRUE); /* ESTALE */

#if defined(ESTALE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[227]),SCM_MAKE_INT(ESTALE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ESTALE),scm__rc.d2149[227],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[227],SCM_MAKE_INT(ESTALE),0);}
#endif /* defined(ESTALE) */

  scm__rc.d2149[228] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[179])),TRUE); /* ESTRPIPE */

#if defined(ESTRPIPE)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[228]),SCM_MAKE_INT(ESTRPIPE));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ESTRPIPE),scm__rc.d2149[228],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[228],SCM_MAKE_INT(ESTRPIPE),0);}
#endif /* defined(ESTRPIPE) */

  scm__rc.d2149[229] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[180])),TRUE); /* ETIME */

#if defined(ETIME)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[229]),SCM_MAKE_INT(ETIME));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ETIME),scm__rc.d2149[229],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[229],SCM_MAKE_INT(ETIME),0);}
#endif /* defined(ETIME) */

  scm__rc.d2149[230] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[181])),TRUE); /* ETIMEDOUT */

#if defined(ETIMEDOUT)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[230]),SCM_MAKE_INT(ETIMEDOUT));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ETIMEDOUT),scm__rc.d2149[230],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[230],SCM_MAKE_INT(ETIMEDOUT),0);}
#endif /* defined(ETIMEDOUT) */

  scm__rc.d2149[231] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[182])),TRUE); /* ETOOMANYREFS */

#if defined(ETOOMANYREFS)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[231]),SCM_MAKE_INT(ETOOMANYREFS));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ETOOMANYREFS),scm__rc.d2149[231],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[231],SCM_MAKE_INT(ETOOMANYREFS),0);}
#endif /* defined(ETOOMANYREFS) */

  scm__rc.d2149[232] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[183])),TRUE); /* ETXTBSY */

#if defined(ETXTBSY)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[232]),SCM_MAKE_INT(ETXTBSY));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(ETXTBSY),scm__rc.d2149[232],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[232],SCM_MAKE_INT(ETXTBSY),0);}
#endif /* defined(ETXTBSY) */

  scm__rc.d2149[233] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[184])),TRUE); /* EUCLEAN */

#if defined(EUCLEAN)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[233]),SCM_MAKE_INT(EUCLEAN));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EUCLEAN),scm__rc.d2149[233],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[233],SCM_MAKE_INT(EUCLEAN),0);}
#endif /* defined(EUCLEAN) */

  scm__rc.d2149[234] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[185])),TRUE); /* EUNATCH */

#if defined(EUNATCH)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[234]),SCM_MAKE_INT(EUNATCH));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EUNATCH),scm__rc.d2149[234],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[234],SCM_MAKE_INT(EUNATCH),0);}
#endif /* defined(EUNATCH) */

  scm__rc.d2149[235] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[186])),TRUE); /* EUSERS */

#if defined(EUSERS)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[235]),SCM_MAKE_INT(EUSERS));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EUSERS),scm__rc.d2149[235],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[235],SCM_MAKE_INT(EUSERS),0);}
#endif /* defined(EUSERS) */

  scm__rc.d2149[236] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[187])),TRUE); /* EWOULDBLOCK */

#if defined(EWOULDBLOCK)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[236]),SCM_MAKE_INT(EWOULDBLOCK));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EWOULDBLOCK),scm__rc.d2149[236],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[236],SCM_MAKE_INT(EWOULDBLOCK),0);}
#endif /* defined(EWOULDBLOCK) */

  scm__rc.d2149[237] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[188])),TRUE); /* EXDEV */

#if defined(EXDEV)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[237]),SCM_MAKE_INT(EXDEV));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EXDEV),scm__rc.d2149[237],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[237],SCM_MAKE_INT(EXDEV),0);}
#endif /* defined(EXDEV) */

  scm__rc.d2149[238] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[189])),TRUE); /* EXFULL */

#if defined(EXFULL)
{Scm_Define(Scm_GaucheModule(),SCM_SYMBOL(scm__rc.d2149[238]),SCM_MAKE_INT(EXFULL));Scm_HashTableSet(errno_n2y,SCM_MAKE_INT(EXFULL),scm__rc.d2149[238],0);Scm_HashTableSet(errno_y2n,scm__rc.d2149[238],SCM_MAKE_INT(EXFULL),0);}
#endif /* defined(EXFULL) */

  scm__rc.d2149[239] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[190])),TRUE); /* sys-getgrgid */
  scm__rc.d2149[240] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[191])),TRUE); /* gid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[65]), scm__rc.d2149[240]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[68]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[69]), scm__rc.d2149[239]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[70]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[71]), scm__rc.d2149[3]);
  scm__rc.d2149[241] = Scm_MakeExtendedPair(scm__rc.d2149[239], SCM_OBJ(&scm__rc.d2150[65]), SCM_OBJ(&scm__rc.d2150[73]));
  scm__rc.d2149[242] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[192])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[4] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getgrgid")), SCM_OBJ(&libsyssys_getgrgid__STUB), 0);
  libsyssys_getgrgid__STUB.common.info = scm__rc.d2149[241];
  libsyssys_getgrgid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
  scm__rc.d2149[250] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[193])),TRUE); /* sys-getgrnam */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[76]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[250]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[79]), scm__rc.d2149[3]);
  scm__rc.d2149[251] = Scm_MakeExtendedPair(scm__rc.d2149[250], SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[81]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getgrnam")), SCM_OBJ(&libsyssys_getgrnam__STUB), 0);
  libsyssys_getgrnam__STUB.common.info = scm__rc.d2149[251];
  libsyssys_getgrnam__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[252] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[194])),TRUE); /* sys-gid->group-name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[84]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[85]), scm__rc.d2149[252]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[86]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[87]), scm__rc.d2149[3]);
  scm__rc.d2149[253] = Scm_MakeExtendedPair(scm__rc.d2149[252], SCM_OBJ(&scm__rc.d2150[65]), SCM_OBJ(&scm__rc.d2150[89]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-gid->group-name")), SCM_OBJ(&libsyssys_gid_TOgroup_name__STUB), 0);
  libsyssys_gid_TOgroup_name__STUB.common.info = scm__rc.d2149[253];
  libsyssys_gid_TOgroup_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
  scm__rc.d2149[254] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[195])),TRUE); /* sys-group-name->gid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[92]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[93]), scm__rc.d2149[254]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[94]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[95]), scm__rc.d2149[3]);
  scm__rc.d2149[255] = Scm_MakeExtendedPair(scm__rc.d2149[254], SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[97]));
  scm__rc.d2149[256] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[196])),TRUE); /* <const-cstring> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-group-name->gid")), SCM_OBJ(&libsyssys_group_name_TOgid__STUB), 0);
  libsyssys_group_name_TOgid__STUB.common.info = scm__rc.d2149[255];
  libsyssys_group_name_TOgid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[257]);
  scm__rc.d2149[264] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[197])),TRUE); /* LC_ALL */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[264]), Scm_MakeInteger(LC_ALL), SCM_BINDING_CONST);

  scm__rc.d2149[265] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[198])),TRUE); /* LC_COLLATE */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[265]), Scm_MakeInteger(LC_COLLATE), SCM_BINDING_CONST);

  scm__rc.d2149[266] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[199])),TRUE); /* LC_CTYPE */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[266]), Scm_MakeInteger(LC_CTYPE), SCM_BINDING_CONST);

  scm__rc.d2149[267] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[200])),TRUE); /* LC_MONETARY */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[267]), Scm_MakeInteger(LC_MONETARY), SCM_BINDING_CONST);

  scm__rc.d2149[268] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[201])),TRUE); /* LC_NUMERIC */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[268]), Scm_MakeInteger(LC_NUMERIC), SCM_BINDING_CONST);

  scm__rc.d2149[269] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[202])),TRUE); /* LC_TIME */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[269]), Scm_MakeInteger(LC_TIME), SCM_BINDING_CONST);

  scm__rc.d2149[270] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[203])),TRUE); /* sys-setlocale */
  scm__rc.d2149[271] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[204])),TRUE); /* category */
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[205])),TRUE); /* locale */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[272]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[271]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[102]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[270]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[104]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[105]), scm__rc.d2149[3]);
  scm__rc.d2149[273] = Scm_MakeExtendedPair(scm__rc.d2149[270], SCM_OBJ(&scm__rc.d2150[99]), SCM_OBJ(&scm__rc.d2150[107]));
  scm__rc.d2149[274] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[206])),TRUE); /* <const-cstring>? */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[4] = scm__rc.d2149[91];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[5] = scm__rc.d2149[274];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[275]))[7] = scm__rc.d2149[274];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-setlocale")), SCM_OBJ(&libsyssys_setlocale__STUB), 0);
  libsyssys_setlocale__STUB.common.info = scm__rc.d2149[273];
  libsyssys_setlocale__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[275]);
  scm__rc.d2149[283] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[208])),TRUE); /* decimal_point */
  scm__rc.d2149[284] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[209])),TRUE); /* thousands_sep */
  scm__rc.d2149[285] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[210])),TRUE); /* grouping */
  scm__rc.d2149[286] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[211])),TRUE); /* int_curr_symbol */
  scm__rc.d2149[287] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[212])),TRUE); /* currency_symbol */
  scm__rc.d2149[288] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[213])),TRUE); /* mon_decimal_point */
  scm__rc.d2149[289] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[214])),TRUE); /* mon_thousands_sep */
  scm__rc.d2149[290] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[215])),TRUE); /* mon_grouping */
  scm__rc.d2149[291] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[216])),TRUE); /* positive_sign */
  scm__rc.d2149[292] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[217])),TRUE); /* negative_sign */
  scm__rc.d2149[293] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[218])),TRUE); /* int_frac_digits */
  scm__rc.d2149[294] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[219])),TRUE); /* frac_digits */
  scm__rc.d2149[295] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[220])),TRUE); /* p_cs_precedes */
  scm__rc.d2149[296] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[221])),TRUE); /* p_sep_by_space */
  scm__rc.d2149[297] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[222])),TRUE); /* n_cs_precedes */
  scm__rc.d2149[298] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[223])),TRUE); /* n_sep_by_space */
  scm__rc.d2149[299] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[224])),TRUE); /* p_sign_posn */
  scm__rc.d2149[300] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[225])),TRUE); /* n_sign_posn */
  scm__rc.d2149[301] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[207])),TRUE); /* sys-localeconv */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[108]), scm__rc.d2149[301]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[109]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[3]);
  scm__rc.d2149[302] = Scm_MakeExtendedPair(scm__rc.d2149[301], SCM_NIL, SCM_OBJ(&scm__rc.d2150[111]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-localeconv")), SCM_OBJ(&libsyssys_localeconv__STUB), 0);
  libsyssys_localeconv__STUB.common.info = scm__rc.d2149[302];
  libsyssys_localeconv__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[303] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[226])),TRUE); /* uid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[112]), scm__rc.d2149[303]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[116]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[117]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[118]), scm__rc.d2149[3]);
  scm__rc.d2149[304] = Scm_MakeExtendedPair(scm__rc.d2149[48], SCM_OBJ(&scm__rc.d2150[112]), SCM_OBJ(&scm__rc.d2150[120]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getpwuid")), SCM_OBJ(&libsyssys_getpwuid__STUB), 0);
  libsyssys_getpwuid__STUB.common.info = scm__rc.d2149[304];
  libsyssys_getpwuid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[123]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[124]), scm__rc.d2149[55]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[125]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[126]), scm__rc.d2149[3]);
  scm__rc.d2149[305] = Scm_MakeExtendedPair(scm__rc.d2149[55], SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[128]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getpwnam")), SCM_OBJ(&libsyssys_getpwnam__STUB), 0);
  libsyssys_getpwnam__STUB.common.info = scm__rc.d2149[305];
  libsyssys_getpwnam__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[306] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[227])),TRUE); /* sys-uid->user-name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[131]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[132]), scm__rc.d2149[306]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[133]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[134]), scm__rc.d2149[3]);
  scm__rc.d2149[307] = Scm_MakeExtendedPair(scm__rc.d2149[306], SCM_OBJ(&scm__rc.d2150[112]), SCM_OBJ(&scm__rc.d2150[136]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-uid->user-name")), SCM_OBJ(&libsyssys_uid_TOuser_name__STUB), 0);
  libsyssys_uid_TOuser_name__STUB.common.info = scm__rc.d2149[307];
  libsyssys_uid_TOuser_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
  scm__rc.d2149[308] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[228])),TRUE); /* sys-user-name->uid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[139]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[140]), scm__rc.d2149[308]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[142]), scm__rc.d2149[3]);
  scm__rc.d2149[309] = Scm_MakeExtendedPair(scm__rc.d2149[308], SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[144]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-user-name->uid")), SCM_OBJ(&libsyssys_user_name_TOuid__STUB), 0);
  libsyssys_user_name_TOuid__STUB.common.info = scm__rc.d2149[309];
  libsyssys_user_name_TOuid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[257]);
  scm__rc.d2149[310] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[229])),TRUE); /* SIG_SETMASK */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[310]), Scm_MakeInteger(SIG_SETMASK), SCM_BINDING_CONST);

  scm__rc.d2149[311] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[230])),TRUE); /* SIG_BLOCK */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[311]), Scm_MakeInteger(SIG_BLOCK), SCM_BINDING_CONST);

  scm__rc.d2149[312] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[231])),TRUE); /* SIG_UNBLOCK */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[312]), Scm_MakeInteger(SIG_UNBLOCK), SCM_BINDING_CONST);

  scm__rc.d2149[313] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[232])),TRUE); /* sys-sigset-add! */
  scm__rc.d2149[314] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[233])),TRUE); /* set */
  scm__rc.d2149[315] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[234]))); /* :rest */
  scm__rc.d2149[316] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[235])),TRUE); /* sigs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[145]), scm__rc.d2149[316]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[146]), scm__rc.d2149[315]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[147]), scm__rc.d2149[314]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[150]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[151]), scm__rc.d2149[313]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[152]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[153]), scm__rc.d2149[3]);
  scm__rc.d2149[317] = Scm_MakeExtendedPair(scm__rc.d2149[313], SCM_OBJ(&scm__rc.d2150[147]), SCM_OBJ(&scm__rc.d2150[155]));
  scm__rc.d2149[318] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[236])),TRUE); /* <sys-sigset> */
  scm__rc.d2149[319] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[237])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[320]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[320]))[4] = scm__rc.d2149[318];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[320]))[5] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[320]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[320]))[7] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-sigset-add!")), SCM_OBJ(&libsyssys_sigset_addX__STUB), 0);
  libsyssys_sigset_addX__STUB.common.info = scm__rc.d2149[317];
  libsyssys_sigset_addX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[320]);
  scm__rc.d2149[328] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[238])),TRUE); /* sys-sigset-delete! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[158]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[159]), scm__rc.d2149[328]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[160]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[161]), scm__rc.d2149[3]);
  scm__rc.d2149[329] = Scm_MakeExtendedPair(scm__rc.d2149[328], SCM_OBJ(&scm__rc.d2150[147]), SCM_OBJ(&scm__rc.d2150[163]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-sigset-delete!")), SCM_OBJ(&libsyssys_sigset_deleteX__STUB), 0);
  libsyssys_sigset_deleteX__STUB.common.info = scm__rc.d2149[329];
  libsyssys_sigset_deleteX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[320]);
  scm__rc.d2149[330] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[239])),TRUE); /* sys-sigset-fill! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[164]), scm__rc.d2149[314]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[167]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[330]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[169]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[170]), scm__rc.d2149[3]);
  scm__rc.d2149[331] = Scm_MakeExtendedPair(scm__rc.d2149[330], SCM_OBJ(&scm__rc.d2150[164]), SCM_OBJ(&scm__rc.d2150[172]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[332]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[332]))[4] = scm__rc.d2149[318];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[332]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[332]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-sigset-fill!")), SCM_OBJ(&libsyssys_sigset_fillX__STUB), 0);
  libsyssys_sigset_fillX__STUB.common.info = scm__rc.d2149[331];
  libsyssys_sigset_fillX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[332]);
  scm__rc.d2149[339] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[240])),TRUE); /* sys-sigset-empty! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[175]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[176]), scm__rc.d2149[339]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[177]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[178]), scm__rc.d2149[3]);
  scm__rc.d2149[340] = Scm_MakeExtendedPair(scm__rc.d2149[339], SCM_OBJ(&scm__rc.d2150[164]), SCM_OBJ(&scm__rc.d2150[180]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-sigset-empty!")), SCM_OBJ(&libsyssys_sigset_emptyX__STUB), 0);
  libsyssys_sigset_emptyX__STUB.common.info = scm__rc.d2149[340];
  libsyssys_sigset_emptyX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[332]);
  scm__rc.d2149[341] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[241])),TRUE); /* sys-signal-name */
  scm__rc.d2149[342] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[242])),TRUE); /* sig */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[181]), scm__rc.d2149[342]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[184]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[185]), scm__rc.d2149[341]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[186]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[187]), scm__rc.d2149[3]);
  scm__rc.d2149[343] = Scm_MakeExtendedPair(scm__rc.d2149[341], SCM_OBJ(&scm__rc.d2150[181]), SCM_OBJ(&scm__rc.d2150[189]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-signal-name")), SCM_OBJ(&libsyssys_signal_name__STUB), 0);
  libsyssys_signal_name__STUB.common.info = scm__rc.d2149[343];
  libsyssys_signal_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[92]);
  scm__rc.d2149[344] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[243])),TRUE); /* sys-kill */
  scm__rc.d2149[345] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[244])),TRUE); /* process */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[190]), scm__rc.d2149[345]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[193]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[194]), scm__rc.d2149[344]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[195]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[196]), scm__rc.d2149[3]);
  scm__rc.d2149[346] = Scm_MakeExtendedPair(scm__rc.d2149[344], SCM_OBJ(&scm__rc.d2150[190]), SCM_OBJ(&scm__rc.d2150[198]));
  scm__rc.d2149[347] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[245])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[348]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[348]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[348]))[5] = scm__rc.d2149[91];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[348]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[348]))[7] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-kill")), SCM_OBJ(&libsyssys_kill__STUB), 0);
  libsyssys_kill__STUB.common.info = scm__rc.d2149[346];
  libsyssys_kill__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[348]);
  scm__rc.d2149[356] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[246])),TRUE); /* set-signal-handler! */
  scm__rc.d2149[357] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[247])),TRUE); /* proc */
  scm__rc.d2149[358] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[248]))); /* :optional */
  scm__rc.d2149[359] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[249])),TRUE); /* mask */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[199]), scm__rc.d2149[359]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[200]), scm__rc.d2149[358]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[201]), scm__rc.d2149[357]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[202]), scm__rc.d2149[342]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[205]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[206]), scm__rc.d2149[356]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[207]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[208]), scm__rc.d2149[3]);
  scm__rc.d2149[360] = Scm_MakeExtendedPair(scm__rc.d2149[356], SCM_OBJ(&scm__rc.d2150[202]), SCM_OBJ(&scm__rc.d2150[210]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[361]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[361]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[361]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[361]))[6] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[361]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[361]))[8] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("set-signal-handler!")), SCM_OBJ(&libsysset_signal_handlerX__STUB), 0);
  libsysset_signal_handlerX__STUB.common.info = scm__rc.d2149[360];
  libsysset_signal_handlerX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[361]);
  scm__rc.d2149[370] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[250])),TRUE); /* get-signal-handler */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[213]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[214]), scm__rc.d2149[370]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[215]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[216]), scm__rc.d2149[3]);
  scm__rc.d2149[371] = Scm_MakeExtendedPair(scm__rc.d2149[370], SCM_OBJ(&scm__rc.d2150[181]), SCM_OBJ(&scm__rc.d2150[218]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("get-signal-handler")), SCM_OBJ(&libsysget_signal_handler__STUB), 0);
  libsysget_signal_handler__STUB.common.info = scm__rc.d2149[371];
  libsysget_signal_handler__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[92]);
  scm__rc.d2149[372] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[251])),TRUE); /* get-signal-handler-mask */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[221]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[222]), scm__rc.d2149[372]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[223]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[224]), scm__rc.d2149[3]);
  scm__rc.d2149[373] = Scm_MakeExtendedPair(scm__rc.d2149[372], SCM_OBJ(&scm__rc.d2150[181]), SCM_OBJ(&scm__rc.d2150[226]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("get-signal-handler-mask")), SCM_OBJ(&libsysget_signal_handler_mask__STUB), 0);
  libsysget_signal_handler_mask__STUB.common.info = scm__rc.d2149[373];
  libsysget_signal_handler_mask__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[92]);
  scm__rc.d2149[374] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[252])),TRUE); /* get-signal-handlers */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[227]), scm__rc.d2149[374]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[228]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[229]), scm__rc.d2149[3]);
  scm__rc.d2149[375] = Scm_MakeExtendedPair(scm__rc.d2149[374], SCM_NIL, SCM_OBJ(&scm__rc.d2150[230]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("get-signal-handlers")), SCM_OBJ(&libsysget_signal_handlers__STUB), 0);
  libsysget_signal_handlers__STUB.common.info = scm__rc.d2149[375];
  libsysget_signal_handlers__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[376] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[253])),TRUE); /* set-signal-pending-limit */
  scm__rc.d2149[377] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[254])),TRUE); /* limit */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[231]), scm__rc.d2149[377]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[234]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[376]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[236]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[237]), scm__rc.d2149[3]);
  scm__rc.d2149[378] = Scm_MakeExtendedPair(scm__rc.d2149[376], SCM_OBJ(&scm__rc.d2150[231]), SCM_OBJ(&scm__rc.d2150[239]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[379]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[379]))[4] = scm__rc.d2149[91];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[379]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[379]))[6] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("set-signal-pending-limit")), SCM_OBJ(&libsysset_signal_pending_limit__STUB), 0);
  libsysset_signal_pending_limit__STUB.common.info = scm__rc.d2149[378];
  libsysset_signal_pending_limit__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[379]);
  scm__rc.d2149[386] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[255])),TRUE); /* get-signal-pending-limit */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[240]), scm__rc.d2149[386]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[241]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[242]), scm__rc.d2149[3]);
  scm__rc.d2149[387] = Scm_MakeExtendedPair(scm__rc.d2149[386], SCM_NIL, SCM_OBJ(&scm__rc.d2150[243]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[388]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[388]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[388]))[5] = scm__rc.d2149[242];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("get-signal-pending-limit")), SCM_OBJ(&libsysget_signal_pending_limit__STUB), 0);
  libsysget_signal_pending_limit__STUB.common.info = scm__rc.d2149[387];
  libsysget_signal_pending_limit__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
  scm__rc.d2149[394] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[256])),TRUE); /* sys-sigmask */
  scm__rc.d2149[395] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[257])),TRUE); /* how */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[244]), scm__rc.d2149[395]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[247]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[248]), scm__rc.d2149[394]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[249]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[250]), scm__rc.d2149[3]);
  scm__rc.d2149[396] = Scm_MakeExtendedPair(scm__rc.d2149[394], SCM_OBJ(&scm__rc.d2150[244]), SCM_OBJ(&scm__rc.d2150[252]));
  scm__rc.d2149[397] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[258])),TRUE); /* <sys-sigset>? */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[4] = scm__rc.d2149[91];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[5] = scm__rc.d2149[397];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[398]))[7] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-sigmask")), SCM_OBJ(&libsyssys_sigmask__STUB), 0);
  libsyssys_sigmask__STUB.common.info = scm__rc.d2149[396];
  libsyssys_sigmask__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[398]);
  scm__rc.d2149[406] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[259])),TRUE); /* sys-sigsuspend */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[255]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[256]), scm__rc.d2149[406]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[257]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[258]), scm__rc.d2149[3]);
  scm__rc.d2149[407] = Scm_MakeExtendedPair(scm__rc.d2149[406], SCM_OBJ(&scm__rc.d2150[199]), SCM_OBJ(&scm__rc.d2150[260]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-sigsuspend")), SCM_OBJ(&libsyssys_sigsuspend__STUB), 0);
  libsyssys_sigsuspend__STUB.common.info = scm__rc.d2149[407];
  libsyssys_sigsuspend__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[332]);
  scm__rc.d2149[408] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[260])),TRUE); /* sys-sigwait */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[263]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[264]), scm__rc.d2149[408]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[265]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[266]), scm__rc.d2149[3]);
  scm__rc.d2149[409] = Scm_MakeExtendedPair(scm__rc.d2149[408], SCM_OBJ(&scm__rc.d2150[199]), SCM_OBJ(&scm__rc.d2150[268]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[4] = scm__rc.d2149[318];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[410]))[6] = scm__rc.d2149[242];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-sigwait")), SCM_OBJ(&libsyssys_sigwait__STUB), 0);
  libsyssys_sigwait__STUB.common.info = scm__rc.d2149[409];
  libsyssys_sigwait__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[410]);
  scm__rc.d2149[417] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[261])),TRUE); /* sys-sigset */
  scm__rc.d2149[419] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[4]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[418] = Scm_MakeIdentifier(scm__rc.d2149[318], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#<sys-sigset> */
  scm__rc.d2149[421] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[262])),TRUE); /* make */
  scm__rc.d2149[420] = Scm_MakeIdentifier(scm__rc.d2149[421], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#make */
  scm__rc.d2149[422] = Scm_MakeIdentifier(scm__rc.d2149[313], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-sigset-add! */
  scm__rc.d2149[423] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[263])),TRUE); /* signals */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[271]), scm__rc.d2149[2]);
  scm__rc.d2149[424] = Scm_MakeExtendedPair(scm__rc.d2149[417], scm__rc.d2149[423], SCM_OBJ(&scm__rc.d2150[272]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[273]), scm__rc.d2149[424]);
  scm__rc.d2149[425] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[2]))->name = scm__rc.d2149[417];/* sys-sigset */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[2]))->debugInfo = scm__rc.d2149[425];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[507]))[4] = SCM_WORD(scm__rc.d2149[418]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[507]))[6] = SCM_WORD(scm__rc.d2149[420]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[507]))[9] = SCM_WORD(scm__rc.d2149[422]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[507]))[13] = SCM_WORD(scm__rc.d2149[418]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[507]))[15] = SCM_WORD(scm__rc.d2149[420]);
  scm__rc.d2149[426] = Scm_MakeIdentifier(scm__rc.d2149[417], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-sigset */
  scm__rc.d2149[427] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3]))->debugInfo = scm__rc.d2149[427];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[527]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[527]))[6] = SCM_WORD(scm__rc.d2149[417]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[527]))[13] = SCM_WORD(scm__rc.d2149[426]);
  scm__rc.d2149[428] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[264])),TRUE); /* sys-remove */
  scm__rc.d2149[429] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[265])),TRUE); /* filename */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[274]), scm__rc.d2149[429]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[277]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[278]), scm__rc.d2149[428]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[279]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[280]), scm__rc.d2149[3]);
  scm__rc.d2149[430] = Scm_MakeExtendedPair(scm__rc.d2149[428], SCM_OBJ(&scm__rc.d2150[274]), SCM_OBJ(&scm__rc.d2150[282]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[431]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[431]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[431]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[431]))[6] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-remove")), SCM_OBJ(&libsyssys_remove__STUB), 0);
  libsyssys_remove__STUB.common.info = scm__rc.d2149[430];
  libsyssys_remove__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[431]);
  scm__rc.d2149[438] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[266])),TRUE); /* sys-rename */
  scm__rc.d2149[439] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[267])),TRUE); /* oldname */
  scm__rc.d2149[440] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[268])),TRUE); /* newname */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[283]), scm__rc.d2149[440]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[284]), scm__rc.d2149[439]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[287]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[288]), scm__rc.d2149[438]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[289]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[290]), scm__rc.d2149[3]);
  scm__rc.d2149[441] = Scm_MakeExtendedPair(scm__rc.d2149[438], SCM_OBJ(&scm__rc.d2150[284]), SCM_OBJ(&scm__rc.d2150[292]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[442]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[442]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[442]))[5] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[442]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[442]))[7] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-rename")), SCM_OBJ(&libsyssys_rename__STUB), 0);
  libsyssys_rename__STUB.common.info = scm__rc.d2149[441];
  libsyssys_rename__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[442]);
  scm__rc.d2149[450] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[269])),TRUE); /* sys-tmpnam */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[293]), scm__rc.d2149[450]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[294]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[295]), scm__rc.d2149[3]);
  scm__rc.d2149[451] = Scm_MakeExtendedPair(scm__rc.d2149[450], SCM_NIL, SCM_OBJ(&scm__rc.d2150[296]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-tmpnam")), SCM_OBJ(&libsyssys_tmpnam__STUB), 0);
  libsyssys_tmpnam__STUB.common.info = scm__rc.d2149[451];
  libsyssys_tmpnam__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[452] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[270])),TRUE); /* sys-mkstemp */
  scm__rc.d2149[453] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[271])),TRUE); /* template */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[297]), scm__rc.d2149[453]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[300]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[301]), scm__rc.d2149[452]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[302]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[303]), scm__rc.d2149[3]);
  scm__rc.d2149[454] = Scm_MakeExtendedPair(scm__rc.d2149[452], SCM_OBJ(&scm__rc.d2150[297]), SCM_OBJ(&scm__rc.d2150[305]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-mkstemp")), SCM_OBJ(&libsyssys_mkstemp__STUB), 0);
  libsyssys_mkstemp__STUB.common.info = scm__rc.d2149[454];
  libsyssys_mkstemp__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[455] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[272])),TRUE); /* sys-mkdtemp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[308]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[309]), scm__rc.d2149[455]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[310]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[311]), scm__rc.d2149[3]);
  scm__rc.d2149[456] = Scm_MakeExtendedPair(scm__rc.d2149[455], SCM_OBJ(&scm__rc.d2150[297]), SCM_OBJ(&scm__rc.d2150[313]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-mkdtemp")), SCM_OBJ(&libsyssys_mkdtemp__STUB), 0);
  libsyssys_mkdtemp__STUB.common.info = scm__rc.d2149[456];
  libsyssys_mkdtemp__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[457] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[273])),TRUE); /* sys-ctermid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[314]), scm__rc.d2149[457]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[315]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[316]), scm__rc.d2149[3]);
  scm__rc.d2149[458] = Scm_MakeExtendedPair(scm__rc.d2149[457], SCM_NIL, SCM_OBJ(&scm__rc.d2150[317]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-ctermid")), SCM_OBJ(&libsyssys_ctermid__STUB), 0);
  libsyssys_ctermid__STUB.common.info = scm__rc.d2149[458];
  libsyssys_ctermid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[459] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[275])),TRUE); /* sys-exit */
  scm__rc.d2149[460] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[276])),TRUE); /* code */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[318]), scm__rc.d2149[460]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[321]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[322]), scm__rc.d2149[459]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[323]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[324]), scm__rc.d2149[3]);
  scm__rc.d2149[461] = Scm_MakeExtendedPair(scm__rc.d2149[459], SCM_OBJ(&scm__rc.d2150[318]), SCM_OBJ(&scm__rc.d2150[326]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[462]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[462]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[462]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[462]))[6] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-exit")), SCM_OBJ(&libsyssys_exit__STUB), 0);
  libsyssys_exit__STUB.common.info = scm__rc.d2149[461];
  libsyssys_exit__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[462]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[329]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[330]), scm__rc.d2149[44]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[331]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[332]), scm__rc.d2149[3]);
  scm__rc.d2149[469] = Scm_MakeExtendedPair(scm__rc.d2149[44], SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[334]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[470]))[6] = scm__rc.d2149[274];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getenv")), SCM_OBJ(&libsyssys_getenv__STUB), 0);
  libsyssys_getenv__STUB.common.info = scm__rc.d2149[469];
  libsyssys_getenv__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[470]);
  scm__rc.d2149[477] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[277])),TRUE); /* sys-abort */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[335]), scm__rc.d2149[477]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[336]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[337]), scm__rc.d2149[3]);
  scm__rc.d2149[478] = Scm_MakeExtendedPair(scm__rc.d2149[477], SCM_NIL, SCM_OBJ(&scm__rc.d2150[338]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[479]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[479]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[479]))[5] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-abort")), SCM_OBJ(&libsyssys_abort__STUB), 0);
  libsyssys_abort__STUB.common.info = scm__rc.d2149[478];
  libsyssys_abort__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[479]);
  scm__rc.d2149[485] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[278])),TRUE); /* sys-system */
  scm__rc.d2149[486] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[279])),TRUE); /* command */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[339]), scm__rc.d2149[486]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[342]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[343]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[344]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[345]), scm__rc.d2149[3]);
  scm__rc.d2149[487] = Scm_MakeExtendedPair(scm__rc.d2149[485], SCM_OBJ(&scm__rc.d2150[339]), SCM_OBJ(&scm__rc.d2150[347]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[488]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[488]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[488]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[488]))[6] = scm__rc.d2149[242];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-system")), SCM_OBJ(&libsyssys_system__STUB), 0);
  libsyssys_system__STUB.common.info = scm__rc.d2149[487];
  libsyssys_system__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[488]);
  scm__rc.d2149[495] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[280])),TRUE); /* sys-random */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[348]), scm__rc.d2149[495]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[349]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[350]), scm__rc.d2149[3]);
  scm__rc.d2149[496] = Scm_MakeExtendedPair(scm__rc.d2149[495], SCM_NIL, SCM_OBJ(&scm__rc.d2150[351]));
  scm__rc.d2149[497] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[281])),TRUE); /* <long> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[498]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[498]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[498]))[5] = scm__rc.d2149[497];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-random")), SCM_OBJ(&libsyssys_random__STUB), 0);
  libsyssys_random__STUB.common.info = scm__rc.d2149[496];
  libsyssys_random__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[498]);
  scm__rc.d2149[504] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[282])),TRUE); /* sys-srandom */
  scm__rc.d2149[505] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[283])),TRUE); /* seed */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[352]), scm__rc.d2149[505]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[355]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[356]), scm__rc.d2149[504]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[357]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[358]), scm__rc.d2149[3]);
  scm__rc.d2149[506] = Scm_MakeExtendedPair(scm__rc.d2149[504], SCM_OBJ(&scm__rc.d2150[352]), SCM_OBJ(&scm__rc.d2150[360]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-srandom")), SCM_OBJ(&libsyssys_srandom__STUB), 0);
  libsyssys_srandom__STUB.common.info = scm__rc.d2149[506];
  libsyssys_srandom__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[462]);
  scm__rc.d2149[507] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[284])),TRUE); /* RAND_MAX */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[507]), Scm_MakeIntegerFromUI(RAND_MAX), SCM_BINDING_CONST);

  scm__rc.d2149[508] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[285])),TRUE); /* sys-environ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[361]), scm__rc.d2149[508]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[362]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[363]), scm__rc.d2149[3]);
  scm__rc.d2149[509] = Scm_MakeExtendedPair(scm__rc.d2149[508], SCM_NIL, SCM_OBJ(&scm__rc.d2150[364]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-environ")), SCM_OBJ(&libsyssys_environ__STUB), 0);
  libsyssys_environ__STUB.common.info = scm__rc.d2149[509];
  libsyssys_environ__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[510] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[286])),TRUE); /* sys-setenv */
  scm__rc.d2149[511] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[287])),TRUE); /* value */
  scm__rc.d2149[512] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[288])),TRUE); /* overwrite */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[365]), scm__rc.d2149[512]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[366]), scm__rc.d2149[358]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[367]), scm__rc.d2149[511]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[368]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[371]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[372]), scm__rc.d2149[510]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[373]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[374]), scm__rc.d2149[3]);
  scm__rc.d2149[513] = Scm_MakeExtendedPair(scm__rc.d2149[510], SCM_OBJ(&scm__rc.d2150[368]), SCM_OBJ(&scm__rc.d2150[376]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[514]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[514]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[514]))[5] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[514]))[6] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[514]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[514]))[8] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-setenv")), SCM_OBJ(&libsyssys_setenv__STUB), 0);
  libsyssys_setenv__STUB.common.info = scm__rc.d2149[513];
  libsyssys_setenv__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[514]);
  scm__rc.d2149[523] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[289])),TRUE); /* sys-unsetenv */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[379]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[380]), scm__rc.d2149[523]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[381]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[382]), scm__rc.d2149[3]);
  scm__rc.d2149[524] = Scm_MakeExtendedPair(scm__rc.d2149[523], SCM_OBJ(&scm__rc.d2150[56]), SCM_OBJ(&scm__rc.d2150[384]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-unsetenv")), SCM_OBJ(&libsyssys_unsetenv__STUB), 0);
  libsyssys_unsetenv__STUB.common.info = scm__rc.d2149[524];
  libsyssys_unsetenv__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[431]);
  scm__rc.d2149[525] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[290])),TRUE); /* sys-clearenv */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[385]), scm__rc.d2149[525]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[386]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[387]), scm__rc.d2149[3]);
  scm__rc.d2149[526] = Scm_MakeExtendedPair(scm__rc.d2149[525], SCM_NIL, SCM_OBJ(&scm__rc.d2150[388]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-clearenv")), SCM_OBJ(&libsyssys_clearenv__STUB), 0);
  libsyssys_clearenv__STUB.common.info = scm__rc.d2149[526];
  libsyssys_clearenv__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[479]);
  scm__rc.d2149[527] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[291])),TRUE); /* both */
  scm__rc.d2149[529] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[292])),TRUE); /* string-scan */
  scm__rc.d2149[528] = Scm_MakeIdentifier(scm__rc.d2149[529], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#string-scan */
  scm__rc.d2149[530] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[293])),TRUE); /* sys-environ->alist */
  scm__rc.d2149[531] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[294])),FALSE); /* G2165 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[389]), scm__rc.d2149[531]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[390]), scm__rc.d2149[530]);
  scm__rc.d2149[532] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[295])),TRUE); /* envstr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[391]), scm__rc.d2149[532]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[394]), scm__rc.d2149[2]);
  scm__rc.d2149[533] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[390]), SCM_OBJ(&scm__rc.d2150[391]), SCM_OBJ(&scm__rc.d2150[395]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[396]), scm__rc.d2149[533]);
  scm__rc.d2149[534] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[4]))->debugInfo = scm__rc.d2149[534];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[542]))[6] = SCM_WORD(scm__rc.d2149[527]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[542]))[8] = SCM_WORD(scm__rc.d2149[528]);
  scm__rc.d2149[535] = Scm_MakeIdentifier(scm__rc.d2149[508], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-environ */
  scm__rc.d2149[536] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[297])),TRUE); /* lambda */
  scm__rc.d2149[537] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[298])),TRUE); /* envlist */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[399]), scm__rc.d2149[537]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[401]), scm__rc.d2149[358]);
  scm__rc.d2149[538] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[299])),TRUE); /* map */
  scm__rc.d2149[539] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[300])),TRUE); /* ^ */
  scm__rc.d2149[540] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[301])),TRUE); /* receive */
  scm__rc.d2149[541] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[302])),TRUE); /* pre */
  scm__rc.d2149[542] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[303])),TRUE); /* post */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[402]), scm__rc.d2149[542]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[403]), scm__rc.d2149[541]);
  scm__rc.d2149[543] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[304])),TRUE); /* quote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[404]), scm__rc.d2149[527]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[405]), scm__rc.d2149[543]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[408]), scm__rc.d2149[532]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[409]), scm__rc.d2149[529]);
  scm__rc.d2149[544] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[305])),TRUE); /* if */
  scm__rc.d2149[545] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[306])),TRUE); /* cons */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[410]), scm__rc.d2149[545]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[411]), scm__rc.d2149[532]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[412]), scm__rc.d2149[545]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[415]), scm__rc.d2149[541]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[416]), scm__rc.d2149[544]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[420]), scm__rc.d2149[540]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[423]), scm__rc.d2149[539]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[424]), scm__rc.d2149[537]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[426]), scm__rc.d2149[538]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[429]), scm__rc.d2149[536]);
  scm__rc.d2149[546] = Scm_MakeIdentifier(scm__rc.d2149[538], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#map */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[432]), scm__rc.d2149[2]);
  scm__rc.d2149[547] = Scm_MakeExtendedPair(scm__rc.d2149[530], SCM_OBJ(&scm__rc.d2150[401]), SCM_OBJ(&scm__rc.d2150[433]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[434]), scm__rc.d2149[547]);
  scm__rc.d2149[548] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[5]))->name = scm__rc.d2149[530];/* sys-environ->alist */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[5]))->debugInfo = scm__rc.d2149[548];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]))[6] = SCM_WORD(scm__rc.d2149[535]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]))[31] = SCM_WORD(scm__rc.d2149[71]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[564]))[35] = SCM_WORD(scm__rc.d2149[546]);
  scm__rc.d2149[549] = Scm_MakeIdentifier(scm__rc.d2149[530], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-environ->alist */
  scm__rc.d2149[550] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[6]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[6]))->debugInfo = scm__rc.d2149[550];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[601]))[5] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[601]))[8] = SCM_WORD(scm__rc.d2149[530]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[601]))[15] = SCM_WORD(scm__rc.d2149[549]);
  scm__rc.d2149[551] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[307])),TRUE); /* sys-putenv */
  scm__rc.d2149[552] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[309])),TRUE); /* arg */
  scm__rc.d2149[553] = Scm_MakeIdentifier(scm__rc.d2149[53], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#error */
  scm__rc.d2149[554] = Scm_MakeIdentifier(scm__rc.d2149[510], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-setenv */
  scm__rc.d2149[555] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[311])),TRUE); /* name=value */
  scm__rc.d2149[556] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[312])),TRUE); /* other */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[435]), scm__rc.d2149[555]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[435]), scm__rc.d2149[556]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[438]), scm__rc.d2149[2]);
  scm__rc.d2149[557] = Scm_MakeExtendedPair(scm__rc.d2149[551], SCM_OBJ(&scm__rc.d2150[435]), SCM_OBJ(&scm__rc.d2150[439]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[440]), scm__rc.d2149[557]);
  scm__rc.d2149[558] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[7]))->name = scm__rc.d2149[551];/* sys-putenv */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[7]))->debugInfo = scm__rc.d2149[558];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]))[14] = SCM_WORD(scm__rc.d2149[552]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]))[17] = SCM_WORD(scm__rc.d2149[77]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]))[24] = SCM_WORD(scm__rc.d2149[527]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]))[26] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]))[39] = SCM_WORD(scm__rc.d2149[553]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]))[45] = SCM_WORD(scm__rc.d2149[554]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[618]))[53] = SCM_WORD(scm__rc.d2149[554]);
  scm__rc.d2149[559] = Scm_MakeIdentifier(scm__rc.d2149[551], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-putenv */
  scm__rc.d2149[560] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[8]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[8]))->debugInfo = scm__rc.d2149[560];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[673]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[673]))[6] = SCM_WORD(scm__rc.d2149[551]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[673]))[13] = SCM_WORD(scm__rc.d2149[559]);
  scm__rc.d2149[561] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[313])),TRUE); /* sys-strerror */
  scm__rc.d2149[562] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[314])),TRUE); /* errno_ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[441]), scm__rc.d2149[562]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[444]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[445]), scm__rc.d2149[561]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[446]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[447]), scm__rc.d2149[3]);
  scm__rc.d2149[563] = Scm_MakeExtendedPair(scm__rc.d2149[561], SCM_OBJ(&scm__rc.d2150[441]), SCM_OBJ(&scm__rc.d2150[449]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[564]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[564]))[4] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[564]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[564]))[6] = scm__rc.d2149[256];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-strerror")), SCM_OBJ(&libsyssys_strerror__STUB), 0);
  libsyssys_strerror__STUB.common.info = scm__rc.d2149[563];
  libsyssys_strerror__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[564]);
#if HAVE_STRSIGNAL
  scm__rc.d2167[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2166[0])),TRUE); /* sys-strsignal */
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  scm__rc.d2167[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2166[1])),TRUE); /* signum */
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2168[1]), scm__rc.d2167[1]);
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  scm__rc.d2167[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2166[2])),TRUE); /* source-info */
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2168[4]), scm__rc.d2167[2]);
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  scm__rc.d2167[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2166[4])),TRUE); /* bind-info */
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  scm__rc.d2167[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2166[5])),TRUE); /* gauche */
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2168[5]), scm__rc.d2167[0]);
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2168[6]), scm__rc.d2167[4]);
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2168[7]), scm__rc.d2167[3]);
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  scm__rc.d2167[5] = Scm_MakeExtendedPair(scm__rc.d2167[0], SCM_OBJ(&scm__rc.d2168[1]), SCM_OBJ(&scm__rc.d2168[9]));
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  scm__rc.d2167[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2166[6])),TRUE); /* <int> */
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  scm__rc.d2167[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2166[7])),TRUE); /* -> */
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  scm__rc.d2167[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2166[8])),TRUE); /* <const-cstring>? */
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  ((ScmObj*)SCM_OBJ(&scm__rc.d2167[9]))[3] = scm__rc.d2167[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2167[9]))[4] = scm__rc.d2167[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2167[9]))[5] = scm__rc.d2167[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2167[9]))[6] = scm__rc.d2167[8];
#endif /* HAVE_STRSIGNAL */
#if HAVE_STRSIGNAL
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-strsignal")), SCM_OBJ(&libsyssys_strsignal__STUB), 0);
  libsyssys_strsignal__STUB.common.info = scm__rc.d2167[5];
  libsyssys_strsignal__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2167[9]);
#endif /* HAVE_STRSIGNAL */
#if !(HAVE_STRSIGNAL)
  scm__rc.d2170[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2169[0])),TRUE); /* sys-strsignal */
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  scm__rc.d2170[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2169[1])),TRUE); /* _ */
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2171[1]), scm__rc.d2170[1]);
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  scm__rc.d2170[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2169[2])),TRUE); /* source-info */
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2171[4]), scm__rc.d2170[2]);
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  scm__rc.d2170[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2169[4])),TRUE); /* bind-info */
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  scm__rc.d2170[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2169[5])),TRUE); /* gauche */
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2171[5]), scm__rc.d2170[0]);
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2171[6]), scm__rc.d2170[4]);
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2171[7]), scm__rc.d2170[3]);
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  scm__rc.d2170[5] = Scm_MakeExtendedPair(scm__rc.d2170[0], SCM_OBJ(&scm__rc.d2171[1]), SCM_OBJ(&scm__rc.d2171[9]));
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  scm__rc.d2170[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2169[6])),TRUE); /* <int> */
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  scm__rc.d2170[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2169[7])),TRUE); /* -> */
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  scm__rc.d2170[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2169[8])),TRUE); /* <const-cstring>? */
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2170[9]))[3] = scm__rc.d2170[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2170[9]))[4] = scm__rc.d2170[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2170[9]))[5] = scm__rc.d2170[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2170[9]))[6] = scm__rc.d2170[8];
#endif /* !(HAVE_STRSIGNAL) */
#if !(HAVE_STRSIGNAL)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-strsignal")), SCM_OBJ(&libsyssys_strsignal__STUB), 0);
  libsyssys_strsignal__STUB.common.info = scm__rc.d2170[5];
  libsyssys_strsignal__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2170[9]);
#endif /* !(HAVE_STRSIGNAL) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2172[0])),TRUE); /* sys-getloadavg */
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[1] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2172[1]))); /* :optional */
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2172[2])),TRUE); /* nsamples */
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2175[1]), scm__rc.d2174[2]);
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2175[2]), scm__rc.d2174[1]);
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2172[3])),TRUE); /* source-info */
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2175[5]), scm__rc.d2174[3]);
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2172[5])),TRUE); /* bind-info */
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2172[6])),TRUE); /* gauche */
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2175[6]), scm__rc.d2174[0]);
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2175[7]), scm__rc.d2174[5]);
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2175[8]), scm__rc.d2174[4]);
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[6] = Scm_MakeExtendedPair(scm__rc.d2174[0], SCM_OBJ(&scm__rc.d2175[2]), SCM_OBJ(&scm__rc.d2175[10]));
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2172[7])),TRUE); /* * */
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2172[8])),TRUE); /* -> */
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  scm__rc.d2174[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2172[9])),TRUE); /* <top> */
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2174[10]))[3] = scm__rc.d2174[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2174[10]))[4] = scm__rc.d2174[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2174[10]))[5] = scm__rc.d2174[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2174[10]))[6] = scm__rc.d2174[9];
#endif /* defined(HAVE_GETLOADAVG) */
#if defined(HAVE_GETLOADAVG)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getloadavg")), SCM_OBJ(&libsyssys_getloadavg__STUB), 0);
  libsyssys_getloadavg__STUB.common.info = scm__rc.d2174[6];
  libsyssys_getloadavg__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2174[10]);
#endif /* defined(HAVE_GETLOADAVG) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2176[0])),TRUE); /* sys-getloadavg */
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[1] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2176[1]))); /* :optional */
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2176[2])),TRUE); /* _ */
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2178[1]), scm__rc.d2177[2]);
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2178[2]), scm__rc.d2177[1]);
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2176[3])),TRUE); /* source-info */
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2178[5]), scm__rc.d2177[3]);
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2176[5])),TRUE); /* bind-info */
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2176[6])),TRUE); /* gauche */
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2178[6]), scm__rc.d2177[0]);
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2178[7]), scm__rc.d2177[5]);
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2178[8]), scm__rc.d2177[4]);
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[6] = Scm_MakeExtendedPair(scm__rc.d2177[0], SCM_OBJ(&scm__rc.d2178[2]), SCM_OBJ(&scm__rc.d2178[10]));
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2176[7])),TRUE); /* * */
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2176[8])),TRUE); /* -> */
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  scm__rc.d2177[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2176[9])),TRUE); /* <top> */
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2177[10]))[3] = scm__rc.d2177[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2177[10]))[4] = scm__rc.d2177[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2177[10]))[5] = scm__rc.d2177[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2177[10]))[6] = scm__rc.d2177[9];
#endif /* !(defined(HAVE_GETLOADAVG)) */
#if !(defined(HAVE_GETLOADAVG))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getloadavg")), SCM_OBJ(&libsyssys_getloadavg__STUB), 0);
  libsyssys_getloadavg__STUB.common.info = scm__rc.d2177[6];
  libsyssys_getloadavg__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2177[10]);
#endif /* !(defined(HAVE_GETLOADAVG)) */
  Scm_InitStaticClassWithMeta(&Scm_MemoryRegionClass, "<memory-region>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_MemoryRegionClass__SLOTS, 0);
  scm__rc.d2149[571] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[315])),TRUE); /* sys-mmap */
  scm__rc.d2149[572] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[316])),TRUE); /* maybe-port */
  scm__rc.d2149[573] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[317])),TRUE); /* prot */
  scm__rc.d2149[574] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[318])),TRUE); /* flags */
  scm__rc.d2149[575] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[319])),TRUE); /* size */
  scm__rc.d2149[576] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[320])),TRUE); /* off */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[450]), scm__rc.d2149[576]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[451]), scm__rc.d2149[358]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[452]), scm__rc.d2149[575]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[453]), scm__rc.d2149[574]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[454]), scm__rc.d2149[573]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[455]), scm__rc.d2149[572]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[458]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[459]), scm__rc.d2149[571]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[460]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[461]), scm__rc.d2149[3]);
  scm__rc.d2149[577] = Scm_MakeExtendedPair(scm__rc.d2149[571], SCM_OBJ(&scm__rc.d2150[455]), SCM_OBJ(&scm__rc.d2150[463]));
  scm__rc.d2149[578] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[321])),TRUE); /* <size_t> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[579]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[579]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[579]))[5] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[579]))[6] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[579]))[7] = scm__rc.d2149[578];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[579]))[8] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[579]))[9] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[579]))[10] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-mmap")), SCM_OBJ(&libsyssys_mmap__STUB), 0);
  libsyssys_mmap__STUB.common.info = scm__rc.d2149[577];
  libsyssys_mmap__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[579]);
  scm__rc.d2149[590] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[322])),TRUE); /* PROT_EXEC */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[590]), Scm_MakeInteger(PROT_EXEC), SCM_BINDING_CONST);

  scm__rc.d2149[591] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[323])),TRUE); /* PROT_READ */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[591]), Scm_MakeInteger(PROT_READ), SCM_BINDING_CONST);

  scm__rc.d2149[592] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[324])),TRUE); /* PROT_WRITE */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[592]), Scm_MakeInteger(PROT_WRITE), SCM_BINDING_CONST);

  scm__rc.d2149[593] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[325])),TRUE); /* PROT_NONE */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[593]), Scm_MakeInteger(PROT_NONE), SCM_BINDING_CONST);

  scm__rc.d2149[594] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[326])),TRUE); /* MAP_SHARED */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[594]), Scm_MakeInteger(MAP_SHARED), SCM_BINDING_CONST);

  scm__rc.d2149[595] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[327])),TRUE); /* MAP_PRIVATE */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[595]), Scm_MakeInteger(MAP_PRIVATE), SCM_BINDING_CONST);

  scm__rc.d2149[596] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[328])),TRUE); /* MAP_ANONYMOUS */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[596]), Scm_MakeInteger(MAP_ANONYMOUS), SCM_BINDING_CONST);

#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[0])),TRUE); /* sys-getrlimit */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[1])),TRUE); /* rsrc */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[1]), scm__rc.d2180[1]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[2])),TRUE); /* source-info */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[4]), scm__rc.d2180[2]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[4])),TRUE); /* bind-info */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[5])),TRUE); /* gauche */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[5]), scm__rc.d2180[0]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[6]), scm__rc.d2180[4]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[7]), scm__rc.d2180[3]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[5] = Scm_MakeExtendedPair(scm__rc.d2180[0], SCM_OBJ(&scm__rc.d2181[1]), SCM_OBJ(&scm__rc.d2181[9]));
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[6])),TRUE); /* <int> */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[7])),TRUE); /* -> */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[8])),TRUE); /* <integer> */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[9]))[3] = scm__rc.d2180[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[9]))[4] = scm__rc.d2180[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[9]))[5] = scm__rc.d2180[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[9]))[6] = scm__rc.d2180[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[9]))[7] = scm__rc.d2180[8];
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getrlimit")), SCM_OBJ(&libsyssys_getrlimit__STUB), 0);
  libsyssys_getrlimit__STUB.common.info = scm__rc.d2180[5];
  libsyssys_getrlimit__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2180[9]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[9])),TRUE); /* sys-setrlimit */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[10])),TRUE); /* cur */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[19] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2179[11]))); /* :optional */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[12])),TRUE); /* max */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[10]), scm__rc.d2180[20]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[11]), scm__rc.d2180[19]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[12]), scm__rc.d2180[18]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[13]), scm__rc.d2180[1]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[16]), scm__rc.d2180[2]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[17]), scm__rc.d2180[17]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[18]), scm__rc.d2180[4]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2181[19]), scm__rc.d2180[3]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[21] = Scm_MakeExtendedPair(scm__rc.d2180[17], SCM_OBJ(&scm__rc.d2181[13]), SCM_OBJ(&scm__rc.d2181[21]));
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[13])),TRUE); /* <top> */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[23] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[14])),TRUE); /* * */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[15])),TRUE); /* <void> */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[25]))[3] = scm__rc.d2180[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[25]))[4] = scm__rc.d2180[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[25]))[5] = scm__rc.d2180[22];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[25]))[6] = scm__rc.d2180[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[25]))[7] = scm__rc.d2180[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2180[25]))[8] = scm__rc.d2180[24];
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-setrlimit")), SCM_OBJ(&libsyssys_setrlimit__STUB), 0);
  libsyssys_setrlimit__STUB.common.info = scm__rc.d2180[21];
  libsyssys_setrlimit__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2180[25]);
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  scm__rc.d2180[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[16])),TRUE); /* RLIM_INFINITY */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2180[34]), MAKERLIMIT(RLIM_INFINITY), SCM_BINDING_CONST);

#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_AS)
  scm__rc.d2182[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2183[0])),TRUE); /* RLIMIT_AS */
#endif /* defined(RLIMIT_AS) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_AS)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2182[0]), Scm_MakeInteger(RLIMIT_AS), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_AS) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CORE)
  scm__rc.d2184[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2185[0])),TRUE); /* RLIMIT_CORE */
#endif /* defined(RLIMIT_CORE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CORE)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2184[0]), Scm_MakeInteger(RLIMIT_CORE), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_CORE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CPU)
  scm__rc.d2186[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2187[0])),TRUE); /* RLIMIT_CPU */
#endif /* defined(RLIMIT_CPU) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_CPU)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2186[0]), Scm_MakeInteger(RLIMIT_CPU), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_CPU) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_DATA)
  scm__rc.d2188[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2189[0])),TRUE); /* RLIMIT_DATA */
#endif /* defined(RLIMIT_DATA) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_DATA)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2188[0]), Scm_MakeInteger(RLIMIT_DATA), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_DATA) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_FSIZE)
  scm__rc.d2190[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2191[0])),TRUE); /* RLIMIT_FSIZE */
#endif /* defined(RLIMIT_FSIZE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_FSIZE)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2190[0]), Scm_MakeInteger(RLIMIT_FSIZE), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_FSIZE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_LOCKS)
  scm__rc.d2192[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2193[0])),TRUE); /* RLIMIT_LOCKS */
#endif /* defined(RLIMIT_LOCKS) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_LOCKS)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2192[0]), Scm_MakeInteger(RLIMIT_LOCKS), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_LOCKS) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MEMLOCK)
  scm__rc.d2194[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2195[0])),TRUE); /* RLIMIT_MEMLOCK */
#endif /* defined(RLIMIT_MEMLOCK) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MEMLOCK)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2194[0]), Scm_MakeInteger(RLIMIT_MEMLOCK), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_MEMLOCK) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MSGQUEUE)
  scm__rc.d2196[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2197[0])),TRUE); /* RLIMIT_MSGQUEUE */
#endif /* defined(RLIMIT_MSGQUEUE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_MSGQUEUE)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2196[0]), Scm_MakeInteger(RLIMIT_MSGQUEUE), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_MSGQUEUE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NICE)
  scm__rc.d2198[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2199[0])),TRUE); /* RLIMIT_NICE */
#endif /* defined(RLIMIT_NICE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NICE)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2198[0]), Scm_MakeInteger(RLIMIT_NICE), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_NICE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NOFILE)
  scm__rc.d2200[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2201[0])),TRUE); /* RLIMIT_NOFILE */
#endif /* defined(RLIMIT_NOFILE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NOFILE)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2200[0]), Scm_MakeInteger(RLIMIT_NOFILE), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_NOFILE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NPROC)
  scm__rc.d2202[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2203[0])),TRUE); /* RLIMIT_NPROC */
#endif /* defined(RLIMIT_NPROC) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_NPROC)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2202[0]), Scm_MakeInteger(RLIMIT_NPROC), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_NPROC) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RSS)
  scm__rc.d2204[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2205[0])),TRUE); /* RLIMIT_RSS */
#endif /* defined(RLIMIT_RSS) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RSS)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2204[0]), Scm_MakeInteger(RLIMIT_RSS), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_RSS) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RTPRIO)
  scm__rc.d2206[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2207[0])),TRUE); /* RLIMIT_RTPRIO */
#endif /* defined(RLIMIT_RTPRIO) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_RTPRIO)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2206[0]), Scm_MakeInteger(RLIMIT_RTPRIO), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_RTPRIO) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SIGPENDING)
  scm__rc.d2208[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2209[0])),TRUE); /* RLIMIT_SIGPENDING */
#endif /* defined(RLIMIT_SIGPENDING) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SIGPENDING)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2208[0]), Scm_MakeInteger(RLIMIT_SIGPENDING), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_SIGPENDING) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SBSIZE)
  scm__rc.d2210[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2211[0])),TRUE); /* RLIMIT_SBSIZE */
#endif /* defined(RLIMIT_SBSIZE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_SBSIZE)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2210[0]), Scm_MakeInteger(RLIMIT_SBSIZE), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_SBSIZE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_STACK)
  scm__rc.d2212[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2213[0])),TRUE); /* RLIMIT_STACK */
#endif /* defined(RLIMIT_STACK) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_STACK)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2212[0]), Scm_MakeInteger(RLIMIT_STACK), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_STACK) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_OFILE)
  scm__rc.d2214[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2215[0])),TRUE); /* RLIMIT_OFILE */
#endif /* defined(RLIMIT_OFILE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
#if defined(HAVE_SYS_RESOURCE_H)
#if defined(RLIMIT_OFILE)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2214[0]), Scm_MakeInteger(RLIMIT_OFILE), SCM_BINDING_CONST);

#endif /* defined(RLIMIT_OFILE) */
#endif /* defined(HAVE_SYS_RESOURCE_H) */
  scm__rc.d2149[597] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[329])),TRUE); /* sys-stat */
  scm__rc.d2149[598] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[330])),TRUE); /* path */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[464]), scm__rc.d2149[598]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[467]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[468]), scm__rc.d2149[597]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[469]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[470]), scm__rc.d2149[3]);
  scm__rc.d2149[599] = Scm_MakeExtendedPair(scm__rc.d2149[597], SCM_OBJ(&scm__rc.d2150[464]), SCM_OBJ(&scm__rc.d2150[472]));
  scm__rc.d2149[600] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[331])),TRUE); /* <sys-stat> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[601]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[601]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[601]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[601]))[6] = scm__rc.d2149[600];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-stat")), SCM_OBJ(&libsyssys_stat__STUB), 0);
  libsyssys_stat__STUB.common.info = scm__rc.d2149[599];
  libsyssys_stat__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[601]);
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[0])),TRUE); /* sys-lstat */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[1])),TRUE); /* path */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[1]), scm__rc.d2219[1]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[2])),TRUE); /* source-info */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[4]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[4])),TRUE); /* bind-info */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[5])),TRUE); /* gauche */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[5]), scm__rc.d2219[0]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[6]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[7]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[5] = Scm_MakeExtendedPair(scm__rc.d2219[0], SCM_OBJ(&scm__rc.d2220[1]), SCM_OBJ(&scm__rc.d2220[9]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[6])),TRUE); /* <const-cstring> */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[7])),TRUE); /* -> */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[8])),TRUE); /* <sys-stat> */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[9]))[3] = scm__rc.d2219[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[9]))[4] = scm__rc.d2219[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[9]))[5] = scm__rc.d2219[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[9]))[6] = scm__rc.d2219[8];
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-lstat")), SCM_OBJ(&libsyssys_lstat__STUB), 0);
  libsyssys_lstat__STUB.common.info = scm__rc.d2219[5];
  libsyssys_lstat__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[9]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(!(defined(GAUCHE_WINDOWS)))
  scm__rc.d2222[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2221[0])),TRUE); /* sys-lstat */
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  scm__rc.d2222[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2221[1])),TRUE); /* path */
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2223[1]), scm__rc.d2222[1]);
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  scm__rc.d2222[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2221[2])),TRUE); /* source-info */
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2223[4]), scm__rc.d2222[2]);
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  scm__rc.d2222[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2221[4])),TRUE); /* bind-info */
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  scm__rc.d2222[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2221[5])),TRUE); /* gauche */
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2223[5]), scm__rc.d2222[0]);
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2223[6]), scm__rc.d2222[4]);
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2223[7]), scm__rc.d2222[3]);
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  scm__rc.d2222[5] = Scm_MakeExtendedPair(scm__rc.d2222[0], SCM_OBJ(&scm__rc.d2223[1]), SCM_OBJ(&scm__rc.d2223[9]));
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  scm__rc.d2222[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2221[6])),TRUE); /* <const-cstring> */
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  scm__rc.d2222[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2221[7])),TRUE); /* -> */
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  scm__rc.d2222[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2221[8])),TRUE); /* <sys-stat> */
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2222[9]))[3] = scm__rc.d2222[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2222[9]))[4] = scm__rc.d2222[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2222[9]))[5] = scm__rc.d2222[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2222[9]))[6] = scm__rc.d2222[8];
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(!(defined(GAUCHE_WINDOWS)))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-lstat")), SCM_OBJ(&libsyssys_lstat__STUB), 0);
  libsyssys_lstat__STUB.common.info = scm__rc.d2222[5];
  libsyssys_lstat__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2222[9]);
#endif /* !(!(defined(GAUCHE_WINDOWS))) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[9])),TRUE); /* sys-mkfifo */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[10])),TRUE); /* mode */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[10]), scm__rc.d2219[17]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[11]), scm__rc.d2219[1]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[14]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[15]), scm__rc.d2219[16]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[16]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[17]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[18] = Scm_MakeExtendedPair(scm__rc.d2219[16], SCM_OBJ(&scm__rc.d2220[11]), SCM_OBJ(&scm__rc.d2220[19]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[11])),TRUE); /* <int> */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[20]))[3] = scm__rc.d2219[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[20]))[4] = scm__rc.d2219[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[20]))[5] = scm__rc.d2219[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[20]))[6] = scm__rc.d2219[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[20]))[7] = scm__rc.d2219[19];
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-mkfifo")), SCM_OBJ(&libsyssys_mkfifo__STUB), 0);
  libsyssys_mkfifo__STUB.common.info = scm__rc.d2219[18];
  libsyssys_mkfifo__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[20]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
  scm__rc.d2149[608] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[332])),TRUE); /* sys-fstat */
  scm__rc.d2149[609] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[333])),TRUE); /* port-or-fd */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[473]), scm__rc.d2149[609]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[476]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[477]), scm__rc.d2149[608]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[478]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[479]), scm__rc.d2149[3]);
  scm__rc.d2149[610] = Scm_MakeExtendedPair(scm__rc.d2149[608], SCM_OBJ(&scm__rc.d2150[473]), SCM_OBJ(&scm__rc.d2150[481]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[611]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[611]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[611]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[611]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-fstat")), SCM_OBJ(&libsyssys_fstat__STUB), 0);
  libsyssys_fstat__STUB.common.info = scm__rc.d2149[610];
  libsyssys_fstat__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[611]);
  scm__rc.d2149[618] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[334])),TRUE); /* file-exists? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[484]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[485]), scm__rc.d2149[618]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[486]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[487]), scm__rc.d2149[3]);
  scm__rc.d2149[619] = Scm_MakeExtendedPair(scm__rc.d2149[618], SCM_OBJ(&scm__rc.d2150[464]), SCM_OBJ(&scm__rc.d2150[489]));
  scm__rc.d2149[620] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[335])),TRUE); /* <boolean> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[621]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[621]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[621]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[621]))[6] = scm__rc.d2149[620];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("file-exists?")), SCM_OBJ(&libsysfile_existsP__STUB), 0);
  libsysfile_existsP__STUB.common.info = scm__rc.d2149[619];
  libsysfile_existsP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[621]);
  scm__rc.d2149[628] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[336])),TRUE); /* file-is-regular? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[492]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[493]), scm__rc.d2149[628]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[494]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[495]), scm__rc.d2149[3]);
  scm__rc.d2149[629] = Scm_MakeExtendedPair(scm__rc.d2149[628], SCM_OBJ(&scm__rc.d2150[464]), SCM_OBJ(&scm__rc.d2150[497]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("file-is-regular?")), SCM_OBJ(&libsysfile_is_regularP__STUB), 0);
  libsysfile_is_regularP__STUB.common.info = scm__rc.d2149[629];
  libsysfile_is_regularP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[621]);
  scm__rc.d2149[630] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[337])),TRUE); /* file-is-directory? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[500]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[501]), scm__rc.d2149[630]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[502]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[503]), scm__rc.d2149[3]);
  scm__rc.d2149[631] = Scm_MakeExtendedPair(scm__rc.d2149[630], SCM_OBJ(&scm__rc.d2150[464]), SCM_OBJ(&scm__rc.d2150[505]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("file-is-directory?")), SCM_OBJ(&libsysfile_is_directoryP__STUB), 0);
  libsysfile_is_directoryP__STUB.common.info = scm__rc.d2149[631];
  libsysfile_is_directoryP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[621]);
  scm__rc.d2149[632] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[338])),TRUE); /* sys-utime */
  scm__rc.d2149[633] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[339])),TRUE); /* atime */
  scm__rc.d2149[634] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[340])),TRUE); /* mtime */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[506]), scm__rc.d2149[634]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[507]), scm__rc.d2149[633]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[508]), scm__rc.d2149[358]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[509]), scm__rc.d2149[598]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[512]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[513]), scm__rc.d2149[632]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[514]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[515]), scm__rc.d2149[3]);
  scm__rc.d2149[635] = Scm_MakeExtendedPair(scm__rc.d2149[632], SCM_OBJ(&scm__rc.d2150[509]), SCM_OBJ(&scm__rc.d2150[517]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[636]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[636]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[636]))[5] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[636]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[636]))[7] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-utime")), SCM_OBJ(&libsyssys_utime__STUB), 0);
  libsyssys_utime__STUB.common.info = scm__rc.d2149[635];
  libsyssys_utime__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[636]);
  scm__rc.d2149[644] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[341])),TRUE); /* sys-times */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[518]), scm__rc.d2149[644]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[519]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[520]), scm__rc.d2149[3]);
  scm__rc.d2149[645] = Scm_MakeExtendedPair(scm__rc.d2149[644], SCM_NIL, SCM_OBJ(&scm__rc.d2150[521]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-times")), SCM_OBJ(&libsyssys_times__STUB), 0);
  libsyssys_times__STUB.common.info = scm__rc.d2149[645];
  libsyssys_times__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[646] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[342])),TRUE); /* sys-uname */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[522]), scm__rc.d2149[646]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[523]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[524]), scm__rc.d2149[3]);
  scm__rc.d2149[647] = Scm_MakeExtendedPair(scm__rc.d2149[646], SCM_NIL, SCM_OBJ(&scm__rc.d2150[525]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-uname")), SCM_OBJ(&libsyssys_uname__STUB), 0);
  libsyssys_uname__STUB.common.info = scm__rc.d2149[647];
  libsyssys_uname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[648] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[343])),TRUE); /* sys-wait */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[526]), scm__rc.d2149[648]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[527]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[528]), scm__rc.d2149[3]);
  scm__rc.d2149[649] = Scm_MakeExtendedPair(scm__rc.d2149[648], SCM_NIL, SCM_OBJ(&scm__rc.d2150[529]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-wait")), SCM_OBJ(&libsyssys_wait__STUB), 0);
  libsyssys_wait__STUB.common.info = scm__rc.d2149[649];
  libsyssys_wait__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[650] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[344]))); /* :nohang */
  scm__rc.d2149[651] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[345]))); /* :untraced */
  scm__rc.d2149[652] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[346])),TRUE); /* sys-waitpid */
  scm__rc.d2149[653] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[344])),TRUE); /* nohang */
  scm__rc.d2149[654] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[345])),TRUE); /* untraced */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[530]), scm__rc.d2149[654]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[531]), scm__rc.d2149[653]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[532]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[533]), scm__rc.d2149[345]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[536]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[537]), scm__rc.d2149[652]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[538]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[539]), scm__rc.d2149[3]);
  scm__rc.d2149[655] = Scm_MakeExtendedPair(scm__rc.d2149[652], SCM_OBJ(&scm__rc.d2150[533]), SCM_OBJ(&scm__rc.d2150[541]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[656]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[656]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[656]))[5] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[656]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[656]))[7] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-waitpid")), SCM_OBJ(&libsyssys_waitpid__STUB), 0);
  libsyssys_waitpid__STUB.common.info = scm__rc.d2149[655];
  libsyssys_waitpid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[656]);
  scm__rc.d2149[664] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[347])),TRUE); /* sys-wait-exited? */
  scm__rc.d2149[665] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[348])),TRUE); /* status */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[542]), scm__rc.d2149[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[545]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[546]), scm__rc.d2149[664]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[547]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[548]), scm__rc.d2149[3]);
  scm__rc.d2149[666] = Scm_MakeExtendedPair(scm__rc.d2149[664], SCM_OBJ(&scm__rc.d2150[542]), SCM_OBJ(&scm__rc.d2150[550]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[667]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[667]))[4] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[667]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[667]))[6] = scm__rc.d2149[620];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-wait-exited?")), SCM_OBJ(&libsyssys_wait_exitedP__STUB), 0);
  libsyssys_wait_exitedP__STUB.common.info = scm__rc.d2149[666];
  libsyssys_wait_exitedP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[667]);
  scm__rc.d2149[674] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[349])),TRUE); /* sys-wait-exit-status */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[553]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[554]), scm__rc.d2149[674]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[555]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[556]), scm__rc.d2149[3]);
  scm__rc.d2149[675] = Scm_MakeExtendedPair(scm__rc.d2149[674], SCM_OBJ(&scm__rc.d2150[542]), SCM_OBJ(&scm__rc.d2150[558]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[676]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[676]))[4] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[676]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[676]))[6] = scm__rc.d2149[242];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-wait-exit-status")), SCM_OBJ(&libsyssys_wait_exit_status__STUB), 0);
  libsyssys_wait_exit_status__STUB.common.info = scm__rc.d2149[675];
  libsyssys_wait_exit_status__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[676]);
  scm__rc.d2149[683] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[350])),TRUE); /* sys-wait-signaled? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[561]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[562]), scm__rc.d2149[683]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[563]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[564]), scm__rc.d2149[3]);
  scm__rc.d2149[684] = Scm_MakeExtendedPair(scm__rc.d2149[683], SCM_OBJ(&scm__rc.d2150[542]), SCM_OBJ(&scm__rc.d2150[566]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-wait-signaled?")), SCM_OBJ(&libsyssys_wait_signaledP__STUB), 0);
  libsyssys_wait_signaledP__STUB.common.info = scm__rc.d2149[684];
  libsyssys_wait_signaledP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[667]);
  scm__rc.d2149[685] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[351])),TRUE); /* sys-wait-termsig */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[569]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[570]), scm__rc.d2149[685]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[571]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[572]), scm__rc.d2149[3]);
  scm__rc.d2149[686] = Scm_MakeExtendedPair(scm__rc.d2149[685], SCM_OBJ(&scm__rc.d2150[542]), SCM_OBJ(&scm__rc.d2150[574]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-wait-termsig")), SCM_OBJ(&libsyssys_wait_termsig__STUB), 0);
  libsyssys_wait_termsig__STUB.common.info = scm__rc.d2149[686];
  libsyssys_wait_termsig__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[676]);
  scm__rc.d2149[687] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[352])),TRUE); /* sys-wait-stopped? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[577]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[578]), scm__rc.d2149[687]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[579]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[580]), scm__rc.d2149[3]);
  scm__rc.d2149[688] = Scm_MakeExtendedPair(scm__rc.d2149[687], SCM_OBJ(&scm__rc.d2150[542]), SCM_OBJ(&scm__rc.d2150[582]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-wait-stopped?")), SCM_OBJ(&libsyssys_wait_stoppedP__STUB), 0);
  libsyssys_wait_stoppedP__STUB.common.info = scm__rc.d2149[688];
  libsyssys_wait_stoppedP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[667]);
  scm__rc.d2149[689] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[353])),TRUE); /* sys-wait-stopsig */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[585]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[586]), scm__rc.d2149[689]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[587]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[588]), scm__rc.d2149[3]);
  scm__rc.d2149[690] = Scm_MakeExtendedPair(scm__rc.d2149[689], SCM_OBJ(&scm__rc.d2150[542]), SCM_OBJ(&scm__rc.d2150[590]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-wait-stopsig")), SCM_OBJ(&libsyssys_wait_stopsig__STUB), 0);
  libsyssys_wait_stopsig__STUB.common.info = scm__rc.d2149[690];
  libsyssys_wait_stopsig__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[676]);
  scm__rc.d2149[691] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[354])),TRUE); /* sys-time */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[591]), scm__rc.d2149[691]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[592]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[593]), scm__rc.d2149[3]);
  scm__rc.d2149[692] = Scm_MakeExtendedPair(scm__rc.d2149[691], SCM_NIL, SCM_OBJ(&scm__rc.d2150[594]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-time")), SCM_OBJ(&libsyssys_time__STUB), 0);
  libsyssys_time__STUB.common.info = scm__rc.d2149[692];
  libsyssys_time__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[693] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[355])),TRUE); /* sys-gettimeofday */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[595]), scm__rc.d2149[693]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[596]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[597]), scm__rc.d2149[3]);
  scm__rc.d2149[694] = Scm_MakeExtendedPair(scm__rc.d2149[693], SCM_NIL, SCM_OBJ(&scm__rc.d2150[598]));
  scm__rc.d2149[695] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[356])),TRUE); /* <ulong> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[696]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[696]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[696]))[5] = scm__rc.d2149[695];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[696]))[6] = scm__rc.d2149[695];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-gettimeofday")), SCM_OBJ(&libsyssys_gettimeofday__STUB), 0);
  libsyssys_gettimeofday__STUB.common.info = scm__rc.d2149[694];
  libsyssys_gettimeofday__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[696]);
  scm__rc.d2149[703] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[357])),TRUE); /* current-microseconds */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[599]), scm__rc.d2149[703]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[600]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[601]), scm__rc.d2149[3]);
  scm__rc.d2149[704] = Scm_MakeExtendedPair(scm__rc.d2149[703], SCM_NIL, SCM_OBJ(&scm__rc.d2150[602]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("current-microseconds")), SCM_OBJ(&libsyscurrent_microseconds__STUB), 0);
  libsyscurrent_microseconds__STUB.common.info = scm__rc.d2149[704];
  libsyscurrent_microseconds__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[498]);
  scm__rc.d2149[705] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[358])),TRUE); /* sys-clock-gettime-monotonic */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[603]), scm__rc.d2149[705]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[604]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[605]), scm__rc.d2149[3]);
  scm__rc.d2149[706] = Scm_MakeExtendedPair(scm__rc.d2149[705], SCM_NIL, SCM_OBJ(&scm__rc.d2150[606]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[707]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[707]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[707]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[707]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-clock-gettime-monotonic")), SCM_OBJ(&libsyssys_clock_gettime_monotonic__STUB), 0);
  libsyssys_clock_gettime_monotonic__STUB.common.info = scm__rc.d2149[706];
  libsyssys_clock_gettime_monotonic__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[707]);
  scm__rc.d2149[714] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[359])),TRUE); /* sys-clock-getres-monotonic */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[607]), scm__rc.d2149[714]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[608]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[609]), scm__rc.d2149[3]);
  scm__rc.d2149[715] = Scm_MakeExtendedPair(scm__rc.d2149[714], SCM_NIL, SCM_OBJ(&scm__rc.d2150[610]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-clock-getres-monotonic")), SCM_OBJ(&libsyssys_clock_getres_monotonic__STUB), 0);
  libsyssys_clock_getres_monotonic__STUB.common.info = scm__rc.d2149[715];
  libsyssys_clock_getres_monotonic__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[707]);
  scm__rc.d2149[716] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[360])),TRUE); /* current-time */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[611]), scm__rc.d2149[716]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[612]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[613]), scm__rc.d2149[3]);
  scm__rc.d2149[717] = Scm_MakeExtendedPair(scm__rc.d2149[716], SCM_NIL, SCM_OBJ(&scm__rc.d2150[614]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("current-time")), SCM_OBJ(&libsyscurrent_time__STUB), 0);
  libsyscurrent_time__STUB.common.info = scm__rc.d2149[717];
  libsyscurrent_time__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[718] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[361])),TRUE); /* time? */
  scm__rc.d2149[719] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[362])),TRUE); /* obj */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[615]), scm__rc.d2149[719]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[618]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[619]), scm__rc.d2149[718]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[620]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[621]), scm__rc.d2149[3]);
  scm__rc.d2149[720] = Scm_MakeExtendedPair(scm__rc.d2149[718], SCM_OBJ(&scm__rc.d2150[615]), SCM_OBJ(&scm__rc.d2150[623]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[721]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[721]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[721]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[721]))[6] = scm__rc.d2149[620];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("time?")), SCM_OBJ(&libsystimeP__STUB), 0);
  libsystimeP__STUB.common.info = scm__rc.d2149[720];
  libsystimeP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[721]);
  scm__rc.d2149[728] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[364])),TRUE); /* time-utc */
  scm__rc.d2149[729] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[363])),TRUE); /* absolute-time */
  scm__rc.d2149[730] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[365])),TRUE); /* t0 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[624]), scm__rc.d2149[730]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[625]), scm__rc.d2149[358]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[626]), scm__rc.d2149[719]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[629]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[630]), scm__rc.d2149[729]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[631]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[632]), scm__rc.d2149[3]);
  scm__rc.d2149[731] = Scm_MakeExtendedPair(scm__rc.d2149[729], SCM_OBJ(&scm__rc.d2150[626]), SCM_OBJ(&scm__rc.d2150[634]));
  scm__rc.d2149[732] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[366])),TRUE); /* <time>? */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[733]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[733]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[733]))[5] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[733]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[733]))[7] = scm__rc.d2149[732];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("absolute-time")), SCM_OBJ(&libsysabsolute_time__STUB), 0);
  libsysabsolute_time__STUB.common.info = scm__rc.d2149[731];
  libsysabsolute_time__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[733]);
  scm__rc.d2149[741] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[367])),TRUE); /* seconds+ */
  scm__rc.d2149[743] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[368])),TRUE); /* <time> */
  scm__rc.d2149[742] = Scm_MakeIdentifier(scm__rc.d2149[743], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#<time> */
  scm__rc.d2149[745] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[369])),TRUE); /* of-type? */
  scm__rc.d2149[744] = Scm_MakeIdentifier(scm__rc.d2149[745], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#of-type? */
  scm__rc.d2149[746] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[370])),TRUE); /* t */
  scm__rc.d2149[748] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[371])),TRUE); /* type-error */
  scm__rc.d2149[747] = Scm_MakeIdentifier(scm__rc.d2149[748], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#type-error */
  scm__rc.d2149[750] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[372])),TRUE); /* <real> */
  scm__rc.d2149[749] = Scm_MakeIdentifier(scm__rc.d2149[750], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#<real> */
  scm__rc.d2149[751] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[373])),TRUE); /* dt */
  scm__rc.d2149[752] = Scm_MakeIdentifier(scm__rc.d2149[729], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#absolute-time */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[635]), scm__rc.d2149[751]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[636]), scm__rc.d2149[746]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[639]), scm__rc.d2149[2]);
  scm__rc.d2149[753] = Scm_MakeExtendedPair(scm__rc.d2149[741], SCM_OBJ(&scm__rc.d2150[636]), SCM_OBJ(&scm__rc.d2150[640]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[641]), scm__rc.d2149[753]);
  scm__rc.d2149[754] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[9]))->name = scm__rc.d2149[741];/* seconds+ */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[9]))->debugInfo = scm__rc.d2149[754];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[4] = SCM_WORD(scm__rc.d2149[742]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[6] = SCM_WORD(scm__rc.d2149[744]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[15] = SCM_WORD(scm__rc.d2149[746]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[17] = SCM_WORD(scm__rc.d2149[742]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[20] = SCM_WORD(scm__rc.d2149[747]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[25] = SCM_WORD(scm__rc.d2149[749]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[27] = SCM_WORD(scm__rc.d2149[744]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[36] = SCM_WORD(scm__rc.d2149[751]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[38] = SCM_WORD(scm__rc.d2149[749]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[41] = SCM_WORD(scm__rc.d2149[747]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[688]))[45] = SCM_WORD(scm__rc.d2149[752]);
  scm__rc.d2149[755] = Scm_MakeIdentifier(scm__rc.d2149[741], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#seconds+ */
  scm__rc.d2149[756] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[10]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[10]))->debugInfo = scm__rc.d2149[756];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[735]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[735]))[6] = SCM_WORD(scm__rc.d2149[741]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[735]))[13] = SCM_WORD(scm__rc.d2149[755]);
  scm__rc.d2149[757] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[374])),TRUE); /* time->seconds */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[642]), scm__rc.d2149[746]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[645]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[646]), scm__rc.d2149[757]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[647]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[648]), scm__rc.d2149[3]);
  scm__rc.d2149[758] = Scm_MakeExtendedPair(scm__rc.d2149[757], SCM_OBJ(&scm__rc.d2150[642]), SCM_OBJ(&scm__rc.d2150[650]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[759]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[759]))[4] = scm__rc.d2149[743];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[759]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[759]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("time->seconds")), SCM_OBJ(&libsystime_TOseconds__STUB), 0);
  libsystime_TOseconds__STUB.common.info = scm__rc.d2149[758];
  libsystime_TOseconds__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[759]);
  scm__rc.d2149[766] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[375])),TRUE); /* seconds->time */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[653]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[654]), scm__rc.d2149[766]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[655]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[656]), scm__rc.d2149[3]);
  scm__rc.d2149[767] = Scm_MakeExtendedPair(scm__rc.d2149[766], SCM_OBJ(&scm__rc.d2150[642]), SCM_OBJ(&scm__rc.d2150[658]));
  scm__rc.d2149[768] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[376])),TRUE); /* <double> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[769]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[769]))[4] = scm__rc.d2149[768];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[769]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[769]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("seconds->time")), SCM_OBJ(&libsysseconds_TOtime__STUB), 0);
  libsysseconds_TOtime__STUB.common.info = scm__rc.d2149[767];
  libsysseconds_TOtime__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[769]);
  scm__rc.d2149[776] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[377])),TRUE); /* time-comparator */
  scm__rc.d2149[777] = Scm_MakeIdentifier(scm__rc.d2149[718], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#time? */
  scm__rc.d2149[779] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[378])),TRUE); /* compare */
  scm__rc.d2149[778] = Scm_MakeIdentifier(scm__rc.d2149[779], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#compare */
  scm__rc.d2149[780] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[379])),TRUE); /* a */
  scm__rc.d2149[781] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[380])),TRUE); /* b */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[659]), scm__rc.d2149[781]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[660]), scm__rc.d2149[780]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[663]), scm__rc.d2149[2]);
  scm__rc.d2149[782] = Scm_MakeExtendedPair(SCM_FALSE, SCM_OBJ(&scm__rc.d2150[660]), SCM_OBJ(&scm__rc.d2150[664]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[665]), scm__rc.d2149[782]);
  scm__rc.d2149[783] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[11]))->debugInfo = scm__rc.d2149[783];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[750]))[5] = SCM_WORD(scm__rc.d2149[778]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[668]), scm__rc.d2149[2]);
  scm__rc.d2149[784] = Scm_MakeExtendedPair(SCM_FALSE, SCM_OBJ(&scm__rc.d2150[660]), SCM_OBJ(&scm__rc.d2150[669]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[670]), scm__rc.d2149[784]);
  scm__rc.d2149[785] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[12]))->debugInfo = scm__rc.d2149[785];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[760]))[5] = SCM_WORD(scm__rc.d2149[778]);
  scm__rc.d2149[787] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[381])),TRUE); /* default-hash */
  scm__rc.d2149[786] = Scm_MakeIdentifier(scm__rc.d2149[787], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#default-hash */
  scm__rc.d2149[789] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[382])),TRUE); /* make-comparator */
  scm__rc.d2149[788] = Scm_MakeIdentifier(scm__rc.d2149[789], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#make-comparator */
  scm__rc.d2149[790] = Scm_MakeIdentifier(scm__rc.d2149[776], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#time-comparator */
  scm__rc.d2149[791] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[13]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[13]))->debugInfo = scm__rc.d2149[791];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[770]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[770]))[6] = SCM_WORD(scm__rc.d2149[776]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[770]))[10] = SCM_WORD(scm__rc.d2149[777]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[770]))[17] = SCM_WORD(scm__rc.d2149[786]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[770]))[19] = SCM_WORD(scm__rc.d2149[788]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[770]))[22] = SCM_WORD(scm__rc.d2149[790]);
  Scm_InitStaticClassWithMeta(&Scm_sys_tm_Class, "<sys-tm>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_sys_tm_Class__SLOTS, 0);
  scm__rc.d2149[792] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[383])),TRUE); /* sys-asctime */
  scm__rc.d2149[793] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[384])),TRUE); /* tm */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[671]), scm__rc.d2149[793]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[674]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[675]), scm__rc.d2149[792]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[676]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[677]), scm__rc.d2149[3]);
  scm__rc.d2149[794] = Scm_MakeExtendedPair(scm__rc.d2149[792], SCM_OBJ(&scm__rc.d2150[671]), SCM_OBJ(&scm__rc.d2150[679]));
  scm__rc.d2149[795] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[385])),TRUE); /* <sys-tm> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[796]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[796]))[4] = scm__rc.d2149[795];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[796]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[796]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-asctime")), SCM_OBJ(&libsyssys_asctime__STUB), 0);
  libsyssys_asctime__STUB.common.info = scm__rc.d2149[794];
  libsyssys_asctime__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[796]);
  scm__rc.d2149[803] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[386])),TRUE); /* sys-ctime */
  scm__rc.d2149[804] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[387])),TRUE); /* time */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[680]), scm__rc.d2149[804]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[683]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[684]), scm__rc.d2149[803]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[685]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[686]), scm__rc.d2149[3]);
  scm__rc.d2149[805] = Scm_MakeExtendedPair(scm__rc.d2149[803], SCM_OBJ(&scm__rc.d2150[680]), SCM_OBJ(&scm__rc.d2150[688]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-ctime")), SCM_OBJ(&libsyssys_ctime__STUB), 0);
  libsyssys_ctime__STUB.common.info = scm__rc.d2149[805];
  libsyssys_ctime__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[611]);
  scm__rc.d2149[806] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[388])),TRUE); /* sys-difftime */
  scm__rc.d2149[807] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[389])),TRUE); /* time1 */
  scm__rc.d2149[808] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[390])),TRUE); /* time0 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[689]), scm__rc.d2149[808]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[690]), scm__rc.d2149[807]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[693]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[694]), scm__rc.d2149[806]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[695]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[696]), scm__rc.d2149[3]);
  scm__rc.d2149[809] = Scm_MakeExtendedPair(scm__rc.d2149[806], SCM_OBJ(&scm__rc.d2150[690]), SCM_OBJ(&scm__rc.d2150[698]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[5] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[810]))[7] = scm__rc.d2149[768];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-difftime")), SCM_OBJ(&libsyssys_difftime__STUB), 0);
  libsyssys_difftime__STUB.common.info = scm__rc.d2149[809];
  libsyssys_difftime__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[810]);
  scm__rc.d2149[818] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[391])),TRUE); /* sys-strftime */
  scm__rc.d2149[819] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[392])),TRUE); /* format */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[699]), scm__rc.d2149[819]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[702]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[703]), scm__rc.d2149[818]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[704]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[705]), scm__rc.d2149[3]);
  scm__rc.d2149[820] = Scm_MakeExtendedPair(scm__rc.d2149[818], SCM_OBJ(&scm__rc.d2150[699]), SCM_OBJ(&scm__rc.d2150[707]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[821]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[821]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[821]))[5] = scm__rc.d2149[795];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[821]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[821]))[7] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-strftime")), SCM_OBJ(&libsyssys_strftime__STUB), 0);
  libsyssys_strftime__STUB.common.info = scm__rc.d2149[820];
  libsyssys_strftime__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[821]);
  scm__rc.d2149[829] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[393])),TRUE); /* sys-gmtime */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[710]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[711]), scm__rc.d2149[829]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[712]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[713]), scm__rc.d2149[3]);
  scm__rc.d2149[830] = Scm_MakeExtendedPair(scm__rc.d2149[829], SCM_OBJ(&scm__rc.d2150[680]), SCM_OBJ(&scm__rc.d2150[715]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-gmtime")), SCM_OBJ(&libsyssys_gmtime__STUB), 0);
  libsyssys_gmtime__STUB.common.info = scm__rc.d2149[830];
  libsyssys_gmtime__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[611]);
  scm__rc.d2149[831] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[394])),TRUE); /* sys-localtime */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[718]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[719]), scm__rc.d2149[831]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[720]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[721]), scm__rc.d2149[3]);
  scm__rc.d2149[832] = Scm_MakeExtendedPair(scm__rc.d2149[831], SCM_OBJ(&scm__rc.d2150[680]), SCM_OBJ(&scm__rc.d2150[723]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-localtime")), SCM_OBJ(&libsyssys_localtime__STUB), 0);
  libsyssys_localtime__STUB.common.info = scm__rc.d2149[832];
  libsyssys_localtime__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[611]);
  scm__rc.d2149[833] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[395])),TRUE); /* sys-mktime */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[726]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[727]), scm__rc.d2149[833]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[728]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[729]), scm__rc.d2149[3]);
  scm__rc.d2149[834] = Scm_MakeExtendedPair(scm__rc.d2149[833], SCM_OBJ(&scm__rc.d2150[671]), SCM_OBJ(&scm__rc.d2150[731]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-mktime")), SCM_OBJ(&libsyssys_mktime__STUB), 0);
  libsyssys_mktime__STUB.common.info = scm__rc.d2149[834];
  libsyssys_mktime__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[796]);
  scm__rc.d2149[835] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[396])),TRUE); /* R_OK */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[835]), Scm_MakeInteger(R_OK), SCM_BINDING_CONST);

  scm__rc.d2149[836] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[397])),TRUE); /* W_OK */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[836]), Scm_MakeInteger(W_OK), SCM_BINDING_CONST);

  scm__rc.d2149[837] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[398])),TRUE); /* X_OK */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[837]), Scm_MakeInteger(X_OK), SCM_BINDING_CONST);

  scm__rc.d2149[838] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[399])),TRUE); /* F_OK */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[838]), Scm_MakeInteger(F_OK), SCM_BINDING_CONST);

  scm__rc.d2149[839] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[400])),TRUE); /* sys-access */
  scm__rc.d2149[840] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[401])),TRUE); /* amode */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[732]), scm__rc.d2149[840]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[733]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[736]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[737]), scm__rc.d2149[839]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[738]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[739]), scm__rc.d2149[3]);
  scm__rc.d2149[841] = Scm_MakeExtendedPair(scm__rc.d2149[839], SCM_OBJ(&scm__rc.d2150[733]), SCM_OBJ(&scm__rc.d2150[741]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[842]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[842]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[842]))[5] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[842]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[842]))[7] = scm__rc.d2149[620];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-access")), SCM_OBJ(&libsyssys_access__STUB), 0);
  libsyssys_access__STUB.common.info = scm__rc.d2149[841];
  libsyssys_access__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[842]);
  scm__rc.d2149[850] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[402])),TRUE); /* sys-chdir */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[744]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[745]), scm__rc.d2149[850]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[746]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[747]), scm__rc.d2149[3]);
  scm__rc.d2149[851] = Scm_MakeExtendedPair(scm__rc.d2149[850], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[749]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-chdir")), SCM_OBJ(&libsyssys_chdir__STUB), 0);
  libsyssys_chdir__STUB.common.info = scm__rc.d2149[851];
  libsyssys_chdir__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[431]);
  scm__rc.d2149[852] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[403])),TRUE); /* sys-chmod */
  scm__rc.d2149[853] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[404])),TRUE); /* mode */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[750]), scm__rc.d2149[853]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[751]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[754]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[755]), scm__rc.d2149[852]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[756]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[757]), scm__rc.d2149[3]);
  scm__rc.d2149[854] = Scm_MakeExtendedPair(scm__rc.d2149[852], SCM_OBJ(&scm__rc.d2150[751]), SCM_OBJ(&scm__rc.d2150[759]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[5] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[855]))[7] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-chmod")), SCM_OBJ(&libsyssys_chmod__STUB), 0);
  libsyssys_chmod__STUB.common.info = scm__rc.d2149[854];
  libsyssys_chmod__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[855]);
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[12])),TRUE); /* sys-fchmod */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[13])),TRUE); /* port-or-fd */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[20]), scm__rc.d2219[29]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[23]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[24]), scm__rc.d2219[28]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[25]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[26]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[30] = Scm_MakeExtendedPair(scm__rc.d2219[28], SCM_OBJ(&scm__rc.d2220[20]), SCM_OBJ(&scm__rc.d2220[28]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[14])),TRUE); /* <top> */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[15])),TRUE); /* <void> */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[33]))[3] = scm__rc.d2219[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[33]))[4] = scm__rc.d2219[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[33]))[5] = scm__rc.d2219[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[33]))[6] = scm__rc.d2219[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[33]))[7] = scm__rc.d2219[32];
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-fchmod")), SCM_OBJ(&libsyssys_fchmod__STUB), 0);
  libsyssys_fchmod__STUB.common.info = scm__rc.d2219[30];
  libsyssys_fchmod__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[33]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
  scm__rc.d2149[863] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[405])),TRUE); /* sys-chown */
  scm__rc.d2149[864] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[406])),TRUE); /* owner */
  scm__rc.d2149[865] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[407])),TRUE); /* group */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[760]), scm__rc.d2149[865]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[761]), scm__rc.d2149[864]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[762]), scm__rc.d2149[598]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[765]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[766]), scm__rc.d2149[863]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[767]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[768]), scm__rc.d2149[3]);
  scm__rc.d2149[866] = Scm_MakeExtendedPair(scm__rc.d2149[863], SCM_OBJ(&scm__rc.d2150[762]), SCM_OBJ(&scm__rc.d2150[770]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[867]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[867]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[867]))[5] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[867]))[6] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[867]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[867]))[8] = scm__rc.d2149[242];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-chown")), SCM_OBJ(&libsyssys_chown__STUB), 0);
  libsyssys_chown__STUB.common.info = scm__rc.d2149[866];
  libsyssys_chown__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[867]);
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[0])),TRUE); /* sys-lchown */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[1])),TRUE); /* path */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[2])),TRUE); /* owner */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[3])),TRUE); /* group */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2229[1]), scm__rc.d2228[3]);
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2229[2]), scm__rc.d2228[2]);
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2229[3]), scm__rc.d2228[1]);
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[4])),TRUE); /* source-info */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2229[6]), scm__rc.d2228[4]);
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[6])),TRUE); /* bind-info */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[7])),TRUE); /* gauche */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2229[7]), scm__rc.d2228[0]);
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2229[8]), scm__rc.d2228[6]);
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2229[9]), scm__rc.d2228[5]);
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[7] = Scm_MakeExtendedPair(scm__rc.d2228[0], SCM_OBJ(&scm__rc.d2229[3]), SCM_OBJ(&scm__rc.d2229[11]));
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[8])),TRUE); /* <const-cstring> */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[9])),TRUE); /* <int> */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  scm__rc.d2228[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[10])),TRUE); /* -> */
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2228[11]))[3] = scm__rc.d2228[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2228[11]))[4] = scm__rc.d2228[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2228[11]))[5] = scm__rc.d2228[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2228[11]))[6] = scm__rc.d2228[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2228[11]))[7] = scm__rc.d2228[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2228[11]))[8] = scm__rc.d2228[9];
#endif /* defined(HAVE_LCHOWN) */
#if defined(HAVE_LCHOWN)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-lchown")), SCM_OBJ(&libsyssys_lchown__STUB), 0);
  libsyssys_lchown__STUB.common.info = scm__rc.d2228[7];
  libsyssys_lchown__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2228[11]);
#endif /* defined(HAVE_LCHOWN) */
  scm__rc.d2149[876] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[408])),TRUE); /* sys-fork */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[771]), scm__rc.d2149[876]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[772]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[773]), scm__rc.d2149[3]);
  scm__rc.d2149[877] = Scm_MakeExtendedPair(scm__rc.d2149[876], SCM_NIL, SCM_OBJ(&scm__rc.d2150[774]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-fork")), SCM_OBJ(&libsyssys_fork__STUB), 0);
  libsyssys_fork__STUB.common.info = scm__rc.d2149[877];
  libsyssys_fork__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
  scm__rc.d2149[878] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[409]))); /* :iomap */
  scm__rc.d2149[879] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[410]))); /* :sigmask */
  scm__rc.d2149[880] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[411]))); /* :directory */
  scm__rc.d2149[881] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[412]))); /* :detached */
  scm__rc.d2149[882] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[413]))); /* :environment */
  scm__rc.d2149[883] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[414])),TRUE); /* sys-exec */
  scm__rc.d2149[884] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[415])),TRUE); /* args */
  scm__rc.d2149[885] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[409])),TRUE); /* iomap */
  scm__rc.d2149[886] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[410])),TRUE); /* sigmask */
  scm__rc.d2149[887] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[411])),TRUE); /* directory */
  scm__rc.d2149[888] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[412])),TRUE); /* detached */
  scm__rc.d2149[889] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[413])),TRUE); /* environment */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[775]), scm__rc.d2149[889]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[776]), scm__rc.d2149[888]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[777]), scm__rc.d2149[887]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[778]), scm__rc.d2149[886]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[779]), scm__rc.d2149[885]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[780]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[781]), scm__rc.d2149[884]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[782]), scm__rc.d2149[486]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[785]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[786]), scm__rc.d2149[883]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[787]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[788]), scm__rc.d2149[3]);
  scm__rc.d2149[890] = Scm_MakeExtendedPair(scm__rc.d2149[883], SCM_OBJ(&scm__rc.d2150[782]), SCM_OBJ(&scm__rc.d2150[790]));
  scm__rc.d2149[891] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[416])),TRUE); /* <list> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[892]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[892]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[892]))[5] = scm__rc.d2149[891];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[892]))[6] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[892]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[892]))[8] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-exec")), SCM_OBJ(&libsyssys_exec__STUB), 0);
  libsyssys_exec__STUB.common.info = scm__rc.d2149[890];
  libsyssys_exec__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[892]);
  scm__rc.d2149[901] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[417])),TRUE); /* sys-fork-and-exec */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[793]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[794]), scm__rc.d2149[901]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[795]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[796]), scm__rc.d2149[3]);
  scm__rc.d2149[902] = Scm_MakeExtendedPair(scm__rc.d2149[901], SCM_OBJ(&scm__rc.d2150[782]), SCM_OBJ(&scm__rc.d2150[798]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[903]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[903]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[903]))[5] = scm__rc.d2149[891];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[903]))[6] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[903]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[903]))[8] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-fork-and-exec")), SCM_OBJ(&libsyssys_fork_and_exec__STUB), 0);
  libsyssys_fork_and_exec__STUB.common.info = scm__rc.d2149[902];
  libsyssys_fork_and_exec__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[903]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[799]), scm__rc.d2149[62]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[800]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[801]), scm__rc.d2149[3]);
  scm__rc.d2149[912] = Scm_MakeExtendedPair(scm__rc.d2149[62], SCM_NIL, SCM_OBJ(&scm__rc.d2150[802]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getcwd")), SCM_OBJ(&libsyssys_getcwd__STUB), 0);
  libsyssys_getcwd__STUB.common.info = scm__rc.d2149[912];
  libsyssys_getcwd__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[913] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[418])),TRUE); /* sys-getegid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[803]), scm__rc.d2149[913]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[804]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[805]), scm__rc.d2149[3]);
  scm__rc.d2149[914] = Scm_MakeExtendedPair(scm__rc.d2149[913], SCM_NIL, SCM_OBJ(&scm__rc.d2150[806]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getegid")), SCM_OBJ(&libsyssys_getegid__STUB), 0);
  libsyssys_getegid__STUB.common.info = scm__rc.d2149[914];
  libsyssys_getegid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
  scm__rc.d2149[915] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[419])),TRUE); /* sys-getgid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[807]), scm__rc.d2149[915]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[808]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[809]), scm__rc.d2149[3]);
  scm__rc.d2149[916] = Scm_MakeExtendedPair(scm__rc.d2149[915], SCM_NIL, SCM_OBJ(&scm__rc.d2150[810]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getgid")), SCM_OBJ(&libsyssys_getgid__STUB), 0);
  libsyssys_getgid__STUB.common.info = scm__rc.d2149[916];
  libsyssys_getgid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
  scm__rc.d2149[917] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[420])),TRUE); /* sys-geteuid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[811]), scm__rc.d2149[917]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[812]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[813]), scm__rc.d2149[3]);
  scm__rc.d2149[918] = Scm_MakeExtendedPair(scm__rc.d2149[917], SCM_NIL, SCM_OBJ(&scm__rc.d2150[814]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-geteuid")), SCM_OBJ(&libsyssys_geteuid__STUB), 0);
  libsyssys_geteuid__STUB.common.info = scm__rc.d2149[918];
  libsyssys_geteuid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[815]), scm__rc.d2149[46]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[816]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[817]), scm__rc.d2149[3]);
  scm__rc.d2149[919] = Scm_MakeExtendedPair(scm__rc.d2149[46], SCM_NIL, SCM_OBJ(&scm__rc.d2150[818]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getuid")), SCM_OBJ(&libsyssys_getuid__STUB), 0);
  libsyssys_getuid__STUB.common.info = scm__rc.d2149[919];
  libsyssys_getuid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
  scm__rc.d2149[920] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[421])),TRUE); /* sys-setugid? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[819]), scm__rc.d2149[920]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[820]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[821]), scm__rc.d2149[3]);
  scm__rc.d2149[921] = Scm_MakeExtendedPair(scm__rc.d2149[920], SCM_NIL, SCM_OBJ(&scm__rc.d2150[822]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[922]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[922]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[922]))[5] = scm__rc.d2149[620];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-setugid?")), SCM_OBJ(&libsyssys_setugidP__STUB), 0);
  libsyssys_setugidP__STUB.common.info = scm__rc.d2149[921];
  libsyssys_setugidP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[922]);
  scm__rc.d2149[928] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[422])),TRUE); /* sys-getpid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[823]), scm__rc.d2149[928]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[824]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[825]), scm__rc.d2149[3]);
  scm__rc.d2149[929] = Scm_MakeExtendedPair(scm__rc.d2149[928], SCM_NIL, SCM_OBJ(&scm__rc.d2150[826]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getpid")), SCM_OBJ(&libsyssys_getpid__STUB), 0);
  libsyssys_getpid__STUB.common.info = scm__rc.d2149[929];
  libsyssys_getpid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
  scm__rc.d2149[930] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[423])),TRUE); /* sys-getppid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[827]), scm__rc.d2149[930]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[828]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[829]), scm__rc.d2149[3]);
  scm__rc.d2149[931] = Scm_MakeExtendedPair(scm__rc.d2149[930], SCM_NIL, SCM_OBJ(&scm__rc.d2150[830]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getppid")), SCM_OBJ(&libsyssys_getppid__STUB), 0);
  libsyssys_getppid__STUB.common.info = scm__rc.d2149[931];
  libsyssys_getppid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[41] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[16])),TRUE); /* sys-setgid */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[17])),TRUE); /* gid */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[29]), scm__rc.d2219[42]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[32]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[33]), scm__rc.d2219[41]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[34]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[35]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[43] = Scm_MakeExtendedPair(scm__rc.d2219[41], SCM_OBJ(&scm__rc.d2220[29]), SCM_OBJ(&scm__rc.d2220[37]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[44]))[3] = scm__rc.d2219[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[44]))[4] = scm__rc.d2219[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[44]))[5] = scm__rc.d2219[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[44]))[6] = scm__rc.d2219[19];
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-setgid")), SCM_OBJ(&libsyssys_setgid__STUB), 0);
  libsyssys_setgid__STUB.common.info = scm__rc.d2219[43];
  libsyssys_setgid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[44]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[51] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[18])),TRUE); /* sys-setpgid */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[19])),TRUE); /* pid */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[53] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[20])),TRUE); /* pgid */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[38]), scm__rc.d2219[53]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[39]), scm__rc.d2219[52]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[42]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[43]), scm__rc.d2219[51]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[44]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[45]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[54] = Scm_MakeExtendedPair(scm__rc.d2219[51], SCM_OBJ(&scm__rc.d2220[39]), SCM_OBJ(&scm__rc.d2220[47]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[55]))[3] = scm__rc.d2219[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[55]))[4] = scm__rc.d2219[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[55]))[5] = scm__rc.d2219[19];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[55]))[6] = scm__rc.d2219[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[55]))[7] = scm__rc.d2219[19];
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-setpgid")), SCM_OBJ(&libsyssys_setpgid__STUB), 0);
  libsyssys_setpgid__STUB.common.info = scm__rc.d2219[54];
  libsyssys_setpgid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[55]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  scm__rc.d2231[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2230[0])),TRUE); /* sys-getpgid */
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  scm__rc.d2231[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2230[1])),TRUE); /* pid */
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2232[1]), scm__rc.d2231[1]);
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  scm__rc.d2231[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2230[2])),TRUE); /* source-info */
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2232[4]), scm__rc.d2231[2]);
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  scm__rc.d2231[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2230[4])),TRUE); /* bind-info */
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  scm__rc.d2231[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2230[5])),TRUE); /* gauche */
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2232[5]), scm__rc.d2231[0]);
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2232[6]), scm__rc.d2231[4]);
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2232[7]), scm__rc.d2231[3]);
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  scm__rc.d2231[5] = Scm_MakeExtendedPair(scm__rc.d2231[0], SCM_OBJ(&scm__rc.d2232[1]), SCM_OBJ(&scm__rc.d2232[9]));
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  scm__rc.d2231[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2230[6])),TRUE); /* <int> */
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  scm__rc.d2231[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2230[7])),TRUE); /* -> */
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2231[8]))[3] = scm__rc.d2231[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2231[8]))[4] = scm__rc.d2231[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2231[8]))[5] = scm__rc.d2231[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2231[8]))[6] = scm__rc.d2231[6];
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_GETPGID)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getpgid")), SCM_OBJ(&libsyssys_getpgid__STUB), 0);
  libsyssys_getpgid__STUB.common.info = scm__rc.d2231[5];
  libsyssys_getpgid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2231[8]);
#endif /* defined(HAVE_GETPGID) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[21])),TRUE); /* sys-getpgrp */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[50]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[51]), scm__rc.d2219[63]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[52]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[53]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[64] = Scm_MakeExtendedPair(scm__rc.d2219[63], SCM_NIL, SCM_OBJ(&scm__rc.d2220[55]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[65]))[3] = scm__rc.d2219[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[65]))[4] = scm__rc.d2219[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[65]))[5] = scm__rc.d2219[19];
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getpgrp")), SCM_OBJ(&libsyssys_getpgrp__STUB), 0);
  libsyssys_getpgrp__STUB.common.info = scm__rc.d2219[64];
  libsyssys_getpgrp__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[65]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[71] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[22])),TRUE); /* sys-setsid */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[58]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[59]), scm__rc.d2219[71]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[60]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[61]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[72] = Scm_MakeExtendedPair(scm__rc.d2219[71], SCM_NIL, SCM_OBJ(&scm__rc.d2220[63]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-setsid")), SCM_OBJ(&libsyssys_setsid__STUB), 0);
  libsyssys_setsid__STUB.common.info = scm__rc.d2219[72];
  libsyssys_setsid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[65]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[73] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[23])),TRUE); /* sys-setuid */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[74] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[24])),TRUE); /* uid */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[64]), scm__rc.d2219[74]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[67]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[68]), scm__rc.d2219[73]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[69]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[70]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[75] = Scm_MakeExtendedPair(scm__rc.d2219[73], SCM_OBJ(&scm__rc.d2220[64]), SCM_OBJ(&scm__rc.d2220[72]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-setuid")), SCM_OBJ(&libsyssys_setuid__STUB), 0);
  libsyssys_setuid__STUB.common.info = scm__rc.d2219[75];
  libsyssys_setuid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[44]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[76] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[25])),TRUE); /* sys-nice */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[77] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[26])),TRUE); /* inc */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[73]), scm__rc.d2219[77]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[76]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[77]), scm__rc.d2219[76]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[78]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[79]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[78] = Scm_MakeExtendedPair(scm__rc.d2219[76], SCM_OBJ(&scm__rc.d2220[73]), SCM_OBJ(&scm__rc.d2220[81]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-nice")), SCM_OBJ(&libsyssys_nice__STUB), 0);
  libsyssys_nice__STUB.common.info = scm__rc.d2219[78];
  libsyssys_nice__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[44]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2218[27])),TRUE); /* sys-getgroups */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[84]), scm__rc.d2219[2]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[85]), scm__rc.d2219[79]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[86]), scm__rc.d2219[4]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2220[87]), scm__rc.d2219[3]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  scm__rc.d2219[80] = Scm_MakeExtendedPair(scm__rc.d2219[79], SCM_NIL, SCM_OBJ(&scm__rc.d2220[89]));
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[81]))[3] = scm__rc.d2219[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[81]))[4] = scm__rc.d2219[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2219[81]))[5] = scm__rc.d2219[31];
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getgroups")), SCM_OBJ(&libsyssys_getgroups__STUB), 0);
  libsyssys_getgroups__STUB.common.info = scm__rc.d2219[80];
  libsyssys_getgroups__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2219[81]);
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  scm__rc.d2236[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2234[0])),TRUE); /* sys-setgroups */
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  scm__rc.d2236[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2234[1])),TRUE); /* gids */
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2237[1]), scm__rc.d2236[1]);
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  scm__rc.d2236[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2234[2])),TRUE); /* source-info */
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2237[4]), scm__rc.d2236[2]);
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  scm__rc.d2236[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2234[4])),TRUE); /* bind-info */
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  scm__rc.d2236[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2234[5])),TRUE); /* gauche */
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2237[5]), scm__rc.d2236[0]);
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2237[6]), scm__rc.d2236[4]);
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2237[7]), scm__rc.d2236[3]);
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  scm__rc.d2236[5] = Scm_MakeExtendedPair(scm__rc.d2236[0], SCM_OBJ(&scm__rc.d2237[1]), SCM_OBJ(&scm__rc.d2237[9]));
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  scm__rc.d2236[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2234[6])),TRUE); /* <top> */
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  scm__rc.d2236[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2234[7])),TRUE); /* -> */
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  scm__rc.d2236[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2234[8])),TRUE); /* <void> */
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2236[9]))[3] = scm__rc.d2236[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2236[9]))[4] = scm__rc.d2236[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2236[9]))[5] = scm__rc.d2236[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2236[9]))[6] = scm__rc.d2236[8];
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
#if !(defined(GAUCHE_WINDOWS))
#if defined(HAVE_SETGROUPS)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-setgroups")), SCM_OBJ(&libsyssys_setgroups__STUB), 0);
  libsyssys_setgroups__STUB.common.info = scm__rc.d2236[5];
  libsyssys_setgroups__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2236[9]);
#endif /* defined(HAVE_SETGROUPS) */
#endif /* !(defined(GAUCHE_WINDOWS)) */
  scm__rc.d2149[932] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[424])),TRUE); /* sys-setpgrp */
  scm__rc.d2149[934] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[425])),TRUE); /* sys-setpgid */
  scm__rc.d2149[933] = Scm_MakeIdentifier(scm__rc.d2149[934], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-setpgid */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[833]), scm__rc.d2149[2]);
  scm__rc.d2149[935] = Scm_MakeExtendedPair(scm__rc.d2149[932], SCM_NIL, SCM_OBJ(&scm__rc.d2150[834]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[835]), scm__rc.d2149[935]);
  scm__rc.d2149[936] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[14]))->name = scm__rc.d2149[932];/* sys-setpgrp */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[14]))->debugInfo = scm__rc.d2149[936];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[794]))[3] = SCM_WORD(scm__rc.d2149[933]);
  scm__rc.d2149[937] = Scm_MakeIdentifier(scm__rc.d2149[932], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-setpgrp */
  scm__rc.d2149[938] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[15]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[15]))->debugInfo = scm__rc.d2149[938];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[799]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[799]))[6] = SCM_WORD(scm__rc.d2149[932]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[799]))[13] = SCM_WORD(scm__rc.d2149[937]);
  scm__rc.d2149[939] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[426])),TRUE); /* sys-getlogin */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[836]), scm__rc.d2149[939]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[837]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[838]), scm__rc.d2149[3]);
  scm__rc.d2149[940] = Scm_MakeExtendedPair(scm__rc.d2149[939], SCM_NIL, SCM_OBJ(&scm__rc.d2150[839]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[941]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[941]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[941]))[5] = scm__rc.d2149[274];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getlogin")), SCM_OBJ(&libsyssys_getlogin__STUB), 0);
  libsyssys_getlogin__STUB.common.info = scm__rc.d2149[940];
  libsyssys_getlogin__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[941]);
  scm__rc.d2149[947] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[427])),TRUE); /* sys-link */
  scm__rc.d2149[948] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[428])),TRUE); /* existing */
  scm__rc.d2149[949] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[429])),TRUE); /* newpath */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[840]), scm__rc.d2149[949]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[841]), scm__rc.d2149[948]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[844]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[845]), scm__rc.d2149[947]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[846]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[847]), scm__rc.d2149[3]);
  scm__rc.d2149[950] = Scm_MakeExtendedPair(scm__rc.d2149[947], SCM_OBJ(&scm__rc.d2150[841]), SCM_OBJ(&scm__rc.d2150[849]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-link")), SCM_OBJ(&libsyssys_link__STUB), 0);
  libsyssys_link__STUB.common.info = scm__rc.d2149[950];
  libsyssys_link__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[442]);
  scm__rc.d2149[951] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[430])),TRUE); /* sys-pause */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[850]), scm__rc.d2149[951]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[851]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[852]), scm__rc.d2149[3]);
  scm__rc.d2149[952] = Scm_MakeExtendedPair(scm__rc.d2149[951], SCM_NIL, SCM_OBJ(&scm__rc.d2150[853]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-pause")), SCM_OBJ(&libsyssys_pause__STUB), 0);
  libsyssys_pause__STUB.common.info = scm__rc.d2149[952];
  libsyssys_pause__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[953] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[431])),TRUE); /* sys-alarm */
  scm__rc.d2149[954] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[432])),TRUE); /* seconds */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[854]), scm__rc.d2149[954]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[857]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[858]), scm__rc.d2149[953]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[859]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[860]), scm__rc.d2149[3]);
  scm__rc.d2149[955] = Scm_MakeExtendedPair(scm__rc.d2149[953], SCM_OBJ(&scm__rc.d2150[854]), SCM_OBJ(&scm__rc.d2150[862]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[956]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[956]))[4] = scm__rc.d2149[91];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[956]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[956]))[6] = scm__rc.d2149[242];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-alarm")), SCM_OBJ(&libsyssys_alarm__STUB), 0);
  libsyssys_alarm__STUB.common.info = scm__rc.d2149[955];
  libsyssys_alarm__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[956]);
  scm__rc.d2149[963] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59]))); /* :name */
  scm__rc.d2149[964] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[434]))); /* :buffering */
  scm__rc.d2149[965] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[435]))); /* :buffered? */
  scm__rc.d2149[966] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[436])),TRUE); /* sys-pipe */
  scm__rc.d2149[967] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[434])),TRUE); /* buffering */
  scm__rc.d2149[968] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[435])),TRUE); /* buffered? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[863]), scm__rc.d2149[968]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[864]), scm__rc.d2149[967]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[865]), scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[866]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[869]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[870]), scm__rc.d2149[966]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[871]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[872]), scm__rc.d2149[3]);
  scm__rc.d2149[969] = Scm_MakeExtendedPair(scm__rc.d2149[966], SCM_OBJ(&scm__rc.d2150[866]), SCM_OBJ(&scm__rc.d2150[874]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[970]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[970]))[4] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[970]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[970]))[6] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[970]))[7] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-pipe")), SCM_OBJ(&libsyssys_pipe__STUB), 0);
  libsyssys_pipe__STUB.common.info = scm__rc.d2149[969];
  libsyssys_pipe__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[970]);
  scm__rc.d2149[978] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[437])),TRUE); /* sys-close */
  scm__rc.d2149[979] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[438])),TRUE); /* fd */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[875]), scm__rc.d2149[979]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[878]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[879]), scm__rc.d2149[978]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[880]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[881]), scm__rc.d2149[3]);
  scm__rc.d2149[980] = Scm_MakeExtendedPair(scm__rc.d2149[978], SCM_OBJ(&scm__rc.d2150[875]), SCM_OBJ(&scm__rc.d2150[883]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[981]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[981]))[4] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[981]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[981]))[6] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-close")), SCM_OBJ(&libsyssys_close__STUB), 0);
  libsyssys_close__STUB.common.info = scm__rc.d2149[980];
  libsyssys_close__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[981]);
  scm__rc.d2149[988] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[439])),TRUE); /* sys-mkdir */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[886]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[887]), scm__rc.d2149[988]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[888]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[889]), scm__rc.d2149[3]);
  scm__rc.d2149[989] = Scm_MakeExtendedPair(scm__rc.d2149[988], SCM_OBJ(&scm__rc.d2150[751]), SCM_OBJ(&scm__rc.d2150[891]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-mkdir")), SCM_OBJ(&libsyssys_mkdir__STUB), 0);
  libsyssys_mkdir__STUB.common.info = scm__rc.d2149[989];
  libsyssys_mkdir__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[855]);
  scm__rc.d2149[990] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[440])),TRUE); /* sys-rmdir */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[894]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[895]), scm__rc.d2149[990]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[896]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[897]), scm__rc.d2149[3]);
  scm__rc.d2149[991] = Scm_MakeExtendedPair(scm__rc.d2149[990], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[899]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-rmdir")), SCM_OBJ(&libsyssys_rmdir__STUB), 0);
  libsyssys_rmdir__STUB.common.info = scm__rc.d2149[991];
  libsyssys_rmdir__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[431]);
  scm__rc.d2149[992] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[441])),TRUE); /* sys-umask */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[900]), scm__rc.d2149[358]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[903]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[904]), scm__rc.d2149[992]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[905]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[906]), scm__rc.d2149[3]);
  scm__rc.d2149[993] = Scm_MakeExtendedPair(scm__rc.d2149[992], SCM_OBJ(&scm__rc.d2150[900]), SCM_OBJ(&scm__rc.d2150[908]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[994]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[994]))[4] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[994]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[994]))[6] = scm__rc.d2149[242];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-umask")), SCM_OBJ(&libsyssys_umask__STUB), 0);
  libsyssys_umask__STUB.common.info = scm__rc.d2149[993];
  libsyssys_umask__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[994]);
  scm__rc.d2149[1001] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[442])),TRUE); /* sys-sleep */
  scm__rc.d2149[1002] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[443])),TRUE); /* no-retry */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[909]), scm__rc.d2149[1002]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[910]), scm__rc.d2149[358]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[911]), scm__rc.d2149[954]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[914]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[915]), scm__rc.d2149[1001]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[916]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[917]), scm__rc.d2149[3]);
  scm__rc.d2149[1003] = Scm_MakeExtendedPair(scm__rc.d2149[1001], SCM_OBJ(&scm__rc.d2150[911]), SCM_OBJ(&scm__rc.d2150[919]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1004]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1004]))[4] = scm__rc.d2149[91];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1004]))[5] = scm__rc.d2149[319];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1004]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1004]))[7] = scm__rc.d2149[242];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-sleep")), SCM_OBJ(&libsyssys_sleep__STUB), 0);
  libsyssys_sleep__STUB.common.info = scm__rc.d2149[1003];
  libsyssys_sleep__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[1004]);
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2238[0])),TRUE); /* sys-nanosleep */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2238[1])),TRUE); /* nanoseconds */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[2] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2238[2]))); /* :optional */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2238[3])),TRUE); /* no-retry */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2240[1]), scm__rc.d2239[3]);
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2240[2]), scm__rc.d2239[2]);
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2240[3]), scm__rc.d2239[1]);
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2238[4])),TRUE); /* source-info */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2240[6]), scm__rc.d2239[4]);
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2238[6])),TRUE); /* bind-info */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2238[7])),TRUE); /* gauche */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2240[7]), scm__rc.d2239[0]);
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2240[8]), scm__rc.d2239[6]);
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2240[9]), scm__rc.d2239[5]);
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[7] = Scm_MakeExtendedPair(scm__rc.d2239[0], SCM_OBJ(&scm__rc.d2240[3]), SCM_OBJ(&scm__rc.d2240[11]));
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2238[8])),TRUE); /* <top> */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2238[9])),TRUE); /* * */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  scm__rc.d2239[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2238[10])),TRUE); /* -> */
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  ((ScmObj*)SCM_OBJ(&scm__rc.d2239[11]))[3] = scm__rc.d2239[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2239[11]))[4] = scm__rc.d2239[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2239[11]))[5] = scm__rc.d2239[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2239[11]))[6] = scm__rc.d2239[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2239[11]))[7] = scm__rc.d2239[8];
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
#if (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS))
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-nanosleep")), SCM_OBJ(&libsyssys_nanosleep__STUB), 0);
  libsyssys_nanosleep__STUB.common.info = scm__rc.d2239[7];
  libsyssys_nanosleep__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2239[11]);
#endif /* (defined(HAVE_NANOSLEEP))||(defined(GAUCHE_WINDOWS)) */
  scm__rc.d2149[1012] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[444])),TRUE); /* sys-unlink */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[922]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[923]), scm__rc.d2149[1012]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[924]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[925]), scm__rc.d2149[3]);
  scm__rc.d2149[1013] = Scm_MakeExtendedPair(scm__rc.d2149[1012], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[927]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-unlink")), SCM_OBJ(&libsyssys_unlink__STUB), 0);
  libsyssys_unlink__STUB.common.info = scm__rc.d2149[1013];
  libsyssys_unlink__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[257]);
  scm__rc.d2149[1014] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[445])),TRUE); /* sys-isatty */
  scm__rc.d2149[1015] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[446])),TRUE); /* port_or_fd */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[928]), scm__rc.d2149[1015]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[931]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[932]), scm__rc.d2149[1014]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[933]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[934]), scm__rc.d2149[3]);
  scm__rc.d2149[1016] = Scm_MakeExtendedPair(scm__rc.d2149[1014], SCM_OBJ(&scm__rc.d2150[928]), SCM_OBJ(&scm__rc.d2150[936]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-isatty")), SCM_OBJ(&libsyssys_isatty__STUB), 0);
  libsyssys_isatty__STUB.common.info = scm__rc.d2149[1016];
  libsyssys_isatty__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[721]);
  scm__rc.d2149[1017] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[447])),TRUE); /* sys-ttyname */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[939]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[940]), scm__rc.d2149[1017]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[941]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[942]), scm__rc.d2149[3]);
  scm__rc.d2149[1018] = Scm_MakeExtendedPair(scm__rc.d2149[1017], SCM_OBJ(&scm__rc.d2150[928]), SCM_OBJ(&scm__rc.d2150[944]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1019]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1019]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1019]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1019]))[6] = scm__rc.d2149[274];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-ttyname")), SCM_OBJ(&libsyssys_ttyname__STUB), 0);
  libsyssys_ttyname__STUB.common.info = scm__rc.d2149[1018];
  libsyssys_ttyname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[1019]);
  scm__rc.d2149[1026] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[448])),TRUE); /* sys-truncate */
  scm__rc.d2149[1027] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[449])),TRUE); /* length */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[945]), scm__rc.d2149[1027]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[946]), scm__rc.d2149[598]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[949]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[950]), scm__rc.d2149[1026]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[951]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[952]), scm__rc.d2149[3]);
  scm__rc.d2149[1028] = Scm_MakeExtendedPair(scm__rc.d2149[1026], SCM_OBJ(&scm__rc.d2150[946]), SCM_OBJ(&scm__rc.d2150[954]));
  scm__rc.d2149[1029] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[450])),TRUE); /* <integer> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1030]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1030]))[4] = scm__rc.d2149[256];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1030]))[5] = scm__rc.d2149[1029];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1030]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1030]))[7] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-truncate")), SCM_OBJ(&libsyssys_truncate__STUB), 0);
  libsyssys_truncate__STUB.common.info = scm__rc.d2149[1028];
  libsyssys_truncate__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[1030]);
  scm__rc.d2149[1038] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[451])),TRUE); /* sys-ftruncate */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[955]), scm__rc.d2149[1015]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[958]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[959]), scm__rc.d2149[1038]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[960]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[961]), scm__rc.d2149[3]);
  scm__rc.d2149[1039] = Scm_MakeExtendedPair(scm__rc.d2149[1038], SCM_OBJ(&scm__rc.d2150[955]), SCM_OBJ(&scm__rc.d2150[963]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1040]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1040]))[4] = scm__rc.d2149[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1040]))[5] = scm__rc.d2149[1029];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1040]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[1040]))[7] = scm__rc.d2149[347];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-ftruncate")), SCM_OBJ(&libsyssys_ftruncate__STUB), 0);
  libsyssys_ftruncate__STUB.common.info = scm__rc.d2149[1039];
  libsyssys_ftruncate__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[1040]);
#if defined(HAVE_CRYPT)
  scm__rc.d2242[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2241[0])),TRUE); /* sys-crypt */
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  scm__rc.d2242[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2241[1])),TRUE); /* key */
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  scm__rc.d2242[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2241[2])),TRUE); /* salt */
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2243[1]), scm__rc.d2242[2]);
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2243[2]), scm__rc.d2242[1]);
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  scm__rc.d2242[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2241[3])),TRUE); /* source-info */
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2243[5]), scm__rc.d2242[3]);
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  scm__rc.d2242[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2241[5])),TRUE); /* bind-info */
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  scm__rc.d2242[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2241[6])),TRUE); /* gauche */
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2243[6]), scm__rc.d2242[0]);
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2243[7]), scm__rc.d2242[5]);
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2243[8]), scm__rc.d2242[4]);
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  scm__rc.d2242[6] = Scm_MakeExtendedPair(scm__rc.d2242[0], SCM_OBJ(&scm__rc.d2243[2]), SCM_OBJ(&scm__rc.d2243[10]));
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  scm__rc.d2242[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2241[7])),TRUE); /* <const-cstring> */
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  scm__rc.d2242[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2241[8])),TRUE); /* -> */
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2242[9]))[3] = scm__rc.d2242[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2242[9]))[4] = scm__rc.d2242[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2242[9]))[5] = scm__rc.d2242[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2242[9]))[6] = scm__rc.d2242[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2242[9]))[7] = scm__rc.d2242[7];
#endif /* defined(HAVE_CRYPT) */
#if defined(HAVE_CRYPT)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-crypt")), SCM_OBJ(&libsyssys_crypt__STUB), 0);
  libsyssys_crypt__STUB.common.info = scm__rc.d2242[6];
  libsyssys_crypt__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2242[9]);
#endif /* defined(HAVE_CRYPT) */
  scm__rc.d2149[1048] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[452])),TRUE); /* sys-gethostname */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[964]), scm__rc.d2149[1048]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[965]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[966]), scm__rc.d2149[3]);
  scm__rc.d2149[1049] = Scm_MakeExtendedPair(scm__rc.d2149[1048], SCM_NIL, SCM_OBJ(&scm__rc.d2150[967]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-gethostname")), SCM_OBJ(&libsyssys_gethostname__STUB), 0);
  libsyssys_gethostname__STUB.common.info = scm__rc.d2149[1049];
  libsyssys_gethostname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
  scm__rc.d2149[1050] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[453])),TRUE); /* sys-getdomainname */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[968]), scm__rc.d2149[1050]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[969]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[970]), scm__rc.d2149[3]);
  scm__rc.d2149[1051] = Scm_MakeExtendedPair(scm__rc.d2149[1050], SCM_NIL, SCM_OBJ(&scm__rc.d2150[971]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-getdomainname")), SCM_OBJ(&libsyssys_getdomainname__STUB), 0);
  libsyssys_getdomainname__STUB.common.info = scm__rc.d2149[1051];
  libsyssys_getdomainname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[18]);
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2244[0])),TRUE); /* sys-symlink */
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2244[1])),TRUE); /* existing */
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2244[2])),TRUE); /* newpath */
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2246[1]), scm__rc.d2245[2]);
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2246[2]), scm__rc.d2245[1]);
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2244[3])),TRUE); /* source-info */
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2246[5]), scm__rc.d2245[3]);
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2244[5])),TRUE); /* bind-info */
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2244[6])),TRUE); /* gauche */
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2246[6]), scm__rc.d2245[0]);
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2246[7]), scm__rc.d2245[5]);
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2246[8]), scm__rc.d2245[4]);
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[6] = Scm_MakeExtendedPair(scm__rc.d2245[0], SCM_OBJ(&scm__rc.d2246[2]), SCM_OBJ(&scm__rc.d2246[10]));
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2244[7])),TRUE); /* <const-cstring> */
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2244[8])),TRUE); /* -> */
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  scm__rc.d2245[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2244[9])),TRUE); /* <void> */
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2245[10]))[3] = scm__rc.d2245[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2245[10]))[4] = scm__rc.d2245[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2245[10]))[5] = scm__rc.d2245[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2245[10]))[6] = scm__rc.d2245[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2245[10]))[7] = scm__rc.d2245[9];
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_SYMLINK)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-symlink")), SCM_OBJ(&libsyssys_symlink__STUB), 0);
  libsyssys_symlink__STUB.common.info = scm__rc.d2245[6];
  libsyssys_symlink__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2245[10]);
#endif /* defined(HAVE_SYMLINK) */
#if defined(HAVE_READLINK)
  scm__rc.d2248[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2247[0])),TRUE); /* sys-readlink */
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  scm__rc.d2248[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2247[1])),TRUE); /* path */
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2249[1]), scm__rc.d2248[1]);
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  scm__rc.d2248[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2247[2])),TRUE); /* source-info */
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2249[4]), scm__rc.d2248[2]);
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  scm__rc.d2248[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2247[4])),TRUE); /* bind-info */
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  scm__rc.d2248[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2247[5])),TRUE); /* gauche */
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2249[5]), scm__rc.d2248[0]);
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2249[6]), scm__rc.d2248[4]);
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2249[7]), scm__rc.d2248[3]);
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  scm__rc.d2248[5] = Scm_MakeExtendedPair(scm__rc.d2248[0], SCM_OBJ(&scm__rc.d2249[1]), SCM_OBJ(&scm__rc.d2249[9]));
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  scm__rc.d2248[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2247[6])),TRUE); /* <const-cstring> */
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  scm__rc.d2248[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2247[7])),TRUE); /* -> */
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  scm__rc.d2248[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2247[8])),TRUE); /* <top> */
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2248[9]))[3] = scm__rc.d2248[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2248[9]))[4] = scm__rc.d2248[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2248[9]))[5] = scm__rc.d2248[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2248[9]))[6] = scm__rc.d2248[8];
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_READLINK)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-readlink")), SCM_OBJ(&libsyssys_readlink__STUB), 0);
  libsyssys_readlink__STUB.common.info = scm__rc.d2248[5];
  libsyssys_readlink__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2248[9]);
#endif /* defined(HAVE_READLINK) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[0])),TRUE); /* sys-fdset-ref */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[1])),TRUE); /* fdset */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[2])),TRUE); /* pf */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[1]), scm__rc.d2254[2]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[2]), scm__rc.d2254[1]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[3])),TRUE); /* source-info */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[5]), scm__rc.d2254[3]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[5])),TRUE); /* bind-info */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[6])),TRUE); /* gauche */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[6]), scm__rc.d2254[0]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[7]), scm__rc.d2254[5]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[8]), scm__rc.d2254[4]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[6] = Scm_MakeExtendedPair(scm__rc.d2254[0], SCM_OBJ(&scm__rc.d2255[2]), SCM_OBJ(&scm__rc.d2255[10]));
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[7])),TRUE); /* <sys-fdset> */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[8])),TRUE); /* <top> */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[9])),TRUE); /* -> */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[10])),TRUE); /* <boolean> */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[11]))[3] = scm__rc.d2254[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[11]))[4] = scm__rc.d2254[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[11]))[5] = scm__rc.d2254[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[11]))[6] = scm__rc.d2254[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[11]))[7] = scm__rc.d2254[10];
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-fdset-ref")), SCM_OBJ(&libsyssys_fdset_ref__STUB), 0);
  libsyssys_fdset_ref__STUB.common.info = scm__rc.d2254[6];
  libsyssys_fdset_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2254[11]);
  Scm_SetterSet(SCM_PROCEDURE(&libsyssys_fdset_ref__STUB), SCM_PROCEDURE(&libsyssys_fdset_setX__STUB), TRUE);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[11])),TRUE); /* sys-fdset-set! */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[12])),TRUE); /* flag */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[11]), scm__rc.d2254[20]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[12]), scm__rc.d2254[2]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[13]), scm__rc.d2254[1]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[16]), scm__rc.d2254[3]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[17]), scm__rc.d2254[19]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[18]), scm__rc.d2254[5]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[19]), scm__rc.d2254[4]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[21] = Scm_MakeExtendedPair(scm__rc.d2254[19], SCM_OBJ(&scm__rc.d2255[13]), SCM_OBJ(&scm__rc.d2255[21]));
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[13])),TRUE); /* <void> */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[23]))[3] = scm__rc.d2254[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[23]))[4] = scm__rc.d2254[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[23]))[5] = scm__rc.d2254[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[23]))[6] = scm__rc.d2254[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[23]))[7] = scm__rc.d2254[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[23]))[8] = scm__rc.d2254[22];
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-fdset-set!")), SCM_OBJ(&libsyssys_fdset_setX__STUB), 0);
  libsyssys_fdset_setX__STUB.common.info = scm__rc.d2254[21];
  libsyssys_fdset_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2254[23]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[14])),TRUE); /* sys-fdset-max-fd */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[22]), scm__rc.d2254[1]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[25]), scm__rc.d2254[3]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[26]), scm__rc.d2254[32]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[27]), scm__rc.d2254[5]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[28]), scm__rc.d2254[4]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[33] = Scm_MakeExtendedPair(scm__rc.d2254[32], SCM_OBJ(&scm__rc.d2255[22]), SCM_OBJ(&scm__rc.d2255[30]));
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[15])),TRUE); /* <int> */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[35]))[3] = scm__rc.d2254[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[35]))[4] = scm__rc.d2254[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[35]))[5] = scm__rc.d2254[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[35]))[6] = scm__rc.d2254[34];
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-fdset-max-fd")), SCM_OBJ(&libsyssys_fdset_max_fd__STUB), 0);
  libsyssys_fdset_max_fd__STUB.common.info = scm__rc.d2254[33];
  libsyssys_fdset_max_fd__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2254[35]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[16])),TRUE); /* sys-fdset-clear! */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[33]), scm__rc.d2254[3]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[34]), scm__rc.d2254[42]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[35]), scm__rc.d2254[5]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[36]), scm__rc.d2254[4]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[43] = Scm_MakeExtendedPair(scm__rc.d2254[42], SCM_OBJ(&scm__rc.d2255[22]), SCM_OBJ(&scm__rc.d2255[38]));
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[44]))[3] = scm__rc.d2254[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[44]))[4] = scm__rc.d2254[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[44]))[5] = scm__rc.d2254[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[44]))[6] = scm__rc.d2254[8];
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-fdset-clear!")), SCM_OBJ(&libsyssys_fdset_clearX__STUB), 0);
  libsyssys_fdset_clearX__STUB.common.info = scm__rc.d2254[43];
  libsyssys_fdset_clearX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2254[44]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[51] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[17])),TRUE); /* sys-fdset-copy! */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[18])),TRUE); /* dst */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[53] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[19])),TRUE); /* src */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[39]), scm__rc.d2254[53]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[40]), scm__rc.d2254[52]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[43]), scm__rc.d2254[3]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[44]), scm__rc.d2254[51]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[45]), scm__rc.d2254[5]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[46]), scm__rc.d2254[4]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[54] = Scm_MakeExtendedPair(scm__rc.d2254[51], SCM_OBJ(&scm__rc.d2255[40]), SCM_OBJ(&scm__rc.d2255[48]));
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[55]))[3] = scm__rc.d2254[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[55]))[4] = scm__rc.d2254[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[55]))[5] = scm__rc.d2254[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[55]))[6] = scm__rc.d2254[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[55]))[7] = scm__rc.d2254[8];
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-fdset-copy!")), SCM_OBJ(&libsyssys_fdset_copyX__STUB), 0);
  libsyssys_fdset_copyX__STUB.common.info = scm__rc.d2254[54];
  libsyssys_fdset_copyX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2254[55]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[20])),TRUE); /* sys-select */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[21])),TRUE); /* rfds */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[22])),TRUE); /* wfds */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[66] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[23])),TRUE); /* efds */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[67] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2252[24]))); /* :optional */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[68] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[25])),TRUE); /* timeout */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[49]), scm__rc.d2254[68]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[50]), scm__rc.d2254[67]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[51]), scm__rc.d2254[66]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[52]), scm__rc.d2254[65]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[53]), scm__rc.d2254[64]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[56]), scm__rc.d2254[3]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[57]), scm__rc.d2254[63]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[58]), scm__rc.d2254[5]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[59]), scm__rc.d2254[4]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[69] = Scm_MakeExtendedPair(scm__rc.d2254[63], SCM_OBJ(&scm__rc.d2255[53]), SCM_OBJ(&scm__rc.d2255[61]));
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[70] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[26])),TRUE); /* * */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[71]))[3] = scm__rc.d2254[5];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[71]))[4] = scm__rc.d2254[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[71]))[5] = scm__rc.d2254[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[71]))[6] = scm__rc.d2254[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[71]))[7] = scm__rc.d2254[70];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[71]))[8] = scm__rc.d2254[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2254[71]))[9] = scm__rc.d2254[8];
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-select")), SCM_OBJ(&libsyssys_select__STUB), 0);
  libsyssys_select__STUB.common.info = scm__rc.d2254[69];
  libsyssys_select__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2254[71]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2252[27])),TRUE); /* sys-select! */
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[64]), scm__rc.d2254[3]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[65]), scm__rc.d2254[81]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[66]), scm__rc.d2254[5]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2255[67]), scm__rc.d2254[4]);
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  scm__rc.d2254[82] = Scm_MakeExtendedPair(scm__rc.d2254[81], SCM_OBJ(&scm__rc.d2255[53]), SCM_OBJ(&scm__rc.d2255[69]));
#endif /* defined(HAVE_SELECT) */
#if defined(HAVE_SELECT)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-select!")), SCM_OBJ(&libsyssys_selectX__STUB), 0);
  libsyssys_selectX__STUB.common.info = scm__rc.d2254[82];
  libsyssys_selectX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2254[71]);
#endif /* defined(HAVE_SELECT) */
  scm__rc.d2149[1052] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[454])),TRUE); /* sys-available-processors */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[974]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[975]), scm__rc.d2149[1052]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[976]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[977]), scm__rc.d2149[3]);
  scm__rc.d2149[1053] = Scm_MakeExtendedPair(scm__rc.d2149[1052], SCM_NIL, SCM_OBJ(&scm__rc.d2150[979]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-available-processors")), SCM_OBJ(&libsyssys_available_processors__STUB), 0);
  libsyssys_available_processors__STUB.common.info = scm__rc.d2149[1053];
  libsyssys_available_processors__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[388]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[1054] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[455])),TRUE); /* glob */
  scm__rc.d2149[1056] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[456])),TRUE); /* glob-fold */
  scm__rc.d2149[1055] = Scm_MakeIdentifier(scm__rc.d2149[1056], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#glob-fold */
  scm__rc.d2149[1057] = Scm_MakeIdentifier(scm__rc.d2149[545], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#cons */
  scm__rc.d2149[1058] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[457])),TRUE); /* patterns */
  scm__rc.d2149[1059] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[458])),TRUE); /* opts */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[980]), scm__rc.d2149[1058]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[980]), scm__rc.d2149[1059]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[983]), scm__rc.d2149[2]);
  scm__rc.d2149[1060] = Scm_MakeExtendedPair(scm__rc.d2149[1054], SCM_OBJ(&scm__rc.d2150[980]), SCM_OBJ(&scm__rc.d2150[984]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[985]), scm__rc.d2149[1060]);
  scm__rc.d2149[1061] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[16]))->name = scm__rc.d2149[1054];/* glob */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[16]))->debugInfo = scm__rc.d2149[1061];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[814]))[1] = SCM_WORD(scm__rc.d2149[1055]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[814]))[4] = SCM_WORD(scm__rc.d2149[1057]);
  scm__rc.d2149[1062] = Scm_MakeIdentifier(scm__rc.d2149[1054], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#glob */
  scm__rc.d2149[1063] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[17]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[17]))->debugInfo = scm__rc.d2149[1063];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[823]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[823]))[6] = SCM_WORD(scm__rc.d2149[1054]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[823]))[13] = SCM_WORD(scm__rc.d2149[1062]);
  scm__rc.d2149[1064] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[459])),TRUE); /* sys-glob */
  scm__rc.d2149[1065] = Scm_MakeIdentifier(scm__rc.d2149[1064], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-glob */
  scm__rc.d2149[1066] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[18]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[18]))->debugInfo = scm__rc.d2149[1066];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[838]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[838]))[6] = SCM_WORD(scm__rc.d2149[1064]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[838]))[10] = SCM_WORD(scm__rc.d2149[1062]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[838]))[13] = SCM_WORD(scm__rc.d2149[1065]);
  scm__rc.d2149[1068] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[460])),TRUE); /* glob-fs-folder */
  scm__rc.d2149[1067] = Scm_MakeIdentifier(scm__rc.d2149[1068], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#glob-fs-folder */
  scm__rc.d2149[1070] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[461])),TRUE); /* sort */
  scm__rc.d2149[1069] = Scm_MakeIdentifier(scm__rc.d2149[1070], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sort */
  scm__rc.d2149[1071] = Scm_MakeIdentifier(scm__rc.d2149[35], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#cond-features */
  {
     ScmCharSet *cs = SCM_CHARSET(Scm_MakeEmptyCharSet());
     Scm_CharSetAddRange(cs, SCM_CHAR(47), SCM_CHAR(47));
     scm__rc.d2149[1072] = SCM_OBJ(cs);
  }
  scm__rc.d2149[1074] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[462])),TRUE); /* glob-fold-1 */
  scm__rc.d2149[1073] = Scm_MakeIdentifier(scm__rc.d2149[1074], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#glob-fold-1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[986]), scm__rc.d2149[1056]);
  scm__rc.d2149[1075] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[463])),FALSE); /* G2264 */
  scm__rc.d2149[1076] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[464])),FALSE); /* G2265 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[987]), scm__rc.d2149[1076]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[988]), scm__rc.d2149[1075]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[991]), scm__rc.d2149[2]);
  scm__rc.d2149[1077] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[986]), SCM_OBJ(&scm__rc.d2150[988]), SCM_OBJ(&scm__rc.d2150[992]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[993]), scm__rc.d2149[1077]);
  scm__rc.d2149[1078] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[19]))->debugInfo = scm__rc.d2149[1078];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[853]))[7] = SCM_WORD(scm__rc.d2149[1073]);
  scm__rc.d2149[1080] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[465])),TRUE); /* glob-expand-braces */
  scm__rc.d2149[1079] = Scm_MakeIdentifier(scm__rc.d2149[1080], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#glob-expand-braces */
  scm__rc.d2149[1082] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[466])),TRUE); /* list? */
  scm__rc.d2149[1081] = Scm_MakeIdentifier(scm__rc.d2149[1082], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#list? */
  scm__rc.d2149[1084] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[467])),TRUE); /* fold */
  scm__rc.d2149[1083] = Scm_MakeIdentifier(scm__rc.d2149[1084], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#fold */
  scm__rc.d2149[1085] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[468]))); /* :separator */
  scm__rc.d2149[1086] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[469]))); /* :folder */
  scm__rc.d2149[1087] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[470]))); /* :sorter */
  scm__rc.d2149[1088] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[471]))); /* :prefix */
  scm__rc.d2149[1089] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[468])),TRUE); /* separator */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[994]), scm__rc.d2149[1089]);
  scm__rc.d2149[1090] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[469])),TRUE); /* folder */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[995]), scm__rc.d2149[1068]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[996]), scm__rc.d2149[1090]);
  scm__rc.d2149[1091] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[470])),TRUE); /* sorter */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[997]), scm__rc.d2149[1070]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[998]), scm__rc.d2149[1091]);
  scm__rc.d2149[1092] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[471])),TRUE); /* prefix */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[999]), scm__rc.d2149[1092]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1004]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1005]), scm__rc.d2149[505]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1006]), scm__rc.d2149[357]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1007]), scm__rc.d2149[1058]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1010]), scm__rc.d2149[2]);
  scm__rc.d2149[1093] = Scm_MakeExtendedPair(scm__rc.d2149[1056], SCM_OBJ(&scm__rc.d2150[1007]), SCM_OBJ(&scm__rc.d2150[1011]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1012]), scm__rc.d2149[1093]);
  scm__rc.d2149[1094] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[20]))->name = scm__rc.d2149[1056];/* glob-fold */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[20]))->debugInfo = scm__rc.d2149[1094];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[16] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[28] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[32] = SCM_WORD(scm__rc.d2149[1067]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[41] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[45] = SCM_WORD(scm__rc.d2149[1069]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[54] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[68] = SCM_WORD(scm__rc.d2149[33]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[72] = SCM_WORD(scm__rc.d2149[1071]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[77] = SCM_WORD(scm__rc.d2149[63]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[81] = SCM_WORD(scm__rc.d2149[1072]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[92] = SCM_WORD(scm__rc.d2149[1079]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[98] = SCM_WORD(scm__rc.d2149[1081]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[107] = SCM_WORD(scm__rc.d2149[1083]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[109] = SCM_WORD(scm__rc.d2149[1083]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[127] = SCM_WORD(scm__rc.d2149[71]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[134] = SCM_WORD(scm__rc.d2149[72]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[138] = SCM_WORD(scm__rc.d2149[1085]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[152] = SCM_WORD(scm__rc.d2149[1086]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[166] = SCM_WORD(scm__rc.d2149[1087]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[180] = SCM_WORD(scm__rc.d2149[1088]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[862]))[199] = SCM_WORD(scm__rc.d2149[77]);
  scm__rc.d2149[1095] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[21]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[21]))->debugInfo = scm__rc.d2149[1095];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1072]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1072]))[6] = SCM_WORD(scm__rc.d2149[1056]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1072]))[13] = SCM_WORD(scm__rc.d2149[1055]);
  scm__rc.d2149[1096] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[472])),TRUE); /* ** */
  scm__rc.d2149[1097] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[473])),TRUE); /* rec */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1013]), scm__rc.d2149[1097]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1014]), scm__rc.d2149[1074]);
  scm__rc.d2149[1098] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[474])),TRUE); /* node */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1015]), scm__rc.d2149[1098]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1018]), scm__rc.d2149[2]);
  scm__rc.d2149[1099] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1014]), SCM_OBJ(&scm__rc.d2150[1015]), SCM_OBJ(&scm__rc.d2150[1019]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1020]), scm__rc.d2149[1099]);
  scm__rc.d2149[1100] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[22]))->debugInfo = scm__rc.d2149[1100];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1021]), scm__rc.d2149[1097]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1022]), scm__rc.d2149[1074]);
  scm__rc.d2149[1101] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[475])),TRUE); /* matcher */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1023]), scm__rc.d2149[1101]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1024]), scm__rc.d2149[1098]);
  scm__rc.d2149[1102] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[23]))->name = scm__rc.d2149[1097];/* (glob-fold-1 rec) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[23]))->debugInfo = scm__rc.d2149[1102];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1094]))[6] = SCM_WORD(scm__rc.d2149[1096]);
  scm__rc.d2149[1103] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[476])),TRUE); /* rec* */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1027]), scm__rc.d2149[1103]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1028]), scm__rc.d2149[1074]);
  scm__rc.d2149[1104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[477])),FALSE); /* G2266 */
  scm__rc.d2149[1105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[478])),FALSE); /* G2267 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1029]), scm__rc.d2149[1105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1030]), scm__rc.d2149[1104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1033]), scm__rc.d2149[2]);
  scm__rc.d2149[1106] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1028]), SCM_OBJ(&scm__rc.d2150[1030]), SCM_OBJ(&scm__rc.d2150[1034]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1035]), scm__rc.d2149[1106]);
  scm__rc.d2149[1107] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[24]))->debugInfo = scm__rc.d2149[1107];
  scm__rc.d2149[1108] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[479])), 0);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1036]), scm__rc.d2149[1103]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1037]), scm__rc.d2149[1074]);
  scm__rc.d2149[1109] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[25]))->name = scm__rc.d2149[1103];/* (glob-fold-1 rec*) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[25]))->debugInfo = scm__rc.d2149[1109];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1139]))[12] = SCM_WORD(scm__rc.d2149[1057]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1139]))[16] = SCM_WORD(scm__rc.d2149[1108]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1139]))[22] = SCM_WORD(scm__rc.d2149[1083]);
  scm__rc.d2149[1111] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[480])),TRUE); /* glob-prepare-pattern */
  scm__rc.d2149[1110] = Scm_MakeIdentifier(scm__rc.d2149[1111], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#glob-prepare-pattern */
  scm__rc.d2149[1112] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[481])),TRUE); /* pattern */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1042]), scm__rc.d2149[1092]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1043]), scm__rc.d2149[1090]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1044]), scm__rc.d2149[1089]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1045]), scm__rc.d2149[505]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1046]), scm__rc.d2149[357]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1047]), scm__rc.d2149[1112]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1050]), scm__rc.d2149[2]);
  scm__rc.d2149[1113] = Scm_MakeExtendedPair(scm__rc.d2149[1074], SCM_OBJ(&scm__rc.d2150[1047]), SCM_OBJ(&scm__rc.d2150[1051]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1052]), scm__rc.d2149[1113]);
  scm__rc.d2149[1114] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[26])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[26]))->name = scm__rc.d2149[1074];/* glob-fold-1 */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[26]))->debugInfo = scm__rc.d2149[1114];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1163]))[8] = SCM_WORD(scm__rc.d2149[1110]);
  scm__rc.d2149[1115] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[27])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[27]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[27]))->debugInfo = scm__rc.d2149[1115];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1181]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1181]))[6] = SCM_WORD(scm__rc.d2149[1074]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1181]))[13] = SCM_WORD(scm__rc.d2149[1073]);
  scm__rc.d2149[1116] = Scm_MakeIdentifier(scm__rc.d2149[42], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#equal? */
  scm__rc.d2149[1117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[482])),TRUE); /* dir? */
  scm__rc.d2149[1119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[483])),TRUE); /* glob-component->regexp */
  scm__rc.d2149[1118] = Scm_MakeIdentifier(scm__rc.d2149[1119], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#glob-component->regexp */
  scm__rc.d2149[1120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[484])),TRUE); /* f */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1053]), scm__rc.d2149[1120]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1054]), scm__rc.d2149[1111]);
  scm__rc.d2149[1121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[485])),TRUE); /* comp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1055]), scm__rc.d2149[1121]);
  scm__rc.d2149[1122] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[28])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[28]))->debugInfo = scm__rc.d2149[1122];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1196]))[6] = SCM_WORD(scm__rc.d2149[1116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1196]))[10] = SCM_WORD(scm__rc.d2149[1117]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1196]))[17] = SCM_WORD(scm__rc.d2149[1116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1196]))[21] = SCM_WORD(scm__rc.d2149[1096]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1196]))[24] = SCM_WORD(scm__rc.d2149[1118]);
  scm__rc.d2149[1123] = Scm_MakeIdentifier(scm__rc.d2149[65], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#string-split */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1059]), scm__rc.d2149[1089]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1060]), scm__rc.d2149[1112]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1063]), scm__rc.d2149[2]);
  scm__rc.d2149[1124] = Scm_MakeExtendedPair(scm__rc.d2149[1111], SCM_OBJ(&scm__rc.d2150[1060]), SCM_OBJ(&scm__rc.d2150[1064]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1065]), scm__rc.d2149[1124]);
  scm__rc.d2149[1125] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[29])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[29]))->name = scm__rc.d2149[1111];/* glob-prepare-pattern */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[29]))->debugInfo = scm__rc.d2149[1125];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1222]))[9] = SCM_WORD(scm__rc.d2149[1123]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1222]))[18] = SCM_WORD(scm__rc.d2149[1116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1222]))[28] = SCM_WORD(scm__rc.d2149[546]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1222]))[37] = SCM_WORD(scm__rc.d2149[546]);
  scm__rc.d2149[1126] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[30])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[30]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[30]))->debugInfo = scm__rc.d2149[1126];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1262]))[5] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1262]))[8] = SCM_WORD(scm__rc.d2149[1111]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1262]))[15] = SCM_WORD(scm__rc.d2149[1110]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1066]), scm__rc.d2149[81]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1067]), scm__rc.d2149[1080]);
  scm__rc.d2149[1127] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[486])),TRUE); /* pat */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1068]), scm__rc.d2149[1127]);
  scm__rc.d2149[1128] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[31])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[31]))->debugInfo = scm__rc.d2149[1128];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1279]))[6] = SCM_WORD(scm__rc.d2149[1123]);
  scm__rc.d2149[1129] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[487])), 0);
  scm__rc.d2149[1130] = Scm_MakeIdentifier(scm__rc.d2149[40], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#rxmatch */
  scm__rc.d2149[1131] = Scm_MakeIdentifier(scm__rc.d2149[58], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#string-append */
  scm__rc.d2149[1132] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[489])),TRUE); /* parse */
  scm__rc.d2149[1133] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[490])),TRUE); /* loop */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1073]), scm__rc.d2149[1133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1074]), scm__rc.d2149[1132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1075]), scm__rc.d2149[1080]);
  scm__rc.d2149[1134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[491])),TRUE); /* in */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1076]), scm__rc.d2149[1134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1079]), scm__rc.d2149[2]);
  scm__rc.d2149[1135] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1075]), SCM_OBJ(&scm__rc.d2150[1076]), SCM_OBJ(&scm__rc.d2150[1080]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1081]), scm__rc.d2149[1135]);
  scm__rc.d2149[1136] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[32])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[32]))->debugInfo = scm__rc.d2149[1136];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1295]))[5] = SCM_WORD(scm__rc.d2149[1131]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1082]), scm__rc.d2149[1133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1083]), scm__rc.d2149[1132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1084]), scm__rc.d2149[1080]);
  scm__rc.d2149[1137] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[492])),TRUE); /* seg */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1085]), scm__rc.d2149[1137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1088]), scm__rc.d2149[2]);
  scm__rc.d2149[1138] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1084]), SCM_OBJ(&scm__rc.d2150[1085]), SCM_OBJ(&scm__rc.d2150[1089]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1090]), scm__rc.d2149[1138]);
  scm__rc.d2149[1139] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[33]))->debugInfo = scm__rc.d2149[1139];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1305]))[6] = SCM_WORD(scm__rc.d2149[1083]);
  scm__rc.d2149[1140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[493])),TRUE); /* before */
  scm__rc.d2149[1141] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[494])),FALSE); /* G2270 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1091]), scm__rc.d2149[1141]);
  scm__rc.d2149[1142] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[34])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[34]))->debugInfo = scm__rc.d2149[1142];
  scm__rc.d2149[1143] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[496])),FALSE); /* G2273 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1094]), scm__rc.d2149[1143]);
  scm__rc.d2149[1144] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[35])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[35]))->debugInfo = scm__rc.d2149[1144];
  scm__rc.d2149[1145] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[497])),FALSE); /* G2276 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1097]), scm__rc.d2149[1145]);
  scm__rc.d2149[1146] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[36])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[36]))->debugInfo = scm__rc.d2149[1146];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1100]), scm__rc.d2149[1133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1101]), scm__rc.d2149[1132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1102]), scm__rc.d2149[1080]);
  scm__rc.d2149[1147] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[499])),TRUE); /* _ */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1105]), scm__rc.d2149[2]);
  scm__rc.d2149[1148] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1102]), scm__rc.d2149[1147], SCM_OBJ(&scm__rc.d2150[1106]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1107]), scm__rc.d2149[1148]);
  scm__rc.d2149[1149] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[37])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[37]))->name = scm__rc.d2149[1133];/* (glob-expand-braces parse loop) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[37]))->debugInfo = scm__rc.d2149[1149];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[3] = SCM_WORD(scm__rc.d2149[1129]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[6] = SCM_WORD(scm__rc.d2149[1130]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[22] = SCM_WORD(scm__rc.d2149[1116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[30] = SCM_WORD(scm__rc.d2149[56]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[54] = SCM_WORD(scm__rc.d2149[1131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[59] = SCM_WORD(scm__rc.d2149[1140]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[69] = SCM_WORD(scm__rc.d2149[546]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[71] = SCM_WORD(scm__rc.d2149[1083]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[83] = SCM_WORD(scm__rc.d2149[553]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[96] = SCM_WORD(scm__rc.d2149[1131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[101] = SCM_WORD(scm__rc.d2149[1140]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[111] = SCM_WORD(scm__rc.d2149[546]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[113] = SCM_WORD(scm__rc.d2149[1083]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[117] = SCM_WORD(scm__rc.d2149[56]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[131] = SCM_WORD(scm__rc.d2149[1131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[139] = SCM_WORD(scm__rc.d2149[546]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1328]))[147] = SCM_WORD(scm__rc.d2149[553]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1109]), scm__rc.d2149[1132]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1110]), scm__rc.d2149[1080]);
  scm__rc.d2149[1150] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[500])),TRUE); /* str */
  scm__rc.d2149[1151] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[501])),TRUE); /* pres */
  scm__rc.d2149[1152] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[502])),TRUE); /* level */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1111]), scm__rc.d2149[1152]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1112]), scm__rc.d2149[1151]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1113]), scm__rc.d2149[1150]);
  scm__rc.d2149[1153] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[38])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[38]))->name = scm__rc.d2149[1132];/* (glob-expand-braces parse) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[38]))->debugInfo = scm__rc.d2149[1153];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1117]), scm__rc.d2149[1112]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1120]), scm__rc.d2149[2]);
  scm__rc.d2149[1154] = Scm_MakeExtendedPair(scm__rc.d2149[1080], SCM_OBJ(&scm__rc.d2150[1117]), SCM_OBJ(&scm__rc.d2150[1121]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1122]), scm__rc.d2149[1154]);
  scm__rc.d2149[1155] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[39])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[39]))->name = scm__rc.d2149[1080];/* glob-expand-braces */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[39]))->debugInfo = scm__rc.d2149[1155];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1484]))[10] = SCM_WORD(scm__rc.d2149[528]);
  scm__rc.d2149[1156] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[40])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[40]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[40]))->debugInfo = scm__rc.d2149[1156];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1516]))[5] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1516]))[8] = SCM_WORD(scm__rc.d2149[1080]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1516]))[15] = SCM_WORD(scm__rc.d2149[1079]);
  scm__rc.d2149[1157] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[455]))); /* :glob */
  scm__rc.d2149[1158] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[503])),TRUE); /* eol */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1123]), scm__rc.d2149[1158]);
  scm__rc.d2149[1159] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[504])),TRUE); /* rep */
  scm__rc.d2149[1160] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[505])),TRUE); /* any */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1124]), scm__rc.d2149[1160]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1127]), scm__rc.d2149[1159]);
  scm__rc.d2149[1162] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[506])),TRUE); /* read-char-set */
  scm__rc.d2149[1161] = Scm_MakeIdentifier(scm__rc.d2149[1162], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#read-char-set */
  scm__rc.d2149[1164] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[507])),TRUE); /* char-set-complement! */
  scm__rc.d2149[1163] = Scm_MakeIdentifier(scm__rc.d2149[1164], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#char-set-complement! */
  scm__rc.d2149[1165] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[508])),TRUE); /* element1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1128]), scm__rc.d2149[1165]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1130]), scm__rc.d2149[1119]);
  scm__rc.d2149[1166] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[509])),TRUE); /* ch */
  scm__rc.d2149[1167] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[510])),TRUE); /* ct */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1131]), scm__rc.d2149[1167]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1132]), scm__rc.d2149[1166]);
  scm__rc.d2149[1168] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[41])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[41]))->name = scm__rc.d2149[1165];/* (glob-component->regexp #f element1) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[41]))->debugInfo = scm__rc.d2149[1168];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]))[40] = SCM_WORD(scm__rc.d2149[1160]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]))[87] = SCM_WORD(scm__rc.d2149[1161]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]))[93] = SCM_WORD(scm__rc.d2149[1163]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1533]))[107] = SCM_WORD(scm__rc.d2149[1161]);
  scm__rc.d2149[1169] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[511])),TRUE); /* bol */
  {
     ScmCharSet *cs = SCM_CHARSET(Scm_MakeEmptyCharSet());
     Scm_CharSetAddRange(cs, SCM_CHAR(46), SCM_CHAR(46));
     scm__rc.d2149[1170] = SCM_OBJ(cs);
  }
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1136]), scm__rc.d2149[1121]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[1136]), scm__rc.d2149[1170]);
  scm__rc.d2149[1171] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[512])),TRUE); /* seq */
  scm__rc.d2149[1172] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[513]))); /* :shell */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1137]), scm__rc.d2149[1119]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1140]), scm__rc.d2149[2]);
  scm__rc.d2149[1173] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1137]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1141]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1142]), scm__rc.d2149[1173]);
  scm__rc.d2149[1174] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[42])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[42]))->debugInfo = scm__rc.d2149[1174];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]))[4] = SCM_WORD(scm__rc.d2149[1157]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]))[9] = SCM_WORD(scm__rc.d2149[1169]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]))[99] = SCM_WORD(scm__rc.d2149[1159]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]))[103] = SCM_WORD(scm__rc.d2149[1171]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]))[168] = SCM_WORD(scm__rc.d2149[1172]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]))[173] = SCM_WORD(scm__rc.d2149[1169]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1662]))[188] = SCM_WORD(scm__rc.d2149[553]);
  scm__rc.d2149[1176] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[515])),TRUE); /* with-input-from-string */
  scm__rc.d2149[1175] = Scm_MakeIdentifier(scm__rc.d2149[1176], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#with-input-from-string */
  scm__rc.d2149[1178] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[516])),TRUE); /* regexp-optimize */
  scm__rc.d2149[1177] = Scm_MakeIdentifier(scm__rc.d2149[1178], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#regexp-optimize */
  scm__rc.d2149[1180] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[517])),TRUE); /* regexp-compile */
  scm__rc.d2149[1179] = Scm_MakeIdentifier(scm__rc.d2149[1180], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#regexp-compile */
  scm__rc.d2149[1181] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[404]))); /* :mode */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1143]), scm__rc.d2149[1157]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1144]), scm__rc.d2149[853]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1146]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1147]), scm__rc.d2149[1112]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1150]), scm__rc.d2149[2]);
  scm__rc.d2149[1182] = Scm_MakeExtendedPair(scm__rc.d2149[1119], SCM_OBJ(&scm__rc.d2150[1147]), SCM_OBJ(&scm__rc.d2150[1151]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1152]), scm__rc.d2149[1182]);
  scm__rc.d2149[1183] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[43])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[43]))->name = scm__rc.d2149[1119];/* glob-component->regexp */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[43]))->debugInfo = scm__rc.d2149[1183];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]))[10] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]))[14] = SCM_WORD(scm__rc.d2149[1157]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]))[27] = SCM_WORD(scm__rc.d2149[1175]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]))[29] = SCM_WORD(scm__rc.d2149[1177]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]))[31] = SCM_WORD(scm__rc.d2149[1179]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]))[40] = SCM_WORD(scm__rc.d2149[71]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]))[46] = SCM_WORD(scm__rc.d2149[72]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]))[50] = SCM_WORD(scm__rc.d2149[1181]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1852]))[65] = SCM_WORD(scm__rc.d2149[77]);
  scm__rc.d2149[1184] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[44])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[44]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[44]))->debugInfo = scm__rc.d2149[1184];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1925]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1925]))[6] = SCM_WORD(scm__rc.d2149[1119]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1925]))[13] = SCM_WORD(scm__rc.d2149[1118]);
  scm__rc.d2149[1185] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[518])),TRUE); /* fixed-regexp? */
  scm__rc.d2149[1187] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[519])),TRUE); /* regexp-ast */
  scm__rc.d2149[1186] = Scm_MakeIdentifier(scm__rc.d2149[1187], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#regexp-ast */
  scm__rc.d2149[1189] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[520])),TRUE); /* list->string */
  scm__rc.d2149[1188] = Scm_MakeIdentifier(scm__rc.d2149[1189], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#list->string */
  scm__rc.d2149[1190] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[521])),TRUE); /* rx */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1153]), scm__rc.d2149[1190]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1156]), scm__rc.d2149[2]);
  scm__rc.d2149[1191] = Scm_MakeExtendedPair(scm__rc.d2149[1185], SCM_OBJ(&scm__rc.d2150[1153]), SCM_OBJ(&scm__rc.d2150[1157]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1158]), scm__rc.d2149[1191]);
  scm__rc.d2149[1192] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[45])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[45]))->name = scm__rc.d2149[1185];/* fixed-regexp? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[45]))->debugInfo = scm__rc.d2149[1192];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]))[4] = SCM_WORD(scm__rc.d2149[1186]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]))[16] = SCM_WORD(scm__rc.d2149[1169]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]))[28] = SCM_WORD(scm__rc.d2149[1158]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1940]))[33] = SCM_WORD(scm__rc.d2149[1188]);
  scm__rc.d2149[1193] = Scm_MakeIdentifier(scm__rc.d2149[1185], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#fixed-regexp? */
  scm__rc.d2149[1194] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[46])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[46]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[46]))->debugInfo = scm__rc.d2149[1194];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1993]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1993]))[6] = SCM_WORD(scm__rc.d2149[1185]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1993]))[13] = SCM_WORD(scm__rc.d2149[1193]);
  scm__rc.d2149[1195] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[522])),TRUE); /* make-glob-fs-fold */
  scm__rc.d2149[1197] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[523])),TRUE); /* gauche-architecture */
  scm__rc.d2149[1196] = Scm_MakeIdentifier(scm__rc.d2149[1197], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#gauche-architecture */
  scm__rc.d2149[1198] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[524])), 0);
  scm__rc.d2149[1200] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[525])),TRUE); /* string-length */
  scm__rc.d2149[1199] = Scm_MakeIdentifier(scm__rc.d2149[1200], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#string-length */
  scm__rc.d2149[1202] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[526])),TRUE); /* string-ref */
  scm__rc.d2149[1201] = Scm_MakeIdentifier(scm__rc.d2149[1202], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#string-ref */
  scm__rc.d2149[1203] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[527])),TRUE); /* ensure-dirname */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1159]), scm__rc.d2149[1203]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1160]), scm__rc.d2149[1195]);
  scm__rc.d2149[1204] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[528])),TRUE); /* s */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1161]), scm__rc.d2149[1204]);
  scm__rc.d2149[1205] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[47])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[47]))->name = scm__rc.d2149[1203];/* (make-glob-fs-fold ensure-dirname) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[47]))->debugInfo = scm__rc.d2149[1205];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]))[6] = SCM_WORD(scm__rc.d2149[1199]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]))[19] = SCM_WORD(scm__rc.d2149[1201]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]))[25] = SCM_WORD(scm__rc.d2149[1201]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2008]))[35] = SCM_WORD(scm__rc.d2149[1131]);
  scm__rc.d2149[1206] = Scm_MakeIdentifier(scm__rc.d2149[618], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#file-exists? */
  scm__rc.d2149[1207] = Scm_MakeIdentifier(scm__rc.d2149[630], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#file-is-directory? */
  scm__rc.d2149[1208] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[529])),FALSE); /* loop2286 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1165]), scm__rc.d2149[1208]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1166]), scm__rc.d2149[1195]);
  scm__rc.d2149[1209] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[530])),TRUE); /* child */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1167]), scm__rc.d2149[1209]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1170]), scm__rc.d2149[2]);
  scm__rc.d2149[1210] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1166]), SCM_OBJ(&scm__rc.d2150[1167]), SCM_OBJ(&scm__rc.d2150[1171]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1172]), scm__rc.d2149[1210]);
  scm__rc.d2149[1211] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[48])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[48]))->debugInfo = scm__rc.d2149[1211];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]))[12] = SCM_WORD(scm__rc.d2149[1131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2047]))[24] = SCM_WORD(scm__rc.d2149[1207]);
  scm__rc.d2149[1212] = Scm_MakeIdentifier(scm__rc.d2149[0], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#sys-readdir */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1173]), scm__rc.d2149[1208]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1174]), scm__rc.d2149[1195]);
  scm__rc.d2149[1213] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[531])),TRUE); /* regexp */
  scm__rc.d2149[1214] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[532])),TRUE); /* non-leaf? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1175]), scm__rc.d2149[1214]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1176]), scm__rc.d2149[1213]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1177]), scm__rc.d2149[1098]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1178]), scm__rc.d2149[505]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1179]), scm__rc.d2149[357]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1182]), scm__rc.d2149[2]);
  scm__rc.d2149[1215] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1174]), SCM_OBJ(&scm__rc.d2150[1179]), SCM_OBJ(&scm__rc.d2150[1183]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1184]), scm__rc.d2149[1215]);
  scm__rc.d2149[1216] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[49])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[49]))->name = scm__rc.d2149[1208];/* (make-glob-fs-fold #:loop2286) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[49]))->debugInfo = scm__rc.d2149[1216];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]))[30] = SCM_WORD(scm__rc.d2149[1131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]))[34] = SCM_WORD(scm__rc.d2149[1117]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]))[45] = SCM_WORD(scm__rc.d2149[1193]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]))[55] = SCM_WORD(scm__rc.d2149[1131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]))[61] = SCM_WORD(scm__rc.d2149[1206]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]))[71] = SCM_WORD(scm__rc.d2149[1207]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]))[118] = SCM_WORD(scm__rc.d2149[1212]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2088]))[120] = SCM_WORD(scm__rc.d2149[1083]);
  scm__rc.d2149[1217] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[533]))); /* :root-path */
  scm__rc.d2149[1218] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[534]))); /* :current-path */
  scm__rc.d2149[1219] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[533])),TRUE); /* root-path */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1185]), scm__rc.d2149[1219]);
  scm__rc.d2149[1220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[534])),TRUE); /* current-path */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1186]), scm__rc.d2149[1220]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1189]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1192]), scm__rc.d2149[2]);
  scm__rc.d2149[1221] = Scm_MakeExtendedPair(scm__rc.d2149[1195], SCM_OBJ(&scm__rc.d2150[1189]), SCM_OBJ(&scm__rc.d2150[1193]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1194]), scm__rc.d2149[1221]);
  scm__rc.d2149[1222] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[50])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[50]))->name = scm__rc.d2149[1195];/* make-glob-fs-fold */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[50]))->debugInfo = scm__rc.d2149[1222];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]))[12] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]))[24] = SCM_WORD(scm__rc.d2149[31]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]))[37] = SCM_WORD(scm__rc.d2149[1196]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]))[40] = SCM_WORD(scm__rc.d2149[1198]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]))[75] = SCM_WORD(scm__rc.d2149[71]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]))[81] = SCM_WORD(scm__rc.d2149[72]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]))[85] = SCM_WORD(scm__rc.d2149[1217]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]))[97] = SCM_WORD(scm__rc.d2149[1218]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2210]))[113] = SCM_WORD(scm__rc.d2149[77]);
  scm__rc.d2149[1223] = Scm_MakeIdentifier(scm__rc.d2149[1195], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#make-glob-fs-fold */
  scm__rc.d2149[1224] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[51])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[51]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[51]))->debugInfo = scm__rc.d2149[1224];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2332]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2332]))[6] = SCM_WORD(scm__rc.d2149[1195]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2332]))[13] = SCM_WORD(scm__rc.d2149[1223]);
  scm__rc.d2149[1225] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[52])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[52]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[52]))->debugInfo = scm__rc.d2149[1225];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2347]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2347]))[6] = SCM_WORD(scm__rc.d2149[1068]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2347]))[10] = SCM_WORD(scm__rc.d2149[1223]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2347]))[13] = SCM_WORD(scm__rc.d2149[1067]);
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[0])),TRUE); /* handle-type */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[1])),TRUE); /* process */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)

#line 1700 "libsys.scm"
WinHandleClass=(Scm_MakeForeignPointerClass(
Scm_CurrentModule(),"<win:handle>",handle_print,handle_cleanup,SCM_FOREIGN_POINTER_KEEP_IDENTITY));
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[2])),TRUE); /* sys-win-process? */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[3])),TRUE); /* obj */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[1]), scm__rc.d2291[3]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[4])),TRUE); /* source-info */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[4]), scm__rc.d2291[4]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[6])),TRUE); /* bind-info */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[7])),TRUE); /* gauche */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[5]), scm__rc.d2291[2]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[6]), scm__rc.d2291[6]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[7]), scm__rc.d2291[5]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[7] = Scm_MakeExtendedPair(scm__rc.d2291[2], SCM_OBJ(&scm__rc.d2293[1]), SCM_OBJ(&scm__rc.d2293[9]));
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[8])),TRUE); /* <top> */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[9])),TRUE); /* -> */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[10])),TRUE); /* <boolean> */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[11]))[3] = scm__rc.d2291[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[11]))[4] = scm__rc.d2291[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[11]))[5] = scm__rc.d2291[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[11]))[6] = scm__rc.d2291[10];
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-win-process?")), SCM_OBJ(&libsyssys_win_processP__STUB), 0);
  libsyssys_win_processP__STUB.common.info = scm__rc.d2291[7];
  libsyssys_win_processP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2291[11]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[11])),TRUE); /* sys-win-process-pid */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[12]), scm__rc.d2291[4]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[13]), scm__rc.d2291[18]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[14]), scm__rc.d2291[6]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[15]), scm__rc.d2291[5]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[19] = Scm_MakeExtendedPair(scm__rc.d2291[18], SCM_OBJ(&scm__rc.d2293[1]), SCM_OBJ(&scm__rc.d2293[17]));
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[12])),TRUE); /* <int> */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[21]))[3] = scm__rc.d2291[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[21]))[4] = scm__rc.d2291[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[21]))[5] = scm__rc.d2291[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[21]))[6] = scm__rc.d2291[20];
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-win-process-pid")), SCM_OBJ(&libsyssys_win_process_pid__STUB), 0);
  libsyssys_win_process_pid__STUB.common.info = scm__rc.d2291[19];
  libsyssys_win_process_pid__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2291[21]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[13])),TRUE); /* sys-get-osfhandle */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[14])),TRUE); /* port-or-fd */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[18]), scm__rc.d2291[29]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[21]), scm__rc.d2291[4]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[22]), scm__rc.d2291[28]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[23]), scm__rc.d2291[6]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[24]), scm__rc.d2291[5]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[30] = Scm_MakeExtendedPair(scm__rc.d2291[28], SCM_OBJ(&scm__rc.d2293[18]), SCM_OBJ(&scm__rc.d2293[26]));
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[31]))[3] = scm__rc.d2291[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[31]))[4] = scm__rc.d2291[8];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[31]))[5] = scm__rc.d2291[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2291[31]))[6] = scm__rc.d2291[8];
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-get-osfhandle")), SCM_OBJ(&libsyssys_get_osfhandle__STUB), 0);
  libsyssys_get_osfhandle__STUB.common.info = scm__rc.d2291[30];
  libsyssys_get_osfhandle__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2291[31]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[38] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2292[15])),TRUE); /* sys-win-pipe-name */
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[29]), scm__rc.d2291[4]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[30]), scm__rc.d2291[38]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[31]), scm__rc.d2291[6]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2293[32]), scm__rc.d2291[5]);
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  scm__rc.d2291[39] = Scm_MakeExtendedPair(scm__rc.d2291[38], SCM_OBJ(&scm__rc.d2293[18]), SCM_OBJ(&scm__rc.d2293[34]));
#endif /* defined(GAUCHE_WINDOWS) */
#if defined(GAUCHE_WINDOWS)
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("sys-win-pipe-name")), SCM_OBJ(&libsyssys_win_pipe_name__STUB), 0);
  libsyssys_win_pipe_name__STUB.common.info = scm__rc.d2291[39];
  libsyssys_win_pipe_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2291[31]);
#endif /* defined(GAUCHE_WINDOWS) */
  scm__rc.d2149[1226] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[535])),TRUE); /* %sys-mintty? */
  scm__rc.d2149[1227] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[536])),TRUE); /* sys-win-pipe-name */
  scm__rc.d2149[1229] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[537])),TRUE); /* module-binds? */
  scm__rc.d2149[1228] = Scm_MakeIdentifier(scm__rc.d2149[1229], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#module-binds? */
  scm__rc.d2149[1230] = Scm_MakeIdentifier(scm__rc.d2149[1227], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#sys-win-pipe-name */
  scm__rc.d2149[1231] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[538])), 0);
  scm__rc.d2149[1233] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[539])),TRUE); /* boolean */
  scm__rc.d2149[1232] = Scm_MakeIdentifier(scm__rc.d2149[1233], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#boolean */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1197]), scm__rc.d2149[2]);
  scm__rc.d2149[1234] = Scm_MakeExtendedPair(scm__rc.d2149[1226], SCM_OBJ(&scm__rc.d2150[473]), SCM_OBJ(&scm__rc.d2150[1198]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1199]), scm__rc.d2149[1234]);
  scm__rc.d2149[1235] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[53])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[53]))->name = scm__rc.d2149[1226];/* %sys-mintty? */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[53]))->debugInfo = scm__rc.d2149[1235];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2362]))[3] = SCM_WORD(scm__rc.d2149[4]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2362]))[5] = SCM_WORD(scm__rc.d2149[1227]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2362]))[7] = SCM_WORD(scm__rc.d2149[1228]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2362]))[13] = SCM_WORD(scm__rc.d2149[1230]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2362]))[21] = SCM_WORD(scm__rc.d2149[1231]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2362]))[24] = SCM_WORD(scm__rc.d2149[1232]);
  scm__rc.d2149[1236] = Scm_MakeIdentifier(scm__rc.d2149[1226], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%sys-mintty? */
  scm__rc.d2149[1237] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[54])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[54]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[54]))->debugInfo = scm__rc.d2149[1237];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2388]))[3] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2388]))[6] = SCM_WORD(scm__rc.d2149[1226]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2388]))[13] = SCM_WORD(scm__rc.d2149[1236]);
  scm__rc.d2149[1239] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[540])),TRUE); /* make-string */
  scm__rc.d2149[1238] = Scm_MakeIdentifier(scm__rc.d2149[1239], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#make-string */
  scm__rc.d2149[1240] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[542])),TRUE); /* %sys-escape-windows-command-line */
  scm__rc.d2149[1241] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[543])),FALSE); /* G2294 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1200]), scm__rc.d2149[1241]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1201]), scm__rc.d2149[1240]);
  scm__rc.d2149[1242] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[544])),TRUE); /* m */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1202]), scm__rc.d2149[1242]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1205]), scm__rc.d2149[2]);
  scm__rc.d2149[1243] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1201]), SCM_OBJ(&scm__rc.d2150[1202]), SCM_OBJ(&scm__rc.d2150[1206]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1207]), scm__rc.d2149[1243]);
  scm__rc.d2149[1244] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[55])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[55]))->debugInfo = scm__rc.d2149[1244];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2403]))[11] = SCM_WORD(scm__rc.d2149[1199]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2403]))[18] = SCM_WORD(scm__rc.d2149[1238]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2403]))[23] = SCM_WORD(scm__rc.d2149[1131]);
  scm__rc.d2149[1245] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[546])), 0);
  scm__rc.d2149[1246] = Scm_MakeIdentifier(scm__rc.d2149[78], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#errorf */
  scm__rc.d2149[1247] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[548])), 0);
  scm__rc.d2149[1248] = Scm_RegComp(SCM_STRING(SCM_OBJ(&scm__sc.d2148[549])), 0);
  scm__rc.d2149[1250] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[550])),TRUE); /* regexp-replace-all */
  scm__rc.d2149[1249] = Scm_MakeIdentifier(scm__rc.d2149[1250], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#regexp-replace-all */
  scm__rc.d2149[1252] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[551])),TRUE); /* write-to-string */
  scm__rc.d2149[1251] = Scm_MakeIdentifier(scm__rc.d2149[1252], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#write-to-string */
  scm__rc.d2149[1253] = Scm_MakeIdentifier(scm__rc.d2149[1240], SCM_MODULE(scm__rc.d2149[419]), SCM_NIL); /* gauche#%sys-escape-windows-command-line */
  scm__rc.d2149[1254] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[552])),TRUE); /* batfilep */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1209]), scm__rc.d2149[1254]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1210]), scm__rc.d2149[1204]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1213]), scm__rc.d2149[2]);
  scm__rc.d2149[1255] = Scm_MakeExtendedPair(scm__rc.d2149[1240], SCM_OBJ(&scm__rc.d2150[1210]), SCM_OBJ(&scm__rc.d2150[1214]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1215]), scm__rc.d2149[1255]);
  scm__rc.d2149[1256] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[56])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[56]))->name = scm__rc.d2149[1240];/* %sys-escape-windows-command-line */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[56]))->debugInfo = scm__rc.d2149[1256];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[10] = SCM_WORD(scm__rc.d2149[1116]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[22] = SCM_WORD(scm__rc.d2149[1245]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[32] = SCM_WORD(scm__rc.d2149[1246]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[41] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[50] = SCM_WORD(scm__rc.d2149[1131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[57] = SCM_WORD(scm__rc.d2149[1247]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[66] = SCM_WORD(scm__rc.d2149[1248]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[70] = SCM_WORD(scm__rc.d2149[1249]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[75] = SCM_WORD(scm__rc.d2149[1131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[82] = SCM_WORD(scm__rc.d2149[1251]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2428]))[84] = SCM_WORD(scm__rc.d2149[1253]);
  scm__rc.d2149[1257] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[57])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[57]))->name = scm__rc.d2149[86];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[57]))->debugInfo = scm__rc.d2149[1257];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2514]))[5] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2514]))[8] = SCM_WORD(scm__rc.d2149[1240]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2514]))[15] = SCM_WORD(scm__rc.d2149[1253]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[1583] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[553])),FALSE); /* loop2153 */
  scm__rc.d2149[1584] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[554])),FALSE); /* args2152 */
  scm__rc.d2149[1585] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[555])),FALSE); /* G2154 */
  scm__rc.d2149[1586] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[556])),FALSE); /* G2155 */
  scm__rc.d2149[1587] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[557])),FALSE); /* G2156 */
  scm__rc.d2149[1588] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[558])),TRUE); /* tmp */
  scm__rc.d2149[1589] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[559])),TRUE); /* case */
  scm__rc.d2149[1590] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[560])),TRUE); /* windows? */
  scm__rc.d2149[1591] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[561])),TRUE); /* comps */
  scm__rc.d2149[1592] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[562])),TRUE); /* r */
  scm__rc.d2149[1593] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[563])),TRUE); /* root? */
  scm__rc.d2149[1594] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[564])),TRUE); /* reverse */
  scm__rc.d2149[1595] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[565])),TRUE); /* canon-path */
  scm__rc.d2149[1596] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[566])),TRUE); /* abs-path */
  scm__rc.d2149[1597] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[567])),TRUE); /* expand-tilde */
  scm__rc.d2149[1598] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[568])),TRUE); /* absolute? */
  scm__rc.d2149[1599] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[569])),TRUE); /* home */
  scm__rc.d2149[1600] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[570])),TRUE); /* pw */
  scm__rc.d2149[1601] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[571])),TRUE); /* get-unix-home */
  scm__rc.d2149[1602] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[572])),TRUE); /* get-windows-home */
  scm__rc.d2149[1603] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[573])),TRUE); /* user */
  scm__rc.d2149[1604] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[574])),TRUE); /* let* */
  scm__rc.d2149[1605] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[575])),TRUE); /* assq */
  scm__rc.d2149[1606] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[576])),FALSE); /* rest2151 */
  scm__rc.d2149[1607] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[577])),TRUE); /* if-let1 */
  scm__rc.d2149[1608] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[578])),TRUE); /* $ */
  scm__rc.d2149[1609] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[579])),TRUE); /* define-in-module */
  scm__rc.d2149[1610] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[580])),FALSE); /* G2163 */
  scm__rc.d2149[1611] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[581])),FALSE); /* G2164 */
  scm__rc.d2149[1612] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[582])),FALSE); /* rest2162 */
  scm__rc.d2149[1613] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[583])),TRUE); /* string? */
  scm__rc.d2149[1614] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[584])),TRUE); /* check-arg */
  scm__rc.d2149[1615] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[585])),TRUE); /* v */
  scm__rc.d2149[1616] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[586])),TRUE); /* assume-type */
  scm__rc.d2149[1617] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[587])),TRUE); /* zero? */
  scm__rc.d2149[1618] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[588])),TRUE); /* < */
  scm__rc.d2149[1619] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[589])),TRUE); /* sep */
  scm__rc.d2149[1620] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[590])),FALSE); /* loop2259 */
  scm__rc.d2149[1621] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[591])),FALSE); /* args2258 */
  scm__rc.d2149[1622] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[592])),FALSE); /* G2260 */
  scm__rc.d2149[1623] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[593])),FALSE); /* G2261 */
  scm__rc.d2149[1624] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[594])),FALSE); /* G2262 */
  scm__rc.d2149[1625] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[595])),FALSE); /* G2263 */
  scm__rc.d2149[1626] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[596])),TRUE); /* cut */
  scm__rc.d2149[1627] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[597])),TRUE); /* <> */
  scm__rc.d2149[1628] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[598])),FALSE); /* rest2257 */
  scm__rc.d2149[1629] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[599])),TRUE); /* p */
  scm__rc.d2149[1630] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[600])),FALSE); /* G2268 */
  scm__rc.d2149[1631] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[601])),TRUE); /* append */
  scm__rc.d2149[1632] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[602])),TRUE); /* segs */
  scm__rc.d2149[1633] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[603])),TRUE); /* ins */
  scm__rc.d2149[1634] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[604])),FALSE); /* G2269 */
  scm__rc.d2149[1635] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[605])),FALSE); /* G2271 */
  scm__rc.d2149[1636] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[606])),FALSE); /* G2272 */
  scm__rc.d2149[1637] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[607])),FALSE); /* G2274 */
  scm__rc.d2149[1638] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[608])),FALSE); /* G2275 */
  scm__rc.d2149[1639] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[609])),FALSE); /* G2277 */
  scm__rc.d2149[1640] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[610])),TRUE); /* values */
  scm__rc.d2149[1641] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[611])),TRUE); /* cute */
  scm__rc.d2149[1642] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[612])),TRUE); /* letrec */
  scm__rc.d2149[1643] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[613])),TRUE); /* = */
  scm__rc.d2149[1644] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[614])),FALSE); /* G2279 */
  scm__rc.d2149[1645] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[615])),TRUE); /* => */
  scm__rc.d2149[1646] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[616])),TRUE); /* ^m */
  scm__rc.d2149[1647] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[617])),TRUE); /* values-ref */
  scm__rc.d2149[1648] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[618])),FALSE); /* G2278 */
  scm__rc.d2149[1649] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[619])),TRUE); /* n */
  scm__rc.d2149[1650] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[620])),TRUE); /* cs */
  scm__rc.d2149[1651] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[621])),TRUE); /* current-input-port */
  scm__rc.d2149[1652] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[622])),TRUE); /* peek-char */
  scm__rc.d2149[1653] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[623])),TRUE); /* eqv? */
  scm__rc.d2149[1654] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[624])),TRUE); /* next */
  scm__rc.d2149[1655] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[625])),TRUE); /* eof-object? */
  scm__rc.d2149[1656] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[626])),TRUE); /* quasiquote */
  scm__rc.d2149[1657] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[627])),TRUE); /* unquote */
  scm__rc.d2149[1658] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[628])),TRUE); /* unquote-splicing */
  scm__rc.d2149[1659] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[629])),TRUE); /* element1* */
  scm__rc.d2149[1660] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[630])),TRUE); /* ra */
  scm__rc.d2149[1661] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[631])),TRUE); /* element0 */
  scm__rc.d2149[1662] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[632])),TRUE); /* nd */
  scm__rc.d2149[1663] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[633])),TRUE); /* element0* */
  scm__rc.d2149[1664] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[634])),FALSE); /* loop2282 */
  scm__rc.d2149[1665] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[635])),FALSE); /* args2281 */
  scm__rc.d2149[1666] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[636])),FALSE); /* G2283 */
  scm__rc.d2149[1667] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[637])),FALSE); /* rest2280 */
  scm__rc.d2149[1668] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[638])),TRUE); /* read-char */
  scm__rc.d2149[1669] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[639])),TRUE); /* char? */
  scm__rc.d2149[1670] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[640])),TRUE); /* x */
  scm__rc.d2149[1671] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[641])),TRUE); /* ast */
  scm__rc.d2149[1672] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[642])),TRUE); /* caddr */
  scm__rc.d2149[1673] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[643])),TRUE); /* > */
  scm__rc.d2149[1674] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[644])),TRUE); /* cdddr */
  scm__rc.d2149[1675] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[645])),TRUE); /* separ */
  scm__rc.d2149[1676] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[646])),TRUE); /* and-let* */
  scm__rc.d2149[1677] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[647])),TRUE); /* len */
  scm__rc.d2149[1678] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[648])),TRUE); /* - */
  scm__rc.d2149[1679] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[649])),TRUE); /* full */
  scm__rc.d2149[1680] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[650])),TRUE); /* root-path/ */
  scm__rc.d2149[1681] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[651])),TRUE); /* current-path/ */
  scm__rc.d2149[1682] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[652])),TRUE); /* ^s */
  scm__rc.d2149[1683] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[653])),FALSE); /* args2285 */
  scm__rc.d2149[1684] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[654])),FALSE); /* G2287 */
  scm__rc.d2149[1685] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[655])),FALSE); /* G2288 */
  scm__rc.d2149[1686] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[656])),FALSE); /* rest2284 */
}
