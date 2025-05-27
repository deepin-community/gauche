/* Generated automatically from libnet.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
static unsigned char uvector__00001[] = {
 0u, 3u, 133u, 134u, 0u, 255u, 0u, 64u, 36u, 64u, 68u, 48u, 192u,
100u, 48u, 136u, 18u, 5u, 129u, 160u, 120u, 34u, 9u, 130u, 137u, 36u,
112u, 64u, 193u, 5u, 134u, 24u, 48u, 146u, 56u, 0u, 96u, 76u, 55u,
201u, 0u,};
#include "gauche/priv/configP.h"
#include "gauche/net.h"
#if defined(HAVE_IPV6)
static ScmObj in6_addr(ScmSockAddrIn6* a);
#endif /* defined(HAVE_IPV6) */
static ScmObj libnetmake_socket(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetmake_socket__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetmake_socket, NULL, NULL);

static ScmObj libnetsocket_address(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_address__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_address, NULL, NULL);

static ScmObj libnetsocket_status(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_status__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_status, NULL, NULL);

static ScmObj libnetsocket_fd(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_fd__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_fd, NULL, NULL);

static ScmObj libnetsocket_input_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_input_port__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_input_port, NULL, NULL);

static ScmObj libnetsocket_output_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_output_port__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_output_port, NULL, NULL);

static ScmObj libnetsocket_shutdown(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_shutdown__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_shutdown, NULL, NULL);

static ScmObj libnetsocket_close(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_close__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_close, NULL, NULL);

static ScmObj libnetsocket_bind(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_bind__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_bind, NULL, NULL);

static ScmObj libnetsocket_listen(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_listen__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_listen, NULL, NULL);

static ScmObj libnetsocket_accept(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_accept__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_accept, NULL, NULL);

static ScmObj libnetsocket_connect(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_connect__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_connect, NULL, NULL);

static ScmObj libnetsocket_getsockname(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_getsockname__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_getsockname, NULL, NULL);

static ScmObj libnetsocket_getpeername(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_getpeername__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_getpeername, NULL, NULL);

static ScmObj libnetsocket_send(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnetsocket_send__STUB, 2, 2,SCM_FALSE,libnetsocket_send, NULL, NULL);

static ScmObj libnetsocket_sendto(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnetsocket_sendto__STUB, 3, 2,SCM_FALSE,libnetsocket_sendto, NULL, NULL);

static ScmObj libnetsocket_sendmsg(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnetsocket_sendmsg__STUB, 2, 2,SCM_FALSE,libnetsocket_sendmsg, NULL, NULL);

static ScmObj libnetsocket_recv(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_recv__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_recv, NULL, NULL);

static ScmObj libnetsocket_recvX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_recvX__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_recvX, NULL, NULL);

static ScmObj libnetsocket_recvfrom(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_recvfrom__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_recvfrom, NULL, NULL);

static ScmObj libnetsocket_recvfromX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnetsocket_recvfromX__STUB, 3, 2,SCM_FALSE,libnetsocket_recvfromX, NULL, NULL);

static ScmObj libnetsocket_buildmsg(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnetsocket_buildmsg__STUB, 4, 2,SCM_FALSE,libnetsocket_buildmsg, NULL, NULL);

static ScmObj libnetsocket_setsockopt(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnetsocket_setsockopt__STUB, 4, 0,SCM_FALSE,libnetsocket_setsockopt, NULL, NULL);

static ScmObj libnetsocket_getsockopt(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsocket_getsockopt__STUB, 4, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsocket_getsockopt, NULL, NULL);

static ScmObj libnetsocket_ioctl(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnetsocket_ioctl__STUB, 3, 0,SCM_FALSE,libnetsocket_ioctl, NULL, NULL);

static ScmObj libnetsys_gethostbyname(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_gethostbyname__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_gethostbyname, NULL, NULL);

static ScmObj libnetsys_gethostbyaddr(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_gethostbyaddr__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_gethostbyaddr, NULL, NULL);

static ScmObj libnetsys_getprotobyname(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_getprotobyname__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_getprotobyname, NULL, NULL);

static ScmObj libnetsys_getprotobynumber(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_getprotobynumber__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_getprotobynumber, NULL, NULL);

static ScmObj libnetsys_getservbyname(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_getservbyname__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_getservbyname, NULL, NULL);

static ScmObj libnetsys_getservbyport(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_getservbyport__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_getservbyport, NULL, NULL);

static ScmObj libnetsys_ntohl(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_ntohl__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_ntohl, NULL, NULL);

static ScmObj libnetsys_ntohs(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_ntohs__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_ntohs, NULL, NULL);

static ScmObj libnetsys_htonl(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_htonl__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_htonl, NULL, NULL);

static ScmObj libnetsys_htons(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_htons__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_htons, NULL, NULL);

extern ScmObj addrinfo_allocate(ScmClass* klass,ScmObj intargs);
#if defined(HAVE_IPV6)
static ScmObj libnetsys_getaddrinfo(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnetsys_getaddrinfo__STUB, 3, 0,SCM_FALSE,libnetsys_getaddrinfo, NULL, NULL);

#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
static ScmObj libnetsys_getnameinfo(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetsys_getnameinfo__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetsys_getnameinfo, NULL, NULL);

#endif /* defined(HAVE_IPV6) */
static void export_bindings();
static ScmObj libnetinet_checksum(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetinet_checksum__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetinet_checksum, NULL, NULL);

static ScmObj libnetinet_string_TOaddress(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetinet_string_TOaddress__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetinet_string_TOaddress, NULL, NULL);

static ScmObj libnetinet_string_TOaddressX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libnetinet_string_TOaddressX__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libnetinet_string_TOaddressX, NULL, NULL);

static ScmObj libnetinet_address_TOstring(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libnetinet_address_TOstring__STUB, 2, 0,SCM_FALSE,libnetinet_address_TOstring, NULL, NULL);

static unsigned char uvector__00002[] = {
 0u, 3u, 133u, 134u, 0u, 255u, 6u, 193u, 198u, 15u, 224u, 164u, 142u,
14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u,
48u, 28u, 36u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 136u, 6u, 6u, 104u, 64u, 66u, 33u, 134u, 12u, 33u, 134u, 18u,
36u, 145u, 195u, 67u, 2u, 96u, 98u, 71u, 7u, 12u, 9u, 128u, 225u, 28u,
8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 133u, 6u, 6u, 104u, 76u, 66u, 130u, 21u, 126u, 33u, 165u,
184u, 146u, 71u, 7u, 12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u,
112u, 0u, 192u, 152u, 14u, 18u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 194u, 188u, 24u, 33u, 96u, 249u, 11u, 152u, 98u, 25u, 134u,
161u, 178u, 71u, 133u, 116u, 48u, 36u, 54u, 71u, 133u, 112u, 48u, 36u,
52u, 71u, 133u, 108u, 48u, 36u, 50u, 71u, 133u, 104u, 48u, 36u, 48u,
71u, 133u, 100u, 48u, 38u, 5u, 228u, 120u, 86u, 3u, 2u, 66u, 228u,
120u, 85u, 131u, 4u, 57u, 14u, 134u, 136u, 92u, 146u, 60u, 42u, 161u,
129u, 49u, 204u, 35u, 194u, 168u, 24u, 18u, 23u, 35u, 194u, 160u, 24u,
19u, 27u, 82u, 60u, 41u, 161u, 130u, 22u, 15u, 144u, 185u, 134u, 33u,
152u, 104u, 59u, 194u, 228u, 145u, 225u, 76u, 12u, 9u, 151u, 9u, 30u,
20u, 176u, 192u, 144u, 185u, 30u, 20u, 160u, 192u, 144u, 209u, 30u,
20u, 144u, 192u, 144u, 201u, 30u, 20u, 128u, 192u, 144u, 193u, 30u,
20u, 112u, 192u, 153u, 85u, 145u, 225u, 70u, 12u, 9u, 11u, 145u, 225u,
67u, 12u, 2u, 30u, 33u, 50u, 158u, 36u, 120u, 80u, 131u, 2u, 67u,
228u, 120u, 71u, 195u, 4u, 44u, 31u, 33u, 115u, 12u, 67u, 33u, 222u,
23u, 48u, 217u, 35u, 194u, 60u, 24u, 18u, 27u, 35u, 194u, 58u, 24u,
19u, 66u, 145u, 136u, 240u, 142u, 6u, 4u, 133u, 200u, 240u, 141u,
134u, 4u, 134u, 72u, 240u, 141u, 6u, 4u, 134u, 8u, 240u, 140u, 134u,
4u, 208u, 157u, 162u, 60u, 35u, 1u, 129u, 33u, 114u, 60u, 34u, 161u,
128u, 68u, 4u, 38u, 132u, 230u, 146u, 60u, 34u, 129u, 129u, 33u, 242u,
60u, 34u, 33u, 130u, 22u, 15u, 144u, 185u, 134u, 3u, 188u, 46u, 97u,
168u, 108u, 145u, 225u, 16u, 12u, 9u, 13u, 145u, 225u, 15u, 12u, 9u,
13u, 17u, 225u, 14u, 12u, 9u, 161u, 219u, 164u, 120u, 67u, 67u, 2u,
66u, 228u, 120u, 67u, 3u, 2u, 67u, 4u, 120u, 66u, 195u, 2u, 104u,
116u, 217u, 30u, 16u, 160u, 192u, 144u, 185u, 30u, 16u, 112u, 192u,
34u, 18u, 19u, 67u, 163u, 137u, 30u, 16u, 96u, 192u, 144u, 249u, 30u,
16u, 48u, 193u, 11u, 7u, 200u, 92u, 135u, 120u, 92u, 195u, 48u, 212u,
54u, 72u, 240u, 129u, 6u, 4u, 134u, 200u, 240u, 128u, 134u, 4u, 134u,
136u, 240u, 128u, 6u, 4u, 134u, 72u, 239u, 225u, 129u, 52u, 78u, 80u,
142u, 252u, 24u, 18u, 23u, 35u, 190u, 134u, 4u, 209u, 53u, 194u, 59u,
224u, 96u, 72u, 92u, 142u, 242u, 24u, 4u, 68u, 66u, 104u, 154u, 121u,
35u, 188u, 6u, 4u, 135u, 200u, 238u, 225u, 130u, 35u, 17u, 32u, 104u,
133u, 201u, 9u, 162u, 218u, 65u, 52u, 73u, 60u, 38u, 134u, 199u, 4u,
208u, 141u, 48u, 210u, 30u, 130u, 99u, 106u, 19u, 2u, 34u, 73u, 29u,
212u, 48u, 38u, 139u, 233u, 145u, 221u, 3u, 2u, 104u, 192u, 1u, 29u,
204u, 48u, 36u, 46u, 71u, 113u, 12u, 9u, 162u, 250u, 100u, 118u, 224u,
192u, 207u, 18u, 194u, 228u, 142u, 218u, 24u, 18u, 23u, 35u, 180u,
134u, 6u, 176u, 213u, 11u, 146u, 71u, 104u, 12u, 9u, 163u, 131u, 228u,
118u, 112u, 192u, 144u, 185u, 29u, 144u, 48u, 51u, 196u, 196u, 142u,
190u, 24u, 34u, 120u, 162u, 34u, 12u, 162u, 41u, 138u, 136u, 117u,
138u, 226u, 163u, 21u, 24u, 134u, 44u, 136u, 34u, 216u, 122u, 46u,
36u, 117u, 224u, 192u, 145u, 113u, 29u, 108u, 48u, 36u, 90u, 71u, 88u,
12u, 9u, 22u, 17u, 213u, 3u, 2u, 69u, 68u, 117u, 16u, 192u, 154u, 60u,
144u, 71u, 80u, 12u, 9u, 21u, 17u, 211u, 131u, 2u, 69u, 100u, 116u,
192u, 192u, 154u, 60u, 144u, 71u, 74u, 12u, 9u, 163u, 192u, 100u,
116u, 128u, 192u, 154u, 60u, 28u, 71u, 71u, 12u, 9u, 21u, 17u, 209u,
67u, 2u, 104u, 240u, 113u, 29u, 4u, 48u, 36u, 80u, 71u, 63u, 12u, 12u,
176u, 128u, 77u, 29u, 194u, 9u, 163u, 170u, 36u, 142u, 122u, 24u, 18u,
16u, 35u, 157u, 134u, 4u, 134u, 200u, 230u, 193u, 129u, 148u, 69u,
240u, 217u, 224u, 16u, 217u, 35u, 154u, 6u, 4u, 210u, 88u, 146u, 57u,
152u, 96u, 72u, 108u, 142u, 98u, 24u, 19u, 73u, 98u, 72u, 229u, 225u,
129u, 33u, 162u, 57u, 80u, 96u, 101u, 17u, 124u, 52u, 120u, 4u, 52u,
72u, 229u, 1u, 129u, 52u, 158u, 108u, 142u, 78u, 24u, 18u, 26u, 35u,
146u, 134u, 4u, 210u, 121u, 178u, 57u, 24u, 96u, 72u, 100u, 142u, 62u,
24u, 18u, 48u, 35u, 142u, 134u, 6u, 81u, 23u, 195u, 38u, 48u, 134u,
73u, 28u, 108u, 48u, 38u, 149u, 11u, 145u, 198u, 131u, 2u, 67u, 36u,
113u, 128u, 192u, 154u, 84u, 46u, 71u, 22u, 12u, 9u, 12u, 17u, 196u,
67u, 3u, 40u, 139u, 225u, 131u, 192u, 33u, 130u, 71u, 15u, 12u, 9u,
165u, 137u, 4u, 112u, 224u, 192u, 144u, 193u, 28u, 48u, 48u, 38u,
150u, 36u, 17u, 194u, 131u, 3u, 92u, 46u, 72u, 225u, 33u, 129u, 33u,
114u, 56u, 0u, 96u, 72u, 196u, 134u, 32u, 192u, 198u, 35u, 33u, 21u,
112u, 2u, 34u, 200u, 192u, 136u, 183u, 128u, 17u, 23u, 112u, 2u, 66u,
105u, 32u, 25u, 36u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 25u, 198u, 66u, 42u, 224u, 4u, 69u, 145u,
129u, 17u, 111u, 0u, 34u, 46u, 224u, 4u, 134u, 88u, 64u, 68u, 241u,
68u, 68u, 25u, 68u, 83u, 21u, 16u, 235u, 21u, 197u, 70u, 42u, 49u,
12u, 89u, 16u, 69u, 176u, 244u, 92u, 67u, 60u, 76u, 73u, 35u, 132u,
134u, 6u, 48u, 152u, 24u, 166u, 21u, 36u, 112u, 112u, 192u, 152u, 14u,
17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 143u, 6u, 6u, 120u, 210u, 53u, 36u, 113u, 208u, 192u, 145u,
169u, 28u, 96u, 48u, 36u, 108u, 71u, 21u, 12u, 2u, 55u, 49u, 177u,
35u, 138u, 6u, 4u, 135u, 200u, 226u, 33u, 129u, 35u, 130u, 56u, 112u,
96u, 17u, 201u, 142u, 9u, 28u, 52u, 48u, 36u, 62u, 71u, 10u, 12u, 9u,
29u, 17u, 193u, 195u, 0u, 142u, 204u, 116u, 72u, 224u, 193u, 129u,
33u, 242u, 56u, 40u, 96u, 136u, 196u, 121u, 26u, 144u, 152u, 226u,
132u, 196u, 224u, 38u, 21u, 97u, 164u, 38u, 3u, 132u, 145u, 192u,
195u, 2u, 100u, 106u, 71u, 2u, 12u, 9u, 26u, 145u, 192u, 3u, 2u, 100u,
106u, 67u, 16u, 96u, 99u, 17u, 169u, 9u, 145u, 65u, 36u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 30u, 198u, 164u, 68u, 98u, 60u, 141u, 72u,
17u, 217u, 142u, 136u, 17u, 201u, 142u, 8u, 17u, 185u, 141u, 136u,
105u, 12u, 241u, 164u, 106u, 73u, 36u, 112u, 144u, 192u, 198u, 19u,
3u, 20u, 192u, 248u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u,
76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 191u, 6u, 6u, 120u, 250u, 63u, 36u, 119u, 208u, 192u, 145u,
249u, 29u, 224u, 48u, 72u, 17u, 248u, 104u, 144u, 73u, 35u, 187u,
134u, 4u, 194u, 96u, 142u, 236u, 24u, 18u, 63u, 35u, 185u, 6u, 9u, 8u,
52u, 72u, 36u, 145u, 220u, 67u, 2u, 98u, 98u, 71u, 111u, 12u, 9u,
137u, 33u, 29u, 176u, 48u, 72u, 114u, 9u, 35u, 181u, 134u, 4u, 144u,
72u, 237u, 33u, 128u, 56u, 9u, 18u, 63u, 33u, 49u, 193u, 9u, 137u,
33u, 9u, 132u, 9u, 35u, 180u, 6u, 4u, 200u, 176u, 142u, 206u, 24u,
18u, 63u, 35u, 178u, 6u, 9u, 22u, 63u, 36u, 118u, 48u, 192u, 145u,
249u, 29u, 132u, 48u, 9u, 26u, 63u, 145u, 200u, 76u, 191u, 9u, 29u,
128u, 48u, 38u, 107u, 132u, 117u, 224u, 192u, 146u, 57u, 29u, 116u,
48u, 36u, 126u, 71u, 90u, 12u, 18u, 4u, 145u, 36u, 146u, 58u, 200u,
96u, 73u, 36u, 142u, 176u, 24u, 18u, 72u, 35u, 169u, 6u, 8u, 114u,
74u, 146u, 36u, 146u, 71u, 81u, 12u, 9u, 36u, 145u, 212u, 3u, 2u, 73u,
4u, 116u, 192u, 192u, 154u, 19u, 8u, 71u, 71u, 12u, 18u, 36u, 146u,
72u, 232u, 193u, 129u, 36u, 146u, 58u, 0u, 96u, 144u, 164u, 146u, 71u,
63u, 12u, 9u, 36u, 145u, 207u, 67u, 2u, 104u, 94u, 129u, 28u, 236u,
48u, 55u, 135u, 1u, 34u, 73u, 4u, 59u, 4u, 208u, 189u, 0u, 154u, 22u,
38u, 72u, 77u, 9u, 132u, 36u, 115u, 160u, 192u, 154u, 26u, 46u, 71u,
57u, 12u, 9u, 36u, 17u, 206u, 3u, 3u, 32u, 18u, 72u, 101u, 13u, 114u,
89u, 110u, 13u, 18u, 89u, 36u, 132u, 208u, 208u, 16u, 154u, 16u, 166u,
72u, 230u, 225u, 129u, 52u, 62u, 76u, 142u, 100u, 24u, 19u, 67u, 212u,
200u, 230u, 33u, 129u, 36u, 178u, 57u, 128u, 96u, 100u, 2u, 72u, 12u,
161u, 174u, 76u, 45u, 193u, 162u, 76u, 36u, 137u, 44u, 50u, 134u,
185u, 48u, 134u, 21u, 33u, 170u, 76u, 36u, 144u, 154u, 30u, 26u, 72u,
229u, 225u, 129u, 52u, 75u, 120u, 142u, 84u, 24u, 19u, 68u, 165u, 8u,
229u, 33u, 129u, 36u, 18u, 57u, 56u, 96u, 77u, 18u, 30u, 35u, 145u,
6u, 4u, 209u, 29u, 226u, 57u, 8u, 96u, 73u, 4u, 142u, 60u, 24u, 30u,
227u, 240u, 195u, 28u, 146u, 71u, 29u, 12u, 9u, 31u, 145u, 198u, 131u,
4u, 155u, 39u, 18u, 56u, 200u, 96u, 73u, 56u, 142u, 46u, 24u, 25u,
228u, 249u, 56u, 145u, 197u, 131u, 2u, 73u, 196u, 113u, 32u, 192u,
154u, 47u, 20u, 71u, 14u, 12u, 13u, 226u, 68u, 147u, 136u, 77u, 23u,
138u, 36u, 112u, 208u, 192u, 154u, 49u, 156u, 71u, 12u, 12u, 9u, 39u,
17u, 194u, 195u, 3u, 32u, 18u, 112u, 101u, 13u, 114u, 129u, 110u, 13u,
18u, 129u, 36u, 132u, 209u, 140u, 48u, 154u, 45u, 154u, 72u, 225u,
65u, 129u, 52u, 107u, 12u, 142u, 10u, 24u, 19u, 70u, 160u, 200u, 224u,
129u, 129u, 36u, 18u, 56u, 8u, 96u, 123u, 143u, 195u, 12u, 118u, 73u,
28u, 0u, 48u, 36u, 126u, 67u, 16u, 96u, 99u, 17u, 250u, 72u, 33u,
176u, 4u, 209u, 204u, 129u, 40u, 200u, 32u, 73u, 205u, 196u, 132u,
209u, 140u, 48u, 154u, 45u, 154u, 72u, 9u, 162u, 187u, 66u, 81u, 144u,
64u, 146u, 27u, 136u, 146u, 91u, 137u, 9u, 161u, 160u, 33u, 52u, 33u,
76u, 144u, 153u, 172u, 132u, 200u, 120u, 52u, 132u, 192u, 112u, 146u,
72u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 41u, 71u, 233u, 32u, 134u, 192u, 30u,
227u, 240u, 195u, 29u, 146u, 37u, 25u, 4u, 9u, 57u, 184u, 144u, 222u,
36u, 73u, 56u, 134u, 121u, 62u, 78u, 36u, 73u, 178u, 113u, 36u, 7u,
184u, 252u, 48u, 199u, 36u, 137u, 70u, 65u, 2u, 72u, 110u, 34u, 73u,
110u, 36u, 55u, 135u, 1u, 34u, 73u, 4u, 59u, 9u, 10u, 73u, 34u, 68u,
146u, 73u, 34u, 28u, 146u, 164u, 137u, 36u, 145u, 32u, 73u, 18u, 73u,
36u, 9u, 26u, 63u, 145u, 200u, 145u, 99u, 242u, 64u, 112u, 18u, 36u,
126u, 68u, 135u, 32u, 145u, 33u, 6u, 137u, 4u, 146u, 36u, 8u, 252u,
52u, 72u, 36u, 144u, 210u, 25u, 227u, 232u, 252u, 146u, 72u, 225u,
33u, 129u, 140u, 38u, 6u, 41u, 130u, 73u, 28u, 28u, 48u, 38u, 3u,
132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 137u, 6u, 4u, 148u, 200u, 226u, 1u, 130u, 84u, 148u, 227u,
82u, 71u, 15u, 12u, 9u, 26u, 145u, 195u, 131u, 2u, 74u, 100u, 112u,
192u, 192u, 152u, 35u, 17u, 194u, 195u, 3u, 32u, 18u, 152u, 149u, 68u,
123u, 26u, 153u, 88u, 146u, 19u, 4u, 105u, 76u, 145u, 194u, 67u, 2u,
98u, 64u, 71u, 7u, 12u, 9u, 43u, 17u, 193u, 67u, 2u, 98u, 90u, 71u,
4u, 12u, 9u, 26u, 145u, 192u, 131u, 2u, 98u, 90u, 71u, 0u, 12u, 9u,
137u, 1u, 12u, 65u, 129u, 140u, 70u, 164u, 74u, 242u, 152u, 76u, 72u,
2u, 96u, 140u, 73u, 32u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 34u, 198u, 164u, 74u, 242u, 152u, 149u,
68u, 123u, 26u, 153u, 88u, 137u, 82u, 83u, 141u, 73u, 36u, 112u, 144u,
192u, 198u, 19u, 3u, 20u, 192u, 248u, 142u, 14u, 24u, 19u, 1u, 194u,
56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00013[] = {
 0u, 3u, 139u, 134u, 4u, 148u, 200u, 226u, 161u, 130u, 84u, 148u,
196u, 79u, 44u, 75u, 50u, 113u, 36u, 113u, 48u, 192u, 152u, 46u, 145u,
196u, 131u, 2u, 73u, 196u, 112u, 224u, 192u, 146u, 193u, 28u, 48u,
48u, 38u, 11u, 164u, 112u, 176u, 192u, 146u, 153u, 28u, 36u, 48u, 38u,
8u, 196u, 112u, 128u, 192u, 200u, 4u, 166u, 37u, 88u, 234u, 86u, 36u,
132u, 193u, 26u, 83u, 36u, 112u, 96u, 192u, 152u, 229u, 17u, 193u, 3u,
2u, 74u, 196u, 112u, 32u, 192u, 145u, 209u, 28u, 0u, 48u, 38u, 57u,
68u, 49u, 6u, 6u, 49u, 39u, 17u, 43u, 202u, 97u, 49u, 202u, 9u, 130u,
49u, 36u, 128u,};
static unsigned char uvector__00014[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 38u, 201u, 196u, 74u, 242u, 152u, 149u,
99u, 169u, 88u, 137u, 82u, 83u, 17u, 60u, 177u, 44u, 201u, 196u, 146u,
71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 15u, 136u, 224u, 225u, 129u,
48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u,
64u,};
static unsigned char uvector__00015[] = {
 0u, 3u, 128u, 134u, 4u, 150u, 136u, 224u, 1u, 129u, 37u, 178u, 24u,
131u, 3u, 24u, 150u, 200u, 108u, 13u, 34u, 92u, 150u, 165u, 178u,
220u, 73u, 36u,};
static unsigned char uvector__00016[] = {
 0u, 3u, 137u, 6u, 4u, 148u, 200u, 226u, 1u, 130u, 84u, 148u, 229u,
210u, 71u, 15u, 12u, 9u, 46u, 145u, 195u, 131u, 2u, 74u, 100u, 112u,
192u, 192u, 152u, 35u, 17u, 194u, 195u, 3u, 32u, 18u, 152u, 149u, 68u,
123u, 46u, 153u, 88u, 146u, 19u, 4u, 105u, 76u, 145u, 194u, 67u, 2u,
98u, 64u, 71u, 7u, 12u, 9u, 43u, 17u, 193u, 67u, 2u, 98u, 90u, 71u,
4u, 12u, 9u, 46u, 145u, 192u, 131u, 2u, 98u, 90u, 71u, 0u, 12u, 9u,
137u, 1u, 12u, 65u, 129u, 141u, 68u, 175u, 41u, 132u, 196u, 128u, 38u,
8u, 196u, 146u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 133u, 6u, 9u, 120u, 49u, 137u, 108u, 134u, 192u, 210u, 37u,
201u, 106u, 91u, 45u, 196u, 144u, 198u, 162u, 87u, 148u, 196u, 170u,
35u, 217u, 116u, 202u, 196u, 74u, 146u, 156u, 186u, 73u, 151u, 223u,
137u, 28u, 12u, 48u, 38u, 17u, 228u, 112u, 0u, 192u, 152u, 20u, 144u,
196u, 24u, 24u, 196u, 186u, 68u, 192u, 37u, 176u, 152u, 39u, 144u,
152u, 79u, 18u, 72u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 141u, 134u, 4u, 148u, 200u, 227u, 33u, 130u, 97u, 150u, 137u,
28u, 96u, 48u, 36u, 180u, 71u, 22u, 12u, 9u, 130u, 49u, 28u, 72u, 48u,
55u, 202u, 97u, 48u, 70u, 36u, 113u, 16u, 192u, 146u, 153u, 28u, 64u,
48u, 50u, 1u, 41u, 137u, 138u, 99u, 19u, 36u, 145u, 36u, 146u, 72u,
76u, 52u, 101u, 50u, 71u, 14u, 12u, 9u, 138u, 225u, 28u, 48u, 48u,
38u, 46u, 100u, 112u, 176u, 192u, 146u, 73u, 28u, 40u, 48u, 36u, 144u,
71u, 8u, 12u, 9u, 139u, 153u, 28u, 28u, 48u, 36u, 198u, 71u, 5u, 12u,
9u, 138u, 225u, 28u, 8u, 48u, 36u, 180u, 71u, 1u, 12u, 12u, 128u, 75u,
77u, 196u, 134u, 97u, 49u, 203u, 164u, 76u, 2u, 91u, 13u, 34u, 92u,
150u, 165u, 178u, 220u, 72u, 149u, 229u, 49u, 42u, 136u, 246u, 93u,
50u, 177u, 18u, 164u, 167u, 46u, 146u, 72u, 149u, 229u, 48u, 152u,
174u, 4u, 195u, 68u, 146u, 24u, 131u, 3u, 24u, 146u, 36u, 146u, 27u,
101u, 166u, 224u, 153u, 178u, 4u, 208u, 137u, 130u, 73u, 0u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 32u, 73u, 18u, 73u, 13u, 178u, 211u, 112u,
102u, 19u, 28u, 186u, 68u, 192u, 37u, 176u, 210u, 37u, 201u, 106u,
91u, 45u, 196u, 137u, 94u, 83u, 18u, 168u, 143u, 101u, 211u, 43u, 17u,
42u, 74u, 114u, 233u, 36u, 137u, 94u, 83u, 19u, 20u, 198u, 38u, 73u,
34u, 73u, 36u, 55u, 202u, 98u, 97u, 150u, 137u, 36u, 145u, 194u, 67u,
3u, 24u, 76u, 12u, 83u, 4u, 130u, 56u, 56u, 96u, 76u, 7u, 8u, 224u,
65u, 129u, 48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 194u, 8u, 24u, 25u, 227u, 232u, 252u, 145u, 225u, 3u, 12u,
9u, 31u, 145u, 223u, 195u, 3u, 172u, 203u, 31u, 200u, 36u, 142u, 252u,
24u, 18u, 65u, 35u, 190u, 134u, 4u, 143u, 200u, 239u, 97u, 129u, 38u,
82u, 59u, 200u, 96u, 18u, 20u, 126u, 66u, 97u, 26u, 72u, 238u, 225u,
129u, 49u, 83u, 35u, 187u, 6u, 4u, 143u, 200u, 238u, 129u, 129u, 49u,
83u, 35u, 185u, 6u, 7u, 89u, 154u, 63u, 144u, 73u, 29u, 196u, 48u,
36u, 130u, 71u, 112u, 12u, 9u, 31u, 145u, 219u, 131u, 2u, 76u, 196u,
118u, 192u, 192u, 36u, 104u, 254u, 71u, 33u, 50u, 36u, 36u, 118u,
176u, 192u, 153u, 117u, 17u, 218u, 67u, 2u, 72u, 228u, 118u, 128u,
192u, 145u, 249u, 29u, 148u, 48u, 51u, 204u, 242u, 73u, 35u, 178u, 6u,
4u, 146u, 72u, 235u, 225u, 130u, 68u, 146u, 73u, 29u, 120u, 48u, 36u,
146u, 71u, 92u, 12u, 14u, 179u, 44u, 146u, 26u, 164u, 18u, 72u, 235u,
97u, 129u, 52u, 37u, 8u, 142u, 180u, 24u, 18u, 73u, 35u, 172u, 6u, 4u,
153u, 72u, 234u, 193u, 128u, 59u, 9u, 10u, 73u, 33u, 52u, 33u, 24u,
132u, 208u, 144u, 50u, 71u, 84u, 12u, 9u, 161u, 89u, 132u, 117u, 48u,
192u, 146u, 73u, 29u, 68u, 48u, 38u, 133u, 102u, 17u, 211u, 195u, 3u,
172u, 209u, 36u, 134u, 169u, 4u, 146u, 58u, 112u, 96u, 77u, 13u, 12u,
35u, 166u, 134u, 4u, 146u, 72u, 233u, 97u, 129u, 38u, 130u, 58u, 72u,
96u, 76u, 240u, 72u, 233u, 1u, 129u, 36u, 146u, 58u, 32u, 96u, 76u,
240u, 72u, 232u, 1u, 129u, 188u, 77u, 34u, 106u, 144u, 164u, 67u, 36u,
145u, 45u, 18u, 71u, 62u, 12u, 9u, 161u, 243u, 36u, 115u, 208u, 192u,
146u, 73u, 28u, 232u, 48u, 38u, 135u, 227u, 17u, 206u, 3u, 2u, 72u,
132u, 115u, 96u, 192u, 146u, 17u, 28u, 208u, 48u, 38u, 135u, 227u,
17u, 204u, 131u, 2u, 104u, 124u, 201u, 28u, 192u, 48u, 8u, 166u, 73u,
33u, 52u, 62u, 56u, 38u, 134u, 102u, 146u, 57u, 112u, 96u, 77u, 19u,
20u, 35u, 150u, 134u, 4u, 146u, 72u, 229u, 97u, 129u, 52u, 76u, 80u,
142u, 84u, 24u, 25u, 0u, 146u, 67u, 40u, 107u, 154u, 203u, 112u, 104u,
154u, 201u, 36u, 51u, 9u, 104u, 132u, 207u, 4u, 134u, 192u, 154u, 38u,
34u, 19u, 66u, 167u, 131u, 72u, 150u, 137u, 36u, 142u, 82u, 24u, 19u,
69u, 102u, 8u, 228u, 129u, 129u, 52u, 85u, 96u, 142u, 70u, 24u, 18u,
65u, 35u, 144u, 6u, 7u, 184u, 252u, 48u, 199u, 36u, 145u, 199u, 195u,
2u, 71u, 228u, 113u, 208u, 192u, 235u, 54u, 73u, 193u, 170u, 65u, 36u,
142u, 56u, 24u, 19u, 70u, 99u, 136u, 227u, 97u, 129u, 36u, 226u, 56u,
200u, 96u, 73u, 176u, 142u, 46u, 24u, 25u, 228u, 249u, 56u, 145u,
197u, 131u, 2u, 73u, 196u, 113u, 32u, 192u, 154u, 54u, 20u, 71u, 14u,
12u, 13u, 226u, 68u, 147u, 136u, 77u, 27u, 10u, 36u, 112u, 208u, 192u,
154u, 56u, 156u, 71u, 12u, 12u, 9u, 39u, 17u, 194u, 195u, 3u, 32u,
18u, 112u, 101u, 13u, 115u, 105u, 110u, 13u, 19u, 105u, 36u, 132u,
209u, 196u, 48u, 154u, 50u, 158u, 72u, 225u, 65u, 129u, 52u, 121u,
12u, 142u, 10u, 24u, 19u, 71u, 128u, 200u, 224u, 129u, 129u, 36u, 18u,
56u, 8u, 96u, 123u, 143u, 195u, 12u, 118u, 73u, 28u, 0u, 48u, 36u,
126u, 67u, 16u, 96u, 99u, 17u, 250u, 72u, 33u, 176u, 4u, 210u, 4u,
129u, 40u, 200u, 32u, 73u, 205u, 196u, 132u, 209u, 196u, 48u, 154u,
50u, 158u, 72u, 9u, 163u, 11u, 130u, 81u, 144u, 64u, 146u, 91u, 137u,
9u, 162u, 187u, 33u, 52u, 89u, 48u, 144u, 153u, 115u, 132u, 197u, 64u,
52u, 132u, 192u, 136u, 146u, 72u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 55u, 71u, 233u, 32u, 134u, 192u, 30u,
227u, 240u, 195u, 29u, 146u, 37u, 25u, 4u, 9u, 57u, 184u, 144u, 222u,
36u, 73u, 56u, 134u, 121u, 62u, 78u, 36u, 58u, 205u, 146u, 112u, 106u,
144u, 73u, 36u, 7u, 184u, 252u, 48u, 199u, 36u, 137u, 70u, 65u, 2u,
73u, 110u, 36u, 51u, 9u, 104u, 134u, 121u, 158u, 73u, 36u, 54u, 1u,
20u, 201u, 36u, 55u, 137u, 164u, 77u, 82u, 20u, 136u, 100u, 146u, 37u,
162u, 67u, 172u, 209u, 36u, 134u, 169u, 4u, 146u, 3u, 176u, 144u,
164u, 146u, 36u, 73u, 36u, 144u, 235u, 50u, 201u, 33u, 170u, 65u, 36u,
134u, 145u, 45u, 18u, 73u, 2u, 70u, 143u, 228u, 114u, 29u, 102u, 104u,
254u, 65u, 36u, 9u, 10u, 63u, 33u, 214u, 101u, 143u, 228u, 18u, 67u,
72u, 103u, 143u, 163u, 242u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 24u,
166u, 9u, 36u, 112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u,
56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00022[] = {
 0u, 3u, 194u, 144u, 24u, 38u, 240u, 249u, 56u, 25u, 198u, 114u, 156u,
201u, 30u, 20u, 112u, 192u, 147u, 153u, 30u, 20u, 96u, 192u, 147u,
145u, 30u, 20u, 80u, 192u, 147u, 137u, 30u, 20u, 64u, 192u, 152u, 23u,
145u, 225u, 67u, 12u, 9u, 56u, 17u, 225u, 65u, 12u, 16u, 228u, 58u,
26u, 39u, 2u, 72u, 240u, 160u, 6u, 4u, 198u, 72u, 143u, 8u, 248u, 96u,
73u, 192u, 143u, 8u, 216u, 96u, 76u, 94u, 200u, 240u, 140u, 6u, 9u,
188u, 62u, 78u, 6u, 113u, 156u, 131u, 188u, 224u, 73u, 30u, 17u, 112u,
192u, 153u, 78u, 145u, 225u, 22u, 12u, 9u, 56u, 17u, 225u, 21u, 12u,
9u, 57u, 17u, 225u, 20u, 12u, 9u, 56u, 145u, 225u, 19u, 12u, 9u, 147u,
137u, 30u, 17u, 32u, 192u, 147u, 129u, 30u, 16u, 240u, 192u, 39u, 66u,
19u, 38u, 66u, 71u, 132u, 56u, 48u, 36u, 62u, 71u, 132u, 44u, 48u,
77u, 225u, 242u, 112u, 51u, 136u, 119u, 156u, 12u, 230u, 72u, 240u,
133u, 6u, 4u, 156u, 200u, 240u, 132u, 134u, 4u, 208u, 148u, 130u, 60u,
33u, 1u, 129u, 39u, 2u, 60u, 32u, 225u, 129u, 39u, 18u, 60u, 32u,
193u, 129u, 52u, 36u, 24u, 143u, 8u, 40u, 96u, 73u, 192u, 143u, 8u,
16u, 96u, 19u, 169u, 9u, 161u, 27u, 36u, 143u, 8u, 8u, 96u, 72u, 124u,
142u, 252u, 24u, 38u, 240u, 249u, 56u, 16u, 239u, 56u, 25u, 202u,
115u, 36u, 119u, 208u, 192u, 147u, 153u, 29u, 240u, 48u, 36u, 228u,
71u, 123u, 12u, 9u, 161u, 171u, 228u, 119u, 160u, 192u, 147u, 129u,
29u, 228u, 48u, 38u, 134u, 163u, 145u, 222u, 3u, 2u, 78u, 4u, 119u,
80u, 192u, 39u, 98u, 19u, 67u, 70u, 137u, 29u, 208u, 48u, 36u, 62u,
71u, 115u, 12u, 17u, 24u, 137u, 3u, 68u, 224u, 72u, 77u, 16u, 23u, 9u,
161u, 136u, 1u, 51u, 255u, 13u, 33u, 232u, 38u, 47u, 97u, 48u, 34u,
36u, 145u, 220u, 67u, 2u, 104u, 136u, 193u, 29u, 192u, 48u, 38u, 136u,
162u, 145u, 219u, 131u, 2u, 104u, 136u, 193u, 29u, 172u, 48u, 51u,
196u, 179u, 129u, 35u, 181u, 6u, 4u, 156u, 8u, 236u, 193u, 129u, 172u,
53u, 78u, 4u, 145u, 217u, 67u, 2u, 104u, 166u, 201u, 29u, 144u, 48u,
36u, 166u, 71u, 98u, 12u, 19u, 188u, 167u, 60u, 18u, 59u, 8u, 96u,
73u, 224u, 142u, 192u, 24u, 18u, 83u, 35u, 175u, 6u, 4u, 209u, 96u,
178u, 58u, 224u, 96u, 158u, 101u, 56u, 212u, 145u, 214u, 195u, 2u,
70u, 164u, 117u, 160u, 192u, 146u, 153u, 29u, 96u, 48u, 38u, 139u,
200u, 17u, 213u, 3u, 4u, 245u, 41u, 207u, 115u, 231u, 1u, 36u, 117u,
16u, 192u, 147u, 225u, 29u, 60u, 48u, 36u, 246u, 71u, 78u, 12u, 9u,
41u, 145u, 211u, 3u, 2u, 104u, 200u, 169u, 29u, 40u, 48u, 60u, 79u,
161u, 52u, 100u, 84u, 145u, 210u, 67u, 2u, 79u, 164u, 116u, 96u, 193u,
63u, 74u, 113u, 169u, 35u, 162u, 134u, 4u, 159u, 136u, 232u, 129u,
129u, 35u, 82u, 58u, 24u, 96u, 73u, 76u, 142u, 130u, 24u, 19u, 71u,
3u, 200u, 231u, 225u, 129u, 224u, 79u, 243u, 241u, 9u, 163u, 129u,
228u, 142u, 122u, 24u, 19u, 71u, 130u, 72u, 231u, 129u, 129u, 39u,
226u, 57u, 208u, 96u, 77u, 30u, 9u, 35u, 156u, 134u, 6u, 64u, 37u,
49u, 42u, 136u, 246u, 53u, 50u, 177u, 36u, 38u, 142u, 239u, 4u, 209u,
177u, 144u, 154u, 47u, 32u, 19u, 69u, 130u, 229u, 50u, 71u, 55u, 12u,
9u, 164u, 0u, 228u, 115u, 80u, 192u, 146u, 177u, 28u, 204u, 48u, 38u,
144u, 10u, 17u, 204u, 131u, 2u, 70u, 164u, 115u, 0u, 192u, 154u, 64u,
40u, 71u, 46u, 12u, 9u, 164u, 0u, 228u, 114u, 192u, 192u, 147u, 153u,
28u, 156u, 48u, 50u, 136u, 190u, 115u, 48u, 124u, 230u, 72u, 228u,
161u, 129u, 52u, 145u, 48u, 142u, 72u, 24u, 18u, 115u, 35u, 145u, 6u,
4u, 210u, 68u, 194u, 57u, 0u, 96u, 73u, 200u, 142u, 54u, 24u, 25u,
68u, 95u, 57u, 22u, 233u, 200u, 145u, 198u, 67u, 2u, 105u, 50u, 233u,
28u, 96u, 48u, 36u, 228u, 71u, 22u, 12u, 9u, 164u, 203u, 164u, 113u,
64u, 192u, 147u, 137u, 28u, 60u, 48u, 50u, 136u, 190u, 113u, 45u,
211u, 137u, 35u, 134u, 134u, 4u, 210u, 136u, 194u, 56u, 96u, 96u, 73u,
196u, 142u, 20u, 24u, 19u, 74u, 35u, 8u, 225u, 1u, 129u, 174u, 112u,
36u, 112u, 112u, 192u, 147u, 129u, 28u, 0u, 48u, 37u, 8u, 1u, 12u,
65u, 129u, 140u, 70u, 177u, 144u, 159u, 91u, 136u, 159u, 155u, 136u,
158u, 32u, 242u, 68u, 175u, 41u, 132u, 210u, 0u, 112u, 154u, 59u,
188u, 19u, 70u, 198u, 66u, 104u, 188u, 128u, 77u, 22u, 11u, 36u, 144u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 51u, 70u, 177u, 144u, 159u, 91u, 136u,
159u, 155u, 136u, 158u, 32u, 242u, 68u, 175u, 41u, 137u, 84u, 71u,
177u, 169u, 149u, 136u, 120u, 19u, 252u, 252u, 68u, 253u, 41u, 198u,
164u, 135u, 137u, 244u, 79u, 82u, 156u, 247u, 62u, 112u, 18u, 68u,
243u, 41u, 198u, 164u, 78u, 242u, 156u, 240u, 73u, 35u, 132u, 134u,
6u, 48u, 152u, 24u, 166u, 18u, 68u, 112u, 112u, 192u, 152u, 14u, 17u,
192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 170u, 6u, 10u, 16u, 16u, 249u, 66u, 4u, 104u, 64u, 201u, 29u,
76u, 48u, 37u, 8u, 25u, 29u, 72u, 48u, 38u, 5u, 228u, 117u, 16u, 192u,
148u, 32u, 68u, 116u, 240u, 193u, 14u, 67u, 161u, 162u, 132u, 8u,
146u, 58u, 112u, 96u, 76u, 71u, 136u, 233u, 65u, 129u, 49u, 7u, 35u,
163u, 134u, 10u, 16u, 16u, 249u, 66u, 4u, 67u, 189u, 8u, 17u, 36u,
116u, 96u, 192u, 152u, 242u, 145u, 209u, 67u, 2u, 80u, 129u, 17u,
209u, 3u, 2u, 99u, 142u, 71u, 67u, 12u, 9u, 66u, 4u, 71u, 64u, 12u,
2u, 116u, 33u, 49u, 180u, 36u, 115u, 240u, 192u, 144u, 249u, 28u,
248u, 48u, 68u, 98u, 36u, 13u, 20u, 32u, 68u, 132u, 203u, 108u, 52u,
135u, 160u, 152u, 131u, 132u, 192u, 112u, 146u, 71u, 60u, 12u, 9u,
154u, 177u, 28u, 236u, 48u, 38u, 108u, 100u, 115u, 144u, 192u, 153u,
171u, 17u, 205u, 131u, 3u, 60u, 75u, 66u, 4u, 72u, 230u, 161u, 129u,
40u, 64u, 136u, 230u, 33u, 129u, 172u, 53u, 80u, 129u, 18u, 71u, 48u,
12u, 9u, 161u, 64u, 36u, 114u, 240u, 192u, 146u, 153u, 28u, 180u, 48u,
78u, 242u, 156u, 240u, 72u, 229u, 129u, 129u, 39u, 130u, 57u, 88u,
96u, 73u, 76u, 142u, 82u, 24u, 19u, 66u, 198u, 72u, 228u, 225u, 130u,
121u, 148u, 196u, 79u, 44u, 75u, 50u, 113u, 36u, 114u, 80u, 192u,
154u, 25u, 170u, 71u, 36u, 12u, 9u, 39u, 17u, 200u, 3u, 2u, 75u, 4u,
113u, 224u, 192u, 154u, 25u, 170u, 71u, 29u, 12u, 9u, 41u, 145u, 198u,
195u, 2u, 104u, 100u, 241u, 28u, 104u, 48u, 50u, 1u, 41u, 137u, 86u,
58u, 149u, 137u, 33u, 52u, 50u, 120u, 38u, 133u, 140u, 202u, 100u,
142u, 48u, 24u, 19u, 67u, 245u, 8u, 226u, 193u, 129u, 37u, 98u, 56u,
160u, 96u, 72u, 232u, 142u, 36u, 24u, 19u, 67u, 245u, 8u, 226u, 1u,
129u, 40u, 64u, 200u, 225u, 97u, 129u, 148u, 69u, 244u, 32u, 102u,
15u, 161u, 3u, 36u, 112u, 144u, 192u, 154u, 37u, 162u, 71u, 8u, 12u,
9u, 66u, 6u, 71u, 6u, 12u, 9u, 162u, 90u, 36u, 112u, 64u, 192u, 215u,
66u, 4u, 72u, 224u, 97u, 129u, 40u, 64u, 136u, 224u, 1u, 129u, 40u,
65u, 8u, 98u, 12u, 12u, 98u, 78u, 140u, 132u, 241u, 7u, 146u, 37u,
121u, 76u, 38u, 135u, 234u, 4u, 208u, 201u, 224u, 154u, 22u, 50u, 73u,
32u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 54u, 73u, 209u, 144u, 158u, 32u, 242u,
68u, 175u, 41u, 137u, 86u, 58u, 149u, 136u, 158u, 101u, 49u, 19u,
203u, 18u, 204u, 156u, 72u, 157u, 229u, 57u, 224u, 146u, 71u, 9u, 12u,
12u, 97u, 48u, 49u, 76u, 24u, 136u, 224u, 225u, 129u, 48u, 28u, 35u,
129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 133u, 6u, 7u, 89u, 152u, 52u, 9u, 145u, 186u, 73u, 38u, 65u,
36u, 112u, 144u, 192u, 146u, 9u, 28u, 32u, 48u, 38u, 6u, 36u, 112u,
96u, 192u, 152u, 30u, 17u, 193u, 67u, 2u, 73u, 36u, 112u, 32u, 192u,
152u, 30u, 17u, 192u, 3u, 2u, 76u, 196u, 49u, 6u, 6u, 49u, 36u, 164u,
130u, 19u, 1u, 194u, 72u,};
static unsigned char uvector__00027[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 50u, 201u, 41u, 32u, 135u, 89u, 152u, 52u,
9u, 145u, 186u, 73u, 38u, 65u, 36u, 142u, 18u, 24u, 24u, 194u, 96u,
98u, 152u, 36u, 145u, 193u, 195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u,
128u, 225u, 28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00028[] = {
 0u, 3u, 129u, 6u, 9u, 145u, 186u, 132u, 20u, 145u, 192u, 67u, 2u,
80u, 130u, 144u, 196u, 24u, 24u, 197u, 8u, 41u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00029[] = {
 0u, 3u, 130u, 6u, 7u, 89u, 154u, 93u, 144u, 73u, 28u, 12u, 48u, 36u,
130u, 71u, 2u, 12u, 9u, 46u, 145u, 192u, 3u, 2u, 76u, 196u, 49u, 6u,
6u, 53u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00030[] = {
 0u, 3u, 133u, 6u, 9u, 120u, 49u, 137u, 108u, 134u, 192u, 210u, 37u,
201u, 106u, 91u, 45u, 196u, 144u, 198u, 161u, 214u, 102u, 151u, 100u,
18u, 101u, 247u, 226u, 71u, 3u, 12u, 9u, 132u, 121u, 28u, 0u, 48u,
38u, 5u, 36u, 49u, 6u, 6u, 49u, 46u, 145u, 48u, 9u, 108u, 38u, 9u,
228u, 38u, 19u, 196u, 146u,};
static unsigned char uvector__00031[] = {
 0u, 3u, 141u, 134u, 4u, 148u, 200u, 227u, 33u, 130u, 97u, 150u, 137u,
28u, 96u, 48u, 36u, 180u, 71u, 22u, 12u, 9u, 130u, 49u, 28u, 72u, 48u,
55u, 202u, 97u, 48u, 70u, 36u, 113u, 16u, 192u, 146u, 153u, 28u, 64u,
48u, 50u, 1u, 41u, 137u, 138u, 132u, 24u, 80u, 131u, 208u, 132u, 10u,
16u, 153u, 145u, 186u, 132u, 40u, 208u, 133u, 146u, 72u, 76u, 52u,
101u, 50u, 71u, 14u, 12u, 9u, 138u, 225u, 28u, 48u, 48u, 80u, 132u,
4u, 198u, 114u, 132u, 44u, 145u, 194u, 195u, 2u, 80u, 133u, 145u,
194u, 131u, 2u, 80u, 134u, 17u, 194u, 3u, 2u, 100u, 178u, 71u, 7u,
12u, 9u, 66u, 12u, 71u, 5u, 12u, 9u, 138u, 225u, 28u, 8u, 48u, 36u,
180u, 71u, 1u, 12u, 12u, 128u, 75u, 77u, 196u, 134u, 97u, 66u, 13u,
46u, 145u, 48u, 9u, 108u, 52u, 137u, 114u, 90u, 150u, 203u, 113u, 33u,
214u, 102u, 151u, 100u, 18u, 72u, 149u, 229u, 48u, 152u, 174u, 4u,
195u, 68u, 146u, 24u, 131u, 3u, 24u, 161u, 11u, 73u, 4u, 54u, 203u,
77u, 193u, 51u, 236u, 9u, 161u, 40u, 4u, 146u,};
static unsigned char uvector__00032[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 52u, 80u, 133u, 164u, 130u, 27u, 101u,
166u, 224u, 204u, 40u, 65u, 165u, 210u, 38u, 1u, 45u, 134u, 145u, 46u,
75u, 82u, 217u, 110u, 36u, 58u, 204u, 210u, 236u, 130u, 73u, 18u,
188u, 166u, 38u, 42u, 16u, 97u, 66u, 15u, 66u, 16u, 40u, 66u, 102u,
70u, 234u, 16u, 163u, 66u, 22u, 72u, 111u, 148u, 196u, 195u, 45u, 18u,
73u, 35u, 133u, 134u, 6u, 48u, 152u, 24u, 166u, 9u, 228u, 112u, 144u,
192u, 152u, 14u, 17u, 193u, 3u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u,
225u, 32u,};
static unsigned char uvector__00033[] = {
 0u, 3u, 132u, 6u, 7u, 177u, 30u, 80u, 134u, 144u, 195u, 27u, 146u,
71u, 3u, 12u, 9u, 129u, 57u, 28u, 8u, 48u, 37u, 8u, 105u, 28u, 0u,
48u, 38u, 4u, 228u, 49u, 6u, 6u, 49u, 66u, 26u, 66u, 96u, 56u, 73u,
0u,};
static unsigned char uvector__00034[] = {
 0u, 3u, 132u, 6u, 7u, 177u, 30u, 80u, 134u, 144u, 195u, 28u, 146u,
71u, 3u, 12u, 9u, 129u, 57u, 28u, 8u, 48u, 37u, 8u, 105u, 28u, 0u,
48u, 38u, 4u, 228u, 49u, 6u, 6u, 49u, 66u, 26u, 66u, 96u, 56u, 73u,
0u,};
static unsigned char uvector__00035[] = {
 0u, 3u, 136u, 134u, 10u, 16u, 225u, 66u, 31u, 45u, 134u, 26u, 17u,
2u, 69u, 8u, 136u, 20u, 34u, 84u, 34u, 100u, 80u, 137u, 80u, 138u,
18u, 73u, 28u, 60u, 48u, 37u, 8u, 161u, 28u, 56u, 48u, 37u, 8u, 153u,
28u, 44u, 48u, 38u, 5u, 228u, 112u, 128u, 192u, 146u, 217u, 28u, 24u,
48u, 38u, 5u, 228u, 112u, 48u, 193u, 66u, 43u, 45u, 146u, 56u, 16u,
96u, 73u, 108u, 142u, 0u, 24u, 19u, 29u, 114u, 24u, 131u, 3u, 24u,
150u, 200u, 112u, 9u, 142u, 184u, 76u, 7u, 9u, 36u,};
static unsigned char uvector__00036[] = {
 0u, 3u, 130u, 6u, 7u, 89u, 186u, 132u, 90u, 65u, 36u, 112u, 48u,
192u, 146u, 9u, 28u, 8u, 48u, 37u, 8u, 177u, 28u, 0u, 48u, 36u, 220u,
67u, 16u, 96u, 99u, 20u, 34u, 196u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00037[] = {
 0u, 3u, 133u, 134u, 9u, 134u, 91u, 36u, 112u, 160u, 192u, 146u, 217u,
28u, 32u, 48u, 62u, 208u, 139u, 146u, 56u, 56u, 96u, 74u, 17u, 130u,
56u, 40u, 96u, 20u, 35u, 50u, 217u, 9u, 131u, 201u, 35u, 130u, 6u, 4u,
195u, 140u, 142u, 6u, 24u, 18u, 132u, 100u, 142u, 4u, 24u, 18u, 91u,
35u, 128u, 6u, 4u, 195u, 140u, 134u, 32u, 192u, 198u, 37u, 178u, 27u,
2u, 97u, 192u, 26u, 66u, 96u, 56u, 73u, 36u,};
static unsigned char uvector__00038[] = {
 0u, 3u, 130u, 6u, 7u, 89u, 186u, 132u, 106u, 65u, 36u, 112u, 48u,
192u, 146u, 9u, 28u, 8u, 48u, 37u, 8u, 209u, 28u, 0u, 48u, 36u, 220u,
67u, 16u, 96u, 99u, 20u, 35u, 68u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00039[] = {
 0u, 3u, 132u, 134u, 7u, 58u, 17u, 113u, 66u, 54u, 40u, 66u, 93u,
102u, 234u, 16u, 169u, 4u, 208u, 142u, 18u, 71u, 7u, 12u, 9u, 129u,
185u, 28u, 24u, 48u, 37u, 8u, 225u, 28u, 12u, 48u, 49u, 138u, 17u,
162u, 29u, 102u, 234u, 17u, 169u, 4u, 146u, 56u, 8u, 96u, 76u, 13u,
200u, 224u, 1u, 129u, 40u, 70u, 8u, 98u, 12u, 12u, 106u, 19u, 1u,
194u, 72u,};
static unsigned char uvector__00040[] = {
 0u, 3u, 150u, 6u, 9u, 120u, 49u, 137u, 108u, 134u, 192u, 40u, 70u,
101u, 178u, 31u, 104u, 69u, 201u, 13u, 34u, 97u, 150u, 201u, 36u, 49u,
168u, 115u, 161u, 23u, 20u, 35u, 98u, 132u, 37u, 214u, 110u, 161u,
10u, 144u, 77u, 8u, 225u, 38u, 95u, 126u, 36u, 114u, 80u, 192u, 152u,
96u, 145u, 200u, 131u, 2u, 96u, 82u, 71u, 33u, 12u, 12u, 128u, 80u,
142u, 6u, 81u, 66u, 59u, 36u, 145u, 66u, 15u, 66u, 61u, 66u, 15u, 50u,
73u, 20u, 32u, 244u, 35u, 244u, 32u, 244u, 40u, 20u, 34u, 228u, 80u,
143u, 80u, 160u, 146u, 72u, 152u, 4u, 182u, 19u, 4u, 240u, 152u, 73u,
144u, 152u, 104u, 18u, 71u, 31u, 12u, 20u, 40u, 66u, 133u, 12u, 61u,
136u, 242u, 132u, 52u, 134u, 24u, 228u, 147u, 66u, 136u, 72u, 227u,
193u, 129u, 40u, 81u, 8u, 227u, 161u, 129u, 40u, 81u, 72u, 227u, 97u,
129u, 51u, 115u, 35u, 139u, 6u, 4u, 205u, 204u, 142u, 42u, 24u, 18u,
133u, 16u, 142u, 40u, 24u, 18u, 133u, 24u, 142u, 36u, 24u, 19u, 55u,
50u, 56u, 136u, 96u, 99u, 20u, 40u, 132u, 38u, 110u, 100u, 142u, 30u,
24u, 38u, 73u, 32u, 80u, 143u, 138u, 20u, 10u, 17u, 114u, 73u, 28u,
52u, 48u, 38u, 133u, 192u, 145u, 194u, 195u, 2u, 104u, 92u, 161u, 28u,
40u, 48u, 37u, 8u, 193u, 28u, 32u, 48u, 38u, 133u, 202u, 17u, 193u,
131u, 2u, 104u, 92u, 9u, 28u, 20u, 48u, 36u, 144u, 71u, 3u, 12u, 9u,
161u, 105u, 68u, 112u, 16u, 192u, 153u, 7u, 145u, 192u, 3u, 2u, 73u,
36u, 49u, 6u, 6u, 49u, 66u, 48u, 69u, 10u, 61u, 8u, 197u, 10u, 33u,
36u, 128u,};
static unsigned char uvector__00041[] = {
 0u, 3u, 133u, 6u, 10u, 20u, 130u, 71u, 9u, 12u, 20u, 41u, 45u, 212u,
41u, 68u, 142u, 16u, 24u, 18u, 73u, 35u, 130u, 134u, 1u, 66u, 51u,
45u, 144u, 152u, 37u, 146u, 56u, 32u, 96u, 76u, 47u, 200u, 224u, 97u,
129u, 40u, 70u, 72u, 224u, 65u, 129u, 37u, 178u, 56u, 0u, 96u, 76u,
47u, 200u, 98u, 12u, 12u, 98u, 91u, 33u, 176u, 38u, 23u, 129u, 164u,
38u, 3u, 132u, 146u, 64u,};
static unsigned char uvector__00042[] = {
 0u, 3u, 140u, 6u, 10u, 20u, 154u, 17u, 112u, 202u, 40u, 71u, 100u,
146u, 40u, 71u, 197u, 10u, 5u, 8u, 185u, 45u, 196u, 145u, 196u, 195u,
2u, 96u, 212u, 71u, 17u, 12u, 9u, 131u, 233u, 28u, 64u, 48u, 37u, 8u,
185u, 28u, 56u, 48u, 38u, 15u, 164u, 112u, 192u, 192u, 152u, 53u, 17u,
194u, 131u, 2u, 96u, 148u, 71u, 9u, 12u, 9u, 36u, 145u, 194u, 3u, 2u,
80u, 139u, 145u, 193u, 195u, 3u, 32u, 20u, 34u, 225u, 214u, 110u,
141u, 100u, 18u, 72u, 76u, 7u, 9u, 28u, 24u, 48u, 38u, 75u, 196u,
112u, 80u, 192u, 146u, 9u, 28u, 16u, 48u, 36u, 106u, 71u, 2u, 12u, 9u,
55u, 17u, 192u, 3u, 2u, 100u, 188u, 67u, 16u, 96u, 99u, 80u, 219u,
66u, 46u, 19u, 37u, 224u, 152u, 14u, 18u, 72u,};
static unsigned char uvector__00043[] = {
 0u, 3u, 194u, 24u, 24u, 40u, 66u, 5u, 8u, 77u, 10u, 61u, 8u, 85u,
10u, 33u, 20u, 41u, 98u, 133u, 50u, 133u, 16u, 146u, 71u, 132u, 36u,
48u, 56u, 201u, 33u, 170u, 133u, 4u, 134u, 90u, 20u, 208u, 231u, 66u,
155u, 66u, 156u, 104u, 83u, 137u, 35u, 194u, 14u, 24u, 18u, 133u, 56u,
143u, 8u, 32u, 96u, 76u, 73u, 200u, 240u, 129u, 134u, 4u, 161u, 78u,
35u, 194u, 4u, 24u, 18u, 133u, 52u, 143u, 8u, 0u, 96u, 76u, 67u, 8u,
239u, 225u, 129u, 40u, 83u, 72u, 239u, 161u, 129u, 48u, 238u, 35u,
190u, 6u, 4u, 146u, 72u, 239u, 97u, 130u, 133u, 60u, 80u, 166u, 201u,
36u, 80u, 168u, 6u, 138u, 20u, 19u, 36u, 144u, 152u, 108u, 146u, 59u,
184u, 96u, 151u, 131u, 24u, 150u, 200u, 108u, 2u, 132u, 102u, 91u,
34u, 133u, 37u, 186u, 133u, 40u, 144u, 210u, 40u, 82u, 9u, 36u, 49u,
168u, 109u, 161u, 23u, 14u, 179u, 116u, 107u, 32u, 145u, 66u, 147u,
66u, 46u, 25u, 69u, 8u, 236u, 146u, 69u, 8u, 248u, 161u, 64u, 161u,
23u, 37u, 184u, 146u, 101u, 247u, 226u, 71u, 112u, 12u, 9u, 161u, 25u,
36u, 118u, 208u, 192u, 153u, 226u, 145u, 218u, 195u, 2u, 103u, 112u,
71u, 106u, 12u, 12u, 128u, 70u, 161u, 150u, 133u, 40u, 68u, 244u, 42u,
52u, 42u, 66u, 133u, 78u, 53u, 52u, 42u, 148u, 41u, 70u, 53u, 36u,
137u, 128u, 75u, 97u, 51u, 235u, 33u, 52u, 35u, 96u, 146u, 59u, 72u,
96u, 72u, 212u, 142u, 202u, 24u, 19u, 67u, 36u, 72u, 236u, 129u, 129u,
36u, 146u, 58u, 248u, 96u, 77u, 12u, 222u, 35u, 175u, 6u, 4u, 141u,
72u, 235u, 129u, 129u, 52u, 51u, 120u, 142u, 178u, 24u, 18u, 133u,
68u, 142u, 174u, 24u, 19u, 67u, 36u, 72u, 234u, 161u, 129u, 52u, 49u,
88u, 142u, 168u, 24u, 18u, 73u, 35u, 169u, 134u, 4u, 205u, 36u, 142u,
164u, 24u, 19u, 53u, 194u, 58u, 128u, 96u, 161u, 85u, 161u, 78u, 36u,
116u, 240u, 192u, 148u, 41u, 196u, 116u, 208u, 192u, 215u, 66u, 130u,
72u, 233u, 129u, 129u, 40u, 80u, 72u, 232u, 225u, 130u, 133u, 8u, 80u,
161u, 135u, 177u, 30u, 80u, 134u, 144u, 195u, 27u, 146u, 104u, 81u,
9u, 29u, 24u, 48u, 37u, 10u, 33u, 29u, 20u, 48u, 37u, 10u, 177u, 29u,
12u, 48u, 38u, 138u, 71u, 17u, 207u, 131u, 3u, 24u, 161u, 24u, 34u,
133u, 30u, 132u, 98u, 133u, 16u, 146u, 57u, 216u, 96u, 74u, 21u, 18u,
57u, 192u, 96u, 74u, 17u, 50u, 57u, 168u, 96u, 161u, 87u, 20u, 33u,
46u, 179u, 117u, 8u, 84u, 130u, 104u, 81u, 9u, 28u, 208u, 48u, 37u,
10u, 33u, 28u, 196u, 48u, 49u, 138u, 17u, 98u, 29u, 102u, 234u, 17u,
105u, 4u, 146u, 57u, 120u, 96u, 107u, 161u, 88u, 36u, 114u, 224u,
192u, 148u, 43u, 4u, 114u, 176u, 192u, 154u, 41u, 28u, 71u, 42u, 12u,
9u, 66u, 136u, 71u, 41u, 12u, 9u, 66u, 178u, 71u, 39u, 12u, 9u, 162u,
145u, 196u, 114u, 64u, 193u, 50u, 73u, 18u, 73u, 35u, 145u, 134u, 4u,
146u, 72u, 228u, 65u, 129u, 36u, 130u, 57u, 0u, 96u, 77u, 29u, 31u,
35u, 142u, 134u, 10u, 21u, 160u, 195u, 6u, 16u, 195u, 66u, 162u, 91u,
137u, 28u, 88u, 48u, 38u, 143u, 98u, 17u, 196u, 195u, 5u, 10u, 208u,
97u, 131u, 72u, 97u, 161u, 20u, 45u, 196u, 142u, 24u, 24u, 19u, 72u,
1u, 72u, 225u, 33u, 130u, 133u, 104u, 48u, 193u, 164u, 48u, 208u,
137u, 150u, 226u, 71u, 2u, 12u, 9u, 164u, 40u, 196u, 49u, 6u, 6u, 49u,
36u, 73u, 41u, 32u, 134u, 97u, 66u, 61u, 66u, 136u, 69u, 10u, 16u,
161u, 67u, 15u, 98u, 60u, 161u, 13u, 33u, 134u, 57u, 36u, 208u, 162u,
18u, 25u, 133u, 10u, 101u, 10u, 33u, 9u, 162u, 145u, 196u, 51u, 80u,
137u, 132u, 210u, 20u, 98u, 25u, 168u, 69u, 2u, 105u, 0u, 41u, 12u,
212u, 42u, 33u, 52u, 123u, 16u, 134u, 97u, 66u, 51u, 45u, 144u, 224u,
40u, 69u, 101u, 178u, 40u, 67u, 133u, 8u, 124u, 182u, 24u, 104u, 68u,
9u, 20u, 34u, 32u, 80u, 137u, 80u, 137u, 145u, 66u, 37u, 66u, 40u,
73u, 36u, 134u, 97u, 66u, 143u, 66u, 47u, 66u, 130u, 67u, 109u, 8u,
224u, 101u, 20u, 35u, 178u, 73u, 20u, 32u, 244u, 35u, 212u, 32u, 243u,
36u, 145u, 66u, 15u, 66u, 63u, 66u, 15u, 66u, 129u, 66u, 46u, 69u, 8u,
245u, 10u, 9u, 34u, 96u, 18u, 216u, 20u, 35u, 50u, 217u, 15u, 180u,
34u, 228u, 134u, 145u, 48u, 203u, 100u, 144u, 231u, 66u, 46u, 40u,
70u, 197u, 8u, 75u, 172u, 221u, 66u, 21u, 32u, 154u, 17u, 194u, 73u,
33u, 152u, 80u, 168u, 70u, 180u, 41u, 68u, 54u, 198u, 161u, 52u, 49u,
88u, 38u, 134u, 202u, 18u, 25u, 133u, 10u, 93u, 10u, 193u, 12u, 142u,
32u, 73u, 45u, 196u, 80u, 160u, 208u, 172u, 17u, 66u, 156u, 24u, 84u,
146u, 25u, 66u, 104u, 158u, 56u, 77u, 18u, 216u, 9u, 152u, 177u, 36u,
80u, 173u, 129u, 66u, 136u, 19u, 71u, 71u, 200u, 161u, 88u, 20u, 41u,
148u, 40u, 132u, 144u, 202u, 29u, 130u, 104u, 214u, 128u, 121u, 161u,
19u, 33u, 230u, 133u, 68u, 144u, 154u, 49u, 32u, 19u, 2u, 34u, 73u,
32u,};
static unsigned char uvector__00044[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 66u, 185u, 36u, 73u, 41u, 32u, 134u, 97u,
66u, 61u, 66u, 136u, 69u, 10u, 16u, 161u, 67u, 15u, 98u, 60u, 161u,
13u, 33u, 134u, 57u, 36u, 208u, 162u, 18u, 25u, 133u, 10u, 101u, 10u,
33u, 20u, 40u, 66u, 133u, 12u, 61u, 136u, 242u, 132u, 52u, 134u, 24u,
220u, 147u, 66u, 136u, 72u, 102u, 161u, 19u, 20u, 43u, 65u, 134u, 13u,
33u, 134u, 132u, 76u, 183u, 18u, 25u, 168u, 69u, 5u, 10u, 208u, 97u,
131u, 72u, 97u, 161u, 20u, 45u, 196u, 134u, 106u, 21u, 17u, 66u, 180u,
24u, 96u, 194u, 24u, 104u, 84u, 75u, 113u, 33u, 152u, 80u, 140u, 203u,
100u, 56u, 10u, 17u, 89u, 108u, 138u, 16u, 225u, 66u, 31u, 45u, 134u,
26u, 17u, 2u, 69u, 8u, 136u, 20u, 34u, 84u, 34u, 100u, 80u, 137u, 80u,
138u, 18u, 73u, 33u, 152u, 80u, 163u, 208u, 139u, 208u, 160u, 144u,
219u, 66u, 56u, 25u, 69u, 8u, 236u, 146u, 69u, 8u, 61u, 8u, 245u, 8u,
60u, 201u, 36u, 80u, 131u, 208u, 143u, 208u, 131u, 208u, 160u, 80u,
139u, 145u, 66u, 61u, 66u, 130u, 72u, 152u, 4u, 182u, 5u, 8u, 204u,
182u, 67u, 237u, 8u, 185u, 33u, 164u, 76u, 50u, 217u, 36u, 57u, 208u,
139u, 138u, 17u, 177u, 66u, 18u, 235u, 55u, 80u, 133u, 72u, 38u, 132u,
112u, 146u, 72u, 102u, 20u, 42u, 17u, 173u, 10u, 81u, 13u, 177u, 168u,
101u, 161u, 74u, 17u, 61u, 10u, 141u, 10u, 144u, 161u, 83u, 141u, 77u,
10u, 165u, 10u, 81u, 141u, 72u, 152u, 4u, 182u, 5u, 8u, 204u, 182u,
69u, 10u, 75u, 117u, 10u, 81u, 36u, 54u, 208u, 139u, 135u, 89u, 186u,
53u, 144u, 72u, 161u, 73u, 161u, 23u, 12u, 162u, 132u, 118u, 73u, 34u,
132u, 124u, 80u, 160u, 80u, 139u, 146u, 220u, 73u, 36u, 134u, 97u,
66u, 151u, 66u, 176u, 67u, 35u, 136u, 18u, 75u, 113u, 20u, 40u, 52u,
43u, 4u, 80u, 167u, 6u, 21u, 36u, 134u, 80u, 215u, 66u, 130u, 69u,
10u, 173u, 10u, 113u, 20u, 41u, 226u, 133u, 54u, 73u, 34u, 133u, 64u,
52u, 80u, 160u, 153u, 36u, 135u, 25u, 36u, 53u, 80u, 160u, 144u, 203u,
66u, 154u, 28u, 232u, 83u, 104u, 83u, 141u, 10u, 113u, 36u, 146u, 40u,
86u, 192u, 161u, 68u, 19u, 36u, 145u, 36u, 146u, 40u, 86u, 5u, 10u,
101u, 10u, 33u, 36u, 50u, 135u, 96u, 215u, 66u, 176u, 67u, 205u, 8u,
153u, 15u, 52u, 42u, 36u, 138u, 21u, 113u, 66u, 18u, 235u, 55u, 80u,
133u, 72u, 38u, 133u, 16u, 138u, 16u, 129u, 66u, 19u, 66u, 143u, 66u,
21u, 66u, 136u, 69u, 10u, 88u, 161u, 76u, 161u, 68u, 36u, 146u, 72u,
225u, 97u, 129u, 140u, 38u, 6u, 233u, 130u, 201u, 28u, 36u, 48u, 38u,
3u, 132u, 112u, 64u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u,
72u,};
static unsigned char uvector__00045[] = {
 0u, 3u, 128u, 134u, 10u, 21u, 218u, 21u, 224u, 195u, 26u, 146u, 71u,
0u, 12u, 9u, 66u, 188u, 67u, 16u, 96u, 99u, 20u, 43u, 196u, 38u, 3u,
132u, 144u,};
static unsigned char uvector__00046[] = {
 0u, 3u, 132u, 6u, 8u, 158u, 133u, 126u, 133u, 74u, 134u, 2u, 133u,
82u, 73u, 36u, 112u, 112u, 192u, 146u, 73u, 28u, 16u, 48u, 37u, 12u,
1u, 28u, 0u, 48u, 37u, 10u, 249u, 12u, 65u, 129u, 140u, 80u, 192u,
16u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00047[] = {
 0u, 3u, 194u, 180u, 24u, 31u, 68u, 79u, 66u, 191u, 66u, 165u, 67u,
3u, 66u, 169u, 36u, 146u, 71u, 133u, 96u, 48u, 38u, 5u, 164u, 120u,
85u, 195u, 2u, 73u, 36u, 120u, 83u, 195u, 2u, 80u, 175u, 145u, 225u,
77u, 12u, 9u, 129u, 105u, 30u, 20u, 160u, 193u, 66u, 174u, 40u, 66u,
98u, 122u, 21u, 250u, 21u, 42u, 16u, 170u, 21u, 73u, 36u, 138u, 21u,
218u, 24u, 32u, 195u, 67u, 6u, 73u, 35u, 194u, 144u, 24u, 19u, 31u,
66u, 60u, 40u, 225u, 129u, 40u, 96u, 136u, 240u, 162u, 6u, 6u, 49u,
67u, 0u, 68u, 79u, 66u, 191u, 66u, 165u, 67u, 1u, 66u, 169u, 36u,
146u, 71u, 133u, 8u, 48u, 51u, 208u, 194u, 73u, 4u, 143u, 10u, 8u,
96u, 73u, 32u, 143u, 8u, 232u, 96u, 76u, 216u, 72u, 240u, 140u, 134u,
6u, 250u, 24u, 32u, 153u, 176u, 146u, 60u, 35u, 1u, 129u, 40u, 96u,
136u, 240u, 139u, 134u, 6u, 64u, 40u, 96u, 133u, 12u, 44u, 144u, 73u,
9u, 161u, 1u, 129u, 49u, 119u, 36u, 120u, 69u, 67u, 2u, 104u, 74u,
169u, 30u, 17u, 64u, 192u, 146u, 65u, 30u, 17u, 32u, 192u, 154u, 18u,
170u, 71u, 132u, 64u, 48u, 50u, 201u, 1u, 182u, 134u, 8u, 38u, 132u,
170u, 132u, 208u, 128u, 192u, 152u, 187u, 144u, 152u, 17u, 18u, 60u,
33u, 225u, 129u, 36u, 130u, 60u, 33u, 193u, 129u, 144u, 9u, 36u, 54u,
1u, 67u, 13u, 36u, 153u, 36u, 129u, 67u, 15u, 36u, 138u, 24u, 136u,
252u, 154u, 24u, 145u, 66u, 19u, 66u, 187u, 66u, 20u, 24u, 100u, 146u,
72u, 105u, 12u, 244u, 49u, 82u, 73u, 36u, 144u, 154u, 23u, 34u, 72u,
240u, 133u, 134u, 4u, 208u, 245u, 178u, 60u, 33u, 65u, 129u, 36u,
146u, 60u, 32u, 193u, 129u, 52u, 61u, 108u, 143u, 8u, 16u, 96u, 161u,
93u, 161u, 139u, 9u, 161u, 226u, 68u, 143u, 8u, 8u, 96u, 72u, 124u,
142u, 254u, 24u, 19u, 67u, 131u, 8u, 239u, 193u, 129u, 33u, 242u, 59u,
232u, 96u, 77u, 14u, 12u, 35u, 189u, 134u, 4u, 208u, 224u, 242u, 59u,
200u, 96u, 77u, 14u, 76u, 35u, 188u, 6u, 4u, 143u, 200u, 238u, 193u,
129u, 52u, 57u, 48u, 142u, 234u, 24u, 18u, 73u, 35u, 185u, 134u, 4u,
208u, 224u, 242u, 59u, 128u, 96u, 73u, 36u, 142u, 220u, 24u, 19u, 67u,
103u, 8u, 237u, 161u, 129u, 52u, 54u, 124u, 142u, 216u, 24u, 18u, 73u,
35u, 181u, 134u, 4u, 161u, 68u, 35u, 180u, 134u, 10u, 24u, 193u, 66u,
132u, 40u, 80u, 195u, 216u, 143u, 40u, 67u, 72u, 97u, 142u, 73u, 52u,
40u, 132u, 80u, 198u, 138u, 20u, 48u, 246u, 35u, 202u, 16u, 210u, 24u,
99u, 146u, 77u, 10u, 33u, 36u, 118u, 112u, 192u, 154u, 50u, 34u, 71u,
102u, 12u, 9u, 66u, 136u, 71u, 101u, 12u, 9u, 67u, 28u, 71u, 99u, 12u,
9u, 163u, 34u, 36u, 118u, 16u, 192u, 154u, 48u, 30u, 71u, 96u, 12u,
9u, 66u, 136u, 71u, 95u, 12u, 9u, 67u, 30u, 71u, 93u, 12u, 9u, 163u,
1u, 228u, 117u, 176u, 192u, 203u, 9u, 132u, 209u, 125u, 202u, 20u,
66u, 71u, 89u, 12u, 9u, 9u, 145u, 213u, 131u, 5u, 10u, 184u, 161u, 9u,
161u, 93u, 161u, 10u, 12u, 49u, 169u, 34u, 18u, 146u, 36u, 154u, 25u,
2u, 72u, 234u, 129u, 129u, 52u, 125u, 24u, 142u, 166u, 24u, 18u, 134u,
64u, 142u, 164u, 24u, 18u, 73u, 35u, 168u, 134u, 4u, 146u, 8u, 233u,
225u, 129u, 52u, 125u, 24u, 142u, 156u, 24u, 18u, 134u, 68u, 142u,
152u, 24u, 19u, 71u, 161u, 72u, 233u, 33u, 130u, 51u, 136u, 168u,
100u, 162u, 8u, 180u, 145u, 210u, 3u, 2u, 69u, 164u, 116u, 64u, 192u,
148u, 50u, 68u, 116u, 0u, 192u, 154u, 69u, 12u, 71u, 61u, 12u, 20u,
50u, 114u, 73u, 35u, 158u, 6u, 4u, 146u, 72u, 231u, 65u, 129u, 52u,
145u, 44u, 142u, 110u, 24u, 25u, 227u, 232u, 252u, 145u, 205u, 131u,
2u, 71u, 228u, 115u, 32u, 192u, 154u, 75u, 4u, 71u, 46u, 12u, 9u, 67u,
40u, 71u, 43u, 12u, 2u, 134u, 84u, 208u, 202u, 18u, 57u, 80u, 96u,
72u, 252u, 142u, 76u, 24u, 18u, 86u, 35u, 145u, 134u, 1u, 67u, 44u,
101u, 98u, 71u, 34u, 12u, 9u, 31u, 145u, 200u, 3u, 3u, 44u, 32u, 40u,
86u, 192u, 139u, 68u, 71u, 31u, 132u, 210u, 132u, 64u, 154u, 78u, 22u,
26u, 66u, 105u, 44u, 17u, 36u, 73u, 33u, 52u, 145u, 44u, 138u, 25u,
0u, 154u, 69u, 12u, 69u, 10u, 32u, 77u, 30u, 133u, 36u, 38u, 142u,
175u, 144u, 219u, 36u, 132u, 208u, 217u, 16u, 154u, 23u, 34u, 73u,
28u, 120u, 48u, 36u, 32u, 71u, 28u, 12u, 12u, 244u, 50u, 225u, 132u,
49u, 137u, 34u, 73u, 161u, 152u, 17u, 248u, 97u, 161u, 150u, 36u,
132u, 210u, 144u, 210u, 73u, 28u, 88u, 48u, 38u, 150u, 129u, 145u,
196u, 131u, 3u, 93u, 12u, 201u, 35u, 136u, 134u, 4u, 161u, 153u, 35u,
136u, 6u, 6u, 64u, 35u, 240u, 202u, 26u, 232u, 102u, 136u, 77u, 45u,
200u, 13u, 20u, 51u, 68u, 145u, 67u, 50u, 25u, 67u, 93u, 12u, 209u,
12u, 42u, 67u, 85u, 12u, 209u, 36u, 134u, 240u, 154u, 93u, 186u, 19u,
75u, 64u, 200u, 100u, 84u, 210u, 224u, 146u, 71u, 15u, 12u, 9u, 166u,
42u, 164u, 112u, 160u, 192u, 154u, 98u, 10u, 71u, 9u, 12u, 9u, 67u,
54u, 71u, 7u, 12u, 9u, 166u, 16u, 100u, 112u, 16u, 192u, 154u, 96u,
20u, 71u, 0u, 12u, 9u, 67u, 54u, 67u, 16u, 96u, 77u, 45u, 73u, 36u,};
static unsigned char uvector__00048[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 50u, 73u, 18u, 77u, 12u, 192u, 143u, 195u,
13u, 12u, 177u, 36u, 50u, 194u, 2u, 133u, 108u, 8u, 180u, 68u, 113u,
248u, 20u, 50u, 198u, 86u, 32u, 80u, 202u, 154u, 25u, 66u, 26u, 67u,
60u, 125u, 31u, 146u, 72u, 146u, 69u, 12u, 156u, 146u, 72u, 161u,
144u, 17u, 156u, 69u, 67u, 37u, 16u, 69u, 164u, 138u, 20u, 65u, 66u,
174u, 40u, 66u, 104u, 87u, 104u, 66u, 131u, 12u, 106u, 72u, 132u,
164u, 137u, 38u, 134u, 64u, 146u, 67u, 44u, 38u, 40u, 99u, 5u, 10u,
16u, 161u, 67u, 15u, 98u, 60u, 161u, 13u, 33u, 134u, 57u, 36u, 208u,
162u, 17u, 67u, 26u, 40u, 80u, 195u, 216u, 143u, 40u, 67u, 72u, 97u,
142u, 73u, 52u, 40u, 132u, 208u, 162u, 18u, 27u, 100u, 144u, 216u, 5u,
12u, 52u, 146u, 100u, 146u, 5u, 12u, 60u, 146u, 40u, 98u, 35u, 242u,
104u, 98u, 69u, 8u, 77u, 10u, 237u, 8u, 80u, 97u, 146u, 73u, 33u,
164u, 51u, 208u, 197u, 73u, 36u, 144u, 203u, 36u, 6u, 218u, 24u, 33u,
67u, 11u, 36u, 16u, 223u, 67u, 4u, 25u, 232u, 97u, 36u, 130u, 69u,
10u, 184u, 161u, 9u, 137u, 232u, 87u, 232u, 84u, 168u, 66u, 168u, 85u,
36u, 146u, 40u, 87u, 104u, 96u, 131u, 13u, 12u, 25u, 36u, 135u, 209u,
19u, 208u, 175u, 208u, 169u, 80u, 192u, 208u, 170u, 73u, 36u, 146u,
73u, 28u, 44u, 48u, 49u, 132u, 192u, 197u, 48u, 134u, 35u, 132u, 134u,
4u, 192u, 112u, 142u, 8u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u,
9u, 0u,};
static unsigned char uvector__00049[] = {
 0u, 3u, 147u, 134u, 10u, 25u, 192u, 203u, 67u, 58u, 40u, 103u, 165u,
58u, 25u, 250u, 25u, 210u, 40u, 103u, 165u, 50u, 67u, 45u, 14u, 0u,
161u, 193u, 148u, 232u, 103u, 232u, 112u, 8u, 161u, 193u, 148u, 201u,
36u, 114u, 96u, 192u, 148u, 51u, 132u, 114u, 48u, 192u, 152u, 132u,
17u, 200u, 131u, 2u, 74u, 100u, 114u, 0u, 192u, 152u, 132u, 17u, 199u,
3u, 2u, 97u, 144u, 71u, 27u, 12u, 9u, 67u, 128u, 71u, 24u, 12u, 9u,
41u, 145u, 197u, 131u, 2u, 97u, 144u, 71u, 20u, 12u, 9u, 133u, 105u,
28u, 76u, 48u, 37u, 14u, 1u, 28u, 64u, 48u, 38u, 17u, 68u, 112u, 240u,
192u, 146u, 153u, 28u, 52u, 48u, 38u, 17u, 68u, 112u, 144u, 192u,
152u, 37u, 17u, 194u, 3u, 2u, 80u, 206u, 145u, 193u, 67u, 2u, 74u,
100u, 112u, 48u, 192u, 152u, 37u, 17u, 192u, 67u, 2u, 96u, 94u, 71u,
0u, 12u, 9u, 67u, 58u, 67u, 16u, 96u, 99u, 80u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00050[] = {
 0u, 3u, 128u, 134u, 10u, 28u, 41u, 76u, 145u, 192u, 3u, 2u, 74u,
100u, 49u, 6u, 6u, 53u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00051[] = {
 0u, 3u, 175u, 134u, 10u, 28u, 48u, 249u, 67u, 136u, 104u, 113u, 104u,
113u, 137u, 29u, 120u, 48u, 37u, 14u, 49u, 29u, 116u, 48u, 37u, 14u,
41u, 29u, 112u, 48u, 38u, 5u, 228u, 117u, 176u, 192u, 148u, 56u, 132u,
117u, 144u, 193u, 14u, 67u, 161u, 162u, 135u, 16u, 146u, 58u, 192u,
96u, 76u, 87u, 136u, 234u, 129u, 129u, 49u, 71u, 35u, 168u, 134u, 10u,
28u, 48u, 249u, 67u, 136u, 104u, 113u, 67u, 189u, 14u, 33u, 36u, 117u,
0u, 192u, 153u, 26u, 145u, 211u, 195u, 2u, 80u, 226u, 17u, 211u, 131u,
2u, 80u, 226u, 145u, 211u, 67u, 2u, 100u, 14u, 71u, 76u, 12u, 9u, 67u,
136u, 71u, 73u, 12u, 2u, 135u, 28u, 132u, 199u, 208u, 145u, 210u, 3u,
2u, 67u, 228u, 116u, 80u, 193u, 67u, 134u, 31u, 40u, 113u, 8u, 119u,
161u, 196u, 52u, 56u, 196u, 142u, 136u, 24u, 18u, 135u, 24u, 142u,
134u, 24u, 19u, 66u, 0u, 8u, 232u, 65u, 129u, 40u, 113u, 8u, 232u,
33u, 129u, 51u, 226u, 35u, 160u, 6u, 4u, 161u, 196u, 35u, 158u, 134u,
1u, 67u, 144u, 66u, 103u, 158u, 72u, 231u, 129u, 129u, 33u, 242u, 57u,
216u, 96u, 136u, 196u, 72u, 26u, 40u, 113u, 9u, 9u, 161u, 75u, 129u,
51u, 91u, 13u, 33u, 232u, 38u, 40u, 225u, 48u, 28u, 36u, 145u, 206u,
67u, 2u, 104u, 90u, 233u, 28u, 224u, 48u, 38u, 133u, 197u, 17u, 205u,
131u, 2u, 104u, 90u, 233u, 28u, 204u, 48u, 51u, 196u, 180u, 56u, 132u,
142u, 100u, 24u, 18u, 135u, 16u, 142u, 92u, 24u, 26u, 195u, 85u, 14u,
33u, 36u, 114u, 208u, 192u, 154u, 30u, 42u, 71u, 42u, 12u, 20u, 57u,
33u, 141u, 69u, 12u, 224u, 101u, 161u, 157u, 20u, 51u, 210u, 157u,
12u, 253u, 12u, 233u, 20u, 51u, 210u, 153u, 33u, 150u, 135u, 0u, 80u,
224u, 202u, 116u, 51u, 244u, 56u, 4u, 80u, 224u, 202u, 100u, 146u,
24u, 212u, 80u, 225u, 74u, 100u, 134u, 26u, 28u, 162u, 24u, 69u, 14u,
95u, 155u, 56u, 146u, 71u, 35u, 12u, 12u, 105u, 162u, 80u, 68u, 114u,
0u, 192u, 198u, 154u, 32u, 60u, 71u, 30u, 12u, 9u, 67u, 140u, 71u,
25u, 12u, 12u, 162u, 47u, 161u, 198u, 45u, 212u, 56u, 196u, 142u, 46u,
24u, 19u, 69u, 67u, 136u, 226u, 193u, 129u, 40u, 113u, 136u, 226u,
129u, 129u, 52u, 84u, 56u, 142u, 36u, 24u, 18u, 135u, 20u, 142u, 26u,
24u, 25u, 68u, 95u, 67u, 138u, 91u, 168u, 113u, 73u, 28u, 44u, 48u,
38u, 139u, 170u, 145u, 194u, 131u, 2u, 80u, 226u, 145u, 194u, 3u, 2u,
104u, 186u, 169u, 28u, 24u, 48u, 53u, 208u, 226u, 18u, 56u, 40u, 96u,
74u, 28u, 66u, 56u, 0u, 96u, 74u, 28u, 194u, 24u, 131u, 3u, 24u, 148u,
232u, 103u, 35u, 33u, 67u, 58u, 220u, 69u, 14u, 3u, 113u, 34u, 135u,
52u, 38u, 136u, 34u, 166u, 137u, 67u, 18u, 64u,};
static unsigned char uvector__00052[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 67u, 157u, 41u, 208u, 206u, 70u, 66u,
134u, 117u, 184u, 138u, 28u, 6u, 226u, 69u, 14u, 104u, 161u, 156u,
12u, 180u, 51u, 162u, 134u, 122u, 83u, 161u, 159u, 161u, 157u, 34u,
134u, 122u, 83u, 36u, 50u, 208u, 224u, 10u, 28u, 25u, 78u, 134u, 126u,
135u, 0u, 138u, 28u, 25u, 76u, 146u, 40u, 112u, 165u, 50u, 73u, 28u,
36u, 48u, 49u, 132u, 192u, 221u, 48u, 154u, 35u, 131u, 134u, 4u, 192u,
112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
#if defined(NI_DGRAM)
  ScmString d2420[1];
#endif /*defined(NI_DGRAM)*/
#if defined(NI_NUMERICSERV)
  ScmString d2418[1];
#endif /*defined(NI_NUMERICSERV)*/
#if defined(NI_NAMEREQD)
  ScmString d2416[1];
#endif /*defined(NI_NAMEREQD)*/
#if defined(NI_NUMERICHOST)
  ScmString d2414[1];
#endif /*defined(NI_NUMERICHOST)*/
#if defined(NI_NOFQDN)
  ScmString d2412[1];
#endif /*defined(NI_NOFQDN)*/
#if defined(AI_ADDRCONFIG)
  ScmString d2410[1];
#endif /*defined(AI_ADDRCONFIG)*/
#if defined(AI_ALL)
  ScmString d2408[1];
#endif /*defined(AI_ALL)*/
#if defined(AI_V4MAPPED)
  ScmString d2406[1];
#endif /*defined(AI_V4MAPPED)*/
#if defined(AI_NUMERICSERV)
  ScmString d2404[1];
#endif /*defined(AI_NUMERICSERV)*/
#if defined(AI_NUMERICHOST)
  ScmString d2402[1];
#endif /*defined(AI_NUMERICHOST)*/
#if defined(AI_CANONNAME)
  ScmString d2400[1];
#endif /*defined(AI_CANONNAME)*/
#if defined(AI_PASSIVE)
  ScmString d2398[1];
#endif /*defined(AI_PASSIVE)*/
#if defined(IPV6_V6ONLY)
  ScmString d2396[1];
#endif /*defined(IPV6_V6ONLY)*/
#if defined(IPV6_LEAVE_GROUP)
  ScmString d2394[1];
#endif /*defined(IPV6_LEAVE_GROUP)*/
#if defined(IPV6_JOIN_GROUP)
  ScmString d2392[1];
#endif /*defined(IPV6_JOIN_GROUP)*/
#if defined(IPV6_MULTICAST_LOOP)
  ScmString d2390[1];
#endif /*defined(IPV6_MULTICAST_LOOP)*/
#if defined(IPV6_MULTICAST_HOPS)
  ScmString d2388[1];
#endif /*defined(IPV6_MULTICAST_HOPS)*/
#if defined(IPV6_MULTICAST_IF)
  ScmString d2386[1];
#endif /*defined(IPV6_MULTICAST_IF)*/
#if defined(IPV6_UNICAST_HOPS)
  ScmString d2384[1];
#endif /*defined(IPV6_UNICAST_HOPS)*/
#if defined(IPPROTO_IPV6)
  ScmString d2382[1];
#endif /*defined(IPPROTO_IPV6)*/
#if defined(PF_INET6)
  ScmString d2380[1];
#endif /*defined(PF_INET6)*/
#if defined(AF_INET6)
  ScmString d2378[1];
#endif /*defined(AF_INET6)*/
#if defined(IFF_DYNAMIC)
  ScmString d2375[1];
#endif /*defined(IFF_DYNAMIC)*/
#if defined(IFF_AUTOMEDIA)
  ScmString d2373[1];
#endif /*defined(IFF_AUTOMEDIA)*/
#if defined(IFF_PORTSEL)
  ScmString d2371[1];
#endif /*defined(IFF_PORTSEL)*/
#if defined(IFF_MULTICAST)
  ScmString d2369[1];
#endif /*defined(IFF_MULTICAST)*/
#if defined(IFF_SLAVE)
  ScmString d2367[1];
#endif /*defined(IFF_SLAVE)*/
#if defined(IFF_MASTER)
  ScmString d2365[1];
#endif /*defined(IFF_MASTER)*/
#if defined(IFF_ALLMULTI)
  ScmString d2363[1];
#endif /*defined(IFF_ALLMULTI)*/
#if defined(IFF_NOTRAILERS)
  ScmString d2361[1];
#endif /*defined(IFF_NOTRAILERS)*/
#if defined(IFF_PROMISC)
  ScmString d2359[1];
#endif /*defined(IFF_PROMISC)*/
#if defined(IFF_NOARP)
  ScmString d2357[1];
#endif /*defined(IFF_NOARP)*/
#if defined(IFF_RUNNING)
  ScmString d2355[1];
#endif /*defined(IFF_RUNNING)*/
#if defined(IFF_POINTTOPOINT)
  ScmString d2353[1];
#endif /*defined(IFF_POINTTOPOINT)*/
#if defined(IFF_LOOPBACK)
  ScmString d2351[1];
#endif /*defined(IFF_LOOPBACK)*/
#if defined(IFF_DEBUG)
  ScmString d2349[1];
#endif /*defined(IFF_DEBUG)*/
#if defined(IFF_BROADCAST)
  ScmString d2347[1];
#endif /*defined(IFF_BROADCAST)*/
#if defined(IFF_UP)
  ScmString d2345[1];
#endif /*defined(IFF_UP)*/
#if defined(SIOCGIFCONF)
  ScmString d2343[1];
#endif /*defined(SIOCGIFCONF)*/
#if defined(SIOSIFTXQLEN)
  ScmString d2341[1];
#endif /*defined(SIOSIFTXQLEN)*/
#if defined(SIOGIFTXQLEN)
  ScmString d2339[1];
#endif /*defined(SIOGIFTXQLEN)*/
#if defined(SIOCDELMULTI)
  ScmString d2337[1];
#endif /*defined(SIOCDELMULTI)*/
#if defined(SIOCADDMULTI)
  ScmString d2335[1];
#endif /*defined(SIOCADDMULTI)*/
#if defined(SIOCSIFMAP)
  ScmString d2333[1];
#endif /*defined(SIOCSIFMAP)*/
#if defined(SIOCGIFMAP)
  ScmString d2331[1];
#endif /*defined(SIOCGIFMAP)*/
#if defined(SIOCSIFHWBROADCAST)
  ScmString d2329[1];
#endif /*defined(SIOCSIFHWBROADCAST)*/
#if defined(SIOCSIFHWADDR)
  ScmString d2327[1];
#endif /*defined(SIOCSIFHWADDR)*/
#if defined(SIOCGIFHWADDR)
  ScmString d2325[1];
#endif /*defined(SIOCGIFHWADDR)*/
#if defined(SIOCSIFMTU)
  ScmString d2323[1];
#endif /*defined(SIOCSIFMTU)*/
#if defined(SIOCGIFMTU)
  ScmString d2321[1];
#endif /*defined(SIOCGIFMTU)*/
#if defined(SIOCSIFMETRIC)
  ScmString d2319[1];
#endif /*defined(SIOCSIFMETRIC)*/
#if defined(SIOCGIFMETRIC)
  ScmString d2317[1];
#endif /*defined(SIOCGIFMETRIC)*/
#if defined(SIOCSIFFLAGS)
  ScmString d2315[1];
#endif /*defined(SIOCSIFFLAGS)*/
#if defined(SIOCGIFFLAGS)
  ScmString d2313[1];
#endif /*defined(SIOCGIFFLAGS)*/
#if defined(SIOCSIFNETMASK)
  ScmString d2311[1];
#endif /*defined(SIOCSIFNETMASK)*/
#if defined(SIOCGIFNETMASK)
  ScmString d2309[1];
#endif /*defined(SIOCGIFNETMASK)*/
#if defined(SIOCSIFBRDADDR)
  ScmString d2307[1];
#endif /*defined(SIOCSIFBRDADDR)*/
#if defined(SIOCGIFBRDADDR)
  ScmString d2305[1];
#endif /*defined(SIOCGIFBRDADDR)*/
#if defined(SIOCSIFDSTADDR)
  ScmString d2303[1];
#endif /*defined(SIOCSIFDSTADDR)*/
#if defined(SIOCGIFDSTADDR)
  ScmString d2301[1];
#endif /*defined(SIOCGIFDSTADDR)*/
#if defined(SIOCSIFADDR)
  ScmString d2299[1];
#endif /*defined(SIOCSIFADDR)*/
#if defined(SIOCGIFADDR)
  ScmString d2297[1];
#endif /*defined(SIOCGIFADDR)*/
#if defined(SIOCGIFINDEX)
  ScmString d2295[1];
#endif /*defined(SIOCGIFINDEX)*/
#if defined(SIOCSIFNAME)
  ScmString d2293[1];
#endif /*defined(SIOCSIFNAME)*/
#if defined(SIOCGIFNAME)
  ScmString d2291[1];
#endif /*defined(SIOCGIFNAME)*/
#if defined(IP_MULTICAST_IF)
  ScmString d2289[1];
#endif /*defined(IP_MULTICAST_IF)*/
#if defined(IP_DROP_MEMBERSHIP)
  ScmString d2287[1];
#endif /*defined(IP_DROP_MEMBERSHIP)*/
#if defined(IP_ADD_MEMBERSHIP)
  ScmString d2285[1];
#endif /*defined(IP_ADD_MEMBERSHIP)*/
#if defined(IP_MULTICAST_LOOP)
  ScmString d2283[1];
#endif /*defined(IP_MULTICAST_LOOP)*/
#if defined(IP_MULTICAST_TTL)
  ScmString d2281[1];
#endif /*defined(IP_MULTICAST_TTL)*/
#if defined(IP_ROUTER_ALERT)
  ScmString d2279[1];
#endif /*defined(IP_ROUTER_ALERT)*/
#if defined(IP_MTU)
  ScmString d2277[1];
#endif /*defined(IP_MTU)*/
#if defined(IP_MTU_DISCOVER)
  ScmString d2275[1];
#endif /*defined(IP_MTU_DISCOVER)*/
#if defined(IP_RECVERR)
  ScmString d2273[1];
#endif /*defined(IP_RECVERR)*/
#if defined(IP_HDRINCL)
  ScmString d2271[1];
#endif /*defined(IP_HDRINCL)*/
#if defined(IP_TTL)
  ScmString d2269[1];
#endif /*defined(IP_TTL)*/
#if defined(IP_TOS)
  ScmString d2267[1];
#endif /*defined(IP_TOS)*/
#if defined(IP_RECVOPTS)
  ScmString d2265[1];
#endif /*defined(IP_RECVOPTS)*/
#if defined(IP_RECVTTL)
  ScmString d2263[1];
#endif /*defined(IP_RECVTTL)*/
#if defined(IP_RECVTOS)
  ScmString d2261[1];
#endif /*defined(IP_RECVTOS)*/
#if defined(IP_PKTINFO)
  ScmString d2259[1];
#endif /*defined(IP_PKTINFO)*/
#if defined(IP_OPTIONS)
  ScmString d2257[1];
#endif /*defined(IP_OPTIONS)*/
#if defined(SOL_IP)
  ScmString d2255[1];
#endif /*defined(SOL_IP)*/
#if defined(TCP_CORK)
  ScmString d2253[1];
#endif /*defined(TCP_CORK)*/
#if defined(TCP_MAXSEG)
  ScmString d2251[1];
#endif /*defined(TCP_MAXSEG)*/
#if defined(TCP_NODELAY)
  ScmString d2249[1];
#endif /*defined(TCP_NODELAY)*/
#if defined(SOL_TCP)
  ScmString d2247[1];
#endif /*defined(SOL_TCP)*/
#if defined(SO_TYPE)
  ScmString d2245[1];
#endif /*defined(SO_TYPE)*/
#if defined(SO_TIMESTAMP)
  ScmString d2243[1];
#endif /*defined(SO_TIMESTAMP)*/
#if defined(SO_SNDTIMEO)
  ScmString d2241[1];
#endif /*defined(SO_SNDTIMEO)*/
#if defined(SO_SNDLOWAT)
  ScmString d2239[1];
#endif /*defined(SO_SNDLOWAT)*/
#if defined(SO_SNDBUF)
  ScmString d2237[1];
#endif /*defined(SO_SNDBUF)*/
#if defined(SO_REUSEPORT)
  ScmString d2235[1];
#endif /*defined(SO_REUSEPORT)*/
#if defined(SO_REUSEADDR)
  ScmString d2233[1];
#endif /*defined(SO_REUSEADDR)*/
#if defined(SO_RCVTIMEO)
  ScmString d2231[1];
#endif /*defined(SO_RCVTIMEO)*/
#if defined(SO_RCVLOWAT)
  ScmString d2229[1];
#endif /*defined(SO_RCVLOWAT)*/
#if defined(SO_RCVBUF)
  ScmString d2227[1];
#endif /*defined(SO_RCVBUF)*/
#if defined(SO_PRIORITY)
  ScmString d2225[1];
#endif /*defined(SO_PRIORITY)*/
#if defined(SO_PEERCRED)
  ScmString d2223[1];
#endif /*defined(SO_PEERCRED)*/
#if defined(SO_PASSCRED)
  ScmString d2221[1];
#endif /*defined(SO_PASSCRED)*/
#if defined(SO_OOBINLINE)
  ScmString d2219[1];
#endif /*defined(SO_OOBINLINE)*/
#if defined(SO_LINGER)
  ScmString d2217[1];
#endif /*defined(SO_LINGER)*/
#if defined(SO_KEEPALIVE)
  ScmString d2215[1];
#endif /*defined(SO_KEEPALIVE)*/
#if defined(SO_ERROR)
  ScmString d2213[1];
#endif /*defined(SO_ERROR)*/
#if defined(SO_DONTROUTE)
  ScmString d2211[1];
#endif /*defined(SO_DONTROUTE)*/
#if defined(SO_DEBUG)
  ScmString d2209[1];
#endif /*defined(SO_DEBUG)*/
#if defined(SO_BROADCAST)
  ScmString d2207[1];
#endif /*defined(SO_BROADCAST)*/
#if defined(SO_BINDTODEVICE)
  ScmString d2205[1];
#endif /*defined(SO_BINDTODEVICE)*/
#if defined(SO_ACCEPTCONN)
  ScmString d2203[1];
#endif /*defined(SO_ACCEPTCONN)*/
#if defined(SOL_SOCKET)
  ScmString d2201[1];
#endif /*defined(SOL_SOCKET)*/
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  ScmString d2199[3];
#endif /*!((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))*/
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  ScmString d2197[3];
#endif /*(defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))*/
#if defined(SOMAXCONN)
  ScmString d2195[1];
#endif /*defined(SOMAXCONN)*/
#if defined(IPPROTO_UDP)
  ScmString d2193[1];
#endif /*defined(IPPROTO_UDP)*/
#if defined(IPPROTO_TCP)
  ScmString d2191[1];
#endif /*defined(IPPROTO_TCP)*/
#if defined(IPPROTO_ICMPV6)
  ScmString d2189[1];
#endif /*defined(IPPROTO_ICMPV6)*/
#if defined(IPPROTO_ICMP)
  ScmString d2187[1];
#endif /*defined(IPPROTO_ICMP)*/
#if defined(IPPROTO_IP)
  ScmString d2185[1];
#endif /*defined(IPPROTO_IP)*/
#if defined(MSG_WAITALL)
  ScmString d2183[1];
#endif /*defined(MSG_WAITALL)*/
#if defined(MSG_TRUNC)
  ScmString d2181[1];
#endif /*defined(MSG_TRUNC)*/
#if defined(MSG_PEEK)
  ScmString d2179[1];
#endif /*defined(MSG_PEEK)*/
#if defined(MSG_OOB)
  ScmString d2177[1];
#endif /*defined(MSG_OOB)*/
#if defined(MSG_EOR)
  ScmString d2175[1];
#endif /*defined(MSG_EOR)*/
#if defined(MSG_DONTROUTE)
  ScmString d2173[1];
#endif /*defined(MSG_DONTROUTE)*/
#if defined(MSG_CTRUNC)
  ScmString d2171[1];
#endif /*defined(MSG_CTRUNC)*/
#if defined(HAVE_IPV6)
  ScmString d2165[18];
#endif /*defined(HAVE_IPV6)*/
  ScmString d2150[441];
} scm__sc SCM_UNUSED = {
#if defined(NI_DGRAM)
  {   /* ScmString d2420 */
      SCM_STRING_CONST_INITIALIZER("NI_DGRAM", 8, 8),
  },
#endif /*defined(NI_DGRAM)*/
#if defined(NI_NUMERICSERV)
  {   /* ScmString d2418 */
      SCM_STRING_CONST_INITIALIZER("NI_NUMERICSERV", 14, 14),
  },
#endif /*defined(NI_NUMERICSERV)*/
#if defined(NI_NAMEREQD)
  {   /* ScmString d2416 */
      SCM_STRING_CONST_INITIALIZER("NI_NAMEREQD", 11, 11),
  },
#endif /*defined(NI_NAMEREQD)*/
#if defined(NI_NUMERICHOST)
  {   /* ScmString d2414 */
      SCM_STRING_CONST_INITIALIZER("NI_NUMERICHOST", 14, 14),
  },
#endif /*defined(NI_NUMERICHOST)*/
#if defined(NI_NOFQDN)
  {   /* ScmString d2412 */
      SCM_STRING_CONST_INITIALIZER("NI_NOFQDN", 9, 9),
  },
#endif /*defined(NI_NOFQDN)*/
#if defined(AI_ADDRCONFIG)
  {   /* ScmString d2410 */
      SCM_STRING_CONST_INITIALIZER("AI_ADDRCONFIG", 13, 13),
  },
#endif /*defined(AI_ADDRCONFIG)*/
#if defined(AI_ALL)
  {   /* ScmString d2408 */
      SCM_STRING_CONST_INITIALIZER("AI_ALL", 6, 6),
  },
#endif /*defined(AI_ALL)*/
#if defined(AI_V4MAPPED)
  {   /* ScmString d2406 */
      SCM_STRING_CONST_INITIALIZER("AI_V4MAPPED", 11, 11),
  },
#endif /*defined(AI_V4MAPPED)*/
#if defined(AI_NUMERICSERV)
  {   /* ScmString d2404 */
      SCM_STRING_CONST_INITIALIZER("AI_NUMERICSERV", 14, 14),
  },
#endif /*defined(AI_NUMERICSERV)*/
#if defined(AI_NUMERICHOST)
  {   /* ScmString d2402 */
      SCM_STRING_CONST_INITIALIZER("AI_NUMERICHOST", 14, 14),
  },
#endif /*defined(AI_NUMERICHOST)*/
#if defined(AI_CANONNAME)
  {   /* ScmString d2400 */
      SCM_STRING_CONST_INITIALIZER("AI_CANONNAME", 12, 12),
  },
#endif /*defined(AI_CANONNAME)*/
#if defined(AI_PASSIVE)
  {   /* ScmString d2398 */
      SCM_STRING_CONST_INITIALIZER("AI_PASSIVE", 10, 10),
  },
#endif /*defined(AI_PASSIVE)*/
#if defined(IPV6_V6ONLY)
  {   /* ScmString d2396 */
      SCM_STRING_CONST_INITIALIZER("IPV6_V6ONLY", 11, 11),
  },
#endif /*defined(IPV6_V6ONLY)*/
#if defined(IPV6_LEAVE_GROUP)
  {   /* ScmString d2394 */
      SCM_STRING_CONST_INITIALIZER("IPV6_LEAVE_GROUP", 16, 16),
  },
#endif /*defined(IPV6_LEAVE_GROUP)*/
#if defined(IPV6_JOIN_GROUP)
  {   /* ScmString d2392 */
      SCM_STRING_CONST_INITIALIZER("IPV6_JOIN_GROUP", 15, 15),
  },
#endif /*defined(IPV6_JOIN_GROUP)*/
#if defined(IPV6_MULTICAST_LOOP)
  {   /* ScmString d2390 */
      SCM_STRING_CONST_INITIALIZER("IPV6_MULTICAST_LOOP", 19, 19),
  },
#endif /*defined(IPV6_MULTICAST_LOOP)*/
#if defined(IPV6_MULTICAST_HOPS)
  {   /* ScmString d2388 */
      SCM_STRING_CONST_INITIALIZER("IPV6_MULTICAST_HOPS", 19, 19),
  },
#endif /*defined(IPV6_MULTICAST_HOPS)*/
#if defined(IPV6_MULTICAST_IF)
  {   /* ScmString d2386 */
      SCM_STRING_CONST_INITIALIZER("IPV6_MULTICAST_IF", 17, 17),
  },
#endif /*defined(IPV6_MULTICAST_IF)*/
#if defined(IPV6_UNICAST_HOPS)
  {   /* ScmString d2384 */
      SCM_STRING_CONST_INITIALIZER("IPV6_UNICAST_HOPS", 17, 17),
  },
#endif /*defined(IPV6_UNICAST_HOPS)*/
#if defined(IPPROTO_IPV6)
  {   /* ScmString d2382 */
      SCM_STRING_CONST_INITIALIZER("IPPROTO_IPV6", 12, 12),
  },
#endif /*defined(IPPROTO_IPV6)*/
#if defined(PF_INET6)
  {   /* ScmString d2380 */
      SCM_STRING_CONST_INITIALIZER("PF_INET6", 8, 8),
  },
#endif /*defined(PF_INET6)*/
#if defined(AF_INET6)
  {   /* ScmString d2378 */
      SCM_STRING_CONST_INITIALIZER("AF_INET6", 8, 8),
  },
#endif /*defined(AF_INET6)*/
#if defined(IFF_DYNAMIC)
  {   /* ScmString d2375 */
      SCM_STRING_CONST_INITIALIZER("IFF_DYNAMIC", 11, 11),
  },
#endif /*defined(IFF_DYNAMIC)*/
#if defined(IFF_AUTOMEDIA)
  {   /* ScmString d2373 */
      SCM_STRING_CONST_INITIALIZER("IFF_AUTOMEDIA", 13, 13),
  },
#endif /*defined(IFF_AUTOMEDIA)*/
#if defined(IFF_PORTSEL)
  {   /* ScmString d2371 */
      SCM_STRING_CONST_INITIALIZER("IFF_PORTSEL", 11, 11),
  },
#endif /*defined(IFF_PORTSEL)*/
#if defined(IFF_MULTICAST)
  {   /* ScmString d2369 */
      SCM_STRING_CONST_INITIALIZER("IFF_MULTICAST", 13, 13),
  },
#endif /*defined(IFF_MULTICAST)*/
#if defined(IFF_SLAVE)
  {   /* ScmString d2367 */
      SCM_STRING_CONST_INITIALIZER("IFF_SLAVE", 9, 9),
  },
#endif /*defined(IFF_SLAVE)*/
#if defined(IFF_MASTER)
  {   /* ScmString d2365 */
      SCM_STRING_CONST_INITIALIZER("IFF_MASTER", 10, 10),
  },
#endif /*defined(IFF_MASTER)*/
#if defined(IFF_ALLMULTI)
  {   /* ScmString d2363 */
      SCM_STRING_CONST_INITIALIZER("IFF_ALLMULTI", 12, 12),
  },
#endif /*defined(IFF_ALLMULTI)*/
#if defined(IFF_NOTRAILERS)
  {   /* ScmString d2361 */
      SCM_STRING_CONST_INITIALIZER("IFF_NOTRAILERS", 14, 14),
  },
#endif /*defined(IFF_NOTRAILERS)*/
#if defined(IFF_PROMISC)
  {   /* ScmString d2359 */
      SCM_STRING_CONST_INITIALIZER("IFF_PROMISC", 11, 11),
  },
#endif /*defined(IFF_PROMISC)*/
#if defined(IFF_NOARP)
  {   /* ScmString d2357 */
      SCM_STRING_CONST_INITIALIZER("IFF_NOARP", 9, 9),
  },
#endif /*defined(IFF_NOARP)*/
#if defined(IFF_RUNNING)
  {   /* ScmString d2355 */
      SCM_STRING_CONST_INITIALIZER("IFF_RUNNING", 11, 11),
  },
#endif /*defined(IFF_RUNNING)*/
#if defined(IFF_POINTTOPOINT)
  {   /* ScmString d2353 */
      SCM_STRING_CONST_INITIALIZER("IFF_POINTTOPOINT", 16, 16),
  },
#endif /*defined(IFF_POINTTOPOINT)*/
#if defined(IFF_LOOPBACK)
  {   /* ScmString d2351 */
      SCM_STRING_CONST_INITIALIZER("IFF_LOOPBACK", 12, 12),
  },
#endif /*defined(IFF_LOOPBACK)*/
#if defined(IFF_DEBUG)
  {   /* ScmString d2349 */
      SCM_STRING_CONST_INITIALIZER("IFF_DEBUG", 9, 9),
  },
#endif /*defined(IFF_DEBUG)*/
#if defined(IFF_BROADCAST)
  {   /* ScmString d2347 */
      SCM_STRING_CONST_INITIALIZER("IFF_BROADCAST", 13, 13),
  },
#endif /*defined(IFF_BROADCAST)*/
#if defined(IFF_UP)
  {   /* ScmString d2345 */
      SCM_STRING_CONST_INITIALIZER("IFF_UP", 6, 6),
  },
#endif /*defined(IFF_UP)*/
#if defined(SIOCGIFCONF)
  {   /* ScmString d2343 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFCONF", 11, 11),
  },
#endif /*defined(SIOCGIFCONF)*/
#if defined(SIOSIFTXQLEN)
  {   /* ScmString d2341 */
      SCM_STRING_CONST_INITIALIZER("SIOSIFTXQLEN", 12, 12),
  },
#endif /*defined(SIOSIFTXQLEN)*/
#if defined(SIOGIFTXQLEN)
  {   /* ScmString d2339 */
      SCM_STRING_CONST_INITIALIZER("SIOGIFTXQLEN", 12, 12),
  },
#endif /*defined(SIOGIFTXQLEN)*/
#if defined(SIOCDELMULTI)
  {   /* ScmString d2337 */
      SCM_STRING_CONST_INITIALIZER("SIOCDELMULTI", 12, 12),
  },
#endif /*defined(SIOCDELMULTI)*/
#if defined(SIOCADDMULTI)
  {   /* ScmString d2335 */
      SCM_STRING_CONST_INITIALIZER("SIOCADDMULTI", 12, 12),
  },
#endif /*defined(SIOCADDMULTI)*/
#if defined(SIOCSIFMAP)
  {   /* ScmString d2333 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFMAP", 10, 10),
  },
#endif /*defined(SIOCSIFMAP)*/
#if defined(SIOCGIFMAP)
  {   /* ScmString d2331 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFMAP", 10, 10),
  },
#endif /*defined(SIOCGIFMAP)*/
#if defined(SIOCSIFHWBROADCAST)
  {   /* ScmString d2329 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFHWBROADCAST", 18, 18),
  },
#endif /*defined(SIOCSIFHWBROADCAST)*/
#if defined(SIOCSIFHWADDR)
  {   /* ScmString d2327 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFHWADDR", 13, 13),
  },
#endif /*defined(SIOCSIFHWADDR)*/
#if defined(SIOCGIFHWADDR)
  {   /* ScmString d2325 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFHWADDR", 13, 13),
  },
#endif /*defined(SIOCGIFHWADDR)*/
#if defined(SIOCSIFMTU)
  {   /* ScmString d2323 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFMTU", 10, 10),
  },
#endif /*defined(SIOCSIFMTU)*/
#if defined(SIOCGIFMTU)
  {   /* ScmString d2321 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFMTU", 10, 10),
  },
#endif /*defined(SIOCGIFMTU)*/
#if defined(SIOCSIFMETRIC)
  {   /* ScmString d2319 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFMETRIC", 13, 13),
  },
#endif /*defined(SIOCSIFMETRIC)*/
#if defined(SIOCGIFMETRIC)
  {   /* ScmString d2317 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFMETRIC", 13, 13),
  },
#endif /*defined(SIOCGIFMETRIC)*/
#if defined(SIOCSIFFLAGS)
  {   /* ScmString d2315 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFFLAGS", 12, 12),
  },
#endif /*defined(SIOCSIFFLAGS)*/
#if defined(SIOCGIFFLAGS)
  {   /* ScmString d2313 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFFLAGS", 12, 12),
  },
#endif /*defined(SIOCGIFFLAGS)*/
#if defined(SIOCSIFNETMASK)
  {   /* ScmString d2311 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFNETMASK", 14, 14),
  },
#endif /*defined(SIOCSIFNETMASK)*/
#if defined(SIOCGIFNETMASK)
  {   /* ScmString d2309 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFNETMASK", 14, 14),
  },
#endif /*defined(SIOCGIFNETMASK)*/
#if defined(SIOCSIFBRDADDR)
  {   /* ScmString d2307 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFBRDADDR", 14, 14),
  },
#endif /*defined(SIOCSIFBRDADDR)*/
#if defined(SIOCGIFBRDADDR)
  {   /* ScmString d2305 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFBRDADDR", 14, 14),
  },
#endif /*defined(SIOCGIFBRDADDR)*/
#if defined(SIOCSIFDSTADDR)
  {   /* ScmString d2303 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFDSTADDR", 14, 14),
  },
#endif /*defined(SIOCSIFDSTADDR)*/
#if defined(SIOCGIFDSTADDR)
  {   /* ScmString d2301 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFDSTADDR", 14, 14),
  },
#endif /*defined(SIOCGIFDSTADDR)*/
#if defined(SIOCSIFADDR)
  {   /* ScmString d2299 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFADDR", 11, 11),
  },
#endif /*defined(SIOCSIFADDR)*/
#if defined(SIOCGIFADDR)
  {   /* ScmString d2297 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFADDR", 11, 11),
  },
#endif /*defined(SIOCGIFADDR)*/
#if defined(SIOCGIFINDEX)
  {   /* ScmString d2295 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFINDEX", 12, 12),
  },
#endif /*defined(SIOCGIFINDEX)*/
#if defined(SIOCSIFNAME)
  {   /* ScmString d2293 */
      SCM_STRING_CONST_INITIALIZER("SIOCSIFNAME", 11, 11),
  },
#endif /*defined(SIOCSIFNAME)*/
#if defined(SIOCGIFNAME)
  {   /* ScmString d2291 */
      SCM_STRING_CONST_INITIALIZER("SIOCGIFNAME", 11, 11),
  },
#endif /*defined(SIOCGIFNAME)*/
#if defined(IP_MULTICAST_IF)
  {   /* ScmString d2289 */
      SCM_STRING_CONST_INITIALIZER("IP_MULTICAST_IF", 15, 15),
  },
#endif /*defined(IP_MULTICAST_IF)*/
#if defined(IP_DROP_MEMBERSHIP)
  {   /* ScmString d2287 */
      SCM_STRING_CONST_INITIALIZER("IP_DROP_MEMBERSHIP", 18, 18),
  },
#endif /*defined(IP_DROP_MEMBERSHIP)*/
#if defined(IP_ADD_MEMBERSHIP)
  {   /* ScmString d2285 */
      SCM_STRING_CONST_INITIALIZER("IP_ADD_MEMBERSHIP", 17, 17),
  },
#endif /*defined(IP_ADD_MEMBERSHIP)*/
#if defined(IP_MULTICAST_LOOP)
  {   /* ScmString d2283 */
      SCM_STRING_CONST_INITIALIZER("IP_MULTICAST_LOOP", 17, 17),
  },
#endif /*defined(IP_MULTICAST_LOOP)*/
#if defined(IP_MULTICAST_TTL)
  {   /* ScmString d2281 */
      SCM_STRING_CONST_INITIALIZER("IP_MULTICAST_TTL", 16, 16),
  },
#endif /*defined(IP_MULTICAST_TTL)*/
#if defined(IP_ROUTER_ALERT)
  {   /* ScmString d2279 */
      SCM_STRING_CONST_INITIALIZER("IP_ROUTER_ALERT", 15, 15),
  },
#endif /*defined(IP_ROUTER_ALERT)*/
#if defined(IP_MTU)
  {   /* ScmString d2277 */
      SCM_STRING_CONST_INITIALIZER("IP_MTU", 6, 6),
  },
#endif /*defined(IP_MTU)*/
#if defined(IP_MTU_DISCOVER)
  {   /* ScmString d2275 */
      SCM_STRING_CONST_INITIALIZER("IP_MTU_DISCOVER", 15, 15),
  },
#endif /*defined(IP_MTU_DISCOVER)*/
#if defined(IP_RECVERR)
  {   /* ScmString d2273 */
      SCM_STRING_CONST_INITIALIZER("IP_RECVERR", 10, 10),
  },
#endif /*defined(IP_RECVERR)*/
#if defined(IP_HDRINCL)
  {   /* ScmString d2271 */
      SCM_STRING_CONST_INITIALIZER("IP_HDRINCL", 10, 10),
  },
#endif /*defined(IP_HDRINCL)*/
#if defined(IP_TTL)
  {   /* ScmString d2269 */
      SCM_STRING_CONST_INITIALIZER("IP_TTL", 6, 6),
  },
#endif /*defined(IP_TTL)*/
#if defined(IP_TOS)
  {   /* ScmString d2267 */
      SCM_STRING_CONST_INITIALIZER("IP_TOS", 6, 6),
  },
#endif /*defined(IP_TOS)*/
#if defined(IP_RECVOPTS)
  {   /* ScmString d2265 */
      SCM_STRING_CONST_INITIALIZER("IP_RECVOPTS", 11, 11),
  },
#endif /*defined(IP_RECVOPTS)*/
#if defined(IP_RECVTTL)
  {   /* ScmString d2263 */
      SCM_STRING_CONST_INITIALIZER("IP_RECVTTL", 10, 10),
  },
#endif /*defined(IP_RECVTTL)*/
#if defined(IP_RECVTOS)
  {   /* ScmString d2261 */
      SCM_STRING_CONST_INITIALIZER("IP_RECVTOS", 10, 10),
  },
#endif /*defined(IP_RECVTOS)*/
#if defined(IP_PKTINFO)
  {   /* ScmString d2259 */
      SCM_STRING_CONST_INITIALIZER("IP_PKTINFO", 10, 10),
  },
#endif /*defined(IP_PKTINFO)*/
#if defined(IP_OPTIONS)
  {   /* ScmString d2257 */
      SCM_STRING_CONST_INITIALIZER("IP_OPTIONS", 10, 10),
  },
#endif /*defined(IP_OPTIONS)*/
#if defined(SOL_IP)
  {   /* ScmString d2255 */
      SCM_STRING_CONST_INITIALIZER("SOL_IP", 6, 6),
  },
#endif /*defined(SOL_IP)*/
#if defined(TCP_CORK)
  {   /* ScmString d2253 */
      SCM_STRING_CONST_INITIALIZER("TCP_CORK", 8, 8),
  },
#endif /*defined(TCP_CORK)*/
#if defined(TCP_MAXSEG)
  {   /* ScmString d2251 */
      SCM_STRING_CONST_INITIALIZER("TCP_MAXSEG", 10, 10),
  },
#endif /*defined(TCP_MAXSEG)*/
#if defined(TCP_NODELAY)
  {   /* ScmString d2249 */
      SCM_STRING_CONST_INITIALIZER("TCP_NODELAY", 11, 11),
  },
#endif /*defined(TCP_NODELAY)*/
#if defined(SOL_TCP)
  {   /* ScmString d2247 */
      SCM_STRING_CONST_INITIALIZER("SOL_TCP", 7, 7),
  },
#endif /*defined(SOL_TCP)*/
#if defined(SO_TYPE)
  {   /* ScmString d2245 */
      SCM_STRING_CONST_INITIALIZER("SO_TYPE", 7, 7),
  },
#endif /*defined(SO_TYPE)*/
#if defined(SO_TIMESTAMP)
  {   /* ScmString d2243 */
      SCM_STRING_CONST_INITIALIZER("SO_TIMESTAMP", 12, 12),
  },
#endif /*defined(SO_TIMESTAMP)*/
#if defined(SO_SNDTIMEO)
  {   /* ScmString d2241 */
      SCM_STRING_CONST_INITIALIZER("SO_SNDTIMEO", 11, 11),
  },
#endif /*defined(SO_SNDTIMEO)*/
#if defined(SO_SNDLOWAT)
  {   /* ScmString d2239 */
      SCM_STRING_CONST_INITIALIZER("SO_SNDLOWAT", 11, 11),
  },
#endif /*defined(SO_SNDLOWAT)*/
#if defined(SO_SNDBUF)
  {   /* ScmString d2237 */
      SCM_STRING_CONST_INITIALIZER("SO_SNDBUF", 9, 9),
  },
#endif /*defined(SO_SNDBUF)*/
#if defined(SO_REUSEPORT)
  {   /* ScmString d2235 */
      SCM_STRING_CONST_INITIALIZER("SO_REUSEPORT", 12, 12),
  },
#endif /*defined(SO_REUSEPORT)*/
#if defined(SO_REUSEADDR)
  {   /* ScmString d2233 */
      SCM_STRING_CONST_INITIALIZER("SO_REUSEADDR", 12, 12),
  },
#endif /*defined(SO_REUSEADDR)*/
#if defined(SO_RCVTIMEO)
  {   /* ScmString d2231 */
      SCM_STRING_CONST_INITIALIZER("SO_RCVTIMEO", 11, 11),
  },
#endif /*defined(SO_RCVTIMEO)*/
#if defined(SO_RCVLOWAT)
  {   /* ScmString d2229 */
      SCM_STRING_CONST_INITIALIZER("SO_RCVLOWAT", 11, 11),
  },
#endif /*defined(SO_RCVLOWAT)*/
#if defined(SO_RCVBUF)
  {   /* ScmString d2227 */
      SCM_STRING_CONST_INITIALIZER("SO_RCVBUF", 9, 9),
  },
#endif /*defined(SO_RCVBUF)*/
#if defined(SO_PRIORITY)
  {   /* ScmString d2225 */
      SCM_STRING_CONST_INITIALIZER("SO_PRIORITY", 11, 11),
  },
#endif /*defined(SO_PRIORITY)*/
#if defined(SO_PEERCRED)
  {   /* ScmString d2223 */
      SCM_STRING_CONST_INITIALIZER("SO_PEERCRED", 11, 11),
  },
#endif /*defined(SO_PEERCRED)*/
#if defined(SO_PASSCRED)
  {   /* ScmString d2221 */
      SCM_STRING_CONST_INITIALIZER("SO_PASSCRED", 11, 11),
  },
#endif /*defined(SO_PASSCRED)*/
#if defined(SO_OOBINLINE)
  {   /* ScmString d2219 */
      SCM_STRING_CONST_INITIALIZER("SO_OOBINLINE", 12, 12),
  },
#endif /*defined(SO_OOBINLINE)*/
#if defined(SO_LINGER)
  {   /* ScmString d2217 */
      SCM_STRING_CONST_INITIALIZER("SO_LINGER", 9, 9),
  },
#endif /*defined(SO_LINGER)*/
#if defined(SO_KEEPALIVE)
  {   /* ScmString d2215 */
      SCM_STRING_CONST_INITIALIZER("SO_KEEPALIVE", 12, 12),
  },
#endif /*defined(SO_KEEPALIVE)*/
#if defined(SO_ERROR)
  {   /* ScmString d2213 */
      SCM_STRING_CONST_INITIALIZER("SO_ERROR", 8, 8),
  },
#endif /*defined(SO_ERROR)*/
#if defined(SO_DONTROUTE)
  {   /* ScmString d2211 */
      SCM_STRING_CONST_INITIALIZER("SO_DONTROUTE", 12, 12),
  },
#endif /*defined(SO_DONTROUTE)*/
#if defined(SO_DEBUG)
  {   /* ScmString d2209 */
      SCM_STRING_CONST_INITIALIZER("SO_DEBUG", 8, 8),
  },
#endif /*defined(SO_DEBUG)*/
#if defined(SO_BROADCAST)
  {   /* ScmString d2207 */
      SCM_STRING_CONST_INITIALIZER("SO_BROADCAST", 12, 12),
  },
#endif /*defined(SO_BROADCAST)*/
#if defined(SO_BINDTODEVICE)
  {   /* ScmString d2205 */
      SCM_STRING_CONST_INITIALIZER("SO_BINDTODEVICE", 15, 15),
  },
#endif /*defined(SO_BINDTODEVICE)*/
#if defined(SO_ACCEPTCONN)
  {   /* ScmString d2203 */
      SCM_STRING_CONST_INITIALIZER("SO_ACCEPTCONN", 13, 13),
  },
#endif /*defined(SO_ACCEPTCONN)*/
#if defined(SOL_SOCKET)
  {   /* ScmString d2201 */
      SCM_STRING_CONST_INITIALIZER("SOL_SOCKET", 10, 10),
  },
#endif /*defined(SOL_SOCKET)*/
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  {   /* ScmString d2199 */
      SCM_STRING_CONST_INITIALIZER("SHUT_RD", 7, 7),
      SCM_STRING_CONST_INITIALIZER("SHUT_WR", 7, 7),
      SCM_STRING_CONST_INITIALIZER("SHUT_RDWR", 9, 9),
  },
#endif /*!((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))*/
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  {   /* ScmString d2197 */
      SCM_STRING_CONST_INITIALIZER("SHUT_RD", 7, 7),
      SCM_STRING_CONST_INITIALIZER("SHUT_WR", 7, 7),
      SCM_STRING_CONST_INITIALIZER("SHUT_RDWR", 9, 9),
  },
#endif /*(defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))*/
#if defined(SOMAXCONN)
  {   /* ScmString d2195 */
      SCM_STRING_CONST_INITIALIZER("SOMAXCONN", 9, 9),
  },
#endif /*defined(SOMAXCONN)*/
#if defined(IPPROTO_UDP)
  {   /* ScmString d2193 */
      SCM_STRING_CONST_INITIALIZER("IPPROTO_UDP", 11, 11),
  },
#endif /*defined(IPPROTO_UDP)*/
#if defined(IPPROTO_TCP)
  {   /* ScmString d2191 */
      SCM_STRING_CONST_INITIALIZER("IPPROTO_TCP", 11, 11),
  },
#endif /*defined(IPPROTO_TCP)*/
#if defined(IPPROTO_ICMPV6)
  {   /* ScmString d2189 */
      SCM_STRING_CONST_INITIALIZER("IPPROTO_ICMPV6", 14, 14),
  },
#endif /*defined(IPPROTO_ICMPV6)*/
#if defined(IPPROTO_ICMP)
  {   /* ScmString d2187 */
      SCM_STRING_CONST_INITIALIZER("IPPROTO_ICMP", 12, 12),
  },
#endif /*defined(IPPROTO_ICMP)*/
#if defined(IPPROTO_IP)
  {   /* ScmString d2185 */
      SCM_STRING_CONST_INITIALIZER("IPPROTO_IP", 10, 10),
  },
#endif /*defined(IPPROTO_IP)*/
#if defined(MSG_WAITALL)
  {   /* ScmString d2183 */
      SCM_STRING_CONST_INITIALIZER("MSG_WAITALL", 11, 11),
  },
#endif /*defined(MSG_WAITALL)*/
#if defined(MSG_TRUNC)
  {   /* ScmString d2181 */
      SCM_STRING_CONST_INITIALIZER("MSG_TRUNC", 9, 9),
  },
#endif /*defined(MSG_TRUNC)*/
#if defined(MSG_PEEK)
  {   /* ScmString d2179 */
      SCM_STRING_CONST_INITIALIZER("MSG_PEEK", 8, 8),
  },
#endif /*defined(MSG_PEEK)*/
#if defined(MSG_OOB)
  {   /* ScmString d2177 */
      SCM_STRING_CONST_INITIALIZER("MSG_OOB", 7, 7),
  },
#endif /*defined(MSG_OOB)*/
#if defined(MSG_EOR)
  {   /* ScmString d2175 */
      SCM_STRING_CONST_INITIALIZER("MSG_EOR", 7, 7),
  },
#endif /*defined(MSG_EOR)*/
#if defined(MSG_DONTROUTE)
  {   /* ScmString d2173 */
      SCM_STRING_CONST_INITIALIZER("MSG_DONTROUTE", 13, 13),
  },
#endif /*defined(MSG_DONTROUTE)*/
#if defined(MSG_CTRUNC)
  {   /* ScmString d2171 */
      SCM_STRING_CONST_INITIALIZER("MSG_CTRUNC", 10, 10),
  },
#endif /*defined(MSG_CTRUNC)*/
#if defined(HAVE_IPV6)
  {   /* ScmString d2165 */
      SCM_STRING_CONST_INITIALIZER("inet6", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sys-getaddrinfo", 15, 15),
      SCM_STRING_CONST_INITIALIZER("nodename", 8, 8),
      SCM_STRING_CONST_INITIALIZER("servname", 8, 8),
      SCM_STRING_CONST_INITIALIZER("hints", 5, 5),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libnet.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("gauche.net", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>\077", 16, 16),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("sys-getnameinfo", 15, 15),
      SCM_STRING_CONST_INITIALIZER("addr", 4, 4),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("flags", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<socket-address>", 16, 16),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
  },
#endif /*defined(HAVE_IPV6)*/
  {   /* ScmString d2150 */
      SCM_STRING_CONST_INITIALIZER("gauche.net", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<socket>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("make-socket", 11, 11),
      SCM_STRING_CONST_INITIALIZER("PF_UNSPEC", 9, 9),
      SCM_STRING_CONST_INITIALIZER("PF_UNIX", 7, 7),
      SCM_STRING_CONST_INITIALIZER("PF_INET", 7, 7),
      SCM_STRING_CONST_INITIALIZER("AF_UNSPEC", 9, 9),
      SCM_STRING_CONST_INITIALIZER("AF_UNIX", 7, 7),
      SCM_STRING_CONST_INITIALIZER("AF_INET", 7, 7),
      SCM_STRING_CONST_INITIALIZER("SOCK_STREAM", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SOCK_DGRAM", 10, 10),
      SCM_STRING_CONST_INITIALIZER("SOCK_RAW", 8, 8),
      SCM_STRING_CONST_INITIALIZER("SHUT_RD", 7, 7),
      SCM_STRING_CONST_INITIALIZER("SHUT_WR", 7, 7),
      SCM_STRING_CONST_INITIALIZER("SHUT_RDWR", 9, 9),
      SCM_STRING_CONST_INITIALIZER("socket-address", 14, 14),
      SCM_STRING_CONST_INITIALIZER("socket-status", 13, 13),
      SCM_STRING_CONST_INITIALIZER("socket-input-port", 17, 17),
      SCM_STRING_CONST_INITIALIZER("socket-output-port", 18, 18),
      SCM_STRING_CONST_INITIALIZER("socket-shutdown", 15, 15),
      SCM_STRING_CONST_INITIALIZER("socket-close", 12, 12),
      SCM_STRING_CONST_INITIALIZER("socket-bind", 11, 11),
      SCM_STRING_CONST_INITIALIZER("socket-connect", 14, 14),
      SCM_STRING_CONST_INITIALIZER("socket-fd", 9, 9),
      SCM_STRING_CONST_INITIALIZER("socket-listen", 13, 13),
      SCM_STRING_CONST_INITIALIZER("socket-accept", 13, 13),
      SCM_STRING_CONST_INITIALIZER("socket-setsockopt", 17, 17),
      SCM_STRING_CONST_INITIALIZER("socket-getsockopt", 17, 17),
      SCM_STRING_CONST_INITIALIZER("socket-getsockname", 18, 18),
      SCM_STRING_CONST_INITIALIZER("socket-getpeername", 18, 18),
      SCM_STRING_CONST_INITIALIZER("socket-ioctl", 12, 12),
      SCM_STRING_CONST_INITIALIZER("socket-send", 11, 11),
      SCM_STRING_CONST_INITIALIZER("socket-sendto", 13, 13),
      SCM_STRING_CONST_INITIALIZER("socket-sendmsg", 14, 14),
      SCM_STRING_CONST_INITIALIZER("socket-buildmsg", 15, 15),
      SCM_STRING_CONST_INITIALIZER("socket-recv", 11, 11),
      SCM_STRING_CONST_INITIALIZER("socket-recv!", 12, 12),
      SCM_STRING_CONST_INITIALIZER("socket-recvfrom", 15, 15),
      SCM_STRING_CONST_INITIALIZER("socket-recvfrom!", 16, 16),
      SCM_STRING_CONST_INITIALIZER("<sockaddr>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<sockaddr-in>", 13, 13),
      SCM_STRING_CONST_INITIALIZER("<sockaddr-un>", 13, 13),
      SCM_STRING_CONST_INITIALIZER("make-sockaddrs", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sockaddr-name", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sockaddr-family", 15, 15),
      SCM_STRING_CONST_INITIALIZER("sockaddr-addr", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sockaddr-port", 13, 13),
      SCM_STRING_CONST_INITIALIZER("make-client-socket", 18, 18),
      SCM_STRING_CONST_INITIALIZER("make-server-socket", 18, 18),
      SCM_STRING_CONST_INITIALIZER("make-server-sockets", 19, 19),
      SCM_STRING_CONST_INITIALIZER("call-with-client-socket", 23, 23),
      SCM_STRING_CONST_INITIALIZER("<sys-hostent>", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-gethostbyname", 17, 17),
      SCM_STRING_CONST_INITIALIZER("sys-gethostbyaddr", 17, 17),
      SCM_STRING_CONST_INITIALIZER("<sys-protoent>", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sys-getprotobyname", 18, 18),
      SCM_STRING_CONST_INITIALIZER("sys-getprotobynumber", 20, 20),
      SCM_STRING_CONST_INITIALIZER("<sys-servent>", 13, 13),
      SCM_STRING_CONST_INITIALIZER("sys-getservbyname", 17, 17),
      SCM_STRING_CONST_INITIALIZER("sys-getservbyport", 17, 17),
      SCM_STRING_CONST_INITIALIZER("sys-htonl", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-htons", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-ntohl", 9, 9),
      SCM_STRING_CONST_INITIALIZER("sys-ntohs", 9, 9),
      SCM_STRING_CONST_INITIALIZER("inet-checksum", 13, 13),
      SCM_STRING_CONST_INITIALIZER("inet-string->address", 20, 20),
      SCM_STRING_CONST_INITIALIZER("inet-string->address!", 21, 21),
      SCM_STRING_CONST_INITIALIZER("inet-address->string", 20, 20),
      SCM_STRING_CONST_INITIALIZER("connection-self-address", 23, 23),
      SCM_STRING_CONST_INITIALIZER("connection-peer-address", 23, 23),
      SCM_STRING_CONST_INITIALIZER("connection-input-port", 21, 21),
      SCM_STRING_CONST_INITIALIZER("connection-output-port", 22, 22),
      SCM_STRING_CONST_INITIALIZER("connection-shutdown", 19, 19),
      SCM_STRING_CONST_INITIALIZER("connection-close", 16, 16),
      SCM_STRING_CONST_INITIALIZER("connection-address-name", 23, 23),
      SCM_STRING_CONST_INITIALIZER("find-module", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gauche/netutil", 14, 14),
      SCM_STRING_CONST_INITIALIZER("%autoload", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("unknown", 7, 7),
      SCM_STRING_CONST_INITIALIZER("unix", 4, 4),
      SCM_STRING_CONST_INITIALIZER("inet", 4, 4),
      SCM_STRING_CONST_INITIALIZER("domain", 6, 6),
      SCM_STRING_CONST_INITIALIZER("type", 4, 4),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("protocol", 8, 8),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libnet.scm", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("sock", 4, 4),
      SCM_STRING_CONST_INITIALIZER("none", 4, 4),
      SCM_STRING_CONST_INITIALIZER("bound", 5, 5),
      SCM_STRING_CONST_INITIALIZER("listening", 9, 9),
      SCM_STRING_CONST_INITIALIZER("connected", 9, 9),
      SCM_STRING_CONST_INITIALIZER("shutdown", 8, 8),
      SCM_STRING_CONST_INITIALIZER("closed", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<long>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("buffering", 9, 9),
      SCM_STRING_CONST_INITIALIZER("buffered\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("how", 3, 3),
      SCM_STRING_CONST_INITIALIZER("addr", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<socket-address>", 16, 16),
      SCM_STRING_CONST_INITIALIZER("backlog", 7, 7),
      SCM_STRING_CONST_INITIALIZER("msg", 3, 3),
      SCM_STRING_CONST_INITIALIZER("flags", 5, 5),
      SCM_STRING_CONST_INITIALIZER("to", 2, 2),
      SCM_STRING_CONST_INITIALIZER("bytes", 5, 5),
      SCM_STRING_CONST_INITIALIZER("buf", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<uvector>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("addrs", 5, 5),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("iov", 3, 3),
      SCM_STRING_CONST_INITIALIZER("control", 7, 7),
      SCM_STRING_CONST_INITIALIZER("<socket-address>\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("<vector>\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("level", 5, 5),
      SCM_STRING_CONST_INITIALIZER("option", 6, 6),
      SCM_STRING_CONST_INITIALIZER("value", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rsize", 5, 5),
      SCM_STRING_CONST_INITIALIZER("request", 7, 7),
      SCM_STRING_CONST_INITIALIZER("data", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<integer>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<const-cstring>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("number", 6, 6),
      SCM_STRING_CONST_INITIALIZER("proto", 5, 5),
      SCM_STRING_CONST_INITIALIZER("port", 4, 4),
      SCM_STRING_CONST_INITIALIZER("x", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<uint32>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<uint16>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("IPPROTO_IP", 10, 10),
      SCM_STRING_CONST_INITIALIZER("IPPROTO_ICMP", 12, 12),
      SCM_STRING_CONST_INITIALIZER("IPPROTO_TCP", 11, 11),
      SCM_STRING_CONST_INITIALIZER("IPPROTO_UDP", 11, 11),
      SCM_STRING_CONST_INITIALIZER("IPPROTO_IPV6", 12, 12),
      SCM_STRING_CONST_INITIALIZER("IPPROTO_ICMPV6", 14, 14),
      SCM_STRING_CONST_INITIALIZER("SOL_SOCKET", 10, 10),
      SCM_STRING_CONST_INITIALIZER("SOMAXCONN", 9, 9),
      SCM_STRING_CONST_INITIALIZER("SO_ACCEPTCONN", 13, 13),
      SCM_STRING_CONST_INITIALIZER("SO_BINDTODEVICE", 15, 15),
      SCM_STRING_CONST_INITIALIZER("SO_BROADCAST", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SO_DEBUG", 8, 8),
      SCM_STRING_CONST_INITIALIZER("SO_DONTROUTE", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SO_ERROR", 8, 8),
      SCM_STRING_CONST_INITIALIZER("SO_KEEPALIVE", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SO_LINGER", 9, 9),
      SCM_STRING_CONST_INITIALIZER("SO_OOBINLINE", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SO_PASSCRED", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SO_PEERCRED", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SO_PRIORITY", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SO_RCVBUF", 9, 9),
      SCM_STRING_CONST_INITIALIZER("SO_RCVLOWAT", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SO_RCVTIMEO", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SO_REUSEADDR", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SO_REUSEPORT", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SO_SNDBUF", 9, 9),
      SCM_STRING_CONST_INITIALIZER("SO_SNDLOWAT", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SO_SNDTIMEO", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SO_TIMESTAMP", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SO_TYPE", 7, 7),
      SCM_STRING_CONST_INITIALIZER("SOL_TCP", 7, 7),
      SCM_STRING_CONST_INITIALIZER("TCP_NODELAY", 11, 11),
      SCM_STRING_CONST_INITIALIZER("TCP_MAXSEG", 10, 10),
      SCM_STRING_CONST_INITIALIZER("TCP_CORK", 8, 8),
      SCM_STRING_CONST_INITIALIZER("SOL_IP", 6, 6),
      SCM_STRING_CONST_INITIALIZER("IP_OPTIONS", 10, 10),
      SCM_STRING_CONST_INITIALIZER("IP_PKTINFO", 10, 10),
      SCM_STRING_CONST_INITIALIZER("IP_RECVTOS", 10, 10),
      SCM_STRING_CONST_INITIALIZER("IP_RECVTTL", 10, 10),
      SCM_STRING_CONST_INITIALIZER("IP_RECVOPTS", 11, 11),
      SCM_STRING_CONST_INITIALIZER("IP_TOS", 6, 6),
      SCM_STRING_CONST_INITIALIZER("IP_TTL", 6, 6),
      SCM_STRING_CONST_INITIALIZER("IP_HDRINCL", 10, 10),
      SCM_STRING_CONST_INITIALIZER("IP_RECVERR", 10, 10),
      SCM_STRING_CONST_INITIALIZER("IP_MTU_DISCOVER", 15, 15),
      SCM_STRING_CONST_INITIALIZER("IP_MTU", 6, 6),
      SCM_STRING_CONST_INITIALIZER("IP_ROUTER_ALERT", 15, 15),
      SCM_STRING_CONST_INITIALIZER("IP_MULTICAST_TTL", 16, 16),
      SCM_STRING_CONST_INITIALIZER("IP_MULTICAST_LOOP", 17, 17),
      SCM_STRING_CONST_INITIALIZER("IP_ADD_MEMBERSHIP", 17, 17),
      SCM_STRING_CONST_INITIALIZER("IP_DROP_MEMBERSHIP", 18, 18),
      SCM_STRING_CONST_INITIALIZER("IP_MULTICAST_IF", 15, 15),
      SCM_STRING_CONST_INITIALIZER("MSG_CTRUNC", 10, 10),
      SCM_STRING_CONST_INITIALIZER("MSG_DONTROUTE", 13, 13),
      SCM_STRING_CONST_INITIALIZER("MSG_EOR", 7, 7),
      SCM_STRING_CONST_INITIALIZER("MSG_OOB", 7, 7),
      SCM_STRING_CONST_INITIALIZER("MSG_PEEK", 8, 8),
      SCM_STRING_CONST_INITIALIZER("MSG_TRUNC", 9, 9),
      SCM_STRING_CONST_INITIALIZER("MSG_WAITALL", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFNAME", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFNAME", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFINDEX", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFFLAGS", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFFLAGS", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFMETRIC", 13, 13),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFMETRIC", 13, 13),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFMTU", 10, 10),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFMTU", 10, 10),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFHWADDR", 13, 13),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFHWADDR", 13, 13),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFHWBROADCAST", 18, 18),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFMAP", 10, 10),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFMAP", 10, 10),
      SCM_STRING_CONST_INITIALIZER("SIOCADDMULTI", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SIOCDELMULTI", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SIOGIFTXQLEN", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SIOSIFTXQLEN", 12, 12),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFCONF", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFADDR", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFADDR", 11, 11),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFDSTADDR", 14, 14),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFDSTADDR", 14, 14),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFBRDADDR", 14, 14),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFBRDADDR", 14, 14),
      SCM_STRING_CONST_INITIALIZER("SIOCGIFNETMASK", 14, 14),
      SCM_STRING_CONST_INITIALIZER("SIOCSIFNETMASK", 14, 14),
      SCM_STRING_CONST_INITIALIZER("IFF_UP", 6, 6),
      SCM_STRING_CONST_INITIALIZER("IFF_BROADCAST", 13, 13),
      SCM_STRING_CONST_INITIALIZER("IFF_DEBUG", 9, 9),
      SCM_STRING_CONST_INITIALIZER("IFF_LOOPBACK", 12, 12),
      SCM_STRING_CONST_INITIALIZER("IFF_POINTTOPOINT", 16, 16),
      SCM_STRING_CONST_INITIALIZER("IFF_RUNNING", 11, 11),
      SCM_STRING_CONST_INITIALIZER("IFF_NOARP", 9, 9),
      SCM_STRING_CONST_INITIALIZER("IFF_PROMISC", 11, 11),
      SCM_STRING_CONST_INITIALIZER("IFF_NOTRAILERS", 14, 14),
      SCM_STRING_CONST_INITIALIZER("IFF_ALLMULTI", 12, 12),
      SCM_STRING_CONST_INITIALIZER("IFF_MASTER", 10, 10),
      SCM_STRING_CONST_INITIALIZER("IFF_SLAVE", 9, 9),
      SCM_STRING_CONST_INITIALIZER("IFF_MULTICAST", 13, 13),
      SCM_STRING_CONST_INITIALIZER("IFF_PORTSEL", 11, 11),
      SCM_STRING_CONST_INITIALIZER("IFF_AUTOMEDIA", 13, 13),
      SCM_STRING_CONST_INITIALIZER("IFF_DYNAMIC", 11, 11),
      SCM_STRING_CONST_INITIALIZER("PF_INET6", 8, 8),
      SCM_STRING_CONST_INITIALIZER("AF_INET6", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<sockaddr-in6>", 14, 14),
      SCM_STRING_CONST_INITIALIZER("<sys-addrinfo>", 14, 14),
      SCM_STRING_CONST_INITIALIZER("sys-getaddrinfo", 15, 15),
      SCM_STRING_CONST_INITIALIZER("make-sys-addrinfo", 17, 17),
      SCM_STRING_CONST_INITIALIZER("AI_PASSIVE", 10, 10),
      SCM_STRING_CONST_INITIALIZER("AI_CANONNAME", 12, 12),
      SCM_STRING_CONST_INITIALIZER("AI_NUMERICHOST", 14, 14),
      SCM_STRING_CONST_INITIALIZER("AI_NUMERICSERV", 14, 14),
      SCM_STRING_CONST_INITIALIZER("AI_V4MAPPED", 11, 11),
      SCM_STRING_CONST_INITIALIZER("AI_ALL", 6, 6),
      SCM_STRING_CONST_INITIALIZER("AI_ADDRCONFIG", 13, 13),
      SCM_STRING_CONST_INITIALIZER("IPV6_UNICAST_HOPS", 17, 17),
      SCM_STRING_CONST_INITIALIZER("IPV6_MULTICAST_IF", 17, 17),
      SCM_STRING_CONST_INITIALIZER("IPV6_MULTICAST_HOPS", 19, 19),
      SCM_STRING_CONST_INITIALIZER("IPV6_MULTICAST_LOOP", 19, 19),
      SCM_STRING_CONST_INITIALIZER("IPV6_JOIN_GROUP", 15, 15),
      SCM_STRING_CONST_INITIALIZER("IPV6_LEAVE_GROUP", 16, 16),
      SCM_STRING_CONST_INITIALIZER("IPV6_V6ONLY", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sys-getnameinfo", 15, 15),
      SCM_STRING_CONST_INITIALIZER("NI_NOFQDN", 9, 9),
      SCM_STRING_CONST_INITIALIZER("NI_NUMERICHOST", 14, 14),
      SCM_STRING_CONST_INITIALIZER("NI_NAMEREQD", 11, 11),
      SCM_STRING_CONST_INITIALIZER("NI_NUMERICSERV", 14, 14),
      SCM_STRING_CONST_INITIALIZER("NI_DGRAM", 8, 8),
      SCM_STRING_CONST_INITIALIZER("size", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<uint>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("DEFAULT_BACKLOG", 15, 15),
      SCM_STRING_CONST_INITIALIZER("ipv6-capable", 12, 12),
      SCM_STRING_CONST_INITIALIZER("module-binds\077", 13, 13),
      SCM_STRING_CONST_INITIALIZER("ipv4-preferred", 14, 14),
      SCM_STRING_CONST_INITIALIZER("undefined\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("list\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("logior", 6, 6),
      SCM_STRING_CONST_INITIALIZER("family", 6, 6),
      SCM_STRING_CONST_INITIALIZER("socktype", 8, 8),
      SCM_STRING_CONST_INITIALIZER("make", 4, 4),
      SCM_STRING_CONST_INITIALIZER("make-sys-addrinfo is available on IPv6-enabled platform", 55, 55),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("keyword list not even", 21, 21),
      SCM_STRING_CONST_INITIALIZER("unwrap-syntax-1", 15, 15),
      SCM_STRING_CONST_INITIALIZER("unknown keyword ~S", 18, 18),
      SCM_STRING_CONST_INITIALIZER("errorf", 6, 6),
      SCM_STRING_CONST_INITIALIZER("address->protocol-family", 24, 24),
      SCM_STRING_CONST_INITIALIZER("inet6", 5, 5),
      SCM_STRING_CONST_INITIALIZER("unknown family of socket address", 32, 32),
      SCM_STRING_CONST_INITIALIZER("unix socket requires pathname, but got", 38, 38),
      SCM_STRING_CONST_INITIALIZER("make-client-socket-unix", 23, 23),
      SCM_STRING_CONST_INITIALIZER("integer\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("inet socket requires host name and port, but got ~s and ~s", 58, 58),
      SCM_STRING_CONST_INITIALIZER("make-client-socket-inet", 23, 23),
      SCM_STRING_CONST_INITIALIZER("make-client-socket-from-addr", 28, 28),
      SCM_STRING_CONST_INITIALIZER("unsupported protocol:", 21, 21),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("path", 4, 4),
      SCM_STRING_CONST_INITIALIZER("try-connect", 11, 11),
      SCM_STRING_CONST_INITIALIZER("e", 1, 1),
      SCM_STRING_CONST_INITIALIZER("rewind-before", 13, 13),
      SCM_STRING_CONST_INITIALIZER("with-error-handler", 18, 18),
      SCM_STRING_CONST_INITIALIZER("address", 7, 7),
      SCM_STRING_CONST_INITIALIZER("any", 3, 3),
      SCM_STRING_CONST_INITIALIZER("raise", 5, 5),
      SCM_STRING_CONST_INITIALIZER("host", 4, 4),
      SCM_STRING_CONST_INITIALIZER("make-server-socket-unix", 23, 23),
      SCM_STRING_CONST_INITIALIZER("string\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("any-pred", 8, 8),
      SCM_STRING_CONST_INITIALIZER("every", 5, 5),
      SCM_STRING_CONST_INITIALIZER("inet socket requires integer port number or string service name, or a list of them, but got:", 92, 92),
      SCM_STRING_CONST_INITIALIZER("make-server-socket-inet*", 24, 24),
      SCM_STRING_CONST_INITIALIZER("make-server-socket-inet", 23, 23),
      SCM_STRING_CONST_INITIALIZER("make-server-socket-from-addr", 28, 28),
      SCM_STRING_CONST_INITIALIZER("procedure\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("reuse-addr\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("sock-init", 9, 9),
      SCM_STRING_CONST_INITIALIZER("G2447", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2446", 5, 5),
      SCM_STRING_CONST_INITIALIZER("try-bind", 8, 8),
      SCM_STRING_CONST_INITIALIZER("append-map", 10, 10),
      SCM_STRING_CONST_INITIALIZER("ports", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2454", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2453", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2452", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2451", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<system-error>", 14, 14),
      SCM_STRING_CONST_INITIALIZER("errno", 5, 5),
      SCM_STRING_CONST_INITIALIZER("~", 1, 1),
      SCM_STRING_CONST_INITIALIZER("bind-failed\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("EADDRINUSE", 10, 10),
      SCM_STRING_CONST_INITIALIZER("module-binding-ref", 18, 18),
      SCM_STRING_CONST_INITIALIZER("EADDRNOTAVAIL", 13, 13),
      SCM_STRING_CONST_INITIALIZER("filter", 6, 6),
      SCM_STRING_CONST_INITIALIZER("G2449", 5, 5),
      SCM_STRING_CONST_INITIALIZER("map", 3, 3),
      SCM_STRING_CONST_INITIALIZER("G2448", 5, 5),
      SCM_STRING_CONST_INITIALIZER("filter-map", 10, 10),
      SCM_STRING_CONST_INITIALIZER("G2450", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%reraise", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2463", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2458", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2462", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2461", 5, 5),
      SCM_STRING_CONST_INITIALIZER("tcp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("if", 2, 2),
      SCM_STRING_CONST_INITIALIZER("let*", 4, 4),
      SCM_STRING_CONST_INITIALIZER("case", 4, 4),
      SCM_STRING_CONST_INITIALIZER("udp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("else", 4, 4),
      SCM_STRING_CONST_INITIALIZER("x->string", 9, 9),
      SCM_STRING_CONST_INITIALIZER("hints", 5, 5),
      SCM_STRING_CONST_INITIALIZER("ss", 2, 2),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("slot-ref", 8, 8),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("append", 6, 6),
      SCM_STRING_CONST_INITIALIZER("^s", 2, 2),
      SCM_STRING_CONST_INITIALIZER("eq\077", 3, 3),
      SCM_STRING_CONST_INITIALIZER("remove", 6, 6),
      SCM_STRING_CONST_INITIALIZER("let1", 4, 4),
      SCM_STRING_CONST_INITIALIZER("cond", 4, 4),
      SCM_STRING_CONST_INITIALIZER("number\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("symbol->string", 14, 14),
      SCM_STRING_CONST_INITIALIZER("=>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("couldn't find a port number of service:", 39, 39),
      SCM_STRING_CONST_INITIALIZER("hh", 2, 2),
      SCM_STRING_CONST_INITIALIZER("unless", 6, 6),
      SCM_STRING_CONST_INITIALIZER("couldn't find host: ", 20, 20),
      SCM_STRING_CONST_INITIALIZER("addresses", 9, 9),
      SCM_STRING_CONST_INITIALIZER("list", 4, 4),
      SCM_STRING_CONST_INITIALIZER("G2460", 5, 5),
      SCM_STRING_CONST_INITIALIZER("%unwind-protect", 15, 15),
      SCM_STRING_CONST_INITIALIZER("input-buffering", 15, 15),
      SCM_STRING_CONST_INITIALIZER("output-buffering", 16, 16),
      SCM_STRING_CONST_INITIALIZER("socket", 6, 6),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("current-module", 14, 14),
      SCM_STRING_CONST_INITIALIZER("define-constant", 15, 15),
      SCM_STRING_CONST_INITIALIZER("cond-expand", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gauche.os.windows", 17, 17),
      SCM_STRING_CONST_INITIALIZER("loop2426", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args2425", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2427", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2428", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2429", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2430", 5, 5),
      SCM_STRING_CONST_INITIALIZER("tmp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("rest2424", 8, 8),
      SCM_STRING_CONST_INITIALIZER("pair\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("is-a\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2433", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2432", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2431", 5, 5),
      SCM_STRING_CONST_INITIALIZER("let-optionals*", 14, 14),
      SCM_STRING_CONST_INITIALIZER("rlet1", 5, 5),
      SCM_STRING_CONST_INITIALIZER("err", 3, 3),
      SCM_STRING_CONST_INITIALIZER("set!", 4, 4),
      SCM_STRING_CONST_INITIALIZER("guard", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2435", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2434", 5, 5),
      SCM_STRING_CONST_INITIALIZER("loop2438", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args2437", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2439", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2440", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2441", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2436", 8, 8),
      SCM_STRING_CONST_INITIALIZER("loop2444", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args2443", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2445", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2442", 8, 8),
      SCM_STRING_CONST_INITIALIZER("$", 1, 1),
      SCM_STRING_CONST_INITIALIZER("memv", 4, 4),
      SCM_STRING_CONST_INITIALIZER("quasiquote", 10, 10),
      SCM_STRING_CONST_INITIALIZER("unquote", 7, 7),
      SCM_STRING_CONST_INITIALIZER("s6", 2, 2),
      SCM_STRING_CONST_INITIALIZER("a4s", 3, 3),
      SCM_STRING_CONST_INITIALIZER("zero\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("v4addrs", 7, 7),
      SCM_STRING_CONST_INITIALIZER("try-v4", 6, 6),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("actual-port", 11, 11),
      SCM_STRING_CONST_INITIALIZER("make-v6socks", 12, 12),
      SCM_STRING_CONST_INITIALIZER("v6addrs", 7, 7),
      SCM_STRING_CONST_INITIALIZER("sockets", 7, 7),
      SCM_STRING_CONST_INITIALIZER("receive", 7, 7),
      SCM_STRING_CONST_INITIALIZER("try-v6", 6, 6),
      SCM_STRING_CONST_INITIALIZER("reverse", 7, 7),
      SCM_STRING_CONST_INITIALIZER("a6s", 3, 3),
      SCM_STRING_CONST_INITIALIZER("G2459", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2456", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2457", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2455", 8, 8),
      SCM_STRING_CONST_INITIALIZER("loop2466", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args2465", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2467", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2468", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2464", 8, 8),
      SCM_STRING_CONST_INITIALIZER("unwind-protect", 14, 14),
  },
};
static struct scm__rcRec {
#if defined(NI_DGRAM)
  ScmObj d2419[1];
#endif /*defined(NI_DGRAM)*/
#if defined(NI_NUMERICSERV)
  ScmObj d2417[1];
#endif /*defined(NI_NUMERICSERV)*/
#if defined(NI_NAMEREQD)
  ScmObj d2415[1];
#endif /*defined(NI_NAMEREQD)*/
#if defined(NI_NUMERICHOST)
  ScmObj d2413[1];
#endif /*defined(NI_NUMERICHOST)*/
#if defined(NI_NOFQDN)
  ScmObj d2411[1];
#endif /*defined(NI_NOFQDN)*/
#if defined(AI_ADDRCONFIG)
  ScmObj d2409[1];
#endif /*defined(AI_ADDRCONFIG)*/
#if defined(AI_ALL)
  ScmObj d2407[1];
#endif /*defined(AI_ALL)*/
#if defined(AI_V4MAPPED)
  ScmObj d2405[1];
#endif /*defined(AI_V4MAPPED)*/
#if defined(AI_NUMERICSERV)
  ScmObj d2403[1];
#endif /*defined(AI_NUMERICSERV)*/
#if defined(AI_NUMERICHOST)
  ScmObj d2401[1];
#endif /*defined(AI_NUMERICHOST)*/
#if defined(AI_CANONNAME)
  ScmObj d2399[1];
#endif /*defined(AI_CANONNAME)*/
#if defined(AI_PASSIVE)
  ScmObj d2397[1];
#endif /*defined(AI_PASSIVE)*/
#if defined(IPV6_V6ONLY)
  ScmObj d2395[1];
#endif /*defined(IPV6_V6ONLY)*/
#if defined(IPV6_LEAVE_GROUP)
  ScmObj d2393[1];
#endif /*defined(IPV6_LEAVE_GROUP)*/
#if defined(IPV6_JOIN_GROUP)
  ScmObj d2391[1];
#endif /*defined(IPV6_JOIN_GROUP)*/
#if defined(IPV6_MULTICAST_LOOP)
  ScmObj d2389[1];
#endif /*defined(IPV6_MULTICAST_LOOP)*/
#if defined(IPV6_MULTICAST_HOPS)
  ScmObj d2387[1];
#endif /*defined(IPV6_MULTICAST_HOPS)*/
#if defined(IPV6_MULTICAST_IF)
  ScmObj d2385[1];
#endif /*defined(IPV6_MULTICAST_IF)*/
#if defined(IPV6_UNICAST_HOPS)
  ScmObj d2383[1];
#endif /*defined(IPV6_UNICAST_HOPS)*/
#if defined(IPPROTO_IPV6)
  ScmObj d2381[1];
#endif /*defined(IPPROTO_IPV6)*/
#if defined(PF_INET6)
  ScmObj d2379[1];
#endif /*defined(PF_INET6)*/
#if defined(AF_INET6)
  ScmObj d2377[1];
#endif /*defined(AF_INET6)*/
#if defined(HAVE_IPV6)
  ScmPair d2376[23] SCM_ALIGN_PAIR;
#endif /*defined(HAVE_IPV6)*/
#if defined(IFF_DYNAMIC)
  ScmObj d2374[1];
#endif /*defined(IFF_DYNAMIC)*/
#if defined(IFF_AUTOMEDIA)
  ScmObj d2372[1];
#endif /*defined(IFF_AUTOMEDIA)*/
#if defined(IFF_PORTSEL)
  ScmObj d2370[1];
#endif /*defined(IFF_PORTSEL)*/
#if defined(IFF_MULTICAST)
  ScmObj d2368[1];
#endif /*defined(IFF_MULTICAST)*/
#if defined(IFF_SLAVE)
  ScmObj d2366[1];
#endif /*defined(IFF_SLAVE)*/
#if defined(IFF_MASTER)
  ScmObj d2364[1];
#endif /*defined(IFF_MASTER)*/
#if defined(IFF_ALLMULTI)
  ScmObj d2362[1];
#endif /*defined(IFF_ALLMULTI)*/
#if defined(IFF_NOTRAILERS)
  ScmObj d2360[1];
#endif /*defined(IFF_NOTRAILERS)*/
#if defined(IFF_PROMISC)
  ScmObj d2358[1];
#endif /*defined(IFF_PROMISC)*/
#if defined(IFF_NOARP)
  ScmObj d2356[1];
#endif /*defined(IFF_NOARP)*/
#if defined(IFF_RUNNING)
  ScmObj d2354[1];
#endif /*defined(IFF_RUNNING)*/
#if defined(IFF_POINTTOPOINT)
  ScmObj d2352[1];
#endif /*defined(IFF_POINTTOPOINT)*/
#if defined(IFF_LOOPBACK)
  ScmObj d2350[1];
#endif /*defined(IFF_LOOPBACK)*/
#if defined(IFF_DEBUG)
  ScmObj d2348[1];
#endif /*defined(IFF_DEBUG)*/
#if defined(IFF_BROADCAST)
  ScmObj d2346[1];
#endif /*defined(IFF_BROADCAST)*/
#if defined(IFF_UP)
  ScmObj d2344[1];
#endif /*defined(IFF_UP)*/
#if defined(SIOCGIFCONF)
  ScmObj d2342[1];
#endif /*defined(SIOCGIFCONF)*/
#if defined(SIOSIFTXQLEN)
  ScmObj d2340[1];
#endif /*defined(SIOSIFTXQLEN)*/
#if defined(SIOGIFTXQLEN)
  ScmObj d2338[1];
#endif /*defined(SIOGIFTXQLEN)*/
#if defined(SIOCDELMULTI)
  ScmObj d2336[1];
#endif /*defined(SIOCDELMULTI)*/
#if defined(SIOCADDMULTI)
  ScmObj d2334[1];
#endif /*defined(SIOCADDMULTI)*/
#if defined(SIOCSIFMAP)
  ScmObj d2332[1];
#endif /*defined(SIOCSIFMAP)*/
#if defined(SIOCGIFMAP)
  ScmObj d2330[1];
#endif /*defined(SIOCGIFMAP)*/
#if defined(SIOCSIFHWBROADCAST)
  ScmObj d2328[1];
#endif /*defined(SIOCSIFHWBROADCAST)*/
#if defined(SIOCSIFHWADDR)
  ScmObj d2326[1];
#endif /*defined(SIOCSIFHWADDR)*/
#if defined(SIOCGIFHWADDR)
  ScmObj d2324[1];
#endif /*defined(SIOCGIFHWADDR)*/
#if defined(SIOCSIFMTU)
  ScmObj d2322[1];
#endif /*defined(SIOCSIFMTU)*/
#if defined(SIOCGIFMTU)
  ScmObj d2320[1];
#endif /*defined(SIOCGIFMTU)*/
#if defined(SIOCSIFMETRIC)
  ScmObj d2318[1];
#endif /*defined(SIOCSIFMETRIC)*/
#if defined(SIOCGIFMETRIC)
  ScmObj d2316[1];
#endif /*defined(SIOCGIFMETRIC)*/
#if defined(SIOCSIFFLAGS)
  ScmObj d2314[1];
#endif /*defined(SIOCSIFFLAGS)*/
#if defined(SIOCGIFFLAGS)
  ScmObj d2312[1];
#endif /*defined(SIOCGIFFLAGS)*/
#if defined(SIOCSIFNETMASK)
  ScmObj d2310[1];
#endif /*defined(SIOCSIFNETMASK)*/
#if defined(SIOCGIFNETMASK)
  ScmObj d2308[1];
#endif /*defined(SIOCGIFNETMASK)*/
#if defined(SIOCSIFBRDADDR)
  ScmObj d2306[1];
#endif /*defined(SIOCSIFBRDADDR)*/
#if defined(SIOCGIFBRDADDR)
  ScmObj d2304[1];
#endif /*defined(SIOCGIFBRDADDR)*/
#if defined(SIOCSIFDSTADDR)
  ScmObj d2302[1];
#endif /*defined(SIOCSIFDSTADDR)*/
#if defined(SIOCGIFDSTADDR)
  ScmObj d2300[1];
#endif /*defined(SIOCGIFDSTADDR)*/
#if defined(SIOCSIFADDR)
  ScmObj d2298[1];
#endif /*defined(SIOCSIFADDR)*/
#if defined(SIOCGIFADDR)
  ScmObj d2296[1];
#endif /*defined(SIOCGIFADDR)*/
#if defined(SIOCGIFINDEX)
  ScmObj d2294[1];
#endif /*defined(SIOCGIFINDEX)*/
#if defined(SIOCSIFNAME)
  ScmObj d2292[1];
#endif /*defined(SIOCSIFNAME)*/
#if defined(SIOCGIFNAME)
  ScmObj d2290[1];
#endif /*defined(SIOCGIFNAME)*/
#if defined(IP_MULTICAST_IF)
  ScmObj d2288[1];
#endif /*defined(IP_MULTICAST_IF)*/
#if defined(IP_DROP_MEMBERSHIP)
  ScmObj d2286[1];
#endif /*defined(IP_DROP_MEMBERSHIP)*/
#if defined(IP_ADD_MEMBERSHIP)
  ScmObj d2284[1];
#endif /*defined(IP_ADD_MEMBERSHIP)*/
#if defined(IP_MULTICAST_LOOP)
  ScmObj d2282[1];
#endif /*defined(IP_MULTICAST_LOOP)*/
#if defined(IP_MULTICAST_TTL)
  ScmObj d2280[1];
#endif /*defined(IP_MULTICAST_TTL)*/
#if defined(IP_ROUTER_ALERT)
  ScmObj d2278[1];
#endif /*defined(IP_ROUTER_ALERT)*/
#if defined(IP_MTU)
  ScmObj d2276[1];
#endif /*defined(IP_MTU)*/
#if defined(IP_MTU_DISCOVER)
  ScmObj d2274[1];
#endif /*defined(IP_MTU_DISCOVER)*/
#if defined(IP_RECVERR)
  ScmObj d2272[1];
#endif /*defined(IP_RECVERR)*/
#if defined(IP_HDRINCL)
  ScmObj d2270[1];
#endif /*defined(IP_HDRINCL)*/
#if defined(IP_TTL)
  ScmObj d2268[1];
#endif /*defined(IP_TTL)*/
#if defined(IP_TOS)
  ScmObj d2266[1];
#endif /*defined(IP_TOS)*/
#if defined(IP_RECVOPTS)
  ScmObj d2264[1];
#endif /*defined(IP_RECVOPTS)*/
#if defined(IP_RECVTTL)
  ScmObj d2262[1];
#endif /*defined(IP_RECVTTL)*/
#if defined(IP_RECVTOS)
  ScmObj d2260[1];
#endif /*defined(IP_RECVTOS)*/
#if defined(IP_PKTINFO)
  ScmObj d2258[1];
#endif /*defined(IP_PKTINFO)*/
#if defined(IP_OPTIONS)
  ScmObj d2256[1];
#endif /*defined(IP_OPTIONS)*/
#if defined(SOL_IP)
  ScmObj d2254[1];
#endif /*defined(SOL_IP)*/
#if defined(TCP_CORK)
  ScmObj d2252[1];
#endif /*defined(TCP_CORK)*/
#if defined(TCP_MAXSEG)
  ScmObj d2250[1];
#endif /*defined(TCP_MAXSEG)*/
#if defined(TCP_NODELAY)
  ScmObj d2248[1];
#endif /*defined(TCP_NODELAY)*/
#if defined(SOL_TCP)
  ScmObj d2246[1];
#endif /*defined(SOL_TCP)*/
#if defined(SO_TYPE)
  ScmObj d2244[1];
#endif /*defined(SO_TYPE)*/
#if defined(SO_TIMESTAMP)
  ScmObj d2242[1];
#endif /*defined(SO_TIMESTAMP)*/
#if defined(SO_SNDTIMEO)
  ScmObj d2240[1];
#endif /*defined(SO_SNDTIMEO)*/
#if defined(SO_SNDLOWAT)
  ScmObj d2238[1];
#endif /*defined(SO_SNDLOWAT)*/
#if defined(SO_SNDBUF)
  ScmObj d2236[1];
#endif /*defined(SO_SNDBUF)*/
#if defined(SO_REUSEPORT)
  ScmObj d2234[1];
#endif /*defined(SO_REUSEPORT)*/
#if defined(SO_REUSEADDR)
  ScmObj d2232[1];
#endif /*defined(SO_REUSEADDR)*/
#if defined(SO_RCVTIMEO)
  ScmObj d2230[1];
#endif /*defined(SO_RCVTIMEO)*/
#if defined(SO_RCVLOWAT)
  ScmObj d2228[1];
#endif /*defined(SO_RCVLOWAT)*/
#if defined(SO_RCVBUF)
  ScmObj d2226[1];
#endif /*defined(SO_RCVBUF)*/
#if defined(SO_PRIORITY)
  ScmObj d2224[1];
#endif /*defined(SO_PRIORITY)*/
#if defined(SO_PEERCRED)
  ScmObj d2222[1];
#endif /*defined(SO_PEERCRED)*/
#if defined(SO_PASSCRED)
  ScmObj d2220[1];
#endif /*defined(SO_PASSCRED)*/
#if defined(SO_OOBINLINE)
  ScmObj d2218[1];
#endif /*defined(SO_OOBINLINE)*/
#if defined(SO_LINGER)
  ScmObj d2216[1];
#endif /*defined(SO_LINGER)*/
#if defined(SO_KEEPALIVE)
  ScmObj d2214[1];
#endif /*defined(SO_KEEPALIVE)*/
#if defined(SO_ERROR)
  ScmObj d2212[1];
#endif /*defined(SO_ERROR)*/
#if defined(SO_DONTROUTE)
  ScmObj d2210[1];
#endif /*defined(SO_DONTROUTE)*/
#if defined(SO_DEBUG)
  ScmObj d2208[1];
#endif /*defined(SO_DEBUG)*/
#if defined(SO_BROADCAST)
  ScmObj d2206[1];
#endif /*defined(SO_BROADCAST)*/
#if defined(SO_BINDTODEVICE)
  ScmObj d2204[1];
#endif /*defined(SO_BINDTODEVICE)*/
#if defined(SO_ACCEPTCONN)
  ScmObj d2202[1];
#endif /*defined(SO_ACCEPTCONN)*/
#if defined(SOL_SOCKET)
  ScmObj d2200[1];
#endif /*defined(SOL_SOCKET)*/
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  ScmObj d2198[3];
#endif /*!((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))*/
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  ScmObj d2196[3];
#endif /*(defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))*/
#if defined(SOMAXCONN)
  ScmObj d2194[1];
#endif /*defined(SOMAXCONN)*/
#if defined(IPPROTO_UDP)
  ScmObj d2192[1];
#endif /*defined(IPPROTO_UDP)*/
#if defined(IPPROTO_TCP)
  ScmObj d2190[1];
#endif /*defined(IPPROTO_TCP)*/
#if defined(IPPROTO_ICMPV6)
  ScmObj d2188[1];
#endif /*defined(IPPROTO_ICMPV6)*/
#if defined(IPPROTO_ICMP)
  ScmObj d2186[1];
#endif /*defined(IPPROTO_ICMP)*/
#if defined(IPPROTO_IP)
  ScmObj d2184[1];
#endif /*defined(IPPROTO_IP)*/
#if defined(MSG_WAITALL)
  ScmObj d2182[1];
#endif /*defined(MSG_WAITALL)*/
#if defined(MSG_TRUNC)
  ScmObj d2180[1];
#endif /*defined(MSG_TRUNC)*/
#if defined(MSG_PEEK)
  ScmObj d2178[1];
#endif /*defined(MSG_PEEK)*/
#if defined(MSG_OOB)
  ScmObj d2176[1];
#endif /*defined(MSG_OOB)*/
#if defined(MSG_EOR)
  ScmObj d2174[1];
#endif /*defined(MSG_EOR)*/
#if defined(MSG_DONTROUTE)
  ScmObj d2172[1];
#endif /*defined(MSG_DONTROUTE)*/
#if defined(MSG_CTRUNC)
  ScmObj d2170[1];
#endif /*defined(MSG_CTRUNC)*/
#if defined(HAVE_IPV6)
  ScmObj d2164[36];
#endif /*defined(HAVE_IPV6)*/
  ScmUVector d2154[52];
  ScmCompiledCode d2153[57];
  ScmWord d2152[1903];
  ScmPair d2151[829] SCM_ALIGN_PAIR;
  ScmObj d2149[1105];
} scm__rc SCM_UNUSED = {
#if defined(NI_DGRAM)
  {   /* ScmObj d2419 */
    SCM_UNBOUND,
  },
#endif /*defined(NI_DGRAM)*/
#if defined(NI_NUMERICSERV)
  {   /* ScmObj d2417 */
    SCM_UNBOUND,
  },
#endif /*defined(NI_NUMERICSERV)*/
#if defined(NI_NAMEREQD)
  {   /* ScmObj d2415 */
    SCM_UNBOUND,
  },
#endif /*defined(NI_NAMEREQD)*/
#if defined(NI_NUMERICHOST)
  {   /* ScmObj d2413 */
    SCM_UNBOUND,
  },
#endif /*defined(NI_NUMERICHOST)*/
#if defined(NI_NOFQDN)
  {   /* ScmObj d2411 */
    SCM_UNBOUND,
  },
#endif /*defined(NI_NOFQDN)*/
#if defined(AI_ADDRCONFIG)
  {   /* ScmObj d2409 */
    SCM_UNBOUND,
  },
#endif /*defined(AI_ADDRCONFIG)*/
#if defined(AI_ALL)
  {   /* ScmObj d2407 */
    SCM_UNBOUND,
  },
#endif /*defined(AI_ALL)*/
#if defined(AI_V4MAPPED)
  {   /* ScmObj d2405 */
    SCM_UNBOUND,
  },
#endif /*defined(AI_V4MAPPED)*/
#if defined(AI_NUMERICSERV)
  {   /* ScmObj d2403 */
    SCM_UNBOUND,
  },
#endif /*defined(AI_NUMERICSERV)*/
#if defined(AI_NUMERICHOST)
  {   /* ScmObj d2401 */
    SCM_UNBOUND,
  },
#endif /*defined(AI_NUMERICHOST)*/
#if defined(AI_CANONNAME)
  {   /* ScmObj d2399 */
    SCM_UNBOUND,
  },
#endif /*defined(AI_CANONNAME)*/
#if defined(AI_PASSIVE)
  {   /* ScmObj d2397 */
    SCM_UNBOUND,
  },
#endif /*defined(AI_PASSIVE)*/
#if defined(IPV6_V6ONLY)
  {   /* ScmObj d2395 */
    SCM_UNBOUND,
  },
#endif /*defined(IPV6_V6ONLY)*/
#if defined(IPV6_LEAVE_GROUP)
  {   /* ScmObj d2393 */
    SCM_UNBOUND,
  },
#endif /*defined(IPV6_LEAVE_GROUP)*/
#if defined(IPV6_JOIN_GROUP)
  {   /* ScmObj d2391 */
    SCM_UNBOUND,
  },
#endif /*defined(IPV6_JOIN_GROUP)*/
#if defined(IPV6_MULTICAST_LOOP)
  {   /* ScmObj d2389 */
    SCM_UNBOUND,
  },
#endif /*defined(IPV6_MULTICAST_LOOP)*/
#if defined(IPV6_MULTICAST_HOPS)
  {   /* ScmObj d2387 */
    SCM_UNBOUND,
  },
#endif /*defined(IPV6_MULTICAST_HOPS)*/
#if defined(IPV6_MULTICAST_IF)
  {   /* ScmObj d2385 */
    SCM_UNBOUND,
  },
#endif /*defined(IPV6_MULTICAST_IF)*/
#if defined(IPV6_UNICAST_HOPS)
  {   /* ScmObj d2383 */
    SCM_UNBOUND,
  },
#endif /*defined(IPV6_UNICAST_HOPS)*/
#if defined(IPPROTO_IPV6)
  {   /* ScmObj d2381 */
    SCM_UNBOUND,
  },
#endif /*defined(IPPROTO_IPV6)*/
#if defined(PF_INET6)
  {   /* ScmObj d2379 */
    SCM_UNBOUND,
  },
#endif /*defined(PF_INET6)*/
#if defined(AF_INET6)
  {   /* ScmObj d2377 */
    SCM_UNBOUND,
  },
#endif /*defined(AF_INET6)*/
#if defined(HAVE_IPV6)
  {   /* ScmPair d2376 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[2])},
       { SCM_MAKE_INT(487U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2165[6]), SCM_OBJ(&scm__rc.d2376[4])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[5])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[7])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[8])},
       { SCM_OBJ(&scm__rc.d2376[9]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2376[6]), SCM_OBJ(&scm__rc.d2376[10])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[12])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[13])},
       { SCM_MAKE_INT(502U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2165[6]), SCM_OBJ(&scm__rc.d2376[15])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[16])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2376[19])},
       { SCM_OBJ(&scm__rc.d2376[20]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2376[17]), SCM_OBJ(&scm__rc.d2376[21])},
  },
#endif /*defined(HAVE_IPV6)*/
#if defined(IFF_DYNAMIC)
  {   /* ScmObj d2374 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_DYNAMIC)*/
#if defined(IFF_AUTOMEDIA)
  {   /* ScmObj d2372 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_AUTOMEDIA)*/
#if defined(IFF_PORTSEL)
  {   /* ScmObj d2370 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_PORTSEL)*/
#if defined(IFF_MULTICAST)
  {   /* ScmObj d2368 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_MULTICAST)*/
#if defined(IFF_SLAVE)
  {   /* ScmObj d2366 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_SLAVE)*/
#if defined(IFF_MASTER)
  {   /* ScmObj d2364 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_MASTER)*/
#if defined(IFF_ALLMULTI)
  {   /* ScmObj d2362 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_ALLMULTI)*/
#if defined(IFF_NOTRAILERS)
  {   /* ScmObj d2360 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_NOTRAILERS)*/
#if defined(IFF_PROMISC)
  {   /* ScmObj d2358 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_PROMISC)*/
#if defined(IFF_NOARP)
  {   /* ScmObj d2356 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_NOARP)*/
#if defined(IFF_RUNNING)
  {   /* ScmObj d2354 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_RUNNING)*/
#if defined(IFF_POINTTOPOINT)
  {   /* ScmObj d2352 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_POINTTOPOINT)*/
#if defined(IFF_LOOPBACK)
  {   /* ScmObj d2350 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_LOOPBACK)*/
#if defined(IFF_DEBUG)
  {   /* ScmObj d2348 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_DEBUG)*/
#if defined(IFF_BROADCAST)
  {   /* ScmObj d2346 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_BROADCAST)*/
#if defined(IFF_UP)
  {   /* ScmObj d2344 */
    SCM_UNBOUND,
  },
#endif /*defined(IFF_UP)*/
#if defined(SIOCGIFCONF)
  {   /* ScmObj d2342 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFCONF)*/
#if defined(SIOSIFTXQLEN)
  {   /* ScmObj d2340 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOSIFTXQLEN)*/
#if defined(SIOGIFTXQLEN)
  {   /* ScmObj d2338 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOGIFTXQLEN)*/
#if defined(SIOCDELMULTI)
  {   /* ScmObj d2336 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCDELMULTI)*/
#if defined(SIOCADDMULTI)
  {   /* ScmObj d2334 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCADDMULTI)*/
#if defined(SIOCSIFMAP)
  {   /* ScmObj d2332 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFMAP)*/
#if defined(SIOCGIFMAP)
  {   /* ScmObj d2330 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFMAP)*/
#if defined(SIOCSIFHWBROADCAST)
  {   /* ScmObj d2328 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFHWBROADCAST)*/
#if defined(SIOCSIFHWADDR)
  {   /* ScmObj d2326 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFHWADDR)*/
#if defined(SIOCGIFHWADDR)
  {   /* ScmObj d2324 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFHWADDR)*/
#if defined(SIOCSIFMTU)
  {   /* ScmObj d2322 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFMTU)*/
#if defined(SIOCGIFMTU)
  {   /* ScmObj d2320 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFMTU)*/
#if defined(SIOCSIFMETRIC)
  {   /* ScmObj d2318 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFMETRIC)*/
#if defined(SIOCGIFMETRIC)
  {   /* ScmObj d2316 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFMETRIC)*/
#if defined(SIOCSIFFLAGS)
  {   /* ScmObj d2314 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFFLAGS)*/
#if defined(SIOCGIFFLAGS)
  {   /* ScmObj d2312 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFFLAGS)*/
#if defined(SIOCSIFNETMASK)
  {   /* ScmObj d2310 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFNETMASK)*/
#if defined(SIOCGIFNETMASK)
  {   /* ScmObj d2308 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFNETMASK)*/
#if defined(SIOCSIFBRDADDR)
  {   /* ScmObj d2306 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFBRDADDR)*/
#if defined(SIOCGIFBRDADDR)
  {   /* ScmObj d2304 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFBRDADDR)*/
#if defined(SIOCSIFDSTADDR)
  {   /* ScmObj d2302 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFDSTADDR)*/
#if defined(SIOCGIFDSTADDR)
  {   /* ScmObj d2300 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFDSTADDR)*/
#if defined(SIOCSIFADDR)
  {   /* ScmObj d2298 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFADDR)*/
#if defined(SIOCGIFADDR)
  {   /* ScmObj d2296 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFADDR)*/
#if defined(SIOCGIFINDEX)
  {   /* ScmObj d2294 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFINDEX)*/
#if defined(SIOCSIFNAME)
  {   /* ScmObj d2292 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCSIFNAME)*/
#if defined(SIOCGIFNAME)
  {   /* ScmObj d2290 */
    SCM_UNBOUND,
  },
#endif /*defined(SIOCGIFNAME)*/
#if defined(IP_MULTICAST_IF)
  {   /* ScmObj d2288 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_MULTICAST_IF)*/
#if defined(IP_DROP_MEMBERSHIP)
  {   /* ScmObj d2286 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_DROP_MEMBERSHIP)*/
#if defined(IP_ADD_MEMBERSHIP)
  {   /* ScmObj d2284 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_ADD_MEMBERSHIP)*/
#if defined(IP_MULTICAST_LOOP)
  {   /* ScmObj d2282 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_MULTICAST_LOOP)*/
#if defined(IP_MULTICAST_TTL)
  {   /* ScmObj d2280 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_MULTICAST_TTL)*/
#if defined(IP_ROUTER_ALERT)
  {   /* ScmObj d2278 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_ROUTER_ALERT)*/
#if defined(IP_MTU)
  {   /* ScmObj d2276 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_MTU)*/
#if defined(IP_MTU_DISCOVER)
  {   /* ScmObj d2274 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_MTU_DISCOVER)*/
#if defined(IP_RECVERR)
  {   /* ScmObj d2272 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_RECVERR)*/
#if defined(IP_HDRINCL)
  {   /* ScmObj d2270 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_HDRINCL)*/
#if defined(IP_TTL)
  {   /* ScmObj d2268 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_TTL)*/
#if defined(IP_TOS)
  {   /* ScmObj d2266 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_TOS)*/
#if defined(IP_RECVOPTS)
  {   /* ScmObj d2264 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_RECVOPTS)*/
#if defined(IP_RECVTTL)
  {   /* ScmObj d2262 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_RECVTTL)*/
#if defined(IP_RECVTOS)
  {   /* ScmObj d2260 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_RECVTOS)*/
#if defined(IP_PKTINFO)
  {   /* ScmObj d2258 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_PKTINFO)*/
#if defined(IP_OPTIONS)
  {   /* ScmObj d2256 */
    SCM_UNBOUND,
  },
#endif /*defined(IP_OPTIONS)*/
#if defined(SOL_IP)
  {   /* ScmObj d2254 */
    SCM_UNBOUND,
  },
#endif /*defined(SOL_IP)*/
#if defined(TCP_CORK)
  {   /* ScmObj d2252 */
    SCM_UNBOUND,
  },
#endif /*defined(TCP_CORK)*/
#if defined(TCP_MAXSEG)
  {   /* ScmObj d2250 */
    SCM_UNBOUND,
  },
#endif /*defined(TCP_MAXSEG)*/
#if defined(TCP_NODELAY)
  {   /* ScmObj d2248 */
    SCM_UNBOUND,
  },
#endif /*defined(TCP_NODELAY)*/
#if defined(SOL_TCP)
  {   /* ScmObj d2246 */
    SCM_UNBOUND,
  },
#endif /*defined(SOL_TCP)*/
#if defined(SO_TYPE)
  {   /* ScmObj d2244 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_TYPE)*/
#if defined(SO_TIMESTAMP)
  {   /* ScmObj d2242 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_TIMESTAMP)*/
#if defined(SO_SNDTIMEO)
  {   /* ScmObj d2240 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_SNDTIMEO)*/
#if defined(SO_SNDLOWAT)
  {   /* ScmObj d2238 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_SNDLOWAT)*/
#if defined(SO_SNDBUF)
  {   /* ScmObj d2236 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_SNDBUF)*/
#if defined(SO_REUSEPORT)
  {   /* ScmObj d2234 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_REUSEPORT)*/
#if defined(SO_REUSEADDR)
  {   /* ScmObj d2232 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_REUSEADDR)*/
#if defined(SO_RCVTIMEO)
  {   /* ScmObj d2230 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_RCVTIMEO)*/
#if defined(SO_RCVLOWAT)
  {   /* ScmObj d2228 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_RCVLOWAT)*/
#if defined(SO_RCVBUF)
  {   /* ScmObj d2226 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_RCVBUF)*/
#if defined(SO_PRIORITY)
  {   /* ScmObj d2224 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_PRIORITY)*/
#if defined(SO_PEERCRED)
  {   /* ScmObj d2222 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_PEERCRED)*/
#if defined(SO_PASSCRED)
  {   /* ScmObj d2220 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_PASSCRED)*/
#if defined(SO_OOBINLINE)
  {   /* ScmObj d2218 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_OOBINLINE)*/
#if defined(SO_LINGER)
  {   /* ScmObj d2216 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_LINGER)*/
#if defined(SO_KEEPALIVE)
  {   /* ScmObj d2214 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_KEEPALIVE)*/
#if defined(SO_ERROR)
  {   /* ScmObj d2212 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_ERROR)*/
#if defined(SO_DONTROUTE)
  {   /* ScmObj d2210 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_DONTROUTE)*/
#if defined(SO_DEBUG)
  {   /* ScmObj d2208 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_DEBUG)*/
#if defined(SO_BROADCAST)
  {   /* ScmObj d2206 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_BROADCAST)*/
#if defined(SO_BINDTODEVICE)
  {   /* ScmObj d2204 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_BINDTODEVICE)*/
#if defined(SO_ACCEPTCONN)
  {   /* ScmObj d2202 */
    SCM_UNBOUND,
  },
#endif /*defined(SO_ACCEPTCONN)*/
#if defined(SOL_SOCKET)
  {   /* ScmObj d2200 */
    SCM_UNBOUND,
  },
#endif /*defined(SOL_SOCKET)*/
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  {   /* ScmObj d2198 */
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
  },
#endif /*!((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))*/
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  {   /* ScmObj d2196 */
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
  },
#endif /*(defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))*/
#if defined(SOMAXCONN)
  {   /* ScmObj d2194 */
    SCM_UNBOUND,
  },
#endif /*defined(SOMAXCONN)*/
#if defined(IPPROTO_UDP)
  {   /* ScmObj d2192 */
    SCM_UNBOUND,
  },
#endif /*defined(IPPROTO_UDP)*/
#if defined(IPPROTO_TCP)
  {   /* ScmObj d2190 */
    SCM_UNBOUND,
  },
#endif /*defined(IPPROTO_TCP)*/
#if defined(IPPROTO_ICMPV6)
  {   /* ScmObj d2188 */
    SCM_UNBOUND,
  },
#endif /*defined(IPPROTO_ICMPV6)*/
#if defined(IPPROTO_ICMP)
  {   /* ScmObj d2186 */
    SCM_UNBOUND,
  },
#endif /*defined(IPPROTO_ICMP)*/
#if defined(IPPROTO_IP)
  {   /* ScmObj d2184 */
    SCM_UNBOUND,
  },
#endif /*defined(IPPROTO_IP)*/
#if defined(MSG_WAITALL)
  {   /* ScmObj d2182 */
    SCM_UNBOUND,
  },
#endif /*defined(MSG_WAITALL)*/
#if defined(MSG_TRUNC)
  {   /* ScmObj d2180 */
    SCM_UNBOUND,
  },
#endif /*defined(MSG_TRUNC)*/
#if defined(MSG_PEEK)
  {   /* ScmObj d2178 */
    SCM_UNBOUND,
  },
#endif /*defined(MSG_PEEK)*/
#if defined(MSG_OOB)
  {   /* ScmObj d2176 */
    SCM_UNBOUND,
  },
#endif /*defined(MSG_OOB)*/
#if defined(MSG_EOR)
  {   /* ScmObj d2174 */
    SCM_UNBOUND,
  },
#endif /*defined(MSG_EOR)*/
#if defined(MSG_DONTROUTE)
  {   /* ScmObj d2172 */
    SCM_UNBOUND,
  },
#endif /*defined(MSG_DONTROUTE)*/
#if defined(MSG_CTRUNC)
  {   /* ScmObj d2170 */
    SCM_UNBOUND,
  },
#endif /*defined(MSG_CTRUNC)*/
#if defined(HAVE_IPV6)
  {   /* ScmObj d2164 */
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(6, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
  },
#endif /*defined(HAVE_IPV6)*/
  {   /* ScmUVector d2154 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 41, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 39, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 33, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 775, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 79, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 114, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 60, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 532, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 143, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 98, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 106, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 54, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 28, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 96, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 66, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 168, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 90, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 585, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 163, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 730, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 86, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 374, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 63, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 59, uvector__00026, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 49, uvector__00027, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 26, uvector__00028, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00029, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 57, uvector__00030, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 177, uvector__00031, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 93, uvector__00032, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00033, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00034, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 89, uvector__00035, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 38, uvector__00036, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 75, uvector__00037, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 38, uvector__00038, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 67, uvector__00039, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 263, uvector__00040, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 71, uvector__00041, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 128, uvector__00042, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 815, uvector__00043, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 443, uvector__00044, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 29, uvector__00045, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 44, uvector__00046, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 855, uvector__00047, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 248, uvector__00048, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 156, uvector__00049, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 22, uvector__00050, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 448, uvector__00051, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 90, uvector__00052, 0, NULL),
  },
  {   /* ScmCompiledCode d2153 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[0])), 14,
            12, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[14])), 14,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[28])), 19,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[47])), 13,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-sys-addrinfo */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[60])), 194,
            45, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[462]),
            SCM_OBJ(&scm__rc.d2153[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[254])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* address->protocol-family */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[269])), 33,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[467]),
            SCM_OBJ(&scm__rc.d2153[7]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[302])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-client-socket */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[317])), 135,
            22, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[473]),
            SCM_OBJ(&scm__rc.d2153[9]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[452])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-client-socket-from-addr */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[467])), 19,
            19, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[478]),
            SCM_OBJ(&scm__rc.d2153[11]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[486])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-client-socket-unix */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[501])), 24,
            24, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[484]),
            SCM_OBJ(&scm__rc.d2153[13]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[525])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[540])), 3,
            0, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[490]),
            SCM_OBJ(&scm__rc.d2153[16]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[543])), 19,
            19, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[492]),
            SCM_OBJ(&scm__rc.d2153[16]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* try-connect */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[562])), 13,
            7, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[497]),
            SCM_OBJ(&scm__rc.d2153[17]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-client-socket-inet */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[575])), 28,
            27, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[505]),
            SCM_OBJ(&scm__rc.d2153[18]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[603])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-server-socket */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[618])), 135,
            24, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[510]),
            SCM_OBJ(&scm__rc.d2153[20]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[753])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-server-socket-from-addr */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[768])), 172,
            45, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[524]),
            SCM_OBJ(&scm__rc.d2153[22]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[940])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-server-socket-unix */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[955])), 88,
            40, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[531]),
            SCM_OBJ(&scm__rc.d2153[24]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1043])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-server-socket-inet */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1058])), 12,
            14, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[537]),
            SCM_OBJ(&scm__rc.d2153[26]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1070])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (make-server-socket-inet* #:G2447) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1085])), 5,
            5, 1, 0, SCM_OBJ(&scm__rc.d2151[539]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[545]),
            SCM_OBJ(&scm__rc.d2153[32]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1090])), 3,
            0, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[550]),
            SCM_OBJ(&scm__rc.d2153[30]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1093])), 6,
            3, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[552]),
            SCM_OBJ(&scm__rc.d2153[30]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* try-bind */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1099])), 13,
            7, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[556]),
            SCM_OBJ(&scm__rc.d2153[31]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-server-socket-inet* */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1112])), 28,
            27, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[563]),
            SCM_OBJ(&scm__rc.d2153[32]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1140])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (make-server-sockets #:G2454) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1157])), 10,
            11, 1, 0, SCM_OBJ(&scm__rc.d2151[565]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[570]),
            SCM_OBJ(&scm__rc.d2153[46]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (make-server-sockets #:G2453) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1167])), 10,
            11, 1, 0, SCM_OBJ(&scm__rc.d2151[572]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[577]),
            SCM_OBJ(&scm__rc.d2153[46]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (make-server-sockets #:G2452) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1177])), 10,
            11, 1, 0, SCM_OBJ(&scm__rc.d2151[579]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[580]),
            SCM_OBJ(&scm__rc.d2153[46]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (make-server-sockets #:G2451) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1187])), 10,
            11, 1, 0, SCM_OBJ(&scm__rc.d2151[582]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[583]),
            SCM_OBJ(&scm__rc.d2153[46]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* bind-failed? */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1197])), 19,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[591]),
            SCM_OBJ(&scm__rc.d2153[45]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1216])), 6,
            3, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[602]),
            SCM_OBJ(&scm__rc.d2153[45]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1222])), 14,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[606]),
            SCM_OBJ(&scm__rc.d2153[42]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1236])), 6,
            3, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[614]),
            SCM_OBJ(&scm__rc.d2153[41]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1242])), 11,
            13, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[616]),
            SCM_OBJ(&scm__rc.d2153[42]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1253])), 47,
            25, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[622]),
            SCM_OBJ(&scm__rc.d2153[45]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1300])), 13,
            11, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[624]),
            SCM_OBJ(&scm__rc.d2153[45]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1313])), 25,
            23, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[626]),
            SCM_OBJ(&scm__rc.d2153[45]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-server-sockets */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1338])), 149,
            53, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[632]),
            SCM_OBJ(&scm__rc.d2153[46]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1487])), 17,
            17, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (make-sockaddrs #:G2463) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1504])), 4,
            0, 1, 0, SCM_OBJ(&scm__rc.d2151[634]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[640]),
            SCM_OBJ(&scm__rc.d2153[52]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (make-sockaddrs #:G2462) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1508])), 10,
            11, 1, 0, SCM_OBJ(&scm__rc.d2151[642]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[647]),
            SCM_OBJ(&scm__rc.d2153[52]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (make-sockaddrs #:G2461) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1518])), 10,
            11, 1, 0, SCM_OBJ(&scm__rc.d2151[649]), SCM_NIL, SCM_OBJ(&scm__rc.d2151[654]),
            SCM_OBJ(&scm__rc.d2153[52]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1528])), 11,
            8, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[806]),
            SCM_OBJ(&scm__rc.d2153[51]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-sockaddrs */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1539])), 188,
            37, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[811]),
            SCM_OBJ(&scm__rc.d2153[52]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1727])), 17,
            16, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1744])), 41,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[814]),
            SCM_OBJ(&scm__rc.d2153[55]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1785])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[814]),
            SCM_OBJ(&scm__rc.d2153[55]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-with-client-socket */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1789])), 99,
            29, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[828]),
            SCM_OBJ(&scm__rc.d2153[56]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[1888])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2152 */
    /* %toplevel */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[0]) + 6),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.net */,
    0x0000105f    /*   4 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* find-module */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000006    /*   7 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[76])) /* "gauche/netutil" */,
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[7])) /* (connection-self-address connection-peer-address connection-input-port connection-output-port connection-shutdown connection-close connection-address-name) */,
    0x00003060    /*  11 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %autoload */,
    0x00000014    /*  13 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[14]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* DEFAULT_BACKLOG */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[14]) + 11),
    0x00005002    /*   9 (CONSTI 5) */,
    0x00000014    /*  10 (RET) */,
    0x00002015    /*  11 (DEFINE 2) */,
    SCM_WORD(SCM_UNDEFINED) /* DEFAULT_BACKLOG */,
    0x00000014    /*  13 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[28]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* ipv6-capable */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[28]) + 16),
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.net */,
    0x00000006    /*  11 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getaddrinfo */,
    0x00002060    /*  13 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binds? */,
    0x00000014    /*  15 (RET) */,
    0x00000015    /*  16 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* ipv6-capable */,
    0x00000014    /*  18 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[47]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* ipv4-preferred */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[47]) + 10),
    0x0000000b    /*   9 (CONSTF-RET) */,
    0x00000015    /*  10 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* ipv4-preferred */,
    0x00000014    /*  12 (RET) */,
    /* make-sys-addrinfo */
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
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 103),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 17),
    0x0000004b    /*  14 (LREF3-PUSH) */,
    0x0000105f    /*  15 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  17 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 22),
    0x00000002    /*  19 (CONSTI 0) */,
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 23),
    0x00000040    /*  22 (LREF3) */,
    0x00001018    /*  23 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  24 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 29),
    0x0000004e    /*  26 (LREF12-PUSH) */,
    0x0000105f    /*  27 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  29 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 35),
    0x0000005d    /*  31 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* AF_UNSPEC */,
    0x00000013    /*  33 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 36),
    0x00000043    /*  35 (LREF12) */,
    0x00001018    /*  36 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  37 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 42),
    0x00000050    /*  39 (LREF21-PUSH) */,
    0x0000105f    /*  40 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  42 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 47),
    0x00000002    /*  44 (CONSTI 0) */,
    0x00000013    /*  45 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 48),
    0x00000045    /*  47 (LREF21) */,
    0x00001018    /*  48 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  49 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 54),
    0x00000051    /*  51 (LREF30-PUSH) */,
    0x0000105f    /*  52 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  54 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 59),
    0x00000002    /*  56 (CONSTI 0) */,
    0x00000013    /*  57 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 60),
    0x00000046    /*  59 (LREF30) */,
    0x00001018    /*  60 (PUSH-LOCAL-ENV 1) */,
    0x0000005d    /*  61 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* ipv6-capable */,
    0x0000001e    /*  63 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 98),
    0x0000005e    /*  65 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <sys-addrinfo> */,
    0x00000006    /*  67 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :flags */,
    0x0000100e    /*  69 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 74),
    0x00000051    /*  71 (LREF30-PUSH) */,
    0x0000105f    /*  72 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x0000001e    /*  74 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 84),
    0x0000000e    /*  76 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 85),
    0x0000005e    /*  78 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* logior */,
    0x00000046    /*  80 (LREF30) */,
    0x00002095    /*  81 (TAIL-APPLY 2) */,
    0x00000013    /*  82 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 85),
    0x00000046    /*  84 (LREF30) */,
    0x0000000d    /*  85 (PUSH) */,
    0x00000006    /*  86 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :family */,
    0x0000004f    /*  88 (LREF20-PUSH) */,
    0x00000006    /*  89 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :socktype */,
    0x0000004c    /*  91 (LREF10-PUSH) */,
    0x00000006    /*  92 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :protocol */,
    0x00000048    /*  94 (LREF0-PUSH) */,
    0x00009060    /*  95 (GREF-TAIL-CALL 9) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*  97 (RET) */,
    0x00000006    /*  98 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[277])) /* "make-sys-addrinfo is available on IPv6-enabled platform" */,
    0x00001060    /* 100 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 102 (RET) */,
    0x0100003c    /* 103 (LREF 0 4) */,
    0x00000074    /* 104 (CDR) */,
    0x00000022    /* 105 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 113),
    0x00000006    /* 107 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[279])) /* "keyword list not even" */,
    0x01000047    /* 109 (LREF-PUSH 0 4) */,
    0x00002060    /* 110 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 112 (RET) */,
    0x0000100e    /* 113 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 119),
    0x0100003c    /* 115 (LREF 0 4) */,
    0x00000069    /* 116 (CAR-PUSH) */,
    0x0000105f    /* 117 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /* 119 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 120 (LREF0) */,
    0x0000002e    /* 121 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :flags */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 134)  /*    134 */,
    0x0100103c    /* 124 (LREF 1 4) */,
    0x00000087    /* 125 (CDDR-PUSH) */,
    0x0100103c    /* 126 (LREF 1 4) */,
    0x00000083    /* 127 (CADR-PUSH) */,
    0x0000004e    /* 128 (LREF12-PUSH) */,
    0x0000004d    /* 129 (LREF11-PUSH) */,
    0x0000004c    /* 130 (LREF10-PUSH) */,
    0x0000201b    /* 131 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 9),
    0x00000014    /* 133 (RET) */,
    0x0000003d    /* 134 (LREF0) */,
    0x0000002e    /* 135 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :family */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 148)  /*    148 */,
    0x0100103c    /* 138 (LREF 1 4) */,
    0x00000087    /* 139 (CDDR-PUSH) */,
    0x00c01047    /* 140 (LREF-PUSH 1 3) */,
    0x0100103c    /* 141 (LREF 1 4) */,
    0x00000083    /* 142 (CADR-PUSH) */,
    0x0000004d    /* 143 (LREF11-PUSH) */,
    0x0000004c    /* 144 (LREF10-PUSH) */,
    0x0000201b    /* 145 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 9),
    0x00000014    /* 147 (RET) */,
    0x0000003d    /* 148 (LREF0) */,
    0x0000002e    /* 149 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :socktype */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 162)  /*    162 */,
    0x0100103c    /* 152 (LREF 1 4) */,
    0x00000087    /* 153 (CDDR-PUSH) */,
    0x00c01047    /* 154 (LREF-PUSH 1 3) */,
    0x0000004e    /* 155 (LREF12-PUSH) */,
    0x0100103c    /* 156 (LREF 1 4) */,
    0x00000083    /* 157 (CADR-PUSH) */,
    0x0000004c    /* 158 (LREF10-PUSH) */,
    0x0000201b    /* 159 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 9),
    0x00000014    /* 161 (RET) */,
    0x0000003d    /* 162 (LREF0) */,
    0x0000002e    /* 163 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :protocol */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 176)  /*    176 */,
    0x0100103c    /* 166 (LREF 1 4) */,
    0x00000087    /* 167 (CDDR-PUSH) */,
    0x00c01047    /* 168 (LREF-PUSH 1 3) */,
    0x0000004e    /* 169 (LREF12-PUSH) */,
    0x0000004d    /* 170 (LREF11-PUSH) */,
    0x0100103c    /* 171 (LREF 1 4) */,
    0x00000083    /* 172 (CADR-PUSH) */,
    0x0000201b    /* 173 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 9),
    0x00000014    /* 175 (RET) */,
    0x0000200e    /* 176 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 184),
    0x00000006    /* 178 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[281])) /* "unknown keyword ~S" */,
    0x0100103c    /* 180 (LREF 1 4) */,
    0x00000069    /* 181 (CAR-PUSH) */,
    0x0000205f    /* 182 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x0100103c    /* 184 (LREF 1 4) */,
    0x00000087    /* 185 (CDDR-PUSH) */,
    0x00c01047    /* 186 (LREF-PUSH 1 3) */,
    0x0000004e    /* 187 (LREF12-PUSH) */,
    0x0000004d    /* 188 (LREF11-PUSH) */,
    0x0000004c    /* 189 (LREF10-PUSH) */,
    0x0000201b    /* 190 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]) + 9),
    0x00000014    /* 192 (RET) */,
    0x00000014    /* 193 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[254]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sys-addrinfo */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[254]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[4])) /* #<compiled-code make-sys-addrinfo@0x7ff9ba1b53c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sys-addrinfo */,
    0x00000014    /*  14 (RET) */,
    /* address->protocol-family */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-family */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   6 (LREF0) */,
    0x0000002e    /*   7 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* unix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]) + 13)  /*     13 */,
    0x0000005d    /*  10 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* PF_UNIX */,
    0x00000014    /*  12 (RET) */,
    0x0000003d    /*  13 (LREF0) */,
    0x0000002e    /*  14 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* inet */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]) + 20)  /*     20 */,
    0x0000005d    /*  17 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* PF_INET */,
    0x00000014    /*  19 (RET) */,
    0x0000003d    /*  20 (LREF0) */,
    0x0000002e    /*  21 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* inet6 */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]) + 27)  /*     27 */,
    0x0000005d    /*  24 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* PF_INET6 */,
    0x00000014    /*  26 (RET) */,
    0x00000006    /*  27 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[285])) /* "unknown family of socket address" */,
    0x0000004c    /*  29 (LREF10-PUSH) */,
    0x00002060    /*  30 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  32 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[302]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* address->protocol-family */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[302]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[6])) /* #<compiled-code address->protocol-family@0x7ff9b9ebdea0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* address->protocol-family */,
    0x00000014    /*  14 (RET) */,
    /* make-client-socket */
    0x0000003e    /*   0 (LREF1) */,
    0x0000002e    /*   1 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* unix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 29)  /*     29 */,
    0x0000003d    /*   4 (LREF0) */,
    0x00000022    /*   5 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 10),
    0x00000004    /*   7 (CONSTF) */,
    0x00000013    /*   8 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 11),
    0x0000006a    /*  10 (LREF0-CAR) */,
    0x00001018    /*  11 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  12 (LREF0) */,
    0x0000009b    /*  13 (STRINGP) */,
    0x0000001e    /*  14 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 18),
    0x00000013    /*  16 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 25),
    0x0000200e    /*  18 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 25),
    0x00000006    /*  20 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[286])) /* "unix socket requires pathname, but got" */,
    0x00000048    /*  22 (LREF0-PUSH) */,
    0x0000205f    /*  23 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000048    /*  25 (LREF0-PUSH) */,
    0x00001060    /*  26 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-unix */,
    0x00000014    /*  28 (RET) */,
    0x0000003e    /*  29 (LREF1) */,
    0x0000002e    /*  30 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* inet */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 93)  /*     93 */,
    0x0000003d    /*  33 (LREF0) */,
    0x00000022    /*  34 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 39),
    0x00000004    /*  36 (CONSTF) */,
    0x00000013    /*  37 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 40),
    0x0000006a    /*  39 (LREF0-CAR) */,
    0x0000000d    /*  40 (PUSH) */,
    0x0000003d    /*  41 (LREF0) */,
    0x00000022    /*  42 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 47),
    0x00000003    /*  44 (CONSTN) */,
    0x00000013    /*  45 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 48),
    0x00000076    /*  47 (LREF0-CDR) */,
    0x00002018    /*  48 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  49 (LREF0) */,
    0x00000022    /*  50 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 55),
    0x00000004    /*  52 (CONSTF) */,
    0x00000013    /*  53 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 56),
    0x0000006a    /*  55 (LREF0-CAR) */,
    0x00001018    /*  56 (PUSH-LOCAL-ENV 1) */,
    0x00000042    /*  57 (LREF11) */,
    0x0000009b    /*  58 (STRINGP) */,
    0x0000001e    /*  59 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 76),
    0x0000100e    /*  61 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 66),
    0x00000048    /*  63 (LREF0-PUSH) */,
    0x0000105f    /*  64 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  66 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 70),
    0x00000013    /*  68 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 88),
    0x0000003d    /*  70 (LREF0) */,
    0x0000009b    /*  71 (STRINGP) */,
    0x0000001e    /*  72 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 76),
    0x00000013    /*  74 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 88),
    0x0000300e    /*  76 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 88),
    0x00000006    /*  78 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[289])) /* "inet socket requires host name and port, but got ~s and ~s" */,
    0x0000004d    /*  80 (LREF11-PUSH) */,
    0x00000048    /*  81 (LREF0-PUSH) */,
    0x0000305f    /*  82 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000013    /*  84 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 88),
    0x00000013    /*  86 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 76),
    0x0000004d    /*  88 (LREF11-PUSH) */,
    0x00000048    /*  89 (LREF0-PUSH) */,
    0x00002060    /*  90 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-inet */,
    0x00000014    /*  92 (RET) */,
    0x00000049    /*  93 (LREF1-PUSH) */,
    0x0000005d    /*  94 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <sockaddr> */,
    0x00000096    /*  96 (IS-A) */,
    0x0000001e    /*  97 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 103),
    0x00000049    /*  99 (LREF1-PUSH) */,
    0x00001060    /* 100 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-from-addr */,
    0x00000014    /* 102 (RET) */,
    0x0000003e    /* 103 (LREF1) */,
    0x0000009b    /* 104 (STRINGP) */,
    0x0000001e    /* 105 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 123),
    0x0000003d    /* 107 (LREF0) */,
    0x00000098    /* 108 (PAIRP) */,
    0x0000001e    /* 109 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 123),
    0x0000100e    /* 111 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 116),
    0x0000006a    /* 113 (LREF0-CAR) */,
    0x00001062    /* 114 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /* 116 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 123),
    0x00000049    /* 118 (LREF1-PUSH) */,
    0x0000006a    /* 119 (LREF0-CAR) */,
    0x00002063    /* 120 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-inet */,
    0x00000014    /* 122 (RET) */,
    0x00000006    /* 123 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[292])) /* "unsupported protocol:" */,
    0x00000049    /* 125 (LREF1-PUSH) */,
    0x00002060    /* 126 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 128 (RET) */,
    0x00000013    /* 129 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 123),
    0x00000014    /* 131 (RET) */,
    0x00000013    /* 132 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]) + 123),
    0x00000014    /* 134 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[452]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[452]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[8])) /* #<compiled-code make-client-socket@0x7ff9b9870e40> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket */,
    0x00000014    /*  14 (RET) */,
    /* make-client-socket-from-addr */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[467]) + 11),
    0x0000100e    /*   2 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[467]) + 7),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000105f    /*   5 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* address->protocol-family */,
    0x00000061    /*   7 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* SOCK_STREAM */,
    0x00002062    /*   9 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-socket */,
    0x00001018    /*  11 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  12 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[467]) + 18),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000004c    /*  15 (LREF10-PUSH) */,
    0x0000205f    /*  16 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-connect */,
    0x00000053    /*  18 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[486]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-from-addr */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[486]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[10])) /* #<compiled-code make-client-socket-from-addr@0x7ff9b8a35f00> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-from-addr */,
    0x00000014    /*  14 (RET) */,
    /* make-client-socket-unix */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]) + 8),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* PF_UNIX */,
    0x0000005e    /*   4 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* SOCK_STREAM */,
    0x0000205f    /*   6 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-socket */,
    0x00001018    /*   8 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   9 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]) + 23),
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]) + 21),
    0x0000005e    /*  14 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <sockaddr-un> */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :path */,
    0x0000004c    /*  18 (LREF10-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00002062    /*  21 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-connect */,
    0x00000053    /*  23 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[525]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-unix */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[525]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[12])) /* #<compiled-code make-client-socket-unix@0x7ff9b8a805a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-unix */,
    0x00000014    /*  14 (RET) */,
    /* (make-client-socket-inet try-connect #f) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000303a    /*   1 (LSET 3 0) */,
    0x0000000b    /*   2 (CONSTF-RET) */,
    /* (make-client-socket-inet try-connect #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[543]) + 11),
    0x0000100e    /*   2 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[543]) + 7),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000105f    /*   5 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* address->protocol-family */,
    0x00000061    /*   7 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* SOCK_STREAM */,
    0x00002062    /*   9 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-socket */,
    0x00001018    /*  11 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  12 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[543]) + 18),
    0x00000048    /*  14 (LREF0-PUSH) */,
    0x0000004c    /*  15 (LREF10-PUSH) */,
    0x0000205f    /*  16 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-connect */,
    0x00000053    /*  18 (LREF0-RET) */,
    /* (make-client-socket-inet try-connect) */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[14])) /* #<compiled-code (make-client-socket-inet try-connect #f)@0x7ff9b8b837e0> */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[15])) /* #<compiled-code (make-client-socket-inet try-connect #f)@0x7ff9b8b83780> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000006    /*   6 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :rewind-before */,
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00004060    /*  10 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* with-error-handler */,
    0x00000014    /*  12 (RET) */,
    /* make-client-socket-inet */
    0x00000009    /*   0 (CONSTF-PUSH) */,
    0x00001017    /*   1 (LOCAL-ENV 1) */,
    0x000010e7    /*   2 (BOX 1) */,
    0x00001019    /*   3 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[498])) /* (#<compiled-code (make-client-socket-inet try-connect)@0x7ff9b8b83840>) */,
    0x0000200e    /*   5 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[575]) + 16),
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[575]) + 14),
    0x00000050    /*  10 (LREF21-PUSH) */,
    0x0000004f    /*  11 (LREF20-PUSH) */,
    0x0000205f    /*  12 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sockaddrs */,
    0x00002062    /*  14 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* any */,
    0x00001018    /*  16 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  17 (LREF0) */,
    0x0000001e    /*  18 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[575]) + 22),
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[575]) + 27),
    0x0000100e    /*  22 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[575]) + 27),
    0x000020ea    /*  24 (LREF-UNBOX 2 0) */,
    0x00001062    /*  25 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* raise */,
    0x00000053    /*  27 (LREF0-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[603]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-inet */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[603]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[17])) /* #<compiled-code make-client-socket-inet@0x7ff9b8b838a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-client-socket-inet */,
    0x00000014    /*  14 (RET) */,
    /* make-server-socket */
    0x0000003e    /*   0 (LREF1) */,
    0x0000002e    /*   1 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* unix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 31)  /*     31 */,
    0x0000003d    /*   4 (LREF0) */,
    0x00000022    /*   5 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 10),
    0x00000004    /*   7 (CONSTF) */,
    0x00000013    /*   8 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 11),
    0x0000006a    /*  10 (LREF0-CAR) */,
    0x00001018    /*  11 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  12 (LREF0) */,
    0x0000009b    /*  13 (STRINGP) */,
    0x0000001e    /*  14 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 18),
    0x00000013    /*  16 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 25),
    0x0000200e    /*  18 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 25),
    0x00000006    /*  20 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[286])) /* "unix socket requires pathname, but got" */,
    0x00000048    /*  22 (LREF0-PUSH) */,
    0x0000205f    /*  23 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000005e    /*  25 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-unix */,
    0x00000048    /*  27 (LREF0-PUSH) */,
    0x0000007a    /*  28 (LREF10-CDR) */,
    0x00003095    /*  29 (TAIL-APPLY 3) */,
    0x00000014    /*  30 (RET) */,
    0x0000003e    /*  31 (LREF1) */,
    0x0000002e    /*  32 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* inet */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 104)  /*    104 */,
    0x0000003d    /*  35 (LREF0) */,
    0x00000022    /*  36 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 41),
    0x00000004    /*  38 (CONSTF) */,
    0x00000013    /*  39 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 42),
    0x0000006a    /*  41 (LREF0-CAR) */,
    0x00001018    /*  42 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  43 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 48),
    0x00000048    /*  45 (LREF0-PUSH) */,
    0x0000105f    /*  46 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* list? */,
    0x0000001e    /*  48 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 81),
    0x0000200e    /*  50 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 64),
    0x0000200e    /*  52 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 60),
    0x0000005e    /*  54 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000005e    /*  56 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* string? */,
    0x0000205f    /*  58 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* any-pred */,
    0x0000000d    /*  60 (PUSH) */,
    0x00000048    /*  61 (LREF0-PUSH) */,
    0x0000205f    /*  62 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* every */,
    0x0000001e    /*  64 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 68),
    0x00000013    /*  66 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 75),
    0x0000200e    /*  68 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 75),
    0x00000006    /*  70 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[307])) /* "inet socket requires integer port number or string service name, or a list of them, but got:" */,
    0x00000048    /*  72 (LREF0-PUSH) */,
    0x0000205f    /*  73 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000005e    /*  75 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-inet* */,
    0x00000048    /*  77 (LREF0-PUSH) */,
    0x0000007a    /*  78 (LREF10-CDR) */,
    0x00003095    /*  79 (TAIL-APPLY 3) */,
    0x00000014    /*  80 (RET) */,
    0x0000100e    /*  81 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 86),
    0x00000048    /*  83 (LREF0-PUSH) */,
    0x0000105f    /*  84 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /*  86 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 94),
    0x0000005e    /*  88 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-inet */,
    0x00000048    /*  90 (LREF0-PUSH) */,
    0x0000007a    /*  91 (LREF10-CDR) */,
    0x00003095    /*  92 (TAIL-APPLY 3) */,
    0x00000014    /*  93 (RET) */,
    0x0000003d    /*  94 (LREF0) */,
    0x0000009b    /*  95 (STRINGP) */,
    0x0000001f    /*  96 (BT) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 88),
    0x00000006    /*  98 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[307])) /* "inet socket requires integer port number or string service name, or a list of them, but got:" */,
    0x00000048    /* 100 (LREF0-PUSH) */,
    0x00002060    /* 101 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 103 (RET) */,
    0x00000049    /* 104 (LREF1-PUSH) */,
    0x0000005d    /* 105 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <sockaddr> */,
    0x00000096    /* 107 (IS-A) */,
    0x0000001e    /* 108 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 116),
    0x0000005e    /* 110 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-from-addr */,
    0x00000049    /* 112 (LREF1-PUSH) */,
    0x0000003d    /* 113 (LREF0) */,
    0x00003095    /* 114 (TAIL-APPLY 3) */,
    0x00000014    /* 115 (RET) */,
    0x0000100e    /* 116 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 121),
    0x00000049    /* 118 (LREF1-PUSH) */,
    0x0000105f    /* 119 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* integer? */,
    0x0000001e    /* 121 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]) + 129),
    0x0000005e    /* 123 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-inet */,
    0x00000049    /* 125 (LREF1-PUSH) */,
    0x0000003d    /* 126 (LREF0) */,
    0x00003095    /* 127 (TAIL-APPLY 3) */,
    0x00000014    /* 128 (RET) */,
    0x00000006    /* 129 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[292])) /* "unsupported protocol:" */,
    0x00000049    /* 131 (LREF1-PUSH) */,
    0x00002060    /* 132 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 134 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[753]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[753]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[19])) /* #<compiled-code make-server-socket@0x7ff9b8d3e180> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket */,
    0x00000014    /*  14 (RET) */,
    /* make-server-socket-from-addr */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000005    /*   1 (CONSTU) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000005    /*   3 (CONSTU) */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000005    /*   5 (CONSTU) */,
    0x00004018    /*   6 (PUSH-LOCAL-ENV 4) */,
    0x00000040    /*   7 (LREF3) */,
    0x00000022    /*   8 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 101),
    0x0000100e    /*  10 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 15),
    0x0000004a    /*  12 (LREF2-PUSH) */,
    0x0000105f    /*  13 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  15 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 20),
    0x00000004    /*  17 (CONSTF) */,
    0x00000013    /*  18 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 21),
    0x0000003f    /*  20 (LREF2) */,
    0x00001018    /*  21 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  22 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 27),
    0x0000004d    /*  24 (LREF11-PUSH) */,
    0x0000105f    /*  25 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  27 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 32),
    0x00000004    /*  29 (CONSTF) */,
    0x00000013    /*  30 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 33),
    0x00000042    /*  32 (LREF11) */,
    0x00001018    /*  33 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 39),
    0x0000004f    /*  36 (LREF20-PUSH) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  39 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 44),
    0x00005002    /*  41 (CONSTI 5) */,
    0x00000013    /*  42 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 45),
    0x00000044    /*  44 (LREF20) */,
    0x00001018    /*  45 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  46 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 57),
    0x0000100e    /*  48 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 53),
    0x00404047    /*  50 (LREF-PUSH 4 1) */,
    0x0000105f    /*  51 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* address->protocol-family */,
    0x00000061    /*  53 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* SOCK_STREAM */,
    0x00002062    /*  55 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-socket */,
    0x00001018    /*  57 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  58 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 63),
    0x0000004f    /*  60 (LREF20-PUSH) */,
    0x0000105f    /*  61 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* procedure? */,
    0x0000001e    /*  63 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 73),
    0x0000200e    /*  65 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 73),
    0x00000048    /*  67 (LREF0-PUSH) */,
    0x00405047    /*  68 (LREF-PUSH 5 1) */,
    0x00000044    /*  69 (LREF20) */,
    0x00002011    /*  70 (CALL 2) */,
    0x00000013    /*  71 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 73),
    0x00000046    /*  73 (LREF30) */,
    0x0000001e    /*  74 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 88),
    0x0000400e    /*  76 (PRE-CALL 4) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 88),
    0x00000048    /*  78 (LREF0-PUSH) */,
    0x0000005e    /*  79 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* SOL_SOCKET */,
    0x0000005e    /*  81 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* SO_REUSEADDR */,
    0x00001007    /*  83 (CONSTI-PUSH 1) */,
    0x0000405f    /*  84 (GREF-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-setsockopt */,
    0x00000013    /*  86 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 88),
    0x0000200e    /*  88 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 94),
    0x00000048    /*  90 (LREF0-PUSH) */,
    0x00405047    /*  91 (LREF-PUSH 5 1) */,
    0x0000205f    /*  92 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-bind */,
    0x0000200e    /*  94 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 100),
    0x00000048    /*  96 (LREF0-PUSH) */,
    0x0000004c    /*  97 (LREF10-PUSH) */,
    0x0000205f    /*  98 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-listen */,
    0x00000053    /* 100 (LREF0-RET) */,
    0x00000079    /* 101 (LREF3-CDR) */,
    0x00000022    /* 102 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 110),
    0x00000006    /* 104 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[279])) /* "keyword list not even" */,
    0x0000004b    /* 106 (LREF3-PUSH) */,
    0x00002060    /* 107 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 109 (RET) */,
    0x0000100e    /* 110 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 115),
    0x0000006d    /* 112 (LREF3-CAR) */,
    0x00001062    /* 113 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /* 115 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 116 (LREF0) */,
    0x0000002e    /* 117 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :reuse-addr? */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 129)  /*    129 */,
    0x00c0103c    /* 120 (LREF 1 3) */,
    0x00000087    /* 121 (CDDR-PUSH) */,
    0x00c0103c    /* 122 (LREF 1 3) */,
    0x00000083    /* 123 (CADR-PUSH) */,
    0x0000004d    /* 124 (LREF11-PUSH) */,
    0x0000004c    /* 125 (LREF10-PUSH) */,
    0x0000201b    /* 126 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 7),
    0x00000014    /* 128 (RET) */,
    0x0000003d    /* 129 (LREF0) */,
    0x0000002e    /* 130 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :sock-init */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 142)  /*    142 */,
    0x00c0103c    /* 133 (LREF 1 3) */,
    0x00000087    /* 134 (CDDR-PUSH) */,
    0x0000004e    /* 135 (LREF12-PUSH) */,
    0x00c0103c    /* 136 (LREF 1 3) */,
    0x00000083    /* 137 (CADR-PUSH) */,
    0x0000004c    /* 138 (LREF10-PUSH) */,
    0x0000201b    /* 139 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 7),
    0x00000014    /* 141 (RET) */,
    0x0000003d    /* 142 (LREF0) */,
    0x0000002e    /* 143 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :backlog */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 155)  /*    155 */,
    0x00c0103c    /* 146 (LREF 1 3) */,
    0x00000087    /* 147 (CDDR-PUSH) */,
    0x0000004e    /* 148 (LREF12-PUSH) */,
    0x0000004d    /* 149 (LREF11-PUSH) */,
    0x00c0103c    /* 150 (LREF 1 3) */,
    0x00000083    /* 151 (CADR-PUSH) */,
    0x0000201b    /* 152 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 7),
    0x00000014    /* 154 (RET) */,
    0x0000200e    /* 155 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 163),
    0x00000006    /* 157 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[281])) /* "unknown keyword ~S" */,
    0x00c0103c    /* 159 (LREF 1 3) */,
    0x00000069    /* 160 (CAR-PUSH) */,
    0x0000205f    /* 161 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00c0103c    /* 163 (LREF 1 3) */,
    0x00000087    /* 164 (CDDR-PUSH) */,
    0x0000004e    /* 165 (LREF12-PUSH) */,
    0x0000004d    /* 166 (LREF11-PUSH) */,
    0x0000004c    /* 167 (LREF10-PUSH) */,
    0x0000201b    /* 168 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]) + 7),
    0x00000014    /* 170 (RET) */,
    0x00000014    /* 171 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[940]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-from-addr */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[940]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[21])) /* #<compiled-code make-server-socket-from-addr@0x7ff9b8fa1060> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-from-addr */,
    0x00000014    /*  14 (RET) */,
    /* make-server-socket-unix */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000005    /*   1 (CONSTU) */,
    0x00002018    /*   2 (PUSH-LOCAL-ENV 2) */,
    0x0000003e    /*   3 (LREF1) */,
    0x00000022    /*   4 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 48),
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 11),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0000105f    /*   9 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  11 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 16),
    0x00005002    /*  13 (CONSTI 5) */,
    0x00000013    /*  14 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 17),
    0x0000003d    /*  16 (LREF0) */,
    0x00001018    /*  17 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  18 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 26),
    0x0000005e    /*  20 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* PF_UNIX */,
    0x0000005e    /*  22 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* SOCK_STREAM */,
    0x0000205f    /*  24 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-socket */,
    0x00001018    /*  26 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  27 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 41),
    0x00000048    /*  29 (LREF0-PUSH) */,
    0x0000300e    /*  30 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 39),
    0x0000005e    /*  32 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <sockaddr-un> */,
    0x00000006    /*  34 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :path */,
    0x00403047    /*  36 (LREF-PUSH 3 1) */,
    0x0000305f    /*  37 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00002062    /*  39 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-bind */,
    0x0000200e    /*  41 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 47),
    0x00000048    /*  43 (LREF0-PUSH) */,
    0x0000004c    /*  44 (LREF10-PUSH) */,
    0x0000205f    /*  45 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-listen */,
    0x00000053    /*  47 (LREF0-RET) */,
    0x00000077    /*  48 (LREF1-CDR) */,
    0x00000022    /*  49 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 57),
    0x00000006    /*  51 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[279])) /* "keyword list not even" */,
    0x00000049    /*  53 (LREF1-PUSH) */,
    0x00002060    /*  54 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  56 (RET) */,
    0x0000100e    /*  57 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 62),
    0x0000006b    /*  59 (LREF1-CAR) */,
    0x00001062    /*  60 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /*  62 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  63 (LREF0) */,
    0x0000002e    /*  64 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :backlog */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 74)  /*     74 */,
    0x00000042    /*  67 (LREF11) */,
    0x00000087    /*  68 (CDDR-PUSH) */,
    0x00000042    /*  69 (LREF11) */,
    0x00000083    /*  70 (CADR-PUSH) */,
    0x0000201b    /*  71 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 3),
    0x00000014    /*  73 (RET) */,
    0x0000200e    /*  74 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 81),
    0x00000006    /*  76 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[281])) /* "unknown keyword ~S" */,
    0x0000006f    /*  78 (LREF11-CAR) */,
    0x00002062    /*  79 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000042    /*  81 (LREF11) */,
    0x00000087    /*  82 (CDDR-PUSH) */,
    0x0000004c    /*  83 (LREF10-PUSH) */,
    0x0000201b    /*  84 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]) + 3),
    0x00000014    /*  86 (RET) */,
    0x00000014    /*  87 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1043]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-unix */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1043]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[23])) /* #<compiled-code make-server-socket-unix@0x7ff9bd8a18a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-unix */,
    0x00000014    /*  14 (RET) */,
    /* make-server-socket-inet */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-from-addr */,
    0x0000200e    /*   2 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1058]) + 8),
    0x00000009    /*   4 (CONSTF-PUSH) */,
    0x00000049    /*   5 (LREF1-PUSH) */,
    0x0000205f    /*   6 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sockaddrs */,
    0x00000069    /*   8 (CAR-PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00003095    /*  10 (TAIL-APPLY 3) */,
    0x00000014    /*  11 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1070]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-inet */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1070]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[25])) /* #<compiled-code make-server-socket-inet@0x7ff9bba511e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-inet */,
    0x00000014    /*  14 (RET) */,
    /* (make-server-socket-inet* #:G2447) */
    0x00000009    /*   0 (CONSTF-PUSH) */,
    0x00000048    /*   1 (LREF0-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sockaddrs */,
    0x00000014    /*   4 (RET) */,
    /* (make-server-socket-inet* try-bind #f) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000303a    /*   1 (LSET 3 0) */,
    0x0000000b    /*   2 (CONSTF-RET) */,
    /* (make-server-socket-inet* try-bind #f) */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-from-addr */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00000046    /*   3 (LREF30) */,
    0x00003095    /*   4 (TAIL-APPLY 3) */,
    0x00000014    /*   5 (RET) */,
    /* (make-server-socket-inet* try-bind) */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[28])) /* #<compiled-code (make-server-socket-inet* try-bind #f)@0x7ff9bb38eae0> */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[29])) /* #<compiled-code (make-server-socket-inet* try-bind #f)@0x7ff9bb38e480> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000006    /*   6 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :rewind-before */,
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00004060    /*  10 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* with-error-handler */,
    0x00000014    /*  12 (RET) */,
    /* make-server-socket-inet* */
    0x00000009    /*   0 (CONSTF-PUSH) */,
    0x00001017    /*   1 (LOCAL-ENV 1) */,
    0x000010e7    /*   2 (BOX 1) */,
    0x00001019    /*   3 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[557])) /* (#<compiled-code (make-server-socket-inet* try-bind)@0x7ff9bb38ecc0>) */,
    0x0000200e    /*   5 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1112]) + 16),
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1112]) + 14),
    0x00000051    /*  10 (LREF30-PUSH) */,
    0x00000050    /*  11 (LREF21-PUSH) */,
    0x0000205f    /*  12 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* append-map */,
    0x00002062    /*  14 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* any */,
    0x00001018    /*  16 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  17 (LREF0) */,
    0x0000001e    /*  18 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1112]) + 22),
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1112]) + 27),
    0x0000100e    /*  22 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1112]) + 27),
    0x000020ea    /*  24 (LREF-UNBOX 2 0) */,
    0x00001062    /*  25 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* raise */,
    0x00000053    /*  27 (LREF0-RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[546])) /* (#<compiled-code (make-server-socket-inet* #:G2447)@0x7ff9bb383180>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1140]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-inet* */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1140]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[31])) /* #<compiled-code make-server-socket-inet*@0x7ff9bb3830c0> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket-inet* */,
    0x00000014    /*  16 (RET) */,
    /* (make-server-sockets #:G2454) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1157]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-family */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000001    /*   6 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* inet6 */,
    0x0000008f    /*   8 (EQ) */,
    0x00000014    /*   9 (RET) */,
    /* (make-server-sockets #:G2453) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1167]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-family */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000001    /*   6 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* inet */,
    0x0000008f    /*   8 (EQ) */,
    0x00000014    /*   9 (RET) */,
    /* (make-server-sockets #:G2452) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1177]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-family */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000001    /*   6 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* inet */,
    0x0000008f    /*   8 (EQ) */,
    0x00000014    /*   9 (RET) */,
    /* (make-server-sockets #:G2451) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1187]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-family */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000001    /*   6 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* inet6 */,
    0x0000008f    /*   8 (EQ) */,
    0x00000014    /*   9 (RET) */,
    /* (make-server-sockets bind-failed?) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1197]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* <system-error> */,
    0x00000030    /*   5 (RF) */,
    0x0000200e    /*   6 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1197]) + 13),
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* errno */,
    0x0000205f    /*  11 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x0000000d    /*  13 (PUSH) */,
    0x00c01047    /*  14 (LREF-PUSH 1 3) */,
    0x00000043    /*  15 (LREF12) */,
    0x00002088    /*  16 (LIST 2) */,
    0x0000008c    /*  17 (MEMV) */,
    0x00000014    /*  18 (RET) */,
    /* (make-server-sockets #f) */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000403c    /*   3 (LREF 4 0) */,
    0x00003095    /*   4 (TAIL-APPLY 3) */,
    0x00000014    /*   5 (RET) */,
    /* (make-server-sockets #f #f) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1222]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000503c    /*   3 (LREF 5 0) */,
    0x0000101c    /*   4 (LOCAL-ENV-CALL 1) */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1222]) + 10),
    0x00000044    /*   7 (LREF20) */,
    0x00001088    /*   8 (LIST 1) */,
    0x00000014    /*   9 (RET) */,
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x00001060    /*  11 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* raise */,
    0x00000014    /*  13 (RET) */,
    /* (make-server-sockets #f #f #f) */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000603c    /*   3 (LREF 6 0) */,
    0x00003095    /*   4 (TAIL-APPLY 3) */,
    0x00000014    /*   5 (RET) */,
    /* (make-server-sockets #f #f) */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x0000200e    /*   1 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1242]) + 9),
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[40])) /* #<compiled-code (make-server-sockets #f #f #f)@0x7ff9ba04ff60> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000048    /*   6 (LREF0-PUSH) */,
    0x0000205f    /*   7 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* filter-map */,
    0x00000066    /*   9 (CONS) */,
    0x00000014    /*  10 (RET) */,
    /* (make-server-sockets #f) */
    0x0040403c    /*   0 (LREF 4 1) */,
    0x0000002d    /*   1 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]) + 27),
    0x0000200e    /*   3 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]) + 17),
    0x00804047    /*   5 (LREF-PUSH 4 2) */,
    0x0000100e    /*   6 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]) + 15),
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]) + 13),
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x0000105f    /*  11 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-address */,
    0x00001062    /*  13 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-port */,
    0x00002062    /*  15 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sockaddrs */,
    0x00001018    /*  17 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  18 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]) + 24),
    0x00806047    /*  20 (LREF-PUSH 6 2) */,
    0x00000048    /*  21 (LREF0-PUSH) */,
    0x0000205f    /*  22 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* filter */,
    0x0000001a    /*  24 (POP-LOCAL-ENV) */,
    0x00000013    /*  25 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]) + 33),
    0x0000200e    /*  27 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]) + 33),
    0x00405047    /*  29 (LREF-PUSH 5 1) */,
    0x0000004f    /*  30 (LREF20-PUSH) */,
    0x0000205f    /*  31 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* filter */,
    0x00001018    /*  33 (PUSH-LOCAL-ENV 1) */,
    0x00000016    /*  34 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[39])) /* #<compiled-code (make-server-sockets #f #f)@0x7ff9ba02f060> */,
    0x0000000d    /*  36 (PUSH) */,
    0x00000016    /*  37 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[41])) /* #<compiled-code (make-server-sockets #f #f)@0x7ff9ba02f000> */,
    0x0000000d    /*  39 (PUSH) */,
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :rewind-before */,
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00004060    /*  44 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* with-error-handler */,
    0x00000014    /*  46 (RET) */,
    /* (make-server-sockets #f) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1300]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000603c    /*   3 (LREF 6 0) */,
    0x0000101c    /*   4 (LOCAL-ENV-CALL 1) */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1300]) + 10),
    0x00000009    /*   7 (CONSTF-PUSH) */,
    0x0080303c    /*   8 (LREF 3 2) */,
    0x000020a3    /*   9 (VALUES-RET 2) */,
    0x00000060    /*  10 (GREF-TAIL-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %reraise */,
    0x00000014    /*  12 (RET) */,
    /* (make-server-sockets #f) */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1313]) + 7),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-socket */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000603c    /*   5 (LREF 6 0) */,
    0x00003095    /*   6 (TAIL-APPLY 3) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*   8 (LREF0-PUSH) */,
    0x0040703c    /*   9 (LREF 7 1) */,
    0x0000002d    /*  10 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1313]) + 23),
    0x0000100e    /*  12 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1313]) + 24),
    0x0000100e    /*  14 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1313]) + 19),
    0x00000048    /*  16 (LREF0-PUSH) */,
    0x0000105f    /*  17 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-address */,
    0x00001062    /*  19 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-port */,
    0x00000013    /*  21 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1313]) + 24),
    0x00000004    /*  23 (CONSTF) */,
    0x000020a3    /*  24 (VALUES-RET 2) */,
    /* make-server-sockets */
    0x00004019    /*   0 (LOCAL-ENV-CLOSURES 4) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[595])) /* (#<undef> #<undef> #<undef> #<compiled-code (make-server-sockets bind-failed?)@0x7ff9ba02f2a0>) */,
    0x0000300e    /*   2 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 11),
    0x00000006    /*   4 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche */,
    0x00000006    /*   6 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* EADDRINUSE */,
    0x00000009    /*   8 (CONSTF-PUSH) */,
    0x0000305f    /*   9 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x000030e8    /*  11 (ENV-SET 3) */,
    0x0000300e    /*  12 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* EADDRNOTAVAIL */,
    0x00000009    /*  18 (CONSTF-PUSH) */,
    0x0000305f    /*  19 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x000020e8    /*  21 (ENV-SET 2) */,
    0x0000300e    /*  22 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 31),
    0x00000006    /*  24 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.net */,
    0x00000006    /*  26 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <sockaddr-in6> */,
    0x00000009    /*  28 (CONSTF-PUSH) */,
    0x0000305f    /*  29 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x000010e8    /*  31 (ENV-SET 1) */,
    0x0000200e    /*  32 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 38),
    0x0000004e    /*  34 (LREF12-PUSH) */,
    0x0000004d    /*  35 (LREF11-PUSH) */,
    0x0000205f    /*  36 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sockaddrs */,
    0x00001018    /*  38 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  39 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 45),
    0x00c03047    /*  41 (LREF-PUSH 3 3) */,
    0x00000048    /*  42 (LREF0-PUSH) */,
    0x0000205f    /*  43 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* filter */,
    0x00001018    /*  45 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  46 (LREF0) */,
    0x00000022    /*  47 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 56),
    0x00000016    /*  49 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[38])) /* #<compiled-code (make-server-sockets #f)@0x7ff9ba02f1e0> */,
    0x0000000d    /*  51 (PUSH) */,
    0x0000004c    /*  52 (LREF10-PUSH) */,
    0x00002060    /*  53 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00000014    /*  55 (RET) */,
    0x00c0203c    /*  56 (LREF 2 3) */,
    0x0000001e    /*  57 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 49),
    0x00000045    /*  59 (LREF21) */,
    0x0000001e    /*  60 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 49),
    0x00000016    /*  62 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[42])) /* #<compiled-code (make-server-sockets #f)@0x7ff9ba02f120> */,
    0x0000300f    /*  64 (PUSH-PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 140),
    0x00000009    /*  66 (CONSTF-PUSH) */,
    0x0000200e    /*  67 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 73),
    0x00004047    /*  69 (LREF-PUSH 4 0) */,
    0x0000004c    /*  70 (LREF10-PUSH) */,
    0x0000205f    /*  71 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* filter */,
    0x0000000d    /*  73 (PUSH) */,
    0x00000008    /*  74 (CONSTN-PUSH) */,
    0x00003017    /*  75 (LOCAL-ENV 3) */,
    0x0000003e    /*  76 (LREF1) */,
    0x00000022    /*  77 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 82),
    0x0000003d    /*  79 (LREF0) */,
    0x00000093    /*  80 (REVERSE) */,
    0x00000014    /*  81 (RET) */,
    0x0000006b    /*  82 (LREF1-CAR) */,
    0x00001018    /*  83 (PUSH-LOCAL-ENV 1) */,
    0x00000043    /*  84 (LREF12) */,
    0x0000001e    /*  85 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 105),
    0x0000500e    /*  87 (PRE-CALL 5) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 106),
    0x00404047    /*  89 (LREF-PUSH 4 1) */,
    0x00000006    /*  90 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :host */,
    0x0000100e    /*  92 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 97),
    0x00000048    /*  94 (LREF0-PUSH) */,
    0x0000105f    /*  95 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-addr */,
    0x0000000d    /*  97 (PUSH) */,
    0x00000006    /*  98 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :port */,
    0x0000004e    /* 100 (LREF12-PUSH) */,
    0x0000505f    /* 101 (GREF-CALL 5) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000013    /* 103 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 106),
    0x0000003d    /* 105 (LREF0) */,
    0x00001018    /* 106 (PUSH-LOCAL-ENV 1) */,
    0x0000400e    /* 107 (PRE-CALL 4) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 121),
    0x00000016    /* 109 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[43])) /* #<compiled-code (make-server-sockets #f)@0x7ff9ba04ff00> */,
    0x0000000d    /* 111 (PUSH) */,
    0x00000016    /* 112 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[44])) /* #<compiled-code (make-server-sockets #f)@0x7ff9ba04fde0> */,
    0x0000000d    /* 114 (PUSH) */,
    0x00000006    /* 115 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :rewind-before */,
    0x00000006    /* 117 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000405f    /* 119 (GREF-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* with-error-handler */,
    0x0000001a    /* 121 (POP-LOCAL-ENV) */,
    0x0000001a    /* 122 (POP-LOCAL-ENV) */,
    0x00002036    /* 123 (TAIL-RECEIVE 2 0) */,
    0x00000048    /* 124 (LREF0-PUSH) */,
    0x0000007b    /* 125 (LREF11-CDR) */,
    0x0000000d    /* 126 (PUSH) */,
    0x0000003e    /* 127 (LREF1) */,
    0x0000001e    /* 128 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 135),
    0x00000049    /* 130 (LREF1-PUSH) */,
    0x00000041    /* 131 (LREF10) */,
    0x00000066    /* 132 (CONS) */,
    0x00000013    /* 133 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 136),
    0x00000041    /* 135 (LREF10) */,
    0x0000000d    /* 136 (PUSH) */,
    0x0000201b    /* 137 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 76),
    0x00000014    /* 139 (RET) */,
    0x00002063    /* 140 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* append-map */,
    0x00000014    /* 142 (RET) */,
    0x00000013    /* 143 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 49),
    0x00000014    /* 145 (RET) */,
    0x00000013    /* 146 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]) + 49),
    0x00000014    /* 148 (RET) */,
    /* %toplevel */
    0x00004019    /*   0 (LOCAL-ENV-CLOSURES 4) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[587])) /* (#<compiled-code (make-server-sockets #:G2454)@0x7ff9ba02f840> #<compiled-code (make-server-sockets #:G2453)@0x7ff9ba02f660> #<compiled-code (make-server-sockets #:G2452)@0x7ff9ba02f600> #<compiled-code (make-server-sockets #:G2451)@0x7ff9ba02f360>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1487]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-sockets */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1487]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[45])) /* #<compiled-code make-server-sockets@0x7ff9ba02f300> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-server-sockets */,
    0x00000014    /*  16 (RET) */,
    /* (make-sockaddrs #:G2463) */
    0x0000003d    /*   0 (LREF0) */,
    0x000000e3    /*   1 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* addr */,
    0x00000014    /*   3 (RET) */,
    /* (make-sockaddrs #:G2462) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1508]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-family */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000001    /*   6 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* inet */,
    0x0000008f    /*   8 (EQ) */,
    0x00000014    /*   9 (RET) */,
    /* (make-sockaddrs #:G2461) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1518]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sockaddr-family */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000001    /*   6 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* inet */,
    0x0000008f    /*   8 (EQ) */,
    0x00000014    /*   9 (RET) */,
    /* (make-sockaddrs #f) */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <sockaddr-in> */,
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :host */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00000006    /*   5 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :port */,
    0x0000004f    /*   7 (LREF20-PUSH) */,
    0x00005060    /*   8 (GREF-TAIL-CALL 5) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /*  10 (RET) */,
    /* make-sockaddrs */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 7),
    0x00000001    /*   3 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* tcp */,
    0x00000013    /*   5 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 8),
    0x0000006a    /*   7 (LREF0-CAR) */,
    0x0000000d    /*   8 (PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 15),
    0x00000003    /*  12 (CONSTN) */,
    0x00000013    /*  13 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 16),
    0x00000076    /*  15 (LREF0-CDR) */,
    0x00002018    /*  16 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  17 (LREF0) */,
    0x00000022    /*  18 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 22),
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 30),
    0x0000200e    /*  22 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 30),
    0x00000006    /*  24 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[343])) /* "too many arguments for" */,
    0x00000006    /*  26 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[799])) /* (lambda (host port :optional (proto 'tcp)) (if ipv6-capable (let* ((socktype (case proto ((tcp) SOCK_STREAM) ((udp) SOCK_DGRAM) (else (error "unsupported protocol:" proto)))) (port (x->string port)) (hints (make-sys-addrinfo :flags AI_PASSIVE :socktype socktype)) (ss (map (cut slot-ref <> 'addr) (sys-getaddrinfo host port hints)))) (if ipv4-preferred (append (filter (^s (eq? (sockaddr-family s) 'inet)) ss) (remove (^s (eq? (sockaddr-family s) 'inet)) ss)) ss)) (let1 port (cond ((number? port) port) ((sys-getservbyname port (symbol->string proto)) => (cut slot-ref <> 'port)) (else (error "couldn't find a port number of service:" port))) (if host (let1 hh (sys-gethostbyname host) (unless hh (error "couldn't find host: " host)) (map (cut make <sockaddr-in> :host <> :port port) (slot-ref hh 'addresses))) (list (make <sockaddr-in> :host :any :port port)))))) */,
    0x0000205f    /*  28 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000005d    /*  30 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* ipv6-capable */,
    0x0000001e    /*  32 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 108),
    0x0000003e    /*  34 (LREF1) */,
    0x0000002e    /*  35 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* tcp */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 42)  /*     42 */,
    0x0000005d    /*  38 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* SOCK_STREAM */,
    0x00000013    /*  40 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 57),
    0x0000003e    /*  42 (LREF1) */,
    0x0000002e    /*  43 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* udp */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 50)  /*     50 */,
    0x0000005d    /*  46 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* SOCK_DGRAM */,
    0x00000013    /*  48 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 57),
    0x0000200e    /*  50 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 57),
    0x00000006    /*  52 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[292])) /* "unsupported protocol:" */,
    0x00000049    /*  54 (LREF1-PUSH) */,
    0x0000205f    /*  55 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00001018    /*  57 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  58 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 63),
    0x00000050    /*  60 (LREF21-PUSH) */,
    0x0000105f    /*  61 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* x->string */,
    0x00001018    /*  63 (PUSH-LOCAL-ENV 1) */,
    0x0000400e    /*  64 (PRE-CALL 4) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 75),
    0x00000006    /*  66 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :flags */,
    0x0000005e    /*  68 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* AI_PASSIVE */,
    0x00000006    /*  70 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :socktype */,
    0x0000004c    /*  72 (LREF10-PUSH) */,
    0x0000405f    /*  73 (GREF-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sys-addrinfo */,
    0x00001018    /*  75 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*  76 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 88),
    0x00805047    /*  78 (LREF-PUSH 5 2) */,
    0x0000300e    /*  79 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 86),
    0x00804047    /*  81 (LREF-PUSH 4 2) */,
    0x0000004c    /*  82 (LREF10-PUSH) */,
    0x00000048    /*  83 (LREF0-PUSH) */,
    0x0000305f    /*  84 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getaddrinfo */,
    0x00002062    /*  86 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00001018    /*  88 (PUSH-LOCAL-ENV 1) */,
    0x0000005d    /*  89 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* ipv4-preferred */,
    0x0000001e    /*  91 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 107),
    0x0000200e    /*  93 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 99),
    0x00406047    /*  95 (LREF-PUSH 6 1) */,
    0x00000048    /*  96 (LREF0-PUSH) */,
    0x0000205f    /*  97 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* filter */,
    0x0000200f    /*  99 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 105),
    0x00006047    /* 101 (LREF-PUSH 6 0) */,
    0x00000048    /* 102 (LREF0-PUSH) */,
    0x0000205f    /* 103 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* remove */,
    0x00002091    /* 105 (APPEND 2) */,
    0x00000014    /* 106 (RET) */,
    0x00000053    /* 107 (LREF0-RET) */,
    0x00000042    /* 108 (LREF11) */,
    0x0000009e    /* 109 (NUMBERP) */,
    0x0000001e    /* 110 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 115),
    0x00000042    /* 112 (LREF11) */,
    0x00000013    /* 113 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 142),
    0x0000200e    /* 115 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 125),
    0x0000004d    /* 117 (LREF11-PUSH) */,
    0x0000100e    /* 118 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 123),
    0x00000049    /* 120 (LREF1-PUSH) */,
    0x0000105f    /* 121 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* symbol->string */,
    0x00002062    /* 123 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-getservbyname */,
    0x00001018    /* 125 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 126 (LREF0) */,
    0x0000001e    /* 127 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 134),
    0x0000003d    /* 129 (LREF0) */,
    0x000000e3    /* 130 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* port */,
    0x00000013    /* 132 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 141),
    0x0000200e    /* 134 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 141),
    0x00000006    /* 136 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[366])) /* "couldn't find a port number of service:" */,
    0x00000050    /* 138 (LREF21-PUSH) */,
    0x0000205f    /* 139 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000001a    /* 141 (POP-LOCAL-ENV) */,
    0x00001018    /* 142 (PUSH-LOCAL-ENV 1) */,
    0x0080203c    /* 143 (LREF 2 2) */,
    0x0000001e    /* 144 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 173),
    0x0000100e    /* 146 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 151),
    0x00802047    /* 148 (LREF-PUSH 2 2) */,
    0x0000105f    /* 149 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* sys-gethostbyname */,
    0x00001018    /* 151 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 152 (LREF0) */,
    0x0000001e    /* 153 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 157),
    0x00000013    /* 155 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 164),
    0x0000200e    /* 157 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 164),
    0x00000006    /* 159 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[369])) /* "couldn't find host: " */,
    0x00803047    /* 161 (LREF-PUSH 3 2) */,
    0x0000205f    /* 162 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000016    /* 164 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[50])) /* #<compiled-code (make-sockaddrs #f)@0x7ff9b8a35a80> */,
    0x0000000d    /* 166 (PUSH) */,
    0x0000003d    /* 167 (LREF0) */,
    0x000000e3    /* 168 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* addresses */,
    0x00002063    /* 170 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* map */,
    0x00000014    /* 172 (RET) */,
    0x0000500e    /* 173 (PRE-CALL 5) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]) + 186),
    0x0000005e    /* 175 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <sockaddr-in> */,
    0x00000006    /* 177 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :host */,
    0x00000006    /* 179 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :any */,
    0x00000006    /* 181 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :port */,
    0x00000048    /* 183 (LREF0-PUSH) */,
    0x0000505f    /* 184 (GREF-CALL 5) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00001088    /* 186 (LIST 1) */,
    0x00000014    /* 187 (RET) */,
    /* %toplevel */
    0x00003019    /*   0 (LOCAL-ENV-CLOSURES 3) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[657])) /* (#<compiled-code (make-sockaddrs #:G2463)@0x7ff9b8a35c00> #<compiled-code (make-sockaddrs #:G2462)@0x7ff9b8a35ba0> #<compiled-code (make-sockaddrs #:G2461)@0x7ff9b8a35b40>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1727]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sockaddrs */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1727]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[51])) /* #<compiled-code make-sockaddrs@0x7ff9b8a35ae0> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-sockaddrs */,
    0x00000014    /*  16 (RET) */,
    /* (call-with-client-socket #f) */
    0x00000041    /*   0 (LREF10) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]) + 13),
    0x0000300e    /*   3 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]) + 18),
    0x00803047    /*   5 (LREF-PUSH 3 2) */,
    0x00000006    /*   6 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :buffering */,
    0x0000004c    /*   8 (LREF10-PUSH) */,
    0x0000305f    /*   9 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-input-port */,
    0x00000013    /*  11 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]) + 18),
    0x0000100e    /*  13 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]) + 18),
    0x00803047    /*  15 (LREF-PUSH 3 2) */,
    0x0000105f    /*  16 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-input-port */,
    0x0000000d    /*  18 (PUSH) */,
    0x0000003d    /*  19 (LREF0) */,
    0x0000001e    /*  20 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]) + 32),
    0x0000300e    /*  22 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]) + 37),
    0x00803047    /*  24 (LREF-PUSH 3 2) */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :buffering */,
    0x00000048    /*  27 (LREF0-PUSH) */,
    0x0000305f    /*  28 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-output-port */,
    0x00000013    /*  30 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]) + 37),
    0x0000100e    /*  32 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]) + 37),
    0x00803047    /*  34 (LREF-PUSH 3 2) */,
    0x0000105f    /*  35 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-output-port */,
    0x0000000d    /*  37 (PUSH) */,
    0x0040303c    /*  38 (LREF 3 1) */,
    0x00002012    /*  39 (TAIL-CALL 2) */,
    0x00000014    /*  40 (RET) */,
    /* (call-with-client-socket #f) */
    0x00803047    /*   0 (LREF-PUSH 3 2) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* socket-close */,
    0x00000014    /*   3 (RET) */,
    /* call-with-client-socket */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000005    /*   1 (CONSTU) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000005    /*   3 (CONSTU) */,
    0x00003018    /*   4 (PUSH-LOCAL-ENV 3) */,
    0x0000003f    /*   5 (LREF2) */,
    0x00000022    /*   6 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 45),
    0x0000100e    /*   8 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 13),
    0x00000049    /*  10 (LREF1-PUSH) */,
    0x0000105f    /*  11 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 18),
    0x00000004    /*  15 (CONSTF) */,
    0x00000013    /*  16 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 19),
    0x0000003e    /*  18 (LREF1) */,
    0x00001018    /*  19 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  20 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 25),
    0x0000004c    /*  22 (LREF10-PUSH) */,
    0x0000105f    /*  23 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  25 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 30),
    0x00000004    /*  27 (CONSTF) */,
    0x00000013    /*  28 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 31),
    0x00000041    /*  30 (LREF10) */,
    0x00001018    /*  31 (PUSH-LOCAL-ENV 1) */,
    0x00000016    /*  32 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[53])) /* #<compiled-code (call-with-client-socket #f)@0x7ff9bcf3fcc0> */,
    0x0000000d    /*  34 (PUSH) */,
    0x00000016    /*  35 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[54])) /* #<compiled-code (call-with-client-socket #f)@0x7ff9bcf3fba0> */,
    0x0000000d    /*  37 (PUSH) */,
    0x00000006    /*  38 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :source-info */,
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2151[816])) /* ("libnet.scm" 878) */,
    0x00004060    /*  42 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* %unwind-protect */,
    0x00000014    /*  44 (RET) */,
    0x00000078    /*  45 (LREF2-CDR) */,
    0x00000022    /*  46 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 54),
    0x00000006    /*  48 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[279])) /* "keyword list not even" */,
    0x0000004a    /*  50 (LREF2-PUSH) */,
    0x00002060    /*  51 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /*  53 (RET) */,
    0x0000100e    /*  54 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 59),
    0x0000006c    /*  56 (LREF2-CAR) */,
    0x00001062    /*  57 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /*  59 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  60 (LREF0) */,
    0x0000002e    /*  61 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :input-buffering */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 72)  /*     72 */,
    0x00000043    /*  64 (LREF12) */,
    0x00000087    /*  65 (CDDR-PUSH) */,
    0x00000043    /*  66 (LREF12) */,
    0x00000083    /*  67 (CADR-PUSH) */,
    0x0000004c    /*  68 (LREF10-PUSH) */,
    0x0000201b    /*  69 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 5),
    0x00000014    /*  71 (RET) */,
    0x0000003d    /*  72 (LREF0) */,
    0x0000002e    /*  73 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :output-buffering */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 84)  /*     84 */,
    0x00000043    /*  76 (LREF12) */,
    0x00000087    /*  77 (CDDR-PUSH) */,
    0x0000004d    /*  78 (LREF11-PUSH) */,
    0x00000043    /*  79 (LREF12) */,
    0x00000083    /*  80 (CADR-PUSH) */,
    0x0000201b    /*  81 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 5),
    0x00000014    /*  83 (RET) */,
    0x0000200e    /*  84 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 91),
    0x00000006    /*  86 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2150[281])) /* "unknown keyword ~S" */,
    0x00000070    /*  88 (LREF12-CAR) */,
    0x00002062    /*  89 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x00000043    /*  91 (LREF12) */,
    0x00000087    /*  92 (CDDR-PUSH) */,
    0x0000004d    /*  93 (LREF11-PUSH) */,
    0x0000004c    /*  94 (LREF10-PUSH) */,
    0x0000201b    /*  95 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]) + 5),
    0x00000014    /*  97 (RET) */,
    0x00000014    /*  98 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1888]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-client-socket */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[1888]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[55])) /* #<compiled-code call-with-client-socket@0x7ff9bcf3fde0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-client-socket */,
    0x00000014    /*  14 (RET) */,
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
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[8])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[9])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[11])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[12])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[13])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[14])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[15])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[16])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[17])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[19])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[20])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[21])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[22])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[23])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[24])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[25])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[26])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[27])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[28])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[29])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[31])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[32])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[33])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[34])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[35])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[36])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[37])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[38])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[39])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[40])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[41])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[42])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[43])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[44])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[45])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[46])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[47])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[48])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[49])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[50])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[51])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[52])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[54])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[55])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[56])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[57])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[58])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[59])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[60])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[61])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[62])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[63])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[64])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[65])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[66])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[67])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[68])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[69])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[70])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[72])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[73])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[75])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[76])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[77])},
       { SCM_MAKE_INT(182U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[79])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[80])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[82])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[83])},
       { SCM_OBJ(&scm__rc.d2151[84]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[81]), SCM_OBJ(&scm__rc.d2151[85])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(214U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[88])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[89])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[91])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[92])},
       { SCM_OBJ(&scm__rc.d2151[93]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[90]), SCM_OBJ(&scm__rc.d2151[94])},
       { SCM_MAKE_INT(219U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[96])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[97])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[99])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[100])},
       { SCM_OBJ(&scm__rc.d2151[101]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[98]), SCM_OBJ(&scm__rc.d2151[102])},
       { SCM_MAKE_INT(231U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[104])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[105])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[107])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[108])},
       { SCM_OBJ(&scm__rc.d2151[109]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[106]), SCM_OBJ(&scm__rc.d2151[110])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[112])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[113])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[114])},
       { SCM_MAKE_INT(236U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[116])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[117])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[119])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[120])},
       { SCM_OBJ(&scm__rc.d2151[121]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[118]), SCM_OBJ(&scm__rc.d2151[122])},
       { SCM_MAKE_INT(247U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[124])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[125])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[127])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[128])},
       { SCM_OBJ(&scm__rc.d2151[129]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[126]), SCM_OBJ(&scm__rc.d2151[130])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[132])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[133])},
       { SCM_MAKE_INT(272U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[135])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[136])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[138])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[139])},
       { SCM_OBJ(&scm__rc.d2151[140]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[137]), SCM_OBJ(&scm__rc.d2151[141])},
       { SCM_MAKE_INT(275U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[143])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[144])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[146])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[147])},
       { SCM_OBJ(&scm__rc.d2151[148]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[145]), SCM_OBJ(&scm__rc.d2151[149])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[151])},
       { SCM_MAKE_INT(278U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[153])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[154])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[156])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[157])},
       { SCM_OBJ(&scm__rc.d2151[158]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[155]), SCM_OBJ(&scm__rc.d2151[159])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[161])},
       { SCM_MAKE_INT(281U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[163])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[164])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[166])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[167])},
       { SCM_OBJ(&scm__rc.d2151[168]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[165]), SCM_OBJ(&scm__rc.d2151[169])},
       { SCM_MAKE_INT(284U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[171])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[172])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[174])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[175])},
       { SCM_OBJ(&scm__rc.d2151[176]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[173]), SCM_OBJ(&scm__rc.d2151[177])},
       { SCM_MAKE_INT(287U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[179])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[180])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[182])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[183])},
       { SCM_OBJ(&scm__rc.d2151[184]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[181]), SCM_OBJ(&scm__rc.d2151[185])},
       { SCM_MAKE_INT(290U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[187])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[188])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[190])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[191])},
       { SCM_OBJ(&scm__rc.d2151[192]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[189]), SCM_OBJ(&scm__rc.d2151[193])},
       { SCM_MAKE_INT(293U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[195])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[196])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[198])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[199])},
       { SCM_OBJ(&scm__rc.d2151[200]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[197]), SCM_OBJ(&scm__rc.d2151[201])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[203])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[204])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[205])},
       { SCM_MAKE_INT(296U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[207])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[208])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[210])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[211])},
       { SCM_OBJ(&scm__rc.d2151[212]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[209]), SCM_OBJ(&scm__rc.d2151[213])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[204])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[215])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[216])},
       { SCM_MAKE_INT(300U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[218])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[219])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[221])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[222])},
       { SCM_OBJ(&scm__rc.d2151[223]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[220]), SCM_OBJ(&scm__rc.d2151[224])},
       { SCM_MAKE_INT(304U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[226])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[227])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[229])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[230])},
       { SCM_OBJ(&scm__rc.d2151[231]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[228]), SCM_OBJ(&scm__rc.d2151[232])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[204])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[234])},
       { SCM_MAKE_INT(307U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[236])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[237])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[239])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[240])},
       { SCM_OBJ(&scm__rc.d2151[241]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[238]), SCM_OBJ(&scm__rc.d2151[242])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[204])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[244])},
       { SCM_MAKE_INT(311U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[246])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[247])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[249])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[250])},
       { SCM_OBJ(&scm__rc.d2151[251]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[248]), SCM_OBJ(&scm__rc.d2151[252])},
       { SCM_MAKE_INT(315U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[254])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[255])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[257])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[258])},
       { SCM_OBJ(&scm__rc.d2151[259]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[256]), SCM_OBJ(&scm__rc.d2151[260])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[204])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[262])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[263])},
       { SCM_MAKE_INT(319U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[265])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[266])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[268])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[269])},
       { SCM_OBJ(&scm__rc.d2151[270]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[267]), SCM_OBJ(&scm__rc.d2151[271])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[273])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[274])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[275])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[276])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[277])},
       { SCM_MAKE_INT(324U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[279])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[280])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[282])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[283])},
       { SCM_OBJ(&scm__rc.d2151[284]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[281]), SCM_OBJ(&scm__rc.d2151[285])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[287])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[288])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[289])},
       { SCM_MAKE_INT(332U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[291])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[292])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[294])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[295])},
       { SCM_OBJ(&scm__rc.d2151[296]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[293]), SCM_OBJ(&scm__rc.d2151[297])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[299])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[300])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[301])},
       { SCM_MAKE_INT(336U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[303])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[304])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[306])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[307])},
       { SCM_OBJ(&scm__rc.d2151[308]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[305]), SCM_OBJ(&scm__rc.d2151[309])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[311])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[312])},
       { SCM_MAKE_INT(392U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[314])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[315])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[317])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[318])},
       { SCM_OBJ(&scm__rc.d2151[319]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[316]), SCM_OBJ(&scm__rc.d2151[320])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(443U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[323])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[324])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[326])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[327])},
       { SCM_OBJ(&scm__rc.d2151[328]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[325]), SCM_OBJ(&scm__rc.d2151[329])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[331])},
       { SCM_MAKE_INT(446U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[333])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[334])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[336])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[337])},
       { SCM_OBJ(&scm__rc.d2151[338]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[335]), SCM_OBJ(&scm__rc.d2151[339])},
       { SCM_MAKE_INT(449U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[341])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[342])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[344])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[345])},
       { SCM_OBJ(&scm__rc.d2151[346]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[343]), SCM_OBJ(&scm__rc.d2151[347])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(452U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[350])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[351])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[353])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[354])},
       { SCM_OBJ(&scm__rc.d2151[355]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[352]), SCM_OBJ(&scm__rc.d2151[356])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[358])},
       { SCM_MAKE_INT(455U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[360])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[361])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[363])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[364])},
       { SCM_OBJ(&scm__rc.d2151[365]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[362]), SCM_OBJ(&scm__rc.d2151[366])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[358])},
       { SCM_MAKE_INT(458U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[369])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[370])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[372])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[373])},
       { SCM_OBJ(&scm__rc.d2151[374]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[371]), SCM_OBJ(&scm__rc.d2151[375])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(461U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[378])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[379])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[381])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[382])},
       { SCM_OBJ(&scm__rc.d2151[383]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[380]), SCM_OBJ(&scm__rc.d2151[384])},
       { SCM_MAKE_INT(462U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[386])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[387])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[389])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[390])},
       { SCM_OBJ(&scm__rc.d2151[391]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[388]), SCM_OBJ(&scm__rc.d2151[392])},
       { SCM_MAKE_INT(463U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[394])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[395])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[397])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[398])},
       { SCM_OBJ(&scm__rc.d2151[399]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[396]), SCM_OBJ(&scm__rc.d2151[400])},
       { SCM_MAKE_INT(464U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[402])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[403])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[405])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[406])},
       { SCM_OBJ(&scm__rc.d2151[407]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[404]), SCM_OBJ(&scm__rc.d2151[408])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[410])},
       { SCM_MAKE_INT(608U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[412])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[413])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[415])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[416])},
       { SCM_OBJ(&scm__rc.d2151[417]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[414]), SCM_OBJ(&scm__rc.d2151[418])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(629U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[421])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[422])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[424])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[425])},
       { SCM_OBJ(&scm__rc.d2151[426]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[423]), SCM_OBJ(&scm__rc.d2151[427])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[273])},
       { SCM_MAKE_INT(635U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[430])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[431])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[433])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[434])},
       { SCM_OBJ(&scm__rc.d2151[435]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[432]), SCM_OBJ(&scm__rc.d2151[436])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[358])},
       { SCM_MAKE_INT(639U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[439])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[440])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[442])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[443])},
       { SCM_OBJ(&scm__rc.d2151[444]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[441]), SCM_OBJ(&scm__rc.d2151[445])},
       { SCM_MAKE_INT(0), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[447])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[449])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[447])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[447])},
       { SCM_OBJ(&scm__rc.d2151[452]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[451]), SCM_OBJ(&scm__rc.d2151[453])},
       { SCM_OBJ(&scm__rc.d2151[450]), SCM_OBJ(&scm__rc.d2151[454])},
       { SCM_OBJ(&scm__rc.d2151[448]), SCM_OBJ(&scm__rc.d2151[455])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[456])},
       { SCM_MAKE_INT(655U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[458])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[459])},
       { SCM_OBJ(&scm__rc.d2151[460]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(664U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[463])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[464])},
       { SCM_OBJ(&scm__rc.d2151[465]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(673U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[469])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[470])},
       { SCM_OBJ(&scm__rc.d2151[471]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(696U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[474])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[475])},
       { SCM_OBJ(&scm__rc.d2151[476]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(700U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[480])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[481])},
       { SCM_OBJ(&scm__rc.d2151[482]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[486])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[487]), SCM_OBJ(&scm__rc.d2151[488])},
       { SCM_OBJ(&scm__rc.d2151[489]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[487]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[491]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[493])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[494]), SCM_OBJ(&scm__rc.d2151[495])},
       { SCM_OBJ(&scm__rc.d2151[496]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[16]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[499])},
       { SCM_MAKE_INT(704U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[501])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[502])},
       { SCM_OBJ(&scm__rc.d2151[503]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(715U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[506])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[507])},
       { SCM_OBJ(&scm__rc.d2151[508]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[513])},
       { SCM_OBJ(&scm__rc.d2151[514]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[512]), SCM_OBJ(&scm__rc.d2151[515])},
       { SCM_OBJ(&scm__rc.d2151[511]), SCM_OBJ(&scm__rc.d2151[516])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[517])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[518])},
       { SCM_MAKE_INT(741U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[520])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[521])},
       { SCM_OBJ(&scm__rc.d2151[522]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[515])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[525])},
       { SCM_MAKE_INT(753U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[527])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[528])},
       { SCM_OBJ(&scm__rc.d2151[529]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(758U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[533])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[534])},
       { SCM_OBJ(&scm__rc.d2151[535]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[538])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(767U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[541])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[542])},
       { SCM_OBJ(&scm__rc.d2151[543]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[27]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[547])},
       { SCM_OBJ(&scm__rc.d2151[548]), SCM_OBJ(&scm__rc.d2151[488])},
       { SCM_OBJ(&scm__rc.d2151[549]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[548]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[551]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[553])},
       { SCM_OBJ(&scm__rc.d2151[554]), SCM_OBJ(&scm__rc.d2151[495])},
       { SCM_OBJ(&scm__rc.d2151[555]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[30]), SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(761U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[559])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[560])},
       { SCM_OBJ(&scm__rc.d2151[561]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[564])},
       { SCM_MAKE_INT(783U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[566])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[567])},
       { SCM_OBJ(&scm__rc.d2151[568]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[571])},
       { SCM_MAKE_INT(781U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[573])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[574])},
       { SCM_OBJ(&scm__rc.d2151[575]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[578])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[581])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[36]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[35]), SCM_OBJ(&scm__rc.d2151[584])},
       { SCM_OBJ(&scm__rc.d2153[34]), SCM_OBJ(&scm__rc.d2151[585])},
       { SCM_OBJ(&scm__rc.d2153[33]), SCM_OBJ(&scm__rc.d2151[586])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[588])},
       { SCM_OBJ(&scm__rc.d2151[589]), SCM_OBJ(&scm__rc.d2151[488])},
       { SCM_OBJ(&scm__rc.d2151[590]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[37]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[592])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[593])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[594])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(846U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[598])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[599])},
       { SCM_OBJ(&scm__rc.d2151[600]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[603])},
       { SCM_OBJ(&scm__rc.d2151[604]), SCM_OBJ(&scm__rc.d2151[488])},
       { SCM_OBJ(&scm__rc.d2151[605]), SCM_NIL},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2151[603])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[607])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(811U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[610])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[611])},
       { SCM_OBJ(&scm__rc.d2151[612]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[604]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[615]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(847U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[618])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[619])},
       { SCM_OBJ(&scm__rc.d2151[620]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[596]), SCM_OBJ(&scm__rc.d2151[488])},
       { SCM_OBJ(&scm__rc.d2151[623]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[596]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[625]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[532])},
       { SCM_MAKE_INT(779U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[628])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[629])},
       { SCM_OBJ(&scm__rc.d2151[630]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[633])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(858U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[636])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[637])},
       { SCM_OBJ(&scm__rc.d2151[638]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[641])},
       { SCM_MAKE_INT(860U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[643])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[644])},
       { SCM_OBJ(&scm__rc.d2151[645]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[648])},
       { SCM_MAKE_INT(861U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[650])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[651])},
       { SCM_OBJ(&scm__rc.d2151[652]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[49]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2153[48]), SCM_OBJ(&scm__rc.d2151[655])},
       { SCM_OBJ(&scm__rc.d2153[47]), SCM_OBJ(&scm__rc.d2151[656])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[658])},
       { SCM_OBJ(&scm__rc.d2151[659]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[660])},
       { SCM_OBJ(&scm__rc.d2151[661]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[662])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[663])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[664])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[658]), SCM_OBJ(&scm__rc.d2151[666])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[668]), SCM_OBJ(&scm__rc.d2151[669])},
       { SCM_OBJ(&scm__sc.d2150[292]), SCM_OBJ(&scm__rc.d2151[358])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[671])},
       { SCM_OBJ(&scm__rc.d2151[672]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[673])},
       { SCM_OBJ(&scm__rc.d2151[674]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[670]), SCM_OBJ(&scm__rc.d2151[675])},
       { SCM_OBJ(&scm__rc.d2151[667]), SCM_OBJ(&scm__rc.d2151[676])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[677])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[678])},
       { SCM_OBJ(&scm__rc.d2151[679]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[680])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[499])},
       { SCM_OBJ(&scm__rc.d2151[682]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[683])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[685])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[686])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[687])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[688])},
       { SCM_OBJ(&scm__rc.d2151[689]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[690])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[151])},
       { SCM_OBJ(&scm__rc.d2151[692]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[693])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[694])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[695])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[697])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[698])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[699])},
       { SCM_OBJ(&scm__rc.d2151[700]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[696]), SCM_OBJ(&scm__rc.d2151[701])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[702])},
       { SCM_OBJ(&scm__rc.d2151[703]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[704])},
       { SCM_OBJ(&scm__rc.d2151[705]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[691]), SCM_OBJ(&scm__rc.d2151[706])},
       { SCM_OBJ(&scm__rc.d2151[684]), SCM_OBJ(&scm__rc.d2151[707])},
       { SCM_OBJ(&scm__rc.d2151[681]), SCM_OBJ(&scm__rc.d2151[708])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[420])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[711])},
       { SCM_OBJ(&scm__rc.d2151[712]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[710]), SCM_OBJ(&scm__rc.d2151[713])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[714])},
       { SCM_OBJ(&scm__rc.d2151[715]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[716])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[717]), SCM_OBJ(&scm__rc.d2151[718])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[719])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[719])},
       { SCM_OBJ(&scm__rc.d2151[721]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[720]), SCM_OBJ(&scm__rc.d2151[722])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[723])},
       { SCM_OBJ(&scm__rc.d2151[724]), SCM_OBJ(&scm__rc.d2151[718])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[725])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[726])},
       { SCM_OBJ(&scm__rc.d2151[727]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[709]), SCM_OBJ(&scm__rc.d2151[728])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[729])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[499])},
       { SCM_OBJ(&scm__rc.d2151[731]), SCM_OBJ(&scm__rc.d2151[499])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[358])},
       { SCM_OBJ(&scm__rc.d2151[733]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[734])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[735])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[499])},
       { SCM_OBJ(&scm__rc.d2151[737]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[738])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[739])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[740])},
       { SCM_OBJ(&scm__rc.d2151[741]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[742])},
       { SCM_OBJ(&scm__rc.d2151[736]), SCM_OBJ(&scm__rc.d2151[743])},
       { SCM_OBJ(&scm__sc.d2150[366]), SCM_OBJ(&scm__rc.d2151[499])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[745])},
       { SCM_OBJ(&scm__rc.d2151[746]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[747])},
       { SCM_OBJ(&scm__rc.d2151[748]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[744]), SCM_OBJ(&scm__rc.d2151[749])},
       { SCM_OBJ(&scm__rc.d2151[732]), SCM_OBJ(&scm__rc.d2151[750])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[751])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[753])},
       { SCM_OBJ(&scm__sc.d2150[369]), SCM_OBJ(&scm__rc.d2151[753])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[755])},
       { SCM_OBJ(&scm__rc.d2151[756]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[757])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[758])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[499])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[760])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[761])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[762])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[763])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[764])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[766])},
       { SCM_OBJ(&scm__rc.d2151[767]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[768])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[769])},
       { SCM_OBJ(&scm__rc.d2151[770]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[765]), SCM_OBJ(&scm__rc.d2151[771])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[772])},
       { SCM_OBJ(&scm__rc.d2151[773]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[759]), SCM_OBJ(&scm__rc.d2151[774])},
       { SCM_OBJ(&scm__rc.d2151[754]), SCM_OBJ(&scm__rc.d2151[775])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[776])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[777])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[760])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[779])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[780])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[781])},
       { SCM_OBJ(&scm__rc.d2151[782]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[783])},
       { SCM_OBJ(&scm__rc.d2151[784]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[778]), SCM_OBJ(&scm__rc.d2151[785])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[786])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[787])},
       { SCM_OBJ(&scm__rc.d2151[788]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[752]), SCM_OBJ(&scm__rc.d2151[789])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[790])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[791])},
       { SCM_OBJ(&scm__rc.d2151[792]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[730]), SCM_OBJ(&scm__rc.d2151[793])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[794])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[795])},
       { SCM_OBJ(&scm__rc.d2151[796]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[665]), SCM_OBJ(&scm__rc.d2151[797])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[798])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(871U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[802])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[803])},
       { SCM_OBJ(&scm__rc.d2151[804]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(850U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[807])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[808])},
       { SCM_OBJ(&scm__rc.d2151[809]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_OBJ(&scm__rc.d2151[812]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[813]), SCM_NIL},
       { SCM_MAKE_INT(878U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[815])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[485])},
       { SCM_OBJ(&scm__rc.d2151[818]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[817]), SCM_OBJ(&scm__rc.d2151[819])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[820])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[821])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[822])},
       { SCM_MAKE_INT(876U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[87]), SCM_OBJ(&scm__rc.d2151[824])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[825])},
       { SCM_OBJ(&scm__rc.d2151[826]), SCM_NIL},
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(6, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
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
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(239, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
  },
};
SCM_DEFINE_GENERIC(Scm_GenericSockAddrName, NULL, NULL);

SCM_DEFINE_GENERIC(Scm_GenericSockAddrFamily, NULL, NULL);

SCM_DEFINE_GENERIC(Scm_GenericSockAddrAddr, NULL, NULL);

SCM_DEFINE_GENERIC(Scm_GenericSockAddrPort, NULL, NULL);


static ScmObj libnetsockaddr_name2155(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
ScmObj SCM_RESULT;

#line 103 "libnet.scm"
((void )(addr));

#line 104 "libnet.scm"
{SCM_RESULT=(SCM_OBJ(&scm__sc.d2150[79]));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_name2155__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrClass), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_name2155__STUB, &Scm_GenericSockAddrName, 1, 0, libnetsockaddr_name2155__SPEC, libnetsockaddr_name2155, NULL);


static ScmObj libnetsockaddr_family2156(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
ScmObj SCM_RESULT;

#line 107 "libnet.scm"
((void )(addr));

#line 108 "libnet.scm"
{SCM_RESULT=(scm__rc.d2149[83]);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_family2156__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrClass), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_family2156__STUB, &Scm_GenericSockAddrFamily, 1, 0, libnetsockaddr_family2156__SPEC, libnetsockaddr_family2156, NULL);


static ScmObj libnetsockaddr_name2157(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
ScmObj SCM_RESULT;

#line 111 "libnet.scm"
{SCM_RESULT=(
(((((unsigned )((((ScmSockAddr* )(addr)))->addrlen)))>(
sizeof(struct sockaddr )))?(
SCM_MAKE_STR(((((ScmSockAddrUn* )(addr)))->addr).sun_path)):(
SCM_MAKE_STR(""))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_name2157__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrUnClass), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_name2157__STUB, &Scm_GenericSockAddrName, 1, 0, libnetsockaddr_name2157__SPEC, libnetsockaddr_name2157, NULL);


static ScmObj libnetsockaddr_name2158(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
ScmObj SCM_RESULT;

#line 120 "libnet.scm"
{ScmSockAddrIn* a=((ScmSockAddrIn* )(addr));u_long addr=
ntohl(((a)->addr).sin_addr.s_addr);u_short port=
ntohs(((a)->addr).sin_port);char buf[10];
#line 124 "libnet.scm"
snprintf(buf,10,":%d",port);
{SCM_RESULT=(
Scm_StringAppendC(
SCM_STRING(Scm_InetAddressToString(Scm_MakeIntegerU(addr),AF_INET)),buf,-1,-1));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_name2158__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrInClass), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_name2158__STUB, &Scm_GenericSockAddrName, 1, 0, libnetsockaddr_name2158__SPEC, libnetsockaddr_name2158, NULL);


static ScmObj libnetsockaddr_family2159(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
ScmObj SCM_RESULT;

#line 131 "libnet.scm"
((void )(addr));

#line 132 "libnet.scm"
{SCM_RESULT=(scm__rc.d2149[84]);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_family2159__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrUnClass), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_family2159__STUB, &Scm_GenericSockAddrFamily, 1, 0, libnetsockaddr_family2159__SPEC, libnetsockaddr_family2159, NULL);


static ScmObj libnetsockaddr_family2160(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
ScmObj SCM_RESULT;

#line 135 "libnet.scm"
((void )(addr));

#line 136 "libnet.scm"
{SCM_RESULT=(scm__rc.d2149[85]);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_family2160__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrInClass), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_family2160__STUB, &Scm_GenericSockAddrFamily, 1, 0, libnetsockaddr_family2160__SPEC, libnetsockaddr_family2160, NULL);


static ScmObj libnetsockaddr_addr2161(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
u_long SCM_RESULT;

#line 139 "libnet.scm"
{ScmSockAddrIn* a=((ScmSockAddrIn* )(addr));
{SCM_RESULT=(ntohl(((a)->addr).sin_addr.s_addr));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_addr2161__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrInClass), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_addr2161__STUB, &Scm_GenericSockAddrAddr, 1, 0, libnetsockaddr_addr2161__SPEC, libnetsockaddr_addr2161, NULL);


static ScmObj libnetsockaddr_port2162(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
u_short SCM_RESULT;

#line 143 "libnet.scm"
{ScmSockAddrIn* a=((ScmSockAddrIn* )(addr));
{SCM_RESULT=(ntohs(((a)->addr).sin_port));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_port2162__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrInClass), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_port2162__STUB, &Scm_GenericSockAddrPort, 1, 0, libnetsockaddr_port2162__SPEC, libnetsockaddr_port2162, NULL);

#if defined(HAVE_IPV6)

static ScmObj libnetsockaddr_family2163(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
ScmObj SCM_RESULT;

#line 148 "libnet.scm"
((void )(addr));

#line 149 "libnet.scm"
{SCM_RESULT=(scm__rc.d2164[0]);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_family2163__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrIn6Class), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_family2163__STUB, &Scm_GenericSockAddrFamily, 1, 0, libnetsockaddr_family2163__SPEC, libnetsockaddr_family2163, NULL);

#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
static ScmObj in6_addr(ScmSockAddrIn6* a){{
#line 152 "libnet.scm"
{uint32_t* p=
((uint32_t* )(((a)->addr).sin6_addr.s6_addr));ScmObj n=
Scm_MakeIntegerFromUI(ntohl(*((p)++)));
{int i=0;int cise__2166=3;for (; (i)<(cise__2166); (i)++){
n=(Scm_LogIor(Scm_Ash(n,32),
Scm_MakeIntegerFromUI(ntohl(*((p)++)))));}}
return (n);}}}
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)

static ScmObj libnetsockaddr_addr2167(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
ScmObj SCM_RESULT;

#line 161 "libnet.scm"
{SCM_RESULT=(in6_addr(((ScmSockAddrIn6* )(addr))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_addr2167__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrIn6Class), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_addr2167__STUB, &Scm_GenericSockAddrAddr, 1, 0, libnetsockaddr_addr2167__SPEC, libnetsockaddr_addr2167, NULL);

#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)

static ScmObj libnetsockaddr_port2168(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
u_short SCM_RESULT;

#line 164 "libnet.scm"
{ScmSockAddrIn6* a=((ScmSockAddrIn6* )(addr));
{SCM_RESULT=(ntohs(((a)->addr).sin6_port));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_port2168__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrIn6Class), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_port2168__STUB, &Scm_GenericSockAddrPort, 1, 0, libnetsockaddr_port2168__SPEC, libnetsockaddr_port2168, NULL);

#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)

static ScmObj libnetsockaddr_name2169(ScmNextMethod *nm_ SCM_UNUSED, ScmObj *SCM_FP, int SCM_ARGCNT SCM_UNUSED, void *d_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj SCM_SUBRARGS[1];
  int SCM_i;
  for (SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  {
{
ScmObj SCM_RESULT;

#line 168 "libnet.scm"
{ScmSockAddrIn6* a=((ScmSockAddrIn6* )(addr));ScmObj addr=
in6_addr(a);u_short port=
ntohs(((a)->addr).sin6_port);ScmObj out=
Scm_MakeOutputStringPort(TRUE);
Scm_Printf(SCM_PORT(out),"[%A]:%d",
#line 174 "libnet.scm"
Scm_InetAddressToString(addr,AF_INET6),port);
{SCM_RESULT=(Scm_GetOutputString(SCM_PORT(out),0));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmClass *libnetsockaddr_name2169__SPEC[] = { 
SCM_CLASS_STATIC_PTR(Scm_SockAddrIn6Class), 
};
static SCM_DEFINE_METHOD(libnetsockaddr_name2169__STUB, &Scm_GenericSockAddrName, 1, 0, libnetsockaddr_name2169__SPEC, libnetsockaddr_name2169, NULL);

#endif /* defined(HAVE_IPV6) */

static ScmObj libnetmake_socket(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj domain_scm;
  ScmSmallInt domain;
  ScmObj type_scm;
  ScmSmallInt type;
  ScmObj protocol_scm;
  ScmSmallInt protocol;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("make-socket");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  domain_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(domain_scm)) Scm_Error("ScmSmallInt required, but got %S", domain_scm);
  domain = SCM_INT_VALUE(domain_scm);
  type_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(type_scm)) Scm_Error("ScmSmallInt required, but got %S", type_scm);
  type = SCM_INT_VALUE(type_scm);
  if (SCM_ARGCNT > 2+1) {
    protocol_scm = SCM_SUBRARGS[2];
  } else {
    protocol_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(protocol_scm)) Scm_Error("ScmSmallInt required, but got %S", protocol_scm);
  protocol = SCM_INT_VALUE(protocol_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeSocket(domain,type,protocol));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_address(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("socket-address");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  {
{
ScmObj SCM_RESULT;

#line 215 "libnet.scm"
if ((sock)->address){
{SCM_RESULT=(SCM_OBJ((sock)->address));goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_status(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("socket-status");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  {
{
ScmObj SCM_RESULT;

#line 220 "libnet.scm"
switch ((sock)->status) {
case SCM_SOCKET_STATUS_NONE : {{SCM_RESULT=(scm__rc.d2149[115]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 222 "libnet.scm"
case SCM_SOCKET_STATUS_BOUND : {{SCM_RESULT=(scm__rc.d2149[116]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 223 "libnet.scm"
case SCM_SOCKET_STATUS_LISTENING : {{SCM_RESULT=(scm__rc.d2149[117]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 224 "libnet.scm"
case SCM_SOCKET_STATUS_CONNECTED : {{SCM_RESULT=(scm__rc.d2149[118]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 225 "libnet.scm"
case SCM_SOCKET_STATUS_SHUTDOWN : {{SCM_RESULT=(scm__rc.d2149[119]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 226 "libnet.scm"
case SCM_SOCKET_STATUS_CLOSED : {{SCM_RESULT=(scm__rc.d2149[120]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}default: {
#line 228 "libnet.scm"
Scm_Error("invalid state of socket %S: implementation bugs?",sock);
{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_fd(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("socket-fd");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  {
{
long SCM_RESULT;

#line 232 "libnet.scm"
{SCM_RESULT=(((long )((sock)->fd)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_input_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj buffering_scm = SCM_FALSE;
  ScmObj buffering;
  ScmObj bufferedP_scm = SCM_FALSE;
  ScmObj bufferedP;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("socket-input-port");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[131])) {
      buffering_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[132])) {
      bufferedP_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(buffering_scm)) Scm_Error("scheme object required, but got %S", buffering_scm);
  buffering = (buffering_scm);
  if (!(bufferedP_scm)) Scm_Error("scheme object required, but got %S", bufferedP_scm);
  bufferedP = (bufferedP_scm);
  {
{
ScmObj SCM_RESULT;

#line 238 "libnet.scm"
{int bufmode;
if (!(SCM_FALSEP(bufferedP))){
bufmode=(SCM_PORT_BUFFER_FULL);} else {
#line 242 "libnet.scm"
bufmode=(Scm_BufferingMode(buffering,SCM_PORT_INPUT,SCM_PORT_BUFFER_LINE));}
#line 245 "libnet.scm"
{SCM_RESULT=(Scm_SocketInputPort(sock,bufmode));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_output_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj buffering_scm = SCM_FALSE;
  ScmObj buffering;
  ScmObj bufferedP_scm = SCM_FALSE;
  ScmObj bufferedP;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("socket-output-port");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[131])) {
      buffering_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[132])) {
      bufferedP_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(buffering_scm)) Scm_Error("scheme object required, but got %S", buffering_scm);
  buffering = (buffering_scm);
  if (!(bufferedP_scm)) Scm_Error("scheme object required, but got %S", bufferedP_scm);
  bufferedP = (bufferedP_scm);
  {
{
ScmObj SCM_RESULT;

#line 249 "libnet.scm"
{int bufmode;
if (!(SCM_FALSEP(bufferedP))){
bufmode=(SCM_PORT_BUFFER_FULL);} else {
#line 253 "libnet.scm"
bufmode=(Scm_BufferingMode(buffering,SCM_PORT_OUTPUT,SCM_PORT_BUFFER_LINE));}
#line 256 "libnet.scm"
{SCM_RESULT=(Scm_SocketOutputPort(sock,bufmode));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_shutdown(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj how_scm;
  ScmSmallInt how;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("socket-shutdown");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  if (SCM_ARGCNT > 1+1) {
    how_scm = SCM_SUBRARGS[1];
  } else {
    how_scm = SCM_MAKE_INT(2U);
  }
  if (!SCM_INTP(how_scm)) Scm_Error("ScmSmallInt required, but got %S", how_scm);
  how = SCM_INT_VALUE(how_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketShutdown(sock,how));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_close(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("socket-close");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketClose(sock));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_bind(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj addr_scm;
  ScmSockAddr* addr;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("socket-bind");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  addr_scm = SCM_SUBRARGS[1];
  if (!Scm_SockAddrP(addr_scm)) Scm_Error("socket address required, but got %S", addr_scm);
  addr = SCM_SOCKADDR(addr_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketBind(sock,addr));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_listen(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj backlog_scm;
  ScmSmallInt backlog;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("socket-listen");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  backlog_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(backlog_scm)) Scm_Error("ScmSmallInt required, but got %S", backlog_scm);
  backlog = SCM_INT_VALUE(backlog_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketListen(sock,backlog));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_accept(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("socket-accept");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketAccept(sock));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_connect(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj addr_scm;
  ScmSockAddr* addr;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("socket-connect");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  addr_scm = SCM_SUBRARGS[1];
  if (!Scm_SockAddrP(addr_scm)) Scm_Error("socket address required, but got %S", addr_scm);
  addr = SCM_SOCKADDR(addr_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketConnect(sock,addr));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_getsockname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("socket-getsockname");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketGetSockName(sock));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_getpeername(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("socket-getpeername");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketGetPeerName(sock));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_send(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj msg_scm;
  ScmObj msg;
  ScmObj flags_scm;
  ScmSmallInt flags;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("socket-send");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  msg_scm = SCM_SUBRARGS[1];
  if (!(msg_scm)) Scm_Error("scheme object required, but got %S", msg_scm);
  msg = (msg_scm);
  if (SCM_ARGCNT > 2+1) {
    flags_scm = SCM_SUBRARGS[2];
  } else {
    flags_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(flags_scm)) Scm_Error("ScmSmallInt required, but got %S", flags_scm);
  flags = SCM_INT_VALUE(flags_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketSend(sock,msg,flags));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_sendto(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj msg_scm;
  ScmObj msg;
  ScmObj to_scm;
  ScmSockAddr* to;
  ScmObj flags_scm;
  ScmSmallInt flags;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("socket-sendto");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  msg_scm = SCM_SUBRARGS[1];
  if (!(msg_scm)) Scm_Error("scheme object required, but got %S", msg_scm);
  msg = (msg_scm);
  to_scm = SCM_SUBRARGS[2];
  if (!Scm_SockAddrP(to_scm)) Scm_Error("socket address required, but got %S", to_scm);
  to = SCM_SOCKADDR(to_scm);
  if (SCM_ARGCNT > 3+1) {
    flags_scm = SCM_SUBRARGS[3];
  } else {
    flags_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(flags_scm)) Scm_Error("ScmSmallInt required, but got %S", flags_scm);
  flags = SCM_INT_VALUE(flags_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketSendTo(sock,msg,to,flags));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_sendmsg(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj msg_scm;
  ScmObj msg;
  ScmObj flags_scm;
  ScmSmallInt flags;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("socket-sendmsg");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  msg_scm = SCM_SUBRARGS[1];
  if (!(msg_scm)) Scm_Error("scheme object required, but got %S", msg_scm);
  msg = (msg_scm);
  if (SCM_ARGCNT > 2+1) {
    flags_scm = SCM_SUBRARGS[2];
  } else {
    flags_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(flags_scm)) Scm_Error("ScmSmallInt required, but got %S", flags_scm);
  flags = SCM_INT_VALUE(flags_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketSendMsg(sock,msg,flags));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_recv(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj bytes_scm;
  ScmSmallInt bytes;
  ScmObj flags_scm;
  ScmSmallInt flags;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("socket-recv");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  bytes_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(bytes_scm)) Scm_Error("ScmSmallInt required, but got %S", bytes_scm);
  bytes = SCM_INT_VALUE(bytes_scm);
  if (SCM_ARGCNT > 2+1) {
    flags_scm = SCM_SUBRARGS[2];
  } else {
    flags_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(flags_scm)) Scm_Error("ScmSmallInt required, but got %S", flags_scm);
  flags = SCM_INT_VALUE(flags_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketRecv(sock,bytes,flags));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_recvX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj buf_scm;
  ScmUVector* buf;
  ScmObj flags_scm;
  ScmSmallInt flags;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("socket-recv!");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  buf_scm = SCM_SUBRARGS[1];
  if (!SCM_UVECTORP(buf_scm)) Scm_Error("<uvector> required, but got %S", buf_scm);
  buf = SCM_UVECTOR(buf_scm);
  if (SCM_ARGCNT > 2+1) {
    flags_scm = SCM_SUBRARGS[2];
  } else {
    flags_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(flags_scm)) Scm_Error("ScmSmallInt required, but got %S", flags_scm);
  flags = SCM_INT_VALUE(flags_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketRecvX(sock,buf,flags));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_recvfrom(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj bytes_scm;
  ScmSmallInt bytes;
  ScmObj flags_scm;
  ScmSmallInt flags;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("socket-recvfrom");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  bytes_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(bytes_scm)) Scm_Error("ScmSmallInt required, but got %S", bytes_scm);
  bytes = SCM_INT_VALUE(bytes_scm);
  if (SCM_ARGCNT > 2+1) {
    flags_scm = SCM_SUBRARGS[2];
  } else {
    flags_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(flags_scm)) Scm_Error("ScmSmallInt required, but got %S", flags_scm);
  flags = SCM_INT_VALUE(flags_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketRecvFrom(sock,bytes,flags));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_recvfromX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj buf_scm;
  ScmUVector* buf;
  ScmObj addrs_scm;
  ScmObj addrs;
  ScmObj flags_scm;
  ScmSmallInt flags;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("socket-recvfrom!");
  if (SCM_ARGCNT >= 5
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 4 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  buf_scm = SCM_SUBRARGS[1];
  if (!SCM_UVECTORP(buf_scm)) Scm_Error("<uvector> required, but got %S", buf_scm);
  buf = SCM_UVECTOR(buf_scm);
  addrs_scm = SCM_SUBRARGS[2];
  if (!(addrs_scm)) Scm_Error("scheme object required, but got %S", addrs_scm);
  addrs = (addrs_scm);
  if (SCM_ARGCNT > 3+1) {
    flags_scm = SCM_SUBRARGS[3];
  } else {
    flags_scm = SCM_MAKE_INT(0);
  }
  if (!SCM_INTP(flags_scm)) Scm_Error("ScmSmallInt required, but got %S", flags_scm);
  flags = SCM_INT_VALUE(flags_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketRecvFromX(sock,buf,addrs,flags));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_buildmsg(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  ScmSockAddr* name;
  ScmObj iov_scm;
  ScmVector* iov;
  ScmObj control_scm;
  ScmObj control;
  ScmObj flags_scm;
  int flags;
  ScmObj buf_scm;
  ScmUVector* buf;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("socket-buildmsg");
  if (SCM_ARGCNT >= 6
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 5 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_MAYBE_P(Scm_SockAddrP, name_scm)) Scm_Error("socket address or #f required, but got %S", name_scm);
  name = SCM_MAYBE(SCM_SOCKADDR, name_scm);
  iov_scm = SCM_SUBRARGS[1];
  if (!SCM_MAYBE_P(SCM_VECTORP, iov_scm)) Scm_Error("<vector> or #f required, but got %S", iov_scm);
  iov = SCM_MAYBE(SCM_VECTOR, iov_scm);
  control_scm = SCM_SUBRARGS[2];
  if (!(control_scm)) Scm_Error("scheme object required, but got %S", control_scm);
  control = (control_scm);
  flags_scm = SCM_SUBRARGS[3];
  if (!SCM_INTEGERP(flags_scm)) Scm_Error("int required, but got %S", flags_scm);
  flags = Scm_GetInteger(flags_scm);
  if (SCM_ARGCNT > 4+1) {
    buf_scm = SCM_SUBRARGS[4];
  } else {
    buf_scm = SCM_FALSE;
  }
  if (!SCM_MAYBE_P(SCM_UVECTORP, buf_scm)) Scm_Error("<uvector> or #f required, but got %S", buf_scm);
  buf = SCM_MAYBE(SCM_UVECTOR, buf_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketBuildMsg(name,iov,control,flags,buf));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_setsockopt(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj level_scm;
  ScmSmallInt level;
  ScmObj option_scm;
  ScmSmallInt option;
  ScmObj value_scm;
  ScmObj value;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("socket-setsockopt");
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  level_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(level_scm)) Scm_Error("ScmSmallInt required, but got %S", level_scm);
  level = SCM_INT_VALUE(level_scm);
  option_scm = SCM_SUBRARGS[2];
  if (!SCM_INTP(option_scm)) Scm_Error("ScmSmallInt required, but got %S", option_scm);
  option = SCM_INT_VALUE(option_scm);
  value_scm = SCM_SUBRARGS[3];
  if (!(value_scm)) Scm_Error("scheme object required, but got %S", value_scm);
  value = (value_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketSetOpt(sock,level,option,value));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_getsockopt(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj level_scm;
  ScmSmallInt level;
  ScmObj option_scm;
  ScmSmallInt option;
  ScmObj rsize_scm;
  ScmSmallInt rsize;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("socket-getsockopt");
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  level_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(level_scm)) Scm_Error("ScmSmallInt required, but got %S", level_scm);
  level = SCM_INT_VALUE(level_scm);
  option_scm = SCM_SUBRARGS[2];
  if (!SCM_INTP(option_scm)) Scm_Error("ScmSmallInt required, but got %S", option_scm);
  option = SCM_INT_VALUE(option_scm);
  rsize_scm = SCM_SUBRARGS[3];
  if (!SCM_INTP(rsize_scm)) Scm_Error("ScmSmallInt required, but got %S", rsize_scm);
  rsize = SCM_INT_VALUE(rsize_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_SocketGetOpt(sock,level,option,rsize));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsocket_ioctl(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj sock_scm;
  ScmSocket* sock;
  ScmObj request_scm;
  ScmObj request;
  ScmObj data_scm;
  ScmObj data;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("socket-ioctl");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  sock_scm = SCM_SUBRARGS[0];
  if (!SCM_SOCKETP(sock_scm)) Scm_Error("<socket> required, but got %S", sock_scm);
  sock = SCM_SOCKET(sock_scm);
  request_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(request_scm)) Scm_Error("exact integer required, but got %S", request_scm);
  request = (request_scm);
  data_scm = SCM_SUBRARGS[2];
  if (!(data_scm)) Scm_Error("scheme object required, but got %S", data_scm);
  data = (data_scm);
  {
{
ScmObj SCM_RESULT;

#line 393 "libnet.scm"
{SCM_RESULT=(Scm_SocketIoctl(sock,Scm_GetIntegerU(request),data));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_gethostbyname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  const char* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-gethostbyname");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("const char* required, but got %S", name_scm);
  name = SCM_STRING_CONST_CSTRING(name_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetHostByName(name));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_gethostbyaddr(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj addr_scm;
  const char* addr;
  ScmObj type_scm;
  ScmSmallInt type;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-gethostbyaddr");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(addr_scm)) Scm_Error("const char* required, but got %S", addr_scm);
  addr = SCM_STRING_CONST_CSTRING(addr_scm);
  type_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(type_scm)) Scm_Error("ScmSmallInt required, but got %S", type_scm);
  type = SCM_INT_VALUE(type_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetHostByAddr(addr,type));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_getprotobyname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  const char* name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getprotobyname");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("const char* required, but got %S", name_scm);
  name = SCM_STRING_CONST_CSTRING(name_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetProtoByName(name));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_getprotobynumber(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj number_scm;
  ScmSmallInt number;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-getprotobynumber");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  number_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(number_scm)) Scm_Error("ScmSmallInt required, but got %S", number_scm);
  number = SCM_INT_VALUE(number_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetProtoByNumber(number));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_getservbyname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj name_scm;
  const char* name;
  ScmObj proto_scm;
  const char* proto;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-getservbyname");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  name_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(name_scm)) Scm_Error("const char* required, but got %S", name_scm);
  name = SCM_STRING_CONST_CSTRING(name_scm);
  proto_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(proto_scm)) Scm_Error("const char* required, but got %S", proto_scm);
  proto = SCM_STRING_CONST_CSTRING(proto_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetServByName(name,proto));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_getservbyport(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmSmallInt port;
  ScmObj proto_scm;
  const char* proto;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-getservbyport");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(port_scm)) Scm_Error("ScmSmallInt required, but got %S", port_scm);
  port = SCM_INT_VALUE(port_scm);
  proto_scm = SCM_SUBRARGS[1];
  if (!SCM_STRINGP(proto_scm)) Scm_Error("const char* required, but got %S", proto_scm);
  proto = SCM_STRING_CONST_CSTRING(proto_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetServByPort(port,proto));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_ntohl(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  uint32_t x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-ntohl");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_UINTEGERP(x_scm)) Scm_Error("uint32_t required, but got %S", x_scm);
  x = Scm_GetIntegerU32(x_scm);
  {
{
uint32_t SCM_RESULT;
{SCM_RESULT=(ntohl(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_ntohs(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  uint16_t x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-ntohs");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_UINTP(x_scm)) Scm_Error("uint16_t required, but got %S", x_scm);
  x = Scm_GetIntegerU16(x_scm);
  {
{
uint16_t SCM_RESULT;
{SCM_RESULT=(ntohs(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_htonl(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  uint32_t x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-htonl");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_UINTEGERP(x_scm)) Scm_Error("uint32_t required, but got %S", x_scm);
  x = Scm_GetIntegerU32(x_scm);
  {
{
uint32_t SCM_RESULT;
{SCM_RESULT=(htonl(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libnetsys_htons(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj x_scm;
  uint16_t x;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("sys-htons");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  x_scm = SCM_SUBRARGS[0];
  if (!SCM_UINTP(x_scm)) Scm_Error("uint16_t required, but got %S", x_scm);
  x = Scm_GetIntegerU16(x_scm);
  {
{
uint16_t SCM_RESULT;
{SCM_RESULT=(htons(x));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


#if defined(HAVE_IPV6)
SCM_DEFINE_BUILTIN_CLASS(Scm_SysAddrinfoClass, NULL, NULL, NULL, addrinfo_allocate, SCM_CLASS_DEFAULT_CPL);

static ScmObj Scm_SysAddrinfoClass_flags_GET(ScmObj OBJARG)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  return Scm_MakeInteger(obj->flags);
}

static void Scm_SysAddrinfoClass_flags_SET(ScmObj OBJARG, ScmObj value)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->flags = Scm_GetInteger(value);
}

static ScmObj Scm_SysAddrinfoClass_family_GET(ScmObj OBJARG)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  return Scm_MakeInteger(obj->family);
}

static void Scm_SysAddrinfoClass_family_SET(ScmObj OBJARG, ScmObj value)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->family = Scm_GetInteger(value);
}

static ScmObj Scm_SysAddrinfoClass_socktype_GET(ScmObj OBJARG)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  return Scm_MakeInteger(obj->socktype);
}

static void Scm_SysAddrinfoClass_socktype_SET(ScmObj OBJARG, ScmObj value)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->socktype = Scm_GetInteger(value);
}

static ScmObj Scm_SysAddrinfoClass_protocol_GET(ScmObj OBJARG)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  return Scm_MakeInteger(obj->protocol);
}

static void Scm_SysAddrinfoClass_protocol_SET(ScmObj OBJARG, ScmObj value)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->protocol = Scm_GetInteger(value);
}

static ScmObj Scm_SysAddrinfoClass_addrlen_GET(ScmObj OBJARG)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  return Scm_MakeIntegerU(obj->addrlen);
}

static void Scm_SysAddrinfoClass_addrlen_SET(ScmObj OBJARG, ScmObj value)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  if (!SCM_UINTEGERP(value)) Scm_Error("uint32_t required, but got %S", value);
  obj->addrlen = Scm_GetIntegerU32(value);
}

static ScmObj Scm_SysAddrinfoClass_canonname_GET(ScmObj OBJARG)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  return SCM_OBJ_SAFE(obj->canonname);
}

static void Scm_SysAddrinfoClass_canonname_SET(ScmObj OBJARG, ScmObj value)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  if (!SCM_STRINGP(value)) Scm_Error("ScmString* required, but got %S", value);
  obj->canonname = SCM_STRING(value);
}

static ScmObj Scm_SysAddrinfoClass_addr_GET(ScmObj OBJARG)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  return SCM_OBJ_SAFE(obj->addr);
}

static void Scm_SysAddrinfoClass_addr_SET(ScmObj OBJARG, ScmObj value)
{
  ScmSysAddrinfo* obj = SCM_SYS_ADDRINFO(OBJARG);
  if (!SCM_SOCKADDRP(value)) Scm_Error("ScmSockAddr* required, but got %S", value);
  obj->addr = SCM_SOCKADDR(value);
}

static ScmClassStaticSlotSpec Scm_SysAddrinfoClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("flags", Scm_SysAddrinfoClass_flags_GET, Scm_SysAddrinfoClass_flags_SET),
  SCM_CLASS_SLOT_SPEC("family", Scm_SysAddrinfoClass_family_GET, Scm_SysAddrinfoClass_family_SET),
  SCM_CLASS_SLOT_SPEC("socktype", Scm_SysAddrinfoClass_socktype_GET, Scm_SysAddrinfoClass_socktype_SET),
  SCM_CLASS_SLOT_SPEC("protocol", Scm_SysAddrinfoClass_protocol_GET, Scm_SysAddrinfoClass_protocol_SET),
  SCM_CLASS_SLOT_SPEC("addrlen", Scm_SysAddrinfoClass_addrlen_GET, Scm_SysAddrinfoClass_addrlen_SET),
  SCM_CLASS_SLOT_SPEC("canonname", Scm_SysAddrinfoClass_canonname_GET, Scm_SysAddrinfoClass_canonname_SET),
  SCM_CLASS_SLOT_SPEC("addr", Scm_SysAddrinfoClass_addr_GET, Scm_SysAddrinfoClass_addr_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)

static ScmObj libnetsys_getaddrinfo(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj nodename_scm;
  const char* nodename;
  ScmObj servname_scm;
  const char* servname;
  ScmObj hints_scm;
  ScmObj hints;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("sys-getaddrinfo");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  nodename_scm = SCM_SUBRARGS[0];
  if (!SCM_MAYBE_P(SCM_STRINGP, nodename_scm)) Scm_Error("const char* or #f required, but got %S", nodename_scm);
  nodename = SCM_MAYBE(SCM_STRING_CONST_CSTRING, nodename_scm);
  servname_scm = SCM_SUBRARGS[1];
  if (!SCM_MAYBE_P(SCM_STRINGP, servname_scm)) Scm_Error("const char* or #f required, but got %S", servname_scm);
  servname = SCM_MAYBE(SCM_STRING_CONST_CSTRING, servname_scm);
  hints_scm = SCM_SUBRARGS[2];
  if (!(hints_scm)) Scm_Error("scheme object required, but got %S", hints_scm);
  hints = (hints_scm);
  {
{
ScmObj SCM_RESULT;

#line 490 "libnet.scm"
{struct addrinfo ai;
if (!((SCM_SYS_ADDRINFO_P(hints))||(SCM_FALSEP(hints)))){{
SCM_TYPE_ERROR(hints,"<sys-addrinfo> or #f");}}
if (!(SCM_FALSEP(hints))){{
memset(&(ai),0,sizeof(ai));
(ai).ai_flags=((SCM_SYS_ADDRINFO(hints))->flags),
(ai).ai_family=((SCM_SYS_ADDRINFO(hints))->family),
(ai).ai_socktype=((SCM_SYS_ADDRINFO(hints))->socktype),
(ai).ai_protocol=((SCM_SYS_ADDRINFO(hints))->protocol);}}
{SCM_RESULT=(Scm_GetAddrinfo(nodename,servname,
((SCM_FALSEP(hints))?(NULL):(&(ai)))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)

static ScmObj libnetsys_getnameinfo(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmSockAddr* addr;
  ScmObj flags_scm;
  ScmSmallInt flags;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("sys-getnameinfo");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!Scm_SockAddrP(addr_scm)) Scm_Error("socket address required, but got %S", addr_scm);
  addr = SCM_SOCKADDR(addr_scm);
  if (SCM_ARGCNT > 1+1) {
    flags_scm = SCM_SUBRARGS[1];
  } else {
    flags_scm = SCM_UNBOUND;
  }
  if (!SCM_INTP(flags_scm)) Scm_Error("ScmSmallInt required, but got %S", flags_scm);
  flags = SCM_INT_VALUE(flags_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_GetNameinfo(addr,flags));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

#endif /* defined(HAVE_IPV6) */
static void export_bindings(){{
#line 553 "libnet.scm"
{ScmModule* mod=Scm_CurrentModule();if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[361]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[361]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[362]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[362]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[363]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[363]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[364]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[364]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[365]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[365]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[366]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[366]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[367]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[367]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[368]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[368]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[369]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[369]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[370]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[370]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[371]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[371]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[372]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[372]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[373]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[373]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[374]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[374]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[375]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[375]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[376]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[376]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[377]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[377]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[378]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[378]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[379]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[379]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[380]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[380]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[381]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[381]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[382]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[382]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[383]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[383]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[384]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[384]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[385]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[385]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[386]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[386]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[387]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[387]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[388]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[388]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[389]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[389]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[390]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[390]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[391]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[391]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[392]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[392]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[393]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[393]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[394]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[394]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[395]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[395]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[396]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[396]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[397]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[397]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[398]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[398]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[399]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[399]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[400]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[400]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[401]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[401]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[402]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[402]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[403]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[403]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[404]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[404]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[405]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[405]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[406]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[406]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[407]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[407]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[408]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[408]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[409]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[409]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[410]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[410]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[411]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[411]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[412]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[412]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[413]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[413]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[414]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[414]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[415]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[415]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[416]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[416]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[417]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[417]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[418]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[418]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[419]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[419]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[420]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[420]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[421]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[421]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[422]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[422]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[423]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[423]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[424]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[424]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[425]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[425]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[426]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[426]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[427]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[427]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[428]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[428]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[429]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[429]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[430]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[430]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[431]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[431]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[432]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[432]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[433]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[433]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[434]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[434]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[435]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[435]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[436]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[436]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[437]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[437]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[438]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[438]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[439]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[439]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[440]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[440]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[441]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[441]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[442]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[442]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[443]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[443]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[444]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[444]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[445]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[445]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[446]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[446]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[447]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[447]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[448]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[448]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[449]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[449]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[450]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[450]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[451]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[451]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[452]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[452]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[453]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[453]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[454]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[454]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[455]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[455]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[456]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[456]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[457]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[457]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[458]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[458]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[459]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[459]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[460]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[460]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[461]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[461]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[462]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[462]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[463]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[463]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[464]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[464]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[465]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[465]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[466]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[466]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[467]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[467]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[468]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[468]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[469]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[469]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[470]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[470]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[471]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[471]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[472]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[472]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[473]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[473]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[474]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[474]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[475]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[475]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[476]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[476]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[477]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[477]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[478]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[478]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[479]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[479]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[480]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[480]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[481]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[481]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[482]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[482]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[483]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[483]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[484]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[484]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[485]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[485]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[486]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[486]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[487]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[487]));}}if (!(SCM_UNBOUNDP(Scm_GlobalVariableRef(mod,SCM_SYMBOL(scm__rc.d2149[488]),0)))){{Scm_ExportSymbols(mod,SCM_LIST1(scm__rc.d2149[488]));}}}}}

static ScmObj libnetinet_checksum(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj buf_scm;
  ScmUVector* buf;
  ScmObj size_scm;
  int size;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("inet-checksum");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  buf_scm = SCM_SUBRARGS[0];
  if (!SCM_UVECTORP(buf_scm)) Scm_Error("<uvector> required, but got %S", buf_scm);
  buf = SCM_UVECTOR(buf_scm);
  size_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(size_scm)) Scm_Error("int required, but got %S", size_scm);
  size = Scm_GetInteger(size_scm);
  {
{
u_int SCM_RESULT;

#line 609 "libnet.scm"
{uint16_t* wp=((uint16_t* )(SCM_UVECTOR_ELEMENTS(buf)));u_long sum=0;uint16_t result;
#line 612 "libnet.scm"
if ((size)>(Scm_UVectorSizeInBytes(buf))){{
Scm_Error("uniform vector buffer too short: %S",buf);}}
for (; (size)>(0); (size)-=(2)){
if ((size)==(1)){{

#if WORDS_BIGENDIAN

#line 617 "libnet.scm"
(sum)+=((*(((u_char* )(wp))))<<(8));
#else /* !WORDS_BIGENDIAN */

#line 618 "libnet.scm"
(sum)+=(*(((u_char* )(wp))));
#endif /* WORDS_BIGENDIAN */

#line 619 "libnet.scm"
break;}}
(sum)+=(*((wp)++));}
sum=(((sum)>>(16))+((sum)&(65535)));
(sum)+=((sum)>>(16));
result=(((uint16_t )(~(sum))));

#if !(WORDS_BIGENDIAN)

#line 625 "libnet.scm"
result=(((result)>>(8))|((result)<<(8)));
#endif /* ! WORDS_BIGENDIAN */

#line 626 "libnet.scm"
{SCM_RESULT=(result);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libnetinet_string_TOaddress(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  const char* s;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("inet-string->address");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("const char* required, but got %S", s_scm);
  s = SCM_STRING_CONST_CSTRING(s_scm);
  {
ScmObj SCM_RESULT0;
ScmObj SCM_RESULT1;
{

#line 630 "libnet.scm"
{int proto;ScmObj r=Scm_InetStringToAddress(s,&(proto),NULL);
if (SCM_FALSEP(r)){
{SCM_RESULT0=(SCM_FALSE),SCM_RESULT1=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_RESULT0=(r),SCM_RESULT1=(SCM_MAKE_INT(proto));goto SCM_STUB_RETURN;}}}
}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_Values2(SCM_OBJ_SAFE(SCM_RESULT0),SCM_OBJ_SAFE(SCM_RESULT1)));
  }
}


static ScmObj libnetinet_string_TOaddressX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj s_scm;
  const char* s;
  ScmObj buf_scm;
  ScmUVector* buf;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("inet-string->address!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  s_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(s_scm)) Scm_Error("const char* required, but got %S", s_scm);
  s = SCM_STRING_CONST_CSTRING(s_scm);
  buf_scm = SCM_SUBRARGS[1];
  if (!SCM_UVECTORP(buf_scm)) Scm_Error("<uvector> required, but got %S", buf_scm);
  buf = SCM_UVECTOR(buf_scm);
  {
{
ScmObj SCM_RESULT;

#line 636 "libnet.scm"
{int proto;ScmObj r=Scm_InetStringToAddress(s,&(proto),buf);
if (SCM_FALSEP(r)){{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}} else {{SCM_RESULT=(SCM_MAKE_INT(proto));goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libnetinet_address_TOstring(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj addr_scm;
  ScmObj addr;
  ScmObj proto_scm;
  int proto;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("inet-address->string");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  addr_scm = SCM_SUBRARGS[0];
  if (!(addr_scm)) Scm_Error("scheme object required, but got %S", addr_scm);
  addr = (addr_scm);
  proto_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(proto_scm)) Scm_Error("int required, but got %S", proto_scm);
  proto = Scm_GetInteger(proto_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_InetAddressToString(addr,proto));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[0])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[2])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[3])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[5])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[7])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[9])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[11])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[13])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[18])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[20])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[22])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[24])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[26])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[32])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[46])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[52])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[56])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1042];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[80];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1043];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[76]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[69];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[70];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[71];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[72];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[73];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[74];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[75];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[77];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[695];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1044];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[530];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[533];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[535];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[467];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[538];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1045];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1046];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1047];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1048];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1049];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1050];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1051];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1052];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[561];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[281]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[552];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1053];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[551];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[550];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[545];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[745];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[559];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[279]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[277]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[554];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[466];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[547];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[175];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[549];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[562];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[563];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[89];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[542];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[7];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1054];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[133];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[468];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[285]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[149];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[463];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[572];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[6];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[85];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[5];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[84];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[45];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[568];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[292]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[320];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[584];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[588];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[581];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1055];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[626];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[587];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1056];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[40];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[619];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[330];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[289]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1057];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1058];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[579];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[601];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[286]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1059];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1060];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[48];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[793];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[23];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[3];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[10];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1061];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[42];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[600];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1062];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[606];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1063];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[612];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[611];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[609];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1064];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[618];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[616];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[605];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[43];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[634];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[636];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[307]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[632];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[630];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[628];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1065];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[624];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1066];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[49];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1067];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1068];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1069];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1070];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1071];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[650];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[649];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[648];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[25];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[160];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[22];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[27];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[367];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[384];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[651];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[652];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[642];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1072];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1073];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1074];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1075];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1076];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[663];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[666];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1077];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[671];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[751];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[753];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[672];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[662];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[500];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1078];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[692];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[690];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1079];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1080];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[696];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[699];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[689];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[702];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1081];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[716];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[693];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[710];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[714];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1082];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1083];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1084];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[47];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[16];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[223];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[701];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[755];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[750];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[682];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[679];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1085];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[723];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1086];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1087];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1088];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1089];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[106];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1090];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1091];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1092];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[465];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[719];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[46];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[721];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1093];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[685];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[706];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1094];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[676];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[698];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[744];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[50];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[752];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[731];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[41];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[777];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[767];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[763];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[765];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[369]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[53];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[760];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[59];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[761];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[762];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[366]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1095];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[754];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[757];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[737];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[734];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[749];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[730];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[469];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[748];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[11];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[746];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[740];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[343]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[88];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1096];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1097];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1098];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[794];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[795];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[18];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[131];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[796];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[19];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[21];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1099];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1100];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1101];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1102];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[792];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[791];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[790];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[788];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = SCM_OBJ(&scm__sc.d2150[87]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1103];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[1104];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[801]), i++) = scm__rc.d2149[51];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[801]);
}
void Scm_Init_libnet() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[0])),TRUE); /* gauche.net */
  scm__rc.d2149[0] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[1]), SCM_FIND_MODULE_CREATE)); /* module gauche.net */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[0]));
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[1])),TRUE); /* <socket> */
  scm__rc.d2149[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[2])),TRUE); /* make-socket */
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[3])),TRUE); /* PF_UNSPEC */
  scm__rc.d2149[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[4])),TRUE); /* PF_UNIX */
  scm__rc.d2149[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[5])),TRUE); /* PF_INET */
  scm__rc.d2149[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[6])),TRUE); /* AF_UNSPEC */
  scm__rc.d2149[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[7])),TRUE); /* AF_UNIX */
  scm__rc.d2149[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[8])),TRUE); /* AF_INET */
  scm__rc.d2149[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[9])),TRUE); /* SOCK_STREAM */
  scm__rc.d2149[11] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[10])),TRUE); /* SOCK_DGRAM */
  scm__rc.d2149[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[11])),TRUE); /* SOCK_RAW */
  scm__rc.d2149[13] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[12])),TRUE); /* SHUT_RD */
  scm__rc.d2149[14] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[13])),TRUE); /* SHUT_WR */
  scm__rc.d2149[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[14])),TRUE); /* SHUT_RDWR */
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[15])),TRUE); /* socket-address */
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[16])),TRUE); /* socket-status */
  scm__rc.d2149[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[17])),TRUE); /* socket-input-port */
  scm__rc.d2149[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[18])),TRUE); /* socket-output-port */
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[19])),TRUE); /* socket-shutdown */
  scm__rc.d2149[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[20])),TRUE); /* socket-close */
  scm__rc.d2149[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[21])),TRUE); /* socket-bind */
  scm__rc.d2149[23] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[22])),TRUE); /* socket-connect */
  scm__rc.d2149[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[23])),TRUE); /* socket-fd */
  scm__rc.d2149[25] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[24])),TRUE); /* socket-listen */
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[25])),TRUE); /* socket-accept */
  scm__rc.d2149[27] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[26])),TRUE); /* socket-setsockopt */
  scm__rc.d2149[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[27])),TRUE); /* socket-getsockopt */
  scm__rc.d2149[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[28])),TRUE); /* socket-getsockname */
  scm__rc.d2149[30] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[29])),TRUE); /* socket-getpeername */
  scm__rc.d2149[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[30])),TRUE); /* socket-ioctl */
  scm__rc.d2149[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[31])),TRUE); /* socket-send */
  scm__rc.d2149[33] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[32])),TRUE); /* socket-sendto */
  scm__rc.d2149[34] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[33])),TRUE); /* socket-sendmsg */
  scm__rc.d2149[35] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[34])),TRUE); /* socket-buildmsg */
  scm__rc.d2149[36] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[35])),TRUE); /* socket-recv */
  scm__rc.d2149[37] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[36])),TRUE); /* socket-recv! */
  scm__rc.d2149[38] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[37])),TRUE); /* socket-recvfrom */
  scm__rc.d2149[39] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[38])),TRUE); /* socket-recvfrom! */
  scm__rc.d2149[40] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[39])),TRUE); /* <sockaddr> */
  scm__rc.d2149[41] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[40])),TRUE); /* <sockaddr-in> */
  scm__rc.d2149[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[41])),TRUE); /* <sockaddr-un> */
  scm__rc.d2149[43] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[42])),TRUE); /* make-sockaddrs */
  scm__rc.d2149[44] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[43])),TRUE); /* sockaddr-name */
  scm__rc.d2149[45] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[44])),TRUE); /* sockaddr-family */
  scm__rc.d2149[46] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[45])),TRUE); /* sockaddr-addr */
  scm__rc.d2149[47] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[46])),TRUE); /* sockaddr-port */
  scm__rc.d2149[48] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[47])),TRUE); /* make-client-socket */
  scm__rc.d2149[49] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[48])),TRUE); /* make-server-socket */
  scm__rc.d2149[50] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[49])),TRUE); /* make-server-sockets */
  scm__rc.d2149[51] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[50])),TRUE); /* call-with-client-socket */
  scm__rc.d2149[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[51])),TRUE); /* <sys-hostent> */
  scm__rc.d2149[53] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[52])),TRUE); /* sys-gethostbyname */
  scm__rc.d2149[54] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[53])),TRUE); /* sys-gethostbyaddr */
  scm__rc.d2149[55] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[54])),TRUE); /* <sys-protoent> */
  scm__rc.d2149[56] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[55])),TRUE); /* sys-getprotobyname */
  scm__rc.d2149[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[56])),TRUE); /* sys-getprotobynumber */
  scm__rc.d2149[58] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[57])),TRUE); /* <sys-servent> */
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[58])),TRUE); /* sys-getservbyname */
  scm__rc.d2149[60] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[59])),TRUE); /* sys-getservbyport */
  scm__rc.d2149[61] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[60])),TRUE); /* sys-htonl */
  scm__rc.d2149[62] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[61])),TRUE); /* sys-htons */
  scm__rc.d2149[63] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[62])),TRUE); /* sys-ntohl */
  scm__rc.d2149[64] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[63])),TRUE); /* sys-ntohs */
  scm__rc.d2149[65] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[64])),TRUE); /* inet-checksum */
  scm__rc.d2149[66] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[65])),TRUE); /* inet-string->address */
  scm__rc.d2149[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[66])),TRUE); /* inet-string->address! */
  scm__rc.d2149[68] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[67])),TRUE); /* inet-address->string */
  scm__rc.d2149[69] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[68])),TRUE); /* connection-self-address */
  scm__rc.d2149[70] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[69])),TRUE); /* connection-peer-address */
  scm__rc.d2149[71] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[70])),TRUE); /* connection-input-port */
  scm__rc.d2149[72] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[71])),TRUE); /* connection-output-port */
  scm__rc.d2149[73] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[72])),TRUE); /* connection-shutdown */
  scm__rc.d2149[74] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[73])),TRUE); /* connection-close */
  scm__rc.d2149[75] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[74])),TRUE); /* connection-address-name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[1]), scm__rc.d2149[75]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[2]), scm__rc.d2149[74]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[3]), scm__rc.d2149[73]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[4]), scm__rc.d2149[72]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[5]), scm__rc.d2149[71]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[6]), scm__rc.d2149[70]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[7]), scm__rc.d2149[69]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[8]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[9]), scm__rc.d2149[67]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[10]), scm__rc.d2149[66]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[11]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[12]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[13]), scm__rc.d2149[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[14]), scm__rc.d2149[62]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[15]), scm__rc.d2149[61]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[16]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[17]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[18]), scm__rc.d2149[58]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[19]), scm__rc.d2149[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[20]), scm__rc.d2149[56]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[21]), scm__rc.d2149[55]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[22]), scm__rc.d2149[54]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[23]), scm__rc.d2149[53]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[24]), scm__rc.d2149[52]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[25]), scm__rc.d2149[51]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[26]), scm__rc.d2149[50]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[27]), scm__rc.d2149[49]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[28]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[29]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[30]), scm__rc.d2149[46]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[31]), scm__rc.d2149[45]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[32]), scm__rc.d2149[44]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[33]), scm__rc.d2149[43]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[34]), scm__rc.d2149[42]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[35]), scm__rc.d2149[41]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[36]), scm__rc.d2149[40]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[37]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[38]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[39]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[40]), scm__rc.d2149[36]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[41]), scm__rc.d2149[35]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[42]), scm__rc.d2149[34]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[43]), scm__rc.d2149[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[44]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[45]), scm__rc.d2149[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[46]), scm__rc.d2149[30]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[47]), scm__rc.d2149[29]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[48]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[49]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[50]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[51]), scm__rc.d2149[25]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[52]), scm__rc.d2149[24]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[53]), scm__rc.d2149[23]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[54]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[55]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[56]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[57]), scm__rc.d2149[19]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[58]), scm__rc.d2149[18]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[59]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[60]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[61]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[62]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[63]), scm__rc.d2149[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[64]), scm__rc.d2149[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[65]), scm__rc.d2149[11]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[66]), scm__rc.d2149[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[67]), scm__rc.d2149[9]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[68]), scm__rc.d2149[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[69]), scm__rc.d2149[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[70]), scm__rc.d2149[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[71]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[72]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[73]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[74]), scm__rc.d2149[2]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[74]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[0]));
  scm__rc.d2149[77] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[75])),TRUE); /* find-module */
  scm__rc.d2149[78] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[1]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.net */
  scm__rc.d2149[76] = Scm_MakeIdentifier(scm__rc.d2149[77], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#find-module */
  scm__rc.d2149[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[77])),TRUE); /* %autoload */
  scm__rc.d2149[79] = Scm_MakeIdentifier(scm__rc.d2149[80], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%autoload */
  scm__rc.d2149[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[78])),TRUE); /* %toplevel */
  scm__rc.d2149[82] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[0]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[0]))->debugInfo = scm__rc.d2149[82];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[0]))[3] = SCM_WORD(scm__rc.d2149[1]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[0]))[5] = SCM_WORD(scm__rc.d2149[76]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[0]))[12] = SCM_WORD(scm__rc.d2149[79]);
  Scm_InitBuiltinGeneric(&Scm_GenericSockAddrName, "sockaddr-name", SCM_MODULE(scm__rc.d2149[0]));
  Scm_InitBuiltinGeneric(&Scm_GenericSockAddrFamily, "sockaddr-family", SCM_MODULE(scm__rc.d2149[0]));
  Scm_InitBuiltinGeneric(&Scm_GenericSockAddrAddr, "sockaddr-addr", SCM_MODULE(scm__rc.d2149[0]));
  Scm_InitBuiltinGeneric(&Scm_GenericSockAddrPort, "sockaddr-port", SCM_MODULE(scm__rc.d2149[0]));
  Scm_InitBuiltinMethod(&libnetsockaddr_name2155__STUB);
  scm__rc.d2149[83] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[79])),TRUE); /* unknown */
  Scm_InitBuiltinMethod(&libnetsockaddr_family2156__STUB);
  Scm_InitBuiltinMethod(&libnetsockaddr_name2157__STUB);
  Scm_InitBuiltinMethod(&libnetsockaddr_name2158__STUB);
  scm__rc.d2149[84] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[80])),TRUE); /* unix */
  Scm_InitBuiltinMethod(&libnetsockaddr_family2159__STUB);
  scm__rc.d2149[85] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[81])),TRUE); /* inet */
  Scm_InitBuiltinMethod(&libnetsockaddr_family2160__STUB);
  Scm_InitBuiltinMethod(&libnetsockaddr_addr2161__STUB);
  Scm_InitBuiltinMethod(&libnetsockaddr_port2162__STUB);
#if defined(HAVE_IPV6)
  scm__rc.d2164[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[0])),TRUE); /* inet6 */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  Scm_InitBuiltinMethod(&libnetsockaddr_family2163__STUB);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  Scm_InitBuiltinMethod(&libnetsockaddr_addr2167__STUB);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  Scm_InitBuiltinMethod(&libnetsockaddr_port2168__STUB);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  Scm_InitBuiltinMethod(&libnetsockaddr_name2169__STUB);
#endif /* defined(HAVE_IPV6) */
  scm__rc.d2149[86] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[82])),TRUE); /* domain */
  scm__rc.d2149[87] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[83])),TRUE); /* type */
  scm__rc.d2149[88] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[84]))); /* :optional */
  scm__rc.d2149[89] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[85])),TRUE); /* protocol */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[75]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[76]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[77]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[78]), scm__rc.d2149[86]);
  scm__rc.d2149[90] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[86])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[81]), scm__rc.d2149[90]);
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[88])),TRUE); /* bind-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[82]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[83]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[84]), scm__rc.d2149[91]);
  scm__rc.d2149[92] = Scm_MakeExtendedPair(scm__rc.d2149[3], SCM_OBJ(&scm__rc.d2151[78]), SCM_OBJ(&scm__rc.d2151[86]));
  scm__rc.d2149[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[89])),TRUE); /* <fixnum> */
  scm__rc.d2149[94] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[90])),TRUE); /* * */
  scm__rc.d2149[95] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[91])),TRUE); /* -> */
  scm__rc.d2149[96] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[92])),TRUE); /* <top> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[97]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[97]))[4] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[97]))[5] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[97]))[6] = scm__rc.d2149[94];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[97]))[7] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[97]))[8] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("make-socket")), SCM_OBJ(&libnetmake_socket__STUB), 0);
  libnetmake_socket__STUB.common.info = scm__rc.d2149[92];
  libnetmake_socket__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[97]);
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2149[4]), Scm_MakeInteger(PF_UNSPEC), SCM_BINDING_CONST);

  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2149[5]), Scm_MakeInteger(PF_UNIX), SCM_BINDING_CONST);

  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2149[6]), Scm_MakeInteger(PF_INET), SCM_BINDING_CONST);

  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2149[7]), Scm_MakeInteger(AF_UNSPEC), SCM_BINDING_CONST);

  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2149[8]), Scm_MakeInteger(AF_UNIX), SCM_BINDING_CONST);

  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2149[9]), Scm_MakeInteger(AF_INET), SCM_BINDING_CONST);

  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2149[10]), Scm_MakeInteger(SOCK_STREAM), SCM_BINDING_CONST);

  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2149[11]), Scm_MakeInteger(SOCK_DGRAM), SCM_BINDING_CONST);

  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2149[12]), Scm_MakeInteger(SOCK_RAW), SCM_BINDING_CONST);

#if defined(MSG_CTRUNC)
  scm__rc.d2170[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2171[0])),TRUE); /* MSG_CTRUNC */
#endif /* defined(MSG_CTRUNC) */
#if defined(MSG_CTRUNC)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2170[0]), Scm_MakeInteger(MSG_CTRUNC), SCM_BINDING_CONST);

#endif /* defined(MSG_CTRUNC) */
#if defined(MSG_DONTROUTE)
  scm__rc.d2172[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2173[0])),TRUE); /* MSG_DONTROUTE */
#endif /* defined(MSG_DONTROUTE) */
#if defined(MSG_DONTROUTE)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2172[0]), Scm_MakeInteger(MSG_DONTROUTE), SCM_BINDING_CONST);

#endif /* defined(MSG_DONTROUTE) */
#if defined(MSG_EOR)
  scm__rc.d2174[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2175[0])),TRUE); /* MSG_EOR */
#endif /* defined(MSG_EOR) */
#if defined(MSG_EOR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2174[0]), Scm_MakeInteger(MSG_EOR), SCM_BINDING_CONST);

#endif /* defined(MSG_EOR) */
#if defined(MSG_OOB)
  scm__rc.d2176[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2177[0])),TRUE); /* MSG_OOB */
#endif /* defined(MSG_OOB) */
#if defined(MSG_OOB)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2176[0]), Scm_MakeInteger(MSG_OOB), SCM_BINDING_CONST);

#endif /* defined(MSG_OOB) */
#if defined(MSG_PEEK)
  scm__rc.d2178[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2179[0])),TRUE); /* MSG_PEEK */
#endif /* defined(MSG_PEEK) */
#if defined(MSG_PEEK)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2178[0]), Scm_MakeInteger(MSG_PEEK), SCM_BINDING_CONST);

#endif /* defined(MSG_PEEK) */
#if defined(MSG_TRUNC)
  scm__rc.d2180[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2181[0])),TRUE); /* MSG_TRUNC */
#endif /* defined(MSG_TRUNC) */
#if defined(MSG_TRUNC)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2180[0]), Scm_MakeInteger(MSG_TRUNC), SCM_BINDING_CONST);

#endif /* defined(MSG_TRUNC) */
#if defined(MSG_WAITALL)
  scm__rc.d2182[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2183[0])),TRUE); /* MSG_WAITALL */
#endif /* defined(MSG_WAITALL) */
#if defined(MSG_WAITALL)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2182[0]), Scm_MakeInteger(MSG_WAITALL), SCM_BINDING_CONST);

#endif /* defined(MSG_WAITALL) */
#if defined(IPPROTO_IP)
  scm__rc.d2184[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2185[0])),TRUE); /* IPPROTO_IP */
#endif /* defined(IPPROTO_IP) */
#if defined(IPPROTO_IP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2184[0]), Scm_MakeInteger(IPPROTO_IP), SCM_BINDING_CONST);

#endif /* defined(IPPROTO_IP) */
#if defined(IPPROTO_ICMP)
  scm__rc.d2186[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2187[0])),TRUE); /* IPPROTO_ICMP */
#endif /* defined(IPPROTO_ICMP) */
#if defined(IPPROTO_ICMP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2186[0]), Scm_MakeInteger(IPPROTO_ICMP), SCM_BINDING_CONST);

#endif /* defined(IPPROTO_ICMP) */
#if defined(IPPROTO_ICMPV6)
  scm__rc.d2188[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2189[0])),TRUE); /* IPPROTO_ICMPV6 */
#endif /* defined(IPPROTO_ICMPV6) */
#if defined(IPPROTO_ICMPV6)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2188[0]), Scm_MakeInteger(IPPROTO_ICMPV6), SCM_BINDING_CONST);

#endif /* defined(IPPROTO_ICMPV6) */
#if defined(IPPROTO_TCP)
  scm__rc.d2190[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2191[0])),TRUE); /* IPPROTO_TCP */
#endif /* defined(IPPROTO_TCP) */
#if defined(IPPROTO_TCP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2190[0]), Scm_MakeInteger(IPPROTO_TCP), SCM_BINDING_CONST);

#endif /* defined(IPPROTO_TCP) */
#if defined(IPPROTO_UDP)
  scm__rc.d2192[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2193[0])),TRUE); /* IPPROTO_UDP */
#endif /* defined(IPPROTO_UDP) */
#if defined(IPPROTO_UDP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2192[0]), Scm_MakeInteger(IPPROTO_UDP), SCM_BINDING_CONST);

#endif /* defined(IPPROTO_UDP) */
#if defined(SOMAXCONN)
  scm__rc.d2194[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2195[0])),TRUE); /* SOMAXCONN */
#endif /* defined(SOMAXCONN) */
#if defined(SOMAXCONN)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2194[0]), Scm_MakeInteger(SOMAXCONN), SCM_BINDING_CONST);

#endif /* defined(SOMAXCONN) */
  scm__rc.d2149[106] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[93])),TRUE); /* sock */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[87]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[90]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[91]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[92]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[93]), scm__rc.d2149[91]);
  scm__rc.d2149[107] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_OBJ(&scm__rc.d2151[87]), SCM_OBJ(&scm__rc.d2151[95]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[108]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[108]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[108]))[5] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[108]))[6] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-address")), SCM_OBJ(&libnetsocket_address__STUB), 0);
  libnetsocket_address__STUB.common.info = scm__rc.d2149[107];
  libnetsocket_address__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[108]);
  scm__rc.d2149[115] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[94])),TRUE); /* none */
  scm__rc.d2149[116] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[95])),TRUE); /* bound */
  scm__rc.d2149[117] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[96])),TRUE); /* listening */
  scm__rc.d2149[118] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[97])),TRUE); /* connected */
  scm__rc.d2149[119] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[98])),TRUE); /* shutdown */
  scm__rc.d2149[120] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[99])),TRUE); /* closed */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[98]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[99]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[100]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[101]), scm__rc.d2149[91]);
  scm__rc.d2149[121] = Scm_MakeExtendedPair(scm__rc.d2149[17], SCM_OBJ(&scm__rc.d2151[87]), SCM_OBJ(&scm__rc.d2151[103]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-status")), SCM_OBJ(&libnetsocket_status__STUB), 0);
  libnetsocket_status__STUB.common.info = scm__rc.d2149[121];
  libnetsocket_status__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[106]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[107]), scm__rc.d2149[24]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[108]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[109]), scm__rc.d2149[91]);
  scm__rc.d2149[122] = Scm_MakeExtendedPair(scm__rc.d2149[24], SCM_OBJ(&scm__rc.d2151[87]), SCM_OBJ(&scm__rc.d2151[111]));
  scm__rc.d2149[123] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[100])),TRUE); /* <long> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[5] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[6] = scm__rc.d2149[123];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-fd")), SCM_OBJ(&libnetsocket_fd__STUB), 0);
  libnetsocket_fd__STUB.common.info = scm__rc.d2149[122];
  libnetsocket_fd__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[124]);
  scm__rc.d2149[131] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[101]))); /* :buffering */
  scm__rc.d2149[132] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[102]))); /* :buffered? */
  scm__rc.d2149[133] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[103]))); /* :key */
  scm__rc.d2149[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[101])),TRUE); /* buffering */
  scm__rc.d2149[135] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[102])),TRUE); /* buffered? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[112]), scm__rc.d2149[135]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[113]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[114]), scm__rc.d2149[133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[115]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[118]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[119]), scm__rc.d2149[18]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[120]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[121]), scm__rc.d2149[91]);
  scm__rc.d2149[136] = Scm_MakeExtendedPair(scm__rc.d2149[18], SCM_OBJ(&scm__rc.d2151[115]), SCM_OBJ(&scm__rc.d2151[123]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[137]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[137]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[137]))[5] = scm__rc.d2149[94];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[137]))[6] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[137]))[7] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-input-port")), SCM_OBJ(&libnetsocket_input_port__STUB), 0);
  libnetsocket_input_port__STUB.common.info = scm__rc.d2149[136];
  libnetsocket_input_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[126]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[127]), scm__rc.d2149[19]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[128]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[129]), scm__rc.d2149[91]);
  scm__rc.d2149[145] = Scm_MakeExtendedPair(scm__rc.d2149[19], SCM_OBJ(&scm__rc.d2151[115]), SCM_OBJ(&scm__rc.d2151[131]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-output-port")), SCM_OBJ(&libnetsocket_output_port__STUB), 0);
  libnetsocket_output_port__STUB.common.info = scm__rc.d2149[145];
  libnetsocket_output_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[137]);
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  scm__rc.d2196[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2197[0])),TRUE); /* SHUT_RD */
#endif /* (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)) */
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2196[0]), Scm_MakeInteger(SHUT_RD), SCM_BINDING_CONST);

#endif /* (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)) */
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  scm__rc.d2196[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2197[1])),TRUE); /* SHUT_WR */
#endif /* (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)) */
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2196[1]), Scm_MakeInteger(SHUT_WR), SCM_BINDING_CONST);

#endif /* (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)) */
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  scm__rc.d2196[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2197[2])),TRUE); /* SHUT_RDWR */
#endif /* (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)) */
#if (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2196[2]), Scm_MakeInteger(SHUT_RDWR), SCM_BINDING_CONST);

#endif /* (defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)) */
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  scm__rc.d2198[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2199[0])),TRUE); /* SHUT_RD */
#endif /* !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))) */
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2198[0]), SCM_MAKE_INT(0), SCM_BINDING_CONST);

#endif /* !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))) */
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
#endif /* !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))) */
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  scm__rc.d2198[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2199[1])),TRUE); /* SHUT_WR */
#endif /* !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))) */
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2198[1]), SCM_MAKE_INT(1U), SCM_BINDING_CONST);

#endif /* !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))) */
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
#endif /* !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))) */
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  scm__rc.d2198[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2199[2])),TRUE); /* SHUT_RDWR */
#endif /* !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))) */
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2198[2]), SCM_MAKE_INT(2U), SCM_BINDING_CONST);

#endif /* !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))) */
#if !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR)))
#endif /* !((defined(SHUT_RD))&&(defined(SHUT_WR))&&(defined(SHUT_RDWR))) */
  scm__rc.d2149[146] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[104])),TRUE); /* how */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[132]), scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[133]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[134]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[137]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[138]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[139]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[140]), scm__rc.d2149[91]);
  scm__rc.d2149[147] = Scm_MakeExtendedPair(scm__rc.d2149[20], SCM_OBJ(&scm__rc.d2151[134]), SCM_OBJ(&scm__rc.d2151[142]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-shutdown")), SCM_OBJ(&libnetsocket_shutdown__STUB), 0);
  libnetsocket_shutdown__STUB.common.info = scm__rc.d2149[147];
  libnetsocket_shutdown__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[145]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[146]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[147]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[148]), scm__rc.d2149[91]);
  scm__rc.d2149[148] = Scm_MakeExtendedPair(scm__rc.d2149[21], SCM_OBJ(&scm__rc.d2151[87]), SCM_OBJ(&scm__rc.d2151[150]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-close")), SCM_OBJ(&libnetsocket_close__STUB), 0);
  libnetsocket_close__STUB.common.info = scm__rc.d2149[148];
  libnetsocket_close__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[108]);
  scm__rc.d2149[149] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[105])),TRUE); /* addr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[151]), scm__rc.d2149[149]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[152]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[155]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[156]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[157]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[158]), scm__rc.d2149[91]);
  scm__rc.d2149[150] = Scm_MakeExtendedPair(scm__rc.d2149[22], SCM_OBJ(&scm__rc.d2151[152]), SCM_OBJ(&scm__rc.d2151[160]));
  scm__rc.d2149[151] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[106])),TRUE); /* <socket-address> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[152]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[152]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[152]))[5] = scm__rc.d2149[151];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[152]))[6] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[152]))[7] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-bind")), SCM_OBJ(&libnetsocket_bind__STUB), 0);
  libnetsocket_bind__STUB.common.info = scm__rc.d2149[150];
  libnetsocket_bind__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[152]);
  scm__rc.d2149[160] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[107])),TRUE); /* backlog */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[161]), scm__rc.d2149[160]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[162]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[165]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[166]), scm__rc.d2149[25]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[167]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[168]), scm__rc.d2149[91]);
  scm__rc.d2149[161] = Scm_MakeExtendedPair(scm__rc.d2149[25], SCM_OBJ(&scm__rc.d2151[162]), SCM_OBJ(&scm__rc.d2151[170]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[162]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[162]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[162]))[5] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[162]))[6] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[162]))[7] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-listen")), SCM_OBJ(&libnetsocket_listen__STUB), 0);
  libnetsocket_listen__STUB.common.info = scm__rc.d2149[161];
  libnetsocket_listen__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[162]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[173]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[174]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[175]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[176]), scm__rc.d2149[91]);
  scm__rc.d2149[170] = Scm_MakeExtendedPair(scm__rc.d2149[26], SCM_OBJ(&scm__rc.d2151[87]), SCM_OBJ(&scm__rc.d2151[178]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-accept")), SCM_OBJ(&libnetsocket_accept__STUB), 0);
  libnetsocket_accept__STUB.common.info = scm__rc.d2149[170];
  libnetsocket_accept__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[181]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[182]), scm__rc.d2149[23]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[183]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[184]), scm__rc.d2149[91]);
  scm__rc.d2149[171] = Scm_MakeExtendedPair(scm__rc.d2149[23], SCM_OBJ(&scm__rc.d2151[152]), SCM_OBJ(&scm__rc.d2151[186]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-connect")), SCM_OBJ(&libnetsocket_connect__STUB), 0);
  libnetsocket_connect__STUB.common.info = scm__rc.d2149[171];
  libnetsocket_connect__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[152]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[189]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[190]), scm__rc.d2149[29]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[191]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[192]), scm__rc.d2149[91]);
  scm__rc.d2149[172] = Scm_MakeExtendedPair(scm__rc.d2149[29], SCM_OBJ(&scm__rc.d2151[87]), SCM_OBJ(&scm__rc.d2151[194]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-getsockname")), SCM_OBJ(&libnetsocket_getsockname__STUB), 0);
  libnetsocket_getsockname__STUB.common.info = scm__rc.d2149[172];
  libnetsocket_getsockname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[108]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[197]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[198]), scm__rc.d2149[30]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[199]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[200]), scm__rc.d2149[91]);
  scm__rc.d2149[173] = Scm_MakeExtendedPair(scm__rc.d2149[30], SCM_OBJ(&scm__rc.d2151[87]), SCM_OBJ(&scm__rc.d2151[202]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-getpeername")), SCM_OBJ(&libnetsocket_getpeername__STUB), 0);
  libnetsocket_getpeername__STUB.common.info = scm__rc.d2149[173];
  libnetsocket_getpeername__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[108]);
  scm__rc.d2149[174] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[108])),TRUE); /* msg */
  scm__rc.d2149[175] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[109])),TRUE); /* flags */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[203]), scm__rc.d2149[175]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[204]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[205]), scm__rc.d2149[174]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[206]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[209]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[210]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[211]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[212]), scm__rc.d2149[91]);
  scm__rc.d2149[176] = Scm_MakeExtendedPair(scm__rc.d2149[32], SCM_OBJ(&scm__rc.d2151[206]), SCM_OBJ(&scm__rc.d2151[214]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[5] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[6] = scm__rc.d2149[94];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[7] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[177]))[8] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-send")), SCM_OBJ(&libnetsocket_send__STUB), 0);
  libnetsocket_send__STUB.common.info = scm__rc.d2149[176];
  libnetsocket_send__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[177]);
  scm__rc.d2149[186] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[110])),TRUE); /* to */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[215]), scm__rc.d2149[186]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[216]), scm__rc.d2149[174]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[217]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[220]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[221]), scm__rc.d2149[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[222]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[223]), scm__rc.d2149[91]);
  scm__rc.d2149[187] = Scm_MakeExtendedPair(scm__rc.d2149[33], SCM_OBJ(&scm__rc.d2151[217]), SCM_OBJ(&scm__rc.d2151[225]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[188]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[188]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[188]))[5] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[188]))[6] = scm__rc.d2149[151];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[188]))[7] = scm__rc.d2149[94];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[188]))[8] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[188]))[9] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-sendto")), SCM_OBJ(&libnetsocket_sendto__STUB), 0);
  libnetsocket_sendto__STUB.common.info = scm__rc.d2149[187];
  libnetsocket_sendto__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[188]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[228]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[229]), scm__rc.d2149[34]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[230]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[231]), scm__rc.d2149[91]);
  scm__rc.d2149[198] = Scm_MakeExtendedPair(scm__rc.d2149[34], SCM_OBJ(&scm__rc.d2151[206]), SCM_OBJ(&scm__rc.d2151[233]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-sendmsg")), SCM_OBJ(&libnetsocket_sendmsg__STUB), 0);
  libnetsocket_sendmsg__STUB.common.info = scm__rc.d2149[198];
  libnetsocket_sendmsg__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[177]);
  scm__rc.d2149[199] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[111])),TRUE); /* bytes */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[234]), scm__rc.d2149[199]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[235]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[238]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[239]), scm__rc.d2149[36]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[240]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[241]), scm__rc.d2149[91]);
  scm__rc.d2149[200] = Scm_MakeExtendedPair(scm__rc.d2149[36], SCM_OBJ(&scm__rc.d2151[235]), SCM_OBJ(&scm__rc.d2151[243]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[201]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[201]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[201]))[5] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[201]))[6] = scm__rc.d2149[94];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[201]))[7] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[201]))[8] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-recv")), SCM_OBJ(&libnetsocket_recv__STUB), 0);
  libnetsocket_recv__STUB.common.info = scm__rc.d2149[200];
  libnetsocket_recv__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[201]);
  scm__rc.d2149[210] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[112])),TRUE); /* buf */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[244]), scm__rc.d2149[210]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[245]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[248]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[249]), scm__rc.d2149[37]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[250]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[251]), scm__rc.d2149[91]);
  scm__rc.d2149[211] = Scm_MakeExtendedPair(scm__rc.d2149[37], SCM_OBJ(&scm__rc.d2151[245]), SCM_OBJ(&scm__rc.d2151[253]));
  scm__rc.d2149[212] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[113])),TRUE); /* <uvector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[213]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[213]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[213]))[5] = scm__rc.d2149[212];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[213]))[6] = scm__rc.d2149[94];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[213]))[7] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[213]))[8] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-recv!")), SCM_OBJ(&libnetsocket_recvX__STUB), 0);
  libnetsocket_recvX__STUB.common.info = scm__rc.d2149[211];
  libnetsocket_recvX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[213]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[256]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[257]), scm__rc.d2149[38]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[258]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[259]), scm__rc.d2149[91]);
  scm__rc.d2149[222] = Scm_MakeExtendedPair(scm__rc.d2149[38], SCM_OBJ(&scm__rc.d2151[235]), SCM_OBJ(&scm__rc.d2151[261]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-recvfrom")), SCM_OBJ(&libnetsocket_recvfrom__STUB), 0);
  libnetsocket_recvfrom__STUB.common.info = scm__rc.d2149[222];
  libnetsocket_recvfrom__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[201]);
  scm__rc.d2149[223] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[114])),TRUE); /* addrs */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[262]), scm__rc.d2149[223]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[263]), scm__rc.d2149[210]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[264]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[267]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[268]), scm__rc.d2149[39]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[269]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[270]), scm__rc.d2149[91]);
  scm__rc.d2149[224] = Scm_MakeExtendedPair(scm__rc.d2149[39], SCM_OBJ(&scm__rc.d2151[264]), SCM_OBJ(&scm__rc.d2151[272]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[225]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[225]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[225]))[5] = scm__rc.d2149[212];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[225]))[6] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[225]))[7] = scm__rc.d2149[94];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[225]))[8] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[225]))[9] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-recvfrom!")), SCM_OBJ(&libnetsocket_recvfromX__STUB), 0);
  libnetsocket_recvfromX__STUB.common.info = scm__rc.d2149[224];
  libnetsocket_recvfromX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[225]);
  scm__rc.d2149[235] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[115])),TRUE); /* name */
  scm__rc.d2149[236] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[116])),TRUE); /* iov */
  scm__rc.d2149[237] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[117])),TRUE); /* control */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[273]), scm__rc.d2149[210]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[274]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[275]), scm__rc.d2149[175]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[276]), scm__rc.d2149[237]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[277]), scm__rc.d2149[236]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[278]), scm__rc.d2149[235]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[281]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[282]), scm__rc.d2149[35]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[283]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[284]), scm__rc.d2149[91]);
  scm__rc.d2149[238] = Scm_MakeExtendedPair(scm__rc.d2149[35], SCM_OBJ(&scm__rc.d2151[278]), SCM_OBJ(&scm__rc.d2151[286]));
  scm__rc.d2149[239] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[118])),TRUE); /* <socket-address>? */
  scm__rc.d2149[240] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[119])),TRUE); /* <vector>? */
  scm__rc.d2149[241] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[120])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[242]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[242]))[4] = scm__rc.d2149[239];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[242]))[5] = scm__rc.d2149[240];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[242]))[6] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[242]))[7] = scm__rc.d2149[241];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[242]))[8] = scm__rc.d2149[94];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[242]))[9] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[242]))[10] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-buildmsg")), SCM_OBJ(&libnetsocket_buildmsg__STUB), 0);
  libnetsocket_buildmsg__STUB.common.info = scm__rc.d2149[238];
  libnetsocket_buildmsg__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[242]);
  scm__rc.d2149[253] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[121])),TRUE); /* level */
  scm__rc.d2149[254] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[122])),TRUE); /* option */
  scm__rc.d2149[255] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[123])),TRUE); /* value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[287]), scm__rc.d2149[255]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[288]), scm__rc.d2149[254]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[289]), scm__rc.d2149[253]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[290]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[293]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[294]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[295]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[296]), scm__rc.d2149[91]);
  scm__rc.d2149[256] = Scm_MakeExtendedPair(scm__rc.d2149[27], SCM_OBJ(&scm__rc.d2151[290]), SCM_OBJ(&scm__rc.d2151[298]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[5] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[6] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[7] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[8] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[257]))[9] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-setsockopt")), SCM_OBJ(&libnetsocket_setsockopt__STUB), 0);
  libnetsocket_setsockopt__STUB.common.info = scm__rc.d2149[256];
  libnetsocket_setsockopt__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[257]);
  scm__rc.d2149[267] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[124])),TRUE); /* rsize */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[299]), scm__rc.d2149[267]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[300]), scm__rc.d2149[254]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[301]), scm__rc.d2149[253]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[302]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[305]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[306]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[307]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[308]), scm__rc.d2149[91]);
  scm__rc.d2149[268] = Scm_MakeExtendedPair(scm__rc.d2149[28], SCM_OBJ(&scm__rc.d2151[302]), SCM_OBJ(&scm__rc.d2151[310]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[269]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[269]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[269]))[5] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[269]))[6] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[269]))[7] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[269]))[8] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[269]))[9] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-getsockopt")), SCM_OBJ(&libnetsocket_getsockopt__STUB), 0);
  libnetsocket_getsockopt__STUB.common.info = scm__rc.d2149[268];
  libnetsocket_getsockopt__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[269]);
#if defined(SOL_SOCKET)
  scm__rc.d2200[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2201[0])),TRUE); /* SOL_SOCKET */
#endif /* defined(SOL_SOCKET) */
#if defined(SOL_SOCKET)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2200[0]), Scm_MakeInteger(SOL_SOCKET), SCM_BINDING_CONST);

#endif /* defined(SOL_SOCKET) */
#if defined(SO_ACCEPTCONN)
  scm__rc.d2202[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2203[0])),TRUE); /* SO_ACCEPTCONN */
#endif /* defined(SO_ACCEPTCONN) */
#if defined(SO_ACCEPTCONN)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2202[0]), Scm_MakeInteger(SO_ACCEPTCONN), SCM_BINDING_CONST);

#endif /* defined(SO_ACCEPTCONN) */
#if defined(SO_BINDTODEVICE)
  scm__rc.d2204[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2205[0])),TRUE); /* SO_BINDTODEVICE */
#endif /* defined(SO_BINDTODEVICE) */
#if defined(SO_BINDTODEVICE)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2204[0]), Scm_MakeInteger(SO_BINDTODEVICE), SCM_BINDING_CONST);

#endif /* defined(SO_BINDTODEVICE) */
#if defined(SO_BROADCAST)
  scm__rc.d2206[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2207[0])),TRUE); /* SO_BROADCAST */
#endif /* defined(SO_BROADCAST) */
#if defined(SO_BROADCAST)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2206[0]), Scm_MakeInteger(SO_BROADCAST), SCM_BINDING_CONST);

#endif /* defined(SO_BROADCAST) */
#if defined(SO_DEBUG)
  scm__rc.d2208[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2209[0])),TRUE); /* SO_DEBUG */
#endif /* defined(SO_DEBUG) */
#if defined(SO_DEBUG)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2208[0]), Scm_MakeInteger(SO_DEBUG), SCM_BINDING_CONST);

#endif /* defined(SO_DEBUG) */
#if defined(SO_DONTROUTE)
  scm__rc.d2210[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2211[0])),TRUE); /* SO_DONTROUTE */
#endif /* defined(SO_DONTROUTE) */
#if defined(SO_DONTROUTE)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2210[0]), Scm_MakeInteger(SO_DONTROUTE), SCM_BINDING_CONST);

#endif /* defined(SO_DONTROUTE) */
#if defined(SO_ERROR)
  scm__rc.d2212[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2213[0])),TRUE); /* SO_ERROR */
#endif /* defined(SO_ERROR) */
#if defined(SO_ERROR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2212[0]), Scm_MakeInteger(SO_ERROR), SCM_BINDING_CONST);

#endif /* defined(SO_ERROR) */
#if defined(SO_KEEPALIVE)
  scm__rc.d2214[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2215[0])),TRUE); /* SO_KEEPALIVE */
#endif /* defined(SO_KEEPALIVE) */
#if defined(SO_KEEPALIVE)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2214[0]), Scm_MakeInteger(SO_KEEPALIVE), SCM_BINDING_CONST);

#endif /* defined(SO_KEEPALIVE) */
#if defined(SO_LINGER)
  scm__rc.d2216[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2217[0])),TRUE); /* SO_LINGER */
#endif /* defined(SO_LINGER) */
#if defined(SO_LINGER)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2216[0]), Scm_MakeInteger(SO_LINGER), SCM_BINDING_CONST);

#endif /* defined(SO_LINGER) */
#if defined(SO_OOBINLINE)
  scm__rc.d2218[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2219[0])),TRUE); /* SO_OOBINLINE */
#endif /* defined(SO_OOBINLINE) */
#if defined(SO_OOBINLINE)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2218[0]), Scm_MakeInteger(SO_OOBINLINE), SCM_BINDING_CONST);

#endif /* defined(SO_OOBINLINE) */
#if defined(SO_PASSCRED)
  scm__rc.d2220[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2221[0])),TRUE); /* SO_PASSCRED */
#endif /* defined(SO_PASSCRED) */
#if defined(SO_PASSCRED)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2220[0]), Scm_MakeInteger(SO_PASSCRED), SCM_BINDING_CONST);

#endif /* defined(SO_PASSCRED) */
#if defined(SO_PEERCRED)
  scm__rc.d2222[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2223[0])),TRUE); /* SO_PEERCRED */
#endif /* defined(SO_PEERCRED) */
#if defined(SO_PEERCRED)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2222[0]), Scm_MakeInteger(SO_PEERCRED), SCM_BINDING_CONST);

#endif /* defined(SO_PEERCRED) */
#if defined(SO_PRIORITY)
  scm__rc.d2224[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2225[0])),TRUE); /* SO_PRIORITY */
#endif /* defined(SO_PRIORITY) */
#if defined(SO_PRIORITY)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2224[0]), Scm_MakeInteger(SO_PRIORITY), SCM_BINDING_CONST);

#endif /* defined(SO_PRIORITY) */
#if defined(SO_RCVBUF)
  scm__rc.d2226[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2227[0])),TRUE); /* SO_RCVBUF */
#endif /* defined(SO_RCVBUF) */
#if defined(SO_RCVBUF)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2226[0]), Scm_MakeInteger(SO_RCVBUF), SCM_BINDING_CONST);

#endif /* defined(SO_RCVBUF) */
#if defined(SO_RCVLOWAT)
  scm__rc.d2228[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2229[0])),TRUE); /* SO_RCVLOWAT */
#endif /* defined(SO_RCVLOWAT) */
#if defined(SO_RCVLOWAT)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2228[0]), Scm_MakeInteger(SO_RCVLOWAT), SCM_BINDING_CONST);

#endif /* defined(SO_RCVLOWAT) */
#if defined(SO_RCVTIMEO)
  scm__rc.d2230[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2231[0])),TRUE); /* SO_RCVTIMEO */
#endif /* defined(SO_RCVTIMEO) */
#if defined(SO_RCVTIMEO)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2230[0]), Scm_MakeInteger(SO_RCVTIMEO), SCM_BINDING_CONST);

#endif /* defined(SO_RCVTIMEO) */
#if defined(SO_REUSEADDR)
  scm__rc.d2232[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2233[0])),TRUE); /* SO_REUSEADDR */
#endif /* defined(SO_REUSEADDR) */
#if defined(SO_REUSEADDR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2232[0]), Scm_MakeInteger(SO_REUSEADDR), SCM_BINDING_CONST);

#endif /* defined(SO_REUSEADDR) */
#if defined(SO_REUSEPORT)
  scm__rc.d2234[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2235[0])),TRUE); /* SO_REUSEPORT */
#endif /* defined(SO_REUSEPORT) */
#if defined(SO_REUSEPORT)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2234[0]), Scm_MakeInteger(SO_REUSEPORT), SCM_BINDING_CONST);

#endif /* defined(SO_REUSEPORT) */
#if defined(SO_SNDBUF)
  scm__rc.d2236[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2237[0])),TRUE); /* SO_SNDBUF */
#endif /* defined(SO_SNDBUF) */
#if defined(SO_SNDBUF)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2236[0]), Scm_MakeInteger(SO_SNDBUF), SCM_BINDING_CONST);

#endif /* defined(SO_SNDBUF) */
#if defined(SO_SNDLOWAT)
  scm__rc.d2238[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2239[0])),TRUE); /* SO_SNDLOWAT */
#endif /* defined(SO_SNDLOWAT) */
#if defined(SO_SNDLOWAT)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2238[0]), Scm_MakeInteger(SO_SNDLOWAT), SCM_BINDING_CONST);

#endif /* defined(SO_SNDLOWAT) */
#if defined(SO_SNDTIMEO)
  scm__rc.d2240[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2241[0])),TRUE); /* SO_SNDTIMEO */
#endif /* defined(SO_SNDTIMEO) */
#if defined(SO_SNDTIMEO)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2240[0]), Scm_MakeInteger(SO_SNDTIMEO), SCM_BINDING_CONST);

#endif /* defined(SO_SNDTIMEO) */
#if defined(SO_TIMESTAMP)
  scm__rc.d2242[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2243[0])),TRUE); /* SO_TIMESTAMP */
#endif /* defined(SO_TIMESTAMP) */
#if defined(SO_TIMESTAMP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2242[0]), Scm_MakeInteger(SO_TIMESTAMP), SCM_BINDING_CONST);

#endif /* defined(SO_TIMESTAMP) */
#if defined(SO_TYPE)
  scm__rc.d2244[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2245[0])),TRUE); /* SO_TYPE */
#endif /* defined(SO_TYPE) */
#if defined(SO_TYPE)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2244[0]), Scm_MakeInteger(SO_TYPE), SCM_BINDING_CONST);

#endif /* defined(SO_TYPE) */
#if defined(SOL_TCP)
  scm__rc.d2246[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2247[0])),TRUE); /* SOL_TCP */
#endif /* defined(SOL_TCP) */
#if defined(SOL_TCP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2246[0]), Scm_MakeInteger(SOL_TCP), SCM_BINDING_CONST);

#endif /* defined(SOL_TCP) */
#if defined(TCP_NODELAY)
  scm__rc.d2248[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2249[0])),TRUE); /* TCP_NODELAY */
#endif /* defined(TCP_NODELAY) */
#if defined(TCP_NODELAY)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2248[0]), Scm_MakeInteger(TCP_NODELAY), SCM_BINDING_CONST);

#endif /* defined(TCP_NODELAY) */
#if defined(TCP_MAXSEG)
  scm__rc.d2250[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2251[0])),TRUE); /* TCP_MAXSEG */
#endif /* defined(TCP_MAXSEG) */
#if defined(TCP_MAXSEG)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2250[0]), Scm_MakeInteger(TCP_MAXSEG), SCM_BINDING_CONST);

#endif /* defined(TCP_MAXSEG) */
#if defined(TCP_CORK)
  scm__rc.d2252[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2253[0])),TRUE); /* TCP_CORK */
#endif /* defined(TCP_CORK) */
#if defined(TCP_CORK)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2252[0]), Scm_MakeInteger(TCP_CORK), SCM_BINDING_CONST);

#endif /* defined(TCP_CORK) */
#if defined(SOL_IP)
  scm__rc.d2254[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2255[0])),TRUE); /* SOL_IP */
#endif /* defined(SOL_IP) */
#if defined(SOL_IP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2254[0]), Scm_MakeInteger(SOL_IP), SCM_BINDING_CONST);

#endif /* defined(SOL_IP) */
#if defined(IP_OPTIONS)
  scm__rc.d2256[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2257[0])),TRUE); /* IP_OPTIONS */
#endif /* defined(IP_OPTIONS) */
#if defined(IP_OPTIONS)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2256[0]), Scm_MakeInteger(IP_OPTIONS), SCM_BINDING_CONST);

#endif /* defined(IP_OPTIONS) */
#if defined(IP_PKTINFO)
  scm__rc.d2258[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2259[0])),TRUE); /* IP_PKTINFO */
#endif /* defined(IP_PKTINFO) */
#if defined(IP_PKTINFO)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2258[0]), Scm_MakeInteger(IP_PKTINFO), SCM_BINDING_CONST);

#endif /* defined(IP_PKTINFO) */
#if defined(IP_RECVTOS)
  scm__rc.d2260[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2261[0])),TRUE); /* IP_RECVTOS */
#endif /* defined(IP_RECVTOS) */
#if defined(IP_RECVTOS)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2260[0]), Scm_MakeInteger(IP_RECVTOS), SCM_BINDING_CONST);

#endif /* defined(IP_RECVTOS) */
#if defined(IP_RECVTTL)
  scm__rc.d2262[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2263[0])),TRUE); /* IP_RECVTTL */
#endif /* defined(IP_RECVTTL) */
#if defined(IP_RECVTTL)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2262[0]), Scm_MakeInteger(IP_RECVTTL), SCM_BINDING_CONST);

#endif /* defined(IP_RECVTTL) */
#if defined(IP_RECVOPTS)
  scm__rc.d2264[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2265[0])),TRUE); /* IP_RECVOPTS */
#endif /* defined(IP_RECVOPTS) */
#if defined(IP_RECVOPTS)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2264[0]), Scm_MakeInteger(IP_RECVOPTS), SCM_BINDING_CONST);

#endif /* defined(IP_RECVOPTS) */
#if defined(IP_TOS)
  scm__rc.d2266[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2267[0])),TRUE); /* IP_TOS */
#endif /* defined(IP_TOS) */
#if defined(IP_TOS)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2266[0]), Scm_MakeInteger(IP_TOS), SCM_BINDING_CONST);

#endif /* defined(IP_TOS) */
#if defined(IP_TTL)
  scm__rc.d2268[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2269[0])),TRUE); /* IP_TTL */
#endif /* defined(IP_TTL) */
#if defined(IP_TTL)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2268[0]), Scm_MakeInteger(IP_TTL), SCM_BINDING_CONST);

#endif /* defined(IP_TTL) */
#if defined(IP_HDRINCL)
  scm__rc.d2270[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2271[0])),TRUE); /* IP_HDRINCL */
#endif /* defined(IP_HDRINCL) */
#if defined(IP_HDRINCL)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2270[0]), Scm_MakeInteger(IP_HDRINCL), SCM_BINDING_CONST);

#endif /* defined(IP_HDRINCL) */
#if defined(IP_RECVERR)
  scm__rc.d2272[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2273[0])),TRUE); /* IP_RECVERR */
#endif /* defined(IP_RECVERR) */
#if defined(IP_RECVERR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2272[0]), Scm_MakeInteger(IP_RECVERR), SCM_BINDING_CONST);

#endif /* defined(IP_RECVERR) */
#if defined(IP_MTU_DISCOVER)
  scm__rc.d2274[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2275[0])),TRUE); /* IP_MTU_DISCOVER */
#endif /* defined(IP_MTU_DISCOVER) */
#if defined(IP_MTU_DISCOVER)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2274[0]), Scm_MakeInteger(IP_MTU_DISCOVER), SCM_BINDING_CONST);

#endif /* defined(IP_MTU_DISCOVER) */
#if defined(IP_MTU)
  scm__rc.d2276[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2277[0])),TRUE); /* IP_MTU */
#endif /* defined(IP_MTU) */
#if defined(IP_MTU)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2276[0]), Scm_MakeInteger(IP_MTU), SCM_BINDING_CONST);

#endif /* defined(IP_MTU) */
#if defined(IP_ROUTER_ALERT)
  scm__rc.d2278[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2279[0])),TRUE); /* IP_ROUTER_ALERT */
#endif /* defined(IP_ROUTER_ALERT) */
#if defined(IP_ROUTER_ALERT)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2278[0]), Scm_MakeInteger(IP_ROUTER_ALERT), SCM_BINDING_CONST);

#endif /* defined(IP_ROUTER_ALERT) */
#if defined(IP_MULTICAST_TTL)
  scm__rc.d2280[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2281[0])),TRUE); /* IP_MULTICAST_TTL */
#endif /* defined(IP_MULTICAST_TTL) */
#if defined(IP_MULTICAST_TTL)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2280[0]), Scm_MakeInteger(IP_MULTICAST_TTL), SCM_BINDING_CONST);

#endif /* defined(IP_MULTICAST_TTL) */
#if defined(IP_MULTICAST_LOOP)
  scm__rc.d2282[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2283[0])),TRUE); /* IP_MULTICAST_LOOP */
#endif /* defined(IP_MULTICAST_LOOP) */
#if defined(IP_MULTICAST_LOOP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2282[0]), Scm_MakeInteger(IP_MULTICAST_LOOP), SCM_BINDING_CONST);

#endif /* defined(IP_MULTICAST_LOOP) */
#if defined(IP_ADD_MEMBERSHIP)
  scm__rc.d2284[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2285[0])),TRUE); /* IP_ADD_MEMBERSHIP */
#endif /* defined(IP_ADD_MEMBERSHIP) */
#if defined(IP_ADD_MEMBERSHIP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2284[0]), Scm_MakeInteger(IP_ADD_MEMBERSHIP), SCM_BINDING_CONST);

#endif /* defined(IP_ADD_MEMBERSHIP) */
#if defined(IP_DROP_MEMBERSHIP)
  scm__rc.d2286[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2287[0])),TRUE); /* IP_DROP_MEMBERSHIP */
#endif /* defined(IP_DROP_MEMBERSHIP) */
#if defined(IP_DROP_MEMBERSHIP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2286[0]), Scm_MakeInteger(IP_DROP_MEMBERSHIP), SCM_BINDING_CONST);

#endif /* defined(IP_DROP_MEMBERSHIP) */
#if defined(IP_MULTICAST_IF)
  scm__rc.d2288[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2289[0])),TRUE); /* IP_MULTICAST_IF */
#endif /* defined(IP_MULTICAST_IF) */
#if defined(IP_MULTICAST_IF)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2288[0]), Scm_MakeInteger(IP_MULTICAST_IF), SCM_BINDING_CONST);

#endif /* defined(IP_MULTICAST_IF) */
  scm__rc.d2149[279] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[125])),TRUE); /* request */
  scm__rc.d2149[280] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[126])),TRUE); /* data */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[311]), scm__rc.d2149[280]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[312]), scm__rc.d2149[279]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[313]), scm__rc.d2149[106]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[316]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[317]), scm__rc.d2149[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[318]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[319]), scm__rc.d2149[91]);
  scm__rc.d2149[281] = Scm_MakeExtendedPair(scm__rc.d2149[31], SCM_OBJ(&scm__rc.d2151[313]), SCM_OBJ(&scm__rc.d2151[321]));
  scm__rc.d2149[282] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[127])),TRUE); /* <integer> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[4] = scm__rc.d2149[2];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[5] = scm__rc.d2149[282];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[6] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[7] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[283]))[8] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("socket-ioctl")), SCM_OBJ(&libnetsocket_ioctl__STUB), 0);
  libnetsocket_ioctl__STUB.common.info = scm__rc.d2149[281];
  libnetsocket_ioctl__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[283]);
#if defined(SIOCGIFNAME)
  scm__rc.d2290[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2291[0])),TRUE); /* SIOCGIFNAME */
#endif /* defined(SIOCGIFNAME) */
#if defined(SIOCGIFNAME)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2290[0]), Scm_MakeInteger(SIOCGIFNAME), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFNAME) */
#if defined(SIOCSIFNAME)
  scm__rc.d2292[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2293[0])),TRUE); /* SIOCSIFNAME */
#endif /* defined(SIOCSIFNAME) */
#if defined(SIOCSIFNAME)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2292[0]), Scm_MakeInteger(SIOCSIFNAME), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFNAME) */
#if defined(SIOCGIFINDEX)
  scm__rc.d2294[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2295[0])),TRUE); /* SIOCGIFINDEX */
#endif /* defined(SIOCGIFINDEX) */
#if defined(SIOCGIFINDEX)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2294[0]), Scm_MakeInteger(SIOCGIFINDEX), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFINDEX) */
#if defined(SIOCGIFADDR)
  scm__rc.d2296[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2297[0])),TRUE); /* SIOCGIFADDR */
#endif /* defined(SIOCGIFADDR) */
#if defined(SIOCGIFADDR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2296[0]), Scm_MakeInteger(SIOCGIFADDR), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFADDR) */
#if defined(SIOCSIFADDR)
  scm__rc.d2298[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2299[0])),TRUE); /* SIOCSIFADDR */
#endif /* defined(SIOCSIFADDR) */
#if defined(SIOCSIFADDR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2298[0]), Scm_MakeInteger(SIOCSIFADDR), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFADDR) */
#if defined(SIOCGIFDSTADDR)
  scm__rc.d2300[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2301[0])),TRUE); /* SIOCGIFDSTADDR */
#endif /* defined(SIOCGIFDSTADDR) */
#if defined(SIOCGIFDSTADDR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2300[0]), Scm_MakeInteger(SIOCGIFDSTADDR), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFDSTADDR) */
#if defined(SIOCSIFDSTADDR)
  scm__rc.d2302[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2303[0])),TRUE); /* SIOCSIFDSTADDR */
#endif /* defined(SIOCSIFDSTADDR) */
#if defined(SIOCSIFDSTADDR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2302[0]), Scm_MakeInteger(SIOCSIFDSTADDR), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFDSTADDR) */
#if defined(SIOCGIFBRDADDR)
  scm__rc.d2304[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2305[0])),TRUE); /* SIOCGIFBRDADDR */
#endif /* defined(SIOCGIFBRDADDR) */
#if defined(SIOCGIFBRDADDR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2304[0]), Scm_MakeInteger(SIOCGIFBRDADDR), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFBRDADDR) */
#if defined(SIOCSIFBRDADDR)
  scm__rc.d2306[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2307[0])),TRUE); /* SIOCSIFBRDADDR */
#endif /* defined(SIOCSIFBRDADDR) */
#if defined(SIOCSIFBRDADDR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2306[0]), Scm_MakeInteger(SIOCSIFBRDADDR), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFBRDADDR) */
#if defined(SIOCGIFNETMASK)
  scm__rc.d2308[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2309[0])),TRUE); /* SIOCGIFNETMASK */
#endif /* defined(SIOCGIFNETMASK) */
#if defined(SIOCGIFNETMASK)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2308[0]), Scm_MakeInteger(SIOCGIFNETMASK), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFNETMASK) */
#if defined(SIOCSIFNETMASK)
  scm__rc.d2310[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2311[0])),TRUE); /* SIOCSIFNETMASK */
#endif /* defined(SIOCSIFNETMASK) */
#if defined(SIOCSIFNETMASK)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2310[0]), Scm_MakeInteger(SIOCSIFNETMASK), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFNETMASK) */
#if defined(SIOCGIFFLAGS)
  scm__rc.d2312[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2313[0])),TRUE); /* SIOCGIFFLAGS */
#endif /* defined(SIOCGIFFLAGS) */
#if defined(SIOCGIFFLAGS)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2312[0]), Scm_MakeInteger(SIOCGIFFLAGS), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFFLAGS) */
#if defined(SIOCSIFFLAGS)
  scm__rc.d2314[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2315[0])),TRUE); /* SIOCSIFFLAGS */
#endif /* defined(SIOCSIFFLAGS) */
#if defined(SIOCSIFFLAGS)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2314[0]), Scm_MakeInteger(SIOCSIFFLAGS), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFFLAGS) */
#if defined(SIOCGIFMETRIC)
  scm__rc.d2316[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2317[0])),TRUE); /* SIOCGIFMETRIC */
#endif /* defined(SIOCGIFMETRIC) */
#if defined(SIOCGIFMETRIC)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2316[0]), Scm_MakeInteger(SIOCGIFMETRIC), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFMETRIC) */
#if defined(SIOCSIFMETRIC)
  scm__rc.d2318[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2319[0])),TRUE); /* SIOCSIFMETRIC */
#endif /* defined(SIOCSIFMETRIC) */
#if defined(SIOCSIFMETRIC)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2318[0]), Scm_MakeInteger(SIOCSIFMETRIC), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFMETRIC) */
#if defined(SIOCGIFMTU)
  scm__rc.d2320[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2321[0])),TRUE); /* SIOCGIFMTU */
#endif /* defined(SIOCGIFMTU) */
#if defined(SIOCGIFMTU)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2320[0]), Scm_MakeInteger(SIOCGIFMTU), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFMTU) */
#if defined(SIOCSIFMTU)
  scm__rc.d2322[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2323[0])),TRUE); /* SIOCSIFMTU */
#endif /* defined(SIOCSIFMTU) */
#if defined(SIOCSIFMTU)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2322[0]), Scm_MakeInteger(SIOCSIFMTU), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFMTU) */
#if defined(SIOCGIFHWADDR)
  scm__rc.d2324[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2325[0])),TRUE); /* SIOCGIFHWADDR */
#endif /* defined(SIOCGIFHWADDR) */
#if defined(SIOCGIFHWADDR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2324[0]), Scm_MakeInteger(SIOCGIFHWADDR), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFHWADDR) */
#if defined(SIOCSIFHWADDR)
  scm__rc.d2326[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2327[0])),TRUE); /* SIOCSIFHWADDR */
#endif /* defined(SIOCSIFHWADDR) */
#if defined(SIOCSIFHWADDR)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2326[0]), Scm_MakeInteger(SIOCSIFHWADDR), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFHWADDR) */
#if defined(SIOCSIFHWBROADCAST)
  scm__rc.d2328[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2329[0])),TRUE); /* SIOCSIFHWBROADCAST */
#endif /* defined(SIOCSIFHWBROADCAST) */
#if defined(SIOCSIFHWBROADCAST)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2328[0]), Scm_MakeInteger(SIOCSIFHWBROADCAST), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFHWBROADCAST) */
#if defined(SIOCGIFMAP)
  scm__rc.d2330[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2331[0])),TRUE); /* SIOCGIFMAP */
#endif /* defined(SIOCGIFMAP) */
#if defined(SIOCGIFMAP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2330[0]), Scm_MakeInteger(SIOCGIFMAP), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFMAP) */
#if defined(SIOCSIFMAP)
  scm__rc.d2332[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2333[0])),TRUE); /* SIOCSIFMAP */
#endif /* defined(SIOCSIFMAP) */
#if defined(SIOCSIFMAP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2332[0]), Scm_MakeInteger(SIOCSIFMAP), SCM_BINDING_CONST);

#endif /* defined(SIOCSIFMAP) */
#if defined(SIOCADDMULTI)
  scm__rc.d2334[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2335[0])),TRUE); /* SIOCADDMULTI */
#endif /* defined(SIOCADDMULTI) */
#if defined(SIOCADDMULTI)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2334[0]), Scm_MakeInteger(SIOCADDMULTI), SCM_BINDING_CONST);

#endif /* defined(SIOCADDMULTI) */
#if defined(SIOCDELMULTI)
  scm__rc.d2336[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2337[0])),TRUE); /* SIOCDELMULTI */
#endif /* defined(SIOCDELMULTI) */
#if defined(SIOCDELMULTI)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2336[0]), Scm_MakeInteger(SIOCDELMULTI), SCM_BINDING_CONST);

#endif /* defined(SIOCDELMULTI) */
#if defined(SIOGIFTXQLEN)
  scm__rc.d2338[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2339[0])),TRUE); /* SIOGIFTXQLEN */
#endif /* defined(SIOGIFTXQLEN) */
#if defined(SIOGIFTXQLEN)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2338[0]), Scm_MakeInteger(SIOGIFTXQLEN), SCM_BINDING_CONST);

#endif /* defined(SIOGIFTXQLEN) */
#if defined(SIOSIFTXQLEN)
  scm__rc.d2340[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2341[0])),TRUE); /* SIOSIFTXQLEN */
#endif /* defined(SIOSIFTXQLEN) */
#if defined(SIOSIFTXQLEN)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2340[0]), Scm_MakeInteger(SIOSIFTXQLEN), SCM_BINDING_CONST);

#endif /* defined(SIOSIFTXQLEN) */
#if defined(SIOCGIFCONF)
  scm__rc.d2342[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2343[0])),TRUE); /* SIOCGIFCONF */
#endif /* defined(SIOCGIFCONF) */
#if defined(SIOCGIFCONF)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2342[0]), Scm_MakeInteger(SIOCGIFCONF), SCM_BINDING_CONST);

#endif /* defined(SIOCGIFCONF) */
#if defined(IFF_UP)
  scm__rc.d2344[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2345[0])),TRUE); /* IFF_UP */
#endif /* defined(IFF_UP) */
#if defined(IFF_UP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2344[0]), Scm_MakeInteger(IFF_UP), SCM_BINDING_CONST);

#endif /* defined(IFF_UP) */
#if defined(IFF_BROADCAST)
  scm__rc.d2346[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2347[0])),TRUE); /* IFF_BROADCAST */
#endif /* defined(IFF_BROADCAST) */
#if defined(IFF_BROADCAST)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2346[0]), Scm_MakeInteger(IFF_BROADCAST), SCM_BINDING_CONST);

#endif /* defined(IFF_BROADCAST) */
#if defined(IFF_DEBUG)
  scm__rc.d2348[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2349[0])),TRUE); /* IFF_DEBUG */
#endif /* defined(IFF_DEBUG) */
#if defined(IFF_DEBUG)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2348[0]), Scm_MakeInteger(IFF_DEBUG), SCM_BINDING_CONST);

#endif /* defined(IFF_DEBUG) */
#if defined(IFF_LOOPBACK)
  scm__rc.d2350[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2351[0])),TRUE); /* IFF_LOOPBACK */
#endif /* defined(IFF_LOOPBACK) */
#if defined(IFF_LOOPBACK)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2350[0]), Scm_MakeInteger(IFF_LOOPBACK), SCM_BINDING_CONST);

#endif /* defined(IFF_LOOPBACK) */
#if defined(IFF_POINTTOPOINT)
  scm__rc.d2352[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2353[0])),TRUE); /* IFF_POINTTOPOINT */
#endif /* defined(IFF_POINTTOPOINT) */
#if defined(IFF_POINTTOPOINT)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2352[0]), Scm_MakeInteger(IFF_POINTTOPOINT), SCM_BINDING_CONST);

#endif /* defined(IFF_POINTTOPOINT) */
#if defined(IFF_RUNNING)
  scm__rc.d2354[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2355[0])),TRUE); /* IFF_RUNNING */
#endif /* defined(IFF_RUNNING) */
#if defined(IFF_RUNNING)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2354[0]), Scm_MakeInteger(IFF_RUNNING), SCM_BINDING_CONST);

#endif /* defined(IFF_RUNNING) */
#if defined(IFF_NOARP)
  scm__rc.d2356[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2357[0])),TRUE); /* IFF_NOARP */
#endif /* defined(IFF_NOARP) */
#if defined(IFF_NOARP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2356[0]), Scm_MakeInteger(IFF_NOARP), SCM_BINDING_CONST);

#endif /* defined(IFF_NOARP) */
#if defined(IFF_PROMISC)
  scm__rc.d2358[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2359[0])),TRUE); /* IFF_PROMISC */
#endif /* defined(IFF_PROMISC) */
#if defined(IFF_PROMISC)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2358[0]), Scm_MakeInteger(IFF_PROMISC), SCM_BINDING_CONST);

#endif /* defined(IFF_PROMISC) */
#if defined(IFF_NOTRAILERS)
  scm__rc.d2360[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2361[0])),TRUE); /* IFF_NOTRAILERS */
#endif /* defined(IFF_NOTRAILERS) */
#if defined(IFF_NOTRAILERS)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2360[0]), Scm_MakeInteger(IFF_NOTRAILERS), SCM_BINDING_CONST);

#endif /* defined(IFF_NOTRAILERS) */
#if defined(IFF_ALLMULTI)
  scm__rc.d2362[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2363[0])),TRUE); /* IFF_ALLMULTI */
#endif /* defined(IFF_ALLMULTI) */
#if defined(IFF_ALLMULTI)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2362[0]), Scm_MakeInteger(IFF_ALLMULTI), SCM_BINDING_CONST);

#endif /* defined(IFF_ALLMULTI) */
#if defined(IFF_MASTER)
  scm__rc.d2364[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2365[0])),TRUE); /* IFF_MASTER */
#endif /* defined(IFF_MASTER) */
#if defined(IFF_MASTER)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2364[0]), Scm_MakeInteger(IFF_MASTER), SCM_BINDING_CONST);

#endif /* defined(IFF_MASTER) */
#if defined(IFF_SLAVE)
  scm__rc.d2366[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2367[0])),TRUE); /* IFF_SLAVE */
#endif /* defined(IFF_SLAVE) */
#if defined(IFF_SLAVE)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2366[0]), Scm_MakeInteger(IFF_SLAVE), SCM_BINDING_CONST);

#endif /* defined(IFF_SLAVE) */
#if defined(IFF_MULTICAST)
  scm__rc.d2368[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2369[0])),TRUE); /* IFF_MULTICAST */
#endif /* defined(IFF_MULTICAST) */
#if defined(IFF_MULTICAST)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2368[0]), Scm_MakeInteger(IFF_MULTICAST), SCM_BINDING_CONST);

#endif /* defined(IFF_MULTICAST) */
#if defined(IFF_PORTSEL)
  scm__rc.d2370[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2371[0])),TRUE); /* IFF_PORTSEL */
#endif /* defined(IFF_PORTSEL) */
#if defined(IFF_PORTSEL)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2370[0]), Scm_MakeInteger(IFF_PORTSEL), SCM_BINDING_CONST);

#endif /* defined(IFF_PORTSEL) */
#if defined(IFF_AUTOMEDIA)
  scm__rc.d2372[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2373[0])),TRUE); /* IFF_AUTOMEDIA */
#endif /* defined(IFF_AUTOMEDIA) */
#if defined(IFF_AUTOMEDIA)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2372[0]), Scm_MakeInteger(IFF_AUTOMEDIA), SCM_BINDING_CONST);

#endif /* defined(IFF_AUTOMEDIA) */
#if defined(IFF_DYNAMIC)
  scm__rc.d2374[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2375[0])),TRUE); /* IFF_DYNAMIC */
#endif /* defined(IFF_DYNAMIC) */
#if defined(IFF_DYNAMIC)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2374[0]), Scm_MakeInteger(IFF_DYNAMIC), SCM_BINDING_CONST);

#endif /* defined(IFF_DYNAMIC) */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[322]), scm__rc.d2149[235]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[325]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[326]), scm__rc.d2149[53]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[327]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[328]), scm__rc.d2149[91]);
  scm__rc.d2149[292] = Scm_MakeExtendedPair(scm__rc.d2149[53], SCM_OBJ(&scm__rc.d2151[322]), SCM_OBJ(&scm__rc.d2151[330]));
  scm__rc.d2149[293] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[128])),TRUE); /* <const-cstring> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[294]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[294]))[4] = scm__rc.d2149[293];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[294]))[5] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[294]))[6] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-gethostbyname")), SCM_OBJ(&libnetsys_gethostbyname__STUB), 0);
  libnetsys_gethostbyname__STUB.common.info = scm__rc.d2149[292];
  libnetsys_gethostbyname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[294]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[331]), scm__rc.d2149[87]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[332]), scm__rc.d2149[149]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[335]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[336]), scm__rc.d2149[54]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[337]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[338]), scm__rc.d2149[91]);
  scm__rc.d2149[301] = Scm_MakeExtendedPair(scm__rc.d2149[54], SCM_OBJ(&scm__rc.d2151[332]), SCM_OBJ(&scm__rc.d2151[340]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[4] = scm__rc.d2149[293];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[5] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[6] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[302]))[7] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-gethostbyaddr")), SCM_OBJ(&libnetsys_gethostbyaddr__STUB), 0);
  libnetsys_gethostbyaddr__STUB.common.info = scm__rc.d2149[301];
  libnetsys_gethostbyaddr__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[302]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[343]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[344]), scm__rc.d2149[56]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[345]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[346]), scm__rc.d2149[91]);
  scm__rc.d2149[310] = Scm_MakeExtendedPair(scm__rc.d2149[56], SCM_OBJ(&scm__rc.d2151[322]), SCM_OBJ(&scm__rc.d2151[348]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-getprotobyname")), SCM_OBJ(&libnetsys_getprotobyname__STUB), 0);
  libnetsys_getprotobyname__STUB.common.info = scm__rc.d2149[310];
  libnetsys_getprotobyname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[294]);
  scm__rc.d2149[311] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[129])),TRUE); /* number */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[349]), scm__rc.d2149[311]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[352]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[353]), scm__rc.d2149[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[354]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[355]), scm__rc.d2149[91]);
  scm__rc.d2149[312] = Scm_MakeExtendedPair(scm__rc.d2149[57], SCM_OBJ(&scm__rc.d2151[349]), SCM_OBJ(&scm__rc.d2151[357]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[313]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[313]))[4] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[313]))[5] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[313]))[6] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-getprotobynumber")), SCM_OBJ(&libnetsys_getprotobynumber__STUB), 0);
  libnetsys_getprotobynumber__STUB.common.info = scm__rc.d2149[312];
  libnetsys_getprotobynumber__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[313]);
  scm__rc.d2149[320] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[130])),TRUE); /* proto */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[358]), scm__rc.d2149[320]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[359]), scm__rc.d2149[235]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[362]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[363]), scm__rc.d2149[59]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[364]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[365]), scm__rc.d2149[91]);
  scm__rc.d2149[321] = Scm_MakeExtendedPair(scm__rc.d2149[59], SCM_OBJ(&scm__rc.d2151[359]), SCM_OBJ(&scm__rc.d2151[367]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[322]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[322]))[4] = scm__rc.d2149[293];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[322]))[5] = scm__rc.d2149[293];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[322]))[6] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[322]))[7] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-getservbyname")), SCM_OBJ(&libnetsys_getservbyname__STUB), 0);
  libnetsys_getservbyname__STUB.common.info = scm__rc.d2149[321];
  libnetsys_getservbyname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[322]);
  scm__rc.d2149[330] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[131])),TRUE); /* port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[368]), scm__rc.d2149[330]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[371]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[372]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[373]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[374]), scm__rc.d2149[91]);
  scm__rc.d2149[331] = Scm_MakeExtendedPair(scm__rc.d2149[60], SCM_OBJ(&scm__rc.d2151[368]), SCM_OBJ(&scm__rc.d2151[376]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[332]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[332]))[4] = scm__rc.d2149[93];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[332]))[5] = scm__rc.d2149[293];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[332]))[6] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[332]))[7] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-getservbyport")), SCM_OBJ(&libnetsys_getservbyport__STUB), 0);
  libnetsys_getservbyport__STUB.common.info = scm__rc.d2149[331];
  libnetsys_getservbyport__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[332]);
  scm__rc.d2149[340] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[132])),TRUE); /* x */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[377]), scm__rc.d2149[340]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[380]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[381]), scm__rc.d2149[63]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[382]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[383]), scm__rc.d2149[91]);
  scm__rc.d2149[341] = Scm_MakeExtendedPair(scm__rc.d2149[63], SCM_OBJ(&scm__rc.d2151[377]), SCM_OBJ(&scm__rc.d2151[385]));
  scm__rc.d2149[342] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[133])),TRUE); /* <uint32> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[343]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[343]))[4] = scm__rc.d2149[342];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[343]))[5] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[343]))[6] = scm__rc.d2149[342];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-ntohl")), SCM_OBJ(&libnetsys_ntohl__STUB), 0);
  libnetsys_ntohl__STUB.common.info = scm__rc.d2149[341];
  libnetsys_ntohl__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[343]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[388]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[389]), scm__rc.d2149[64]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[390]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[391]), scm__rc.d2149[91]);
  scm__rc.d2149[350] = Scm_MakeExtendedPair(scm__rc.d2149[64], SCM_OBJ(&scm__rc.d2151[377]), SCM_OBJ(&scm__rc.d2151[393]));
  scm__rc.d2149[351] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[134])),TRUE); /* <uint16> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[352]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[352]))[4] = scm__rc.d2149[351];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[352]))[5] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[352]))[6] = scm__rc.d2149[351];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-ntohs")), SCM_OBJ(&libnetsys_ntohs__STUB), 0);
  libnetsys_ntohs__STUB.common.info = scm__rc.d2149[350];
  libnetsys_ntohs__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[352]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[396]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[397]), scm__rc.d2149[61]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[398]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[399]), scm__rc.d2149[91]);
  scm__rc.d2149[359] = Scm_MakeExtendedPair(scm__rc.d2149[61], SCM_OBJ(&scm__rc.d2151[377]), SCM_OBJ(&scm__rc.d2151[401]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-htonl")), SCM_OBJ(&libnetsys_htonl__STUB), 0);
  libnetsys_htonl__STUB.common.info = scm__rc.d2149[359];
  libnetsys_htonl__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[343]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[404]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[405]), scm__rc.d2149[62]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[406]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[407]), scm__rc.d2149[91]);
  scm__rc.d2149[360] = Scm_MakeExtendedPair(scm__rc.d2149[62], SCM_OBJ(&scm__rc.d2151[377]), SCM_OBJ(&scm__rc.d2151[409]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-htons")), SCM_OBJ(&libnetsys_htons__STUB), 0);
  libnetsys_htons__STUB.common.info = scm__rc.d2149[360];
  libnetsys_htons__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[352]);
#if defined(HAVE_IPV6)
  Scm_InitStaticClassWithMeta(&Scm_SysAddrinfoClass, "<sys-addrinfo>", SCM_MODULE(scm__rc.d2149[0]), NULL, SCM_FALSE, Scm_SysAddrinfoClass__SLOTS, 0);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[1])),TRUE); /* sys-getaddrinfo */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[2])),TRUE); /* nodename */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[3])),TRUE); /* servname */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[4])),TRUE); /* hints */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[1]), scm__rc.d2164[4]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[2]), scm__rc.d2164[3]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[3]), scm__rc.d2164[2]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[5])),TRUE); /* source-info */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[6]), scm__rc.d2164[5]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[7])),TRUE); /* bind-info */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[8])),TRUE); /* gauche.net */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[7]), scm__rc.d2164[1]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[8]), scm__rc.d2164[7]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[9]), scm__rc.d2164[6]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[8] = Scm_MakeExtendedPair(scm__rc.d2164[1], SCM_OBJ(&scm__rc.d2376[3]), SCM_OBJ(&scm__rc.d2376[11]));
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[9])),TRUE); /* <const-cstring>? */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[10])),TRUE); /* <top> */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[11] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[11])),TRUE); /* -> */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[12]))[3] = scm__rc.d2164[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[12]))[4] = scm__rc.d2164[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[12]))[5] = scm__rc.d2164[9];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[12]))[6] = scm__rc.d2164[10];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[12]))[7] = scm__rc.d2164[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[12]))[8] = scm__rc.d2164[10];
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-getaddrinfo")), SCM_OBJ(&libnetsys_getaddrinfo__STUB), 0);
  libnetsys_getaddrinfo__STUB.common.info = scm__rc.d2164[8];
  libnetsys_getaddrinfo__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2164[12]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[12])),TRUE); /* sys-getnameinfo */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[13])),TRUE); /* addr */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[23] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2165[14]))); /* :optional */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[15])),TRUE); /* flags */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[12]), scm__rc.d2164[24]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[13]), scm__rc.d2164[23]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[14]), scm__rc.d2164[22]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[17]), scm__rc.d2164[5]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[18]), scm__rc.d2164[21]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[19]), scm__rc.d2164[7]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2376[20]), scm__rc.d2164[6]);
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[25] = Scm_MakeExtendedPair(scm__rc.d2164[21], SCM_OBJ(&scm__rc.d2376[14]), SCM_OBJ(&scm__rc.d2376[22]));
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[16])),TRUE); /* <socket-address> */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  scm__rc.d2164[27] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2165[17])),TRUE); /* * */
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[28]))[3] = scm__rc.d2164[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[28]))[4] = scm__rc.d2164[26];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[28]))[5] = scm__rc.d2164[27];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[28]))[6] = scm__rc.d2164[11];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2164[28]))[7] = scm__rc.d2164[10];
#endif /* defined(HAVE_IPV6) */
#if defined(HAVE_IPV6)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("sys-getnameinfo")), SCM_OBJ(&libnetsys_getnameinfo__STUB), 0);
  libnetsys_getnameinfo__STUB.common.info = scm__rc.d2164[25];
  libnetsys_getnameinfo__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2164[28]);
#endif /* defined(HAVE_IPV6) */
#if defined(AF_INET6)
  scm__rc.d2377[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2378[0])),TRUE); /* AF_INET6 */
#endif /* defined(AF_INET6) */
#if defined(AF_INET6)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2377[0]), Scm_MakeInteger(AF_INET6), SCM_BINDING_CONST);

#endif /* defined(AF_INET6) */
#if defined(PF_INET6)
  scm__rc.d2379[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2380[0])),TRUE); /* PF_INET6 */
#endif /* defined(PF_INET6) */
#if defined(PF_INET6)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2379[0]), Scm_MakeInteger(PF_INET6), SCM_BINDING_CONST);

#endif /* defined(PF_INET6) */
#if defined(IPPROTO_IPV6)
  scm__rc.d2381[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2382[0])),TRUE); /* IPPROTO_IPV6 */
#endif /* defined(IPPROTO_IPV6) */
#if defined(IPPROTO_IPV6)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2381[0]), Scm_MakeInteger(IPPROTO_IPV6), SCM_BINDING_CONST);

#endif /* defined(IPPROTO_IPV6) */
#if defined(IPV6_UNICAST_HOPS)
  scm__rc.d2383[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2384[0])),TRUE); /* IPV6_UNICAST_HOPS */
#endif /* defined(IPV6_UNICAST_HOPS) */
#if defined(IPV6_UNICAST_HOPS)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2383[0]), Scm_MakeInteger(IPV6_UNICAST_HOPS), SCM_BINDING_CONST);

#endif /* defined(IPV6_UNICAST_HOPS) */
#if defined(IPV6_MULTICAST_IF)
  scm__rc.d2385[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2386[0])),TRUE); /* IPV6_MULTICAST_IF */
#endif /* defined(IPV6_MULTICAST_IF) */
#if defined(IPV6_MULTICAST_IF)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2385[0]), Scm_MakeInteger(IPV6_MULTICAST_IF), SCM_BINDING_CONST);

#endif /* defined(IPV6_MULTICAST_IF) */
#if defined(IPV6_MULTICAST_HOPS)
  scm__rc.d2387[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2388[0])),TRUE); /* IPV6_MULTICAST_HOPS */
#endif /* defined(IPV6_MULTICAST_HOPS) */
#if defined(IPV6_MULTICAST_HOPS)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2387[0]), Scm_MakeInteger(IPV6_MULTICAST_HOPS), SCM_BINDING_CONST);

#endif /* defined(IPV6_MULTICAST_HOPS) */
#if defined(IPV6_MULTICAST_LOOP)
  scm__rc.d2389[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2390[0])),TRUE); /* IPV6_MULTICAST_LOOP */
#endif /* defined(IPV6_MULTICAST_LOOP) */
#if defined(IPV6_MULTICAST_LOOP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2389[0]), Scm_MakeInteger(IPV6_MULTICAST_LOOP), SCM_BINDING_CONST);

#endif /* defined(IPV6_MULTICAST_LOOP) */
#if defined(IPV6_JOIN_GROUP)
  scm__rc.d2391[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2392[0])),TRUE); /* IPV6_JOIN_GROUP */
#endif /* defined(IPV6_JOIN_GROUP) */
#if defined(IPV6_JOIN_GROUP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2391[0]), Scm_MakeInteger(IPV6_JOIN_GROUP), SCM_BINDING_CONST);

#endif /* defined(IPV6_JOIN_GROUP) */
#if defined(IPV6_LEAVE_GROUP)
  scm__rc.d2393[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2394[0])),TRUE); /* IPV6_LEAVE_GROUP */
#endif /* defined(IPV6_LEAVE_GROUP) */
#if defined(IPV6_LEAVE_GROUP)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2393[0]), Scm_MakeInteger(IPV6_LEAVE_GROUP), SCM_BINDING_CONST);

#endif /* defined(IPV6_LEAVE_GROUP) */
#if defined(IPV6_V6ONLY)
  scm__rc.d2395[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2396[0])),TRUE); /* IPV6_V6ONLY */
#endif /* defined(IPV6_V6ONLY) */
#if defined(IPV6_V6ONLY)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2395[0]), Scm_MakeInteger(IPV6_V6ONLY), SCM_BINDING_CONST);

#endif /* defined(IPV6_V6ONLY) */
#if defined(AI_PASSIVE)
  scm__rc.d2397[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2398[0])),TRUE); /* AI_PASSIVE */
#endif /* defined(AI_PASSIVE) */
#if defined(AI_PASSIVE)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2397[0]), Scm_MakeInteger(AI_PASSIVE), SCM_BINDING_CONST);

#endif /* defined(AI_PASSIVE) */
#if defined(AI_CANONNAME)
  scm__rc.d2399[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2400[0])),TRUE); /* AI_CANONNAME */
#endif /* defined(AI_CANONNAME) */
#if defined(AI_CANONNAME)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2399[0]), Scm_MakeInteger(AI_CANONNAME), SCM_BINDING_CONST);

#endif /* defined(AI_CANONNAME) */
#if defined(AI_NUMERICHOST)
  scm__rc.d2401[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2402[0])),TRUE); /* AI_NUMERICHOST */
#endif /* defined(AI_NUMERICHOST) */
#if defined(AI_NUMERICHOST)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2401[0]), Scm_MakeInteger(AI_NUMERICHOST), SCM_BINDING_CONST);

#endif /* defined(AI_NUMERICHOST) */
#if defined(AI_NUMERICSERV)
  scm__rc.d2403[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2404[0])),TRUE); /* AI_NUMERICSERV */
#endif /* defined(AI_NUMERICSERV) */
#if defined(AI_NUMERICSERV)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2403[0]), Scm_MakeInteger(AI_NUMERICSERV), SCM_BINDING_CONST);

#endif /* defined(AI_NUMERICSERV) */
#if defined(AI_V4MAPPED)
  scm__rc.d2405[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2406[0])),TRUE); /* AI_V4MAPPED */
#endif /* defined(AI_V4MAPPED) */
#if defined(AI_V4MAPPED)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2405[0]), Scm_MakeInteger(AI_V4MAPPED), SCM_BINDING_CONST);

#endif /* defined(AI_V4MAPPED) */
#if defined(AI_ALL)
  scm__rc.d2407[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2408[0])),TRUE); /* AI_ALL */
#endif /* defined(AI_ALL) */
#if defined(AI_ALL)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2407[0]), Scm_MakeInteger(AI_ALL), SCM_BINDING_CONST);

#endif /* defined(AI_ALL) */
#if defined(AI_ADDRCONFIG)
  scm__rc.d2409[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2410[0])),TRUE); /* AI_ADDRCONFIG */
#endif /* defined(AI_ADDRCONFIG) */
#if defined(AI_ADDRCONFIG)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2409[0]), Scm_MakeInteger(AI_ADDRCONFIG), SCM_BINDING_CONST);

#endif /* defined(AI_ADDRCONFIG) */
#if defined(NI_NOFQDN)
  scm__rc.d2411[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2412[0])),TRUE); /* NI_NOFQDN */
#endif /* defined(NI_NOFQDN) */
#if defined(NI_NOFQDN)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2411[0]), Scm_MakeInteger(NI_NOFQDN), SCM_BINDING_CONST);

#endif /* defined(NI_NOFQDN) */
#if defined(NI_NUMERICHOST)
  scm__rc.d2413[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2414[0])),TRUE); /* NI_NUMERICHOST */
#endif /* defined(NI_NUMERICHOST) */
#if defined(NI_NUMERICHOST)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2413[0]), Scm_MakeInteger(NI_NUMERICHOST), SCM_BINDING_CONST);

#endif /* defined(NI_NUMERICHOST) */
#if defined(NI_NAMEREQD)
  scm__rc.d2415[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2416[0])),TRUE); /* NI_NAMEREQD */
#endif /* defined(NI_NAMEREQD) */
#if defined(NI_NAMEREQD)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2415[0]), Scm_MakeInteger(NI_NAMEREQD), SCM_BINDING_CONST);

#endif /* defined(NI_NAMEREQD) */
#if defined(NI_NUMERICSERV)
  scm__rc.d2417[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2418[0])),TRUE); /* NI_NUMERICSERV */
#endif /* defined(NI_NUMERICSERV) */
#if defined(NI_NUMERICSERV)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2417[0]), Scm_MakeInteger(NI_NUMERICSERV), SCM_BINDING_CONST);

#endif /* defined(NI_NUMERICSERV) */
#if defined(NI_DGRAM)
  scm__rc.d2419[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2420[0])),TRUE); /* NI_DGRAM */
#endif /* defined(NI_DGRAM) */
#if defined(NI_DGRAM)
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(scm__rc.d2419[0]), Scm_MakeInteger(NI_DGRAM), SCM_BINDING_CONST);

#endif /* defined(NI_DGRAM) */
  scm__rc.d2149[361] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[135])),TRUE); /* IPPROTO_IP */
  scm__rc.d2149[362] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[136])),TRUE); /* IPPROTO_ICMP */
  scm__rc.d2149[363] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[137])),TRUE); /* IPPROTO_TCP */
  scm__rc.d2149[364] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[138])),TRUE); /* IPPROTO_UDP */
  scm__rc.d2149[365] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[139])),TRUE); /* IPPROTO_IPV6 */
  scm__rc.d2149[366] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[140])),TRUE); /* IPPROTO_ICMPV6 */
  scm__rc.d2149[367] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[141])),TRUE); /* SOL_SOCKET */
  scm__rc.d2149[368] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[142])),TRUE); /* SOMAXCONN */
  scm__rc.d2149[369] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[143])),TRUE); /* SO_ACCEPTCONN */
  scm__rc.d2149[370] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[144])),TRUE); /* SO_BINDTODEVICE */
  scm__rc.d2149[371] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[145])),TRUE); /* SO_BROADCAST */
  scm__rc.d2149[372] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[146])),TRUE); /* SO_DEBUG */
  scm__rc.d2149[373] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[147])),TRUE); /* SO_DONTROUTE */
  scm__rc.d2149[374] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[148])),TRUE); /* SO_ERROR */
  scm__rc.d2149[375] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[149])),TRUE); /* SO_KEEPALIVE */
  scm__rc.d2149[376] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[150])),TRUE); /* SO_LINGER */
  scm__rc.d2149[377] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[151])),TRUE); /* SO_OOBINLINE */
  scm__rc.d2149[378] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[152])),TRUE); /* SO_PASSCRED */
  scm__rc.d2149[379] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[153])),TRUE); /* SO_PEERCRED */
  scm__rc.d2149[380] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[154])),TRUE); /* SO_PRIORITY */
  scm__rc.d2149[381] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[155])),TRUE); /* SO_RCVBUF */
  scm__rc.d2149[382] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[156])),TRUE); /* SO_RCVLOWAT */
  scm__rc.d2149[383] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[157])),TRUE); /* SO_RCVTIMEO */
  scm__rc.d2149[384] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[158])),TRUE); /* SO_REUSEADDR */
  scm__rc.d2149[385] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[159])),TRUE); /* SO_REUSEPORT */
  scm__rc.d2149[386] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[160])),TRUE); /* SO_SNDBUF */
  scm__rc.d2149[387] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[161])),TRUE); /* SO_SNDLOWAT */
  scm__rc.d2149[388] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[162])),TRUE); /* SO_SNDTIMEO */
  scm__rc.d2149[389] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[163])),TRUE); /* SO_TIMESTAMP */
  scm__rc.d2149[390] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[164])),TRUE); /* SO_TYPE */
  scm__rc.d2149[391] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[165])),TRUE); /* SOL_TCP */
  scm__rc.d2149[392] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[166])),TRUE); /* TCP_NODELAY */
  scm__rc.d2149[393] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[167])),TRUE); /* TCP_MAXSEG */
  scm__rc.d2149[394] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[168])),TRUE); /* TCP_CORK */
  scm__rc.d2149[395] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[169])),TRUE); /* SOL_IP */
  scm__rc.d2149[396] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[170])),TRUE); /* IP_OPTIONS */
  scm__rc.d2149[397] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[171])),TRUE); /* IP_PKTINFO */
  scm__rc.d2149[398] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[172])),TRUE); /* IP_RECVTOS */
  scm__rc.d2149[399] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[173])),TRUE); /* IP_RECVTTL */
  scm__rc.d2149[400] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[174])),TRUE); /* IP_RECVOPTS */
  scm__rc.d2149[401] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[175])),TRUE); /* IP_TOS */
  scm__rc.d2149[402] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[176])),TRUE); /* IP_TTL */
  scm__rc.d2149[403] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[177])),TRUE); /* IP_HDRINCL */
  scm__rc.d2149[404] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[178])),TRUE); /* IP_RECVERR */
  scm__rc.d2149[405] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[179])),TRUE); /* IP_MTU_DISCOVER */
  scm__rc.d2149[406] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[180])),TRUE); /* IP_MTU */
  scm__rc.d2149[407] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[181])),TRUE); /* IP_ROUTER_ALERT */
  scm__rc.d2149[408] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[182])),TRUE); /* IP_MULTICAST_TTL */
  scm__rc.d2149[409] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[183])),TRUE); /* IP_MULTICAST_LOOP */
  scm__rc.d2149[410] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[184])),TRUE); /* IP_ADD_MEMBERSHIP */
  scm__rc.d2149[411] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[185])),TRUE); /* IP_DROP_MEMBERSHIP */
  scm__rc.d2149[412] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[186])),TRUE); /* IP_MULTICAST_IF */
  scm__rc.d2149[413] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[187])),TRUE); /* MSG_CTRUNC */
  scm__rc.d2149[414] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[188])),TRUE); /* MSG_DONTROUTE */
  scm__rc.d2149[415] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[189])),TRUE); /* MSG_EOR */
  scm__rc.d2149[416] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[190])),TRUE); /* MSG_OOB */
  scm__rc.d2149[417] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[191])),TRUE); /* MSG_PEEK */
  scm__rc.d2149[418] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[192])),TRUE); /* MSG_TRUNC */
  scm__rc.d2149[419] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[193])),TRUE); /* MSG_WAITALL */
  scm__rc.d2149[420] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[194])),TRUE); /* SIOCGIFNAME */
  scm__rc.d2149[421] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[195])),TRUE); /* SIOCSIFNAME */
  scm__rc.d2149[422] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[196])),TRUE); /* SIOCGIFINDEX */
  scm__rc.d2149[423] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[197])),TRUE); /* SIOCGIFFLAGS */
  scm__rc.d2149[424] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[198])),TRUE); /* SIOCSIFFLAGS */
  scm__rc.d2149[425] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[199])),TRUE); /* SIOCGIFMETRIC */
  scm__rc.d2149[426] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[200])),TRUE); /* SIOCSIFMETRIC */
  scm__rc.d2149[427] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[201])),TRUE); /* SIOCGIFMTU */
  scm__rc.d2149[428] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[202])),TRUE); /* SIOCSIFMTU */
  scm__rc.d2149[429] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[203])),TRUE); /* SIOCGIFHWADDR */
  scm__rc.d2149[430] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[204])),TRUE); /* SIOCSIFHWADDR */
  scm__rc.d2149[431] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[205])),TRUE); /* SIOCSIFHWBROADCAST */
  scm__rc.d2149[432] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[206])),TRUE); /* SIOCGIFMAP */
  scm__rc.d2149[433] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[207])),TRUE); /* SIOCSIFMAP */
  scm__rc.d2149[434] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[208])),TRUE); /* SIOCADDMULTI */
  scm__rc.d2149[435] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[209])),TRUE); /* SIOCDELMULTI */
  scm__rc.d2149[436] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[210])),TRUE); /* SIOGIFTXQLEN */
  scm__rc.d2149[437] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[211])),TRUE); /* SIOSIFTXQLEN */
  scm__rc.d2149[438] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[212])),TRUE); /* SIOCGIFCONF */
  scm__rc.d2149[439] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[213])),TRUE); /* SIOCGIFADDR */
  scm__rc.d2149[440] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[214])),TRUE); /* SIOCSIFADDR */
  scm__rc.d2149[441] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[215])),TRUE); /* SIOCGIFDSTADDR */
  scm__rc.d2149[442] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[216])),TRUE); /* SIOCSIFDSTADDR */
  scm__rc.d2149[443] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[217])),TRUE); /* SIOCGIFBRDADDR */
  scm__rc.d2149[444] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[218])),TRUE); /* SIOCSIFBRDADDR */
  scm__rc.d2149[445] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[219])),TRUE); /* SIOCGIFNETMASK */
  scm__rc.d2149[446] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[220])),TRUE); /* SIOCSIFNETMASK */
  scm__rc.d2149[447] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[221])),TRUE); /* IFF_UP */
  scm__rc.d2149[448] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[222])),TRUE); /* IFF_BROADCAST */
  scm__rc.d2149[449] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[223])),TRUE); /* IFF_DEBUG */
  scm__rc.d2149[450] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[224])),TRUE); /* IFF_LOOPBACK */
  scm__rc.d2149[451] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[225])),TRUE); /* IFF_POINTTOPOINT */
  scm__rc.d2149[452] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[226])),TRUE); /* IFF_RUNNING */
  scm__rc.d2149[453] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[227])),TRUE); /* IFF_NOARP */
  scm__rc.d2149[454] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[228])),TRUE); /* IFF_PROMISC */
  scm__rc.d2149[455] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[229])),TRUE); /* IFF_NOTRAILERS */
  scm__rc.d2149[456] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[230])),TRUE); /* IFF_ALLMULTI */
  scm__rc.d2149[457] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[231])),TRUE); /* IFF_MASTER */
  scm__rc.d2149[458] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[232])),TRUE); /* IFF_SLAVE */
  scm__rc.d2149[459] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[233])),TRUE); /* IFF_MULTICAST */
  scm__rc.d2149[460] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[234])),TRUE); /* IFF_PORTSEL */
  scm__rc.d2149[461] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[235])),TRUE); /* IFF_AUTOMEDIA */
  scm__rc.d2149[462] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[236])),TRUE); /* IFF_DYNAMIC */
  scm__rc.d2149[463] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[237])),TRUE); /* PF_INET6 */
  scm__rc.d2149[464] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[238])),TRUE); /* AF_INET6 */
  scm__rc.d2149[465] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[239])),TRUE); /* <sockaddr-in6> */
  scm__rc.d2149[466] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[240])),TRUE); /* <sys-addrinfo> */
  scm__rc.d2149[467] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[241])),TRUE); /* sys-getaddrinfo */
  scm__rc.d2149[468] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[242])),TRUE); /* make-sys-addrinfo */
  scm__rc.d2149[469] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[243])),TRUE); /* AI_PASSIVE */
  scm__rc.d2149[470] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[244])),TRUE); /* AI_CANONNAME */
  scm__rc.d2149[471] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[245])),TRUE); /* AI_NUMERICHOST */
  scm__rc.d2149[472] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[246])),TRUE); /* AI_NUMERICSERV */
  scm__rc.d2149[473] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[247])),TRUE); /* AI_V4MAPPED */
  scm__rc.d2149[474] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[248])),TRUE); /* AI_ALL */
  scm__rc.d2149[475] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[249])),TRUE); /* AI_ADDRCONFIG */
  scm__rc.d2149[476] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[250])),TRUE); /* IPV6_UNICAST_HOPS */
  scm__rc.d2149[477] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[251])),TRUE); /* IPV6_MULTICAST_IF */
  scm__rc.d2149[478] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[252])),TRUE); /* IPV6_MULTICAST_HOPS */
  scm__rc.d2149[479] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[253])),TRUE); /* IPV6_MULTICAST_LOOP */
  scm__rc.d2149[480] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[254])),TRUE); /* IPV6_JOIN_GROUP */
  scm__rc.d2149[481] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[255])),TRUE); /* IPV6_LEAVE_GROUP */
  scm__rc.d2149[482] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[256])),TRUE); /* IPV6_V6ONLY */
  scm__rc.d2149[483] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[257])),TRUE); /* sys-getnameinfo */
  scm__rc.d2149[484] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[258])),TRUE); /* NI_NOFQDN */
  scm__rc.d2149[485] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[259])),TRUE); /* NI_NUMERICHOST */
  scm__rc.d2149[486] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[260])),TRUE); /* NI_NAMEREQD */
  scm__rc.d2149[487] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[261])),TRUE); /* NI_NUMERICSERV */
  scm__rc.d2149[488] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[262])),TRUE); /* NI_DGRAM */
export_bindings();
  scm__rc.d2149[489] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[263])),TRUE); /* size */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[410]), scm__rc.d2149[489]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[411]), scm__rc.d2149[210]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[414]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[415]), scm__rc.d2149[65]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[416]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[417]), scm__rc.d2149[91]);
  scm__rc.d2149[490] = Scm_MakeExtendedPair(scm__rc.d2149[65], SCM_OBJ(&scm__rc.d2151[411]), SCM_OBJ(&scm__rc.d2151[419]));
  scm__rc.d2149[491] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[264])),TRUE); /* <uint> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[492]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[492]))[4] = scm__rc.d2149[212];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[492]))[5] = scm__rc.d2149[241];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[492]))[6] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[492]))[7] = scm__rc.d2149[491];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("inet-checksum")), SCM_OBJ(&libnetinet_checksum__STUB), 0);
  libnetinet_checksum__STUB.common.info = scm__rc.d2149[490];
  libnetinet_checksum__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[492]);
  scm__rc.d2149[500] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[265])),TRUE); /* s */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[420]), scm__rc.d2149[500]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[423]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[424]), scm__rc.d2149[66]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[425]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[426]), scm__rc.d2149[91]);
  scm__rc.d2149[501] = Scm_MakeExtendedPair(scm__rc.d2149[66], SCM_OBJ(&scm__rc.d2151[420]), SCM_OBJ(&scm__rc.d2151[428]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[502]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[502]))[4] = scm__rc.d2149[293];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[502]))[5] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[502]))[6] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[502]))[7] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("inet-string->address")), SCM_OBJ(&libnetinet_string_TOaddress__STUB), 0);
  libnetinet_string_TOaddress__STUB.common.info = scm__rc.d2149[501];
  libnetinet_string_TOaddress__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[502]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[429]), scm__rc.d2149[500]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[432]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[433]), scm__rc.d2149[67]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[434]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[435]), scm__rc.d2149[91]);
  scm__rc.d2149[510] = Scm_MakeExtendedPair(scm__rc.d2149[67], SCM_OBJ(&scm__rc.d2151[429]), SCM_OBJ(&scm__rc.d2151[437]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[511]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[511]))[4] = scm__rc.d2149[293];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[511]))[5] = scm__rc.d2149[212];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[511]))[6] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[511]))[7] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("inet-string->address!")), SCM_OBJ(&libnetinet_string_TOaddressX__STUB), 0);
  libnetinet_string_TOaddressX__STUB.common.info = scm__rc.d2149[510];
  libnetinet_string_TOaddressX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[511]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[438]), scm__rc.d2149[149]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[441]), scm__rc.d2149[90]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[442]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[443]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[444]), scm__rc.d2149[91]);
  scm__rc.d2149[519] = Scm_MakeExtendedPair(scm__rc.d2149[68], SCM_OBJ(&scm__rc.d2151[438]), SCM_OBJ(&scm__rc.d2151[446]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[520]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[520]))[4] = scm__rc.d2149[96];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[520]))[5] = scm__rc.d2149[241];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[520]))[6] = scm__rc.d2149[95];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[520]))[7] = scm__rc.d2149[96];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("inet-address->string")), SCM_OBJ(&libnetinet_address_TOstring__STUB), 0);
  libnetinet_address_TOstring__STUB.common.info = scm__rc.d2149[519];
  libnetinet_address_TOstring__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[520]);
  scm__rc.d2149[529] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[266])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[528] = Scm_MakeIdentifier(scm__rc.d2149[529], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[530] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[267])),TRUE); /* DEFAULT_BACKLOG */
  scm__rc.d2149[531] = Scm_MakeIdentifier(scm__rc.d2149[530], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#DEFAULT_BACKLOG */
  scm__rc.d2149[532] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[1]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[1]))->debugInfo = scm__rc.d2149[532];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[14]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[14]))[6] = SCM_WORD(scm__rc.d2149[530]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[14]))[12] = SCM_WORD(scm__rc.d2149[531]);
  scm__rc.d2149[533] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[268])),TRUE); /* ipv6-capable */
  scm__rc.d2149[535] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[269])),TRUE); /* module-binds? */
  scm__rc.d2149[534] = Scm_MakeIdentifier(scm__rc.d2149[535], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#module-binds? */
  scm__rc.d2149[536] = Scm_MakeIdentifier(scm__rc.d2149[533], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#ipv6-capable */
  scm__rc.d2149[537] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[2]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[2]))->debugInfo = scm__rc.d2149[537];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[28]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[28]))[6] = SCM_WORD(scm__rc.d2149[533]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[28]))[10] = SCM_WORD(scm__rc.d2149[1]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[28]))[12] = SCM_WORD(scm__rc.d2149[467]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[28]))[14] = SCM_WORD(scm__rc.d2149[534]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[28]))[17] = SCM_WORD(scm__rc.d2149[536]);
  scm__rc.d2149[538] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[270])),TRUE); /* ipv4-preferred */
  scm__rc.d2149[539] = Scm_MakeIdentifier(scm__rc.d2149[538], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#ipv4-preferred */
  scm__rc.d2149[540] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[3]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[3]))->debugInfo = scm__rc.d2149[540];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[47]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[47]))[6] = SCM_WORD(scm__rc.d2149[538]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[47]))[11] = SCM_WORD(scm__rc.d2149[539]);
  scm__rc.d2149[542] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[271])),TRUE); /* undefined? */
  scm__rc.d2149[541] = Scm_MakeIdentifier(scm__rc.d2149[542], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#undefined? */
  scm__rc.d2149[543] = Scm_MakeIdentifier(scm__rc.d2149[7], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#AF_UNSPEC */
  scm__rc.d2149[544] = Scm_MakeIdentifier(scm__rc.d2149[466], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#<sys-addrinfo> */
  scm__rc.d2149[545] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[109]))); /* :flags */
  scm__rc.d2149[547] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[272])),TRUE); /* list? */
  scm__rc.d2149[546] = Scm_MakeIdentifier(scm__rc.d2149[547], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#list? */
  scm__rc.d2149[549] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[273])),TRUE); /* logior */
  scm__rc.d2149[548] = Scm_MakeIdentifier(scm__rc.d2149[549], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#logior */
  scm__rc.d2149[550] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[274]))); /* :family */
  scm__rc.d2149[551] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[275]))); /* :socktype */
  scm__rc.d2149[552] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[85]))); /* :protocol */
  scm__rc.d2149[554] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[276])),TRUE); /* make */
  scm__rc.d2149[553] = Scm_MakeIdentifier(scm__rc.d2149[554], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make */
  scm__rc.d2149[556] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[278])),TRUE); /* error */
  scm__rc.d2149[555] = Scm_MakeIdentifier(scm__rc.d2149[556], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#error */
  scm__rc.d2149[557] = Scm_MakeIdentifier(scm__rc.d2149[556], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2149[559] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[280])),TRUE); /* unwrap-syntax-1 */
  scm__rc.d2149[558] = Scm_MakeIdentifier(scm__rc.d2149[559], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#unwrap-syntax-1 */
  scm__rc.d2149[561] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[282])),TRUE); /* errorf */
  scm__rc.d2149[560] = Scm_MakeIdentifier(scm__rc.d2149[561], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#errorf */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[448]), scm__rc.d2149[175]);
  scm__rc.d2149[562] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[274])),TRUE); /* family */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[449]), scm__rc.d2149[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[450]), scm__rc.d2149[562]);
  scm__rc.d2149[563] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[275])),TRUE); /* socktype */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[451]), scm__rc.d2149[563]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[452]), scm__rc.d2149[89]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[457]), scm__rc.d2149[133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[460]), scm__rc.d2149[90]);
  scm__rc.d2149[564] = Scm_MakeExtendedPair(scm__rc.d2149[468], SCM_OBJ(&scm__rc.d2151[457]), SCM_OBJ(&scm__rc.d2151[461]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[462]), scm__rc.d2149[564]);
  scm__rc.d2149[565] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[4]))->name = scm__rc.d2149[468];/* make-sys-addrinfo */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[4]))->debugInfo = scm__rc.d2149[565];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[16] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[28] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[32] = SCM_WORD(scm__rc.d2149[543]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[41] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[53] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[62] = SCM_WORD(scm__rc.d2149[536]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[66] = SCM_WORD(scm__rc.d2149[544]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[68] = SCM_WORD(scm__rc.d2149[545]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[73] = SCM_WORD(scm__rc.d2149[546]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[79] = SCM_WORD(scm__rc.d2149[548]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[87] = SCM_WORD(scm__rc.d2149[550]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[90] = SCM_WORD(scm__rc.d2149[551]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[93] = SCM_WORD(scm__rc.d2149[552]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[96] = SCM_WORD(scm__rc.d2149[553]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[101] = SCM_WORD(scm__rc.d2149[555]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[111] = SCM_WORD(scm__rc.d2149[557]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[118] = SCM_WORD(scm__rc.d2149[558]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[122] = SCM_WORD(scm__rc.d2149[545]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[136] = SCM_WORD(scm__rc.d2149[550]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[150] = SCM_WORD(scm__rc.d2149[551]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[164] = SCM_WORD(scm__rc.d2149[552]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[60]))[183] = SCM_WORD(scm__rc.d2149[560]);
  scm__rc.d2149[566] = Scm_MakeIdentifier(scm__rc.d2149[468], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-sys-addrinfo */
  scm__rc.d2149[567] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[5]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[5]))->debugInfo = scm__rc.d2149[567];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[254]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[254]))[6] = SCM_WORD(scm__rc.d2149[468]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[254]))[13] = SCM_WORD(scm__rc.d2149[566]);
  scm__rc.d2149[568] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[283])),TRUE); /* address->protocol-family */
  scm__rc.d2149[569] = Scm_MakeIdentifier(scm__rc.d2149[45], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#sockaddr-family */
  scm__rc.d2149[570] = Scm_MakeIdentifier(scm__rc.d2149[5], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#PF_UNIX */
  scm__rc.d2149[571] = Scm_MakeIdentifier(scm__rc.d2149[6], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#PF_INET */
  scm__rc.d2149[572] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[284])),TRUE); /* inet6 */
  scm__rc.d2149[573] = Scm_MakeIdentifier(scm__rc.d2149[463], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#PF_INET6 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[465]), scm__rc.d2149[90]);
  scm__rc.d2149[574] = Scm_MakeExtendedPair(scm__rc.d2149[568], SCM_OBJ(&scm__rc.d2151[151]), SCM_OBJ(&scm__rc.d2151[466]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[467]), scm__rc.d2149[574]);
  scm__rc.d2149[575] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[6]))->name = scm__rc.d2149[568];/* address->protocol-family */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[6]))->debugInfo = scm__rc.d2149[575];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]))[4] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]))[8] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]))[11] = SCM_WORD(scm__rc.d2149[570]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]))[15] = SCM_WORD(scm__rc.d2149[85]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]))[18] = SCM_WORD(scm__rc.d2149[571]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]))[22] = SCM_WORD(scm__rc.d2149[572]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]))[25] = SCM_WORD(scm__rc.d2149[573]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[269]))[31] = SCM_WORD(scm__rc.d2149[555]);
  scm__rc.d2149[576] = Scm_MakeIdentifier(scm__rc.d2149[568], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#address->protocol-family */
  scm__rc.d2149[577] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[7]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[7]))->debugInfo = scm__rc.d2149[577];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[302]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[302]))[6] = SCM_WORD(scm__rc.d2149[568]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[302]))[13] = SCM_WORD(scm__rc.d2149[576]);
  scm__rc.d2149[579] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[287])),TRUE); /* make-client-socket-unix */
  scm__rc.d2149[578] = Scm_MakeIdentifier(scm__rc.d2149[579], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-client-socket-unix */
  scm__rc.d2149[581] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[288])),TRUE); /* integer? */
  scm__rc.d2149[580] = Scm_MakeIdentifier(scm__rc.d2149[581], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#integer? */
  scm__rc.d2149[582] = Scm_MakeIdentifier(scm__rc.d2149[561], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#errorf */
  scm__rc.d2149[584] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[290])),TRUE); /* make-client-socket-inet */
  scm__rc.d2149[583] = Scm_MakeIdentifier(scm__rc.d2149[584], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-client-socket-inet */
  scm__rc.d2149[585] = Scm_MakeIdentifier(scm__rc.d2149[40], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#<sockaddr> */
  scm__rc.d2149[587] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[291])),TRUE); /* make-client-socket-from-addr */
  scm__rc.d2149[586] = Scm_MakeIdentifier(scm__rc.d2149[587], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-client-socket-from-addr */
  scm__rc.d2149[588] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[293])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[468]), scm__rc.d2149[320]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2151[468]), scm__rc.d2149[588]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[471]), scm__rc.d2149[90]);
  scm__rc.d2149[589] = Scm_MakeExtendedPair(scm__rc.d2149[48], SCM_OBJ(&scm__rc.d2151[468]), SCM_OBJ(&scm__rc.d2151[472]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[473]), scm__rc.d2149[589]);
  scm__rc.d2149[590] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[8]))->name = scm__rc.d2149[48];/* make-client-socket */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[8]))->debugInfo = scm__rc.d2149[590];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[2] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[24] = SCM_WORD(scm__rc.d2149[555]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[27] = SCM_WORD(scm__rc.d2149[578]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[31] = SCM_WORD(scm__rc.d2149[85]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[65] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[83] = SCM_WORD(scm__rc.d2149[582]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[91] = SCM_WORD(scm__rc.d2149[583]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[95] = SCM_WORD(scm__rc.d2149[585]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[101] = SCM_WORD(scm__rc.d2149[586]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[115] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[121] = SCM_WORD(scm__rc.d2149[583]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[317]))[127] = SCM_WORD(scm__rc.d2149[555]);
  scm__rc.d2149[591] = Scm_MakeIdentifier(scm__rc.d2149[48], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-client-socket */
  scm__rc.d2149[592] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[9]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[9]))->debugInfo = scm__rc.d2149[592];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[452]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[452]))[6] = SCM_WORD(scm__rc.d2149[48]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[452]))[13] = SCM_WORD(scm__rc.d2149[591]);
  scm__rc.d2149[593] = Scm_MakeIdentifier(scm__rc.d2149[10], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#SOCK_STREAM */
  scm__rc.d2149[594] = Scm_MakeIdentifier(scm__rc.d2149[3], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-socket */
  scm__rc.d2149[595] = Scm_MakeIdentifier(scm__rc.d2149[23], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#socket-connect */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[476]), scm__rc.d2149[90]);
  scm__rc.d2149[596] = Scm_MakeExtendedPair(scm__rc.d2149[587], SCM_OBJ(&scm__rc.d2151[151]), SCM_OBJ(&scm__rc.d2151[477]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[478]), scm__rc.d2149[596]);
  scm__rc.d2149[597] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[10]))->name = scm__rc.d2149[587];/* make-client-socket-from-addr */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[10]))->debugInfo = scm__rc.d2149[597];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[467]))[6] = SCM_WORD(scm__rc.d2149[576]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[467]))[8] = SCM_WORD(scm__rc.d2149[593]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[467]))[10] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[467]))[17] = SCM_WORD(scm__rc.d2149[595]);
  scm__rc.d2149[598] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[11]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[11]))->debugInfo = scm__rc.d2149[598];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[486]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[486]))[6] = SCM_WORD(scm__rc.d2149[587]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[486]))[13] = SCM_WORD(scm__rc.d2149[586]);
  scm__rc.d2149[599] = Scm_MakeIdentifier(scm__rc.d2149[42], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#<sockaddr-un> */
  scm__rc.d2149[600] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[294]))); /* :path */
  scm__rc.d2149[601] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[294])),TRUE); /* path */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[479]), scm__rc.d2149[601]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[482]), scm__rc.d2149[90]);
  scm__rc.d2149[602] = Scm_MakeExtendedPair(scm__rc.d2149[579], SCM_OBJ(&scm__rc.d2151[479]), SCM_OBJ(&scm__rc.d2151[483]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[484]), scm__rc.d2149[602]);
  scm__rc.d2149[603] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[12]))->name = scm__rc.d2149[579];/* make-client-socket-unix */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[12]))->debugInfo = scm__rc.d2149[603];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]))[3] = SCM_WORD(scm__rc.d2149[570]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]))[5] = SCM_WORD(scm__rc.d2149[593]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]))[7] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]))[15] = SCM_WORD(scm__rc.d2149[599]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]))[17] = SCM_WORD(scm__rc.d2149[600]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]))[20] = SCM_WORD(scm__rc.d2149[553]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[501]))[22] = SCM_WORD(scm__rc.d2149[595]);
  scm__rc.d2149[604] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[13]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[13]))->debugInfo = scm__rc.d2149[604];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[525]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[525]))[6] = SCM_WORD(scm__rc.d2149[579]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[525]))[13] = SCM_WORD(scm__rc.d2149[578]);
  scm__rc.d2149[605] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[295])),TRUE); /* try-connect */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[486]), scm__rc.d2149[605]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[487]), scm__rc.d2149[584]);
  scm__rc.d2149[606] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[296])),TRUE); /* e */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[488]), scm__rc.d2149[606]);
  scm__rc.d2149[607] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[14]))->debugInfo = scm__rc.d2149[607];
  scm__rc.d2149[608] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[15]))->debugInfo = scm__rc.d2149[608];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[543]))[6] = SCM_WORD(scm__rc.d2149[576]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[543]))[8] = SCM_WORD(scm__rc.d2149[593]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[543]))[10] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[543]))[17] = SCM_WORD(scm__rc.d2149[595]);
  scm__rc.d2149[609] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[297]))); /* :rewind-before */
  scm__rc.d2149[611] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[298])),TRUE); /* with-error-handler */
  scm__rc.d2149[610] = Scm_MakeIdentifier(scm__rc.d2149[611], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-error-handler */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[493]), scm__rc.d2149[605]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[494]), scm__rc.d2149[584]);
  scm__rc.d2149[612] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[299])),TRUE); /* address */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[495]), scm__rc.d2149[612]);
  scm__rc.d2149[613] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[16]))->name = scm__rc.d2149[605];/* (make-client-socket-inet try-connect) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[16]))->debugInfo = scm__rc.d2149[613];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[562]))[7] = SCM_WORD(scm__rc.d2149[609]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[562]))[11] = SCM_WORD(scm__rc.d2149[610]);
  scm__rc.d2149[614] = Scm_MakeIdentifier(scm__rc.d2149[43], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-sockaddrs */
  scm__rc.d2149[616] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[300])),TRUE); /* any */
  scm__rc.d2149[615] = Scm_MakeIdentifier(scm__rc.d2149[616], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#any */
  scm__rc.d2149[618] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[301])),TRUE); /* raise */
  scm__rc.d2149[617] = Scm_MakeIdentifier(scm__rc.d2149[618], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#raise */
  scm__rc.d2149[619] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[302])),TRUE); /* host */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[499]), scm__rc.d2149[330]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[500]), scm__rc.d2149[619]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[503]), scm__rc.d2149[90]);
  scm__rc.d2149[620] = Scm_MakeExtendedPair(scm__rc.d2149[584], SCM_OBJ(&scm__rc.d2151[500]), SCM_OBJ(&scm__rc.d2151[504]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[505]), scm__rc.d2149[620]);
  scm__rc.d2149[621] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[17]))->name = scm__rc.d2149[584];/* make-client-socket-inet */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[17]))->debugInfo = scm__rc.d2149[621];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[575]))[13] = SCM_WORD(scm__rc.d2149[614]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[575]))[15] = SCM_WORD(scm__rc.d2149[615]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[575]))[26] = SCM_WORD(scm__rc.d2149[617]);
  scm__rc.d2149[622] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[18]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[18]))->debugInfo = scm__rc.d2149[622];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[603]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[603]))[6] = SCM_WORD(scm__rc.d2149[584]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[603]))[13] = SCM_WORD(scm__rc.d2149[583]);
  scm__rc.d2149[624] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[303])),TRUE); /* make-server-socket-unix */
  scm__rc.d2149[623] = Scm_MakeIdentifier(scm__rc.d2149[624], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-server-socket-unix */
  scm__rc.d2149[626] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[304])),TRUE); /* string? */
  scm__rc.d2149[625] = Scm_MakeIdentifier(scm__rc.d2149[626], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#string? */
  scm__rc.d2149[628] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[305])),TRUE); /* any-pred */
  scm__rc.d2149[627] = Scm_MakeIdentifier(scm__rc.d2149[628], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#any-pred */
  scm__rc.d2149[630] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[306])),TRUE); /* every */
  scm__rc.d2149[629] = Scm_MakeIdentifier(scm__rc.d2149[630], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#every */
  scm__rc.d2149[632] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[308])),TRUE); /* make-server-socket-inet* */
  scm__rc.d2149[631] = Scm_MakeIdentifier(scm__rc.d2149[632], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-server-socket-inet* */
  scm__rc.d2149[634] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[309])),TRUE); /* make-server-socket-inet */
  scm__rc.d2149[633] = Scm_MakeIdentifier(scm__rc.d2149[634], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-server-socket-inet */
  scm__rc.d2149[636] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[310])),TRUE); /* make-server-socket-from-addr */
  scm__rc.d2149[635] = Scm_MakeIdentifier(scm__rc.d2149[636], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-server-socket-from-addr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[508]), scm__rc.d2149[90]);
  scm__rc.d2149[637] = Scm_MakeExtendedPair(scm__rc.d2149[49], SCM_OBJ(&scm__rc.d2151[468]), SCM_OBJ(&scm__rc.d2151[509]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[510]), scm__rc.d2149[637]);
  scm__rc.d2149[638] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[19]))->name = scm__rc.d2149[49];/* make-server-socket */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[19]))->debugInfo = scm__rc.d2149[638];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[2] = SCM_WORD(scm__rc.d2149[84]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[24] = SCM_WORD(scm__rc.d2149[555]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[26] = SCM_WORD(scm__rc.d2149[623]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[33] = SCM_WORD(scm__rc.d2149[85]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[47] = SCM_WORD(scm__rc.d2149[546]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[55] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[57] = SCM_WORD(scm__rc.d2149[625]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[59] = SCM_WORD(scm__rc.d2149[627]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[63] = SCM_WORD(scm__rc.d2149[629]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[74] = SCM_WORD(scm__rc.d2149[555]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[76] = SCM_WORD(scm__rc.d2149[631]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[85] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[89] = SCM_WORD(scm__rc.d2149[633]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[102] = SCM_WORD(scm__rc.d2149[555]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[106] = SCM_WORD(scm__rc.d2149[585]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[111] = SCM_WORD(scm__rc.d2149[635]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[120] = SCM_WORD(scm__rc.d2149[580]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[124] = SCM_WORD(scm__rc.d2149[633]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[618]))[133] = SCM_WORD(scm__rc.d2149[555]);
  scm__rc.d2149[639] = Scm_MakeIdentifier(scm__rc.d2149[49], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-server-socket */
  scm__rc.d2149[640] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[20]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[20]))->debugInfo = scm__rc.d2149[640];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[753]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[753]))[6] = SCM_WORD(scm__rc.d2149[49]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[753]))[13] = SCM_WORD(scm__rc.d2149[639]);
  scm__rc.d2149[642] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[311])),TRUE); /* procedure? */
  scm__rc.d2149[641] = Scm_MakeIdentifier(scm__rc.d2149[642], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#procedure? */
  scm__rc.d2149[643] = Scm_MakeIdentifier(scm__rc.d2149[367], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#SOL_SOCKET */
  scm__rc.d2149[644] = Scm_MakeIdentifier(scm__rc.d2149[384], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#SO_REUSEADDR */
  scm__rc.d2149[645] = Scm_MakeIdentifier(scm__rc.d2149[27], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#socket-setsockopt */
  scm__rc.d2149[646] = Scm_MakeIdentifier(scm__rc.d2149[22], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#socket-bind */
  scm__rc.d2149[647] = Scm_MakeIdentifier(scm__rc.d2149[25], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#socket-listen */
  scm__rc.d2149[648] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[312]))); /* :reuse-addr? */
  scm__rc.d2149[649] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[313]))); /* :sock-init */
  scm__rc.d2149[650] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[107]))); /* :backlog */
  scm__rc.d2149[651] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[312])),TRUE); /* reuse-addr? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[511]), scm__rc.d2149[651]);
  scm__rc.d2149[652] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[313])),TRUE); /* sock-init */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[512]), scm__rc.d2149[652]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[513]), scm__rc.d2149[530]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[514]), scm__rc.d2149[160]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[518]), scm__rc.d2149[133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[519]), scm__rc.d2149[149]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[522]), scm__rc.d2149[90]);
  scm__rc.d2149[653] = Scm_MakeExtendedPair(scm__rc.d2149[636], SCM_OBJ(&scm__rc.d2151[519]), SCM_OBJ(&scm__rc.d2151[523]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[524]), scm__rc.d2149[653]);
  scm__rc.d2149[654] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[21]))->name = scm__rc.d2149[636];/* make-server-socket-from-addr */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[21]))->debugInfo = scm__rc.d2149[654];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[14] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[26] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[38] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[52] = SCM_WORD(scm__rc.d2149[576]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[54] = SCM_WORD(scm__rc.d2149[593]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[56] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[62] = SCM_WORD(scm__rc.d2149[641]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[80] = SCM_WORD(scm__rc.d2149[643]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[82] = SCM_WORD(scm__rc.d2149[644]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[85] = SCM_WORD(scm__rc.d2149[645]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[93] = SCM_WORD(scm__rc.d2149[646]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[99] = SCM_WORD(scm__rc.d2149[647]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[108] = SCM_WORD(scm__rc.d2149[557]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[114] = SCM_WORD(scm__rc.d2149[558]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[118] = SCM_WORD(scm__rc.d2149[648]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[131] = SCM_WORD(scm__rc.d2149[649]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[144] = SCM_WORD(scm__rc.d2149[650]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[768]))[162] = SCM_WORD(scm__rc.d2149[560]);
  scm__rc.d2149[655] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[22]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[22]))->debugInfo = scm__rc.d2149[655];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[940]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[940]))[6] = SCM_WORD(scm__rc.d2149[636]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[940]))[13] = SCM_WORD(scm__rc.d2149[635]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[525]), scm__rc.d2149[133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[526]), scm__rc.d2149[601]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[529]), scm__rc.d2149[90]);
  scm__rc.d2149[656] = Scm_MakeExtendedPair(scm__rc.d2149[624], SCM_OBJ(&scm__rc.d2151[526]), SCM_OBJ(&scm__rc.d2151[530]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[531]), scm__rc.d2149[656]);
  scm__rc.d2149[657] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[23]))->name = scm__rc.d2149[624];/* make-server-socket-unix */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[23]))->debugInfo = scm__rc.d2149[657];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[10] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[21] = SCM_WORD(scm__rc.d2149[570]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[23] = SCM_WORD(scm__rc.d2149[593]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[25] = SCM_WORD(scm__rc.d2149[594]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[33] = SCM_WORD(scm__rc.d2149[599]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[35] = SCM_WORD(scm__rc.d2149[600]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[38] = SCM_WORD(scm__rc.d2149[553]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[40] = SCM_WORD(scm__rc.d2149[646]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[46] = SCM_WORD(scm__rc.d2149[647]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[55] = SCM_WORD(scm__rc.d2149[557]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[61] = SCM_WORD(scm__rc.d2149[558]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[65] = SCM_WORD(scm__rc.d2149[650]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[955]))[80] = SCM_WORD(scm__rc.d2149[560]);
  scm__rc.d2149[658] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[24]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[24]))->debugInfo = scm__rc.d2149[658];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1043]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1043]))[6] = SCM_WORD(scm__rc.d2149[624]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1043]))[13] = SCM_WORD(scm__rc.d2149[623]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[532]), scm__rc.d2149[330]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2151[532]), scm__rc.d2149[588]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[535]), scm__rc.d2149[90]);
  scm__rc.d2149[659] = Scm_MakeExtendedPair(scm__rc.d2149[634], SCM_OBJ(&scm__rc.d2151[532]), SCM_OBJ(&scm__rc.d2151[536]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[537]), scm__rc.d2149[659]);
  scm__rc.d2149[660] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[25]))->name = scm__rc.d2149[634];/* make-server-socket-inet */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[25]))->debugInfo = scm__rc.d2149[660];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1058]))[1] = SCM_WORD(scm__rc.d2149[635]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1058]))[7] = SCM_WORD(scm__rc.d2149[614]);
  scm__rc.d2149[661] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[26])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[26]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[26]))->debugInfo = scm__rc.d2149[661];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1070]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1070]))[6] = SCM_WORD(scm__rc.d2149[634]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1070]))[13] = SCM_WORD(scm__rc.d2149[633]);
  scm__rc.d2149[662] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[314])),FALSE); /* G2447 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[538]), scm__rc.d2149[662]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[539]), scm__rc.d2149[632]);
  scm__rc.d2149[663] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[315])),FALSE); /* G2446 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[540]), scm__rc.d2149[663]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[543]), scm__rc.d2149[90]);
  scm__rc.d2149[664] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[539]), SCM_OBJ(&scm__rc.d2151[540]), SCM_OBJ(&scm__rc.d2151[544]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[545]), scm__rc.d2149[664]);
  scm__rc.d2149[665] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[27])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[27]))->debugInfo = scm__rc.d2149[665];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1085]))[3] = SCM_WORD(scm__rc.d2149[614]);
  scm__rc.d2149[666] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[316])),TRUE); /* try-bind */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[547]), scm__rc.d2149[666]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[548]), scm__rc.d2149[632]);
  scm__rc.d2149[667] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[28]))->debugInfo = scm__rc.d2149[667];
  scm__rc.d2149[668] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[28])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[29]))->debugInfo = scm__rc.d2149[668];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1093]))[1] = SCM_WORD(scm__rc.d2149[635]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[553]), scm__rc.d2149[666]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[554]), scm__rc.d2149[632]);
  scm__rc.d2149[669] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[29])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[30]))->name = scm__rc.d2149[666];/* (make-server-socket-inet* try-bind) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[30]))->debugInfo = scm__rc.d2149[669];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1099]))[7] = SCM_WORD(scm__rc.d2149[609]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1099]))[11] = SCM_WORD(scm__rc.d2149[610]);
  scm__rc.d2149[671] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[317])),TRUE); /* append-map */
  scm__rc.d2149[670] = Scm_MakeIdentifier(scm__rc.d2149[671], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#append-map */
  scm__rc.d2149[672] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[318])),TRUE); /* ports */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[558]), scm__rc.d2149[672]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2151[558]), scm__rc.d2149[588]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[561]), scm__rc.d2149[90]);
  scm__rc.d2149[673] = Scm_MakeExtendedPair(scm__rc.d2149[632], SCM_OBJ(&scm__rc.d2151[558]), SCM_OBJ(&scm__rc.d2151[562]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[563]), scm__rc.d2149[673]);
  scm__rc.d2149[674] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[30])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[31]))->name = scm__rc.d2149[632];/* make-server-socket-inet* */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[31]))->debugInfo = scm__rc.d2149[674];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1112]))[13] = SCM_WORD(scm__rc.d2149[670]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1112]))[15] = SCM_WORD(scm__rc.d2149[615]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1112]))[26] = SCM_WORD(scm__rc.d2149[617]);
  scm__rc.d2149[675] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[31])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[32]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[32]))->debugInfo = scm__rc.d2149[675];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1140]))[5] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1140]))[8] = SCM_WORD(scm__rc.d2149[632]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1140]))[15] = SCM_WORD(scm__rc.d2149[631]);
  scm__rc.d2149[676] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[319])),FALSE); /* G2454 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[564]), scm__rc.d2149[676]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[565]), scm__rc.d2149[50]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[568]), scm__rc.d2149[90]);
  scm__rc.d2149[677] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[565]), SCM_OBJ(&scm__rc.d2151[420]), SCM_OBJ(&scm__rc.d2151[569]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[570]), scm__rc.d2149[677]);
  scm__rc.d2149[678] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[32])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[33]))->debugInfo = scm__rc.d2149[678];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1157]))[4] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1157]))[7] = SCM_WORD(scm__rc.d2149[572]);
  scm__rc.d2149[679] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[320])),FALSE); /* G2453 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[571]), scm__rc.d2149[679]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[572]), scm__rc.d2149[50]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[575]), scm__rc.d2149[90]);
  scm__rc.d2149[680] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[572]), SCM_OBJ(&scm__rc.d2151[420]), SCM_OBJ(&scm__rc.d2151[576]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[577]), scm__rc.d2149[680]);
  scm__rc.d2149[681] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[34]))->debugInfo = scm__rc.d2149[681];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1167]))[4] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1167]))[7] = SCM_WORD(scm__rc.d2149[85]);
  scm__rc.d2149[682] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[321])),FALSE); /* G2452 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[578]), scm__rc.d2149[682]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[579]), scm__rc.d2149[50]);
  scm__rc.d2149[683] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[579]), SCM_OBJ(&scm__rc.d2151[420]), SCM_OBJ(&scm__rc.d2151[576]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[580]), scm__rc.d2149[683]);
  scm__rc.d2149[684] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[35]))->debugInfo = scm__rc.d2149[684];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1177]))[4] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1177]))[7] = SCM_WORD(scm__rc.d2149[85]);
  scm__rc.d2149[685] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[322])),FALSE); /* G2451 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[581]), scm__rc.d2149[685]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[582]), scm__rc.d2149[50]);
  scm__rc.d2149[686] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[582]), SCM_OBJ(&scm__rc.d2151[420]), SCM_OBJ(&scm__rc.d2151[569]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[583]), scm__rc.d2149[686]);
  scm__rc.d2149[687] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[32])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[36]))->debugInfo = scm__rc.d2149[687];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1187]))[4] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1187]))[7] = SCM_WORD(scm__rc.d2149[572]);
  scm__rc.d2149[689] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[323])),TRUE); /* <system-error> */
  scm__rc.d2149[688] = Scm_MakeIdentifier(scm__rc.d2149[689], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#<system-error> */
  scm__rc.d2149[690] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[324])),TRUE); /* errno */
  scm__rc.d2149[692] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[325])),TRUE); /* ~ */
  scm__rc.d2149[691] = Scm_MakeIdentifier(scm__rc.d2149[692], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#~ */
  scm__rc.d2149[693] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[326])),TRUE); /* bind-failed? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[588]), scm__rc.d2149[693]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[589]), scm__rc.d2149[50]);
  scm__rc.d2149[694] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[34])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[37]))->name = scm__rc.d2149[693];/* (make-server-sockets bind-failed?) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[37]))->debugInfo = scm__rc.d2149[694];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1197]))[4] = SCM_WORD(scm__rc.d2149[688]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1197]))[10] = SCM_WORD(scm__rc.d2149[690]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1197]))[12] = SCM_WORD(scm__rc.d2149[691]);
  scm__rc.d2149[695] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[327])),TRUE); /* gauche */
  scm__rc.d2149[696] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[328])),TRUE); /* EADDRINUSE */
  scm__rc.d2149[698] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[329])),TRUE); /* module-binding-ref */
  scm__rc.d2149[697] = Scm_MakeIdentifier(scm__rc.d2149[698], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#module-binding-ref */
  scm__rc.d2149[699] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[330])),TRUE); /* EADDRNOTAVAIL */
  scm__rc.d2149[701] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[331])),TRUE); /* filter */
  scm__rc.d2149[700] = Scm_MakeIdentifier(scm__rc.d2149[701], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#filter */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[596]), scm__rc.d2149[50]);
  scm__rc.d2149[702] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[332])),FALSE); /* G2449 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[597]), scm__rc.d2149[702]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[600]), scm__rc.d2149[90]);
  scm__rc.d2149[703] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[596]), SCM_OBJ(&scm__rc.d2151[597]), SCM_OBJ(&scm__rc.d2151[601]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[602]), scm__rc.d2149[703]);
  scm__rc.d2149[704] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[35])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[38]))->debugInfo = scm__rc.d2149[704];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1216]))[1] = SCM_WORD(scm__rc.d2149[639]);
  scm__rc.d2149[706] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[333])),TRUE); /* map */
  scm__rc.d2149[705] = Scm_MakeIdentifier(scm__rc.d2149[706], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#map */
  scm__rc.d2149[707] = Scm_MakeIdentifier(scm__rc.d2149[16], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#socket-address */
  scm__rc.d2149[708] = Scm_MakeIdentifier(scm__rc.d2149[47], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#sockaddr-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[604]), scm__rc.d2149[50]);
  scm__rc.d2149[709] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[36])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[39]))->debugInfo = scm__rc.d2149[709];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1222]))[12] = SCM_WORD(scm__rc.d2149[617]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[608]), scm__rc.d2149[50]);
  scm__rc.d2149[710] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[334])),FALSE); /* G2448 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[609]), scm__rc.d2149[710]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[612]), scm__rc.d2149[90]);
  scm__rc.d2149[711] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[608]), SCM_OBJ(&scm__rc.d2151[609]), SCM_OBJ(&scm__rc.d2151[613]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[614]), scm__rc.d2149[711]);
  scm__rc.d2149[712] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[37])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[40]))->debugInfo = scm__rc.d2149[712];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1236]))[1] = SCM_WORD(scm__rc.d2149[639]);
  scm__rc.d2149[714] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[335])),TRUE); /* filter-map */
  scm__rc.d2149[713] = Scm_MakeIdentifier(scm__rc.d2149[714], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#filter-map */
  scm__rc.d2149[715] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[38])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[41]))->debugInfo = scm__rc.d2149[715];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1242]))[8] = SCM_WORD(scm__rc.d2149[713]);
  scm__rc.d2149[716] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[336])),FALSE); /* G2450 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[617]), scm__rc.d2149[716]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[620]), scm__rc.d2149[90]);
  scm__rc.d2149[717] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[596]), SCM_OBJ(&scm__rc.d2151[617]), SCM_OBJ(&scm__rc.d2151[621]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[622]), scm__rc.d2149[717]);
  scm__rc.d2149[718] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[39])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[42]))->debugInfo = scm__rc.d2149[718];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]))[12] = SCM_WORD(scm__rc.d2149[707]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]))[14] = SCM_WORD(scm__rc.d2149[708]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]))[16] = SCM_WORD(scm__rc.d2149[614]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]))[23] = SCM_WORD(scm__rc.d2149[700]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]))[32] = SCM_WORD(scm__rc.d2149[700]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]))[41] = SCM_WORD(scm__rc.d2149[609]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1253]))[45] = SCM_WORD(scm__rc.d2149[610]);
  scm__rc.d2149[719] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[302]))); /* :host */
  scm__rc.d2149[720] = Scm_MakeIdentifier(scm__rc.d2149[46], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#sockaddr-addr */
  scm__rc.d2149[721] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[131]))); /* :port */
  scm__rc.d2149[723] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[337])),TRUE); /* %reraise */
  scm__rc.d2149[722] = Scm_MakeIdentifier(scm__rc.d2149[723], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%reraise */
  scm__rc.d2149[724] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[40])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[43]))->debugInfo = scm__rc.d2149[724];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1300]))[11] = SCM_WORD(scm__rc.d2149[722]);
  scm__rc.d2149[725] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[41])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[44]))->debugInfo = scm__rc.d2149[725];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1313]))[3] = SCM_WORD(scm__rc.d2149[639]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1313]))[18] = SCM_WORD(scm__rc.d2149[707]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1313]))[20] = SCM_WORD(scm__rc.d2149[708]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[627]), scm__rc.d2149[619]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[630]), scm__rc.d2149[90]);
  scm__rc.d2149[726] = Scm_MakeExtendedPair(scm__rc.d2149[50], SCM_OBJ(&scm__rc.d2151[627]), SCM_OBJ(&scm__rc.d2151[631]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[632]), scm__rc.d2149[726]);
  scm__rc.d2149[727] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[42])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[45]))->name = scm__rc.d2149[50];/* make-server-sockets */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[45]))->debugInfo = scm__rc.d2149[727];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[5] = SCM_WORD(scm__rc.d2149[695]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[7] = SCM_WORD(scm__rc.d2149[696]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[10] = SCM_WORD(scm__rc.d2149[697]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[15] = SCM_WORD(scm__rc.d2149[695]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[17] = SCM_WORD(scm__rc.d2149[699]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[20] = SCM_WORD(scm__rc.d2149[697]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[25] = SCM_WORD(scm__rc.d2149[1]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[27] = SCM_WORD(scm__rc.d2149[465]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[30] = SCM_WORD(scm__rc.d2149[697]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[37] = SCM_WORD(scm__rc.d2149[614]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[44] = SCM_WORD(scm__rc.d2149[700]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[54] = SCM_WORD(scm__rc.d2149[705]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[72] = SCM_WORD(scm__rc.d2149[700]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[91] = SCM_WORD(scm__rc.d2149[719]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[96] = SCM_WORD(scm__rc.d2149[720]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[99] = SCM_WORD(scm__rc.d2149[721]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[102] = SCM_WORD(scm__rc.d2149[553]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[116] = SCM_WORD(scm__rc.d2149[609]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[120] = SCM_WORD(scm__rc.d2149[610]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1338]))[141] = SCM_WORD(scm__rc.d2149[670]);
  scm__rc.d2149[728] = Scm_MakeIdentifier(scm__rc.d2149[50], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#make-server-sockets */
  scm__rc.d2149[729] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[43])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[46]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[46]))->debugInfo = scm__rc.d2149[729];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1487]))[5] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1487]))[8] = SCM_WORD(scm__rc.d2149[50]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1487]))[15] = SCM_WORD(scm__rc.d2149[728]);
  scm__rc.d2149[730] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[338])),FALSE); /* G2463 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[633]), scm__rc.d2149[730]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[634]), scm__rc.d2149[43]);
  scm__rc.d2149[731] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[339])),FALSE); /* G2458 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[635]), scm__rc.d2149[731]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[638]), scm__rc.d2149[90]);
  scm__rc.d2149[732] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[634]), SCM_OBJ(&scm__rc.d2151[635]), SCM_OBJ(&scm__rc.d2151[639]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[640]), scm__rc.d2149[732]);
  scm__rc.d2149[733] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[44])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[47]))->debugInfo = scm__rc.d2149[733];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1504]))[2] = SCM_WORD(scm__rc.d2149[149]);
  scm__rc.d2149[734] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[340])),FALSE); /* G2462 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[641]), scm__rc.d2149[734]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[642]), scm__rc.d2149[43]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[645]), scm__rc.d2149[90]);
  scm__rc.d2149[735] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[642]), SCM_OBJ(&scm__rc.d2151[420]), SCM_OBJ(&scm__rc.d2151[646]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[647]), scm__rc.d2149[735]);
  scm__rc.d2149[736] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[48]))->debugInfo = scm__rc.d2149[736];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1508]))[4] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1508]))[7] = SCM_WORD(scm__rc.d2149[85]);
  scm__rc.d2149[737] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[341])),FALSE); /* G2461 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[648]), scm__rc.d2149[737]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[649]), scm__rc.d2149[43]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[652]), scm__rc.d2149[90]);
  scm__rc.d2149[738] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[649]), SCM_OBJ(&scm__rc.d2151[420]), SCM_OBJ(&scm__rc.d2151[653]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[654]), scm__rc.d2149[738]);
  scm__rc.d2149[739] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[49]))->debugInfo = scm__rc.d2149[739];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1518]))[4] = SCM_WORD(scm__rc.d2149[569]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1518]))[7] = SCM_WORD(scm__rc.d2149[85]);
  scm__rc.d2149[740] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[342])),TRUE); /* tcp */
  scm__rc.d2149[741] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[344])),TRUE); /* lambda */
  scm__rc.d2149[742] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[345])),TRUE); /* quote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[658]), scm__rc.d2149[740]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[659]), scm__rc.d2149[742]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[661]), scm__rc.d2149[320]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[663]), scm__rc.d2149[88]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[664]), scm__rc.d2149[330]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[665]), scm__rc.d2149[619]);
  scm__rc.d2149[743] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[346])),TRUE); /* if */
  scm__rc.d2149[744] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[347])),TRUE); /* let* */
  scm__rc.d2149[745] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[348])),TRUE); /* case */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[666]), scm__rc.d2149[10]);
  scm__rc.d2149[746] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[349])),TRUE); /* udp */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[668]), scm__rc.d2149[746]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[669]), scm__rc.d2149[11]);
  scm__rc.d2149[747] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[350])),TRUE); /* else */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[672]), scm__rc.d2149[556]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[674]), scm__rc.d2149[747]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[678]), scm__rc.d2149[320]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[679]), scm__rc.d2149[745]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[681]), scm__rc.d2149[563]);
  scm__rc.d2149[748] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[351])),TRUE); /* x->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[682]), scm__rc.d2149[748]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[684]), scm__rc.d2149[330]);
  scm__rc.d2149[749] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[352])),TRUE); /* hints */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[685]), scm__rc.d2149[563]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[686]), scm__rc.d2149[551]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[687]), scm__rc.d2149[469]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[688]), scm__rc.d2149[545]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[689]), scm__rc.d2149[468]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[691]), scm__rc.d2149[749]);
  scm__rc.d2149[750] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[353])),TRUE); /* ss */
  scm__rc.d2149[751] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[354])),TRUE); /* cut */
  scm__rc.d2149[752] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[355])),TRUE); /* slot-ref */
  scm__rc.d2149[753] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[356])),TRUE); /* <> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[692]), scm__rc.d2149[742]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[694]), scm__rc.d2149[753]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[695]), scm__rc.d2149[752]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[696]), scm__rc.d2149[751]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[697]), scm__rc.d2149[749]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[698]), scm__rc.d2149[330]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[699]), scm__rc.d2149[619]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[700]), scm__rc.d2149[467]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[703]), scm__rc.d2149[706]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[705]), scm__rc.d2149[750]);
  scm__rc.d2149[754] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[357])),TRUE); /* append */
  scm__rc.d2149[755] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[358])),TRUE); /* ^s */
  scm__rc.d2149[756] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[359])),TRUE); /* eq? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[710]), scm__rc.d2149[45]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[711]), scm__rc.d2149[85]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[712]), scm__rc.d2149[742]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[715]), scm__rc.d2149[756]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[717]), scm__rc.d2149[755]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[718]), scm__rc.d2149[750]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[720]), scm__rc.d2149[701]);
  scm__rc.d2149[757] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[360])),TRUE); /* remove */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[721]), scm__rc.d2149[757]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[724]), scm__rc.d2149[754]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[726]), scm__rc.d2149[538]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[727]), scm__rc.d2149[743]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[730]), scm__rc.d2149[744]);
  scm__rc.d2149[758] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[361])),TRUE); /* let1 */
  scm__rc.d2149[759] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[362])),TRUE); /* cond */
  scm__rc.d2149[760] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[363])),TRUE); /* number? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[731]), scm__rc.d2149[760]);
  scm__rc.d2149[761] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[364])),TRUE); /* symbol->string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[733]), scm__rc.d2149[761]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[735]), scm__rc.d2149[330]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[736]), scm__rc.d2149[59]);
  scm__rc.d2149[762] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[365])),TRUE); /* => */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[737]), scm__rc.d2149[742]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[739]), scm__rc.d2149[753]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[740]), scm__rc.d2149[752]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[741]), scm__rc.d2149[751]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[743]), scm__rc.d2149[762]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[746]), scm__rc.d2149[556]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[748]), scm__rc.d2149[747]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[752]), scm__rc.d2149[759]);
  scm__rc.d2149[763] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[367])),TRUE); /* hh */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[753]), scm__rc.d2149[619]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[754]), scm__rc.d2149[53]);
  scm__rc.d2149[764] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[368])),TRUE); /* unless */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[756]), scm__rc.d2149[556]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[758]), scm__rc.d2149[763]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[759]), scm__rc.d2149[764]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[760]), scm__rc.d2149[721]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[761]), scm__rc.d2149[753]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[762]), scm__rc.d2149[719]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[763]), scm__rc.d2149[41]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[764]), scm__rc.d2149[554]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[765]), scm__rc.d2149[751]);
  scm__rc.d2149[765] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[370])),TRUE); /* addresses */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[766]), scm__rc.d2149[765]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[767]), scm__rc.d2149[742]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[769]), scm__rc.d2149[763]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[770]), scm__rc.d2149[752]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[773]), scm__rc.d2149[706]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[777]), scm__rc.d2149[763]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[778]), scm__rc.d2149[758]);
  scm__rc.d2149[766] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[371])),TRUE); /* list */
  scm__rc.d2149[767] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[300]))); /* :any */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[779]), scm__rc.d2149[767]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[780]), scm__rc.d2149[719]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[781]), scm__rc.d2149[41]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[782]), scm__rc.d2149[554]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[784]), scm__rc.d2149[766]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[787]), scm__rc.d2149[619]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[788]), scm__rc.d2149[743]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[791]), scm__rc.d2149[330]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[792]), scm__rc.d2149[758]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[795]), scm__rc.d2149[533]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[796]), scm__rc.d2149[743]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[799]), scm__rc.d2149[741]);
  scm__rc.d2149[768] = Scm_MakeIdentifier(scm__rc.d2149[11], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#SOCK_DGRAM */
  scm__rc.d2149[769] = Scm_MakeIdentifier(scm__rc.d2149[748], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#x->string */
  scm__rc.d2149[770] = Scm_MakeIdentifier(scm__rc.d2149[469], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#AI_PASSIVE */
  scm__rc.d2149[771] = Scm_MakeIdentifier(scm__rc.d2149[467], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#sys-getaddrinfo */
  scm__rc.d2149[772] = Scm_MakeIdentifier(scm__rc.d2149[757], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#remove */
  scm__rc.d2149[773] = Scm_MakeIdentifier(scm__rc.d2149[761], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#symbol->string */
  scm__rc.d2149[774] = Scm_MakeIdentifier(scm__rc.d2149[59], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#sys-getservbyname */
  scm__rc.d2149[775] = Scm_MakeIdentifier(scm__rc.d2149[53], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#sys-gethostbyname */
  scm__rc.d2149[776] = Scm_MakeIdentifier(scm__rc.d2149[41], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#<sockaddr-in> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[800]), scm__rc.d2149[43]);
  scm__rc.d2149[777] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[372])),FALSE); /* G2460 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[801]), scm__rc.d2149[777]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[804]), scm__rc.d2149[90]);
  scm__rc.d2149[778] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2151[800]), SCM_OBJ(&scm__rc.d2151[801]), SCM_OBJ(&scm__rc.d2151[805]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[806]), scm__rc.d2149[778]);
  scm__rc.d2149[779] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[45])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[50]))->debugInfo = scm__rc.d2149[779];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1528]))[1] = SCM_WORD(scm__rc.d2149[776]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1528]))[3] = SCM_WORD(scm__rc.d2149[719]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1528]))[6] = SCM_WORD(scm__rc.d2149[721]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1528]))[9] = SCM_WORD(scm__rc.d2149[553]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[809]), scm__rc.d2149[90]);
  scm__rc.d2149[780] = Scm_MakeExtendedPair(scm__rc.d2149[43], SCM_OBJ(&scm__rc.d2151[665]), SCM_OBJ(&scm__rc.d2151[810]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[811]), scm__rc.d2149[780]);
  scm__rc.d2149[781] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[46])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[51]))->name = scm__rc.d2149[43];/* make-sockaddrs */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[51]))->debugInfo = scm__rc.d2149[781];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[4] = SCM_WORD(scm__rc.d2149[740]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[29] = SCM_WORD(scm__rc.d2149[557]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[31] = SCM_WORD(scm__rc.d2149[536]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[36] = SCM_WORD(scm__rc.d2149[740]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[39] = SCM_WORD(scm__rc.d2149[593]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[44] = SCM_WORD(scm__rc.d2149[746]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[47] = SCM_WORD(scm__rc.d2149[768]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[56] = SCM_WORD(scm__rc.d2149[555]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[62] = SCM_WORD(scm__rc.d2149[769]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[67] = SCM_WORD(scm__rc.d2149[545]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[69] = SCM_WORD(scm__rc.d2149[770]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[71] = SCM_WORD(scm__rc.d2149[551]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[74] = SCM_WORD(scm__rc.d2149[566]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[85] = SCM_WORD(scm__rc.d2149[771]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[87] = SCM_WORD(scm__rc.d2149[705]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[90] = SCM_WORD(scm__rc.d2149[539]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[98] = SCM_WORD(scm__rc.d2149[700]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[104] = SCM_WORD(scm__rc.d2149[772]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[122] = SCM_WORD(scm__rc.d2149[773]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[124] = SCM_WORD(scm__rc.d2149[774]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[131] = SCM_WORD(scm__rc.d2149[330]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[140] = SCM_WORD(scm__rc.d2149[555]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[150] = SCM_WORD(scm__rc.d2149[775]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[163] = SCM_WORD(scm__rc.d2149[555]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[169] = SCM_WORD(scm__rc.d2149[765]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[171] = SCM_WORD(scm__rc.d2149[705]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[176] = SCM_WORD(scm__rc.d2149[776]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[178] = SCM_WORD(scm__rc.d2149[719]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[180] = SCM_WORD(scm__rc.d2149[767]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[182] = SCM_WORD(scm__rc.d2149[721]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1539]))[185] = SCM_WORD(scm__rc.d2149[553]);
  scm__rc.d2149[782] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[47])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[52]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[52]))->debugInfo = scm__rc.d2149[782];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1727]))[5] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1727]))[8] = SCM_WORD(scm__rc.d2149[43]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1727]))[15] = SCM_WORD(scm__rc.d2149[614]);
  scm__rc.d2149[783] = Scm_MakeIdentifier(scm__rc.d2149[18], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#socket-input-port */
  scm__rc.d2149[784] = Scm_MakeIdentifier(scm__rc.d2149[19], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#socket-output-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[812]), scm__rc.d2149[51]);
  scm__rc.d2149[785] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[48])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[53]))->debugInfo = scm__rc.d2149[785];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]))[7] = SCM_WORD(scm__rc.d2149[131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]))[10] = SCM_WORD(scm__rc.d2149[783]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]))[17] = SCM_WORD(scm__rc.d2149[783]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]))[26] = SCM_WORD(scm__rc.d2149[131]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]))[29] = SCM_WORD(scm__rc.d2149[784]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1744]))[36] = SCM_WORD(scm__rc.d2149[784]);
  scm__rc.d2149[786] = Scm_MakeIdentifier(scm__rc.d2149[21], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#socket-close */
  scm__rc.d2149[787] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[49])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[54]))->debugInfo = scm__rc.d2149[787];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1785]))[2] = SCM_WORD(scm__rc.d2149[786]);
  scm__rc.d2149[788] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[86]))); /* :source-info */
  scm__rc.d2149[790] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[373])),TRUE); /* %unwind-protect */
  scm__rc.d2149[789] = Scm_MakeIdentifier(scm__rc.d2149[790], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%unwind-protect */
  scm__rc.d2149[791] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[374]))); /* :input-buffering */
  scm__rc.d2149[792] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2150[375]))); /* :output-buffering */
  scm__rc.d2149[793] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[376])),TRUE); /* socket */
  scm__rc.d2149[794] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[377])),TRUE); /* proc */
  scm__rc.d2149[795] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[374])),TRUE); /* input-buffering */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[817]), scm__rc.d2149[795]);
  scm__rc.d2149[796] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[375])),TRUE); /* output-buffering */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[818]), scm__rc.d2149[796]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[821]), scm__rc.d2149[133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[822]), scm__rc.d2149[794]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[823]), scm__rc.d2149[793]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[826]), scm__rc.d2149[90]);
  scm__rc.d2149[797] = Scm_MakeExtendedPair(scm__rc.d2149[51], SCM_OBJ(&scm__rc.d2151[823]), SCM_OBJ(&scm__rc.d2151[827]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[828]), scm__rc.d2149[797]);
  scm__rc.d2149[798] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[50])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[55]))->name = scm__rc.d2149[51];/* call-with-client-socket */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[55]))->debugInfo = scm__rc.d2149[798];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]))[12] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]))[24] = SCM_WORD(scm__rc.d2149[541]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]))[39] = SCM_WORD(scm__rc.d2149[788]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]))[43] = SCM_WORD(scm__rc.d2149[789]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]))[52] = SCM_WORD(scm__rc.d2149[557]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]))[58] = SCM_WORD(scm__rc.d2149[558]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]))[62] = SCM_WORD(scm__rc.d2149[791]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]))[74] = SCM_WORD(scm__rc.d2149[792]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1789]))[90] = SCM_WORD(scm__rc.d2149[560]);
  scm__rc.d2149[799] = Scm_MakeIdentifier(scm__rc.d2149[51], SCM_MODULE(scm__rc.d2149[78]), SCM_NIL); /* gauche.net#call-with-client-socket */
  scm__rc.d2149[800] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[51])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[56]))->name = scm__rc.d2149[81];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[56]))->debugInfo = scm__rc.d2149[800];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1888]))[3] = SCM_WORD(scm__rc.d2149[528]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1888]))[6] = SCM_WORD(scm__rc.d2149[51]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[1888]))[13] = SCM_WORD(scm__rc.d2149[799]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[1042] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[378])),TRUE); /* gauche.internal */
  scm__rc.d2149[1043] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[379])),TRUE); /* current-module */
  scm__rc.d2149[1044] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[380])),TRUE); /* define-constant */
  scm__rc.d2149[1045] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[381])),TRUE); /* cond-expand */
  scm__rc.d2149[1046] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[382])),TRUE); /* gauche.os.windows */
  scm__rc.d2149[1047] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[383])),FALSE); /* loop2426 */
  scm__rc.d2149[1048] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[384])),FALSE); /* args2425 */
  scm__rc.d2149[1049] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[385])),FALSE); /* G2427 */
  scm__rc.d2149[1050] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[386])),FALSE); /* G2428 */
  scm__rc.d2149[1051] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[387])),FALSE); /* G2429 */
  scm__rc.d2149[1052] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[388])),FALSE); /* G2430 */
  scm__rc.d2149[1053] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[389])),TRUE); /* tmp */
  scm__rc.d2149[1054] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[390])),FALSE); /* rest2424 */
  scm__rc.d2149[1055] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[391])),TRUE); /* pair? */
  scm__rc.d2149[1056] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[392])),TRUE); /* is-a? */
  scm__rc.d2149[1057] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[393])),FALSE); /* G2433 */
  scm__rc.d2149[1058] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[394])),FALSE); /* G2432 */
  scm__rc.d2149[1059] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[395])),FALSE); /* G2431 */
  scm__rc.d2149[1060] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[396])),TRUE); /* let-optionals* */
  scm__rc.d2149[1061] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[397])),TRUE); /* rlet1 */
  scm__rc.d2149[1062] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[398])),TRUE); /* err */
  scm__rc.d2149[1063] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[399])),TRUE); /* set! */
  scm__rc.d2149[1064] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[400])),TRUE); /* guard */
  scm__rc.d2149[1065] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[401])),FALSE); /* G2435 */
  scm__rc.d2149[1066] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[402])),FALSE); /* G2434 */
  scm__rc.d2149[1067] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[403])),FALSE); /* loop2438 */
  scm__rc.d2149[1068] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[404])),FALSE); /* args2437 */
  scm__rc.d2149[1069] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[405])),FALSE); /* G2439 */
  scm__rc.d2149[1070] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[406])),FALSE); /* G2440 */
  scm__rc.d2149[1071] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[407])),FALSE); /* G2441 */
  scm__rc.d2149[1072] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[408])),FALSE); /* rest2436 */
  scm__rc.d2149[1073] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[409])),FALSE); /* loop2444 */
  scm__rc.d2149[1074] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[410])),FALSE); /* args2443 */
  scm__rc.d2149[1075] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[411])),FALSE); /* G2445 */
  scm__rc.d2149[1076] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[412])),FALSE); /* rest2442 */
  scm__rc.d2149[1077] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[413])),TRUE); /* $ */
  scm__rc.d2149[1078] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[414])),TRUE); /* memv */
  scm__rc.d2149[1079] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[415])),TRUE); /* quasiquote */
  scm__rc.d2149[1080] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[416])),TRUE); /* unquote */
  scm__rc.d2149[1081] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[417])),TRUE); /* s6 */
  scm__rc.d2149[1082] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[418])),TRUE); /* a4s */
  scm__rc.d2149[1083] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[419])),TRUE); /* zero? */
  scm__rc.d2149[1084] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[420])),TRUE); /* v4addrs */
  scm__rc.d2149[1085] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[421])),TRUE); /* try-v4 */
  scm__rc.d2149[1086] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[422])),TRUE); /* values */
  scm__rc.d2149[1087] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[423])),TRUE); /* actual-port */
  scm__rc.d2149[1088] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[424])),TRUE); /* make-v6socks */
  scm__rc.d2149[1089] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[425])),TRUE); /* v6addrs */
  scm__rc.d2149[1090] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[426])),TRUE); /* sockets */
  scm__rc.d2149[1091] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[427])),TRUE); /* receive */
  scm__rc.d2149[1092] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[428])),TRUE); /* try-v6 */
  scm__rc.d2149[1093] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[429])),TRUE); /* reverse */
  scm__rc.d2149[1094] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[430])),TRUE); /* a6s */
  scm__rc.d2149[1095] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[431])),FALSE); /* G2459 */
  scm__rc.d2149[1096] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[432])),FALSE); /* G2456 */
  scm__rc.d2149[1097] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[433])),FALSE); /* G2457 */
  scm__rc.d2149[1098] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[434])),FALSE); /* rest2455 */
  scm__rc.d2149[1099] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[435])),FALSE); /* loop2466 */
  scm__rc.d2149[1100] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[436])),FALSE); /* args2465 */
  scm__rc.d2149[1101] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[437])),FALSE); /* G2467 */
  scm__rc.d2149[1102] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[438])),FALSE); /* G2468 */
  scm__rc.d2149[1103] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[439])),FALSE); /* rest2464 */
  scm__rc.d2149[1104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[440])),TRUE); /* unwind-protect */
}
