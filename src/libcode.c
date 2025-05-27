/* Generated automatically from libcode.scm.  DO NOT EDIT */
#define LIBGAUCHE_BODY 
#include <gauche.h>
#include <gauche/code.h>
#include "gauche/priv/configP.h"
#include "gauche/code.h"
#include "gauche/priv/codeP.h"
#include "gauche/vminsn.h"
static ScmObj libcodevm_dump_code(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodevm_dump_code__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodevm_dump_code, NULL, NULL);

static ScmObj libcodevm_code_TOlist(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodevm_code_TOlist__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodevm_code_TOlist, NULL, NULL);

static ScmObj libcodevm_insn_build(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodevm_insn_build__STUB, 1, 0,SCM_FALSE,libcodevm_insn_build, NULL, NULL);

static ScmObj libcodevm_insn_code_TOname(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodevm_insn_code_TOname__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodevm_insn_code_TOname, NULL, NULL);

static ScmObj libcodevm_insn_name_TOcode(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodevm_insn_name_TOcode__STUB, 1, 0,SCM_FALSE,libcodevm_insn_name_TOcode, NULL, NULL);

static ScmObj libcodemake_compiled_code_builder(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodemake_compiled_code_builder__STUB, 5, 0,SCM_FALSE,libcodemake_compiled_code_builder, NULL, NULL);

static ScmObj libcodecompiled_code_emit0X(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodecompiled_code_emit0X__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodecompiled_code_emit0X, NULL, NULL);

static ScmObj libcodecompiled_code_emit_PUSHX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodecompiled_code_emit_PUSHX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodecompiled_code_emit_PUSHX, NULL, NULL);

static ScmObj libcodecompiled_code_emit_RETX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodecompiled_code_emit_RETX__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodecompiled_code_emit_RETX, NULL, NULL);

static ScmObj libcodecompiled_code_emit0oX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_emit0oX__STUB, 3, 0,SCM_FALSE,libcodecompiled_code_emit0oX, NULL, NULL);

static ScmObj libcodecompiled_code_emit0iX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_emit0iX__STUB, 3, 0,SCM_FALSE,libcodecompiled_code_emit0iX, NULL, NULL);

static ScmObj libcodecompiled_code_emit0oiX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_emit0oiX__STUB, 4, 0,SCM_FALSE,libcodecompiled_code_emit0oiX, NULL, NULL);

static ScmObj libcodecompiled_code_emit1X(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodecompiled_code_emit1X__STUB, 3, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodecompiled_code_emit1X, NULL, NULL);

static ScmObj libcodecompiled_code_emit1oX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_emit1oX__STUB, 4, 0,SCM_FALSE,libcodecompiled_code_emit1oX, NULL, NULL);

static ScmObj libcodecompiled_code_emit1iX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_emit1iX__STUB, 4, 0,SCM_FALSE,libcodecompiled_code_emit1iX, NULL, NULL);

static ScmObj libcodecompiled_code_emit1oiX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_emit1oiX__STUB, 5, 0,SCM_FALSE,libcodecompiled_code_emit1oiX, NULL, NULL);

static ScmObj libcodecompiled_code_emit2X(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodecompiled_code_emit2X__STUB, 4, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodecompiled_code_emit2X, NULL, NULL);

static ScmObj libcodecompiled_code_emit2oX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_emit2oX__STUB, 5, 0,SCM_FALSE,libcodecompiled_code_emit2oX, NULL, NULL);

static ScmObj libcodecompiled_code_emit2iX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_emit2iX__STUB, 5, 0,SCM_FALSE,libcodecompiled_code_emit2iX, NULL, NULL);

static ScmObj libcodecompiled_code_emit2oiX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_emit2oiX__STUB, 6, 0,SCM_FALSE,libcodecompiled_code_emit2oiX, NULL, NULL);

static ScmObj libcodecompiled_code_new_label(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodecompiled_code_new_label__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodecompiled_code_new_label, NULL, NULL);

static ScmObj libcodecompiled_code_set_labelX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_set_labelX__STUB, 2, 0,SCM_FALSE,libcodecompiled_code_set_labelX, NULL, NULL);

static ScmObj libcodecompiled_code_finish_builder(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodecompiled_code_finish_builder__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodecompiled_code_finish_builder, NULL, NULL);

static ScmObj libcodecompiled_code_copyX(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodecompiled_code_copyX__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodecompiled_code_copyX, NULL, NULL);

static ScmObj libcodecompiled_code_push_infoX(ScmObj*, int, void*);
static SCM_DEFINE_SUBR(libcodecompiled_code_push_infoX__STUB, 2, 0,SCM_FALSE,libcodecompiled_code_push_infoX, NULL, NULL);

