/* Generated automatically from libio.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/vminsn.h"
#include "gauche/exception.h"
#include "gauche/priv/portP.h"
#include "gauche/priv/writerP.h"
#include <stdlib.h>
#include <fcntl.h>
static ScmObj libioinput_portP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioinput_portP__STUB, 1, 0,SCM_FALSE,libioinput_portP, NULL, NULL);

static ScmObj libiooutput_portP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiooutput_portP__STUB, 1, 0,SCM_FALSE,libiooutput_portP, NULL, NULL);

static ScmObj libioportP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioportP__STUB, 1, 0,SCM_FALSE,libioportP, NULL, NULL);

static ScmObj libioport_closedP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_closedP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_closedP, NULL, NULL);


static ScmObj libiostandard_input_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiostandard_input_port__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiostandard_input_port, NULL, NULL);

static ScmObj libiostandard_output_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiostandard_output_port__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiostandard_output_port, NULL, NULL);

static ScmObj libiostandard_error_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiostandard_error_port__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiostandard_error_port, NULL, NULL);

static ScmObj libioport_name(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_name__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_name, NULL, NULL);

static ScmObj libioport_current_line(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_current_line__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_current_line, NULL, NULL);

static ScmObj libioport_file_number(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_file_number__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_file_number, NULL, NULL);

static ScmObj libioport_fd_dupX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_fd_dupX__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_fd_dupX, NULL, NULL);

static ScmObj libioport_attribute_setX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioport_attribute_setX__STUB, 3, 0,SCM_FALSE,libioport_attribute_setX, NULL, NULL);

static ScmObj libioport_attribute_ref(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioport_attribute_ref__STUB, 2, 2,SCM_FALSE,libioport_attribute_ref, NULL, NULL);

static ScmObj libioport_attribute_deleteX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioport_attribute_deleteX__STUB, 2, 0,SCM_FALSE,libioport_attribute_deleteX, NULL, NULL);

static ScmObj libioport_attributes(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_attributes__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_attributes, NULL, NULL);

static ScmObj libioport_type(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_type__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_type, NULL, NULL);

static ScmObj libioport_buffering_SETTER(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioport_buffering_SETTER__STUB, 2, 0,SCM_FALSE,libioport_buffering_SETTER, NULL, NULL);

static ScmObj libioport_buffering(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_buffering__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_buffering, NULL, NULL);

static ScmObj libioport_linkX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_linkX__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_linkX, NULL, NULL);

static ScmObj libioport_unlinkX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_unlinkX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_unlinkX, NULL, NULL);

static ScmObj libioport_case_fold_SETTER(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioport_case_fold_SETTER__STUB, 2, 0,SCM_FALSE,libioport_case_fold_SETTER, NULL, NULL);

static ScmObj libioport_case_fold(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_case_fold__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_case_fold, NULL, NULL);

static ScmObj libioclose_input_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioclose_input_port__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioclose_input_port, NULL, NULL);

static ScmObj libioclose_output_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioclose_output_port__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioclose_output_port, NULL, NULL);

static ScmObj libioclose_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioclose_port__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioclose_port, NULL, NULL);

#if defined(GAUCHE_WINDOWS)

#endif /* defined(GAUCHE_WINDOWS) */
#if !(defined(GAUCHE_WINDOWS))

#endif /* !(defined(GAUCHE_WINDOWS)) */
static ScmObj libio_25open_input_file(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libio_25open_input_file__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libio_25open_input_file, NULL, NULL);

static ScmObj libio_25open_output_file(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libio_25open_output_file__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libio_25open_output_file, NULL, NULL);

static ScmObj libioopen_input_fd_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioopen_input_fd_port__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioopen_input_fd_port, NULL, NULL);

static ScmObj libioopen_output_fd_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioopen_output_fd_port__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioopen_output_fd_port, NULL, NULL);

static void bufport_closer(ScmPort* p);
static ScmSize bufport_filler(ScmPort* p,ScmSize cnt);
static ScmObj libioopen_input_buffered_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioopen_input_buffered_port__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioopen_input_buffered_port, NULL, NULL);

static ScmSize bufport_flusher(ScmPort* p,ScmSize cnt,int G2155 SCM_UNUSED);
static ScmObj libioopen_output_buffered_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioopen_output_buffered_port__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioopen_output_buffered_port, NULL, NULL);

static ScmObj libioopen_input_string(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioopen_input_string__STUB, 1, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioopen_input_string, NULL, NULL);

static ScmObj libioopen_output_string(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioopen_output_string__STUB, 0, 1,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioopen_output_string, NULL, NULL);

static ScmObj libioget_output_string(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioget_output_string__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioget_output_string, NULL, NULL);

static ScmObj libioget_output_byte_string(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioget_output_byte_string__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioget_output_byte_string, NULL, NULL);

static ScmObj libioget_remaining_input_string(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioget_remaining_input_string__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioget_remaining_input_string, NULL, NULL);

static ScmObj libioopen_coding_aware_port(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioopen_coding_aware_port__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioopen_coding_aware_port, NULL, NULL);

static ScmObj libioport_has_port_positionP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_has_port_positionP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_has_port_positionP, NULL, NULL);

static ScmObj libioport_has_set_port_positionXP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_has_set_port_positionXP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_has_set_port_positionXP, NULL, NULL);

static ScmObj libioport_position(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_position__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_position, NULL, NULL);

static ScmObj libioset_port_positionX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioset_port_positionX__STUB, 2, 0,SCM_FALSE,libioset_port_positionX, NULL, NULL);

static ScmObj libioport_seek(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_seek__STUB, 2, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_seek, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 129u, 134u, 8u, 2u, 1u, 224u, 16u, 17u, 35u, 128u, 6u, 4u,
128u, 72u, 98u, 12u, 12u, 98u, 1u, 33u, 48u, 28u, 36u, 128u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 1u, 192u, 36u, 64u, 16u, 15u, 0u, 128u,
137u, 35u, 132u, 134u, 6u, 48u, 152u, 24u, 166u, 7u, 196u, 112u, 112u,
192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u,
128u, 225u, 32u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 154u, 6u, 8u, 16u, 48u, 134u, 238u, 3u, 2u, 146u, 31u, 91u,
160u, 104u, 28u, 146u, 57u, 152u, 96u, 76u, 22u, 136u, 230u, 65u,
129u, 32u, 114u, 57u, 88u, 96u, 76u, 7u, 8u, 228u, 225u, 130u, 4u,
12u, 33u, 187u, 128u, 192u, 164u, 135u, 214u, 232u, 34u, 7u, 130u,
73u, 35u, 147u, 6u, 4u, 197u, 144u, 142u, 74u, 24u, 18u, 9u, 35u,
146u, 6u, 4u, 129u, 200u, 227u, 161u, 129u, 49u, 38u, 35u, 141u, 134u,
6u, 81u, 5u, 65u, 36u, 65u, 109u, 208u, 68u, 15u, 4u, 145u, 5u, 183u,
64u, 208u, 57u, 36u, 113u, 144u, 192u, 153u, 55u, 145u, 198u, 3u, 2u,
65u, 36u, 113u, 96u, 192u, 153u, 55u, 145u, 197u, 67u, 3u, 32u, 16u,
72u, 131u, 32u, 210u, 72u, 76u, 153u, 32u, 226u, 71u, 19u, 12u, 9u,
157u, 65u, 28u, 72u, 48u, 36u, 26u, 71u, 16u, 12u, 9u, 157u, 65u, 28u,
56u, 48u, 50u, 192u, 225u, 182u, 9u, 9u, 157u, 64u, 76u, 153u, 32u,
226u, 72u, 225u, 161u, 129u, 32u, 114u, 56u, 96u, 96u, 100u, 2u, 7u,
16u, 124u, 26u, 73u, 9u, 161u, 33u, 36u, 142u, 20u, 24u, 19u, 66u,
162u, 200u, 225u, 33u, 129u, 32u, 210u, 56u, 56u, 96u, 77u, 10u, 139u,
35u, 130u, 134u, 6u, 81u, 8u, 65u, 164u, 66u, 48u, 56u, 77u, 10u,
139u, 9u, 161u, 35u, 198u, 18u, 36u, 112u, 48u, 192u, 154u, 24u, 190u,
71u, 2u, 12u, 9u, 6u, 145u, 192u, 3u, 2u, 104u, 98u, 249u, 12u, 65u,
129u, 140u, 65u, 164u, 38u, 134u, 42u, 18u, 64u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 9u, 193u, 164u, 50u, 136u, 66u, 13u, 34u,
17u, 129u, 196u, 31u, 6u, 144u, 219u, 4u, 136u, 50u, 13u, 33u, 148u,
65u, 80u, 73u, 16u, 91u, 116u, 17u, 3u, 193u, 36u, 65u, 109u, 208u,
52u, 14u, 76u, 28u, 76u, 36u, 73u, 28u, 36u, 48u, 49u, 132u, 192u,
197u, 48u, 62u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u,
1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static ScmObj libio_25port_walkingP_SETTER(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libio_25port_walkingP_SETTER__STUB, 2, 0,SCM_FALSE,libio_25port_walkingP_SETTER, NULL, NULL);

static ScmObj libio_25port_walkingP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libio_25port_walkingP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libio_25port_walkingP, NULL, NULL);

static ScmObj libio_25port_writing_sharedP_SETTER(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libio_25port_writing_sharedP_SETTER__STUB, 2, 0,SCM_FALSE,libio_25port_writing_sharedP_SETTER, NULL, NULL);

static ScmObj libio_25port_writing_sharedP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libio_25port_writing_sharedP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libio_25port_writing_sharedP, NULL, NULL);

static ScmObj write_state_allocate(ScmClass* G2160 SCM_UNUSED,ScmObj G2161 SCM_UNUSED);
static void write_state_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2164 SCM_UNUSED);
static ScmObj libio_25port_write_state_SETTER(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libio_25port_write_state_SETTER__STUB, 2, 0,SCM_FALSE,libio_25port_write_state_SETTER, NULL, NULL);

static ScmObj libio_25port_write_state(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libio_25port_write_state__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libio_25port_write_state, NULL, NULL);

static ScmObj libio_25port_lockX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libio_25port_lockX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libio_25port_lockX, NULL, NULL);

static ScmObj libio_25port_unlockX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libio_25port_unlockX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libio_25port_unlockX, NULL, NULL);

static unsigned char uvector__00005[] = {
 0u, 3u, 131u, 134u, 7u, 88u, 82u, 21u, 36u, 112u, 96u, 192u, 144u,
169u, 28u, 20u, 48u, 36u, 40u, 71u, 3u, 12u, 16u, 180u, 26u, 72u,
224u, 65u, 129u, 32u, 210u, 56u, 0u, 96u, 76u, 42u, 200u, 98u, 12u,
12u, 106u, 30u, 130u, 97u, 86u, 19u, 1u, 194u, 73u, 0u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 128u, 134u, 8u, 94u, 13u, 36u, 112u, 0u, 192u, 144u, 105u,
12u, 65u, 129u, 141u, 66u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00007[] = {
 0u, 3u, 133u, 6u, 8u, 96u, 49u, 168u, 122u, 16u, 180u, 26u, 67u,
172u, 41u, 10u, 146u, 67u, 26u, 136u, 94u, 13u, 36u, 48u, 195u, 36u,
48u, 136u, 107u, 199u, 166u, 73u, 35u, 129u, 134u, 6u, 52u, 194u, 52u,
142u, 0u, 24u, 24u, 211u, 3u, 18u, 24u, 131u, 3u, 24u, 131u, 97u, 68u,
133u, 68u, 54u, 19u, 3u, 132u, 194u, 68u, 146u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 16u, 244u, 27u, 10u, 36u, 42u, 33u,
176u, 244u, 33u, 104u, 52u, 135u, 88u, 82u, 21u, 36u, 66u, 240u, 105u,
36u, 142u, 18u, 24u, 24u, 194u, 96u, 122u, 152u, 47u, 145u, 193u,
195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u, 38u,
3u, 132u, 128u,};
static unsigned char uvector__00009[] = {
 0u, 3u, 161u, 6u, 7u, 88u, 126u, 21u, 36u, 116u, 16u, 192u, 144u,
169u, 29u, 0u, 48u, 36u, 62u, 71u, 63u, 12u, 2u, 32u, 136u, 76u, 26u,
220u, 72u, 231u, 193u, 129u, 48u, 174u, 35u, 158u, 6u, 4u, 136u, 72u,
231u, 65u, 129u, 32u, 210u, 57u, 192u, 96u, 76u, 42u, 200u, 230u,
225u, 129u, 214u, 34u, 133u, 73u, 28u, 216u, 48u, 36u, 42u, 71u, 53u,
12u, 9u, 17u, 17u, 204u, 195u, 2u, 99u, 76u, 71u, 50u, 12u, 2u, 32u,
136u, 76u, 26u, 252u, 72u, 230u, 33u, 129u, 50u, 102u, 35u, 151u,
134u, 4u, 136u, 72u, 229u, 129u, 129u, 32u, 210u, 57u, 80u, 96u, 76u,
152u, 200u, 229u, 33u, 128u, 68u, 17u, 25u, 131u, 68u, 73u, 18u, 196u,
194u, 39u, 12u, 47u, 100u, 146u, 71u, 40u, 12u, 9u, 155u, 9u, 28u,
152u, 48u, 36u, 70u, 71u, 36u, 12u, 9u, 156u, 41u, 28u, 136u, 48u,
38u, 116u, 196u, 113u, 224u, 192u, 153u, 211u, 17u, 198u, 131u, 2u,
68u, 164u, 113u, 128u, 192u, 153u, 194u, 145u, 197u, 195u, 2u, 65u,
164u, 113u, 80u, 192u, 153u, 175u, 17u, 196u, 67u, 3u, 60u, 81u, 6u,
146u, 56u, 128u, 96u, 72u, 52u, 142u, 24u, 24u, 19u, 66u, 183u, 72u,
225u, 65u, 129u, 224u, 68u, 112u, 105u, 9u, 161u, 91u, 164u, 142u,
16u, 24u, 19u, 67u, 16u, 72u, 224u, 225u, 129u, 32u, 210u, 56u, 40u,
96u, 77u, 12u, 65u, 35u, 129u, 134u, 8u, 90u, 13u, 36u, 112u, 32u,
192u, 144u, 105u, 28u, 0u, 48u, 38u, 135u, 2u, 16u, 196u, 24u, 24u,
212u, 61u, 4u, 208u, 224u, 64u, 154u, 24u, 44u, 34u, 145u, 17u, 193u,
164u, 38u, 112u, 164u, 69u, 34u, 33u, 131u, 75u, 241u, 9u, 141u, 48u,
138u, 68u, 67u, 6u, 150u, 226u, 19u, 1u, 194u, 73u, 0u,};
static unsigned char uvector__00010[] = {
 0u, 3u, 136u, 134u, 8u, 94u, 13u, 36u, 113u, 0u, 192u, 144u, 105u,
28u, 60u, 48u, 8u, 130u, 35u, 48u, 107u, 113u, 35u, 135u, 6u, 4u,
193u, 240u, 142u, 24u, 24u, 18u, 35u, 35u, 133u, 6u, 4u, 131u, 72u,
225u, 1u, 129u, 48u, 121u, 35u, 131u, 134u, 1u, 16u, 68u, 38u, 13u,
110u, 36u, 112u, 96u, 192u, 152u, 187u, 145u, 193u, 3u, 2u, 68u, 36u,
112u, 32u, 192u, 144u, 105u, 28u, 0u, 48u, 38u, 46u, 132u, 49u, 6u,
6u, 53u, 17u, 72u, 136u, 96u, 210u, 220u, 68u, 82u, 34u, 56u, 52u,
183u, 16u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00011[] = {
 0u, 3u, 133u, 6u, 8u, 96u, 49u, 168u, 122u, 16u, 180u, 26u, 67u,
192u, 136u, 224u, 210u, 25u, 226u, 136u, 52u, 145u, 20u, 136u, 142u,
13u, 34u, 36u, 137u, 98u, 97u, 19u, 134u, 23u, 178u, 73u, 17u, 72u,
136u, 96u, 210u, 252u, 67u, 172u, 69u, 10u, 145u, 20u, 136u, 134u,
13u, 45u, 196u, 58u, 195u, 240u, 169u, 36u, 49u, 168u, 138u, 68u, 67u,
6u, 150u, 226u, 34u, 145u, 17u, 193u, 165u, 184u, 136u, 94u, 13u, 36u,
48u, 195u, 36u, 48u, 136u, 107u, 199u, 188u, 73u, 35u, 129u, 134u, 6u,
52u, 199u, 68u, 142u, 0u, 24u, 24u, 211u, 3u, 18u, 24u, 131u, 3u, 24u,
131u, 98u, 40u, 125u, 33u, 81u, 13u, 132u, 192u, 225u, 49u, 213u, 36u,
128u,};
static unsigned char uvector__00012[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 42u, 17u, 92u, 27u, 17u, 67u, 233u, 10u,
136u, 108u, 61u, 8u, 90u, 13u, 33u, 224u, 68u, 112u, 105u, 12u, 241u,
68u, 26u, 72u, 138u, 68u, 71u, 6u, 145u, 18u, 68u, 177u, 48u, 137u,
195u, 11u, 217u, 36u, 136u, 164u, 68u, 48u, 105u, 126u, 33u, 214u,
34u, 133u, 72u, 138u, 68u, 67u, 6u, 150u, 226u, 29u, 97u, 248u, 84u,
145u, 20u, 136u, 134u, 13u, 45u, 196u, 69u, 34u, 35u, 131u, 75u, 113u,
16u, 188u, 26u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 30u, 166u, 13u,
36u, 112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u,
0u, 12u, 9u, 128u, 225u, 32u,};
static ScmObj libioport_column(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_column__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_column, NULL, NULL);

static ScmObj libioread(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioread__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioread, NULL, NULL);

static ScmObj libioread_char(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioread_char__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioread_char, SCM_MAKE_INT(SCM_VM_READ_CHAR), NULL);

static ScmObj libiopeek_char(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiopeek_char__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiopeek_char, SCM_MAKE_INT(SCM_VM_PEEK_CHAR), NULL);

static ScmObj libioeof_objectP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioeof_objectP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioeof_objectP, SCM_MAKE_INT(SCM_VM_EOFP), NULL);

static ScmObj libiochar_readyP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiochar_readyP__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiochar_readyP, NULL, NULL);

static ScmObj libioeof_object(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioeof_object__STUB, 0, 0,1, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioeof_object, NULL, NULL);

static ScmObj libiobyte_readyP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiobyte_readyP__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiobyte_readyP, NULL, NULL);

static unsigned char uvector__00013[] = {
 0u, 3u, 134u, 6u, 6u, 104u, 178u, 45u, 36u, 112u, 144u, 192u, 145u,
105u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libioread_byte(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioread_byte__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioread_byte, NULL, NULL);

static unsigned char uvector__00014[] = {
 0u, 3u, 134u, 6u, 6u, 104u, 186u, 47u, 36u, 112u, 144u, 192u, 145u,
121u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libiopeek_byte(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiopeek_byte__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiopeek_byte, NULL, NULL);

static unsigned char uvector__00015[] = {
 0u, 3u, 134u, 6u, 6u, 104u, 194u, 49u, 36u, 112u, 144u, 192u, 145u,
137u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libioread_line(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioread_line__STUB, 0, 3,SCM_FALSE,libioread_line, NULL, NULL);

static unsigned char uvector__00016[] = {
 0u, 3u, 162u, 134u, 7u, 16u, 233u, 25u, 112u, 18u, 72u, 232u, 129u,
129u, 48u, 39u, 35u, 161u, 134u, 8u, 206u, 52u, 141u, 73u, 29u, 8u,
48u, 36u, 106u, 71u, 65u, 12u, 9u, 26u, 17u, 207u, 131u, 4u, 109u,
26u, 146u, 57u, 232u, 96u, 72u, 212u, 142u, 114u, 24u, 35u, 120u,
203u, 128u, 18u, 57u, 192u, 96u, 72u, 200u, 142u, 108u, 24u, 25u, 68u,
113u, 26u, 16u, 202u, 19u, 24u, 33u, 28u, 144u, 152u, 146u, 144u,
244u, 19u, 9u, 64u, 152u, 14u, 18u, 71u, 53u, 12u, 9u, 143u, 169u,
28u, 208u, 48u, 36u, 104u, 71u, 51u, 12u, 12u, 128u, 70u, 130u, 58u,
131u, 73u, 33u, 49u, 234u, 36u, 115u, 32u, 192u, 153u, 143u, 17u,
204u, 67u, 2u, 65u, 164u, 114u, 224u, 193u, 27u, 70u, 164u, 142u, 90u,
24u, 18u, 53u, 35u, 149u, 134u, 8u, 238u, 50u, 129u, 201u, 28u, 168u,
48u, 36u, 14u, 71u, 37u, 12u, 17u, 228u, 122u, 252u, 72u, 227u, 225u,
129u, 52u, 36u, 44u, 142u, 54u, 24u, 25u, 227u, 224u, 194u, 24u, 196u,
15u, 31u, 136u, 52u, 72u, 4u, 144u, 205u, 26u, 132u, 208u, 144u, 178u,
25u, 28u, 64u, 140u, 184u, 1u, 33u, 148u, 38u, 132u, 34u, 4u, 207u,
28u, 54u, 198u, 129u, 51u, 30u, 9u, 143u, 81u, 36u, 146u, 71u, 21u,
12u, 9u, 161u, 59u, 68u, 113u, 16u, 192u, 215u, 32u, 146u, 56u, 128u,
96u, 73u, 4u, 142u, 30u, 24u, 25u, 0u, 131u, 67u, 40u, 107u, 144u,
136u, 77u, 10u, 137u, 13u, 18u, 17u, 36u, 72u, 33u, 148u, 53u, 200u,
68u, 48u, 169u, 13u, 82u, 17u, 36u, 134u, 240u, 154u, 26u, 62u, 19u,
66u, 118u, 136u, 100u, 84u, 208u, 169u, 194u, 71u, 14u, 12u, 9u, 161u,
234u, 100u, 112u, 144u, 192u, 154u, 30u, 18u, 71u, 8u, 12u, 9u, 33u,
145u, 193u, 131u, 2u, 104u, 116u, 153u, 28u, 12u, 48u, 38u, 133u, 68u,
145u, 192u, 67u, 2u, 104u, 114u, 1u, 28u, 0u, 48u, 36u, 134u, 67u,
16u, 96u, 77u, 10u, 26u, 36u,};
static unsigned char uvector__00017[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 34u, 64u, 241u, 248u, 131u, 68u, 128u,
73u, 12u, 209u, 168u, 143u, 35u, 215u, 226u, 67u, 35u, 136u, 17u,
151u, 0u, 36u, 50u, 136u, 238u, 50u, 129u, 200u, 141u, 163u, 82u, 27u,
99u, 65u, 29u, 65u, 164u, 50u, 136u, 226u, 52u, 33u, 148u, 70u, 241u,
151u, 0u, 34u, 57u, 34u, 54u, 141u, 73u, 15u, 66u, 51u, 141u, 35u,
82u, 28u, 67u, 164u, 101u, 192u, 73u, 36u, 146u, 72u, 225u, 33u, 129u,
140u, 38u, 6u, 41u, 131u, 65u, 28u, 28u, 48u, 38u, 3u, 132u, 112u,
32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00018[] = {
 0u, 3u, 163u, 6u, 9u, 20u, 72u, 210u, 60u, 145u, 36u, 152u, 52u,
145u, 209u, 67u, 2u, 65u, 164u, 116u, 32u, 192u, 152u, 20u, 145u,
208u, 67u, 2u, 73u, 36u, 116u, 0u, 192u, 146u, 65u, 28u, 252u, 48u,
36u, 142u, 71u, 61u, 12u, 9u, 129u, 73u, 28u, 236u, 48u, 51u, 199u,
193u, 132u, 49u, 137u, 30u, 63u, 16u, 104u, 146u, 137u, 18u, 71u, 0u,
34u, 73u, 146u, 201u, 9u, 128u, 225u, 36u, 142u, 106u, 24u, 19u, 24u,
18u, 57u, 136u, 96u, 107u, 147u, 9u, 28u, 192u, 48u, 36u, 152u, 71u,
47u, 12u, 12u, 128u, 73u, 33u, 148u, 53u, 201u, 166u, 75u, 13u, 18u,
105u, 36u, 73u, 129u, 148u, 53u, 201u, 164u, 48u, 169u, 13u, 82u,
105u, 36u, 134u, 240u, 153u, 64u, 4u, 198u, 4u, 134u, 69u, 76u, 134u,
9u, 28u, 184u, 48u, 38u, 112u, 100u, 114u, 144u, 192u, 153u, 172u,
145u, 202u, 3u, 2u, 73u, 164u, 114u, 96u, 192u, 153u, 145u, 145u,
200u, 67u, 2u, 102u, 2u, 71u, 32u, 12u, 9u, 38u, 145u, 199u, 195u, 3u,
32u, 18u, 64u, 101u, 13u, 114u, 113u, 224u, 1u, 162u, 78u, 36u, 137u,
52u, 50u, 134u, 185u, 56u, 134u, 21u, 33u, 170u, 78u, 36u, 144u, 153u,
109u, 146u, 56u, 240u, 96u, 77u, 11u, 142u, 35u, 140u, 134u, 4u, 208u,
180u, 66u, 56u, 192u, 96u, 73u, 56u, 142u, 44u, 24u, 19u, 66u, 179u,
136u, 226u, 33u, 129u, 52u, 42u, 44u, 142u, 32u, 24u, 18u, 78u, 35u,
135u, 134u, 6u, 64u, 32u, 208u, 202u, 26u, 228u, 242u, 19u, 29u, 0u,
209u, 39u, 146u, 68u, 156u, 25u, 67u, 92u, 158u, 67u, 10u, 144u, 213u,
39u, 146u, 72u, 77u, 10u, 69u, 36u, 112u, 224u, 192u, 154u, 31u, 174u,
71u, 9u, 12u, 9u, 161u, 241u, 164u, 112u, 128u, 192u, 146u, 129u, 28u,
24u, 48u, 38u, 135u, 139u, 145u, 192u, 195u, 2u, 99u, 160u, 71u, 1u,
12u, 9u, 161u, 217u, 68u, 112u, 0u, 192u, 146u, 129u, 12u, 65u, 129u,
49u, 161u, 36u,};
static unsigned char uvector__00019[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 40u, 200u, 241u, 248u, 131u, 68u, 148u,
72u, 146u, 56u, 1u, 18u, 76u, 150u, 72u, 145u, 68u, 141u, 35u, 201u,
18u, 73u, 131u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 24u, 166u, 19u,
164u, 112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u, 71u,
0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00020[] = {
 0u, 3u, 173u, 134u, 8u, 190u, 13u, 36u, 117u, 160u, 192u, 144u, 105u,
29u, 92u, 48u, 74u, 82u, 159u, 10u, 36u, 117u, 96u, 192u, 146u, 153u,
29u, 68u, 48u, 69u, 240u, 105u, 35u, 168u, 6u, 4u, 131u, 72u, 233u,
161u, 130u, 82u, 17u, 140u, 26u, 120u, 81u, 35u, 165u, 134u, 4u, 197u,
44u, 142u, 148u, 24u, 18u, 13u, 35u, 164u, 6u, 4u, 197u, 44u, 142u,
140u, 24u, 30u, 3u, 128u, 139u, 96u, 210u, 19u, 19u, 226u, 19u, 14u,
18u, 71u, 68u, 12u, 9u, 145u, 65u, 29u, 12u, 48u, 36u, 26u, 71u, 65u,
12u, 9u, 145u, 65u, 28u, 252u, 48u, 69u, 240u, 105u, 35u, 159u, 6u,
4u, 131u, 72u, 231u, 129u, 129u, 51u, 17u, 35u, 156u, 134u, 9u, 74u,
83u, 225u, 164u, 142u, 112u, 24u, 18u, 83u, 35u, 154u, 134u, 7u, 18u,
71u, 51u, 12u, 17u, 124u, 26u, 72u, 230u, 65u, 129u, 32u, 210u, 57u,
128u, 96u, 77u, 8u, 75u, 35u, 151u, 6u, 1u, 42u, 74u, 97u, 132u, 112u,
158u, 64u, 73u, 9u, 161u, 9u, 97u, 52u, 32u, 16u, 145u, 203u, 67u, 2u,
104u, 74u, 249u, 28u, 168u, 48u, 36u, 166u, 71u, 41u, 12u, 12u, 128u,
74u, 98u, 49u, 131u, 73u, 33u, 176u, 38u, 132u, 174u, 0u, 153u, 206u,
4u, 204u, 68u, 38u, 66u, 68u, 4u, 193u, 228u, 38u, 3u, 132u, 146u,
57u, 56u, 96u, 77u, 11u, 142u, 35u, 147u, 6u, 4u, 131u, 72u, 228u,
129u, 129u, 52u, 46u, 56u, 142u, 68u, 24u, 30u, 4u, 91u, 6u, 144u,
219u, 41u, 132u, 208u, 184u, 224u, 154u, 23u, 156u, 73u, 28u, 128u,
48u, 38u, 135u, 66u, 145u, 199u, 195u, 2u, 65u, 164u, 113u, 208u,
192u, 154u, 29u, 10u, 71u, 27u, 12u, 12u, 241u, 240u, 97u, 12u, 98u,
63u, 16u, 104u, 144u, 9u, 33u, 145u, 197u, 66u, 104u, 114u, 209u, 36u,
145u, 197u, 67u, 2u, 104u, 132u, 217u, 28u, 68u, 48u, 53u, 202u, 164u,
142u, 32u, 24u, 18u, 85u, 35u, 135u, 134u, 6u, 64u, 32u, 208u, 202u,
26u, 229u, 98u, 19u, 68u, 80u, 3u, 68u, 172u, 73u, 18u, 168u, 101u,
13u, 114u, 177u, 12u, 42u, 67u, 84u, 172u, 73u, 33u, 188u, 38u, 137u,
64u, 132u, 209u, 9u, 178u, 25u, 21u, 52u, 69u, 76u, 145u, 195u, 131u,
2u, 104u, 164u, 169u, 28u, 36u, 48u, 38u, 138u, 37u, 145u, 194u, 3u,
2u, 74u, 228u, 112u, 96u, 192u, 154u, 39u, 170u, 71u, 3u, 12u, 9u,
162u, 40u, 4u, 112u, 16u, 192u, 154u, 39u, 4u, 71u, 0u, 12u, 9u, 43u,
144u, 196u, 24u, 19u, 68u, 54u, 201u, 0u,};
static unsigned char uvector__00021[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 44u, 71u, 226u, 13u, 18u, 1u, 36u, 50u,
56u, 168u, 120u, 17u, 108u, 26u, 67u, 108u, 166u, 35u, 24u, 52u, 134u,
192u, 37u, 73u, 76u, 48u, 142u, 19u, 200u, 9u, 34u, 47u, 131u, 72u,
113u, 36u, 9u, 74u, 83u, 225u, 164u, 69u, 240u, 105u, 15u, 1u, 192u,
69u, 176u, 105u, 18u, 144u, 140u, 96u, 211u, 194u, 137u, 17u, 124u,
26u, 73u, 2u, 82u, 148u, 248u, 81u, 17u, 124u, 26u, 73u, 36u, 146u,
56u, 72u, 96u, 99u, 9u, 129u, 138u, 96u, 188u, 71u, 7u, 12u, 9u, 128u,
225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u, 152u, 14u, 18u,};
static ScmObj libiochar_word_constituentP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiochar_word_constituentP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiochar_word_constituentP, NULL, NULL);

static ScmObj libioread_block(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioread_block__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioread_block, NULL, NULL);

static ScmObj libioread_list(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioread_list__STUB, 1, 2,SCM_FALSE,libioread_list, NULL, NULL);

static ScmObj libioport_TObyte_string(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioport_TObyte_string__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioport_TObyte_string, NULL, NULL);

static unsigned char uvector__00022[] = {
 0u, 3u, 138u, 6u, 8u, 218u, 89u, 36u, 113u, 48u, 192u, 146u, 201u,
28u, 68u, 48u, 75u, 80u, 108u, 179u, 45u, 134u, 25u, 112u, 146u, 56u,
96u, 96u, 73u, 100u, 142u, 22u, 24u, 18u, 13u, 35u, 132u, 134u, 4u,
193u, 228u, 142u, 16u, 24u, 25u, 0u, 150u, 68u, 121u, 30u, 191u, 18u,
66u, 96u, 242u, 19u, 1u, 194u, 71u, 6u, 12u, 9u, 139u, 169u, 28u, 0u,
48u, 38u, 46u, 164u, 49u, 6u, 6u, 49u, 6u, 144u, 219u, 44u, 132u,
197u, 212u, 38u, 15u, 33u, 48u, 28u, 36u, 144u,};
static unsigned char uvector__00023[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 46u, 193u, 164u, 54u, 203u, 34u, 60u,
143u, 95u, 136u, 150u, 160u, 217u, 102u, 91u, 12u, 50u, 225u, 34u,
54u, 150u, 73u, 36u, 112u, 144u, 192u, 198u, 19u, 3u, 20u, 192u, 248u,
142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u,
129u, 48u, 28u, 36u,};
static unsigned char uvector__00024[] = {
 0u, 3u, 140u, 134u, 7u, 17u, 47u, 65u, 164u, 57u, 203u, 243u, 1u,
36u, 113u, 128u, 192u, 152u, 32u, 145u, 197u, 195u, 2u, 76u, 4u, 113u,
96u, 192u, 146u, 249u, 28u, 80u, 48u, 38u, 4u, 228u, 113u, 48u, 192u,
146u, 241u, 28u, 72u, 48u, 36u, 26u, 71u, 16u, 12u, 9u, 129u, 57u,
28u, 52u, 48u, 76u, 51u, 1u, 35u, 134u, 6u, 4u, 152u, 8u, 225u, 65u,
129u, 148u, 71u, 18u, 249u, 9u, 141u, 136u, 76u, 7u, 9u, 28u, 36u,
48u, 38u, 67u, 36u, 112u, 128u, 192u, 146u, 249u, 28u, 16u, 48u, 75u,
208u, 105u, 35u, 129u, 134u, 4u, 151u, 136u, 224u, 65u, 129u, 32u,
210u, 56u, 0u, 96u, 76u, 180u, 72u, 98u, 12u, 12u, 106u, 25u, 28u,
64u, 151u, 194u, 101u, 162u, 68u, 192u, 24u, 84u, 146u, 19u, 32u,
226u, 73u, 0u,};
static unsigned char uvector__00025[] = {
 0u, 3u, 129u, 134u, 8u, 122u, 13u, 14u, 74u, 25u, 28u, 64u, 151u,
196u, 189u, 6u, 146u, 38u, 0u, 194u, 164u, 144u, 202u, 35u, 137u,
124u, 137u, 134u, 96u, 33u, 196u, 75u, 208u, 105u, 14u, 114u, 252u,
192u, 73u, 36u, 145u, 192u, 67u, 3u, 26u, 132u, 193u, 8u, 145u, 192u,
3u, 2u, 65u, 164u, 49u, 6u, 6u, 49u, 47u, 65u, 164u, 38u, 3u, 132u,
144u,};
static unsigned char uvector__00026[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 49u, 75u, 208u, 105u, 16u, 244u, 26u, 28u,
148u, 50u, 56u, 129u, 47u, 137u, 122u, 13u, 36u, 76u, 1u, 133u, 73u,
33u, 148u, 71u, 18u, 249u, 19u, 12u, 192u, 67u, 136u, 151u, 160u,
210u, 28u, 229u, 249u, 128u, 146u, 73u, 36u, 112u, 144u, 192u, 198u,
19u, 3u, 20u, 193u, 32u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u,
76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00027[] = {
 0u, 3u, 129u, 134u, 9u, 142u, 100u, 126u, 36u, 112u, 0u, 192u, 147u,
33u, 12u, 65u, 129u, 140u, 76u, 132u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00028[] = {
 0u, 3u, 129u, 6u, 9u, 136u, 76u, 179u, 28u, 204u, 252u, 96u, 210u,
71u, 1u, 12u, 9u, 6u, 145u, 192u, 3u, 2u, 76u, 228u, 49u, 6u, 6u, 49u,
6u, 144u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00029[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 52u, 65u, 164u, 76u, 66u, 101u, 152u,
230u, 103u, 227u, 6u, 146u, 71u, 11u, 12u, 12u, 97u, 48u, 49u, 76u,
15u, 136u, 225u, 33u, 129u, 48u, 28u, 35u, 130u, 6u, 4u, 192u, 112u,
142u, 4u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00030[] = {
 0u, 3u, 129u, 134u, 9u, 138u, 105u, 131u, 73u, 28u, 8u, 48u, 36u,
26u, 71u, 0u, 12u, 9u, 52u, 144u, 196u, 24u, 24u, 196u, 26u, 66u, 96u,
56u, 73u, 0u,};
static unsigned char uvector__00031[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 53u, 65u, 164u, 76u, 83u, 76u, 26u, 73u,
28u, 36u, 48u, 49u, 132u, 192u, 197u, 48u, 62u, 35u, 131u, 134u, 4u,
192u, 112u, 142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u,
0u,};
static ScmObj libioreader_lexical_mode(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioreader_lexical_mode__STUB, 0, 2,SCM_FALSE,libioreader_lexical_mode, NULL, NULL);

static ScmObj libio_25port_ungotten_chars(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libio_25port_ungotten_chars__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libio_25port_ungotten_chars, NULL, NULL);

static ScmObj libio_25port_ungotten_bytes(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libio_25port_ungotten_bytes__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libio_25port_ungotten_bytes, NULL, NULL);

static ScmObj libiodefine_reader_ctor(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiodefine_reader_ctor__STUB, 2, 2,SCM_FALSE,libiodefine_reader_ctor, NULL, NULL);

static ScmObj libio_25get_reader_ctor(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libio_25get_reader_ctor__STUB, 1, 0,SCM_FALSE,libio_25get_reader_ctor, NULL, NULL);

static ScmObj libiodefine_reader_directive(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiodefine_reader_directive__STUB, 2, 0,SCM_FALSE,libiodefine_reader_directive, NULL, NULL);

static ScmObj libiocurrent_read_context(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiocurrent_read_context__STUB, 0, 2,SCM_FALSE,libiocurrent_read_context, NULL, NULL);

static ScmObj libioread_referenceP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libioread_referenceP__STUB, 1, 0,SCM_FALSE,libioread_referenceP, NULL, NULL);

static ScmObj libioread_reference_has_valueP(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioread_reference_has_valueP__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioread_reference_has_valueP, NULL, NULL);

static ScmObj libioread_reference_value(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioread_reference_value__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioread_reference_value, NULL, NULL);

static unsigned char uvector__00032[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 154u, 230u, 146u, 71u, 9u, 12u, 9u,
52u, 145u, 193u, 195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u,
28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static unsigned char uvector__00033[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 155u, 38u, 146u, 71u, 9u, 12u, 9u,
52u, 145u, 193u, 195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u,
28u, 0u, 48u, 38u, 3u, 132u, 128u,};
static void parse_write_optionals(ScmObj opt1,ScmObj opt2,ScmPort** pp,const ScmWriteControls** pc);
static ScmObj libiowrite(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiowrite__STUB, 1, 3,SCM_FALSE,libiowrite, NULL, NULL);

static ScmObj libiowrite_simple(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiowrite_simple__STUB, 1, 2,SCM_FALSE,libiowrite_simple, NULL, NULL);

static ScmObj libiowrite_shared(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiowrite_shared__STUB, 1, 3,SCM_FALSE,libiowrite_shared, NULL, NULL);

static ScmObj libiodisplay(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiodisplay__STUB, 1, 3,SCM_FALSE,libiodisplay, NULL, NULL);

static ScmObj libionewline(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libionewline__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libionewline, NULL, NULL);

static ScmObj libiofresh_line(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiofresh_line__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiofresh_line, NULL, NULL);

static ScmObj libiowrite_char(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiowrite_char__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiowrite_char, SCM_MAKE_INT(SCM_VM_WRITE_CHAR), NULL);

static ScmObj libiowrite_byte(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libiowrite_byte__STUB, 1, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libiowrite_byte, NULL, NULL);

static unsigned char uvector__00034[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 182u, 110u, 36u, 112u, 144u, 192u, 147u,
113u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libiowrite_limited(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiowrite_limited__STUB, 2, 2,SCM_FALSE,libiowrite_limited, NULL, NULL);

static unsigned char uvector__00035[] = {
 0u, 3u, 134u, 6u, 6u, 105u, 190u, 112u, 36u, 112u, 144u, 192u, 147u,
129u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static ScmObj libioflush(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioflush__STUB, 0, 2,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioflush, NULL, NULL);

static ScmObj libioflush_all_ports(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libioflush_all_ports__STUB, 0, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libioflush_all_ports, NULL, NULL);

static ScmObj libiowrite_need_recurseP(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libiowrite_need_recurseP__STUB, 1, 0,SCM_FALSE,libiowrite_need_recurseP, NULL, NULL);

static unsigned char uvector__00036[] = {
 0u, 3u, 137u, 6u, 9u, 198u, 95u, 131u, 68u, 229u, 57u, 206u, 132u,
145u, 196u, 3u, 2u, 96u, 122u, 71u, 14u, 12u, 9u, 58u, 17u, 195u, 67u,
2u, 78u, 100u, 112u, 176u, 192u, 152u, 30u, 145u, 194u, 131u, 2u, 65u,
164u, 112u, 144u, 192u, 146u, 249u, 28u, 28u, 48u, 50u, 206u, 97u,
48u, 28u, 36u, 112u, 96u, 192u, 147u, 153u, 28u, 20u, 48u, 50u, 1u,
57u, 136u, 142u, 13u, 36u, 132u, 198u, 4u, 145u, 192u, 195u, 2u, 100u,
24u, 71u, 2u, 12u, 9u, 6u, 145u, 192u, 3u, 2u, 100u, 24u, 67u, 16u,
96u, 99u, 18u, 252u, 26u, 68u, 35u, 57u, 132u, 200u, 48u, 38u, 3u,
132u, 146u,};
static unsigned char uvector__00037[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 58u, 203u, 240u, 105u, 16u, 140u, 230u,
34u, 56u, 52u, 137u, 198u, 95u, 131u, 68u, 229u, 57u, 206u, 132u,
146u, 71u, 9u, 12u, 12u, 97u, 48u, 49u, 76u, 18u, 8u, 224u, 225u,
129u, 48u, 28u, 35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u,
194u, 64u,};
static unsigned char uvector__00038[] = {
 0u, 3u, 128u, 6u, 7u, 73u, 219u, 128u, 146u, 24u, 131u, 3u, 24u,
157u, 136u, 76u, 7u, 9u, 32u,};
static unsigned char uvector__00039[] = {
 0u, 3u, 133u, 6u, 9u, 198u, 119u, 131u, 103u, 130u, 71u, 9u, 12u, 9u,
60u, 17u, 194u, 3u, 2u, 65u, 164u, 112u, 112u, 192u, 147u, 185u, 28u,
20u, 48u, 78u, 51u, 204u, 27u, 60u, 18u, 56u, 32u, 96u, 73u, 224u,
142u, 6u, 24u, 18u, 13u, 35u, 129u, 6u, 4u, 158u, 72u, 224u, 1u, 129u,
48u, 225u, 33u, 136u, 48u, 49u, 137u, 230u, 119u, 33u, 48u, 225u, 9u,
128u, 225u, 36u,};
static unsigned char uvector__00040[] = {
 0u, 3u, 194u, 178u, 24u, 39u, 169u, 226u, 95u, 36u, 120u, 86u, 3u,
2u, 75u, 228u, 120u, 85u, 195u, 2u, 79u, 4u, 120u, 85u, 3u, 4u, 164u,
39u, 185u, 226u, 95u, 110u, 60u, 4u, 145u, 225u, 82u, 12u, 9u, 134u,
145u, 30u, 21u, 0u, 192u, 146u, 249u, 30u, 20u, 240u, 192u, 147u,
193u, 30u, 20u, 208u, 192u, 152u, 105u, 17u, 225u, 74u, 12u, 13u,
226u, 124u, 131u, 72u, 120u, 9u, 134u, 40u, 76u, 8u, 137u, 35u, 194u,
144u, 24u, 19u, 31u, 226u, 60u, 40u, 225u, 129u, 32u, 210u, 60u, 40u,
161u, 129u, 49u, 254u, 35u, 194u, 134u, 24u, 39u, 217u, 126u, 13u,
36u, 120u, 80u, 131u, 2u, 65u, 164u, 120u, 80u, 67u, 2u, 75u, 228u,
120u, 71u, 195u, 2u, 102u, 20u, 71u, 132u, 108u, 48u, 79u, 210u, 248u,
114u, 19u, 204u, 238u, 68u, 227u, 60u, 193u, 179u, 193u, 19u, 140u,
239u, 6u, 207u, 4u, 146u, 60u, 35u, 33u, 129u, 140u, 38u, 132u, 1u,
132u, 208u, 129u, 208u, 154u, 17u, 22u, 72u, 240u, 140u, 6u, 4u, 151u,
200u, 240u, 139u, 6u, 4u, 207u, 132u, 143u, 8u, 160u, 96u, 19u, 252u,
191u, 66u, 0u, 66u, 103u, 194u, 72u, 240u, 137u, 134u, 4u, 208u, 176u,
50u, 60u, 34u, 33u, 129u, 40u, 64u, 8u, 240u, 136u, 6u, 4u, 151u,
200u, 240u, 133u, 134u, 10u, 16u, 16u, 40u, 64u, 133u, 8u, 28u, 190u,
72u, 140u, 184u, 0u, 116u, 140u, 184u, 9u, 36u, 8u, 238u, 50u, 161u,
2u, 52u, 32u, 132u, 78u, 34u, 132u, 22u, 95u, 140u, 140u, 27u, 60u,
18u, 71u, 132u, 40u, 48u, 38u, 134u, 228u, 17u, 225u, 9u, 12u, 9u,
66u, 4u, 71u, 132u, 28u, 48u, 38u, 135u, 72u, 145u, 225u, 6u, 12u, 9u,
60u, 17u, 225u, 5u, 12u, 9u, 6u, 145u, 225u, 2u, 12u, 9u, 161u, 211u,
196u, 120u, 64u, 67u, 2u, 70u, 68u, 120u, 64u, 3u, 2u, 75u, 228u,
119u, 224u, 192u, 154u, 29u, 60u, 71u, 124u, 12u, 9u, 161u, 210u, 36u,
119u, 144u, 192u, 154u, 28u, 40u, 71u, 120u, 12u, 9u, 66u, 4u, 71u,
119u, 12u, 9u, 161u, 160u, 132u, 119u, 48u, 192u, 154u, 26u, 154u,
71u, 114u, 12u, 9u, 47u, 145u, 220u, 3u, 2u, 104u, 106u, 105u, 29u,
184u, 48u, 38u, 134u, 130u, 17u, 219u, 3u, 0u, 161u, 6u, 151u, 200u,
161u, 7u, 17u, 144u, 77u, 13u, 77u, 33u, 52u, 58u, 68u, 146u, 59u,
80u, 96u, 77u, 22u, 72u, 35u, 180u, 134u, 4u, 151u, 200u, 236u, 225u,
129u, 52u, 89u, 32u, 142u, 196u, 24u, 40u, 64u, 64u, 161u, 8u, 20u,
33u, 50u, 249u, 34u, 50u, 224u, 1u, 210u, 50u, 224u, 36u, 144u, 35u,
184u, 202u, 132u, 32u, 208u, 130u, 17u, 56u, 138u, 16u, 169u, 126u,
50u, 48u, 108u, 240u, 73u, 29u, 132u, 48u, 38u, 140u, 171u, 17u, 216u,
3u, 2u, 80u, 132u, 17u, 215u, 131u, 2u, 104u, 208u, 249u, 29u, 116u,
48u, 36u, 240u, 71u, 92u, 12u, 9u, 6u, 145u, 214u, 131u, 2u, 104u,
210u, 97u, 29u, 100u, 48u, 36u, 100u, 71u, 88u, 12u, 9u, 47u, 145u,
213u, 131u, 2u, 104u, 208u, 249u, 29u, 76u, 48u, 38u, 140u, 225u, 17u,
212u, 131u, 2u, 80u, 132u, 17u, 212u, 67u, 2u, 104u, 196u, 145u, 29u,
56u, 48u, 38u, 140u, 109u, 145u, 211u, 67u, 2u, 75u, 228u, 116u, 176u,
192u, 154u, 49u, 36u, 71u, 73u, 12u, 2u, 132u, 46u, 95u, 34u, 132u,
28u, 70u, 65u, 52u, 99u, 108u, 132u, 209u, 161u, 242u, 72u, 233u, 1u,
129u, 52u, 130u, 120u, 142u, 142u, 24u, 18u, 95u, 35u, 161u, 134u, 9u,
196u, 53u, 75u, 230u, 13u, 158u, 9u, 29u, 8u, 48u, 36u, 240u, 71u,
65u, 12u, 9u, 6u, 145u, 207u, 195u, 2u, 105u, 22u, 9u, 28u, 244u, 48u,
38u, 145u, 74u, 17u, 206u, 195u, 4u, 226u, 26u, 37u, 243u, 6u, 207u,
4u, 142u, 116u, 24u, 18u, 120u, 35u, 156u, 134u, 4u, 131u, 72u, 230u,
225u, 129u, 52u, 147u, 72u, 142u, 106u, 24u, 19u, 73u, 49u, 72u, 230u,
97u, 128u, 80u, 134u, 75u, 228u, 38u, 146u, 98u, 132u, 210u, 41u, 66u,
71u, 50u, 12u, 9u, 164u, 219u, 36u, 115u, 16u, 192u, 146u, 249u, 28u,
180u, 48u, 10u, 16u, 217u, 124u, 146u, 57u, 88u, 96u, 77u, 40u, 140u,
35u, 149u, 6u, 4u, 151u, 200u, 229u, 1u, 129u, 52u, 162u, 48u, 142u,
72u, 24u, 5u, 8u, 116u, 190u, 73u, 28u, 140u, 48u, 38u, 149u, 14u,
145u, 200u, 131u, 2u, 75u, 228u, 113u, 224u, 192u, 40u, 67u, 229u,
242u, 72u, 227u, 161u, 129u, 52u, 173u, 104u, 142u, 56u, 24u, 18u,
95u, 35u, 141u, 6u, 10u, 17u, 9u, 226u, 95u, 224u, 36u, 142u, 48u,
24u, 18u, 95u, 35u, 139u, 134u, 4u, 158u, 8u, 226u, 161u, 129u, 52u,
178u, 80u, 142u, 36u, 24u, 40u, 68u, 103u, 137u, 124u, 76u, 174u,
147u, 55u, 1u, 36u, 142u, 34u, 24u, 18u, 132u, 72u, 142u, 32u, 24u,
18u, 95u, 35u, 135u, 134u, 4u, 158u, 8u, 225u, 161u, 129u, 148u, 80u,
137u, 207u, 18u, 249u, 9u, 165u, 201u, 65u, 232u, 38u, 150u, 74u, 6u,
192u, 154u, 86u, 174u, 19u, 74u, 134u, 130u, 105u, 68u, 72u, 77u, 38u,
214u, 9u, 164u, 19u, 97u, 52u, 89u, 20u, 38u, 133u, 128u, 6u, 144u,
153u, 133u, 18u, 19u, 31u, 50u, 72u, 225u, 97u, 129u, 52u, 193u, 36u,
142u, 20u, 24u, 18u, 95u, 35u, 132u, 134u, 4u, 158u, 8u, 224u, 225u,
129u, 52u, 193u, 36u, 142u, 10u, 24u, 30u, 5u, 8u, 164u, 190u, 66u,
105u, 128u, 241u, 35u, 129u, 134u, 4u, 211u, 77u, 210u, 56u, 16u, 96u,
73u, 124u, 142u, 0u, 24u, 19u, 77u, 55u, 72u, 98u, 12u, 12u, 98u, 95u,
131u, 103u, 130u, 19u, 77u, 52u, 137u, 32u,};
static unsigned char uvector__00041[] = {
 0u, 3u, 135u, 6u, 6u, 97u, 56u, 203u, 240u, 108u, 240u, 67u, 192u,
161u, 20u, 151u, 200u, 101u, 20u, 34u, 115u, 196u, 190u, 69u, 8u,
140u, 241u, 47u, 137u, 149u, 210u, 102u, 224u, 36u, 135u, 161u, 66u,
33u, 60u, 75u, 252u, 4u, 134u, 192u, 40u, 67u, 229u, 242u, 64u, 161u,
14u, 151u, 201u, 2u, 132u, 54u, 95u, 36u, 10u, 16u, 201u, 124u, 137u,
196u, 52u, 75u, 230u, 13u, 158u, 8u, 156u, 67u, 84u, 190u, 96u, 217u,
224u, 144u, 40u, 66u, 229u, 242u, 40u, 65u, 196u, 100u, 40u, 66u,
101u, 242u, 68u, 226u, 40u, 66u, 165u, 248u, 200u, 193u, 179u, 193u,
36u, 10u, 16u, 105u, 124u, 138u, 16u, 113u, 25u, 10u, 16u, 57u, 124u,
145u, 56u, 138u, 16u, 89u, 126u, 50u, 48u, 108u, 240u, 73u, 2u, 127u,
151u, 232u, 64u, 8u, 159u, 165u, 240u, 228u, 39u, 153u, 220u, 137u,
198u, 121u, 131u, 103u, 130u, 39u, 25u, 222u, 13u, 158u, 9u, 36u, 52u,
137u, 246u, 95u, 131u, 73u, 33u, 188u, 79u, 144u, 105u, 15u, 2u, 82u,
19u, 220u, 241u, 47u, 183u, 30u, 2u, 68u, 245u, 60u, 75u, 228u, 146u,
73u, 35u, 133u, 134u, 6u, 48u, 152u, 24u, 166u, 10u, 68u, 112u, 144u,
192u, 152u, 14u, 17u, 193u, 3u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u,
225u, 32u,};
static unsigned char uvector__00042[] = {
 0u, 3u, 147u, 6u, 8u, 138u, 132u, 86u, 20u, 36u, 114u, 80u, 192u,
145u, 17u, 28u, 144u, 48u, 36u, 40u, 71u, 35u, 12u, 9u, 66u, 42u, 71u,
33u, 12u, 15u, 2u, 132u, 90u, 132u, 84u, 132u, 192u, 112u, 145u, 200u,
3u, 2u, 97u, 220u, 71u, 31u, 12u, 9u, 66u, 44u, 71u, 30u, 12u, 9u,
66u, 42u, 71u, 28u, 12u, 9u, 135u, 113u, 28u, 108u, 48u, 37u, 8u,
177u, 28u, 100u, 48u, 80u, 139u, 134u, 26u, 17u, 130u, 24u, 104u, 70u,
73u, 35u, 137u, 134u, 4u, 200u, 196u, 142u, 30u, 24u, 27u, 232u, 69u,
132u, 83u, 66u, 44u, 19u, 35u, 18u, 72u, 225u, 193u, 129u, 40u, 69u,
136u, 225u, 161u, 129u, 34u, 34u, 56u, 88u, 96u, 161u, 23u, 12u, 52u,
35u, 4u, 48u, 208u, 141u, 18u, 71u, 5u, 12u, 9u, 156u, 129u, 28u, 4u,
48u, 55u, 196u, 66u, 41u, 136u, 130u, 103u, 32u, 73u, 28u, 0u, 48u,
36u, 68u, 67u, 16u, 96u, 99u, 20u, 34u, 176u, 161u, 9u, 161u, 9u, 33u,
50u, 202u, 9u, 135u, 25u, 36u,};
static unsigned char uvector__00043[] = {
 0u, 3u, 136u, 134u, 6u, 105u, 248u, 50u, 1u, 17u, 55u, 17u, 66u, 44u,
220u, 72u, 114u, 20u, 34u, 176u, 161u, 13u, 241u, 16u, 138u, 98u, 33u,
66u, 46u, 24u, 104u, 70u, 8u, 97u, 161u, 26u, 36u, 144u, 223u, 66u,
44u, 34u, 154u, 17u, 97u, 66u, 46u, 24u, 104u, 70u, 8u, 97u, 161u,
25u, 36u, 144u, 240u, 40u, 69u, 168u, 69u, 72u, 136u, 168u, 69u, 97u,
66u, 73u, 36u, 112u, 224u, 192u, 198u, 19u, 8u, 48u, 152u, 81u, 132u,
196u, 156u, 38u, 54u, 228u, 142u, 26u, 24u, 18u, 132u, 88u, 142u, 24u,
24u, 18u, 34u, 35u, 133u, 134u, 4u, 192u, 196u, 142u, 14u, 24u, 19u,
1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00044[] = {
 0u, 3u, 143u, 134u, 9u, 190u, 95u, 131u, 73u, 28u, 120u, 48u, 36u,
26u, 71u, 29u, 12u, 9u, 47u, 145u, 198u, 195u, 3u, 60u, 124u, 24u,
67u, 24u, 151u, 227u, 241u, 6u, 137u, 40u, 146u, 19u, 1u, 194u, 73u,
28u, 84u, 48u, 38u, 21u, 164u, 113u, 16u, 192u, 215u, 66u, 54u, 72u,
226u, 1u, 129u, 40u, 70u, 200u, 225u, 225u, 129u, 144u, 8u, 52u, 50u,
134u, 186u, 17u, 194u, 19u, 15u, 192u, 209u, 66u, 56u, 73u, 20u, 35u,
97u, 148u, 53u, 208u, 142u, 16u, 194u, 164u, 53u, 80u, 142u, 18u, 72u,
111u, 9u, 139u, 184u, 76u, 43u, 72u, 100u, 84u, 196u, 60u, 145u, 195u,
131u, 2u, 101u, 82u, 71u, 9u, 12u, 9u, 147u, 201u, 28u, 32u, 48u, 37u,
8u, 233u, 28u, 24u, 48u, 38u, 70u, 228u, 112u, 48u, 192u, 152u, 126u,
17u, 192u, 67u, 2u, 100u, 8u, 71u, 0u, 12u, 9u, 66u, 58u, 67u, 16u,
96u, 76u, 51u, 73u, 0u,};
static unsigned char uvector__00045[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 35u, 210u, 252u, 126u, 32u,
209u, 37u, 18u, 68u, 223u, 47u, 193u, 164u, 145u, 194u, 67u, 3u, 24u,
76u, 16u, 211u, 7u, 162u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u,
48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00046[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 161u, 31u, 161u, 30u, 36u, 112u,
144u, 192u, 148u, 35u, 196u, 112u, 112u, 192u, 152u, 14u, 17u, 192u,
131u, 2u, 96u, 56u, 71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00047[] = {
 0u, 3u, 131u, 134u, 10u, 20u, 2u, 71u, 5u, 12u, 20u, 40u, 50u, 44u,
42u, 72u, 224u, 129u, 129u, 33u, 82u, 56u, 16u, 96u, 73u, 20u, 142u,
0u, 24u, 19u, 4u, 178u, 24u, 131u, 3u, 28u, 42u, 19u, 4u, 176u, 152u,
14u, 18u, 64u,};
static unsigned char uvector__00048[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 40u, 73u, 10u, 138u, 20u, 25u,
22u, 21u, 34u, 133u, 0u, 146u, 56u, 72u, 96u, 99u, 133u, 83u, 5u, 18u,
56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u, 128u, 6u,
4u, 192u, 112u, 144u,};
static ScmObj write_controls_allocate(ScmClass* G2186 SCM_UNUSED,ScmObj G2187 SCM_UNUSED);
static unsigned char uvector__00049[] = {
 0u, 3u, 203u, 50u, 24u, 40u, 80u, 195u, 229u, 10u, 33u, 161u, 69u,
161u, 70u, 161u, 71u, 161u, 72u, 161u, 73u, 161u, 74u, 161u, 75u,
161u, 76u, 161u, 77u, 161u, 78u, 161u, 79u, 161u, 80u, 161u, 81u,
161u, 82u, 161u, 83u, 36u, 121u, 102u, 3u, 2u, 80u, 169u, 145u, 229u,
151u, 12u, 9u, 66u, 164u, 71u, 150u, 88u, 48u, 37u, 10u, 137u, 30u,
89u, 80u, 192u, 148u, 42u, 4u, 121u, 101u, 3u, 2u, 80u, 167u, 145u,
229u, 147u, 12u, 9u, 66u, 156u, 71u, 150u, 72u, 48u, 37u, 10u, 105u,
30u, 89u, 16u, 192u, 148u, 41u, 132u, 121u, 100u, 3u, 2u, 80u, 165u,
145u, 229u, 143u, 12u, 9u, 66u, 148u, 71u, 150u, 56u, 48u, 37u, 10u,
73u, 30u, 88u, 208u, 192u, 148u, 41u, 4u, 121u, 99u, 3u, 2u, 80u,
163u, 145u, 229u, 139u, 12u, 9u, 66u, 140u, 71u, 150u, 40u, 48u, 37u,
10u, 41u, 30u, 88u, 144u, 192u, 152u, 26u, 145u, 229u, 136u, 12u, 9u,
66u, 136u, 71u, 150u, 24u, 48u, 80u, 170u, 80u, 170u, 134u, 138u, 20u,
66u, 72u, 242u, 194u, 134u, 4u, 208u, 161u, 194u, 60u, 176u, 129u,
129u, 40u, 81u, 8u, 242u, 192u, 6u, 4u, 208u, 157u, 146u, 60u, 171u,
161u, 130u, 133u, 12u, 62u, 80u, 162u, 26u, 20u, 90u, 20u, 106u, 20u,
122u, 20u, 138u, 20u, 154u, 20u, 170u, 20u, 186u, 20u, 202u, 20u,
218u, 20u, 234u, 20u, 250u, 21u, 10u, 21u, 26u, 21u, 32u, 239u, 66u,
136u, 73u, 30u, 85u, 192u, 192u, 154u, 28u, 46u, 71u, 149u, 108u, 48u,
37u, 10u, 33u, 30u, 85u, 160u, 192u, 148u, 42u, 68u, 121u, 86u, 67u,
2u, 80u, 168u, 145u, 229u, 88u, 12u, 9u, 66u, 160u, 71u, 149u, 92u,
48u, 37u, 10u, 121u, 30u, 85u, 96u, 192u, 148u, 41u, 196u, 121u, 85u,
67u, 2u, 80u, 166u, 145u, 229u, 84u, 12u, 9u, 66u, 152u, 71u, 149u,
76u, 48u, 37u, 10u, 89u, 30u, 85u, 32u, 192u, 148u, 41u, 68u, 121u,
84u, 67u, 2u, 80u, 164u, 145u, 229u, 80u, 12u, 9u, 66u, 144u, 71u,
149u, 60u, 48u, 37u, 10u, 57u, 30u, 84u, 224u, 192u, 148u, 40u, 196u,
121u, 83u, 67u, 2u, 80u, 162u, 145u, 229u, 76u, 12u, 9u, 161u, 131u,
36u, 121u, 82u, 195u, 2u, 80u, 162u, 17u, 229u, 72u, 12u, 2u, 133u,
88u, 132u, 208u, 192u, 98u, 71u, 149u, 28u, 48u, 37u, 10u, 185u, 30u,
84u, 64u, 193u, 66u, 134u, 31u, 40u, 81u, 13u, 10u, 45u, 10u, 53u,
10u, 61u, 10u, 69u, 10u, 77u, 10u, 85u, 10u, 93u, 10u, 101u, 10u,
109u, 10u, 117u, 10u, 125u, 10u, 133u, 10u, 136u, 119u, 161u, 68u,
52u, 42u, 100u, 143u, 42u, 24u, 96u, 74u, 21u, 50u, 60u, 168u, 65u,
129u, 52u, 101u, 96u, 143u, 42u, 8u, 96u, 74u, 20u, 66u, 60u, 168u,
1u, 129u, 40u, 84u, 72u, 242u, 143u, 134u, 4u, 161u, 80u, 35u, 202u,
60u, 24u, 18u, 133u, 60u, 143u, 40u, 232u, 96u, 74u, 20u, 226u, 60u,
163u, 129u, 129u, 40u, 83u, 72u, 242u, 141u, 134u, 4u, 161u, 76u, 35u,
202u, 52u, 24u, 18u, 133u, 44u, 143u, 40u, 200u, 96u, 74u, 20u, 162u,
60u, 163u, 1u, 129u, 40u, 82u, 72u, 242u, 139u, 134u, 4u, 161u, 72u,
35u, 202u, 44u, 24u, 18u, 133u, 28u, 143u, 40u, 168u, 96u, 74u, 20u,
98u, 60u, 162u, 129u, 129u, 40u, 81u, 72u, 242u, 137u, 134u, 4u, 209u,
120u, 162u, 60u, 162u, 65u, 129u, 40u, 81u, 8u, 242u, 135u, 134u, 1u,
66u, 176u, 66u, 104u, 186u, 185u, 35u, 202u, 28u, 24u, 18u, 133u, 92u,
143u, 40u, 88u, 96u, 161u, 67u, 15u, 148u, 40u, 134u, 133u, 22u, 133u,
26u, 133u, 30u, 133u, 34u, 133u, 38u, 133u, 42u, 133u, 46u, 133u, 50u,
133u, 54u, 133u, 58u, 133u, 62u, 133u, 64u, 59u, 208u, 162u, 26u, 21u,
42u, 21u, 50u, 71u, 148u, 40u, 48u, 37u, 10u, 153u, 30u, 80u, 144u,
192u, 148u, 42u, 68u, 121u, 66u, 3u, 2u, 105u, 36u, 201u, 30u, 80u,
112u, 192u, 148u, 40u, 132u, 121u, 65u, 131u, 2u, 80u, 168u, 17u,
229u, 5u, 12u, 9u, 66u, 158u, 71u, 148u, 16u, 48u, 37u, 10u, 113u,
30u, 80u, 48u, 192u, 148u, 41u, 164u, 121u, 64u, 131u, 2u, 80u, 166u,
17u, 229u, 1u, 12u, 9u, 66u, 150u, 71u, 148u, 0u, 48u, 37u, 10u, 81u,
30u, 77u, 240u, 192u, 148u, 41u, 36u, 121u, 55u, 131u, 2u, 80u, 164u,
17u, 228u, 221u, 12u, 9u, 66u, 142u, 71u, 147u, 112u, 48u, 37u, 10u,
49u, 30u, 77u, 176u, 192u, 148u, 40u, 164u, 121u, 54u, 131u, 2u, 105u,
22u, 217u, 30u, 77u, 144u, 192u, 148u, 40u, 132u, 121u, 53u, 131u, 0u,
161u, 89u, 33u, 52u, 139u, 32u, 145u, 228u, 213u, 12u, 9u, 66u, 174u,
71u, 147u, 72u, 48u, 80u, 161u, 135u, 202u, 20u, 67u, 66u, 139u, 66u,
141u, 66u, 143u, 66u, 145u, 66u, 147u, 66u, 149u, 66u, 151u, 66u,
153u, 66u, 155u, 66u, 157u, 66u, 158u, 29u, 232u, 81u, 13u, 10u, 141u,
10u, 149u, 10u, 153u, 35u, 201u, 162u, 24u, 18u, 133u, 76u, 143u, 38u,
128u, 96u, 74u, 21u, 34u, 60u, 153u, 225u, 129u, 40u, 84u, 72u, 242u,
103u, 6u, 4u, 210u, 253u, 162u, 60u, 153u, 161u, 129u, 40u, 81u, 8u,
242u, 102u, 6u, 4u, 161u, 79u, 35u, 201u, 150u, 24u, 18u, 133u, 56u,
143u, 38u, 80u, 96u, 74u, 20u, 210u, 60u, 153u, 33u, 129u, 40u, 83u,
8u, 242u, 100u, 6u, 4u, 161u, 75u, 35u, 201u, 142u, 24u, 18u, 133u,
40u, 143u, 38u, 48u, 96u, 74u, 20u, 146u, 60u, 152u, 161u, 129u, 40u,
82u, 8u, 242u, 98u, 6u, 4u, 161u, 71u, 35u, 201u, 134u, 24u, 18u,
133u, 24u, 143u, 38u, 16u, 96u, 74u, 20u, 82u, 60u, 152u, 33u, 129u,
52u, 185u, 48u, 143u, 38u, 0u, 96u, 74u, 20u, 66u, 60u, 147u, 161u,
128u, 80u, 173u, 16u, 154u, 92u, 50u, 72u, 242u, 78u, 6u, 4u, 161u,
87u, 35u, 201u, 50u, 24u, 40u, 80u, 195u, 229u, 10u, 33u, 161u, 69u,
161u, 70u, 161u, 71u, 161u, 72u, 161u, 73u, 161u, 74u, 161u, 75u,
161u, 76u, 161u, 77u, 161u, 78u, 14u, 244u, 40u, 134u, 133u, 66u,
133u, 70u, 133u, 74u, 133u, 76u, 145u, 228u, 152u, 12u, 9u, 66u, 166u,
71u, 146u, 92u, 48u, 37u, 10u, 145u, 30u, 73u, 96u, 192u, 148u, 42u,
36u, 121u, 37u, 67u, 2u, 80u, 168u, 17u, 228u, 148u, 12u, 9u, 167u,
99u, 100u, 121u, 36u, 195u, 2u, 80u, 162u, 17u, 228u, 146u, 12u, 9u,
66u, 156u, 71u, 146u, 68u, 48u, 37u, 10u, 105u, 30u, 73u, 0u, 192u,
148u, 41u, 132u, 121u, 35u, 195u, 2u, 80u, 165u, 145u, 228u, 142u,
12u, 9u, 66u, 148u, 71u, 146u, 52u, 48u, 37u, 10u, 73u, 30u, 72u,
192u, 192u, 148u, 41u, 4u, 121u, 34u, 195u, 2u, 80u, 163u, 145u, 228u,
138u, 12u, 9u, 66u, 140u, 71u, 146u, 36u, 48u, 37u, 10u, 41u, 30u,
72u, 128u, 192u, 154u, 115u, 58u, 71u, 146u, 28u, 48u, 37u, 10u, 33u,
30u, 72u, 64u, 192u, 40u, 86u, 200u, 77u, 57u, 138u, 36u, 121u, 32u,
195u, 2u, 80u, 171u, 145u, 228u, 128u, 12u, 20u, 40u, 97u, 242u, 133u,
16u, 208u, 162u, 208u, 163u, 80u, 163u, 208u, 164u, 80u, 164u, 208u,
165u, 80u, 165u, 208u, 166u, 80u, 166u, 135u, 122u, 20u, 67u, 66u,
159u, 66u, 161u, 66u, 163u, 66u, 165u, 66u, 166u, 72u, 242u, 47u,
134u, 4u, 161u, 83u, 35u, 200u, 188u, 24u, 18u, 133u, 72u, 143u, 34u,
232u, 96u, 74u, 21u, 18u, 60u, 139u, 129u, 129u, 40u, 84u, 8u, 242u,
45u, 134u, 4u, 161u, 79u, 35u, 200u, 180u, 24u, 19u, 81u, 151u, 8u,
242u, 44u, 134u, 4u, 161u, 68u, 35u, 200u, 176u, 24u, 18u, 133u, 52u,
143u, 34u, 184u, 96u, 74u, 20u, 194u, 60u, 138u, 193u, 129u, 40u, 82u,
200u, 242u, 42u, 134u, 4u, 161u, 74u, 35u, 200u, 168u, 24u, 18u, 133u,
36u, 143u, 34u, 152u, 96u, 74u, 20u, 130u, 60u, 138u, 65u, 129u, 40u,
81u, 200u, 242u, 40u, 134u, 4u, 161u, 70u, 35u, 200u, 160u, 24u, 18u,
133u, 20u, 143u, 34u, 120u, 96u, 77u, 69u, 14u, 35u, 200u, 156u, 24u,
18u, 133u, 16u, 143u, 34u, 88u, 96u, 20u, 43u, 132u, 38u, 162u, 109u,
146u, 60u, 137u, 65u, 129u, 40u, 85u, 200u, 242u, 35u, 134u, 10u, 20u,
48u, 249u, 66u, 136u, 104u, 81u, 104u, 81u, 168u, 81u, 232u, 82u, 40u,
82u, 104u, 82u, 168u, 82u, 232u, 83u, 3u, 189u, 10u, 33u, 161u, 78u,
161u, 79u, 161u, 80u, 161u, 81u, 161u, 82u, 161u, 83u, 36u, 121u, 17u,
131u, 2u, 80u, 169u, 145u, 228u, 69u, 12u, 9u, 66u, 164u, 71u, 145u,
16u, 48u, 37u, 10u, 137u, 30u, 68u, 48u, 192u, 148u, 42u, 4u, 121u,
16u, 131u, 2u, 80u, 167u, 145u, 228u, 65u, 12u, 9u, 66u, 156u, 71u,
145u, 0u, 48u, 38u, 168u, 206u, 145u, 228u, 31u, 12u, 9u, 66u, 136u,
71u, 144u, 120u, 48u, 37u, 10u, 97u, 30u, 65u, 208u, 192u, 148u, 41u,
100u, 121u, 7u, 3u, 2u, 80u, 165u, 17u, 228u, 27u, 12u, 9u, 66u, 146u,
71u, 144u, 104u, 48u, 37u, 10u, 65u, 30u, 65u, 144u, 192u, 148u, 40u,
228u, 121u, 6u, 3u, 2u, 80u, 163u, 17u, 228u, 23u, 12u, 9u, 66u, 138u,
71u, 144u, 88u, 48u, 38u, 168u, 47u, 145u, 228u, 21u, 12u, 9u, 66u,
136u, 71u, 144u, 72u, 48u, 10u, 21u, 210u, 19u, 84u, 19u, 9u, 30u,
65u, 16u, 192u, 148u, 42u, 228u, 121u, 3u, 131u, 5u, 10u, 24u, 124u,
161u, 68u, 52u, 40u, 180u, 40u, 212u, 40u, 244u, 41u, 20u, 41u, 52u,
41u, 84u, 41u, 97u, 222u, 133u, 16u, 208u, 166u, 208u, 167u, 80u,
167u, 208u, 168u, 80u, 168u, 208u, 169u, 80u, 169u, 146u, 60u, 129u,
161u, 129u, 40u, 84u, 200u, 242u, 6u, 6u, 4u, 161u, 82u, 35u, 200u,
22u, 24u, 18u, 133u, 68u, 143u, 32u, 80u, 96u, 74u, 21u, 2u, 60u,
129u, 33u, 129u, 40u, 83u, 200u, 242u, 4u, 6u, 4u, 161u, 78u, 35u,
200u, 14u, 24u, 18u, 133u, 52u, 143u, 32u, 48u, 96u, 77u, 92u, 222u,
35u, 200u, 10u, 24u, 18u, 133u, 16u, 143u, 32u, 32u, 96u, 74u, 20u,
178u, 60u, 128u, 97u, 129u, 40u, 82u, 136u, 242u, 1u, 6u, 4u, 161u,
73u, 35u, 200u, 2u, 24u, 18u, 133u, 32u, 143u, 32u, 0u, 96u, 74u, 20u,
114u, 60u, 123u, 225u, 129u, 40u, 81u, 136u, 241u, 239u, 6u, 4u, 161u,
69u, 35u, 199u, 186u, 24u, 19u, 86u, 244u, 8u, 241u, 238u, 6u, 4u,
161u, 68u, 35u, 199u, 178u, 24u, 5u, 10u, 241u, 9u, 171u, 115u, 164u,
143u, 30u, 192u, 96u, 74u, 21u, 114u, 60u, 122u, 161u, 130u, 133u,
12u, 62u, 80u, 162u, 26u, 20u, 90u, 20u, 106u, 20u, 122u, 20u, 138u,
20u, 154u, 20u, 160u, 239u, 66u, 136u, 104u, 83u, 40u, 83u, 104u, 83u,
168u, 83u, 232u, 84u, 40u, 84u, 104u, 84u, 168u, 84u, 201u, 30u, 61u,
64u, 192u, 148u, 42u, 100u, 120u, 244u, 195u, 2u, 80u, 169u, 17u,
227u, 210u, 12u, 9u, 66u, 162u, 71u, 143u, 68u, 48u, 37u, 10u, 129u,
30u, 61u, 0u, 192u, 148u, 41u, 228u, 120u, 243u, 195u, 2u, 80u, 167u,
17u, 227u, 206u, 12u, 9u, 66u, 154u, 71u, 143u, 52u, 48u, 37u, 10u,
97u, 30u, 60u, 192u, 192u, 154u, 208u, 62u, 71u, 143u, 44u, 48u, 37u,
10u, 33u, 30u, 60u, 160u, 192u, 148u, 41u, 68u, 120u, 242u, 67u, 2u,
80u, 164u, 145u, 227u, 200u, 12u, 9u, 66u, 144u, 71u, 143u, 28u, 48u,
37u, 10u, 57u, 30u, 60u, 96u, 192u, 148u, 40u, 196u, 120u, 241u, 67u,
2u, 80u, 162u, 145u, 227u, 196u, 12u, 9u, 172u, 232u, 36u, 120u, 240u,
195u, 2u, 80u, 162u, 17u, 227u, 192u, 12u, 2u, 133u, 124u, 132u, 214u,
112u, 226u, 71u, 142u, 124u, 48u, 37u, 10u, 185u, 30u, 57u, 192u,
193u, 66u, 134u, 31u, 40u, 81u, 13u, 10u, 45u, 10u, 53u, 10u, 61u,
10u, 69u, 10u, 72u, 119u, 161u, 68u, 52u, 41u, 116u, 41u, 148u, 41u,
180u, 41u, 212u, 41u, 244u, 42u, 20u, 42u, 52u, 42u, 84u, 42u, 100u,
143u, 28u, 216u, 96u, 74u, 21u, 50u, 60u, 115u, 65u, 129u, 40u, 84u,
136u, 241u, 204u, 134u, 4u, 161u, 81u, 35u, 199u, 48u, 24u, 18u, 133u,
64u, 143u, 28u, 184u, 96u, 74u, 20u, 242u, 60u, 114u, 193u, 129u, 40u,
83u, 136u, 241u, 202u, 134u, 4u, 161u, 77u, 35u, 199u, 40u, 24u, 18u,
133u, 48u, 143u, 28u, 152u, 96u, 74u, 20u, 178u, 60u, 114u, 65u, 129u,
53u, 206u, 0u, 143u, 28u, 136u, 96u, 74u, 20u, 66u, 60u, 114u, 1u,
129u, 40u, 82u, 72u, 241u, 199u, 134u, 4u, 161u, 72u, 35u, 199u, 28u,
24u, 18u, 133u, 28u, 143u, 28u, 104u, 96u, 74u, 20u, 98u, 60u, 113u,
129u, 129u, 40u, 81u, 72u, 241u, 197u, 134u, 4u, 215u, 41u, 34u, 60u,
113u, 65u, 129u, 40u, 81u, 8u, 241u, 195u, 134u, 1u, 67u, 0u, 66u,
107u, 146u, 249u, 35u, 199u, 12u, 24u, 18u, 133u, 92u, 143u, 28u, 24u,
96u, 161u, 67u, 15u, 148u, 40u, 134u, 133u, 22u, 133u, 26u, 133u, 30u,
133u, 32u, 59u, 208u, 162u, 26u, 20u, 170u, 20u, 186u, 20u, 202u, 20u,
218u, 20u, 234u, 20u, 250u, 21u, 10u, 21u, 26u, 21u, 42u, 21u, 50u,
71u, 142u, 8u, 48u, 37u, 10u, 153u, 30u, 56u, 16u, 192u, 148u, 42u,
68u, 120u, 224u, 3u, 2u, 80u, 168u, 145u, 227u, 95u, 12u, 9u, 66u,
160u, 71u, 141u, 120u, 48u, 37u, 10u, 121u, 30u, 53u, 208u, 192u,
148u, 41u, 196u, 120u, 215u, 3u, 2u, 80u, 166u, 145u, 227u, 91u, 12u,
9u, 66u, 152u, 71u, 141u, 104u, 48u, 37u, 10u, 89u, 30u, 53u, 144u,
192u, 148u, 41u, 68u, 120u, 214u, 3u, 2u, 107u, 246u, 9u, 30u, 53u,
112u, 192u, 148u, 40u, 132u, 120u, 213u, 131u, 2u, 80u, 164u, 17u,
227u, 85u, 12u, 9u, 66u, 142u, 71u, 141u, 80u, 48u, 37u, 10u, 49u,
30u, 53u, 48u, 192u, 148u, 40u, 164u, 120u, 212u, 131u, 2u, 107u,
240u, 25u, 30u, 53u, 16u, 192u, 148u, 40u, 132u, 120u, 211u, 131u, 0u,
161u, 129u, 33u, 53u, 247u, 64u, 145u, 227u, 77u, 12u, 9u, 66u, 174u,
71u, 141u, 40u, 48u, 80u, 161u, 135u, 202u, 20u, 67u, 66u, 139u, 66u,
141u, 66u, 142u, 29u, 232u, 81u, 13u, 10u, 77u, 10u, 85u, 10u, 93u,
10u, 101u, 10u, 109u, 10u, 117u, 10u, 125u, 10u, 133u, 10u, 141u, 10u,
149u, 10u, 153u, 35u, 198u, 146u, 24u, 18u, 133u, 76u, 143u, 26u, 64u,
96u, 74u, 21u, 34u, 60u, 104u, 225u, 129u, 40u, 84u, 72u, 241u, 163u,
6u, 4u, 161u, 80u, 35u, 198u, 138u, 24u, 18u, 133u, 60u, 143u, 26u,
32u, 96u, 74u, 20u, 226u, 60u, 104u, 97u, 129u, 40u, 83u, 72u, 241u,
161u, 6u, 4u, 161u, 76u, 35u, 198u, 130u, 24u, 18u, 133u, 44u, 143u,
26u, 0u, 96u, 74u, 20u, 162u, 60u, 99u, 225u, 129u, 40u, 82u, 72u,
241u, 143u, 6u, 4u, 216u, 160u, 34u, 60u, 99u, 161u, 129u, 40u, 81u,
8u, 241u, 142u, 6u, 4u, 161u, 71u, 35u, 198u, 54u, 24u, 18u, 133u,
24u, 143u, 24u, 208u, 96u, 74u, 20u, 82u, 60u, 99u, 33u, 129u, 54u,
37u, 80u, 143u, 24u, 192u, 96u, 74u, 20u, 66u, 60u, 98u, 161u, 128u,
80u, 193u, 16u, 155u, 18u, 130u, 72u, 241u, 138u, 6u, 4u, 161u, 87u,
35u, 198u, 34u, 24u, 40u, 80u, 195u, 229u, 10u, 33u, 161u, 69u, 161u,
70u, 14u, 244u, 40u, 134u, 133u, 34u, 133u, 38u, 133u, 42u, 133u, 46u,
133u, 50u, 133u, 54u, 133u, 58u, 133u, 62u, 133u, 66u, 133u, 70u,
133u, 74u, 133u, 76u, 145u, 227u, 16u, 12u, 9u, 66u, 166u, 71u, 140u,
60u, 48u, 37u, 10u, 145u, 30u, 48u, 224u, 192u, 148u, 42u, 36u, 120u,
195u, 67u, 2u, 80u, 168u, 17u, 227u, 12u, 12u, 9u, 66u, 158u, 71u,
140u, 44u, 48u, 37u, 10u, 113u, 30u, 48u, 160u, 192u, 148u, 41u, 164u,
120u, 194u, 67u, 2u, 80u, 166u, 17u, 227u, 8u, 12u, 9u, 66u, 150u,
71u, 140u, 28u, 48u, 37u, 10u, 81u, 30u, 48u, 96u, 192u, 148u, 41u,
36u, 120u, 193u, 67u, 2u, 80u, 164u, 17u, 227u, 4u, 12u, 9u, 178u,
168u, 100u, 120u, 192u, 195u, 2u, 80u, 162u, 17u, 227u, 2u, 12u, 9u,
66u, 140u, 71u, 140u, 4u, 48u, 37u, 10u, 41u, 30u, 48u, 0u, 192u,
155u, 41u, 138u, 71u, 139u, 124u, 48u, 37u, 10u, 33u, 30u, 45u, 192u,
192u, 40u, 96u, 200u, 77u, 148u, 146u, 36u, 120u, 182u, 195u, 2u, 80u,
171u, 145u, 226u, 216u, 12u, 20u, 40u, 97u, 242u, 133u, 16u, 208u,
162u, 135u, 122u, 20u, 67u, 66u, 143u, 66u, 145u, 66u, 147u, 66u,
149u, 66u, 151u, 66u, 153u, 66u, 155u, 66u, 157u, 66u, 159u, 66u,
161u, 66u, 163u, 66u, 165u, 66u, 166u, 72u, 241u, 107u, 134u, 4u,
161u, 83u, 35u, 197u, 172u, 24u, 18u, 133u, 72u, 143u, 22u, 168u, 96u,
74u, 21u, 18u, 60u, 90u, 129u, 129u, 40u, 84u, 8u, 241u, 105u, 134u,
4u, 161u, 79u, 35u, 197u, 164u, 24u, 18u, 133u, 56u, 143u, 22u, 136u,
96u, 74u, 20u, 210u, 60u, 90u, 1u, 129u, 40u, 83u, 8u, 241u, 103u,
134u, 4u, 161u, 75u, 35u, 197u, 156u, 24u, 18u, 133u, 40u, 143u, 22u,
104u, 96u, 74u, 20u, 146u, 60u, 89u, 129u, 129u, 40u, 82u, 8u, 241u,
101u, 134u, 4u, 161u, 71u, 35u, 197u, 148u, 24u, 19u, 104u, 33u, 8u,
241u, 100u, 134u, 4u, 161u, 68u, 35u, 197u, 144u, 24u, 18u, 133u, 20u,
143u, 22u, 56u, 96u, 77u, 160u, 22u, 35u, 197u, 140u, 24u, 18u, 133u,
16u, 143u, 22u, 24u, 96u, 20u, 48u, 132u, 38u, 208u, 1u, 146u, 60u,
88u, 65u, 129u, 40u, 85u, 200u, 241u, 79u, 134u, 10u, 20u, 48u, 249u,
66u, 136u, 67u, 189u, 10u, 33u, 161u, 70u, 161u, 71u, 161u, 72u, 161u,
73u, 161u, 74u, 161u, 75u, 161u, 76u, 161u, 77u, 161u, 78u, 161u, 79u,
161u, 80u, 161u, 81u, 161u, 82u, 161u, 83u, 36u, 120u, 167u, 131u, 2u,
80u, 169u, 145u, 226u, 157u, 12u, 9u, 66u, 164u, 71u, 138u, 112u, 48u,
37u, 10u, 137u, 30u, 41u, 176u, 192u, 148u, 42u, 4u, 120u, 166u, 131u,
2u, 80u, 167u, 145u, 226u, 153u, 12u, 9u, 66u, 156u, 71u, 138u, 96u,
48u, 37u, 10u, 105u, 30u, 41u, 112u, 192u, 148u, 41u, 132u, 120u,
165u, 131u, 2u, 80u, 165u, 145u, 226u, 149u, 12u, 9u, 66u, 148u, 71u,
138u, 80u, 48u, 37u, 10u, 73u, 30u, 41u, 48u, 192u, 148u, 41u, 4u,
120u, 164u, 131u, 2u, 80u, 163u, 145u, 226u, 145u, 12u, 9u, 66u, 140u,
71u, 138u, 64u, 48u, 38u, 213u, 226u, 145u, 226u, 143u, 12u, 9u, 66u,
136u, 71u, 138u, 56u, 48u, 38u, 213u, 195u, 145u, 226u, 141u, 12u, 9u,
66u, 136u, 71u, 138u, 40u, 48u, 10u, 24u, 82u, 19u, 106u, 213u, 9u,
30u, 40u, 144u, 192u, 148u, 42u, 228u, 120u, 162u, 3u, 5u, 12u, 48u,
161u, 135u, 13u, 20u, 40u, 132u, 132u, 219u, 89u, 144u, 155u, 84u,
144u, 19u, 103u, 181u, 194u, 108u, 156u, 48u, 77u, 136u, 21u, 9u,
175u, 152u, 129u, 53u, 197u, 76u, 38u, 179u, 1u, 4u, 213u, 169u, 16u,
154u, 158u, 128u, 19u, 80u, 243u, 194u, 105u, 194u, 240u, 77u, 45u,
13u, 9u, 164u, 51u, 129u, 52u, 89u, 44u, 52u, 135u, 160u, 154u, 19u,
178u, 19u, 2u, 34u, 73u, 30u, 40u, 96u, 192u, 155u, 109u, 176u, 71u,
138u, 20u, 48u, 38u, 219u, 133u, 145u, 226u, 132u, 12u, 9u, 66u, 136u,
71u, 138u, 8u, 48u, 38u, 219u, 108u, 17u, 226u, 95u, 12u, 12u, 244u,
49u, 20u, 40u, 132u, 143u, 18u, 240u, 96u, 74u, 20u, 66u, 60u, 75u,
65u, 129u, 172u, 53u, 80u, 162u, 18u, 71u, 137u, 100u, 48u, 38u, 223u,
32u, 145u, 226u, 88u, 12u, 9u, 66u, 136u, 71u, 137u, 84u, 48u, 68u,
148u, 49u, 52u, 48u, 162u, 134u, 42u, 134u, 46u, 134u, 48u, 208u,
194u, 10u, 24u, 170u, 24u, 218u, 24u, 227u, 67u, 6u, 40u, 98u, 168u,
99u, 232u, 100u, 13u, 12u, 16u, 161u, 138u, 161u, 145u, 161u, 146u,
52u, 48u, 34u, 134u, 42u, 134u, 78u, 134u, 80u, 208u, 192u, 10u, 24u,
170u, 25u, 90u, 25u, 99u, 66u, 189u, 67u, 47u, 66u, 191u, 67u, 49u,
66u, 187u, 67u, 50u, 72u, 241u, 42u, 6u, 4u, 161u, 153u, 35u, 196u,
162u, 24u, 18u, 134u, 96u, 143u, 18u, 112u, 96u, 74u, 25u, 114u, 60u,
73u, 65u, 129u, 40u, 101u, 136u, 241u, 35u, 134u, 4u, 161u, 149u, 35u,
196u, 138u, 24u, 25u, 69u, 12u, 213u, 12u, 217u, 158u, 104u, 102u,
201u, 30u, 36u, 48u, 192u, 155u, 140u, 154u, 71u, 137u, 8u, 48u, 37u,
12u, 177u, 30u, 36u, 0u, 192u, 155u, 140u, 154u, 71u, 136u, 112u, 48u,
37u, 12u, 161u, 30u, 33u, 144u, 192u, 148u, 50u, 100u, 120u, 133u,
195u, 2u, 110u, 50u, 17u, 30u, 33u, 80u, 192u, 155u, 140u, 154u, 71u,
136u, 80u, 48u, 37u, 12u, 161u, 30u, 33u, 32u, 192u, 155u, 140u, 154u,
71u, 136u, 56u, 48u, 37u, 12u, 145u, 30u, 32u, 176u, 192u, 148u, 50u,
36u, 120u, 130u, 67u, 2u, 110u, 50u, 17u, 30u, 32u, 112u, 192u, 155u,
140u, 154u, 71u, 136u, 24u, 48u, 37u, 12u, 145u, 30u, 32u, 64u, 192u,
155u, 140u, 154u, 71u, 136u, 0u, 48u, 37u, 12u, 129u, 30u, 29u, 208u,
192u, 148u, 49u, 228u, 120u, 118u, 195u, 2u, 110u, 50u, 17u, 30u, 29u,
144u, 192u, 155u, 140u, 154u, 71u, 135u, 96u, 48u, 37u, 12u, 129u,
30u, 29u, 96u, 192u, 155u, 140u, 154u, 71u, 135u, 72u, 48u, 37u, 12u,
113u, 30u, 28u, 240u, 192u, 148u, 49u, 164u, 120u, 115u, 67u, 2u,
110u, 50u, 17u, 30u, 28u, 176u, 192u, 155u, 140u, 154u, 71u, 135u,
40u, 48u, 37u, 12u, 113u, 30u, 28u, 128u, 192u, 155u, 140u, 154u, 71u,
135u, 16u, 48u, 37u, 12u, 97u, 30u, 28u, 16u, 192u, 148u, 49u, 100u,
120u, 103u, 195u, 2u, 110u, 50u, 17u, 30u, 25u, 208u, 192u, 155u,
140u, 154u, 71u, 134u, 112u, 48u, 37u, 12u, 97u, 30u, 25u, 160u, 192u,
155u, 140u, 154u, 71u, 134u, 88u, 48u, 37u, 12u, 73u, 30u, 25u, 64u,
192u, 148u, 42u, 100u, 120u, 99u, 195u, 3u, 40u, 161u, 154u, 161u,
83u, 52u, 32u, 148u, 42u, 100u, 143u, 12u, 104u, 96u, 77u, 214u, 128u,
35u, 195u, 24u, 24u, 18u, 133u, 76u, 143u, 12u, 80u, 96u, 77u, 214u,
128u, 35u, 195u, 16u, 24u, 18u, 133u, 72u, 143u, 12u, 24u, 96u, 101u,
20u, 51u, 84u, 42u, 70u, 132u, 18u, 133u, 72u, 145u, 225u, 129u, 12u,
9u, 187u, 34u, 100u, 120u, 96u, 3u, 2u, 80u, 169u, 17u, 225u, 94u,
12u, 9u, 187u, 34u, 100u, 120u, 87u, 3u, 2u, 80u, 168u, 145u, 225u,
87u, 12u, 12u, 162u, 134u, 106u, 133u, 68u, 208u, 130u, 80u, 168u,
146u, 60u, 42u, 161u, 129u, 55u, 111u, 24u, 143u, 10u, 160u, 96u, 74u,
21u, 18u, 60u, 42u, 65u, 129u, 55u, 111u, 24u, 143u, 10u, 128u, 96u,
74u, 21u, 2u, 60u, 41u, 97u, 129u, 148u, 80u, 205u, 80u, 168u, 26u,
16u, 74u, 21u, 2u, 71u, 133u, 36u, 48u, 38u, 239u, 44u, 145u, 225u,
72u, 12u, 9u, 66u, 160u, 71u, 133u, 24u, 48u, 38u, 239u, 44u, 145u,
225u, 68u, 12u, 9u, 66u, 158u, 71u, 132u, 124u, 48u, 50u, 138u, 25u,
170u, 20u, 243u, 66u, 9u, 66u, 158u, 72u, 240u, 142u, 134u, 4u, 222u,
16u, 194u, 60u, 35u, 129u, 129u, 40u, 83u, 200u, 240u, 141u, 6u, 4u,
222u, 16u, 194u, 60u, 35u, 1u, 129u, 40u, 83u, 136u, 240u, 137u, 134u,
6u, 81u, 67u, 53u, 66u, 156u, 104u, 65u, 40u, 83u, 137u, 30u, 17u,
16u, 192u, 155u, 199u, 62u, 71u, 132u, 64u, 48u, 37u, 10u, 113u, 30u,
16u, 224u, 192u, 155u, 199u, 62u, 71u, 132u, 48u, 48u, 37u, 10u, 105u,
30u, 16u, 112u, 192u, 202u, 40u, 102u, 168u, 83u, 77u, 8u, 37u, 10u,
105u, 35u, 194u, 10u, 24u, 19u, 121u, 148u, 136u, 240u, 130u, 6u, 4u,
161u, 77u, 35u, 194u, 4u, 24u, 19u, 121u, 148u, 136u, 240u, 128u, 6u,
4u, 161u, 76u, 35u, 189u, 134u, 6u, 81u, 67u, 53u, 66u, 152u, 104u,
65u, 40u, 83u, 9u, 29u, 228u, 48u, 38u, 244u, 111u, 145u, 222u, 3u,
2u, 80u, 166u, 17u, 221u, 131u, 2u, 111u, 70u, 249u, 29u, 208u, 48u,
37u, 10u, 89u, 29u, 188u, 48u, 50u, 138u, 25u, 170u, 20u, 179u, 66u,
9u, 66u, 150u, 72u, 237u, 161u, 129u, 55u, 173u, 80u, 142u, 216u, 24u,
18u, 133u, 44u, 142u, 212u, 24u, 19u, 122u, 213u, 8u, 237u, 1u, 129u,
40u, 82u, 136u, 236u, 97u, 129u, 148u, 80u, 205u, 80u, 165u, 26u, 16u,
74u, 20u, 162u, 71u, 97u, 12u, 9u, 189u, 185u, 36u, 118u, 0u, 192u,
148u, 41u, 68u, 117u, 224u, 192u, 155u, 219u, 146u, 71u, 92u, 12u, 9u,
66u, 146u, 71u, 87u, 12u, 12u, 162u, 134u, 106u, 133u, 36u, 208u,
130u, 80u, 164u, 146u, 58u, 168u, 96u, 77u, 240u, 30u, 35u, 170u, 6u,
4u, 161u, 73u, 35u, 169u, 6u, 4u, 223u, 1u, 226u, 58u, 128u, 96u, 74u,
20u, 130u, 58u, 88u, 96u, 101u, 20u, 51u, 84u, 41u, 6u, 132u, 18u,
133u, 32u, 145u, 210u, 67u, 2u, 111u, 148u, 153u, 29u, 32u, 48u, 37u,
10u, 65u, 29u, 24u, 48u, 38u, 249u, 73u, 145u, 209u, 3u, 2u, 80u,
163u, 145u, 207u, 195u, 3u, 40u, 161u, 154u, 161u, 71u, 52u, 32u,
148u, 40u, 228u, 142u, 122u, 24u, 19u, 125u, 66u, 8u, 231u, 129u,
129u, 40u, 81u, 200u, 231u, 65u, 129u, 55u, 212u, 32u, 142u, 112u,
24u, 18u, 133u, 24u, 142u, 102u, 24u, 25u, 69u, 12u, 213u, 10u, 49u,
161u, 4u, 161u, 70u, 36u, 115u, 16u, 192u, 155u, 238u, 186u, 71u, 48u,
12u, 9u, 66u, 140u, 71u, 46u, 12u, 9u, 190u, 235u, 164u, 114u, 192u,
192u, 148u, 40u, 164u, 114u, 112u, 192u, 202u, 40u, 102u, 168u, 81u,
77u, 8u, 37u, 10u, 41u, 35u, 146u, 134u, 4u, 223u, 157u, 34u, 57u,
32u, 96u, 74u, 20u, 82u, 57u, 16u, 96u, 77u, 249u, 210u, 35u, 144u,
6u, 6u, 186u, 20u, 66u, 71u, 31u, 12u, 9u, 66u, 136u, 71u, 0u, 12u,
9u, 67u, 56u, 67u, 16u, 96u, 99u, 20u, 51u, 180u, 49u, 116u, 49u,
180u, 49u, 244u, 50u, 52u, 50u, 116u, 50u, 180u, 51u, 20u, 50u, 244u,
51u, 52u, 49u, 148u, 49u, 212u, 50u, 20u, 50u, 84u, 50u, 148u, 50u,
196u, 51u, 10u, 24u, 169u, 230u, 134u, 108u, 132u, 220u, 100u, 34u,
19u, 111u, 228u, 73u, 32u,};
static unsigned char uvector__00050[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 67u, 61u, 67u, 59u, 67u, 23u, 67u, 27u,
67u, 31u, 67u, 35u, 67u, 39u, 67u, 43u, 67u, 49u, 67u, 47u, 67u, 51u,
67u, 25u, 67u, 29u, 67u, 33u, 67u, 37u, 67u, 41u, 67u, 44u, 67u, 48u,
161u, 138u, 158u, 104u, 102u, 200u, 101u, 20u, 51u, 84u, 51u, 102u,
121u, 161u, 155u, 36u, 68u, 148u, 49u, 52u, 48u, 162u, 134u, 42u,
134u, 46u, 134u, 48u, 208u, 194u, 10u, 24u, 170u, 24u, 218u, 24u,
227u, 67u, 6u, 40u, 98u, 168u, 99u, 232u, 100u, 13u, 12u, 16u, 161u,
138u, 161u, 145u, 161u, 146u, 52u, 48u, 34u, 134u, 42u, 134u, 78u,
134u, 80u, 208u, 192u, 10u, 24u, 170u, 25u, 90u, 25u, 99u, 66u, 189u,
67u, 47u, 66u, 191u, 67u, 49u, 66u, 187u, 67u, 50u, 73u, 28u, 36u,
48u, 49u, 132u, 192u, 221u, 49u, 58u, 35u, 131u, 134u, 4u, 192u, 112u,
142u, 4u, 24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00051[] = {
 0u, 3u, 206u, 48u, 24u, 40u, 103u, 195u, 229u, 14u, 1u, 161u, 193u,
161u, 194u, 161u, 195u, 161u, 196u, 161u, 197u, 161u, 198u, 161u,
199u, 161u, 200u, 161u, 201u, 161u, 202u, 161u, 203u, 161u, 204u,
161u, 205u, 161u, 206u, 161u, 207u, 36u, 121u, 197u, 195u, 2u, 80u,
231u, 145u, 231u, 22u, 12u, 9u, 67u, 156u, 71u, 156u, 84u, 48u, 37u,
14u, 105u, 30u, 113u, 64u, 192u, 148u, 57u, 132u, 121u, 196u, 195u,
2u, 80u, 229u, 145u, 231u, 18u, 12u, 9u, 67u, 148u, 71u, 156u, 68u,
48u, 37u, 14u, 73u, 30u, 113u, 0u, 192u, 148u, 57u, 4u, 121u, 195u,
195u, 2u, 80u, 227u, 145u, 231u, 14u, 12u, 9u, 67u, 140u, 71u, 156u,
52u, 48u, 37u, 14u, 41u, 30u, 112u, 192u, 192u, 148u, 56u, 132u, 121u,
194u, 195u, 2u, 80u, 225u, 145u, 231u, 10u, 12u, 9u, 67u, 132u, 71u,
156u, 36u, 48u, 37u, 14u, 9u, 30u, 112u, 128u, 192u, 152u, 26u, 145u,
231u, 7u, 12u, 9u, 67u, 128u, 71u, 156u, 20u, 48u, 80u, 170u, 80u,
170u, 134u, 138u, 28u, 2u, 72u, 243u, 130u, 6u, 4u, 208u, 161u, 194u,
60u, 224u, 97u, 129u, 40u, 112u, 8u, 243u, 111u, 134u, 4u, 208u, 157u,
146u, 60u, 219u, 129u, 130u, 134u, 124u, 62u, 80u, 224u, 26u, 28u,
26u, 28u, 42u, 28u, 58u, 28u, 74u, 28u, 90u, 28u, 106u, 28u, 122u,
28u, 138u, 28u, 154u, 28u, 170u, 28u, 186u, 28u, 202u, 28u, 218u, 28u,
224u, 239u, 67u, 128u, 73u, 30u, 109u, 176u, 192u, 154u, 28u, 46u,
71u, 155u, 104u, 48u, 37u, 14u, 1u, 30u, 109u, 144u, 192u, 148u, 57u,
196u, 121u, 182u, 3u, 2u, 80u, 230u, 145u, 230u, 215u, 12u, 9u, 67u,
152u, 71u, 155u, 88u, 48u, 37u, 14u, 89u, 30u, 109u, 80u, 192u, 148u,
57u, 68u, 121u, 181u, 3u, 2u, 80u, 228u, 145u, 230u, 211u, 12u, 9u,
67u, 144u, 71u, 155u, 72u, 48u, 37u, 14u, 57u, 30u, 109u, 16u, 192u,
148u, 56u, 196u, 121u, 180u, 3u, 2u, 80u, 226u, 145u, 230u, 207u, 12u,
9u, 67u, 136u, 71u, 155u, 56u, 48u, 37u, 14u, 25u, 30u, 108u, 208u,
192u, 148u, 56u, 68u, 121u, 179u, 3u, 2u, 80u, 224u, 145u, 230u, 203u,
12u, 9u, 161u, 131u, 36u, 121u, 178u, 131u, 2u, 80u, 224u, 17u, 230u,
199u, 12u, 2u, 133u, 88u, 132u, 208u, 192u, 98u, 71u, 155u, 24u, 48u,
37u, 10u, 185u, 30u, 108u, 48u, 193u, 67u, 62u, 31u, 40u, 112u, 13u,
14u, 13u, 14u, 21u, 14u, 29u, 14u, 37u, 14u, 45u, 14u, 53u, 14u, 61u,
14u, 69u, 14u, 77u, 14u, 85u, 14u, 93u, 14u, 101u, 14u, 104u, 119u,
161u, 192u, 52u, 57u, 228u, 143u, 54u, 16u, 96u, 74u, 28u, 242u, 60u,
216u, 33u, 129u, 52u, 101u, 96u, 143u, 54u, 0u, 96u, 74u, 28u, 2u,
60u, 211u, 225u, 129u, 40u, 115u, 72u, 243u, 79u, 6u, 4u, 161u, 204u,
35u, 205u, 58u, 24u, 18u, 135u, 44u, 143u, 52u, 224u, 96u, 74u, 28u,
162u, 60u, 211u, 97u, 129u, 40u, 114u, 72u, 243u, 77u, 6u, 4u, 161u,
200u, 35u, 205u, 50u, 24u, 18u, 135u, 28u, 143u, 52u, 192u, 96u, 74u,
28u, 98u, 60u, 210u, 225u, 129u, 40u, 113u, 72u, 243u, 75u, 6u, 4u,
161u, 196u, 35u, 205u, 42u, 24u, 18u, 135u, 12u, 143u, 52u, 160u, 96u,
74u, 28u, 34u, 60u, 210u, 97u, 129u, 40u, 112u, 72u, 243u, 73u, 6u,
4u, 209u, 120u, 162u, 60u, 210u, 33u, 129u, 40u, 112u, 8u, 243u, 71u,
6u, 1u, 66u, 176u, 66u, 104u, 186u, 185u, 35u, 205u, 26u, 24u, 18u,
133u, 92u, 143u, 52u, 80u, 96u, 161u, 159u, 15u, 148u, 56u, 6u, 135u,
6u, 135u, 10u, 135u, 14u, 135u, 18u, 135u, 22u, 135u, 26u, 135u, 30u,
135u, 34u, 135u, 38u, 135u, 42u, 135u, 46u, 135u, 48u, 59u, 208u,
224u, 26u, 28u, 234u, 28u, 242u, 71u, 154u, 36u, 48u, 37u, 14u, 121u,
30u, 104u, 128u, 192u, 148u, 57u, 196u, 121u, 161u, 195u, 2u, 105u,
36u, 201u, 30u, 104u, 96u, 192u, 148u, 56u, 4u, 121u, 161u, 67u, 2u,
80u, 230u, 17u, 230u, 132u, 12u, 9u, 67u, 150u, 71u, 154u, 12u, 48u,
37u, 14u, 81u, 30u, 104u, 32u, 192u, 148u, 57u, 36u, 121u, 160u, 67u,
2u, 80u, 228u, 17u, 230u, 128u, 12u, 9u, 67u, 142u, 71u, 153u, 124u,
48u, 37u, 14u, 49u, 30u, 101u, 224u, 192u, 148u, 56u, 164u, 121u,
151u, 67u, 2u, 80u, 226u, 17u, 230u, 92u, 12u, 9u, 67u, 134u, 71u,
153u, 108u, 48u, 37u, 14u, 17u, 30u, 101u, 160u, 192u, 148u, 56u, 36u,
121u, 150u, 67u, 2u, 105u, 22u, 217u, 30u, 101u, 128u, 192u, 148u,
56u, 4u, 121u, 149u, 67u, 0u, 161u, 89u, 33u, 52u, 139u, 32u, 145u,
230u, 84u, 12u, 9u, 66u, 174u, 71u, 153u, 68u, 48u, 80u, 207u, 135u,
202u, 28u, 3u, 67u, 131u, 67u, 133u, 67u, 135u, 67u, 137u, 67u, 139u,
67u, 141u, 67u, 143u, 67u, 145u, 67u, 147u, 67u, 149u, 67u, 150u, 29u,
232u, 112u, 13u, 14u, 109u, 14u, 117u, 14u, 121u, 35u, 204u, 160u,
24u, 18u, 135u, 60u, 143u, 50u, 120u, 96u, 74u, 28u, 226u, 60u, 201u,
193u, 129u, 40u, 115u, 72u, 243u, 38u, 134u, 4u, 210u, 253u, 162u,
60u, 201u, 129u, 129u, 40u, 112u, 8u, 243u, 37u, 134u, 4u, 161u, 203u,
35u, 204u, 148u, 24u, 18u, 135u, 40u, 143u, 50u, 72u, 96u, 74u, 28u,
146u, 60u, 201u, 1u, 129u, 40u, 114u, 8u, 243u, 35u, 134u, 4u, 161u,
199u, 35u, 204u, 140u, 24u, 18u, 135u, 24u, 143u, 50u, 40u, 96u, 74u,
28u, 82u, 60u, 200u, 129u, 129u, 40u, 113u, 8u, 243u, 33u, 134u, 4u,
161u, 195u, 35u, 204u, 132u, 24u, 18u, 135u, 8u, 143u, 50u, 8u, 96u,
74u, 28u, 18u, 60u, 200u, 1u, 129u, 52u, 185u, 48u, 143u, 48u, 248u,
96u, 74u, 28u, 2u, 60u, 195u, 129u, 128u, 80u, 173u, 16u, 154u, 92u,
50u, 72u, 243u, 13u, 134u, 4u, 161u, 87u, 35u, 204u, 48u, 24u, 40u,
103u, 195u, 229u, 14u, 1u, 161u, 193u, 161u, 194u, 161u, 195u, 161u,
196u, 161u, 197u, 161u, 198u, 161u, 199u, 161u, 200u, 161u, 201u,
161u, 202u, 14u, 244u, 56u, 6u, 135u, 50u, 135u, 54u, 135u, 58u, 135u,
60u, 145u, 230u, 23u, 12u, 9u, 67u, 158u, 71u, 152u, 88u, 48u, 37u,
14u, 113u, 30u, 97u, 80u, 192u, 148u, 57u, 164u, 121u, 133u, 3u, 2u,
80u, 230u, 17u, 230u, 19u, 12u, 9u, 167u, 99u, 100u, 121u, 132u, 131u,
2u, 80u, 224u, 17u, 230u, 17u, 12u, 9u, 67u, 148u, 71u, 152u, 64u,
48u, 37u, 14u, 73u, 30u, 96u, 240u, 192u, 148u, 57u, 4u, 121u, 131u,
131u, 2u, 80u, 227u, 145u, 230u, 13u, 12u, 9u, 67u, 140u, 71u, 152u,
48u, 48u, 37u, 14u, 41u, 30u, 96u, 176u, 192u, 148u, 56u, 132u, 121u,
130u, 131u, 2u, 80u, 225u, 145u, 230u, 9u, 12u, 9u, 67u, 132u, 71u,
152u, 32u, 48u, 37u, 14u, 9u, 30u, 96u, 112u, 192u, 154u, 115u, 58u,
71u, 152u, 24u, 48u, 37u, 14u, 1u, 30u, 96u, 48u, 192u, 40u, 86u,
200u, 77u, 57u, 138u, 36u, 121u, 128u, 131u, 2u, 80u, 171u, 145u,
229u, 223u, 12u, 20u, 51u, 225u, 242u, 135u, 0u, 208u, 224u, 208u,
225u, 80u, 225u, 208u, 226u, 80u, 226u, 208u, 227u, 80u, 227u, 208u,
228u, 80u, 228u, 135u, 122u, 28u, 3u, 67u, 151u, 67u, 153u, 67u, 155u,
67u, 157u, 67u, 158u, 72u, 242u, 239u, 6u, 4u, 161u, 207u, 35u, 203u,
186u, 24u, 18u, 135u, 56u, 143u, 46u, 224u, 96u, 74u, 28u, 210u, 60u,
187u, 97u, 129u, 40u, 115u, 8u, 242u, 237u, 6u, 4u, 161u, 203u, 35u,
203u, 178u, 24u, 19u, 81u, 151u, 8u, 242u, 236u, 6u, 4u, 161u, 192u,
35u, 203u, 174u, 24u, 18u, 135u, 36u, 143u, 46u, 176u, 96u, 74u, 28u,
130u, 60u, 186u, 161u, 129u, 40u, 113u, 200u, 242u, 234u, 6u, 4u,
161u, 198u, 35u, 203u, 166u, 24u, 18u, 135u, 20u, 143u, 46u, 144u,
96u, 74u, 28u, 66u, 60u, 186u, 33u, 129u, 40u, 112u, 200u, 242u, 232u,
6u, 4u, 161u, 194u, 35u, 203u, 158u, 24u, 18u, 135u, 4u, 143u, 46u,
112u, 96u, 77u, 69u, 14u, 35u, 203u, 154u, 24u, 18u, 135u, 0u, 143u,
46u, 80u, 96u, 20u, 43u, 132u, 38u, 162u, 109u, 146u, 60u, 185u, 33u,
129u, 40u, 85u, 200u, 242u, 227u, 6u, 10u, 25u, 240u, 249u, 67u, 128u,
104u, 112u, 104u, 112u, 168u, 112u, 232u, 113u, 40u, 113u, 104u, 113u,
168u, 113u, 232u, 114u, 3u, 189u, 14u, 1u, 161u, 202u, 161u, 203u,
161u, 204u, 161u, 205u, 161u, 206u, 161u, 207u, 36u, 121u, 113u, 67u,
2u, 80u, 231u, 145u, 229u, 196u, 12u, 9u, 67u, 156u, 71u, 151u, 12u,
48u, 37u, 14u, 105u, 30u, 92u, 32u, 192u, 148u, 57u, 132u, 121u, 112u,
67u, 2u, 80u, 229u, 145u, 229u, 192u, 12u, 9u, 67u, 148u, 71u, 150u,
124u, 48u, 38u, 168u, 206u, 145u, 229u, 158u, 12u, 9u, 67u, 128u, 71u,
150u, 116u, 48u, 37u, 14u, 65u, 30u, 89u, 192u, 192u, 148u, 56u, 228u,
121u, 102u, 195u, 2u, 80u, 227u, 17u, 229u, 154u, 12u, 9u, 67u, 138u,
71u, 150u, 100u, 48u, 37u, 14u, 33u, 30u, 89u, 128u, 192u, 148u, 56u,
100u, 121u, 101u, 195u, 2u, 80u, 225u, 17u, 229u, 150u, 12u, 9u, 67u,
130u, 71u, 150u, 84u, 48u, 38u, 168u, 47u, 145u, 229u, 148u, 12u, 9u,
67u, 128u, 71u, 150u, 68u, 48u, 10u, 21u, 210u, 19u, 84u, 19u, 9u,
30u, 89u, 0u, 192u, 148u, 42u, 228u, 121u, 99u, 67u, 5u, 12u, 248u,
124u, 161u, 192u, 52u, 56u, 52u, 56u, 84u, 56u, 116u, 56u, 148u, 56u,
180u, 56u, 212u, 56u, 225u, 222u, 135u, 0u, 208u, 228u, 208u, 229u,
80u, 229u, 208u, 230u, 80u, 230u, 208u, 231u, 80u, 231u, 146u, 60u,
177u, 129u, 129u, 40u, 115u, 200u, 242u, 197u, 134u, 4u, 161u, 206u,
35u, 203u, 20u, 24u, 18u, 135u, 52u, 143u, 44u, 72u, 96u, 74u, 28u,
194u, 60u, 177u, 1u, 129u, 40u, 114u, 200u, 242u, 195u, 134u, 4u,
161u, 202u, 35u, 203u, 12u, 24u, 18u, 135u, 36u, 143u, 44u, 40u, 96u,
77u, 92u, 222u, 35u, 203u, 8u, 24u, 18u, 135u, 0u, 143u, 44u, 24u,
96u, 74u, 28u, 114u, 60u, 176u, 65u, 129u, 40u, 113u, 136u, 242u,
192u, 134u, 4u, 161u, 197u, 35u, 203u, 0u, 24u, 18u, 135u, 16u, 143u,
42u, 248u, 96u, 74u, 28u, 50u, 60u, 171u, 193u, 129u, 40u, 112u, 136u,
242u, 174u, 134u, 4u, 161u, 193u, 35u, 202u, 184u, 24u, 19u, 86u,
244u, 8u, 242u, 173u, 134u, 4u, 161u, 192u, 35u, 202u, 176u, 24u, 5u,
10u, 241u, 9u, 171u, 115u, 164u, 143u, 42u, 184u, 96u, 74u, 21u, 114u,
60u, 170u, 129u, 130u, 134u, 124u, 62u, 80u, 224u, 26u, 28u, 26u, 28u,
42u, 28u, 58u, 28u, 74u, 28u, 90u, 28u, 96u, 239u, 67u, 128u, 104u,
114u, 40u, 114u, 104u, 114u, 168u, 114u, 232u, 115u, 40u, 115u, 104u,
115u, 168u, 115u, 201u, 30u, 85u, 48u, 192u, 148u, 57u, 228u, 121u,
84u, 131u, 2u, 80u, 231u, 17u, 229u, 81u, 12u, 9u, 67u, 154u, 71u,
149u, 64u, 48u, 37u, 14u, 97u, 30u, 84u, 240u, 192u, 148u, 57u, 100u,
121u, 83u, 131u, 2u, 80u, 229u, 17u, 229u, 77u, 12u, 9u, 67u, 146u,
71u, 149u, 48u, 48u, 37u, 14u, 65u, 30u, 84u, 176u, 192u, 154u, 208u,
62u, 71u, 149u, 40u, 48u, 37u, 14u, 1u, 30u, 84u, 144u, 192u, 148u,
56u, 196u, 121u, 82u, 3u, 2u, 80u, 226u, 145u, 229u, 71u, 12u, 9u,
67u, 136u, 71u, 149u, 24u, 48u, 37u, 14u, 25u, 30u, 84u, 80u, 192u,
148u, 56u, 68u, 121u, 81u, 3u, 2u, 80u, 224u, 145u, 229u, 67u, 12u,
9u, 172u, 232u, 36u, 121u, 80u, 131u, 2u, 80u, 224u, 17u, 229u, 31u,
12u, 2u, 133u, 124u, 132u, 214u, 112u, 226u, 71u, 148u, 120u, 48u,
37u, 10u, 185u, 30u, 81u, 176u, 193u, 67u, 62u, 31u, 40u, 112u, 13u,
14u, 13u, 14u, 21u, 14u, 29u, 14u, 37u, 14u, 40u, 119u, 161u, 192u,
52u, 56u, 244u, 57u, 20u, 57u, 52u, 57u, 84u, 57u, 116u, 57u, 148u,
57u, 180u, 57u, 212u, 57u, 228u, 143u, 40u, 208u, 96u, 74u, 28u, 242u,
60u, 163u, 33u, 129u, 40u, 115u, 136u, 242u, 140u, 6u, 4u, 161u, 205u,
35u, 202u, 46u, 24u, 18u, 135u, 48u, 143u, 40u, 176u, 96u, 74u, 28u,
178u, 60u, 162u, 161u, 129u, 40u, 114u, 136u, 242u, 138u, 6u, 4u,
161u, 201u, 35u, 202u, 38u, 24u, 18u, 135u, 32u, 143u, 40u, 144u, 96u,
74u, 28u, 114u, 60u, 162u, 33u, 129u, 53u, 206u, 0u, 143u, 40u, 128u,
96u, 74u, 28u, 2u, 60u, 161u, 225u, 129u, 40u, 113u, 72u, 242u, 135u,
6u, 4u, 161u, 196u, 35u, 202u, 26u, 24u, 18u, 135u, 12u, 143u, 40u,
96u, 96u, 74u, 28u, 34u, 60u, 161u, 97u, 129u, 40u, 112u, 72u, 242u,
133u, 6u, 4u, 215u, 41u, 34u, 60u, 161u, 33u, 129u, 40u, 112u, 8u,
242u, 131u, 6u, 1u, 67u, 0u, 66u, 107u, 146u, 249u, 35u, 202u, 10u,
24u, 18u, 133u, 92u, 143u, 40u, 16u, 96u, 161u, 159u, 15u, 148u, 56u,
6u, 135u, 6u, 135u, 10u, 135u, 14u, 135u, 16u, 59u, 208u, 224u, 26u,
28u, 106u, 28u, 122u, 28u, 138u, 28u, 154u, 28u, 170u, 28u, 186u, 28u,
202u, 28u, 218u, 28u, 234u, 28u, 242u, 71u, 148u, 4u, 48u, 37u, 14u,
121u, 30u, 80u, 0u, 192u, 148u, 57u, 196u, 121u, 55u, 195u, 2u, 80u,
230u, 145u, 228u, 222u, 12u, 9u, 67u, 152u, 71u, 147u, 116u, 48u, 37u,
14u, 89u, 30u, 77u, 192u, 192u, 148u, 57u, 68u, 121u, 54u, 195u, 2u,
80u, 228u, 145u, 228u, 218u, 12u, 9u, 67u, 144u, 71u, 147u, 100u, 48u,
37u, 14u, 57u, 30u, 77u, 128u, 192u, 148u, 56u, 196u, 121u, 53u, 195u,
2u, 107u, 246u, 9u, 30u, 77u, 96u, 192u, 148u, 56u, 4u, 121u, 53u,
67u, 2u, 80u, 226u, 17u, 228u, 212u, 12u, 9u, 67u, 134u, 71u, 147u,
76u, 48u, 37u, 14u, 17u, 30u, 77u, 32u, 192u, 148u, 56u, 36u, 121u,
52u, 67u, 2u, 107u, 240u, 25u, 30u, 77u, 0u, 192u, 148u, 56u, 4u,
121u, 51u, 67u, 0u, 161u, 129u, 33u, 53u, 247u, 64u, 145u, 228u, 204u,
12u, 9u, 66u, 174u, 71u, 147u, 36u, 48u, 80u, 207u, 135u, 202u, 28u,
3u, 67u, 131u, 67u, 133u, 67u, 134u, 29u, 232u, 112u, 13u, 14u, 45u,
14u, 53u, 14u, 61u, 14u, 69u, 14u, 77u, 14u, 85u, 14u, 93u, 14u, 101u,
14u, 109u, 14u, 117u, 14u, 121u, 35u, 201u, 144u, 24u, 18u, 135u, 60u,
143u, 38u, 56u, 96u, 74u, 28u, 226u, 60u, 152u, 193u, 129u, 40u, 115u,
72u, 242u, 98u, 134u, 4u, 161u, 204u, 35u, 201u, 136u, 24u, 18u, 135u,
44u, 143u, 38u, 24u, 96u, 74u, 28u, 162u, 60u, 152u, 65u, 129u, 40u,
114u, 72u, 242u, 96u, 134u, 4u, 161u, 200u, 35u, 201u, 128u, 24u, 18u,
135u, 28u, 143u, 36u, 248u, 96u, 74u, 28u, 98u, 60u, 147u, 193u, 129u,
40u, 113u, 72u, 242u, 78u, 134u, 4u, 216u, 160u, 34u, 60u, 147u, 129u,
129u, 40u, 112u, 8u, 242u, 77u, 134u, 4u, 161u, 195u, 35u, 201u, 52u,
24u, 18u, 135u, 8u, 143u, 36u, 200u, 96u, 74u, 28u, 18u, 60u, 147u,
1u, 129u, 54u, 37u, 80u, 143u, 36u, 184u, 96u, 74u, 28u, 2u, 60u,
146u, 129u, 128u, 80u, 193u, 16u, 155u, 18u, 130u, 72u, 242u, 73u,
134u, 4u, 161u, 87u, 35u, 201u, 32u, 24u, 40u, 103u, 195u, 229u, 14u,
1u, 161u, 193u, 161u, 194u, 14u, 244u, 56u, 6u, 135u, 18u, 135u, 22u,
135u, 26u, 135u, 30u, 135u, 34u, 135u, 38u, 135u, 42u, 135u, 46u,
135u, 50u, 135u, 54u, 135u, 58u, 135u, 60u, 145u, 228u, 143u, 12u, 9u,
67u, 158u, 71u, 146u, 56u, 48u, 37u, 14u, 113u, 30u, 72u, 208u, 192u,
148u, 57u, 164u, 121u, 35u, 3u, 2u, 80u, 230u, 17u, 228u, 139u, 12u,
9u, 67u, 150u, 71u, 146u, 40u, 48u, 37u, 14u, 81u, 30u, 72u, 144u,
192u, 148u, 57u, 36u, 121u, 34u, 3u, 2u, 80u, 228u, 17u, 228u, 135u,
12u, 9u, 67u, 142u, 71u, 146u, 24u, 48u, 37u, 14u, 49u, 30u, 72u, 80u,
192u, 148u, 56u, 164u, 121u, 33u, 3u, 2u, 80u, 226u, 17u, 228u, 131u,
12u, 9u, 178u, 168u, 100u, 121u, 32u, 131u, 2u, 80u, 224u, 17u, 228u,
129u, 12u, 9u, 67u, 132u, 71u, 146u, 0u, 48u, 37u, 14u, 9u, 30u, 69u,
240u, 192u, 155u, 41u, 138u, 71u, 145u, 120u, 48u, 37u, 14u, 1u, 30u,
69u, 176u, 192u, 40u, 96u, 200u, 77u, 148u, 146u, 36u, 121u, 22u,
131u, 2u, 80u, 171u, 145u, 228u, 87u, 12u, 20u, 51u, 225u, 242u, 135u,
0u, 208u, 224u, 135u, 122u, 28u, 3u, 67u, 135u, 67u, 137u, 67u, 139u,
67u, 141u, 67u, 143u, 67u, 145u, 67u, 147u, 67u, 149u, 67u, 151u, 67u,
153u, 67u, 155u, 67u, 157u, 67u, 158u, 72u, 242u, 43u, 6u, 4u, 161u,
207u, 35u, 200u, 170u, 24u, 18u, 135u, 56u, 143u, 34u, 160u, 96u, 74u,
28u, 210u, 60u, 138u, 97u, 129u, 40u, 115u, 8u, 242u, 41u, 6u, 4u,
161u, 203u, 35u, 200u, 162u, 24u, 18u, 135u, 40u, 143u, 34u, 128u,
96u, 74u, 28u, 146u, 60u, 137u, 225u, 129u, 40u, 114u, 8u, 242u, 39u,
6u, 4u, 161u, 199u, 35u, 200u, 154u, 24u, 18u, 135u, 24u, 143u, 34u,
96u, 96u, 74u, 28u, 82u, 60u, 137u, 97u, 129u, 40u, 113u, 8u, 242u,
37u, 6u, 4u, 161u, 195u, 35u, 200u, 146u, 24u, 19u, 104u, 33u, 8u,
242u, 36u, 6u, 4u, 161u, 192u, 35u, 200u, 142u, 24u, 18u, 135u, 4u,
143u, 34u, 48u, 96u, 77u, 160u, 22u, 35u, 200u, 138u, 24u, 18u, 135u,
0u, 143u, 34u, 16u, 96u, 20u, 48u, 132u, 38u, 208u, 1u, 146u, 60u,
136u, 33u, 129u, 40u, 85u, 200u, 242u, 15u, 6u, 10u, 25u, 240u, 249u,
67u, 128u, 67u, 189u, 14u, 1u, 161u, 194u, 161u, 195u, 161u, 196u,
161u, 197u, 161u, 198u, 161u, 199u, 161u, 200u, 161u, 201u, 161u,
202u, 161u, 203u, 161u, 204u, 161u, 205u, 161u, 206u, 161u, 207u, 36u,
121u, 7u, 67u, 2u, 80u, 231u, 145u, 228u, 28u, 12u, 9u, 67u, 156u,
71u, 144u, 108u, 48u, 37u, 14u, 105u, 30u, 65u, 160u, 192u, 148u, 57u,
132u, 121u, 6u, 67u, 2u, 80u, 229u, 145u, 228u, 24u, 12u, 9u, 67u,
148u, 71u, 144u, 92u, 48u, 37u, 14u, 73u, 30u, 65u, 96u, 192u, 148u,
57u, 4u, 121u, 5u, 67u, 2u, 80u, 227u, 145u, 228u, 20u, 12u, 9u, 67u,
140u, 71u, 144u, 76u, 48u, 37u, 14u, 41u, 30u, 65u, 32u, 192u, 148u,
56u, 132u, 121u, 4u, 67u, 2u, 80u, 225u, 145u, 228u, 16u, 12u, 9u,
67u, 132u, 71u, 144u, 60u, 48u, 38u, 213u, 226u, 145u, 228u, 14u, 12u,
9u, 67u, 128u, 71u, 144u, 52u, 48u, 38u, 213u, 195u, 145u, 228u, 12u,
12u, 9u, 67u, 128u, 71u, 144u, 36u, 48u, 10u, 24u, 82u, 19u, 106u,
213u, 9u, 30u, 64u, 128u, 192u, 148u, 42u, 228u, 121u, 1u, 195u, 5u,
12u, 48u, 161u, 135u, 13u, 20u, 56u, 4u, 132u, 219u, 89u, 144u, 155u,
84u, 144u, 19u, 103u, 181u, 194u, 108u, 156u, 48u, 77u, 136u, 21u, 9u,
175u, 152u, 129u, 53u, 197u, 76u, 38u, 179u, 1u, 4u, 213u, 169u, 16u,
154u, 158u, 128u, 19u, 80u, 243u, 194u, 105u, 194u, 240u, 77u, 45u,
13u, 9u, 164u, 51u, 129u, 52u, 89u, 44u, 52u, 135u, 160u, 154u, 19u,
178u, 19u, 2u, 34u, 73u, 30u, 64u, 80u, 192u, 155u, 109u, 176u, 71u,
144u, 16u, 48u, 38u, 219u, 133u, 145u, 228u, 3u, 12u, 9u, 67u, 128u,
71u, 144u, 4u, 48u, 38u, 219u, 108u, 17u, 227u, 222u, 12u, 12u, 244u,
49u, 20u, 56u, 4u, 143u, 30u, 232u, 96u, 74u, 28u, 2u, 60u, 123u, 33u,
129u, 172u, 53u, 80u, 224u, 18u, 71u, 143u, 96u, 48u, 38u, 223u, 32u,
145u, 227u, 215u, 12u, 9u, 67u, 128u, 71u, 142u, 112u, 48u, 68u, 148u,
49u, 52u, 48u, 180u, 49u, 116u, 48u, 148u, 49u, 180u, 48u, 116u, 49u,
244u, 48u, 84u, 50u, 52u, 48u, 52u, 50u, 116u, 48u, 20u, 50u, 180u,
43u, 244u, 51u, 20u, 43u, 212u, 50u, 244u, 43u, 180u, 51u, 36u, 143u,
28u, 216u, 96u, 74u, 25u, 146u, 60u, 115u, 1u, 129u, 40u, 101u, 200u,
241u, 202u, 134u, 4u, 161u, 152u, 35u, 199u, 36u, 24u, 18u, 134u, 84u,
143u, 28u, 120u, 96u, 74u, 25u, 50u, 60u, 113u, 129u, 129u, 40u, 100u,
72u, 241u, 196u, 134u, 4u, 161u, 143u, 35u, 199u, 12u, 24u, 18u, 134u,
52u, 143u, 28u, 24u, 96u, 74u, 24u, 178u, 60u, 107u, 225u, 129u, 40u,
98u, 72u, 241u, 175u, 6u, 4u, 161u, 208u, 35u, 198u, 184u, 24u, 37u,
42u, 25u, 145u, 67u, 163u, 67u, 160u, 24u, 104u, 102u, 73u, 36u, 120u,
214u, 131u, 2u, 110u, 56u, 249u, 30u, 53u, 144u, 192u, 148u, 58u, 4u,
120u, 214u, 3u, 2u, 80u, 204u, 145u, 227u, 86u, 12u, 18u, 149u, 12u,
184u, 161u, 209u, 161u, 208u, 12u, 52u, 50u, 228u, 146u, 60u, 106u,
129u, 129u, 55u, 38u, 32u, 143u, 26u, 152u, 96u, 74u, 29u, 2u, 60u,
106u, 65u, 129u, 40u, 101u, 200u, 241u, 168u, 6u, 9u, 74u, 134u, 96u,
80u, 232u, 208u, 232u, 6u, 26u, 25u, 130u, 73u, 30u, 52u, 224u, 192u,
155u, 151u, 162u, 71u, 141u, 52u, 48u, 37u, 14u, 129u, 30u, 52u, 192u,
192u, 148u, 51u, 4u, 120u, 210u, 131u, 4u, 165u, 67u, 42u, 40u, 116u,
104u, 116u, 3u, 13u, 12u, 169u, 36u, 143u, 26u, 64u, 96u, 77u, 206u,
26u, 35u, 198u, 142u, 24u, 18u, 135u, 64u, 143u, 26u, 48u, 96u, 74u,
25u, 82u, 60u, 104u, 129u, 130u, 82u, 161u, 147u, 20u, 58u, 52u, 58u,
1u, 134u, 134u, 76u, 146u, 71u, 141u, 8u, 48u, 38u, 232u, 65u, 145u,
227u, 65u, 12u, 9u, 67u, 160u, 71u, 141u, 0u, 48u, 37u, 12u, 153u,
30u, 49u, 224u, 193u, 41u, 80u, 200u, 138u, 29u, 26u, 29u, 0u, 195u,
67u, 34u, 73u, 35u, 198u, 56u, 24u, 19u, 116u, 179u, 8u, 241u, 141u,
134u, 4u, 161u, 208u, 35u, 198u, 52u, 24u, 18u, 134u, 68u, 143u, 24u,
192u, 96u, 148u, 168u, 99u, 197u, 14u, 141u, 14u, 128u, 97u, 161u,
143u, 36u, 145u, 227u, 22u, 12u, 9u, 186u, 162u, 164u, 120u, 197u,
67u, 2u, 80u, 232u, 17u, 227u, 20u, 12u, 9u, 67u, 30u, 71u, 140u, 72u,
48u, 74u, 84u, 49u, 162u, 135u, 70u, 135u, 64u, 48u, 208u, 198u, 146u,
72u, 241u, 136u, 6u, 4u, 221u, 117u, 226u, 60u, 97u, 225u, 129u, 40u,
116u, 8u, 241u, 135u, 6u, 4u, 161u, 141u, 35u, 198u, 24u, 24u, 37u,
42u, 24u, 177u, 67u, 163u, 67u, 160u, 24u, 104u, 98u, 201u, 36u, 120u,
194u, 131u, 2u, 110u, 206u, 57u, 30u, 48u, 144u, 192u, 148u, 58u, 4u,
120u, 194u, 3u, 2u, 80u, 197u, 145u, 227u, 7u, 12u, 12u, 128u, 80u,
197u, 138u, 29u, 42u, 24u, 186u, 24u, 194u, 69u, 12u, 104u, 161u,
210u, 161u, 141u, 161u, 142u, 36u, 80u, 199u, 138u, 29u, 42u, 24u,
250u, 25u, 2u, 69u, 12u, 136u, 161u, 210u, 161u, 145u, 161u, 146u,
36u, 80u, 201u, 138u, 29u, 42u, 25u, 58u, 25u, 66u, 69u, 12u, 168u,
161u, 210u, 161u, 149u, 161u, 150u, 36u, 80u, 204u, 10u, 29u, 42u,
25u, 130u, 69u, 12u, 184u, 161u, 210u, 161u, 151u, 36u, 80u, 204u,
138u, 29u, 42u, 25u, 146u, 72u, 101u, 14u, 1u, 55u, 102u, 40u, 38u,
235u, 160u, 132u, 221u, 77u, 128u, 155u, 165u, 30u, 19u, 116u, 17u,
130u, 110u, 110u, 232u, 77u, 203u, 148u, 9u, 185u, 41u, 97u, 55u, 28u,
8u, 208u, 232u, 4u, 219u, 249u, 18u, 72u, 241u, 131u, 6u, 4u, 161u,
153u, 35u, 198u, 4u, 24u, 40u, 116u, 104u, 116u, 3u, 13u, 12u, 201u,
36u, 120u, 192u, 67u, 2u, 80u, 232u, 17u, 226u, 223u, 12u, 12u, 162u,
134u, 106u, 134u, 100u, 132u, 222u, 65u, 42u, 25u, 146u, 71u, 139u,
116u, 48u, 38u, 242u, 171u, 17u, 226u, 220u, 12u, 9u, 67u, 50u, 71u,
139u, 104u, 48u, 38u, 242u, 171u, 17u, 226u, 217u, 12u, 9u, 67u, 46u,
71u, 139u, 84u, 48u, 80u, 232u, 208u, 232u, 6u, 26u, 25u, 114u, 72u,
241u, 106u, 6u, 4u, 161u, 208u, 35u, 197u, 164u, 24u, 25u, 69u, 12u,
213u, 12u, 185u, 9u, 189u, 1u, 52u, 50u, 228u, 143u, 22u, 128u, 96u,
77u, 233u, 77u, 35u, 197u, 158u, 24u, 18u, 134u, 92u, 143u, 22u, 104u,
96u, 77u, 233u, 77u, 35u, 197u, 152u, 24u, 18u, 134u, 96u, 143u, 22u,
64u, 96u, 161u, 209u, 161u, 208u, 12u, 52u, 51u, 4u, 145u, 226u, 199u,
12u, 9u, 67u, 160u, 71u, 139u, 20u, 48u, 50u, 138u, 25u, 170u, 25u,
130u, 19u, 123u, 0u, 40u, 102u, 9u, 30u, 44u, 48u, 192u, 155u, 218u,
136u, 71u, 139u, 8u, 48u, 37u, 12u, 193u, 30u, 44u, 0u, 192u, 155u,
218u, 136u, 71u, 138u, 124u, 48u, 37u, 12u, 169u, 30u, 41u, 192u,
192u, 148u, 50u, 196u, 120u, 166u, 3u, 5u, 14u, 141u, 14u, 128u, 97u,
161u, 149u, 36u, 143u, 20u, 184u, 96u, 74u, 29u, 2u, 60u, 82u, 161u,
129u, 148u, 80u, 205u, 80u, 203u, 16u, 155u, 224u, 155u, 67u, 44u,
72u, 241u, 73u, 134u, 4u, 223u, 25u, 18u, 60u, 82u, 65u, 129u, 40u,
101u, 136u, 241u, 72u, 6u, 4u, 223u, 25u, 18u, 60u, 81u, 193u, 129u,
148u, 80u, 205u, 80u, 202u, 144u, 155u, 227u, 13u, 67u, 42u, 72u,
241u, 70u, 6u, 4u, 223u, 61u, 146u, 60u, 81u, 97u, 129u, 40u, 101u,
72u, 241u, 68u, 134u, 4u, 223u, 61u, 146u, 60u, 81u, 1u, 129u, 40u,
100u, 200u, 241u, 66u, 134u, 4u, 161u, 148u, 35u, 197u, 2u, 24u, 40u,
116u, 104u, 116u, 3u, 13u, 12u, 153u, 36u, 120u, 160u, 3u, 2u, 80u,
232u, 17u, 226u, 94u, 12u, 12u, 162u, 134u, 106u, 134u, 80u, 132u,
223u, 112u, 42u, 25u, 66u, 71u, 137u, 112u, 48u, 38u, 252u, 35u, 17u,
226u, 91u, 12u, 9u, 67u, 40u, 71u, 137u, 100u, 48u, 38u, 252u, 35u,
17u, 226u, 87u, 12u, 12u, 162u, 134u, 106u, 134u, 76u, 132u, 223u,
129u, 186u, 25u, 50u, 71u, 137u, 84u, 48u, 38u, 253u, 71u, 17u, 226u,
84u, 12u, 9u, 67u, 38u, 71u, 137u, 72u, 48u, 38u, 253u, 71u, 17u,
226u, 81u, 12u, 9u, 67u, 34u, 71u, 137u, 56u, 48u, 37u, 12u, 145u,
30u, 36u, 160u, 193u, 67u, 163u, 67u, 160u, 24u, 104u, 100u, 73u, 35u,
196u, 146u, 24u, 18u, 135u, 64u, 143u, 18u, 56u, 96u, 101u, 20u, 51u,
84u, 50u, 68u, 38u, 254u, 203u, 208u, 201u, 18u, 60u, 72u, 161u, 129u,
55u, 251u, 108u, 143u, 18u, 32u, 96u, 74u, 25u, 34u, 60u, 72u, 65u,
129u, 55u, 251u, 108u, 143u, 18u, 0u, 96u, 101u, 20u, 51u, 84u, 50u,
36u, 38u, 255u, 104u, 80u, 200u, 146u, 60u, 67u, 193u, 129u, 52u, 32u,
148u, 50u, 60u, 67u, 161u, 129u, 40u, 100u, 72u, 241u, 13u, 134u, 4u,
208u, 130u, 80u, 200u, 241u, 13u, 6u, 4u, 161u, 143u, 35u, 196u, 46u,
24u, 18u, 134u, 64u, 143u, 16u, 152u, 96u, 161u, 209u, 161u, 208u,
12u, 52u, 49u, 228u, 145u, 226u, 18u, 12u, 9u, 67u, 160u, 71u, 136u,
64u, 48u, 50u, 138u, 25u, 170u, 25u, 2u, 19u, 66u, 12u, 88u, 161u,
144u, 36u, 120u, 131u, 131u, 2u, 104u, 65u, 179u, 132u, 120u, 131u,
67u, 2u, 80u, 200u, 17u, 226u, 11u, 12u, 9u, 161u, 6u, 206u, 17u,
226u, 9u, 12u, 12u, 162u, 134u, 106u, 134u, 60u, 132u, 208u, 131u,
100u, 104u, 99u, 201u, 30u, 32u, 112u, 192u, 154u, 16u, 192u, 177u,
30u, 32u, 96u, 192u, 148u, 49u, 228u, 120u, 129u, 3u, 2u, 104u, 67u,
2u, 196u, 120u, 128u, 195u, 2u, 80u, 198u, 145u, 226u, 0u, 12u, 9u,
67u, 28u, 71u, 135u, 112u, 48u, 80u, 232u, 208u, 232u, 6u, 26u, 24u,
210u, 72u, 240u, 237u, 134u, 4u, 161u, 208u, 35u, 195u, 178u, 24u,
25u, 69u, 12u, 213u, 12u, 113u, 9u, 161u, 13u, 168u, 208u, 199u, 18u,
60u, 58u, 225u, 129u, 52u, 33u, 201u, 82u, 60u, 58u, 193u, 129u, 40u,
99u, 136u, 240u, 234u, 6u, 4u, 208u, 135u, 37u, 72u, 240u, 233u, 6u,
6u, 81u, 67u, 53u, 67u, 26u, 66u, 104u, 67u, 145u, 84u, 49u, 164u,
143u, 14u, 128u, 96u, 77u, 8u, 124u, 60u, 143u, 14u, 120u, 96u, 74u,
24u, 210u, 60u, 57u, 161u, 129u, 52u, 33u, 240u, 242u, 60u, 57u, 129u,
129u, 40u, 98u, 200u, 240u, 228u, 134u, 4u, 161u, 140u, 35u, 195u,
138u, 24u, 40u, 116u, 104u, 116u, 3u, 13u, 12u, 89u, 36u, 120u, 113u,
3u, 2u, 80u, 232u, 17u, 225u, 194u, 12u, 12u, 162u, 134u, 106u, 134u,
48u, 132u, 208u, 138u, 146u, 168u, 99u, 9u, 30u, 28u, 0u, 192u, 154u,
17u, 92u, 113u, 30u, 25u, 240u, 192u, 148u, 49u, 132u, 120u, 103u,
67u, 2u, 104u, 69u, 113u, 196u, 120u, 102u, 195u, 3u, 40u, 161u, 154u,
161u, 139u, 33u, 52u, 34u, 184u, 58u, 24u, 178u, 71u, 134u, 100u, 48u,
38u, 132u, 92u, 16u, 71u, 134u, 96u, 48u, 37u, 12u, 89u, 30u, 25u,
96u, 192u, 154u, 17u, 112u, 65u, 30u, 25u, 64u, 192u, 148u, 57u, 228u,
120u, 99u, 195u, 3u, 40u, 161u, 154u, 161u, 207u, 52u, 32u, 148u, 57u,
228u, 143u, 12u, 104u, 96u, 77u, 8u, 227u, 96u, 143u, 12u, 96u, 96u,
74u, 28u, 242u, 60u, 49u, 65u, 129u, 52u, 35u, 141u, 130u, 60u, 49u,
1u, 129u, 40u, 115u, 136u, 240u, 193u, 134u, 6u, 81u, 67u, 53u, 67u,
156u, 104u, 65u, 40u, 115u, 137u, 30u, 24u, 16u, 192u, 154u, 17u,
220u, 185u, 30u, 24u, 0u, 192u, 148u, 57u, 196u, 120u, 87u, 131u, 2u,
104u, 71u, 114u, 228u, 120u, 87u, 3u, 2u, 80u, 230u, 145u, 225u, 87u,
12u, 12u, 162u, 134u, 106u, 135u, 52u, 208u, 130u, 80u, 230u, 146u,
60u, 42u, 161u, 129u, 52u, 35u, 229u, 98u, 60u, 42u, 129u, 129u, 40u,
115u, 72u, 240u, 169u, 6u, 4u, 208u, 143u, 149u, 136u, 240u, 168u, 6u,
4u, 161u, 204u, 35u, 194u, 150u, 24u, 25u, 69u, 12u, 213u, 14u, 97u,
161u, 4u, 161u, 204u, 36u, 120u, 82u, 67u, 2u, 104u, 73u, 34u, 164u,
120u, 82u, 3u, 2u, 80u, 230u, 17u, 225u, 70u, 12u, 9u, 161u, 36u,
138u, 145u, 225u, 68u, 12u, 9u, 67u, 150u, 71u, 132u, 124u, 48u, 50u,
138u, 25u, 170u, 28u, 179u, 66u, 9u, 67u, 150u, 72u, 240u, 142u, 134u,
4u, 208u, 146u, 245u, 8u, 240u, 142u, 6u, 4u, 161u, 203u, 35u, 194u,
52u, 24u, 19u, 66u, 75u, 212u, 35u, 194u, 48u, 24u, 18u, 135u, 40u,
143u, 8u, 152u, 96u, 101u, 20u, 51u, 84u, 57u, 70u, 132u, 18u, 135u,
40u, 145u, 225u, 17u, 12u, 9u, 161u, 39u, 73u, 145u, 225u, 16u, 12u,
9u, 67u, 148u, 71u, 132u, 56u, 48u, 38u, 132u, 157u, 38u, 71u, 132u,
48u, 48u, 37u, 14u, 73u, 30u, 16u, 112u, 192u, 202u, 40u, 102u, 168u,
114u, 77u, 8u, 37u, 14u, 73u, 35u, 194u, 10u, 24u, 19u, 66u, 89u, 82u,
35u, 194u, 8u, 24u, 18u, 135u, 36u, 143u, 8u, 16u, 96u, 77u, 9u, 101u,
72u, 143u, 8u, 0u, 96u, 74u, 28u, 130u, 59u, 216u, 96u, 101u, 20u,
51u, 84u, 57u, 6u, 132u, 18u, 135u, 32u, 145u, 222u, 67u, 2u, 104u,
75u, 129u, 100u, 119u, 128u, 192u, 148u, 57u, 4u, 119u, 96u, 192u,
154u, 18u, 224u, 89u, 29u, 208u, 48u, 37u, 14u, 57u, 29u, 188u, 48u,
50u, 138u, 25u, 170u, 28u, 115u, 66u, 9u, 67u, 142u, 72u, 237u, 161u,
129u, 52u, 37u, 232u, 194u, 59u, 96u, 96u, 74u, 28u, 114u, 59u, 80u,
96u, 77u, 9u, 122u, 48u, 142u, 208u, 24u, 18u, 135u, 24u, 142u, 198u,
24u, 25u, 69u, 12u, 213u, 14u, 49u, 161u, 4u, 161u, 198u, 36u, 118u,
16u, 192u, 154u, 19u, 72u, 105u, 29u, 128u, 48u, 37u, 14u, 49u, 29u,
120u, 48u, 38u, 132u, 210u, 26u, 71u, 92u, 12u, 9u, 67u, 138u, 71u,
87u, 12u, 12u, 162u, 134u, 106u, 135u, 20u, 208u, 130u, 80u, 226u,
146u, 58u, 168u, 96u, 77u, 9u, 174u, 56u, 142u, 168u, 24u, 18u, 135u,
20u, 142u, 164u, 24u, 19u, 66u, 107u, 142u, 35u, 168u, 6u, 4u, 161u,
196u, 35u, 165u, 134u, 6u, 81u, 67u, 53u, 67u, 136u, 104u, 65u, 40u,
113u, 9u, 29u, 36u, 48u, 38u, 132u, 220u, 30u, 71u, 72u, 12u, 9u, 67u,
136u, 71u, 70u, 12u, 9u, 161u, 55u, 7u, 145u, 209u, 3u, 2u, 80u, 225u,
145u, 207u, 195u, 3u, 40u, 161u, 154u, 161u, 195u, 52u, 32u, 148u,
56u, 100u, 142u, 122u, 24u, 19u, 66u, 120u, 144u, 35u, 158u, 6u, 4u,
161u, 195u, 35u, 157u, 6u, 4u, 208u, 158u, 36u, 8u, 231u, 1u, 129u,
40u, 112u, 136u, 230u, 97u, 129u, 148u, 80u, 205u, 80u, 225u, 26u,
16u, 74u, 28u, 34u, 71u, 49u, 12u, 9u, 161u, 61u, 136u, 145u, 204u,
3u, 2u, 80u, 225u, 17u, 203u, 131u, 2u, 104u, 79u, 98u, 36u, 114u,
192u, 192u, 148u, 56u, 36u, 114u, 112u, 192u, 202u, 40u, 102u, 168u,
112u, 77u, 8u, 37u, 14u, 9u, 35u, 146u, 134u, 4u, 208u, 159u, 100u,
136u, 228u, 129u, 129u, 40u, 112u, 72u, 228u, 65u, 129u, 52u, 39u,
217u, 34u, 57u, 0u, 96u, 107u, 161u, 192u, 36u, 113u, 240u, 192u,
148u, 56u, 4u, 112u, 0u, 192u, 148u, 58u, 100u, 49u, 6u, 6u, 49u, 67u,
161u, 67u, 59u, 67u, 23u, 67u, 27u, 67u, 31u, 67u, 35u, 67u, 39u, 67u,
43u, 67u, 49u, 67u, 47u, 67u, 51u, 67u, 25u, 67u, 29u, 67u, 33u, 67u,
37u, 67u, 41u, 67u, 44u, 69u, 14u, 160u, 20u, 58u, 66u, 135u, 85u,
64u, 161u, 214u, 158u, 104u, 102u, 200u, 101u, 20u, 51u, 83u, 201u,
12u, 162u, 134u, 106u, 134u, 108u, 138u, 29u, 26u, 29u, 0u, 195u, 60u,
147u, 67u, 54u, 103u, 146u, 64u, 161u, 214u, 158u, 72u, 101u, 20u,
51u, 83u, 201u, 20u, 58u, 52u, 58u, 1u, 134u, 121u, 38u, 121u, 36u,
146u, 19u, 118u, 244u, 201u, 36u,};
static unsigned char uvector__00052[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 67u, 175u, 67u, 161u, 67u, 59u, 67u, 23u,
67u, 27u, 67u, 31u, 67u, 35u, 67u, 39u, 67u, 43u, 67u, 49u, 67u, 47u,
67u, 51u, 67u, 25u, 67u, 29u, 67u, 33u, 67u, 37u, 67u, 41u, 67u, 44u,
69u, 14u, 160u, 20u, 58u, 66u, 135u, 85u, 64u, 161u, 214u, 158u, 104u,
102u, 200u, 101u, 20u, 51u, 83u, 201u, 12u, 162u, 134u, 106u, 134u,
108u, 138u, 29u, 26u, 29u, 0u, 195u, 60u, 147u, 67u, 54u, 103u, 146u,
64u, 161u, 214u, 158u, 72u, 101u, 20u, 51u, 83u, 201u, 20u, 58u, 52u,
58u, 1u, 134u, 121u, 38u, 121u, 36u, 146u, 25u, 0u, 161u, 139u, 20u,
58u, 84u, 49u, 116u, 49u, 132u, 138u, 24u, 209u, 67u, 165u, 67u, 27u,
67u, 28u, 72u, 161u, 143u, 20u, 58u, 84u, 49u, 244u, 50u, 4u, 138u,
25u, 17u, 67u, 165u, 67u, 35u, 67u, 36u, 72u, 161u, 147u, 20u, 58u,
84u, 50u, 116u, 50u, 132u, 138u, 25u, 81u, 67u, 165u, 67u, 43u, 67u,
44u, 72u, 161u, 152u, 20u, 58u, 84u, 51u, 4u, 138u, 25u, 113u, 67u,
165u, 67u, 46u, 72u, 161u, 153u, 20u, 58u, 84u, 51u, 36u, 144u, 202u,
28u, 4u, 165u, 67u, 22u, 40u, 116u, 104u, 116u, 3u, 13u, 12u, 89u,
36u, 74u, 84u, 49u, 162u, 135u, 70u, 135u, 64u, 48u, 208u, 198u, 146u,
68u, 165u, 67u, 30u, 40u, 116u, 104u, 116u, 3u, 13u, 12u, 121u, 36u,
74u, 84u, 50u, 34u, 135u, 70u, 135u, 64u, 48u, 208u, 200u, 146u, 68u,
165u, 67u, 38u, 40u, 116u, 104u, 116u, 3u, 13u, 12u, 153u, 36u, 74u,
84u, 50u, 162u, 135u, 70u, 135u, 64u, 48u, 208u, 202u, 146u, 68u,
165u, 67u, 48u, 40u, 116u, 104u, 116u, 3u, 13u, 12u, 193u, 36u, 74u,
84u, 50u, 226u, 135u, 70u, 135u, 64u, 48u, 208u, 203u, 146u, 68u,
165u, 67u, 50u, 40u, 116u, 104u, 116u, 3u, 13u, 12u, 201u, 36u, 208u,
232u, 8u, 146u, 134u, 38u, 134u, 22u, 134u, 46u, 134u, 18u, 134u, 54u,
134u, 14u, 134u, 62u, 134u, 10u, 134u, 70u, 134u, 6u, 134u, 78u, 134u,
2u, 134u, 86u, 133u, 126u, 134u, 98u, 133u, 122u, 134u, 94u, 133u,
118u, 134u, 100u, 146u, 73u, 28u, 36u, 48u, 49u, 132u, 192u, 221u,
49u, 74u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u, 1u,
194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00053[] = {
 0u, 3u, 157u, 134u, 7u, 90u, 29u, 138u, 29u, 152u, 84u, 145u, 206u,
131u, 2u, 66u, 164u, 115u, 144u, 192u, 148u, 59u, 36u, 115u, 112u,
192u, 148u, 59u, 4u, 115u, 64u, 193u, 67u, 181u, 0u, 146u, 57u, 152u,
96u, 72u, 4u, 142u, 100u, 24u, 40u, 118u, 192u, 128u, 67u, 173u, 14u,
229u, 14u, 200u, 161u, 221u, 161u, 222u, 133u, 73u, 36u, 38u, 30u,
228u, 142u, 98u, 24u, 18u, 1u, 35u, 152u, 6u, 4u, 197u, 104u, 142u,
94u, 24u, 19u, 23u, 210u, 57u, 104u, 96u, 76u, 106u, 8u, 229u, 129u,
129u, 33u, 82u, 57u, 64u, 96u, 76u, 106u, 8u, 228u, 225u, 129u, 40u,
118u, 72u, 228u, 161u, 129u, 40u, 119u, 8u, 228u, 97u, 129u, 49u,
125u, 35u, 144u, 6u, 7u, 186u, 29u, 247u, 226u, 71u, 31u, 12u, 9u,
67u, 190u, 71u, 29u, 12u, 14u, 180u, 59u, 148u, 59u, 34u, 135u, 118u,
135u, 122u, 21u, 36u, 142u, 54u, 24u, 19u, 66u, 33u, 136u, 227u, 65u,
129u, 33u, 82u, 56u, 176u, 96u, 77u, 8u, 134u, 35u, 138u, 134u, 4u,
161u, 217u, 35u, 137u, 134u, 4u, 161u, 220u, 35u, 136u, 134u, 7u,
186u, 29u, 241u, 68u, 0u, 73u, 28u, 60u, 48u, 38u, 133u, 143u, 145u,
195u, 67u, 2u, 104u, 88u, 249u, 28u, 48u, 48u, 37u, 14u, 249u, 28u,
44u, 48u, 50u, 1u, 67u, 190u, 40u, 128u, 104u, 119u, 161u, 81u, 68u,
4u, 73u, 33u, 176u, 4u, 208u, 176u, 64u, 154u, 16u, 54u, 64u, 76u,
235u, 2u, 98u, 180u, 67u, 72u, 76u, 7u, 9u, 36u, 112u, 144u, 192u,
154u, 26u, 20u, 71u, 7u, 12u, 9u, 161u, 170u, 228u, 112u, 80u, 192u,
154u, 26u, 174u, 71u, 4u, 12u, 9u, 10u, 145u, 192u, 3u, 2u, 104u,
104u, 81u, 12u, 65u, 129u, 140u, 80u, 236u, 164u, 42u, 27u, 104u,
119u, 194u, 104u, 104u, 80u, 77u, 13u, 150u, 36u, 144u,};
static unsigned char uvector__00054[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 136u, 12u, 81u, 2u, 80u, 236u, 164u, 42u,
27u, 104u, 119u, 197u, 16u, 13u, 14u, 244u, 42u, 40u, 128u, 137u, 13u,
128u, 61u, 208u, 239u, 138u, 32u, 2u, 67u, 173u, 14u, 229u, 14u, 200u,
161u, 221u, 161u, 222u, 133u, 73u, 32u, 61u, 208u, 239u, 191u, 17u,
67u, 182u, 4u, 2u, 29u, 104u, 119u, 40u, 118u, 69u, 14u, 237u, 14u,
244u, 42u, 73u, 34u, 135u, 106u, 1u, 36u, 134u, 144u, 235u, 67u, 177u,
67u, 179u, 10u, 146u, 73u, 35u, 132u, 134u, 6u, 48u, 152u, 36u, 166u,
12u, 228u, 112u, 112u, 192u, 152u, 14u, 17u, 192u, 131u, 2u, 96u, 56u,
71u, 0u, 12u, 9u, 128u, 225u, 32u,};
static unsigned char uvector__00055[] = {
 0u, 3u, 144u, 6u, 7u, 90u, 32u, 90u, 29u, 152u, 84u, 145u, 199u,
195u, 2u, 66u, 164u, 113u, 224u, 192u, 148u, 59u, 36u, 113u, 192u,
192u, 148u, 64u, 164u, 113u, 160u, 192u, 246u, 40u, 128u, 136u, 162u,
0u, 36u, 142u, 48u, 24u, 19u, 17u, 130u, 56u, 176u, 96u, 76u, 70u, 8u,
226u, 129u, 129u, 49u, 2u, 35u, 137u, 6u, 4u, 196u, 8u, 142u, 32u,
24u, 29u, 104u, 129u, 168u, 118u, 97u, 82u, 71u, 15u, 12u, 9u, 10u,
145u, 195u, 131u, 2u, 80u, 236u, 145u, 195u, 3u, 2u, 81u, 3u, 17u,
194u, 131u, 3u, 40u, 112u, 15u, 52u, 59u, 228u, 38u, 30u, 228u, 38u,
3u, 129u, 50u, 2u, 36u, 112u, 144u, 192u, 148u, 59u, 228u, 112u, 128u,
192u, 200u, 5u, 14u, 248u, 162u, 1u, 161u, 222u, 133u, 91u, 137u, 33u,
50u, 221u, 36u, 112u, 96u, 192u, 153u, 224u, 17u, 193u, 3u, 2u, 66u,
164u, 112u, 0u, 192u, 153u, 224u, 16u, 196u, 24u, 24u, 197u, 14u,
202u, 66u, 161u, 182u, 135u, 124u, 38u, 120u, 1u, 50u, 221u, 36u,
144u,};
static unsigned char uvector__00056[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 136u, 12u, 81u, 3u, 208u, 236u, 164u,
42u, 27u, 104u, 119u, 197u, 16u, 13u, 14u, 244u, 42u, 220u, 67u, 40u,
112u, 15u, 52u, 59u, 228u, 61u, 138u, 32u, 34u, 40u, 128u, 9u, 33u,
214u, 136u, 22u, 135u, 102u, 21u, 33u, 214u, 136u, 26u, 135u, 102u,
21u, 36u, 146u, 56u, 72u, 96u, 99u, 9u, 130u, 74u, 96u, 206u, 71u, 7u,
12u, 9u, 128u, 225u, 28u, 8u, 48u, 38u, 3u, 132u, 112u, 0u, 192u,
152u, 14u, 18u,};
static unsigned char uvector__00057[] = {
 0u, 3u, 129u, 6u, 8u, 82u, 13u, 36u, 112u, 16u, 192u, 144u, 161u,
28u, 0u, 48u, 36u, 26u, 67u, 16u, 96u, 99u, 80u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00058[] = {
 0u, 3u, 128u, 134u, 10u, 32u, 136u, 52u, 145u, 192u, 3u, 2u, 65u,
164u, 49u, 6u, 6u, 53u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00059[] = {
 0u, 3u, 133u, 6u, 8u, 96u, 49u, 168u, 133u, 32u, 210u, 67u, 26u,
138u, 32u, 136u, 52u, 144u, 195u, 12u, 144u, 194u, 33u, 175u, 66u,
33u, 36u, 142u, 6u, 24u, 24u, 211u, 5u, 210u, 56u, 0u, 96u, 99u, 76u,
12u, 72u, 98u, 12u, 12u, 98u, 13u, 133u, 8u, 134u, 194u, 96u, 112u,
152u, 48u, 146u, 64u,};
static unsigned char uvector__00060[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 65u, 48u, 108u, 40u, 68u, 54u,
33u, 72u, 52u, 138u, 32u, 136u, 52u, 146u, 71u, 9u, 12u, 12u, 97u,
48u, 67u, 76u, 22u, 136u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u,
4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00061[] = {
 0u, 3u, 130u, 6u, 10u, 32u, 168u, 52u, 145u, 192u, 195u, 2u, 65u,
164u, 112u, 16u, 192u, 241u, 6u, 132u, 192u, 112u, 145u, 192u, 3u, 2u,
65u, 164u, 49u, 6u, 6u, 53u, 9u, 131u, 249u, 36u,};
static unsigned char uvector__00062[] = {
 0u, 3u, 137u, 6u, 8u, 96u, 49u, 168u, 133u, 32u, 210u, 67u, 26u,
135u, 136u, 52u, 81u, 5u, 65u, 164u, 144u, 195u, 12u, 144u, 194u, 33u,
175u, 66u, 89u, 36u, 142u, 22u, 24u, 24u, 211u, 5u, 210u, 56u, 64u,
96u, 99u, 76u, 12u, 72u, 224u, 225u, 129u, 144u, 8u, 52u, 58u, 209u,
2u, 80u, 236u, 209u, 5u, 146u, 68u, 54u, 19u, 3u, 132u, 193u, 132u,
145u, 193u, 131u, 2u, 99u, 18u, 71u, 5u, 12u, 9u, 68u, 22u, 71u, 4u,
12u, 9u, 67u, 178u, 71u, 2u, 12u, 9u, 68u, 8u, 71u, 0u, 12u, 9u, 140u,
73u, 12u, 65u, 129u, 140u, 80u, 236u, 194u, 137u, 68u, 22u, 27u, 96u,
208u, 152u, 196u, 132u, 199u, 52u, 146u, 64u,};
static unsigned char uvector__00063[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 136u, 12u, 81u, 6u, 80u, 236u, 194u,
137u, 68u, 22u, 27u, 96u, 208u, 235u, 68u, 9u, 67u, 179u, 68u, 22u,
68u, 54u, 33u, 72u, 52u, 135u, 136u, 52u, 81u, 5u, 65u, 164u, 146u,
72u, 225u, 33u, 129u, 140u, 38u, 9u, 41u, 131u, 185u, 28u, 28u, 48u,
38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u,
56u, 72u,};
static unsigned char uvector__00064[] = {
 0u, 3u, 130u, 6u, 10u, 32u, 216u, 52u, 145u, 192u, 195u, 2u, 65u,
164u, 112u, 16u, 192u, 241u, 6u, 132u, 192u, 112u, 145u, 192u, 3u, 2u,
65u, 164u, 49u, 6u, 6u, 53u, 9u, 131u, 249u, 36u,};
static unsigned char uvector__00065[] = {
 0u, 3u, 137u, 6u, 8u, 96u, 49u, 168u, 133u, 32u, 210u, 67u, 26u,
135u, 136u, 52u, 81u, 6u, 193u, 164u, 144u, 195u, 12u, 144u, 194u,
33u, 175u, 66u, 129u, 36u, 142u, 22u, 24u, 24u, 211u, 5u, 210u, 56u,
64u, 96u, 99u, 76u, 12u, 72u, 224u, 225u, 129u, 144u, 8u, 52u, 58u,
209u, 3u, 208u, 236u, 209u, 5u, 146u, 68u, 54u, 19u, 3u, 132u, 193u,
132u, 145u, 193u, 131u, 2u, 99u, 18u, 71u, 5u, 12u, 9u, 68u, 22u, 71u,
4u, 12u, 9u, 67u, 178u, 71u, 2u, 12u, 9u, 68u, 14u, 71u, 0u, 12u, 9u,
140u, 73u, 12u, 65u, 129u, 140u, 80u, 236u, 194u, 137u, 68u, 22u, 27u,
96u, 208u, 152u, 196u, 132u, 199u, 52u, 146u, 64u,};
static unsigned char uvector__00066[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 136u, 12u, 81u, 7u, 80u, 236u, 194u,
137u, 68u, 22u, 27u, 96u, 208u, 235u, 68u, 15u, 67u, 179u, 68u, 22u,
68u, 54u, 33u, 72u, 52u, 135u, 136u, 52u, 81u, 6u, 193u, 164u, 146u,
72u, 225u, 33u, 129u, 140u, 38u, 9u, 41u, 131u, 185u, 28u, 28u, 48u,
38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u, 192u, 3u, 2u, 96u,
56u, 72u,};
static unsigned char uvector__00067[] = {
 0u, 3u, 129u, 6u, 10u, 32u, 248u, 54u, 136u, 64u, 145u, 192u, 67u,
2u, 81u, 8u, 17u, 192u, 3u, 2u, 65u, 164u, 49u, 6u, 6u, 53u, 9u, 128u,
225u, 36u,};
static unsigned char uvector__00068[] = {
 0u, 3u, 128u, 134u, 10u, 32u, 168u, 52u, 145u, 192u, 3u, 2u, 65u,
164u, 49u, 6u, 6u, 53u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00069[] = {
 0u, 3u, 138u, 6u, 8u, 96u, 49u, 168u, 162u, 15u, 131u, 104u, 132u,
9u, 12u, 106u, 40u, 130u, 160u, 210u, 67u, 12u, 50u, 67u, 8u, 134u,
189u, 10u, 196u, 146u, 56u, 104u, 96u, 99u, 76u, 28u, 200u, 225u, 65u,
129u, 141u, 48u, 49u, 35u, 132u, 6u, 4u, 131u, 72u, 224u, 225u, 129u,
144u, 8u, 52u, 58u, 209u, 2u, 80u, 236u, 209u, 5u, 146u, 67u, 132u,
26u, 33u, 176u, 152u, 28u, 38u, 14u, 228u, 145u, 193u, 131u, 2u, 99u,
98u, 71u, 5u, 12u, 9u, 68u, 22u, 71u, 4u, 12u, 9u, 67u, 178u, 71u, 2u,
12u, 9u, 68u, 8u, 71u, 0u, 12u, 9u, 141u, 137u, 12u, 65u, 129u, 140u,
80u, 236u, 209u, 8u, 37u, 16u, 88u, 109u, 131u, 66u, 99u, 98u, 19u,
31u, 82u, 73u, 0u,};
static unsigned char uvector__00070[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 136u, 12u, 81u, 8u, 208u, 236u, 209u, 8u,
37u, 16u, 88u, 109u, 131u, 67u, 173u, 16u, 37u, 14u, 205u, 16u, 89u,
14u, 16u, 104u, 134u, 197u, 16u, 124u, 27u, 68u, 32u, 69u, 16u, 84u,
26u, 73u, 36u, 142u, 18u, 24u, 24u, 194u, 96u, 146u, 152u, 62u, 145u,
193u, 195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u,
38u, 3u, 132u, 128u,};
static unsigned char uvector__00071[] = {
 0u, 3u, 129u, 6u, 10u, 33u, 40u, 54u, 136u, 64u, 145u, 192u, 67u, 2u,
81u, 8u, 17u, 192u, 3u, 2u, 65u, 164u, 49u, 6u, 6u, 53u, 9u, 128u,
225u, 36u,};
static unsigned char uvector__00072[] = {
 0u, 3u, 128u, 134u, 10u, 32u, 216u, 52u, 145u, 192u, 3u, 2u, 65u,
164u, 49u, 6u, 6u, 53u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00073[] = {
 0u, 3u, 138u, 6u, 8u, 96u, 49u, 168u, 162u, 18u, 131u, 104u, 132u,
9u, 12u, 106u, 40u, 131u, 96u, 210u, 67u, 12u, 50u, 67u, 8u, 134u,
189u, 11u, 132u, 146u, 56u, 104u, 96u, 99u, 76u, 28u, 200u, 225u, 65u,
129u, 141u, 48u, 49u, 35u, 132u, 6u, 4u, 131u, 72u, 224u, 225u, 129u,
144u, 8u, 52u, 58u, 209u, 3u, 208u, 236u, 209u, 5u, 146u, 67u, 132u,
26u, 33u, 176u, 152u, 28u, 38u, 14u, 228u, 145u, 193u, 131u, 2u, 99u,
98u, 71u, 5u, 12u, 9u, 68u, 22u, 71u, 4u, 12u, 9u, 67u, 178u, 71u, 2u,
12u, 9u, 68u, 14u, 71u, 0u, 12u, 9u, 141u, 137u, 12u, 65u, 129u, 140u,
80u, 236u, 209u, 8u, 37u, 16u, 88u, 109u, 131u, 66u, 99u, 98u, 19u,
31u, 82u, 73u, 0u,};
static unsigned char uvector__00074[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 136u, 12u, 81u, 9u, 208u, 236u, 209u, 8u,
37u, 16u, 88u, 109u, 131u, 67u, 173u, 16u, 61u, 14u, 205u, 16u, 89u,
14u, 16u, 104u, 134u, 197u, 16u, 148u, 27u, 68u, 32u, 69u, 16u, 108u,
26u, 73u, 36u, 142u, 18u, 24u, 24u, 194u, 96u, 146u, 152u, 62u, 145u,
193u, 195u, 2u, 96u, 56u, 71u, 2u, 12u, 9u, 128u, 225u, 28u, 0u, 48u,
38u, 3u, 132u, 128u,};
static unsigned char uvector__00075[] = {
 0u, 3u, 134u, 6u, 8u, 218u, 89u, 36u, 112u, 176u, 192u, 146u, 201u,
28u, 36u, 48u, 81u, 9u, 75u, 52u, 66u, 4u, 142u, 16u, 24u, 18u, 136u,
64u, 142u, 14u, 24u, 18u, 89u, 35u, 130u, 134u, 4u, 193u, 228u, 142u,
8u, 24u, 25u, 0u, 150u, 68u, 120u, 73u, 9u, 131u, 200u, 76u, 7u, 9u,
28u, 8u, 48u, 38u, 44u, 164u, 112u, 0u, 192u, 152u, 178u, 144u, 196u,
24u, 24u, 197u, 16u, 129u, 13u, 178u, 200u, 76u, 89u, 66u, 96u, 242u,
19u, 1u, 194u, 73u, 0u,};
static unsigned char uvector__00076[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 66u, 148u, 66u, 4u, 54u, 203u,
34u, 60u, 34u, 136u, 74u, 89u, 162u, 16u, 34u, 54u, 150u, 73u, 36u,
112u, 144u, 192u, 198u, 19u, 4u, 52u, 193u, 88u, 142u, 14u, 24u, 19u,
1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00077[] = {
 0u, 3u, 131u, 134u, 10u, 32u, 241u, 68u, 43u, 68u, 44u, 104u, 132u,
9u, 28u, 24u, 48u, 37u, 16u, 129u, 28u, 12u, 48u, 38u, 5u, 228u, 112u,
32u, 192u, 148u, 66u, 196u, 112u, 0u, 192u, 152u, 23u, 144u, 196u,
24u, 24u, 197u, 16u, 181u, 16u, 129u, 9u, 128u, 225u, 36u,};
static unsigned char uvector__00078[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 66u, 244u, 66u, 212u, 66u, 4u,
81u, 7u, 138u, 33u, 90u, 33u, 99u, 68u, 32u, 73u, 28u, 36u, 48u, 49u,
132u, 193u, 13u, 48u, 102u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u,
24u, 19u, 1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00079[] = {
 0u, 3u, 133u, 134u, 8u, 218u, 89u, 36u, 112u, 160u, 192u, 146u, 201u,
28u, 36u, 48u, 66u, 146u, 201u, 35u, 132u, 6u, 4u, 133u, 8u, 224u,
225u, 129u, 37u, 146u, 56u, 40u, 96u, 76u, 30u, 72u, 224u, 129u, 129u,
144u, 9u, 100u, 71u, 132u, 144u, 152u, 60u, 132u, 192u, 112u, 145u,
192u, 131u, 2u, 98u, 146u, 71u, 0u, 12u, 9u, 138u, 73u, 12u, 65u,
129u, 140u, 66u, 132u, 54u, 203u, 33u, 49u, 73u, 9u, 131u, 200u, 76u,
7u, 9u, 36u,};
static unsigned char uvector__00080[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 67u, 16u, 161u, 13u, 178u,
200u, 143u, 8u, 133u, 37u, 146u, 35u, 105u, 100u, 146u, 71u, 9u, 12u,
12u, 97u, 48u, 67u, 76u, 20u, 8u, 224u, 225u, 129u, 48u, 28u, 35u,
129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00081[] = {
 0u, 3u, 131u, 134u, 8u, 80u, 81u, 10u, 209u, 11u, 18u, 71u, 6u, 12u,
9u, 10u, 17u, 192u, 195u, 2u, 96u, 82u, 71u, 2u, 12u, 9u, 68u, 44u,
71u, 0u, 12u, 9u, 129u, 73u, 12u, 65u, 129u, 140u, 81u, 11u, 66u,
132u, 38u, 3u, 132u, 144u,};
static unsigned char uvector__00082[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 67u, 52u, 66u, 208u, 161u, 16u,
160u, 162u, 21u, 162u, 22u, 36u, 145u, 194u, 67u, 3u, 24u, 76u, 16u,
211u, 6u, 2u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u,
35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00083[] = {
 0u, 3u, 136u, 134u, 8u, 218u, 89u, 36u, 113u, 0u, 192u, 146u, 201u,
28u, 60u, 48u, 66u, 148u, 67u, 82u, 201u, 35u, 135u, 6u, 4u, 133u, 8u,
225u, 161u, 129u, 37u, 146u, 56u, 96u, 96u, 74u, 33u, 162u, 56u, 80u,
96u, 76u, 30u, 72u, 225u, 33u, 129u, 144u, 9u, 100u, 71u, 132u, 138u,
33u, 161u, 68u, 43u, 68u, 44u, 73u, 9u, 131u, 200u, 76u, 7u, 9u, 28u,
28u, 48u, 38u, 53u, 228u, 112u, 96u, 192u, 148u, 66u, 196u, 112u, 64u,
192u, 152u, 215u, 145u, 192u, 131u, 2u, 99u, 18u, 71u, 0u, 12u, 9u,
140u, 73u, 12u, 65u, 129u, 140u, 81u, 11u, 66u, 132u, 38u, 45u, 196u,
144u,};
static unsigned char uvector__00084[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 67u, 116u, 66u, 208u, 161u,
12u, 128u, 75u, 34u, 60u, 36u, 81u, 13u, 10u, 33u, 90u, 33u, 98u, 72u,
133u, 40u, 134u, 165u, 146u, 35u, 105u, 100u, 146u, 71u, 9u, 12u, 12u,
97u, 48u, 67u, 76u, 24u, 8u, 224u, 225u, 129u, 48u, 28u, 35u, 129u,
6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00085[] = {
 0u, 3u, 129u, 6u, 10u, 33u, 122u, 33u, 106u, 33u, 2u, 71u, 1u, 12u,
9u, 68u, 32u, 71u, 0u, 12u, 9u, 68u, 44u, 67u, 16u, 96u, 99u, 80u,
152u, 14u, 18u, 64u,};
static unsigned char uvector__00086[] = {
 0u, 3u, 129u, 6u, 10u, 33u, 65u, 50u, 209u, 11u, 209u, 11u, 81u, 8u,
18u, 71u, 0u, 12u, 12u, 106u, 40u, 133u, 232u, 133u, 168u, 132u, 9u,
33u, 136u, 48u, 49u, 138u, 33u, 106u, 33u, 2u, 19u, 1u, 194u, 72u,};
static unsigned char uvector__00087[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 67u, 148u, 66u, 212u, 66u, 4u,
81u, 10u, 9u, 150u, 136u, 94u, 136u, 90u, 136u, 64u, 146u, 71u, 9u,
12u, 12u, 97u, 48u, 67u, 76u, 25u, 136u, 224u, 225u, 129u, 48u, 28u,
35u, 129u, 6u, 4u, 192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00088[] = {
 0u, 3u, 129u, 6u, 10u, 33u, 217u, 124u, 145u, 192u, 67u, 2u, 81u,
14u, 145u, 192u, 3u, 2u, 75u, 228u, 49u, 6u, 6u, 53u, 9u, 128u, 225u,
36u,};
static unsigned char uvector__00089[] = {
 0u, 3u, 144u, 6u, 10u, 33u, 65u, 50u, 209u, 14u, 203u, 228u, 145u,
199u, 131u, 3u, 26u, 138u, 33u, 217u, 124u, 146u, 56u, 224u, 96u,
103u, 143u, 131u, 8u, 99u, 18u, 252u, 126u, 40u, 135u, 104u, 135u,
137u, 9u, 128u, 225u, 36u, 142u, 44u, 24u, 19u, 12u, 2u, 56u, 144u,
96u, 107u, 162u, 31u, 36u, 113u, 16u, 192u, 148u, 67u, 228u, 113u, 0u,
192u, 200u, 5u, 16u, 232u, 101u, 13u, 116u, 72u, 6u, 136u, 120u, 52u,
81u, 32u, 18u, 69u, 16u, 248u, 101u, 13u, 116u, 72u, 4u, 48u, 169u,
13u, 84u, 72u, 4u, 146u, 27u, 194u, 99u, 32u, 19u, 12u, 2u, 25u, 21u,
49u, 40u, 36u, 112u, 240u, 192u, 153u, 97u, 145u, 194u, 131u, 2u,
101u, 38u, 71u, 9u, 12u, 9u, 68u, 130u, 71u, 7u, 12u, 9u, 146u, 137u,
28u, 12u, 48u, 37u, 16u, 241u, 28u, 4u, 48u, 38u, 68u, 100u, 112u, 0u,
192u, 148u, 72u, 36u, 49u, 6u, 4u, 195u, 128u, 144u,};
static unsigned char uvector__00090[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 72u, 82u, 252u, 126u, 40u,
135u, 104u, 135u, 137u, 20u, 66u, 130u, 101u, 162u, 29u, 151u, 201u,
36u, 112u, 144u, 192u, 198u, 19u, 4u, 52u, 194u, 0u, 142u, 14u, 24u,
19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u,
36u,};
static unsigned char uvector__00091[] = {
 0u, 3u, 135u, 134u, 10u, 33u, 112u, 202u, 26u, 225u, 83u, 35u, 135u,
89u, 26u, 71u, 133u, 73u, 154u, 73u, 28u, 52u, 48u, 36u, 210u, 71u,
12u, 12u, 9u, 130u, 225u, 28u, 44u, 48u, 36u, 42u, 71u, 10u, 12u, 9u,
35u, 145u, 194u, 3u, 2u, 72u, 196u, 112u, 96u, 192u, 152u, 46u, 17u,
192u, 195u, 2u, 72u, 228u, 112u, 16u, 192u, 152u, 29u, 17u, 192u, 3u,
2u, 66u, 164u, 49u, 6u, 6u, 49u, 35u, 164u, 42u, 19u, 1u, 194u, 72u,};
static unsigned char uvector__00092[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 72u, 114u, 58u, 66u, 162u,
136u, 92u, 50u, 134u, 184u, 84u, 200u, 225u, 214u, 70u, 145u, 225u,
82u, 102u, 146u, 72u, 225u, 33u, 129u, 140u, 38u, 8u, 105u, 130u,
217u, 28u, 28u, 48u, 38u, 3u, 132u, 112u, 32u, 192u, 152u, 14u, 17u,
192u, 3u, 2u, 96u, 56u, 72u,};
static unsigned char uvector__00093[] = {
 0u, 3u, 130u, 6u, 9u, 2u, 133u, 92u, 145u, 192u, 195u, 2u, 80u, 171u,
145u, 192u, 67u, 3u, 197u, 10u, 184u, 76u, 7u, 9u, 28u, 0u, 48u, 37u,
10u, 185u, 12u, 65u, 129u, 141u, 66u, 97u, 10u, 73u, 0u,};
static unsigned char uvector__00094[] = {
 0u, 3u, 132u, 6u, 4u, 161u, 87u, 35u, 131u, 6u, 9u, 2u, 13u, 36u,
112u, 80u, 192u, 144u, 105u, 28u, 12u, 48u, 38u, 9u, 132u, 112u, 16u,
192u, 241u, 6u, 136u, 166u, 133u, 92u, 38u, 9u, 132u, 145u, 192u, 3u,
2u, 65u, 164u, 49u, 6u, 6u, 53u, 9u, 134u, 185u, 36u,};
static unsigned char uvector__00095[] = {
 0u, 3u, 142u, 6u, 4u, 161u, 87u, 35u, 141u, 6u, 4u, 162u, 68u, 35u,
140u, 134u, 6u, 53u, 15u, 20u, 42u, 226u, 64u, 161u, 87u, 36u, 145u,
198u, 3u, 2u, 81u, 34u, 145u, 197u, 131u, 2u, 96u, 248u, 71u, 21u,
12u, 20u, 72u, 193u, 201u, 67u, 196u, 26u, 34u, 154u, 21u, 113u, 32u,
65u, 164u, 147u, 68u, 32u, 28u, 148u, 38u, 17u, 100u, 145u, 196u,
195u, 2u, 81u, 8u, 17u, 196u, 131u, 2u, 81u, 8u, 17u, 196u, 3u, 2u,
81u, 8u, 17u, 195u, 195u, 2u, 98u, 134u, 71u, 14u, 12u, 9u, 68u, 138u,
71u, 13u, 12u, 9u, 68u, 142u, 71u, 12u, 12u, 12u, 106u, 19u, 22u, 82u,
71u, 11u, 12u, 9u, 68u, 142u, 71u, 9u, 12u, 9u, 153u, 89u, 28u, 32u,
48u, 38u, 40u, 100u, 112u, 96u, 192u, 153u, 149u, 145u, 192u, 195u,
2u, 96u, 248u, 71u, 2u, 12u, 9u, 66u, 174u, 71u, 1u, 12u, 12u, 128u,
80u, 171u, 183u, 18u, 19u, 20u, 50u, 67u, 16u, 96u, 99u, 16u, 109u,
16u, 129u, 20u, 73u, 0u, 72u, 16u, 105u, 52u, 66u, 4u, 146u,};
static unsigned char uvector__00096[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 65u, 240u, 109u, 16u, 129u,
20u, 73u, 0u, 72u, 16u, 105u, 52u, 66u, 4u, 145u, 194u, 67u, 3u, 24u,
76u, 16u, 211u, 6u, 2u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u,
48u, 28u, 35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00097[] = {
 0u, 3u, 130u, 6u, 9u, 42u, 133u, 92u, 145u, 192u, 195u, 2u, 80u,
171u, 145u, 192u, 67u, 3u, 197u, 10u, 184u, 76u, 7u, 9u, 28u, 0u, 48u,
37u, 10u, 185u, 12u, 65u, 129u, 141u, 66u, 97u, 10u, 73u, 0u,};
static unsigned char uvector__00098[] = {
 0u, 3u, 132u, 6u, 4u, 161u, 87u, 35u, 131u, 6u, 9u, 42u, 13u, 36u,
112u, 80u, 192u, 144u, 105u, 28u, 12u, 48u, 38u, 9u, 132u, 112u, 16u,
192u, 241u, 6u, 136u, 166u, 133u, 92u, 38u, 9u, 132u, 145u, 192u, 3u,
2u, 65u, 164u, 49u, 6u, 6u, 53u, 9u, 134u, 185u, 36u,};
static unsigned char uvector__00099[] = {
 0u, 3u, 142u, 6u, 4u, 161u, 87u, 35u, 141u, 6u, 4u, 162u, 68u, 35u,
140u, 134u, 6u, 53u, 15u, 20u, 42u, 226u, 74u, 161u, 87u, 36u, 145u,
198u, 3u, 2u, 81u, 34u, 145u, 197u, 131u, 2u, 96u, 248u, 71u, 21u,
12u, 20u, 72u, 193u, 201u, 67u, 196u, 26u, 34u, 154u, 21u, 113u, 37u,
65u, 164u, 147u, 68u, 32u, 28u, 148u, 38u, 17u, 100u, 145u, 196u,
195u, 2u, 81u, 8u, 17u, 196u, 131u, 2u, 81u, 8u, 17u, 196u, 3u, 2u,
81u, 8u, 17u, 195u, 195u, 2u, 98u, 134u, 71u, 14u, 12u, 9u, 68u, 138u,
71u, 13u, 12u, 9u, 68u, 142u, 71u, 12u, 12u, 12u, 106u, 19u, 22u, 82u,
71u, 11u, 12u, 9u, 68u, 142u, 71u, 9u, 12u, 9u, 153u, 89u, 28u, 32u,
48u, 38u, 40u, 100u, 112u, 96u, 192u, 153u, 149u, 145u, 192u, 195u,
2u, 96u, 248u, 71u, 2u, 12u, 9u, 66u, 174u, 71u, 1u, 12u, 12u, 128u,
80u, 171u, 183u, 18u, 19u, 20u, 50u, 67u, 16u, 96u, 99u, 16u, 109u,
16u, 129u, 20u, 73u, 0u, 73u, 80u, 105u, 52u, 66u, 4u, 146u,};
static unsigned char uvector__00100[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 66u, 80u, 109u, 16u, 129u, 20u,
73u, 0u, 73u, 80u, 105u, 52u, 66u, 4u, 145u, 194u, 67u, 3u, 24u, 76u,
16u, 211u, 6u, 2u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u,
28u, 35u, 128u, 6u, 4u, 192u, 112u, 144u,};
static unsigned char uvector__00101[] = {
 0u, 3u, 130u, 6u, 10u, 36u, 154u, 21u, 114u, 71u, 3u, 12u, 9u, 66u,
174u, 71u, 1u, 12u, 15u, 20u, 42u, 225u, 48u, 28u, 36u, 112u, 0u,
192u, 148u, 42u, 228u, 49u, 6u, 6u, 53u, 9u, 132u, 89u, 36u,};
static unsigned char uvector__00102[] = {
 0u, 3u, 132u, 6u, 4u, 161u, 87u, 35u, 131u, 6u, 10u, 36u, 152u, 52u,
145u, 193u, 67u, 2u, 65u, 164u, 112u, 48u, 192u, 152u, 38u, 17u, 192u,
67u, 3u, 196u, 26u, 34u, 154u, 21u, 112u, 152u, 38u, 18u, 71u, 0u,
12u, 9u, 6u, 144u, 196u, 24u, 24u, 212u, 38u, 27u, 164u, 144u,};
static unsigned char uvector__00103[] = {
 0u, 3u, 142u, 6u, 4u, 161u, 87u, 35u, 141u, 6u, 4u, 162u, 68u, 35u,
140u, 134u, 6u, 53u, 15u, 20u, 42u, 226u, 137u, 38u, 133u, 92u, 146u,
71u, 24u, 12u, 9u, 68u, 138u, 71u, 22u, 12u, 9u, 131u, 225u, 28u, 84u,
48u, 81u, 35u, 7u, 37u, 15u, 16u, 104u, 138u, 104u, 85u, 197u, 18u,
76u, 26u, 73u, 52u, 66u, 1u, 201u, 66u, 97u, 22u, 73u, 28u, 76u, 48u,
37u, 16u, 129u, 28u, 72u, 48u, 37u, 16u, 129u, 28u, 64u, 48u, 37u,
16u, 129u, 28u, 60u, 48u, 38u, 41u, 36u, 112u, 224u, 192u, 148u, 72u,
164u, 112u, 208u, 192u, 148u, 72u, 228u, 112u, 192u, 192u, 198u, 161u,
49u, 107u, 36u, 112u, 176u, 192u, 148u, 72u, 228u, 112u, 144u, 192u,
153u, 155u, 145u, 194u, 3u, 2u, 98u, 146u, 71u, 6u, 12u, 9u, 153u,
185u, 28u, 12u, 48u, 38u, 15u, 132u, 112u, 32u, 192u, 148u, 42u, 228u,
112u, 16u, 192u, 200u, 5u, 10u, 187u, 113u, 33u, 49u, 73u, 36u, 49u,
6u, 6u, 49u, 6u, 209u, 8u, 17u, 68u, 144u, 5u, 18u, 76u, 26u, 77u,
16u, 129u, 36u, 128u,};
static unsigned char uvector__00104[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 73u, 80u, 109u, 16u, 129u, 20u,
73u, 0u, 81u, 36u, 193u, 164u, 209u, 8u, 18u, 71u, 9u, 12u, 12u, 97u,
48u, 67u, 76u, 24u, 8u, 224u, 225u, 129u, 48u, 28u, 35u, 129u, 6u, 4u,
192u, 112u, 142u, 0u, 24u, 19u, 1u, 194u, 64u,};
static unsigned char uvector__00105[] = {
 0u, 3u, 140u, 6u, 10u, 36u, 154u, 21u, 114u, 71u, 23u, 12u, 9u, 66u,
174u, 71u, 21u, 12u, 15u, 20u, 42u, 225u, 48u, 28u, 36u, 113u, 64u,
192u, 148u, 42u, 228u, 113u, 0u, 193u, 37u, 80u, 171u, 146u, 56u,
120u, 96u, 74u, 21u, 114u, 56u, 104u, 96u, 76u, 65u, 200u, 225u, 97u,
129u, 226u, 133u, 92u, 38u, 32u, 228u, 142u, 20u, 24u, 18u, 133u, 92u,
142u, 12u, 24u, 36u, 10u, 21u, 114u, 71u, 5u, 12u, 9u, 66u, 174u, 71u,
3u, 12u, 9u, 144u, 209u, 28u, 4u, 48u, 60u, 80u, 171u, 132u, 200u,
104u, 145u, 192u, 3u, 2u, 80u, 171u, 144u, 196u, 24u, 24u, 212u, 38u,
86u, 33u, 49u, 158u, 9u, 132u, 89u, 36u,};
static unsigned char uvector__00106[] = {
 0u, 3u, 143u, 6u, 4u, 161u, 87u, 35u, 142u, 6u, 10u, 36u, 154u, 36u,
178u, 71u, 27u, 12u, 9u, 68u, 150u, 71u, 25u, 12u, 9u, 130u, 97u, 28u,
92u, 48u, 60u, 81u, 37u, 136u, 166u, 133u, 92u, 38u, 9u, 132u, 145u,
197u, 131u, 2u, 81u, 37u, 145u, 196u, 195u, 2u, 80u, 171u, 145u, 196u,
67u, 4u, 149u, 68u, 152u, 72u, 226u, 1u, 129u, 40u, 147u, 8u, 225u,
193u, 129u, 49u, 181u, 35u, 134u, 6u, 7u, 138u, 36u, 193u, 20u, 208u,
171u, 132u, 198u, 212u, 146u, 56u, 88u, 96u, 74u, 36u, 194u, 56u, 64u,
96u, 74u, 21u, 114u, 56u, 48u, 96u, 144u, 40u, 147u, 73u, 28u, 20u,
48u, 37u, 18u, 105u, 28u, 12u, 48u, 38u, 99u, 4u, 112u, 16u, 192u,
241u, 68u, 154u, 34u, 154u, 21u, 112u, 153u, 140u, 18u, 71u, 0u, 12u,
9u, 68u, 154u, 67u, 16u, 96u, 99u, 80u, 153u, 215u, 132u, 201u, 48u,
38u, 29u, 36u, 144u,};
static unsigned char uvector__00107[] = {
 0u, 3u, 144u, 6u, 4u, 161u, 87u, 35u, 143u, 6u, 4u, 162u, 68u, 35u,
142u, 134u, 6u, 53u, 15u, 20u, 42u, 226u, 64u, 161u, 87u, 36u, 60u,
80u, 171u, 137u, 42u, 133u, 92u, 144u, 241u, 66u, 174u, 40u, 146u,
104u, 85u, 201u, 36u, 113u, 192u, 192u, 148u, 72u, 164u, 113u, 160u,
192u, 152u, 62u, 17u, 198u, 67u, 5u, 18u, 48u, 114u, 80u, 241u, 68u,
154u, 34u, 154u, 21u, 113u, 32u, 81u, 38u, 146u, 67u, 197u, 18u, 96u,
138u, 104u, 85u, 196u, 149u, 68u, 152u, 73u, 15u, 20u, 73u, 98u, 41u,
161u, 87u, 20u, 73u, 52u, 73u, 100u, 147u, 68u, 32u, 28u, 148u, 38u,
17u, 97u, 48u, 201u, 9u, 136u, 57u, 36u, 113u, 112u, 192u, 148u, 66u,
4u, 113u, 96u, 192u, 148u, 66u, 4u, 113u, 64u, 192u, 148u, 66u, 4u,
113u, 48u, 192u, 152u, 226u, 145u, 196u, 131u, 2u, 81u, 34u, 145u,
196u, 67u, 2u, 81u, 35u, 145u, 196u, 3u, 3u, 26u, 132u, 199u, 156u,
38u, 72u, 161u, 50u, 163u, 36u, 112u, 240u, 192u, 148u, 72u, 228u,
112u, 208u, 192u, 154u, 18u, 138u, 71u, 12u, 12u, 9u, 142u, 41u, 28u,
40u, 48u, 38u, 132u, 162u, 145u, 193u, 195u, 2u, 96u, 248u, 71u, 6u,
12u, 9u, 66u, 174u, 71u, 5u, 12u, 9u, 66u, 174u, 71u, 4u, 12u, 9u,
66u, 174u, 71u, 3u, 12u, 12u, 128u, 80u, 171u, 183u, 17u, 66u, 174u,
220u, 69u, 10u, 187u, 113u, 33u, 49u, 197u, 36u, 49u, 6u, 6u, 49u,
68u, 155u, 68u, 153u, 68u, 151u, 68u, 32u, 69u, 18u, 64u, 18u, 5u,
18u, 105u, 18u, 85u, 18u, 97u, 20u, 73u, 52u, 73u, 100u, 209u, 8u,
18u, 72u,};
static unsigned char uvector__00108[] = {
 0u, 3u, 134u, 6u, 8u, 114u, 29u, 20u, 73u, 212u, 73u, 180u, 73u,
148u, 73u, 116u, 66u, 4u, 81u, 36u, 1u, 32u, 81u, 38u, 145u, 37u, 81u,
38u, 17u, 68u, 147u, 68u, 150u, 77u, 16u, 129u, 36u, 112u, 144u, 192u,
198u, 19u, 4u, 52u, 194u, 24u, 142u, 14u, 24u, 19u, 1u, 194u, 56u,
16u, 96u, 76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00109[] = {
 0u, 3u, 131u, 6u, 10u, 36u, 66u, 71u, 4u, 12u, 20u, 73u, 244u, 74u,
4u, 142u, 0u, 24u, 19u, 4u, 178u, 24u, 131u, 3u, 24u, 162u, 81u, 131u,
104u, 148u, 136u, 76u, 18u, 194u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00110[] = {
 0u, 3u, 130u, 6u, 10u, 37u, 48u, 195u, 68u, 168u, 67u, 144u, 162u,
81u, 131u, 104u, 148u, 136u, 162u, 79u, 162u, 80u, 34u, 137u, 16u,
146u, 71u, 2u, 12u, 12u, 97u, 48u, 88u, 9u, 132u, 64u, 76u, 43u, 137u,
32u,};
static unsigned char uvector__00111[] = {
 0u, 3u, 132u, 134u, 10u, 36u, 66u, 71u, 8u, 12u, 2u, 32u, 15u, 241u,
85u, 18u, 169u, 48u, 107u, 241u, 35u, 131u, 134u, 4u, 193u, 56u, 142u,
10u, 24u, 18u, 137u, 84u, 142u, 4u, 24u, 18u, 13u, 35u, 128u, 6u, 4u,
193u, 44u, 134u, 32u, 192u, 198u, 40u, 148u, 96u, 218u, 37u, 34u, 34u,
144u, 19u, 5u, 184u, 52u, 191u, 16u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00112[] = {
 0u, 3u, 130u, 6u, 10u, 37u, 48u, 195u, 68u, 172u, 67u, 144u, 162u,
81u, 131u, 104u, 148u, 136u, 138u, 64u, 127u, 138u, 168u, 149u, 76u,
26u, 95u, 136u, 162u, 68u, 36u, 145u, 192u, 131u, 3u, 24u, 76u, 22u,
2u, 97u, 16u, 19u, 13u, 130u, 72u,};
static unsigned char uvector__00113[] = {
 0u, 3u, 132u, 6u, 10u, 36u, 66u, 71u, 7u, 12u, 2u, 32u, 15u, 241u,
85u, 18u, 169u, 48u, 107u, 113u, 35u, 131u, 6u, 4u, 193u, 56u, 142u,
8u, 24u, 18u, 137u, 84u, 142u, 4u, 24u, 18u, 13u, 35u, 128u, 6u, 4u,
193u, 44u, 134u, 32u, 192u, 198u, 40u, 148u, 96u, 218u, 37u, 34u, 34u,
144u, 19u, 5u, 184u, 52u, 183u, 16u, 152u, 14u, 18u, 64u,};
static unsigned char uvector__00114[] = {
 0u, 3u, 130u, 6u, 10u, 37u, 48u, 195u, 68u, 174u, 67u, 144u, 162u,
81u, 131u, 104u, 148u, 136u, 138u, 64u, 127u, 138u, 168u, 149u, 76u,
26u, 91u, 136u, 162u, 68u, 36u, 145u, 192u, 131u, 3u, 24u, 76u, 22u,
2u, 97u, 16u, 19u, 13u, 130u, 72u,};
static unsigned char uvector__00115[] = {
 0u, 3u, 132u, 134u, 10u, 36u, 66u, 71u, 7u, 12u, 20u, 75u, 16u, 104u,
97u, 162u, 89u, 33u, 134u, 137u, 104u, 146u, 56u, 16u, 96u, 72u, 52u,
142u, 0u, 24u, 19u, 4u, 178u, 24u, 131u, 3u, 24u, 162u, 81u, 131u,
104u, 148u, 136u, 76u, 18u, 194u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00116[] = {
 0u, 3u, 130u, 6u, 10u, 37u, 48u, 195u, 68u, 182u, 67u, 144u, 162u,
81u, 131u, 104u, 148u, 136u, 162u, 88u, 131u, 67u, 13u, 18u, 201u,
12u, 52u, 75u, 68u, 138u, 36u, 66u, 73u, 28u, 8u, 48u, 49u, 132u,
193u, 96u, 38u, 17u, 1u, 48u, 228u, 36u, 128u,};
static unsigned char uvector__00117[] = {
 0u, 3u, 132u, 134u, 10u, 36u, 66u, 71u, 7u, 12u, 20u, 75u, 16u, 104u,
97u, 162u, 89u, 33u, 134u, 137u, 112u, 146u, 56u, 16u, 96u, 72u, 52u,
142u, 0u, 24u, 19u, 4u, 178u, 24u, 131u, 3u, 24u, 162u, 81u, 131u,
104u, 148u, 136u, 76u, 18u, 194u, 96u, 56u, 73u, 0u,};
static unsigned char uvector__00118[] = {
 0u, 3u, 130u, 6u, 10u, 37u, 48u, 195u, 68u, 186u, 67u, 144u, 162u,
81u, 131u, 104u, 148u, 136u, 162u, 88u, 131u, 67u, 13u, 18u, 201u,
12u, 52u, 75u, 132u, 138u, 36u, 66u, 73u, 28u, 8u, 48u, 49u, 132u,
193u, 96u, 38u, 17u, 1u, 48u, 228u, 36u, 128u,};
static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2148[425];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2148 */
      SCM_STRING_CONST_INITIALIZER("input-port\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("obj", 3, 3),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libio.scm", 9, 9),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("scheme", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<boolean>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("output-port\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("port\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("port-closed\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("gauche", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<port>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("standard-input-port", 19, 19),
      SCM_STRING_CONST_INITIALIZER("optional", 8, 8),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("*", 1, 1),
      SCM_STRING_CONST_INITIALIZER("standard-output-port", 20, 20),
      SCM_STRING_CONST_INITIALIZER("standard-error-port", 19, 19),
      SCM_STRING_CONST_INITIALIZER("port-name", 9, 9),
      SCM_STRING_CONST_INITIALIZER("port", 4, 4),
      SCM_STRING_CONST_INITIALIZER("port-current-line", 17, 17),
      SCM_STRING_CONST_INITIALIZER("<fixnum>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("port-file-number", 16, 16),
      SCM_STRING_CONST_INITIALIZER("dup\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("port-fd-dup!", 12, 12),
      SCM_STRING_CONST_INITIALIZER("dst", 3, 3),
      SCM_STRING_CONST_INITIALIZER("src", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("port-attribute-set!", 19, 19),
      SCM_STRING_CONST_INITIALIZER("key", 3, 3),
      SCM_STRING_CONST_INITIALIZER("val", 3, 3),
      SCM_STRING_CONST_INITIALIZER("port-attribute-ref", 18, 18),
      SCM_STRING_CONST_INITIALIZER("fallback", 8, 8),
      SCM_STRING_CONST_INITIALIZER("port-attribute-delete!", 22, 22),
      SCM_STRING_CONST_INITIALIZER("port-attributes", 15, 15),
      SCM_STRING_CONST_INITIALIZER("port-type", 9, 9),
      SCM_STRING_CONST_INITIALIZER("file", 4, 4),
      SCM_STRING_CONST_INITIALIZER("proc", 4, 4),
      SCM_STRING_CONST_INITIALIZER("string", 6, 6),
      SCM_STRING_CONST_INITIALIZER("port-buffering", 14, 14),
      SCM_STRING_CONST_INITIALIZER("(setter port-buffering)", 23, 23),
      SCM_STRING_CONST_INITIALIZER("port-link!", 10, 10),
      SCM_STRING_CONST_INITIALIZER("iport", 5, 5),
      SCM_STRING_CONST_INITIALIZER("oport", 5, 5),
      SCM_STRING_CONST_INITIALIZER("<input-port>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("<output-port>", 13, 13),
      SCM_STRING_CONST_INITIALIZER("port-unlink!", 12, 12),
      SCM_STRING_CONST_INITIALIZER("port-case-fold", 14, 14),
      SCM_STRING_CONST_INITIALIZER("(setter port-case-fold)", 23, 23),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("close-input-port", 16, 16),
      SCM_STRING_CONST_INITIALIZER("close-output-port", 17, 17),
      SCM_STRING_CONST_INITIALIZER("close-port", 10, 10),
      SCM_STRING_CONST_INITIALIZER("error", 5, 5),
      SCM_STRING_CONST_INITIALIZER("if-does-not-exist", 17, 17),
      SCM_STRING_CONST_INITIALIZER("buffering", 9, 9),
      SCM_STRING_CONST_INITIALIZER("binary", 6, 6),
      SCM_STRING_CONST_INITIALIZER("element-type", 12, 12),
      SCM_STRING_CONST_INITIALIZER("%open-input-file", 16, 16),
      SCM_STRING_CONST_INITIALIZER("character", 9, 9),
      SCM_STRING_CONST_INITIALIZER("path", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<string>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("supersede", 9, 9),
      SCM_STRING_CONST_INITIALIZER("if-exists", 9, 9),
      SCM_STRING_CONST_INITIALIZER("create", 6, 6),
      SCM_STRING_CONST_INITIALIZER("mode", 4, 4),
      SCM_STRING_CONST_INITIALIZER("%open-output-file", 17, 17),
      SCM_STRING_CONST_INITIALIZER("overwrite", 9, 9),
      SCM_STRING_CONST_INITIALIZER("append", 6, 6),
      SCM_STRING_CONST_INITIALIZER("owner\077", 6, 6),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("open-input-fd-port", 18, 18),
      SCM_STRING_CONST_INITIALIZER("dup", 3, 3),
      SCM_STRING_CONST_INITIALIZER("fd", 2, 2),
      SCM_STRING_CONST_INITIALIZER("open-output-fd-port", 19, 19),
      SCM_STRING_CONST_INITIALIZER("open-input-buffered-port", 24, 24),
      SCM_STRING_CONST_INITIALIZER("filler", 6, 6),
      SCM_STRING_CONST_INITIALIZER("buffer-size", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<procedure>", 11, 11),
      SCM_STRING_CONST_INITIALIZER("open-output-buffered-port", 25, 25),
      SCM_STRING_CONST_INITIALIZER("flusher", 7, 7),
      SCM_STRING_CONST_INITIALIZER("private\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("(input string port)", 19, 19),
      SCM_STRING_CONST_INITIALIZER("open-input-string", 17, 17),
      SCM_STRING_CONST_INITIALIZER("(output string port)", 20, 20),
      SCM_STRING_CONST_INITIALIZER("open-output-string", 18, 18),
      SCM_STRING_CONST_INITIALIZER("get-output-string", 17, 17),
      SCM_STRING_CONST_INITIALIZER("get-output-byte-string", 22, 22),
      SCM_STRING_CONST_INITIALIZER("get-remaining-input-string", 26, 26),
      SCM_STRING_CONST_INITIALIZER("open-coding-aware-port", 22, 22),
      SCM_STRING_CONST_INITIALIZER("port-has-port-position\077", 23, 23),
      SCM_STRING_CONST_INITIALIZER("port-has-set-port-position!\077", 28, 28),
      SCM_STRING_CONST_INITIALIZER("port-position", 13, 13),
      SCM_STRING_CONST_INITIALIZER("set-port-position!", 18, 18),
      SCM_STRING_CONST_INITIALIZER("pos", 3, 3),
      SCM_STRING_CONST_INITIALIZER("SEEK_SET", 8, 8),
      SCM_STRING_CONST_INITIALIZER("SEEK_CUR", 8, 8),
      SCM_STRING_CONST_INITIALIZER("SEEK_END", 8, 8),
      SCM_STRING_CONST_INITIALIZER("port-seek", 9, 9),
      SCM_STRING_CONST_INITIALIZER("offset", 6, 6),
      SCM_STRING_CONST_INITIALIZER("whence", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<integer>", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("port-tell", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("port-position-prefix", 20, 20),
      SCM_STRING_CONST_INITIALIZER("positive\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("~s:line ~a: ", 12, 12),
      SCM_STRING_CONST_INITIALIZER("format-internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("gauche.format", 13, 13),
      SCM_STRING_CONST_INITIALIZER("~s: ", 4, 4),
      SCM_STRING_CONST_INITIALIZER("", 0, 0),
      SCM_STRING_CONST_INITIALIZER("\077\077\077", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%port-walking\077", 14, 14),
      SCM_STRING_CONST_INITIALIZER("(setter %port-walking\077)", 23, 23),
      SCM_STRING_CONST_INITIALIZER("%port-writing-shared\077", 21, 21),
      SCM_STRING_CONST_INITIALIZER("(setter %port-writing-shared\077)", 30, 30),
      SCM_STRING_CONST_INITIALIZER("%port-write-state", 17, 17),
      SCM_STRING_CONST_INITIALIZER("(setter %port-write-state)", 26, 26),
      SCM_STRING_CONST_INITIALIZER("%port-lock!", 11, 11),
      SCM_STRING_CONST_INITIALIZER("%port-unlock!", 13, 13),
      SCM_STRING_CONST_INITIALIZER("with-port-locking", 17, 17),
      SCM_STRING_CONST_INITIALIZER("%unwind-protect", 15, 15),
      SCM_STRING_CONST_INITIALIZER("args", 4, 4),
      SCM_STRING_CONST_INITIALIZER("%with-2pass-setup", 17, 17),
      SCM_STRING_CONST_INITIALIZER("[internal] %with-2pass-setup called recursively on port:", 56, 56),
      SCM_STRING_CONST_INITIALIZER("<write-state>", 13, 13),
      SCM_STRING_CONST_INITIALIZER("shared-table", 12, 12),
      SCM_STRING_CONST_INITIALIZER("eq\077", 3, 3),
      SCM_STRING_CONST_INITIALIZER("make-hash-table", 15, 15),
      SCM_STRING_CONST_INITIALIZER("make", 4, 4),
      SCM_STRING_CONST_INITIALIZER("walker", 6, 6),
      SCM_STRING_CONST_INITIALIZER("emitter", 7, 7),
      SCM_STRING_CONST_INITIALIZER("port-column", 11, 11),
      SCM_STRING_CONST_INITIALIZER("read", 4, 4),
      SCM_STRING_CONST_INITIALIZER("read-char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("peek-char", 9, 9),
      SCM_STRING_CONST_INITIALIZER("eof-object\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("char-ready\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("eof-object", 10, 10),
      SCM_STRING_CONST_INITIALIZER("byte-ready\077", 11, 11),
      SCM_STRING_CONST_INITIALIZER("u8-ready\077", 9, 9),
      SCM_STRING_CONST_INITIALIZER("read-byte", 9, 9),
      SCM_STRING_CONST_INITIALIZER("read-u8", 7, 7),
      SCM_STRING_CONST_INITIALIZER("peek-byte", 9, 9),
      SCM_STRING_CONST_INITIALIZER("peek-u8", 7, 7),
      SCM_STRING_CONST_INITIALIZER("read-line", 9, 9),
      SCM_STRING_CONST_INITIALIZER("allowbytestr", 12, 12),
      SCM_STRING_CONST_INITIALIZER("read-string", 11, 11),
      SCM_STRING_CONST_INITIALIZER("too many arguments for", 22, 22),
      SCM_STRING_CONST_INITIALIZER("lambda", 6, 6),
      SCM_STRING_CONST_INITIALIZER("n", 1, 1),
      SCM_STRING_CONST_INITIALIZER("current-input-port", 18, 18),
      SCM_STRING_CONST_INITIALIZER("define", 6, 6),
      SCM_STRING_CONST_INITIALIZER("o", 1, 1),
      SCM_STRING_CONST_INITIALIZER("let", 3, 3),
      SCM_STRING_CONST_INITIALIZER("loop", 4, 4),
      SCM_STRING_CONST_INITIALIZER("i", 1, 1),
      SCM_STRING_CONST_INITIALIZER("if", 2, 2),
      SCM_STRING_CONST_INITIALIZER(">=", 2, 2),
      SCM_STRING_CONST_INITIALIZER("let1", 4, 4),
      SCM_STRING_CONST_INITIALIZER("c", 1, 1),
      SCM_STRING_CONST_INITIALIZER("=", 1, 1),
      SCM_STRING_CONST_INITIALIZER("begin", 5, 5),
      SCM_STRING_CONST_INITIALIZER("write-char", 10, 10),
      SCM_STRING_CONST_INITIALIZER("+", 1, 1),
      SCM_STRING_CONST_INITIALIZER("write-string", 12, 12),
      SCM_STRING_CONST_INITIALIZER("current-output-port", 19, 19),
      SCM_STRING_CONST_INITIALIZER("start", 5, 5),
      SCM_STRING_CONST_INITIALIZER("end", 3, 3),
      SCM_STRING_CONST_INITIALIZER("display", 7, 7),
      SCM_STRING_CONST_INITIALIZER("opt-substring", 13, 13),
      SCM_STRING_CONST_INITIALIZER("consume-trailing-whitespaces", 28, 28),
      SCM_STRING_CONST_INITIALIZER("when", 4, 4),
      SCM_STRING_CONST_INITIALIZER("b", 1, 1),
      SCM_STRING_CONST_INITIALIZER("cond", 4, 4),
      SCM_STRING_CONST_INITIALIZER("memv", 4, 4),
      SCM_STRING_CONST_INITIALIZER("quote", 5, 5),
      SCM_STRING_CONST_INITIALIZER("eqv\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("and", 3, 3),
      SCM_STRING_CONST_INITIALIZER("char-word-constituent\077", 22, 22),
      SCM_STRING_CONST_INITIALIZER("ch", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<char>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("read-block", 10, 10),
      SCM_STRING_CONST_INITIALIZER("bytes", 5, 5),
      SCM_STRING_CONST_INITIALIZER("read-list", 9, 9),
      SCM_STRING_CONST_INITIALIZER("closer", 6, 6),
      SCM_STRING_CONST_INITIALIZER("port->byte-string", 17, 17),
      SCM_STRING_CONST_INITIALIZER("port->string", 12, 12),
      SCM_STRING_CONST_INITIALIZER("unit", 4, 4),
      SCM_STRING_CONST_INITIALIZER("byte", 4, 4),
      SCM_STRING_CONST_INITIALIZER("copy-port", 9, 9),
      SCM_STRING_CONST_INITIALIZER("port->list", 10, 10),
      SCM_STRING_CONST_INITIALIZER("reverse!", 8, 8),
      SCM_STRING_CONST_INITIALIZER("reader", 6, 6),
      SCM_STRING_CONST_INITIALIZER("port->string-list", 17, 17),
      SCM_STRING_CONST_INITIALIZER("G2178", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2177", 5, 5),
      SCM_STRING_CONST_INITIALIZER("port->sexp-list", 15, 15),
      SCM_STRING_CONST_INITIALIZER("reader-lexical-mode", 19, 19),
      SCM_STRING_CONST_INITIALIZER("k", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%port-ungotten-chars", 20, 20),
      SCM_STRING_CONST_INITIALIZER("%port-ungotten-bytes", 20, 20),
      SCM_STRING_CONST_INITIALIZER("define-reader-ctor", 18, 18),
      SCM_STRING_CONST_INITIALIZER("symbol", 6, 6),
      SCM_STRING_CONST_INITIALIZER("finisher", 8, 8),
      SCM_STRING_CONST_INITIALIZER("%get-reader-ctor", 16, 16),
      SCM_STRING_CONST_INITIALIZER("define-reader-directive", 23, 23),
      SCM_STRING_CONST_INITIALIZER("current-read-context", 20, 20),
      SCM_STRING_CONST_INITIALIZER("ctx", 3, 3),
      SCM_STRING_CONST_INITIALIZER("read-reference\077", 15, 15),
      SCM_STRING_CONST_INITIALIZER("read-reference-has-value\077", 25, 25),
      SCM_STRING_CONST_INITIALIZER("ref", 3, 3),
      SCM_STRING_CONST_INITIALIZER("<read-reference>", 16, 16),
      SCM_STRING_CONST_INITIALIZER("read-reference-value", 20, 20),
      SCM_STRING_CONST_INITIALIZER("read-with-shared-structure", 26, 26),
      SCM_STRING_CONST_INITIALIZER("read/ss", 7, 7),
      SCM_STRING_CONST_INITIALIZER("write", 5, 5),
      SCM_STRING_CONST_INITIALIZER("port-or-control-1", 17, 17),
      SCM_STRING_CONST_INITIALIZER("port-or-control-2", 17, 17),
      SCM_STRING_CONST_INITIALIZER("write-simple", 12, 12),
      SCM_STRING_CONST_INITIALIZER("write-shared", 12, 12),
      SCM_STRING_CONST_INITIALIZER("newline", 7, 7),
      SCM_STRING_CONST_INITIALIZER("fresh-line", 10, 10),
      SCM_STRING_CONST_INITIALIZER("write-byte", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("write-u8", 8, 8),
      SCM_STRING_CONST_INITIALIZER("write-limited", 13, 13),
      SCM_STRING_CONST_INITIALIZER("limit", 5, 5),
      SCM_STRING_CONST_INITIALIZER("write*", 6, 6),
      SCM_STRING_CONST_INITIALIZER("flush", 5, 5),
      SCM_STRING_CONST_INITIALIZER("flush-all-ports", 15, 15),
      SCM_STRING_CONST_INITIALIZER("write-need-recurse\077", 19, 19),
      SCM_STRING_CONST_INITIALIZER("write-walk", 10, 10),
      SCM_STRING_CONST_INITIALIZER("~", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%write-walk-rec", 15, 15),
      SCM_STRING_CONST_INITIALIZER("G2182", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2179", 5, 5),
      SCM_STRING_CONST_INITIALIZER("hash-table-exists\077", 18, 18),
      SCM_STRING_CONST_INITIALIZER("hash-table-update!", 18, 18),
      SCM_STRING_CONST_INITIALIZER("hash-table-put!", 15, 15),
      SCM_STRING_CONST_INITIALIZER("uvector\077", 8, 8),
      SCM_STRING_CONST_INITIALIZER("box\077", 4, 4),
      SCM_STRING_CONST_INITIALIZER("box-arity", 9, 9),
      SCM_STRING_CONST_INITIALIZER("unbox-value", 11, 11),
      SCM_STRING_CONST_INITIALIZER("<dictionary>", 12, 12),
      SCM_STRING_CONST_INITIALIZER("v", 1, 1),
      SCM_STRING_CONST_INITIALIZER("%dict-walk!", 11, 11),
      SCM_STRING_CONST_INITIALIZER("write-object", 12, 12),
      SCM_STRING_CONST_INITIALIZER("hash-table-get", 14, 14),
      SCM_STRING_CONST_INITIALIZER("hash-table-delete!", 18, 18),
      SCM_STRING_CONST_INITIALIZER("tab", 3, 3),
      SCM_STRING_CONST_INITIALIZER("gauche.libdict", 14, 14),
      SCM_STRING_CONST_INITIALIZER("dict-for-each", 13, 13),
      SCM_STRING_CONST_INITIALIZER("module-binding-ref", 18, 18),
      SCM_STRING_CONST_INITIALIZER("dict-transparent\077", 17, 17),
      SCM_STRING_CONST_INITIALIZER("dict", 4, 4),
      SCM_STRING_CONST_INITIALIZER("write-with-shared-structure", 27, 27),
      SCM_STRING_CONST_INITIALIZER("write/ss", 8, 8),
      SCM_STRING_CONST_INITIALIZER("print", 5, 5),
      SCM_STRING_CONST_INITIALIZER("for-each", 8, 8),
      SCM_STRING_CONST_INITIALIZER("make-write-controls", 19, 19),
      SCM_STRING_CONST_INITIALIZER("undefined\077", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<write-controls>", 16, 16),
      SCM_STRING_CONST_INITIALIZER("length", 6, 6),
      SCM_STRING_CONST_INITIALIZER("level", 5, 5),
      SCM_STRING_CONST_INITIALIZER("width", 5, 5),
      SCM_STRING_CONST_INITIALIZER("base", 4, 4),
      SCM_STRING_CONST_INITIALIZER("radix", 5, 5),
      SCM_STRING_CONST_INITIALIZER("pretty", 6, 6),
      SCM_STRING_CONST_INITIALIZER("string-length", 13, 13),
      SCM_STRING_CONST_INITIALIZER("indent", 6, 6),
      SCM_STRING_CONST_INITIALIZER("exact-decimal", 13, 13),
      SCM_STRING_CONST_INITIALIZER("keyword list not even", 21, 21),
      SCM_STRING_CONST_INITIALIZER("unwrap-syntax-1", 15, 15),
      SCM_STRING_CONST_INITIALIZER("print-length", 12, 12),
      SCM_STRING_CONST_INITIALIZER("print-level", 11, 11),
      SCM_STRING_CONST_INITIALIZER("print-width", 11, 11),
      SCM_STRING_CONST_INITIALIZER("print-base", 10, 10),
      SCM_STRING_CONST_INITIALIZER("print-radix", 11, 11),
      SCM_STRING_CONST_INITIALIZER("print-pretty", 12, 12),
      SCM_STRING_CONST_INITIALIZER("unknown keyword ~S", 18, 18),
      SCM_STRING_CONST_INITIALIZER("errorf", 6, 6),
      SCM_STRING_CONST_INITIALIZER("write-controls-copy", 19, 19),
      SCM_STRING_CONST_INITIALIZER("wc", 2, 2),
      SCM_STRING_CONST_INITIALIZER("open-input-file", 15, 15),
      SCM_STRING_CONST_INITIALIZER("encoding", 8, 8),
      SCM_STRING_CONST_INITIALIZER("default-file-encoding", 21, 21),
      SCM_STRING_CONST_INITIALIZER("get-keyword", 11, 11),
      SCM_STRING_CONST_INITIALIZER("gauche-character-encoding", 25, 25),
      SCM_STRING_CONST_INITIALIZER("delete-keyword", 14, 14),
      SCM_STRING_CONST_INITIALIZER("%open-input-file/conv", 21, 21),
      SCM_STRING_CONST_INITIALIZER("filename", 8, 8),
      SCM_STRING_CONST_INITIALIZER("open-output-file", 16, 16),
      SCM_STRING_CONST_INITIALIZER("%open-output-file/conv", 22, 22),
      SCM_STRING_CONST_INITIALIZER("call-with-port", 14, 14),
      SCM_STRING_CONST_INITIALIZER("call-with-input-file", 20, 20),
      SCM_STRING_CONST_INITIALIZER("flags", 5, 5),
      SCM_STRING_CONST_INITIALIZER("call-with-output-file", 21, 21),
      SCM_STRING_CONST_INITIALIZER("with-input-from-file", 20, 20),
      SCM_STRING_CONST_INITIALIZER("with-input-from-port", 20, 20),
      SCM_STRING_CONST_INITIALIZER("thunk", 5, 5),
      SCM_STRING_CONST_INITIALIZER("with-output-to-file", 19, 19),
      SCM_STRING_CONST_INITIALIZER("with-output-to-port", 19, 19),
      SCM_STRING_CONST_INITIALIZER("with-output-to-string", 21, 21),
      SCM_STRING_CONST_INITIALIZER("with-input-from-string", 22, 22),
      SCM_STRING_CONST_INITIALIZER("str", 3, 3),
      SCM_STRING_CONST_INITIALIZER("call-with-output-string", 23, 23),
      SCM_STRING_CONST_INITIALIZER("call-with-input-string", 22, 22),
      SCM_STRING_CONST_INITIALIZER("call-with-string-io", 19, 19),
      SCM_STRING_CONST_INITIALIZER("with-string-io", 14, 14),
      SCM_STRING_CONST_INITIALIZER("write-to-string", 15, 15),
      SCM_STRING_CONST_INITIALIZER("writer", 6, 6),
      SCM_STRING_CONST_INITIALIZER("cut", 3, 3),
      SCM_STRING_CONST_INITIALIZER("read-from-string", 16, 16),
      SCM_STRING_CONST_INITIALIZER("values", 6, 6),
      SCM_STRING_CONST_INITIALIZER("with-error-to-port", 18, 18),
      SCM_STRING_CONST_INITIALIZER("current-error-port", 18, 18),
      SCM_STRING_CONST_INITIALIZER("with-ports", 10, 10),
      SCM_STRING_CONST_INITIALIZER("eport", 5, 5),
      SCM_STRING_CONST_INITIALIZER("r6rs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("Reading R6RS source file.  Note that Gauche is not R6RS compliant.", 66, 66),
      SCM_STRING_CONST_INITIALIZER("warn", 4, 4),
      SCM_STRING_CONST_INITIALIZER("sym", 3, 3),
      SCM_STRING_CONST_INITIALIZER("unused-args", 11, 11),
      SCM_STRING_CONST_INITIALIZER("fold-case", 9, 9),
      SCM_STRING_CONST_INITIALIZER("no-fold-case", 12, 12),
      SCM_STRING_CONST_INITIALIZER("gauche-legacy", 13, 13),
      SCM_STRING_CONST_INITIALIZER("legacy", 6, 6),
      SCM_STRING_CONST_INITIALIZER("r7rs", 4, 4),
      SCM_STRING_CONST_INITIALIZER("strict-r7", 9, 9),
      SCM_STRING_CONST_INITIALIZER("l", 1, 1),
      SCM_STRING_CONST_INITIALIZER("format", 6, 6),
      SCM_STRING_CONST_INITIALIZER("if-let1", 7, 7),
      SCM_STRING_CONST_INITIALIZER("unwind-protect", 14, 14),
      SCM_STRING_CONST_INITIALIZER("define-in-module", 16, 16),
      SCM_STRING_CONST_INITIALIZER("setter", 6, 6),
      SCM_STRING_CONST_INITIALIZER("set!", 4, 4),
      SCM_STRING_CONST_INITIALIZER("G2167", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2168", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2166", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2170", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2173", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2172", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2171", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2169", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2175", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2176", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2174", 8, 8),
      SCM_STRING_CONST_INITIALIZER("out", 3, 3),
      SCM_STRING_CONST_INITIALIZER("result", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<>", 2, 2),
      SCM_STRING_CONST_INITIALIZER("s", 1, 1),
      SCM_STRING_CONST_INITIALIZER("is-a\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("do", 2, 2),
      SCM_STRING_CONST_INITIALIZER("limit2181", 9, 9),
      SCM_STRING_CONST_INITIALIZER("dotimes", 7, 7),
      SCM_STRING_CONST_INITIALIZER("limit2180", 9, 9),
      SCM_STRING_CONST_INITIALIZER("vector-length", 13, 13),
      SCM_STRING_CONST_INITIALIZER("vector-ref", 10, 10),
      SCM_STRING_CONST_INITIALIZER("vector\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("pair\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("string\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("symbol\077", 7, 7),
      SCM_STRING_CONST_INITIALIZER("transparent\077", 12, 12),
      SCM_STRING_CONST_INITIALIZER("G2184", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2185", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2183", 8, 8),
      SCM_STRING_CONST_INITIALIZER("loop2192", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args2191", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2193", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2194", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2195", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2196", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2197", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2198", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2199", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2200", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2201", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2202", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2203", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2204", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2205", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2206", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2207", 5, 5),
      SCM_STRING_CONST_INITIALIZER("tmp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("case", 4, 4),
      SCM_STRING_CONST_INITIALIZER("arg", 3, 3),
      SCM_STRING_CONST_INITIALIZER("k-alt", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2190", 8, 8),
      SCM_STRING_CONST_INITIALIZER("loop2210", 8, 8),
      SCM_STRING_CONST_INITIALIZER("args2209", 8, 8),
      SCM_STRING_CONST_INITIALIZER("G2211", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2212", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2213", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2214", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2215", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2216", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2217", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2218", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2219", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2220", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2221", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2222", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2223", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2224", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2225", 5, 5),
      SCM_STRING_CONST_INITIALIZER("slot-ref", 8, 8),
      SCM_STRING_CONST_INITIALIZER("select", 6, 6),
      SCM_STRING_CONST_INITIALIZER("rest2208", 8, 8),
      SCM_STRING_CONST_INITIALIZER("let-syntax", 10, 10),
      SCM_STRING_CONST_INITIALIZER("syntax-rules", 12, 12),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("and-let*", 8, 8),
      SCM_STRING_CONST_INITIALIZER("e", 1, 1),
      SCM_STRING_CONST_INITIALIZER("in", 2, 2),
      SCM_STRING_CONST_INITIALIZER("G2227", 5, 5),
      SCM_STRING_CONST_INITIALIZER("G2228", 5, 5),
      SCM_STRING_CONST_INITIALIZER("rest2226", 8, 8),
      SCM_STRING_CONST_INITIALIZER("after", 5, 5),
      SCM_STRING_CONST_INITIALIZER("dynamic-wind", 12, 12),
      SCM_STRING_CONST_INITIALIZER("before", 6, 6),
      SCM_STRING_CONST_INITIALIZER("%with-ports", 11, 11),
  },
};
static struct scm__rcRec {
  ScmUVector d2159[118];
  ScmCompiledCode d2158[120];
  ScmWord d2157[3874];
  ScmPair d2150[1246] SCM_ALIGN_PAIR;
  ScmObj d2149[1496];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2159 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 26, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 43, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 245, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 75, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 22, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 62, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 56, uvector__00008, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 281, uvector__00009, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 97, uvector__00010, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 117, uvector__00011, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 110, uvector__00012, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00013, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00014, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00015, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 315, uvector__00016, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 101, uvector__00017, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 312, uvector__00018, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 58, uvector__00019, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 400, uvector__00020, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 105, uvector__00021, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 88, uvector__00022, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 56, uvector__00023, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 132, uvector__00024, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 65, uvector__00025, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 74, uvector__00026, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 24, uvector__00027, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00028, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 46, uvector__00029, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00030, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 42, uvector__00031, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00032, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 34, uvector__00033, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00034, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00035, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 107, uvector__00036, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 54, uvector__00037, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 19, uvector__00038, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 70, uvector__00039, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 888, uvector__00040, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 206, uvector__00041, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 166, uvector__00042, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 119, uvector__00043, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 150, uvector__00044, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 49, uvector__00045, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 36, uvector__00046, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 44, uvector__00047, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 46, uvector__00048, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 4099, uvector__00049, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 155, uvector__00050, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 5234, uvector__00051, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 370, uvector__00052, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 291, uvector__00053, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 111, uvector__00054, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 167, uvector__00055, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 81, uvector__00056, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 27, uvector__00057, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 22, uvector__00058, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 56, uvector__00059, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00060, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 36, uvector__00061, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 115, uvector__00062, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 67, uvector__00063, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 36, uvector__00064, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 115, uvector__00065, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 67, uvector__00066, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00067, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 22, uvector__00068, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 124, uvector__00069, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 71, uvector__00070, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 30, uvector__00071, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 22, uvector__00072, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 124, uvector__00073, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 71, uvector__00074, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 85, uvector__00075, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 54, uvector__00076, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00077, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 52, uvector__00078, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 80, uvector__00079, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00080, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 46, uvector__00081, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 48, uvector__00082, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 107, uvector__00083, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 64, uvector__00084, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 32, uvector__00085, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 40, uvector__00086, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 53, uvector__00087, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 28, uvector__00088, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 153, uvector__00089, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 53, uvector__00090, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 80, uvector__00091, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 56, uvector__00092, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 39, uvector__00093, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00094, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 172, uvector__00095, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00096, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 39, uvector__00097, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00098, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 172, uvector__00099, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00100, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 39, uvector__00101, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 52, uvector__00102, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 175, uvector__00103, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 51, uvector__00104, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 113, uvector__00105, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 149, uvector__00106, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 260, uvector__00107, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 64, uvector__00108, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 38, uvector__00109, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 40, uvector__00110, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 65, uvector__00111, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 45, uvector__00112, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 65, uvector__00113, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 45, uvector__00114, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00115, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 47, uvector__00116, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 50, uvector__00117, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 47, uvector__00118, 0, NULL),
  },
  {   /* ScmCompiledCode d2158 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port-tell */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[0])), 6,
            6, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[373]),
            SCM_OBJ(&scm__rc.d2158[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[6])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port-position-prefix */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[21])), 59,
            20, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[384]),
            SCM_OBJ(&scm__rc.d2158[3]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[80])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[95])), 9,
            11, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[428]),
            SCM_OBJ(&scm__rc.d2158[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[104])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[428]),
            SCM_OBJ(&scm__rc.d2158[6]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-port-locking */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[108])), 13,
            7, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[437]),
            SCM_OBJ(&scm__rc.d2158[7]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[121])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[136])), 68,
            25, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[440]),
            SCM_OBJ(&scm__rc.d2158[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[204])), 20,
            12, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[440]),
            SCM_OBJ(&scm__rc.d2158[10]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %with-2pass-setup */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[224])), 13,
            7, 3, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[450]),
            SCM_OBJ(&scm__rc.d2158[11]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[237])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[252])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[267])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[282])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* read-string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[297])), 73,
            28, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[602]),
            SCM_OBJ(&scm__rc.d2158[16]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[370])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* write-string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[385])), 73,
            29, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[627]),
            SCM_OBJ(&scm__rc.d2158[18]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[458])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* consume-trailing-whitespaces */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[473])), 97,
            27, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[682]),
            SCM_OBJ(&scm__rc.d2158[20]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[570])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port->string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[585])), 23,
            18, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[722]),
            SCM_OBJ(&scm__rc.d2158[22]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[608])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[623])), 29,
            24, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[728]),
            SCM_OBJ(&scm__rc.d2158[24]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port->list */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[652])), 6,
            5, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[734]),
            SCM_OBJ(&scm__rc.d2158[25]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[658])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (port->string-list #:G2178) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[673])), 6,
            5, 1, 0, SCM_OBJ(&scm__rc.d2150[736]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[742]),
            SCM_OBJ(&scm__rc.d2158[28]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port->string-list */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[679])), 5,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[744]),
            SCM_OBJ(&scm__rc.d2158[28]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[684])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* port->sexp-list */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[701])), 6,
            5, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[749]),
            SCM_OBJ(&scm__rc.d2158[30]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[707])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[722])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[737])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[752])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[767])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* write-walk */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[782])), 22,
            16, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[949]),
            SCM_OBJ(&scm__rc.d2158[36]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[804])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* (%write-walk-rec #:G2182) */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[819])), 2,
            0, 1, 0, SCM_OBJ(&scm__rc.d2150[951]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[957]),
            SCM_OBJ(&scm__rc.d2158[40]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[821])), 13,
            13, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[966]),
            SCM_OBJ(&scm__rc.d2158[39]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %write-walk-rec */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[834])), 190,
            32, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[974]),
            SCM_OBJ(&scm__rc.d2158[40]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1024])), 17,
            14, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %dict-walk! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1041])), 41,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[980]),
            SCM_OBJ(&scm__rc.d2158[42]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1082])), 20,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* write-with-shared-structure */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1102])), 34,
            17, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[992]),
            SCM_OBJ(&scm__rc.d2158[44]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1136])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1151])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* print */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1166])), 10,
            12, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[997]),
            SCM_OBJ(&scm__rc.d2158[47]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1176])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* make-write-controls */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1191])), 733,
            110, 0, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1018]),
            SCM_OBJ(&scm__rc.d2158[49]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1924])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* write-controls-copy */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[1939])), 924,
            120, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1024]),
            SCM_OBJ(&scm__rc.d2158[51]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2863])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* open-input-file */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2878])), 61,
            26, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1030]),
            SCM_OBJ(&scm__rc.d2158[53]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2939])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* open-output-file */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2954])), 37,
            14, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1035]),
            SCM_OBJ(&scm__rc.d2158[55]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[2991])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3006])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1038]),
            SCM_OBJ(&scm__rc.d2158[58]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3010])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1038]),
            SCM_OBJ(&scm__rc.d2158[58]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-with-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3014])), 13,
            7, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1046]),
            SCM_OBJ(&scm__rc.d2158[59]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3027])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3042])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1049]),
            SCM_OBJ(&scm__rc.d2158[62]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3046])), 8,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1049]),
            SCM_OBJ(&scm__rc.d2158[62]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-with-input-file */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3054])), 21,
            11, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1058]),
            SCM_OBJ(&scm__rc.d2158[63]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3075])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3090])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1061]),
            SCM_OBJ(&scm__rc.d2158[66]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3094])), 8,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1061]),
            SCM_OBJ(&scm__rc.d2158[66]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-with-output-file */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3102])), 21,
            11, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1068]),
            SCM_OBJ(&scm__rc.d2158[67]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3123])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3138])), 5,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1071]),
            SCM_OBJ(&scm__rc.d2158[70]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3143])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1071]),
            SCM_OBJ(&scm__rc.d2158[70]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-input-from-file */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3147])), 23,
            11, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1080]),
            SCM_OBJ(&scm__rc.d2158[71]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3170])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3185])), 5,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1083]),
            SCM_OBJ(&scm__rc.d2158[74]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3190])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1083]),
            SCM_OBJ(&scm__rc.d2158[74]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-output-to-file */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3194])), 23,
            11, 2, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1090]),
            SCM_OBJ(&scm__rc.d2158[75]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3217])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-output-to-string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3232])), 15,
            16, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1096]),
            SCM_OBJ(&scm__rc.d2158[77]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3247])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-input-from-string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3262])), 10,
            12, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1102]),
            SCM_OBJ(&scm__rc.d2158[79]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3272])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-with-output-string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3287])), 14,
            15, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1107]),
            SCM_OBJ(&scm__rc.d2158[81]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3301])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-with-input-string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3316])), 9,
            11, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1113]),
            SCM_OBJ(&scm__rc.d2158[83]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3325])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* call-with-string-io */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3340])), 20,
            17, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1118]),
            SCM_OBJ(&scm__rc.d2158[85]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3360])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3375])), 5,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1124]),
            SCM_OBJ(&scm__rc.d2158[87]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-string-io */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3380])), 5,
            4, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1129]),
            SCM_OBJ(&scm__rc.d2158[88]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3385])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3400])), 4,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1146]),
            SCM_OBJ(&scm__rc.d2158[90]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* write-to-string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3404])), 35,
            17, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1151]),
            SCM_OBJ(&scm__rc.d2158[91]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3439])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* read-from-string */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3454])), 18,
            11, 1, 1, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1157]),
            SCM_OBJ(&scm__rc.d2158[93]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3472])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-input-from-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3487])), 8,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1164]),
            SCM_OBJ(&scm__rc.d2158[96]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-input-from-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3495])), 11,
            11, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1165]),
            SCM_OBJ(&scm__rc.d2158[96]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-input-from-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3506])), 31,
            20, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1171]),
            SCM_OBJ(&scm__rc.d2158[97]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3537])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-output-to-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3552])), 8,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1178]),
            SCM_OBJ(&scm__rc.d2158[100]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-output-to-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3560])), 11,
            11, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1179]),
            SCM_OBJ(&scm__rc.d2158[100]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-output-to-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3571])), 31,
            20, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1184]),
            SCM_OBJ(&scm__rc.d2158[101]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3602])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-error-to-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3617])), 8,
            4, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1191]),
            SCM_OBJ(&scm__rc.d2158[104]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-error-to-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3625])), 11,
            11, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1192]),
            SCM_OBJ(&scm__rc.d2158[104]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-error-to-port */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3636])), 31,
            20, 2, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1197]),
            SCM_OBJ(&scm__rc.d2158[105]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3667])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-ports */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3682])), 28,
            11, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1204]),
            SCM_OBJ(&scm__rc.d2158[108]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-ports */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3710])), 33,
            11, 0, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1205]),
            SCM_OBJ(&scm__rc.d2158[108]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* with-ports */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3743])), 35,
            22, 4, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1213]),
            SCM_OBJ(&scm__rc.d2158[109]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3778])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3793])), 7,
            11, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1222]),
            SCM_OBJ(&scm__rc.d2158[111]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3800])), 7,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3807])), 10,
            12, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1230]),
            SCM_OBJ(&scm__rc.d2158[113]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3817])), 7,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3824])), 9,
            12, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1235]),
            SCM_OBJ(&scm__rc.d2158[115]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3833])), 7,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3840])), 10,
            13, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1240]),
            SCM_OBJ(&scm__rc.d2158[117]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3850])), 7,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* #f */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3857])), 10,
            13, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2150[1245]),
            SCM_OBJ(&scm__rc.d2158[119]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2157[3867])), 7,
            5, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2157 */
    /* port-tell */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000007    /*   1 (CONSTI-PUSH 0) */,
    0x00001007    /*   2 (CONSTI-PUSH 1) */,
    0x00003060    /*   3 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* port-seek */,
    0x00000014    /*   5 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[6]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port-tell */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[6]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[0])) /* #<compiled-code port-tell@0x7d5676b291e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port-tell */,
    0x00000014    /*  14 (RET) */,
    /* port-position-prefix */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* port? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 57),
    0x0000100e    /*   7 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 12),
    0x00000048    /*   9 (LREF0-PUSH) */,
    0x0000105f    /*  10 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* port-name */,
    0x00001018    /*  12 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  13 (LREF0) */,
    0x0000001e    /*  14 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 56),
    0x0000100e    /*  16 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 21),
    0x0000004c    /*  18 (LREF10-PUSH) */,
    0x0000105f    /*  19 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* port-current-line */,
    0x00001018    /*  21 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  22 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 27),
    0x00000048    /*  24 (LREF0-PUSH) */,
    0x0000105f    /*  25 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* positive? */,
    0x0000001e    /*  27 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 43),
    0x0000200e    /*  29 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 54),
    0x00000006    /*  31 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[376])) /* (#f 1 #<box #f>) */,
    0x00000009    /*  33 (CONSTF-PUSH) */,
    0x00000006    /*  34 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[109])) /* "~s:line ~a: " */,
    0x0000004c    /*  36 (LREF10-PUSH) */,
    0x0000003d    /*  37 (LREF0) */,
    0x00004088    /*  38 (LIST 4) */,
    0x00002062    /*  39 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* format-internal */,
    0x00000013    /*  41 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 54),
    0x0000200e    /*  43 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]) + 54),
    0x00000006    /*  45 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[379])) /* (#f 1 #<box #f>) */,
    0x00000009    /*  47 (CONSTF-PUSH) */,
    0x00000006    /*  48 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[112])) /* "~s: " */,
    0x00000041    /*  50 (LREF10) */,
    0x00003088    /*  51 (LIST 3) */,
    0x00002062    /*  52 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* format-internal */,
    0x0000000a    /*  54 (CONST-RET) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[113])) /* "" */,
    0x0000000c    /*  56 (CONSTU-RET) */,
    0x0000000a    /*  57 (CONST-RET) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[114])) /* "???" */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[80]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port-position-prefix */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[80]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[2])) /* #<compiled-code port-position-prefix@0x7d5676a17ba0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port-position-prefix */,
    0x00000014    /*  14 (RET) */,
    /* (with-port-locking #f) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[95]) + 5),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-lock! */,
    0x00000049    /*   5 (LREF1-PUSH) */,
    0x0000003d    /*   6 (LREF0) */,
    0x00002095    /*   7 (TAIL-APPLY 2) */,
    0x00000014    /*   8 (RET) */,
    /* (with-port-locking #f) */
    0x0000004a    /*   0 (LREF2-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-unlock! */,
    0x00000014    /*   3 (RET) */,
    /* with-port-locking */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[4])) /* #<compiled-code (with-port-locking #f)@0x7d567859c5a0> */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[5])) /* #<compiled-code (with-port-locking #f)@0x7d567859c4e0> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000006    /*   6 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :source-info */,
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[430])) /* ("libio.scm" 499) */,
    0x00004060    /*  10 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* %unwind-protect */,
    0x00000014    /*  12 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[121]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-port-locking */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[121]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[6])) /* #<compiled-code with-port-locking@0x7d567859c6c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-port-locking */,
    0x00000014    /*  14 (RET) */,
    /* (%with-2pass-setup #f) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 5),
    0x0000004b    /*   2 (LREF3-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-lock! */,
    0x0000100e    /*   5 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 10),
    0x0000004b    /*   7 (LREF3-PUSH) */,
    0x0000105f    /*   8 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-write-state */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 21),
    0x0000200e    /*  12 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 21),
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[127])) /* "[internal] %with-2pass-setup called recursively on port:" */,
    0x0000004b    /*  16 (LREF3-PUSH) */,
    0x0000205f    /*  17 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 21),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 42),
    0x0000004b    /*  23 (LREF3-PUSH) */,
    0x0000300e    /*  24 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 38),
    0x0000005e    /*  26 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <write-state> */,
    0x00000006    /*  28 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :shared-table */,
    0x0000100e    /*  30 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 36),
    0x00000006    /*  32 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* eq? */,
    0x0000105f    /*  34 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* make-hash-table */,
    0x00003062    /*  36 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000061    /*  38 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-write-state */,
    0x000000a1    /*  40 (SETTER) */,
    0x00002011    /*  41 (CALL 2) */,
    0x0000200e    /*  42 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 51),
    0x0000004b    /*  44 (LREF3-PUSH) */,
    0x00000006    /*  45 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000005d    /*  47 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-walking? */,
    0x000000a1    /*  49 (SETTER) */,
    0x00002011    /*  50 (CALL 2) */,
    0x0000000e    /*  51 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 56),
    0x0000004a    /*  53 (LREF2-PUSH) */,
    0x0000003d    /*  54 (LREF0) */,
    0x00002095    /*  55 (TAIL-APPLY 2) */,
    0x0000200e    /*  56 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]) + 64),
    0x0000004b    /*  58 (LREF3-PUSH) */,
    0x00000009    /*  59 (CONSTF-PUSH) */,
    0x0000005d    /*  60 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-walking? */,
    0x000000a1    /*  62 (SETTER) */,
    0x00002011    /*  63 (CALL 2) */,
    0x00000049    /*  64 (LREF1-PUSH) */,
    0x0000003d    /*  65 (LREF0) */,
    0x00002095    /*  66 (TAIL-APPLY 2) */,
    0x00000014    /*  67 (RET) */,
    /* (%with-2pass-setup #f) */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[204]) + 8),
    0x0000004b    /*   2 (LREF3-PUSH) */,
    0x00000009    /*   3 (CONSTF-PUSH) */,
    0x0000005d    /*   4 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-walking? */,
    0x000000a1    /*   6 (SETTER) */,
    0x00002011    /*   7 (CALL 2) */,
    0x0000200e    /*   8 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[204]) + 16),
    0x0000004b    /*  10 (LREF3-PUSH) */,
    0x00000009    /*  11 (CONSTF-PUSH) */,
    0x0000005d    /*  12 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-write-state */,
    0x000000a1    /*  14 (SETTER) */,
    0x00002011    /*  15 (CALL 2) */,
    0x0000004b    /*  16 (LREF3-PUSH) */,
    0x00001060    /*  17 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-unlock! */,
    0x00000014    /*  19 (RET) */,
    /* %with-2pass-setup */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[8])) /* #<compiled-code (%with-2pass-setup #f)@0x7d5677458f60> */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[9])) /* #<compiled-code (%with-2pass-setup #f)@0x7d5677458ba0> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000006    /*   6 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :source-info */,
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[442])) /* ("libio.scm" 510) */,
    0x00004060    /*  10 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* %unwind-protect */,
    0x00000014    /*  12 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[237]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %with-2pass-setup */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[237]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[10])) /* #<compiled-code %with-2pass-setup@0x7d5677432120> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %with-2pass-setup */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[252]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* u8-ready? */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[252]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* byte-ready? */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* u8-ready? */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[267]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* read-u8 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[267]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* read-byte */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* read-u8 */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[282]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* peek-u8 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[282]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* peek-byte */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* peek-u8 */,
    0x00000014    /*  14 (RET) */,
    /* read-string */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 6),
    0x000000de    /*   3 (CURIN) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[151])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[596])) /* (lambda (n :optional (port (current-input-port))) (define o (open-output-string :private? #t)) (let loop ((i 0)) (if (>= i n) (get-output-string o) (let1 c (read-char port) (if (eof-object? c) (if (= i 0) (eof-object) (get-output-string o)) (begin (write-char c o) (loop (+ i 1)))))))) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00001019    /*  29 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[597])) /* (#<undef>) */,
    0x0000200e    /*  31 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 39),
    0x00000006    /*  33 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :private? */,
    0x00000006    /*  35 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000205f    /*  37 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-string */,
    0x000000e8    /*  39 (ENV-SET 0) */,
    0x00000007    /*  40 (CONSTI-PUSH 0) */,
    0x00001017    /*  41 (LOCAL-ENV 1) */,
    0x0040303c    /*  42 (LREF 3 1) */,
    0x0000002c    /*  43 (LREF-VAL0-BNGE 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 49),
    0x0000004c    /*  45 (LREF10-PUSH) */,
    0x00001060    /*  46 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* get-output-string */,
    0x00000014    /*  48 (RET) */,
    0x00000045    /*  49 (LREF21) */,
    0x000010db    /*  50 (READ-CHAR 1) */,
    0x00001018    /*  51 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  52 (LREF0) */,
    0x0000009a    /*  53 (EOFP) */,
    0x0000001e    /*  54 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 65),
    0x00000041    /*  56 (LREF10) */,
    0x0000002d    /*  57 (BNUMNEI 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 61),
    0x0000000a    /*  59 (CONST-RET) */,
    SCM_WORD(SCM_EOF) /* #<eof> */,
    0x0000004f    /*  61 (LREF20-PUSH) */,
    0x00001060    /*  62 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* get-output-string */,
    0x00000014    /*  64 (RET) */,
    0x00000048    /*  65 (LREF0-PUSH) */,
    0x00000044    /*  66 (LREF20) */,
    0x000020dd    /*  67 (WRITE-CHAR 2) */,
    0x000010cb    /*  68 (LREF10-NUMADDI-PUSH 1) */,
    0x0000201b    /*  69 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]) + 42),
    0x00000014    /*  71 (RET) */,
    0x00000014    /*  72 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[370]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* read-string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[370]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[15])) /* #<compiled-code read-string@0x7d56770f5ae0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* read-string */,
    0x00000014    /*  14 (RET) */,
    /* write-string */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 6),
    0x000000df    /*   3 (CUROUT) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 22),
    0x00000002    /*  19 (CONSTI 0) */,
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 23),
    0x0000006a    /*  22 (LREF0-CAR) */,
    0x0000000d    /*  23 (PUSH) */,
    0x0000003d    /*  24 (LREF0) */,
    0x00000022    /*  25 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 30),
    0x00000003    /*  27 (CONSTN) */,
    0x00000013    /*  28 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 31),
    0x00000076    /*  30 (LREF0-CDR) */,
    0x00002018    /*  31 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  32 (LREF0) */,
    0x00000022    /*  33 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 38),
    -0x00000ffe   /*  35 (CONSTI -1) */,
    0x00000013    /*  36 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 39),
    0x0000006a    /*  38 (LREF0-CAR) */,
    0x0000000d    /*  39 (PUSH) */,
    0x0000003d    /*  40 (LREF0) */,
    0x00000022    /*  41 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 46),
    0x00000003    /*  43 (CONSTN) */,
    0x00000013    /*  44 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 47),
    0x00000076    /*  46 (LREF0-CDR) */,
    0x00002018    /*  47 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  48 (LREF0) */,
    0x00000022    /*  49 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 53),
    0x00000013    /*  51 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 61),
    0x0000200e    /*  53 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 61),
    0x00000006    /*  55 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[151])) /* "too many arguments for" */,
    0x00000006    /*  57 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[622])) /* (lambda (string :optional (port (current-output-port)) (start 0) (end -1)) (display (opt-substring string start end) port)) */,
    0x0000205f    /*  59 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000300e    /*  61 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]) + 68),
    0x00403047    /*  63 (LREF-PUSH 3 1) */,
    0x0000004d    /*  64 (LREF11-PUSH) */,
    0x00000049    /*  65 (LREF1-PUSH) */,
    0x0000305f    /*  66 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* opt-substring */,
    0x0000000d    /*  68 (PUSH) */,
    0x00000050    /*  69 (LREF21-PUSH) */,
    0x00002060    /*  70 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x00000014    /*  72 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[458]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* write-string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[458]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[17])) /* #<compiled-code write-string@0x7d5676d77960> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* write-string */,
    0x00000014    /*  14 (RET) */,
    /* consume-trailing-whitespaces */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 6),
    0x000000de    /*   3 (CURIN) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[151])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[677])) /* (lambda (:optional (port (current-input-port))) (let loop () (when (byte-ready? port) (let1 b (peek-byte port) (cond ((memv b '(9 32)) (read-byte port) (loop)) ((eqv? b 13) (read-byte port) (when (and (byte-ready? port) (eqv? (peek-byte port) 10)) (read-byte port))) ((eqv? b 10) (read-byte port))))))) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000100e    /*  29 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 34),
    0x00000049    /*  31 (LREF1-PUSH) */,
    0x0000105f    /*  32 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* byte-ready? */,
    0x0000001e    /*  34 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 95),
    0x0000100e    /*  36 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 41),
    0x00000049    /*  38 (LREF1-PUSH) */,
    0x0000105f    /*  39 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* peek-byte */,
    0x00001018    /*  41 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*  42 (LREF0-PUSH) */,
    0x00000001    /*  43 (CONST) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[631])) /* (9 32) */,
    0x0000008c    /*  45 (MEMV) */,
    0x0000001e    /*  46 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 56),
    0x0000100e    /*  48 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 53),
    0x0000004d    /*  50 (LREF11-PUSH) */,
    0x0000105f    /*  51 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read-byte */,
    0x0000101b    /*  53 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 29),
    0x00000014    /*  55 (RET) */,
    0x0000003d    /*  56 (LREF0) */,
    0x0000002f    /*  57 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_INT(13U)) /* 13 */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 86)  /*     86 */,
    0x0000100e    /*  60 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 65),
    0x0000004d    /*  62 (LREF11-PUSH) */,
    0x0000105f    /*  63 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read-byte */,
    0x0000100e    /*  65 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 70),
    0x0000004d    /*  67 (LREF11-PUSH) */,
    0x0000105f    /*  68 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* byte-ready? */,
    0x0000001e    /*  70 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 85),
    0x0000100e    /*  72 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 77),
    0x0000004d    /*  74 (LREF11-PUSH) */,
    0x0000105f    /*  75 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* peek-byte */,
    0x0000002f    /*  77 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_INT(10U)) /* 10 */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 84)  /*     84 */,
    0x0000004d    /*  80 (LREF11-PUSH) */,
    0x00001060    /*  81 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read-byte */,
    0x00000014    /*  83 (RET) */,
    0x0000000c    /*  84 (CONSTU-RET) */,
    0x0000000c    /*  85 (CONSTU-RET) */,
    0x0000003d    /*  86 (LREF0) */,
    0x0000002f    /*  87 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_INT(10U)) /* 10 */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]) + 94)  /*     94 */,
    0x0000004d    /*  90 (LREF11-PUSH) */,
    0x00001060    /*  91 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* read-byte */,
    0x00000014    /*  93 (RET) */,
    0x0000000c    /*  94 (CONSTU-RET) */,
    0x0000000c    /*  95 (CONSTU-RET) */,
    0x00000014    /*  96 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[570]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* consume-trailing-whitespaces */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[570]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[19])) /* #<compiled-code consume-trailing-whitespaces@0x7d567712a360> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* consume-trailing-whitespaces */,
    0x00000014    /*  14 (RET) */,
    /* port->string */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[585]) + 8),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :private? */,
    0x00000006    /*   4 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000205f    /*   6 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-string */,
    0x00001018    /*   8 (PUSH-LOCAL-ENV 1) */,
    0x0000400e    /*   9 (PRE-CALL 4) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[585]) + 19),
    0x0000004c    /*  11 (LREF10-PUSH) */,
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x00000006    /*  13 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :unit */,
    0x00000006    /*  15 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* byte */,
    0x0000405f    /*  17 (GREF-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* copy-port */,
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x00001060    /*  20 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* get-output-string */,
    0x00000014    /*  22 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[608]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port->string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[608]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[21])) /* #<compiled-code port->string@0x7d5676beed80> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port->string */,
    0x00000014    /*  14 (RET) */,
    /* (port->list #f) */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[623]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000003e    /*   3 (LREF1) */,
    0x00001011    /*   4 (CALL 1) */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000008    /*   6 (CONSTN-PUSH) */,
    0x00002017    /*   7 (LOCAL-ENV 2) */,
    0x0000003e    /*   8 (LREF1) */,
    0x0000009a    /*   9 (EOFP) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[623]) + 16),
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x00001060    /*  13 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* reverse! */,
    0x00000014    /*  15 (RET) */,
    0x0000100e    /*  16 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[623]) + 21),
    0x0000004c    /*  18 (LREF10-PUSH) */,
    0x00000042    /*  19 (LREF11) */,
    0x00001011    /*  20 (CALL 1) */,
    0x0000000d    /*  21 (PUSH) */,
    0x00000049    /*  22 (LREF1-PUSH) */,
    0x0000003d    /*  23 (LREF0) */,
    0x00000067    /*  24 (CONS-PUSH) */,
    0x0000101b    /*  25 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[623]) + 8),
    0x00000014    /*  27 (RET) */,
    0x00000014    /*  28 (RET) */,
    /* port->list */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000016    /*   1 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[23])) /* #<compiled-code (port->list #f)@0x7d567aaa1c00> */,
    0x00002063    /*   3 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-port-locking */,
    0x00000014    /*   5 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[658]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port->list */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[658]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[24])) /* #<compiled-code port->list@0x7d567aaa1de0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port->list */,
    0x00000014    /*  14 (RET) */,
    /* (port->string-list #:G2178) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000006    /*   1 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x00002060    /*   3 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* read-line */,
    0x00000014    /*   5 (RET) */,
    /* port->string-list */
    0x0000004c    /*   0 (LREF10-PUSH) */,
    0x00000048    /*   1 (LREF0-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* port->list */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[743])) /* (#<compiled-code (port->string-list #:G2178)@0x7d567814b360>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[684]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port->string-list */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[684]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[27])) /* #<compiled-code port->string-list@0x7d567814b300> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port->string-list */,
    0x00000014    /*  16 (RET) */,
    /* port->sexp-list */
    0x0000005e    /*   0 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* read */,
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00002060    /*   3 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* port->list */,
    0x00000014    /*   5 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[707]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* port->sexp-list */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[707]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[29])) /* #<compiled-code port->sexp-list@0x7d56774679c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* port->sexp-list */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[722]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* read-with-shared-structure */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[722]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* read */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* read-with-shared-structure */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[737]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* read/ss */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[737]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* read */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* read/ss */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[752]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* write-u8 */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[752]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* write-byte */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* write-u8 */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[767]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* write* */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[767]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* write-shared */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* write* */,
    0x00000014    /*  14 (RET) */,
    /* write-walk */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[782]) + 5),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-write-state */,
    0x00001018    /*   5 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   6 (LREF0) */,
    0x0000001e    /*   7 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[782]) + 21),
    0x0000004d    /*   9 (LREF11-PUSH) */,
    0x0000004c    /*  10 (LREF10-PUSH) */,
    0x0000200e    /*  11 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[782]) + 18),
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x0000005e    /*  14 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* shared-table */,
    0x0000205f    /*  16 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00003063    /*  18 (PUSH-GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %write-walk-rec */,
    0x00000014    /*  20 (RET) */,
    0x0000000c    /*  21 (CONSTU-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[804]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* write-walk */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[804]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[35])) /* #<compiled-code write-walk@0x7d5676c90c60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* write-walk */,
    0x00000014    /*  14 (RET) */,
    /* (%write-walk-rec #:G2182) */
    0x000010bd    /*   0 (LREF0-NUMADDI 1) */,
    0x00000014    /*   1 (RET) */,
    /* (%write-walk-rec #f) */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[821]) + 7),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000004d    /*   3 (LREF11-PUSH) */,
    0x0000004c    /*   4 (LREF10-PUSH) */,
    0x0000305f    /*   5 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %write-walk-rec */,
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x0000004d    /*   8 (LREF11-PUSH) */,
    0x0000004c    /*   9 (LREF10-PUSH) */,
    0x00003060    /*  10 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %write-walk-rec */,
    0x00000014    /*  12 (RET) */,
    /* %write-walk-rec */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 5),
    0x0000004a    /*   2 (LREF2-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* write-need-recurse? */,
    0x0000001e    /*   5 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 189),
    0x0000200e    /*   7 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 13),
    0x00000048    /*   9 (LREF0-PUSH) */,
    0x0000004a    /*  10 (LREF2-PUSH) */,
    0x0000205f    /*  11 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-exists? */,
    0x0000001e    /*  13 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 21),
    0x00000048    /*  15 (LREF0-PUSH) */,
    0x0000004a    /*  16 (LREF2-PUSH) */,
    0x0000004c    /*  17 (LREF10-PUSH) */,
    0x00003060    /*  18 (GREF-TAIL-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-update! */,
    0x00000014    /*  20 (RET) */,
    0x0000300e    /*  21 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 28),
    0x00000048    /*  23 (LREF0-PUSH) */,
    0x0000004a    /*  24 (LREF2-PUSH) */,
    0x00001007    /*  25 (CONSTI-PUSH 1) */,
    0x0000305f    /*  26 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-put! */,
    0x0000003f    /*  28 (LREF2) */,
    0x0000009c    /*  29 (SYMBOLP) */,
    0x0000001e    /*  30 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 34),
    0x00000013    /*  32 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000003f    /*  34 (LREF2) */,
    0x0000009b    /*  35 (STRINGP) */,
    0x0000001e    /*  36 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 40),
    0x00000013    /*  38 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000100e    /*  40 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 45),
    0x0000004a    /*  42 (LREF2-PUSH) */,
    0x0000105f    /*  43 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* uvector? */,
    0x0000001e    /*  45 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 49),
    0x00000013    /*  47 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000003f    /*  49 (LREF2) */,
    0x00000098    /*  50 (PAIRP) */,
    0x0000001e    /*  51 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 71),
    0x0000300e    /*  53 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 61),
    0x0000006c    /*  55 (LREF2-CAR) */,
    0x0000000d    /*  56 (PUSH) */,
    0x00000049    /*  57 (LREF1-PUSH) */,
    0x00000048    /*  58 (LREF0-PUSH) */,
    0x0000305f    /*  59 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %write-walk-rec */,
    0x0000300e    /*  61 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x00000078    /*  63 (LREF2-CDR) */,
    0x0000000d    /*  64 (PUSH) */,
    0x00000049    /*  65 (LREF1-PUSH) */,
    0x00000048    /*  66 (LREF0-PUSH) */,
    0x0000305f    /*  67 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %write-walk-rec */,
    0x00000013    /*  69 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000003f    /*  71 (LREF2) */,
    0x0000009d    /*  72 (VECTORP) */,
    0x0000001e    /*  73 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 103),
    0x0000200e    /*  75 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000003f    /*  77 (LREF2) */,
    0x000000a7    /*  78 (VEC-LEN) */,
    0x0000000d    /*  79 (PUSH) */,
    0x00000007    /*  80 (CONSTI-PUSH 0) */,
    0x00002017    /*  81 (LOCAL-ENV 2) */,
    0x0000003e    /*  82 (LREF1) */,
    0x0000002c    /*  83 (LREF-VAL0-BNGE 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 86),
    0x0000000c    /*  85 (CONSTU-RET) */,
    0x0000300e    /*  86 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 96),
    0x0000004e    /*  88 (LREF12-PUSH) */,
    0x0000003d    /*  89 (LREF0) */,
    0x000000a8    /*  90 (VEC-REF) */,
    0x0000000d    /*  91 (PUSH) */,
    0x0000004d    /*  92 (LREF11-PUSH) */,
    0x0000004c    /*  93 (LREF10-PUSH) */,
    0x0000305f    /*  94 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %write-walk-rec */,
    0x00000049    /*  96 (LREF1-PUSH) */,
    0x000010c7    /*  97 (LREF0-NUMADDI-PUSH 1) */,
    0x0000101b    /*  98 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 82),
    0x00000014    /* 100 (RET) */,
    0x00000013    /* 101 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000100e    /* 103 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 108),
    0x0000004a    /* 105 (LREF2-PUSH) */,
    0x0000105f    /* 106 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* box? */,
    0x0000001e    /* 108 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 144),
    0x0000200e    /* 110 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000100e    /* 112 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 117),
    0x0000004a    /* 114 (LREF2-PUSH) */,
    0x0000105f    /* 115 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* box-arity */,
    0x0000000d    /* 117 (PUSH) */,
    0x00000007    /* 118 (CONSTI-PUSH 0) */,
    0x00002017    /* 119 (LOCAL-ENV 2) */,
    0x0000003e    /* 120 (LREF1) */,
    0x0000002c    /* 121 (LREF-VAL0-BNGE 0 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 124),
    0x0000000c    /* 123 (CONSTU-RET) */,
    0x0000300e    /* 124 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 137),
    0x0000200e    /* 126 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 132),
    0x0000004e    /* 128 (LREF12-PUSH) */,
    0x00000048    /* 129 (LREF0-PUSH) */,
    0x0000205f    /* 130 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* unbox-value */,
    0x0000000d    /* 132 (PUSH) */,
    0x0000004d    /* 133 (LREF11-PUSH) */,
    0x0000004c    /* 134 (LREF10-PUSH) */,
    0x0000305f    /* 135 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* %write-walk-rec */,
    0x00000049    /* 137 (LREF1-PUSH) */,
    0x000010c7    /* 138 (LREF0-NUMADDI-PUSH 1) */,
    0x0000101b    /* 139 (LOCAL-ENV-JUMP 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 120),
    0x00000014    /* 141 (RET) */,
    0x00000013    /* 142 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000004a    /* 144 (LREF2-PUSH) */,
    0x0000005d    /* 145 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* <dictionary> */,
    0x00000096    /* 147 (IS-A) */,
    0x0000001e    /* 148 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 159),
    0x0000200e    /* 150 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000004a    /* 152 (LREF2-PUSH) */,
    0x00000016    /* 153 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[38])) /* #<compiled-code (%write-walk-rec #f)@0x7d5676d437e0> */,
    0x00002062    /* 155 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* %dict-walk! */,
    0x00000013    /* 157 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000200e    /* 159 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 165),
    0x0000004a    /* 161 (LREF2-PUSH) */,
    0x00000049    /* 162 (LREF1-PUSH) */,
    0x0000205f    /* 163 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* write-object */,
    0x0000100e    /* 165 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 170),
    0x00000049    /* 167 (LREF1-PUSH) */,
    0x0000105f    /* 168 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %port-writing-shared? */,
    0x0000001e    /* 170 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 173),
    0x0000000c    /* 172 (CONSTU-RET) */,
    0x0000300e    /* 173 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 180),
    0x00000048    /* 175 (LREF0-PUSH) */,
    0x0000004a    /* 176 (LREF2-PUSH) */,
    0x00000009    /* 177 (CONSTF-PUSH) */,
    0x0000305f    /* 178 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-get */,
    0x0000002f    /* 180 (BNEQVC) */,
    SCM_WORD(SCM_MAKE_INT(1U)) /* 1 */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]) + 188)  /*    188 */,
    0x00000048    /* 183 (LREF0-PUSH) */,
    0x0000004a    /* 184 (LREF2-PUSH) */,
    0x00002060    /* 185 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* hash-table-delete! */,
    0x00000014    /* 187 (RET) */,
    0x0000000c    /* 188 (CONSTU-RET) */,
    0x0000000c    /* 189 (CONSTU-RET) */,
    /* %toplevel */
    0x00001019    /*   0 (LOCAL-ENV-CLOSURES 1) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[958])) /* (#<compiled-code (%write-walk-rec #:G2182)@0x7d5676d438a0>) */,
    0x0000000e    /*   2 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1024]) + 6),
    0x0000005f    /*   4 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000001    /*   7 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %write-walk-rec */,
    0x000000ee    /*   9 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1024]) + 14),
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[39])) /* #<compiled-code %write-walk-rec@0x7d5676d43840> */,
    0x00000014    /*  13 (RET) */,
    0x00000015    /*  14 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %write-walk-rec */,
    0x00000014    /*  16 (RET) */,
    /* %dict-walk! */
    0x004010ea    /*   0 (LREF-UNBOX 1 1) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]) + 5),
    0x00000013    /*   3 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]) + 14),
    0x0000200e    /*   5 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]) + 13),
    0x00000006    /*   7 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.libdict */,
    0x00000006    /*   9 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* dict-for-each */,
    0x0000205f    /*  11 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x0040103a    /*  13 (LSET 1 1) */,
    0x000010ea    /*  14 (LREF-UNBOX 1 0) */,
    0x0000001e    /*  15 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]) + 19),
    0x00000013    /*  17 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]) + 28),
    0x0000200e    /*  19 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]) + 27),
    0x00000006    /*  21 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche.libdict */,
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* dict-transparent? */,
    0x0000205f    /*  25 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* module-binding-ref */,
    0x0000103a    /*  27 (LSET 1 0) */,
    0x0000100e    /*  28 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]) + 33),
    0x00000049    /*  30 (LREF1-PUSH) */,
    0x000010ea    /*  31 (LREF-UNBOX 1 0) */,
    0x00001011    /*  32 (CALL 1) */,
    0x0000001e    /*  33 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]) + 40),
    0x00000049    /*  35 (LREF1-PUSH) */,
    0x00000048    /*  36 (LREF0-PUSH) */,
    0x004010ea    /*  37 (LREF-UNBOX 1 1) */,
    0x00002012    /*  38 (TAIL-CALL 2) */,
    0x00000014    /*  39 (RET) */,
    0x0000000c    /*  40 (CONSTU-RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1082]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %dict-walk! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1082]) + 17),
    0x00000009    /*   9 (CONSTF-PUSH) */,
    0x00000009    /*  10 (CONSTF-PUSH) */,
    0x00002017    /*  11 (LOCAL-ENV 2) */,
    0x000020e7    /*  12 (BOX 2) */,
    0x000010e7    /*  13 (BOX 1) */,
    0x00000016    /*  14 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[41])) /* #<compiled-code %dict-walk!@0x7d5676a6e8a0> */,
    0x00000014    /*  16 (RET) */,
    0x00000015    /*  17 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %dict-walk! */,
    0x00000014    /*  19 (RET) */,
    /* write-with-shared-structure */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1102]) + 6),
    0x000000df    /*   3 (CUROUT) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1102]) + 7),
    0x0000006a    /*   6 (LREF0-CAR) */,
    0x0000000d    /*   7 (PUSH) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000022    /*   9 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1102]) + 14),
    0x00000003    /*  11 (CONSTN) */,
    0x00000013    /*  12 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1102]) + 15),
    0x00000076    /*  14 (LREF0-CDR) */,
    0x00002018    /*  15 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  16 (LREF0) */,
    0x00000022    /*  17 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1102]) + 21),
    0x00000013    /*  19 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1102]) + 29),
    0x0000200e    /*  21 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1102]) + 29),
    0x00000006    /*  23 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[151])) /* "too many arguments for" */,
    0x00000006    /*  25 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[987])) /* (lambda (obj :optional (port (current-output-port))) (write* obj port)) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x0000004d    /*  29 (LREF11-PUSH) */,
    0x00000049    /*  30 (LREF1-PUSH) */,
    0x00002060    /*  31 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* write* */,
    0x00000014    /*  33 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1136]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* write-with-shared-structure */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1136]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[43])) /* #<compiled-code write-with-shared-structure@0x7d5678ce4c00> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* write-with-shared-structure */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1151]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* write/ss */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1151]) + 12),
    0x0000005d    /*   9 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* write-with-shared-structure */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* write/ss */,
    0x00000014    /*  14 (RET) */,
    /* print */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1166]) + 7),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* display */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* for-each */,
    0x00000060    /*   7 (GREF-TAIL-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* newline */,
    0x00000014    /*   9 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1176]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* print */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1176]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[46])) /* #<compiled-code print@0x7d567790b3c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* print */,
    0x00000014    /*  14 (RET) */,
    /* make-write-controls */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000005    /*   1 (CONSTU) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000005    /*   3 (CONSTU) */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000005    /*   5 (CONSTU) */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000005    /*   7 (CONSTU) */,
    0x0000000d    /*   8 (PUSH) */,
    0x00000005    /*   9 (CONSTU) */,
    0x0000000d    /*  10 (PUSH) */,
    0x00000005    /*  11 (CONSTU) */,
    0x0000000d    /*  12 (PUSH) */,
    0x00000005    /*  13 (CONSTU) */,
    0x0000000d    /*  14 (PUSH) */,
    0x00000005    /*  15 (CONSTU) */,
    0x0000000d    /*  16 (PUSH) */,
    0x00000005    /*  17 (CONSTU) */,
    0x0000000d    /*  18 (PUSH) */,
    0x00000005    /*  19 (CONSTU) */,
    0x0000000d    /*  20 (PUSH) */,
    0x00000005    /*  21 (CONSTU) */,
    0x0000000d    /*  22 (PUSH) */,
    0x00000005    /*  23 (CONSTU) */,
    0x0000000d    /*  24 (PUSH) */,
    0x00000005    /*  25 (CONSTU) */,
    0x0000000d    /*  26 (PUSH) */,
    0x00000005    /*  27 (CONSTU) */,
    0x0000000d    /*  28 (PUSH) */,
    0x00000005    /*  29 (CONSTU) */,
    0x00010018    /*  30 (PUSH-LOCAL-ENV 16) */,
    0x03c0003c    /*  31 (LREF 0 15) */,
    0x00000022    /*  32 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 312),
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 39),
    0x03800047    /*  36 (LREF-PUSH 0 14) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  39 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 44),
    0x00000005    /*  41 (CONSTU) */,
    0x00000013    /*  42 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 45),
    0x0380003c    /*  44 (LREF 0 14) */,
    0x00001018    /*  45 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  46 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 51),
    0x03401047    /*  48 (LREF-PUSH 1 13) */,
    0x0000105f    /*  49 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  51 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 56),
    0x00000005    /*  53 (CONSTU) */,
    0x00000013    /*  54 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 57),
    0x0340103c    /*  56 (LREF 1 13) */,
    0x00001018    /*  57 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  58 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 63),
    0x03002047    /*  60 (LREF-PUSH 2 12) */,
    0x0000105f    /*  61 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  63 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 68),
    0x00000005    /*  65 (CONSTU) */,
    0x00000013    /*  66 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 69),
    0x0300203c    /*  68 (LREF 2 12) */,
    0x00001018    /*  69 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  70 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 75),
    0x02c03047    /*  72 (LREF-PUSH 3 11) */,
    0x0000105f    /*  73 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  75 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 80),
    0x00000005    /*  77 (CONSTU) */,
    0x00000013    /*  78 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 81),
    0x02c0303c    /*  80 (LREF 3 11) */,
    0x00001018    /*  81 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  82 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 87),
    0x02804047    /*  84 (LREF-PUSH 4 10) */,
    0x0000105f    /*  85 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  87 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 92),
    0x00000005    /*  89 (CONSTU) */,
    0x00000013    /*  90 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 93),
    0x0280403c    /*  92 (LREF 4 10) */,
    0x00001018    /*  93 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  94 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 99),
    0x02405047    /*  96 (LREF-PUSH 5 9) */,
    0x0000105f    /*  97 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  99 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 104),
    0x00000005    /* 101 (CONSTU) */,
    0x00000013    /* 102 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 105),
    0x0240503c    /* 104 (LREF 5 9) */,
    0x00001018    /* 105 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 106 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 111),
    0x02006047    /* 108 (LREF-PUSH 6 8) */,
    0x0000105f    /* 109 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 111 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 116),
    0x00000005    /* 113 (CONSTU) */,
    0x00000013    /* 114 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 117),
    0x0200603c    /* 116 (LREF 6 8) */,
    0x00001018    /* 117 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 118 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 123),
    0x01c07047    /* 120 (LREF-PUSH 7 7) */,
    0x0000105f    /* 121 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 123 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 128),
    0x00000005    /* 125 (CONSTU) */,
    0x00000013    /* 126 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 129),
    0x01c0703c    /* 128 (LREF 7 7) */,
    0x00001018    /* 129 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 130 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 135),
    0x01808047    /* 132 (LREF-PUSH 8 6) */,
    0x0000105f    /* 133 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 135 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 140),
    0x00000005    /* 137 (CONSTU) */,
    0x00000013    /* 138 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 141),
    0x0180803c    /* 140 (LREF 8 6) */,
    0x00001018    /* 141 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 142 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 147),
    0x01409047    /* 144 (LREF-PUSH 9 5) */,
    0x0000105f    /* 145 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 147 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 152),
    0x00000005    /* 149 (CONSTU) */,
    0x00000013    /* 150 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 153),
    0x0140903c    /* 152 (LREF 9 5) */,
    0x00001018    /* 153 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 154 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 159),
    0x0100a047    /* 156 (LREF-PUSH 10 4) */,
    0x0000105f    /* 157 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 159 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 164),
    0x00000005    /* 161 (CONSTU) */,
    0x00000013    /* 162 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 165),
    0x0100a03c    /* 164 (LREF 10 4) */,
    0x00001018    /* 165 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 166 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 171),
    0x00c0b047    /* 168 (LREF-PUSH 11 3) */,
    0x0000105f    /* 169 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 171 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 176),
    0x00000005    /* 173 (CONSTU) */,
    0x00000013    /* 174 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 177),
    0x00c0b03c    /* 176 (LREF 11 3) */,
    0x00001018    /* 177 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 178 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 183),
    0x0080c047    /* 180 (LREF-PUSH 12 2) */,
    0x0000105f    /* 181 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 183 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 188),
    0x00000005    /* 185 (CONSTU) */,
    0x00000013    /* 186 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 189),
    0x0080c03c    /* 188 (LREF 12 2) */,
    0x00001018    /* 189 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 190 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 195),
    0x0040d047    /* 192 (LREF-PUSH 13 1) */,
    0x0000105f    /* 193 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 195 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 200),
    0x00000005    /* 197 (CONSTU) */,
    0x00000013    /* 198 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 201),
    0x0040d03c    /* 200 (LREF 13 1) */,
    0x00001018    /* 201 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 202 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 207),
    0x0000e047    /* 204 (LREF-PUSH 14 0) */,
    0x0000105f    /* 205 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 207 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 212),
    0x00000005    /* 209 (CONSTU) */,
    0x00000013    /* 210 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 213),
    0x0000e03c    /* 212 (LREF 14 0) */,
    0x00001018    /* 213 (PUSH-LOCAL-ENV 1) */,
    0x0000005e    /* 214 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <write-controls> */,
    0x00000006    /* 216 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    0x0000100e    /* 218 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 223),
    0x00005047    /* 220 (LREF-PUSH 5 0) */,
    0x0000105f    /* 221 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 223 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 228),
    0x0000e03c    /* 225 (LREF 14 0) */,
    0x00000013    /* 226 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 229),
    0x0000503c    /* 228 (LREF 5 0) */,
    0x0000000d    /* 229 (PUSH) */,
    0x00000006    /* 230 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    0x0000100e    /* 232 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 237),
    0x00004047    /* 234 (LREF-PUSH 4 0) */,
    0x0000105f    /* 235 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 237 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 242),
    0x0000d03c    /* 239 (LREF 13 0) */,
    0x00000013    /* 240 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 243),
    0x0000403c    /* 242 (LREF 4 0) */,
    0x0000000d    /* 243 (PUSH) */,
    0x00000006    /* 244 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :width */,
    0x0000100e    /* 246 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 251),
    0x00000051    /* 248 (LREF30-PUSH) */,
    0x0000105f    /* 249 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 251 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 256),
    0x0000c03c    /* 253 (LREF 12 0) */,
    0x00000013    /* 254 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 257),
    0x00000046    /* 256 (LREF30) */,
    0x0000000d    /* 257 (PUSH) */,
    0x00000006    /* 258 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :base */,
    0x0000100e    /* 260 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 265),
    0x0000004f    /* 262 (LREF20-PUSH) */,
    0x0000105f    /* 263 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 265 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 270),
    0x0000b03c    /* 267 (LREF 11 0) */,
    0x00000013    /* 268 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 271),
    0x00000044    /* 270 (LREF20) */,
    0x0000000d    /* 271 (PUSH) */,
    0x00000006    /* 272 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :radix */,
    0x0000100e    /* 274 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 279),
    0x0000004c    /* 276 (LREF10-PUSH) */,
    0x0000105f    /* 277 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 279 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 284),
    0x0000a03c    /* 281 (LREF 10 0) */,
    0x00000013    /* 282 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 285),
    0x00000041    /* 284 (LREF10) */,
    0x0000000d    /* 285 (PUSH) */,
    0x00000006    /* 286 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :pretty */,
    0x0000100e    /* 288 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 293),
    0x00000048    /* 290 (LREF0-PUSH) */,
    0x0000105f    /* 291 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 293 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 298),
    0x0000903c    /* 295 (LREF 9 0) */,
    0x00000013    /* 296 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 299),
    0x0000003d    /* 298 (LREF0) */,
    0x0000000d    /* 299 (PUSH) */,
    0x00000006    /* 300 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :string-length */,
    0x00007047    /* 302 (LREF-PUSH 7 0) */,
    0x00000006    /* 303 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :indent */,
    0x00008047    /* 305 (LREF-PUSH 8 0) */,
    0x00000006    /* 306 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :exact-decimal */,
    0x00006047    /* 308 (LREF-PUSH 6 0) */,
    0x00013060    /* 309 (GREF-TAIL-CALL 19) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /* 311 (RET) */,
    0x03c0003c    /* 312 (LREF 0 15) */,
    0x00000074    /* 313 (CDR) */,
    0x00000022    /* 314 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 322),
    0x00000006    /* 316 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[275])) /* "keyword list not even" */,
    0x03c00047    /* 318 (LREF-PUSH 0 15) */,
    0x00002060    /* 319 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 321 (RET) */,
    0x0000100e    /* 322 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 328),
    0x03c0003c    /* 324 (LREF 0 15) */,
    0x00000069    /* 325 (CAR-PUSH) */,
    0x0000105f    /* 326 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /* 328 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 329 (LREF0) */,
    0x0000002e    /* 330 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 354)  /*    354 */,
    0x03c0103c    /* 333 (LREF 1 15) */,
    0x00000087    /* 334 (CDDR-PUSH) */,
    0x03c0103c    /* 335 (LREF 1 15) */,
    0x00000083    /* 336 (CADR-PUSH) */,
    0x03401047    /* 337 (LREF-PUSH 1 13) */,
    0x03001047    /* 338 (LREF-PUSH 1 12) */,
    0x02c01047    /* 339 (LREF-PUSH 1 11) */,
    0x02801047    /* 340 (LREF-PUSH 1 10) */,
    0x02401047    /* 341 (LREF-PUSH 1 9) */,
    0x02001047    /* 342 (LREF-PUSH 1 8) */,
    0x01c01047    /* 343 (LREF-PUSH 1 7) */,
    0x01801047    /* 344 (LREF-PUSH 1 6) */,
    0x01401047    /* 345 (LREF-PUSH 1 5) */,
    0x01001047    /* 346 (LREF-PUSH 1 4) */,
    0x00c01047    /* 347 (LREF-PUSH 1 3) */,
    0x0000004e    /* 348 (LREF12-PUSH) */,
    0x0000004d    /* 349 (LREF11-PUSH) */,
    0x0000004c    /* 350 (LREF10-PUSH) */,
    0x0000201b    /* 351 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 353 (RET) */,
    0x0000003d    /* 354 (LREF0) */,
    0x0000002e    /* 355 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 379)  /*    379 */,
    0x03c0103c    /* 358 (LREF 1 15) */,
    0x00000087    /* 359 (CDDR-PUSH) */,
    0x03801047    /* 360 (LREF-PUSH 1 14) */,
    0x03c0103c    /* 361 (LREF 1 15) */,
    0x00000083    /* 362 (CADR-PUSH) */,
    0x03001047    /* 363 (LREF-PUSH 1 12) */,
    0x02c01047    /* 364 (LREF-PUSH 1 11) */,
    0x02801047    /* 365 (LREF-PUSH 1 10) */,
    0x02401047    /* 366 (LREF-PUSH 1 9) */,
    0x02001047    /* 367 (LREF-PUSH 1 8) */,
    0x01c01047    /* 368 (LREF-PUSH 1 7) */,
    0x01801047    /* 369 (LREF-PUSH 1 6) */,
    0x01401047    /* 370 (LREF-PUSH 1 5) */,
    0x01001047    /* 371 (LREF-PUSH 1 4) */,
    0x00c01047    /* 372 (LREF-PUSH 1 3) */,
    0x0000004e    /* 373 (LREF12-PUSH) */,
    0x0000004d    /* 374 (LREF11-PUSH) */,
    0x0000004c    /* 375 (LREF10-PUSH) */,
    0x0000201b    /* 376 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 378 (RET) */,
    0x0000003d    /* 379 (LREF0) */,
    0x0000002e    /* 380 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :width */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 404)  /*    404 */,
    0x03c0103c    /* 383 (LREF 1 15) */,
    0x00000087    /* 384 (CDDR-PUSH) */,
    0x03801047    /* 385 (LREF-PUSH 1 14) */,
    0x03401047    /* 386 (LREF-PUSH 1 13) */,
    0x03c0103c    /* 387 (LREF 1 15) */,
    0x00000083    /* 388 (CADR-PUSH) */,
    0x02c01047    /* 389 (LREF-PUSH 1 11) */,
    0x02801047    /* 390 (LREF-PUSH 1 10) */,
    0x02401047    /* 391 (LREF-PUSH 1 9) */,
    0x02001047    /* 392 (LREF-PUSH 1 8) */,
    0x01c01047    /* 393 (LREF-PUSH 1 7) */,
    0x01801047    /* 394 (LREF-PUSH 1 6) */,
    0x01401047    /* 395 (LREF-PUSH 1 5) */,
    0x01001047    /* 396 (LREF-PUSH 1 4) */,
    0x00c01047    /* 397 (LREF-PUSH 1 3) */,
    0x0000004e    /* 398 (LREF12-PUSH) */,
    0x0000004d    /* 399 (LREF11-PUSH) */,
    0x0000004c    /* 400 (LREF10-PUSH) */,
    0x0000201b    /* 401 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 403 (RET) */,
    0x0000003d    /* 404 (LREF0) */,
    0x0000002e    /* 405 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :base */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 429)  /*    429 */,
    0x03c0103c    /* 408 (LREF 1 15) */,
    0x00000087    /* 409 (CDDR-PUSH) */,
    0x03801047    /* 410 (LREF-PUSH 1 14) */,
    0x03401047    /* 411 (LREF-PUSH 1 13) */,
    0x03001047    /* 412 (LREF-PUSH 1 12) */,
    0x03c0103c    /* 413 (LREF 1 15) */,
    0x00000083    /* 414 (CADR-PUSH) */,
    0x02801047    /* 415 (LREF-PUSH 1 10) */,
    0x02401047    /* 416 (LREF-PUSH 1 9) */,
    0x02001047    /* 417 (LREF-PUSH 1 8) */,
    0x01c01047    /* 418 (LREF-PUSH 1 7) */,
    0x01801047    /* 419 (LREF-PUSH 1 6) */,
    0x01401047    /* 420 (LREF-PUSH 1 5) */,
    0x01001047    /* 421 (LREF-PUSH 1 4) */,
    0x00c01047    /* 422 (LREF-PUSH 1 3) */,
    0x0000004e    /* 423 (LREF12-PUSH) */,
    0x0000004d    /* 424 (LREF11-PUSH) */,
    0x0000004c    /* 425 (LREF10-PUSH) */,
    0x0000201b    /* 426 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 428 (RET) */,
    0x0000003d    /* 429 (LREF0) */,
    0x0000002e    /* 430 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :radix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 454)  /*    454 */,
    0x03c0103c    /* 433 (LREF 1 15) */,
    0x00000087    /* 434 (CDDR-PUSH) */,
    0x03801047    /* 435 (LREF-PUSH 1 14) */,
    0x03401047    /* 436 (LREF-PUSH 1 13) */,
    0x03001047    /* 437 (LREF-PUSH 1 12) */,
    0x02c01047    /* 438 (LREF-PUSH 1 11) */,
    0x03c0103c    /* 439 (LREF 1 15) */,
    0x00000083    /* 440 (CADR-PUSH) */,
    0x02401047    /* 441 (LREF-PUSH 1 9) */,
    0x02001047    /* 442 (LREF-PUSH 1 8) */,
    0x01c01047    /* 443 (LREF-PUSH 1 7) */,
    0x01801047    /* 444 (LREF-PUSH 1 6) */,
    0x01401047    /* 445 (LREF-PUSH 1 5) */,
    0x01001047    /* 446 (LREF-PUSH 1 4) */,
    0x00c01047    /* 447 (LREF-PUSH 1 3) */,
    0x0000004e    /* 448 (LREF12-PUSH) */,
    0x0000004d    /* 449 (LREF11-PUSH) */,
    0x0000004c    /* 450 (LREF10-PUSH) */,
    0x0000201b    /* 451 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 453 (RET) */,
    0x0000003d    /* 454 (LREF0) */,
    0x0000002e    /* 455 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :pretty */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 479)  /*    479 */,
    0x03c0103c    /* 458 (LREF 1 15) */,
    0x00000087    /* 459 (CDDR-PUSH) */,
    0x03801047    /* 460 (LREF-PUSH 1 14) */,
    0x03401047    /* 461 (LREF-PUSH 1 13) */,
    0x03001047    /* 462 (LREF-PUSH 1 12) */,
    0x02c01047    /* 463 (LREF-PUSH 1 11) */,
    0x02801047    /* 464 (LREF-PUSH 1 10) */,
    0x03c0103c    /* 465 (LREF 1 15) */,
    0x00000083    /* 466 (CADR-PUSH) */,
    0x02001047    /* 467 (LREF-PUSH 1 8) */,
    0x01c01047    /* 468 (LREF-PUSH 1 7) */,
    0x01801047    /* 469 (LREF-PUSH 1 6) */,
    0x01401047    /* 470 (LREF-PUSH 1 5) */,
    0x01001047    /* 471 (LREF-PUSH 1 4) */,
    0x00c01047    /* 472 (LREF-PUSH 1 3) */,
    0x0000004e    /* 473 (LREF12-PUSH) */,
    0x0000004d    /* 474 (LREF11-PUSH) */,
    0x0000004c    /* 475 (LREF10-PUSH) */,
    0x0000201b    /* 476 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 478 (RET) */,
    0x0000003d    /* 479 (LREF0) */,
    0x0000002e    /* 480 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :indent */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 504)  /*    504 */,
    0x03c0103c    /* 483 (LREF 1 15) */,
    0x00000087    /* 484 (CDDR-PUSH) */,
    0x03801047    /* 485 (LREF-PUSH 1 14) */,
    0x03401047    /* 486 (LREF-PUSH 1 13) */,
    0x03001047    /* 487 (LREF-PUSH 1 12) */,
    0x02c01047    /* 488 (LREF-PUSH 1 11) */,
    0x02801047    /* 489 (LREF-PUSH 1 10) */,
    0x02401047    /* 490 (LREF-PUSH 1 9) */,
    0x03c0103c    /* 491 (LREF 1 15) */,
    0x00000083    /* 492 (CADR-PUSH) */,
    0x01c01047    /* 493 (LREF-PUSH 1 7) */,
    0x01801047    /* 494 (LREF-PUSH 1 6) */,
    0x01401047    /* 495 (LREF-PUSH 1 5) */,
    0x01001047    /* 496 (LREF-PUSH 1 4) */,
    0x00c01047    /* 497 (LREF-PUSH 1 3) */,
    0x0000004e    /* 498 (LREF12-PUSH) */,
    0x0000004d    /* 499 (LREF11-PUSH) */,
    0x0000004c    /* 500 (LREF10-PUSH) */,
    0x0000201b    /* 501 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 503 (RET) */,
    0x0000003d    /* 504 (LREF0) */,
    0x0000002e    /* 505 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :string-length */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 529)  /*    529 */,
    0x03c0103c    /* 508 (LREF 1 15) */,
    0x00000087    /* 509 (CDDR-PUSH) */,
    0x03801047    /* 510 (LREF-PUSH 1 14) */,
    0x03401047    /* 511 (LREF-PUSH 1 13) */,
    0x03001047    /* 512 (LREF-PUSH 1 12) */,
    0x02c01047    /* 513 (LREF-PUSH 1 11) */,
    0x02801047    /* 514 (LREF-PUSH 1 10) */,
    0x02401047    /* 515 (LREF-PUSH 1 9) */,
    0x02001047    /* 516 (LREF-PUSH 1 8) */,
    0x03c0103c    /* 517 (LREF 1 15) */,
    0x00000083    /* 518 (CADR-PUSH) */,
    0x01801047    /* 519 (LREF-PUSH 1 6) */,
    0x01401047    /* 520 (LREF-PUSH 1 5) */,
    0x01001047    /* 521 (LREF-PUSH 1 4) */,
    0x00c01047    /* 522 (LREF-PUSH 1 3) */,
    0x0000004e    /* 523 (LREF12-PUSH) */,
    0x0000004d    /* 524 (LREF11-PUSH) */,
    0x0000004c    /* 525 (LREF10-PUSH) */,
    0x0000201b    /* 526 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 528 (RET) */,
    0x0000003d    /* 529 (LREF0) */,
    0x0000002e    /* 530 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :exact-decimal */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 554)  /*    554 */,
    0x03c0103c    /* 533 (LREF 1 15) */,
    0x00000087    /* 534 (CDDR-PUSH) */,
    0x03801047    /* 535 (LREF-PUSH 1 14) */,
    0x03401047    /* 536 (LREF-PUSH 1 13) */,
    0x03001047    /* 537 (LREF-PUSH 1 12) */,
    0x02c01047    /* 538 (LREF-PUSH 1 11) */,
    0x02801047    /* 539 (LREF-PUSH 1 10) */,
    0x02401047    /* 540 (LREF-PUSH 1 9) */,
    0x02001047    /* 541 (LREF-PUSH 1 8) */,
    0x01c01047    /* 542 (LREF-PUSH 1 7) */,
    0x03c0103c    /* 543 (LREF 1 15) */,
    0x00000083    /* 544 (CADR-PUSH) */,
    0x01401047    /* 545 (LREF-PUSH 1 5) */,
    0x01001047    /* 546 (LREF-PUSH 1 4) */,
    0x00c01047    /* 547 (LREF-PUSH 1 3) */,
    0x0000004e    /* 548 (LREF12-PUSH) */,
    0x0000004d    /* 549 (LREF11-PUSH) */,
    0x0000004c    /* 550 (LREF10-PUSH) */,
    0x0000201b    /* 551 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 553 (RET) */,
    0x0000003d    /* 554 (LREF0) */,
    0x0000002e    /* 555 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-length */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 579)  /*    579 */,
    0x03c0103c    /* 558 (LREF 1 15) */,
    0x00000087    /* 559 (CDDR-PUSH) */,
    0x03801047    /* 560 (LREF-PUSH 1 14) */,
    0x03401047    /* 561 (LREF-PUSH 1 13) */,
    0x03001047    /* 562 (LREF-PUSH 1 12) */,
    0x02c01047    /* 563 (LREF-PUSH 1 11) */,
    0x02801047    /* 564 (LREF-PUSH 1 10) */,
    0x02401047    /* 565 (LREF-PUSH 1 9) */,
    0x02001047    /* 566 (LREF-PUSH 1 8) */,
    0x01c01047    /* 567 (LREF-PUSH 1 7) */,
    0x01801047    /* 568 (LREF-PUSH 1 6) */,
    0x03c0103c    /* 569 (LREF 1 15) */,
    0x00000083    /* 570 (CADR-PUSH) */,
    0x01001047    /* 571 (LREF-PUSH 1 4) */,
    0x00c01047    /* 572 (LREF-PUSH 1 3) */,
    0x0000004e    /* 573 (LREF12-PUSH) */,
    0x0000004d    /* 574 (LREF11-PUSH) */,
    0x0000004c    /* 575 (LREF10-PUSH) */,
    0x0000201b    /* 576 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 578 (RET) */,
    0x0000003d    /* 579 (LREF0) */,
    0x0000002e    /* 580 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-level */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 604)  /*    604 */,
    0x03c0103c    /* 583 (LREF 1 15) */,
    0x00000087    /* 584 (CDDR-PUSH) */,
    0x03801047    /* 585 (LREF-PUSH 1 14) */,
    0x03401047    /* 586 (LREF-PUSH 1 13) */,
    0x03001047    /* 587 (LREF-PUSH 1 12) */,
    0x02c01047    /* 588 (LREF-PUSH 1 11) */,
    0x02801047    /* 589 (LREF-PUSH 1 10) */,
    0x02401047    /* 590 (LREF-PUSH 1 9) */,
    0x02001047    /* 591 (LREF-PUSH 1 8) */,
    0x01c01047    /* 592 (LREF-PUSH 1 7) */,
    0x01801047    /* 593 (LREF-PUSH 1 6) */,
    0x01401047    /* 594 (LREF-PUSH 1 5) */,
    0x03c0103c    /* 595 (LREF 1 15) */,
    0x00000083    /* 596 (CADR-PUSH) */,
    0x00c01047    /* 597 (LREF-PUSH 1 3) */,
    0x0000004e    /* 598 (LREF12-PUSH) */,
    0x0000004d    /* 599 (LREF11-PUSH) */,
    0x0000004c    /* 600 (LREF10-PUSH) */,
    0x0000201b    /* 601 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 603 (RET) */,
    0x0000003d    /* 604 (LREF0) */,
    0x0000002e    /* 605 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-width */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 629)  /*    629 */,
    0x03c0103c    /* 608 (LREF 1 15) */,
    0x00000087    /* 609 (CDDR-PUSH) */,
    0x03801047    /* 610 (LREF-PUSH 1 14) */,
    0x03401047    /* 611 (LREF-PUSH 1 13) */,
    0x03001047    /* 612 (LREF-PUSH 1 12) */,
    0x02c01047    /* 613 (LREF-PUSH 1 11) */,
    0x02801047    /* 614 (LREF-PUSH 1 10) */,
    0x02401047    /* 615 (LREF-PUSH 1 9) */,
    0x02001047    /* 616 (LREF-PUSH 1 8) */,
    0x01c01047    /* 617 (LREF-PUSH 1 7) */,
    0x01801047    /* 618 (LREF-PUSH 1 6) */,
    0x01401047    /* 619 (LREF-PUSH 1 5) */,
    0x01001047    /* 620 (LREF-PUSH 1 4) */,
    0x03c0103c    /* 621 (LREF 1 15) */,
    0x00000083    /* 622 (CADR-PUSH) */,
    0x0000004e    /* 623 (LREF12-PUSH) */,
    0x0000004d    /* 624 (LREF11-PUSH) */,
    0x0000004c    /* 625 (LREF10-PUSH) */,
    0x0000201b    /* 626 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 628 (RET) */,
    0x0000003d    /* 629 (LREF0) */,
    0x0000002e    /* 630 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-base */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 654)  /*    654 */,
    0x03c0103c    /* 633 (LREF 1 15) */,
    0x00000087    /* 634 (CDDR-PUSH) */,
    0x03801047    /* 635 (LREF-PUSH 1 14) */,
    0x03401047    /* 636 (LREF-PUSH 1 13) */,
    0x03001047    /* 637 (LREF-PUSH 1 12) */,
    0x02c01047    /* 638 (LREF-PUSH 1 11) */,
    0x02801047    /* 639 (LREF-PUSH 1 10) */,
    0x02401047    /* 640 (LREF-PUSH 1 9) */,
    0x02001047    /* 641 (LREF-PUSH 1 8) */,
    0x01c01047    /* 642 (LREF-PUSH 1 7) */,
    0x01801047    /* 643 (LREF-PUSH 1 6) */,
    0x01401047    /* 644 (LREF-PUSH 1 5) */,
    0x01001047    /* 645 (LREF-PUSH 1 4) */,
    0x00c01047    /* 646 (LREF-PUSH 1 3) */,
    0x03c0103c    /* 647 (LREF 1 15) */,
    0x00000083    /* 648 (CADR-PUSH) */,
    0x0000004d    /* 649 (LREF11-PUSH) */,
    0x0000004c    /* 650 (LREF10-PUSH) */,
    0x0000201b    /* 651 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 653 (RET) */,
    0x0000003d    /* 654 (LREF0) */,
    0x0000002e    /* 655 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-radix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 679)  /*    679 */,
    0x03c0103c    /* 658 (LREF 1 15) */,
    0x00000087    /* 659 (CDDR-PUSH) */,
    0x03801047    /* 660 (LREF-PUSH 1 14) */,
    0x03401047    /* 661 (LREF-PUSH 1 13) */,
    0x03001047    /* 662 (LREF-PUSH 1 12) */,
    0x02c01047    /* 663 (LREF-PUSH 1 11) */,
    0x02801047    /* 664 (LREF-PUSH 1 10) */,
    0x02401047    /* 665 (LREF-PUSH 1 9) */,
    0x02001047    /* 666 (LREF-PUSH 1 8) */,
    0x01c01047    /* 667 (LREF-PUSH 1 7) */,
    0x01801047    /* 668 (LREF-PUSH 1 6) */,
    0x01401047    /* 669 (LREF-PUSH 1 5) */,
    0x01001047    /* 670 (LREF-PUSH 1 4) */,
    0x00c01047    /* 671 (LREF-PUSH 1 3) */,
    0x0000004e    /* 672 (LREF12-PUSH) */,
    0x03c0103c    /* 673 (LREF 1 15) */,
    0x00000083    /* 674 (CADR-PUSH) */,
    0x0000004c    /* 675 (LREF10-PUSH) */,
    0x0000201b    /* 676 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 678 (RET) */,
    0x0000003d    /* 679 (LREF0) */,
    0x0000002e    /* 680 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-pretty */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 704)  /*    704 */,
    0x03c0103c    /* 683 (LREF 1 15) */,
    0x00000087    /* 684 (CDDR-PUSH) */,
    0x03801047    /* 685 (LREF-PUSH 1 14) */,
    0x03401047    /* 686 (LREF-PUSH 1 13) */,
    0x03001047    /* 687 (LREF-PUSH 1 12) */,
    0x02c01047    /* 688 (LREF-PUSH 1 11) */,
    0x02801047    /* 689 (LREF-PUSH 1 10) */,
    0x02401047    /* 690 (LREF-PUSH 1 9) */,
    0x02001047    /* 691 (LREF-PUSH 1 8) */,
    0x01c01047    /* 692 (LREF-PUSH 1 7) */,
    0x01801047    /* 693 (LREF-PUSH 1 6) */,
    0x01401047    /* 694 (LREF-PUSH 1 5) */,
    0x01001047    /* 695 (LREF-PUSH 1 4) */,
    0x00c01047    /* 696 (LREF-PUSH 1 3) */,
    0x0000004e    /* 697 (LREF12-PUSH) */,
    0x0000004d    /* 698 (LREF11-PUSH) */,
    0x03c0103c    /* 699 (LREF 1 15) */,
    0x00000083    /* 700 (CADR-PUSH) */,
    0x0000201b    /* 701 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 703 (RET) */,
    0x0000200e    /* 704 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 712),
    0x00000006    /* 706 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[283])) /* "unknown keyword ~S" */,
    0x03c0103c    /* 708 (LREF 1 15) */,
    0x00000069    /* 709 (CAR-PUSH) */,
    0x0000205f    /* 710 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x03c0103c    /* 712 (LREF 1 15) */,
    0x00000087    /* 713 (CDDR-PUSH) */,
    0x03801047    /* 714 (LREF-PUSH 1 14) */,
    0x03401047    /* 715 (LREF-PUSH 1 13) */,
    0x03001047    /* 716 (LREF-PUSH 1 12) */,
    0x02c01047    /* 717 (LREF-PUSH 1 11) */,
    0x02801047    /* 718 (LREF-PUSH 1 10) */,
    0x02401047    /* 719 (LREF-PUSH 1 9) */,
    0x02001047    /* 720 (LREF-PUSH 1 8) */,
    0x01c01047    /* 721 (LREF-PUSH 1 7) */,
    0x01801047    /* 722 (LREF-PUSH 1 6) */,
    0x01401047    /* 723 (LREF-PUSH 1 5) */,
    0x01001047    /* 724 (LREF-PUSH 1 4) */,
    0x00c01047    /* 725 (LREF-PUSH 1 3) */,
    0x0000004e    /* 726 (LREF12-PUSH) */,
    0x0000004d    /* 727 (LREF11-PUSH) */,
    0x0000004c    /* 728 (LREF10-PUSH) */,
    0x0000201b    /* 729 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]) + 31),
    0x00000014    /* 731 (RET) */,
    0x00000014    /* 732 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1924]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* make-write-controls */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1924]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[48])) /* #<compiled-code make-write-controls@0x7d56774e99c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* make-write-controls */,
    0x00000014    /*  14 (RET) */,
    /* write-controls-copy */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000005    /*   1 (CONSTU) */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000005    /*   3 (CONSTU) */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000005    /*   5 (CONSTU) */,
    0x0000000d    /*   6 (PUSH) */,
    0x00000005    /*   7 (CONSTU) */,
    0x0000000d    /*   8 (PUSH) */,
    0x00000005    /*   9 (CONSTU) */,
    0x0000000d    /*  10 (PUSH) */,
    0x00000005    /*  11 (CONSTU) */,
    0x0000000d    /*  12 (PUSH) */,
    0x00000005    /*  13 (CONSTU) */,
    0x0000000d    /*  14 (PUSH) */,
    0x00000005    /*  15 (CONSTU) */,
    0x0000000d    /*  16 (PUSH) */,
    0x00000005    /*  17 (CONSTU) */,
    0x0000000d    /*  18 (PUSH) */,
    0x00000005    /*  19 (CONSTU) */,
    0x0000000d    /*  20 (PUSH) */,
    0x00000005    /*  21 (CONSTU) */,
    0x0000000d    /*  22 (PUSH) */,
    0x00000005    /*  23 (CONSTU) */,
    0x0000000d    /*  24 (PUSH) */,
    0x00000005    /*  25 (CONSTU) */,
    0x0000000d    /*  26 (PUSH) */,
    0x00000005    /*  27 (CONSTU) */,
    0x0000000d    /*  28 (PUSH) */,
    0x00000005    /*  29 (CONSTU) */,
    0x00010018    /*  30 (PUSH-LOCAL-ENV 16) */,
    0x03c0003c    /*  31 (LREF 0 15) */,
    0x00000022    /*  32 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 503),
    0x0000100e    /*  34 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 39),
    0x03800047    /*  36 (LREF-PUSH 0 14) */,
    0x0000105f    /*  37 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  39 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 44),
    0x00000005    /*  41 (CONSTU) */,
    0x00000013    /*  42 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 45),
    0x0380003c    /*  44 (LREF 0 14) */,
    0x00001018    /*  45 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  46 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 51),
    0x03401047    /*  48 (LREF-PUSH 1 13) */,
    0x0000105f    /*  49 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  51 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 56),
    0x00000005    /*  53 (CONSTU) */,
    0x00000013    /*  54 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 57),
    0x0340103c    /*  56 (LREF 1 13) */,
    0x00001018    /*  57 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  58 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 63),
    0x03002047    /*  60 (LREF-PUSH 2 12) */,
    0x0000105f    /*  61 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  63 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 68),
    0x00000005    /*  65 (CONSTU) */,
    0x00000013    /*  66 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 69),
    0x0300203c    /*  68 (LREF 2 12) */,
    0x00001018    /*  69 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  70 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 75),
    0x02c03047    /*  72 (LREF-PUSH 3 11) */,
    0x0000105f    /*  73 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  75 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 80),
    0x00000005    /*  77 (CONSTU) */,
    0x00000013    /*  78 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 81),
    0x02c0303c    /*  80 (LREF 3 11) */,
    0x00001018    /*  81 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  82 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 87),
    0x02804047    /*  84 (LREF-PUSH 4 10) */,
    0x0000105f    /*  85 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  87 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 92),
    0x00000005    /*  89 (CONSTU) */,
    0x00000013    /*  90 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 93),
    0x0280403c    /*  92 (LREF 4 10) */,
    0x00001018    /*  93 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*  94 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 99),
    0x02405047    /*  96 (LREF-PUSH 5 9) */,
    0x0000105f    /*  97 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /*  99 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 104),
    0x00000005    /* 101 (CONSTU) */,
    0x00000013    /* 102 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 105),
    0x0240503c    /* 104 (LREF 5 9) */,
    0x00001018    /* 105 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 106 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 111),
    0x02006047    /* 108 (LREF-PUSH 6 8) */,
    0x0000105f    /* 109 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 111 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 116),
    0x00000005    /* 113 (CONSTU) */,
    0x00000013    /* 114 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 117),
    0x0200603c    /* 116 (LREF 6 8) */,
    0x00001018    /* 117 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 118 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 123),
    0x01c07047    /* 120 (LREF-PUSH 7 7) */,
    0x0000105f    /* 121 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 123 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 128),
    0x00000005    /* 125 (CONSTU) */,
    0x00000013    /* 126 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 129),
    0x01c0703c    /* 128 (LREF 7 7) */,
    0x00001018    /* 129 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 130 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 135),
    0x01808047    /* 132 (LREF-PUSH 8 6) */,
    0x0000105f    /* 133 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 135 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 140),
    0x00000005    /* 137 (CONSTU) */,
    0x00000013    /* 138 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 141),
    0x0180803c    /* 140 (LREF 8 6) */,
    0x00001018    /* 141 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 142 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 147),
    0x01409047    /* 144 (LREF-PUSH 9 5) */,
    0x0000105f    /* 145 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 147 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 152),
    0x00000005    /* 149 (CONSTU) */,
    0x00000013    /* 150 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 153),
    0x0140903c    /* 152 (LREF 9 5) */,
    0x00001018    /* 153 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 154 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 159),
    0x0100a047    /* 156 (LREF-PUSH 10 4) */,
    0x0000105f    /* 157 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 159 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 164),
    0x00000005    /* 161 (CONSTU) */,
    0x00000013    /* 162 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 165),
    0x0100a03c    /* 164 (LREF 10 4) */,
    0x00001018    /* 165 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 166 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 171),
    0x00c0b047    /* 168 (LREF-PUSH 11 3) */,
    0x0000105f    /* 169 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 171 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 176),
    0x00000005    /* 173 (CONSTU) */,
    0x00000013    /* 174 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 177),
    0x00c0b03c    /* 176 (LREF 11 3) */,
    0x00001018    /* 177 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 178 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 183),
    0x0080c047    /* 180 (LREF-PUSH 12 2) */,
    0x0000105f    /* 181 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 183 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 188),
    0x00000005    /* 185 (CONSTU) */,
    0x00000013    /* 186 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 189),
    0x0080c03c    /* 188 (LREF 12 2) */,
    0x00001018    /* 189 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 190 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 195),
    0x0040d047    /* 192 (LREF-PUSH 13 1) */,
    0x0000105f    /* 193 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 195 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 200),
    0x00000005    /* 197 (CONSTU) */,
    0x00000013    /* 198 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 201),
    0x0040d03c    /* 200 (LREF 13 1) */,
    0x00001018    /* 201 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 202 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 207),
    0x0000e047    /* 204 (LREF-PUSH 14 0) */,
    0x0000105f    /* 205 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 207 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 212),
    0x00000005    /* 209 (CONSTU) */,
    0x00000013    /* 210 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 213),
    0x0000e03c    /* 212 (LREF 14 0) */,
    0x00001018    /* 213 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /* 214 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 219),
    0x0000e047    /* 216 (LREF-PUSH 14 0) */,
    0x0000105f    /* 217 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 219 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 236),
    0x0000100e    /* 221 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 226),
    0x00005047    /* 223 (LREF-PUSH 5 0) */,
    0x0000105f    /* 224 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 226 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 233),
    0x0041003c    /* 228 (LREF 16 1) */,
    0x000000e3    /* 229 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* length */,
    0x00000013    /* 231 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 237),
    0x0000503c    /* 233 (LREF 5 0) */,
    0x00000013    /* 234 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 237),
    0x0000e03c    /* 236 (LREF 14 0) */,
    0x0000100f    /* 237 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 242),
    0x0000d047    /* 239 (LREF-PUSH 13 0) */,
    0x0000105f    /* 240 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 242 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 259),
    0x0000100e    /* 244 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 249),
    0x00004047    /* 246 (LREF-PUSH 4 0) */,
    0x0000105f    /* 247 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 249 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 256),
    0x0041003c    /* 251 (LREF 16 1) */,
    0x000000e3    /* 252 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* level */,
    0x00000013    /* 254 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 260),
    0x0000403c    /* 256 (LREF 4 0) */,
    0x00000013    /* 257 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 260),
    0x0000d03c    /* 259 (LREF 13 0) */,
    0x0000100f    /* 260 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 265),
    0x0000c047    /* 262 (LREF-PUSH 12 0) */,
    0x0000105f    /* 263 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 265 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 282),
    0x0000100e    /* 267 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 272),
    0x00000051    /* 269 (LREF30-PUSH) */,
    0x0000105f    /* 270 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 272 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 279),
    0x0041003c    /* 274 (LREF 16 1) */,
    0x000000e3    /* 275 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* width */,
    0x00000013    /* 277 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 283),
    0x00000046    /* 279 (LREF30) */,
    0x00000013    /* 280 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 283),
    0x0000c03c    /* 282 (LREF 12 0) */,
    0x0000100f    /* 283 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 288),
    0x0000b047    /* 285 (LREF-PUSH 11 0) */,
    0x0000105f    /* 286 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 288 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 305),
    0x0000100e    /* 290 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 295),
    0x0000004f    /* 292 (LREF20-PUSH) */,
    0x0000105f    /* 293 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 295 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 302),
    0x0041003c    /* 297 (LREF 16 1) */,
    0x000000e3    /* 298 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* base */,
    0x00000013    /* 300 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 306),
    0x00000044    /* 302 (LREF20) */,
    0x00000013    /* 303 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 306),
    0x0000b03c    /* 305 (LREF 11 0) */,
    0x0000100f    /* 306 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 311),
    0x0000a047    /* 308 (LREF-PUSH 10 0) */,
    0x0000105f    /* 309 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 311 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 328),
    0x0000100e    /* 313 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 318),
    0x0000004c    /* 315 (LREF10-PUSH) */,
    0x0000105f    /* 316 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 318 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 325),
    0x0041003c    /* 320 (LREF 16 1) */,
    0x000000e3    /* 321 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* radix */,
    0x00000013    /* 323 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 329),
    0x00000041    /* 325 (LREF10) */,
    0x00000013    /* 326 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 329),
    0x0000a03c    /* 328 (LREF 10 0) */,
    0x0000100f    /* 329 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 334),
    0x00009047    /* 331 (LREF-PUSH 9 0) */,
    0x0000105f    /* 332 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 334 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 351),
    0x0000100e    /* 336 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 341),
    0x00000048    /* 338 (LREF0-PUSH) */,
    0x0000105f    /* 339 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 341 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 348),
    0x0041003c    /* 343 (LREF 16 1) */,
    0x000000e3    /* 344 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* pretty */,
    0x00000013    /* 346 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 352),
    0x0000003d    /* 348 (LREF0) */,
    0x00000013    /* 349 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 352),
    0x0000903c    /* 351 (LREF 9 0) */,
    0x0000100f    /* 352 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 357),
    0x00008047    /* 354 (LREF-PUSH 8 0) */,
    0x0000105f    /* 355 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 357 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 364),
    0x0041003c    /* 359 (LREF 16 1) */,
    0x000000e3    /* 360 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* indent */,
    0x00000013    /* 362 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 365),
    0x0000803c    /* 364 (LREF 8 0) */,
    0x0000100f    /* 365 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 370),
    0x00007047    /* 367 (LREF-PUSH 7 0) */,
    0x0000105f    /* 368 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 370 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 377),
    0x0041003c    /* 372 (LREF 16 1) */,
    0x000000e3    /* 373 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* string-length */,
    0x00000013    /* 375 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 378),
    0x0000703c    /* 377 (LREF 7 0) */,
    0x0000100f    /* 378 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 383),
    0x00006047    /* 380 (LREF-PUSH 6 0) */,
    0x0000105f    /* 381 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* undefined? */,
    0x0000001e    /* 383 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 390),
    0x0041003c    /* 385 (LREF 16 1) */,
    0x000000e3    /* 386 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* exact-decimal */,
    0x00000013    /* 388 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 391),
    0x0000603c    /* 390 (LREF 6 0) */,
    0x00009018    /* 391 (PUSH-LOCAL-ENV 9) */,
    0x02000047    /* 392 (LREF-PUSH 0 8) */,
    0x0041103c    /* 393 (LREF 17 1) */,
    0x000000e3    /* 394 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* length */,
    0x00000021    /* 396 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x01c00047    /* 398 (LREF-PUSH 0 7) */,
    0x0041103c    /* 399 (LREF 17 1) */,
    0x000000e3    /* 400 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* level */,
    0x00000021    /* 402 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x01800047    /* 404 (LREF-PUSH 0 6) */,
    0x0041103c    /* 405 (LREF 17 1) */,
    0x000000e3    /* 406 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* width */,
    0x00000021    /* 408 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x01400047    /* 410 (LREF-PUSH 0 5) */,
    0x0041103c    /* 411 (LREF 17 1) */,
    0x000000e3    /* 412 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* base */,
    0x00000021    /* 414 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x01000047    /* 416 (LREF-PUSH 0 4) */,
    0x0041103c    /* 417 (LREF 17 1) */,
    0x000000e3    /* 418 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* radix */,
    0x00000021    /* 420 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x0000004b    /* 422 (LREF3-PUSH) */,
    0x0041103c    /* 423 (LREF 17 1) */,
    0x000000e3    /* 424 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* pretty */,
    0x00000021    /* 426 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x0000004a    /* 428 (LREF2-PUSH) */,
    0x0041103c    /* 429 (LREF 17 1) */,
    0x000000e3    /* 430 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* indent */,
    0x00000021    /* 432 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000049    /* 434 (LREF1-PUSH) */,
    0x0041103c    /* 435 (LREF 17 1) */,
    0x000000e3    /* 436 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* string-length */,
    0x00000021    /* 438 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000048    /* 440 (LREF0-PUSH) */,
    0x0041103c    /* 441 (LREF 17 1) */,
    0x000000e3    /* 442 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* exact-decimal */,
    0x00000021    /* 444 (BNEQV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00411052    /* 446 (LREF-RET 17 1) */,
    0x0000005e    /* 447 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* <write-controls> */,
    0x00000006    /* 449 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    0x02000047    /* 451 (LREF-PUSH 0 8) */,
    0x00000006    /* 452 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    0x01c00047    /* 454 (LREF-PUSH 0 7) */,
    0x00000006    /* 455 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :width */,
    0x01800047    /* 457 (LREF-PUSH 0 6) */,
    0x00000006    /* 458 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :base */,
    0x01400047    /* 460 (LREF-PUSH 0 5) */,
    0x00000006    /* 461 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :radix */,
    0x01000047    /* 463 (LREF-PUSH 0 4) */,
    0x00000006    /* 464 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :pretty */,
    0x0000004b    /* 466 (LREF3-PUSH) */,
    0x00000006    /* 467 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :indent */,
    0x0000004a    /* 469 (LREF2-PUSH) */,
    0x00000006    /* 470 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :string-length */,
    0x00000049    /* 472 (LREF1-PUSH) */,
    0x00000006    /* 473 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :exact-decimal */,
    0x00000048    /* 475 (LREF0-PUSH) */,
    0x00013060    /* 476 (GREF-TAIL-CALL 19) */,
    SCM_WORD(SCM_UNDEFINED) /* make */,
    0x00000014    /* 478 (RET) */,
    0x00000013    /* 479 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000014    /* 481 (RET) */,
    0x00000013    /* 482 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000014    /* 484 (RET) */,
    0x00000013    /* 485 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000014    /* 487 (RET) */,
    0x00000013    /* 488 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000014    /* 490 (RET) */,
    0x00000013    /* 491 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000014    /* 493 (RET) */,
    0x00000013    /* 494 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000014    /* 496 (RET) */,
    0x00000013    /* 497 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000014    /* 499 (RET) */,
    0x00000013    /* 500 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 447),
    0x00000014    /* 502 (RET) */,
    0x03c0003c    /* 503 (LREF 0 15) */,
    0x00000074    /* 504 (CDR) */,
    0x00000022    /* 505 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 513),
    0x00000006    /* 507 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[275])) /* "keyword list not even" */,
    0x03c00047    /* 509 (LREF-PUSH 0 15) */,
    0x00002060    /* 510 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000014    /* 512 (RET) */,
    0x0000100e    /* 513 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 519),
    0x03c0003c    /* 515 (LREF 0 15) */,
    0x00000069    /* 516 (CAR-PUSH) */,
    0x0000105f    /* 517 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* unwrap-syntax-1 */,
    0x00001018    /* 519 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /* 520 (LREF0) */,
    0x0000002e    /* 521 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :length */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 545)  /*    545 */,
    0x03c0103c    /* 524 (LREF 1 15) */,
    0x00000087    /* 525 (CDDR-PUSH) */,
    0x03c0103c    /* 526 (LREF 1 15) */,
    0x00000083    /* 527 (CADR-PUSH) */,
    0x03401047    /* 528 (LREF-PUSH 1 13) */,
    0x03001047    /* 529 (LREF-PUSH 1 12) */,
    0x02c01047    /* 530 (LREF-PUSH 1 11) */,
    0x02801047    /* 531 (LREF-PUSH 1 10) */,
    0x02401047    /* 532 (LREF-PUSH 1 9) */,
    0x02001047    /* 533 (LREF-PUSH 1 8) */,
    0x01c01047    /* 534 (LREF-PUSH 1 7) */,
    0x01801047    /* 535 (LREF-PUSH 1 6) */,
    0x01401047    /* 536 (LREF-PUSH 1 5) */,
    0x01001047    /* 537 (LREF-PUSH 1 4) */,
    0x00c01047    /* 538 (LREF-PUSH 1 3) */,
    0x0000004e    /* 539 (LREF12-PUSH) */,
    0x0000004d    /* 540 (LREF11-PUSH) */,
    0x0000004c    /* 541 (LREF10-PUSH) */,
    0x0000201b    /* 542 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 544 (RET) */,
    0x0000003d    /* 545 (LREF0) */,
    0x0000002e    /* 546 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :level */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 570)  /*    570 */,
    0x03c0103c    /* 549 (LREF 1 15) */,
    0x00000087    /* 550 (CDDR-PUSH) */,
    0x03801047    /* 551 (LREF-PUSH 1 14) */,
    0x03c0103c    /* 552 (LREF 1 15) */,
    0x00000083    /* 553 (CADR-PUSH) */,
    0x03001047    /* 554 (LREF-PUSH 1 12) */,
    0x02c01047    /* 555 (LREF-PUSH 1 11) */,
    0x02801047    /* 556 (LREF-PUSH 1 10) */,
    0x02401047    /* 557 (LREF-PUSH 1 9) */,
    0x02001047    /* 558 (LREF-PUSH 1 8) */,
    0x01c01047    /* 559 (LREF-PUSH 1 7) */,
    0x01801047    /* 560 (LREF-PUSH 1 6) */,
    0x01401047    /* 561 (LREF-PUSH 1 5) */,
    0x01001047    /* 562 (LREF-PUSH 1 4) */,
    0x00c01047    /* 563 (LREF-PUSH 1 3) */,
    0x0000004e    /* 564 (LREF12-PUSH) */,
    0x0000004d    /* 565 (LREF11-PUSH) */,
    0x0000004c    /* 566 (LREF10-PUSH) */,
    0x0000201b    /* 567 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 569 (RET) */,
    0x0000003d    /* 570 (LREF0) */,
    0x0000002e    /* 571 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :width */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 595)  /*    595 */,
    0x03c0103c    /* 574 (LREF 1 15) */,
    0x00000087    /* 575 (CDDR-PUSH) */,
    0x03801047    /* 576 (LREF-PUSH 1 14) */,
    0x03401047    /* 577 (LREF-PUSH 1 13) */,
    0x03c0103c    /* 578 (LREF 1 15) */,
    0x00000083    /* 579 (CADR-PUSH) */,
    0x02c01047    /* 580 (LREF-PUSH 1 11) */,
    0x02801047    /* 581 (LREF-PUSH 1 10) */,
    0x02401047    /* 582 (LREF-PUSH 1 9) */,
    0x02001047    /* 583 (LREF-PUSH 1 8) */,
    0x01c01047    /* 584 (LREF-PUSH 1 7) */,
    0x01801047    /* 585 (LREF-PUSH 1 6) */,
    0x01401047    /* 586 (LREF-PUSH 1 5) */,
    0x01001047    /* 587 (LREF-PUSH 1 4) */,
    0x00c01047    /* 588 (LREF-PUSH 1 3) */,
    0x0000004e    /* 589 (LREF12-PUSH) */,
    0x0000004d    /* 590 (LREF11-PUSH) */,
    0x0000004c    /* 591 (LREF10-PUSH) */,
    0x0000201b    /* 592 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 594 (RET) */,
    0x0000003d    /* 595 (LREF0) */,
    0x0000002e    /* 596 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :base */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 620)  /*    620 */,
    0x03c0103c    /* 599 (LREF 1 15) */,
    0x00000087    /* 600 (CDDR-PUSH) */,
    0x03801047    /* 601 (LREF-PUSH 1 14) */,
    0x03401047    /* 602 (LREF-PUSH 1 13) */,
    0x03001047    /* 603 (LREF-PUSH 1 12) */,
    0x03c0103c    /* 604 (LREF 1 15) */,
    0x00000083    /* 605 (CADR-PUSH) */,
    0x02801047    /* 606 (LREF-PUSH 1 10) */,
    0x02401047    /* 607 (LREF-PUSH 1 9) */,
    0x02001047    /* 608 (LREF-PUSH 1 8) */,
    0x01c01047    /* 609 (LREF-PUSH 1 7) */,
    0x01801047    /* 610 (LREF-PUSH 1 6) */,
    0x01401047    /* 611 (LREF-PUSH 1 5) */,
    0x01001047    /* 612 (LREF-PUSH 1 4) */,
    0x00c01047    /* 613 (LREF-PUSH 1 3) */,
    0x0000004e    /* 614 (LREF12-PUSH) */,
    0x0000004d    /* 615 (LREF11-PUSH) */,
    0x0000004c    /* 616 (LREF10-PUSH) */,
    0x0000201b    /* 617 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 619 (RET) */,
    0x0000003d    /* 620 (LREF0) */,
    0x0000002e    /* 621 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :radix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 645)  /*    645 */,
    0x03c0103c    /* 624 (LREF 1 15) */,
    0x00000087    /* 625 (CDDR-PUSH) */,
    0x03801047    /* 626 (LREF-PUSH 1 14) */,
    0x03401047    /* 627 (LREF-PUSH 1 13) */,
    0x03001047    /* 628 (LREF-PUSH 1 12) */,
    0x02c01047    /* 629 (LREF-PUSH 1 11) */,
    0x03c0103c    /* 630 (LREF 1 15) */,
    0x00000083    /* 631 (CADR-PUSH) */,
    0x02401047    /* 632 (LREF-PUSH 1 9) */,
    0x02001047    /* 633 (LREF-PUSH 1 8) */,
    0x01c01047    /* 634 (LREF-PUSH 1 7) */,
    0x01801047    /* 635 (LREF-PUSH 1 6) */,
    0x01401047    /* 636 (LREF-PUSH 1 5) */,
    0x01001047    /* 637 (LREF-PUSH 1 4) */,
    0x00c01047    /* 638 (LREF-PUSH 1 3) */,
    0x0000004e    /* 639 (LREF12-PUSH) */,
    0x0000004d    /* 640 (LREF11-PUSH) */,
    0x0000004c    /* 641 (LREF10-PUSH) */,
    0x0000201b    /* 642 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 644 (RET) */,
    0x0000003d    /* 645 (LREF0) */,
    0x0000002e    /* 646 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :pretty */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 670)  /*    670 */,
    0x03c0103c    /* 649 (LREF 1 15) */,
    0x00000087    /* 650 (CDDR-PUSH) */,
    0x03801047    /* 651 (LREF-PUSH 1 14) */,
    0x03401047    /* 652 (LREF-PUSH 1 13) */,
    0x03001047    /* 653 (LREF-PUSH 1 12) */,
    0x02c01047    /* 654 (LREF-PUSH 1 11) */,
    0x02801047    /* 655 (LREF-PUSH 1 10) */,
    0x03c0103c    /* 656 (LREF 1 15) */,
    0x00000083    /* 657 (CADR-PUSH) */,
    0x02001047    /* 658 (LREF-PUSH 1 8) */,
    0x01c01047    /* 659 (LREF-PUSH 1 7) */,
    0x01801047    /* 660 (LREF-PUSH 1 6) */,
    0x01401047    /* 661 (LREF-PUSH 1 5) */,
    0x01001047    /* 662 (LREF-PUSH 1 4) */,
    0x00c01047    /* 663 (LREF-PUSH 1 3) */,
    0x0000004e    /* 664 (LREF12-PUSH) */,
    0x0000004d    /* 665 (LREF11-PUSH) */,
    0x0000004c    /* 666 (LREF10-PUSH) */,
    0x0000201b    /* 667 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 669 (RET) */,
    0x0000003d    /* 670 (LREF0) */,
    0x0000002e    /* 671 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :indent */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 695)  /*    695 */,
    0x03c0103c    /* 674 (LREF 1 15) */,
    0x00000087    /* 675 (CDDR-PUSH) */,
    0x03801047    /* 676 (LREF-PUSH 1 14) */,
    0x03401047    /* 677 (LREF-PUSH 1 13) */,
    0x03001047    /* 678 (LREF-PUSH 1 12) */,
    0x02c01047    /* 679 (LREF-PUSH 1 11) */,
    0x02801047    /* 680 (LREF-PUSH 1 10) */,
    0x02401047    /* 681 (LREF-PUSH 1 9) */,
    0x03c0103c    /* 682 (LREF 1 15) */,
    0x00000083    /* 683 (CADR-PUSH) */,
    0x01c01047    /* 684 (LREF-PUSH 1 7) */,
    0x01801047    /* 685 (LREF-PUSH 1 6) */,
    0x01401047    /* 686 (LREF-PUSH 1 5) */,
    0x01001047    /* 687 (LREF-PUSH 1 4) */,
    0x00c01047    /* 688 (LREF-PUSH 1 3) */,
    0x0000004e    /* 689 (LREF12-PUSH) */,
    0x0000004d    /* 690 (LREF11-PUSH) */,
    0x0000004c    /* 691 (LREF10-PUSH) */,
    0x0000201b    /* 692 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 694 (RET) */,
    0x0000003d    /* 695 (LREF0) */,
    0x0000002e    /* 696 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :string-length */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 720)  /*    720 */,
    0x03c0103c    /* 699 (LREF 1 15) */,
    0x00000087    /* 700 (CDDR-PUSH) */,
    0x03801047    /* 701 (LREF-PUSH 1 14) */,
    0x03401047    /* 702 (LREF-PUSH 1 13) */,
    0x03001047    /* 703 (LREF-PUSH 1 12) */,
    0x02c01047    /* 704 (LREF-PUSH 1 11) */,
    0x02801047    /* 705 (LREF-PUSH 1 10) */,
    0x02401047    /* 706 (LREF-PUSH 1 9) */,
    0x02001047    /* 707 (LREF-PUSH 1 8) */,
    0x03c0103c    /* 708 (LREF 1 15) */,
    0x00000083    /* 709 (CADR-PUSH) */,
    0x01801047    /* 710 (LREF-PUSH 1 6) */,
    0x01401047    /* 711 (LREF-PUSH 1 5) */,
    0x01001047    /* 712 (LREF-PUSH 1 4) */,
    0x00c01047    /* 713 (LREF-PUSH 1 3) */,
    0x0000004e    /* 714 (LREF12-PUSH) */,
    0x0000004d    /* 715 (LREF11-PUSH) */,
    0x0000004c    /* 716 (LREF10-PUSH) */,
    0x0000201b    /* 717 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 719 (RET) */,
    0x0000003d    /* 720 (LREF0) */,
    0x0000002e    /* 721 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :exact-decimal */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 745)  /*    745 */,
    0x03c0103c    /* 724 (LREF 1 15) */,
    0x00000087    /* 725 (CDDR-PUSH) */,
    0x03801047    /* 726 (LREF-PUSH 1 14) */,
    0x03401047    /* 727 (LREF-PUSH 1 13) */,
    0x03001047    /* 728 (LREF-PUSH 1 12) */,
    0x02c01047    /* 729 (LREF-PUSH 1 11) */,
    0x02801047    /* 730 (LREF-PUSH 1 10) */,
    0x02401047    /* 731 (LREF-PUSH 1 9) */,
    0x02001047    /* 732 (LREF-PUSH 1 8) */,
    0x01c01047    /* 733 (LREF-PUSH 1 7) */,
    0x03c0103c    /* 734 (LREF 1 15) */,
    0x00000083    /* 735 (CADR-PUSH) */,
    0x01401047    /* 736 (LREF-PUSH 1 5) */,
    0x01001047    /* 737 (LREF-PUSH 1 4) */,
    0x00c01047    /* 738 (LREF-PUSH 1 3) */,
    0x0000004e    /* 739 (LREF12-PUSH) */,
    0x0000004d    /* 740 (LREF11-PUSH) */,
    0x0000004c    /* 741 (LREF10-PUSH) */,
    0x0000201b    /* 742 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 744 (RET) */,
    0x0000003d    /* 745 (LREF0) */,
    0x0000002e    /* 746 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-length */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 770)  /*    770 */,
    0x03c0103c    /* 749 (LREF 1 15) */,
    0x00000087    /* 750 (CDDR-PUSH) */,
    0x03801047    /* 751 (LREF-PUSH 1 14) */,
    0x03401047    /* 752 (LREF-PUSH 1 13) */,
    0x03001047    /* 753 (LREF-PUSH 1 12) */,
    0x02c01047    /* 754 (LREF-PUSH 1 11) */,
    0x02801047    /* 755 (LREF-PUSH 1 10) */,
    0x02401047    /* 756 (LREF-PUSH 1 9) */,
    0x02001047    /* 757 (LREF-PUSH 1 8) */,
    0x01c01047    /* 758 (LREF-PUSH 1 7) */,
    0x01801047    /* 759 (LREF-PUSH 1 6) */,
    0x03c0103c    /* 760 (LREF 1 15) */,
    0x00000083    /* 761 (CADR-PUSH) */,
    0x01001047    /* 762 (LREF-PUSH 1 4) */,
    0x00c01047    /* 763 (LREF-PUSH 1 3) */,
    0x0000004e    /* 764 (LREF12-PUSH) */,
    0x0000004d    /* 765 (LREF11-PUSH) */,
    0x0000004c    /* 766 (LREF10-PUSH) */,
    0x0000201b    /* 767 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 769 (RET) */,
    0x0000003d    /* 770 (LREF0) */,
    0x0000002e    /* 771 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-level */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 795)  /*    795 */,
    0x03c0103c    /* 774 (LREF 1 15) */,
    0x00000087    /* 775 (CDDR-PUSH) */,
    0x03801047    /* 776 (LREF-PUSH 1 14) */,
    0x03401047    /* 777 (LREF-PUSH 1 13) */,
    0x03001047    /* 778 (LREF-PUSH 1 12) */,
    0x02c01047    /* 779 (LREF-PUSH 1 11) */,
    0x02801047    /* 780 (LREF-PUSH 1 10) */,
    0x02401047    /* 781 (LREF-PUSH 1 9) */,
    0x02001047    /* 782 (LREF-PUSH 1 8) */,
    0x01c01047    /* 783 (LREF-PUSH 1 7) */,
    0x01801047    /* 784 (LREF-PUSH 1 6) */,
    0x01401047    /* 785 (LREF-PUSH 1 5) */,
    0x03c0103c    /* 786 (LREF 1 15) */,
    0x00000083    /* 787 (CADR-PUSH) */,
    0x00c01047    /* 788 (LREF-PUSH 1 3) */,
    0x0000004e    /* 789 (LREF12-PUSH) */,
    0x0000004d    /* 790 (LREF11-PUSH) */,
    0x0000004c    /* 791 (LREF10-PUSH) */,
    0x0000201b    /* 792 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 794 (RET) */,
    0x0000003d    /* 795 (LREF0) */,
    0x0000002e    /* 796 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-width */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 820)  /*    820 */,
    0x03c0103c    /* 799 (LREF 1 15) */,
    0x00000087    /* 800 (CDDR-PUSH) */,
    0x03801047    /* 801 (LREF-PUSH 1 14) */,
    0x03401047    /* 802 (LREF-PUSH 1 13) */,
    0x03001047    /* 803 (LREF-PUSH 1 12) */,
    0x02c01047    /* 804 (LREF-PUSH 1 11) */,
    0x02801047    /* 805 (LREF-PUSH 1 10) */,
    0x02401047    /* 806 (LREF-PUSH 1 9) */,
    0x02001047    /* 807 (LREF-PUSH 1 8) */,
    0x01c01047    /* 808 (LREF-PUSH 1 7) */,
    0x01801047    /* 809 (LREF-PUSH 1 6) */,
    0x01401047    /* 810 (LREF-PUSH 1 5) */,
    0x01001047    /* 811 (LREF-PUSH 1 4) */,
    0x03c0103c    /* 812 (LREF 1 15) */,
    0x00000083    /* 813 (CADR-PUSH) */,
    0x0000004e    /* 814 (LREF12-PUSH) */,
    0x0000004d    /* 815 (LREF11-PUSH) */,
    0x0000004c    /* 816 (LREF10-PUSH) */,
    0x0000201b    /* 817 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 819 (RET) */,
    0x0000003d    /* 820 (LREF0) */,
    0x0000002e    /* 821 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-base */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 845)  /*    845 */,
    0x03c0103c    /* 824 (LREF 1 15) */,
    0x00000087    /* 825 (CDDR-PUSH) */,
    0x03801047    /* 826 (LREF-PUSH 1 14) */,
    0x03401047    /* 827 (LREF-PUSH 1 13) */,
    0x03001047    /* 828 (LREF-PUSH 1 12) */,
    0x02c01047    /* 829 (LREF-PUSH 1 11) */,
    0x02801047    /* 830 (LREF-PUSH 1 10) */,
    0x02401047    /* 831 (LREF-PUSH 1 9) */,
    0x02001047    /* 832 (LREF-PUSH 1 8) */,
    0x01c01047    /* 833 (LREF-PUSH 1 7) */,
    0x01801047    /* 834 (LREF-PUSH 1 6) */,
    0x01401047    /* 835 (LREF-PUSH 1 5) */,
    0x01001047    /* 836 (LREF-PUSH 1 4) */,
    0x00c01047    /* 837 (LREF-PUSH 1 3) */,
    0x03c0103c    /* 838 (LREF 1 15) */,
    0x00000083    /* 839 (CADR-PUSH) */,
    0x0000004d    /* 840 (LREF11-PUSH) */,
    0x0000004c    /* 841 (LREF10-PUSH) */,
    0x0000201b    /* 842 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 844 (RET) */,
    0x0000003d    /* 845 (LREF0) */,
    0x0000002e    /* 846 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-radix */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 870)  /*    870 */,
    0x03c0103c    /* 849 (LREF 1 15) */,
    0x00000087    /* 850 (CDDR-PUSH) */,
    0x03801047    /* 851 (LREF-PUSH 1 14) */,
    0x03401047    /* 852 (LREF-PUSH 1 13) */,
    0x03001047    /* 853 (LREF-PUSH 1 12) */,
    0x02c01047    /* 854 (LREF-PUSH 1 11) */,
    0x02801047    /* 855 (LREF-PUSH 1 10) */,
    0x02401047    /* 856 (LREF-PUSH 1 9) */,
    0x02001047    /* 857 (LREF-PUSH 1 8) */,
    0x01c01047    /* 858 (LREF-PUSH 1 7) */,
    0x01801047    /* 859 (LREF-PUSH 1 6) */,
    0x01401047    /* 860 (LREF-PUSH 1 5) */,
    0x01001047    /* 861 (LREF-PUSH 1 4) */,
    0x00c01047    /* 862 (LREF-PUSH 1 3) */,
    0x0000004e    /* 863 (LREF12-PUSH) */,
    0x03c0103c    /* 864 (LREF 1 15) */,
    0x00000083    /* 865 (CADR-PUSH) */,
    0x0000004c    /* 866 (LREF10-PUSH) */,
    0x0000201b    /* 867 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 869 (RET) */,
    0x0000003d    /* 870 (LREF0) */,
    0x0000002e    /* 871 (BNEQC) */,
    SCM_WORD(SCM_UNDEFINED) /* :print-pretty */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 895)  /*    895 */,
    0x03c0103c    /* 874 (LREF 1 15) */,
    0x00000087    /* 875 (CDDR-PUSH) */,
    0x03801047    /* 876 (LREF-PUSH 1 14) */,
    0x03401047    /* 877 (LREF-PUSH 1 13) */,
    0x03001047    /* 878 (LREF-PUSH 1 12) */,
    0x02c01047    /* 879 (LREF-PUSH 1 11) */,
    0x02801047    /* 880 (LREF-PUSH 1 10) */,
    0x02401047    /* 881 (LREF-PUSH 1 9) */,
    0x02001047    /* 882 (LREF-PUSH 1 8) */,
    0x01c01047    /* 883 (LREF-PUSH 1 7) */,
    0x01801047    /* 884 (LREF-PUSH 1 6) */,
    0x01401047    /* 885 (LREF-PUSH 1 5) */,
    0x01001047    /* 886 (LREF-PUSH 1 4) */,
    0x00c01047    /* 887 (LREF-PUSH 1 3) */,
    0x0000004e    /* 888 (LREF12-PUSH) */,
    0x0000004d    /* 889 (LREF11-PUSH) */,
    0x03c0103c    /* 890 (LREF 1 15) */,
    0x00000083    /* 891 (CADR-PUSH) */,
    0x0000201b    /* 892 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 894 (RET) */,
    0x0000200e    /* 895 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 903),
    0x00000006    /* 897 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[283])) /* "unknown keyword ~S" */,
    0x03c0103c    /* 899 (LREF 1 15) */,
    0x00000069    /* 900 (CAR-PUSH) */,
    0x0000205f    /* 901 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* errorf */,
    0x03c0103c    /* 903 (LREF 1 15) */,
    0x00000087    /* 904 (CDDR-PUSH) */,
    0x03801047    /* 905 (LREF-PUSH 1 14) */,
    0x03401047    /* 906 (LREF-PUSH 1 13) */,
    0x03001047    /* 907 (LREF-PUSH 1 12) */,
    0x02c01047    /* 908 (LREF-PUSH 1 11) */,
    0x02801047    /* 909 (LREF-PUSH 1 10) */,
    0x02401047    /* 910 (LREF-PUSH 1 9) */,
    0x02001047    /* 911 (LREF-PUSH 1 8) */,
    0x01c01047    /* 912 (LREF-PUSH 1 7) */,
    0x01801047    /* 913 (LREF-PUSH 1 6) */,
    0x01401047    /* 914 (LREF-PUSH 1 5) */,
    0x01001047    /* 915 (LREF-PUSH 1 4) */,
    0x00c01047    /* 916 (LREF-PUSH 1 3) */,
    0x0000004e    /* 917 (LREF12-PUSH) */,
    0x0000004d    /* 918 (LREF11-PUSH) */,
    0x0000004c    /* 919 (LREF10-PUSH) */,
    0x0000201b    /* 920 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]) + 31),
    0x00000014    /* 922 (RET) */,
    0x00000014    /* 923 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2863]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* write-controls-copy */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2863]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[50])) /* #<compiled-code write-controls-copy@0x7d567a0f05a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* write-controls-copy */,
    0x00000014    /*  14 (RET) */,
    /* open-input-file */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]) + 11),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :encoding */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x0000000e    /*   5 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]) + 9),
    0x0000005f    /*   7 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* default-file-encoding */,
    0x00003062    /*   9 (PUSH-GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* get-keyword */,
    0x00001018    /*  11 (PUSH-LOCAL-ENV 1) */,
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x0000000e    /*  13 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]) + 17),
    0x0000005f    /*  15 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche-character-encoding */,
    0x00000020    /*  17 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]) + 31),
    0x0000005e    /*  19 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %open-input-file */,
    0x0000004d    /*  21 (LREF11-PUSH) */,
    0x0000200e    /*  22 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]) + 29),
    0x00000006    /*  24 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :encoding */,
    0x0000004c    /*  26 (LREF10-PUSH) */,
    0x0000205f    /*  27 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* delete-keyword */,
    0x00003095    /*  29 (TAIL-APPLY 3) */,
    0x00000014    /*  30 (RET) */,
    0x0000003d    /*  31 (LREF0) */,
    0x0000002e    /*  32 (BNEQC) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]) + 55)  /*     55 */,
    0x0000000e    /*  35 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]) + 48),
    0x0000005e    /*  37 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %open-input-file */,
    0x0000004d    /*  39 (LREF11-PUSH) */,
    0x0000200e    /*  40 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]) + 47),
    0x00000006    /*  42 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :encoding */,
    0x0000004c    /*  44 (LREF10-PUSH) */,
    0x0000205f    /*  45 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* delete-keyword */,
    0x00003095    /*  47 (TAIL-APPLY 3) */,
    0x00001018    /*  48 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  49 (LREF0) */,
    0x00000030    /*  50 (RF) */,
    0x00000048    /*  51 (LREF0-PUSH) */,
    0x00001060    /*  52 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* open-coding-aware-port */,
    0x00000014    /*  54 (RET) */,
    0x0000005e    /*  55 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %open-input-file/conv */,
    0x0000004d    /*  57 (LREF11-PUSH) */,
    0x00000041    /*  58 (LREF10) */,
    0x00003095    /*  59 (TAIL-APPLY 3) */,
    0x00000014    /*  60 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2939]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* open-input-file */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2939]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[52])) /* #<compiled-code open-input-file@0x7d567971f840> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* open-input-file */,
    0x00000014    /*  14 (RET) */,
    /* open-output-file */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]) + 8),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :encoding */,
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00000009    /*   5 (CONSTF-PUSH) */,
    0x0000305f    /*   6 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* get-keyword */,
    0x00001018    /*   8 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   9 (LREF0) */,
    0x0000001e    /*  10 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]) + 18),
    0x0000005e    /*  12 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %open-output-file/conv */,
    0x0000004d    /*  14 (LREF11-PUSH) */,
    0x00000041    /*  15 (LREF10) */,
    0x00003095    /*  16 (TAIL-APPLY 3) */,
    0x00000014    /*  17 (RET) */,
    0x0000000e    /*  18 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]) + 22),
    0x0000005f    /*  20 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* default-file-encoding */,
    0x0000000f    /*  22 (PUSH-PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]) + 26),
    0x0000005f    /*  24 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche-character-encoding */,
    0x00000020    /*  26 (BNEQ) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]) + 12),
    0x0000005e    /*  28 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* %open-output-file */,
    0x0000004d    /*  30 (LREF11-PUSH) */,
    0x00000041    /*  31 (LREF10) */,
    0x00003095    /*  32 (TAIL-APPLY 3) */,
    0x00000014    /*  33 (RET) */,
    0x00000013    /*  34 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]) + 12),
    0x00000014    /*  36 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2991]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-file */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[2991]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[54])) /* #<compiled-code open-output-file@0x7d5677c9cd20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-file */,
    0x00000014    /*  14 (RET) */,
    /* (call-with-port #f) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x0000003d    /*   1 (LREF0) */,
    0x00001012    /*   2 (TAIL-CALL 1) */,
    0x00000014    /*   3 (RET) */,
    /* (call-with-port #f) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* close-port */,
    0x00000014    /*   3 (RET) */,
    /* call-with-port */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[56])) /* #<compiled-code (call-with-port #f)@0x7d56774583c0> */,
    0x0000000d    /*   2 (PUSH) */,
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[57])) /* #<compiled-code (call-with-port #f)@0x7d56774580c0> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000006    /*   6 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :source-info */,
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1040])) /* ("libio.scm" 1060) */,
    0x00004060    /*  10 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* %unwind-protect */,
    0x00000014    /*  12 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3027]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-port */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3027]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[58])) /* #<compiled-code call-with-port@0x7d5677458420> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-port */,
    0x00000014    /*  14 (RET) */,
    /* (call-with-input-file #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000042    /*   1 (LREF11) */,
    0x00001012    /*   2 (TAIL-CALL 1) */,
    0x00000014    /*   3 (RET) */,
    /* (call-with-input-file #f) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3046]) + 7),
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x00001060    /*   4 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* close-input-port */,
    0x00000014    /*   6 (RET) */,
    0x0000000c    /*   7 (CONSTU-RET) */,
    /* call-with-input-file */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3054]) + 7),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* open-input-file */,
    0x0000004a    /*   4 (LREF2-PUSH) */,
    0x0000003d    /*   5 (LREF0) */,
    0x00003095    /*   6 (TAIL-APPLY 3) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x00000016    /*   8 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[60])) /* #<compiled-code (call-with-input-file #f)@0x7d56775e3a80> */,
    0x0000000d    /*  10 (PUSH) */,
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[61])) /* #<compiled-code (call-with-input-file #f)@0x7d56775e3a20> */,
    0x0000000d    /*  13 (PUSH) */,
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :source-info */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1051])) /* ("libio.scm" 1067) */,
    0x00004060    /*  18 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* %unwind-protect */,
    0x00000014    /*  20 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3075]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-input-file */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3075]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[62])) /* #<compiled-code call-with-input-file@0x7d56775e3ae0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-input-file */,
    0x00000014    /*  14 (RET) */,
    /* (call-with-output-file #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00000042    /*   1 (LREF11) */,
    0x00001012    /*   2 (TAIL-CALL 1) */,
    0x00000014    /*   3 (RET) */,
    /* (call-with-output-file #f) */
    0x0000003d    /*   0 (LREF0) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3094]) + 7),
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x00001060    /*   4 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* close-output-port */,
    0x00000014    /*   6 (RET) */,
    0x0000000c    /*   7 (CONSTU-RET) */,
    /* call-with-output-file */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3102]) + 7),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-file */,
    0x0000004a    /*   4 (LREF2-PUSH) */,
    0x0000003d    /*   5 (LREF0) */,
    0x00003095    /*   6 (TAIL-APPLY 3) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x00000016    /*   8 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[64])) /* #<compiled-code (call-with-output-file #f)@0x7d56770f52a0> */,
    0x0000000d    /*  10 (PUSH) */,
    0x00000016    /*  11 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[65])) /* #<compiled-code (call-with-output-file #f)@0x7d56770f5240> */,
    0x0000000d    /*  13 (PUSH) */,
    0x00000006    /*  14 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :source-info */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1063])) /* ("libio.scm" 1072) */,
    0x00004060    /*  18 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* %unwind-protect */,
    0x00000014    /*  20 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3123]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-output-file */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3123]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[66])) /* #<compiled-code call-with-output-file@0x7d56770f5300> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-output-file */,
    0x00000014    /*  14 (RET) */,
    /* (with-input-from-file #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000004d    /*   1 (LREF11-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-port */,
    0x00000014    /*   4 (RET) */,
    /* (with-input-from-file #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* close-input-port */,
    0x00000014    /*   3 (RET) */,
    /* with-input-from-file */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3147]) + 7),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* open-input-file */,
    0x0000004a    /*   4 (LREF2-PUSH) */,
    0x0000003d    /*   5 (LREF0) */,
    0x00003095    /*   6 (TAIL-APPLY 3) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000030    /*   9 (RF) */,
    0x00000016    /*  10 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[68])) /* #<compiled-code (with-input-from-file #f)@0x7d56771922a0> */,
    0x0000000d    /*  12 (PUSH) */,
    0x00000016    /*  13 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[69])) /* #<compiled-code (with-input-from-file #f)@0x7d5677192240> */,
    0x0000000d    /*  15 (PUSH) */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :source-info */,
    0x00000006    /*  18 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1073])) /* ("libio.scm" 1078) */,
    0x00004060    /*  20 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* %unwind-protect */,
    0x00000014    /*  22 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3170]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-file */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3170]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[70])) /* #<compiled-code with-input-from-file@0x7d5677192300> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-file */,
    0x00000014    /*  14 (RET) */,
    /* (with-output-to-file #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x0000004d    /*   1 (LREF11-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-port */,
    0x00000014    /*   4 (RET) */,
    /* (with-output-to-file #f) */
    0x00000048    /*   0 (LREF0-PUSH) */,
    0x00001060    /*   1 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* close-output-port */,
    0x00000014    /*   3 (RET) */,
    /* with-output-to-file */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3194]) + 7),
    0x0000005e    /*   2 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-file */,
    0x0000004a    /*   4 (LREF2-PUSH) */,
    0x0000003d    /*   5 (LREF0) */,
    0x00003095    /*   6 (TAIL-APPLY 3) */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000030    /*   9 (RF) */,
    0x00000016    /*  10 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[72])) /* #<compiled-code (with-output-to-file #f)@0x7d5677264720> */,
    0x0000000d    /*  12 (PUSH) */,
    0x00000016    /*  13 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[73])) /* #<compiled-code (with-output-to-file #f)@0x7d56772646c0> */,
    0x0000000d    /*  15 (PUSH) */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* :source-info */,
    0x00000006    /*  18 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1085])) /* ("libio.scm" 1084) */,
    0x00004060    /*  20 (GREF-TAIL-CALL 4) */,
    SCM_WORD(SCM_UNDEFINED) /* %unwind-protect */,
    0x00000014    /*  22 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3217]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-file */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3217]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[74])) /* #<compiled-code with-output-to-file@0x7d5677264840> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-file */,
    0x00000014    /*  14 (RET) */,
    /* with-output-to-string */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3232]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-string */,
    0x00001018    /*   4 (PUSH-LOCAL-ENV 1) */,
    0x0000200e    /*   5 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3232]) + 11),
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x0000004c    /*   8 (LREF10-PUSH) */,
    0x0000205f    /*   9 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-port */,
    0x00000048    /*  11 (LREF0-PUSH) */,
    0x00001060    /*  12 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* get-output-string */,
    0x00000014    /*  14 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3247]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3247]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[76])) /* #<compiled-code with-output-to-string@0x7d56772bf060> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-string */,
    0x00000014    /*  14 (RET) */,
    /* with-input-from-string */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3262]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* open-input-string */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000048    /*   6 (LREF0-PUSH) */,
    0x00002060    /*   7 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-port */,
    0x00000014    /*   9 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3272]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3272]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[78])) /* #<compiled-code with-input-from-string@0x7d567733bf60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-string */,
    0x00000014    /*  14 (RET) */,
    /* call-with-output-string */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3287]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-string */,
    0x00001018    /*   4 (PUSH-LOCAL-ENV 1) */,
    0x0000100e    /*   5 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3287]) + 10),
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x00000041    /*   8 (LREF10) */,
    0x00001011    /*   9 (CALL 1) */,
    0x00000048    /*  10 (LREF0-PUSH) */,
    0x00001060    /*  11 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* get-output-string */,
    0x00000014    /*  13 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3301]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-output-string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3301]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[80])) /* #<compiled-code call-with-output-string@0x7d567736f780> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-output-string */,
    0x00000014    /*  14 (RET) */,
    /* call-with-input-string */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3316]) + 5),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x0000105f    /*   3 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* open-input-string */,
    0x0000000d    /*   5 (PUSH) */,
    0x0000003d    /*   6 (LREF0) */,
    0x00001012    /*   7 (TAIL-CALL 1) */,
    0x00000014    /*   8 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3325]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-input-string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3325]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[82])) /* #<compiled-code call-with-input-string@0x7d567739d4e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-input-string */,
    0x00000014    /*  14 (RET) */,
    /* call-with-string-io */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3340]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* open-output-string */,
    0x0000100f    /*   4 (PUSH-PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3340]) + 9),
    0x00000049    /*   6 (LREF1-PUSH) */,
    0x0000105f    /*   7 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* open-input-string */,
    0x00002018    /*   9 (PUSH-LOCAL-ENV 2) */,
    0x0000200e    /*  10 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3340]) + 16),
    0x00000048    /*  12 (LREF0-PUSH) */,
    0x00000049    /*  13 (LREF1-PUSH) */,
    0x00000041    /*  14 (LREF10) */,
    0x00002011    /*  15 (CALL 2) */,
    0x00000049    /*  16 (LREF1-PUSH) */,
    0x00001060    /*  17 (GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* get-output-string */,
    0x00000014    /*  19 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3360]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-string-io */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3360]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[84])) /* #<compiled-code call-with-string-io@0x7d56773ffea0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* call-with-string-io */,
    0x00000014    /*  14 (RET) */,
    /* (with-string-io #f) */
    0x00000049    /*   0 (LREF1-PUSH) */,
    0x00000048    /*   1 (LREF0-PUSH) */,
    0x00002060    /*   2 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-string */,
    0x00000014    /*   4 (RET) */,
    /* with-string-io */
    0x00000016    /*   0 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[86])) /* #<compiled-code (with-string-io #f)@0x7d5676c90060> */,
    0x00001063    /*   2 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-string */,
    0x00000014    /*   4 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3385]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-string-io */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3385]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[87])) /* #<compiled-code with-string-io@0x7d5676c900c0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-string-io */,
    0x00000014    /*  14 (RET) */,
    /* (write-to-string #f) */
    0x0000004d    /*   0 (LREF11-PUSH) */,
    0x0000003e    /*   1 (LREF1) */,
    0x00001012    /*   2 (TAIL-CALL 1) */,
    0x00000014    /*   3 (RET) */,
    /* write-to-string */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]) + 7),
    0x0000005d    /*   3 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* write */,
    0x00000013    /*   5 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]) + 8),
    0x0000006a    /*   7 (LREF0-CAR) */,
    0x0000000d    /*   8 (PUSH) */,
    0x0000003d    /*   9 (LREF0) */,
    0x00000022    /*  10 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]) + 15),
    0x00000003    /*  12 (CONSTN) */,
    0x00000013    /*  13 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]) + 16),
    0x00000076    /*  15 (LREF0-CDR) */,
    0x00002018    /*  16 (PUSH-LOCAL-ENV 2) */,
    0x0000003d    /*  17 (LREF0) */,
    0x00000022    /*  18 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]) + 22),
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]) + 30),
    0x0000200e    /*  22 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]) + 30),
    0x00000006    /*  24 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[151])) /* "too many arguments for" */,
    0x00000006    /*  26 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2150[1140])) /* (lambda (obj :optional (writer write)) (with-output-to-string (cut writer obj))) */,
    0x0000205f    /*  28 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* error */,
    0x00000016    /*  30 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[89])) /* #<compiled-code (write-to-string #f)@0x7d5676a6ee40> */,
    0x00001063    /*  32 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-string */,
    0x00000014    /*  34 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3439]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* write-to-string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3439]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[90])) /* #<compiled-code write-to-string@0x7d5676a6eea0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* write-to-string */,
    0x00000014    /*  14 (RET) */,
    /* read-from-string */
    0x0000003d    /*   0 (LREF0) */,
    0x00000022    /*   1 (BNNULL) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3454]) + 6),
    0x0000003e    /*   3 (LREF1) */,
    0x00000013    /*   4 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3454]) + 13),
    0x0000000e    /*   6 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3454]) + 13),
    0x0000005e    /*   8 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* opt-substring */,
    0x00000049    /*  10 (LREF1-PUSH) */,
    0x0000003d    /*  11 (LREF0) */,
    0x00003095    /*  12 (TAIL-APPLY 3) */,
    0x00000061    /*  13 (PUSH-GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* read */,
    0x00002063    /*  15 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-string */,
    0x00000014    /*  17 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3472]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* read-from-string */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3472]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[92])) /* #<compiled-code read-from-string@0x7d5676355a20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* read-from-string */,
    0x00000014    /*  14 (RET) */,
    /* (with-input-from-port with-input-from-port) */
    0x000000ea    /*   0 (LREF-UNBOX 0 0) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3487]) + 7),
    0x000000ea    /*   3 (LREF-UNBOX 0 0) */,
    0x00001063    /*   4 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-input-port */,
    0x00000014    /*   6 (RET) */,
    0x0000000c    /*   7 (CONSTU-RET) */,
    /* (with-input-from-port with-input-from-port) */
    0x00000042    /*   0 (LREF11) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3495]) + 10),
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3495]) + 8),
    0x0000004d    /*   5 (LREF11-PUSH) */,
    0x0000105f    /*   6 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-input-port */,
    0x0000003a    /*   8 (LSET 0 0) */,
    0x00000014    /*   9 (RET) */,
    0x0000000c    /*  10 (CONSTU-RET) */,
    /* with-input-from-port */
    0x00000009    /*   0 (CONSTF-PUSH) */,
    0x00001017    /*   1 (LOCAL-ENV 1) */,
    0x000010e7    /*   2 (BOX 1) */,
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[94])) /* #<compiled-code (with-input-from-port with-input-from-port)@0x7d5676402780> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000016    /*   6 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[95])) /* #<compiled-code (with-input-from-port with-input-from-port)@0x7d5676402720> */,
    0x00002018    /*   8 (PUSH-LOCAL-ENV 2) */,
    0x0000000e    /*   9 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3506]) + 13),
    0x0000003d    /*  11 (LREF0) */,
    0x0000001c    /*  12 (LOCAL-ENV-CALL 0) */,
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x0000003e    /*  14 (LREF1) */,
    0x000000e5    /*  15 (PUSH-HANDLERS 0) */,
    0x0000000e    /*  16 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3506]) + 20),
    0x00000044    /*  18 (LREF20) */,
    0x00000011    /*  19 (CALL 0) */,
    0x00400036    /*  20 (TAIL-RECEIVE 0 1) */,
    0x000000e6    /*  21 (POP-HANDLERS) */,
    0x0000000e    /*  22 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3506]) + 26),
    0x00000042    /*  24 (LREF11) */,
    0x0000001c    /*  25 (LOCAL-ENV-CALL 0) */,
    0x0000005e    /*  26 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* values */,
    0x0000003d    /*  28 (LREF0) */,
    0x00002095    /*  29 (TAIL-APPLY 2) */,
    0x00000014    /*  30 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3537]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-port */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3537]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[96])) /* #<compiled-code with-input-from-port@0x7d56764027e0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-input-from-port */,
    0x00000014    /*  14 (RET) */,
    /* (with-output-to-port with-output-to-port) */
    0x000000ea    /*   0 (LREF-UNBOX 0 0) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3552]) + 7),
    0x000000ea    /*   3 (LREF-UNBOX 0 0) */,
    0x00001063    /*   4 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-output-port */,
    0x00000014    /*   6 (RET) */,
    0x0000000c    /*   7 (CONSTU-RET) */,
    /* (with-output-to-port with-output-to-port) */
    0x00000042    /*   0 (LREF11) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3560]) + 10),
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3560]) + 8),
    0x0000004d    /*   5 (LREF11-PUSH) */,
    0x0000105f    /*   6 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-output-port */,
    0x0000003a    /*   8 (LSET 0 0) */,
    0x00000014    /*   9 (RET) */,
    0x0000000c    /*  10 (CONSTU-RET) */,
    /* with-output-to-port */
    0x00000009    /*   0 (CONSTF-PUSH) */,
    0x00001017    /*   1 (LOCAL-ENV 1) */,
    0x000010e7    /*   2 (BOX 1) */,
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[98])) /* #<compiled-code (with-output-to-port with-output-to-port)@0x7d567653dc00> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000016    /*   6 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[99])) /* #<compiled-code (with-output-to-port with-output-to-port)@0x7d567653dba0> */,
    0x00002018    /*   8 (PUSH-LOCAL-ENV 2) */,
    0x0000000e    /*   9 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3571]) + 13),
    0x0000003d    /*  11 (LREF0) */,
    0x0000001c    /*  12 (LOCAL-ENV-CALL 0) */,
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x0000003e    /*  14 (LREF1) */,
    0x000000e5    /*  15 (PUSH-HANDLERS 0) */,
    0x0000000e    /*  16 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3571]) + 20),
    0x00000044    /*  18 (LREF20) */,
    0x00000011    /*  19 (CALL 0) */,
    0x00400036    /*  20 (TAIL-RECEIVE 0 1) */,
    0x000000e6    /*  21 (POP-HANDLERS) */,
    0x0000000e    /*  22 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3571]) + 26),
    0x00000042    /*  24 (LREF11) */,
    0x0000001c    /*  25 (LOCAL-ENV-CALL 0) */,
    0x0000005e    /*  26 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* values */,
    0x0000003d    /*  28 (LREF0) */,
    0x00002095    /*  29 (TAIL-APPLY 2) */,
    0x00000014    /*  30 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3602]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-port */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3602]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[100])) /* #<compiled-code with-output-to-port@0x7d567653dc60> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-output-to-port */,
    0x00000014    /*  14 (RET) */,
    /* (with-error-to-port with-error-to-port) */
    0x000000ea    /*   0 (LREF-UNBOX 0 0) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3617]) + 7),
    0x000000ea    /*   3 (LREF-UNBOX 0 0) */,
    0x00001063    /*   4 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-error-port */,
    0x00000014    /*   6 (RET) */,
    0x0000000c    /*   7 (CONSTU-RET) */,
    /* (with-error-to-port with-error-to-port) */
    0x00000042    /*   0 (LREF11) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3625]) + 10),
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3625]) + 8),
    0x0000004d    /*   5 (LREF11-PUSH) */,
    0x0000105f    /*   6 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-error-port */,
    0x0000003a    /*   8 (LSET 0 0) */,
    0x00000014    /*   9 (RET) */,
    0x0000000c    /*  10 (CONSTU-RET) */,
    /* with-error-to-port */
    0x00000009    /*   0 (CONSTF-PUSH) */,
    0x00001017    /*   1 (LOCAL-ENV 1) */,
    0x000010e7    /*   2 (BOX 1) */,
    0x00000016    /*   3 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[102])) /* #<compiled-code (with-error-to-port with-error-to-port)@0x7d567663f540> */,
    0x0000000d    /*   5 (PUSH) */,
    0x00000016    /*   6 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[103])) /* #<compiled-code (with-error-to-port with-error-to-port)@0x7d567663f4e0> */,
    0x00002018    /*   8 (PUSH-LOCAL-ENV 2) */,
    0x0000000e    /*   9 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3636]) + 13),
    0x0000003d    /*  11 (LREF0) */,
    0x0000001c    /*  12 (LOCAL-ENV-CALL 0) */,
    0x00000048    /*  13 (LREF0-PUSH) */,
    0x0000003e    /*  14 (LREF1) */,
    0x000000e5    /*  15 (PUSH-HANDLERS 0) */,
    0x0000000e    /*  16 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3636]) + 20),
    0x00000044    /*  18 (LREF20) */,
    0x00000011    /*  19 (CALL 0) */,
    0x00400036    /*  20 (TAIL-RECEIVE 0 1) */,
    0x000000e6    /*  21 (POP-HANDLERS) */,
    0x0000000e    /*  22 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3636]) + 26),
    0x00000042    /*  24 (LREF11) */,
    0x0000001c    /*  25 (LOCAL-ENV-CALL 0) */,
    0x0000005e    /*  26 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* values */,
    0x0000003d    /*  28 (LREF0) */,
    0x00002095    /*  29 (TAIL-APPLY 2) */,
    0x00000014    /*  30 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3667]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-error-to-port */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3667]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[104])) /* #<compiled-code with-error-to-port@0x7d567663f5a0> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-error-to-port */,
    0x00000014    /*  14 (RET) */,
    /* (with-ports with-ports) */
    0x008000ea    /*   0 (LREF-UNBOX 0 2) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]) + 10),
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]) + 10),
    0x008000ea    /*   5 (LREF-UNBOX 0 2) */,
    0x00001062    /*   6 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-input-port */,
    0x00000013    /*   8 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]) + 10),
    0x004000ea    /*  10 (LREF-UNBOX 0 1) */,
    0x0000001e    /*  11 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]) + 20),
    0x0000100e    /*  13 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]) + 20),
    0x004000ea    /*  15 (LREF-UNBOX 0 1) */,
    0x00001062    /*  16 (PUSH-GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-output-port */,
    0x00000013    /*  18 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]) + 20),
    0x000000ea    /*  20 (LREF-UNBOX 0 0) */,
    0x0000001e    /*  21 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]) + 27),
    0x000000ea    /*  23 (LREF-UNBOX 0 0) */,
    0x00001063    /*  24 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-error-port */,
    0x00000014    /*  26 (RET) */,
    0x0000000c    /*  27 (CONSTU-RET) */,
    /* (with-ports with-ports) */
    0x00c0103c    /*   0 (LREF 1 3) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]) + 11),
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]) + 8),
    0x00c01047    /*   5 (LREF-PUSH 1 3) */,
    0x0000105f    /*   6 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-input-port */,
    0x0080003a    /*   8 (LSET 0 2) */,
    0x00000013    /*   9 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]) + 11),
    0x00000043    /*  11 (LREF12) */,
    0x0000001e    /*  12 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]) + 22),
    0x0000100e    /*  14 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]) + 19),
    0x0000004e    /*  16 (LREF12-PUSH) */,
    0x0000105f    /*  17 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-output-port */,
    0x0040003a    /*  19 (LSET 0 1) */,
    0x00000013    /*  20 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]) + 22),
    0x00000042    /*  22 (LREF11) */,
    0x0000001e    /*  23 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]) + 32),
    0x0000100e    /*  25 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]) + 30),
    0x0000004d    /*  27 (LREF11-PUSH) */,
    0x0000105f    /*  28 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* current-error-port */,
    0x0000003a    /*  30 (LSET 0 0) */,
    0x00000014    /*  31 (RET) */,
    0x0000000c    /*  32 (CONSTU-RET) */,
    /* with-ports */
    0x00000009    /*   0 (CONSTF-PUSH) */,
    0x00000009    /*   1 (CONSTF-PUSH) */,
    0x00000009    /*   2 (CONSTF-PUSH) */,
    0x00003017    /*   3 (LOCAL-ENV 3) */,
    0x000030e7    /*   4 (BOX 3) */,
    0x000020e7    /*   5 (BOX 2) */,
    0x000010e7    /*   6 (BOX 1) */,
    0x00000016    /*   7 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[106])) /* #<compiled-code (with-ports with-ports)@0x7d5675e649c0> */,
    0x0000000d    /*   9 (PUSH) */,
    0x00000016    /*  10 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[107])) /* #<compiled-code (with-ports with-ports)@0x7d5675e64960> */,
    0x00002018    /*  12 (PUSH-LOCAL-ENV 2) */,
    0x0000000e    /*  13 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3743]) + 17),
    0x0000003d    /*  15 (LREF0) */,
    0x0000001c    /*  16 (LOCAL-ENV-CALL 0) */,
    0x00000048    /*  17 (LREF0-PUSH) */,
    0x0000003e    /*  18 (LREF1) */,
    0x000000e5    /*  19 (PUSH-HANDLERS 0) */,
    0x0000000e    /*  20 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3743]) + 24),
    0x00000044    /*  22 (LREF20) */,
    0x00000011    /*  23 (CALL 0) */,
    0x00400036    /*  24 (TAIL-RECEIVE 0 1) */,
    0x000000e6    /*  25 (POP-HANDLERS) */,
    0x0000000e    /*  26 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3743]) + 30),
    0x00000042    /*  28 (LREF11) */,
    0x0000001c    /*  29 (LOCAL-ENV-CALL 0) */,
    0x0000005e    /*  30 (GREF-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* values */,
    0x0000003d    /*  32 (LREF0) */,
    0x00002095    /*  33 (TAIL-APPLY 2) */,
    0x00000014    /*  34 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3778]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* with-ports */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3778]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[108])) /* #<compiled-code with-ports@0x7d5675e64a20> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* with-ports */,
    0x00000014    /*  14 (RET) */,
    /* #f */
    0x0000100e    /*   0 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3793]) + 6),
    0x00000006    /*   2 (CONST-PUSH) */,
    SCM_WORD(SCM_OBJ(&scm__sc.d2148[323])) /* "Reading R6RS source file.  Note that Gauche is not R6RS compliant." */,
    0x0000105f    /*   4 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* warn */,
    0x000000a3    /*   6 (VALUES-RET 0) */,
    /* %toplevel */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* r6rs */,
    0x00000016    /*   2 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[110])) /* #<compiled-code #f@0x7d56760cfc60> */,
    0x00002063    /*   4 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* define-reader-directive */,
    0x00000014    /*   6 (RET) */,
    /* #f */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3807]) + 9),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000006    /*   3 (CONST-PUSH) */,
    SCM_WORD(SCM_TRUE) /* #t */,
    0x0000005d    /*   5 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* port-case-fold */,
    0x000000a1    /*   7 (SETTER) */,
    0x00002011    /*   8 (CALL 2) */,
    0x000000a3    /*   9 (VALUES-RET 0) */,
    /* %toplevel */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* fold-case */,
    0x00000016    /*   2 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[112])) /* #<compiled-code #f@0x7d5676104540> */,
    0x00002063    /*   4 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* define-reader-directive */,
    0x00000014    /*   6 (RET) */,
    /* #f */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3824]) + 8),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000009    /*   3 (CONSTF-PUSH) */,
    0x0000005d    /*   4 (GREF) */,
    SCM_WORD(SCM_UNDEFINED) /* port-case-fold */,
    0x000000a1    /*   6 (SETTER) */,
    0x00002011    /*   7 (CALL 2) */,
    0x000000a3    /*   8 (VALUES-RET 0) */,
    /* %toplevel */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* no-fold-case */,
    0x00000016    /*   2 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[114])) /* #<compiled-code #f@0x7d5676196840> */,
    0x00002063    /*   4 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* define-reader-directive */,
    0x00000014    /*   6 (RET) */,
    /* #f */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3840]) + 9),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000006    /*   3 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* reader-lexical-mode */,
    0x00000006    /*   5 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* legacy */,
    0x0000305f    /*   7 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* port-attribute-set! */,
    0x000000a3    /*   9 (VALUES-RET 0) */,
    /* %toplevel */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* gauche-legacy */,
    0x00000016    /*   2 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[116])) /* #<compiled-code #f@0x7d56761e9120> */,
    0x00002063    /*   4 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* define-reader-directive */,
    0x00000014    /*   6 (RET) */,
    /* #f */
    0x0000300e    /*   0 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2157[3857]) + 9),
    0x00000049    /*   2 (LREF1-PUSH) */,
    0x00000006    /*   3 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* reader-lexical-mode */,
    0x00000006    /*   5 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* strict-r7 */,
    0x0000305f    /*   7 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* port-attribute-set! */,
    0x000000a3    /*   9 (VALUES-RET 0) */,
    /* %toplevel */
    0x00000006    /*   0 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* r7rs */,
    0x00000016    /*   2 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2158[118])) /* #<compiled-code #f@0x7d567626a660> */,
    0x00002063    /*   4 (PUSH-GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* define-reader-directive */,
    0x00000014    /*   6 (RET) */,
  },
  {   /* ScmPair d2150 */
       { SCM_NIL, SCM_NIL },
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(54U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[2])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[3])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[5])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[6])},
       { SCM_OBJ(&scm__rc.d2150[7]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[4]), SCM_OBJ(&scm__rc.d2150[8])},
       { SCM_MAKE_INT(55U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[10])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[11])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[13])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[14])},
       { SCM_OBJ(&scm__rc.d2150[15]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[12]), SCM_OBJ(&scm__rc.d2150[16])},
       { SCM_MAKE_INT(56U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[18])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[19])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[21])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[22])},
       { SCM_OBJ(&scm__rc.d2150[23]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[20]), SCM_OBJ(&scm__rc.d2150[24])},
       { SCM_MAKE_INT(59U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[26])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[27])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[29])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[30])},
       { SCM_OBJ(&scm__rc.d2150[31]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[28]), SCM_OBJ(&scm__rc.d2150[32])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[34])},
       { SCM_MAKE_INT(80U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[36])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[37])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[39])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[40])},
       { SCM_OBJ(&scm__rc.d2150[41]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[38]), SCM_OBJ(&scm__rc.d2150[42])},
       { SCM_MAKE_INT(82U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[44])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[45])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[47])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[48])},
       { SCM_OBJ(&scm__rc.d2150[49]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[46]), SCM_OBJ(&scm__rc.d2150[50])},
       { SCM_MAKE_INT(84U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[52])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[53])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[55])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[56])},
       { SCM_OBJ(&scm__rc.d2150[57]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[54]), SCM_OBJ(&scm__rc.d2150[58])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(99U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[61])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[62])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[64])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[65])},
       { SCM_OBJ(&scm__rc.d2150[66]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[63]), SCM_OBJ(&scm__rc.d2150[67])},
       { SCM_MAKE_INT(100U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[69])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[70])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[72])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[73])},
       { SCM_OBJ(&scm__rc.d2150[74]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[71]), SCM_OBJ(&scm__rc.d2150[75])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[77])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[78])},
       { SCM_MAKE_INT(102U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[80])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[81])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[83])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[84])},
       { SCM_OBJ(&scm__rc.d2150[85]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[82]), SCM_OBJ(&scm__rc.d2150[86])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[88])},
       { SCM_MAKE_INT(111U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[90])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[91])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[93])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[94])},
       { SCM_OBJ(&scm__rc.d2150[95]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[92]), SCM_OBJ(&scm__rc.d2150[96])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[98])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[99])},
       { SCM_MAKE_INT(113U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[101])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[102])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[104])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[105])},
       { SCM_OBJ(&scm__rc.d2150[106]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[103]), SCM_OBJ(&scm__rc.d2150[107])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[109])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[110])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[111])},
       { SCM_MAKE_INT(115U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[113])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[114])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[116])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[117])},
       { SCM_OBJ(&scm__rc.d2150[118]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[115]), SCM_OBJ(&scm__rc.d2150[119])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[121])},
       { SCM_MAKE_INT(118U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[123])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[124])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[126])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[127])},
       { SCM_OBJ(&scm__rc.d2150[128]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[125]), SCM_OBJ(&scm__rc.d2150[129])},
       { SCM_MAKE_INT(120U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[131])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[132])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[134])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[135])},
       { SCM_OBJ(&scm__rc.d2150[136]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[133]), SCM_OBJ(&scm__rc.d2150[137])},
       { SCM_MAKE_INT(124U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[139])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[140])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[142])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[143])},
       { SCM_OBJ(&scm__rc.d2150[144]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[141]), SCM_OBJ(&scm__rc.d2150[145])},
       { SCM_MAKE_INT(131U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[147])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[148])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[150])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[151])},
       { SCM_OBJ(&scm__rc.d2150[152]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[149]), SCM_OBJ(&scm__rc.d2150[153])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[155])},
       { SCM_MAKE_INT(139U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[157])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[158])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[160])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[161])},
       { SCM_OBJ(&scm__rc.d2150[162]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[159]), SCM_OBJ(&scm__rc.d2150[163])},
       { SCM_MAKE_INT(142U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[165])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[166])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[168])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[169])},
       { SCM_OBJ(&scm__rc.d2150[170]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[167]), SCM_OBJ(&scm__rc.d2150[171])},
       { SCM_MAKE_INT(145U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[173])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[174])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[176])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[177])},
       { SCM_OBJ(&scm__rc.d2150[178]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[175]), SCM_OBJ(&scm__rc.d2150[179])},
       { SCM_MAKE_INT(158U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[181])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[182])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[184])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[185])},
       { SCM_OBJ(&scm__rc.d2150[186]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[183]), SCM_OBJ(&scm__rc.d2150[187])},
       { SCM_MAKE_INT(159U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[189])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[190])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[192])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[193])},
       { SCM_OBJ(&scm__rc.d2150[194]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[191]), SCM_OBJ(&scm__rc.d2150[195])},
       { SCM_MAKE_INT(161U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[197])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[198])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[200])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[201])},
       { SCM_OBJ(&scm__rc.d2150[202]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[199]), SCM_OBJ(&scm__rc.d2150[203])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[205])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[206])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[207])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[208])},
       { SCM_MAKE_INT(190U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[210])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[211])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[213])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[214])},
       { SCM_OBJ(&scm__rc.d2150[215]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[212]), SCM_OBJ(&scm__rc.d2150[216])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[206])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[218])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[219])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[220])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[221])},
       { SCM_MAKE_INT(217U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[223])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[224])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[226])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[227])},
       { SCM_OBJ(&scm__rc.d2150[228]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[225]), SCM_OBJ(&scm__rc.d2150[229])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[231])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[232])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[233])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[234])},
       { SCM_MAKE_INT(266U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[236])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[237])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[239])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[240])},
       { SCM_OBJ(&scm__rc.d2150[241]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[238]), SCM_OBJ(&scm__rc.d2150[242])},
       { SCM_MAKE_INT(285U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[244])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[245])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[247])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[248])},
       { SCM_OBJ(&scm__rc.d2150[249]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[246]), SCM_OBJ(&scm__rc.d2150[250])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[252])},
       { SCM_MAKE_INT(335U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[254])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[255])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[257])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[258])},
       { SCM_OBJ(&scm__rc.d2150[259]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[256]), SCM_OBJ(&scm__rc.d2150[260])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[252])},
       { SCM_MAKE_INT(359U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[263])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[264])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[266])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[267])},
       { SCM_OBJ(&scm__rc.d2150[268]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[265]), SCM_OBJ(&scm__rc.d2150[269])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[231])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[271])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[272])},
       { SCM_MAKE_INT(382U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[274])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[275])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[277])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[278])},
       { SCM_OBJ(&scm__rc.d2150[279]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[276]), SCM_OBJ(&scm__rc.d2150[280])},
       { SCM_MAKE_INT(388U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[282])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[283])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[285])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[286])},
       { SCM_OBJ(&scm__rc.d2150[287]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[284]), SCM_OBJ(&scm__rc.d2150[288])},
       { SCM_MAKE_INT(393U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[290])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[291])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[293])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[294])},
       { SCM_OBJ(&scm__rc.d2150[295]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[292]), SCM_OBJ(&scm__rc.d2150[296])},
       { SCM_MAKE_INT(396U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[298])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[299])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[301])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[302])},
       { SCM_OBJ(&scm__rc.d2150[303]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[300]), SCM_OBJ(&scm__rc.d2150[304])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(399U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[307])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[308])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[310])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[311])},
       { SCM_OBJ(&scm__rc.d2150[312]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[309]), SCM_OBJ(&scm__rc.d2150[313])},
       { SCM_MAKE_INT(405U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[315])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[316])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[318])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[319])},
       { SCM_OBJ(&scm__rc.d2150[320]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[317]), SCM_OBJ(&scm__rc.d2150[321])},
       { SCM_MAKE_INT(413U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[323])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[324])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[326])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[327])},
       { SCM_OBJ(&scm__rc.d2150[328]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[325]), SCM_OBJ(&scm__rc.d2150[329])},
       { SCM_MAKE_INT(415U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[331])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[332])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[334])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[335])},
       { SCM_OBJ(&scm__rc.d2150[336]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[333]), SCM_OBJ(&scm__rc.d2150[337])},
       { SCM_MAKE_INT(418U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[339])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[340])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[342])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[343])},
       { SCM_OBJ(&scm__rc.d2150[344]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[341]), SCM_OBJ(&scm__rc.d2150[345])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[347])},
       { SCM_MAKE_INT(420U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[349])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[350])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[352])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[353])},
       { SCM_OBJ(&scm__rc.d2150[354]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[351]), SCM_OBJ(&scm__rc.d2150[355])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[357])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[358])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[359])},
       { SCM_MAKE_INT(431U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[361])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[362])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[364])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[365])},
       { SCM_OBJ(&scm__rc.d2150[366]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[363]), SCM_OBJ(&scm__rc.d2150[367])},
       { SCM_MAKE_INT(436U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[369])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[370])},
       { SCM_OBJ(&scm__rc.d2150[371]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1U), SCM_OBJ(&scm__rc.d2150[374])},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[375])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1U), SCM_OBJ(&scm__rc.d2150[377])},
       { SCM_FALSE, SCM_OBJ(&scm__rc.d2150[378])},
       { SCM_MAKE_INT(439U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[380])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[381])},
       { SCM_OBJ(&scm__rc.d2150[382]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(452U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[385])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[386])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[388])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[389])},
       { SCM_OBJ(&scm__rc.d2150[390]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[387]), SCM_OBJ(&scm__rc.d2150[391])},
       { SCM_MAKE_INT(458U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[393])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[394])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[396])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[397])},
       { SCM_OBJ(&scm__rc.d2150[398]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[395]), SCM_OBJ(&scm__rc.d2150[399])},
       { SCM_MAKE_INT(482U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[401])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[402])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[404])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[405])},
       { SCM_OBJ(&scm__rc.d2150[406]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[403]), SCM_OBJ(&scm__rc.d2150[407])},
       { SCM_MAKE_INT(490U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[409])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[410])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[412])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[413])},
       { SCM_OBJ(&scm__rc.d2150[414]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[411]), SCM_OBJ(&scm__rc.d2150[415])},
       { SCM_MAKE_INT(493U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[417])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[418])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[420])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[421])},
       { SCM_OBJ(&scm__rc.d2150[422]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[419]), SCM_OBJ(&scm__rc.d2150[423])},
       { SCM_FALSE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_OBJ(&scm__rc.d2150[426]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[427]), SCM_NIL},
       { SCM_MAKE_INT(499U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[429])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[431])},
       { SCM_MAKE_INT(498U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[433])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[434])},
       { SCM_OBJ(&scm__rc.d2150[435]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_OBJ(&scm__rc.d2150[438]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[439]), SCM_NIL},
       { SCM_MAKE_INT(510U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[441])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[443])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[444])},
       { SCM_MAKE_INT(504U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[446])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[447])},
       { SCM_OBJ(&scm__rc.d2150[448]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(528U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[451])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[452])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[454])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[455])},
       { SCM_OBJ(&scm__rc.d2150[456]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[453]), SCM_OBJ(&scm__rc.d2150[457])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_MAKE_INT(538U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[460])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[461])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[463])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[464])},
       { SCM_OBJ(&scm__rc.d2150[465]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[462]), SCM_OBJ(&scm__rc.d2150[466])},
       { SCM_MAKE_INT(541U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[468])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[469])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[471])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[472])},
       { SCM_OBJ(&scm__rc.d2150[473]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[470]), SCM_OBJ(&scm__rc.d2150[474])},
       { SCM_MAKE_INT(547U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[476])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[477])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[479])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[480])},
       { SCM_OBJ(&scm__rc.d2150[481]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[478]), SCM_OBJ(&scm__rc.d2150[482])},
       { SCM_MAKE_INT(552U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[484])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[485])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[487])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[488])},
       { SCM_OBJ(&scm__rc.d2150[489]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[486]), SCM_OBJ(&scm__rc.d2150[490])},
       { SCM_MAKE_INT(555U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[492])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[493])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[495])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[496])},
       { SCM_OBJ(&scm__rc.d2150[497]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[494]), SCM_OBJ(&scm__rc.d2150[498])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[500])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[501])},
       { SCM_OBJ(&scm__rc.d2150[502]), SCM_NIL},
       { SCM_MAKE_INT(563U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[504])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[505])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[507])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[508])},
       { SCM_OBJ(&scm__rc.d2150[509]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[506]), SCM_OBJ(&scm__rc.d2150[510])},
       { SCM_MAKE_INT(568U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[512])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[513])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[515])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[516])},
       { SCM_OBJ(&scm__rc.d2150[517]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[514]), SCM_OBJ(&scm__rc.d2150[518])},
       { SCM_MAKE_INT(575U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[520])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[521])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[523])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[524])},
       { SCM_OBJ(&scm__rc.d2150[525]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[522]), SCM_OBJ(&scm__rc.d2150[526])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[528])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[529])},
       { SCM_MAKE_INT(581U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[531])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[532])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[534])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[535])},
       { SCM_OBJ(&scm__rc.d2150[536]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[533]), SCM_OBJ(&scm__rc.d2150[537])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[539]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[540])},
       { SCM_OBJ(&scm__rc.d2150[541]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[542])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[543])},
       { SCM_TRUE, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[545])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[546])},
       { SCM_OBJ(&scm__rc.d2150[547]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[548])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[549])},
       { SCM_MAKE_INT(0), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[551])},
       { SCM_OBJ(&scm__rc.d2150[552]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[554])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[555])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[557])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[560])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[552])},
       { SCM_OBJ(&scm__rc.d2150[558]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[500]), SCM_OBJ(&scm__rc.d2150[563])},
       { SCM_OBJ(&scm__rc.d2150[562]), SCM_OBJ(&scm__rc.d2150[564])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[565])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[557])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[567])},
       { SCM_MAKE_INT(1U), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[569])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[570])},
       { SCM_OBJ(&scm__rc.d2150[571]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[572])},
       { SCM_OBJ(&scm__rc.d2150[573]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[568]), SCM_OBJ(&scm__rc.d2150[574])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[575])},
       { SCM_OBJ(&scm__rc.d2150[576]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[566]), SCM_OBJ(&scm__rc.d2150[577])},
       { SCM_OBJ(&scm__rc.d2150[561]), SCM_OBJ(&scm__rc.d2150[578])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[579])},
       { SCM_OBJ(&scm__rc.d2150[580]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[559]), SCM_OBJ(&scm__rc.d2150[581])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[582])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[583])},
       { SCM_OBJ(&scm__rc.d2150[584]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[558]), SCM_OBJ(&scm__rc.d2150[585])},
       { SCM_OBJ(&scm__rc.d2150[556]), SCM_OBJ(&scm__rc.d2150[586])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[587])},
       { SCM_OBJ(&scm__rc.d2150[588]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[553]), SCM_OBJ(&scm__rc.d2150[589])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[590])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[591])},
       { SCM_OBJ(&scm__rc.d2150[592]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[550]), SCM_OBJ(&scm__rc.d2150[593])},
       { SCM_OBJ(&scm__rc.d2150[544]), SCM_OBJ(&scm__rc.d2150[594])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[595])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(590U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[598])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[599])},
       { SCM_OBJ(&scm__rc.d2150[600]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[603]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[604])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[551])},
       { SCM_MAKE_INT(-1), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[607])},
       { SCM_OBJ(&scm__rc.d2150[608]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[606]), SCM_OBJ(&scm__rc.d2150[609])},
       { SCM_OBJ(&scm__rc.d2150[605]), SCM_OBJ(&scm__rc.d2150[610])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[611])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[612])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[614])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[615])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[616])},
       { SCM_OBJ(&scm__rc.d2150[617]), SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[618])},
       { SCM_OBJ(&scm__rc.d2150[619]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[613]), SCM_OBJ(&scm__rc.d2150[620])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[621])},
       { SCM_MAKE_INT(602U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[623])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[624])},
       { SCM_OBJ(&scm__rc.d2150[625]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_MAKE_INT(32U), SCM_NIL},
       { SCM_MAKE_INT(9U), SCM_OBJ(&scm__rc.d2150[630])},
       { SCM_OBJ(&scm__rc.d2150[631]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[632])},
       { SCM_OBJ(&scm__rc.d2150[633]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[634])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[635])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[638]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[637]), SCM_OBJ(&scm__rc.d2150[639])},
       { SCM_OBJ(&scm__rc.d2150[636]), SCM_OBJ(&scm__rc.d2150[640])},
       { SCM_MAKE_INT(13U), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[642])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[643])},
       { SCM_MAKE_INT(10U), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[629]), SCM_OBJ(&scm__rc.d2150[645])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[646])},
       { SCM_OBJ(&scm__rc.d2150[647]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[628]), SCM_OBJ(&scm__rc.d2150[648])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[649])},
       { SCM_OBJ(&scm__rc.d2150[637]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[650]), SCM_OBJ(&scm__rc.d2150[651])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[652])},
       { SCM_OBJ(&scm__rc.d2150[653]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[637]), SCM_OBJ(&scm__rc.d2150[654])},
       { SCM_OBJ(&scm__rc.d2150[644]), SCM_OBJ(&scm__rc.d2150[655])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[645])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[657])},
       { SCM_OBJ(&scm__rc.d2150[658]), SCM_OBJ(&scm__rc.d2150[651])},
       { SCM_OBJ(&scm__rc.d2150[659]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[656]), SCM_OBJ(&scm__rc.d2150[660])},
       { SCM_OBJ(&scm__rc.d2150[641]), SCM_OBJ(&scm__rc.d2150[661])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[662])},
       { SCM_OBJ(&scm__rc.d2150[663]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[629]), SCM_OBJ(&scm__rc.d2150[664])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[665])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[666])},
       { SCM_OBJ(&scm__rc.d2150[667]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[628]), SCM_OBJ(&scm__rc.d2150[668])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[669])},
       { SCM_OBJ(&scm__rc.d2150[670]), SCM_NIL},
       { SCM_NIL, SCM_OBJ(&scm__rc.d2150[671])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[672])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[673])},
       { SCM_OBJ(&scm__rc.d2150[674]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[543]), SCM_OBJ(&scm__rc.d2150[675])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[676])},
       { SCM_MAKE_INT(618U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[678])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[679])},
       { SCM_OBJ(&scm__rc.d2150[680]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(630U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[684])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[685])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[687])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[688])},
       { SCM_OBJ(&scm__rc.d2150[689]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[686]), SCM_OBJ(&scm__rc.d2150[690])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_MAKE_INT(634U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[693])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[694])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[696])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[697])},
       { SCM_OBJ(&scm__rc.d2150[698]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[695]), SCM_OBJ(&scm__rc.d2150[699])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_MAKE_INT(649U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[702])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[703])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[705])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[706])},
       { SCM_OBJ(&scm__rc.d2150[707]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[704]), SCM_OBJ(&scm__rc.d2150[708])},
       { SCM_MAKE_INT(653U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[710])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[711])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[713])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[714])},
       { SCM_OBJ(&scm__rc.d2150[715]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[712]), SCM_OBJ(&scm__rc.d2150[716])},
       { SCM_MAKE_INT(661U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[718])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[719])},
       { SCM_OBJ(&scm__rc.d2150[720]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_MAKE_INT(668U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[724])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[725])},
       { SCM_OBJ(&scm__rc.d2150[726]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_MAKE_INT(666U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[730])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[731])},
       { SCM_OBJ(&scm__rc.d2150[732]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[735])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(675U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[738])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[739])},
       { SCM_OBJ(&scm__rc.d2150[740]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[26]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(676U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[745])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[746])},
       { SCM_OBJ(&scm__rc.d2150[747]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[750])},
       { SCM_MAKE_INT(679U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[752])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[753])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[755])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[756])},
       { SCM_OBJ(&scm__rc.d2150[757]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[754]), SCM_OBJ(&scm__rc.d2150[758])},
       { SCM_MAKE_INT(685U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[760])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[761])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[763])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[764])},
       { SCM_OBJ(&scm__rc.d2150[765]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[762]), SCM_OBJ(&scm__rc.d2150[766])},
       { SCM_MAKE_INT(687U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[768])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[769])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[771])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[772])},
       { SCM_OBJ(&scm__rc.d2150[773]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[770]), SCM_OBJ(&scm__rc.d2150[774])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[776])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[777])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[778])},
       { SCM_MAKE_INT(693U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[780])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[781])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[783])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[784])},
       { SCM_OBJ(&scm__rc.d2150[785]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[782]), SCM_OBJ(&scm__rc.d2150[786])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(696U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[789])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[790])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[792])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[793])},
       { SCM_OBJ(&scm__rc.d2150[794]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[791]), SCM_OBJ(&scm__rc.d2150[795])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[797])},
       { SCM_MAKE_INT(699U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[799])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[800])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[802])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[803])},
       { SCM_OBJ(&scm__rc.d2150[804]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[801]), SCM_OBJ(&scm__rc.d2150[805])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[807])},
       { SCM_MAKE_INT(710U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[809])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[810])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[812])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[813])},
       { SCM_OBJ(&scm__rc.d2150[814]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[811]), SCM_OBJ(&scm__rc.d2150[815])},
       { SCM_MAKE_INT(718U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[817])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[818])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[820])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[821])},
       { SCM_OBJ(&scm__rc.d2150[822]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[819]), SCM_OBJ(&scm__rc.d2150[823])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(720U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[826])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[827])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[829])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[830])},
       { SCM_OBJ(&scm__rc.d2150[831]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[828]), SCM_OBJ(&scm__rc.d2150[832])},
       { SCM_MAKE_INT(723U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[834])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[835])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[837])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[838])},
       { SCM_OBJ(&scm__rc.d2150[839]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[836]), SCM_OBJ(&scm__rc.d2150[840])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[842])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[843])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[844])},
       { SCM_MAKE_INT(766U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[846])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[847])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[849])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[850])},
       { SCM_OBJ(&scm__rc.d2150[851]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[848]), SCM_OBJ(&scm__rc.d2150[852])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_MAKE_INT(772U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[855])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[856])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[858])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[859])},
       { SCM_OBJ(&scm__rc.d2150[860]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[857]), SCM_OBJ(&scm__rc.d2150[861])},
       { SCM_MAKE_INT(777U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[863])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[864])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[866])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[867])},
       { SCM_OBJ(&scm__rc.d2150[868]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[865]), SCM_OBJ(&scm__rc.d2150[869])},
       { SCM_MAKE_INT(783U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[871])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[872])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[874])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[875])},
       { SCM_OBJ(&scm__rc.d2150[876]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[873]), SCM_OBJ(&scm__rc.d2150[877])},
       { SCM_MAKE_INT(789U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[879])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[880])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[882])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[883])},
       { SCM_OBJ(&scm__rc.d2150[884]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[881]), SCM_OBJ(&scm__rc.d2150[885])},
       { SCM_MAKE_INT(792U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[887])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[888])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[890])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[891])},
       { SCM_OBJ(&scm__rc.d2150[892]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[889]), SCM_OBJ(&scm__rc.d2150[893])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_MAKE_INT(799U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[896])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[897])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[899])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[900])},
       { SCM_OBJ(&scm__rc.d2150[901]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[898]), SCM_OBJ(&scm__rc.d2150[902])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_MAKE_INT(805U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[905])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[906])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[908])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[909])},
       { SCM_OBJ(&scm__rc.d2150[910]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[907]), SCM_OBJ(&scm__rc.d2150[911])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[459])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[913])},
       { SCM_MAKE_INT(815U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[915])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[916])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[918])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[919])},
       { SCM_OBJ(&scm__rc.d2150[920]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[917]), SCM_OBJ(&scm__rc.d2150[921])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[155])},
       { SCM_MAKE_INT(821U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[924])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[925])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[927])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[928])},
       { SCM_OBJ(&scm__rc.d2150[929]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[926]), SCM_OBJ(&scm__rc.d2150[930])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[932])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[933])},
       { SCM_OBJ(&scm__rc.d2150[934]), SCM_NIL},
       { SCM_MAKE_INT(831U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[936])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[937])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[939])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[940])},
       { SCM_OBJ(&scm__rc.d2150[941]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[938]), SCM_OBJ(&scm__rc.d2150[942])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[60])},
       { SCM_MAKE_INT(839U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[945])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[946])},
       { SCM_OBJ(&scm__rc.d2150[947]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[950])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(846U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[953])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[954])},
       { SCM_OBJ(&scm__rc.d2150[955]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2158[37]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[960])},
       { SCM_MAKE_INT(864U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[962])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[963])},
       { SCM_OBJ(&scm__rc.d2150[964]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[967])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[968])},
       { SCM_MAKE_INT(843U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[970])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[971])},
       { SCM_OBJ(&scm__rc.d2150[972]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[797])},
       { SCM_MAKE_INT(880U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[976])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[977])},
       { SCM_OBJ(&scm__rc.d2150[978]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[605]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[981])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[982])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[944])},
       { SCM_OBJ(&scm__rc.d2150[984]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[983]), SCM_OBJ(&scm__rc.d2150[985])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[986])},
       { SCM_MAKE_INT(893U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[988])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[989])},
       { SCM_OBJ(&scm__rc.d2150[990]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(897U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[993])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[994])},
       { SCM_OBJ(&scm__rc.d2150[995]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[998])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[999])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1000])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1001])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1002])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1003])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1004])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1005])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1006])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1007])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1008])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1009])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1010])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1011])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1012])},
       { SCM_MAKE_INT(963U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1014])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1015])},
       { SCM_OBJ(&scm__rc.d2150[1016]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1013])},
       { SCM_MAKE_INT(985U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1020])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1021])},
       { SCM_OBJ(&scm__rc.d2150[1022]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(1040U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1026])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1027])},
       { SCM_OBJ(&scm__rc.d2150[1028]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1050U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1031])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1032])},
       { SCM_OBJ(&scm__rc.d2150[1033]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_OBJ(&scm__rc.d2150[1036]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1037]), SCM_NIL},
       { SCM_MAKE_INT(1060U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1039])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[797])},
       { SCM_MAKE_INT(1059U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1042])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1043])},
       { SCM_OBJ(&scm__rc.d2150[1044]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_OBJ(&scm__rc.d2150[1047]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1048]), SCM_NIL},
       { SCM_MAKE_INT(1067U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1050])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1052])},
       { SCM_MAKE_INT(1065U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1054])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1055])},
       { SCM_OBJ(&scm__rc.d2150[1056]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_OBJ(&scm__rc.d2150[1059]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1060]), SCM_NIL},
       { SCM_MAKE_INT(1072U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1062])},
       { SCM_MAKE_INT(1070U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1064])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1065])},
       { SCM_OBJ(&scm__rc.d2150[1066]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_OBJ(&scm__rc.d2150[1069]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1070]), SCM_NIL},
       { SCM_MAKE_INT(1078U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1072])},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1074])},
       { SCM_MAKE_INT(1075U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1076])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1077])},
       { SCM_OBJ(&scm__rc.d2150[1078]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_OBJ(&scm__rc.d2150[1081]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1082]), SCM_NIL},
       { SCM_MAKE_INT(1084U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1084])},
       { SCM_MAKE_INT(1081U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1086])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1087])},
       { SCM_OBJ(&scm__rc.d2150[1088]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1088U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1092])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1093])},
       { SCM_OBJ(&scm__rc.d2150[1094]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1091])},
       { SCM_MAKE_INT(1093U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1098])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1099])},
       { SCM_OBJ(&scm__rc.d2150[1100]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1096U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1103])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1104])},
       { SCM_OBJ(&scm__rc.d2150[1105]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[797])},
       { SCM_MAKE_INT(1101U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1109])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1110])},
       { SCM_OBJ(&scm__rc.d2150[1111]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1104U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1114])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1115])},
       { SCM_OBJ(&scm__rc.d2150[1116]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_MAKE_INT(1111U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1120])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1121])},
       { SCM_OBJ(&scm__rc.d2150[1122]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1110U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1125])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1126])},
       { SCM_OBJ(&scm__rc.d2150[1127]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[849])},
       { SCM_OBJ(&scm__rc.d2150[1130]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1131])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1132])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1134])},
       { SCM_OBJ(&scm__rc.d2150[1135]), SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1136])},
       { SCM_OBJ(&scm__rc.d2150[1137]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1133]), SCM_OBJ(&scm__rc.d2150[1138])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1139])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[425])},
       { SCM_MAKE_INT(1114U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1142])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1143])},
       { SCM_OBJ(&scm__rc.d2150[1144]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1113U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1147])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1148])},
       { SCM_OBJ(&scm__rc.d2150[1149]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_UNDEFINED},
       { SCM_MAKE_INT(1116U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1153])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1154])},
       { SCM_OBJ(&scm__rc.d2150[1155]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1158])},
       { SCM_MAKE_INT(1137U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1160])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1161])},
       { SCM_OBJ(&scm__rc.d2150[1162]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1091])},
       { SCM_MAKE_INT(1136U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1167])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1168])},
       { SCM_OBJ(&scm__rc.d2150[1169]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1172])},
       { SCM_MAKE_INT(1140U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1174])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1175])},
       { SCM_OBJ(&scm__rc.d2150[1176]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1139U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1180])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1181])},
       { SCM_OBJ(&scm__rc.d2150[1182]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1185])},
       { SCM_MAKE_INT(1143U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1187])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1188])},
       { SCM_OBJ(&scm__rc.d2150[1189]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1142U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1193])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1194])},
       { SCM_OBJ(&scm__rc.d2150[1195]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1198])},
       { SCM_MAKE_INT(1146U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1200])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1201])},
       { SCM_OBJ(&scm__rc.d2150[1202]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1091])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1206])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1207])},
       { SCM_MAKE_INT(1145U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1209])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1210])},
       { SCM_OBJ(&scm__rc.d2150[1211]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[807])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1214])},
       { SCM_MAKE_INT(1156U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1216])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1217])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1215])},
       { SCM_OBJ(&scm__rc.d2150[1219]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1218]), SCM_OBJ(&scm__rc.d2150[1220])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1163U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1223])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1224])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[807])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1226])},
       { SCM_OBJ(&scm__rc.d2150[1227]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2150[1225]), SCM_OBJ(&scm__rc.d2150[1228])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1168U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1231])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1232])},
       { SCM_OBJ(&scm__rc.d2150[1233]), SCM_OBJ(&scm__rc.d2150[1228])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1173U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1236])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1237])},
       { SCM_OBJ(&scm__rc.d2150[1238]), SCM_OBJ(&scm__rc.d2150[1228])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(1178U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2148[3]), SCM_OBJ(&scm__rc.d2150[1241])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2150[1242])},
       { SCM_OBJ(&scm__rc.d2150[1243]), SCM_OBJ(&scm__rc.d2150[1228])},
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(318, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
  },
};

static ScmObj libioinput_portP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("input-port?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_IPORTP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libiooutput_portP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("output-port?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_OPORTP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioportP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_PORTP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioport_closedP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmPort* obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-closed?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(obj_scm)) Scm_Error("<port> required, but got %S", obj_scm);
  obj = SCM_PORT(obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_PORT_CLOSED_P(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

static ScmPrimitiveParameter* default_file_encoding;

static ScmObj libiostandard_input_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmPort* p;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("standard-input-port");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    p_scm = SCM_SUBRARGS[0];
  } else {
    p_scm = SCM_FALSE;
  }
  if (!SCM_MAYBE_P(SCM_IPORTP, p_scm)) Scm_Error("<input-port> or #f required, but got %S", p_scm);
  p = SCM_MAYBE(SCM_PORT, p_scm);
  {
{
ScmObj SCM_RESULT;

#line 81 "libio.scm"
{SCM_RESULT=(((p)?(Scm_SetStdin(p)):(Scm_Stdin())));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libiostandard_output_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmPort* p;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("standard-output-port");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    p_scm = SCM_SUBRARGS[0];
  } else {
    p_scm = SCM_FALSE;
  }
  if (!SCM_MAYBE_P(SCM_OPORTP, p_scm)) Scm_Error("<output-port> or #f required, but got %S", p_scm);
  p = SCM_MAYBE(SCM_PORT, p_scm);
  {
{
ScmObj SCM_RESULT;

#line 83 "libio.scm"
{SCM_RESULT=(((p)?(Scm_SetStdout(p)):(Scm_Stdout())));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libiostandard_error_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmPort* p;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("standard-error-port");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    p_scm = SCM_SUBRARGS[0];
  } else {
    p_scm = SCM_FALSE;
  }
  if (!SCM_MAYBE_P(SCM_OPORTP, p_scm)) Scm_Error("<output-port> or #f required, but got %S", p_scm);
  p = SCM_MAYBE(SCM_PORT, p_scm);
  {
{
ScmObj SCM_RESULT;

#line 85 "libio.scm"
{SCM_RESULT=(((p)?(Scm_SetStderr(p)):(Scm_Stderr())));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_name(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_PortName(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_current_line(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-current-line");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmSmallInt SCM_RESULT;
{SCM_RESULT=(Scm_PortLine(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_INT(SCM_RESULT));
}
  }
}


static ScmObj libioport_file_number(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj dupP_scm;
  int dupP;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("port-file-number");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  if (SCM_ARGCNT > 1+1) {
    dupP_scm = SCM_SUBRARGS[1];
  } else {
    dupP_scm = SCM_FALSE;
  }
  if (!SCM_BOOLP(dupP_scm)) Scm_Error("boolean required, but got %S", dupP_scm);
  dupP = SCM_BOOL_VALUE(dupP_scm);
  {
{
ScmObj SCM_RESULT;

#line 103 "libio.scm"
{int i=Scm_PortFileNo(port);
if ((i)<(0)){{{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}}}
if (dupP){{
{int r=0;
SCM_SYSCALL(r,dup(i));
if ((r)<(0)){{Scm_SysError("dup(2) failed");}}
i=(r);}}}
{SCM_RESULT=(Scm_MakeInteger(i));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_fd_dupX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj dst_scm;
  ScmPort* dst;
  ScmObj src_scm;
  ScmPort* src;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("port-fd-dup!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  dst_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(dst_scm)) Scm_Error("<port> required, but got %S", dst_scm);
  dst = SCM_PORT(dst_scm);
  src_scm = SCM_SUBRARGS[1];
  if (!SCM_PORTP(src_scm)) Scm_Error("<port> required, but got %S", src_scm);
  src = SCM_PORT(src_scm);
  {
Scm_PortFdDup(dst,src);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libioport_attribute_setX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj key_scm;
  ScmObj key;
  ScmObj val_scm;
  ScmObj val;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("port-attribute-set!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  val_scm = SCM_SUBRARGS[2];
  if (!(val_scm)) Scm_Error("scheme object required, but got %S", val_scm);
  val = (val_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_PortAttrSet(port,key,val));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_attribute_ref(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj key_scm;
  ScmObj key;
  ScmObj fallback_scm;
  ScmObj fallback;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("port-attribute-ref");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
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
{SCM_RESULT=(Scm_PortAttrGet(port,key,fallback));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_attribute_deleteX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj key_scm;
  ScmObj key;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("port-attribute-delete!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  key_scm = SCM_SUBRARGS[1];
  if (!(key_scm)) Scm_Error("scheme object required, but got %S", key_scm);
  key = (key_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_PortAttrDelete(port,key));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_attributes(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-attributes");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_PortAttrs(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_type(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-type");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 125 "libio.scm"
switch (SCM_PORT_TYPE(port)) {
case SCM_PORT_FILE : {{SCM_RESULT=(scm__rc.d2149[128]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 127 "libio.scm"
case SCM_PORT_PROC : {{SCM_RESULT=(scm__rc.d2149[129]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}
#line 128 "libio.scm"
case SCM_PORT_OSTR : case SCM_PORT_ISTR : {{SCM_RESULT=(scm__rc.d2149[130]);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}default: {
#line 129 "libio.scm"
{SCM_RESULT=(SCM_FALSE);goto SCM_STUB_RETURN;}
#line 853 "../lib/gauche/cgen/cise.scm"
break;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_buffering_SETTER(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj mode_scm;
  ScmObj mode;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("(setter port-buffering)");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  mode_scm = SCM_SUBRARGS[1];
  if (!(mode_scm)) Scm_Error("scheme object required, but got %S", mode_scm);
  mode = (mode_scm);
  {

#line 133 "libio.scm"
if (!((SCM_PORT_TYPE(port))==(SCM_PORT_FILE))){{
Scm_Error("can't set buffering mode to non-buffered port: %S",port);}}

#line 135 "libio.scm"
Scm_SetPortBufferingMode(port,
Scm_BufferingMode(mode,(port)->direction,-1));
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libioport_buffering(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-buffering");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 137 "libio.scm"
{SCM_RESULT=(Scm_GetPortBufferingModeAsKeyword(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_linkX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj iport_scm;
  ScmPort* iport;
  ScmObj oport_scm;
  ScmPort* oport;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("port-link!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  iport_scm = SCM_SUBRARGS[0];
  if (!SCM_IPORTP(iport_scm)) Scm_Error("<input-port> required, but got %S", iport_scm);
  iport = SCM_PORT(iport_scm);
  oport_scm = SCM_SUBRARGS[1];
  if (!SCM_OPORTP(oport_scm)) Scm_Error("<output-port> required, but got %S", oport_scm);
  oport = SCM_PORT(oport_scm);
  {
Scm_LinkPorts(iport,oport);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libioport_unlinkX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-unlink!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
Scm_UnlinkPorts(port);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libioport_case_fold_SETTER(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj flag_scm;
  int flag;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("(setter port-case-fold)");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  flag_scm = SCM_SUBRARGS[1];
  if (!SCM_BOOLP(flag_scm)) Scm_Error("boolean required, but got %S", flag_scm);
  flag = SCM_BOOL_VALUE(flag_scm);
  {

#line 147 "libio.scm"
if (flag){
(SCM_PORT_FLAGS(port))|=(SCM_PORT_CASE_FOLD);} else {
(SCM_PORT_FLAGS(port))&=(~(SCM_PORT_CASE_FOLD));}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libioport_case_fold(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-case-fold");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
int SCM_RESULT;

#line 150 "libio.scm"
{SCM_RESULT=((SCM_PORT_FLAGS(port))&(SCM_PORT_CASE_FOLD));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioclose_input_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("close-input-port");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
Scm_ClosePort(port);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libioclose_output_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("close-output-port");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_OPORTP(port_scm)) Scm_Error("<output-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
Scm_ClosePort(port);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libioclose_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("close-port");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
Scm_ClosePort(port);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}

#if defined(GAUCHE_WINDOWS)
#define DIRECTORY_GETS_IN_WAY(x) ((x)==(EACCES))

#endif /* defined(GAUCHE_WINDOWS) */
#if !(defined(GAUCHE_WINDOWS))
#define DIRECTORY_GETS_IN_WAY(x) (FALSE)

#endif /* !(defined(GAUCHE_WINDOWS)) */

static ScmObj libio_25open_input_file(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  ScmString* path;
  ScmObj if_does_not_exist_scm = scm__rc.d2149[188];
  ScmObj if_does_not_exist;
  ScmObj buffering_scm = SCM_FALSE;
  ScmObj buffering;
  ScmObj element_type_scm = scm__rc.d2149[191];
  ScmObj element_type;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("%open-input-file");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("<string> required, but got %S", path_scm);
  path = SCM_STRING(path_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[189])) {
      if_does_not_exist_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[190])) {
      buffering_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[192])) {
      element_type_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(if_does_not_exist_scm)) Scm_Error("scheme object required, but got %S", if_does_not_exist_scm);
  if_does_not_exist = (if_does_not_exist_scm);
  if (!(buffering_scm)) Scm_Error("scheme object required, but got %S", buffering_scm);
  buffering = (buffering_scm);
  if (!(element_type_scm)) Scm_Error("scheme object required, but got %S", element_type_scm);
  element_type = (element_type_scm);
  {
{
ScmObj SCM_RESULT;

#line 194 "libio.scm"
{int ignerr=FALSE;int flags=O_RDONLY;
#line 196 "libio.scm"
if (SCM_FALSEP(if_does_not_exist)){ignerr=(TRUE);}else if(
!(SCM_EQ(if_does_not_exist,scm__rc.d2149[188]))){
Scm_TypeError(":if-does-not-exist",":error or #f",if_does_not_exist);}
#line 200 "libio.scm"
if (!((SCM_EQ(element_type,scm__rc.d2149[193]))||(
SCM_EQ(element_type,scm__rc.d2149[191])))){{
Scm_Error("bad element-type argument: either :character or :binary expected, but got %S",element_type);}}
#line 204 "libio.scm"

#if (defined(O_BINARY))&&(defined(O_TEXT))

#line 205 "libio.scm"
if (SCM_EQ(element_type,scm__rc.d2149[193])){
(flags)|=(O_TEXT);} else {
(flags)|=(O_BINARY);}
#endif /* (defined(O_BINARY))&&(defined(O_TEXT)) */

#line 208 "libio.scm"
{int bufmode=Scm_BufferingMode(buffering,SCM_PORT_INPUT,SCM_PORT_BUFFER_FULL);ScmObj o=
#line 210 "libio.scm"
Scm_OpenFilePort(Scm_GetStringConst(path),flags,bufmode,0);
#line 212 "libio.scm"
if ((SCM_FALSEP(o))&&(!((ignerr)&&(((((errno)==(ENOENT))||((errno)==(ENODEV)))||((errno)==(ENXIO)))||((errno)==(ENOTDIR)))))){{
Scm_SysError("couldn't open input file: %S",path);}}
{SCM_RESULT=(o);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libio_25open_output_file(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj path_scm;
  ScmString* path;
  ScmObj if_exists_scm = scm__rc.d2149[210];
  ScmObj if_exists;
  ScmObj if_does_not_exist_scm = scm__rc.d2149[212];
  ScmObj if_does_not_exist;
  ScmObj mode_scm = SCM_MAKE_INT(438U);
  ScmSmallInt mode;
  ScmObj buffering_scm = SCM_FALSE;
  ScmObj buffering;
  ScmObj element_type_scm = scm__rc.d2149[191];
  ScmObj element_type;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("%open-output-file");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  path_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(path_scm)) Scm_Error("<string> required, but got %S", path_scm);
  path = SCM_STRING(path_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[211])) {
      if_exists_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[189])) {
      if_does_not_exist_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[213])) {
      mode_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[190])) {
      buffering_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[192])) {
      element_type_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(if_exists_scm)) Scm_Error("scheme object required, but got %S", if_exists_scm);
  if_exists = (if_exists_scm);
  if (!(if_does_not_exist_scm)) Scm_Error("scheme object required, but got %S", if_does_not_exist_scm);
  if_does_not_exist = (if_does_not_exist_scm);
  if (!SCM_INTP(mode_scm)) Scm_Error("ScmSmallInt required, but got %S", mode_scm);
  mode = SCM_INT_VALUE(mode_scm);
  if (!(buffering_scm)) Scm_Error("scheme object required, but got %S", buffering_scm);
  buffering = (buffering_scm);
  if (!(element_type_scm)) Scm_Error("scheme object required, but got %S", element_type_scm);
  element_type = (element_type_scm);
  {
{
ScmObj SCM_RESULT;

#line 223 "libio.scm"
{int ignerr_noexist=FALSE;int ignerr_exist=FALSE;int flags=O_WRONLY;
#line 226 "libio.scm"
if (!((SCM_EQ(element_type,scm__rc.d2149[193]))||(
SCM_EQ(element_type,scm__rc.d2149[191])))){{
Scm_Error("bad element-type argument: either :character or :binary expected, but got %S",element_type);}}
#line 230 "libio.scm"

#if (defined(O_BINARY))&&(defined(O_TEXT))

#line 231 "libio.scm"
if (SCM_EQ(element_type,scm__rc.d2149[193])){
(flags)|=(O_TEXT);} else {
(flags)|=(O_BINARY);}
#endif /* (defined(O_BINARY))&&(defined(O_TEXT)) */

#line 235 "libio.scm"
if (
SCM_EQ(if_exists,scm__rc.d2149[215])){(flags)|=(O_APPEND);}else if(
SCM_EQ(if_exists,scm__rc.d2149[188])){
(flags)|=(O_EXCL);
if (SCM_EQ(if_does_not_exist,scm__rc.d2149[188])){{
Scm_Error("bad flag combination: :if-exists and :if-does-not-exist can't be :error the same time.");}}}else if(
SCM_EQ(if_exists,scm__rc.d2149[210])){(flags)|=(O_TRUNC);}else if(
SCM_EQ(if_exists,scm__rc.d2149[214])){}else if(
SCM_FALSEP(if_exists)){(flags)|=(O_EXCL);ignerr_exist=(TRUE);} else {
#line 245 "libio.scm"
Scm_TypeError(":if-exists",":supersede, :overwrite, :append, :error or #f",if_exists);}
#line 247 "libio.scm"
if (
SCM_EQ(if_does_not_exist,scm__rc.d2149[212])){(flags)|=(O_CREAT);}else if(
SCM_FALSEP(if_does_not_exist)){ignerr_noexist=(TRUE);}else if(
SCM_EQ(if_does_not_exist,scm__rc.d2149[188])){} else {
Scm_TypeError(":if-does-not-exist",":error, :create or #f",if_does_not_exist);}
#line 253 "libio.scm"
{int bufmode=
Scm_BufferingMode(buffering,SCM_PORT_OUTPUT,SCM_PORT_BUFFER_FULL);ScmObj o=
Scm_OpenFilePort(Scm_GetStringConst(path),flags,bufmode,mode);
#line 257 "libio.scm"
if (((SCM_FALSEP(o))&&(
!((ignerr_noexist)&&(((((errno)==(ENOENT))||((errno)==(ENODEV)))||((errno)==(ENXIO)))||((errno)==(ENOTDIR))))))&&(
!((ignerr_exist)&&((((errno)==(EEXIST))||((errno)==(ENOTDIR)))||(DIRECTORY_GETS_IN_WAY(errno)))))){{
Scm_Error("couldn't open output file: %S",path);}}
{SCM_RESULT=(o);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioopen_input_fd_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fd_scm;
  ScmSmallInt fd;
  ScmObj buffering_scm = SCM_FALSE;
  ScmObj buffering;
  ScmObj ownerP_scm = SCM_FALSE;
  ScmObj ownerP;
  ScmObj name_scm = SCM_FALSE;
  ScmObj name;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("open-input-fd-port");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fd_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(fd_scm)) Scm_Error("ScmSmallInt required, but got %S", fd_scm);
  fd = SCM_INT_VALUE(fd_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[190])) {
      buffering_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[220])) {
      ownerP_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[221])) {
      name_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(buffering_scm)) Scm_Error("scheme object required, but got %S", buffering_scm);
  buffering = (buffering_scm);
  if (!(ownerP_scm)) Scm_Error("scheme object required, but got %S", ownerP_scm);
  ownerP = (ownerP_scm);
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  {
{
ScmObj SCM_RESULT;

#line 270 "libio.scm"
{int bufmode=Scm_BufferingMode(buffering,SCM_PORT_INPUT,SCM_PORT_BUFFER_FULL);
#line 272 "libio.scm"
if ((fd)<(0)){{Scm_Error("bad file descriptor: %ld",fd);}}
if (
SCM_EQ(ownerP,scm__rc.d2149[222])){
{int r=0;
SCM_SYSCALL(r,dup(fd));
if ((r)<(0)){{Scm_SysError("dup(2) failed");}}
fd=(r);}}else if(
!(SCM_BOOLP(ownerP))){
Scm_Error("owner? argument must be either #f, #t or a symbol dup, \nbut go t%S",ownerP);}
#line 282 "libio.scm"
{SCM_RESULT=(Scm_MakePortWithFd(name,SCM_PORT_INPUT,fd,bufmode,
!(SCM_FALSEP(ownerP))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioopen_output_fd_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj fd_scm;
  ScmSmallInt fd;
  ScmObj buffering_scm = SCM_FALSE;
  ScmObj buffering;
  ScmObj ownerP_scm = SCM_FALSE;
  ScmObj ownerP;
  ScmObj name_scm = SCM_FALSE;
  ScmObj name;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("open-output-fd-port");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  fd_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(fd_scm)) Scm_Error("ScmSmallInt required, but got %S", fd_scm);
  fd = SCM_INT_VALUE(fd_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[190])) {
      buffering_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[220])) {
      ownerP_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[221])) {
      name_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!(buffering_scm)) Scm_Error("scheme object required, but got %S", buffering_scm);
  buffering = (buffering_scm);
  if (!(ownerP_scm)) Scm_Error("scheme object required, but got %S", ownerP_scm);
  ownerP = (ownerP_scm);
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  {
{
ScmObj SCM_RESULT;

#line 289 "libio.scm"
{int bufmode=Scm_BufferingMode(buffering,SCM_PORT_OUTPUT,SCM_PORT_BUFFER_FULL);
#line 291 "libio.scm"
if ((fd)<(0)){{Scm_Error("bad file descriptor: %d",fd);}}
if (
SCM_EQ(ownerP,scm__rc.d2149[222])){
{int r=0;
SCM_SYSCALL(r,dup(fd));
if ((r)<(0)){{Scm_SysError("dup(2) failed");}}
fd=(r);}}else if(
!(SCM_BOOLP(ownerP))){
Scm_Error("owner? argument must be either #f, #t or a symbol dup, \nbut go t%S",ownerP);}
#line 301 "libio.scm"
{SCM_RESULT=(Scm_MakePortWithFd(name,SCM_PORT_OUTPUT,fd,bufmode,
!(SCM_FALSEP(ownerP))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static void bufport_closer(ScmPort* p){{
#line 310 "libio.scm"
if ((SCM_PORT_DIR(p))==(SCM_PORT_OUTPUT)){{
{ScmObj scmflusher=SCM_OBJ((PORT_BUF(p))->data);int siz=
((int )(((PORT_BUF(p))->current)-(
(PORT_BUF(p))->buffer)));
if ((siz)>(0)){{
Scm_ApplyRec1(scmflusher,
Scm_MakeString((PORT_BUF(p))->buffer,siz,siz,
(SCM_STRING_INCOMPLETE)|(SCM_STRING_COPYING)));}}
#line 319 "libio.scm"
Scm_ApplyRec1(scmflusher,SCM_FALSE);}}}}}
static ScmSize bufport_filler(ScmPort* p,ScmSize cnt){{
#line 322 "libio.scm"
{ScmObj scmfiller=SCM_OBJ((PORT_BUF(p))->data);ScmObj r=
Scm_ApplyRec1(scmfiller,Scm_MakeInteger(cnt));
if ((SCM_EOFP(r))||(SCM_FALSEP(r))){return (0);}else if(
!(SCM_STRINGP(r))){
Scm_Error("buffered port callback procedure returned non-string: %S",r);}
{const ScmStringBody* b=SCM_STRING_BODY(r);ScmSize siz=
SCM_STRING_BODY_SIZE(b);
if ((siz)>(cnt)){{siz=(cnt);}}
memcpy((PORT_BUF(p))->end,SCM_STRING_BODY_START(b),siz);
return (SCM_STRING_BODY_SIZE(b));}}}}

static ScmObj libioopen_input_buffered_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj filler_scm;
  ScmProcedure* filler;
  ScmObj buffer_size_scm;
  ScmSmallInt buffer_size;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("open-input-buffered-port");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  filler_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(filler_scm)) Scm_Error("<procedure> required, but got %S", filler_scm);
  filler = SCM_PROCEDURE(filler_scm);
  buffer_size_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(buffer_size_scm)) Scm_Error("ScmSmallInt required, but got %S", buffer_size_scm);
  buffer_size = SCM_INT_VALUE(buffer_size_scm);
  {
{
ScmObj SCM_RESULT;

#line 336 "libio.scm"
{ScmPortBuffer bufrec;
(bufrec).size=(buffer_size),
(bufrec).buffer=(NULL),
(bufrec).mode=(SCM_PORT_BUFFER_FULL),
(bufrec).filler=(bufport_filler),
(bufrec).flusher=(NULL),
(bufrec).closer=(bufport_closer),
(bufrec).ready=(NULL),
(bufrec).filenum=(NULL),
(bufrec).data=(((void* )(filler)));
{SCM_RESULT=(Scm_MakeBufferedPort(SCM_CLASS_PORT,SCM_FALSE,SCM_PORT_INPUT,TRUE,&(bufrec)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmSize bufport_flusher(ScmPort* p,ScmSize cnt,int G2156 SCM_UNUSED){{
#line 351 "libio.scm"
{ScmObj scmflusher=SCM_OBJ((PORT_BUF(p))->data);ScmObj s=
Scm_MakeString((PORT_BUF(p))->buffer,cnt,cnt,
(SCM_STRING_INCOMPLETE)|(SCM_STRING_COPYING));
Scm_ApplyRec1(scmflusher,s);
return (cnt);}}}

static ScmObj libioopen_output_buffered_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj flusher_scm;
  ScmProcedure* flusher;
  ScmObj buffer_size_scm;
  ScmSmallInt buffer_size;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("open-output-buffered-port");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  flusher_scm = SCM_SUBRARGS[0];
  if (!SCM_PROCEDUREP(flusher_scm)) Scm_Error("<procedure> required, but got %S", flusher_scm);
  flusher = SCM_PROCEDURE(flusher_scm);
  buffer_size_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(buffer_size_scm)) Scm_Error("ScmSmallInt required, but got %S", buffer_size_scm);
  buffer_size = SCM_INT_VALUE(buffer_size_scm);
  {
{
ScmObj SCM_RESULT;

#line 360 "libio.scm"
{ScmPortBuffer bufrec;
(bufrec).size=(buffer_size),
(bufrec).buffer=(NULL),
(bufrec).mode=(SCM_PORT_BUFFER_FULL),
(bufrec).filler=(NULL),
(bufrec).flusher=(bufport_flusher),
(bufrec).closer=(bufport_closer),
(bufrec).ready=(NULL),
(bufrec).filenum=(NULL),
(bufrec).data=(((void* )(flusher)));
{SCM_RESULT=(Scm_MakeBufferedPort(SCM_CLASS_PORT,SCM_FALSE,SCM_PORT_OUTPUT,TRUE,
&(bufrec)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioopen_input_string(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj string_scm;
  ScmString* string;
  ScmObj privateP_scm = SCM_FALSE;
  int privateP;
  ScmObj name_scm = SCM_OBJ(&scm__sc.d2148[84]);
  ScmObj name;
  ScmObj SCM_SUBRARGS[1];
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("open-input-string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  string_scm = SCM_SUBRARGS[0];
  if (!SCM_STRINGP(string_scm)) Scm_Error("<string> required, but got %S", string_scm);
  string = SCM_STRING(string_scm);
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[254])) {
      privateP_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[221])) {
      name_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!SCM_BOOLP(privateP_scm)) Scm_Error("boolean required, but got %S", privateP_scm);
  privateP = SCM_BOOL_VALUE(privateP_scm);
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  {
{
ScmObj SCM_RESULT;

#line 385 "libio.scm"
{u_long flags=((privateP)?(SCM_PORT_STRING_PRIVATE):(0));
{SCM_RESULT=(Scm_MakeInputStringPortFull(string,name,flags));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioopen_output_string(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj privateP_scm = SCM_FALSE;
  int privateP;
  ScmObj name_scm = SCM_OBJ(&scm__sc.d2148[86]);
  ScmObj name;
  ScmObj SCM_KEYARGS = SCM_ARGREF(SCM_ARGCNT-1);
  SCM_ENTER_SUBR("open-output-string");
  if (Scm_Length(SCM_KEYARGS) % 2)
    Scm_Error("keyword list not even: %S", SCM_KEYARGS);
  while (!SCM_NULLP(SCM_KEYARGS)) {
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[254])) {
      privateP_scm = SCM_CADR(SCM_KEYARGS);
    } else 
    if (SCM_EQ(SCM_CAR(SCM_KEYARGS), scm__rc.d2149[221])) {
      name_scm = SCM_CADR(SCM_KEYARGS);
    }
    else Scm_Warn("unknown keyword %S", SCM_CAR(SCM_KEYARGS));
    SCM_KEYARGS = SCM_CDDR(SCM_KEYARGS);
  }
  if (!SCM_BOOLP(privateP_scm)) Scm_Error("boolean required, but got %S", privateP_scm);
  privateP = SCM_BOOL_VALUE(privateP_scm);
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  {
{
ScmObj SCM_RESULT;

#line 390 "libio.scm"
{u_long flags=((privateP)?(SCM_PORT_STRING_PRIVATE):(0));
{SCM_RESULT=(Scm_MakeOutputStringPortFull(name,flags));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioget_output_string(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj oport_scm;
  ScmPort* oport;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("get-output-string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  oport_scm = SCM_SUBRARGS[0];
  if (!SCM_OPORTP(oport_scm)) Scm_Error("<output-port> required, but got %S", oport_scm);
  oport = SCM_PORT(oport_scm);
  {
{
ScmObj SCM_RESULT;

#line 394 "libio.scm"
{SCM_RESULT=(Scm_GetOutputString(oport,0));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioget_output_byte_string(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj oport_scm;
  ScmPort* oport;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("get-output-byte-string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  oport_scm = SCM_SUBRARGS[0];
  if (!SCM_OPORTP(oport_scm)) Scm_Error("<output-port> required, but got %S", oport_scm);
  oport = SCM_PORT(oport_scm);
  {
{
ScmObj SCM_RESULT;

#line 397 "libio.scm"
{SCM_RESULT=(Scm_GetOutputString(oport,SCM_STRING_INCOMPLETE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioget_remaining_input_string(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj iport_scm;
  ScmPort* iport;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("get-remaining-input-string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  iport_scm = SCM_SUBRARGS[0];
  if (!SCM_IPORTP(iport_scm)) Scm_Error("<input-port> required, but got %S", iport_scm);
  iport = SCM_PORT(iport_scm);
  {
{
ScmObj SCM_RESULT;

#line 400 "libio.scm"
{SCM_RESULT=(Scm_GetRemainingInputString(iport,0));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioopen_coding_aware_port(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj iport_scm;
  ScmPort* iport;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("open-coding-aware-port");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  iport_scm = SCM_SUBRARGS[0];
  if (!SCM_IPORTP(iport_scm)) Scm_Error("<input-port> required, but got %S", iport_scm);
  iport = SCM_PORT(iport_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeCodingAwarePort(iport));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_has_port_positionP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-has-port-position?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
int SCM_RESULT;

#line 414 "libio.scm"
{SCM_RESULT=(Scm_PortPositionable(port,FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioport_has_set_port_positionXP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-has-set-port-position!?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
int SCM_RESULT;

#line 416 "libio.scm"
{SCM_RESULT=(Scm_PortPositionable(port,TRUE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioport_position(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-position");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 419 "libio.scm"
{SCM_RESULT=(Scm_GetPortPosition(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioset_port_positionX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj pos_scm;
  ScmObj pos;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("set-port-position!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  pos_scm = SCM_SUBRARGS[1];
  if (!(pos_scm)) Scm_Error("scheme object required, but got %S", pos_scm);
  pos = (pos_scm);
  {
{
ScmObj SCM_RESULT;

#line 421 "libio.scm"
{SCM_RESULT=(Scm_SetPortPosition(port,pos));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_seek(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj offset_scm;
  ScmObj offset;
  ScmObj whence_scm;
  ScmSmallInt whence;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("port-seek");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  offset_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(offset_scm)) Scm_Error("exact integer required, but got %S", offset_scm);
  offset = (offset_scm);
  if (SCM_ARGCNT > 2+1) {
    whence_scm = SCM_SUBRARGS[2];
  } else {
    whence_scm = SCM_MAKE_INT(SEEK_SET);
  }
  if (!SCM_INTP(whence_scm)) Scm_Error("ScmSmallInt required, but got %S", whence_scm);
  whence = SCM_INT_VALUE(whence_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_PortSeek(port,offset,whence));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libio_25port_walkingP_SETTER(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj flag_scm;
  int flag;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("(setter %port-walking?)");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  flag_scm = SCM_SUBRARGS[1];
  if (!SCM_BOOLP(flag_scm)) Scm_Error("boolean required, but got %S", flag_scm);
  flag = SCM_BOOL_VALUE(flag_scm);
  {

#line 454 "libio.scm"
if (flag){
((port)->flags)|=(SCM_PORT_WALKING);} else {
((port)->flags)&=(~(SCM_PORT_WALKING));}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libio_25port_walkingP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%port-walking?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(PORT_WALKER_P(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libio_25port_writing_sharedP_SETTER(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj flag_scm;
  int flag;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("(setter %port-writing-shared?)");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  flag_scm = SCM_SUBRARGS[1];
  if (!SCM_BOOLP(flag_scm)) Scm_Error("boolean required, but got %S", flag_scm);
  flag = SCM_BOOL_VALUE(flag_scm);
  {

#line 460 "libio.scm"
if (flag){
((port)->flags)|=(SCM_PORT_WRITESS);} else {
((port)->flags)&=(~(SCM_PORT_WRITESS));}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libio_25port_writing_sharedP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%port-writing-shared?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(PORT_WRITESS_P(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

static ScmObj write_state_allocate(ScmClass* G2162 SCM_UNUSED,ScmObj G2163 SCM_UNUSED){{
#line 467 "libio.scm"
return (SCM_OBJ(Scm_MakeWriteState(NULL)));}}
static void write_state_print(ScmObj obj,ScmPort* port,ScmWriteContext* G2165 SCM_UNUSED){{
#line 471 "libio.scm"
Scm_Printf(port,"#<write-state %p>",obj);}}
static ScmClass *Scm_WriteStateClass_CPL[] = {
  SCM_CLASS_STATIC_PTR(Scm_TopClass),
  NULL
};
SCM_DEFINE_BUILTIN_CLASS(Scm_WriteStateClass, write_state_print, NULL, NULL, write_state_allocate, Scm_WriteStateClass_CPL);

static ScmObj Scm_WriteStateClass_shared_table_GET(ScmObj OBJARG)
{
  ScmWriteState* obj = SCM_WRITE_STATE(OBJARG);
  return SCM_MAKE_MAYBE(SCM_OBJ_SAFE, obj->sharedTable);
}

static void Scm_WriteStateClass_shared_table_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteState* obj = SCM_WRITE_STATE(OBJARG);
  if (!SCM_MAYBE_P(SCM_HASH_TABLE_P, value)) Scm_Error("ScmHashTable* required, but got %S", value);
  obj->sharedTable = SCM_MAYBE(SCM_HASH_TABLE, value);
}

static ScmObj Scm_WriteStateClass_shared_counter_GET(ScmObj OBJARG)
{
  ScmWriteState* obj = SCM_WRITE_STATE(OBJARG);
  return Scm_MakeInteger(obj->sharedCounter);
}

static void Scm_WriteStateClass_shared_counter_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteState* obj = SCM_WRITE_STATE(OBJARG);
  if (!SCM_INTEGERP(value)) Scm_Error("int required, but got %S", value);
  obj->sharedCounter = Scm_GetInteger(value);
}

static ScmClassStaticSlotSpec Scm_WriteStateClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("shared-table", Scm_WriteStateClass_shared_table_GET, Scm_WriteStateClass_shared_table_SET),
  SCM_CLASS_SLOT_SPEC("shared-counter", Scm_WriteStateClass_shared_counter_GET, Scm_WriteStateClass_shared_counter_SET),
  SCM_CLASS_SLOT_SPEC_END()
};


static ScmObj libio_25port_write_state_SETTER(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("(setter %port-write-state)");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  obj_scm = SCM_SUBRARGS[1];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {

#line 484 "libio.scm"
if (SCM_WRITE_STATE_P(obj)){
Scm_PortWriteStateSet(port,SCM_WRITE_STATE(obj));} else {
Scm_PortWriteStateSet(port,NULL);}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libio_25port_write_state(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%port-write-state");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 487 "libio.scm"
{ScmWriteState* r=Scm_PortWriteState(port);
{SCM_RESULT=(((r)?(SCM_OBJ(r)):(SCM_FALSE)));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libio_25port_lockX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%port-lock!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {

#line 491 "libio.scm"
{ScmVM* vm=Scm_VM();
PORT_LOCK(port,vm);}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libio_25port_unlockX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%port-unlock!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {

#line 494 "libio.scm"
PORT_UNLOCK(port);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libioport_column(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port-column");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_PORTP(port_scm)) Scm_Error("<port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmSmallInt SCM_RESULT;

#line 529 "libio.scm"
{SCM_RESULT=(Scm_PortColumn(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_INT(SCM_RESULT));
}
  }
}


static ScmObj libioread(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("read");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 539 "libio.scm"
{SCM_RESULT=(Scm_Read(SCM_OBJ(port)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioread_char(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("read-char");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 543 "libio.scm"
{int ch;
SCM_GETC(ch,port);
{SCM_RESULT=((((ch)==(EOF))?(SCM_EOF):(SCM_MAKE_CHAR(ch))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libiopeek_char(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("peek-char");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 549 "libio.scm"
{ScmChar ch=Scm_Peekc(port);
{SCM_RESULT=((((ch)==(EOF))?(SCM_EOF):(SCM_MAKE_CHAR(ch))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioeof_objectP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("eof-object?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_EOFP(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libiochar_readyP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-ready?");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_CharReady(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioeof_object(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("eof-object");
  {
{
ScmObj SCM_RESULT;

#line 561 "libio.scm"
{SCM_RESULT=(SCM_EOF);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libiobyte_readyP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("byte-ready?");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_ByteReady(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioread_byte(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("read-byte");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 569 "libio.scm"
{int b;
SCM_GETB(b,port);
{SCM_RESULT=((((b)<(0))?(SCM_EOF):(SCM_MAKE_INT(b))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libiopeek_byte(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("peek-byte");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 576 "libio.scm"
{int b=Scm_Peekb(port);
{SCM_RESULT=((((b)<(0))?(SCM_EOF):(SCM_MAKE_INT(b))));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioread_line(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj allowbytestr_scm;
  ScmObj allowbytestr;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("read-line");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  if (SCM_ARGCNT > 1+1) {
    allowbytestr_scm = SCM_SUBRARGS[1];
  } else {
    allowbytestr_scm = SCM_FALSE;
  }
  if (!(allowbytestr_scm)) Scm_Error("scheme object required, but got %S", allowbytestr_scm);
  allowbytestr = (allowbytestr_scm);
  {
{
ScmObj SCM_RESULT;

#line 583 "libio.scm"
{ScmObj r=Scm_ReadLine(port);
if (((SCM_FALSEP(allowbytestr))&&(
SCM_STRINGP(r)))&&(
SCM_STRING_INCOMPLETE_P(r))){{
Scm_ReadError(port,"read-line: encountered illegal byte sequence: %S",r);}}
{SCM_RESULT=(r);goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libiochar_word_constituentP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ch_scm;
  ScmChar ch;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("char-word-constituent?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ch_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(ch_scm)) Scm_Error("character required, but got %S", ch_scm);
  ch = SCM_CHAR_VALUE(ch_scm);
  {
{
int SCM_RESULT;

#line 631 "libio.scm"
{SCM_RESULT=(Scm_CharWordConstituent(ch,0));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioread_block(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj bytes_scm;
  ScmSmallInt bytes;
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("read-block");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  bytes_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(bytes_scm)) Scm_Error("ScmSmallInt required, but got %S", bytes_scm);
  bytes = SCM_INT_VALUE(bytes_scm);
  if (SCM_ARGCNT > 1+1) {
    port_scm = SCM_SUBRARGS[1];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 636 "libio.scm"
if ((bytes)<(0)){{
Scm_Error("bytes must be non-negative integer: %ld",bytes);}}

#line 638 "libio.scm"
if ((bytes)==(0)){
{SCM_RESULT=(Scm_MakeString("",0,0,0));goto SCM_STUB_RETURN;}} else {
{char* buf=SCM_NEW_ATOMIC2(char*,(bytes)+(1));int nread=
Scm_Getz(buf,bytes,port);
if ((nread)<=(0)){{SCM_RESULT=(SCM_EOF);goto SCM_STUB_RETURN;}} else {
#line 644 "libio.scm"
SCM_ASSERT((nread)<=(bytes));
(buf)[nread]=('\x00');
{SCM_RESULT=(Scm_MakeString(buf,nread,nread,SCM_STRING_INCOMPLETE));goto SCM_STUB_RETURN;}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioread_list(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj closer_scm;
  ScmChar closer;
  ScmObj port_scm;
  ScmObj port;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("read-list");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  closer_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(closer_scm)) Scm_Error("character required, but got %S", closer_scm);
  closer = SCM_CHAR_VALUE(closer_scm);
  if (SCM_ARGCNT > 1+1) {
    port_scm = SCM_SUBRARGS[1];
  } else {
    port_scm = SCM_OBJ(SCM_CURIN);
  }
  if (!(port_scm)) Scm_Error("scheme object required, but got %S", port_scm);
  port = (port_scm);
  {
{
ScmObj SCM_RESULT;

#line 651 "libio.scm"
{SCM_RESULT=(Scm_ReadList(port,closer));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioport_TObyte_string(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("port->byte-string");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;

#line 654 "libio.scm"
{ScmDString ds;char buf[1024];
Scm_DStringInit(&(ds));
for (;;){{int nbytes=Scm_Getz(buf,1024,port);
if ((nbytes)<=(0)){{break;}}
Scm_DStringPutz(&(ds),buf,nbytes);}}
{SCM_RESULT=(Scm_DStringGet(&(ds),SCM_STRING_INCOMPLETE));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioreader_lexical_mode(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj k_scm;
  ScmObj k;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("reader-lexical-mode");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    k_scm = SCM_SUBRARGS[0];
  } else {
    k_scm = SCM_UNBOUND;
  }
  if (!(k_scm)) Scm_Error("scheme object required, but got %S", k_scm);
  k = (k_scm);
  {
{
ScmObj SCM_RESULT;

#line 680 "libio.scm"
if (SCM_UNBOUNDP(k)){
{SCM_RESULT=(Scm_ReaderLexicalMode());goto SCM_STUB_RETURN;}} else {
{SCM_RESULT=(Scm_SetReaderLexicalMode(k));goto SCM_STUB_RETURN;}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libio_25port_ungotten_chars(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%port-ungotten-chars");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_UngottenChars(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libio_25port_ungotten_bytes(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%port-ungotten-bytes");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  port_scm = SCM_SUBRARGS[0];
  if (!SCM_IPORTP(port_scm)) Scm_Error("<input-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_UngottenBytes(port));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libiodefine_reader_ctor(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj symbol_scm;
  ScmObj symbol;
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj finisher_scm;
  ScmObj finisher;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("define-reader-ctor");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  symbol_scm = SCM_SUBRARGS[0];
  if (!(symbol_scm)) Scm_Error("scheme object required, but got %S", symbol_scm);
  symbol = (symbol_scm);
  proc_scm = SCM_SUBRARGS[1];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  if (SCM_ARGCNT > 2+1) {
    finisher_scm = SCM_SUBRARGS[2];
  } else {
    finisher_scm = SCM_FALSE;
  }
  if (!(finisher_scm)) Scm_Error("scheme object required, but got %S", finisher_scm);
  finisher = (finisher_scm);
  {
{
ScmObj SCM_RESULT;

#line 694 "libio.scm"
{SCM_RESULT=(Scm_DefineReaderCtor(symbol,proc,finisher,SCM_FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libio_25get_reader_ctor(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj symbol_scm;
  ScmObj symbol;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("%get-reader-ctor");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  symbol_scm = SCM_SUBRARGS[0];
  if (!(symbol_scm)) Scm_Error("scheme object required, but got %S", symbol_scm);
  symbol = (symbol_scm);
  {
{
ScmObj SCM_RESULT;

#line 697 "libio.scm"
{SCM_RESULT=(Scm_GetReaderCtor(symbol,SCM_FALSE));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libiodefine_reader_directive(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj symbol_scm;
  ScmObj symbol;
  ScmObj proc_scm;
  ScmObj proc;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("define-reader-directive");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  symbol_scm = SCM_SUBRARGS[0];
  if (!(symbol_scm)) Scm_Error("scheme object required, but got %S", symbol_scm);
  symbol = (symbol_scm);
  proc_scm = SCM_SUBRARGS[1];
  if (!(proc_scm)) Scm_Error("scheme object required, but got %S", proc_scm);
  proc = (proc_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_DefineReaderDirective(symbol,proc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libiocurrent_read_context(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ctx_scm;
  ScmObj ctx;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("current-read-context");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    ctx_scm = SCM_SUBRARGS[0];
  } else {
    ctx_scm = SCM_UNBOUND;
  }
  if (!(ctx_scm)) Scm_Error("scheme object required, but got %S", ctx_scm);
  ctx = (ctx_scm);
  {
{
ScmObj SCM_RESULT;

#line 711 "libio.scm"
if (SCM_UNBOUNDP(ctx)){
{SCM_RESULT=(SCM_OBJ(Scm_CurrentReadContext()));goto SCM_STUB_RETURN;}} else {
if (SCM_READ_CONTEXT_P(ctx)){
{SCM_RESULT=(SCM_OBJ(Scm_SetCurrentReadContext(SCM_READ_CONTEXT(ctx))));goto SCM_STUB_RETURN;}} else {
{Scm_Error("<read-context> required, but got:",ctx);
{SCM_RESULT=(SCM_UNDEFINED);goto SCM_STUB_RETURN;}}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libioread_referenceP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("read-reference?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(SCM_READ_REFERENCE_P(obj));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioread_reference_has_valueP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ref_scm;
  ScmReadReference* ref;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("read-reference-has-value?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ref_scm = SCM_SUBRARGS[0];
  if (!SCM_READ_REFERENCE_P(ref_scm)) Scm_Error("read reference required, but got %S", ref_scm);
  ref = SCM_READ_REFERENCE(ref_scm);
  {
{
int SCM_RESULT;

#line 721 "libio.scm"
{SCM_RESULT=(!(SCM_UNBOUNDP((ref)->value)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libioread_reference_value(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ref_scm;
  ScmReadReference* ref;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("read-reference-value");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ref_scm = SCM_SUBRARGS[0];
  if (!SCM_READ_REFERENCE_P(ref_scm)) Scm_Error("read reference required, but got %S", ref_scm);
  ref = SCM_READ_REFERENCE(ref_scm);
  {
{
ScmObj SCM_RESULT;

#line 724 "libio.scm"
if (SCM_UNBOUNDP((ref)->value)){{
Scm_Error("read reference hasn't been resolved");}}

#line 726 "libio.scm"
{SCM_RESULT=((ref)->value);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static void parse_write_optionals(ScmObj opt1,ScmObj opt2,ScmPort** pp,const ScmWriteControls** pc){{
#line 744 "libio.scm"
{ScmPort* p=SCM_CUROUT;const ScmWriteControls* c=
Scm_DefaultWriteControls();
if (!(SCM_UNBOUNDP(opt1))){{
if (SCM_PORTP(opt1)){
p=(SCM_PORT(opt1));
if (!(SCM_UNBOUNDP(opt2))){{
if (SCM_WRITE_CONTROLS_P(opt2)){
c=(SCM_WRITE_CONTROLS(opt2));} else {
Scm_Error("Expected write-controls, but got: %S",opt2);}}}}else if(
SCM_WRITE_CONTROLS_P(opt1)){
c=(SCM_WRITE_CONTROLS(opt1));
if (!(SCM_UNBOUNDP(opt2))){{
if (SCM_PORTP(opt2)){
p=(SCM_PORT(opt2));} else {
Scm_Error("Expected port, but got: %S",opt2);}}}} else {
#line 760 "libio.scm"
Scm_Error("Expected port or write-controls, but got: %S",opt1);}}}
*(pp)=(p);
*(pc)=(c);}}}

static ScmObj libiowrite(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj port_or_control_1_scm;
  ScmObj port_or_control_1;
  ScmObj port_or_control_2_scm;
  ScmObj port_or_control_2;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("write");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  if (SCM_ARGCNT > 1+1) {
    port_or_control_1_scm = SCM_SUBRARGS[1];
  } else {
    port_or_control_1_scm = SCM_UNBOUND;
  }
  if (!(port_or_control_1_scm)) Scm_Error("scheme object required, but got %S", port_or_control_1_scm);
  port_or_control_1 = (port_or_control_1_scm);
  if (SCM_ARGCNT > 2+1) {
    port_or_control_2_scm = SCM_SUBRARGS[2];
  } else {
    port_or_control_2_scm = SCM_UNBOUND;
  }
  if (!(port_or_control_2_scm)) Scm_Error("scheme object required, but got %S", port_or_control_2_scm);
  port_or_control_2 = (port_or_control_2_scm);
  {

#line 768 "libio.scm"
{ScmPort* p;const ScmWriteControls* c;
parse_write_optionals(port_or_control_1,port_or_control_2,&(p),&(c));
Scm_WriteWithControls(obj,SCM_OBJ(p),SCM_WRITE_WRITE,c);}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libiowrite_simple(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("write-simple");
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
    port_scm = SCM_SUBRARGS[1];
  } else {
    port_scm = SCM_OBJ(SCM_CUROUT);
  }
  if (!SCM_OPORTP(port_scm)) Scm_Error("<output-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {

#line 775 "libio.scm"
Scm_Write(obj,SCM_OBJ(port),SCM_WRITE_SIMPLE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libiowrite_shared(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj port_or_control_1_scm;
  ScmObj port_or_control_1;
  ScmObj port_or_control_2_scm;
  ScmObj port_or_control_2;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("write-shared");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  if (SCM_ARGCNT > 1+1) {
    port_or_control_1_scm = SCM_SUBRARGS[1];
  } else {
    port_or_control_1_scm = SCM_UNBOUND;
  }
  if (!(port_or_control_1_scm)) Scm_Error("scheme object required, but got %S", port_or_control_1_scm);
  port_or_control_1 = (port_or_control_1_scm);
  if (SCM_ARGCNT > 2+1) {
    port_or_control_2_scm = SCM_SUBRARGS[2];
  } else {
    port_or_control_2_scm = SCM_UNBOUND;
  }
  if (!(port_or_control_2_scm)) Scm_Error("scheme object required, but got %S", port_or_control_2_scm);
  port_or_control_2 = (port_or_control_2_scm);
  {

#line 779 "libio.scm"
{ScmPort* p;const ScmWriteControls* c;
parse_write_optionals(port_or_control_1,port_or_control_2,&(p),&(c));
Scm_WriteWithControls(obj,SCM_OBJ(p),SCM_WRITE_SHARED,c);}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libiodisplay(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj port_or_control_1_scm;
  ScmObj port_or_control_1;
  ScmObj port_or_control_2_scm;
  ScmObj port_or_control_2;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("display");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  if (SCM_ARGCNT > 1+1) {
    port_or_control_1_scm = SCM_SUBRARGS[1];
  } else {
    port_or_control_1_scm = SCM_UNBOUND;
  }
  if (!(port_or_control_1_scm)) Scm_Error("scheme object required, but got %S", port_or_control_1_scm);
  port_or_control_1 = (port_or_control_1_scm);
  if (SCM_ARGCNT > 2+1) {
    port_or_control_2_scm = SCM_SUBRARGS[2];
  } else {
    port_or_control_2_scm = SCM_UNBOUND;
  }
  if (!(port_or_control_2_scm)) Scm_Error("scheme object required, but got %S", port_or_control_2_scm);
  port_or_control_2 = (port_or_control_2_scm);
  {

#line 785 "libio.scm"
{ScmPort* p;const ScmWriteControls* c;
parse_write_optionals(port_or_control_1,port_or_control_2,&(p),&(c));
Scm_WriteWithControls(obj,SCM_OBJ(p),SCM_WRITE_DISPLAY,c);}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libionewline(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("newline");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CUROUT);
  }
  if (!SCM_OPORTP(port_scm)) Scm_Error("<output-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {

#line 790 "libio.scm"
SCM_PUTC('\n',port);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libiofresh_line(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("fresh-line");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    port_scm = SCM_SUBRARGS[0];
  } else {
    port_scm = SCM_OBJ(SCM_CUROUT);
  }
  if (!SCM_OPORTP(port_scm)) Scm_Error("<output-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
int SCM_RESULT;

#line 794 "libio.scm"
if ((Scm_PortColumn(port))==(0)){
{SCM_RESULT=(FALSE);goto SCM_STUB_RETURN;}} else {
{SCM_PUTC('\n',port);{SCM_RESULT=(TRUE);goto SCM_STUB_RETURN;}}}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}


static ScmObj libiowrite_char(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj ch_scm;
  ScmChar ch;
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("write-char");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  ch_scm = SCM_SUBRARGS[0];
  if (!SCM_CHARP(ch_scm)) Scm_Error("character required, but got %S", ch_scm);
  ch = SCM_CHAR_VALUE(ch_scm);
  if (SCM_ARGCNT > 1+1) {
    port_scm = SCM_SUBRARGS[1];
  } else {
    port_scm = SCM_OBJ(SCM_CUROUT);
  }
  if (!SCM_OPORTP(port_scm)) Scm_Error("<output-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {

#line 800 "libio.scm"
SCM_PUTC(ch,port);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libiowrite_byte(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj byte_scm;
  ScmSmallInt byte;
  ScmObj port_scm;
  ScmPort* port;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("write-byte");
  if (SCM_ARGCNT >= 3
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 2 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  byte_scm = SCM_SUBRARGS[0];
  if (!SCM_INTP(byte_scm)) Scm_Error("ScmSmallInt required, but got %S", byte_scm);
  byte = SCM_INT_VALUE(byte_scm);
  if (SCM_ARGCNT > 1+1) {
    port_scm = SCM_SUBRARGS[1];
  } else {
    port_scm = SCM_OBJ(SCM_CUROUT);
  }
  if (!SCM_OPORTP(port_scm)) Scm_Error("<output-port> required, but got %S", port_scm);
  port = SCM_PORT(port_scm);
  {
{
int SCM_RESULT;

#line 808 "libio.scm"
if (((byte)<(0))||((byte)>(255))){{
Scm_Error("argument out of range: %ld",byte);}}

#line 810 "libio.scm"
SCM_PUTB(byte,port);

#line 811 "libio.scm"
{SCM_RESULT=(1);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libiowrite_limited(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj limit_scm;
  ScmSmallInt limit;
  ScmObj port_scm;
  ScmObj port;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("write-limited");
  if (SCM_ARGCNT >= 4
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 3 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  limit_scm = SCM_SUBRARGS[1];
  if (!SCM_INTP(limit_scm)) Scm_Error("ScmSmallInt required, but got %S", limit_scm);
  limit = SCM_INT_VALUE(limit_scm);
  if (SCM_ARGCNT > 2+1) {
    port_scm = SCM_SUBRARGS[2];
  } else {
    port_scm = SCM_OBJ(SCM_CUROUT);
  }
  if (!(port_scm)) Scm_Error("scheme object required, but got %S", port_scm);
  port = (port_scm);
  {
{
int SCM_RESULT;

#line 817 "libio.scm"
{SCM_RESULT=(Scm_WriteLimited(obj,port,SCM_WRITE_WRITE,limit));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libioflush(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj oport_scm;
  ScmPort* oport;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("flush");
  if (SCM_ARGCNT >= 2
      && !SCM_NULLP(SCM_ARGREF(SCM_ARGCNT-1)))
    Scm_Error("too many arguments: up to 1 is expected, %d given.", SCM_ARGCNT + Scm_Length(SCM_ARGREF(SCM_ARGCNT-1)) - 1);
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  if (SCM_ARGCNT > 0+1) {
    oport_scm = SCM_SUBRARGS[0];
  } else {
    oport_scm = SCM_OBJ(SCM_CUROUT);
  }
  if (!SCM_OPORTP(oport_scm)) Scm_Error("<output-port> required, but got %S", oport_scm);
  oport = SCM_PORT(oport_scm);
  {
Scm_Flush(oport);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libioflush_all_ports(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  SCM_ENTER_SUBR("flush-all-ports");
  {

#line 824 "libio.scm"
Scm_FlushAllPorts(FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libiowrite_need_recurseP(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj obj_scm;
  ScmObj obj;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("write-need-recurse?");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  obj_scm = SCM_SUBRARGS[0];
  if (!(obj_scm)) Scm_Error("scheme object required, but got %S", obj_scm);
  obj = (obj_scm);
  {
{
int SCM_RESULT;

#line 832 "libio.scm"
{SCM_RESULT=(!((((((!(SCM_PTRP(obj)))||(
SCM_NUMBERP(obj)))||(
SCM_KEYWORDP(obj)))||(
(SCM_SYMBOLP(obj))&&(SCM_SYMBOL_INTERNED(obj))))||(
(SCM_STRINGP(obj))&&((SCM_STRING_SIZE(obj))==(0))))||(
(SCM_VECTORP(obj))&&((SCM_VECTOR_SIZE(obj))==(0)))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_MAKE_BOOL(SCM_RESULT));
}
  }
}

static ScmObj write_controls_allocate(ScmClass* G2188 SCM_UNUSED,ScmObj G2189 SCM_UNUSED){{
#line 907 "libio.scm"
return (SCM_OBJ(Scm_MakeWriteControls(NULL)));}}
static ScmClass *Scm_WriteControlsClass_CPL[] = {
  SCM_CLASS_STATIC_PTR(Scm_TopClass),
  NULL
};
SCM_DEFINE_BUILTIN_CLASS(Scm_WriteControlsClass, NULL, NULL, NULL, write_controls_allocate, Scm_WriteControlsClass_CPL);

static ScmObj Scm_WriteControlsClass_length_GET(ScmObj OBJARG)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (obj->printLength < 0) return SCM_FALSE; else return SCM_MAKE_INT(obj->printLength);
}

static void Scm_WriteControlsClass_length_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (SCM_INTP(value) && SCM_INT_VALUE(value) >= 0) obj->printLength = SCM_INT_VALUE(value); else obj->printLength = -1;
}

static ScmObj Scm_WriteControlsClass_level_GET(ScmObj OBJARG)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (obj->printLevel < 0) return SCM_FALSE; else return SCM_MAKE_INT(obj->printLevel);
}

static void Scm_WriteControlsClass_level_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (SCM_INTP(value) && SCM_INT_VALUE(value) >= 0) obj->printLevel = SCM_INT_VALUE(value); else obj->printLevel = -1;
}

static ScmObj Scm_WriteControlsClass_width_GET(ScmObj OBJARG)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (obj->printWidth < 0) return SCM_FALSE; else return SCM_MAKE_INT(obj->printWidth);
}

static void Scm_WriteControlsClass_width_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (SCM_INTP(value) && SCM_INT_VALUE(value) >= 0) obj->printWidth = SCM_INT_VALUE(value); else obj->printWidth = -1;
}

static ScmObj Scm_WriteControlsClass_base_GET(ScmObj OBJARG)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
  return Scm_MakeInteger(obj->printBase);
}

static void Scm_WriteControlsClass_base_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (SCM_INTP(value) && SCM_INT_VALUE(value) >= SCM_RADIX_MIN && SCM_INT_VALUE(value) <= SCM_RADIX_MAX) obj->printBase = SCM_INT_VALUE(value); else Scm_Error("print-base must be an integer between %d and %d, but got: %S", SCM_RADIX_MIN, SCM_RADIX_MAX, value);
}

static ScmObj Scm_WriteControlsClass_radix_GET(ScmObj OBJARG)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
  return SCM_MAKE_BOOL(obj->printRadix);
}

static void Scm_WriteControlsClass_radix_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
obj->printRadix = !SCM_FALSEP(value);
}

static ScmObj Scm_WriteControlsClass_pretty_GET(ScmObj OBJARG)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
  return SCM_MAKE_BOOL(obj->printPretty);
}

static void Scm_WriteControlsClass_pretty_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
obj->printPretty = !SCM_FALSEP(value);
}

static ScmObj Scm_WriteControlsClass_indent_GET(ScmObj OBJARG)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
  return Scm_MakeInteger(obj->printIndent);
}

static void Scm_WriteControlsClass_indent_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (SCM_INTP(value) && SCM_INT_VALUE(value) >= 0) obj->printIndent = SCM_INT_VALUE(value); else obj->printIndent = 0;
}

static ScmObj Scm_WriteControlsClass_string_length_GET(ScmObj OBJARG)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (obj->stringLength < 0) return SCM_FALSE; else return SCM_MAKE_INT(obj->stringLength);
}

static void Scm_WriteControlsClass_string_length_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
if (SCM_INTP(value) && SCM_INT_VALUE(value) >= 0) obj->stringLength = SCM_INT_VALUE(value); else obj->stringLength = -1;
}

static ScmObj Scm_WriteControlsClass_exact_decimal_GET(ScmObj OBJARG)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
  return SCM_MAKE_BOOL(obj->exactDecimal);
}

static void Scm_WriteControlsClass_exact_decimal_SET(ScmObj OBJARG, ScmObj value)
{
  ScmWriteControls* obj = SCM_WRITE_CONTROLS(OBJARG);
obj->exactDecimal = !SCM_FALSEP(value);
}

static ScmClassStaticSlotSpec Scm_WriteControlsClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("length", Scm_WriteControlsClass_length_GET, Scm_WriteControlsClass_length_SET),
  SCM_CLASS_SLOT_SPEC("level", Scm_WriteControlsClass_level_GET, Scm_WriteControlsClass_level_SET),
  SCM_CLASS_SLOT_SPEC("width", Scm_WriteControlsClass_width_GET, Scm_WriteControlsClass_width_SET),
  SCM_CLASS_SLOT_SPEC("base", Scm_WriteControlsClass_base_GET, Scm_WriteControlsClass_base_SET),
  SCM_CLASS_SLOT_SPEC("radix", Scm_WriteControlsClass_radix_GET, Scm_WriteControlsClass_radix_SET),
  SCM_CLASS_SLOT_SPEC("pretty", Scm_WriteControlsClass_pretty_GET, Scm_WriteControlsClass_pretty_SET),
  SCM_CLASS_SLOT_SPEC("indent", Scm_WriteControlsClass_indent_GET, Scm_WriteControlsClass_indent_SET),
  SCM_CLASS_SLOT_SPEC("string-length", Scm_WriteControlsClass_string_length_GET, Scm_WriteControlsClass_string_length_SET),
  SCM_CLASS_SLOT_SPEC("exact-decimal", Scm_WriteControlsClass_exact_decimal_GET, Scm_WriteControlsClass_exact_decimal_SET),
  SCM_CLASS_SLOT_SPEC_END()
};

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[7])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[11])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[12])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[13])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[14])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[16])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[18])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[20])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[22])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[25])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[28])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[30])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[31])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[32])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[33])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[34])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[36])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[40])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[42])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[44])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[45])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[47])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[49])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[51])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[53])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[55])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[59])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[63])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[67])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[71])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[75])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[77])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[79])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[81])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[83])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[85])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[88])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[91])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[93])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[97])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[101])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[105])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[109])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[111])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[113])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[115])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[117])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[119])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[302];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[33];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[300];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[318];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[334];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[337];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[112]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[472];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[109]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1404];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[331];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1405];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[57];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[48];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[113]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[47];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[18];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1406];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[114]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[326];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[129];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[375];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[355];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[364];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[374];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[372];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[3]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1407];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1408];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[21];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[366];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[396];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1409];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[342];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[395];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[346];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[391];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[385];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[386];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[389];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[127]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1410];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[159];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[380];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[451];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[442];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[457];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[455];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[463];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[461];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[478];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[485];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[482];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[475];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[268];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[483];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[423];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[434];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[419];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[480];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[266];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[254];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[151]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[32];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[473];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1411];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1412];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1413];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[470];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[498];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[499];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[130];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[496];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[497];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[495];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_MAKE_INT(-1);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1414];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1415];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1416];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1417];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1418];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[494];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[512];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[508];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[510];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1419];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1420];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1421];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[506];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1422];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[549];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[546];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[547];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[545];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[560];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1423];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[556];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[554];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[467];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[568];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1000];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1424];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[567];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[566];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[410];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[575];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[659];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[662];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[713];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[702];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[729];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[679];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[765];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[763];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1425];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[761];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[759];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[771];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[791];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[803];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[582];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[802];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[800];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[344];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[797];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[795];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1426];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[790];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1427];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1428];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[786];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_UNDEFINED;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[788];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[784];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1429];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1430];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1431];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1432];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1433];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1434];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[782];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1435];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1436];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[780];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[778];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[770];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[776];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[750];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[812];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1437];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[810];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[807];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[811];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[808];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1438];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1439];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1440];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[816];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[822];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[682];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[829];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[826];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1441];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1442];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1443];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1444];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1445];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1446];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1447];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1448];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1449];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1450];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1451];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1452];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1453];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1454];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1455];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1456];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1457];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[860];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[283]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[858];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1458];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[857];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[856];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[855];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[854];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[853];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[849];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[847];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[848];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[846];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[845];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[844];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[843];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[842];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[840];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1459];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[852];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[275]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[839];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1460];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[861];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[870];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[862];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[871];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[863];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[872];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[864];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[873];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[865];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[874];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[866];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[875];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[868];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[867];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[869];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[837];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1461];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1462];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[196];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[835];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1463];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1464];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1465];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1466];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1467];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1468];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1469];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1470];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1471];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1472];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1473];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1474];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1475];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1476];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1477];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1478];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1479];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[881];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1480];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1481];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1482];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1483];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1484];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1485];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[880];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[899];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[900];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[288];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1486];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[194];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[896];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[887];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1487];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[893];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[891];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[889];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[4];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[886];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[216];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[907];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[905];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[186];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[913];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[168];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[926];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[921];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[177];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[931];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[942];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[945];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[940];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[952];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[950];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[959];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[255];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[968];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[966];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[973];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[978];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1488];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[983];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[988];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[999];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[665];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1489];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1490];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1491];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[997];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1007];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1020];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1492];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1493];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1494];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1495];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1036];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1034];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1050];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[137];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[136];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1045];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1057];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = SCM_OBJ(&scm__sc.d2148[323]);
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1058];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[628];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[617];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1055];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[158];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1064];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1069];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[91];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[581];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1074];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1073];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1080];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[1084]), i++) = scm__rc.d2149[1079];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[1084]);
}
void Scm_Init_libio() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[0] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[0])),TRUE); /* input-port? */
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
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("input-port?")), SCM_OBJ(&libioinput_portP__STUB), 0);
  libioinput_portP__STUB.common.info = scm__rc.d2149[5];
  libioinput_portP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[9])),TRUE); /* output-port? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[12]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[13]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[14]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[15]), scm__rc.d2149[3]);
  scm__rc.d2149[17] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[17]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("output-port?")), SCM_OBJ(&libiooutput_portP__STUB), 0);
  libiooutput_portP__STUB.common.info = scm__rc.d2149[17];
  libiooutput_portP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[10])),TRUE); /* port? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[20]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[21]), scm__rc.d2149[18]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[22]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[23]), scm__rc.d2149[3]);
  scm__rc.d2149[19] = Scm_MakeExtendedPair(scm__rc.d2149[18], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[25]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("port?")), SCM_OBJ(&libioportP__STUB), 0);
  libioportP__STUB.common.info = scm__rc.d2149[19];
  libioportP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[11])),TRUE); /* port-closed? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[28]), scm__rc.d2149[2]);
  scm__rc.d2149[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[12])),TRUE); /* gauche */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[29]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[30]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[31]), scm__rc.d2149[3]);
  scm__rc.d2149[22] = Scm_MakeExtendedPair(scm__rc.d2149[20], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[33]));
  scm__rc.d2149[23] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[13])),TRUE); /* <port> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[24]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-closed?")), SCM_OBJ(&libioport_closedP__STUB), 0);
  libioport_closedP__STUB.common.info = scm__rc.d2149[22];
  libioport_closedP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);

#line 68 "libio.scm"
default_file_encoding=(
Scm_BindPrimitiveParameter(Scm_GaucheModule(),"default-file-encoding",
#line 71 "libio.scm"
Scm_CharEncodingName(),0));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[14])),TRUE); /* standard-input-port */
  scm__rc.d2149[32] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[15]))); /* :optional */
  scm__rc.d2149[33] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[16])),TRUE); /* p */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[34]), scm__rc.d2149[33]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[35]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[38]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[39]), scm__rc.d2149[31]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[40]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[41]), scm__rc.d2149[3]);
  scm__rc.d2149[34] = Scm_MakeExtendedPair(scm__rc.d2149[31], SCM_OBJ(&scm__rc.d2150[35]), SCM_OBJ(&scm__rc.d2150[43]));
  scm__rc.d2149[35] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[17])),TRUE); /* * */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[36]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[36]))[4] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[36]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[36]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("standard-input-port")), SCM_OBJ(&libiostandard_input_port__STUB), 0);
  libiostandard_input_port__STUB.common.info = scm__rc.d2149[34];
  libiostandard_input_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);
  scm__rc.d2149[43] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[18])),TRUE); /* standard-output-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[46]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[47]), scm__rc.d2149[43]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[48]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[49]), scm__rc.d2149[3]);
  scm__rc.d2149[44] = Scm_MakeExtendedPair(scm__rc.d2149[43], SCM_OBJ(&scm__rc.d2150[35]), SCM_OBJ(&scm__rc.d2150[51]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("standard-output-port")), SCM_OBJ(&libiostandard_output_port__STUB), 0);
  libiostandard_output_port__STUB.common.info = scm__rc.d2149[44];
  libiostandard_output_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);
  scm__rc.d2149[45] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[19])),TRUE); /* standard-error-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[54]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[55]), scm__rc.d2149[45]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[56]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[57]), scm__rc.d2149[3]);
  scm__rc.d2149[46] = Scm_MakeExtendedPair(scm__rc.d2149[45], SCM_OBJ(&scm__rc.d2150[35]), SCM_OBJ(&scm__rc.d2150[59]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("standard-error-port")), SCM_OBJ(&libiostandard_error_port__STUB), 0);
  libiostandard_error_port__STUB.common.info = scm__rc.d2149[46];
  libiostandard_error_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);

#line 89 "libio.scm"
Scm_BindPrimitiveParameter(Scm_GaucheModule(),"current-trace-port",
#line 91 "libio.scm"
Scm_Stderr(),0);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[47] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[20])),TRUE); /* port-name */
  scm__rc.d2149[48] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[21])),TRUE); /* port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[60]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[63]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[64]), scm__rc.d2149[47]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[65]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[66]), scm__rc.d2149[3]);
  scm__rc.d2149[49] = Scm_MakeExtendedPair(scm__rc.d2149[47], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[68]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[50]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[50]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[50]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[50]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-name")), SCM_OBJ(&libioport_name__STUB), 0);
  libioport_name__STUB.common.info = scm__rc.d2149[49];
  libioport_name__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
  scm__rc.d2149[57] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[22])),TRUE); /* port-current-line */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[71]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[72]), scm__rc.d2149[57]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[73]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[74]), scm__rc.d2149[3]);
  scm__rc.d2149[58] = Scm_MakeExtendedPair(scm__rc.d2149[57], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[76]));
  scm__rc.d2149[59] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[23])),TRUE); /* <fixnum> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[60]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[60]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[60]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[60]))[6] = scm__rc.d2149[59];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-current-line")), SCM_OBJ(&libioport_current_line__STUB), 0);
  libioport_current_line__STUB.common.info = scm__rc.d2149[58];
  libioport_current_line__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[60]);
  scm__rc.d2149[67] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[24])),TRUE); /* port-file-number */
  scm__rc.d2149[68] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[25])),TRUE); /* dup? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[77]), scm__rc.d2149[68]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[78]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[79]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[82]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[83]), scm__rc.d2149[67]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[84]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[85]), scm__rc.d2149[3]);
  scm__rc.d2149[69] = Scm_MakeExtendedPair(scm__rc.d2149[67], SCM_OBJ(&scm__rc.d2150[79]), SCM_OBJ(&scm__rc.d2150[87]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[70]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[70]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[70]))[5] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[70]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[70]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-file-number")), SCM_OBJ(&libioport_file_number__STUB), 0);
  libioport_file_number__STUB.common.info = scm__rc.d2149[69];
  libioport_file_number__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[70]);
  scm__rc.d2149[78] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[26])),TRUE); /* port-fd-dup! */
  scm__rc.d2149[79] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[27])),TRUE); /* dst */
  scm__rc.d2149[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[28])),TRUE); /* src */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[88]), scm__rc.d2149[80]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[89]), scm__rc.d2149[79]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[92]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[93]), scm__rc.d2149[78]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[94]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[95]), scm__rc.d2149[3]);
  scm__rc.d2149[81] = Scm_MakeExtendedPair(scm__rc.d2149[78], SCM_OBJ(&scm__rc.d2150[89]), SCM_OBJ(&scm__rc.d2150[97]));
  scm__rc.d2149[82] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[29])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[5] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[83]))[7] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-fd-dup!")), SCM_OBJ(&libioport_fd_dupX__STUB), 0);
  libioport_fd_dupX__STUB.common.info = scm__rc.d2149[81];
  libioport_fd_dupX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[83]);
  scm__rc.d2149[91] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[30])),TRUE); /* port-attribute-set! */
  scm__rc.d2149[92] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31])),TRUE); /* key */
  scm__rc.d2149[93] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[32])),TRUE); /* val */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[98]), scm__rc.d2149[93]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[99]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[100]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[103]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[104]), scm__rc.d2149[91]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[105]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[106]), scm__rc.d2149[3]);
  scm__rc.d2149[94] = Scm_MakeExtendedPair(scm__rc.d2149[91], SCM_OBJ(&scm__rc.d2150[100]), SCM_OBJ(&scm__rc.d2150[108]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[6] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[95]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-attribute-set!")), SCM_OBJ(&libioport_attribute_setX__STUB), 0);
  libioport_attribute_setX__STUB.common.info = scm__rc.d2149[94];
  libioport_attribute_setX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[95]);
  scm__rc.d2149[104] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[33])),TRUE); /* port-attribute-ref */
  scm__rc.d2149[105] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[34])),TRUE); /* fallback */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[109]), scm__rc.d2149[105]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[110]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[111]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[112]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[115]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[116]), scm__rc.d2149[104]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[117]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[118]), scm__rc.d2149[3]);
  scm__rc.d2149[106] = Scm_MakeExtendedPair(scm__rc.d2149[104], SCM_OBJ(&scm__rc.d2150[112]), SCM_OBJ(&scm__rc.d2150[120]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[6] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[107]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-attribute-ref")), SCM_OBJ(&libioport_attribute_ref__STUB), 0);
  libioport_attribute_ref__STUB.common.info = scm__rc.d2149[106];
  libioport_attribute_ref__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[107]);
  Scm_SetterSet(SCM_PROCEDURE(&libioport_attribute_ref__STUB), SCM_PROCEDURE(&libioport_attribute_setX__STUB), TRUE);
  scm__rc.d2149[116] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[35])),TRUE); /* port-attribute-delete! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[121]), scm__rc.d2149[92]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[122]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[125]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[126]), scm__rc.d2149[116]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[127]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[128]), scm__rc.d2149[3]);
  scm__rc.d2149[117] = Scm_MakeExtendedPair(scm__rc.d2149[116], SCM_OBJ(&scm__rc.d2150[122]), SCM_OBJ(&scm__rc.d2150[130]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[118]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[118]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[118]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[118]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[118]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-attribute-delete!")), SCM_OBJ(&libioport_attribute_deleteX__STUB), 0);
  libioport_attribute_deleteX__STUB.common.info = scm__rc.d2149[117];
  libioport_attribute_deleteX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[118]);
  scm__rc.d2149[126] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[36])),TRUE); /* port-attributes */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[133]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[134]), scm__rc.d2149[126]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[135]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[136]), scm__rc.d2149[3]);
  scm__rc.d2149[127] = Scm_MakeExtendedPair(scm__rc.d2149[126], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[138]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-attributes")), SCM_OBJ(&libioport_attributes__STUB), 0);
  libioport_attributes__STUB.common.info = scm__rc.d2149[127];
  libioport_attributes__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
  scm__rc.d2149[128] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[38])),TRUE); /* file */
  scm__rc.d2149[129] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[39])),TRUE); /* proc */
  scm__rc.d2149[130] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[40])),TRUE); /* string */
  scm__rc.d2149[131] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[37])),TRUE); /* port-type */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[141]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[142]), scm__rc.d2149[131]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[143]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[144]), scm__rc.d2149[3]);
  scm__rc.d2149[132] = Scm_MakeExtendedPair(scm__rc.d2149[131], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[146]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-type")), SCM_OBJ(&libioport_type__STUB), 0);
  libioport_type__STUB.common.info = scm__rc.d2149[132];
  libioport_type__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
  scm__rc.d2149[133] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[41])),TRUE); /* port-buffering */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[149]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[150]), scm__rc.d2149[133]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[151]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[152]), scm__rc.d2149[3]);
  scm__rc.d2149[134] = Scm_MakeExtendedPair(scm__rc.d2149[133], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[154]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-buffering")), SCM_OBJ(&libioport_buffering__STUB), 0);
  libioport_buffering__STUB.common.info = scm__rc.d2149[134];
  libioport_buffering__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
  Scm_SetterSet(SCM_PROCEDURE(&libioport_buffering__STUB), SCM_PROCEDURE(&libioport_buffering_SETTER__STUB), TRUE);
  scm__rc.d2149[135] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[43])),TRUE); /* port-link! */
  scm__rc.d2149[136] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[44])),TRUE); /* iport */
  scm__rc.d2149[137] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[45])),TRUE); /* oport */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[155]), scm__rc.d2149[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[156]), scm__rc.d2149[136]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[159]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[160]), scm__rc.d2149[135]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[161]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[162]), scm__rc.d2149[3]);
  scm__rc.d2149[138] = Scm_MakeExtendedPair(scm__rc.d2149[135], SCM_OBJ(&scm__rc.d2150[156]), SCM_OBJ(&scm__rc.d2150[164]));
  scm__rc.d2149[139] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[46])),TRUE); /* <input-port> */
  scm__rc.d2149[140] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[47])),TRUE); /* <output-port> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[141]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[141]))[4] = scm__rc.d2149[139];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[141]))[5] = scm__rc.d2149[140];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[141]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[141]))[7] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-link!")), SCM_OBJ(&libioport_linkX__STUB), 0);
  libioport_linkX__STUB.common.info = scm__rc.d2149[138];
  libioport_linkX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[141]);
  scm__rc.d2149[149] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[48])),TRUE); /* port-unlink! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[167]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[168]), scm__rc.d2149[149]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[169]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[170]), scm__rc.d2149[3]);
  scm__rc.d2149[150] = Scm_MakeExtendedPair(scm__rc.d2149[149], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[172]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[151]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[151]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[151]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[151]))[6] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-unlink!")), SCM_OBJ(&libioport_unlinkX__STUB), 0);
  libioport_unlinkX__STUB.common.info = scm__rc.d2149[150];
  libioport_unlinkX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[151]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[158] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[49])),TRUE); /* port-case-fold */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[175]), scm__rc.d2149[2]);
  scm__rc.d2149[159] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[51])),TRUE); /* gauche.internal */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[176]), scm__rc.d2149[158]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[177]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[178]), scm__rc.d2149[3]);
  scm__rc.d2149[160] = Scm_MakeExtendedPair(scm__rc.d2149[158], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[180]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[161]))[3] = scm__rc.d2149[159];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[161]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[161]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[161]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("port-case-fold")), SCM_OBJ(&libioport_case_fold__STUB), 0);
  libioport_case_fold__STUB.common.info = scm__rc.d2149[160];
  libioport_case_fold__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[161]);
  Scm_SetterSet(SCM_PROCEDURE(&libioport_case_fold__STUB), SCM_PROCEDURE(&libioport_case_fold_SETTER__STUB), TRUE);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[168] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[52])),TRUE); /* close-input-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[183]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[184]), scm__rc.d2149[168]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[185]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[186]), scm__rc.d2149[3]);
  scm__rc.d2149[169] = Scm_MakeExtendedPair(scm__rc.d2149[168], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[188]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[170]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[170]))[4] = scm__rc.d2149[139];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[170]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[170]))[6] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("close-input-port")), SCM_OBJ(&libioclose_input_port__STUB), 0);
  libioclose_input_port__STUB.common.info = scm__rc.d2149[169];
  libioclose_input_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[170]);
  scm__rc.d2149[177] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[53])),TRUE); /* close-output-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[191]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[192]), scm__rc.d2149[177]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[193]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[194]), scm__rc.d2149[3]);
  scm__rc.d2149[178] = Scm_MakeExtendedPair(scm__rc.d2149[177], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[196]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[4] = scm__rc.d2149[140];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[179]))[6] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("close-output-port")), SCM_OBJ(&libioclose_output_port__STUB), 0);
  libioclose_output_port__STUB.common.info = scm__rc.d2149[178];
  libioclose_output_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[179]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[186] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[54])),TRUE); /* close-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[199]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[200]), scm__rc.d2149[186]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[201]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[202]), scm__rc.d2149[3]);
  scm__rc.d2149[187] = Scm_MakeExtendedPair(scm__rc.d2149[186], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[204]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("close-port")), SCM_OBJ(&libioclose_port__STUB), 0);
  libioclose_port__STUB.common.info = scm__rc.d2149[187];
  libioclose_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[151]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[188] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55]))); /* :error */
  scm__rc.d2149[189] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56]))); /* :if-does-not-exist */
  scm__rc.d2149[190] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57]))); /* :buffering */
  scm__rc.d2149[191] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[58]))); /* :binary */
  scm__rc.d2149[192] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59]))); /* :element-type */
  scm__rc.d2149[193] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[61]))); /* :character */
  scm__rc.d2149[194] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[60])),TRUE); /* %open-input-file */
  scm__rc.d2149[195] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[62])),TRUE); /* path */
  scm__rc.d2149[196] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[31]))); /* :key */
  scm__rc.d2149[197] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[56])),TRUE); /* if-does-not-exist */
  scm__rc.d2149[198] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[57])),TRUE); /* buffering */
  scm__rc.d2149[199] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[59])),TRUE); /* element-type */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[205]), scm__rc.d2149[199]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[206]), scm__rc.d2149[198]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[207]), scm__rc.d2149[197]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[208]), scm__rc.d2149[196]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[209]), scm__rc.d2149[195]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[212]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[213]), scm__rc.d2149[194]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[214]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[215]), scm__rc.d2149[3]);
  scm__rc.d2149[200] = Scm_MakeExtendedPair(scm__rc.d2149[194], SCM_OBJ(&scm__rc.d2150[209]), SCM_OBJ(&scm__rc.d2150[217]));
  scm__rc.d2149[201] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[63])),TRUE); /* <string> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[202]))[3] = scm__rc.d2149[159];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[202]))[4] = scm__rc.d2149[201];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[202]))[5] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[202]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[202]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%open-input-file")), SCM_OBJ(&libio_25open_input_file__STUB), 0);
  libio_25open_input_file__STUB.common.info = scm__rc.d2149[200];
  libio_25open_input_file__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[202]);
  scm__rc.d2149[210] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[64]))); /* :supersede */
  scm__rc.d2149[211] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65]))); /* :if-exists */
  scm__rc.d2149[212] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[66]))); /* :create */
  scm__rc.d2149[213] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67]))); /* :mode */
  scm__rc.d2149[214] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[69]))); /* :overwrite */
  scm__rc.d2149[215] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[70]))); /* :append */
  scm__rc.d2149[216] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[68])),TRUE); /* %open-output-file */
  scm__rc.d2149[217] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[65])),TRUE); /* if-exists */
  scm__rc.d2149[218] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[67])),TRUE); /* mode */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[218]), scm__rc.d2149[218]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[219]), scm__rc.d2149[197]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[220]), scm__rc.d2149[217]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[221]), scm__rc.d2149[196]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[222]), scm__rc.d2149[195]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[225]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[226]), scm__rc.d2149[216]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[227]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[228]), scm__rc.d2149[3]);
  scm__rc.d2149[219] = Scm_MakeExtendedPair(scm__rc.d2149[216], SCM_OBJ(&scm__rc.d2150[222]), SCM_OBJ(&scm__rc.d2150[230]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%open-output-file")), SCM_OBJ(&libio_25open_output_file__STUB), 0);
  libio_25open_output_file__STUB.common.info = scm__rc.d2149[219];
  libio_25open_output_file__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[202]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[220] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71]))); /* :owner? */
  scm__rc.d2149[221] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72]))); /* :name */
  scm__rc.d2149[222] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[74])),TRUE); /* dup */
  scm__rc.d2149[223] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[73])),TRUE); /* open-input-fd-port */
  scm__rc.d2149[224] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[75])),TRUE); /* fd */
  scm__rc.d2149[225] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[71])),TRUE); /* owner? */
  scm__rc.d2149[226] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[72])),TRUE); /* name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[231]), scm__rc.d2149[226]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[232]), scm__rc.d2149[225]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[233]), scm__rc.d2149[198]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[234]), scm__rc.d2149[196]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[235]), scm__rc.d2149[224]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[238]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[239]), scm__rc.d2149[223]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[240]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[241]), scm__rc.d2149[3]);
  scm__rc.d2149[227] = Scm_MakeExtendedPair(scm__rc.d2149[223], SCM_OBJ(&scm__rc.d2150[235]), SCM_OBJ(&scm__rc.d2150[243]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[4] = scm__rc.d2149[59];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[5] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[228]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("open-input-fd-port")), SCM_OBJ(&libioopen_input_fd_port__STUB), 0);
  libioopen_input_fd_port__STUB.common.info = scm__rc.d2149[227];
  libioopen_input_fd_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[228]);
  scm__rc.d2149[236] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[76])),TRUE); /* open-output-fd-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[246]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[247]), scm__rc.d2149[236]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[248]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[249]), scm__rc.d2149[3]);
  scm__rc.d2149[237] = Scm_MakeExtendedPair(scm__rc.d2149[236], SCM_OBJ(&scm__rc.d2150[235]), SCM_OBJ(&scm__rc.d2150[251]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("open-output-fd-port")), SCM_OBJ(&libioopen_output_fd_port__STUB), 0);
  libioopen_output_fd_port__STUB.common.info = scm__rc.d2149[237];
  libioopen_output_fd_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[228]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[238] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[77])),TRUE); /* open-input-buffered-port */
  scm__rc.d2149[239] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[78])),TRUE); /* filler */
  scm__rc.d2149[240] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[79])),TRUE); /* buffer-size */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[252]), scm__rc.d2149[240]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[253]), scm__rc.d2149[239]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[256]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[257]), scm__rc.d2149[238]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[258]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[259]), scm__rc.d2149[3]);
  scm__rc.d2149[241] = Scm_MakeExtendedPair(scm__rc.d2149[238], SCM_OBJ(&scm__rc.d2150[253]), SCM_OBJ(&scm__rc.d2150[261]));
  scm__rc.d2149[242] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[80])),TRUE); /* <procedure> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[4] = scm__rc.d2149[242];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[5] = scm__rc.d2149[59];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[243]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("open-input-buffered-port")), SCM_OBJ(&libioopen_input_buffered_port__STUB), 0);
  libioopen_input_buffered_port__STUB.common.info = scm__rc.d2149[241];
  libioopen_input_buffered_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
  scm__rc.d2149[251] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[81])),TRUE); /* open-output-buffered-port */
  scm__rc.d2149[252] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[82])),TRUE); /* flusher */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[262]), scm__rc.d2149[252]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[265]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[266]), scm__rc.d2149[251]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[267]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[268]), scm__rc.d2149[3]);
  scm__rc.d2149[253] = Scm_MakeExtendedPair(scm__rc.d2149[251], SCM_OBJ(&scm__rc.d2150[262]), SCM_OBJ(&scm__rc.d2150[270]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("open-output-buffered-port")), SCM_OBJ(&libioopen_output_buffered_port__STUB), 0);
  libioopen_output_buffered_port__STUB.common.info = scm__rc.d2149[253];
  libioopen_output_buffered_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[243]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[254] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83]))); /* :private? */
  scm__rc.d2149[255] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[85])),TRUE); /* open-input-string */
  scm__rc.d2149[256] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[83])),TRUE); /* private? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[271]), scm__rc.d2149[256]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[272]), scm__rc.d2149[196]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[273]), scm__rc.d2149[130]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[276]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[277]), scm__rc.d2149[255]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[278]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[279]), scm__rc.d2149[3]);
  scm__rc.d2149[257] = Scm_MakeExtendedPair(scm__rc.d2149[255], SCM_OBJ(&scm__rc.d2150[273]), SCM_OBJ(&scm__rc.d2150[281]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[258]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[258]))[4] = scm__rc.d2149[201];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[258]))[5] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[258]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[258]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("open-input-string")), SCM_OBJ(&libioopen_input_string__STUB), 0);
  libioopen_input_string__STUB.common.info = scm__rc.d2149[257];
  libioopen_input_string__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[258]);
  scm__rc.d2149[266] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[87])),TRUE); /* open-output-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[284]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[285]), scm__rc.d2149[266]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[286]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[287]), scm__rc.d2149[3]);
  scm__rc.d2149[267] = Scm_MakeExtendedPair(scm__rc.d2149[266], SCM_OBJ(&scm__rc.d2150[272]), SCM_OBJ(&scm__rc.d2150[289]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("open-output-string")), SCM_OBJ(&libioopen_output_string__STUB), 0);
  libioopen_output_string__STUB.common.info = scm__rc.d2149[267];
  libioopen_output_string__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);
  scm__rc.d2149[268] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[88])),TRUE); /* get-output-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[292]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[293]), scm__rc.d2149[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[294]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[295]), scm__rc.d2149[3]);
  scm__rc.d2149[269] = Scm_MakeExtendedPair(scm__rc.d2149[268], SCM_OBJ(&scm__rc.d2150[155]), SCM_OBJ(&scm__rc.d2150[297]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[270]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[270]))[4] = scm__rc.d2149[140];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[270]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[270]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("get-output-string")), SCM_OBJ(&libioget_output_string__STUB), 0);
  libioget_output_string__STUB.common.info = scm__rc.d2149[269];
  libioget_output_string__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[270]);
  scm__rc.d2149[277] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[89])),TRUE); /* get-output-byte-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[300]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[301]), scm__rc.d2149[277]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[302]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[303]), scm__rc.d2149[3]);
  scm__rc.d2149[278] = Scm_MakeExtendedPair(scm__rc.d2149[277], SCM_OBJ(&scm__rc.d2150[155]), SCM_OBJ(&scm__rc.d2150[305]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("get-output-byte-string")), SCM_OBJ(&libioget_output_byte_string__STUB), 0);
  libioget_output_byte_string__STUB.common.info = scm__rc.d2149[278];
  libioget_output_byte_string__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[270]);
  scm__rc.d2149[279] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[90])),TRUE); /* get-remaining-input-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[306]), scm__rc.d2149[136]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[309]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[310]), scm__rc.d2149[279]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[311]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[312]), scm__rc.d2149[3]);
  scm__rc.d2149[280] = Scm_MakeExtendedPair(scm__rc.d2149[279], SCM_OBJ(&scm__rc.d2150[306]), SCM_OBJ(&scm__rc.d2150[314]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[281]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[281]))[4] = scm__rc.d2149[139];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[281]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[281]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("get-remaining-input-string")), SCM_OBJ(&libioget_remaining_input_string__STUB), 0);
  libioget_remaining_input_string__STUB.common.info = scm__rc.d2149[280];
  libioget_remaining_input_string__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[281]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[288] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[91])),TRUE); /* open-coding-aware-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[317]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[318]), scm__rc.d2149[288]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[319]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[320]), scm__rc.d2149[3]);
  scm__rc.d2149[289] = Scm_MakeExtendedPair(scm__rc.d2149[288], SCM_OBJ(&scm__rc.d2150[306]), SCM_OBJ(&scm__rc.d2150[322]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("open-coding-aware-port")), SCM_OBJ(&libioopen_coding_aware_port__STUB), 0);
  libioopen_coding_aware_port__STUB.common.info = scm__rc.d2149[289];
  libioopen_coding_aware_port__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[281]);
  scm__rc.d2149[290] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[92])),TRUE); /* port-has-port-position? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[325]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[326]), scm__rc.d2149[290]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[327]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[328]), scm__rc.d2149[3]);
  scm__rc.d2149[291] = Scm_MakeExtendedPair(scm__rc.d2149[290], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[330]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-has-port-position?")), SCM_OBJ(&libioport_has_port_positionP__STUB), 0);
  libioport_has_port_positionP__STUB.common.info = scm__rc.d2149[291];
  libioport_has_port_positionP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[292] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[93])),TRUE); /* port-has-set-port-position!? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[333]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[334]), scm__rc.d2149[292]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[335]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[336]), scm__rc.d2149[3]);
  scm__rc.d2149[293] = Scm_MakeExtendedPair(scm__rc.d2149[292], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[338]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-has-set-port-position!?")), SCM_OBJ(&libioport_has_set_port_positionXP__STUB), 0);
  libioport_has_set_port_positionXP__STUB.common.info = scm__rc.d2149[293];
  libioport_has_set_port_positionXP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[24]);
  scm__rc.d2149[294] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[94])),TRUE); /* port-position */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[341]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[342]), scm__rc.d2149[294]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[343]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[344]), scm__rc.d2149[3]);
  scm__rc.d2149[295] = Scm_MakeExtendedPair(scm__rc.d2149[294], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[346]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-position")), SCM_OBJ(&libioport_position__STUB), 0);
  libioport_position__STUB.common.info = scm__rc.d2149[295];
  libioport_position__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[50]);
  scm__rc.d2149[296] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[95])),TRUE); /* set-port-position! */
  scm__rc.d2149[297] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[96])),TRUE); /* pos */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[347]), scm__rc.d2149[297]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[348]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[351]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[352]), scm__rc.d2149[296]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[353]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[354]), scm__rc.d2149[3]);
  scm__rc.d2149[298] = Scm_MakeExtendedPair(scm__rc.d2149[296], SCM_OBJ(&scm__rc.d2150[348]), SCM_OBJ(&scm__rc.d2150[356]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("set-port-position!")), SCM_OBJ(&libioset_port_positionX__STUB), 0);
  libioset_port_positionX__STUB.common.info = scm__rc.d2149[298];
  libioset_port_positionX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[118]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[299] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[97])),TRUE); /* SEEK_SET */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[299]), Scm_MakeInteger(SEEK_SET), SCM_BINDING_CONST);

  scm__rc.d2149[300] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[98])),TRUE); /* SEEK_CUR */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[300]), Scm_MakeInteger(SEEK_CUR), SCM_BINDING_CONST);

  scm__rc.d2149[301] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[99])),TRUE); /* SEEK_END */
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(scm__rc.d2149[301]), Scm_MakeInteger(SEEK_END), SCM_BINDING_CONST);

  scm__rc.d2149[302] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[100])),TRUE); /* port-seek */
  scm__rc.d2149[303] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[101])),TRUE); /* offset */
  scm__rc.d2149[304] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[102])),TRUE); /* whence */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[357]), scm__rc.d2149[304]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[358]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[359]), scm__rc.d2149[303]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[360]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[363]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[364]), scm__rc.d2149[302]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[365]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[366]), scm__rc.d2149[3]);
  scm__rc.d2149[305] = Scm_MakeExtendedPair(scm__rc.d2149[302], SCM_OBJ(&scm__rc.d2150[360]), SCM_OBJ(&scm__rc.d2150[368]));
  scm__rc.d2149[306] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[103])),TRUE); /* <integer> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[307]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[307]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[307]))[5] = scm__rc.d2149[306];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[307]))[6] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[307]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[307]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port-seek")), SCM_OBJ(&libioport_seek__STUB), 0);
  libioport_seek__STUB.common.info = scm__rc.d2149[305];
  libioport_seek__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[307]);
  scm__rc.d2149[317] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[104])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[316] = Scm_MakeIdentifier(scm__rc.d2149[317], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[318] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[105])),TRUE); /* port-tell */
  scm__rc.d2149[320] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[21]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche */
  scm__rc.d2149[319] = Scm_MakeIdentifier(scm__rc.d2149[302], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port-seek */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[371]), scm__rc.d2149[2]);
  scm__rc.d2149[321] = Scm_MakeExtendedPair(scm__rc.d2149[318], SCM_OBJ(&scm__rc.d2150[34]), SCM_OBJ(&scm__rc.d2150[372]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[373]), scm__rc.d2149[321]);
  scm__rc.d2149[322] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[0]))->name = scm__rc.d2149[318];/* port-tell */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[0]))->debugInfo = scm__rc.d2149[322];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[0]))[4] = SCM_WORD(scm__rc.d2149[319]);
  scm__rc.d2149[323] = Scm_MakeIdentifier(scm__rc.d2149[318], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port-tell */
  scm__rc.d2149[324] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[106])),TRUE); /* %toplevel */
  scm__rc.d2149[325] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[1]))->debugInfo = scm__rc.d2149[325];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[6]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[6]))[6] = SCM_WORD(scm__rc.d2149[318]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[6]))[13] = SCM_WORD(scm__rc.d2149[323]);
  scm__rc.d2149[326] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[107])),TRUE); /* port-position-prefix */
  scm__rc.d2149[327] = Scm_MakeIdentifier(scm__rc.d2149[18], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port? */
  scm__rc.d2149[328] = Scm_MakeIdentifier(scm__rc.d2149[47], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port-name */
  scm__rc.d2149[329] = Scm_MakeIdentifier(scm__rc.d2149[57], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port-current-line */
  scm__rc.d2149[331] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[108])),TRUE); /* positive? */
  scm__rc.d2149[330] = Scm_MakeIdentifier(scm__rc.d2149[331], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#positive? */
  scm__rc.d2149[332] = SCM_OBJ(Scm_MakeBox(SCM_FALSE));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[374]), scm__rc.d2149[332]);
  scm__rc.d2149[334] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[110])),TRUE); /* format-internal */
  scm__rc.d2149[336] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[111])),TRUE); /* gauche.format */
  scm__rc.d2149[335] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[336]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.format */
  scm__rc.d2149[333] = Scm_MakeIdentifier(scm__rc.d2149[334], SCM_MODULE(scm__rc.d2149[335]), SCM_NIL); /* gauche.format#format-internal */
  scm__rc.d2149[337] = SCM_OBJ(Scm_MakeBox(SCM_FALSE));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[377]), scm__rc.d2149[337]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[382]), scm__rc.d2149[2]);
  scm__rc.d2149[338] = Scm_MakeExtendedPair(scm__rc.d2149[326], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[383]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[384]), scm__rc.d2149[338]);
  scm__rc.d2149[339] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[2]))->name = scm__rc.d2149[326];/* port-position-prefix */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[2]))->debugInfo = scm__rc.d2149[339];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]))[4] = SCM_WORD(scm__rc.d2149[327]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]))[11] = SCM_WORD(scm__rc.d2149[328]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]))[20] = SCM_WORD(scm__rc.d2149[329]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]))[26] = SCM_WORD(scm__rc.d2149[330]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]))[40] = SCM_WORD(scm__rc.d2149[333]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[21]))[53] = SCM_WORD(scm__rc.d2149[333]);
  scm__rc.d2149[340] = Scm_MakeIdentifier(scm__rc.d2149[326], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port-position-prefix */
  scm__rc.d2149[341] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[3]))->debugInfo = scm__rc.d2149[341];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[80]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[80]))[6] = SCM_WORD(scm__rc.d2149[326]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[80]))[13] = SCM_WORD(scm__rc.d2149[340]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[342] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[115])),TRUE); /* %port-walking? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[387]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[388]), scm__rc.d2149[342]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[389]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[390]), scm__rc.d2149[3]);
  scm__rc.d2149[343] = Scm_MakeExtendedPair(scm__rc.d2149[342], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[392]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%port-walking?")), SCM_OBJ(&libio_25port_walkingP__STUB), 0);
  libio_25port_walkingP__STUB.common.info = scm__rc.d2149[343];
  libio_25port_walkingP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[161]);
  Scm_SetterSet(SCM_PROCEDURE(&libio_25port_walkingP__STUB), SCM_PROCEDURE(&libio_25port_walkingP_SETTER__STUB), TRUE);
  scm__rc.d2149[344] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[117])),TRUE); /* %port-writing-shared? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[395]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[396]), scm__rc.d2149[344]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[397]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[398]), scm__rc.d2149[3]);
  scm__rc.d2149[345] = Scm_MakeExtendedPair(scm__rc.d2149[344], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[400]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%port-writing-shared?")), SCM_OBJ(&libio_25port_writing_sharedP__STUB), 0);
  libio_25port_writing_sharedP__STUB.common.info = scm__rc.d2149[345];
  libio_25port_writing_sharedP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[161]);
  Scm_SetterSet(SCM_PROCEDURE(&libio_25port_writing_sharedP__STUB), SCM_PROCEDURE(&libio_25port_writing_sharedP_SETTER__STUB), TRUE);
  Scm_InitStaticClassWithMeta(&Scm_WriteStateClass, "<write-state>", SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), NULL, SCM_FALSE, Scm_WriteStateClass__SLOTS, 0);
  scm__rc.d2149[346] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[119])),TRUE); /* %port-write-state */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[403]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[404]), scm__rc.d2149[346]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[405]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[406]), scm__rc.d2149[3]);
  scm__rc.d2149[347] = Scm_MakeExtendedPair(scm__rc.d2149[346], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[408]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[348]))[3] = scm__rc.d2149[159];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[348]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[348]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[348]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%port-write-state")), SCM_OBJ(&libio_25port_write_state__STUB), 0);
  libio_25port_write_state__STUB.common.info = scm__rc.d2149[347];
  libio_25port_write_state__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[348]);
  Scm_SetterSet(SCM_PROCEDURE(&libio_25port_write_state__STUB), SCM_PROCEDURE(&libio_25port_write_state_SETTER__STUB), TRUE);
  scm__rc.d2149[355] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[121])),TRUE); /* %port-lock! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[411]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[412]), scm__rc.d2149[355]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[413]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[414]), scm__rc.d2149[3]);
  scm__rc.d2149[356] = Scm_MakeExtendedPair(scm__rc.d2149[355], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[416]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[357]))[3] = scm__rc.d2149[159];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[357]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[357]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[357]))[6] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%port-lock!")), SCM_OBJ(&libio_25port_lockX__STUB), 0);
  libio_25port_lockX__STUB.common.info = scm__rc.d2149[356];
  libio_25port_lockX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[357]);
  scm__rc.d2149[364] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[122])),TRUE); /* %port-unlock! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[419]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[420]), scm__rc.d2149[364]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[421]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[422]), scm__rc.d2149[3]);
  scm__rc.d2149[365] = Scm_MakeExtendedPair(scm__rc.d2149[364], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[424]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%port-unlock!")), SCM_OBJ(&libio_25port_unlockX__STUB), 0);
  libio_25port_unlockX__STUB.common.info = scm__rc.d2149[365];
  libio_25port_unlockX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[357]);
  scm__rc.d2149[366] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[123])),TRUE); /* with-port-locking */
  scm__rc.d2149[368] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[159]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[367] = Scm_MakeIdentifier(scm__rc.d2149[355], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%port-lock! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[426]), scm__rc.d2149[366]);
  scm__rc.d2149[369] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[4]))->debugInfo = scm__rc.d2149[369];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[95]))[4] = SCM_WORD(scm__rc.d2149[367]);
  scm__rc.d2149[370] = Scm_MakeIdentifier(scm__rc.d2149[364], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%port-unlock! */
  scm__rc.d2149[371] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[5]))->debugInfo = scm__rc.d2149[371];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[104]))[2] = SCM_WORD(scm__rc.d2149[370]);
  scm__rc.d2149[372] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[2]))); /* :source-info */
  scm__rc.d2149[374] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[124])),TRUE); /* %unwind-protect */
  scm__rc.d2149[373] = Scm_MakeIdentifier(scm__rc.d2149[374], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%unwind-protect */
  scm__rc.d2149[375] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[125])),TRUE); /* args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[431]), scm__rc.d2149[129]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[431]), scm__rc.d2149[375]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[432]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[435]), scm__rc.d2149[2]);
  scm__rc.d2149[376] = Scm_MakeExtendedPair(scm__rc.d2149[366], SCM_OBJ(&scm__rc.d2150[432]), SCM_OBJ(&scm__rc.d2150[436]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[437]), scm__rc.d2149[376]);
  scm__rc.d2149[377] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[6]))->name = scm__rc.d2149[366];/* with-port-locking */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[6]))->debugInfo = scm__rc.d2149[377];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[108]))[7] = SCM_WORD(scm__rc.d2149[372]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[108]))[11] = SCM_WORD(scm__rc.d2149[373]);
  scm__rc.d2149[378] = Scm_MakeIdentifier(scm__rc.d2149[366], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-port-locking */
  scm__rc.d2149[379] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[7]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[7]))->debugInfo = scm__rc.d2149[379];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[121]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[121]))[6] = SCM_WORD(scm__rc.d2149[366]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[121]))[13] = SCM_WORD(scm__rc.d2149[378]);
  scm__rc.d2149[380] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[126])),TRUE); /* %with-2pass-setup */
  scm__rc.d2149[381] = Scm_MakeIdentifier(scm__rc.d2149[346], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%port-write-state */
  scm__rc.d2149[383] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[55])),TRUE); /* error */
  scm__rc.d2149[382] = Scm_MakeIdentifier(scm__rc.d2149[383], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#error */
  scm__rc.d2149[385] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[128])),TRUE); /* <write-state> */
  scm__rc.d2149[384] = Scm_MakeIdentifier(scm__rc.d2149[385], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#<write-state> */
  scm__rc.d2149[386] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[129]))); /* :shared-table */
  scm__rc.d2149[387] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[130])),TRUE); /* eq? */
  scm__rc.d2149[389] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[131])),TRUE); /* make-hash-table */
  scm__rc.d2149[388] = Scm_MakeIdentifier(scm__rc.d2149[389], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#make-hash-table */
  scm__rc.d2149[391] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[132])),TRUE); /* make */
  scm__rc.d2149[390] = Scm_MakeIdentifier(scm__rc.d2149[391], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#make */
  scm__rc.d2149[392] = Scm_MakeIdentifier(scm__rc.d2149[342], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%port-walking? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[438]), scm__rc.d2149[380]);
  scm__rc.d2149[393] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[8])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[8]))->debugInfo = scm__rc.d2149[393];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[4] = SCM_WORD(scm__rc.d2149[367]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[9] = SCM_WORD(scm__rc.d2149[381]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[18] = SCM_WORD(scm__rc.d2149[382]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[27] = SCM_WORD(scm__rc.d2149[384]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[29] = SCM_WORD(scm__rc.d2149[386]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[33] = SCM_WORD(scm__rc.d2149[387]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[35] = SCM_WORD(scm__rc.d2149[388]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[37] = SCM_WORD(scm__rc.d2149[390]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[39] = SCM_WORD(scm__rc.d2149[381]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[48] = SCM_WORD(scm__rc.d2149[392]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[136]))[61] = SCM_WORD(scm__rc.d2149[392]);
  scm__rc.d2149[394] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[9])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[9]))->debugInfo = scm__rc.d2149[394];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[204]))[5] = SCM_WORD(scm__rc.d2149[392]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[204]))[13] = SCM_WORD(scm__rc.d2149[381]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[204]))[18] = SCM_WORD(scm__rc.d2149[370]);
  scm__rc.d2149[395] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[133])),TRUE); /* walker */
  scm__rc.d2149[396] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[134])),TRUE); /* emitter */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[443]), scm__rc.d2149[396]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[443]), scm__rc.d2149[375]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[444]), scm__rc.d2149[395]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[445]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[448]), scm__rc.d2149[2]);
  scm__rc.d2149[397] = Scm_MakeExtendedPair(scm__rc.d2149[380], SCM_OBJ(&scm__rc.d2150[445]), SCM_OBJ(&scm__rc.d2150[449]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[450]), scm__rc.d2149[397]);
  scm__rc.d2149[398] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[10])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[10]))->name = scm__rc.d2149[380];/* %with-2pass-setup */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[10]))->debugInfo = scm__rc.d2149[398];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[224]))[7] = SCM_WORD(scm__rc.d2149[372]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[224]))[11] = SCM_WORD(scm__rc.d2149[373]);
  scm__rc.d2149[399] = Scm_MakeIdentifier(scm__rc.d2149[380], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%with-2pass-setup */
  scm__rc.d2149[400] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[11])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[11]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[11]))->debugInfo = scm__rc.d2149[400];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[237]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[237]))[6] = SCM_WORD(scm__rc.d2149[380]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[237]))[13] = SCM_WORD(scm__rc.d2149[399]);
  scm__rc.d2149[401] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[135])),TRUE); /* port-column */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[453]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[454]), scm__rc.d2149[401]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[455]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[456]), scm__rc.d2149[3]);
  scm__rc.d2149[402] = Scm_MakeExtendedPair(scm__rc.d2149[401], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[458]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[403]))[3] = scm__rc.d2149[159];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[403]))[4] = scm__rc.d2149[23];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[403]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[403]))[6] = scm__rc.d2149[59];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("port-column")), SCM_OBJ(&libioport_column__STUB), 0);
  libioport_column__STUB.common.info = scm__rc.d2149[402];
  libioport_column__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[403]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[410] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[136])),TRUE); /* read */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[459]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[462]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[463]), scm__rc.d2149[410]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[464]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[465]), scm__rc.d2149[3]);
  scm__rc.d2149[411] = Scm_MakeExtendedPair(scm__rc.d2149[410], SCM_OBJ(&scm__rc.d2150[459]), SCM_OBJ(&scm__rc.d2150[467]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[412]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[412]))[4] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[412]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[412]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("read")), SCM_OBJ(&libioread__STUB), 0);
  libioread__STUB.common.info = scm__rc.d2149[411];
  libioread__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[412]);
  scm__rc.d2149[419] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[137])),TRUE); /* read-char */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[470]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[471]), scm__rc.d2149[419]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[472]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[473]), scm__rc.d2149[3]);
  scm__rc.d2149[420] = Scm_MakeExtendedPair(scm__rc.d2149[419], SCM_OBJ(&scm__rc.d2150[459]), SCM_OBJ(&scm__rc.d2150[475]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("read-char")), SCM_OBJ(&libioread_char__STUB), SCM_BINDING_INLINABLE);
  libioread_char__STUB.common.info = scm__rc.d2149[420];
  libioread_char__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[412]);
  scm__rc.d2149[421] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[138])),TRUE); /* peek-char */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[478]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[479]), scm__rc.d2149[421]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[480]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[481]), scm__rc.d2149[3]);
  scm__rc.d2149[422] = Scm_MakeExtendedPair(scm__rc.d2149[421], SCM_OBJ(&scm__rc.d2150[459]), SCM_OBJ(&scm__rc.d2150[483]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("peek-char")), SCM_OBJ(&libiopeek_char__STUB), SCM_BINDING_INLINABLE);
  libiopeek_char__STUB.common.info = scm__rc.d2149[422];
  libiopeek_char__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[412]);
  scm__rc.d2149[423] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[139])),TRUE); /* eof-object? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[486]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[487]), scm__rc.d2149[423]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[488]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[489]), scm__rc.d2149[3]);
  scm__rc.d2149[424] = Scm_MakeExtendedPair(scm__rc.d2149[423], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[491]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("eof-object?")), SCM_OBJ(&libioeof_objectP__STUB), SCM_BINDING_INLINABLE);
  libioeof_objectP__STUB.common.info = scm__rc.d2149[424];
  libioeof_objectP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[9]);
  scm__rc.d2149[425] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[140])),TRUE); /* char-ready? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[494]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[495]), scm__rc.d2149[425]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[496]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[497]), scm__rc.d2149[3]);
  scm__rc.d2149[426] = Scm_MakeExtendedPair(scm__rc.d2149[425], SCM_OBJ(&scm__rc.d2150[459]), SCM_OBJ(&scm__rc.d2150[499]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[427]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[427]))[4] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[427]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[427]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("char-ready?")), SCM_OBJ(&libiochar_readyP__STUB), 0);
  libiochar_readyP__STUB.common.info = scm__rc.d2149[426];
  libiochar_readyP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[427]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[434] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[141])),TRUE); /* eof-object */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[500]), scm__rc.d2149[434]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[501]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[502]), scm__rc.d2149[3]);
  scm__rc.d2149[435] = Scm_MakeExtendedPair(scm__rc.d2149[434], SCM_NIL, SCM_OBJ(&scm__rc.d2150[503]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[436]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[436]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[436]))[5] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("eof-object")), SCM_OBJ(&libioeof_object__STUB), SCM_BINDING_INLINABLE);
  libioeof_object__STUB.common.info = scm__rc.d2149[435];
  libioeof_object__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[436]);
  scm__rc.d2149[442] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[142])),TRUE); /* byte-ready? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[506]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[507]), scm__rc.d2149[442]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[508]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[509]), scm__rc.d2149[3]);
  scm__rc.d2149[443] = Scm_MakeExtendedPair(scm__rc.d2149[442], SCM_OBJ(&scm__rc.d2150[459]), SCM_OBJ(&scm__rc.d2150[511]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[444]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[444]))[4] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[444]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[444]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("byte-ready?")), SCM_OBJ(&libiobyte_readyP__STUB), 0);
  libiobyte_readyP__STUB.common.info = scm__rc.d2149[443];
  libiobyte_readyP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[444]);
  scm__rc.d2149[451] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[143])),TRUE); /* u8-ready? */
  scm__rc.d2149[452] = Scm_MakeIdentifier(scm__rc.d2149[442], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#byte-ready? */
  scm__rc.d2149[453] = Scm_MakeIdentifier(scm__rc.d2149[451], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#u8-ready? */
  scm__rc.d2149[454] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[12])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[12]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[12]))->debugInfo = scm__rc.d2149[454];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[252]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[252]))[6] = SCM_WORD(scm__rc.d2149[451]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[252]))[10] = SCM_WORD(scm__rc.d2149[452]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[252]))[13] = SCM_WORD(scm__rc.d2149[453]);
  scm__rc.d2149[455] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[144])),TRUE); /* read-byte */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[514]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[515]), scm__rc.d2149[455]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[516]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[517]), scm__rc.d2149[3]);
  scm__rc.d2149[456] = Scm_MakeExtendedPair(scm__rc.d2149[455], SCM_OBJ(&scm__rc.d2150[459]), SCM_OBJ(&scm__rc.d2150[519]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("read-byte")), SCM_OBJ(&libioread_byte__STUB), 0);
  libioread_byte__STUB.common.info = scm__rc.d2149[456];
  libioread_byte__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);
  scm__rc.d2149[457] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[145])),TRUE); /* read-u8 */
  scm__rc.d2149[458] = Scm_MakeIdentifier(scm__rc.d2149[455], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#read-byte */
  scm__rc.d2149[459] = Scm_MakeIdentifier(scm__rc.d2149[457], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#read-u8 */
  scm__rc.d2149[460] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[13])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[13]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[13]))->debugInfo = scm__rc.d2149[460];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[267]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[267]))[6] = SCM_WORD(scm__rc.d2149[457]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[267]))[10] = SCM_WORD(scm__rc.d2149[458]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[267]))[13] = SCM_WORD(scm__rc.d2149[459]);
  scm__rc.d2149[461] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[146])),TRUE); /* peek-byte */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[522]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[523]), scm__rc.d2149[461]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[524]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[525]), scm__rc.d2149[3]);
  scm__rc.d2149[462] = Scm_MakeExtendedPair(scm__rc.d2149[461], SCM_OBJ(&scm__rc.d2150[459]), SCM_OBJ(&scm__rc.d2150[527]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("peek-byte")), SCM_OBJ(&libiopeek_byte__STUB), 0);
  libiopeek_byte__STUB.common.info = scm__rc.d2149[462];
  libiopeek_byte__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);
  scm__rc.d2149[463] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[147])),TRUE); /* peek-u8 */
  scm__rc.d2149[464] = Scm_MakeIdentifier(scm__rc.d2149[461], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#peek-byte */
  scm__rc.d2149[465] = Scm_MakeIdentifier(scm__rc.d2149[463], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#peek-u8 */
  scm__rc.d2149[466] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[14])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[14]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[14]))->debugInfo = scm__rc.d2149[466];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[282]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[282]))[6] = SCM_WORD(scm__rc.d2149[463]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[282]))[10] = SCM_WORD(scm__rc.d2149[464]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[282]))[13] = SCM_WORD(scm__rc.d2149[465]);
  scm__rc.d2149[467] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[148])),TRUE); /* read-line */
  scm__rc.d2149[468] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[149])),TRUE); /* allowbytestr */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[528]), scm__rc.d2149[468]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[529]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[530]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[533]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[534]), scm__rc.d2149[467]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[535]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[536]), scm__rc.d2149[3]);
  scm__rc.d2149[469] = Scm_MakeExtendedPair(scm__rc.d2149[467], SCM_OBJ(&scm__rc.d2150[530]), SCM_OBJ(&scm__rc.d2150[538]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("read-line")), SCM_OBJ(&libioread_line__STUB), 0);
  libioread_line__STUB.common.info = scm__rc.d2149[469];
  libioread_line__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);
  scm__rc.d2149[470] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[150])),TRUE); /* read-string */
  scm__rc.d2149[471] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[152])),TRUE); /* lambda */
  scm__rc.d2149[472] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[153])),TRUE); /* n */
  scm__rc.d2149[473] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[154])),TRUE); /* current-input-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[539]), scm__rc.d2149[473]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[541]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[543]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[544]), scm__rc.d2149[472]);
  scm__rc.d2149[474] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[155])),TRUE); /* define */
  scm__rc.d2149[475] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[156])),TRUE); /* o */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[546]), scm__rc.d2149[254]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[547]), scm__rc.d2149[266]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[549]), scm__rc.d2149[475]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[550]), scm__rc.d2149[474]);
  scm__rc.d2149[476] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[157])),TRUE); /* let */
  scm__rc.d2149[477] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[158])),TRUE); /* loop */
  scm__rc.d2149[478] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[159])),TRUE); /* i */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[552]), scm__rc.d2149[478]);
  scm__rc.d2149[479] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[160])),TRUE); /* if */
  scm__rc.d2149[480] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[161])),TRUE); /* >= */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[554]), scm__rc.d2149[472]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[555]), scm__rc.d2149[478]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[556]), scm__rc.d2149[480]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[557]), scm__rc.d2149[475]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[558]), scm__rc.d2149[268]);
  scm__rc.d2149[481] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[162])),TRUE); /* let1 */
  scm__rc.d2149[482] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[163])),TRUE); /* c */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[559]), scm__rc.d2149[419]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[560]), scm__rc.d2149[482]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[561]), scm__rc.d2149[423]);
  scm__rc.d2149[483] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[164])),TRUE); /* = */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[562]), scm__rc.d2149[483]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[566]), scm__rc.d2149[479]);
  scm__rc.d2149[484] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[165])),TRUE); /* begin */
  scm__rc.d2149[485] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[166])),TRUE); /* write-char */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[567]), scm__rc.d2149[482]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[568]), scm__rc.d2149[485]);
  scm__rc.d2149[486] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[167])),TRUE); /* + */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[570]), scm__rc.d2149[478]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[571]), scm__rc.d2149[486]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[573]), scm__rc.d2149[477]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[576]), scm__rc.d2149[484]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[580]), scm__rc.d2149[479]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[583]), scm__rc.d2149[482]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[584]), scm__rc.d2149[481]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[588]), scm__rc.d2149[479]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[591]), scm__rc.d2149[477]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[592]), scm__rc.d2149[476]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[596]), scm__rc.d2149[471]);
  scm__rc.d2149[487] = Scm_MakeIdentifier(scm__rc.d2149[383], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#error */
  scm__rc.d2149[488] = Scm_MakeIdentifier(scm__rc.d2149[266], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#open-output-string */
  scm__rc.d2149[489] = Scm_MakeIdentifier(scm__rc.d2149[268], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#get-output-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[600]), scm__rc.d2149[2]);
  scm__rc.d2149[490] = Scm_MakeExtendedPair(scm__rc.d2149[470], SCM_OBJ(&scm__rc.d2150[544]), SCM_OBJ(&scm__rc.d2150[601]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[602]), scm__rc.d2149[490]);
  scm__rc.d2149[491] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[15])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[15]))->name = scm__rc.d2149[470];/* read-string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[15]))->debugInfo = scm__rc.d2149[491];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]))[28] = SCM_WORD(scm__rc.d2149[487]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]))[34] = SCM_WORD(scm__rc.d2149[254]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]))[38] = SCM_WORD(scm__rc.d2149[488]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]))[47] = SCM_WORD(scm__rc.d2149[489]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[297]))[63] = SCM_WORD(scm__rc.d2149[489]);
  scm__rc.d2149[492] = Scm_MakeIdentifier(scm__rc.d2149[470], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#read-string */
  scm__rc.d2149[493] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[16])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[16]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[16]))->debugInfo = scm__rc.d2149[493];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[370]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[370]))[6] = SCM_WORD(scm__rc.d2149[470]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[370]))[13] = SCM_WORD(scm__rc.d2149[492]);
  scm__rc.d2149[494] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[168])),TRUE); /* write-string */
  scm__rc.d2149[495] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[169])),TRUE); /* current-output-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[603]), scm__rc.d2149[495]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[605]), scm__rc.d2149[48]);
  scm__rc.d2149[496] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[170])),TRUE); /* start */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[606]), scm__rc.d2149[496]);
  scm__rc.d2149[497] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[171])),TRUE); /* end */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[608]), scm__rc.d2149[497]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[612]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[613]), scm__rc.d2149[130]);
  scm__rc.d2149[498] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[172])),TRUE); /* display */
  scm__rc.d2149[499] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[173])),TRUE); /* opt-substring */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[614]), scm__rc.d2149[497]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[615]), scm__rc.d2149[496]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[616]), scm__rc.d2149[130]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[617]), scm__rc.d2149[499]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[619]), scm__rc.d2149[498]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[622]), scm__rc.d2149[471]);
  scm__rc.d2149[500] = Scm_MakeIdentifier(scm__rc.d2149[499], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#opt-substring */
  scm__rc.d2149[501] = Scm_MakeIdentifier(scm__rc.d2149[498], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#display */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[625]), scm__rc.d2149[2]);
  scm__rc.d2149[502] = Scm_MakeExtendedPair(scm__rc.d2149[494], SCM_OBJ(&scm__rc.d2150[613]), SCM_OBJ(&scm__rc.d2150[626]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[627]), scm__rc.d2149[502]);
  scm__rc.d2149[503] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[17])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[17]))->name = scm__rc.d2149[494];/* write-string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[17]))->debugInfo = scm__rc.d2149[503];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]))[60] = SCM_WORD(scm__rc.d2149[487]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]))[67] = SCM_WORD(scm__rc.d2149[500]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[385]))[71] = SCM_WORD(scm__rc.d2149[501]);
  scm__rc.d2149[504] = Scm_MakeIdentifier(scm__rc.d2149[494], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#write-string */
  scm__rc.d2149[505] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[18])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[18]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[18]))->debugInfo = scm__rc.d2149[505];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[458]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[458]))[6] = SCM_WORD(scm__rc.d2149[494]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[458]))[13] = SCM_WORD(scm__rc.d2149[504]);
  scm__rc.d2149[506] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[174])),TRUE); /* consume-trailing-whitespaces */
  scm__rc.d2149[507] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[175])),TRUE); /* when */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[628]), scm__rc.d2149[442]);
  scm__rc.d2149[508] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[176])),TRUE); /* b */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[629]), scm__rc.d2149[461]);
  scm__rc.d2149[509] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[177])),TRUE); /* cond */
  scm__rc.d2149[510] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[178])),TRUE); /* memv */
  scm__rc.d2149[511] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[179])),TRUE); /* quote */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[633]), scm__rc.d2149[511]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[635]), scm__rc.d2149[508]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[636]), scm__rc.d2149[510]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[637]), scm__rc.d2149[455]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[638]), scm__rc.d2149[477]);
  scm__rc.d2149[512] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[180])),TRUE); /* eqv? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[643]), scm__rc.d2149[508]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[644]), scm__rc.d2149[512]);
  scm__rc.d2149[513] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[181])),TRUE); /* and */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[647]), scm__rc.d2149[512]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[650]), scm__rc.d2149[513]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[653]), scm__rc.d2149[507]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[657]), scm__rc.d2149[508]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[658]), scm__rc.d2149[512]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[663]), scm__rc.d2149[509]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[666]), scm__rc.d2149[508]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[667]), scm__rc.d2149[481]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[670]), scm__rc.d2149[507]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[673]), scm__rc.d2149[477]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[674]), scm__rc.d2149[476]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[677]), scm__rc.d2149[471]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[680]), scm__rc.d2149[2]);
  scm__rc.d2149[514] = Scm_MakeExtendedPair(scm__rc.d2149[506], SCM_OBJ(&scm__rc.d2150[543]), SCM_OBJ(&scm__rc.d2150[681]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[682]), scm__rc.d2149[514]);
  scm__rc.d2149[515] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[19])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[19]))->name = scm__rc.d2149[506];/* consume-trailing-whitespaces */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[19]))->debugInfo = scm__rc.d2149[515];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]))[28] = SCM_WORD(scm__rc.d2149[487]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]))[33] = SCM_WORD(scm__rc.d2149[452]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]))[40] = SCM_WORD(scm__rc.d2149[464]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]))[52] = SCM_WORD(scm__rc.d2149[458]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]))[64] = SCM_WORD(scm__rc.d2149[458]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]))[69] = SCM_WORD(scm__rc.d2149[452]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]))[76] = SCM_WORD(scm__rc.d2149[464]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]))[82] = SCM_WORD(scm__rc.d2149[458]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[473]))[92] = SCM_WORD(scm__rc.d2149[458]);
  scm__rc.d2149[516] = Scm_MakeIdentifier(scm__rc.d2149[506], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#consume-trailing-whitespaces */
  scm__rc.d2149[517] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[20])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[20]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[20]))->debugInfo = scm__rc.d2149[517];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[570]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[570]))[6] = SCM_WORD(scm__rc.d2149[506]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[570]))[13] = SCM_WORD(scm__rc.d2149[516]);
  scm__rc.d2149[518] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[182])),TRUE); /* char-word-constituent? */
  scm__rc.d2149[519] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[183])),TRUE); /* ch */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[683]), scm__rc.d2149[519]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[686]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[687]), scm__rc.d2149[518]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[688]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[689]), scm__rc.d2149[3]);
  scm__rc.d2149[520] = Scm_MakeExtendedPair(scm__rc.d2149[518], SCM_OBJ(&scm__rc.d2150[683]), SCM_OBJ(&scm__rc.d2150[691]));
  scm__rc.d2149[521] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[184])),TRUE); /* <char> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[522]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[522]))[4] = scm__rc.d2149[521];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[522]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[522]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("char-word-constituent?")), SCM_OBJ(&libiochar_word_constituentP__STUB), 0);
  libiochar_word_constituentP__STUB.common.info = scm__rc.d2149[520];
  libiochar_word_constituentP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[522]);
  scm__rc.d2149[529] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[185])),TRUE); /* read-block */
  scm__rc.d2149[530] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[186])),TRUE); /* bytes */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[692]), scm__rc.d2149[530]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[695]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[696]), scm__rc.d2149[529]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[697]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[698]), scm__rc.d2149[3]);
  scm__rc.d2149[531] = Scm_MakeExtendedPair(scm__rc.d2149[529], SCM_OBJ(&scm__rc.d2150[692]), SCM_OBJ(&scm__rc.d2150[700]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("read-block")), SCM_OBJ(&libioread_block__STUB), 0);
  libioread_block__STUB.common.info = scm__rc.d2149[531];
  libioread_block__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[228]);
  scm__rc.d2149[532] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[187])),TRUE); /* read-list */
  scm__rc.d2149[533] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[188])),TRUE); /* closer */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[701]), scm__rc.d2149[533]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[704]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[705]), scm__rc.d2149[532]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[706]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[707]), scm__rc.d2149[3]);
  scm__rc.d2149[534] = Scm_MakeExtendedPair(scm__rc.d2149[532], SCM_OBJ(&scm__rc.d2150[701]), SCM_OBJ(&scm__rc.d2150[709]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[4] = scm__rc.d2149[521];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[5] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[535]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("read-list")), SCM_OBJ(&libioread_list__STUB), 0);
  libioread_list__STUB.common.info = scm__rc.d2149[534];
  libioread_list__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[535]);
  scm__rc.d2149[543] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[189])),TRUE); /* port->byte-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[712]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[713]), scm__rc.d2149[543]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[714]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[715]), scm__rc.d2149[3]);
  scm__rc.d2149[544] = Scm_MakeExtendedPair(scm__rc.d2149[543], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[717]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("port->byte-string")), SCM_OBJ(&libioport_TObyte_string__STUB), 0);
  libioport_TObyte_string__STUB.common.info = scm__rc.d2149[544];
  libioport_TObyte_string__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[281]);
  scm__rc.d2149[545] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[190])),TRUE); /* port->string */
  scm__rc.d2149[546] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[191]))); /* :unit */
  scm__rc.d2149[547] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[192])),TRUE); /* byte */
  scm__rc.d2149[549] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[193])),TRUE); /* copy-port */
  scm__rc.d2149[548] = Scm_MakeIdentifier(scm__rc.d2149[549], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#copy-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[720]), scm__rc.d2149[2]);
  scm__rc.d2149[550] = Scm_MakeExtendedPair(scm__rc.d2149[545], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[721]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[722]), scm__rc.d2149[550]);
  scm__rc.d2149[551] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[21])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[21]))->name = scm__rc.d2149[545];/* port->string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[21]))->debugInfo = scm__rc.d2149[551];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[585]))[3] = SCM_WORD(scm__rc.d2149[254]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[585]))[7] = SCM_WORD(scm__rc.d2149[488]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[585]))[14] = SCM_WORD(scm__rc.d2149[546]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[585]))[16] = SCM_WORD(scm__rc.d2149[547]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[585]))[18] = SCM_WORD(scm__rc.d2149[548]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[585]))[21] = SCM_WORD(scm__rc.d2149[489]);
  scm__rc.d2149[552] = Scm_MakeIdentifier(scm__rc.d2149[545], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port->string */
  scm__rc.d2149[553] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[22])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[22]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[22]))->debugInfo = scm__rc.d2149[553];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[608]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[608]))[6] = SCM_WORD(scm__rc.d2149[545]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[608]))[13] = SCM_WORD(scm__rc.d2149[552]);
  scm__rc.d2149[554] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[194])),TRUE); /* port->list */
  scm__rc.d2149[556] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[195])),TRUE); /* reverse! */
  scm__rc.d2149[555] = Scm_MakeIdentifier(scm__rc.d2149[556], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#reverse! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[723]), scm__rc.d2149[554]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[726]), scm__rc.d2149[2]);
  scm__rc.d2149[557] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[723]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[727]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[728]), scm__rc.d2149[557]);
  scm__rc.d2149[558] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[23])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[23]))->debugInfo = scm__rc.d2149[558];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[623]))[14] = SCM_WORD(scm__rc.d2149[555]);
  scm__rc.d2149[559] = Scm_MakeIdentifier(scm__rc.d2149[366], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#with-port-locking */
  scm__rc.d2149[560] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[196])),TRUE); /* reader */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[729]), scm__rc.d2149[560]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[732]), scm__rc.d2149[2]);
  scm__rc.d2149[561] = Scm_MakeExtendedPair(scm__rc.d2149[554], SCM_OBJ(&scm__rc.d2150[729]), SCM_OBJ(&scm__rc.d2150[733]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[734]), scm__rc.d2149[561]);
  scm__rc.d2149[562] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[24])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[24]))->name = scm__rc.d2149[554];/* port->list */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[24]))->debugInfo = scm__rc.d2149[562];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[652]))[4] = SCM_WORD(scm__rc.d2149[559]);
  scm__rc.d2149[563] = Scm_MakeIdentifier(scm__rc.d2149[554], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port->list */
  scm__rc.d2149[564] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[25])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[25]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[25]))->debugInfo = scm__rc.d2149[564];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[658]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[658]))[6] = SCM_WORD(scm__rc.d2149[554]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[658]))[13] = SCM_WORD(scm__rc.d2149[563]);
  scm__rc.d2149[565] = Scm_MakeIdentifier(scm__rc.d2149[467], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#read-line */
  scm__rc.d2149[566] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[197])),TRUE); /* port->string-list */
  scm__rc.d2149[567] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[198])),FALSE); /* G2178 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[735]), scm__rc.d2149[567]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[736]), scm__rc.d2149[566]);
  scm__rc.d2149[568] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[199])),FALSE); /* G2177 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[737]), scm__rc.d2149[568]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[740]), scm__rc.d2149[2]);
  scm__rc.d2149[569] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[736]), SCM_OBJ(&scm__rc.d2150[737]), SCM_OBJ(&scm__rc.d2150[741]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[742]), scm__rc.d2149[569]);
  scm__rc.d2149[570] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[26])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[26]))->debugInfo = scm__rc.d2149[570];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[673]))[4] = SCM_WORD(scm__rc.d2149[565]);
  scm__rc.d2149[571] = Scm_MakeExtendedPair(scm__rc.d2149[566], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[741]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[744]), scm__rc.d2149[571]);
  scm__rc.d2149[572] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[27])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[27]))->name = scm__rc.d2149[566];/* port->string-list */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[27]))->debugInfo = scm__rc.d2149[572];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[679]))[3] = SCM_WORD(scm__rc.d2149[563]);
  scm__rc.d2149[573] = Scm_MakeIdentifier(scm__rc.d2149[566], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port->string-list */
  scm__rc.d2149[574] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[28])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[28]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[28]))->debugInfo = scm__rc.d2149[574];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[684]))[5] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[684]))[8] = SCM_WORD(scm__rc.d2149[566]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[684]))[15] = SCM_WORD(scm__rc.d2149[573]);
  scm__rc.d2149[575] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[200])),TRUE); /* port->sexp-list */
  scm__rc.d2149[576] = Scm_MakeIdentifier(scm__rc.d2149[410], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#read */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[747]), scm__rc.d2149[2]);
  scm__rc.d2149[577] = Scm_MakeExtendedPair(scm__rc.d2149[575], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[748]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[749]), scm__rc.d2149[577]);
  scm__rc.d2149[578] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[29])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[29]))->name = scm__rc.d2149[575];/* port->sexp-list */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[29]))->debugInfo = scm__rc.d2149[578];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[701]))[1] = SCM_WORD(scm__rc.d2149[576]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[701]))[4] = SCM_WORD(scm__rc.d2149[563]);
  scm__rc.d2149[579] = Scm_MakeIdentifier(scm__rc.d2149[575], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#port->sexp-list */
  scm__rc.d2149[580] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[30])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[30]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[30]))->debugInfo = scm__rc.d2149[580];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[707]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[707]))[6] = SCM_WORD(scm__rc.d2149[575]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[707]))[13] = SCM_WORD(scm__rc.d2149[579]);
  scm__rc.d2149[581] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[201])),TRUE); /* reader-lexical-mode */
  scm__rc.d2149[582] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[202])),TRUE); /* k */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[750]), scm__rc.d2149[582]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[751]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[754]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[755]), scm__rc.d2149[581]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[756]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[757]), scm__rc.d2149[3]);
  scm__rc.d2149[583] = Scm_MakeExtendedPair(scm__rc.d2149[581], SCM_OBJ(&scm__rc.d2150[751]), SCM_OBJ(&scm__rc.d2150[759]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("reader-lexical-mode")), SCM_OBJ(&libioreader_lexical_mode__STUB), 0);
  libioreader_lexical_mode__STUB.common.info = scm__rc.d2149[583];
  libioreader_lexical_mode__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[584] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[203])),TRUE); /* %port-ungotten-chars */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[762]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[763]), scm__rc.d2149[584]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[764]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[765]), scm__rc.d2149[3]);
  scm__rc.d2149[585] = Scm_MakeExtendedPair(scm__rc.d2149[584], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[767]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[586]))[3] = scm__rc.d2149[159];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[586]))[4] = scm__rc.d2149[139];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[586]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[586]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%port-ungotten-chars")), SCM_OBJ(&libio_25port_ungotten_chars__STUB), 0);
  libio_25port_ungotten_chars__STUB.common.info = scm__rc.d2149[585];
  libio_25port_ungotten_chars__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[586]);
  scm__rc.d2149[593] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[204])),TRUE); /* %port-ungotten-bytes */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[770]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[771]), scm__rc.d2149[593]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[772]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[773]), scm__rc.d2149[3]);
  scm__rc.d2149[594] = Scm_MakeExtendedPair(scm__rc.d2149[593], SCM_OBJ(&scm__rc.d2150[60]), SCM_OBJ(&scm__rc.d2150[775]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%port-ungotten-bytes")), SCM_OBJ(&libio_25port_ungotten_bytes__STUB), 0);
  libio_25port_ungotten_bytes__STUB.common.info = scm__rc.d2149[594];
  libio_25port_ungotten_bytes__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[586]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[595] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[205])),TRUE); /* define-reader-ctor */
  scm__rc.d2149[596] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[206])),TRUE); /* symbol */
  scm__rc.d2149[597] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[207])),TRUE); /* finisher */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[776]), scm__rc.d2149[597]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[777]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[778]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[779]), scm__rc.d2149[596]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[782]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[783]), scm__rc.d2149[595]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[784]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[785]), scm__rc.d2149[3]);
  scm__rc.d2149[598] = Scm_MakeExtendedPair(scm__rc.d2149[595], SCM_OBJ(&scm__rc.d2150[779]), SCM_OBJ(&scm__rc.d2150[787]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[6] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[599]))[8] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("define-reader-ctor")), SCM_OBJ(&libiodefine_reader_ctor__STUB), 0);
  libiodefine_reader_ctor__STUB.common.info = scm__rc.d2149[598];
  libiodefine_reader_ctor__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[599]);
  scm__rc.d2149[608] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[208])),TRUE); /* %get-reader-ctor */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[788]), scm__rc.d2149[596]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[791]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[792]), scm__rc.d2149[608]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[793]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[794]), scm__rc.d2149[3]);
  scm__rc.d2149[609] = Scm_MakeExtendedPair(scm__rc.d2149[608], SCM_OBJ(&scm__rc.d2150[788]), SCM_OBJ(&scm__rc.d2150[796]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[610]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[610]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[610]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[610]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("%get-reader-ctor")), SCM_OBJ(&libio_25get_reader_ctor__STUB), 0);
  libio_25get_reader_ctor__STUB.common.info = scm__rc.d2149[609];
  libio_25get_reader_ctor__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[610]);
  scm__rc.d2149[617] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[209])),TRUE); /* define-reader-directive */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[797]), scm__rc.d2149[129]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[798]), scm__rc.d2149[596]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[801]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[802]), scm__rc.d2149[617]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[803]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[804]), scm__rc.d2149[3]);
  scm__rc.d2149[618] = Scm_MakeExtendedPair(scm__rc.d2149[617], SCM_OBJ(&scm__rc.d2150[798]), SCM_OBJ(&scm__rc.d2150[806]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[619]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[619]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[619]))[5] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[619]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[619]))[7] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("define-reader-directive")), SCM_OBJ(&libiodefine_reader_directive__STUB), 0);
  libiodefine_reader_directive__STUB.common.info = scm__rc.d2149[618];
  libiodefine_reader_directive__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[619]);
  scm__rc.d2149[627] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[210])),TRUE); /* current-read-context */
  scm__rc.d2149[628] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[211])),TRUE); /* ctx */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[807]), scm__rc.d2149[628]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[808]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[811]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[812]), scm__rc.d2149[627]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[813]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[814]), scm__rc.d2149[3]);
  scm__rc.d2149[629] = Scm_MakeExtendedPair(scm__rc.d2149[627], SCM_OBJ(&scm__rc.d2150[808]), SCM_OBJ(&scm__rc.d2150[816]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("current-read-context")), SCM_OBJ(&libiocurrent_read_context__STUB), 0);
  libiocurrent_read_context__STUB.common.info = scm__rc.d2149[629];
  libiocurrent_read_context__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[36]);
  scm__rc.d2149[630] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[212])),TRUE); /* read-reference? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[819]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[820]), scm__rc.d2149[630]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[821]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[822]), scm__rc.d2149[3]);
  scm__rc.d2149[631] = Scm_MakeExtendedPair(scm__rc.d2149[630], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[824]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[632]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[632]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[632]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[632]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("read-reference?")), SCM_OBJ(&libioread_referenceP__STUB), 0);
  libioread_referenceP__STUB.common.info = scm__rc.d2149[631];
  libioread_referenceP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[632]);
  scm__rc.d2149[639] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[213])),TRUE); /* read-reference-has-value? */
  scm__rc.d2149[640] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[214])),TRUE); /* ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[825]), scm__rc.d2149[640]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[828]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[829]), scm__rc.d2149[639]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[830]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[831]), scm__rc.d2149[3]);
  scm__rc.d2149[641] = Scm_MakeExtendedPair(scm__rc.d2149[639], SCM_OBJ(&scm__rc.d2150[825]), SCM_OBJ(&scm__rc.d2150[833]));
  scm__rc.d2149[642] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[215])),TRUE); /* <read-reference> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[643]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[643]))[4] = scm__rc.d2149[642];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[643]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[643]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("read-reference-has-value?")), SCM_OBJ(&libioread_reference_has_valueP__STUB), 0);
  libioread_reference_has_valueP__STUB.common.info = scm__rc.d2149[641];
  libioread_reference_has_valueP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[643]);
  scm__rc.d2149[650] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[216])),TRUE); /* read-reference-value */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[836]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[837]), scm__rc.d2149[650]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[838]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[839]), scm__rc.d2149[3]);
  scm__rc.d2149[651] = Scm_MakeExtendedPair(scm__rc.d2149[650], SCM_OBJ(&scm__rc.d2150[825]), SCM_OBJ(&scm__rc.d2150[841]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[652]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[652]))[4] = scm__rc.d2149[642];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[652]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[652]))[6] = scm__rc.d2149[6];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("read-reference-value")), SCM_OBJ(&libioread_reference_value__STUB), 0);
  libioread_reference_value__STUB.common.info = scm__rc.d2149[651];
  libioread_reference_value__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[652]);
  scm__rc.d2149[659] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[217])),TRUE); /* read-with-shared-structure */
  scm__rc.d2149[660] = Scm_MakeIdentifier(scm__rc.d2149[659], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#read-with-shared-structure */
  scm__rc.d2149[661] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[31])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[31]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[31]))->debugInfo = scm__rc.d2149[661];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[722]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[722]))[6] = SCM_WORD(scm__rc.d2149[659]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[722]))[10] = SCM_WORD(scm__rc.d2149[576]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[722]))[13] = SCM_WORD(scm__rc.d2149[660]);
  scm__rc.d2149[662] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[218])),TRUE); /* read/ss */
  scm__rc.d2149[663] = Scm_MakeIdentifier(scm__rc.d2149[662], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#read/ss */
  scm__rc.d2149[664] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[32])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[32]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[32]))->debugInfo = scm__rc.d2149[664];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[737]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[737]))[6] = SCM_WORD(scm__rc.d2149[662]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[737]))[10] = SCM_WORD(scm__rc.d2149[576]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[737]))[13] = SCM_WORD(scm__rc.d2149[663]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())));
  scm__rc.d2149[665] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[219])),TRUE); /* write */
  scm__rc.d2149[666] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[220])),TRUE); /* port-or-control-1 */
  scm__rc.d2149[667] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[221])),TRUE); /* port-or-control-2 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[842]), scm__rc.d2149[667]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[843]), scm__rc.d2149[666]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[844]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[845]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[848]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[849]), scm__rc.d2149[665]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[850]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[851]), scm__rc.d2149[3]);
  scm__rc.d2149[668] = Scm_MakeExtendedPair(scm__rc.d2149[665], SCM_OBJ(&scm__rc.d2150[845]), SCM_OBJ(&scm__rc.d2150[853]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[669]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[669]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[669]))[5] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[669]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[669]))[7] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("write")), SCM_OBJ(&libiowrite__STUB), 0);
  libiowrite__STUB.common.info = scm__rc.d2149[668];
  libiowrite__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[669]);
  scm__rc.d2149[677] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[222])),TRUE); /* write-simple */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[854]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[857]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[858]), scm__rc.d2149[677]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[859]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[860]), scm__rc.d2149[3]);
  scm__rc.d2149[678] = Scm_MakeExtendedPair(scm__rc.d2149[677], SCM_OBJ(&scm__rc.d2150[854]), SCM_OBJ(&scm__rc.d2150[862]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("write-simple")), SCM_OBJ(&libiowrite_simple__STUB), 0);
  libiowrite_simple__STUB.common.info = scm__rc.d2149[678];
  libiowrite_simple__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[669]);
  scm__rc.d2149[679] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[223])),TRUE); /* write-shared */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[865]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[866]), scm__rc.d2149[679]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[867]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[868]), scm__rc.d2149[3]);
  scm__rc.d2149[680] = Scm_MakeExtendedPair(scm__rc.d2149[679], SCM_OBJ(&scm__rc.d2150[845]), SCM_OBJ(&scm__rc.d2150[870]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("write-shared")), SCM_OBJ(&libiowrite_shared__STUB), 0);
  libiowrite_shared__STUB.common.info = scm__rc.d2149[680];
  libiowrite_shared__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[669]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[873]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[874]), scm__rc.d2149[498]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[875]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[876]), scm__rc.d2149[3]);
  scm__rc.d2149[681] = Scm_MakeExtendedPair(scm__rc.d2149[498], SCM_OBJ(&scm__rc.d2150[845]), SCM_OBJ(&scm__rc.d2150[878]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("display")), SCM_OBJ(&libiodisplay__STUB), 0);
  libiodisplay__STUB.common.info = scm__rc.d2149[681];
  libiodisplay__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[669]);
  scm__rc.d2149[682] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[224])),TRUE); /* newline */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[881]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[882]), scm__rc.d2149[682]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[883]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[884]), scm__rc.d2149[3]);
  scm__rc.d2149[683] = Scm_MakeExtendedPair(scm__rc.d2149[682], SCM_OBJ(&scm__rc.d2150[459]), SCM_OBJ(&scm__rc.d2150[886]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[684]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[684]))[4] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[684]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[684]))[6] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("newline")), SCM_OBJ(&libionewline__STUB), 0);
  libionewline__STUB.common.info = scm__rc.d2149[683];
  libionewline__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[684]);
  scm__rc.d2149[691] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[225])),TRUE); /* fresh-line */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[889]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[890]), scm__rc.d2149[691]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[891]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[892]), scm__rc.d2149[3]);
  scm__rc.d2149[692] = Scm_MakeExtendedPair(scm__rc.d2149[691], SCM_OBJ(&scm__rc.d2150[459]), SCM_OBJ(&scm__rc.d2150[894]));
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("fresh-line")), SCM_OBJ(&libiofresh_line__STUB), 0);
  libiofresh_line__STUB.common.info = scm__rc.d2149[692];
  libiofresh_line__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[427]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[895]), scm__rc.d2149[519]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[898]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[899]), scm__rc.d2149[485]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[900]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[901]), scm__rc.d2149[3]);
  scm__rc.d2149[693] = Scm_MakeExtendedPair(scm__rc.d2149[485], SCM_OBJ(&scm__rc.d2150[895]), SCM_OBJ(&scm__rc.d2150[903]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[694]))[3] = scm__rc.d2149[4];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[694]))[4] = scm__rc.d2149[521];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[694]))[5] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[694]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[694]))[7] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_SchemeModule())), SCM_SYMBOL(SCM_INTERN("write-char")), SCM_OBJ(&libiowrite_char__STUB), SCM_BINDING_INLINABLE);
  libiowrite_char__STUB.common.info = scm__rc.d2149[693];
  libiowrite_char__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[694]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[702] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[226])),TRUE); /* write-byte */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[904]), scm__rc.d2149[547]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[907]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[908]), scm__rc.d2149[702]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[909]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[910]), scm__rc.d2149[3]);
  scm__rc.d2149[703] = Scm_MakeExtendedPair(scm__rc.d2149[702], SCM_OBJ(&scm__rc.d2150[904]), SCM_OBJ(&scm__rc.d2150[912]));
  scm__rc.d2149[704] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[227])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[705]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[705]))[4] = scm__rc.d2149[59];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[705]))[5] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[705]))[6] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[705]))[7] = scm__rc.d2149[704];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("write-byte")), SCM_OBJ(&libiowrite_byte__STUB), 0);
  libiowrite_byte__STUB.common.info = scm__rc.d2149[703];
  libiowrite_byte__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[705]);
  scm__rc.d2149[713] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[228])),TRUE); /* write-u8 */
  scm__rc.d2149[714] = Scm_MakeIdentifier(scm__rc.d2149[702], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#write-byte */
  scm__rc.d2149[715] = Scm_MakeIdentifier(scm__rc.d2149[713], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#write-u8 */
  scm__rc.d2149[716] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[33])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[33]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[33]))->debugInfo = scm__rc.d2149[716];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[752]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[752]))[6] = SCM_WORD(scm__rc.d2149[713]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[752]))[10] = SCM_WORD(scm__rc.d2149[714]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[752]))[13] = SCM_WORD(scm__rc.d2149[715]);
  scm__rc.d2149[717] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[229])),TRUE); /* write-limited */
  scm__rc.d2149[718] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[230])),TRUE); /* limit */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[913]), scm__rc.d2149[718]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[914]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[917]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[918]), scm__rc.d2149[717]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[919]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[920]), scm__rc.d2149[3]);
  scm__rc.d2149[719] = Scm_MakeExtendedPair(scm__rc.d2149[717], SCM_OBJ(&scm__rc.d2150[914]), SCM_OBJ(&scm__rc.d2150[922]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[720]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[720]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[720]))[5] = scm__rc.d2149[59];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[720]))[6] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[720]))[7] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[720]))[8] = scm__rc.d2149[704];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("write-limited")), SCM_OBJ(&libiowrite_limited__STUB), 0);
  libiowrite_limited__STUB.common.info = scm__rc.d2149[719];
  libiowrite_limited__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[720]);
  scm__rc.d2149[729] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[231])),TRUE); /* write* */
  scm__rc.d2149[730] = Scm_MakeIdentifier(scm__rc.d2149[679], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#write-shared */
  scm__rc.d2149[731] = Scm_MakeIdentifier(scm__rc.d2149[729], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#write* */
  scm__rc.d2149[732] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[34])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[34]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[34]))->debugInfo = scm__rc.d2149[732];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[767]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[767]))[6] = SCM_WORD(scm__rc.d2149[729]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[767]))[10] = SCM_WORD(scm__rc.d2149[730]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[767]))[13] = SCM_WORD(scm__rc.d2149[731]);
  scm__rc.d2149[733] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[232])),TRUE); /* flush */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[923]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[926]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[927]), scm__rc.d2149[733]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[928]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[929]), scm__rc.d2149[3]);
  scm__rc.d2149[734] = Scm_MakeExtendedPair(scm__rc.d2149[733], SCM_OBJ(&scm__rc.d2150[923]), SCM_OBJ(&scm__rc.d2150[931]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[735]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[735]))[4] = scm__rc.d2149[35];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[735]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[735]))[6] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("flush")), SCM_OBJ(&libioflush__STUB), 0);
  libioflush__STUB.common.info = scm__rc.d2149[734];
  libioflush__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[735]);
  scm__rc.d2149[742] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[233])),TRUE); /* flush-all-ports */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[932]), scm__rc.d2149[742]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[933]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[934]), scm__rc.d2149[3]);
  scm__rc.d2149[743] = Scm_MakeExtendedPair(scm__rc.d2149[742], SCM_NIL, SCM_OBJ(&scm__rc.d2150[935]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[744]))[3] = scm__rc.d2149[21];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[744]))[4] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[744]))[5] = scm__rc.d2149[82];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), SCM_SYMBOL(SCM_INTERN("flush-all-ports")), SCM_OBJ(&libioflush_all_ports__STUB), 0);
  libioflush_all_ports__STUB.common.info = scm__rc.d2149[743];
  libioflush_all_ports__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[744]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[750] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[234])),TRUE); /* write-need-recurse? */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[938]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[939]), scm__rc.d2149[750]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[940]), scm__rc.d2149[159]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[941]), scm__rc.d2149[3]);
  scm__rc.d2149[751] = Scm_MakeExtendedPair(scm__rc.d2149[750], SCM_OBJ(&scm__rc.d2150[1]), SCM_OBJ(&scm__rc.d2150[943]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[752]))[3] = scm__rc.d2149[159];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[752]))[4] = scm__rc.d2149[6];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[752]))[5] = scm__rc.d2149[7];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[752]))[6] = scm__rc.d2149[8];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("write-need-recurse?")), SCM_OBJ(&libiowrite_need_recurseP__STUB), 0);
  libiowrite_need_recurseP__STUB.common.info = scm__rc.d2149[751];
  libiowrite_need_recurseP__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[752]);
  scm__rc.d2149[759] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[235])),TRUE); /* write-walk */
  scm__rc.d2149[761] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[129])),TRUE); /* shared-table */
  scm__rc.d2149[760] = Scm_MakeIdentifier(scm__rc.d2149[761], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#shared-table */
  scm__rc.d2149[763] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[236])),TRUE); /* ~ */
  scm__rc.d2149[762] = Scm_MakeIdentifier(scm__rc.d2149[763], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#~ */
  scm__rc.d2149[765] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[237])),TRUE); /* %write-walk-rec */
  scm__rc.d2149[764] = Scm_MakeIdentifier(scm__rc.d2149[765], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%write-walk-rec */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[944]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[947]), scm__rc.d2149[2]);
  scm__rc.d2149[766] = Scm_MakeExtendedPair(scm__rc.d2149[759], SCM_OBJ(&scm__rc.d2150[944]), SCM_OBJ(&scm__rc.d2150[948]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[949]), scm__rc.d2149[766]);
  scm__rc.d2149[767] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[35])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[35]))->name = scm__rc.d2149[759];/* write-walk */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[35]))->debugInfo = scm__rc.d2149[767];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[782]))[4] = SCM_WORD(scm__rc.d2149[381]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[782]))[15] = SCM_WORD(scm__rc.d2149[760]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[782]))[17] = SCM_WORD(scm__rc.d2149[762]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[782]))[19] = SCM_WORD(scm__rc.d2149[764]);
  scm__rc.d2149[768] = Scm_MakeIdentifier(scm__rc.d2149[759], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#write-walk */
  scm__rc.d2149[769] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[36])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[36]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[36]))->debugInfo = scm__rc.d2149[769];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[804]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[804]))[6] = SCM_WORD(scm__rc.d2149[759]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[804]))[13] = SCM_WORD(scm__rc.d2149[768]);
  scm__rc.d2149[770] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[238])),FALSE); /* G2182 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[950]), scm__rc.d2149[770]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[951]), scm__rc.d2149[765]);
  scm__rc.d2149[771] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[239])),FALSE); /* G2179 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[952]), scm__rc.d2149[771]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[955]), scm__rc.d2149[2]);
  scm__rc.d2149[772] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[951]), SCM_OBJ(&scm__rc.d2150[952]), SCM_OBJ(&scm__rc.d2150[956]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[957]), scm__rc.d2149[772]);
  scm__rc.d2149[773] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[37])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[37]))->debugInfo = scm__rc.d2149[773];
  scm__rc.d2149[774] = Scm_MakeIdentifier(scm__rc.d2149[750], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#write-need-recurse? */
  scm__rc.d2149[776] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[240])),TRUE); /* hash-table-exists? */
  scm__rc.d2149[775] = Scm_MakeIdentifier(scm__rc.d2149[776], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#hash-table-exists? */
  scm__rc.d2149[778] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[241])),TRUE); /* hash-table-update! */
  scm__rc.d2149[777] = Scm_MakeIdentifier(scm__rc.d2149[778], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#hash-table-update! */
  scm__rc.d2149[780] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[242])),TRUE); /* hash-table-put! */
  scm__rc.d2149[779] = Scm_MakeIdentifier(scm__rc.d2149[780], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#hash-table-put! */
  scm__rc.d2149[782] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[243])),TRUE); /* uvector? */
  scm__rc.d2149[781] = Scm_MakeIdentifier(scm__rc.d2149[782], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#uvector? */
  scm__rc.d2149[784] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[244])),TRUE); /* box? */
  scm__rc.d2149[783] = Scm_MakeIdentifier(scm__rc.d2149[784], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#box? */
  scm__rc.d2149[786] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[245])),TRUE); /* box-arity */
  scm__rc.d2149[785] = Scm_MakeIdentifier(scm__rc.d2149[786], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#box-arity */
  scm__rc.d2149[788] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[246])),TRUE); /* unbox-value */
  scm__rc.d2149[787] = Scm_MakeIdentifier(scm__rc.d2149[788], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#unbox-value */
  scm__rc.d2149[790] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[247])),TRUE); /* <dictionary> */
  scm__rc.d2149[789] = Scm_MakeIdentifier(scm__rc.d2149[790], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#<dictionary> */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[959]), scm__rc.d2149[765]);
  scm__rc.d2149[791] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[248])),TRUE); /* v */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[960]), scm__rc.d2149[791]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[961]), scm__rc.d2149[582]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[964]), scm__rc.d2149[2]);
  scm__rc.d2149[792] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[959]), SCM_OBJ(&scm__rc.d2150[961]), SCM_OBJ(&scm__rc.d2150[965]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[966]), scm__rc.d2149[792]);
  scm__rc.d2149[793] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[38])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[38]))->debugInfo = scm__rc.d2149[793];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[821]))[6] = SCM_WORD(scm__rc.d2149[764]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[821]))[11] = SCM_WORD(scm__rc.d2149[764]);
  scm__rc.d2149[795] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[249])),TRUE); /* %dict-walk! */
  scm__rc.d2149[794] = Scm_MakeIdentifier(scm__rc.d2149[795], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%dict-walk! */
  scm__rc.d2149[797] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[250])),TRUE); /* write-object */
  scm__rc.d2149[796] = Scm_MakeIdentifier(scm__rc.d2149[797], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#write-object */
  scm__rc.d2149[798] = Scm_MakeIdentifier(scm__rc.d2149[344], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%port-writing-shared? */
  scm__rc.d2149[800] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[251])),TRUE); /* hash-table-get */
  scm__rc.d2149[799] = Scm_MakeIdentifier(scm__rc.d2149[800], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#hash-table-get */
  scm__rc.d2149[802] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[252])),TRUE); /* hash-table-delete! */
  scm__rc.d2149[801] = Scm_MakeIdentifier(scm__rc.d2149[802], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#hash-table-delete! */
  scm__rc.d2149[803] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[253])),TRUE); /* tab */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[967]), scm__rc.d2149[803]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[968]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[969]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[972]), scm__rc.d2149[2]);
  scm__rc.d2149[804] = Scm_MakeExtendedPair(scm__rc.d2149[765], SCM_OBJ(&scm__rc.d2150[969]), SCM_OBJ(&scm__rc.d2150[973]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[974]), scm__rc.d2149[804]);
  scm__rc.d2149[805] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[39])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[39]))->name = scm__rc.d2149[765];/* %write-walk-rec */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[39]))->debugInfo = scm__rc.d2149[805];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[4] = SCM_WORD(scm__rc.d2149[774]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[12] = SCM_WORD(scm__rc.d2149[775]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[19] = SCM_WORD(scm__rc.d2149[777]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[27] = SCM_WORD(scm__rc.d2149[779]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[44] = SCM_WORD(scm__rc.d2149[781]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[60] = SCM_WORD(scm__rc.d2149[764]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[68] = SCM_WORD(scm__rc.d2149[764]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[95] = SCM_WORD(scm__rc.d2149[764]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[107] = SCM_WORD(scm__rc.d2149[783]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[116] = SCM_WORD(scm__rc.d2149[785]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[131] = SCM_WORD(scm__rc.d2149[787]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[136] = SCM_WORD(scm__rc.d2149[764]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[146] = SCM_WORD(scm__rc.d2149[789]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[156] = SCM_WORD(scm__rc.d2149[794]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[164] = SCM_WORD(scm__rc.d2149[796]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[169] = SCM_WORD(scm__rc.d2149[798]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[179] = SCM_WORD(scm__rc.d2149[799]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[834]))[186] = SCM_WORD(scm__rc.d2149[801]);
  scm__rc.d2149[806] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[40])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[40]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[40]))->debugInfo = scm__rc.d2149[806];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1024]))[5] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1024]))[8] = SCM_WORD(scm__rc.d2149[765]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1024]))[15] = SCM_WORD(scm__rc.d2149[764]);
  scm__rc.d2149[807] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[254])),TRUE); /* gauche.libdict */
  scm__rc.d2149[808] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[255])),TRUE); /* dict-for-each */
  scm__rc.d2149[810] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[256])),TRUE); /* module-binding-ref */
  scm__rc.d2149[809] = Scm_MakeIdentifier(scm__rc.d2149[810], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#module-binding-ref */
  scm__rc.d2149[811] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[257])),TRUE); /* dict-transparent? */
  scm__rc.d2149[812] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[258])),TRUE); /* dict */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[975]), scm__rc.d2149[812]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[978]), scm__rc.d2149[2]);
  scm__rc.d2149[813] = Scm_MakeExtendedPair(scm__rc.d2149[795], SCM_OBJ(&scm__rc.d2150[975]), SCM_OBJ(&scm__rc.d2150[979]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[980]), scm__rc.d2149[813]);
  scm__rc.d2149[814] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[41])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[41]))->name = scm__rc.d2149[795];/* %dict-walk! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[41]))->debugInfo = scm__rc.d2149[814];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]))[8] = SCM_WORD(scm__rc.d2149[807]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]))[10] = SCM_WORD(scm__rc.d2149[808]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]))[12] = SCM_WORD(scm__rc.d2149[809]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]))[22] = SCM_WORD(scm__rc.d2149[807]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]))[24] = SCM_WORD(scm__rc.d2149[811]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1041]))[26] = SCM_WORD(scm__rc.d2149[809]);
  scm__rc.d2149[815] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[42])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[42]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[42]))->debugInfo = scm__rc.d2149[815];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1082]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1082]))[6] = SCM_WORD(scm__rc.d2149[795]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1082]))[18] = SCM_WORD(scm__rc.d2149[794]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[816] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[259])),TRUE); /* write-with-shared-structure */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[982]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[983]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[984]), scm__rc.d2149[729]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[987]), scm__rc.d2149[471]);
  scm__rc.d2149[817] = Scm_MakeIdentifier(scm__rc.d2149[729], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#write* */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[990]), scm__rc.d2149[2]);
  scm__rc.d2149[818] = Scm_MakeExtendedPair(scm__rc.d2149[816], SCM_OBJ(&scm__rc.d2150[983]), SCM_OBJ(&scm__rc.d2150[991]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[992]), scm__rc.d2149[818]);
  scm__rc.d2149[819] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[43])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[43]))->name = scm__rc.d2149[816];/* write-with-shared-structure */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[43]))->debugInfo = scm__rc.d2149[819];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1102]))[28] = SCM_WORD(scm__rc.d2149[487]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1102]))[32] = SCM_WORD(scm__rc.d2149[817]);
  scm__rc.d2149[820] = Scm_MakeIdentifier(scm__rc.d2149[816], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#write-with-shared-structure */
  scm__rc.d2149[821] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[44])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[44]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[44]))->debugInfo = scm__rc.d2149[821];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1136]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1136]))[6] = SCM_WORD(scm__rc.d2149[816]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1136]))[13] = SCM_WORD(scm__rc.d2149[820]);
  scm__rc.d2149[822] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[260])),TRUE); /* write/ss */
  scm__rc.d2149[823] = Scm_MakeIdentifier(scm__rc.d2149[816], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#write-with-shared-structure */
  scm__rc.d2149[824] = Scm_MakeIdentifier(scm__rc.d2149[822], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#write/ss */
  scm__rc.d2149[825] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[45])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[45]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[45]))->debugInfo = scm__rc.d2149[825];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1151]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1151]))[6] = SCM_WORD(scm__rc.d2149[822]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1151]))[10] = SCM_WORD(scm__rc.d2149[823]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1151]))[13] = SCM_WORD(scm__rc.d2149[824]);
  scm__rc.d2149[826] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[261])),TRUE); /* print */
  scm__rc.d2149[827] = Scm_MakeIdentifier(scm__rc.d2149[498], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#display */
  scm__rc.d2149[829] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[262])),TRUE); /* for-each */
  scm__rc.d2149[828] = Scm_MakeIdentifier(scm__rc.d2149[829], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#for-each */
  scm__rc.d2149[830] = Scm_MakeIdentifier(scm__rc.d2149[682], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#newline */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[995]), scm__rc.d2149[2]);
  scm__rc.d2149[831] = Scm_MakeExtendedPair(scm__rc.d2149[826], scm__rc.d2149[375], SCM_OBJ(&scm__rc.d2150[996]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[997]), scm__rc.d2149[831]);
  scm__rc.d2149[832] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[46])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[46]))->name = scm__rc.d2149[826];/* print */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[46]))->debugInfo = scm__rc.d2149[832];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1166]))[3] = SCM_WORD(scm__rc.d2149[827]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1166]))[6] = SCM_WORD(scm__rc.d2149[828]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1166]))[8] = SCM_WORD(scm__rc.d2149[830]);
  scm__rc.d2149[833] = Scm_MakeIdentifier(scm__rc.d2149[826], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#print */
  scm__rc.d2149[834] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[47])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[47]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[47]))->debugInfo = scm__rc.d2149[834];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1176]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1176]))[6] = SCM_WORD(scm__rc.d2149[826]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1176]))[13] = SCM_WORD(scm__rc.d2149[833]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  Scm_InitStaticClassWithMeta(&Scm_WriteControlsClass, "<write-controls>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_WriteControlsClass__SLOTS, 0);
  scm__rc.d2149[835] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[263])),TRUE); /* make-write-controls */
  scm__rc.d2149[837] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[264])),TRUE); /* undefined? */
  scm__rc.d2149[836] = Scm_MakeIdentifier(scm__rc.d2149[837], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#undefined? */
  scm__rc.d2149[839] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[265])),TRUE); /* <write-controls> */
  scm__rc.d2149[838] = Scm_MakeIdentifier(scm__rc.d2149[839], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#<write-controls> */
  scm__rc.d2149[840] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[266]))); /* :length */
  scm__rc.d2149[841] = Scm_MakeIdentifier(scm__rc.d2149[837], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#undefined? */
  scm__rc.d2149[842] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[267]))); /* :level */
  scm__rc.d2149[843] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[268]))); /* :width */
  scm__rc.d2149[844] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[269]))); /* :base */
  scm__rc.d2149[845] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[270]))); /* :radix */
  scm__rc.d2149[846] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[271]))); /* :pretty */
  scm__rc.d2149[847] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[272]))); /* :string-length */
  scm__rc.d2149[848] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[273]))); /* :indent */
  scm__rc.d2149[849] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[274]))); /* :exact-decimal */
  scm__rc.d2149[850] = Scm_MakeIdentifier(scm__rc.d2149[391], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#make */
  scm__rc.d2149[852] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[276])),TRUE); /* unwrap-syntax-1 */
  scm__rc.d2149[851] = Scm_MakeIdentifier(scm__rc.d2149[852], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#unwrap-syntax-1 */
  scm__rc.d2149[853] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[277]))); /* :print-length */
  scm__rc.d2149[854] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[278]))); /* :print-level */
  scm__rc.d2149[855] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[279]))); /* :print-width */
  scm__rc.d2149[856] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[280]))); /* :print-base */
  scm__rc.d2149[857] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[281]))); /* :print-radix */
  scm__rc.d2149[858] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[282]))); /* :print-pretty */
  scm__rc.d2149[860] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[284])),TRUE); /* errorf */
  scm__rc.d2149[859] = Scm_MakeIdentifier(scm__rc.d2149[860], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#errorf */
  scm__rc.d2149[861] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[266])),TRUE); /* length */
  scm__rc.d2149[862] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[267])),TRUE); /* level */
  scm__rc.d2149[863] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[268])),TRUE); /* width */
  scm__rc.d2149[864] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[269])),TRUE); /* base */
  scm__rc.d2149[865] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[270])),TRUE); /* radix */
  scm__rc.d2149[866] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[271])),TRUE); /* pretty */
  scm__rc.d2149[867] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[273])),TRUE); /* indent */
  scm__rc.d2149[868] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[272])),TRUE); /* string-length */
  scm__rc.d2149[869] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[274])),TRUE); /* exact-decimal */
  scm__rc.d2149[870] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[277])),TRUE); /* print-length */
  scm__rc.d2149[871] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[278])),TRUE); /* print-level */
  scm__rc.d2149[872] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[279])),TRUE); /* print-width */
  scm__rc.d2149[873] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[280])),TRUE); /* print-base */
  scm__rc.d2149[874] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[281])),TRUE); /* print-radix */
  scm__rc.d2149[875] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[282])),TRUE); /* print-pretty */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[998]), scm__rc.d2149[875]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[999]), scm__rc.d2149[874]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1000]), scm__rc.d2149[873]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1001]), scm__rc.d2149[872]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1002]), scm__rc.d2149[871]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1003]), scm__rc.d2149[870]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1004]), scm__rc.d2149[869]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1005]), scm__rc.d2149[868]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1006]), scm__rc.d2149[867]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1007]), scm__rc.d2149[866]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1008]), scm__rc.d2149[865]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1009]), scm__rc.d2149[864]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1010]), scm__rc.d2149[863]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1011]), scm__rc.d2149[862]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1012]), scm__rc.d2149[861]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1013]), scm__rc.d2149[196]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1016]), scm__rc.d2149[2]);
  scm__rc.d2149[876] = Scm_MakeExtendedPair(scm__rc.d2149[835], SCM_OBJ(&scm__rc.d2150[1013]), SCM_OBJ(&scm__rc.d2150[1017]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1018]), scm__rc.d2149[876]);
  scm__rc.d2149[877] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[48])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[48]))->name = scm__rc.d2149[835];/* make-write-controls */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[48]))->debugInfo = scm__rc.d2149[877];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[38] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[50] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[62] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[74] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[86] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[98] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[110] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[122] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[134] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[146] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[158] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[170] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[182] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[194] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[206] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[215] = SCM_WORD(scm__rc.d2149[838]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[217] = SCM_WORD(scm__rc.d2149[840]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[222] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[231] = SCM_WORD(scm__rc.d2149[842]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[236] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[245] = SCM_WORD(scm__rc.d2149[843]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[250] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[259] = SCM_WORD(scm__rc.d2149[844]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[264] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[273] = SCM_WORD(scm__rc.d2149[845]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[278] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[287] = SCM_WORD(scm__rc.d2149[846]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[292] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[301] = SCM_WORD(scm__rc.d2149[847]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[304] = SCM_WORD(scm__rc.d2149[848]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[307] = SCM_WORD(scm__rc.d2149[849]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[310] = SCM_WORD(scm__rc.d2149[850]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[320] = SCM_WORD(scm__rc.d2149[487]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[327] = SCM_WORD(scm__rc.d2149[851]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[331] = SCM_WORD(scm__rc.d2149[840]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[356] = SCM_WORD(scm__rc.d2149[842]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[381] = SCM_WORD(scm__rc.d2149[843]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[406] = SCM_WORD(scm__rc.d2149[844]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[431] = SCM_WORD(scm__rc.d2149[845]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[456] = SCM_WORD(scm__rc.d2149[846]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[481] = SCM_WORD(scm__rc.d2149[848]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[506] = SCM_WORD(scm__rc.d2149[847]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[531] = SCM_WORD(scm__rc.d2149[849]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[556] = SCM_WORD(scm__rc.d2149[853]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[581] = SCM_WORD(scm__rc.d2149[854]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[606] = SCM_WORD(scm__rc.d2149[855]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[631] = SCM_WORD(scm__rc.d2149[856]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[656] = SCM_WORD(scm__rc.d2149[857]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[681] = SCM_WORD(scm__rc.d2149[858]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1191]))[711] = SCM_WORD(scm__rc.d2149[859]);
  scm__rc.d2149[878] = Scm_MakeIdentifier(scm__rc.d2149[835], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#make-write-controls */
  scm__rc.d2149[879] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[49])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[49]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[49]))->debugInfo = scm__rc.d2149[879];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1924]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1924]))[6] = SCM_WORD(scm__rc.d2149[835]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1924]))[13] = SCM_WORD(scm__rc.d2149[878]);
  scm__rc.d2149[880] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[285])),TRUE); /* write-controls-copy */
  scm__rc.d2149[881] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[286])),TRUE); /* wc */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1019]), scm__rc.d2149[881]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1022]), scm__rc.d2149[2]);
  scm__rc.d2149[882] = Scm_MakeExtendedPair(scm__rc.d2149[880], SCM_OBJ(&scm__rc.d2150[1019]), SCM_OBJ(&scm__rc.d2150[1023]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1024]), scm__rc.d2149[882]);
  scm__rc.d2149[883] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[50])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[50]))->name = scm__rc.d2149[880];/* write-controls-copy */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[50]))->debugInfo = scm__rc.d2149[883];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[38] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[50] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[62] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[74] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[86] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[98] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[110] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[122] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[134] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[146] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[158] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[170] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[182] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[194] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[206] = SCM_WORD(scm__rc.d2149[836]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[218] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[225] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[230] = SCM_WORD(scm__rc.d2149[861]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[241] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[248] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[253] = SCM_WORD(scm__rc.d2149[862]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[264] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[271] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[276] = SCM_WORD(scm__rc.d2149[863]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[287] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[294] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[299] = SCM_WORD(scm__rc.d2149[864]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[310] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[317] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[322] = SCM_WORD(scm__rc.d2149[865]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[333] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[340] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[345] = SCM_WORD(scm__rc.d2149[866]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[356] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[361] = SCM_WORD(scm__rc.d2149[867]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[369] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[374] = SCM_WORD(scm__rc.d2149[868]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[382] = SCM_WORD(scm__rc.d2149[841]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[387] = SCM_WORD(scm__rc.d2149[869]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[395] = SCM_WORD(scm__rc.d2149[861]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[401] = SCM_WORD(scm__rc.d2149[862]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[407] = SCM_WORD(scm__rc.d2149[863]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[413] = SCM_WORD(scm__rc.d2149[864]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[419] = SCM_WORD(scm__rc.d2149[865]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[425] = SCM_WORD(scm__rc.d2149[866]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[431] = SCM_WORD(scm__rc.d2149[867]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[437] = SCM_WORD(scm__rc.d2149[868]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[443] = SCM_WORD(scm__rc.d2149[869]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[448] = SCM_WORD(scm__rc.d2149[838]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[450] = SCM_WORD(scm__rc.d2149[840]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[453] = SCM_WORD(scm__rc.d2149[842]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[456] = SCM_WORD(scm__rc.d2149[843]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[459] = SCM_WORD(scm__rc.d2149[844]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[462] = SCM_WORD(scm__rc.d2149[845]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[465] = SCM_WORD(scm__rc.d2149[846]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[468] = SCM_WORD(scm__rc.d2149[848]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[471] = SCM_WORD(scm__rc.d2149[847]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[474] = SCM_WORD(scm__rc.d2149[849]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[477] = SCM_WORD(scm__rc.d2149[850]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[511] = SCM_WORD(scm__rc.d2149[487]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[518] = SCM_WORD(scm__rc.d2149[851]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[522] = SCM_WORD(scm__rc.d2149[840]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[547] = SCM_WORD(scm__rc.d2149[842]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[572] = SCM_WORD(scm__rc.d2149[843]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[597] = SCM_WORD(scm__rc.d2149[844]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[622] = SCM_WORD(scm__rc.d2149[845]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[647] = SCM_WORD(scm__rc.d2149[846]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[672] = SCM_WORD(scm__rc.d2149[848]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[697] = SCM_WORD(scm__rc.d2149[847]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[722] = SCM_WORD(scm__rc.d2149[849]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[747] = SCM_WORD(scm__rc.d2149[853]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[772] = SCM_WORD(scm__rc.d2149[854]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[797] = SCM_WORD(scm__rc.d2149[855]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[822] = SCM_WORD(scm__rc.d2149[856]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[847] = SCM_WORD(scm__rc.d2149[857]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[872] = SCM_WORD(scm__rc.d2149[858]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[1939]))[902] = SCM_WORD(scm__rc.d2149[859]);
  scm__rc.d2149[884] = Scm_MakeIdentifier(scm__rc.d2149[880], SCM_MODULE(scm__rc.d2149[320]), SCM_NIL); /* gauche#write-controls-copy */
  scm__rc.d2149[885] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[51])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[51]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[51]))->debugInfo = scm__rc.d2149[885];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2863]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2863]))[6] = SCM_WORD(scm__rc.d2149[880]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2863]))[13] = SCM_WORD(scm__rc.d2149[884]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[886] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[287])),TRUE); /* open-input-file */
  scm__rc.d2149[887] = Scm_MakeKeyword(SCM_STRING(SCM_OBJ(&scm__sc.d2148[288]))); /* :encoding */
  scm__rc.d2149[889] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[289])),TRUE); /* default-file-encoding */
  scm__rc.d2149[888] = Scm_MakeIdentifier(scm__rc.d2149[889], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#default-file-encoding */
  scm__rc.d2149[891] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[290])),TRUE); /* get-keyword */
  scm__rc.d2149[890] = Scm_MakeIdentifier(scm__rc.d2149[891], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#get-keyword */
  scm__rc.d2149[893] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[291])),TRUE); /* gauche-character-encoding */
  scm__rc.d2149[892] = Scm_MakeIdentifier(scm__rc.d2149[893], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#gauche-character-encoding */
  scm__rc.d2149[894] = Scm_MakeIdentifier(scm__rc.d2149[194], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%open-input-file */
  scm__rc.d2149[896] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[292])),TRUE); /* delete-keyword */
  scm__rc.d2149[895] = Scm_MakeIdentifier(scm__rc.d2149[896], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#delete-keyword */
  scm__rc.d2149[897] = Scm_MakeIdentifier(scm__rc.d2149[288], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#open-coding-aware-port */
  scm__rc.d2149[899] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[293])),TRUE); /* %open-input-file/conv */
  scm__rc.d2149[898] = Scm_MakeIdentifier(scm__rc.d2149[899], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%open-input-file/conv */
  scm__rc.d2149[900] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[294])),TRUE); /* filename */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1025]), scm__rc.d2149[900]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[1025]), scm__rc.d2149[375]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1028]), scm__rc.d2149[2]);
  scm__rc.d2149[901] = Scm_MakeExtendedPair(scm__rc.d2149[886], SCM_OBJ(&scm__rc.d2150[1025]), SCM_OBJ(&scm__rc.d2150[1029]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1030]), scm__rc.d2149[901]);
  scm__rc.d2149[902] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[52])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[52]))->name = scm__rc.d2149[886];/* open-input-file */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[52]))->debugInfo = scm__rc.d2149[902];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[3] = SCM_WORD(scm__rc.d2149[887]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[8] = SCM_WORD(scm__rc.d2149[888]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[10] = SCM_WORD(scm__rc.d2149[890]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[16] = SCM_WORD(scm__rc.d2149[892]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[20] = SCM_WORD(scm__rc.d2149[894]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[25] = SCM_WORD(scm__rc.d2149[887]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[28] = SCM_WORD(scm__rc.d2149[895]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[38] = SCM_WORD(scm__rc.d2149[894]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[43] = SCM_WORD(scm__rc.d2149[887]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[46] = SCM_WORD(scm__rc.d2149[895]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[53] = SCM_WORD(scm__rc.d2149[897]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2878]))[56] = SCM_WORD(scm__rc.d2149[898]);
  scm__rc.d2149[903] = Scm_MakeIdentifier(scm__rc.d2149[886], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#open-input-file */
  scm__rc.d2149[904] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[53])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[53]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[53]))->debugInfo = scm__rc.d2149[904];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2939]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2939]))[6] = SCM_WORD(scm__rc.d2149[886]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2939]))[13] = SCM_WORD(scm__rc.d2149[903]);
  scm__rc.d2149[905] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[295])),TRUE); /* open-output-file */
  scm__rc.d2149[907] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[296])),TRUE); /* %open-output-file/conv */
  scm__rc.d2149[906] = Scm_MakeIdentifier(scm__rc.d2149[907], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%open-output-file/conv */
  scm__rc.d2149[908] = Scm_MakeIdentifier(scm__rc.d2149[216], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#%open-output-file */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1033]), scm__rc.d2149[2]);
  scm__rc.d2149[909] = Scm_MakeExtendedPair(scm__rc.d2149[905], SCM_OBJ(&scm__rc.d2150[1025]), SCM_OBJ(&scm__rc.d2150[1034]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1035]), scm__rc.d2149[909]);
  scm__rc.d2149[910] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[54])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[54]))->name = scm__rc.d2149[905];/* open-output-file */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[54]))->debugInfo = scm__rc.d2149[910];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]))[3] = SCM_WORD(scm__rc.d2149[887]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]))[7] = SCM_WORD(scm__rc.d2149[890]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]))[13] = SCM_WORD(scm__rc.d2149[906]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]))[21] = SCM_WORD(scm__rc.d2149[888]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]))[25] = SCM_WORD(scm__rc.d2149[892]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2954]))[29] = SCM_WORD(scm__rc.d2149[908]);
  scm__rc.d2149[911] = Scm_MakeIdentifier(scm__rc.d2149[905], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#open-output-file */
  scm__rc.d2149[912] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[55])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[55]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[55]))->debugInfo = scm__rc.d2149[912];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2991]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2991]))[6] = SCM_WORD(scm__rc.d2149[905]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[2991]))[13] = SCM_WORD(scm__rc.d2149[911]);
  scm__rc.d2149[913] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[297])),TRUE); /* call-with-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1036]), scm__rc.d2149[913]);
  scm__rc.d2149[914] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[56])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[56]))->debugInfo = scm__rc.d2149[914];
  scm__rc.d2149[915] = Scm_MakeIdentifier(scm__rc.d2149[186], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#close-port */
  scm__rc.d2149[916] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[57])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[57]))->debugInfo = scm__rc.d2149[916];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3010]))[2] = SCM_WORD(scm__rc.d2149[915]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1041]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1044]), scm__rc.d2149[2]);
  scm__rc.d2149[917] = Scm_MakeExtendedPair(scm__rc.d2149[913], SCM_OBJ(&scm__rc.d2150[1041]), SCM_OBJ(&scm__rc.d2150[1045]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1046]), scm__rc.d2149[917]);
  scm__rc.d2149[918] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[58])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[58]))->name = scm__rc.d2149[913];/* call-with-port */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[58]))->debugInfo = scm__rc.d2149[918];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3014]))[7] = SCM_WORD(scm__rc.d2149[372]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3014]))[11] = SCM_WORD(scm__rc.d2149[373]);
  scm__rc.d2149[919] = Scm_MakeIdentifier(scm__rc.d2149[913], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#call-with-port */
  scm__rc.d2149[920] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[59])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[59]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[59]))->debugInfo = scm__rc.d2149[920];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3027]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3027]))[6] = SCM_WORD(scm__rc.d2149[913]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3027]))[13] = SCM_WORD(scm__rc.d2149[919]);
  scm__rc.d2149[921] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[298])),TRUE); /* call-with-input-file */
  scm__rc.d2149[922] = Scm_MakeIdentifier(scm__rc.d2149[886], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#open-input-file */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1047]), scm__rc.d2149[921]);
  scm__rc.d2149[923] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[56])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[60]))->debugInfo = scm__rc.d2149[923];
  scm__rc.d2149[924] = Scm_MakeIdentifier(scm__rc.d2149[168], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#close-input-port */
  scm__rc.d2149[925] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[60])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[61]))->debugInfo = scm__rc.d2149[925];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3046]))[5] = SCM_WORD(scm__rc.d2149[924]);
  scm__rc.d2149[926] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[299])),TRUE); /* flags */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1052]), scm__rc.d2149[129]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[1052]), scm__rc.d2149[926]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1053]), scm__rc.d2149[900]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1056]), scm__rc.d2149[2]);
  scm__rc.d2149[927] = Scm_MakeExtendedPair(scm__rc.d2149[921], SCM_OBJ(&scm__rc.d2150[1053]), SCM_OBJ(&scm__rc.d2150[1057]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1058]), scm__rc.d2149[927]);
  scm__rc.d2149[928] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[61])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[62]))->name = scm__rc.d2149[921];/* call-with-input-file */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[62]))->debugInfo = scm__rc.d2149[928];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3054]))[3] = SCM_WORD(scm__rc.d2149[922]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3054]))[15] = SCM_WORD(scm__rc.d2149[372]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3054]))[19] = SCM_WORD(scm__rc.d2149[373]);
  scm__rc.d2149[929] = Scm_MakeIdentifier(scm__rc.d2149[921], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#call-with-input-file */
  scm__rc.d2149[930] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[62])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[63]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[63]))->debugInfo = scm__rc.d2149[930];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3075]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3075]))[6] = SCM_WORD(scm__rc.d2149[921]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3075]))[13] = SCM_WORD(scm__rc.d2149[929]);
  scm__rc.d2149[931] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[300])),TRUE); /* call-with-output-file */
  scm__rc.d2149[932] = Scm_MakeIdentifier(scm__rc.d2149[905], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#open-output-file */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1059]), scm__rc.d2149[931]);
  scm__rc.d2149[933] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[56])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[64]))->debugInfo = scm__rc.d2149[933];
  scm__rc.d2149[934] = Scm_MakeIdentifier(scm__rc.d2149[177], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#close-output-port */
  scm__rc.d2149[935] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[63])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[65]))->debugInfo = scm__rc.d2149[935];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3094]))[5] = SCM_WORD(scm__rc.d2149[934]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1066]), scm__rc.d2149[2]);
  scm__rc.d2149[936] = Scm_MakeExtendedPair(scm__rc.d2149[931], SCM_OBJ(&scm__rc.d2150[1053]), SCM_OBJ(&scm__rc.d2150[1067]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1068]), scm__rc.d2149[936]);
  scm__rc.d2149[937] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[64])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[66]))->name = scm__rc.d2149[931];/* call-with-output-file */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[66]))->debugInfo = scm__rc.d2149[937];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3102]))[3] = SCM_WORD(scm__rc.d2149[932]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3102]))[15] = SCM_WORD(scm__rc.d2149[372]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3102]))[19] = SCM_WORD(scm__rc.d2149[373]);
  scm__rc.d2149[938] = Scm_MakeIdentifier(scm__rc.d2149[931], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#call-with-output-file */
  scm__rc.d2149[939] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[65])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[67]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[67]))->debugInfo = scm__rc.d2149[939];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3123]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3123]))[6] = SCM_WORD(scm__rc.d2149[931]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3123]))[13] = SCM_WORD(scm__rc.d2149[938]);
  scm__rc.d2149[940] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[301])),TRUE); /* with-input-from-file */
  scm__rc.d2149[942] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[302])),TRUE); /* with-input-from-port */
  scm__rc.d2149[941] = Scm_MakeIdentifier(scm__rc.d2149[942], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#with-input-from-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1069]), scm__rc.d2149[940]);
  scm__rc.d2149[943] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[66])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[68]))->debugInfo = scm__rc.d2149[943];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3138]))[3] = SCM_WORD(scm__rc.d2149[941]);
  scm__rc.d2149[944] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[67])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[69]))->debugInfo = scm__rc.d2149[944];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3143]))[2] = SCM_WORD(scm__rc.d2149[924]);
  scm__rc.d2149[945] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[303])),TRUE); /* thunk */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1074]), scm__rc.d2149[945]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[1074]), scm__rc.d2149[926]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1075]), scm__rc.d2149[900]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1078]), scm__rc.d2149[2]);
  scm__rc.d2149[946] = Scm_MakeExtendedPair(scm__rc.d2149[940], SCM_OBJ(&scm__rc.d2150[1075]), SCM_OBJ(&scm__rc.d2150[1079]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1080]), scm__rc.d2149[946]);
  scm__rc.d2149[947] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[68])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[70]))->name = scm__rc.d2149[940];/* with-input-from-file */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[70]))->debugInfo = scm__rc.d2149[947];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3147]))[3] = SCM_WORD(scm__rc.d2149[922]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3147]))[17] = SCM_WORD(scm__rc.d2149[372]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3147]))[21] = SCM_WORD(scm__rc.d2149[373]);
  scm__rc.d2149[948] = Scm_MakeIdentifier(scm__rc.d2149[940], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#with-input-from-file */
  scm__rc.d2149[949] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[69])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[71]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[71]))->debugInfo = scm__rc.d2149[949];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3170]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3170]))[6] = SCM_WORD(scm__rc.d2149[940]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3170]))[13] = SCM_WORD(scm__rc.d2149[948]);
  scm__rc.d2149[950] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[304])),TRUE); /* with-output-to-file */
  scm__rc.d2149[952] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[305])),TRUE); /* with-output-to-port */
  scm__rc.d2149[951] = Scm_MakeIdentifier(scm__rc.d2149[952], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#with-output-to-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1081]), scm__rc.d2149[950]);
  scm__rc.d2149[953] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[70])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[72]))->debugInfo = scm__rc.d2149[953];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3185]))[3] = SCM_WORD(scm__rc.d2149[951]);
  scm__rc.d2149[954] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[71])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[73]))->debugInfo = scm__rc.d2149[954];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3190]))[2] = SCM_WORD(scm__rc.d2149[934]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1088]), scm__rc.d2149[2]);
  scm__rc.d2149[955] = Scm_MakeExtendedPair(scm__rc.d2149[950], SCM_OBJ(&scm__rc.d2150[1075]), SCM_OBJ(&scm__rc.d2150[1089]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1090]), scm__rc.d2149[955]);
  scm__rc.d2149[956] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[72])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[74]))->name = scm__rc.d2149[950];/* with-output-to-file */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[74]))->debugInfo = scm__rc.d2149[956];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3194]))[3] = SCM_WORD(scm__rc.d2149[932]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3194]))[17] = SCM_WORD(scm__rc.d2149[372]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3194]))[21] = SCM_WORD(scm__rc.d2149[373]);
  scm__rc.d2149[957] = Scm_MakeIdentifier(scm__rc.d2149[950], SCM_MODULE(Scm_SchemeModule()), SCM_NIL); /* scheme#with-output-to-file */
  scm__rc.d2149[958] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[73])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[75]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[75]))->debugInfo = scm__rc.d2149[958];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3217]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3217]))[6] = SCM_WORD(scm__rc.d2149[950]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3217]))[13] = SCM_WORD(scm__rc.d2149[957]);
  scm__rc.d2149[959] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[306])),TRUE); /* with-output-to-string */
  scm__rc.d2149[960] = Scm_MakeIdentifier(scm__rc.d2149[266], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#open-output-string */
  scm__rc.d2149[961] = Scm_MakeIdentifier(scm__rc.d2149[268], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#get-output-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1091]), scm__rc.d2149[945]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1094]), scm__rc.d2149[2]);
  scm__rc.d2149[962] = Scm_MakeExtendedPair(scm__rc.d2149[959], SCM_OBJ(&scm__rc.d2150[1091]), SCM_OBJ(&scm__rc.d2150[1095]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1096]), scm__rc.d2149[962]);
  scm__rc.d2149[963] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[74])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[76]))->name = scm__rc.d2149[959];/* with-output-to-string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[76]))->debugInfo = scm__rc.d2149[963];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3232]))[3] = SCM_WORD(scm__rc.d2149[960]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3232]))[10] = SCM_WORD(scm__rc.d2149[951]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3232]))[13] = SCM_WORD(scm__rc.d2149[961]);
  scm__rc.d2149[964] = Scm_MakeIdentifier(scm__rc.d2149[959], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-output-to-string */
  scm__rc.d2149[965] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[75])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[77]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[77]))->debugInfo = scm__rc.d2149[965];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3247]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3247]))[6] = SCM_WORD(scm__rc.d2149[959]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3247]))[13] = SCM_WORD(scm__rc.d2149[964]);
  scm__rc.d2149[966] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[307])),TRUE); /* with-input-from-string */
  scm__rc.d2149[967] = Scm_MakeIdentifier(scm__rc.d2149[255], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#open-input-string */
  scm__rc.d2149[968] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[308])),TRUE); /* str */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1097]), scm__rc.d2149[968]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1100]), scm__rc.d2149[2]);
  scm__rc.d2149[969] = Scm_MakeExtendedPair(scm__rc.d2149[966], SCM_OBJ(&scm__rc.d2150[1097]), SCM_OBJ(&scm__rc.d2150[1101]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1102]), scm__rc.d2149[969]);
  scm__rc.d2149[970] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[76])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[78]))->name = scm__rc.d2149[966];/* with-input-from-string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[78]))->debugInfo = scm__rc.d2149[970];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3262]))[4] = SCM_WORD(scm__rc.d2149[967]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3262]))[8] = SCM_WORD(scm__rc.d2149[941]);
  scm__rc.d2149[971] = Scm_MakeIdentifier(scm__rc.d2149[966], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-input-from-string */
  scm__rc.d2149[972] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[77])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[79]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[79]))->debugInfo = scm__rc.d2149[972];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3272]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3272]))[6] = SCM_WORD(scm__rc.d2149[966]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3272]))[13] = SCM_WORD(scm__rc.d2149[971]);
  scm__rc.d2149[973] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[309])),TRUE); /* call-with-output-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1105]), scm__rc.d2149[2]);
  scm__rc.d2149[974] = Scm_MakeExtendedPair(scm__rc.d2149[973], SCM_OBJ(&scm__rc.d2150[797]), SCM_OBJ(&scm__rc.d2150[1106]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1107]), scm__rc.d2149[974]);
  scm__rc.d2149[975] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[78])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[80]))->name = scm__rc.d2149[973];/* call-with-output-string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[80]))->debugInfo = scm__rc.d2149[975];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3287]))[3] = SCM_WORD(scm__rc.d2149[960]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3287]))[12] = SCM_WORD(scm__rc.d2149[961]);
  scm__rc.d2149[976] = Scm_MakeIdentifier(scm__rc.d2149[973], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#call-with-output-string */
  scm__rc.d2149[977] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[79])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[81]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[81]))->debugInfo = scm__rc.d2149[977];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3301]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3301]))[6] = SCM_WORD(scm__rc.d2149[973]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3301]))[13] = SCM_WORD(scm__rc.d2149[976]);
  scm__rc.d2149[978] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[310])),TRUE); /* call-with-input-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1108]), scm__rc.d2149[968]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1111]), scm__rc.d2149[2]);
  scm__rc.d2149[979] = Scm_MakeExtendedPair(scm__rc.d2149[978], SCM_OBJ(&scm__rc.d2150[1108]), SCM_OBJ(&scm__rc.d2150[1112]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1113]), scm__rc.d2149[979]);
  scm__rc.d2149[980] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[80])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[82]))->name = scm__rc.d2149[978];/* call-with-input-string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[82]))->debugInfo = scm__rc.d2149[980];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3316]))[4] = SCM_WORD(scm__rc.d2149[967]);
  scm__rc.d2149[981] = Scm_MakeIdentifier(scm__rc.d2149[978], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#call-with-input-string */
  scm__rc.d2149[982] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[81])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[83]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[83]))->debugInfo = scm__rc.d2149[982];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3325]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3325]))[6] = SCM_WORD(scm__rc.d2149[978]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3325]))[13] = SCM_WORD(scm__rc.d2149[981]);
  scm__rc.d2149[983] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[311])),TRUE); /* call-with-string-io */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1116]), scm__rc.d2149[2]);
  scm__rc.d2149[984] = Scm_MakeExtendedPair(scm__rc.d2149[983], SCM_OBJ(&scm__rc.d2150[1108]), SCM_OBJ(&scm__rc.d2150[1117]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1118]), scm__rc.d2149[984]);
  scm__rc.d2149[985] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[82])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[84]))->name = scm__rc.d2149[983];/* call-with-string-io */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[84]))->debugInfo = scm__rc.d2149[985];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3340]))[3] = SCM_WORD(scm__rc.d2149[960]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3340]))[8] = SCM_WORD(scm__rc.d2149[967]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3340]))[18] = SCM_WORD(scm__rc.d2149[961]);
  scm__rc.d2149[986] = Scm_MakeIdentifier(scm__rc.d2149[983], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#call-with-string-io */
  scm__rc.d2149[987] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[83])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[85]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[85]))->debugInfo = scm__rc.d2149[987];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3360]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3360]))[6] = SCM_WORD(scm__rc.d2149[983]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3360]))[13] = SCM_WORD(scm__rc.d2149[986]);
  scm__rc.d2149[988] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[312])),TRUE); /* with-string-io */
  scm__rc.d2149[989] = Scm_MakeIdentifier(scm__rc.d2149[966], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#with-input-from-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1119]), scm__rc.d2149[988]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1122]), scm__rc.d2149[2]);
  scm__rc.d2149[990] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1119]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1123]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1124]), scm__rc.d2149[990]);
  scm__rc.d2149[991] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[84])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[86]))->debugInfo = scm__rc.d2149[991];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3375]))[3] = SCM_WORD(scm__rc.d2149[989]);
  scm__rc.d2149[992] = Scm_MakeIdentifier(scm__rc.d2149[959], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#with-output-to-string */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1127]), scm__rc.d2149[2]);
  scm__rc.d2149[993] = Scm_MakeExtendedPair(scm__rc.d2149[988], SCM_OBJ(&scm__rc.d2150[1097]), SCM_OBJ(&scm__rc.d2150[1128]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1129]), scm__rc.d2149[993]);
  scm__rc.d2149[994] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[85])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[87]))->name = scm__rc.d2149[988];/* with-string-io */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[87]))->debugInfo = scm__rc.d2149[994];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3380]))[3] = SCM_WORD(scm__rc.d2149[992]);
  scm__rc.d2149[995] = Scm_MakeIdentifier(scm__rc.d2149[988], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-string-io */
  scm__rc.d2149[996] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[86])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[88]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[88]))->debugInfo = scm__rc.d2149[996];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3385]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3385]))[6] = SCM_WORD(scm__rc.d2149[988]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3385]))[13] = SCM_WORD(scm__rc.d2149[995]);
  scm__rc.d2149[997] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[313])),TRUE); /* write-to-string */
  scm__rc.d2149[998] = Scm_MakeIdentifier(scm__rc.d2149[665], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#write */
  scm__rc.d2149[999] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[314])),TRUE); /* writer */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1130]), scm__rc.d2149[999]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1132]), scm__rc.d2149[32]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1133]), scm__rc.d2149[1]);
  scm__rc.d2149[1000] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[315])),TRUE); /* cut */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1134]), scm__rc.d2149[999]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1135]), scm__rc.d2149[1000]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1137]), scm__rc.d2149[959]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1140]), scm__rc.d2149[471]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1141]), scm__rc.d2149[997]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1144]), scm__rc.d2149[2]);
  scm__rc.d2149[1001] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1141]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1145]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1146]), scm__rc.d2149[1001]);
  scm__rc.d2149[1002] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[87])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[89]))->debugInfo = scm__rc.d2149[1002];
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1149]), scm__rc.d2149[2]);
  scm__rc.d2149[1003] = Scm_MakeExtendedPair(scm__rc.d2149[997], SCM_OBJ(&scm__rc.d2150[1133]), SCM_OBJ(&scm__rc.d2150[1150]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1151]), scm__rc.d2149[1003]);
  scm__rc.d2149[1004] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[88])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[90]))->name = scm__rc.d2149[997];/* write-to-string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[90]))->debugInfo = scm__rc.d2149[1004];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]))[4] = SCM_WORD(scm__rc.d2149[998]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]))[29] = SCM_WORD(scm__rc.d2149[487]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3404]))[33] = SCM_WORD(scm__rc.d2149[992]);
  scm__rc.d2149[1005] = Scm_MakeIdentifier(scm__rc.d2149[997], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#write-to-string */
  scm__rc.d2149[1006] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[89])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[91]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[91]))->debugInfo = scm__rc.d2149[1006];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3439]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3439]))[6] = SCM_WORD(scm__rc.d2149[997]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3439]))[13] = SCM_WORD(scm__rc.d2149[1005]);
  scm__rc.d2149[1007] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[316])),TRUE); /* read-from-string */
  scm__rc.d2149[1008] = Scm_MakeIdentifier(scm__rc.d2149[499], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#opt-substring */
  scm__rc.d2149[1009] = Scm_MakeIdentifier(scm__rc.d2149[410], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#read */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1152]), scm__rc.d2149[130]);
  SCM_SET_CDR(SCM_OBJ(&scm__rc.d2150[1152]), scm__rc.d2149[375]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1155]), scm__rc.d2149[2]);
  scm__rc.d2149[1010] = Scm_MakeExtendedPair(scm__rc.d2149[1007], SCM_OBJ(&scm__rc.d2150[1152]), SCM_OBJ(&scm__rc.d2150[1156]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1157]), scm__rc.d2149[1010]);
  scm__rc.d2149[1011] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[90])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[92]))->name = scm__rc.d2149[1007];/* read-from-string */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[92]))->debugInfo = scm__rc.d2149[1011];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3454]))[9] = SCM_WORD(scm__rc.d2149[1008]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3454]))[14] = SCM_WORD(scm__rc.d2149[1009]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3454]))[16] = SCM_WORD(scm__rc.d2149[989]);
  scm__rc.d2149[1012] = Scm_MakeIdentifier(scm__rc.d2149[1007], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#read-from-string */
  scm__rc.d2149[1013] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[91])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[93]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[93]))->debugInfo = scm__rc.d2149[1013];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3472]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3472]))[6] = SCM_WORD(scm__rc.d2149[1007]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3472]))[13] = SCM_WORD(scm__rc.d2149[1012]);
  scm__rc.d2149[1014] = Scm_MakeIdentifier(scm__rc.d2149[473], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#current-input-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1158]), scm__rc.d2149[942]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1159]), scm__rc.d2149[942]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1162]), scm__rc.d2149[2]);
  scm__rc.d2149[1015] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1159]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1163]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1164]), scm__rc.d2149[1015]);
  scm__rc.d2149[1016] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[92])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[94]))->name = scm__rc.d2149[942];/* (with-input-from-port with-input-from-port) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[94]))->debugInfo = scm__rc.d2149[1016];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3487]))[5] = SCM_WORD(scm__rc.d2149[1014]);
  scm__rc.d2149[1017] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1159]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1163]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1165]), scm__rc.d2149[1017]);
  scm__rc.d2149[1018] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[93])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[95]))->name = scm__rc.d2149[942];/* (with-input-from-port with-input-from-port) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[95]))->debugInfo = scm__rc.d2149[1018];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3495]))[7] = SCM_WORD(scm__rc.d2149[1014]);
  scm__rc.d2149[1020] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[317])),TRUE); /* values */
  scm__rc.d2149[1019] = Scm_MakeIdentifier(scm__rc.d2149[1020], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#values */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1166]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1169]), scm__rc.d2149[2]);
  scm__rc.d2149[1021] = Scm_MakeExtendedPair(scm__rc.d2149[942], SCM_OBJ(&scm__rc.d2150[1166]), SCM_OBJ(&scm__rc.d2150[1170]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1171]), scm__rc.d2149[1021]);
  scm__rc.d2149[1022] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[94])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[96]))->name = scm__rc.d2149[942];/* with-input-from-port */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[96]))->debugInfo = scm__rc.d2149[1022];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3506]))[27] = SCM_WORD(scm__rc.d2149[1019]);
  scm__rc.d2149[1023] = Scm_MakeIdentifier(scm__rc.d2149[942], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-input-from-port */
  scm__rc.d2149[1024] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[95])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[97]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[97]))->debugInfo = scm__rc.d2149[1024];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3537]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3537]))[6] = SCM_WORD(scm__rc.d2149[942]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3537]))[13] = SCM_WORD(scm__rc.d2149[1023]);
  scm__rc.d2149[1025] = Scm_MakeIdentifier(scm__rc.d2149[495], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#current-output-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1172]), scm__rc.d2149[952]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1173]), scm__rc.d2149[952]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1176]), scm__rc.d2149[2]);
  scm__rc.d2149[1026] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1173]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1177]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1178]), scm__rc.d2149[1026]);
  scm__rc.d2149[1027] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[96])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[98]))->name = scm__rc.d2149[952];/* (with-output-to-port with-output-to-port) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[98]))->debugInfo = scm__rc.d2149[1027];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3552]))[5] = SCM_WORD(scm__rc.d2149[1025]);
  scm__rc.d2149[1028] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1173]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1177]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1179]), scm__rc.d2149[1028]);
  scm__rc.d2149[1029] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[97])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[99]))->name = scm__rc.d2149[952];/* (with-output-to-port with-output-to-port) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[99]))->debugInfo = scm__rc.d2149[1029];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3560]))[7] = SCM_WORD(scm__rc.d2149[1025]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1182]), scm__rc.d2149[2]);
  scm__rc.d2149[1030] = Scm_MakeExtendedPair(scm__rc.d2149[952], SCM_OBJ(&scm__rc.d2150[1166]), SCM_OBJ(&scm__rc.d2150[1183]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1184]), scm__rc.d2149[1030]);
  scm__rc.d2149[1031] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[98])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[100]))->name = scm__rc.d2149[952];/* with-output-to-port */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[100]))->debugInfo = scm__rc.d2149[1031];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3571]))[27] = SCM_WORD(scm__rc.d2149[1019]);
  scm__rc.d2149[1032] = Scm_MakeIdentifier(scm__rc.d2149[952], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-output-to-port */
  scm__rc.d2149[1033] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[99])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[101]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[101]))->debugInfo = scm__rc.d2149[1033];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3602]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3602]))[6] = SCM_WORD(scm__rc.d2149[952]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3602]))[13] = SCM_WORD(scm__rc.d2149[1032]);
  scm__rc.d2149[1034] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[318])),TRUE); /* with-error-to-port */
  scm__rc.d2149[1036] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[319])),TRUE); /* current-error-port */
  scm__rc.d2149[1035] = Scm_MakeIdentifier(scm__rc.d2149[1036], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#current-error-port */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1185]), scm__rc.d2149[1034]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1186]), scm__rc.d2149[1034]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1189]), scm__rc.d2149[2]);
  scm__rc.d2149[1037] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1186]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1190]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1191]), scm__rc.d2149[1037]);
  scm__rc.d2149[1038] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[100])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[102]))->name = scm__rc.d2149[1034];/* (with-error-to-port with-error-to-port) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[102]))->debugInfo = scm__rc.d2149[1038];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3617]))[5] = SCM_WORD(scm__rc.d2149[1035]);
  scm__rc.d2149[1039] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1186]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1190]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1192]), scm__rc.d2149[1039]);
  scm__rc.d2149[1040] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[101])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[103]))->name = scm__rc.d2149[1034];/* (with-error-to-port with-error-to-port) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[103]))->debugInfo = scm__rc.d2149[1040];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3625]))[7] = SCM_WORD(scm__rc.d2149[1035]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1195]), scm__rc.d2149[2]);
  scm__rc.d2149[1041] = Scm_MakeExtendedPair(scm__rc.d2149[1034], SCM_OBJ(&scm__rc.d2150[1166]), SCM_OBJ(&scm__rc.d2150[1196]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1197]), scm__rc.d2149[1041]);
  scm__rc.d2149[1042] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[102])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[104]))->name = scm__rc.d2149[1034];/* with-error-to-port */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[104]))->debugInfo = scm__rc.d2149[1042];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3636]))[27] = SCM_WORD(scm__rc.d2149[1019]);
  scm__rc.d2149[1043] = Scm_MakeIdentifier(scm__rc.d2149[1034], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-error-to-port */
  scm__rc.d2149[1044] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[103])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[105]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[105]))->debugInfo = scm__rc.d2149[1044];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3667]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3667]))[6] = SCM_WORD(scm__rc.d2149[1034]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3667]))[13] = SCM_WORD(scm__rc.d2149[1043]);
  scm__rc.d2149[1045] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[320])),TRUE); /* with-ports */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1198]), scm__rc.d2149[1045]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1199]), scm__rc.d2149[1045]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1202]), scm__rc.d2149[2]);
  scm__rc.d2149[1046] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1199]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1203]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1204]), scm__rc.d2149[1046]);
  scm__rc.d2149[1047] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[104])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[106]))->name = scm__rc.d2149[1045];/* (with-ports with-ports) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[106]))->debugInfo = scm__rc.d2149[1047];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]))[7] = SCM_WORD(scm__rc.d2149[1014]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]))[17] = SCM_WORD(scm__rc.d2149[1025]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3682]))[25] = SCM_WORD(scm__rc.d2149[1035]);
  scm__rc.d2149[1048] = Scm_MakeExtendedPair(SCM_OBJ(&scm__rc.d2150[1199]), SCM_NIL, SCM_OBJ(&scm__rc.d2150[1203]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1205]), scm__rc.d2149[1048]);
  scm__rc.d2149[1049] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[105])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[107]))->name = scm__rc.d2149[1045];/* (with-ports with-ports) */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[107]))->debugInfo = scm__rc.d2149[1049];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]))[7] = SCM_WORD(scm__rc.d2149[1014]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]))[18] = SCM_WORD(scm__rc.d2149[1025]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3710]))[29] = SCM_WORD(scm__rc.d2149[1035]);
  scm__rc.d2149[1050] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[321])),TRUE); /* eport */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1206]), scm__rc.d2149[1050]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1207]), scm__rc.d2149[137]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1208]), scm__rc.d2149[136]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1211]), scm__rc.d2149[2]);
  scm__rc.d2149[1051] = Scm_MakeExtendedPair(scm__rc.d2149[1045], SCM_OBJ(&scm__rc.d2150[1208]), SCM_OBJ(&scm__rc.d2150[1212]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1213]), scm__rc.d2149[1051]);
  scm__rc.d2149[1052] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[106])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[108]))->name = scm__rc.d2149[1045];/* with-ports */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[108]))->debugInfo = scm__rc.d2149[1052];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3743]))[31] = SCM_WORD(scm__rc.d2149[1019]);
  scm__rc.d2149[1053] = Scm_MakeIdentifier(scm__rc.d2149[1045], SCM_MODULE(Scm_GaucheModule()), SCM_NIL); /* gauche#with-ports */
  scm__rc.d2149[1054] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[107])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[109]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[109]))->debugInfo = scm__rc.d2149[1054];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3778]))[3] = SCM_WORD(scm__rc.d2149[316]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3778]))[6] = SCM_WORD(scm__rc.d2149[1045]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3778]))[13] = SCM_WORD(scm__rc.d2149[1053]);
  scm__rc.d2149[1055] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[322])),TRUE); /* r6rs */
  scm__rc.d2149[1057] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[324])),TRUE); /* warn */
  scm__rc.d2149[1056] = Scm_MakeIdentifier(scm__rc.d2149[1057], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#warn */
  scm__rc.d2149[1058] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[325])),TRUE); /* sym */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1214]), scm__rc.d2149[48]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1215]), scm__rc.d2149[1058]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1218]), scm__rc.d2149[2]);
  scm__rc.d2149[1059] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[326])),TRUE); /* unused-args */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1219]), scm__rc.d2149[1059]);
  scm__rc.d2149[1060] = Scm_MakeExtendedPair(SCM_FALSE, SCM_OBJ(&scm__rc.d2150[1215]), SCM_OBJ(&scm__rc.d2150[1221]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1222]), scm__rc.d2149[1060]);
  scm__rc.d2149[1061] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[108])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[110]))->debugInfo = scm__rc.d2149[1061];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3793]))[5] = SCM_WORD(scm__rc.d2149[1056]);
  scm__rc.d2149[1062] = Scm_MakeIdentifier(scm__rc.d2149[617], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#define-reader-directive */
  scm__rc.d2149[1063] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[109])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[111]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[111]))->debugInfo = scm__rc.d2149[1063];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3800]))[1] = SCM_WORD(scm__rc.d2149[1055]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3800]))[5] = SCM_WORD(scm__rc.d2149[1062]);
  scm__rc.d2149[1064] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[327])),TRUE); /* fold-case */
  scm__rc.d2149[1065] = Scm_MakeIdentifier(scm__rc.d2149[158], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#port-case-fold */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1225]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1226]), scm__rc.d2149[1058]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1227]), scm__rc.d2149[1059]);
  scm__rc.d2149[1066] = Scm_MakeExtendedPair(SCM_FALSE, SCM_OBJ(&scm__rc.d2150[1215]), SCM_OBJ(&scm__rc.d2150[1229]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1230]), scm__rc.d2149[1066]);
  scm__rc.d2149[1067] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[110])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[112]))->debugInfo = scm__rc.d2149[1067];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3807]))[6] = SCM_WORD(scm__rc.d2149[1065]);
  scm__rc.d2149[1068] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[111])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[113]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[113]))->debugInfo = scm__rc.d2149[1068];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3817]))[1] = SCM_WORD(scm__rc.d2149[1064]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3817]))[5] = SCM_WORD(scm__rc.d2149[1062]);
  scm__rc.d2149[1069] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[328])),TRUE); /* no-fold-case */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1233]), scm__rc.d2149[2]);
  scm__rc.d2149[1070] = Scm_MakeExtendedPair(SCM_FALSE, SCM_OBJ(&scm__rc.d2150[1215]), SCM_OBJ(&scm__rc.d2150[1234]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1235]), scm__rc.d2149[1070]);
  scm__rc.d2149[1071] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[112])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[114]))->debugInfo = scm__rc.d2149[1071];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3824]))[5] = SCM_WORD(scm__rc.d2149[1065]);
  scm__rc.d2149[1072] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[113])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[115]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[115]))->debugInfo = scm__rc.d2149[1072];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3833]))[1] = SCM_WORD(scm__rc.d2149[1069]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3833]))[5] = SCM_WORD(scm__rc.d2149[1062]);
  scm__rc.d2149[1073] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[329])),TRUE); /* gauche-legacy */
  scm__rc.d2149[1074] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[330])),TRUE); /* legacy */
  scm__rc.d2149[1075] = Scm_MakeIdentifier(scm__rc.d2149[91], SCM_MODULE(scm__rc.d2149[368]), SCM_NIL); /* gauche.internal#port-attribute-set! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1238]), scm__rc.d2149[2]);
  scm__rc.d2149[1076] = Scm_MakeExtendedPair(SCM_FALSE, SCM_OBJ(&scm__rc.d2150[1215]), SCM_OBJ(&scm__rc.d2150[1239]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1240]), scm__rc.d2149[1076]);
  scm__rc.d2149[1077] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[114])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[116]))->debugInfo = scm__rc.d2149[1077];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3840]))[4] = SCM_WORD(scm__rc.d2149[581]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3840]))[6] = SCM_WORD(scm__rc.d2149[1074]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3840]))[8] = SCM_WORD(scm__rc.d2149[1075]);
  scm__rc.d2149[1078] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[115])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[117]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[117]))->debugInfo = scm__rc.d2149[1078];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3850]))[1] = SCM_WORD(scm__rc.d2149[1073]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3850]))[5] = SCM_WORD(scm__rc.d2149[1062]);
  scm__rc.d2149[1079] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[331])),TRUE); /* r7rs */
  scm__rc.d2149[1080] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[332])),TRUE); /* strict-r7 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1243]), scm__rc.d2149[2]);
  scm__rc.d2149[1081] = Scm_MakeExtendedPair(SCM_FALSE, SCM_OBJ(&scm__rc.d2150[1215]), SCM_OBJ(&scm__rc.d2150[1244]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2150[1245]), scm__rc.d2149[1081]);
  scm__rc.d2149[1082] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[116])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[118]))->debugInfo = scm__rc.d2149[1082];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3857]))[4] = SCM_WORD(scm__rc.d2149[581]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3857]))[6] = SCM_WORD(scm__rc.d2149[1080]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3857]))[8] = SCM_WORD(scm__rc.d2149[1075]);
  scm__rc.d2149[1083] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2159[117])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[119]))->name = scm__rc.d2149[324];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2158[119]))->debugInfo = scm__rc.d2149[1083];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3867]))[1] = SCM_WORD(scm__rc.d2149[1079]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2157[3867]))[5] = SCM_WORD(scm__rc.d2149[1062]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[1404] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[333])),TRUE); /* l */
  scm__rc.d2149[1405] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[334])),TRUE); /* format */
  scm__rc.d2149[1406] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[335])),TRUE); /* if-let1 */
  scm__rc.d2149[1407] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[336])),TRUE); /* unwind-protect */
  scm__rc.d2149[1408] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[337])),TRUE); /* define-in-module */
  scm__rc.d2149[1409] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[338])),TRUE); /* setter */
  scm__rc.d2149[1410] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[339])),TRUE); /* set! */
  scm__rc.d2149[1411] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[340])),FALSE); /* G2167 */
  scm__rc.d2149[1412] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[341])),FALSE); /* G2168 */
  scm__rc.d2149[1413] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[342])),FALSE); /* rest2166 */
  scm__rc.d2149[1414] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[343])),FALSE); /* G2170 */
  scm__rc.d2149[1415] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[344])),FALSE); /* G2173 */
  scm__rc.d2149[1416] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[345])),FALSE); /* G2172 */
  scm__rc.d2149[1417] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[346])),FALSE); /* G2171 */
  scm__rc.d2149[1418] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[347])),FALSE); /* rest2169 */
  scm__rc.d2149[1419] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[348])),FALSE); /* G2175 */
  scm__rc.d2149[1420] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[349])),FALSE); /* G2176 */
  scm__rc.d2149[1421] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[350])),FALSE); /* rest2174 */
  scm__rc.d2149[1422] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[351])),TRUE); /* out */
  scm__rc.d2149[1423] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[352])),TRUE); /* result */
  scm__rc.d2149[1424] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[353])),TRUE); /* <> */
  scm__rc.d2149[1425] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[354])),TRUE); /* s */
  scm__rc.d2149[1426] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[355])),TRUE); /* is-a? */
  scm__rc.d2149[1427] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[356])),TRUE); /* do */
  scm__rc.d2149[1428] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[357])),FALSE); /* limit2181 */
  scm__rc.d2149[1429] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[358])),TRUE); /* dotimes */
  scm__rc.d2149[1430] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[359])),FALSE); /* limit2180 */
  scm__rc.d2149[1431] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[360])),TRUE); /* vector-length */
  scm__rc.d2149[1432] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[361])),TRUE); /* vector-ref */
  scm__rc.d2149[1433] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[362])),TRUE); /* vector? */
  scm__rc.d2149[1434] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[363])),TRUE); /* pair? */
  scm__rc.d2149[1435] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[364])),TRUE); /* string? */
  scm__rc.d2149[1436] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[365])),TRUE); /* symbol? */
  scm__rc.d2149[1437] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[366])),TRUE); /* transparent? */
  scm__rc.d2149[1438] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[367])),FALSE); /* G2184 */
  scm__rc.d2149[1439] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[368])),FALSE); /* G2185 */
  scm__rc.d2149[1440] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[369])),FALSE); /* rest2183 */
  scm__rc.d2149[1441] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[370])),FALSE); /* loop2192 */
  scm__rc.d2149[1442] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[371])),FALSE); /* args2191 */
  scm__rc.d2149[1443] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[372])),FALSE); /* G2193 */
  scm__rc.d2149[1444] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[373])),FALSE); /* G2194 */
  scm__rc.d2149[1445] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[374])),FALSE); /* G2195 */
  scm__rc.d2149[1446] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[375])),FALSE); /* G2196 */
  scm__rc.d2149[1447] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[376])),FALSE); /* G2197 */
  scm__rc.d2149[1448] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[377])),FALSE); /* G2198 */
  scm__rc.d2149[1449] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[378])),FALSE); /* G2199 */
  scm__rc.d2149[1450] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[379])),FALSE); /* G2200 */
  scm__rc.d2149[1451] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[380])),FALSE); /* G2201 */
  scm__rc.d2149[1452] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[381])),FALSE); /* G2202 */
  scm__rc.d2149[1453] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[382])),FALSE); /* G2203 */
  scm__rc.d2149[1454] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[383])),FALSE); /* G2204 */
  scm__rc.d2149[1455] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[384])),FALSE); /* G2205 */
  scm__rc.d2149[1456] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[385])),FALSE); /* G2206 */
  scm__rc.d2149[1457] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[386])),FALSE); /* G2207 */
  scm__rc.d2149[1458] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[387])),TRUE); /* tmp */
  scm__rc.d2149[1459] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[388])),TRUE); /* case */
  scm__rc.d2149[1460] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[389])),TRUE); /* arg */
  scm__rc.d2149[1461] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[390])),TRUE); /* k-alt */
  scm__rc.d2149[1462] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[391])),FALSE); /* rest2190 */
  scm__rc.d2149[1463] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[392])),FALSE); /* loop2210 */
  scm__rc.d2149[1464] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[393])),FALSE); /* args2209 */
  scm__rc.d2149[1465] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[394])),FALSE); /* G2211 */
  scm__rc.d2149[1466] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[395])),FALSE); /* G2212 */
  scm__rc.d2149[1467] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[396])),FALSE); /* G2213 */
  scm__rc.d2149[1468] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[397])),FALSE); /* G2214 */
  scm__rc.d2149[1469] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[398])),FALSE); /* G2215 */
  scm__rc.d2149[1470] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[399])),FALSE); /* G2216 */
  scm__rc.d2149[1471] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[400])),FALSE); /* G2217 */
  scm__rc.d2149[1472] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[401])),FALSE); /* G2218 */
  scm__rc.d2149[1473] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[402])),FALSE); /* G2219 */
  scm__rc.d2149[1474] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[403])),FALSE); /* G2220 */
  scm__rc.d2149[1475] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[404])),FALSE); /* G2221 */
  scm__rc.d2149[1476] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[405])),FALSE); /* G2222 */
  scm__rc.d2149[1477] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[406])),FALSE); /* G2223 */
  scm__rc.d2149[1478] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[407])),FALSE); /* G2224 */
  scm__rc.d2149[1479] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[408])),FALSE); /* G2225 */
  scm__rc.d2149[1480] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[409])),TRUE); /* slot-ref */
  scm__rc.d2149[1481] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[410])),TRUE); /* select */
  scm__rc.d2149[1482] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[411])),FALSE); /* rest2208 */
  scm__rc.d2149[1483] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[412])),TRUE); /* let-syntax */
  scm__rc.d2149[1484] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[413])),TRUE); /* syntax-rules */
  scm__rc.d2149[1485] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[414])),TRUE); /* _ */
  scm__rc.d2149[1486] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[415])),TRUE); /* and-let* */
  scm__rc.d2149[1487] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[416])),TRUE); /* e */
  scm__rc.d2149[1488] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[417])),TRUE); /* in */
  scm__rc.d2149[1489] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[418])),FALSE); /* G2227 */
  scm__rc.d2149[1490] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[419])),FALSE); /* G2228 */
  scm__rc.d2149[1491] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[420])),FALSE); /* rest2226 */
  scm__rc.d2149[1492] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[421])),TRUE); /* after */
  scm__rc.d2149[1493] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[422])),TRUE); /* dynamic-wind */
  scm__rc.d2149[1494] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[423])),TRUE); /* before */
  scm__rc.d2149[1495] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2148[424])),TRUE); /* %with-ports */
}