static unsigned char uvector__00001[] = {
 0u, 3u, 138u, 134u, 4u, 128u, 8u, 226u, 65u, 129u, 198u, 1u, 36u,
113u, 16u, 192u, 144u, 9u, 28u, 60u, 48u, 50u, 192u, 33u, 48u, 70u,
128u, 9u, 28u, 56u, 48u, 36u, 2u, 71u, 13u, 12u, 12u, 128u, 64u, 34u,
2u, 128u, 3u, 12u, 6u, 91u, 137u, 33u, 48u, 161u, 36u, 112u, 176u,
192u, 152u, 155u, 17u, 193u, 195u, 2u, 64u, 4u, 112u, 80u, 192u, 152u,
155u, 17u, 192u, 195u, 2u, 64u, 4u, 112u, 16u, 193u, 2u, 64u, 4u,
142u, 0u, 24u, 18u, 0u, 33u, 136u, 48u, 49u, 136u, 0u, 135u, 0u, 153u,
43u, 134u, 71u, 16u, 32u, 8u, 0u, 145u, 2u, 192u, 33u, 49u, 54u, 9u,
130u, 52u, 0u, 73u, 36u, 128u,};
static unsigned char uvector__00002[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 3u, 64u, 4u, 56u, 8u, 18u, 0u, 33u, 145u,
196u, 8u, 2u, 0u, 36u, 64u, 176u, 8u, 128u, 160u, 0u, 195u, 1u, 150u,
226u, 28u, 96u, 19u, 0u, 18u, 73u, 28u, 36u, 48u, 49u, 132u, 192u,
197u, 48u, 62u, 35u, 131u, 134u, 4u, 192u, 112u, 142u, 4u, 24u, 19u,
1u, 194u, 56u, 0u, 96u, 76u, 7u, 9u, 0u,};
static unsigned char uvector__00003[] = {
 0u, 3u, 140u, 6u, 0u, 255u, 3u, 192u, 196u, 65u, 16u, 72u, 97u, 96u,
36u, 145u, 197u, 131u, 2u, 96u, 130u, 71u, 19u, 12u, 9u, 4u, 145u,
196u, 67u, 2u, 96u, 130u, 71u, 15u, 12u, 9u, 4u, 145u, 195u, 131u, 3u,
32u, 16u, 72u, 130u, 4u, 21u, 5u, 134u, 24u, 48u, 144u, 194u, 196u,
73u, 33u, 194u, 9u, 15u, 65u, 48u, 28u, 36u, 145u, 195u, 3u, 2u, 98u,
176u, 71u, 7u, 12u, 9u, 139u, 41u, 28u, 16u, 48u, 36u, 22u, 71u, 2u,
12u, 9u, 139u, 41u, 28u, 0u, 48u, 38u, 43u, 4u, 49u, 6u, 6u, 49u, 5u,
145u, 6u, 193u, 33u, 49u, 88u, 9u, 128u, 225u, 36u, 128u,};
static unsigned char uvector__00004[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 7u, 65u, 100u, 65u, 176u, 72u, 130u, 4u,
21u, 5u, 134u, 24u, 48u, 144u, 194u, 196u, 72u, 15u, 240u, 60u, 12u,
68u, 17u, 4u, 134u, 22u, 2u, 73u, 36u, 112u, 144u, 192u, 198u, 19u,
3u, 20u, 192u, 248u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u,
76u, 7u, 8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static unsigned char uvector__00005[] = {
 0u, 3u, 136u, 134u, 8u, 60u, 53u, 66u, 4u, 48u, 194u, 36u, 145u,
195u, 67u, 2u, 96u, 82u, 71u, 12u, 12u, 16u, 144u, 16u, 128u, 130u,
160u, 176u, 195u, 9u, 146u, 64u, 129u, 33u, 2u, 72u, 76u, 7u, 9u, 28u,
44u, 48u, 38u, 31u, 4u, 112u, 160u, 192u, 144u, 129u, 28u, 36u, 48u,
38u, 20u, 100u, 112u, 128u, 192u, 144u, 129u, 28u, 28u, 48u, 38u, 20u,
100u, 112u, 80u, 192u, 152u, 96u, 17u, 192u, 131u, 2u, 65u, 100u,
112u, 0u, 192u, 152u, 96u, 16u, 196u, 24u, 24u, 196u, 22u, 66u, 97u,
70u, 73u, 0u,};
static unsigned char uvector__00006[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 10u, 65u, 100u, 66u, 64u, 66u, 2u, 10u,
130u, 195u, 12u, 38u, 73u, 2u, 4u, 132u, 9u, 34u, 15u, 13u, 80u, 129u,
12u, 48u, 137u, 36u, 145u, 194u, 67u, 3u, 24u, 76u, 12u, 83u, 3u,
226u, 56u, 56u, 96u, 76u, 7u, 8u, 224u, 65u, 129u, 48u, 28u, 35u,
128u, 6u, 4u, 192u, 112u, 144u,};
static ScmObj libcode_25decode_packed_debug_info(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcode_25decode_packed_debug_info__STUB, 2, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcode_25decode_packed_debug_info, NULL, NULL);

static unsigned char uvector__00007[] = {
 0u, 3u, 171u, 134u, 8u, 86u, 11u, 12u, 48u, 153u, 15u, 161u, 204u,
66u, 208u, 88u, 97u, 133u, 201u, 12u, 48u, 193u, 36u, 145u, 213u,
131u, 2u, 96u, 150u, 71u, 85u, 12u, 9u, 130u, 177u, 29u, 64u, 48u,
38u, 12u, 36u, 116u, 240u, 192u, 144u, 89u, 29u, 56u, 48u, 36u, 22u,
71u, 75u, 12u, 16u, 172u, 22u, 24u, 97u, 50u, 28u, 225u, 1u, 12u,
136u, 68u, 67u, 66u, 17u, 134u, 225u, 18u, 73u, 36u, 142u, 148u, 24u,
19u, 29u, 162u, 58u, 48u, 96u, 115u, 15u, 65u, 50u, 9u, 48u, 225u,
35u, 162u, 6u, 4u, 200u, 88u, 142u, 134u, 24u, 18u, 17u, 35u, 159u,
134u, 6u, 88u, 116u, 38u, 82u, 16u, 225u, 35u, 159u, 6u, 4u, 132u,
72u, 231u, 161u, 129u, 33u, 2u, 57u, 224u, 96u, 72u, 44u, 142u, 116u,
24u, 33u, 232u, 44u, 67u, 65u, 136u, 48u, 67u, 112u, 1u, 36u, 145u,
206u, 67u, 2u, 104u, 66u, 113u, 28u, 224u, 48u, 38u, 132u, 44u, 145u,
205u, 195u, 2u, 64u, 4u, 115u, 32u, 192u, 144u, 89u, 28u, 192u, 48u,
38u, 132u, 5u, 17u, 202u, 195u, 4u, 63u, 8u, 6u, 22u, 3u, 16u, 18u,
57u, 80u, 96u, 72u, 128u, 142u, 78u, 24u, 18u, 16u, 35u, 146u, 134u,
4u, 208u, 172u, 210u, 57u, 24u, 96u, 101u, 136u, 2u, 104u, 86u, 105u,
35u, 145u, 6u, 4u, 136u, 8u, 228u, 33u, 129u, 144u, 8u, 128u, 64u,
80u, 8u, 97u, 96u, 45u, 196u, 144u, 154u, 25u, 16u, 72u, 227u, 225u,
129u, 52u, 54u, 100u, 142u, 54u, 24u, 18u, 1u, 35u, 140u, 134u, 4u,
208u, 217u, 146u, 56u, 192u, 96u, 100u, 2u, 1u, 1u, 254u, 7u, 129u,
140u, 0u, 72u, 132u, 4u, 66u, 33u, 104u, 44u, 48u, 194u, 228u, 136u,
10u, 0u, 12u, 49u, 17u, 12u, 48u, 193u, 36u, 145u, 2u, 196u, 1u, 52u,
54u, 100u, 38u, 133u, 102u, 144u, 154u, 16u, 20u, 19u, 26u, 178u, 71u,
22u, 12u, 9u, 162u, 11u, 164u, 113u, 64u, 192u, 154u, 33u, 184u, 71u,
15u, 12u, 9u, 0u, 17u, 195u, 67u, 2u, 104u, 134u, 225u, 28u, 44u, 48u,
38u, 136u, 69u, 17u, 194u, 131u, 2u, 65u, 100u, 112u, 128u, 192u,
154u, 32u, 186u, 71u, 6u, 12u, 9u, 161u, 251u, 100u, 112u, 80u, 192u,
144u, 1u, 28u, 12u, 48u, 38u, 135u, 237u, 145u, 192u, 67u, 3u, 44u,
0u, 19u, 67u, 240u, 2u, 96u, 56u, 72u, 224u, 1u, 129u, 32u, 2u, 24u,
131u, 3u, 24u, 130u, 224u, 8u, 68u, 132u, 209u, 105u, 82u, 72u,};
static unsigned char uvector__00008[] = {
 0u, 3u, 134u, 6u, 6u, 97u, 17u, 193u, 112u, 4u, 34u, 67u, 44u, 0u,
25u, 0u, 128u, 64u, 127u, 129u, 224u, 99u, 0u, 18u, 33u, 1u, 16u,
136u, 90u, 11u, 12u, 48u, 185u, 34u, 2u, 128u, 3u, 12u, 68u, 67u, 12u,
48u, 73u, 36u, 64u, 177u, 0u, 128u, 160u, 16u, 194u, 192u, 91u, 136u,
135u, 225u, 0u, 194u, 192u, 98u, 2u, 68u, 61u, 5u, 136u, 104u, 49u,
6u, 8u, 110u, 0u, 36u, 145u, 10u, 193u, 97u, 134u, 19u, 33u, 206u,
16u, 16u, 200u, 132u, 68u, 52u, 33u, 24u, 110u, 17u, 36u, 146u, 72u,
133u, 96u, 176u, 195u, 9u, 144u, 250u, 28u, 196u, 45u, 5u, 134u, 24u,
92u, 144u, 195u, 12u, 18u, 73u, 36u, 112u, 144u, 192u, 198u, 19u, 3u,
20u, 193u, 72u, 142u, 14u, 24u, 19u, 1u, 194u, 56u, 16u, 96u, 76u, 7u,
8u, 224u, 1u, 129u, 48u, 28u, 36u,};
static ScmObj get_packed_vector(ScmPackedDebugInfo* s);
static ScmObj libcodedecode_packed_debug_info(ScmObj*, int, void*);
static SCM_DEFINE_SUBRX(libcodedecode_packed_debug_info__STUB, 1, 0,0, SCM_FALSE,SCM_SUBR_IMMEDIATE_ARG, libcodedecode_packed_debug_info, NULL, NULL);

static ScmObj SCM_debug_info_const_vector();
#if defined(__CYGWIN__) || defined(GAUCHE_WINDOWS)
#define SCM_CGEN_CONST /*empty*/
#else
#define SCM_CGEN_CONST const
#endif
static SCM_CGEN_CONST struct scm__scRec {
  ScmString d2150[99];
} scm__sc SCM_UNUSED = {
  {   /* ScmString d2150 */
      SCM_STRING_CONST_INITIALIZER("gauche.vm.code", 14, 14),
      SCM_STRING_CONST_INITIALIZER("vm-dump-code", 12, 12),
      SCM_STRING_CONST_INITIALIZER("vm-code->list", 13, 13),
      SCM_STRING_CONST_INITIALIZER("vm-insn-build", 13, 13),
      SCM_STRING_CONST_INITIALIZER("vm-insn-code->name", 18, 18),
      SCM_STRING_CONST_INITIALIZER("vm-insn-name->code", 18, 18),
      SCM_STRING_CONST_INITIALIZER("make-compiled-code-builder", 26, 26),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit0!", 20, 20),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit0o!", 21, 21),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit0i!", 21, 21),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit0oi!", 22, 22),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit-PUSH!", 24, 24),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit-RET!", 23, 23),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit1!", 20, 20),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit1o!", 21, 21),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit1i!", 21, 21),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit1oi!", 22, 22),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit2!", 20, 20),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit2o!", 21, 21),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit2i!", 21, 21),
      SCM_STRING_CONST_INITIALIZER("compiled-code-emit2oi!", 22, 22),
      SCM_STRING_CONST_INITIALIZER("compiled-code-new-label", 23, 23),
      SCM_STRING_CONST_INITIALIZER("compiled-code-set-label!", 24, 24),
      SCM_STRING_CONST_INITIALIZER("compiled-code-push-info!", 24, 24),
      SCM_STRING_CONST_INITIALIZER("compiled-code-finish-builder", 28, 28),
      SCM_STRING_CONST_INITIALIZER("compiled-code-copy!", 19, 19),
      SCM_STRING_CONST_INITIALIZER("code", 4, 4),
      SCM_STRING_CONST_INITIALIZER("source-info", 11, 11),
      SCM_STRING_CONST_INITIALIZER("libcode.scm", 11, 11),
      SCM_STRING_CONST_INITIALIZER("bind-info", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<compiled-code>", 15, 15),
      SCM_STRING_CONST_INITIALIZER("->", 2, 2),
      SCM_STRING_CONST_INITIALIZER("<void>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<top>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("insn", 4, 4),
      SCM_STRING_CONST_INITIALIZER("<ulong>", 7, 7),
      SCM_STRING_CONST_INITIALIZER("opcode", 6, 6),
      SCM_STRING_CONST_INITIALIZER("<uint>", 6, 6),
      SCM_STRING_CONST_INITIALIZER("insn-name", 9, 9),
      SCM_STRING_CONST_INITIALIZER("<int>", 5, 5),
      SCM_STRING_CONST_INITIALIZER("reqargs", 7, 7),
      SCM_STRING_CONST_INITIALIZER("optargs", 7, 7),
      SCM_STRING_CONST_INITIALIZER("name", 4, 4),
      SCM_STRING_CONST_INITIALIZER("parent", 6, 6),
      SCM_STRING_CONST_INITIALIZER("intform", 7, 7),
      SCM_STRING_CONST_INITIALIZER("<uint16>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("cc", 2, 2),
      SCM_STRING_CONST_INITIALIZER("operand", 7, 7),
      SCM_STRING_CONST_INITIALIZER("info", 4, 4),
      SCM_STRING_CONST_INITIALIZER("arg0", 4, 4),
      SCM_STRING_CONST_INITIALIZER("arg1", 4, 4),
      SCM_STRING_CONST_INITIALIZER("label", 5, 5),
      SCM_STRING_CONST_INITIALIZER("maxstack", 8, 8),
      SCM_STRING_CONST_INITIALIZER("dest", 4, 4),
      SCM_STRING_CONST_INITIALIZER("src", 3, 3),
      SCM_STRING_CONST_INITIALIZER("%expression-name-mark-key", 25, 25),
      SCM_STRING_CONST_INITIALIZER("%original-source", 16, 16),
      SCM_STRING_CONST_INITIALIZER("original", 8, 8),
      SCM_STRING_CONST_INITIALIZER("pair-attribute-get", 18, 18),
      SCM_STRING_CONST_INITIALIZER("%toplevel", 9, 9),
      SCM_STRING_CONST_INITIALIZER("compiled-code-definition", 24, 24),
      SCM_STRING_CONST_INITIALIZER("debug-info", 10, 10),
      SCM_STRING_CONST_INITIALIZER("~", 1, 1),
      SCM_STRING_CONST_INITIALIZER("gauche.internal", 15, 15),
      SCM_STRING_CONST_INITIALIZER("definition", 10, 10),
      SCM_STRING_CONST_INITIALIZER("assq-ref", 8, 8),
      SCM_STRING_CONST_INITIALIZER("compiled-code-type", 18, 18),
      SCM_STRING_CONST_INITIALIZER("signature-info", 14, 14),
      SCM_STRING_CONST_INITIALIZER("type", 4, 4),
      SCM_STRING_CONST_INITIALIZER("alist-ref", 9, 9),
      SCM_STRING_CONST_INITIALIZER("%decode-packed-debug-info", 25, 25),
      SCM_STRING_CONST_INITIALIZER("code-vector", 11, 11),
      SCM_STRING_CONST_INITIALIZER("const-vector", 12, 12),
      SCM_STRING_CONST_INITIALIZER("<u8vector>", 10, 10),
      SCM_STRING_CONST_INITIALIZER("<vector>", 8, 8),
      SCM_STRING_CONST_INITIALIZER("compiled-code-attach-source-info!", 33, 33),
      SCM_STRING_CONST_INITIALIZER("full-name", 9, 9),
      SCM_STRING_CONST_INITIALIZER("arg-info", 8, 8),
      SCM_STRING_CONST_INITIALIZER("_", 1, 1),
      SCM_STRING_CONST_INITIALIZER("extended-cons", 13, 13),
      SCM_STRING_CONST_INITIALIZER("pair-attribute-set!", 19, 19),
      SCM_STRING_CONST_INITIALIZER("decode-packed-debug-info", 24, 24),
      SCM_STRING_CONST_INITIALIZER("p", 1, 1),
      SCM_STRING_CONST_INITIALIZER("<packed-debug-info>", 19, 19),
      SCM_STRING_CONST_INITIALIZER("orig", 4, 4),
      SCM_STRING_CONST_INITIALIZER("pair\077", 5, 5),
      SCM_STRING_CONST_INITIALIZER("if-let1", 7, 7),
      SCM_STRING_CONST_INITIALIZER("def", 3, 3),
      SCM_STRING_CONST_INITIALIZER("and-let1", 8, 8),
      SCM_STRING_CONST_INITIALIZER("sig", 3, 3),
      SCM_STRING_CONST_INITIALIZER("and-let*", 8, 8),
      SCM_STRING_CONST_INITIALIZER("slot-set!", 9, 9),
      SCM_STRING_CONST_INITIALIZER("slot-ref", 8, 8),
      SCM_STRING_CONST_INITIALIZER("cond-list", 9, 9),
      SCM_STRING_CONST_INITIALIZER("quasiquote", 10, 10),
      SCM_STRING_CONST_INITIALIZER("unquote", 7, 7),
      SCM_STRING_CONST_INITIALIZER("r", 1, 1),
      SCM_STRING_CONST_INITIALIZER("tmp", 3, 3),
      SCM_STRING_CONST_INITIALIZER("si", 2, 2),
  },
};
static struct scm__rcRec {
  ScmUVector d2154[8];
  ScmCompiledCode d2153[8];
  ScmWord d2152[220];
  ScmPair d2151[322] SCM_ALIGN_PAIR;
  ScmObj d2149[360];
} scm__rc SCM_UNUSED = {
  {   /* ScmUVector d2154 */
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 113, uvector__00001, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 64, uvector__00002, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 108, uvector__00003, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 62, uvector__00004, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 94, uvector__00005, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 60, uvector__00006, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 391, uvector__00007, 0, NULL),
      SCM_UVECTOR_INITIALIZER(Scm_U8VectorClass, 140, uvector__00008, 0, NULL),
  },
  {   /* ScmCompiledCode d2153 */
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %original-source */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[0])), 23,
            24, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[284]),
            SCM_OBJ(&scm__rc.d2153[1]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[23])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* compiled-code-definition */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[38])), 27,
            20, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[289]),
            SCM_OBJ(&scm__rc.d2153[3]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[65])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* compiled-code-type */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[80])), 20,
            12, 1, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[294]),
            SCM_OBJ(&scm__rc.d2153[5]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[100])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* compiled-code-attach-source-info! */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[115])), 90,
            22, 3, 0, SCM_FALSE, SCM_NIL, SCM_OBJ(&scm__rc.d2151[312]),
            SCM_OBJ(&scm__rc.d2153[7]), SCM_FALSE),
        SCM_COMPILED_CODE_CONST_INITIALIZER(  /* %toplevel */
            (ScmWord*)(SCM_OBJ(&scm__rc.d2152[205])), 15,
            10, 0, 0, SCM_FALSE, SCM_NIL, SCM_FALSE,
            SCM_FALSE, SCM_FALSE),
  },
  {   /* ScmWord d2152 */
    /* %original-source */
    0x0000003d    /*   0 (LREF0) */,
    0x00000098    /*   1 (PAIRP) */,
    0x00000030    /*   2 (RF) */,
    0x00000048    /*   3 (LREF0-PUSH) */,
    0x00001017    /*   4 (LOCAL-ENV 1) */,
    0x0000300e    /*   5 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[0]) + 13),
    0x00000048    /*   7 (LREF0-PUSH) */,
    0x00000006    /*   8 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* original */,
    0x00000009    /*  10 (CONSTF-PUSH) */,
    0x0000305f    /*  11 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* pair-attribute-get */,
    0x00001018    /*  13 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  14 (LREF0) */,
    0x0000001e    /*  15 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[0]) + 21),
    0x00000048    /*  17 (LREF0-PUSH) */,
    0x0000201b    /*  18 (LOCAL-ENV-JUMP 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[0]) + 5),
    0x00000014    /*  20 (RET) */,
    0x00000057    /*  21 (LREF10-RET) */,
    0x00000014    /*  22 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[23]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* %original-source */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[23]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[0])) /* #<compiled-code %original-source@0x7dab8b5cb540> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %original-source */,
    0x00000014    /*  14 (RET) */,
    /* compiled-code-definition */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]) + 14),
    0x0000200e    /*   2 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]) + 9),
    0x00000048    /*   4 (LREF0-PUSH) */,
    0x00000006    /*   5 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* debug-info */,
    0x0000205f    /*   7 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x0000000d    /*   9 (PUSH) */,
    0x00000006    /*  10 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* definition */,
    0x0000205f    /*  12 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* assq-ref */,
    0x00001018    /*  14 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  15 (LREF0) */,
    0x00000030    /*  16 (RF) */,
    0x0000200e    /*  17 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]) + 24),
    0x00000048    /*  19 (LREF0-PUSH) */,
    0x00000006    /*  20 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* source-info */,
    0x0000205f    /*  22 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* assq-ref */,
    0x00001063    /*  24 (PUSH-GREF-TAIL-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %original-source */,
    0x00000014    /*  26 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[65]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* compiled-code-definition */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[65]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[2])) /* #<compiled-code compiled-code-definition@0x7dab8b6fd900> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* compiled-code-definition */,
    0x00000014    /*  14 (RET) */,
    /* compiled-code-type */
    0x0000200e    /*   0 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[80]) + 7),
    0x00000048    /*   2 (LREF0-PUSH) */,
    0x00000006    /*   3 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* signature-info */,
    0x0000205f    /*   5 (GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* ~ */,
    0x00001018    /*   7 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*   8 (LREF0) */,
    0x00000030    /*   9 (RF) */,
    0x0000003d    /*  10 (LREF0) */,
    0x00000098    /*  11 (PAIRP) */,
    0x00000030    /*  12 (RF) */,
    0x00000076    /*  13 (LREF0-CDR) */,
    0x0000000d    /*  14 (PUSH) */,
    0x00000006    /*  15 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* type */,
    0x00002060    /*  17 (GREF-TAIL-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* alist-ref */,
    0x00000014    /*  19 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[100]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* compiled-code-type */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[100]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[4])) /* #<compiled-code compiled-code-type@0x7dab8b5b7e40> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* compiled-code-type */,
    0x00000014    /*  14 (RET) */,
    /* compiled-code-attach-source-info! */
    0x0000003e    /*   0 (LREF1) */,
    0x0000001e    /*   1 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 78),
    0x0000100e    /*   3 (PRE-CALL 1) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 8),
    0x00000049    /*   5 (LREF1-PUSH) */,
    0x0000105f    /*   6 (GREF-CALL 1) */,
    SCM_WORD(SCM_UNDEFINED) /* %original-source */,
    0x0000200f    /*   8 (PUSH-PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 24),
    0x0000003f    /*  10 (LREF2) */,
    0x000000e3    /*  11 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* full-name */,
    0x0000300f    /*  13 (PUSH-PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 22),
    0x00000049    /*  15 (LREF1-PUSH) */,
    0x00000006    /*  16 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* arg-info */,
    0x00000006    /*  18 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* _ */,
    0x0000305f    /*  20 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* pair-attribute-get */,
    0x00002062    /*  22 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* extended-cons */,
    0x00002018    /*  24 (PUSH-LOCAL-ENV 2) */,
    0x0000300e    /*  25 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 33),
    0x00000049    /*  27 (LREF1-PUSH) */,
    0x00000006    /*  28 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* source-info */,
    0x00000009    /*  30 (CONSTF-PUSH) */,
    0x0000305f    /*  31 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* pair-attribute-get */,
    0x00001018    /*  33 (PUSH-LOCAL-ENV 1) */,
    0x0000003d    /*  34 (LREF0) */,
    0x0000001e    /*  35 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 47),
    0x0000300e    /*  37 (PRE-CALL 3) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 47),
    0x0000004c    /*  39 (LREF10-PUSH) */,
    0x00000006    /*  40 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* source-info */,
    0x00000048    /*  42 (LREF0-PUSH) */,
    0x0000305f    /*  43 (GREF-CALL 3) */,
    SCM_WORD(SCM_UNDEFINED) /* pair-attribute-set! */,
    0x00000013    /*  45 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 47),
    0x0000001a    /*  47 (POP-LOCAL-ENV) */,
    0x0000200e    /*  48 (PRE-CALL 2) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 60),
    0x0000004e    /*  50 (LREF12-PUSH) */,
    0x00000006    /*  51 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* definition */,
    0x00000006    /*  53 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* source-info */,
    0x00000042    /*  55 (LREF11) */,
    0x00000066    /*  56 (CONS) */,
    0x00002088    /*  57 (LIST 2) */,
    0x00002062    /*  58 (PUSH-GREF-CALL 2) */,
    SCM_WORD(SCM_UNDEFINED) /* compiled-code-push-info! */,
    0x0000004e    /*  60 (LREF12-PUSH) */,
    0x00000048    /*  61 (LREF0-PUSH) */,
    0x00000041    /*  62 (LREF10) */,
    0x0000001e    /*  63 (BF) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 73),
    0x00000006    /*  65 (CONST-PUSH) */,
    SCM_WORD(SCM_UNDEFINED) /* type */,
    0x00000041    /*  67 (LREF10) */,
    0x00000067    /*  68 (CONS-PUSH) */,
    0x00000003    /*  69 (CONSTN) */,
    0x00000066    /*  70 (CONS) */,
    0x00000013    /*  71 (JUMP) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]) + 74),
    0x00000003    /*  73 (CONSTN) */,
    0x00000066    /*  74 (CONS) */,
    0x000000e4    /*  75 (SLOT-SETC) */,
    SCM_WORD(SCM_UNDEFINED) /* signature-info */,
    0x00000014    /*  77 (RET) */,
    0x0000004a    /*  78 (LREF2-PUSH) */,
    0x0000003f    /*  79 (LREF2) */,
    0x000000e3    /*  80 (SLOT-REFC) */,
    SCM_WORD(SCM_UNDEFINED) /* full-name */,
    0x0000000d    /*  82 (PUSH) */,
    0x00000001    /*  83 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* _ */,
    0x00000066    /*  85 (CONS) */,
    0x00001088    /*  86 (LIST 1) */,
    0x000000e4    /*  87 (SLOT-SETC) */,
    SCM_WORD(SCM_UNDEFINED) /* signature-info */,
    0x00000014    /*  89 (RET) */,
    /* %toplevel */
    0x0000000e    /*   0 (PRE-CALL 0) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[205]) + 4),
    0x0000005f    /*   2 (GREF-CALL 0) */,
    SCM_WORD(SCM_UNDEFINED) /* %expression-name-mark-key */,
    0x0000000d    /*   4 (PUSH) */,
    0x00000001    /*   5 (CONST) */,
    SCM_WORD(SCM_UNDEFINED) /* compiled-code-attach-source-info! */,
    0x000000ee    /*   7 (EXTEND-DENV) */,
    SCM_WORD((ScmWord*)SCM_OBJ(&scm__rc.d2152[205]) + 12),
    0x00000016    /*   9 (CLOSURE) */,
    SCM_WORD(SCM_OBJ(&scm__rc.d2153[6])) /* #<compiled-code compiled-code-attach-source-info!@0x7dab8b22ca80> */,
    0x00000014    /*  11 (RET) */,
    0x00000015    /*  12 (DEFINE 0) */,
    SCM_WORD(SCM_UNDEFINED) /* compiled-code-attach-source-info! */,
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
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(67U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[27])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[28])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[30])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[31])},
       { SCM_OBJ(&scm__rc.d2151[32]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[29]), SCM_OBJ(&scm__rc.d2151[33])},
       { SCM_MAKE_INT(69U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[35])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[36])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[38])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[39])},
       { SCM_OBJ(&scm__rc.d2151[40]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[37]), SCM_OBJ(&scm__rc.d2151[41])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(71U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[44])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[45])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[47])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[48])},
       { SCM_OBJ(&scm__rc.d2151[49]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[46]), SCM_OBJ(&scm__rc.d2151[50])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(73U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[53])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[54])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[56])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[57])},
       { SCM_OBJ(&scm__rc.d2151[58]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[55]), SCM_OBJ(&scm__rc.d2151[59])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(75U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[62])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[63])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[65])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[66])},
       { SCM_OBJ(&scm__rc.d2151[67]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[64]), SCM_OBJ(&scm__rc.d2151[68])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[70])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[71])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[72])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[73])},
       { SCM_MAKE_INT(78U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[75])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[76])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[78])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[79])},
       { SCM_OBJ(&scm__rc.d2151[80]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[77]), SCM_OBJ(&scm__rc.d2151[81])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[26])},
       { SCM_MAKE_INT(84U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[84])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[85])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[87])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[88])},
       { SCM_OBJ(&scm__rc.d2151[89]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[86]), SCM_OBJ(&scm__rc.d2151[90])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(88U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[93])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[94])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[96])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[97])},
       { SCM_OBJ(&scm__rc.d2151[98]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[95]), SCM_OBJ(&scm__rc.d2151[99])},
       { SCM_MAKE_INT(92U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[101])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[102])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[104])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[105])},
       { SCM_OBJ(&scm__rc.d2151[106]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[103]), SCM_OBJ(&scm__rc.d2151[107])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[109])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[110])},
       { SCM_MAKE_INT(96U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[112])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[113])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[115])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[116])},
       { SCM_OBJ(&scm__rc.d2151[117]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[114]), SCM_OBJ(&scm__rc.d2151[118])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[120])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[121])},
       { SCM_MAKE_INT(100U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[123])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[124])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[126])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[127])},
       { SCM_OBJ(&scm__rc.d2151[128]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[125]), SCM_OBJ(&scm__rc.d2151[129])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[120])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[131])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[132])},
       { SCM_MAKE_INT(104U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[134])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[135])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[137])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[138])},
       { SCM_OBJ(&scm__rc.d2151[139]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[136]), SCM_OBJ(&scm__rc.d2151[140])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[142])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[143])},
       { SCM_MAKE_INT(108U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[145])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[146])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[148])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[149])},
       { SCM_OBJ(&scm__rc.d2151[150]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[147]), SCM_OBJ(&scm__rc.d2151[151])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[109])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[153])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[154])},
       { SCM_MAKE_INT(112U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[156])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[157])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[159])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[160])},
       { SCM_OBJ(&scm__rc.d2151[161]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[158]), SCM_OBJ(&scm__rc.d2151[162])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[120])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[164])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[165])},
       { SCM_MAKE_INT(116U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[167])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[168])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[170])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[171])},
       { SCM_OBJ(&scm__rc.d2151[172]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[169]), SCM_OBJ(&scm__rc.d2151[173])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[131])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[175])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[176])},
       { SCM_MAKE_INT(120U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[178])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[179])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[181])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[182])},
       { SCM_OBJ(&scm__rc.d2151[183]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[180]), SCM_OBJ(&scm__rc.d2151[184])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[186])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[187])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[188])},
       { SCM_MAKE_INT(124U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[190])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[191])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[193])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[194])},
       { SCM_OBJ(&scm__rc.d2151[195]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[192]), SCM_OBJ(&scm__rc.d2151[196])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[109])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[198])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[199])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[200])},
       { SCM_MAKE_INT(128U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[202])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[203])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[205])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[206])},
       { SCM_OBJ(&scm__rc.d2151[207]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[204]), SCM_OBJ(&scm__rc.d2151[208])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[120])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[210])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[211])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[212])},
       { SCM_MAKE_INT(132U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[214])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[215])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[217])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[218])},
       { SCM_OBJ(&scm__rc.d2151[219]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[216]), SCM_OBJ(&scm__rc.d2151[220])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[131])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[222])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[223])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[224])},
       { SCM_MAKE_INT(136U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[226])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[227])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[229])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[230])},
       { SCM_OBJ(&scm__rc.d2151[231]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[228]), SCM_OBJ(&scm__rc.d2151[232])},
       { SCM_MAKE_INT(140U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[234])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[235])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[237])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[238])},
       { SCM_OBJ(&scm__rc.d2151[239]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[236]), SCM_OBJ(&scm__rc.d2151[240])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[242])},
       { SCM_MAKE_INT(143U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[244])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[245])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[247])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[248])},
       { SCM_OBJ(&scm__rc.d2151[249]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[246]), SCM_OBJ(&scm__rc.d2151[250])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[252])},
       { SCM_MAKE_INT(146U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[254])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[255])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[257])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[258])},
       { SCM_OBJ(&scm__rc.d2151[259]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[256]), SCM_OBJ(&scm__rc.d2151[260])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[262])},
       { SCM_MAKE_INT(150U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[264])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[265])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[1])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[267])},
       { SCM_OBJ(&scm__rc.d2151[268]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[266]), SCM_OBJ(&scm__rc.d2151[269])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[120])},
       { SCM_MAKE_INT(158U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[272])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[273])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[275])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[276])},
       { SCM_OBJ(&scm__rc.d2151[277]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[274]), SCM_OBJ(&scm__rc.d2151[278])},
       { SCM_MAKE_INT(172U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[280])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[281])},
       { SCM_OBJ(&scm__rc.d2151[282]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(181U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[285])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[286])},
       { SCM_OBJ(&scm__rc.d2151[287]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(186U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[290])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[291])},
       { SCM_OBJ(&scm__rc.d2151[292]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[295])},
       { SCM_MAKE_INT(191U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[297])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[298])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[300])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[301])},
       { SCM_OBJ(&scm__rc.d2151[302]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[299]), SCM_OBJ(&scm__rc.d2151[303])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[305])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[306])},
       { SCM_MAKE_INT(202U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[308])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[309])},
       { SCM_OBJ(&scm__rc.d2151[310]), SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_MAKE_INT(254U), SCM_NIL},
       { SCM_OBJ(&scm__sc.d2150[28]), SCM_OBJ(&scm__rc.d2151[314])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[315])},
       { SCM_UNDEFINED, SCM_NIL},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[317])},
       { SCM_UNDEFINED, SCM_OBJ(&scm__rc.d2151[318])},
       { SCM_OBJ(&scm__rc.d2151[319]), SCM_NIL},
       { SCM_OBJ(&scm__rc.d2151[316]), SCM_OBJ(&scm__rc.d2151[320])},
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(10, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
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
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
    SCM_UNBOUND,
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
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(5, FALSE),
    SCM_MAKE_INT(1U),
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_UNDEFINED,
    SCM_OBJ(SCM_CLASS_STATIC_TAG(Scm_VectorClass)) /* <vector> */,
    SCM_VECTOR_SIZE_SLOT_INITIALIZER(36, FALSE),
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
    SCM_FALSE,
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
  },
};

static ScmObj libcodevm_dump_code(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj code_scm;
  ScmCompiledCode* code;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vm-dump-code");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  code_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(code_scm)) Scm_Error("<compiled-code> required, but got %S", code_scm);
  code = SCM_COMPILED_CODE(code_scm);
  {
Scm_CompiledCodeDump(code);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodevm_code_TOlist(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj code_scm;
  ScmCompiledCode* code;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vm-code->list");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  code_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(code_scm)) Scm_Error("<compiled-code> required, but got %S", code_scm);
  code = SCM_COMPILED_CODE(code_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CompiledCodeToList(code));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcodevm_insn_build(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj insn_scm;
  ScmObj insn;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vm-insn-build");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  insn_scm = SCM_SUBRARGS[0];
  if (!(insn_scm)) Scm_Error("scheme object required, but got %S", insn_scm);
  insn = (insn_scm);
  {
{
u_long SCM_RESULT;

#line 72 "libcode.scm"
{SCM_RESULT=(((u_long )(Scm_VMInsnBuild(insn))));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeIntegerU(SCM_RESULT));
}
  }
}


static ScmObj libcodevm_insn_code_TOname(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj opcode_scm;
  u_int opcode;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vm-insn-code->name");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  opcode_scm = SCM_SUBRARGS[0];
  if (!SCM_UINTEGERP(opcode_scm)) Scm_Error("u_int required, but got %S", opcode_scm);
  opcode = Scm_GetIntegerU(opcode_scm);
  {
{
ScmObj SCM_RESULT;

#line 74 "libcode.scm"
{SCM_RESULT=(SCM_INTERN(Scm_VMInsnName(opcode)));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcodevm_insn_name_TOcode(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj insn_name_scm;
  ScmObj insn_name;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("vm-insn-name->code");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  insn_name_scm = SCM_SUBRARGS[0];
  if (!(insn_name_scm)) Scm_Error("scheme object required, but got %S", insn_name_scm);
  insn_name = (insn_name_scm);
  {
{
int SCM_RESULT;
{SCM_RESULT=(Scm_VMInsnNameToCode(insn_name));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(Scm_MakeInteger(SCM_RESULT));
}
  }
}


static ScmObj libcodemake_compiled_code_builder(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj reqargs_scm;
  uint16_t reqargs;
  ScmObj optargs_scm;
  uint16_t optargs;
  ScmObj name_scm;
  ScmObj name;
  ScmObj parent_scm;
  ScmObj parent;
  ScmObj intform_scm;
  ScmObj intform;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("make-compiled-code-builder");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  reqargs_scm = SCM_SUBRARGS[0];
  if (!SCM_UINTP(reqargs_scm)) Scm_Error("uint16_t required, but got %S", reqargs_scm);
  reqargs = Scm_GetIntegerU16(reqargs_scm);
  optargs_scm = SCM_SUBRARGS[1];
  if (!SCM_UINTP(optargs_scm)) Scm_Error("uint16_t required, but got %S", optargs_scm);
  optargs = Scm_GetIntegerU16(optargs_scm);
  name_scm = SCM_SUBRARGS[2];
  if (!(name_scm)) Scm_Error("scheme object required, but got %S", name_scm);
  name = (name_scm);
  parent_scm = SCM_SUBRARGS[3];
  if (!(parent_scm)) Scm_Error("scheme object required, but got %S", parent_scm);
  parent = (parent_scm);
  intform_scm = SCM_SUBRARGS[4];
  if (!(intform_scm)) Scm_Error("scheme object required, but got %S", intform_scm);
  intform = (intform_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_MakeCompiledCodeBuilder(reqargs,optargs,name,parent,intform));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcodecompiled_code_emit0X(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("compiled-code-emit0!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  {

#line 86 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,0,0,SCM_FALSE,SCM_FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit_PUSHX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("compiled-code-emit-PUSH!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  {

#line 90 "libcode.scm"
Scm_CompiledCodeEmit(cc,SCM_VM_PUSH,0,0,SCM_FALSE,SCM_FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit_RETX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("compiled-code-emit-RET!");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  {

#line 94 "libcode.scm"
Scm_CompiledCodeEmit(cc,SCM_VM_RET,0,0,SCM_FALSE,SCM_FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit0oX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj operand_scm;
  ScmObj operand;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("compiled-code-emit0o!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  operand_scm = SCM_SUBRARGS[2];
  if (!(operand_scm)) Scm_Error("scheme object required, but got %S", operand_scm);
  operand = (operand_scm);
  {

#line 98 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,0,0,operand,SCM_FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit0iX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj info_scm;
  ScmObj info;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("compiled-code-emit0i!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  info_scm = SCM_SUBRARGS[2];
  if (!(info_scm)) Scm_Error("scheme object required, but got %S", info_scm);
  info = (info_scm);
  {

#line 102 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,0,0,SCM_FALSE,info);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit0oiX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj operand_scm;
  ScmObj operand;
  ScmObj info_scm;
  ScmObj info;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("compiled-code-emit0oi!");
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  operand_scm = SCM_SUBRARGS[2];
  if (!(operand_scm)) Scm_Error("scheme object required, but got %S", operand_scm);
  operand = (operand_scm);
  info_scm = SCM_SUBRARGS[3];
  if (!(info_scm)) Scm_Error("scheme object required, but got %S", info_scm);
  info = (info_scm);
  {

#line 106 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,0,0,operand,info);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit1X(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj arg0_scm;
  int arg0;
  ScmObj SCM_SUBRARGS[3];
  SCM_ENTER_SUBR("compiled-code-emit1!");
  for (int SCM_i=0; SCM_i<3; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  arg0_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(arg0_scm)) Scm_Error("int required, but got %S", arg0_scm);
  arg0 = Scm_GetInteger(arg0_scm);
  {

#line 110 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,arg0,0,SCM_FALSE,SCM_FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit1oX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj arg0_scm;
  int arg0;
  ScmObj operand_scm;
  ScmObj operand;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("compiled-code-emit1o!");
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  arg0_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(arg0_scm)) Scm_Error("int required, but got %S", arg0_scm);
  arg0 = Scm_GetInteger(arg0_scm);
  operand_scm = SCM_SUBRARGS[3];
  if (!(operand_scm)) Scm_Error("scheme object required, but got %S", operand_scm);
  operand = (operand_scm);
  {

#line 114 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,arg0,0,operand,SCM_FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit1iX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj arg0_scm;
  int arg0;
  ScmObj info_scm;
  ScmObj info;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("compiled-code-emit1i!");
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  arg0_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(arg0_scm)) Scm_Error("int required, but got %S", arg0_scm);
  arg0 = Scm_GetInteger(arg0_scm);
  info_scm = SCM_SUBRARGS[3];
  if (!(info_scm)) Scm_Error("scheme object required, but got %S", info_scm);
  info = (info_scm);
  {

#line 118 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,arg0,0,SCM_FALSE,info);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit1oiX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj arg0_scm;
  int arg0;
  ScmObj operand_scm;
  ScmObj operand;
  ScmObj info_scm;
  ScmObj info;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("compiled-code-emit1oi!");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  arg0_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(arg0_scm)) Scm_Error("int required, but got %S", arg0_scm);
  arg0 = Scm_GetInteger(arg0_scm);
  operand_scm = SCM_SUBRARGS[3];
  if (!(operand_scm)) Scm_Error("scheme object required, but got %S", operand_scm);
  operand = (operand_scm);
  info_scm = SCM_SUBRARGS[4];
  if (!(info_scm)) Scm_Error("scheme object required, but got %S", info_scm);
  info = (info_scm);
  {

#line 122 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,arg0,0,operand,info);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit2X(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj arg0_scm;
  int arg0;
  ScmObj arg1_scm;
  int arg1;
  ScmObj SCM_SUBRARGS[4];
  SCM_ENTER_SUBR("compiled-code-emit2!");
  for (int SCM_i=0; SCM_i<4; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  arg0_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(arg0_scm)) Scm_Error("int required, but got %S", arg0_scm);
  arg0 = Scm_GetInteger(arg0_scm);
  arg1_scm = SCM_SUBRARGS[3];
  if (!SCM_INTEGERP(arg1_scm)) Scm_Error("int required, but got %S", arg1_scm);
  arg1 = Scm_GetInteger(arg1_scm);
  {

#line 126 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,arg0,arg1,SCM_FALSE,SCM_FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit2oX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj arg0_scm;
  int arg0;
  ScmObj arg1_scm;
  int arg1;
  ScmObj operand_scm;
  ScmObj operand;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("compiled-code-emit2o!");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  arg0_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(arg0_scm)) Scm_Error("int required, but got %S", arg0_scm);
  arg0 = Scm_GetInteger(arg0_scm);
  arg1_scm = SCM_SUBRARGS[3];
  if (!SCM_INTEGERP(arg1_scm)) Scm_Error("int required, but got %S", arg1_scm);
  arg1 = Scm_GetInteger(arg1_scm);
  operand_scm = SCM_SUBRARGS[4];
  if (!(operand_scm)) Scm_Error("scheme object required, but got %S", operand_scm);
  operand = (operand_scm);
  {

#line 130 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,arg0,arg1,operand,SCM_FALSE);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit2iX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj arg0_scm;
  int arg0;
  ScmObj arg1_scm;
  int arg1;
  ScmObj info_scm;
  ScmObj info;
  ScmObj SCM_SUBRARGS[5];
  SCM_ENTER_SUBR("compiled-code-emit2i!");
  for (int SCM_i=0; SCM_i<5; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  arg0_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(arg0_scm)) Scm_Error("int required, but got %S", arg0_scm);
  arg0 = Scm_GetInteger(arg0_scm);
  arg1_scm = SCM_SUBRARGS[3];
  if (!SCM_INTEGERP(arg1_scm)) Scm_Error("int required, but got %S", arg1_scm);
  arg1 = Scm_GetInteger(arg1_scm);
  info_scm = SCM_SUBRARGS[4];
  if (!(info_scm)) Scm_Error("scheme object required, but got %S", info_scm);
  info = (info_scm);
  {

#line 134 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,arg0,arg1,SCM_FALSE,info);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_emit2oiX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj code_scm;
  int code;
  ScmObj arg0_scm;
  int arg0;
  ScmObj arg1_scm;
  int arg1;
  ScmObj operand_scm;
  ScmObj operand;
  ScmObj info_scm;
  ScmObj info;
  ScmObj SCM_SUBRARGS[6];
  SCM_ENTER_SUBR("compiled-code-emit2oi!");
  for (int SCM_i=0; SCM_i<6; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  code_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(code_scm)) Scm_Error("int required, but got %S", code_scm);
  code = Scm_GetInteger(code_scm);
  arg0_scm = SCM_SUBRARGS[2];
  if (!SCM_INTEGERP(arg0_scm)) Scm_Error("int required, but got %S", arg0_scm);
  arg0 = Scm_GetInteger(arg0_scm);
  arg1_scm = SCM_SUBRARGS[3];
  if (!SCM_INTEGERP(arg1_scm)) Scm_Error("int required, but got %S", arg1_scm);
  arg1 = Scm_GetInteger(arg1_scm);
  operand_scm = SCM_SUBRARGS[4];
  if (!(operand_scm)) Scm_Error("scheme object required, but got %S", operand_scm);
  operand = (operand_scm);
  info_scm = SCM_SUBRARGS[5];
  if (!(info_scm)) Scm_Error("scheme object required, but got %S", info_scm);
  info = (info_scm);
  {

#line 138 "libcode.scm"
Scm_CompiledCodeEmit(cc,code,arg0,arg1,operand,info);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_new_label(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("compiled-code-new-label");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  {
{
ScmObj SCM_RESULT;
{SCM_RESULT=(Scm_CompiledCodeNewLabel(cc));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}


static ScmObj libcodecompiled_code_set_labelX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj label_scm;
  ScmObj label;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("compiled-code-set-label!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  label_scm = SCM_SUBRARGS[1];
  if (!(label_scm)) Scm_Error("scheme object required, but got %S", label_scm);
  label = (label_scm);
  {
Scm_CompiledCodeSetLabel(cc,label);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_finish_builder(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj maxstack_scm;
  int maxstack;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("compiled-code-finish-builder");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  maxstack_scm = SCM_SUBRARGS[1];
  if (!SCM_INTEGERP(maxstack_scm)) Scm_Error("int required, but got %S", maxstack_scm);
  maxstack = Scm_GetInteger(maxstack_scm);
  {
Scm_CompiledCodeFinishBuilder(cc,maxstack);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_copyX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj dest_scm;
  ScmCompiledCode* dest;
  ScmObj src_scm;
  ScmCompiledCode* src;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("compiled-code-copy!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  dest_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(dest_scm)) Scm_Error("<compiled-code> required, but got %S", dest_scm);
  dest = SCM_COMPILED_CODE(dest_scm);
  src_scm = SCM_SUBRARGS[1];
  if (!SCM_COMPILED_CODE_P(src_scm)) Scm_Error("<compiled-code> required, but got %S", src_scm);
  src = SCM_COMPILED_CODE(src_scm);
  {
Scm_CompiledCodeCopyX(dest,src);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcodecompiled_code_push_infoX(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj cc_scm;
  ScmCompiledCode* cc;
  ScmObj info_scm;
  ScmObj info;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("compiled-code-push-info!");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  cc_scm = SCM_SUBRARGS[0];
  if (!SCM_COMPILED_CODE_P(cc_scm)) Scm_Error("<compiled-code> required, but got %S", cc_scm);
  cc = SCM_COMPILED_CODE(cc_scm);
  info_scm = SCM_SUBRARGS[1];
  if (!(info_scm)) Scm_Error("scheme object required, but got %S", info_scm);
  info = (info_scm);
  {
Scm_CompiledCodePushInfo(cc,info);
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_UNDEFINED);
  }
}


static ScmObj libcode_25decode_packed_debug_info(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj code_vector_scm;
  ScmUVector* code_vector;
  ScmObj const_vector_scm;
  ScmVector* const_vector;
  ScmObj SCM_SUBRARGS[2];
  SCM_ENTER_SUBR("%decode-packed-debug-info");
  for (int SCM_i=0; SCM_i<2; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  code_vector_scm = SCM_SUBRARGS[0];
  if (!SCM_U8VECTORP(code_vector_scm)) Scm_Error("<u8vector> required, but got %S", code_vector_scm);
  code_vector = SCM_U8VECTOR(code_vector_scm);
  const_vector_scm = SCM_SUBRARGS[1];
  if (!SCM_VECTORP(const_vector_scm)) Scm_Error("<vector> required, but got %S", const_vector_scm);
  const_vector = SCM_VECTOR(const_vector_scm);
  {
{
ScmObj SCM_RESULT;

#line 193 "libcode.scm"
{SCM_RESULT=(Scm_DecodePackedDebugInfo(SCM_U8VECTOR_ELEMENTS(code_vector),
SCM_U8VECTOR_SIZE(code_vector),const_vector));goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static void Scm_CompiledCodeClass_PRINT(ScmObj obj, ScmPort *port, ScmWriteContext *ctx SCM_UNUSED)
{

#line 231 "libcode.scm"
Scm_Printf(port,"#<compiled-code %S@%p>",
Scm_CompiledCodeFullName(SCM_COMPILED_CODE(obj)),obj);
}

SCM_DEFINE_BUILTIN_CLASS(Scm_CompiledCodeClass, Scm_CompiledCodeClass_PRINT, NULL, NULL, NULL, SCM_CLASS_DEFAULT_CPL);

static ScmObj Scm_CompiledCodeClass_parent_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_OBJ_SAFE(obj->parent);
}

static ScmObj Scm_CompiledCodeClass_signature_info_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_OBJ_SAFE(obj->signatureInfo);
}

static void Scm_CompiledCodeClass_signature_info_SET(ScmObj OBJARG, ScmObj value)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  obj->signatureInfo = (value);
}

static ScmObj Scm_CompiledCodeClass_debug_info_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_OBJ_SAFE(Scm_CodeDebugInfo(obj));
}

static ScmObj Scm_CompiledCodeClass_required_args_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_MAKE_INT(obj->requiredArgs);
}

static ScmObj Scm_CompiledCodeClass_optional_args_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_MAKE_INT(obj->optionalArgs);
}

static ScmObj Scm_CompiledCodeClass_name_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_OBJ_SAFE(obj->name);
}

static ScmObj Scm_CompiledCodeClass_full_name_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_OBJ_SAFE(Scm_CompiledCodeFullName(obj));
}

static ScmObj Scm_CompiledCodeClass_size_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_MAKE_INT(obj->codeSize);
}

static ScmObj Scm_CompiledCodeClass_max_stack_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_MAKE_INT(obj->maxstack);
}

static ScmObj Scm_CompiledCodeClass_intermediate_form_GET(ScmObj OBJARG)
{
  ScmCompiledCode* obj = SCM_COMPILED_CODE(OBJARG);
  return SCM_OBJ_SAFE(obj->intermediateForm);
}

static ScmClassStaticSlotSpec Scm_CompiledCodeClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("parent", Scm_CompiledCodeClass_parent_GET, NULL),
  SCM_CLASS_SLOT_SPEC("signature-info", Scm_CompiledCodeClass_signature_info_GET, Scm_CompiledCodeClass_signature_info_SET),
  SCM_CLASS_SLOT_SPEC("debug-info", Scm_CompiledCodeClass_debug_info_GET, NULL),
  SCM_CLASS_SLOT_SPEC("required-args", Scm_CompiledCodeClass_required_args_GET, NULL),
  SCM_CLASS_SLOT_SPEC("optional-args", Scm_CompiledCodeClass_optional_args_GET, NULL),
  SCM_CLASS_SLOT_SPEC("name", Scm_CompiledCodeClass_name_GET, NULL),
  SCM_CLASS_SLOT_SPEC("full-name", Scm_CompiledCodeClass_full_name_GET, NULL),
  SCM_CLASS_SLOT_SPEC("size", Scm_CompiledCodeClass_size_GET, NULL),
  SCM_CLASS_SLOT_SPEC("max-stack", Scm_CompiledCodeClass_max_stack_GET, NULL),
  SCM_CLASS_SLOT_SPEC("intermediate-form", Scm_CompiledCodeClass_intermediate_form_GET, NULL),
  SCM_CLASS_SLOT_SPEC_END()
};

static ScmObj get_packed_vector(ScmPackedDebugInfo* s){{
#line 242 "libcode.scm"
return (Scm_MakeU8VectorFromArray((s)->codeSize,(s)->codeVector));}}
SCM_DEFINE_BUILTIN_CLASS(Scm_PackedDebugInfoClass, NULL, NULL, NULL, NULL, SCM_CLASS_DEFAULT_CPL);

static ScmObj Scm_PackedDebugInfoClass_const_vector_GET(ScmObj OBJARG)
{
  ScmPackedDebugInfo* obj = SCM_PACKED_DEBUG_INFO(OBJARG);
  return SCM_OBJ_SAFE(obj->constVector);
}

static ScmClassStaticSlotSpec Scm_PackedDebugInfoClass__SLOTS[] = {
  SCM_CLASS_SLOT_SPEC("packed-vector", get_packed_vector, NULL),
  SCM_CLASS_SLOT_SPEC("const-vector", Scm_PackedDebugInfoClass_const_vector_GET, NULL),
  SCM_CLASS_SLOT_SPEC_END()
};


static ScmObj libcodedecode_packed_debug_info(ScmObj *SCM_FP SCM_UNUSED, int SCM_ARGCNT SCM_UNUSED, void *data_ SCM_UNUSED)
{
  ScmObj p_scm;
  ScmPackedDebugInfo* p;
  ScmObj SCM_SUBRARGS[1];
  SCM_ENTER_SUBR("decode-packed-debug-info");
  for (int SCM_i=0; SCM_i<1; SCM_i++) {
    SCM_SUBRARGS[SCM_i] = SCM_ARGREF(SCM_i);
  }
  p_scm = SCM_SUBRARGS[0];
  if (!SCM_PACKED_DEBUG_INFO_P(p_scm)) Scm_Error("<packed-debug-info> required, but got %S", p_scm);
  p = SCM_PACKED_DEBUG_INFO(p_scm);
  {
{
ScmObj SCM_RESULT;

#line 255 "libcode.scm"
if (SCM_FALSEP((p)->decoded)){{
{ScmObj decode_debug_info=SCM_UNDEFINED;
SCM_BIND_PROC(decode_debug_info,"decode-debug-info",
Scm_GaucheInternalModule());;ScmObj decoded=
Scm_ApplyRec2(decode_debug_info,
get_packed_vector(p),
(p)->constVector);
(p)->decoded=(decoded);}}}

#line 263 "libcode.scm"
{SCM_RESULT=((p)->decoded);goto SCM_STUB_RETURN;}
goto SCM_STUB_RETURN;
SCM_STUB_RETURN:
SCM_RETURN(SCM_OBJ_SAFE(SCM_RESULT));
}
  }
}

static ScmCompiledCode *toplevels[] = {
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[1])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[3])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[5])),
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[7])),
 NULL /*termination*/
};
ScmObj SCM_debug_info_const_vector()
{
  static _Bool initialized = FALSE;
  if (!initialized) {
    int i = 0;
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[221];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[345];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[237];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[235];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[346];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[347];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[234];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[1];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[252];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[348];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[247];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[27];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[245];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[349];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[244];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[263];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[350];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[261];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[351];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[260];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[259];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[352];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[353];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[283];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[285];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[354];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[355];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[356];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[357];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[358];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[24];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[290];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[359];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[288];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[284];
    SCM_VECTOR_ELEMENT(SCM_OBJ(&scm__rc.d2149[307]), i++) = scm__rc.d2149[282];
    initialized = TRUE;
  }
  return SCM_OBJ(&scm__rc.d2149[307]);
}
void Scm_Init_libcode() {
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  scm__rc.d2149[1] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[0])),TRUE); /* gauche.vm.code */
  scm__rc.d2149[0] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[1]), SCM_FIND_MODULE_CREATE)); /* module gauche.vm.code */
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[0]));
  scm__rc.d2149[2] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[1])),TRUE); /* vm-dump-code */
  scm__rc.d2149[3] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[2])),TRUE); /* vm-code->list */
  scm__rc.d2149[4] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[3])),TRUE); /* vm-insn-build */
  scm__rc.d2149[5] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[4])),TRUE); /* vm-insn-code->name */
  scm__rc.d2149[6] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[5])),TRUE); /* vm-insn-name->code */
  scm__rc.d2149[7] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[6])),TRUE); /* make-compiled-code-builder */
  scm__rc.d2149[8] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[7])),TRUE); /* compiled-code-emit0! */
  scm__rc.d2149[9] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[8])),TRUE); /* compiled-code-emit0o! */
  scm__rc.d2149[10] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[9])),TRUE); /* compiled-code-emit0i! */
  scm__rc.d2149[11] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[10])),TRUE); /* compiled-code-emit0oi! */
  scm__rc.d2149[12] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[11])),TRUE); /* compiled-code-emit-PUSH! */
  scm__rc.d2149[13] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[12])),TRUE); /* compiled-code-emit-RET! */
  scm__rc.d2149[14] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[13])),TRUE); /* compiled-code-emit1! */
  scm__rc.d2149[15] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[14])),TRUE); /* compiled-code-emit1o! */
  scm__rc.d2149[16] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[15])),TRUE); /* compiled-code-emit1i! */
  scm__rc.d2149[17] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[16])),TRUE); /* compiled-code-emit1oi! */
  scm__rc.d2149[18] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[17])),TRUE); /* compiled-code-emit2! */
  scm__rc.d2149[19] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[18])),TRUE); /* compiled-code-emit2o! */
  scm__rc.d2149[20] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[19])),TRUE); /* compiled-code-emit2i! */
  scm__rc.d2149[21] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[20])),TRUE); /* compiled-code-emit2oi! */
  scm__rc.d2149[22] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[21])),TRUE); /* compiled-code-new-label */
  scm__rc.d2149[23] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[22])),TRUE); /* compiled-code-set-label! */
  scm__rc.d2149[24] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[23])),TRUE); /* compiled-code-push-info! */
  scm__rc.d2149[25] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[24])),TRUE); /* compiled-code-finish-builder */
  scm__rc.d2149[26] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[25])),TRUE); /* compiled-code-copy! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[1]), scm__rc.d2149[26]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[2]), scm__rc.d2149[25]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[3]), scm__rc.d2149[24]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[4]), scm__rc.d2149[23]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[5]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[6]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[7]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[8]), scm__rc.d2149[19]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[9]), scm__rc.d2149[18]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[10]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[11]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[12]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[13]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[14]), scm__rc.d2149[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[15]), scm__rc.d2149[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[16]), scm__rc.d2149[11]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[17]), scm__rc.d2149[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[18]), scm__rc.d2149[9]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[19]), scm__rc.d2149[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[20]), scm__rc.d2149[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[21]), scm__rc.d2149[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[22]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[23]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[24]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[25]), scm__rc.d2149[2]);
  (void)Scm_ExportSymbols(Scm_CurrentModule(), SCM_OBJ(&scm__rc.d2151[25]));
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
   Scm_SelectModule(SCM_MODULE(scm__rc.d2149[0]));
  scm__rc.d2149[27] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[26])),TRUE); /* code */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[26]), scm__rc.d2149[27]);
  scm__rc.d2149[28] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[27])),TRUE); /* source-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[29]), scm__rc.d2149[28]);
  scm__rc.d2149[29] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[29])),TRUE); /* bind-info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[30]), scm__rc.d2149[2]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[31]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[32]), scm__rc.d2149[29]);
  scm__rc.d2149[30] = Scm_MakeExtendedPair(scm__rc.d2149[2], SCM_OBJ(&scm__rc.d2151[26]), SCM_OBJ(&scm__rc.d2151[34]));
  scm__rc.d2149[31] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[30])),TRUE); /* <compiled-code> */
  scm__rc.d2149[32] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[31])),TRUE); /* -> */
  scm__rc.d2149[33] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[32])),TRUE); /* <void> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[34]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[34]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[34]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[34]))[6] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("vm-dump-code")), SCM_OBJ(&libcodevm_dump_code__STUB), 0);
  libcodevm_dump_code__STUB.common.info = scm__rc.d2149[30];
  libcodevm_dump_code__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[34]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[37]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[38]), scm__rc.d2149[3]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[39]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[40]), scm__rc.d2149[29]);
  scm__rc.d2149[41] = Scm_MakeExtendedPair(scm__rc.d2149[3], SCM_OBJ(&scm__rc.d2151[26]), SCM_OBJ(&scm__rc.d2151[42]));
  scm__rc.d2149[42] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[33])),TRUE); /* <top> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[43]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[43]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[43]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[43]))[6] = scm__rc.d2149[42];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("vm-code->list")), SCM_OBJ(&libcodevm_code_TOlist__STUB), 0);
  libcodevm_code_TOlist__STUB.common.info = scm__rc.d2149[41];
  libcodevm_code_TOlist__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[43]);
  scm__rc.d2149[50] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[34])),TRUE); /* insn */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[43]), scm__rc.d2149[50]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[46]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[47]), scm__rc.d2149[4]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[48]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[49]), scm__rc.d2149[29]);
  scm__rc.d2149[51] = Scm_MakeExtendedPair(scm__rc.d2149[4], SCM_OBJ(&scm__rc.d2151[43]), SCM_OBJ(&scm__rc.d2151[51]));
  scm__rc.d2149[52] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[35])),TRUE); /* <ulong> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[53]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[53]))[4] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[53]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[53]))[6] = scm__rc.d2149[52];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("vm-insn-build")), SCM_OBJ(&libcodevm_insn_build__STUB), 0);
  libcodevm_insn_build__STUB.common.info = scm__rc.d2149[51];
  libcodevm_insn_build__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[53]);
  scm__rc.d2149[60] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[36])),TRUE); /* opcode */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[52]), scm__rc.d2149[60]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[55]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[56]), scm__rc.d2149[5]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[57]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[58]), scm__rc.d2149[29]);
  scm__rc.d2149[61] = Scm_MakeExtendedPair(scm__rc.d2149[5], SCM_OBJ(&scm__rc.d2151[52]), SCM_OBJ(&scm__rc.d2151[60]));
  scm__rc.d2149[62] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[37])),TRUE); /* <uint> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[63]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[63]))[4] = scm__rc.d2149[62];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[63]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[63]))[6] = scm__rc.d2149[42];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("vm-insn-code->name")), SCM_OBJ(&libcodevm_insn_code_TOname__STUB), 0);
  libcodevm_insn_code_TOname__STUB.common.info = scm__rc.d2149[61];
  libcodevm_insn_code_TOname__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[63]);
  scm__rc.d2149[70] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[38])),TRUE); /* insn-name */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[61]), scm__rc.d2149[70]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[64]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[65]), scm__rc.d2149[6]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[66]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[67]), scm__rc.d2149[29]);
  scm__rc.d2149[71] = Scm_MakeExtendedPair(scm__rc.d2149[6], SCM_OBJ(&scm__rc.d2151[61]), SCM_OBJ(&scm__rc.d2151[69]));
  scm__rc.d2149[72] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[39])),TRUE); /* <int> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[73]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[73]))[4] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[73]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[73]))[6] = scm__rc.d2149[72];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("vm-insn-name->code")), SCM_OBJ(&libcodevm_insn_name_TOcode__STUB), 0);
  libcodevm_insn_name_TOcode__STUB.common.info = scm__rc.d2149[71];
  libcodevm_insn_name_TOcode__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[73]);
  scm__rc.d2149[80] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[40])),TRUE); /* reqargs */
  scm__rc.d2149[81] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[41])),TRUE); /* optargs */
  scm__rc.d2149[82] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[42])),TRUE); /* name */
  scm__rc.d2149[83] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[43])),TRUE); /* parent */
  scm__rc.d2149[84] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[44])),TRUE); /* intform */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[70]), scm__rc.d2149[84]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[71]), scm__rc.d2149[83]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[72]), scm__rc.d2149[82]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[73]), scm__rc.d2149[81]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[74]), scm__rc.d2149[80]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[77]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[78]), scm__rc.d2149[7]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[79]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[80]), scm__rc.d2149[29]);
  scm__rc.d2149[85] = Scm_MakeExtendedPair(scm__rc.d2149[7], SCM_OBJ(&scm__rc.d2151[74]), SCM_OBJ(&scm__rc.d2151[82]));
  scm__rc.d2149[86] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[45])),TRUE); /* <uint16> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[4] = scm__rc.d2149[86];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[5] = scm__rc.d2149[86];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[6] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[7] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[8] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[9] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[87]))[10] = scm__rc.d2149[42];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("make-compiled-code-builder")), SCM_OBJ(&libcodemake_compiled_code_builder__STUB), 0);
  libcodemake_compiled_code_builder__STUB.common.info = scm__rc.d2149[85];
  libcodemake_compiled_code_builder__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[87]);
  scm__rc.d2149[98] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[46])),TRUE); /* cc */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[83]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[86]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[87]), scm__rc.d2149[8]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[88]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[89]), scm__rc.d2149[29]);
  scm__rc.d2149[99] = Scm_MakeExtendedPair(scm__rc.d2149[8], SCM_OBJ(&scm__rc.d2151[83]), SCM_OBJ(&scm__rc.d2151[91]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[5] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[6] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[100]))[7] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit0!")), SCM_OBJ(&libcodecompiled_code_emit0X__STUB), 0);
  libcodecompiled_code_emit0X__STUB.common.info = scm__rc.d2149[99];
  libcodecompiled_code_emit0X__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[100]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[92]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[95]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[96]), scm__rc.d2149[12]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[97]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[98]), scm__rc.d2149[29]);
  scm__rc.d2149[108] = Scm_MakeExtendedPair(scm__rc.d2149[12], SCM_OBJ(&scm__rc.d2151[92]), SCM_OBJ(&scm__rc.d2151[100]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit-PUSH!")), SCM_OBJ(&libcodecompiled_code_emit_PUSHX__STUB), 0);
  libcodecompiled_code_emit_PUSHX__STUB.common.info = scm__rc.d2149[108];
  libcodecompiled_code_emit_PUSHX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[34]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[103]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[104]), scm__rc.d2149[13]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[105]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[106]), scm__rc.d2149[29]);
  scm__rc.d2149[109] = Scm_MakeExtendedPair(scm__rc.d2149[13], SCM_OBJ(&scm__rc.d2151[92]), SCM_OBJ(&scm__rc.d2151[108]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit-RET!")), SCM_OBJ(&libcodecompiled_code_emit_RETX__STUB), 0);
  libcodecompiled_code_emit_RETX__STUB.common.info = scm__rc.d2149[109];
  libcodecompiled_code_emit_RETX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[34]);
  scm__rc.d2149[110] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[47])),TRUE); /* operand */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[109]), scm__rc.d2149[110]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[110]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[111]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[114]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[115]), scm__rc.d2149[9]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[116]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[117]), scm__rc.d2149[29]);
  scm__rc.d2149[111] = Scm_MakeExtendedPair(scm__rc.d2149[9], SCM_OBJ(&scm__rc.d2151[111]), SCM_OBJ(&scm__rc.d2151[119]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[5] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[6] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[7] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[112]))[8] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit0o!")), SCM_OBJ(&libcodecompiled_code_emit0oX__STUB), 0);
  libcodecompiled_code_emit0oX__STUB.common.info = scm__rc.d2149[111];
  libcodecompiled_code_emit0oX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[112]);
  scm__rc.d2149[121] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[48])),TRUE); /* info */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[120]), scm__rc.d2149[121]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[121]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[122]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[125]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[126]), scm__rc.d2149[10]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[127]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[128]), scm__rc.d2149[29]);
  scm__rc.d2149[122] = Scm_MakeExtendedPair(scm__rc.d2149[10], SCM_OBJ(&scm__rc.d2151[122]), SCM_OBJ(&scm__rc.d2151[130]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit0i!")), SCM_OBJ(&libcodecompiled_code_emit0iX__STUB), 0);
  libcodecompiled_code_emit0iX__STUB.common.info = scm__rc.d2149[122];
  libcodecompiled_code_emit0iX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[112]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[131]), scm__rc.d2149[110]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[132]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[133]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[136]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[137]), scm__rc.d2149[11]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[138]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[139]), scm__rc.d2149[29]);
  scm__rc.d2149[123] = Scm_MakeExtendedPair(scm__rc.d2149[11], SCM_OBJ(&scm__rc.d2151[133]), SCM_OBJ(&scm__rc.d2151[141]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[5] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[6] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[7] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[8] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[124]))[9] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit0oi!")), SCM_OBJ(&libcodecompiled_code_emit0oiX__STUB), 0);
  libcodecompiled_code_emit0oiX__STUB.common.info = scm__rc.d2149[123];
  libcodecompiled_code_emit0oiX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[124]);
  scm__rc.d2149[134] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[49])),TRUE); /* arg0 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[142]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[143]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[144]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[147]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[148]), scm__rc.d2149[14]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[149]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[150]), scm__rc.d2149[29]);
  scm__rc.d2149[135] = Scm_MakeExtendedPair(scm__rc.d2149[14], SCM_OBJ(&scm__rc.d2151[144]), SCM_OBJ(&scm__rc.d2151[152]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[136]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[136]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[136]))[5] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[136]))[6] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[136]))[7] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[136]))[8] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit1!")), SCM_OBJ(&libcodecompiled_code_emit1X__STUB), 0);
  libcodecompiled_code_emit1X__STUB.common.info = scm__rc.d2149[135];
  libcodecompiled_code_emit1X__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[136]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[153]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[154]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[155]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[158]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[159]), scm__rc.d2149[15]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[160]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[161]), scm__rc.d2149[29]);
  scm__rc.d2149[145] = Scm_MakeExtendedPair(scm__rc.d2149[15], SCM_OBJ(&scm__rc.d2151[155]), SCM_OBJ(&scm__rc.d2151[163]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[146]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[146]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[146]))[5] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[146]))[6] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[146]))[7] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[146]))[8] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[146]))[9] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit1o!")), SCM_OBJ(&libcodecompiled_code_emit1oX__STUB), 0);
  libcodecompiled_code_emit1oX__STUB.common.info = scm__rc.d2149[145];
  libcodecompiled_code_emit1oX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[164]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[165]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[166]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[169]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[170]), scm__rc.d2149[16]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[171]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[172]), scm__rc.d2149[29]);
  scm__rc.d2149[156] = Scm_MakeExtendedPair(scm__rc.d2149[16], SCM_OBJ(&scm__rc.d2151[166]), SCM_OBJ(&scm__rc.d2151[174]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit1i!")), SCM_OBJ(&libcodecompiled_code_emit1iX__STUB), 0);
  libcodecompiled_code_emit1iX__STUB.common.info = scm__rc.d2149[156];
  libcodecompiled_code_emit1iX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[146]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[175]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[176]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[177]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[180]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[181]), scm__rc.d2149[17]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[182]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[183]), scm__rc.d2149[29]);
  scm__rc.d2149[157] = Scm_MakeExtendedPair(scm__rc.d2149[17], SCM_OBJ(&scm__rc.d2151[177]), SCM_OBJ(&scm__rc.d2151[185]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[158]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[158]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[158]))[5] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[158]))[6] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[158]))[7] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[158]))[8] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[158]))[9] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[158]))[10] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit1oi!")), SCM_OBJ(&libcodecompiled_code_emit1oiX__STUB), 0);
  libcodecompiled_code_emit1oiX__STUB.common.info = scm__rc.d2149[157];
  libcodecompiled_code_emit1oiX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[158]);
  scm__rc.d2149[169] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[50])),TRUE); /* arg1 */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[186]), scm__rc.d2149[169]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[187]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[188]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[189]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[192]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[193]), scm__rc.d2149[18]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[194]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[195]), scm__rc.d2149[29]);
  scm__rc.d2149[170] = Scm_MakeExtendedPair(scm__rc.d2149[18], SCM_OBJ(&scm__rc.d2151[189]), SCM_OBJ(&scm__rc.d2151[197]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[5] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[6] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[7] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[8] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[171]))[9] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit2!")), SCM_OBJ(&libcodecompiled_code_emit2X__STUB), 0);
  libcodecompiled_code_emit2X__STUB.common.info = scm__rc.d2149[170];
  libcodecompiled_code_emit2X__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[171]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[198]), scm__rc.d2149[169]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[199]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[200]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[201]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[204]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[205]), scm__rc.d2149[19]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[206]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[207]), scm__rc.d2149[29]);
  scm__rc.d2149[181] = Scm_MakeExtendedPair(scm__rc.d2149[19], SCM_OBJ(&scm__rc.d2151[201]), SCM_OBJ(&scm__rc.d2151[209]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[182]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[182]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[182]))[5] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[182]))[6] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[182]))[7] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[182]))[8] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[182]))[9] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[182]))[10] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit2o!")), SCM_OBJ(&libcodecompiled_code_emit2oX__STUB), 0);
  libcodecompiled_code_emit2oX__STUB.common.info = scm__rc.d2149[181];
  libcodecompiled_code_emit2oX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[182]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[210]), scm__rc.d2149[169]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[211]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[212]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[213]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[216]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[217]), scm__rc.d2149[20]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[218]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[219]), scm__rc.d2149[29]);
  scm__rc.d2149[193] = Scm_MakeExtendedPair(scm__rc.d2149[20], SCM_OBJ(&scm__rc.d2151[213]), SCM_OBJ(&scm__rc.d2151[221]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit2i!")), SCM_OBJ(&libcodecompiled_code_emit2iX__STUB), 0);
  libcodecompiled_code_emit2iX__STUB.common.info = scm__rc.d2149[193];
  libcodecompiled_code_emit2iX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[182]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[222]), scm__rc.d2149[169]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[223]), scm__rc.d2149[134]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[224]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[225]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[228]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[229]), scm__rc.d2149[21]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[230]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[231]), scm__rc.d2149[29]);
  scm__rc.d2149[194] = Scm_MakeExtendedPair(scm__rc.d2149[21], SCM_OBJ(&scm__rc.d2151[225]), SCM_OBJ(&scm__rc.d2151[233]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[195]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[195]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[195]))[5] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[195]))[6] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[195]))[7] = scm__rc.d2149[72];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[195]))[8] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[195]))[9] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[195]))[10] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[195]))[11] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-emit2oi!")), SCM_OBJ(&libcodecompiled_code_emit2oiX__STUB), 0);
  libcodecompiled_code_emit2oiX__STUB.common.info = scm__rc.d2149[194];
  libcodecompiled_code_emit2oiX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[195]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[236]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[237]), scm__rc.d2149[22]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[238]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[239]), scm__rc.d2149[29]);
  scm__rc.d2149[207] = Scm_MakeExtendedPair(scm__rc.d2149[22], SCM_OBJ(&scm__rc.d2151[92]), SCM_OBJ(&scm__rc.d2151[241]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-new-label")), SCM_OBJ(&libcodecompiled_code_new_label__STUB), 0);
  libcodecompiled_code_new_label__STUB.common.info = scm__rc.d2149[207];
  libcodecompiled_code_new_label__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[43]);
  scm__rc.d2149[208] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[51])),TRUE); /* label */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[242]), scm__rc.d2149[208]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[243]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[246]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[247]), scm__rc.d2149[23]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[248]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[249]), scm__rc.d2149[29]);
  scm__rc.d2149[209] = Scm_MakeExtendedPair(scm__rc.d2149[23], SCM_OBJ(&scm__rc.d2151[243]), SCM_OBJ(&scm__rc.d2151[251]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[210]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[210]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[210]))[5] = scm__rc.d2149[42];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[210]))[6] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[210]))[7] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-set-label!")), SCM_OBJ(&libcodecompiled_code_set_labelX__STUB), 0);
  libcodecompiled_code_set_labelX__STUB.common.info = scm__rc.d2149[209];
  libcodecompiled_code_set_labelX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[210]);
  scm__rc.d2149[218] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[52])),TRUE); /* maxstack */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[252]), scm__rc.d2149[218]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[253]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[256]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[257]), scm__rc.d2149[25]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[258]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[259]), scm__rc.d2149[29]);
  scm__rc.d2149[219] = Scm_MakeExtendedPair(scm__rc.d2149[25], SCM_OBJ(&scm__rc.d2151[253]), SCM_OBJ(&scm__rc.d2151[261]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-finish-builder")), SCM_OBJ(&libcodecompiled_code_finish_builder__STUB), 0);
  libcodecompiled_code_finish_builder__STUB.common.info = scm__rc.d2149[219];
  libcodecompiled_code_finish_builder__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[100]);
  scm__rc.d2149[220] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[53])),TRUE); /* dest */
  scm__rc.d2149[221] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[54])),TRUE); /* src */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[262]), scm__rc.d2149[221]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[263]), scm__rc.d2149[220]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[266]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[267]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[268]), scm__rc.d2149[29]);
  scm__rc.d2149[222] = Scm_MakeExtendedPair(scm__rc.d2149[26], SCM_OBJ(&scm__rc.d2151[263]), SCM_OBJ(&scm__rc.d2151[270]));
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[3] = scm__rc.d2149[1];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[4] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[5] = scm__rc.d2149[31];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[6] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[223]))[7] = scm__rc.d2149[33];
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-copy!")), SCM_OBJ(&libcodecompiled_code_copyX__STUB), 0);
  libcodecompiled_code_copyX__STUB.common.info = scm__rc.d2149[222];
  libcodecompiled_code_copyX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[223]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[271]), scm__rc.d2149[98]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[274]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[275]), scm__rc.d2149[24]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[276]), scm__rc.d2149[1]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[277]), scm__rc.d2149[29]);
  scm__rc.d2149[231] = Scm_MakeExtendedPair(scm__rc.d2149[24], SCM_OBJ(&scm__rc.d2151[271]), SCM_OBJ(&scm__rc.d2151[279]));
  Scm_MakeBinding(SCM_MODULE(scm__rc.d2149[0]), SCM_SYMBOL(SCM_INTERN("compiled-code-push-info!")), SCM_OBJ(&libcodecompiled_code_push_infoX__STUB), 0);
  libcodecompiled_code_push_infoX__STUB.common.info = scm__rc.d2149[231];
  libcodecompiled_code_push_infoX__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[210]);

#line 164 "libcode.scm"
Scm_ImportModule(Scm_GaucheInternalModule(),scm__rc.d2149[1],SCM_FALSE,0);
  scm__rc.d2149[233] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[55])),TRUE); /* %expression-name-mark-key */
  scm__rc.d2149[232] = Scm_MakeIdentifier(scm__rc.d2149[233], SCM_MODULE(Scm_GaucheInternalModule()), SCM_NIL); /* gauche.internal#%expression-name-mark-key */
  scm__rc.d2149[234] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[56])),TRUE); /* %original-source */
  scm__rc.d2149[235] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[57])),TRUE); /* original */
  scm__rc.d2149[237] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[58])),TRUE); /* pair-attribute-get */
  scm__rc.d2149[238] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[1]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.vm.code */
  scm__rc.d2149[236] = Scm_MakeIdentifier(scm__rc.d2149[237], SCM_MODULE(scm__rc.d2149[238]), SCM_NIL); /* gauche.vm.code#pair-attribute-get */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[282]), scm__rc.d2149[28]);
  scm__rc.d2149[239] = Scm_MakeExtendedPair(scm__rc.d2149[234], SCM_OBJ(&scm__rc.d2151[262]), SCM_OBJ(&scm__rc.d2151[283]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[284]), scm__rc.d2149[239]);
  scm__rc.d2149[240] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[0])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[0]))->name = scm__rc.d2149[234];/* %original-source */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[0]))->debugInfo = scm__rc.d2149[240];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[0]))[9] = SCM_WORD(scm__rc.d2149[235]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[0]))[12] = SCM_WORD(scm__rc.d2149[236]);
  scm__rc.d2149[241] = Scm_MakeIdentifier(scm__rc.d2149[234], SCM_MODULE(scm__rc.d2149[238]), SCM_NIL); /* gauche.vm.code#%original-source */
  scm__rc.d2149[242] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[59])),TRUE); /* %toplevel */
  scm__rc.d2149[243] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[1])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[1]))->name = scm__rc.d2149[242];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[1]))->debugInfo = scm__rc.d2149[243];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[23]))[3] = SCM_WORD(scm__rc.d2149[232]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[23]))[6] = SCM_WORD(scm__rc.d2149[234]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[23]))[13] = SCM_WORD(scm__rc.d2149[241]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  scm__rc.d2149[244] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[60])),TRUE); /* compiled-code-definition */
  scm__rc.d2149[245] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[61])),TRUE); /* debug-info */
  scm__rc.d2149[247] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[62])),TRUE); /* ~ */
  scm__rc.d2149[249] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[63])),TRUE); /* gauche.internal */
  scm__rc.d2149[248] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[249]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.internal */
  scm__rc.d2149[246] = Scm_MakeIdentifier(scm__rc.d2149[247], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#~ */
  scm__rc.d2149[250] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[64])),TRUE); /* definition */
  scm__rc.d2149[252] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[65])),TRUE); /* assq-ref */
  scm__rc.d2149[251] = Scm_MakeIdentifier(scm__rc.d2149[252], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#assq-ref */
  scm__rc.d2149[254] = SCM_OBJ(Scm_FindModule(SCM_SYMBOL(scm__rc.d2149[1]), SCM_FIND_MODULE_CREATE|SCM_FIND_MODULE_PLACEHOLDING)); /* module gauche.vm.code */
  scm__rc.d2149[253] = Scm_MakeIdentifier(scm__rc.d2149[234], SCM_MODULE(scm__rc.d2149[254]), SCM_NIL); /* gauche.vm.code#%original-source */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[287]), scm__rc.d2149[28]);
  scm__rc.d2149[255] = Scm_MakeExtendedPair(scm__rc.d2149[244], SCM_OBJ(&scm__rc.d2151[26]), SCM_OBJ(&scm__rc.d2151[288]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[289]), scm__rc.d2149[255]);
  scm__rc.d2149[256] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[2])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[2]))->name = scm__rc.d2149[244];/* compiled-code-definition */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[2]))->debugInfo = scm__rc.d2149[256];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]))[6] = SCM_WORD(scm__rc.d2149[245]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]))[8] = SCM_WORD(scm__rc.d2149[246]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]))[11] = SCM_WORD(scm__rc.d2149[250]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]))[13] = SCM_WORD(scm__rc.d2149[251]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]))[21] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]))[23] = SCM_WORD(scm__rc.d2149[251]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[38]))[25] = SCM_WORD(scm__rc.d2149[253]);
  scm__rc.d2149[257] = Scm_MakeIdentifier(scm__rc.d2149[244], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#compiled-code-definition */
  scm__rc.d2149[258] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[3])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[3]))->name = scm__rc.d2149[242];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[3]))->debugInfo = scm__rc.d2149[258];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[65]))[3] = SCM_WORD(scm__rc.d2149[232]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[65]))[6] = SCM_WORD(scm__rc.d2149[244]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[65]))[13] = SCM_WORD(scm__rc.d2149[257]);
  scm__rc.d2149[259] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[66])),TRUE); /* compiled-code-type */
  scm__rc.d2149[260] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[67])),TRUE); /* signature-info */
  scm__rc.d2149[261] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[68])),TRUE); /* type */
  scm__rc.d2149[263] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[69])),TRUE); /* alist-ref */
  scm__rc.d2149[262] = Scm_MakeIdentifier(scm__rc.d2149[263], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#alist-ref */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[292]), scm__rc.d2149[28]);
  scm__rc.d2149[264] = Scm_MakeExtendedPair(scm__rc.d2149[259], SCM_OBJ(&scm__rc.d2151[26]), SCM_OBJ(&scm__rc.d2151[293]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[294]), scm__rc.d2149[264]);
  scm__rc.d2149[265] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[4])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[4]))->name = scm__rc.d2149[259];/* compiled-code-type */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[4]))->debugInfo = scm__rc.d2149[265];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[80]))[4] = SCM_WORD(scm__rc.d2149[260]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[80]))[6] = SCM_WORD(scm__rc.d2149[246]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[80]))[16] = SCM_WORD(scm__rc.d2149[261]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[80]))[18] = SCM_WORD(scm__rc.d2149[262]);
  scm__rc.d2149[266] = Scm_MakeIdentifier(scm__rc.d2149[259], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#compiled-code-type */
  scm__rc.d2149[267] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[5])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[5]))->name = scm__rc.d2149[242];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[5]))->debugInfo = scm__rc.d2149[267];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[100]))[3] = SCM_WORD(scm__rc.d2149[232]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[100]))[6] = SCM_WORD(scm__rc.d2149[259]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[100]))[13] = SCM_WORD(scm__rc.d2149[266]);
  scm__rc.d2149[268] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[70])),TRUE); /* %decode-packed-debug-info */
  scm__rc.d2149[269] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[71])),TRUE); /* code-vector */
  scm__rc.d2149[270] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[72])),TRUE); /* const-vector */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[295]), scm__rc.d2149[270]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[296]), scm__rc.d2149[269]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[299]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[300]), scm__rc.d2149[268]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[301]), scm__rc.d2149[249]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[302]), scm__rc.d2149[29]);
  scm__rc.d2149[271] = Scm_MakeExtendedPair(scm__rc.d2149[268], SCM_OBJ(&scm__rc.d2151[296]), SCM_OBJ(&scm__rc.d2151[304]));
  scm__rc.d2149[272] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[73])),TRUE); /* <u8vector> */
  scm__rc.d2149[273] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[74])),TRUE); /* <vector> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[274]))[3] = scm__rc.d2149[249];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[274]))[4] = scm__rc.d2149[272];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[274]))[5] = scm__rc.d2149[273];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[274]))[6] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[274]))[7] = scm__rc.d2149[42];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("%decode-packed-debug-info")), SCM_OBJ(&libcode_25decode_packed_debug_info__STUB), 0);
  libcode_25decode_packed_debug_info__STUB.common.info = scm__rc.d2149[271];
  libcode_25decode_packed_debug_info__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[274]);
  scm__rc.d2149[282] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[75])),TRUE); /* compiled-code-attach-source-info! */
  scm__rc.d2149[283] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[76])),TRUE); /* full-name */
  scm__rc.d2149[284] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[77])),TRUE); /* arg-info */
  scm__rc.d2149[285] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[78])),TRUE); /* _ */
  scm__rc.d2149[286] = Scm_MakeIdentifier(scm__rc.d2149[237], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#pair-attribute-get */
  scm__rc.d2149[288] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[79])),TRUE); /* extended-cons */
  scm__rc.d2149[287] = Scm_MakeIdentifier(scm__rc.d2149[288], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#extended-cons */
  scm__rc.d2149[290] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[80])),TRUE); /* pair-attribute-set! */
  scm__rc.d2149[289] = Scm_MakeIdentifier(scm__rc.d2149[290], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#pair-attribute-set! */
  scm__rc.d2149[291] = Scm_MakeIdentifier(scm__rc.d2149[24], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#compiled-code-push-info! */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[305]), scm__rc.d2149[261]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[306]), scm__rc.d2149[221]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[307]), scm__rc.d2149[27]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[310]), scm__rc.d2149[28]);
  scm__rc.d2149[292] = Scm_MakeExtendedPair(scm__rc.d2149[282], SCM_OBJ(&scm__rc.d2151[307]), SCM_OBJ(&scm__rc.d2151[311]));
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[312]), scm__rc.d2149[292]);
  scm__rc.d2149[293] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[6])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[6]))->name = scm__rc.d2149[282];/* compiled-code-attach-source-info! */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[6]))->debugInfo = scm__rc.d2149[293];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[7] = SCM_WORD(scm__rc.d2149[253]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[12] = SCM_WORD(scm__rc.d2149[283]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[17] = SCM_WORD(scm__rc.d2149[284]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[19] = SCM_WORD(scm__rc.d2149[285]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[21] = SCM_WORD(scm__rc.d2149[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[23] = SCM_WORD(scm__rc.d2149[287]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[29] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[32] = SCM_WORD(scm__rc.d2149[286]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[41] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[44] = SCM_WORD(scm__rc.d2149[289]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[52] = SCM_WORD(scm__rc.d2149[250]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[54] = SCM_WORD(scm__rc.d2149[28]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[59] = SCM_WORD(scm__rc.d2149[291]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[66] = SCM_WORD(scm__rc.d2149[261]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[76] = SCM_WORD(scm__rc.d2149[260]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[81] = SCM_WORD(scm__rc.d2149[283]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[84] = SCM_WORD(scm__rc.d2149[285]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[115]))[88] = SCM_WORD(scm__rc.d2149[260]);
  scm__rc.d2149[294] = Scm_MakeIdentifier(scm__rc.d2149[282], SCM_MODULE(scm__rc.d2149[248]), SCM_NIL); /* gauche.internal#compiled-code-attach-source-info! */
  scm__rc.d2149[295] = Scm_MakePackedDebugInfo(SCM_U8VECTOR(SCM_OBJ(&scm__rc.d2154[7])),SCM_debug_info_const_vector);
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[7]))->name = scm__rc.d2149[242];/* %toplevel */
  SCM_COMPILED_CODE(SCM_OBJ(&scm__rc.d2153[7]))->debugInfo = scm__rc.d2149[295];
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[205]))[3] = SCM_WORD(scm__rc.d2149[232]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[205]))[6] = SCM_WORD(scm__rc.d2149[282]);
  ((ScmWord*)SCM_OBJ(&scm__rc.d2152[205]))[13] = SCM_WORD(scm__rc.d2149[294]);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheModule())));
  Scm_InitStaticClassWithMeta(&Scm_CompiledCodeClass, "<compiled-code>", SCM_MODULE(SCM_OBJ(Scm_GaucheModule())), NULL, SCM_FALSE, Scm_CompiledCodeClass__SLOTS, 0);
   Scm_SelectModule(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())));
  Scm_InitStaticClassWithMeta(&Scm_PackedDebugInfoClass, "<packed-debug-info>", SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), NULL, SCM_FALSE, Scm_PackedDebugInfoClass__SLOTS, 0);
  scm__rc.d2149[296] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[81])),TRUE); /* decode-packed-debug-info */
  scm__rc.d2149[297] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[82])),TRUE); /* p */
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[313]), scm__rc.d2149[297]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[316]), scm__rc.d2149[28]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[317]), scm__rc.d2149[296]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[318]), scm__rc.d2149[249]);
  SCM_SET_CAR(SCM_OBJ(&scm__rc.d2151[319]), scm__rc.d2149[29]);
  scm__rc.d2149[298] = Scm_MakeExtendedPair(scm__rc.d2149[296], SCM_OBJ(&scm__rc.d2151[313]), SCM_OBJ(&scm__rc.d2151[321]));
  scm__rc.d2149[299] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[83])),TRUE); /* <packed-debug-info> */
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[300]))[3] = scm__rc.d2149[249];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[300]))[4] = scm__rc.d2149[299];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[300]))[5] = scm__rc.d2149[32];
  ((ScmObj*)SCM_OBJ(&scm__rc.d2149[300]))[6] = scm__rc.d2149[42];
  Scm_MakeBinding(SCM_MODULE(SCM_OBJ(Scm_GaucheInternalModule())), SCM_SYMBOL(SCM_INTERN("decode-packed-debug-info")), SCM_OBJ(&libcodedecode_packed_debug_info__STUB), 0);
  libcodedecode_packed_debug_info__STUB.common.info = scm__rc.d2149[298];
  libcodedecode_packed_debug_info__STUB.common.typeHint = SCM_OBJ(&scm__rc.d2149[300]);
  Scm_VMExecuteToplevels(toplevels);
  scm__rc.d2149[345] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[84])),TRUE); /* orig */
  scm__rc.d2149[346] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[85])),TRUE); /* pair? */
  scm__rc.d2149[347] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[86])),TRUE); /* if-let1 */
  scm__rc.d2149[348] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[87])),TRUE); /* def */
  scm__rc.d2149[349] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[88])),TRUE); /* and-let1 */
  scm__rc.d2149[350] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[89])),TRUE); /* sig */
  scm__rc.d2149[351] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[90])),TRUE); /* and-let* */
  scm__rc.d2149[352] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[91])),TRUE); /* slot-set! */
  scm__rc.d2149[353] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[92])),TRUE); /* slot-ref */
  scm__rc.d2149[354] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[93])),TRUE); /* cond-list */
  scm__rc.d2149[355] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[94])),TRUE); /* quasiquote */
  scm__rc.d2149[356] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[95])),TRUE); /* unquote */
  scm__rc.d2149[357] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[96])),TRUE); /* r */
  scm__rc.d2149[358] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[97])),TRUE); /* tmp */
  scm__rc.d2149[359] = Scm_MakeSymbol(SCM_STRING(SCM_OBJ(&scm__sc.d2150[98])),TRUE); /* si */
}
